#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_764(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_76c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x763,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x763,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_763(u8* __restrict R,Cpu& c);
u32 page_763(Cpu& c){return body_763(c.regs.data(),c);}
__attribute__((noinline)) u32 body_763(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x763001:goto L763001;
case 0x763004:c.instructions+=2;goto B763004;
case 0x763006:c.instructions+=1;goto B763006;
case 0x76300b:goto L76300b;
case 0x76300c:c.instructions+=1;goto B76300c;
case 0x76300d:goto L76300d;
case 0x76300f:c.instructions+=2;goto B76300f;
case 0x763012:c.instructions+=1;goto B763012;
case 0x763014:goto L763014;
case 0x763016:c.instructions+=1;goto B763016;
case 0x763018:goto L763018;
case 0x76301a:c.instructions+=1;goto B76301a;
case 0x76301b:goto L76301b;
case 0x76301c:c.instructions+=4;goto B76301c;
case 0x76301d:c.instructions+=3;goto B76301d;
case 0x76301e:c.instructions+=2;goto B76301e;
case 0x763024:c.instructions+=1;goto B763024;
case 0x76302a:goto L76302a;
case 0x76302c:c.instructions+=1;goto B76302c;
case 0x76302e:goto L76302e;
case 0x763034:c.instructions+=1;goto B763034;
case 0x763036:goto L763036;
case 0x763037:c.instructions+=1;goto B763037;
case 0x76303c:goto L76303c;
case 0x76303d:c.instructions+=2;goto B76303d;
case 0x76303f:c.instructions+=1;goto B76303f;
case 0x763041:goto L763041;
case 0x763043:goto L763043;
case 0x763048:goto L763048;
case 0x763049:goto L763049;
case 0x76304b:c.instructions+=2;goto B76304b;
case 0x763050:c.instructions+=1;goto B763050;
case 0x763055:goto L763055;
case 0x76305c:c.instructions+=1;goto B76305c;
case 0x76305e:goto L76305e;
case 0x763060:c.instructions+=1;goto B763060;
case 0x763065:goto L763065;
case 0x763066:c.instructions+=4;goto B763066;
case 0x76306a:c.instructions+=3;goto B76306a;
case 0x76306d:c.instructions+=2;goto B76306d;
case 0x76306e:c.instructions+=1;goto B76306e;
case 0x763073:goto L763073;
case 0x763074:c.instructions+=3;goto B763074;
case 0x763077:c.instructions+=2;goto B763077;
case 0x763079:c.instructions+=1;goto B763079;
case 0x76307b:goto L76307b;
case 0x76307e:c.instructions+=3;goto B76307e;
case 0x763081:c.instructions+=2;goto B763081;
case 0x763084:c.instructions+=1;goto B763084;
case 0x763086:goto L763086;
case 0x763089:goto L763089;
case 0x76308d:c.instructions+=1;goto B76308d;
case 0x763092:goto L763092;
case 0x763096:c.instructions+=1;goto B763096;
case 0x763098:goto L763098;
case 0x76309b:c.instructions+=3;goto B76309b;
case 0x76309d:c.instructions+=2;goto B76309d;
case 0x7630a3:c.instructions+=1;goto B7630a3;
case 0x7630a9:goto L7630a9;
case 0x7630ab:goto L7630ab;
case 0x7630ad:c.instructions+=1;goto B7630ad;
case 0x7630b2:goto L7630b2;
case 0x7630b6:goto L7630b6;
case 0x7630b8:c.instructions+=1;goto B7630b8;
case 0x7630bd:goto L7630bd;
case 0x7630be:c.instructions+=1;goto B7630be;
case 0x7630bf:goto L7630bf;
case 0x7630c0:c.instructions+=3;goto B7630c0;
case 0x7630c1:c.instructions+=2;goto B7630c1;
case 0x7630c3:c.instructions+=1;goto B7630c3;
case 0x7630c8:goto L7630c8;
case 0x7630d0:c.instructions+=1;goto B7630d0;
case 0x7630d2:goto L7630d2;
case 0x7630d9:c.instructions+=5;goto B7630d9;
case 0x7630db:c.instructions+=4;goto B7630db;
case 0x7630e0:c.instructions+=3;goto B7630e0;
case 0x7630e2:c.instructions+=2;goto B7630e2;
case 0x7630e5:c.instructions+=1;goto B7630e5;
case 0x7630ea:goto L7630ea;
case 0x7630ec:c.instructions+=3;goto B7630ec;
case 0x7630ed:c.instructions+=2;goto B7630ed;
case 0x7630ee:c.instructions+=1;goto B7630ee;
case 0x7630f0:goto L7630f0;
case 0x7630f1:c.instructions+=2;goto B7630f1;
case 0x7630f4:c.instructions+=1;goto B7630f4;
case 0x7630f6:goto L7630f6;
case 0x7630f8:c.instructions+=1;goto B7630f8;
case 0x7630f9:goto L7630f9;
case 0x7630fa:c.instructions+=2;goto B7630fa;
case 0x7630fb:c.instructions+=1;goto B7630fb;
case 0x7630fc:goto L7630fc;
case 0x763104:c.instructions+=2;goto B763104;
case 0x763106:c.instructions+=1;goto B763106;
case 0x763108:goto L763108;
case 0x763109:c.instructions+=4;goto B763109;
case 0x76310f:c.instructions+=3;goto B76310f;
case 0x763110:c.instructions+=2;goto B763110;
case 0x763115:c.instructions+=1;goto B763115;
case 0x763116:goto L763116;
case 0x763118:c.instructions+=2;goto B763118;
case 0x76311a:c.instructions+=1;goto B76311a;
case 0x76311c:goto L76311c;
case 0x763120:c.instructions+=1;goto B763120;
case 0x763122:goto L763122;
case 0x763123:c.instructions+=1;goto B763123;
case 0x763125:goto L763125;
case 0x763126:c.instructions+=1;goto B763126;
case 0x76312b:goto L76312b;
case 0x76312e:c.instructions+=1;goto B76312e;
case 0x76312f:goto L76312f;
case 0x763132:c.instructions+=2;goto B763132;
case 0x763138:c.instructions+=1;goto B763138;
case 0x76313a:goto L76313a;
case 0x76313f:c.instructions+=1;goto B76313f;
case 0x763140:goto L763140;
case 0x763142:c.instructions+=2;goto B763142;
case 0x763144:c.instructions+=1;goto B763144;
case 0x763146:goto L763146;
case 0x76314a:c.instructions+=1;goto B76314a;
case 0x76314c:goto L76314c;
case 0x76314d:c.instructions+=1;goto B76314d;
case 0x76314f:goto L76314f;
case 0x763152:c.instructions+=2;goto B763152;
case 0x763158:c.instructions+=1;goto B763158;
case 0x76315a:goto L76315a;
case 0x76315b:c.instructions+=2;goto B76315b;
case 0x76315c:c.instructions+=1;goto B76315c;
case 0x76315d:goto L76315d;
case 0x76315e:c.instructions+=4;goto B76315e;
case 0x763160:c.instructions+=3;goto B763160;
case 0x763163:c.instructions+=2;goto B763163;
case 0x76316a:c.instructions+=1;goto B76316a;
case 0x763170:goto L763170;
case 0x763171:c.instructions+=1;goto B763171;
case 0x763172:goto L763172;
case 0x763173:c.instructions+=6;goto B763173;
case 0x763175:c.instructions+=5;goto B763175;
case 0x763176:c.instructions+=4;goto B763176;
case 0x763179:c.instructions+=3;goto B763179;
case 0x763180:c.instructions+=2;goto B763180;
case 0x763183:c.instructions+=1;goto B763183;
case 0x763185:goto L763185;
case 0x763187:c.instructions+=2;goto B763187;
case 0x763188:c.instructions+=1;goto B763188;
case 0x76318a:goto L76318a;
case 0x76318b:c.instructions+=2;goto B76318b;
case 0x76318d:c.instructions+=1;goto B76318d;
case 0x763192:goto L763192;
case 0x763194:c.instructions+=3;goto B763194;
case 0x763196:c.instructions+=2;goto B763196;
case 0x763197:c.instructions+=1;goto B763197;
case 0x763199:goto L763199;
case 0x76319e:goto L76319e;
case 0x7631a4:c.instructions+=2;goto B7631a4;
case 0x7631a6:c.instructions+=1;goto B7631a6;
case 0x7631a8:goto L7631a8;
case 0x7631aa:c.instructions+=1;goto B7631aa;
case 0x7631af:goto L7631af;
case 0x7631b2:c.instructions+=2;goto B7631b2;
case 0x7631b3:c.instructions+=1;goto B7631b3;
case 0x7631b5:goto L7631b5;
case 0x7631ba:c.instructions+=2;goto B7631ba;
case 0x7631bb:c.instructions+=1;goto B7631bb;
case 0x7631c0:goto L7631c0;
case 0x7631c2:c.instructions+=3;goto B7631c2;
case 0x7631c3:c.instructions+=2;goto B7631c3;
case 0x7631c4:c.instructions+=1;goto B7631c4;
case 0x7631c6:goto L7631c6;
case 0x7631c7:c.instructions+=1;goto B7631c7;
case 0x7631cc:goto L7631cc;
case 0x7631ce:c.instructions+=1;goto B7631ce;
case 0x7631d3:goto L7631d3;
case 0x7631d4:c.instructions+=2;goto B7631d4;
case 0x7631d5:c.instructions+=1;goto B7631d5;
case 0x7631d7:goto L7631d7;
case 0x7631d9:c.instructions+=1;goto B7631d9;
case 0x7631db:goto L7631db;
case 0x7631dc:c.instructions+=1;goto B7631dc;
case 0x7631e1:goto L7631e1;
case 0x7631e2:goto L7631e2;
case 0x7631e4:c.instructions+=1;goto B7631e4;
case 0x7631e9:goto L7631e9;
case 0x7631eb:c.instructions+=2;goto B7631eb;
case 0x7631ec:c.instructions+=1;goto B7631ec;
case 0x7631ed:goto L7631ed;
case 0x7631ee:goto L7631ee;
case 0x7631ef:c.instructions+=2;goto B7631ef;
case 0x7631f0:c.instructions+=1;goto B7631f0;
case 0x7631f1:goto L7631f1;
case 0x7631f2:c.instructions+=6;goto B7631f2;
case 0x7631f4:c.instructions+=5;goto B7631f4;
case 0x7631f7:c.instructions+=4;goto B7631f7;
case 0x7631f8:c.instructions+=3;goto B7631f8;
case 0x7631ff:c.instructions+=2;goto B7631ff;
case 0x763202:c.instructions+=1;goto B763202;
case 0x763204:goto L763204;
case 0x763205:c.instructions+=1;goto B763205;
case 0x76320a:goto L76320a;
case 0x76320c:c.instructions+=2;goto B76320c;
case 0x76320d:c.instructions+=1;goto B76320d;
case 0x76320f:goto L76320f;
case 0x763211:c.instructions+=1;goto B763211;
case 0x763216:goto L763216;
case 0x763217:goto L763217;
case 0x763219:c.instructions+=1;goto B763219;
case 0x76321f:goto L76321f;
case 0x763220:c.instructions+=2;goto B763220;
case 0x763221:c.instructions+=1;goto B763221;
case 0x763222:goto L763222;
case 0x763227:c.instructions+=3;goto B763227;
case 0x763229:c.instructions+=2;goto B763229;
case 0x76322f:c.instructions+=1;goto B76322f;
case 0x763235:goto L763235;
case 0x763237:c.instructions+=2;goto B763237;
case 0x76323c:c.instructions+=1;goto B76323c;
case 0x76323e:goto L76323e;
case 0x76323f:goto L76323f;
case 0x763243:c.instructions+=8;goto B763243;
case 0x76324a:c.instructions+=7;goto B76324a;
case 0x763251:c.instructions+=6;goto B763251;
case 0x763256:c.instructions+=5;goto B763256;
case 0x763258:c.instructions+=4;goto B763258;
case 0x76325e:c.instructions+=3;goto B76325e;
case 0x763268:c.instructions+=2;goto B763268;
case 0x763269:c.instructions+=1;goto B763269;
case 0x76326a:goto L76326a;
case 0x76326f:c.instructions+=4;goto B76326f;
case 0x763272:c.instructions+=3;goto B763272;
case 0x763277:c.instructions+=2;goto B763277;
case 0x76327a:c.instructions+=1;goto B76327a;
case 0x76327c:goto L76327c;
case 0x763280:c.instructions+=3;goto B763280;
case 0x763283:c.instructions+=2;goto B763283;
case 0x763289:c.instructions+=1;goto B763289;
case 0x76328b:goto L76328b;
case 0x76328e:goto L76328e;
case 0x763290:c.instructions+=1;goto B763290;
case 0x763292:goto L763292;
case 0x763294:goto L763294;
case 0x763295:goto L763295;
case 0x763296:c.instructions+=20;goto B763296;
case 0x763298:c.instructions+=19;goto B763298;
case 0x76329b:c.instructions+=18;goto B76329b;
case 0x76329e:c.instructions+=17;goto B76329e;
case 0x7632a1:c.instructions+=16;goto B7632a1;
case 0x7632a2:c.instructions+=15;goto B7632a2;
case 0x7632a5:c.instructions+=14;goto B7632a5;
case 0x7632a6:c.instructions+=13;goto B7632a6;
case 0x7632a8:c.instructions+=12;goto B7632a8;
case 0x7632ab:c.instructions+=11;goto B7632ab;
case 0x7632ae:c.instructions+=10;goto B7632ae;
case 0x7632b1:c.instructions+=9;goto B7632b1;
case 0x7632b3:c.instructions+=8;goto B7632b3;
case 0x7632b9:c.instructions+=7;goto B7632b9;
case 0x7632c0:c.instructions+=6;goto B7632c0;
case 0x7632c3:c.instructions+=5;goto B7632c3;
case 0x7632c5:c.instructions+=4;goto B7632c5;
case 0x7632c6:c.instructions+=3;goto B7632c6;
case 0x7632c9:c.instructions+=2;goto B7632c9;
case 0x7632cc:c.instructions+=1;goto B7632cc;
case 0x7632d2:goto L7632d2;
case 0x7632d3:c.instructions+=9;goto B7632d3;
case 0x7632d6:c.instructions+=8;goto B7632d6;
case 0x7632d8:c.instructions+=7;goto B7632d8;
case 0x7632db:c.instructions+=6;goto B7632db;
case 0x7632de:c.instructions+=5;goto B7632de;
case 0x7632e1:c.instructions+=4;goto B7632e1;
case 0x7632e4:c.instructions+=3;goto B7632e4;
case 0x7632e7:c.instructions+=2;goto B7632e7;
case 0x7632ea:c.instructions+=1;goto B7632ea;
case 0x7632ec:goto L7632ec;
case 0x7632ef:c.instructions+=3;goto B7632ef;
case 0x7632f0:c.instructions+=2;goto B7632f0;
case 0x7632f3:c.instructions+=1;goto B7632f3;
case 0x7632f5:goto L7632f5;
case 0x7632f7:c.instructions+=1;goto B7632f7;
case 0x7632f8:goto L7632f8;
case 0x7632fb:c.instructions+=2;goto B7632fb;
case 0x7632fe:c.instructions+=1;goto B7632fe;
case 0x763300:goto L763300;
case 0x763303:c.instructions+=2;goto B763303;
case 0x763308:c.instructions+=1;goto B763308;
case 0x76330a:goto L76330a;
case 0x76330c:c.instructions+=6;goto B76330c;
case 0x76330e:c.instructions+=5;goto B76330e;
case 0x763312:c.instructions+=4;goto B763312;
case 0x763314:c.instructions+=3;goto B763314;
case 0x763318:c.instructions+=2;goto B763318;
case 0x76331a:c.instructions+=1;goto B76331a;
case 0x76331c:goto L76331c;
case 0x76331f:c.instructions+=2;goto B76331f;
case 0x763321:c.instructions+=1;goto B763321;
case 0x763323:goto L763323;
case 0x763326:c.instructions+=6;goto B763326;
case 0x763328:c.instructions+=5;goto B763328;
case 0x76332c:c.instructions+=4;goto B76332c;
case 0x76332e:c.instructions+=3;goto B76332e;
case 0x763335:c.instructions+=2;goto B763335;
case 0x763337:c.instructions+=1;goto B763337;
case 0x763339:goto L763339;
case 0x76333c:c.instructions+=1;goto B76333c;
case 0x76333f:goto L76333f;
case 0x763342:goto L763342;
case 0x763345:c.instructions+=9;goto B763345;
case 0x763348:c.instructions+=8;goto B763348;
case 0x76334b:c.instructions+=7;goto B76334b;
case 0x76334e:c.instructions+=6;goto B76334e;
case 0x763351:c.instructions+=5;goto B763351;
case 0x763354:c.instructions+=4;goto B763354;
case 0x763357:c.instructions+=3;goto B763357;
case 0x76335a:c.instructions+=2;goto B76335a;
case 0x76335d:c.instructions+=1;goto B76335d;
case 0x763360:goto L763360;
case 0x763362:c.instructions+=4;goto B763362;
case 0x763365:c.instructions+=3;goto B763365;
case 0x763366:c.instructions+=2;goto B763366;
case 0x763369:c.instructions+=1;goto B763369;
case 0x76336b:goto L76336b;
case 0x76336d:c.instructions+=1;goto B76336d;
case 0x76336e:goto L76336e;
case 0x763371:c.instructions+=3;goto B763371;
case 0x763374:c.instructions+=2;goto B763374;
case 0x763377:c.instructions+=1;goto B763377;
case 0x76337d:goto L76337d;
case 0x763380:c.instructions+=8;goto B763380;
case 0x763383:c.instructions+=7;goto B763383;
case 0x763386:c.instructions+=6;goto B763386;
case 0x763388:c.instructions+=5;goto B763388;
case 0x76338b:c.instructions+=4;goto B76338b;
case 0x76338c:c.instructions+=3;goto B76338c;
case 0x76338d:c.instructions+=2;goto B76338d;
case 0x76338f:c.instructions+=1;goto B76338f;
case 0x763391:goto L763391;
case 0x763393:goto L763393;
case 0x763396:c.instructions+=6;goto B763396;
case 0x763398:c.instructions+=5;goto B763398;
case 0x76339b:c.instructions+=4;goto B76339b;
case 0x76339c:c.instructions+=3;goto B76339c;
case 0x76339e:c.instructions+=2;goto B76339e;
case 0x7633a1:c.instructions+=1;goto B7633a1;
case 0x7633a3:goto L7633a3;
case 0x7633a5:goto L7633a5;
case 0x7633a7:c.instructions+=1;goto B7633a7;
case 0x7633a9:goto L7633a9;
case 0x7633ac:c.instructions+=3;goto B7633ac;
case 0x7633af:c.instructions+=2;goto B7633af;
case 0x7633b2:c.instructions+=1;goto B7633b2;
case 0x7633b4:goto L7633b4;
case 0x7633b7:c.instructions+=2;goto B7633b7;
case 0x7633bc:c.instructions+=1;goto B7633bc;
case 0x7633be:goto L7633be;
case 0x7633c0:c.instructions+=5;goto B7633c0;
case 0x7633c2:c.instructions+=4;goto B7633c2;
case 0x7633c4:c.instructions+=3;goto B7633c4;
case 0x7633c8:c.instructions+=2;goto B7633c8;
case 0x7633cc:c.instructions+=1;goto B7633cc;
case 0x7633ce:goto L7633ce;
case 0x7633d1:c.instructions+=2;goto B7633d1;
case 0x7633d3:c.instructions+=1;goto B7633d3;
case 0x7633d5:goto L7633d5;
case 0x7633d8:c.instructions+=5;goto B7633d8;
case 0x7633da:c.instructions+=4;goto B7633da;
case 0x7633dc:c.instructions+=3;goto B7633dc;
case 0x7633e3:c.instructions+=2;goto B7633e3;
case 0x7633e7:c.instructions+=1;goto B7633e7;
case 0x7633e9:goto L7633e9;
case 0x7633ec:c.instructions+=1;goto B7633ec;
case 0x7633ef:goto L7633ef;
case 0x7633f2:c.instructions+=7;goto B7633f2;
case 0x7633f5:c.instructions+=6;goto B7633f5;
case 0x7633f8:c.instructions+=5;goto B7633f8;
case 0x7633fb:c.instructions+=4;goto B7633fb;
case 0x7633fe:c.instructions+=3;goto B7633fe;
case 0x763401:c.instructions+=2;goto B763401;
case 0x763404:c.instructions+=1;goto B763404;
case 0x763407:goto L763407;
case 0x76340a:c.instructions+=1;goto B76340a;
case 0x76340c:goto L76340c;
case 0x76340f:goto L76340f;
case 0x763413:c.instructions+=1;goto B763413;
case 0x763415:goto L763415;
case 0x763417:c.instructions+=1;goto B763417;
case 0x76341d:goto L76341d;
case 0x763420:c.instructions+=10;goto B763420;
case 0x763423:c.instructions+=9;goto B763423;
case 0x763426:c.instructions+=8;goto B763426;
case 0x763429:c.instructions+=7;goto B763429;
case 0x76342c:c.instructions+=6;goto B76342c;
case 0x76342f:c.instructions+=5;goto B76342f;
case 0x763432:c.instructions+=4;goto B763432;
case 0x763435:c.instructions+=3;goto B763435;
case 0x763438:c.instructions+=2;goto B763438;
case 0x76343b:c.instructions+=1;goto B76343b;
case 0x76343d:goto L76343d;
case 0x763441:c.instructions+=5;goto B763441;
case 0x763444:c.instructions+=4;goto B763444;
case 0x763446:c.instructions+=3;goto B763446;
case 0x763449:c.instructions+=2;goto B763449;
case 0x76344d:c.instructions+=1;goto B76344d;
case 0x76344f:goto L76344f;
case 0x763453:c.instructions+=1;goto B763453;
case 0x763455:goto L763455;
case 0x763457:c.instructions+=4;goto B763457;
case 0x76345c:c.instructions+=3;goto B76345c;
case 0x76345e:c.instructions+=2;goto B76345e;
case 0x763461:c.instructions+=1;goto B763461;
case 0x763463:goto L763463;
case 0x763468:c.instructions+=5;goto B763468;
case 0x76346a:c.instructions+=4;goto B76346a;
case 0x76346c:c.instructions+=3;goto B76346c;
case 0x763470:c.instructions+=2;goto B763470;
case 0x763472:c.instructions+=1;goto B763472;
case 0x763474:goto L763474;
case 0x763478:c.instructions+=1;goto B763478;
case 0x76347a:goto L76347a;
case 0x76347d:c.instructions+=4;goto B76347d;
case 0x763482:c.instructions+=3;goto B763482;
case 0x763484:c.instructions+=2;goto B763484;
case 0x763487:c.instructions+=1;goto B763487;
case 0x76348a:goto L76348a;
case 0x76348d:c.instructions+=4;goto B76348d;
case 0x763492:c.instructions+=3;goto B763492;
case 0x763494:c.instructions+=2;goto B763494;
case 0x76349b:c.instructions+=1;goto B76349b;
case 0x76349d:goto L76349d;
case 0x7634a0:c.instructions+=5;goto B7634a0;
case 0x7634a2:c.instructions+=4;goto B7634a2;
case 0x7634a6:c.instructions+=3;goto B7634a6;
case 0x7634a9:c.instructions+=2;goto B7634a9;
case 0x7634ab:c.instructions+=1;goto B7634ab;
case 0x7634b1:goto L7634b1;
case 0x7634b6:c.instructions+=2;goto B7634b6;
case 0x7634b8:c.instructions+=1;goto B7634b8;
case 0x7634be:goto L7634be;
case 0x7634c4:c.instructions+=8;goto B7634c4;
case 0x7634ca:c.instructions+=7;goto B7634ca;
case 0x7634cf:c.instructions+=6;goto B7634cf;
case 0x7634d2:c.instructions+=5;goto B7634d2;
case 0x7634d5:c.instructions+=4;goto B7634d5;
case 0x7634da:c.instructions+=3;goto B7634da;
case 0x7634db:c.instructions+=2;goto B7634db;
case 0x7634dc:c.instructions+=1;goto B7634dc;
case 0x7634de:goto L7634de;
case 0x7634e4:c.instructions+=15;goto B7634e4;
case 0x7634e9:c.instructions+=14;goto B7634e9;
case 0x7634ee:c.instructions+=13;goto B7634ee;
case 0x7634f0:c.instructions+=12;goto B7634f0;
case 0x7634f3:c.instructions+=11;goto B7634f3;
case 0x7634f8:c.instructions+=10;goto B7634f8;
case 0x7634fb:c.instructions+=9;goto B7634fb;
case 0x763501:c.instructions+=8;goto B763501;
case 0x763509:c.instructions+=7;goto B763509;
case 0x76350e:c.instructions+=6;goto B76350e;
case 0x763511:c.instructions+=5;goto B763511;
case 0x763514:c.instructions+=4;goto B763514;
case 0x763519:c.instructions+=3;goto B763519;
case 0x76351c:c.instructions+=2;goto B76351c;
case 0x763520:c.instructions+=1;goto B763520;
case 0x763522:goto L763522;
case 0x763526:c.instructions+=1;goto B763526;
case 0x76352b:goto L76352b;
case 0x76352f:c.instructions+=1;goto B76352f;
case 0x763531:goto L763531;
case 0x763532:c.instructions+=3;goto B763532;
case 0x763534:c.instructions+=2;goto B763534;
case 0x763537:c.instructions+=1;goto B763537;
case 0x763539:goto L763539;
case 0x76353e:c.instructions+=4;goto B76353e;
case 0x763541:c.instructions+=3;goto B763541;
case 0x763543:c.instructions+=2;goto B763543;
case 0x763549:c.instructions+=1;goto B763549;
case 0x76354f:goto L76354f;
case 0x763554:c.instructions+=12;goto B763554;
case 0x76355a:c.instructions+=11;goto B76355a;
case 0x76355d:c.instructions+=10;goto B76355d;
case 0x763560:c.instructions+=9;goto B763560;
case 0x763562:c.instructions+=8;goto B763562;
case 0x763567:c.instructions+=7;goto B763567;
case 0x763569:c.instructions+=6;goto B763569;
case 0x76356d:c.instructions+=5;goto B76356d;
case 0x76356e:c.instructions+=4;goto B76356e;
case 0x763571:c.instructions+=3;goto B763571;
case 0x763572:c.instructions+=2;goto B763572;
case 0x763573:c.instructions+=1;goto B763573;
case 0x763578:goto L763578;
case 0x76357b:c.instructions+=4;goto B76357b;
case 0x76357e:c.instructions+=3;goto B76357e;
case 0x763584:c.instructions+=2;goto B763584;
case 0x76358a:c.instructions+=1;goto B76358a;
case 0x76358c:goto L76358c;
case 0x763590:goto L763590;
case 0x763595:c.instructions+=1;goto B763595;
case 0x76359a:goto L76359a;
case 0x76359d:c.instructions+=2;goto B76359d;
case 0x7635a2:c.instructions+=1;goto B7635a2;
case 0x7635a8:goto L7635a8;
case 0x7635a9:goto L7635a9;
case 0x7635aa:c.instructions+=3;goto B7635aa;
case 0x7635ab:c.instructions+=2;goto B7635ab;
case 0x7635ac:c.instructions+=1;goto B7635ac;
case 0x7635ad:goto L7635ad;
case 0x7635b2:c.instructions+=5;goto B7635b2;
case 0x7635b8:c.instructions+=4;goto B7635b8;
case 0x7635b9:c.instructions+=3;goto B7635b9;
case 0x7635bb:c.instructions+=2;goto B7635bb;
case 0x7635bd:c.instructions+=1;goto B7635bd;
case 0x7635bf:goto L7635bf;
case 0x7635c3:c.instructions+=6;goto B7635c3;
case 0x7635c6:c.instructions+=5;goto B7635c6;
case 0x7635c7:c.instructions+=4;goto B7635c7;
case 0x7635cd:c.instructions+=3;goto B7635cd;
case 0x7635ce:c.instructions+=2;goto B7635ce;
case 0x7635d4:c.instructions+=1;goto B7635d4;
case 0x7635da:goto L7635da;
case 0x7635dc:c.instructions+=1;goto B7635dc;
case 0x7635de:goto L7635de;
case 0x7635e0:c.instructions+=2;goto B7635e0;
case 0x7635e1:c.instructions+=1;goto B7635e1;
case 0x7635e2:goto L7635e2;
case 0x7635e9:c.instructions+=2;goto B7635e9;
case 0x7635ee:c.instructions+=1;goto B7635ee;
case 0x7635f3:goto L7635f3;
case 0x7635f9:c.instructions+=7;goto B7635f9;
case 0x7635fa:c.instructions+=6;goto B7635fa;
case 0x7635ff:c.instructions+=5;goto B7635ff;
case 0x763601:c.instructions+=4;goto B763601;
case 0x763607:c.instructions+=3;goto B763607;
case 0x76360a:c.instructions+=2;goto B76360a;
case 0x76360d:c.instructions+=1;goto B76360d;
case 0x763613:goto L763613;
case 0x763615:c.instructions+=2;goto B763615;
case 0x763618:c.instructions+=1;goto B763618;
case 0x76361a:goto L76361a;
case 0x76361c:c.instructions+=1;goto B76361c;
case 0x76361e:goto L76361e;
case 0x763620:c.instructions+=4;goto B763620;
case 0x763625:c.instructions+=3;goto B763625;
case 0x76362a:c.instructions+=2;goto B76362a;
case 0x76362b:c.instructions+=1;goto B76362b;
case 0x763631:goto L763631;
case 0x763633:c.instructions+=2;goto B763633;
case 0x763636:c.instructions+=1;goto B763636;
case 0x763638:goto L763638;
case 0x76363b:c.instructions+=3;goto B76363b;
case 0x76363c:c.instructions+=2;goto B76363c;
case 0x763642:c.instructions+=1;goto B763642;
case 0x763648:goto L763648;
case 0x76364a:goto L76364a;
case 0x76364e:c.instructions+=6;goto B76364e;
case 0x763650:c.instructions+=5;goto B763650;
case 0x763653:c.instructions+=4;goto B763653;
case 0x763659:c.instructions+=3;goto B763659;
case 0x76365c:c.instructions+=2;goto B76365c;
case 0x76365f:c.instructions+=1;goto B76365f;
case 0x763661:goto L763661;
case 0x763662:c.instructions+=2;goto B763662;
case 0x763663:c.instructions+=1;goto B763663;
case 0x763664:goto L763664;
case 0x763665:c.instructions+=11;goto B763665;
case 0x763667:c.instructions+=10;goto B763667;
case 0x763668:c.instructions+=9;goto B763668;
case 0x763669:c.instructions+=8;goto B763669;
case 0x76366c:c.instructions+=7;goto B76366c;
case 0x76366f:c.instructions+=6;goto B76366f;
case 0x763670:c.instructions+=5;goto B763670;
case 0x763671:c.instructions+=4;goto B763671;
case 0x763674:c.instructions+=3;goto B763674;
case 0x763675:c.instructions+=2;goto B763675;
case 0x763677:c.instructions+=1;goto B763677;
case 0x763679:goto L763679;
case 0x76367b:c.instructions+=1;goto B76367b;
case 0x76367c:goto L76367c;
case 0x76367e:c.instructions+=1;goto B76367e;
case 0x763680:goto L763680;
case 0x763682:c.instructions+=5;goto B763682;
case 0x763688:c.instructions+=4;goto B763688;
case 0x76368f:c.instructions+=3;goto B76368f;
case 0x763691:c.instructions+=2;goto B763691;
case 0x763694:c.instructions+=1;goto B763694;
case 0x763695:goto L763695;
case 0x763698:c.instructions+=4;goto B763698;
case 0x76369b:c.instructions+=3;goto B76369b;
case 0x76369e:c.instructions+=2;goto B76369e;
case 0x76369f:c.instructions+=1;goto B76369f;
case 0x7636a1:goto L7636a1;
case 0x7636a3:c.instructions+=7;goto B7636a3;
case 0x7636a5:c.instructions+=6;goto B7636a5;
case 0x7636aa:c.instructions+=5;goto B7636aa;
case 0x7636ad:c.instructions+=4;goto B7636ad;
case 0x7636b0:c.instructions+=3;goto B7636b0;
case 0x7636b5:c.instructions+=2;goto B7636b5;
case 0x7636b6:c.instructions+=1;goto B7636b6;
case 0x7636bc:goto L7636bc;
case 0x7636be:c.instructions+=1;goto B7636be;
case 0x7636c0:goto L7636c0;
case 0x7636c3:c.instructions+=1;goto B7636c3;
case 0x7636c8:goto L7636c8;
case 0x7636ce:c.instructions+=3;goto B7636ce;
case 0x7636d0:c.instructions+=2;goto B7636d0;
case 0x7636d3:c.instructions+=1;goto B7636d3;
case 0x7636d5:goto L7636d5;
case 0x7636d7:c.instructions+=4;goto B7636d7;
case 0x7636d9:c.instructions+=3;goto B7636d9;
case 0x7636dc:c.instructions+=2;goto B7636dc;
case 0x7636df:c.instructions+=1;goto B7636df;
case 0x7636e0:goto L7636e0;
case 0x7636e4:c.instructions+=10;goto B7636e4;
case 0x7636eb:c.instructions+=9;goto B7636eb;
case 0x7636f1:c.instructions+=8;goto B7636f1;
case 0x7636f3:c.instructions+=7;goto B7636f3;
case 0x7636f9:c.instructions+=6;goto B7636f9;
case 0x763700:c.instructions+=5;goto B763700;
case 0x763703:c.instructions+=4;goto B763703;
case 0x76370d:c.instructions+=3;goto B76370d;
case 0x763712:c.instructions+=2;goto B763712;
case 0x763713:c.instructions+=1;goto B763713;
case 0x763715:goto L763715;
case 0x763718:goto L763718;
case 0x76371b:c.instructions+=18;goto B76371b;
case 0x763720:c.instructions+=17;goto B763720;
case 0x763723:c.instructions+=16;goto B763723;
case 0x763726:c.instructions+=15;goto B763726;
case 0x763729:c.instructions+=14;goto B763729;
case 0x76372c:c.instructions+=13;goto B76372c;
case 0x76372f:c.instructions+=12;goto B76372f;
case 0x763732:c.instructions+=11;goto B763732;
case 0x763737:c.instructions+=10;goto B763737;
case 0x763739:c.instructions+=9;goto B763739;
case 0x76373a:c.instructions+=8;goto B76373a;
case 0x763741:c.instructions+=7;goto B763741;
case 0x763744:c.instructions+=6;goto B763744;
case 0x763746:c.instructions+=5;goto B763746;
case 0x763748:c.instructions+=4;goto B763748;
case 0x76374a:c.instructions+=3;goto B76374a;
case 0x76374d:c.instructions+=2;goto B76374d;
case 0x763750:c.instructions+=1;goto B763750;
case 0x763752:goto L763752;
case 0x763755:goto L763755;
case 0x76375a:c.instructions+=5;goto B76375a;
case 0x76375c:c.instructions+=4;goto B76375c;
case 0x76375e:c.instructions+=3;goto B76375e;
case 0x763760:c.instructions+=2;goto B763760;
case 0x763763:c.instructions+=1;goto B763763;
case 0x763765:goto L763765;
case 0x763766:c.instructions+=4;goto B763766;
case 0x763767:c.instructions+=3;goto B763767;
case 0x763768:c.instructions+=2;goto B763768;
case 0x763769:c.instructions+=1;goto B763769;
case 0x76376a:goto L76376a;
case 0x76376b:c.instructions+=26;goto B76376b;
case 0x76376d:c.instructions+=25;goto B76376d;
case 0x763770:c.instructions+=24;goto B763770;
case 0x763773:c.instructions+=23;goto B763773;
case 0x763776:c.instructions+=22;goto B763776;
case 0x763777:c.instructions+=21;goto B763777;
case 0x763778:c.instructions+=20;goto B763778;
case 0x76377b:c.instructions+=19;goto B76377b;
case 0x76377c:c.instructions+=18;goto B76377c;
case 0x76377f:c.instructions+=17;goto B76377f;
case 0x763781:c.instructions+=16;goto B763781;
case 0x763784:c.instructions+=15;goto B763784;
case 0x763787:c.instructions+=14;goto B763787;
case 0x76378a:c.instructions+=13;goto B76378a;
case 0x76378c:c.instructions+=12;goto B76378c;
case 0x763792:c.instructions+=11;goto B763792;
case 0x763799:c.instructions+=10;goto B763799;
case 0x76379c:c.instructions+=9;goto B76379c;
case 0x76379f:c.instructions+=8;goto B76379f;
case 0x7637a2:c.instructions+=7;goto B7637a2;
case 0x7637a3:c.instructions+=6;goto B7637a3;
case 0x7637a5:c.instructions+=5;goto B7637a5;
case 0x7637a9:c.instructions+=4;goto B7637a9;
case 0x7637ab:c.instructions+=3;goto B7637ab;
case 0x7637ae:c.instructions+=2;goto B7637ae;
case 0x7637b1:c.instructions+=1;goto B7637b1;
case 0x7637b7:goto L7637b7;
case 0x7637ba:c.instructions+=1;goto B7637ba;
case 0x7637c0:goto L7637c0;
case 0x7637c2:c.instructions+=2;goto B7637c2;
case 0x7637c4:c.instructions+=1;goto B7637c4;
case 0x7637ca:goto L7637ca;
case 0x7637cd:c.instructions+=5;goto B7637cd;
case 0x7637d0:c.instructions+=4;goto B7637d0;
case 0x7637d1:c.instructions+=3;goto B7637d1;
case 0x7637d4:c.instructions+=2;goto B7637d4;
case 0x7637d7:c.instructions+=1;goto B7637d7;
case 0x7637d9:goto L7637d9;
case 0x7637db:c.instructions+=2;goto B7637db;
case 0x7637dc:c.instructions+=1;goto B7637dc;
case 0x7637df:goto L7637df;
case 0x7637e2:c.instructions+=2;goto B7637e2;
case 0x7637e5:c.instructions+=1;goto B7637e5;
case 0x7637e7:goto L7637e7;
case 0x7637ea:c.instructions+=2;goto B7637ea;
case 0x7637ef:c.instructions+=1;goto B7637ef;
case 0x7637f1:goto L7637f1;
case 0x7637f3:c.instructions+=6;goto B7637f3;
case 0x7637f6:c.instructions+=5;goto B7637f6;
case 0x7637fa:c.instructions+=4;goto B7637fa;
case 0x7637fc:c.instructions+=3;goto B7637fc;
case 0x763800:c.instructions+=2;goto B763800;
case 0x763802:c.instructions+=1;goto B763802;
case 0x763804:goto L763804;
case 0x763807:c.instructions+=2;goto B763807;
case 0x763809:c.instructions+=1;goto B763809;
case 0x76380b:goto L76380b;
case 0x76380e:c.instructions+=7;goto B76380e;
case 0x763810:c.instructions+=6;goto B763810;
case 0x763813:c.instructions+=5;goto B763813;
case 0x763817:c.instructions+=4;goto B763817;
case 0x763819:c.instructions+=3;goto B763819;
case 0x763820:c.instructions+=2;goto B763820;
case 0x763822:c.instructions+=1;goto B763822;
case 0x763824:goto L763824;
case 0x763827:c.instructions+=1;goto B763827;
case 0x76382a:goto L76382a;
case 0x76382d:c.instructions+=10;goto B76382d;
case 0x763830:c.instructions+=9;goto B763830;
case 0x763833:c.instructions+=8;goto B763833;
case 0x763836:c.instructions+=7;goto B763836;
case 0x763839:c.instructions+=6;goto B763839;
case 0x76383c:c.instructions+=5;goto B76383c;
case 0x76383f:c.instructions+=4;goto B76383f;
case 0x763841:c.instructions+=3;goto B763841;
case 0x763844:c.instructions+=2;goto B763844;
case 0x763848:c.instructions+=1;goto B763848;
case 0x76384e:goto L76384e;
case 0x763851:c.instructions+=6;goto B763851;
case 0x763854:c.instructions+=5;goto B763854;
case 0x763857:c.instructions+=4;goto B763857;
case 0x763858:c.instructions+=3;goto B763858;
case 0x76385b:c.instructions+=2;goto B76385b;
case 0x76385f:c.instructions+=1;goto B76385f;
case 0x763861:goto L763861;
case 0x763863:c.instructions+=1;goto B763863;
case 0x763864:goto L763864;
case 0x763867:c.instructions+=12;goto B763867;
case 0x76386a:c.instructions+=11;goto B76386a;
case 0x76386d:c.instructions+=10;goto B76386d;
case 0x763870:c.instructions+=9;goto B763870;
case 0x763873:c.instructions+=8;goto B763873;
case 0x763876:c.instructions+=7;goto B763876;
case 0x763879:c.instructions+=6;goto B763879;
case 0x76387c:c.instructions+=5;goto B76387c;
case 0x76387f:c.instructions+=4;goto B76387f;
case 0x763882:c.instructions+=3;goto B763882;
case 0x763885:c.instructions+=2;goto B763885;
case 0x763888:c.instructions+=1;goto B763888;
case 0x76388a:goto L76388a;
case 0x76388e:c.instructions+=5;goto B76388e;
case 0x763891:c.instructions+=4;goto B763891;
case 0x763893:c.instructions+=3;goto B763893;
case 0x763896:c.instructions+=2;goto B763896;
case 0x76389a:c.instructions+=1;goto B76389a;
case 0x76389c:goto L76389c;
case 0x7638a0:c.instructions+=1;goto B7638a0;
case 0x7638a2:goto L7638a2;
case 0x7638a4:c.instructions+=4;goto B7638a4;
case 0x7638a9:c.instructions+=3;goto B7638a9;
case 0x7638ab:c.instructions+=2;goto B7638ab;
case 0x7638ae:c.instructions+=1;goto B7638ae;
case 0x7638b0:goto L7638b0;
case 0x7638b4:c.instructions+=2;goto B7638b4;
case 0x7638b6:c.instructions+=1;goto B7638b6;
case 0x7638b8:goto L7638b8;
case 0x7638bc:c.instructions+=1;goto B7638bc;
case 0x7638be:goto L7638be;
case 0x7638c1:c.instructions+=4;goto B7638c1;
case 0x7638c6:c.instructions+=3;goto B7638c6;
case 0x7638c8:c.instructions+=2;goto B7638c8;
case 0x7638cb:c.instructions+=1;goto B7638cb;
case 0x7638ce:goto L7638ce;
case 0x7638d5:c.instructions+=1;goto B7638d5;
case 0x7638d8:goto L7638d8;
case 0x7638dd:c.instructions+=2;goto B7638dd;
case 0x7638df:c.instructions+=1;goto B7638df;
case 0x7638e1:goto L7638e1;
case 0x7638e4:c.instructions+=5;goto B7638e4;
case 0x7638e7:c.instructions+=4;goto B7638e7;
case 0x7638eb:c.instructions+=3;goto B7638eb;
case 0x7638ed:c.instructions+=2;goto B7638ed;
case 0x7638f1:c.instructions+=1;goto B7638f1;
case 0x7638f3:goto L7638f3;
case 0x7638f6:goto L7638f6;
case 0x7638f9:c.instructions+=3;goto B7638f9;
case 0x7638fc:c.instructions+=2;goto B7638fc;
case 0x763900:c.instructions+=1;goto B763900;
case 0x763905:goto L763905;
case 0x763907:c.instructions+=1;goto B763907;
case 0x76390c:goto L76390c;
case 0x763912:goto L763912;
case 0x763915:c.instructions+=11;goto B763915;
case 0x763918:c.instructions+=10;goto B763918;
case 0x76391b:c.instructions+=9;goto B76391b;
case 0x76391e:c.instructions+=8;goto B76391e;
case 0x763922:c.instructions+=7;goto B763922;
case 0x763925:c.instructions+=6;goto B763925;
case 0x763928:c.instructions+=5;goto B763928;
case 0x763929:c.instructions+=4;goto B763929;
case 0x76392c:c.instructions+=3;goto B76392c;
case 0x76392f:c.instructions+=2;goto B76392f;
case 0x763932:c.instructions+=1;goto B763932;
case 0x763934:goto L763934;
case 0x763936:c.instructions+=1;goto B763936;
case 0x763937:goto L763937;
case 0x76393b:c.instructions+=1;goto B76393b;
case 0x763941:goto L763941;
case 0x763944:c.instructions+=4;goto B763944;
case 0x763947:c.instructions+=3;goto B763947;
case 0x763948:c.instructions+=2;goto B763948;
case 0x76394b:c.instructions+=1;goto B76394b;
case 0x76394d:goto L76394d;
case 0x76394f:c.instructions+=1;goto B76394f;
case 0x763950:goto L763950;
case 0x763953:c.instructions+=2;goto B763953;
case 0x763956:c.instructions+=1;goto B763956;
case 0x763958:goto L763958;
case 0x76395b:c.instructions+=2;goto B76395b;
case 0x763960:c.instructions+=1;goto B763960;
case 0x763962:goto L763962;
case 0x763964:c.instructions+=6;goto B763964;
case 0x763966:c.instructions+=5;goto B763966;
case 0x76396a:c.instructions+=4;goto B76396a;
case 0x76396c:c.instructions+=3;goto B76396c;
case 0x763970:c.instructions+=2;goto B763970;
case 0x763972:c.instructions+=1;goto B763972;
case 0x763974:goto L763974;
case 0x763977:c.instructions+=2;goto B763977;
case 0x763979:c.instructions+=1;goto B763979;
case 0x76397b:goto L76397b;
case 0x76397e:c.instructions+=6;goto B76397e;
case 0x763980:c.instructions+=5;goto B763980;
case 0x763984:c.instructions+=4;goto B763984;
case 0x763986:c.instructions+=3;goto B763986;
case 0x76398d:c.instructions+=2;goto B76398d;
case 0x76398f:c.instructions+=1;goto B76398f;
case 0x763991:goto L763991;
case 0x763994:c.instructions+=1;goto B763994;
case 0x763997:goto L763997;
case 0x76399a:goto L76399a;
case 0x76399d:c.instructions+=12;goto B76399d;
case 0x7639a0:c.instructions+=11;goto B7639a0;
case 0x7639a3:c.instructions+=10;goto B7639a3;
case 0x7639a6:c.instructions+=9;goto B7639a6;
case 0x7639a9:c.instructions+=8;goto B7639a9;
case 0x7639ac:c.instructions+=7;goto B7639ac;
case 0x7639af:c.instructions+=6;goto B7639af;
case 0x7639b2:c.instructions+=5;goto B7639b2;
case 0x7639b5:c.instructions+=4;goto B7639b5;
case 0x7639b8:c.instructions+=3;goto B7639b8;
case 0x7639b9:c.instructions+=2;goto B7639b9;
case 0x7639bc:c.instructions+=1;goto B7639bc;
case 0x7639be:goto L7639be;
case 0x7639c0:c.instructions+=1;goto B7639c0;
case 0x7639c1:goto L7639c1;
case 0x7639c4:c.instructions+=10;goto B7639c4;
case 0x7639c7:c.instructions+=9;goto B7639c7;
case 0x7639ca:c.instructions+=8;goto B7639ca;
case 0x7639cd:c.instructions+=7;goto B7639cd;
case 0x7639d0:c.instructions+=6;goto B7639d0;
case 0x7639d3:c.instructions+=5;goto B7639d3;
case 0x7639d6:c.instructions+=4;goto B7639d6;
case 0x7639d9:c.instructions+=3;goto B7639d9;
case 0x7639dc:c.instructions+=2;goto B7639dc;
case 0x7639df:c.instructions+=1;goto B7639df;
case 0x7639e1:goto L7639e1;
case 0x7639e5:c.instructions+=5;goto B7639e5;
case 0x7639e8:c.instructions+=4;goto B7639e8;
case 0x7639ea:c.instructions+=3;goto B7639ea;
case 0x7639ed:c.instructions+=2;goto B7639ed;
case 0x7639f1:c.instructions+=1;goto B7639f1;
case 0x7639f3:goto L7639f3;
case 0x7639f7:c.instructions+=1;goto B7639f7;
case 0x7639f9:goto L7639f9;
case 0x7639fb:c.instructions+=4;goto B7639fb;
case 0x763a00:c.instructions+=3;goto B763a00;
case 0x763a02:c.instructions+=2;goto B763a02;
case 0x763a05:c.instructions+=1;goto B763a05;
case 0x763a07:goto L763a07;
case 0x763a0b:c.instructions+=2;goto B763a0b;
case 0x763a0d:c.instructions+=1;goto B763a0d;
case 0x763a0f:goto L763a0f;
case 0x763a13:c.instructions+=1;goto B763a13;
case 0x763a15:goto L763a15;
case 0x763a18:c.instructions+=4;goto B763a18;
case 0x763a1d:c.instructions+=3;goto B763a1d;
case 0x763a1f:c.instructions+=2;goto B763a1f;
case 0x763a22:c.instructions+=1;goto B763a22;
case 0x763a25:goto L763a25;
case 0x763a2c:c.instructions+=1;goto B763a2c;
case 0x763a2f:goto L763a2f;
case 0x763a34:c.instructions+=2;goto B763a34;
case 0x763a36:c.instructions+=1;goto B763a36;
case 0x763a38:goto L763a38;
case 0x763a3b:c.instructions+=2;goto B763a3b;
case 0x763a3d:c.instructions+=1;goto B763a3d;
case 0x763a41:goto L763a41;
case 0x763a43:c.instructions+=1;goto B763a43;
case 0x763a44:goto L763a44;
case 0x763a45:c.instructions+=4;goto B763a45;
case 0x763a46:c.instructions+=3;goto B763a46;
case 0x763a47:c.instructions+=2;goto B763a47;
case 0x763a48:c.instructions+=1;goto B763a48;
case 0x763a49:goto L763a49;
case 0x763a4a:c.instructions+=18;goto B763a4a;
case 0x763a4c:c.instructions+=17;goto B763a4c;
case 0x763a4f:c.instructions+=16;goto B763a4f;
case 0x763a52:c.instructions+=15;goto B763a52;
case 0x763a57:c.instructions+=14;goto B763a57;
case 0x763a5d:c.instructions+=13;goto B763a5d;
case 0x763a60:c.instructions+=12;goto B763a60;
case 0x763a63:c.instructions+=11;goto B763a63;
case 0x763a64:c.instructions+=10;goto B763a64;
case 0x763a67:c.instructions+=9;goto B763a67;
case 0x763a6a:c.instructions+=8;goto B763a6a;
case 0x763a6b:c.instructions+=7;goto B763a6b;
case 0x763a6e:c.instructions+=6;goto B763a6e;
case 0x763a6f:c.instructions+=5;goto B763a6f;
case 0x763a70:c.instructions+=4;goto B763a70;
case 0x763a73:c.instructions+=3;goto B763a73;
case 0x763a76:c.instructions+=2;goto B763a76;
case 0x763a79:c.instructions+=1;goto B763a79;
case 0x763a7b:goto L763a7b;
case 0x763a7e:c.instructions+=3;goto B763a7e;
case 0x763a80:c.instructions+=2;goto B763a80;
case 0x763a84:c.instructions+=1;goto B763a84;
case 0x763a86:goto L763a86;
case 0x763a89:c.instructions+=4;goto B763a89;
case 0x763a8c:c.instructions+=3;goto B763a8c;
case 0x763a8e:c.instructions+=2;goto B763a8e;
case 0x763a90:c.instructions+=1;goto B763a90;
case 0x763a93:goto L763a93;
case 0x763a98:c.instructions+=4;goto B763a98;
case 0x763a9a:c.instructions+=3;goto B763a9a;
case 0x763a9d:c.instructions+=2;goto B763a9d;
case 0x763a9f:c.instructions+=1;goto B763a9f;
case 0x763aa1:goto L763aa1;
case 0x763aa4:c.instructions+=5;goto B763aa4;
case 0x763aa6:c.instructions+=4;goto B763aa6;
case 0x763aa9:c.instructions+=3;goto B763aa9;
case 0x763aab:c.instructions+=2;goto B763aab;
case 0x763aad:c.instructions+=1;goto B763aad;
case 0x763aaf:goto L763aaf;
case 0x763ab2:c.instructions+=1;goto B763ab2;
case 0x763ab5:goto L763ab5;
case 0x763ab8:c.instructions+=1;goto B763ab8;
case 0x763aba:goto L763aba;
case 0x763abd:c.instructions+=1;goto B763abd;
case 0x763abf:goto L763abf;
case 0x763ac1:c.instructions+=1;goto B763ac1;
case 0x763ac3:goto L763ac3;
case 0x763ac6:c.instructions+=5;goto B763ac6;
case 0x763ac8:c.instructions+=4;goto B763ac8;
case 0x763acb:c.instructions+=3;goto B763acb;
case 0x763acd:c.instructions+=2;goto B763acd;
case 0x763acf:c.instructions+=1;goto B763acf;
case 0x763ad1:goto L763ad1;
case 0x763ad4:goto L763ad4;
case 0x763ad6:c.instructions+=2;goto B763ad6;
case 0x763ad9:c.instructions+=1;goto B763ad9;
case 0x763adb:goto L763adb;
case 0x763add:c.instructions+=1;goto B763add;
case 0x763ae3:goto L763ae3;
case 0x763ae9:c.instructions+=5;goto B763ae9;
case 0x763aec:c.instructions+=4;goto B763aec;
case 0x763aee:c.instructions+=3;goto B763aee;
case 0x763af1:c.instructions+=2;goto B763af1;
case 0x763af4:c.instructions+=1;goto B763af4;
case 0x763af6:goto L763af6;
case 0x763afd:c.instructions+=5;goto B763afd;
case 0x763b01:c.instructions+=4;goto B763b01;
case 0x763b04:c.instructions+=3;goto B763b04;
case 0x763b06:c.instructions+=2;goto B763b06;
case 0x763b08:c.instructions+=1;goto B763b08;
case 0x763b0a:goto L763b0a;
case 0x763b10:c.instructions+=8;goto B763b10;
case 0x763b13:c.instructions+=7;goto B763b13;
case 0x763b17:c.instructions+=6;goto B763b17;
case 0x763b1a:c.instructions+=5;goto B763b1a;
case 0x763b1c:c.instructions+=4;goto B763b1c;
case 0x763b1f:c.instructions+=3;goto B763b1f;
case 0x763b21:c.instructions+=2;goto B763b21;
case 0x763b24:c.instructions+=1;goto B763b24;
case 0x763b26:goto L763b26;
case 0x763b2c:c.instructions+=7;goto B763b2c;
case 0x763b2f:c.instructions+=6;goto B763b2f;
case 0x763b32:c.instructions+=5;goto B763b32;
case 0x763b35:c.instructions+=4;goto B763b35;
case 0x763b37:c.instructions+=3;goto B763b37;
case 0x763b39:c.instructions+=2;goto B763b39;
case 0x763b3b:c.instructions+=1;goto B763b3b;
case 0x763b3d:goto L763b3d;
case 0x763b40:goto L763b40;
case 0x763b42:c.instructions+=7;goto B763b42;
case 0x763b48:c.instructions+=6;goto B763b48;
case 0x763b4f:c.instructions+=5;goto B763b4f;
case 0x763b52:c.instructions+=4;goto B763b52;
case 0x763b56:c.instructions+=3;goto B763b56;
case 0x763b58:c.instructions+=2;goto B763b58;
case 0x763b5a:c.instructions+=1;goto B763b5a;
case 0x763b5c:goto L763b5c;
case 0x763b63:c.instructions+=4;goto B763b63;
case 0x763b66:c.instructions+=3;goto B763b66;
case 0x763b68:c.instructions+=2;goto B763b68;
case 0x763b69:c.instructions+=1;goto B763b69;
case 0x763b6b:goto L763b6b;
case 0x763b6f:c.instructions+=1;goto B763b6f;
case 0x763b71:goto L763b71;
case 0x763b74:c.instructions+=1;goto B763b74;
case 0x763b77:goto L763b77;
case 0x763b7a:c.instructions+=1;goto B763b7a;
case 0x763b7c:goto L763b7c;
case 0x763b7f:c.instructions+=1;goto B763b7f;
case 0x763b81:goto L763b81;
case 0x763b83:c.instructions+=1;goto B763b83;
case 0x763b85:goto L763b85;
case 0x763b89:c.instructions+=1;goto B763b89;
case 0x763b8b:goto L763b8b;
case 0x763b8e:goto L763b8e;
case 0x763b90:c.instructions+=2;goto B763b90;
case 0x763b93:c.instructions+=1;goto B763b93;
case 0x763b95:goto L763b95;
case 0x763b97:c.instructions+=1;goto B763b97;
case 0x763b99:goto L763b99;
case 0x763b9e:goto L763b9e;
case 0x763ba0:c.instructions+=3;goto B763ba0;
case 0x763ba2:c.instructions+=2;goto B763ba2;
case 0x763ba5:c.instructions+=1;goto B763ba5;
case 0x763ba7:goto L763ba7;
case 0x763ba8:c.instructions+=1;goto B763ba8;
case 0x763bad:goto L763bad;
case 0x763bae:c.instructions+=5;goto B763bae;
case 0x763bb1:c.instructions+=4;goto B763bb1;
case 0x763bb3:c.instructions+=3;goto B763bb3;
case 0x763bb6:c.instructions+=2;goto B763bb6;
case 0x763bb9:c.instructions+=1;goto B763bb9;
case 0x763bbf:goto L763bbf;
case 0x763bc1:c.instructions+=1;goto B763bc1;
case 0x763bc6:goto L763bc6;
case 0x763bc8:c.instructions+=1;goto B763bc8;
case 0x763bc9:goto L763bc9;
case 0x763bcb:c.instructions+=1;goto B763bcb;
case 0x763bcd:goto L763bcd;
case 0x763bd0:c.instructions+=9;goto B763bd0;
case 0x763bd4:c.instructions+=8;goto B763bd4;
case 0x763bd6:c.instructions+=7;goto B763bd6;
case 0x763bd9:c.instructions+=6;goto B763bd9;
case 0x763bdb:c.instructions+=5;goto B763bdb;
case 0x763bde:c.instructions+=4;goto B763bde;
case 0x763bdf:c.instructions+=3;goto B763bdf;
case 0x763be2:c.instructions+=2;goto B763be2;
case 0x763be5:c.instructions+=1;goto B763be5;
case 0x763be7:goto L763be7;
case 0x763be9:c.instructions+=1;goto B763be9;
case 0x763bea:goto L763bea;
case 0x763bec:c.instructions+=1;goto B763bec;
case 0x763bf2:goto L763bf2;
case 0x763bf5:c.instructions+=2;goto B763bf5;
case 0x763bf8:c.instructions+=1;goto B763bf8;
case 0x763bfa:goto L763bfa;
case 0x763bfd:c.instructions+=2;goto B763bfd;
case 0x763c02:c.instructions+=1;goto B763c02;
case 0x763c04:goto L763c04;
case 0x763c06:c.instructions+=9;goto B763c06;
case 0x763c08:c.instructions+=8;goto B763c08;
case 0x763c0b:c.instructions+=7;goto B763c0b;
case 0x763c0f:c.instructions+=6;goto B763c0f;
case 0x763c11:c.instructions+=5;goto B763c11;
case 0x763c14:c.instructions+=4;goto B763c14;
case 0x763c18:c.instructions+=3;goto B763c18;
case 0x763c1c:c.instructions+=2;goto B763c1c;
case 0x763c1e:c.instructions+=1;goto B763c1e;
case 0x763c20:goto L763c20;
case 0x763c23:c.instructions+=3;goto B763c23;
case 0x763c26:c.instructions+=2;goto B763c26;
case 0x763c28:c.instructions+=1;goto B763c28;
case 0x763c2a:goto L763c2a;
case 0x763c2d:c.instructions+=9;goto B763c2d;
case 0x763c2f:c.instructions+=8;goto B763c2f;
case 0x763c32:c.instructions+=7;goto B763c32;
case 0x763c39:c.instructions+=6;goto B763c39;
case 0x763c3d:c.instructions+=5;goto B763c3d;
case 0x763c3f:c.instructions+=4;goto B763c3f;
case 0x763c41:c.instructions+=3;goto B763c41;
case 0x763c43:c.instructions+=2;goto B763c43;
case 0x763c46:c.instructions+=1;goto B763c46;
case 0x763c48:goto L763c48;
case 0x763c4b:c.instructions+=3;goto B763c4b;
case 0x763c4e:c.instructions+=2;goto B763c4e;
case 0x763c51:c.instructions+=1;goto B763c51;
case 0x763c53:goto L763c53;
case 0x763c56:goto L763c56;
case 0x763c5a:c.instructions+=7;goto B763c5a;
case 0x763c5d:c.instructions+=6;goto B763c5d;
case 0x763c60:c.instructions+=5;goto B763c60;
case 0x763c63:c.instructions+=4;goto B763c63;
case 0x763c66:c.instructions+=3;goto B763c66;
case 0x763c69:c.instructions+=2;goto B763c69;
case 0x763c6c:c.instructions+=1;goto B763c6c;
case 0x763c72:goto L763c72;
case 0x763c75:c.instructions+=10;goto B763c75;
case 0x763c78:c.instructions+=9;goto B763c78;
case 0x763c7b:c.instructions+=8;goto B763c7b;
case 0x763c7e:c.instructions+=7;goto B763c7e;
case 0x763c81:c.instructions+=6;goto B763c81;
case 0x763c84:c.instructions+=5;goto B763c84;
case 0x763c87:c.instructions+=4;goto B763c87;
case 0x763c8a:c.instructions+=3;goto B763c8a;
case 0x763c8d:c.instructions+=2;goto B763c8d;
case 0x763c90:c.instructions+=1;goto B763c90;
case 0x763c92:goto L763c92;
case 0x763c96:c.instructions+=5;goto B763c96;
case 0x763c99:c.instructions+=4;goto B763c99;
case 0x763c9b:c.instructions+=3;goto B763c9b;
case 0x763c9e:c.instructions+=2;goto B763c9e;
case 0x763ca2:c.instructions+=1;goto B763ca2;
case 0x763ca4:goto L763ca4;
case 0x763ca8:c.instructions+=1;goto B763ca8;
case 0x763caa:goto L763caa;
case 0x763caf:c.instructions+=3;goto B763caf;
case 0x763cb1:c.instructions+=2;goto B763cb1;
case 0x763cb3:c.instructions+=1;goto B763cb3;
case 0x763cb5:goto L763cb5;
case 0x763cb7:c.instructions+=5;goto B763cb7;
case 0x763cbc:c.instructions+=4;goto B763cbc;
case 0x763cbe:c.instructions+=3;goto B763cbe;
case 0x763cc1:c.instructions+=2;goto B763cc1;
case 0x763cc5:c.instructions+=1;goto B763cc5;
case 0x763cc7:goto L763cc7;
case 0x763ccb:c.instructions+=1;goto B763ccb;
case 0x763ccd:goto L763ccd;
case 0x763cd0:c.instructions+=3;goto B763cd0;
case 0x763cd5:c.instructions+=2;goto B763cd5;
case 0x763cd7:c.instructions+=1;goto B763cd7;
case 0x763cda:goto L763cda;
case 0x763cdd:c.instructions+=5;goto B763cdd;
case 0x763ce4:c.instructions+=4;goto B763ce4;
case 0x763ce7:c.instructions+=3;goto B763ce7;
case 0x763cec:c.instructions+=2;goto B763cec;
case 0x763cee:c.instructions+=1;goto B763cee;
case 0x763cf0:goto L763cf0;
case 0x763cf3:goto L763cf3;
case 0x763cf5:c.instructions+=1;goto B763cf5;
case 0x763cf7:goto L763cf7;
case 0x763cf9:c.instructions+=2;goto B763cf9;
case 0x763cfd:c.instructions+=1;goto B763cfd;
case 0x763cff:goto L763cff;
case 0x763d02:goto L763d02;
case 0x763d05:c.instructions+=10;goto B763d05;
case 0x763d07:c.instructions+=9;goto B763d07;
case 0x763d0a:c.instructions+=8;goto B763d0a;
case 0x763d0c:c.instructions+=7;goto B763d0c;
case 0x763d10:c.instructions+=6;goto B763d10;
case 0x763d13:c.instructions+=5;goto B763d13;
case 0x763d15:c.instructions+=4;goto B763d15;
case 0x763d17:c.instructions+=3;goto B763d17;
case 0x763d1a:c.instructions+=2;goto B763d1a;
case 0x763d1c:c.instructions+=1;goto B763d1c;
case 0x763d1e:goto L763d1e;
case 0x763d24:c.instructions+=1;goto B763d24;
case 0x763d26:goto L763d26;
case 0x763d29:c.instructions+=2;goto B763d29;
case 0x763d2f:c.instructions+=1;goto B763d2f;
case 0x763d31:goto L763d31;
case 0x763d38:goto L763d38;
case 0x763d3b:c.instructions+=2;goto B763d3b;
case 0x763d3d:c.instructions+=1;goto B763d3d;
case 0x763d40:goto L763d40;
case 0x763d41:c.instructions+=4;goto B763d41;
case 0x763d42:c.instructions+=3;goto B763d42;
case 0x763d43:c.instructions+=2;goto B763d43;
case 0x763d44:c.instructions+=1;goto B763d44;
case 0x763d45:goto L763d45;
case 0x763d4a:c.instructions+=2;goto B763d4a;
case 0x763d4c:c.instructions+=1;goto B763d4c;
case 0x763d4e:goto L763d4e;
case 0x763d52:c.instructions+=1;goto B763d52;
case 0x763d54:goto L763d54;
case 0x763d56:c.instructions+=2;goto B763d56;
case 0x763d57:c.instructions+=1;goto B763d57;
case 0x763d59:goto L763d59;
case 0x763d5b:c.instructions+=2;goto B763d5b;
case 0x763d5c:c.instructions+=1;goto B763d5c;
case 0x763d5d:goto L763d5d;
case 0x763d5f:c.instructions+=1;goto B763d5f;
case 0x763d60:goto L763d60;
case 0x763d61:c.instructions+=8;goto B763d61;
case 0x763d63:c.instructions+=7;goto B763d63;
case 0x763d64:c.instructions+=6;goto B763d64;
case 0x763d65:c.instructions+=5;goto B763d65;
case 0x763d68:c.instructions+=4;goto B763d68;
case 0x763d6b:c.instructions+=3;goto B763d6b;
case 0x763d6d:c.instructions+=2;goto B763d6d;
case 0x763d70:c.instructions+=1;goto B763d70;
case 0x763d76:goto L763d76;
case 0x763d78:c.instructions+=1;goto B763d78;
case 0x763d7e:goto L763d7e;
case 0x763d80:c.instructions+=1;goto B763d80;
case 0x763d82:goto L763d82;
case 0x763d86:c.instructions+=2;goto B763d86;
case 0x763d88:c.instructions+=1;goto B763d88;
case 0x763d8e:goto L763d8e;
case 0x763d91:c.instructions+=3;goto B763d91;
case 0x763d94:c.instructions+=2;goto B763d94;
case 0x763d96:c.instructions+=1;goto B763d96;
case 0x763d99:goto L763d99;
case 0x763d9c:c.instructions+=7;goto B763d9c;
case 0x763da0:c.instructions+=6;goto B763da0;
case 0x763da4:c.instructions+=5;goto B763da4;
case 0x763da7:c.instructions+=4;goto B763da7;
case 0x763daa:c.instructions+=3;goto B763daa;
case 0x763dae:c.instructions+=2;goto B763dae;
case 0x763db1:c.instructions+=1;goto B763db1;
case 0x763db3:goto L763db3;
case 0x763db9:c.instructions+=1;goto B763db9;
case 0x763dbb:goto L763dbb;
case 0x763dc1:c.instructions+=1;goto B763dc1;
case 0x763dc3:goto L763dc3;
case 0x763dc4:c.instructions+=1;goto B763dc4;
case 0x763dc9:goto L763dc9;
case 0x763dcb:c.instructions+=2;goto B763dcb;
case 0x763dcc:c.instructions+=1;goto B763dcc;
case 0x763dce:goto L763dce;
case 0x763dcf:c.instructions+=1;goto B763dcf;
case 0x763dd4:goto L763dd4;
case 0x763dd5:goto L763dd5;
case 0x763ddb:c.instructions+=2;goto B763ddb;
case 0x763ddc:c.instructions+=1;goto B763ddc;
case 0x763dde:goto L763dde;
case 0x763de1:c.instructions+=9;goto B763de1;
case 0x763de3:c.instructions+=8;goto B763de3;
case 0x763de6:c.instructions+=7;goto B763de6;
case 0x763de8:c.instructions+=6;goto B763de8;
case 0x763deb:c.instructions+=5;goto B763deb;
case 0x763ded:c.instructions+=4;goto B763ded;
case 0x763dee:c.instructions+=3;goto B763dee;
case 0x763df0:c.instructions+=2;goto B763df0;
case 0x763df3:c.instructions+=1;goto B763df3;
case 0x763df5:goto L763df5;
case 0x763df6:c.instructions+=3;goto B763df6;
case 0x763df7:c.instructions+=2;goto B763df7;
case 0x763df8:c.instructions+=1;goto B763df8;
case 0x763dfd:goto L763dfd;
case 0x763e00:c.instructions+=1;goto B763e00;
case 0x763e02:goto L763e02;
case 0x763e05:c.instructions+=1;goto B763e05;
case 0x763e07:goto L763e07;
case 0x763e09:c.instructions+=7;goto B763e09;
case 0x763e0c:c.instructions+=6;goto B763e0c;
case 0x763e13:c.instructions+=5;goto B763e13;
case 0x763e15:c.instructions+=4;goto B763e15;
case 0x763e18:c.instructions+=3;goto B763e18;
case 0x763e1b:c.instructions+=2;goto B763e1b;
case 0x763e1e:c.instructions+=1;goto B763e1e;
case 0x763e20:goto L763e20;
case 0x763e25:goto L763e25;
case 0x763e29:c.instructions+=1;goto B763e29;
case 0x763e2b:goto L763e2b;
case 0x763e2d:c.instructions+=3;goto B763e2d;
case 0x763e2f:c.instructions+=2;goto B763e2f;
case 0x763e30:c.instructions+=1;goto B763e30;
case 0x763e35:goto L763e35;
case 0x763e38:goto L763e38;
case 0x763e3b:c.instructions+=3;goto B763e3b;
case 0x763e3e:c.instructions+=2;goto B763e3e;
case 0x763e40:c.instructions+=1;goto B763e40;
case 0x763e42:goto L763e42;
case 0x763e44:c.instructions+=6;goto B763e44;
case 0x763e45:c.instructions+=5;goto B763e45;
case 0x763e46:c.instructions+=4;goto B763e46;
case 0x763e49:c.instructions+=3;goto B763e49;
case 0x763e4a:c.instructions+=2;goto B763e4a;
case 0x763e4b:c.instructions+=1;goto B763e4b;
case 0x763e50:goto L763e50;
case 0x763e53:c.instructions+=1;goto B763e53;
case 0x763e56:goto L763e56;
case 0x763e59:c.instructions+=2;goto B763e59;
case 0x763e5a:c.instructions+=1;goto B763e5a;
case 0x763e5c:goto L763e5c;
case 0x763e60:c.instructions+=1;goto B763e60;
case 0x763e62:goto L763e62;
case 0x763e65:c.instructions+=2;goto B763e65;
case 0x763e6a:c.instructions+=1;goto B763e6a;
case 0x763e6c:goto L763e6c;
case 0x763e6f:c.instructions+=1;goto B763e6f;
case 0x763e72:goto L763e72;
case 0x763e75:goto L763e75;
case 0x763e76:c.instructions+=3;goto B763e76;
case 0x763e77:c.instructions+=2;goto B763e77;
case 0x763e78:c.instructions+=1;goto B763e78;
case 0x763e79:goto L763e79;
case 0x763e7d:c.instructions+=1;goto B763e7d;
case 0x763e7f:goto L763e7f;
case 0x763e83:c.instructions+=1;goto B763e83;
case 0x763e85:goto L763e85;
case 0x763e88:c.instructions+=1;goto B763e88;
case 0x763e8a:goto L763e8a;
case 0x763e8c:c.instructions+=4;goto B763e8c;
case 0x763e8e:c.instructions+=3;goto B763e8e;
case 0x763e90:c.instructions+=2;goto B763e90;
case 0x763e93:c.instructions+=1;goto B763e93;
case 0x763e95:goto L763e95;
case 0x763e98:c.instructions+=3;goto B763e98;
case 0x763e99:c.instructions+=2;goto B763e99;
case 0x763e9a:c.instructions+=1;goto B763e9a;
case 0x763e9f:goto L763e9f;
case 0x763ea0:c.instructions+=1;goto B763ea0;
case 0x763ea1:goto L763ea1;
case 0x763ea4:c.instructions+=1;goto B763ea4;
case 0x763ea6:goto L763ea6;
case 0x763ea8:c.instructions+=1;goto B763ea8;
case 0x763ea9:goto L763ea9;
case 0x763eab:c.instructions+=1;goto B763eab;
case 0x763eac:goto L763eac;
case 0x763ead:c.instructions+=4;goto B763ead;
case 0x763eaf:c.instructions+=3;goto B763eaf;
case 0x763eb0:c.instructions+=2;goto B763eb0;
case 0x763eb2:c.instructions+=1;goto B763eb2;
case 0x763eb4:goto L763eb4;
case 0x763eb7:c.instructions+=3;goto B763eb7;
case 0x763eba:c.instructions+=2;goto B763eba;
case 0x763ebd:c.instructions+=1;goto B763ebd;
case 0x763ec2:goto L763ec2;
case 0x763ec5:c.instructions+=1;goto B763ec5;
case 0x763ec7:goto L763ec7;
case 0x763ecb:c.instructions+=1;goto B763ecb;
case 0x763ecd:goto L763ecd;
case 0x763ece:c.instructions+=2;goto B763ece;
case 0x763ecf:c.instructions+=1;goto B763ecf;
case 0x763ed0:goto L763ed0;
case 0x763ed4:c.instructions+=5;goto B763ed4;
case 0x763ed5:c.instructions+=4;goto B763ed5;
case 0x763ed6:c.instructions+=3;goto B763ed6;
case 0x763ed8:c.instructions+=2;goto B763ed8;
case 0x763eda:c.instructions+=1;goto B763eda;
case 0x763edc:goto L763edc;
case 0x763ee0:c.instructions+=1;goto B763ee0;
case 0x763ee2:goto L763ee2;
case 0x763ee6:c.instructions+=2;goto B763ee6;
case 0x763ee8:c.instructions+=1;goto B763ee8;
case 0x763eea:goto L763eea;
case 0x763eec:c.instructions+=3;goto B763eec;
case 0x763ef0:c.instructions+=2;goto B763ef0;
case 0x763ef2:c.instructions+=1;goto B763ef2;
case 0x763ef7:goto L763ef7;
case 0x763ef8:c.instructions+=2;goto B763ef8;
case 0x763efb:c.instructions+=1;goto B763efb;
case 0x763efd:goto L763efd;
case 0x763f02:c.instructions+=1;goto B763f02;
case 0x763f04:goto L763f04;
case 0x763f05:c.instructions+=2;goto B763f05;
case 0x763f06:c.instructions+=1;goto B763f06;
case 0x763f07:goto L763f07;
case 0x763f08:c.instructions+=15;goto B763f08;
case 0x763f0a:c.instructions+=14;goto B763f0a;
case 0x763f10:c.instructions+=13;goto B763f10;
case 0x763f15:c.instructions+=12;goto B763f15;
case 0x763f18:c.instructions+=11;goto B763f18;
case 0x763f19:c.instructions+=10;goto B763f19;
case 0x763f1c:c.instructions+=9;goto B763f1c;
case 0x763f1e:c.instructions+=8;goto B763f1e;
case 0x763f21:c.instructions+=7;goto B763f21;
case 0x763f24:c.instructions+=6;goto B763f24;
case 0x763f27:c.instructions+=5;goto B763f27;
case 0x763f2a:c.instructions+=4;goto B763f2a;
case 0x763f2c:c.instructions+=3;goto B763f2c;
case 0x763f2e:c.instructions+=2;goto B763f2e;
case 0x763f30:c.instructions+=1;goto B763f30;
case 0x763f36:goto L763f36;
case 0x763f37:c.instructions+=3;goto B763f37;
case 0x763f38:c.instructions+=2;goto B763f38;
case 0x763f3a:c.instructions+=1;goto B763f3a;
case 0x763f3c:goto L763f3c;
case 0x763f3f:goto L763f3f;
case 0x763f40:c.instructions+=3;goto B763f40;
case 0x763f44:c.instructions+=2;goto B763f44;
case 0x763f47:c.instructions+=1;goto B763f47;
case 0x763f4d:goto L763f4d;
case 0x763f50:c.instructions+=1;goto B763f50;
case 0x763f52:goto L763f52;
case 0x763f55:c.instructions+=1;goto B763f55;
case 0x763f57:goto L763f57;
case 0x763f5a:c.instructions+=3;goto B763f5a;
case 0x763f61:c.instructions+=2;goto B763f61;
case 0x763f64:c.instructions+=1;goto B763f64;
case 0x763f66:goto L763f66;
case 0x763f68:goto L763f68;
case 0x763f70:c.instructions+=6;goto B763f70;
case 0x763f72:c.instructions+=5;goto B763f72;
case 0x763f75:c.instructions+=4;goto B763f75;
case 0x763f76:c.instructions+=3;goto B763f76;
case 0x763f78:c.instructions+=2;goto B763f78;
case 0x763f7b:c.instructions+=1;goto B763f7b;
case 0x763f81:goto L763f81;
case 0x763f88:goto L763f88;
case 0x763f8a:c.instructions+=8;goto B763f8a;
case 0x763f8e:c.instructions+=7;goto B763f8e;
case 0x763f91:c.instructions+=6;goto B763f91;
case 0x763f94:c.instructions+=5;goto B763f94;
case 0x763f97:c.instructions+=4;goto B763f97;
case 0x763f9a:c.instructions+=3;goto B763f9a;
case 0x763f9d:c.instructions+=2;goto B763f9d;
case 0x763fa0:c.instructions+=1;goto B763fa0;
case 0x763fa5:goto L763fa5;
case 0x763fa8:c.instructions+=2;goto B763fa8;
case 0x763fab:c.instructions+=1;goto B763fab;
case 0x763fad:goto L763fad;
case 0x763fb0:c.instructions+=1;goto B763fb0;
case 0x763fb2:goto L763fb2;
case 0x763fb5:c.instructions+=1;goto B763fb5;
case 0x763fb7:goto L763fb7;
case 0x763fb8:c.instructions+=2;goto B763fb8;
case 0x763fb9:c.instructions+=1;goto B763fb9;
case 0x763fbb:goto L763fbb;
case 0x763fbe:c.instructions+=1;goto B763fbe;
case 0x763fc4:goto L763fc4;
case 0x763fc8:c.instructions+=1;goto B763fc8;
case 0x763fcd:goto L763fcd;
case 0x763fd1:c.instructions+=1;goto B763fd1;
case 0x763fd6:goto L763fd6;
case 0x763fda:c.instructions+=1;goto B763fda;
case 0x763fdf:goto L763fdf;
case 0x763fe3:c.instructions+=1;goto B763fe3;
case 0x763fe8:goto L763fe8;
case 0x763fec:c.instructions+=1;goto B763fec;
case 0x763ff1:goto L763ff1;
case 0x763ff4:c.instructions+=1;goto B763ff4;
case 0x763ff6:goto L763ff6;
case 0x763ffa:c.instructions+=2;goto B763ffa;
case 0x763ffd:c.instructions+=1;goto B763ffd;
default:missing_instruction(c.pc);}
B763001:L763001:{c.instructions+=3;NFSU2_TR(0x763001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B763004:{NFSU2_TR(0x763004);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763006:{NFSU2_TR(0x763006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76300bull));
{goto L76315d;}
}
B76300b:L76300b:{c.instructions+=2;NFSU2_TR(0x76300b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76300c:{NFSU2_TR(0x76300c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76300d:L76300d:{c.instructions+=3;NFSU2_TR(0x76300d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76300f:{NFSU2_TR(0x76300f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xffffffe0ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffe0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B763012:{NFSU2_TR(0x763012);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76302a;}}
}
B763014:L763014:{c.instructions+=2;NFSU2_TR(0x763014);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B763016:{NFSU2_TR(0x763016);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76301b;}}
}
B763018:L763018:{c.instructions+=2;NFSU2_TR(0x763018);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76301a:{NFSU2_TR(0x76301a);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76301b:L76301b:{c.instructions+=5;NFSU2_TR(0x76301b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76301c:{NFSU2_TR(0x76301c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76301d:{NFSU2_TR(0x76301d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76301e:{NFSU2_TR(0x76301e);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba4a4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763024:{NFSU2_TR(0x763024);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830d4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76302aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76302a:L76302a:{c.instructions+=2;NFSU2_TR(0x76302a);
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
B76302c:{NFSU2_TR(0x76302c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763043;}}
}
B76302e:L76302e:{c.instructions+=2;NFSU2_TR(0x76302e);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b8714),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B763034:{NFSU2_TR(0x763034);
if(r1(R+518)){{goto L763043;}}
}
B763036:L763036:{c.instructions+=2;NFSU2_TR(0x763036);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763037:{NFSU2_TR(0x763037);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76303cull));
{goto L763d45;}
}
B76303c:L76303c:{c.instructions+=3;NFSU2_TR(0x76303c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76303d:{NFSU2_TR(0x76303d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76303f:{NFSU2_TR(0x76303f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76300du);}goto L76300d;}}
}
B763041:L763041:{c.instructions+=1;NFSU2_TR(0x763041);
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
B763043:L763043:{c.instructions+=1;NFSU2_TR(0x763043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763048ull));
TAIL_STATIC(0x760ddbu,760);
}
B763048:L763048:{c.instructions+=1;NFSU2_TR(0x763048);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B763049:L763049:{c.instructions+=3;NFSU2_TR(0x763049);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76304b:{NFSU2_TR(0x76304b);
u8 U[4];
w4(U+0,u32(0x7d4280ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763050:{NFSU2_TR(0x763050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763055ull));
TAIL_STATIC(0x760da0u,760);
}
B763055:L763055:{c.instructions+=2;NFSU2_TR(0x763055);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ba4a8),4);
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
B76305c:{NFSU2_TR(0x76305c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763098;}}
}
B76305e:L76305e:{c.instructions+=2;NFSU2_TR(0x76305e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763060:{NFSU2_TR(0x763060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763065ull));
{goto L7631f1;}
}
B763065:L763065:{c.instructions+=5;NFSU2_TR(0x763065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763066:{NFSU2_TR(0x763066);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76306a:{NFSU2_TR(0x76306a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76306d:{NFSU2_TR(0x76306d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76306e:{NFSU2_TR(0x76306e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763073ull));
{goto L76326a;}
}
B763073:L763073:{c.instructions+=4;NFSU2_TR(0x763073);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763074:{NFSU2_TR(0x763074);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763077:{NFSU2_TR(0x763077);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B763079:{NFSU2_TR(0x763079);
if(r1(R+518)){{goto L763086;}}
}
B76307b:L76307b:{c.instructions+=4;NFSU2_TR(0x76307b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76307e:{NFSU2_TR(0x76307e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x9ull))));
}
B763081:{NFSU2_TR(0x763081);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763084:{NFSU2_TR(0x763084);
{goto L763089;}
}
B763086:L763086:{c.instructions+=1;NFSU2_TR(0x763086);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B763089:L763089:{c.instructions+=2;NFSU2_TR(0x763089);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76308d:{NFSU2_TR(0x76308d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763092ull));
{goto L7630b6;}
}
B763092:L763092:{c.instructions+=2;NFSU2_TR(0x763092);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
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
B763096:{NFSU2_TR(0x763096);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7630ab;}}
}
B763098:L763098:{c.instructions+=4;NFSU2_TR(0x763098);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76309b:{NFSU2_TR(0x76309b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76309d:{NFSU2_TR(0x76309d);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba4a4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7630a3:{NFSU2_TR(0x7630a3);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830d0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7630a9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7630a9:L7630a9:{c.instructions+=1;NFSU2_TR(0x7630a9);
__builtin_memmove((R+24),(R+0),4);
}
B7630ab:L7630ab:{c.instructions+=2;NFSU2_TR(0x7630ab);
__builtin_memmove((R+0),(R+24),4);
}
B7630ad:{NFSU2_TR(0x7630ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7630b2ull));
TAIL_STATIC(0x760ddbu,760);
}
B7630b2:L7630b2:{c.instructions+=1;NFSU2_TR(0x7630b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7630b6:L7630b6:{c.instructions+=2;NFSU2_TR(0x7630b6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7630b8:{NFSU2_TR(0x7630b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7630bdull));
{goto L76315d;}
}
B7630bd:L7630bd:{c.instructions+=2;NFSU2_TR(0x7630bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7630be:{NFSU2_TR(0x7630be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7630bf:L7630bf:{c.instructions+=4;NFSU2_TR(0x7630bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7630c0:{NFSU2_TR(0x7630c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7630c1:{NFSU2_TR(0x7630c1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7630c3:{NFSU2_TR(0x7630c3);
w4(R+28,u32(0x8b85c0ull));
}
B7630c8:L7630c8:{c.instructions+=2;NFSU2_TR(0x7630c8);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x81a344ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B7630d0:{NFSU2_TR(0x7630d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7630f0;}}
}
B7630d2:L7630d2:{c.instructions+=6;NFSU2_TR(0x7630d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x81a340ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7630d9:{NFSU2_TR(0x7630d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7630db:{NFSU2_TR(0x7630db);
u8 U[4];
w4(U+0,u32(0xfa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7630e0:{NFSU2_TR(0x7630e0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B7630e2:{NFSU2_TR(0x7630e2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x18ull))));
}
B7630e5:{NFSU2_TR(0x7630e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7630eaull));
TAIL_STATIC(0x76c3b6u,76c);
}
B7630ea:L7630ea:{c.instructions+=4;NFSU2_TR(0x7630ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7630ec:{NFSU2_TR(0x7630ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7630ed:{NFSU2_TR(0x7630ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7630ee:{NFSU2_TR(0x7630ee);
if(r1(R+518)){{goto L7630fc;}}
}
B7630f0:L7630f0:{c.instructions+=3;NFSU2_TR(0x7630f0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7630f1:{NFSU2_TR(0x7630f1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x24ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7630f4:{NFSU2_TR(0x7630f4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7630c8u);}goto L7630c8;}}
}
B7630f6:L7630f6:{c.instructions+=2;NFSU2_TR(0x7630f6);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7630f8:{NFSU2_TR(0x7630f8);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7630f9:L7630f9:{c.instructions+=3;NFSU2_TR(0x7630f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7630fa:{NFSU2_TR(0x7630fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7630fb:{NFSU2_TR(0x7630fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7630fc:L7630fc:{c.instructions+=3;NFSU2_TR(0x7630fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x81a340ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B763104:{NFSU2_TR(0x763104);
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
B763106:{NFSU2_TR(0x763106);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7630f9u);}goto L7630f9;}
}
B763108:L763108:{c.instructions+=5;NFSU2_TR(0x763108);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763109:{NFSU2_TR(0x763109);
__builtin_memmove((R+12),gp(0x7831b8),4);
}
B76310f:{NFSU2_TR(0x76310f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763110:{NFSU2_TR(0x763110);
w4(R+24,u32(0x81a340ull));
}
B763115:{NFSU2_TR(0x763115);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763116:L763116:{c.instructions+=3;NFSU2_TR(0x763116);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B763118:{NFSU2_TR(0x763118);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76311a:{NFSU2_TR(0x76311a);
if(r1(R+518)){{goto L76312f;}}
}
B76311c:L76311c:{c.instructions+=2;NFSU2_TR(0x76311c);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B763120:{NFSU2_TR(0x763120);
if(r1(R+518)){{goto L76312f;}}
}
B763122:L763122:{c.instructions+=2;NFSU2_TR(0x763122);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763123:{NFSU2_TR(0x763123);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763125ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B763125:L763125:{c.instructions+=2;NFSU2_TR(0x763125);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763126:{NFSU2_TR(0x763126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76312bull));
TAIL_STATIC(0x75c6dau,75c);
}
B76312b:L76312b:{c.instructions+=2;NFSU2_TR(0x76312b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B76312e:{NFSU2_TR(0x76312e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76312f:L76312f:{c.instructions+=3;NFSU2_TR(0x76312f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B763132:{NFSU2_TR(0x763132);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x81a460ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x81a460ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B763138:{NFSU2_TR(0x763138);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763116u);}goto L763116;}}
}
B76313a:L76313a:{c.instructions+=2;NFSU2_TR(0x76313a);
w4(R+24,u32(0x81a340ull));
}
B76313f:{NFSU2_TR(0x76313f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B763140:L763140:{c.instructions+=3;NFSU2_TR(0x763140);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B763142:{NFSU2_TR(0x763142);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B763144:{NFSU2_TR(0x763144);
if(r1(R+518)){{goto L76314f;}}
}
B763146:L763146:{c.instructions+=2;NFSU2_TR(0x763146);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B76314a:{NFSU2_TR(0x76314a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76314f;}}
}
B76314c:L76314c:{c.instructions+=2;NFSU2_TR(0x76314c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76314d:{NFSU2_TR(0x76314d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76314full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76314f:L76314f:{c.instructions+=3;NFSU2_TR(0x76314f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B763152:{NFSU2_TR(0x763152);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x81a460ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x81a460ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x81a460ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B763158:{NFSU2_TR(0x763158);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763140u);}goto L763140;}}
}
B76315a:L76315a:{c.instructions+=3;NFSU2_TR(0x76315a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76315b:{NFSU2_TR(0x76315b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76315c:{NFSU2_TR(0x76315c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76315d:L76315d:{c.instructions+=5;NFSU2_TR(0x76315d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76315e:{NFSU2_TR(0x76315e);
__builtin_memmove((R+20),(R+16),4);
}
B763160:{NFSU2_TR(0x763160);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B763163:{NFSU2_TR(0x763163);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x81a340ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B76316a:{NFSU2_TR(0x76316a);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763170ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B763170:L763170:{c.instructions+=2;NFSU2_TR(0x763170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B763171:{NFSU2_TR(0x763171);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B763172:L763172:{c.instructions+=7;NFSU2_TR(0x763172);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763173:{NFSU2_TR(0x763173);
__builtin_memmove((R+20),(R+16),4);
}
B763175:{NFSU2_TR(0x763175);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763176:{NFSU2_TR(0x763176);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B763179:{NFSU2_TR(0x763179);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x81a340ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B763180:{NFSU2_TR(0x763180);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B763183:{NFSU2_TR(0x763183);
if(r1(R+518)){{goto L76318a;}}
}
B763185:L763185:{c.instructions+=3;NFSU2_TR(0x763185);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B763187:{NFSU2_TR(0x763187);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B763188:{NFSU2_TR(0x763188);
{goto L7631ee;}
}
B76318a:L76318a:{c.instructions+=3;NFSU2_TR(0x76318a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76318b:{NFSU2_TR(0x76318b);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76318d:{NFSU2_TR(0x76318d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763192ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B763192:L763192:{c.instructions+=4;NFSU2_TR(0x763192);
__builtin_memmove((R+28),(R+0),4);
}
B763194:{NFSU2_TR(0x763194);
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
B763196:{NFSU2_TR(0x763196);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763197:{NFSU2_TR(0x763197);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7631a8;}}
}
B763199:L763199:{c.instructions+=1;NFSU2_TR(0x763199);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76319eull));
TAIL_STATIC(0x7661bau,766);
}
B76319e:L76319e:{c.instructions+=3;NFSU2_TR(0x76319e);
u8 U[4];
w4(U+0,u32(0xcull));
s4(u32(r4(R+0)),r4(U+0));
}
B7631a4:{NFSU2_TR(0x7631a4);
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
B7631a6:{NFSU2_TR(0x7631a6);
{goto L7631ed;}
}
B7631a8:L7631a8:{c.instructions+=2;NFSU2_TR(0x7631a8);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7631aa:{NFSU2_TR(0x7631aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7631afull));
{goto L7631f1;}
}
B7631af:L7631af:{c.instructions+=3;NFSU2_TR(0x7631af);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7631b2:{NFSU2_TR(0x7631b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7631b3:{NFSU2_TR(0x7631b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7631db;}}
}
B7631b5:L7631b5:{c.instructions+=3;NFSU2_TR(0x7631b5);
u8 U[4];
w4(U+0,u32(0xfa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7631ba:{NFSU2_TR(0x7631ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7631bb:{NFSU2_TR(0x7631bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7631c0ull));
TAIL_STATIC(0x76c3b6u,76c);
}
B7631c0:L7631c0:{c.instructions+=4;NFSU2_TR(0x7631c0);
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
B7631c2:{NFSU2_TR(0x7631c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7631c3:{NFSU2_TR(0x7631c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7631c4:{NFSU2_TR(0x7631c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7631d7;}}
}
B7631c6:L7631c6:{c.instructions+=2;NFSU2_TR(0x7631c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7631c7:{NFSU2_TR(0x7631c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7631ccull));
TAIL_STATIC(0x75c6dau,75c);
}
B7631cc:L7631cc:{c.instructions+=2;NFSU2_TR(0x7631cc);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7631ce:{NFSU2_TR(0x7631ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7631d3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76315du);}goto L76315d;}
}
B7631d3:L7631d3:{c.instructions+=3;NFSU2_TR(0x7631d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7631d4:{NFSU2_TR(0x7631d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7631d5:{NFSU2_TR(0x7631d5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763199u);}goto L763199;}
}
B7631d7:L7631d7:{c.instructions+=2;NFSU2_TR(0x7631d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B7631d9:{NFSU2_TR(0x7631d9);
{goto L7631e2;}
}
B7631db:L7631db:{c.instructions+=2;NFSU2_TR(0x7631db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7631dc:{NFSU2_TR(0x7631dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7631e1ull));
TAIL_STATIC(0x75c6dau,75c);
}
B7631e1:L7631e1:{c.instructions+=1;NFSU2_TR(0x7631e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7631e2:L7631e2:{c.instructions+=2;NFSU2_TR(0x7631e2);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7631e4:{NFSU2_TR(0x7631e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7631e9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76315du);}goto L76315d;}
}
B7631e9:L7631e9:{c.instructions+=3;NFSU2_TR(0x7631e9);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7631eb:{NFSU2_TR(0x7631eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7631ec:{NFSU2_TR(0x7631ec);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7631ed:L7631ed:{c.instructions+=1;NFSU2_TR(0x7631ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7631ee:L7631ee:{c.instructions+=3;NFSU2_TR(0x7631ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7631ef:{NFSU2_TR(0x7631ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7631f0:{NFSU2_TR(0x7631f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7631f1:L7631f1:{c.instructions+=7;NFSU2_TR(0x7631f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7631f2:{NFSU2_TR(0x7631f2);
__builtin_memmove((R+20),(R+16),4);
}
B7631f4:{NFSU2_TR(0x7631f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7631f7:{NFSU2_TR(0x7631f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7631f8:{NFSU2_TR(0x7631f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x81a340ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7631ff:{NFSU2_TR(0x7631ff);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
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
B763202:{NFSU2_TR(0x763202);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763217;}}
}
B763204:L763204:{c.instructions+=2;NFSU2_TR(0x763204);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763205:{NFSU2_TR(0x763205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76320aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763172u);}goto L763172;}
}
B76320a:L76320a:{c.instructions+=3;NFSU2_TR(0x76320a);
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
B76320c:{NFSU2_TR(0x76320c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76320d:{NFSU2_TR(0x76320d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763217;}}
}
B76320f:L76320f:{c.instructions+=2;NFSU2_TR(0x76320f);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763211:{NFSU2_TR(0x763211);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763216ull));
TAIL_STATIC(0x75bc7eu,75b);
}
B763216:L763216:{c.instructions+=1;NFSU2_TR(0x763216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763217:L763217:{c.instructions+=2;NFSU2_TR(0x763217);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B763219:{NFSU2_TR(0x763219);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76321full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76321f:L76321f:{c.instructions+=3;NFSU2_TR(0x76321f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B763220:{NFSU2_TR(0x763220);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B763221:{NFSU2_TR(0x763221);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B763222:L763222:{c.instructions+=4;NFSU2_TR(0x763222);
u8 U[4];
w4(U+0,u32(0x140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763227:{NFSU2_TR(0x763227);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763229:{NFSU2_TR(0x763229);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba4a4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76322f:{NFSU2_TR(0x76322f);
u8 U[4];
__builtin_memmove((U+0),gp(0x78325c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763235ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B763235:L763235:{c.instructions+=3;NFSU2_TR(0x763235);
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
B763237:{NFSU2_TR(0x763237);
__builtin_memmove(gp(0x8ba490),(R+0),4);
}
B76323c:{NFSU2_TR(0x76323c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76323f;}}
}
B76323e:L76323e:{c.instructions+=1;NFSU2_TR(0x76323e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76323f:L76323f:{c.instructions+=9;NFSU2_TR(0x76323f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763243:{NFSU2_TR(0x763243);
s4(0x8ba488,u32(u32(m4(0x8ba488))&u32(u32(0x0ull))));
}
B76324a:{NFSU2_TR(0x76324a);
s4(0x8ba48c,u32(u32(m4(0x8ba48c))&u32(u32(0x0ull))));
}
B763251:{NFSU2_TR(0x763251);
__builtin_memmove(gp(0x8ba498),(R+0),4);
}
B763256:{NFSU2_TR(0x763256);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B763258:{NFSU2_TR(0x763258);
__builtin_memmove(gp(0x8ba494),(R+4),4);
}
B76325e:{NFSU2_TR(0x76325e);
s4(0x8ba49c,u32(0x10ull));
}
B763268:{NFSU2_TR(0x763268);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B763269:{NFSU2_TR(0x763269);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76326a:L76326a:{c.instructions+=5;NFSU2_TR(0x76326a);
__builtin_memmove((R+0),gp(0x8ba48c),4);
}
B76326f:{NFSU2_TR(0x76326f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B763272:{NFSU2_TR(0x763272);
__builtin_memmove((R+0),gp(0x8ba490),4);
}
B763277:{NFSU2_TR(0x763277);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B76327a:{NFSU2_TR(0x76327a);
{goto L76328e;}
}
B76327c:L76327c:{c.instructions+=4;NFSU2_TR(0x76327c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B763280:{NFSU2_TR(0x763280);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B763283:{NFSU2_TR(0x763283);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x100000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x100000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x100000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B763289:{NFSU2_TR(0x763289);
if(r1(R+512)){{goto L763294;}}
}
B76328b:L76328b:{c.instructions+=1;NFSU2_TR(0x76328b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B76328e:L76328e:{c.instructions+=2;NFSU2_TR(0x76328e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B763290:{NFSU2_TR(0x763290);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76327cu);}goto L76327c;}}
}
B763292:L763292:{c.instructions+=1;NFSU2_TR(0x763292);
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
B763294:L763294:{c.instructions+=1;NFSU2_TR(0x763294);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B763295:L763295:{c.instructions+=21;NFSU2_TR(0x763295);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763296:{NFSU2_TR(0x763296);
__builtin_memmove((R+20),(R+16),4);
}
B763298:{NFSU2_TR(0x763298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B76329b:{NFSU2_TR(0x76329b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76329e:{NFSU2_TR(0x76329e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7632a1:{NFSU2_TR(0x7632a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7632a2:{NFSU2_TR(0x7632a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7632a5:{NFSU2_TR(0x7632a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7632a6:{NFSU2_TR(0x7632a6);
__builtin_memmove((R+28),(R+24),4);
}
B7632a8:{NFSU2_TR(0x7632a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B7632ab:{NFSU2_TR(0x7632ab);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B7632ae:{NFSU2_TR(0x7632ae);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B7632b1:{NFSU2_TR(0x7632b1);
__builtin_memmove((R+4),(R+28),4);
}
B7632b3:{NFSU2_TR(0x7632b3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x204ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B7632b9:{NFSU2_TR(0x7632b9);
u8 U[12];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7632c0:{NFSU2_TR(0x7632c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7632c3:{NFSU2_TR(0x7632c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7632c5:{NFSU2_TR(0x7632c5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7632c6:{NFSU2_TR(0x7632c6);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7632c9:{NFSU2_TR(0x7632c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7632cc:{NFSU2_TR(0x7632cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7635a9;}}
}
B7632d2:L7632d2:{c.instructions+=10;NFSU2_TR(0x7632d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7632d3:{NFSU2_TR(0x7632d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B7632d6:{NFSU2_TR(0x7632d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7632d8:{NFSU2_TR(0x7632d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7632db:{NFSU2_TR(0x7632db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7632de:{NFSU2_TR(0x7632de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7632e1:{NFSU2_TR(0x7632e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7632e4:{NFSU2_TR(0x7632e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7632e7:{NFSU2_TR(0x7632e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7632ea:{NFSU2_TR(0x7632ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763360;}}
}
B7632ec:L7632ec:{c.instructions+=4;NFSU2_TR(0x7632ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7632ef:{NFSU2_TR(0x7632ef);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B7632f0:{NFSU2_TR(0x7632f0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x3full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7632f3:{NFSU2_TR(0x7632f3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7632f8;}}
}
B7632f5:L7632f5:{c.instructions+=2;NFSU2_TR(0x7632f5);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7632f7:{NFSU2_TR(0x7632f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7632f8:L7632f8:{c.instructions+=3;NFSU2_TR(0x7632f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7632fb:{NFSU2_TR(0x7632fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7632fe:{NFSU2_TR(0x7632fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763342;}}
}
B763300:L763300:{c.instructions+=3;NFSU2_TR(0x763300);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x20ull))));
}
B763303:{NFSU2_TR(0x763303);
w4(R+12,u32(0x80000000ull));
}
B763308:{NFSU2_TR(0x763308);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L763323;}}
}
B76330a:L76330a:{c.instructions+=7;NFSU2_TR(0x76330a);
__builtin_memmove((R+4),(R+8),4);
}
B76330c:{NFSU2_TR(0x76330c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B76330e:{NFSU2_TR(0x76330e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B763312:{NFSU2_TR(0x763312);
w4(R+12,u32(~u32(r4(R+12))));
}
B763314:{NFSU2_TR(0x763314);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(r4(R+12))));
s4(u32(r4(U+8)),r4(U+12));
}
B763318:{NFSU2_TR(0x763318);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+0,u8(u32(r1(U+0))-u32(u8(0x1ull))));
s1(u32(r4(R+4)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76331a:{NFSU2_TR(0x76331a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76333f;}}
}
B76331c:L76331c:{c.instructions+=3;NFSU2_TR(0x76331c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76331f:{NFSU2_TR(0x76331f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B763321:{NFSU2_TR(0x763321);
{goto L76333f;}
}
B763323:L763323:{c.instructions+=7;NFSU2_TR(0x763323);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763326:{NFSU2_TR(0x763326);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B763328:{NFSU2_TR(0x763328);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B76332c:{NFSU2_TR(0x76332c);
w4(R+12,u32(~u32(r4(R+12))));
}
B76332e:{NFSU2_TR(0x76332e);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(r4(R+12))));
s4(u32(r4(U+8)),r4(U+12));
}
B763335:{NFSU2_TR(0x763335);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+0,u8(u32(r1(U+0))-u32(u8(0x1ull))));
s1(u32(r4(R+4)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B763337:{NFSU2_TR(0x763337);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76333f;}}
}
B763339:L763339:{c.instructions+=2;NFSU2_TR(0x763339);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76333c:{NFSU2_TR(0x76333c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B76333f:L76333f:{c.instructions+=1;NFSU2_TR(0x76333f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763342:L763342:{c.instructions+=10;NFSU2_TR(0x763342);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B763345:{NFSU2_TR(0x763345);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763348:{NFSU2_TR(0x763348);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76334b:{NFSU2_TR(0x76334b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B76334e:{NFSU2_TR(0x76334e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763351:{NFSU2_TR(0x763351);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B763354:{NFSU2_TR(0x763354);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763357:{NFSU2_TR(0x763357);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76335a:{NFSU2_TR(0x76335a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76335d:{NFSU2_TR(0x76335d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763360:L763360:{c.instructions+=5;NFSU2_TR(0x763360);
__builtin_memmove((R+8),(R+4),4);
}
B763362:{NFSU2_TR(0x763362);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B763365:{NFSU2_TR(0x763365);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B763366:{NFSU2_TR(0x763366);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x3full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B763369:{NFSU2_TR(0x763369);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L76336e;}}
}
B76336b:L76336b:{c.instructions+=2;NFSU2_TR(0x76336b);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76336d:{NFSU2_TR(0x76336d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76336e:L76336e:{c.instructions+=4;NFSU2_TR(0x76336e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763371:{NFSU2_TR(0x763371);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B763374:{NFSU2_TR(0x763374);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763377:{NFSU2_TR(0x763377);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76340c;}}
}
B76337d:L76337d:{c.instructions+=9;NFSU2_TR(0x76337d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B763380:{NFSU2_TR(0x763380);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763383:{NFSU2_TR(0x763383);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B763386:{NFSU2_TR(0x763386);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763388:{NFSU2_TR(0x763388);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76338b:{NFSU2_TR(0x76338b);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B76338c:{NFSU2_TR(0x76338c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76338d:{NFSU2_TR(0x76338d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76338f:{NFSU2_TR(0x76338f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L763393;}}
}
B763391:L763391:{c.instructions+=1;NFSU2_TR(0x763391);
__builtin_memmove((R+12),(R+24),4);
}
B763393:L763393:{c.instructions+=7;NFSU2_TR(0x763393);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B763396:{NFSU2_TR(0x763396);
__builtin_memmove((R+8),(R+4),4);
}
B763398:{NFSU2_TR(0x763398);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B76339b:{NFSU2_TR(0x76339b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B76339c:{NFSU2_TR(0x76339c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76339e:{NFSU2_TR(0x76339e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7633a1:{NFSU2_TR(0x7633a1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7633a5;}}
}
B7633a3:L7633a3:{c.instructions+=1;NFSU2_TR(0x7633a3);
__builtin_memmove((R+8),(R+24),4);
}
B7633a5:L7633a5:{c.instructions+=2;NFSU2_TR(0x7633a5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7633a7:{NFSU2_TR(0x7633a7);
if(r1(R+518)){{goto L763407;}}
}
B7633a9:L7633a9:{c.instructions+=4;NFSU2_TR(0x7633a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7633ac:{NFSU2_TR(0x7633ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7633af:{NFSU2_TR(0x7633af);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7633b2:{NFSU2_TR(0x7633b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7633ef;}}
}
B7633b4:L7633b4:{c.instructions+=3;NFSU2_TR(0x7633b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x20ull))));
}
B7633b7:{NFSU2_TR(0x7633b7);
w4(R+24,u32(0x80000000ull));
}
B7633bc:{NFSU2_TR(0x7633bc);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7633d5;}}
}
B7633be:L7633be:{c.instructions+=6;NFSU2_TR(0x7633be);
__builtin_memmove((R+4),(R+12),4);
}
B7633c0:{NFSU2_TR(0x7633c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r1(U+0))));
}
B7633c2:{NFSU2_TR(0x7633c2);
w4(R+24,u32(~u32(r4(R+24))));
}
B7633c4:{NFSU2_TR(0x7633c4);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(r4(R+24))));
s4(u32(r4(U+8)),r4(U+12));
}
B7633c8:{NFSU2_TR(0x7633c8);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))-u32(u8(0x1ull))));
s1(u32(r4(U+8)),r1(U+12));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(R+518,u8((r1(U+12))==(u8(0x0ull))));
}
B7633cc:{NFSU2_TR(0x7633cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7633ef;}}
}
B7633ce:L7633ce:{c.instructions+=3;NFSU2_TR(0x7633ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7633d1:{NFSU2_TR(0x7633d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+24))));
s4(u32(r4(R+4)),r4(U+0));
}
B7633d3:{NFSU2_TR(0x7633d3);
{goto L7633ef;}
}
B7633d5:L7633d5:{c.instructions+=6;NFSU2_TR(0x7633d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7633d8:{NFSU2_TR(0x7633d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r1(U+0))));
}
B7633da:{NFSU2_TR(0x7633da);
w4(R+24,u32(~u32(r4(R+24))));
}
B7633dc:{NFSU2_TR(0x7633dc);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(r4(R+24))));
s4(u32(r4(U+8)),r4(U+12));
}
B7633e3:{NFSU2_TR(0x7633e3);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))-u32(u8(0x1ull))));
s1(u32(r4(U+8)),r1(U+12));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(R+518,u8((r1(U+12))==(u8(0x0ull))));
}
B7633e7:{NFSU2_TR(0x7633e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7633ef;}}
}
B7633e9:L7633e9:{c.instructions+=2;NFSU2_TR(0x7633e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7633ec:{NFSU2_TR(0x7633ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B7633ef:L7633ef:{c.instructions+=8;NFSU2_TR(0x7633ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7633f2:{NFSU2_TR(0x7633f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7633f5:{NFSU2_TR(0x7633f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7633f8:{NFSU2_TR(0x7633f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7633fb:{NFSU2_TR(0x7633fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7633fe:{NFSU2_TR(0x7633fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B763401:{NFSU2_TR(0x763401);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763404:{NFSU2_TR(0x763404);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763407:L763407:{c.instructions+=2;NFSU2_TR(0x763407);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76340a:{NFSU2_TR(0x76340a);
{goto L76340f;}
}
B76340c:L76340c:{c.instructions+=1;NFSU2_TR(0x76340c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76340f:L76340f:{c.instructions+=2;NFSU2_TR(0x76340f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B763413:{NFSU2_TR(0x763413);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76341d;}}
}
B763415:L763415:{c.instructions+=2;NFSU2_TR(0x763415);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B763417:{NFSU2_TR(0x763417);
if(r1(R+518)){{goto L76349d;}}
}
B76341d:L76341d:{c.instructions+=11;NFSU2_TR(0x76341d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763420:{NFSU2_TR(0x763420);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B763423:{NFSU2_TR(0x763423);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763426:{NFSU2_TR(0x763426);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763429:{NFSU2_TR(0x763429);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76342c:{NFSU2_TR(0x76342c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76342f:{NFSU2_TR(0x76342f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763432:{NFSU2_TR(0x763432);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763435:{NFSU2_TR(0x763435);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763438:{NFSU2_TR(0x763438);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76343b:{NFSU2_TR(0x76343b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76349d;}}
}
B76343d:L76343d:{c.instructions+=6;NFSU2_TR(0x76343d);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B763441:{NFSU2_TR(0x763441);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B763444:{NFSU2_TR(0x763444);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B763446:{NFSU2_TR(0x763446);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x20ull))));
}
B763449:{NFSU2_TR(0x763449);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B76344d:{NFSU2_TR(0x76344d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L763474;}}
}
B76344f:L76344f:{c.instructions+=2;NFSU2_TR(0x76344f);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B763453:{NFSU2_TR(0x763453);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763463;}}
}
B763455:L763455:{c.instructions+=5;NFSU2_TR(0x763455);
__builtin_memmove((R+4),(R+8),4);
}
B763457:{NFSU2_TR(0x763457);
w4(R+12,u32(0x80000000ull));
}
B76345c:{NFSU2_TR(0x76345c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B76345e:{NFSU2_TR(0x76345e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763461:{NFSU2_TR(0x763461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B763463:L763463:{c.instructions+=6;NFSU2_TR(0x763463);
w4(R+12,u32(0x80000000ull));
}
B763468:{NFSU2_TR(0x763468);
__builtin_memmove((R+4),(R+8),4);
}
B76346a:{NFSU2_TR(0x76346a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B76346c:{NFSU2_TR(0x76346c);
u8 U[12];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B763470:{NFSU2_TR(0x763470);
u8 U[4];
w1(R+512,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+12))));
s4(u32(r4(R+0)),r4(U+0));
}
B763472:{NFSU2_TR(0x763472);
{goto L76349d;}
}
B763474:L763474:{c.instructions+=2;NFSU2_TR(0x763474);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B763478:{NFSU2_TR(0x763478);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76348a;}}
}
B76347a:L76347a:{c.instructions+=5;NFSU2_TR(0x76347a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76347d:{NFSU2_TR(0x76347d);
w4(R+12,u32(0x80000000ull));
}
B763482:{NFSU2_TR(0x763482);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B763484:{NFSU2_TR(0x763484);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763487:{NFSU2_TR(0x763487);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B76348a:L76348a:{c.instructions+=5;NFSU2_TR(0x76348a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76348d:{NFSU2_TR(0x76348d);
w4(R+8,u32(0x80000000ull));
}
B763492:{NFSU2_TR(0x763492);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B763494:{NFSU2_TR(0x763494);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76349b:{NFSU2_TR(0x76349b);
u8 U[4];
w1(R+512,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B76349d:L76349d:{c.instructions+=6;NFSU2_TR(0x76349d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7634a0:{NFSU2_TR(0x7634a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B7634a2:{NFSU2_TR(0x7634a2);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B7634a6:{NFSU2_TR(0x7634a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7634a9:{NFSU2_TR(0x7634a9);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B7634ab:{NFSU2_TR(0x7634ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7635a8;}}
}
B7634b1:L7634b1:{c.instructions+=3;NFSU2_TR(0x7634b1);
__builtin_memmove((R+0),gp(0x8ba488),4);
}
B7634b6:{NFSU2_TR(0x7634b6);
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
B7634b8:{NFSU2_TR(0x7634b8);
if(r1(R+518)){{goto L76359a;}}
}
B7634be:L7634be:{c.instructions+=9;NFSU2_TR(0x7634be);
__builtin_memmove((R+4),gp(0x8ba4a0),4);
}
B7634c4:{NFSU2_TR(0x7634c4);
__builtin_memmove((R+24),gp(0x7831f0),4);
}
B7634ca:{NFSU2_TR(0x7634ca);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7634cf:{NFSU2_TR(0x7634cf);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7634d2:{NFSU2_TR(0x7634d2);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7634d5:{NFSU2_TR(0x7634d5);
w4(R+12,u32(0x8000ull));
}
B7634da:{NFSU2_TR(0x7634da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7634db:{NFSU2_TR(0x7634db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7634dc:{NFSU2_TR(0x7634dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7634deull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7634de:L7634de:{c.instructions+=16;NFSU2_TR(0x7634de);
__builtin_memmove((R+4),gp(0x8ba4a0),4);
}
B7634e4:{NFSU2_TR(0x7634e4);
__builtin_memmove((R+0),gp(0x8ba488),4);
}
B7634e9:{NFSU2_TR(0x7634e9);
w4(R+8,u32(0x80000000ull));
}
B7634ee:{NFSU2_TR(0x7634ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B7634f0:{NFSU2_TR(0x7634f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B7634f3:{NFSU2_TR(0x7634f3);
__builtin_memmove((R+0),gp(0x8ba488),4);
}
B7634f8:{NFSU2_TR(0x7634f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7634fb:{NFSU2_TR(0x7634fb);
__builtin_memmove((R+4),gp(0x8ba4a0),4);
}
B763501:{NFSU2_TR(0x763501);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B763509:{NFSU2_TR(0x763509);
__builtin_memmove((R+0),gp(0x8ba488),4);
}
B76350e:{NFSU2_TR(0x76350e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B763511:{NFSU2_TR(0x763511);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x43ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))-u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B763514:{NFSU2_TR(0x763514);
__builtin_memmove((R+0),gp(0x8ba488),4);
}
B763519:{NFSU2_TR(0x763519);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76351c:{NFSU2_TR(0x76351c);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x43ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B763520:{NFSU2_TR(0x763520);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76352b;}}
}
B763522:L763522:{c.instructions+=2;NFSU2_TR(0x763522);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763526:{NFSU2_TR(0x763526);
__builtin_memmove((R+0),gp(0x8ba488),4);
}
B76352b:L76352b:{c.instructions+=2;NFSU2_TR(0x76352b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B76352f:{NFSU2_TR(0x76352f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76359a;}}
}
B763531:L763531:{c.instructions+=4;NFSU2_TR(0x763531);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763532:{NFSU2_TR(0x763532);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763534:{NFSU2_TR(0x763534);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B763537:{NFSU2_TR(0x763537);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763539ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B763539:L763539:{c.instructions+=5;NFSU2_TR(0x763539);
__builtin_memmove((R+0),gp(0x8ba488),4);
}
B76353e:{NFSU2_TR(0x76353e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B763541:{NFSU2_TR(0x763541);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763543:{NFSU2_TR(0x763543);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba4a4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763549:{NFSU2_TR(0x763549);
u8 U[4];
__builtin_memmove((U+0),gp(0x783254),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76354full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76354f:L76354f:{c.instructions+=13;NFSU2_TR(0x76354f);
__builtin_memmove((R+0),gp(0x8ba48c),4);
}
B763554:{NFSU2_TR(0x763554);
__builtin_memmove((R+8),gp(0x8ba490),4);
}
B76355a:{NFSU2_TR(0x76355a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76355d:{NFSU2_TR(0x76355d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B763560:{NFSU2_TR(0x763560);
__builtin_memmove((R+4),(R+0),4);
}
B763562:{NFSU2_TR(0x763562);
__builtin_memmove((R+0),gp(0x8ba488),4);
}
B763567:{NFSU2_TR(0x763567);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B763569:{NFSU2_TR(0x763569);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B76356d:{NFSU2_TR(0x76356d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76356e:{NFSU2_TR(0x76356e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763571:{NFSU2_TR(0x763571);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763572:{NFSU2_TR(0x763572);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763573:{NFSU2_TR(0x763573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763578ull));
TAIL_STATIC(0x75cfd0u,75c);
}
B763578:L763578:{c.instructions+=5;NFSU2_TR(0x763578);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76357b:{NFSU2_TR(0x76357b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76357e:{NFSU2_TR(0x76357e);
s4(0x8ba48c,u32(u32(m4(0x8ba48c))-u32(u32(0x1ull))));
}
B763584:{NFSU2_TR(0x763584);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ba488),4);
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
B76358a:{NFSU2_TR(0x76358a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L763590;}}
}
B76358c:L76358c:{c.instructions+=1;NFSU2_TR(0x76358c);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(U+4))<(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x14ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x14ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B763590:L763590:{c.instructions+=2;NFSU2_TR(0x763590);
__builtin_memmove((R+0),gp(0x8ba490),4);
}
B763595:{NFSU2_TR(0x763595);
__builtin_memmove(gp(0x8ba498),(R+0),4);
}
B76359a:L76359a:{c.instructions+=3;NFSU2_TR(0x76359a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76359d:{NFSU2_TR(0x76359d);
__builtin_memmove(gp(0x8ba488),(R+0),4);
}
B7635a2:{NFSU2_TR(0x7635a2);
__builtin_memmove(gp(0x8ba4a0),(R+28),4);
}
B7635a8:L7635a8:{c.instructions+=1;NFSU2_TR(0x7635a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7635a9:L7635a9:{c.instructions+=4;NFSU2_TR(0x7635a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7635aa:{NFSU2_TR(0x7635aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7635ab:{NFSU2_TR(0x7635ab);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7635ac:{NFSU2_TR(0x7635ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7635ad:L7635ad:{c.instructions+=6;NFSU2_TR(0x7635ad);
__builtin_memmove((R+0),gp(0x8ba48c),4);
}
B7635b2:{NFSU2_TR(0x7635b2);
__builtin_memmove((R+4),gp(0x8ba49c),4);
}
B7635b8:{NFSU2_TR(0x7635b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7635b9:{NFSU2_TR(0x7635b9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7635bb:{NFSU2_TR(0x7635bb);
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
B7635bd:{NFSU2_TR(0x7635bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7635f3;}}
}
B7635bf:L7635bf:{c.instructions+=7;NFSU2_TR(0x7635bf);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7635c3:{NFSU2_TR(0x7635c3);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B7635c6:{NFSU2_TR(0x7635c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7635c7:{NFSU2_TR(0x7635c7);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba490),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7635cd:{NFSU2_TR(0x7635cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7635ce:{NFSU2_TR(0x7635ce);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba4a4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7635d4:{NFSU2_TR(0x7635d4);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830d4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7635daull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7635da:L7635da:{c.instructions+=2;NFSU2_TR(0x7635da);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7635dc:{NFSU2_TR(0x7635dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7635e2;}}
}
B7635de:L7635de:{c.instructions+=3;NFSU2_TR(0x7635de);
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
B7635e0:{NFSU2_TR(0x7635e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7635e1:{NFSU2_TR(0x7635e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7635e2:L7635e2:{c.instructions+=3;NFSU2_TR(0x7635e2);
u8 U[6];
w1(R+512,carry<u32>(m4(0x8ba49c),u32(0x10ull)));
w1(R+523,scarry<u32>(m4(0x8ba49c),u32(0x10ull)));
s4(0x8ba49c,u32(u32(m4(0x8ba49c))+u32(u32(0x10ull))));
w1(R+519,u8(s32(m4(0x8ba49c))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8ba49c))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8ba49c))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7635e9:{NFSU2_TR(0x7635e9);
__builtin_memmove(gp(0x8ba490),(R+0),4);
}
B7635ee:{NFSU2_TR(0x7635ee);
__builtin_memmove((R+0),gp(0x8ba48c),4);
}
B7635f3:L7635f3:{c.instructions+=8;NFSU2_TR(0x7635f3);
__builtin_memmove((R+4),gp(0x8ba490),4);
}
B7635f9:{NFSU2_TR(0x7635f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7635fa:{NFSU2_TR(0x7635fa);
u8 U[4];
w4(U+0,u32(0x41c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7635ff:{NFSU2_TR(0x7635ff);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763601:{NFSU2_TR(0x763601);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba4a4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763607:{NFSU2_TR(0x763607);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76360a:{NFSU2_TR(0x76360a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B76360d:{NFSU2_TR(0x76360d);
u8 U[4];
__builtin_memmove((U+0),gp(0x78325c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763613ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B763613:L763613:{c.instructions+=3;NFSU2_TR(0x763613);
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
B763615:{NFSU2_TR(0x763615);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763618:{NFSU2_TR(0x763618);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76361e;}}
}
B76361a:L76361a:{c.instructions+=2;NFSU2_TR(0x76361a);
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
B76361c:{NFSU2_TR(0x76361c);
{goto L763661;}
}
B76361e:L76361e:{c.instructions+=5;NFSU2_TR(0x76361e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763620:{NFSU2_TR(0x763620);
u8 U[4];
w4(U+0,u32(0x2000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763625:{NFSU2_TR(0x763625);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76362a:{NFSU2_TR(0x76362a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76362b:{NFSU2_TR(0x76362b);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763631ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B763631:L763631:{c.instructions+=3;NFSU2_TR(0x763631);
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
B763633:{NFSU2_TR(0x763633);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763636:{NFSU2_TR(0x763636);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76364a;}}
}
B763638:L763638:{c.instructions+=4;NFSU2_TR(0x763638);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76363b:{NFSU2_TR(0x76363b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76363c:{NFSU2_TR(0x76363c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba4a4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763642:{NFSU2_TR(0x763642);
u8 U[4];
__builtin_memmove((U+0),gp(0x783254),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763648ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B763648:L763648:{c.instructions+=1;NFSU2_TR(0x763648);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76361au);}goto L76361a;}
}
B76364a:L76364a:{c.instructions+=7;NFSU2_TR(0x76364a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76364e:{NFSU2_TR(0x76364e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B763650:{NFSU2_TR(0x763650);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763653:{NFSU2_TR(0x763653);
s4(0x8ba48c,u32(u32(m4(0x8ba48c))+u32(u32(0x1ull))));
}
B763659:{NFSU2_TR(0x763659);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76365c:{NFSU2_TR(0x76365c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B76365f:{NFSU2_TR(0x76365f);
__builtin_memmove((R+0),(R+24),4);
}
B763661:L763661:{c.instructions+=3;NFSU2_TR(0x763661);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B763662:{NFSU2_TR(0x763662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B763663:{NFSU2_TR(0x763663);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B763664:L763664:{c.instructions+=12;NFSU2_TR(0x763664);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763665:{NFSU2_TR(0x763665);
__builtin_memmove((R+20),(R+16),4);
}
B763667:{NFSU2_TR(0x763667);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763668:{NFSU2_TR(0x763668);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763669:{NFSU2_TR(0x763669);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76366c:{NFSU2_TR(0x76366c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76366f:{NFSU2_TR(0x76366f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763670:{NFSU2_TR(0x763670);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763671:{NFSU2_TR(0x763671);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B763674:{NFSU2_TR(0x763674);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763675:{NFSU2_TR(0x763675);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B763677:{NFSU2_TR(0x763677);
{goto L76367c;}
}
B763679:L763679:{c.instructions+=2;NFSU2_TR(0x763679);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B76367b:{NFSU2_TR(0x76367b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76367c:L76367c:{c.instructions+=2;NFSU2_TR(0x76367c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76367e:{NFSU2_TR(0x76367e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763679u);}goto L763679;}}
}
B763680:L763680:{c.instructions+=6;NFSU2_TR(0x763680);
__builtin_memmove((R+0),(R+12),4);
}
B763682:{NFSU2_TR(0x763682);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x204ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B763688:{NFSU2_TR(0x763688);
u8 U[12];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76368f:{NFSU2_TR(0x76368f);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763691:{NFSU2_TR(0x763691);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763694:{NFSU2_TR(0x763694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B763695:L763695:{c.instructions+=5;NFSU2_TR(0x763695);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763698:{NFSU2_TR(0x763698);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76369b:{NFSU2_TR(0x76369b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B76369e:{NFSU2_TR(0x76369e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B76369f:{NFSU2_TR(0x76369f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763695u);}goto L763695;}}
}
B7636a1:L7636a1:{c.instructions+=8;NFSU2_TR(0x7636a1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7636a3:{NFSU2_TR(0x7636a3);
__builtin_memmove((R+28),(R+12),4);
}
B7636a5:{NFSU2_TR(0x7636a5);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7636aa:{NFSU2_TR(0x7636aa);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B7636ad:{NFSU2_TR(0x7636ad);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7636b0:{NFSU2_TR(0x7636b0);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7636b5:{NFSU2_TR(0x7636b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7636b6:{NFSU2_TR(0x7636b6);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7636bcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7636bc:L7636bc:{c.instructions+=2;NFSU2_TR(0x7636bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7636be:{NFSU2_TR(0x7636be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7636c8;}}
}
B7636c0:L7636c0:{c.instructions+=2;NFSU2_TR(0x7636c0);
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
B7636c3:{NFSU2_TR(0x7636c3);
{goto L763765;}
}
B7636c8:L7636c8:{c.instructions+=4;NFSU2_TR(0x7636c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7000ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7636ce:{NFSU2_TR(0x7636ce);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7636d0:{NFSU2_TR(0x7636d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7636d3:{NFSU2_TR(0x7636d3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L763718;}}
}
B7636d5:L7636d5:{c.instructions+=5;NFSU2_TR(0x7636d5);
__builtin_memmove((R+4),(R+8),4);
}
B7636d7:{NFSU2_TR(0x7636d7);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B7636d9:{NFSU2_TR(0x7636d9);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7636dc:{NFSU2_TR(0x7636dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7636df:{NFSU2_TR(0x7636df);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7636e0:L7636e0:{c.instructions+=11;NFSU2_TR(0x7636e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7636e4:{NFSU2_TR(0x7636e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7636eb:{NFSU2_TR(0x7636eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B7636f1:{NFSU2_TR(0x7636f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7636f3:{NFSU2_TR(0x7636f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffeffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B7636f9:{NFSU2_TR(0x7636f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xff0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B763700:{NFSU2_TR(0x763700);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763703:{NFSU2_TR(0x763703);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfe8ull))));
w4(U+4,u32(0xff0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76370d:{NFSU2_TR(0x76370d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1000ull))));
}
B763712:{NFSU2_TR(0x763712);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B763713:{NFSU2_TR(0x763713);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7636e0u);}goto L7636e0;}}
}
B763715:L763715:{c.instructions+=1;NFSU2_TR(0x763715);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B763718:L763718:{c.instructions+=19;NFSU2_TR(0x763718);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76371b:{NFSU2_TR(0x76371b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1f8ull))));
}
B763720:{NFSU2_TR(0x763720);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B763723:{NFSU2_TR(0x763723);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763726:{NFSU2_TR(0x763726);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763729:{NFSU2_TR(0x763729);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B76372c:{NFSU2_TR(0x76372c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76372f:{NFSU2_TR(0x76372f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763732:{NFSU2_TR(0x763732);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B763737:{NFSU2_TR(0x763737);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B763739:{NFSU2_TR(0x763739);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76373a:{NFSU2_TR(0x76373a);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B763741:{NFSU2_TR(0x763741);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x43ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B763744:{NFSU2_TR(0x763744);
__builtin_memmove((R+4),(R+0),1);
}
B763746:{NFSU2_TR(0x763746);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B763748:{NFSU2_TR(0x763748);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76374a:{NFSU2_TR(0x76374a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76374d:{NFSU2_TR(0x76374d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x43ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B763750:{NFSU2_TR(0x763750);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763755;}}
}
B763752:L763752:{c.instructions+=1;NFSU2_TR(0x763752);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B763755:L763755:{c.instructions+=6;NFSU2_TR(0x763755);
w4(R+8,u32(0x80000000ull));
}
B76375a:{NFSU2_TR(0x76375a);
__builtin_memmove((R+4),(R+12),4);
}
B76375c:{NFSU2_TR(0x76375c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B76375e:{NFSU2_TR(0x76375e);
w4(R+8,u32(~u32(r4(R+8))));
}
B763760:{NFSU2_TR(0x763760);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B763763:{NFSU2_TR(0x763763);
__builtin_memmove((R+0),(R+12),4);
}
B763765:L763765:{c.instructions+=5;NFSU2_TR(0x763765);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B763766:{NFSU2_TR(0x763766);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B763767:{NFSU2_TR(0x763767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B763768:{NFSU2_TR(0x763768);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B763769:{NFSU2_TR(0x763769);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76376a:L76376a:{c.instructions+=27;NFSU2_TR(0x76376a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76376b:{NFSU2_TR(0x76376b);
__builtin_memmove((R+20),(R+16),4);
}
B76376d:{NFSU2_TR(0x76376d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B763770:{NFSU2_TR(0x763770);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763773:{NFSU2_TR(0x763773);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B763776:{NFSU2_TR(0x763776);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763777:{NFSU2_TR(0x763777);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763778:{NFSU2_TR(0x763778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76377b:{NFSU2_TR(0x76377b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76377c:{NFSU2_TR(0x76377c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76377f:{NFSU2_TR(0x76377f);
__builtin_memmove((R+8),(R+28),4);
}
B763781:{NFSU2_TR(0x763781);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B763784:{NFSU2_TR(0x763784);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x17ull))));
}
B763787:{NFSU2_TR(0x763787);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B76378a:{NFSU2_TR(0x76378a);
__builtin_memmove((R+4),(R+8),4);
}
B76378c:{NFSU2_TR(0x76378c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x204ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B763792:{NFSU2_TR(0x763792);
u8 U[12];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B763799:{NFSU2_TR(0x763799);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76379c:{NFSU2_TR(0x76379c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76379f:{NFSU2_TR(0x76379f);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B7637a2:{NFSU2_TR(0x7637a2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7637a3:{NFSU2_TR(0x7637a3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7637a5:{NFSU2_TR(0x7637a5);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B7637a9:{NFSU2_TR(0x7637a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B7637ab:{NFSU2_TR(0x7637ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7637ae:{NFSU2_TR(0x7637ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7637b1:{NFSU2_TR(0x7637b1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76390c;}}
}
B7637b7:L7637b7:{c.instructions+=2;NFSU2_TR(0x7637b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7637ba:{NFSU2_TR(0x7637ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763905;}}
}
B7637c0:L7637c0:{c.instructions+=3;NFSU2_TR(0x7637c0);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B7637c2:{NFSU2_TR(0x7637c2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7637c4:{NFSU2_TR(0x7637c4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L763905;}}
}
B7637ca:L7637ca:{c.instructions+=6;NFSU2_TR(0x7637ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7637cd:{NFSU2_TR(0x7637cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B7637d0:{NFSU2_TR(0x7637d0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7637d1:{NFSU2_TR(0x7637d1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7637d4:{NFSU2_TR(0x7637d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7637d7:{NFSU2_TR(0x7637d7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7637df;}}
}
B7637d9:L7637d9:{c.instructions+=3;NFSU2_TR(0x7637d9);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7637db:{NFSU2_TR(0x7637db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7637dc:{NFSU2_TR(0x7637dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7637df:L7637df:{c.instructions+=3;NFSU2_TR(0x7637df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7637e2:{NFSU2_TR(0x7637e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7637e5:{NFSU2_TR(0x7637e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76382a;}}
}
B7637e7:L7637e7:{c.instructions+=3;NFSU2_TR(0x7637e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x20ull))));
}
B7637ea:{NFSU2_TR(0x7637ea);
w4(R+12,u32(0x80000000ull));
}
B7637ef:{NFSU2_TR(0x7637ef);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76380b;}}
}
B7637f1:L7637f1:{c.instructions+=7;NFSU2_TR(0x7637f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B7637f3:{NFSU2_TR(0x7637f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7637f6:{NFSU2_TR(0x7637f6);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7637fa:{NFSU2_TR(0x7637fa);
w4(R+12,u32(~u32(r4(R+12))));
}
B7637fc:{NFSU2_TR(0x7637fc);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(r4(R+12))));
s4(u32(r4(U+8)),r4(U+12));
}
B763800:{NFSU2_TR(0x763800);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+0,u8(u32(r1(U+0))-u32(u8(0x1ull))));
s1(u32(r4(R+4)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B763802:{NFSU2_TR(0x763802);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76382a;}}
}
B763804:L763804:{c.instructions+=3;NFSU2_TR(0x763804);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763807:{NFSU2_TR(0x763807);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B763809:{NFSU2_TR(0x763809);
{goto L76382a;}
}
B76380b:L76380b:{c.instructions+=8;NFSU2_TR(0x76380b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffffffe0ull))));
}
B76380e:{NFSU2_TR(0x76380e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B763810:{NFSU2_TR(0x763810);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763813:{NFSU2_TR(0x763813);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B763817:{NFSU2_TR(0x763817);
w4(R+12,u32(~u32(r4(R+12))));
}
B763819:{NFSU2_TR(0x763819);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(r4(R+12))));
s4(u32(r4(U+8)),r4(U+12));
}
B763820:{NFSU2_TR(0x763820);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+0,u8(u32(r1(U+0))-u32(u8(0x1ull))));
s1(u32(r4(R+4)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B763822:{NFSU2_TR(0x763822);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76382a;}}
}
B763824:L763824:{c.instructions+=2;NFSU2_TR(0x763824);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763827:{NFSU2_TR(0x763827);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B76382a:L76382a:{c.instructions+=11;NFSU2_TR(0x76382a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76382d:{NFSU2_TR(0x76382d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763830:{NFSU2_TR(0x763830);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763833:{NFSU2_TR(0x763833);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763836:{NFSU2_TR(0x763836);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B763839:{NFSU2_TR(0x763839);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76383c:{NFSU2_TR(0x76383c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76383f:{NFSU2_TR(0x76383f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B763841:{NFSU2_TR(0x763841);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B763844:{NFSU2_TR(0x763844);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B763848:{NFSU2_TR(0x763848);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7638f3;}}
}
B76384e:L76384e:{c.instructions+=7;NFSU2_TR(0x76384e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B763851:{NFSU2_TR(0x763851);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763854:{NFSU2_TR(0x763854);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B763857:{NFSU2_TR(0x763857);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B763858:{NFSU2_TR(0x763858);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x3full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76385b:{NFSU2_TR(0x76385b);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B76385f:{NFSU2_TR(0x76385f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L763864;}}
}
B763861:L763861:{c.instructions+=2;NFSU2_TR(0x763861);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763863:{NFSU2_TR(0x763863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B763864:L763864:{c.instructions+=13;NFSU2_TR(0x763864);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763867:{NFSU2_TR(0x763867);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B76386a:{NFSU2_TR(0x76386a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76386d:{NFSU2_TR(0x76386d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763870:{NFSU2_TR(0x763870);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763873:{NFSU2_TR(0x763873);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763876:{NFSU2_TR(0x763876);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763879:{NFSU2_TR(0x763879);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76387c:{NFSU2_TR(0x76387c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76387f:{NFSU2_TR(0x76387f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763882:{NFSU2_TR(0x763882);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763885:{NFSU2_TR(0x763885);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B763888:{NFSU2_TR(0x763888);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7638e1;}}
}
B76388a:L76388a:{c.instructions+=6;NFSU2_TR(0x76388a);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B76388e:{NFSU2_TR(0x76388e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B763891:{NFSU2_TR(0x763891);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B763893:{NFSU2_TR(0x763893);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x20ull))));
}
B763896:{NFSU2_TR(0x763896);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B76389a:{NFSU2_TR(0x76389a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7638b8;}}
}
B76389c:L76389c:{c.instructions+=2;NFSU2_TR(0x76389c);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7638a0:{NFSU2_TR(0x7638a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7638b0;}}
}
B7638a2:L7638a2:{c.instructions+=5;NFSU2_TR(0x7638a2);
__builtin_memmove((R+4),(R+28),4);
}
B7638a4:{NFSU2_TR(0x7638a4);
w4(R+12,u32(0x80000000ull));
}
B7638a9:{NFSU2_TR(0x7638a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B7638ab:{NFSU2_TR(0x7638ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7638ae:{NFSU2_TR(0x7638ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B7638b0:L7638b0:{c.instructions+=3;NFSU2_TR(0x7638b0);
u8 U[12];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7638b4:{NFSU2_TR(0x7638b4);
__builtin_memmove((R+4),(R+28),4);
}
B7638b6:{NFSU2_TR(0x7638b6);
{goto L7638d8;}
}
B7638b8:L7638b8:{c.instructions+=2;NFSU2_TR(0x7638b8);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7638bc:{NFSU2_TR(0x7638bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7638ce;}}
}
B7638be:L7638be:{c.instructions+=5;NFSU2_TR(0x7638be);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7638c1:{NFSU2_TR(0x7638c1);
w4(R+12,u32(0x80000000ull));
}
B7638c6:{NFSU2_TR(0x7638c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B7638c8:{NFSU2_TR(0x7638c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7638cb:{NFSU2_TR(0x7638cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7638ce:L7638ce:{c.instructions+=2;NFSU2_TR(0x7638ce);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7638d5:{NFSU2_TR(0x7638d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7638d8:L7638d8:{c.instructions+=3;NFSU2_TR(0x7638d8);
w4(R+8,u32(0x80000000ull));
}
B7638dd:{NFSU2_TR(0x7638dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B7638df:{NFSU2_TR(0x7638df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B7638e1:L7638e1:{c.instructions+=6;NFSU2_TR(0x7638e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7638e4:{NFSU2_TR(0x7638e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7638e7:{NFSU2_TR(0x7638e7);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7638eb:{NFSU2_TR(0x7638eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7638ed:{NFSU2_TR(0x7638ed);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B7638f1:{NFSU2_TR(0x7638f1);
{goto L7638f6;}
}
B7638f3:L7638f3:{c.instructions+=1;NFSU2_TR(0x7638f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7638f6:L7638f6:{c.instructions+=4;NFSU2_TR(0x7638f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7638f9:{NFSU2_TR(0x7638f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7638fc:{NFSU2_TR(0x7638fc);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B763900:{NFSU2_TR(0x763900);
{goto L763a41;}
}
B763905:L763905:{c.instructions+=2;NFSU2_TR(0x763905);
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
B763907:{NFSU2_TR(0x763907);
{goto L763a44;}
}
B76390c:L76390c:{c.instructions+=1;NFSU2_TR(0x76390c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L763a41;}}
}
B763912:L763912:{c.instructions+=12;NFSU2_TR(0x763912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763915:{NFSU2_TR(0x763915);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B763918:{NFSU2_TR(0x763918);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76391b:{NFSU2_TR(0x76391b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76391e:{NFSU2_TR(0x76391e);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B763922:{NFSU2_TR(0x763922);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B763925:{NFSU2_TR(0x763925);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B763928:{NFSU2_TR(0x763928);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B763929:{NFSU2_TR(0x763929);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x3full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76392c:{NFSU2_TR(0x76392c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76392f:{NFSU2_TR(0x76392f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763932:{NFSU2_TR(0x763932);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L763937;}}
}
B763934:L763934:{c.instructions+=2;NFSU2_TR(0x763934);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763936:{NFSU2_TR(0x763936);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B763937:L763937:{c.instructions+=2;NFSU2_TR(0x763937);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76393b:{NFSU2_TR(0x76393b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7639c1;}}
}
B763941:L763941:{c.instructions+=5;NFSU2_TR(0x763941);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B763944:{NFSU2_TR(0x763944);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B763947:{NFSU2_TR(0x763947);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B763948:{NFSU2_TR(0x763948);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x3full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76394b:{NFSU2_TR(0x76394b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L763950;}}
}
B76394d:L76394d:{c.instructions+=2;NFSU2_TR(0x76394d);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76394f:{NFSU2_TR(0x76394f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B763950:L763950:{c.instructions+=3;NFSU2_TR(0x763950);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763953:{NFSU2_TR(0x763953);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B763956:{NFSU2_TR(0x763956);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76399a;}}
}
B763958:L763958:{c.instructions+=3;NFSU2_TR(0x763958);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x20ull))));
}
B76395b:{NFSU2_TR(0x76395b);
w4(R+12,u32(0x80000000ull));
}
B763960:{NFSU2_TR(0x763960);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76397b;}}
}
B763962:L763962:{c.instructions+=7;NFSU2_TR(0x763962);
__builtin_memmove((R+4),(R+24),4);
}
B763964:{NFSU2_TR(0x763964);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B763966:{NFSU2_TR(0x763966);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B76396a:{NFSU2_TR(0x76396a);
w4(R+12,u32(~u32(r4(R+12))));
}
B76396c:{NFSU2_TR(0x76396c);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(r4(R+12))));
s4(u32(r4(U+8)),r4(U+12));
}
B763970:{NFSU2_TR(0x763970);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+0,u8(u32(r1(U+0))-u32(u8(0x1ull))));
s1(u32(r4(R+24)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B763972:{NFSU2_TR(0x763972);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763997;}}
}
B763974:L763974:{c.instructions+=3;NFSU2_TR(0x763974);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763977:{NFSU2_TR(0x763977);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B763979:{NFSU2_TR(0x763979);
{goto L763997;}
}
B76397b:L76397b:{c.instructions+=7;NFSU2_TR(0x76397b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76397e:{NFSU2_TR(0x76397e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B763980:{NFSU2_TR(0x763980);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B763984:{NFSU2_TR(0x763984);
w4(R+12,u32(~u32(r4(R+12))));
}
B763986:{NFSU2_TR(0x763986);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(r4(R+12))));
s4(u32(r4(U+8)),r4(U+12));
}
B76398d:{NFSU2_TR(0x76398d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+0,u8(u32(r1(U+0))-u32(u8(0x1ull))));
s1(u32(r4(R+4)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76398f:{NFSU2_TR(0x76398f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763997;}}
}
B763991:L763991:{c.instructions+=2;NFSU2_TR(0x763991);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763994:{NFSU2_TR(0x763994);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B763997:L763997:{c.instructions+=1;NFSU2_TR(0x763997);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76399a:L76399a:{c.instructions+=13;NFSU2_TR(0x76399a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76399d:{NFSU2_TR(0x76399d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7639a0:{NFSU2_TR(0x7639a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7639a3:{NFSU2_TR(0x7639a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7639a6:{NFSU2_TR(0x7639a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7639a9:{NFSU2_TR(0x7639a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7639ac:{NFSU2_TR(0x7639ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7639af:{NFSU2_TR(0x7639af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B7639b2:{NFSU2_TR(0x7639b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7639b5:{NFSU2_TR(0x7639b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B7639b8:{NFSU2_TR(0x7639b8);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B7639b9:{NFSU2_TR(0x7639b9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x3full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7639bc:{NFSU2_TR(0x7639bc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7639c1;}}
}
B7639be:L7639be:{c.instructions+=2;NFSU2_TR(0x7639be);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7639c0:{NFSU2_TR(0x7639c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7639c1:L7639c1:{c.instructions+=11;NFSU2_TR(0x7639c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7639c4:{NFSU2_TR(0x7639c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7639c7:{NFSU2_TR(0x7639c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7639ca:{NFSU2_TR(0x7639ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7639cd:{NFSU2_TR(0x7639cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7639d0:{NFSU2_TR(0x7639d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7639d3:{NFSU2_TR(0x7639d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7639d6:{NFSU2_TR(0x7639d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7639d9:{NFSU2_TR(0x7639d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7639dc:{NFSU2_TR(0x7639dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7639df:{NFSU2_TR(0x7639df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763a38;}}
}
B7639e1:L7639e1:{c.instructions+=6;NFSU2_TR(0x7639e1);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B7639e5:{NFSU2_TR(0x7639e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7639e8:{NFSU2_TR(0x7639e8);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B7639ea:{NFSU2_TR(0x7639ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x20ull))));
}
B7639ed:{NFSU2_TR(0x7639ed);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B7639f1:{NFSU2_TR(0x7639f1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L763a0f;}}
}
B7639f3:L7639f3:{c.instructions+=2;NFSU2_TR(0x7639f3);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7639f7:{NFSU2_TR(0x7639f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763a07;}}
}
B7639f9:L7639f9:{c.instructions+=5;NFSU2_TR(0x7639f9);
__builtin_memmove((R+4),(R+24),4);
}
B7639fb:{NFSU2_TR(0x7639fb);
w4(R+28,u32(0x80000000ull));
}
B763a00:{NFSU2_TR(0x763a00);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r1(U+0))));
}
B763a02:{NFSU2_TR(0x763a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763a05:{NFSU2_TR(0x763a05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+28))));
s4(u32(r4(R+4)),r4(U+0));
}
B763a07:L763a07:{c.instructions+=3;NFSU2_TR(0x763a07);
u8 U[12];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B763a0b:{NFSU2_TR(0x763a0b);
__builtin_memmove((R+4),(R+24),4);
}
B763a0d:{NFSU2_TR(0x763a0d);
{goto L763a2f;}
}
B763a0f:L763a0f:{c.instructions+=2;NFSU2_TR(0x763a0f);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B763a13:{NFSU2_TR(0x763a13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763a25;}}
}
B763a15:L763a15:{c.instructions+=5;NFSU2_TR(0x763a15);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763a18:{NFSU2_TR(0x763a18);
w4(R+28,u32(0x80000000ull));
}
B763a1d:{NFSU2_TR(0x763a1d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r1(U+0))));
}
B763a1f:{NFSU2_TR(0x763a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763a22:{NFSU2_TR(0x763a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B763a25:L763a25:{c.instructions+=2;NFSU2_TR(0x763a25);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B763a2c:{NFSU2_TR(0x763a2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763a2f:L763a2f:{c.instructions+=3;NFSU2_TR(0x763a2f);
w4(R+8,u32(0x80000000ull));
}
B763a34:{NFSU2_TR(0x763a34);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B763a36:{NFSU2_TR(0x763a36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B763a38:L763a38:{c.instructions+=3;NFSU2_TR(0x763a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B763a3b:{NFSU2_TR(0x763a3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B763a3d:{NFSU2_TR(0x763a3d);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B763a41:L763a41:{c.instructions+=2;NFSU2_TR(0x763a41);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B763a43:{NFSU2_TR(0x763a43);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B763a44:L763a44:{c.instructions+=5;NFSU2_TR(0x763a44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B763a45:{NFSU2_TR(0x763a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B763a46:{NFSU2_TR(0x763a46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B763a47:{NFSU2_TR(0x763a47);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B763a48:{NFSU2_TR(0x763a48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B763a49:L763a49:{c.instructions+=19;NFSU2_TR(0x763a49);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763a4a:{NFSU2_TR(0x763a4a);
__builtin_memmove((R+20),(R+16),4);
}
B763a4c:{NFSU2_TR(0x763a4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B763a4f:{NFSU2_TR(0x763a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763a52:{NFSU2_TR(0x763a52);
__builtin_memmove((R+0),gp(0x8ba48c),4);
}
B763a57:{NFSU2_TR(0x763a57);
__builtin_memmove((R+8),gp(0x8ba490),4);
}
B763a5d:{NFSU2_TR(0x763a5d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x17ull))));
}
B763a60:{NFSU2_TR(0x763a60);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
}
B763a63:{NFSU2_TR(0x763a63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763a64:{NFSU2_TR(0x763a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763a67:{NFSU2_TR(0x763a67);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B763a6a:{NFSU2_TR(0x763a6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763a6b:{NFSU2_TR(0x763a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B763a6e:{NFSU2_TR(0x763a6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763a6f:{NFSU2_TR(0x763a6f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B763a70:{NFSU2_TR(0x763a70);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B763a73:{NFSU2_TR(0x763a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B763a76:{NFSU2_TR(0x763a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763a79:{NFSU2_TR(0x763a79);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L763a86;}}
}
B763a7b:L763a7b:{c.instructions+=4;NFSU2_TR(0x763a7b);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B763a7e:{NFSU2_TR(0x763a7e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r1(U+0))));
}
B763a80:{NFSU2_TR(0x763a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763a84:{NFSU2_TR(0x763a84);
{goto L763a93;}
}
B763a86:L763a86:{c.instructions+=5;NFSU2_TR(0x763a86);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffffffe0ull))));
}
B763a89:{NFSU2_TR(0x763a89);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B763a8c:{NFSU2_TR(0x763a8c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B763a8e:{NFSU2_TR(0x763a8e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B763a90:{NFSU2_TR(0x763a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763a93:L763a93:{c.instructions+=5;NFSU2_TR(0x763a93);
__builtin_memmove((R+0),gp(0x8ba498),4);
}
B763a98:{NFSU2_TR(0x763a98);
__builtin_memmove((R+12),(R+0),4);
}
B763a9a:{NFSU2_TR(0x763a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763a9d:{NFSU2_TR(0x763a9d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B763a9f:{NFSU2_TR(0x763a9f);
{goto L763ab5;}
}
B763aa1:L763aa1:{c.instructions+=6;NFSU2_TR(0x763aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763aa4:{NFSU2_TR(0x763aa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B763aa6:{NFSU2_TR(0x763aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B763aa9:{NFSU2_TR(0x763aa9);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B763aab:{NFSU2_TR(0x763aab);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B763aad:{NFSU2_TR(0x763aad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763aba;}}
}
B763aaf:L763aaf:{c.instructions+=2;NFSU2_TR(0x763aaf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B763ab2:{NFSU2_TR(0x763ab2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B763ab5:L763ab5:{c.instructions+=2;NFSU2_TR(0x763ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763ab8:{NFSU2_TR(0x763ab8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763aa1u);}goto L763aa1;}}
}
B763aba:L763aba:{c.instructions+=2;NFSU2_TR(0x763aba);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B763abd:{NFSU2_TR(0x763abd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763ae3;}}
}
B763abf:L763abf:{c.instructions+=2;NFSU2_TR(0x763abf);
__builtin_memmove((R+12),(R+8),4);
}
B763ac1:{NFSU2_TR(0x763ac1);
{goto L763ad4;}
}
B763ac3:L763ac3:{c.instructions+=6;NFSU2_TR(0x763ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763ac6:{NFSU2_TR(0x763ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B763ac8:{NFSU2_TR(0x763ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B763acb:{NFSU2_TR(0x763acb);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B763acd:{NFSU2_TR(0x763acd);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B763acf:{NFSU2_TR(0x763acf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763adb;}}
}
B763ad1:L763ad1:{c.instructions+=1;NFSU2_TR(0x763ad1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B763ad4:L763ad4:{c.instructions+=3;NFSU2_TR(0x763ad4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B763ad6:{NFSU2_TR(0x763ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763ad9:{NFSU2_TR(0x763ad9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763ac3u);}goto L763ac3;}}
}
B763adb:L763adb:{c.instructions+=2;NFSU2_TR(0x763adb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B763add:{NFSU2_TR(0x763add);
if(r1(R+518)){{goto L763b77;}}
}
B763ae3:L763ae3:{c.instructions+=6;NFSU2_TR(0x763ae3);
__builtin_memmove(gp(0x8ba498),(R+12),4);
}
B763ae9:{NFSU2_TR(0x763ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B763aec:{NFSU2_TR(0x763aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B763aee:{NFSU2_TR(0x763aee);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B763af1:{NFSU2_TR(0x763af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763af4:{NFSU2_TR(0x763af4);
if(r1(R+518)){{goto L763b0a;}}
}
B763af6:L763af6:{c.instructions+=6;NFSU2_TR(0x763af6);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B763afd:{NFSU2_TR(0x763afd);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B763b01:{NFSU2_TR(0x763b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B763b04:{NFSU2_TR(0x763b04);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B763b06:{NFSU2_TR(0x763b06);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B763b08:{NFSU2_TR(0x763b08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763b40;}}
}
B763b0a:L763b0a:{c.instructions+=9;NFSU2_TR(0x763b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B763b10:{NFSU2_TR(0x763b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))&u32(r4(U+4))));
}
B763b13:{NFSU2_TR(0x763b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763b17:{NFSU2_TR(0x763b17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763b1a:{NFSU2_TR(0x763b1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B763b1c:{NFSU2_TR(0x763b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))&u32(r4(U+4))));
}
B763b1f:{NFSU2_TR(0x763b1f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B763b21:{NFSU2_TR(0x763b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B763b24:{NFSU2_TR(0x763b24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763b3d;}}
}
B763b26:L763b26:{c.instructions+=8;NFSU2_TR(0x763b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B763b2c:{NFSU2_TR(0x763b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))&u32(r4(U+4))));
}
B763b2f:{NFSU2_TR(0x763b2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763b32:{NFSU2_TR(0x763b32);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B763b35:{NFSU2_TR(0x763b35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B763b37:{NFSU2_TR(0x763b37);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B763b39:{NFSU2_TR(0x763b39);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B763b3b:{NFSU2_TR(0x763b3b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763b26u);}goto L763b26;}}
}
B763b3d:L763b3d:{c.instructions+=1;NFSU2_TR(0x763b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B763b40:L763b40:{c.instructions+=8;NFSU2_TR(0x763b40);
__builtin_memmove((R+4),(R+8),4);
}
B763b42:{NFSU2_TR(0x763b42);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x204ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B763b48:{NFSU2_TR(0x763b48);
u8 U[12];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B763b4f:{NFSU2_TR(0x763b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763b52:{NFSU2_TR(0x763b52);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B763b56:{NFSU2_TR(0x763b56);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B763b58:{NFSU2_TR(0x763b58);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+24))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B763b5a:{NFSU2_TR(0x763b5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763bc9;}}
}
B763b5c:L763b5c:{c.instructions+=5;NFSU2_TR(0x763b5c);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B763b63:{NFSU2_TR(0x763b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B763b66:{NFSU2_TR(0x763b66);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763b68:{NFSU2_TR(0x763b68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B763b69:{NFSU2_TR(0x763b69);
{goto L763bc9;}
}
B763b6b:L763b6b:{c.instructions+=2;NFSU2_TR(0x763b6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B763b6f:{NFSU2_TR(0x763b6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763b7c;}}
}
B763b71:L763b71:{c.instructions+=2;NFSU2_TR(0x763b71);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B763b74:{NFSU2_TR(0x763b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763b77:L763b77:{c.instructions+=2;NFSU2_TR(0x763b77);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B763b7a:{NFSU2_TR(0x763b7a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763b6bu);}goto L763b6b;}}
}
B763b7c:L763b7c:{c.instructions+=2;NFSU2_TR(0x763b7c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B763b7f:{NFSU2_TR(0x763b7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763ba7;}}
}
B763b81:L763b81:{c.instructions+=2;NFSU2_TR(0x763b81);
__builtin_memmove((R+12),(R+8),4);
}
B763b83:{NFSU2_TR(0x763b83);
{goto L763b8e;}
}
B763b85:L763b85:{c.instructions+=2;NFSU2_TR(0x763b85);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B763b89:{NFSU2_TR(0x763b89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763b95;}}
}
B763b8b:L763b8b:{c.instructions+=1;NFSU2_TR(0x763b8b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B763b8e:L763b8e:{c.instructions+=3;NFSU2_TR(0x763b8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B763b90:{NFSU2_TR(0x763b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763b93:{NFSU2_TR(0x763b93);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763b85u);}goto L763b85;}}
}
B763b95:L763b95:{c.instructions+=2;NFSU2_TR(0x763b95);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B763b97:{NFSU2_TR(0x763b97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763ba7;}}
}
B763b99:L763b99:{c.instructions+=1;NFSU2_TR(0x763b99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763b9eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7635adu);}goto L7635ad;}
}
B763b9e:L763b9e:{c.instructions+=4;NFSU2_TR(0x763b9e);
__builtin_memmove((R+12),(R+0),4);
}
B763ba0:{NFSU2_TR(0x763ba0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B763ba2:{NFSU2_TR(0x763ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763ba5:{NFSU2_TR(0x763ba5);
if(r1(R+518)){{goto L763bbf;}}
}
B763ba7:L763ba7:{c.instructions+=2;NFSU2_TR(0x763ba7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763ba8:{NFSU2_TR(0x763ba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763badull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763664u);}goto L763664;}
}
B763bad:L763bad:{c.instructions+=6;NFSU2_TR(0x763bad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763bae:{NFSU2_TR(0x763bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763bb1:{NFSU2_TR(0x763bb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B763bb3:{NFSU2_TR(0x763bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B763bb6:{NFSU2_TR(0x763bb6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B763bb9:{NFSU2_TR(0x763bb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763ae3u);}goto L763ae3;}}
}
B763bbf:L763bbf:{c.instructions+=2;NFSU2_TR(0x763bbf);
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
B763bc1:{NFSU2_TR(0x763bc1);
{goto L763d40;}
}
B763bc6:L763bc6:{c.instructions+=2;NFSU2_TR(0x763bc6);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B763bc8:{NFSU2_TR(0x763bc8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B763bc9:L763bc9:{c.instructions+=2;NFSU2_TR(0x763bc9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B763bcb:{NFSU2_TR(0x763bcb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763bc6u);}goto L763bc6;}}
}
B763bcd:L763bcd:{c.instructions+=10;NFSU2_TR(0x763bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763bd0:{NFSU2_TR(0x763bd0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B763bd4:{NFSU2_TR(0x763bd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B763bd6:{NFSU2_TR(0x763bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B763bd9:{NFSU2_TR(0x763bd9);
__builtin_memmove((R+24),(R+4),4);
}
B763bdb:{NFSU2_TR(0x763bdb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B763bde:{NFSU2_TR(0x763bde);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B763bdf:{NFSU2_TR(0x763bdf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B763be2:{NFSU2_TR(0x763be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763be5:{NFSU2_TR(0x763be5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L763bea;}}
}
B763be7:L763be7:{c.instructions+=2;NFSU2_TR(0x763be7);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763be9:{NFSU2_TR(0x763be9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B763bea:L763bea:{c.instructions+=2;NFSU2_TR(0x763bea);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B763bec:{NFSU2_TR(0x763bec);
if(r1(R+518)){{goto L763cf3;}}
}
B763bf2:L763bf2:{c.instructions+=3;NFSU2_TR(0x763bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763bf5:{NFSU2_TR(0x763bf5);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B763bf8:{NFSU2_TR(0x763bf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763c56;}}
}
B763bfa:L763bfa:{c.instructions+=3;NFSU2_TR(0x763bfa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B763bfd:{NFSU2_TR(0x763bfd);
w4(R+12,u32(0x80000000ull));
}
B763c02:{NFSU2_TR(0x763c02);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L763c2a;}}
}
B763c04:L763c04:{c.instructions+=10;NFSU2_TR(0x763c04);
__builtin_memmove((R+4),(R+28),4);
}
B763c06:{NFSU2_TR(0x763c06);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B763c08:{NFSU2_TR(0x763c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763c0b:{NFSU2_TR(0x763c0b);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B763c0f:{NFSU2_TR(0x763c0f);
w4(R+12,u32(~u32(r4(R+12))));
}
B763c11:{NFSU2_TR(0x763c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763c14:{NFSU2_TR(0x763c14);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+12,u32(u32(r4(R+12))&u32(r4(U+12))));
}
B763c18:{NFSU2_TR(0x763c18);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B763c1c:{NFSU2_TR(0x763c1c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+0,u8(u32(r1(U+0))-u32(u8(0x1ull))));
s1(u32(r4(R+28)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B763c1e:{NFSU2_TR(0x763c1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763c53;}}
}
B763c20:L763c20:{c.instructions+=4;NFSU2_TR(0x763c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763c23:{NFSU2_TR(0x763c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763c26:{NFSU2_TR(0x763c26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+4))));
s4(u32(r4(R+12)),r4(U+0));
}
B763c28:{NFSU2_TR(0x763c28);
{goto L763c56;}
}
B763c2a:L763c2a:{c.instructions+=10;NFSU2_TR(0x763c2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763c2d:{NFSU2_TR(0x763c2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B763c2f:{NFSU2_TR(0x763c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763c32:{NFSU2_TR(0x763c32);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B763c39:{NFSU2_TR(0x763c39);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B763c3d:{NFSU2_TR(0x763c3d);
w4(R+12,u32(~u32(r4(R+12))));
}
B763c3f:{NFSU2_TR(0x763c3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B763c41:{NFSU2_TR(0x763c41);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+0,u8(u32(r1(U+0))-u32(u8(0x1ull))));
s1(u32(r4(R+28)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B763c43:{NFSU2_TR(0x763c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763c46:{NFSU2_TR(0x763c46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763c53;}}
}
B763c48:L763c48:{c.instructions+=4;NFSU2_TR(0x763c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763c4b:{NFSU2_TR(0x763c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763c4e:{NFSU2_TR(0x763c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B763c51:{NFSU2_TR(0x763c51);
{goto L763c56;}
}
B763c53:L763c53:{c.instructions+=1;NFSU2_TR(0x763c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763c56:L763c56:{c.instructions+=8;NFSU2_TR(0x763c56);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B763c5a:{NFSU2_TR(0x763c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763c5d:{NFSU2_TR(0x763c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B763c60:{NFSU2_TR(0x763c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763c63:{NFSU2_TR(0x763c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763c66:{NFSU2_TR(0x763c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B763c69:{NFSU2_TR(0x763c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763c6c:{NFSU2_TR(0x763c6c);
if(r1(R+518)){{goto L763cff;}}
}
B763c72:L763c72:{c.instructions+=11;NFSU2_TR(0x763c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763c75:{NFSU2_TR(0x763c75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B763c78:{NFSU2_TR(0x763c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B763c7b:{NFSU2_TR(0x763c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763c7e:{NFSU2_TR(0x763c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763c81:{NFSU2_TR(0x763c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763c84:{NFSU2_TR(0x763c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763c87:{NFSU2_TR(0x763c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763c8a:{NFSU2_TR(0x763c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763c8d:{NFSU2_TR(0x763c8d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B763c90:{NFSU2_TR(0x763c90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763cf0;}}
}
B763c92:L763c92:{c.instructions+=6;NFSU2_TR(0x763c92);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B763c96:{NFSU2_TR(0x763c96);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B763c99:{NFSU2_TR(0x763c99);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B763c9b:{NFSU2_TR(0x763c9b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B763c9e:{NFSU2_TR(0x763c9e);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B763ca2:{NFSU2_TR(0x763ca2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L763cc7;}}
}
B763ca4:L763ca4:{c.instructions+=2;NFSU2_TR(0x763ca4);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B763ca8:{NFSU2_TR(0x763ca8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763cb5;}}
}
B763caa:L763caa:{c.instructions+=4;NFSU2_TR(0x763caa);
w4(R+28,u32(0x80000000ull));
}
B763caf:{NFSU2_TR(0x763caf);
__builtin_memmove((R+4),(R+24),4);
}
B763cb1:{NFSU2_TR(0x763cb1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r1(U+0))));
}
B763cb3:{NFSU2_TR(0x763cb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+28))));
s4(u32(r4(R+12)),r4(U+0));
}
B763cb5:L763cb5:{c.instructions+=6;NFSU2_TR(0x763cb5);
__builtin_memmove((R+4),(R+24),4);
}
B763cb7:{NFSU2_TR(0x763cb7);
w4(R+28,u32(0x80000000ull));
}
B763cbc:{NFSU2_TR(0x763cbc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r1(U+0))));
}
B763cbe:{NFSU2_TR(0x763cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763cc1:{NFSU2_TR(0x763cc1);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))|u32(r4(R+28))));
s4(u32(r4(U+8)),r4(U+12));
}
B763cc5:{NFSU2_TR(0x763cc5);
{goto L763cf0;}
}
B763cc7:L763cc7:{c.instructions+=2;NFSU2_TR(0x763cc7);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B763ccb:{NFSU2_TR(0x763ccb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763cda;}}
}
B763ccd:L763ccd:{c.instructions+=4;NFSU2_TR(0x763ccd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763cd0:{NFSU2_TR(0x763cd0);
w4(R+28,u32(0x80000000ull));
}
B763cd5:{NFSU2_TR(0x763cd5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r1(U+0))));
}
B763cd7:{NFSU2_TR(0x763cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B763cda:L763cda:{c.instructions+=6;NFSU2_TR(0x763cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763cdd:{NFSU2_TR(0x763cdd);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B763ce4:{NFSU2_TR(0x763ce4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763ce7:{NFSU2_TR(0x763ce7);
w4(R+24,u32(0x80000000ull));
}
B763cec:{NFSU2_TR(0x763cec);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r1(U+0))));
}
B763cee:{NFSU2_TR(0x763cee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+24))));
s4(u32(r4(R+28)),r4(U+0));
}
B763cf0:L763cf0:{c.instructions+=1;NFSU2_TR(0x763cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763cf3:L763cf3:{c.instructions+=2;NFSU2_TR(0x763cf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B763cf5:{NFSU2_TR(0x763cf5);
if(r1(R+518)){{goto L763d02;}}
}
B763cf7:L763cf7:{c.instructions+=3;NFSU2_TR(0x763cf7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B763cf9:{NFSU2_TR(0x763cf9);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B763cfd:{NFSU2_TR(0x763cfd);
{goto L763d02;}
}
B763cff:L763cff:{c.instructions+=1;NFSU2_TR(0x763cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763d02:L763d02:{c.instructions+=11;NFSU2_TR(0x763d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B763d05:{NFSU2_TR(0x763d05);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B763d07:{NFSU2_TR(0x763d07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763d0a:{NFSU2_TR(0x763d0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B763d0c:{NFSU2_TR(0x763d0c);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B763d10:{NFSU2_TR(0x763d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B763d13:{NFSU2_TR(0x763d13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B763d15:{NFSU2_TR(0x763d15);
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
B763d17:{NFSU2_TR(0x763d17);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B763d1a:{NFSU2_TR(0x763d1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B763d1c:{NFSU2_TR(0x763d1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763d38;}}
}
B763d1e:L763d1e:{c.instructions+=2;NFSU2_TR(0x763d1e);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ba488),4);
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
B763d24:{NFSU2_TR(0x763d24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763d38;}}
}
B763d26:L763d26:{c.instructions+=3;NFSU2_TR(0x763d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763d29:{NFSU2_TR(0x763d29);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ba4a0),4);
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
B763d2f:{NFSU2_TR(0x763d2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763d38;}}
}
B763d31:L763d31:{c.instructions+=1;NFSU2_TR(0x763d31);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x8ba488,u32(u32(m4(0x8ba488))&u32(u32(0x0ull))));
w1(R+519,u8(s32(m4(0x8ba488))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8ba488))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8ba488))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B763d38:L763d38:{c.instructions+=3;NFSU2_TR(0x763d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763d3b:{NFSU2_TR(0x763d3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B763d3d:{NFSU2_TR(0x763d3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B763d40:L763d40:{c.instructions+=5;NFSU2_TR(0x763d40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B763d41:{NFSU2_TR(0x763d41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B763d42:{NFSU2_TR(0x763d42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B763d43:{NFSU2_TR(0x763d43);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B763d44:{NFSU2_TR(0x763d44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B763d45:L763d45:{c.instructions+=3;NFSU2_TR(0x763d45);
__builtin_memmove((R+0),gp(0x8b8710),4);
}
B763d4a:{NFSU2_TR(0x763d4a);
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
B763d4c:{NFSU2_TR(0x763d4c);
if(r1(R+518)){{goto L763d5d;}}
}
B763d4e:L763d4e:{c.instructions+=2;NFSU2_TR(0x763d4e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B763d52:{NFSU2_TR(0x763d52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763d54ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B763d54:L763d54:{c.instructions+=3;NFSU2_TR(0x763d54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B763d56:{NFSU2_TR(0x763d56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763d57:{NFSU2_TR(0x763d57);
if(r1(R+518)){{goto L763d5d;}}
}
B763d59:L763d59:{c.instructions+=3;NFSU2_TR(0x763d59);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B763d5b:{NFSU2_TR(0x763d5b);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B763d5c:{NFSU2_TR(0x763d5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B763d5d:L763d5d:{c.instructions+=2;NFSU2_TR(0x763d5d);
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
B763d5f:{NFSU2_TR(0x763d5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B763d60:L763d60:{c.instructions+=9;NFSU2_TR(0x763d60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763d61:{NFSU2_TR(0x763d61);
__builtin_memmove((R+20),(R+16),4);
}
B763d63:{NFSU2_TR(0x763d63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763d64:{NFSU2_TR(0x763d64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763d65:{NFSU2_TR(0x763d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B763d68:{NFSU2_TR(0x763d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B763d6b:{NFSU2_TR(0x763d6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x82ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B763d6d:{NFSU2_TR(0x763d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B763d70:{NFSU2_TR(0x763d70);
if(r1(R+518)){{goto L763e6c;}}
}
B763d76:L763d76:{c.instructions+=2;NFSU2_TR(0x763d76);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B763d78:{NFSU2_TR(0x763d78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763e6c;}}
}
B763d7e:L763d7e:{c.instructions+=2;NFSU2_TR(0x763d7e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B763d80:{NFSU2_TR(0x763d80);
if(r1(R+518)){{goto L763d99;}}
}
B763d82:L763d82:{c.instructions+=3;NFSU2_TR(0x763d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763d86:{NFSU2_TR(0x763d86);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B763d88:{NFSU2_TR(0x763d88);
if(r1(R+518)){{goto L763e6c;}}
}
B763d8e:L763d8e:{c.instructions+=4;NFSU2_TR(0x763d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763d91:{NFSU2_TR(0x763d91);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B763d94:{NFSU2_TR(0x763d94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B763d96:{NFSU2_TR(0x763d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763d99:L763d99:{c.instructions+=8;NFSU2_TR(0x763d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B763d9c:{NFSU2_TR(0x763d9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763da0:{NFSU2_TR(0x763da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763da4:{NFSU2_TR(0x763da4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffefull))));
}
B763da7:{NFSU2_TR(0x763da7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B763daa:{NFSU2_TR(0x763daa);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(u16(0x10cull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B763dae:{NFSU2_TR(0x763dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763db1:{NFSU2_TR(0x763db1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763dd5;}}
}
B763db3:L763db3:{c.instructions+=2;NFSU2_TR(0x763db3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x819f30ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B763db9:{NFSU2_TR(0x763db9);
if(r1(R+518)){{goto L763dc3;}}
}
B763dbb:L763dbb:{c.instructions+=2;NFSU2_TR(0x763dbb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x819f50ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B763dc1:{NFSU2_TR(0x763dc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763dce;}}
}
B763dc3:L763dc3:{c.instructions+=2;NFSU2_TR(0x763dc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763dc4:{NFSU2_TR(0x763dc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763dc9ull));
TAIL_STATIC(0x76ca2bu,76c);
}
B763dc9:L763dc9:{c.instructions+=3;NFSU2_TR(0x763dc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B763dcb:{NFSU2_TR(0x763dcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763dcc:{NFSU2_TR(0x763dcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763dd5;}}
}
B763dce:L763dce:{c.instructions+=2;NFSU2_TR(0x763dce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763dcf:{NFSU2_TR(0x763dcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763dd4ull));
TAIL_STATIC(0x76c9e7u,76c);
}
B763dd4:L763dd4:{c.instructions+=1;NFSU2_TR(0x763dd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763dd5:L763dd5:{c.instructions+=3;NFSU2_TR(0x763dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x108ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B763ddb:{NFSU2_TR(0x763ddb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763ddc:{NFSU2_TR(0x763ddc);
if(r1(R+518)){{goto L763e42;}}
}
B763dde:L763dde:{c.instructions+=10;NFSU2_TR(0x763dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B763de1:{NFSU2_TR(0x763de1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B763de3:{NFSU2_TR(0x763de3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763de6:{NFSU2_TR(0x763de6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B763de8:{NFSU2_TR(0x763de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763deb:{NFSU2_TR(0x763deb);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B763ded:{NFSU2_TR(0x763ded);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B763dee:{NFSU2_TR(0x763dee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B763df0:{NFSU2_TR(0x763df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763df3:{NFSU2_TR(0x763df3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L763e02;}}
}
B763df5:L763df5:{c.instructions+=4;NFSU2_TR(0x763df5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763df6:{NFSU2_TR(0x763df6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763df7:{NFSU2_TR(0x763df7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763df8:{NFSU2_TR(0x763df8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763dfdull));
TAIL_STATIC(0x760237u,760);
}
B763dfd:L763dfd:{c.instructions+=2;NFSU2_TR(0x763dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763e00:{NFSU2_TR(0x763e00);
{goto L763e35;}
}
B763e02:L763e02:{c.instructions+=2;NFSU2_TR(0x763e02);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B763e05:{NFSU2_TR(0x763e05);
if(r1(R+518)){{goto L763e20;}}
}
B763e07:L763e07:{c.instructions+=8;NFSU2_TR(0x763e07);
__builtin_memmove((R+4),(R+12),4);
}
B763e09:{NFSU2_TR(0x763e09);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B763e0c:{NFSU2_TR(0x763e0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B763e13:{NFSU2_TR(0x763e13);
__builtin_memmove((R+0),(R+12),4);
}
B763e15:{NFSU2_TR(0x763e15);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B763e18:{NFSU2_TR(0x763e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B763e1b:{NFSU2_TR(0x763e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B763e1e:{NFSU2_TR(0x763e1e);
{goto L763e25;}
}
B763e20:L763e20:{c.instructions+=1;NFSU2_TR(0x763e20);
w4(R+0,u32(0x81a2f0ull));
}
B763e25:L763e25:{c.instructions+=2;NFSU2_TR(0x763e25);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B763e29:{NFSU2_TR(0x763e29);
if(r1(R+518)){{goto L763e38;}}
}
B763e2b:L763e2b:{c.instructions+=4;NFSU2_TR(0x763e2b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763e2d:{NFSU2_TR(0x763e2d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763e2f:{NFSU2_TR(0x763e2f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763e30:{NFSU2_TR(0x763e30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763e35ull));
TAIL_STATIC(0x7606e7u,760);
}
B763e35:L763e35:{c.instructions+=1;NFSU2_TR(0x763e35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B763e38:L763e38:{c.instructions+=4;NFSU2_TR(0x763e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B763e3b:{NFSU2_TR(0x763e3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B763e3e:{NFSU2_TR(0x763e3e);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B763e40:{NFSU2_TR(0x763e40);
{goto L763e56;}
}
B763e42:L763e42:{c.instructions+=7;NFSU2_TR(0x763e42);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B763e44:{NFSU2_TR(0x763e44);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B763e45:{NFSU2_TR(0x763e45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763e46:{NFSU2_TR(0x763e46);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B763e49:{NFSU2_TR(0x763e49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763e4a:{NFSU2_TR(0x763e4a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763e4b:{NFSU2_TR(0x763e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763e50ull));
TAIL_STATIC(0x760237u,760);
}
B763e50:L763e50:{c.instructions+=2;NFSU2_TR(0x763e50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B763e53:{NFSU2_TR(0x763e53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763e56:L763e56:{c.instructions+=3;NFSU2_TR(0x763e56);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B763e59:{NFSU2_TR(0x763e59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B763e5a:{NFSU2_TR(0x763e5a);
if(r1(R+518)){{goto L763e62;}}
}
B763e5c:L763e5c:{c.instructions+=2;NFSU2_TR(0x763e5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x20ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763e60:{NFSU2_TR(0x763e60);
{goto L763e72;}
}
B763e62:L763e62:{c.instructions+=3;NFSU2_TR(0x763e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B763e65:{NFSU2_TR(0x763e65);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B763e6a:{NFSU2_TR(0x763e6a);
{goto L763e75;}
}
B763e6c:L763e6c:{c.instructions+=2;NFSU2_TR(0x763e6c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20ull))));
}
B763e6f:{NFSU2_TR(0x763e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763e72:L763e72:{c.instructions+=1;NFSU2_TR(0x763e72);
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
B763e75:L763e75:{c.instructions+=4;NFSU2_TR(0x763e75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B763e76:{NFSU2_TR(0x763e76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B763e77:{NFSU2_TR(0x763e77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B763e78:{NFSU2_TR(0x763e78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B763e79:L763e79:{c.instructions+=2;NFSU2_TR(0x763e79);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B763e7d:{NFSU2_TR(0x763e7d);
if(r1(R+518)){{goto L763e85;}}
}
B763e7f:L763e7f:{c.instructions+=2;NFSU2_TR(0x763e7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B763e83:{NFSU2_TR(0x763e83);
if(r1(R+518)){{goto L763ea9;}}
}
B763e85:L763e85:{c.instructions+=2;NFSU2_TR(0x763e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B763e88:{NFSU2_TR(0x763e88);
if(r1(R+519)){{goto L763e95;}}
}
B763e8a:L763e8a:{c.instructions+=5;NFSU2_TR(0x763e8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B763e8c:{NFSU2_TR(0x763e8c);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B763e8e:{NFSU2_TR(0x763e8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B763e90:{NFSU2_TR(0x763e90);
w4(R+0,u32(r1(R+0)));
}
B763e93:{NFSU2_TR(0x763e93);
{goto L763ea1;}
}
B763e95:L763e95:{c.instructions+=4;NFSU2_TR(0x763e95);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B763e98:{NFSU2_TR(0x763e98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763e99:{NFSU2_TR(0x763e99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763e9a:{NFSU2_TR(0x763e9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763e9full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763d60u);}goto L763d60;}
}
B763e9f:L763e9f:{c.instructions+=2;NFSU2_TR(0x763e9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763ea0:{NFSU2_TR(0x763ea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763ea1:L763ea1:{c.instructions+=2;NFSU2_TR(0x763ea1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0xffffffffull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B763ea4:{NFSU2_TR(0x763ea4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763ea9;}}
}
B763ea6:L763ea6:{c.instructions+=2;NFSU2_TR(0x763ea6);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
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
B763ea8:{NFSU2_TR(0x763ea8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B763ea9:L763ea9:{c.instructions+=2;NFSU2_TR(0x763ea9);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
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
B763eab:{NFSU2_TR(0x763eab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B763eac:L763eac:{c.instructions+=5;NFSU2_TR(0x763eac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763ead:{NFSU2_TR(0x763ead);
__builtin_memmove((R+20),(R+16),4);
}
B763eaf:{NFSU2_TR(0x763eaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763eb0:{NFSU2_TR(0x763eb0);
__builtin_memmove((R+24),(R+0),4);
}
B763eb2:{NFSU2_TR(0x763eb2);
{goto L763ec7;}
}
B763eb4:L763eb4:{c.instructions+=4;NFSU2_TR(0x763eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763eb7:{NFSU2_TR(0x763eb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B763eba:{NFSU2_TR(0x763eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763ebd:{NFSU2_TR(0x763ebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763ec2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763e79u);}goto L763e79;}
}
B763ec2:L763ec2:{c.instructions+=2;NFSU2_TR(0x763ec2);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xffffffffull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B763ec5:{NFSU2_TR(0x763ec5);
if(r1(R+518)){{goto L763ecd;}}
}
B763ec7:L763ec7:{c.instructions+=2;NFSU2_TR(0x763ec7);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B763ecb:{NFSU2_TR(0x763ecb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763eb4u);}goto L763eb4;}}
}
B763ecd:L763ecd:{c.instructions+=3;NFSU2_TR(0x763ecd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B763ece:{NFSU2_TR(0x763ece);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B763ecf:{NFSU2_TR(0x763ecf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B763ed0:L763ed0:{c.instructions+=6;NFSU2_TR(0x763ed0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B763ed4:{NFSU2_TR(0x763ed4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763ed5:{NFSU2_TR(0x763ed5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763ed6:{NFSU2_TR(0x763ed6);
__builtin_memmove((R+24),(R+0),4);
}
B763ed8:{NFSU2_TR(0x763ed8);
__builtin_memmove((R+12),(R+4),4);
}
B763eda:{NFSU2_TR(0x763eda);
if(r1(R+518)){{goto L763efd;}}
}
B763edc:L763edc:{c.instructions+=2;NFSU2_TR(0x763edc);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B763ee0:{NFSU2_TR(0x763ee0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L763efd;}}
}
B763ee2:L763ee2:{c.instructions+=3;NFSU2_TR(0x763ee2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B763ee6:{NFSU2_TR(0x763ee6);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+523,scarry<u32>(r4(U+0),r4(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
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
B763ee8:{NFSU2_TR(0x763ee8);
{goto L763f04;}
}
B763eea:L763eea:{c.instructions+=4;NFSU2_TR(0x763eea);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B763eec:{NFSU2_TR(0x763eec);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763ef0:{NFSU2_TR(0x763ef0);
__builtin_memmove((R+4),(R+28),4);
}
B763ef2:{NFSU2_TR(0x763ef2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x763ef7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763e79u);}goto L763e79;}
}
B763ef7:L763ef7:{c.instructions+=3;NFSU2_TR(0x763ef7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B763ef8:{NFSU2_TR(0x763ef8);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xffffffffull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B763efb:{NFSU2_TR(0x763efb);
if(r1(R+518)){{goto L763f04;}}
}
B763efd:L763efd:{c.instructions+=2;NFSU2_TR(0x763efd);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
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
B763f02:{NFSU2_TR(0x763f02);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x763eeau);}goto L763eea;}}
}
B763f04:L763f04:{c.instructions+=3;NFSU2_TR(0x763f04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B763f05:{NFSU2_TR(0x763f05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B763f06:{NFSU2_TR(0x763f06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B763f07:L763f07:{c.instructions+=16;NFSU2_TR(0x763f07);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763f08:{NFSU2_TR(0x763f08);
__builtin_memmove((R+20),(R+16),4);
}
B763f0a:{NFSU2_TR(0x763f0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x254ull))));
}
B763f10:{NFSU2_TR(0x763f10);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B763f15:{NFSU2_TR(0x763f15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B763f18:{NFSU2_TR(0x763f18);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763f19:{NFSU2_TR(0x763f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763f1c:{NFSU2_TR(0x763f1c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B763f1e:{NFSU2_TR(0x763f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763f21:{NFSU2_TR(0x763f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763f24:{NFSU2_TR(0x763f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763f27:{NFSU2_TR(0x763f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B763f2a:{NFSU2_TR(0x763f2a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B763f2c:{NFSU2_TR(0x763f2c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B763f2e:{NFSU2_TR(0x763f2e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B763f30:{NFSU2_TR(0x763f30);
if(r1(R+518)){TAIL_STATIC(0x76466bu,764);}
}
B763f36:L763f36:{c.instructions+=4;NFSU2_TR(0x763f36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763f37:{NFSU2_TR(0x763f37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763f38:{NFSU2_TR(0x763f38);
__builtin_memmove((R+28),(R+0),4);
}
B763f3a:{NFSU2_TR(0x763f3a);
{goto L763f3f;}
}
B763f3c:L763f3c:{c.instructions+=1;NFSU2_TR(0x763f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B763f3f:L763f3f:{c.instructions+=4;NFSU2_TR(0x763f3f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B763f40:{NFSU2_TR(0x763f40);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B763f44:{NFSU2_TR(0x763f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763f47:{NFSU2_TR(0x763f47);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x764669u,764);}
}
B763f4d:L763f4d:{c.instructions+=2;NFSU2_TR(0x763f4d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B763f50:{NFSU2_TR(0x763f50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L763f66;}}
}
B763f52:L763f52:{c.instructions+=2;NFSU2_TR(0x763f52);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x78ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x78ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B763f55:{NFSU2_TR(0x763f55);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L763f66;}}
}
B763f57:L763f57:{c.instructions+=4;NFSU2_TR(0x763f57);
w4(R+0,u32(s32(s8(r1(R+12)))));
}
B763f5a:{NFSU2_TR(0x763f5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d4270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B763f61:{NFSU2_TR(0x763f61);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B763f64:{NFSU2_TR(0x763f64);
{goto L763f68;}
}
B763f66:L763f66:{c.instructions+=1;NFSU2_TR(0x763f66);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B763f68:L763f68:{c.instructions+=7;NFSU2_TR(0x763f68);
u8 U[13];
w4(U+0,u32(u32(u32(0x7d4290ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B763f70:{NFSU2_TR(0x763f70);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B763f72:{NFSU2_TR(0x763f72);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B763f75:{NFSU2_TR(0x763f75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B763f76:{NFSU2_TR(0x763f76);
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
B763f78:{NFSU2_TR(0x763f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763f7b:{NFSU2_TR(0x763f7b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x76465cu,764);}
}
B763f81:L763f81:{c.instructions+=1;NFSU2_TR(0x763f81);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x76467cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B763f88:L763f88:{c.instructions+=9;NFSU2_TR(0x763f88);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B763f8a:{NFSU2_TR(0x763f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763f8e:{NFSU2_TR(0x763f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763f91:{NFSU2_TR(0x763f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763f94:{NFSU2_TR(0x763f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763f97:{NFSU2_TR(0x763f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763f9a:{NFSU2_TR(0x763f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763f9d:{NFSU2_TR(0x763f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B763fa0:{NFSU2_TR(0x763fa0);
TAIL_STATIC(0x76465cu,764);
}
B763fa5:L763fa5:{c.instructions+=3;NFSU2_TR(0x763fa5);
w4(R+0,u32(s32(s8(r1(R+12)))));
}
B763fa8:{NFSU2_TR(0x763fa8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B763fab:{NFSU2_TR(0x763fab);
if(r1(R+518)){{goto L763fe8;}}
}
B763fad:L763fad:{c.instructions+=2;NFSU2_TR(0x763fad);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B763fb0:{NFSU2_TR(0x763fb0);
if(r1(R+518)){{goto L763fdf;}}
}
B763fb2:L763fb2:{c.instructions+=2;NFSU2_TR(0x763fb2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B763fb5:{NFSU2_TR(0x763fb5);
if(r1(R+518)){{goto L763fd6;}}
}
B763fb7:L763fb7:{c.instructions+=3;NFSU2_TR(0x763fb7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B763fb8:{NFSU2_TR(0x763fb8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B763fb9:{NFSU2_TR(0x763fb9);
if(r1(R+518)){{goto L763fcd;}}
}
B763fbb:L763fbb:{c.instructions+=2;NFSU2_TR(0x763fbb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B763fbe:{NFSU2_TR(0x763fbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x76465cu,764);}
}
B763fc4:L763fc4:{c.instructions+=2;NFSU2_TR(0x763fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763fc8:{NFSU2_TR(0x763fc8);
TAIL_STATIC(0x76465cu,764);
}
B763fcd:L763fcd:{c.instructions+=2;NFSU2_TR(0x763fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763fd1:{NFSU2_TR(0x763fd1);
TAIL_STATIC(0x76465cu,764);
}
B763fd6:L763fd6:{c.instructions+=2;NFSU2_TR(0x763fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763fda:{NFSU2_TR(0x763fda);
TAIL_STATIC(0x76465cu,764);
}
B763fdf:L763fdf:{c.instructions+=2;NFSU2_TR(0x763fdf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x80ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B763fe3:{NFSU2_TR(0x763fe3);
TAIL_STATIC(0x76465cu,764);
}
B763fe8:L763fe8:{c.instructions+=2;NFSU2_TR(0x763fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763fec:{NFSU2_TR(0x763fec);
TAIL_STATIC(0x76465cu,764);
}
B763ff1:L763ff1:{c.instructions+=2;NFSU2_TR(0x763ff1);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2aull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B763ff4:{NFSU2_TR(0x763ff4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x764017u,764);}
}
B763ff6:L763ff6:{c.instructions+=3;NFSU2_TR(0x763ff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B763ffa:{NFSU2_TR(0x763ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B763ffd:{NFSU2_TR(0x763ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x764000u,764);
}
XIT:NFSU2_TR_EXIT(0x763,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
