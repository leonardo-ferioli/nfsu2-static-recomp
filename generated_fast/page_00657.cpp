#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_64f(u8* __restrict R,Cpu& c);
u32 body_650(u8* __restrict R,Cpu& c);
u32 body_651(u8* __restrict R,Cpu& c);
u32 body_652(u8* __restrict R,Cpu& c);
u32 body_654(u8* __restrict R,Cpu& c);
u32 body_656(u8* __restrict R,Cpu& c);
u32 body_658(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x657,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x657,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_657(u8* __restrict R,Cpu& c);
u32 page_657(Cpu& c){return body_657(c.regs.data(),c);}
__attribute__((noinline)) u32 body_657(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x657004:goto L657004;
case 0x657007:c.instructions+=1;goto B657007;
case 0x65700d:goto L65700d;
case 0x65700f:c.instructions+=1;goto B65700f;
case 0x657011:goto L657011;
case 0x657013:c.instructions+=1;goto B657013;
case 0x657019:goto L657019;
case 0x65701b:c.instructions+=2;goto B65701b;
case 0x65701d:c.instructions+=1;goto B65701d;
case 0x657020:goto L657020;
case 0x657022:c.instructions+=2;goto B657022;
case 0x657025:c.instructions+=1;goto B657025;
case 0x65702b:goto L65702b;
case 0x657030:goto L657030;
case 0x657033:c.instructions+=1;goto B657033;
case 0x657039:goto L657039;
case 0x65703c:c.instructions+=1;goto B65703c;
case 0x657042:goto L657042;
case 0x657045:c.instructions+=1;goto B657045;
case 0x65704b:goto L65704b;
case 0x65704e:c.instructions+=1;goto B65704e;
case 0x657054:goto L657054;
case 0x657057:c.instructions+=1;goto B657057;
case 0x65705d:goto L65705d;
case 0x657060:c.instructions+=1;goto B657060;
case 0x657062:goto L657062;
case 0x657065:c.instructions+=1;goto B657065;
case 0x657067:goto L657067;
case 0x65706a:c.instructions+=1;goto B65706a;
case 0x65706c:goto L65706c;
case 0x65706f:c.instructions+=1;goto B65706f;
case 0x657071:goto L657071;
case 0x657074:c.instructions+=1;goto B657074;
case 0x657076:goto L657076;
case 0x657079:c.instructions+=1;goto B657079;
case 0x65707b:goto L65707b;
case 0x65707e:c.instructions+=1;goto B65707e;
case 0x657080:goto L657080;
case 0x657083:c.instructions+=1;goto B657083;
case 0x657085:goto L657085;
case 0x657088:c.instructions+=1;goto B657088;
case 0x65708a:goto L65708a;
case 0x65708d:c.instructions+=9;goto B65708d;
case 0x657090:c.instructions+=8;goto B657090;
case 0x657091:c.instructions+=7;goto B657091;
case 0x657094:c.instructions+=6;goto B657094;
case 0x657095:c.instructions+=5;goto B657095;
case 0x657098:c.instructions+=4;goto B657098;
case 0x657099:c.instructions+=3;goto B657099;
case 0x65709c:c.instructions+=2;goto B65709c;
case 0x65709d:c.instructions+=1;goto B65709d;
case 0x6570a2:goto L6570a2;
case 0x6570a4:c.instructions+=1;goto B6570a4;
case 0x6570aa:goto L6570aa;
case 0x6570ac:goto L6570ac;
case 0x6570af:c.instructions+=9;goto B6570af;
case 0x6570b2:c.instructions+=8;goto B6570b2;
case 0x6570b3:c.instructions+=7;goto B6570b3;
case 0x6570b6:c.instructions+=6;goto B6570b6;
case 0x6570b7:c.instructions+=5;goto B6570b7;
case 0x6570ba:c.instructions+=4;goto B6570ba;
case 0x6570bb:c.instructions+=3;goto B6570bb;
case 0x6570be:c.instructions+=2;goto B6570be;
case 0x6570bf:c.instructions+=1;goto B6570bf;
case 0x6570c4:goto L6570c4;
case 0x6570c6:c.instructions+=1;goto B6570c6;
case 0x6570c8:goto L6570c8;
case 0x6570cd:c.instructions+=2;goto B6570cd;
case 0x6570d2:c.instructions+=1;goto B6570d2;
case 0x6570d7:goto L6570d7;
case 0x6570d9:c.instructions+=2;goto B6570d9;
case 0x6570dd:c.instructions+=1;goto B6570dd;
case 0x6570df:goto L6570df;
case 0x6570e1:c.instructions+=1;goto B6570e1;
case 0x6570e3:goto L6570e3;
case 0x6570e5:c.instructions+=2;goto B6570e5;
case 0x6570e7:c.instructions+=1;goto B6570e7;
case 0x6570ea:goto L6570ea;
case 0x6570ec:c.instructions+=2;goto B6570ec;
case 0x6570ef:c.instructions+=1;goto B6570ef;
case 0x6570f5:goto L6570f5;
case 0x6570f8:c.instructions+=3;goto B6570f8;
case 0x6570fa:c.instructions+=2;goto B6570fa;
case 0x6570fd:c.instructions+=1;goto B6570fd;
case 0x657102:goto L657102;
case 0x657104:goto L657104;
case 0x657107:c.instructions+=5;goto B657107;
case 0x657109:c.instructions+=4;goto B657109;
case 0x65710a:c.instructions+=3;goto B65710a;
case 0x65710d:c.instructions+=2;goto B65710d;
case 0x65710e:c.instructions+=1;goto B65710e;
case 0x657113:goto L657113;
case 0x657115:c.instructions+=1;goto B657115;
case 0x657117:goto L657117;
case 0x65711a:c.instructions+=6;goto B65711a;
case 0x65711b:c.instructions+=5;goto B65711b;
case 0x65711e:c.instructions+=4;goto B65711e;
case 0x65711f:c.instructions+=3;goto B65711f;
case 0x657120:c.instructions+=2;goto B657120;
case 0x657123:c.instructions+=1;goto B657123;
case 0x657128:goto L657128;
case 0x65712d:goto L65712d;
case 0x65712f:c.instructions+=1;goto B65712f;
case 0x657131:goto L657131;
case 0x657133:c.instructions+=2;goto B657133;
case 0x657135:c.instructions+=1;goto B657135;
case 0x657138:goto L657138;
case 0x65713a:c.instructions+=2;goto B65713a;
case 0x65713d:c.instructions+=1;goto B65713d;
case 0x657143:goto L657143;
case 0x657146:goto L657146;
case 0x657149:c.instructions+=2;goto B657149;
case 0x65714b:c.instructions+=1;goto B65714b;
case 0x65714d:goto L65714d;
case 0x657150:c.instructions+=1;goto B657150;
case 0x657152:goto L657152;
case 0x657155:c.instructions+=3;goto B657155;
case 0x657158:c.instructions+=2;goto B657158;
case 0x657159:c.instructions+=1;goto B657159;
case 0x65715e:goto L65715e;
case 0x657160:c.instructions+=1;goto B657160;
case 0x657162:goto L657162;
case 0x657165:c.instructions+=5;goto B657165;
case 0x657166:c.instructions+=4;goto B657166;
case 0x657167:c.instructions+=3;goto B657167;
case 0x657168:c.instructions+=2;goto B657168;
case 0x65716b:c.instructions+=1;goto B65716b;
case 0x657170:goto L657170;
case 0x657172:c.instructions+=1;goto B657172;
case 0x657178:goto L657178;
case 0x65717b:goto L65717b;
case 0x65717e:c.instructions+=2;goto B65717e;
case 0x657180:c.instructions+=1;goto B657180;
case 0x657182:goto L657182;
case 0x657185:c.instructions+=2;goto B657185;
case 0x657188:c.instructions+=1;goto B657188;
case 0x65718a:goto L65718a;
case 0x65718d:c.instructions+=3;goto B65718d;
case 0x65718e:c.instructions+=2;goto B65718e;
case 0x657191:c.instructions+=1;goto B657191;
case 0x657196:goto L657196;
case 0x657198:c.instructions+=1;goto B657198;
case 0x65719a:goto L65719a;
case 0x65719d:c.instructions+=5;goto B65719d;
case 0x65719e:c.instructions+=4;goto B65719e;
case 0x65719f:c.instructions+=3;goto B65719f;
case 0x6571a0:c.instructions+=2;goto B6571a0;
case 0x6571a3:c.instructions+=1;goto B6571a3;
case 0x6571a8:goto L6571a8;
case 0x6571aa:c.instructions+=1;goto B6571aa;
case 0x6571ac:goto L6571ac;
case 0x6571af:goto L6571af;
case 0x6571b3:c.instructions+=1;goto B6571b3;
case 0x6571b5:goto L6571b5;
case 0x6571b9:goto L6571b9;
case 0x6571bc:c.instructions+=2;goto B6571bc;
case 0x6571bd:c.instructions+=1;goto B6571bd;
case 0x6571c2:goto L6571c2;
case 0x6571c5:c.instructions+=2;goto B6571c5;
case 0x6571c6:c.instructions+=1;goto B6571c6;
case 0x6571cb:goto L6571cb;
case 0x6571cd:c.instructions+=1;goto B6571cd;
case 0x6571cf:goto L6571cf;
case 0x6571d2:c.instructions+=2;goto B6571d2;
case 0x6571d3:c.instructions+=1;goto B6571d3;
case 0x6571d8:goto L6571d8;
case 0x6571da:c.instructions+=1;goto B6571da;
case 0x6571dc:goto L6571dc;
case 0x6571de:c.instructions+=1;goto B6571de;
case 0x6571e0:goto L6571e0;
case 0x6571e5:c.instructions+=1;goto B6571e5;
case 0x6571ea:goto L6571ea;
case 0x6571ed:c.instructions+=2;goto B6571ed;
case 0x6571f0:c.instructions+=1;goto B6571f0;
case 0x6571f5:goto L6571f5;
case 0x6571f8:goto L6571f8;
case 0x6571fa:goto L6571fa;
case 0x6571fc:c.instructions+=5;goto B6571fc;
case 0x6571fd:c.instructions+=4;goto B6571fd;
case 0x6571fe:c.instructions+=3;goto B6571fe;
case 0x6571ff:c.instructions+=2;goto B6571ff;
case 0x657200:c.instructions+=1;goto B657200;
case 0x657203:goto L657203;
case 0x657205:c.instructions+=8;goto B657205;
case 0x657206:c.instructions+=7;goto B657206;
case 0x657208:c.instructions+=6;goto B657208;
case 0x657209:c.instructions+=5;goto B657209;
case 0x65720a:c.instructions+=4;goto B65720a;
case 0x65720c:c.instructions+=3;goto B65720c;
case 0x65720e:c.instructions+=2;goto B65720e;
case 0x657211:c.instructions+=1;goto B657211;
case 0x657213:goto L657213;
case 0x657215:c.instructions+=1;goto B657215;
case 0x65721a:goto L65721a;
case 0x65721b:c.instructions+=2;goto B65721b;
case 0x65721d:c.instructions+=1;goto B65721d;
case 0x657222:goto L657222;
case 0x657224:c.instructions+=1;goto B657224;
case 0x657226:goto L657226;
case 0x657228:c.instructions+=1;goto B657228;
case 0x65722d:goto L65722d;
case 0x65722f:c.instructions+=1;goto B65722f;
case 0x657231:goto L657231;
case 0x657233:goto L657233;
case 0x657235:c.instructions+=1;goto B657235;
case 0x657237:goto L657237;
case 0x657239:c.instructions+=5;goto B657239;
case 0x65723a:c.instructions+=4;goto B65723a;
case 0x65723d:c.instructions+=3;goto B65723d;
case 0x657240:c.instructions+=2;goto B657240;
case 0x657243:c.instructions+=1;goto B657243;
case 0x657245:goto L657245;
case 0x657248:c.instructions+=1;goto B657248;
case 0x65724a:goto L65724a;
case 0x65724d:c.instructions+=3;goto B65724d;
case 0x657250:c.instructions+=2;goto B657250;
case 0x657255:c.instructions+=1;goto B657255;
case 0x65725a:goto L65725a;
case 0x65725d:c.instructions+=3;goto B65725d;
case 0x65725e:c.instructions+=2;goto B65725e;
case 0x65725f:c.instructions+=1;goto B65725f;
case 0x657264:goto L657264;
case 0x657267:c.instructions+=1;goto B657267;
case 0x657269:goto L657269;
case 0x65726c:c.instructions+=1;goto B65726c;
case 0x65726e:goto L65726e;
case 0x657271:c.instructions+=4;goto B657271;
case 0x657274:c.instructions+=3;goto B657274;
case 0x657279:c.instructions+=2;goto B657279;
case 0x65727e:c.instructions+=1;goto B65727e;
case 0x657280:goto L657280;
case 0x657281:c.instructions+=5;goto B657281;
case 0x657284:c.instructions+=4;goto B657284;
case 0x657286:c.instructions+=3;goto B657286;
case 0x657289:c.instructions+=2;goto B657289;
case 0x65728b:c.instructions+=1;goto B65728b;
case 0x657290:goto L657290;
case 0x657293:goto L657293;
case 0x657295:c.instructions+=1;goto B657295;
case 0x65729a:goto L65729a;
case 0x65729c:c.instructions+=1;goto B65729c;
case 0x65729e:goto L65729e;
case 0x6572a3:c.instructions+=4;goto B6572a3;
case 0x6572a4:c.instructions+=3;goto B6572a4;
case 0x6572a5:c.instructions+=2;goto B6572a5;
case 0x6572a7:c.instructions+=1;goto B6572a7;
case 0x6572ac:goto L6572ac;
case 0x6572ae:goto L6572ae;
case 0x6572b0:goto L6572b0;
case 0x6572b1:goto L6572b1;
case 0x6572b2:c.instructions+=3;goto B6572b2;
case 0x6572b3:c.instructions+=2;goto B6572b3;
case 0x6572b4:c.instructions+=1;goto B6572b4;
case 0x6572b7:goto L6572b7;
case 0x6572b9:c.instructions+=21;goto B6572b9;
case 0x6572ba:c.instructions+=20;goto B6572ba;
case 0x6572bc:c.instructions+=19;goto B6572bc;
case 0x6572bf:c.instructions+=18;goto B6572bf;
case 0x6572c0:c.instructions+=17;goto B6572c0;
case 0x6572c5:c.instructions+=16;goto B6572c5;
case 0x6572c6:c.instructions+=15;goto B6572c6;
case 0x6572c7:c.instructions+=14;goto B6572c7;
case 0x6572ca:c.instructions+=13;goto B6572ca;
case 0x6572d1:c.instructions+=12;goto B6572d1;
case 0x6572d8:c.instructions+=11;goto B6572d8;
case 0x6572df:c.instructions+=10;goto B6572df;
case 0x6572e6:c.instructions+=9;goto B6572e6;
case 0x6572ed:c.instructions+=8;goto B6572ed;
case 0x6572f4:c.instructions+=7;goto B6572f4;
case 0x6572f7:c.instructions+=6;goto B6572f7;
case 0x6572fe:c.instructions+=5;goto B6572fe;
case 0x657305:c.instructions+=4;goto B657305;
case 0x657308:c.instructions+=3;goto B657308;
case 0x65730b:c.instructions+=2;goto B65730b;
case 0x657312:c.instructions+=1;goto B657312;
case 0x657317:goto L657317;
case 0x657319:c.instructions+=3;goto B657319;
case 0x65731b:c.instructions+=2;goto B65731b;
case 0x65731e:c.instructions+=1;goto B65731e;
case 0x657324:goto L657324;
case 0x657327:c.instructions+=1;goto B657327;
case 0x65732d:goto L65732d;
case 0x657330:c.instructions+=1;goto B657330;
case 0x657336:goto L657336;
case 0x657339:c.instructions+=3;goto B657339;
case 0x65733b:c.instructions+=2;goto B65733b;
case 0x65733e:c.instructions+=1;goto B65733e;
case 0x657343:goto L657343;
case 0x657345:c.instructions+=1;goto B657345;
case 0x657347:goto L657347;
case 0x65734c:c.instructions+=4;goto B65734c;
case 0x65734d:c.instructions+=3;goto B65734d;
case 0x65734e:c.instructions+=2;goto B65734e;
case 0x657350:c.instructions+=1;goto B657350;
case 0x657355:goto L657355;
case 0x657358:c.instructions+=1;goto B657358;
case 0x65735a:goto L65735a;
case 0x65735d:goto L65735d;
case 0x657360:c.instructions+=1;goto B657360;
case 0x657366:goto L657366;
case 0x657368:c.instructions+=1;goto B657368;
case 0x65736d:goto L65736d;
case 0x65736f:c.instructions+=1;goto B65736f;
case 0x657371:goto L657371;
case 0x657372:c.instructions+=5;goto B657372;
case 0x657373:c.instructions+=4;goto B657373;
case 0x657374:c.instructions+=3;goto B657374;
case 0x657376:c.instructions+=2;goto B657376;
case 0x657378:c.instructions+=1;goto B657378;
case 0x65737d:goto L65737d;
case 0x65737f:c.instructions+=1;goto B65737f;
case 0x657381:goto L657381;
case 0x657383:goto L657383;
case 0x657385:c.instructions+=2;goto B657385;
case 0x657388:c.instructions+=1;goto B657388;
case 0x65738e:goto L65738e;
case 0x657391:c.instructions+=3;goto B657391;
case 0x657393:c.instructions+=2;goto B657393;
case 0x657396:c.instructions+=1;goto B657396;
case 0x65739b:goto L65739b;
case 0x65739d:c.instructions+=1;goto B65739d;
case 0x65739f:goto L65739f;
case 0x6573a1:c.instructions+=1;goto B6573a1;
case 0x6573a6:goto L6573a6;
case 0x6573a8:c.instructions+=1;goto B6573a8;
case 0x6573aa:goto L6573aa;
case 0x6573ac:goto L6573ac;
case 0x6573ae:c.instructions+=1;goto B6573ae;
case 0x6573b4:goto L6573b4;
case 0x6573b7:c.instructions+=2;goto B6573b7;
case 0x6573ba:c.instructions+=1;goto B6573ba;
case 0x6573bc:goto L6573bc;
case 0x6573bf:c.instructions+=1;goto B6573bf;
case 0x6573c4:goto L6573c4;
case 0x6573c6:c.instructions+=2;goto B6573c6;
case 0x6573c9:c.instructions+=1;goto B6573c9;
case 0x6573cf:goto L6573cf;
case 0x6573d2:c.instructions+=2;goto B6573d2;
case 0x6573d4:c.instructions+=1;goto B6573d4;
case 0x6573d6:goto L6573d6;
case 0x6573d7:c.instructions+=1;goto B6573d7;
case 0x6573dc:goto L6573dc;
case 0x6573de:c.instructions+=2;goto B6573de;
case 0x6573e1:c.instructions+=1;goto B6573e1;
case 0x6573e7:goto L6573e7;
case 0x6573ea:c.instructions+=2;goto B6573ea;
case 0x6573ec:c.instructions+=1;goto B6573ec;
case 0x6573ee:goto L6573ee;
case 0x6573f2:c.instructions+=1;goto B6573f2;
case 0x6573f4:goto L6573f4;
case 0x6573f5:c.instructions+=1;goto B6573f5;
case 0x6573fa:goto L6573fa;
case 0x6573fc:c.instructions+=2;goto B6573fc;
case 0x6573ff:c.instructions+=1;goto B6573ff;
case 0x657405:goto L657405;
case 0x657408:c.instructions+=2;goto B657408;
case 0x65740a:c.instructions+=1;goto B65740a;
case 0x65740c:goto L65740c;
case 0x65740f:c.instructions+=2;goto B65740f;
case 0x657411:c.instructions+=1;goto B657411;
case 0x657413:goto L657413;
case 0x657417:c.instructions+=1;goto B657417;
case 0x657419:goto L657419;
case 0x65741c:c.instructions+=3;goto B65741c;
case 0x65741d:c.instructions+=2;goto B65741d;
case 0x657420:c.instructions+=1;goto B657420;
case 0x657425:goto L657425;
case 0x657428:goto L657428;
case 0x65742a:c.instructions+=5;goto B65742a;
case 0x65742d:c.instructions+=4;goto B65742d;
case 0x657434:c.instructions+=3;goto B657434;
case 0x657437:c.instructions+=2;goto B657437;
case 0x65743a:c.instructions+=1;goto B65743a;
case 0x65743c:goto L65743c;
case 0x65743f:c.instructions+=1;goto B65743f;
case 0x657444:goto L657444;
case 0x657446:c.instructions+=2;goto B657446;
case 0x657449:c.instructions+=1;goto B657449;
case 0x65744f:goto L65744f;
case 0x657452:c.instructions+=2;goto B657452;
case 0x657456:c.instructions+=1;goto B657456;
case 0x657458:goto L657458;
case 0x65745a:c.instructions+=1;goto B65745a;
case 0x65745f:goto L65745f;
case 0x657461:c.instructions+=1;goto B657461;
case 0x657463:goto L657463;
case 0x657465:c.instructions+=1;goto B657465;
case 0x65746a:goto L65746a;
case 0x65746c:c.instructions+=1;goto B65746c;
case 0x65746e:goto L65746e;
case 0x657470:goto L657470;
case 0x657472:c.instructions+=1;goto B657472;
case 0x657478:goto L657478;
case 0x65747c:c.instructions+=1;goto B65747c;
case 0x65747e:goto L65747e;
case 0x657485:goto L657485;
case 0x657488:c.instructions+=6;goto B657488;
case 0x65748b:c.instructions+=5;goto B65748b;
case 0x65748e:c.instructions+=4;goto B65748e;
case 0x657491:c.instructions+=3;goto B657491;
case 0x657493:c.instructions+=2;goto B657493;
case 0x657496:c.instructions+=1;goto B657496;
case 0x657498:goto L657498;
case 0x65749b:c.instructions+=3;goto B65749b;
case 0x65749c:c.instructions+=2;goto B65749c;
case 0x65749d:c.instructions+=1;goto B65749d;
case 0x6574a2:goto L6574a2;
case 0x6574a4:c.instructions+=1;goto B6574a4;
case 0x6574a6:goto L6574a6;
case 0x6574ad:c.instructions+=1;goto B6574ad;
case 0x6574af:goto L6574af;
case 0x6574b2:goto L6574b2;
case 0x6574b8:goto L6574b8;
case 0x6574ba:c.instructions+=8;goto B6574ba;
case 0x6574be:c.instructions+=7;goto B6574be;
case 0x6574c1:c.instructions+=6;goto B6574c1;
case 0x6574c4:c.instructions+=5;goto B6574c4;
case 0x6574c7:c.instructions+=4;goto B6574c7;
case 0x6574ca:c.instructions+=3;goto B6574ca;
case 0x6574ce:c.instructions+=2;goto B6574ce;
case 0x6574d1:c.instructions+=1;goto B6574d1;
case 0x6574d3:goto L6574d3;
case 0x6574d6:goto L6574d6;
case 0x6574d9:c.instructions+=1;goto B6574d9;
case 0x6574de:goto L6574de;
case 0x6574e0:c.instructions+=2;goto B6574e0;
case 0x6574e3:c.instructions+=1;goto B6574e3;
case 0x6574e9:goto L6574e9;
case 0x6574ec:c.instructions+=7;goto B6574ec;
case 0x6574ef:c.instructions+=6;goto B6574ef;
case 0x6574f2:c.instructions+=5;goto B6574f2;
case 0x6574f5:c.instructions+=4;goto B6574f5;
case 0x6574f8:c.instructions+=3;goto B6574f8;
case 0x6574fb:c.instructions+=2;goto B6574fb;
case 0x657500:c.instructions+=1;goto B657500;
case 0x657506:goto L657506;
case 0x657509:c.instructions+=1;goto B657509;
case 0x65750f:goto L65750f;
case 0x657513:c.instructions+=1;goto B657513;
case 0x657519:goto L657519;
case 0x65751b:c.instructions+=1;goto B65751b;
case 0x65751d:goto L65751d;
case 0x657520:c.instructions+=1;goto B657520;
case 0x657522:goto L657522;
case 0x657525:c.instructions+=1;goto B657525;
case 0x657527:goto L657527;
case 0x65752a:c.instructions+=1;goto B65752a;
case 0x65752c:goto L65752c;
case 0x657530:c.instructions+=3;goto B657530;
case 0x657533:c.instructions+=2;goto B657533;
case 0x657538:c.instructions+=1;goto B657538;
case 0x65753d:goto L65753d;
case 0x65753e:c.instructions+=2;goto B65753e;
case 0x657541:c.instructions+=1;goto B657541;
case 0x657546:goto L657546;
case 0x657549:c.instructions+=1;goto B657549;
case 0x65754e:goto L65754e;
case 0x657551:c.instructions+=2;goto B657551;
case 0x657554:c.instructions+=1;goto B657554;
case 0x657559:goto L657559;
case 0x65755d:c.instructions+=3;goto B65755d;
case 0x65755f:c.instructions+=2;goto B65755f;
case 0x657562:c.instructions+=1;goto B657562;
case 0x657564:goto L657564;
case 0x657567:c.instructions+=2;goto B657567;
case 0x657569:c.instructions+=1;goto B657569;
case 0x65756b:goto L65756b;
case 0x65756f:c.instructions+=1;goto B65756f;
case 0x657571:goto L657571;
case 0x657574:c.instructions+=2;goto B657574;
case 0x657577:c.instructions+=1;goto B657577;
case 0x65757c:goto L65757c;
case 0x65757e:c.instructions+=3;goto B65757e;
case 0x657581:c.instructions+=2;goto B657581;
case 0x657583:c.instructions+=1;goto B657583;
case 0x657585:goto L657585;
case 0x657589:c.instructions+=4;goto B657589;
case 0x65758c:c.instructions+=3;goto B65758c;
case 0x657591:c.instructions+=2;goto B657591;
case 0x657596:c.instructions+=1;goto B657596;
case 0x657598:goto L657598;
case 0x65759b:c.instructions+=4;goto B65759b;
case 0x65759d:c.instructions+=3;goto B65759d;
case 0x6575a1:c.instructions+=2;goto B6575a1;
case 0x6575a4:c.instructions+=1;goto B6575a4;
case 0x6575a6:goto L6575a6;
case 0x6575aa:c.instructions+=4;goto B6575aa;
case 0x6575ad:c.instructions+=3;goto B6575ad;
case 0x6575b2:c.instructions+=2;goto B6575b2;
case 0x6575b7:c.instructions+=1;goto B6575b7;
case 0x6575b9:goto L6575b9;
case 0x6575bc:c.instructions+=2;goto B6575bc;
case 0x6575bf:c.instructions+=1;goto B6575bf;
case 0x6575c3:goto L6575c3;
case 0x6575c7:c.instructions+=1;goto B6575c7;
case 0x6575cd:goto L6575cd;
case 0x6575d4:c.instructions+=1;goto B6575d4;
case 0x6575da:goto L6575da;
case 0x6575dd:c.instructions+=2;goto B6575dd;
case 0x6575e0:c.instructions+=1;goto B6575e0;
case 0x6575e5:goto L6575e5;
case 0x6575e8:c.instructions+=7;goto B6575e8;
case 0x6575eb:c.instructions+=6;goto B6575eb;
case 0x6575ee:c.instructions+=5;goto B6575ee;
case 0x6575f1:c.instructions+=4;goto B6575f1;
case 0x6575f4:c.instructions+=3;goto B6575f4;
case 0x6575f7:c.instructions+=2;goto B6575f7;
case 0x6575fb:c.instructions+=1;goto B6575fb;
case 0x6575fd:goto L6575fd;
case 0x657600:c.instructions+=4;goto B657600;
case 0x657603:c.instructions+=3;goto B657603;
case 0x657606:c.instructions+=2;goto B657606;
case 0x657609:c.instructions+=1;goto B657609;
case 0x65760b:goto L65760b;
case 0x65760f:goto L65760f;
case 0x657612:c.instructions+=4;goto B657612;
case 0x657616:c.instructions+=3;goto B657616;
case 0x657619:c.instructions+=2;goto B657619;
case 0x65761c:c.instructions+=1;goto B65761c;
case 0x65761e:goto L65761e;
case 0x657622:c.instructions+=6;goto B657622;
case 0x657625:c.instructions+=5;goto B657625;
case 0x65762a:c.instructions+=4;goto B65762a;
case 0x65762f:c.instructions+=3;goto B65762f;
case 0x657630:c.instructions+=2;goto B657630;
case 0x657633:c.instructions+=1;goto B657633;
case 0x657638:goto L657638;
case 0x65763b:goto L65763b;
case 0x65763f:c.instructions+=1;goto B65763f;
case 0x657641:goto L657641;
case 0x657645:c.instructions+=6;goto B657645;
case 0x657648:c.instructions+=5;goto B657648;
case 0x65764d:c.instructions+=4;goto B65764d;
case 0x657652:c.instructions+=3;goto B657652;
case 0x657653:c.instructions+=2;goto B657653;
case 0x657656:c.instructions+=1;goto B657656;
case 0x65765b:goto L65765b;
case 0x65765e:goto L65765e;
case 0x657661:c.instructions+=1;goto B657661;
case 0x657663:goto L657663;
case 0x657666:c.instructions+=2;goto B657666;
case 0x657669:c.instructions+=1;goto B657669;
case 0x65766e:goto L65766e;
case 0x657670:c.instructions+=1;goto B657670;
case 0x657676:goto L657676;
case 0x65767b:c.instructions+=6;goto B65767b;
case 0x65767e:c.instructions+=5;goto B65767e;
case 0x657683:c.instructions+=4;goto B657683;
case 0x657688:c.instructions+=3;goto B657688;
case 0x657689:c.instructions+=2;goto B657689;
case 0x65768c:c.instructions+=1;goto B65768c;
case 0x657691:goto L657691;
case 0x657694:goto L657694;
case 0x657697:c.instructions+=1;goto B657697;
case 0x657699:goto L657699;
case 0x65769d:c.instructions+=1;goto B65769d;
case 0x6576a3:goto L6576a3;
case 0x6576a6:c.instructions+=2;goto B6576a6;
case 0x6576a9:c.instructions+=1;goto B6576a9;
case 0x6576ae:goto L6576ae;
case 0x6576b0:c.instructions+=1;goto B6576b0;
case 0x6576b6:goto L6576b6;
case 0x6576b9:c.instructions+=5;goto B6576b9;
case 0x6576be:c.instructions+=4;goto B6576be;
case 0x6576c3:c.instructions+=3;goto B6576c3;
case 0x6576c4:c.instructions+=2;goto B6576c4;
case 0x6576c7:c.instructions+=1;goto B6576c7;
case 0x6576cc:goto L6576cc;
case 0x6576cf:goto L6576cf;
case 0x6576d2:c.instructions+=1;goto B6576d2;
case 0x6576d4:goto L6576d4;
case 0x6576d7:c.instructions+=1;goto B6576d7;
case 0x6576d9:goto L6576d9;
case 0x6576dc:c.instructions+=2;goto B6576dc;
case 0x6576df:c.instructions+=1;goto B6576df;
case 0x6576e4:goto L6576e4;
case 0x6576e6:c.instructions+=1;goto B6576e6;
case 0x6576e8:goto L6576e8;
case 0x6576ec:c.instructions+=6;goto B6576ec;
case 0x6576ef:c.instructions+=5;goto B6576ef;
case 0x6576f4:c.instructions+=4;goto B6576f4;
case 0x6576f9:c.instructions+=3;goto B6576f9;
case 0x6576fa:c.instructions+=2;goto B6576fa;
case 0x6576fd:c.instructions+=1;goto B6576fd;
case 0x657702:goto L657702;
case 0x657705:goto L657705;
case 0x657707:c.instructions+=1;goto B657707;
case 0x657709:goto L657709;
case 0x65770d:c.instructions+=1;goto B65770d;
case 0x65770f:goto L65770f;
case 0x657713:c.instructions+=1;goto B657713;
case 0x657715:goto L657715;
case 0x65771a:c.instructions+=6;goto B65771a;
case 0x65771d:c.instructions+=5;goto B65771d;
case 0x657722:c.instructions+=4;goto B657722;
case 0x657727:c.instructions+=3;goto B657727;
case 0x657728:c.instructions+=2;goto B657728;
case 0x65772b:c.instructions+=1;goto B65772b;
case 0x657730:goto L657730;
case 0x657733:c.instructions+=1;goto B657733;
case 0x657737:goto L657737;
case 0x65773b:c.instructions+=1;goto B65773b;
case 0x65773d:goto L65773d;
case 0x657741:c.instructions+=1;goto B657741;
case 0x657743:goto L657743;
case 0x657748:c.instructions+=6;goto B657748;
case 0x65774b:c.instructions+=5;goto B65774b;
case 0x657750:c.instructions+=4;goto B657750;
case 0x657755:c.instructions+=3;goto B657755;
case 0x657756:c.instructions+=2;goto B657756;
case 0x657759:c.instructions+=1;goto B657759;
case 0x65775e:goto L65775e;
case 0x657761:c.instructions+=1;goto B657761;
case 0x657765:goto L657765;
case 0x657769:c.instructions+=1;goto B657769;
case 0x65776f:goto L65776f;
case 0x657773:c.instructions+=1;goto B657773;
case 0x657778:goto L657778;
case 0x65777c:c.instructions+=1;goto B65777c;
case 0x65777e:goto L65777e;
case 0x657781:c.instructions+=1;goto B657781;
case 0x657783:goto L657783;
case 0x657786:c.instructions+=1;goto B657786;
case 0x657788:goto L657788;
case 0x65778c:c.instructions+=6;goto B65778c;
case 0x65778f:c.instructions+=5;goto B65778f;
case 0x657794:c.instructions+=4;goto B657794;
case 0x657799:c.instructions+=3;goto B657799;
case 0x65779a:c.instructions+=2;goto B65779a;
case 0x65779d:c.instructions+=1;goto B65779d;
case 0x6577a2:goto L6577a2;
case 0x6577a5:c.instructions+=1;goto B6577a5;
case 0x6577a9:goto L6577a9;
case 0x6577ad:c.instructions+=1;goto B6577ad;
case 0x6577af:goto L6577af;
case 0x6577b2:c.instructions+=1;goto B6577b2;
case 0x6577b4:goto L6577b4;
case 0x6577b8:c.instructions+=6;goto B6577b8;
case 0x6577bb:c.instructions+=5;goto B6577bb;
case 0x6577c0:c.instructions+=4;goto B6577c0;
case 0x6577c5:c.instructions+=3;goto B6577c5;
case 0x6577c6:c.instructions+=2;goto B6577c6;
case 0x6577c9:c.instructions+=1;goto B6577c9;
case 0x6577ce:goto L6577ce;
case 0x6577d1:c.instructions+=1;goto B6577d1;
case 0x6577d5:goto L6577d5;
case 0x6577d9:c.instructions+=1;goto B6577d9;
case 0x6577db:goto L6577db;
case 0x6577df:c.instructions+=1;goto B6577df;
case 0x6577e1:goto L6577e1;
case 0x6577e5:c.instructions+=6;goto B6577e5;
case 0x6577e8:c.instructions+=5;goto B6577e8;
case 0x6577ed:c.instructions+=4;goto B6577ed;
case 0x6577f2:c.instructions+=3;goto B6577f2;
case 0x6577f3:c.instructions+=2;goto B6577f3;
case 0x6577f6:c.instructions+=1;goto B6577f6;
case 0x6577fb:goto L6577fb;
case 0x6577fe:c.instructions+=1;goto B6577fe;
case 0x657802:goto L657802;
case 0x657806:c.instructions+=1;goto B657806;
case 0x657808:goto L657808;
case 0x65780c:c.instructions+=6;goto B65780c;
case 0x65780f:c.instructions+=5;goto B65780f;
case 0x657814:c.instructions+=4;goto B657814;
case 0x657819:c.instructions+=3;goto B657819;
case 0x65781a:c.instructions+=2;goto B65781a;
case 0x65781d:c.instructions+=1;goto B65781d;
case 0x657822:goto L657822;
case 0x657825:c.instructions+=1;goto B657825;
case 0x657829:goto L657829;
case 0x65782d:c.instructions+=1;goto B65782d;
case 0x65782f:goto L65782f;
case 0x657833:c.instructions+=6;goto B657833;
case 0x657836:c.instructions+=5;goto B657836;
case 0x65783b:c.instructions+=4;goto B65783b;
case 0x657840:c.instructions+=3;goto B657840;
case 0x657841:c.instructions+=2;goto B657841;
case 0x657844:c.instructions+=1;goto B657844;
case 0x657849:goto L657849;
case 0x65784c:c.instructions+=1;goto B65784c;
case 0x657850:goto L657850;
case 0x657854:c.instructions+=1;goto B657854;
case 0x657856:goto L657856;
case 0x657859:c.instructions+=1;goto B657859;
case 0x65785b:goto L65785b;
case 0x65785e:c.instructions+=1;goto B65785e;
case 0x657860:goto L657860;
case 0x657863:c.instructions+=1;goto B657863;
case 0x657865:goto L657865;
case 0x657869:c.instructions+=6;goto B657869;
case 0x65786c:c.instructions+=5;goto B65786c;
case 0x657871:c.instructions+=4;goto B657871;
case 0x657876:c.instructions+=3;goto B657876;
case 0x657877:c.instructions+=2;goto B657877;
case 0x65787a:c.instructions+=1;goto B65787a;
case 0x65787f:goto L65787f;
case 0x657882:c.instructions+=1;goto B657882;
case 0x657886:goto L657886;
case 0x657889:c.instructions+=1;goto B657889;
case 0x65788b:goto L65788b;
case 0x65788e:c.instructions+=3;goto B65788e;
case 0x657890:c.instructions+=2;goto B657890;
case 0x657893:c.instructions+=1;goto B657893;
case 0x657898:goto L657898;
case 0x65789c:goto L65789c;
case 0x65789f:c.instructions+=5;goto B65789f;
case 0x6578a2:c.instructions+=4;goto B6578a2;
case 0x6578a6:c.instructions+=3;goto B6578a6;
case 0x6578a8:c.instructions+=2;goto B6578a8;
case 0x6578ab:c.instructions+=1;goto B6578ab;
case 0x6578ad:goto L6578ad;
case 0x6578b1:c.instructions+=1;goto B6578b1;
case 0x6578b3:goto L6578b3;
case 0x6578b6:c.instructions+=4;goto B6578b6;
case 0x6578b8:c.instructions+=3;goto B6578b8;
case 0x6578ba:c.instructions+=2;goto B6578ba;
case 0x6578bb:c.instructions+=1;goto B6578bb;
case 0x6578bd:goto L6578bd;
case 0x6578c0:c.instructions+=3;goto B6578c0;
case 0x6578c2:c.instructions+=2;goto B6578c2;
case 0x6578c5:c.instructions+=1;goto B6578c5;
case 0x6578c7:goto L6578c7;
case 0x6578ca:c.instructions+=2;goto B6578ca;
case 0x6578cd:c.instructions+=1;goto B6578cd;
case 0x6578cf:goto L6578cf;
case 0x6578d3:goto L6578d3;
case 0x6578d6:c.instructions+=2;goto B6578d6;
case 0x6578d9:c.instructions+=1;goto B6578d9;
case 0x6578de:goto L6578de;
case 0x6578e1:c.instructions+=3;goto B6578e1;
case 0x6578e4:c.instructions+=2;goto B6578e4;
case 0x6578e6:c.instructions+=1;goto B6578e6;
case 0x6578e8:goto L6578e8;
case 0x6578ea:c.instructions+=1;goto B6578ea;
case 0x6578ed:goto L6578ed;
case 0x6578f0:c.instructions+=1;goto B6578f0;
case 0x6578f5:goto L6578f5;
case 0x6578f7:goto L6578f7;
case 0x6578fa:c.instructions+=4;goto B6578fa;
case 0x6578fd:c.instructions+=3;goto B6578fd;
case 0x657900:c.instructions+=2;goto B657900;
case 0x657901:c.instructions+=1;goto B657901;
case 0x657906:goto L657906;
case 0x65790a:c.instructions+=1;goto B65790a;
case 0x65790c:goto L65790c;
case 0x65790e:c.instructions+=1;goto B65790e;
case 0x657910:goto L657910;
case 0x657913:c.instructions+=1;goto B657913;
case 0x657915:goto L657915;
case 0x657918:c.instructions+=1;goto B657918;
case 0x65791a:goto L65791a;
case 0x65791d:c.instructions+=1;goto B65791d;
case 0x65791f:goto L65791f;
case 0x657920:c.instructions+=8;goto B657920;
case 0x657922:c.instructions+=7;goto B657922;
case 0x657923:c.instructions+=6;goto B657923;
case 0x657924:c.instructions+=5;goto B657924;
case 0x657927:c.instructions+=4;goto B657927;
case 0x65792a:c.instructions+=3;goto B65792a;
case 0x65792c:c.instructions+=2;goto B65792c;
case 0x65792e:c.instructions+=1;goto B65792e;
case 0x657933:goto L657933;
case 0x657936:goto L657936;
case 0x65793a:c.instructions+=1;goto B65793a;
case 0x657940:goto L657940;
case 0x657943:c.instructions+=1;goto B657943;
case 0x657945:goto L657945;
case 0x65794a:c.instructions+=4;goto B65794a;
case 0x65794f:c.instructions+=3;goto B65794f;
case 0x657952:c.instructions+=2;goto B657952;
case 0x657957:c.instructions+=1;goto B657957;
case 0x657959:goto L657959;
case 0x65795c:c.instructions+=1;goto B65795c;
case 0x65795e:goto L65795e;
case 0x657961:c.instructions+=2;goto B657961;
case 0x657964:c.instructions+=1;goto B657964;
case 0x657969:goto L657969;
case 0x65796b:c.instructions+=1;goto B65796b;
case 0x65796d:goto L65796d;
case 0x657972:c.instructions+=3;goto B657972;
case 0x657977:c.instructions+=2;goto B657977;
case 0x65797a:c.instructions+=1;goto B65797a;
case 0x65797f:goto L65797f;
case 0x657984:c.instructions+=3;goto B657984;
case 0x657985:c.instructions+=2;goto B657985;
case 0x657988:c.instructions+=1;goto B657988;
case 0x65798d:goto L65798d;
case 0x657990:c.instructions+=1;goto B657990;
case 0x657995:goto L657995;
case 0x657998:c.instructions+=3;goto B657998;
case 0x65799b:c.instructions+=2;goto B65799b;
case 0x65799f:c.instructions+=1;goto B65799f;
case 0x6579a1:goto L6579a1;
case 0x6579a3:c.instructions+=1;goto B6579a3;
case 0x6579a5:goto L6579a5;
case 0x6579a9:c.instructions+=7;goto B6579a9;
case 0x6579ad:c.instructions+=6;goto B6579ad;
case 0x6579b0:c.instructions+=5;goto B6579b0;
case 0x6579b5:c.instructions+=4;goto B6579b5;
case 0x6579ba:c.instructions+=3;goto B6579ba;
case 0x6579bb:c.instructions+=2;goto B6579bb;
case 0x6579be:c.instructions+=1;goto B6579be;
case 0x6579c3:goto L6579c3;
case 0x6579c6:c.instructions+=1;goto B6579c6;
case 0x6579c8:goto L6579c8;
case 0x6579cb:c.instructions+=2;goto B6579cb;
case 0x6579cf:c.instructions+=1;goto B6579cf;
case 0x6579d1:goto L6579d1;
case 0x6579d4:c.instructions+=2;goto B6579d4;
case 0x6579d7:c.instructions+=1;goto B6579d7;
case 0x6579dc:goto L6579dc;
case 0x6579de:c.instructions+=1;goto B6579de;
case 0x6579e0:goto L6579e0;
case 0x6579e4:c.instructions+=6;goto B6579e4;
case 0x6579e7:c.instructions+=5;goto B6579e7;
case 0x6579ec:c.instructions+=4;goto B6579ec;
case 0x6579f1:c.instructions+=3;goto B6579f1;
case 0x6579f2:c.instructions+=2;goto B6579f2;
case 0x6579f5:c.instructions+=1;goto B6579f5;
case 0x6579fa:goto L6579fa;
case 0x6579fd:c.instructions+=1;goto B6579fd;
case 0x6579ff:goto L6579ff;
case 0x657a02:c.instructions+=5;goto B657a02;
case 0x657a05:c.instructions+=4;goto B657a05;
case 0x657a07:c.instructions+=3;goto B657a07;
case 0x657a0a:c.instructions+=2;goto B657a0a;
case 0x657a0d:c.instructions+=1;goto B657a0d;
case 0x657a12:goto L657a12;
case 0x657a14:c.instructions+=1;goto B657a14;
case 0x657a16:goto L657a16;
case 0x657a19:c.instructions+=7;goto B657a19;
case 0x657a1a:c.instructions+=6;goto B657a1a;
case 0x657a1d:c.instructions+=5;goto B657a1d;
case 0x657a20:c.instructions+=4;goto B657a20;
case 0x657a23:c.instructions+=3;goto B657a23;
case 0x657a26:c.instructions+=2;goto B657a26;
case 0x657a27:c.instructions+=1;goto B657a27;
case 0x657a2c:goto L657a2c;
case 0x657a30:c.instructions+=1;goto B657a30;
case 0x657a35:goto L657a35;
case 0x657a38:c.instructions+=3;goto B657a38;
case 0x657a3b:c.instructions+=2;goto B657a3b;
case 0x657a3e:c.instructions+=1;goto B657a3e;
case 0x657a40:goto L657a40;
case 0x657a43:c.instructions+=2;goto B657a43;
case 0x657a46:c.instructions+=1;goto B657a46;
case 0x657a4b:goto L657a4b;
case 0x657a4e:goto L657a4e;
case 0x657a52:c.instructions+=1;goto B657a52;
case 0x657a54:goto L657a54;
case 0x657a57:c.instructions+=2;goto B657a57;
case 0x657a5a:c.instructions+=1;goto B657a5a;
case 0x657a5f:goto L657a5f;
case 0x657a61:c.instructions+=1;goto B657a61;
case 0x657a63:goto L657a63;
case 0x657a66:c.instructions+=2;goto B657a66;
case 0x657a69:c.instructions+=1;goto B657a69;
case 0x657a6e:goto L657a6e;
case 0x657a70:goto L657a70;
case 0x657a72:c.instructions+=2;goto B657a72;
case 0x657a75:c.instructions+=1;goto B657a75;
case 0x657a77:goto L657a77;
case 0x657a7a:c.instructions+=1;goto B657a7a;
case 0x657a7c:goto L657a7c;
case 0x657a7f:c.instructions+=1;goto B657a7f;
case 0x657a81:goto L657a81;
case 0x657a84:c.instructions+=6;goto B657a84;
case 0x657a87:c.instructions+=5;goto B657a87;
case 0x657a8b:c.instructions+=4;goto B657a8b;
case 0x657a8c:c.instructions+=3;goto B657a8c;
case 0x657a8f:c.instructions+=2;goto B657a8f;
case 0x657a92:c.instructions+=1;goto B657a92;
case 0x657a97:goto L657a97;
case 0x657a9a:c.instructions+=5;goto B657a9a;
case 0x657a9c:c.instructions+=4;goto B657a9c;
case 0x657a9f:c.instructions+=3;goto B657a9f;
case 0x657aa0:c.instructions+=2;goto B657aa0;
case 0x657aa2:c.instructions+=1;goto B657aa2;
case 0x657aa7:goto L657aa7;
case 0x657aaa:c.instructions+=1;goto B657aaa;
case 0x657aac:goto L657aac;
case 0x657aae:c.instructions+=1;goto B657aae;
case 0x657ab0:goto L657ab0;
case 0x657ab3:c.instructions+=2;goto B657ab3;
case 0x657ab6:c.instructions+=1;goto B657ab6;
case 0x657abb:goto L657abb;
case 0x657abd:c.instructions+=1;goto B657abd;
case 0x657abf:goto L657abf;
case 0x657ac3:c.instructions+=1;goto B657ac3;
case 0x657ac5:goto L657ac5;
case 0x657ac8:c.instructions+=1;goto B657ac8;
case 0x657aca:goto L657aca;
case 0x657acd:c.instructions+=1;goto B657acd;
case 0x657acf:goto L657acf;
case 0x657ad2:c.instructions+=2;goto B657ad2;
case 0x657ad5:c.instructions+=1;goto B657ad5;
case 0x657ada:goto L657ada;
case 0x657adc:c.instructions+=1;goto B657adc;
case 0x657ade:goto L657ade;
case 0x657ae1:c.instructions+=1;goto B657ae1;
case 0x657ae3:goto L657ae3;
case 0x657ae7:c.instructions+=6;goto B657ae7;
case 0x657aea:c.instructions+=5;goto B657aea;
case 0x657aef:c.instructions+=4;goto B657aef;
case 0x657af4:c.instructions+=3;goto B657af4;
case 0x657af5:c.instructions+=2;goto B657af5;
case 0x657af8:c.instructions+=1;goto B657af8;
case 0x657afd:goto L657afd;
case 0x657b00:goto L657b00;
case 0x657b02:c.instructions+=1;goto B657b02;
case 0x657b04:goto L657b04;
case 0x657b07:c.instructions+=1;goto B657b07;
case 0x657b09:goto L657b09;
case 0x657b0c:c.instructions+=1;goto B657b0c;
case 0x657b0e:goto L657b0e;
case 0x657b12:c.instructions+=1;goto B657b12;
case 0x657b14:goto L657b14;
case 0x657b18:c.instructions+=6;goto B657b18;
case 0x657b1b:c.instructions+=5;goto B657b1b;
case 0x657b20:c.instructions+=4;goto B657b20;
case 0x657b25:c.instructions+=3;goto B657b25;
case 0x657b26:c.instructions+=2;goto B657b26;
case 0x657b29:c.instructions+=1;goto B657b29;
case 0x657b2e:goto L657b2e;
case 0x657b31:goto L657b31;
case 0x657b35:goto L657b35;
case 0x657b38:c.instructions+=2;goto B657b38;
case 0x657b3c:c.instructions+=1;goto B657b3c;
case 0x657b3e:goto L657b3e;
case 0x657b40:c.instructions+=1;goto B657b40;
case 0x657b42:goto L657b42;
case 0x657b45:c.instructions+=1;goto B657b45;
case 0x657b47:goto L657b47;
case 0x657b4b:c.instructions+=6;goto B657b4b;
case 0x657b4e:c.instructions+=5;goto B657b4e;
case 0x657b53:c.instructions+=4;goto B657b53;
case 0x657b58:c.instructions+=3;goto B657b58;
case 0x657b59:c.instructions+=2;goto B657b59;
case 0x657b5c:c.instructions+=1;goto B657b5c;
case 0x657b61:goto L657b61;
case 0x657b64:c.instructions+=2;goto B657b64;
case 0x657b67:c.instructions+=1;goto B657b67;
case 0x657b6b:goto L657b6b;
case 0x657b6e:c.instructions+=3;goto B657b6e;
case 0x657b70:c.instructions+=2;goto B657b70;
case 0x657b73:c.instructions+=1;goto B657b73;
case 0x657b78:goto L657b78;
case 0x657b7a:c.instructions+=1;goto B657b7a;
case 0x657b7c:goto L657b7c;
case 0x657b80:c.instructions+=1;goto B657b80;
case 0x657b82:goto L657b82;
case 0x657b85:c.instructions+=2;goto B657b85;
case 0x657b88:c.instructions+=1;goto B657b88;
case 0x657b8d:goto L657b8d;
case 0x657b8f:c.instructions+=3;goto B657b8f;
case 0x657b92:c.instructions+=2;goto B657b92;
case 0x657b95:c.instructions+=1;goto B657b95;
case 0x657b97:goto L657b97;
case 0x657b9a:c.instructions+=1;goto B657b9a;
case 0x657b9c:goto L657b9c;
case 0x657b9f:c.instructions+=3;goto B657b9f;
case 0x657ba4:c.instructions+=2;goto B657ba4;
case 0x657ba9:c.instructions+=1;goto B657ba9;
case 0x657bab:goto L657bab;
case 0x657bae:c.instructions+=3;goto B657bae;
case 0x657bb3:c.instructions+=2;goto B657bb3;
case 0x657bb8:c.instructions+=1;goto B657bb8;
case 0x657bba:goto L657bba;
case 0x657bbd:c.instructions+=2;goto B657bbd;
case 0x657bc2:c.instructions+=1;goto B657bc2;
case 0x657bc7:goto L657bc7;
case 0x657bc8:c.instructions+=2;goto B657bc8;
case 0x657bcb:c.instructions+=1;goto B657bcb;
case 0x657bd0:goto L657bd0;
case 0x657bd3:goto L657bd3;
case 0x657bd5:goto L657bd5;
case 0x657bd6:c.instructions+=4;goto B657bd6;
case 0x657bd7:c.instructions+=3;goto B657bd7;
case 0x657bd8:c.instructions+=2;goto B657bd8;
case 0x657bd9:c.instructions+=1;goto B657bd9;
case 0x657bdc:goto L657bdc;
case 0x657bde:c.instructions+=14;goto B657bde;
case 0x657bdf:c.instructions+=13;goto B657bdf;
case 0x657be1:c.instructions+=12;goto B657be1;
case 0x657be4:c.instructions+=11;goto B657be4;
case 0x657be7:c.instructions+=10;goto B657be7;
case 0x657be8:c.instructions+=9;goto B657be8;
case 0x657bea:c.instructions+=8;goto B657bea;
case 0x657bec:c.instructions+=7;goto B657bec;
case 0x657bef:c.instructions+=6;goto B657bef;
case 0x657bf2:c.instructions+=5;goto B657bf2;
case 0x657bf5:c.instructions+=4;goto B657bf5;
case 0x657bf8:c.instructions+=3;goto B657bf8;
case 0x657bfb:c.instructions+=2;goto B657bfb;
case 0x657bfe:c.instructions+=1;goto B657bfe;
case 0x657c04:goto L657c04;
case 0x657c08:c.instructions+=1;goto B657c08;
case 0x657c0e:goto L657c0e;
case 0x657c0f:c.instructions+=6;goto B657c0f;
case 0x657c12:c.instructions+=5;goto B657c12;
case 0x657c15:c.instructions+=4;goto B657c15;
case 0x657c17:c.instructions+=3;goto B657c17;
case 0x657c18:c.instructions+=2;goto B657c18;
case 0x657c1b:c.instructions+=1;goto B657c1b;
case 0x657c1d:goto L657c1d;
case 0x657c20:c.instructions+=1;goto B657c20;
case 0x657c22:goto L657c22;
case 0x657c24:goto L657c24;
case 0x657c27:c.instructions+=3;goto B657c27;
case 0x657c29:c.instructions+=2;goto B657c29;
case 0x657c2a:c.instructions+=1;goto B657c2a;
case 0x657c2c:goto L657c2c;
case 0x657c2e:c.instructions+=1;goto B657c2e;
case 0x657c2f:goto L657c2f;
case 0x657c32:c.instructions+=12;goto B657c32;
case 0x657c33:c.instructions+=11;goto B657c33;
case 0x657c36:c.instructions+=10;goto B657c36;
case 0x657c37:c.instructions+=9;goto B657c37;
case 0x657c38:c.instructions+=8;goto B657c38;
case 0x657c3b:c.instructions+=7;goto B657c3b;
case 0x657c3e:c.instructions+=6;goto B657c3e;
case 0x657c40:c.instructions+=5;goto B657c40;
case 0x657c43:c.instructions+=4;goto B657c43;
case 0x657c44:c.instructions+=3;goto B657c44;
case 0x657c45:c.instructions+=2;goto B657c45;
case 0x657c47:c.instructions+=1;goto B657c47;
case 0x657c4c:goto L657c4c;
case 0x657c4e:c.instructions+=1;goto B657c4e;
case 0x657c54:goto L657c54;
case 0x657c56:goto L657c56;
case 0x657c57:goto L657c57;
case 0x657c5a:c.instructions+=1;goto B657c5a;
case 0x657c5c:goto L657c5c;
case 0x657c5e:c.instructions+=1;goto B657c5e;
case 0x657c64:goto L657c64;
case 0x657c67:c.instructions+=7;goto B657c67;
case 0x657c6a:c.instructions+=6;goto B657c6a;
case 0x657c6b:c.instructions+=5;goto B657c6b;
case 0x657c6e:c.instructions+=4;goto B657c6e;
case 0x657c6f:c.instructions+=3;goto B657c6f;
case 0x657c72:c.instructions+=2;goto B657c72;
case 0x657c73:c.instructions+=1;goto B657c73;
case 0x657c78:goto L657c78;
case 0x657c7a:c.instructions+=1;goto B657c7a;
case 0x657c80:goto L657c80;
case 0x657c82:goto L657c82;
case 0x657c84:c.instructions+=1;goto B657c84;
case 0x657c85:goto L657c85;
case 0x657c87:c.instructions+=1;goto B657c87;
case 0x657c89:goto L657c89;
case 0x657c8c:c.instructions+=11;goto B657c8c;
case 0x657c8f:c.instructions+=10;goto B657c8f;
case 0x657c90:c.instructions+=9;goto B657c90;
case 0x657c93:c.instructions+=8;goto B657c93;
case 0x657c94:c.instructions+=7;goto B657c94;
case 0x657c96:c.instructions+=6;goto B657c96;
case 0x657c99:c.instructions+=5;goto B657c99;
case 0x657c9a:c.instructions+=4;goto B657c9a;
case 0x657c9b:c.instructions+=3;goto B657c9b;
case 0x657c9c:c.instructions+=2;goto B657c9c;
case 0x657c9e:c.instructions+=1;goto B657c9e;
case 0x657ca3:goto L657ca3;
case 0x657ca5:c.instructions+=1;goto B657ca5;
case 0x657cab:goto L657cab;
case 0x657cad:goto L657cad;
case 0x657caf:c.instructions+=1;goto B657caf;
case 0x657cb0:goto L657cb0;
case 0x657cb3:c.instructions+=1;goto B657cb3;
case 0x657cb5:goto L657cb5;
case 0x657cb7:c.instructions+=1;goto B657cb7;
case 0x657cb9:goto L657cb9;
case 0x657cbc:c.instructions+=7;goto B657cbc;
case 0x657cbf:c.instructions+=6;goto B657cbf;
case 0x657cc0:c.instructions+=5;goto B657cc0;
case 0x657cc3:c.instructions+=4;goto B657cc3;
case 0x657cc4:c.instructions+=3;goto B657cc4;
case 0x657cc5:c.instructions+=2;goto B657cc5;
case 0x657cc6:c.instructions+=1;goto B657cc6;
case 0x657ccb:goto L657ccb;
case 0x657ccd:c.instructions+=1;goto B657ccd;
case 0x657cd3:goto L657cd3;
case 0x657cd5:goto L657cd5;
case 0x657cd7:c.instructions+=1;goto B657cd7;
case 0x657cd8:goto L657cd8;
case 0x657cda:c.instructions+=1;goto B657cda;
case 0x657cdc:goto L657cdc;
case 0x657cdf:c.instructions+=5;goto B657cdf;
case 0x657ce4:c.instructions+=4;goto B657ce4;
case 0x657ce9:c.instructions+=3;goto B657ce9;
case 0x657cea:c.instructions+=2;goto B657cea;
case 0x657ced:c.instructions+=1;goto B657ced;
case 0x657cf2:goto L657cf2;
case 0x657cf5:c.instructions+=1;goto B657cf5;
case 0x657cfa:goto L657cfa;
case 0x657cfd:c.instructions+=2;goto B657cfd;
case 0x657cff:c.instructions+=1;goto B657cff;
case 0x657d01:goto L657d01;
case 0x657d04:goto L657d04;
case 0x657d07:c.instructions+=7;goto B657d07;
case 0x657d0a:c.instructions+=6;goto B657d0a;
case 0x657d0d:c.instructions+=5;goto B657d0d;
case 0x657d10:c.instructions+=4;goto B657d10;
case 0x657d13:c.instructions+=3;goto B657d13;
case 0x657d16:c.instructions+=2;goto B657d16;
case 0x657d19:c.instructions+=1;goto B657d19;
case 0x657d1e:goto L657d1e;
case 0x657d21:c.instructions+=6;goto B657d21;
case 0x657d24:c.instructions+=5;goto B657d24;
case 0x657d27:c.instructions+=4;goto B657d27;
case 0x657d29:c.instructions+=3;goto B657d29;
case 0x657d2b:c.instructions+=2;goto B657d2b;
case 0x657d2e:c.instructions+=1;goto B657d2e;
case 0x657d30:goto L657d30;
case 0x657d33:c.instructions+=3;goto B657d33;
case 0x657d37:c.instructions+=2;goto B657d37;
case 0x657d3a:c.instructions+=1;goto B657d3a;
case 0x657d3c:goto L657d3c;
case 0x657d3d:c.instructions+=1;goto B657d3d;
case 0x657d40:goto L657d40;
case 0x657d43:c.instructions+=1;goto B657d43;
case 0x657d45:goto L657d45;
case 0x657d48:c.instructions+=2;goto B657d48;
case 0x657d4c:c.instructions+=1;goto B657d4c;
case 0x657d52:goto L657d52;
case 0x657d54:c.instructions+=1;goto B657d54;
case 0x657d5a:goto L657d5a;
case 0x657d5d:c.instructions+=5;goto B657d5d;
case 0x657d60:c.instructions+=4;goto B657d60;
case 0x657d63:c.instructions+=3;goto B657d63;
case 0x657d66:c.instructions+=2;goto B657d66;
case 0x657d68:c.instructions+=1;goto B657d68;
case 0x657d6a:goto L657d6a;
case 0x657d6d:c.instructions+=2;goto B657d6d;
case 0x657d70:c.instructions+=1;goto B657d70;
case 0x657d72:goto L657d72;
case 0x657d75:goto L657d75;
case 0x657d77:c.instructions+=1;goto B657d77;
case 0x657d7c:goto L657d7c;
case 0x657d7e:c.instructions+=1;goto B657d7e;
case 0x657d80:goto L657d80;
case 0x657d85:c.instructions+=4;goto B657d85;
case 0x657d86:c.instructions+=3;goto B657d86;
case 0x657d87:c.instructions+=2;goto B657d87;
case 0x657d89:c.instructions+=1;goto B657d89;
case 0x657d8e:goto L657d8e;
case 0x657d90:goto L657d90;
case 0x657d92:goto L657d92;
case 0x657d94:c.instructions+=3;goto B657d94;
case 0x657d97:c.instructions+=2;goto B657d97;
case 0x657d99:c.instructions+=1;goto B657d99;
case 0x657d9f:goto L657d9f;
case 0x657da1:c.instructions+=1;goto B657da1;
case 0x657da6:goto L657da6;
case 0x657da8:c.instructions+=1;goto B657da8;
case 0x657daa:goto L657daa;
case 0x657daf:c.instructions+=4;goto B657daf;
case 0x657db0:c.instructions+=3;goto B657db0;
case 0x657db1:c.instructions+=2;goto B657db1;
case 0x657db3:c.instructions+=1;goto B657db3;
case 0x657db8:goto L657db8;
case 0x657dba:goto L657dba;
case 0x657dbc:goto L657dbc;
case 0x657dbe:c.instructions+=3;goto B657dbe;
case 0x657dc1:c.instructions+=2;goto B657dc1;
case 0x657dc3:c.instructions+=1;goto B657dc3;
case 0x657dc9:goto L657dc9;
case 0x657dcc:c.instructions+=2;goto B657dcc;
case 0x657dd0:c.instructions+=1;goto B657dd0;
case 0x657dd2:goto L657dd2;
case 0x657dd5:c.instructions+=4;goto B657dd5;
case 0x657dd6:c.instructions+=3;goto B657dd6;
case 0x657dd9:c.instructions+=2;goto B657dd9;
case 0x657dda:c.instructions+=1;goto B657dda;
case 0x657ddf:goto L657ddf;
case 0x657de1:c.instructions+=3;goto B657de1;
case 0x657de4:c.instructions+=2;goto B657de4;
case 0x657de5:c.instructions+=1;goto B657de5;
case 0x657deb:goto L657deb;
case 0x657dec:c.instructions+=3;goto B657dec;
case 0x657def:c.instructions+=2;goto B657def;
case 0x657df0:c.instructions+=1;goto B657df0;
case 0x657df5:goto L657df5;
case 0x657df8:c.instructions+=2;goto B657df8;
case 0x657dfa:c.instructions+=1;goto B657dfa;
case 0x657dfd:goto L657dfd;
case 0x657e00:c.instructions+=2;goto B657e00;
case 0x657e04:c.instructions+=1;goto B657e04;
case 0x657e06:goto L657e06;
case 0x657e09:c.instructions+=2;goto B657e09;
case 0x657e0c:c.instructions+=1;goto B657e0c;
case 0x657e11:goto L657e11;
case 0x657e13:c.instructions+=1;goto B657e13;
case 0x657e19:goto L657e19;
case 0x657e1c:c.instructions+=4;goto B657e1c;
case 0x657e1d:c.instructions+=3;goto B657e1d;
case 0x657e1e:c.instructions+=2;goto B657e1e;
case 0x657e21:c.instructions+=1;goto B657e21;
case 0x657e26:goto L657e26;
case 0x657e28:c.instructions+=1;goto B657e28;
case 0x657e2e:goto L657e2e;
case 0x657e31:c.instructions+=4;goto B657e31;
case 0x657e34:c.instructions+=3;goto B657e34;
case 0x657e37:c.instructions+=2;goto B657e37;
case 0x657e3a:c.instructions+=1;goto B657e3a;
case 0x657e3f:goto L657e3f;
case 0x657e41:c.instructions+=1;goto B657e41;
case 0x657e47:goto L657e47;
case 0x657e4a:c.instructions+=5;goto B657e4a;
case 0x657e4b:c.instructions+=4;goto B657e4b;
case 0x657e4c:c.instructions+=3;goto B657e4c;
case 0x657e4d:c.instructions+=2;goto B657e4d;
case 0x657e50:c.instructions+=1;goto B657e50;
case 0x657e55:goto L657e55;
case 0x657e57:c.instructions+=1;goto B657e57;
case 0x657e5d:goto L657e5d;
case 0x657e60:c.instructions+=5;goto B657e60;
case 0x657e62:c.instructions+=4;goto B657e62;
case 0x657e63:c.instructions+=3;goto B657e63;
case 0x657e66:c.instructions+=2;goto B657e66;
case 0x657e68:c.instructions+=1;goto B657e68;
case 0x657e6d:goto L657e6d;
case 0x657e6f:c.instructions+=1;goto B657e6f;
case 0x657e75:goto L657e75;
case 0x657e78:c.instructions+=2;goto B657e78;
case 0x657e7a:c.instructions+=1;goto B657e7a;
case 0x657e7d:goto L657e7d;
case 0x657e80:c.instructions+=10;goto B657e80;
case 0x657e82:c.instructions+=9;goto B657e82;
case 0x657e85:c.instructions+=8;goto B657e85;
case 0x657e88:c.instructions+=7;goto B657e88;
case 0x657e8b:c.instructions+=6;goto B657e8b;
case 0x657e8e:c.instructions+=5;goto B657e8e;
case 0x657e91:c.instructions+=4;goto B657e91;
case 0x657e93:c.instructions+=3;goto B657e93;
case 0x657e96:c.instructions+=2;goto B657e96;
case 0x657e99:c.instructions+=1;goto B657e99;
case 0x657e9b:goto L657e9b;
case 0x657e9d:c.instructions+=1;goto B657e9d;
case 0x657e9f:goto L657e9f;
case 0x657ea2:c.instructions+=1;goto B657ea2;
case 0x657ea5:goto L657ea5;
case 0x657ea7:c.instructions+=2;goto B657ea7;
case 0x657eaa:c.instructions+=1;goto B657eaa;
case 0x657eb0:goto L657eb0;
case 0x657eb2:c.instructions+=1;goto B657eb2;
case 0x657eb8:goto L657eb8;
case 0x657ebb:c.instructions+=1;goto B657ebb;
case 0x657ec1:goto L657ec1;
case 0x657ec3:c.instructions+=1;goto B657ec3;
case 0x657ec8:goto L657ec8;
case 0x657eca:c.instructions+=1;goto B657eca;
case 0x657ecc:goto L657ecc;
case 0x657ece:c.instructions+=11;goto B657ece;
case 0x657ed1:c.instructions+=10;goto B657ed1;
case 0x657ed2:c.instructions+=9;goto B657ed2;
case 0x657ed5:c.instructions+=8;goto B657ed5;
case 0x657ed7:c.instructions+=7;goto B657ed7;
case 0x657ed8:c.instructions+=6;goto B657ed8;
case 0x657ed9:c.instructions+=5;goto B657ed9;
case 0x657edc:c.instructions+=4;goto B657edc;
case 0x657edd:c.instructions+=3;goto B657edd;
case 0x657ede:c.instructions+=2;goto B657ede;
case 0x657ee0:c.instructions+=1;goto B657ee0;
case 0x657ee5:goto L657ee5;
case 0x657ee7:c.instructions+=1;goto B657ee7;
case 0x657ee9:goto L657ee9;
case 0x657eec:c.instructions+=1;goto B657eec;
case 0x657eed:goto L657eed;
case 0x657ef0:c.instructions+=3;goto B657ef0;
case 0x657ef3:c.instructions+=2;goto B657ef3;
case 0x657ef4:c.instructions+=1;goto B657ef4;
case 0x657ef9:goto L657ef9;
case 0x657efe:goto L657efe;
case 0x657f01:c.instructions+=4;goto B657f01;
case 0x657f02:c.instructions+=3;goto B657f02;
case 0x657f03:c.instructions+=2;goto B657f03;
case 0x657f06:c.instructions+=1;goto B657f06;
case 0x657f08:goto L657f08;
case 0x657f0a:goto L657f0a;
case 0x657f0c:c.instructions+=1;goto B657f0c;
case 0x657f12:goto L657f12;
case 0x657f15:c.instructions+=2;goto B657f15;
case 0x657f18:c.instructions+=1;goto B657f18;
case 0x657f1a:goto L657f1a;
case 0x657f1d:c.instructions+=2;goto B657f1d;
case 0x657f1f:c.instructions+=1;goto B657f1f;
case 0x657f22:goto L657f22;
case 0x657f24:c.instructions+=2;goto B657f24;
case 0x657f27:c.instructions+=1;goto B657f27;
case 0x657f2d:goto L657f2d;
case 0x657f30:c.instructions+=3;goto B657f30;
case 0x657f32:c.instructions+=2;goto B657f32;
case 0x657f35:c.instructions+=1;goto B657f35;
case 0x657f3a:goto L657f3a;
case 0x657f3c:c.instructions+=1;goto B657f3c;
case 0x657f3e:goto L657f3e;
case 0x657f43:c.instructions+=4;goto B657f43;
case 0x657f44:c.instructions+=3;goto B657f44;
case 0x657f45:c.instructions+=2;goto B657f45;
case 0x657f47:c.instructions+=1;goto B657f47;
case 0x657f4c:goto L657f4c;
case 0x657f4e:goto L657f4e;
case 0x657f50:goto L657f50;
case 0x657f52:c.instructions+=2;goto B657f52;
case 0x657f55:c.instructions+=1;goto B657f55;
case 0x657f5b:goto L657f5b;
case 0x657f5e:c.instructions+=7;goto B657f5e;
case 0x657f61:c.instructions+=6;goto B657f61;
case 0x657f64:c.instructions+=5;goto B657f64;
case 0x657f67:c.instructions+=4;goto B657f67;
case 0x657f6a:c.instructions+=3;goto B657f6a;
case 0x657f6d:c.instructions+=2;goto B657f6d;
case 0x657f6e:c.instructions+=1;goto B657f6e;
case 0x657f73:goto L657f73;
case 0x657f76:c.instructions+=2;goto B657f76;
case 0x657f77:c.instructions+=1;goto B657f77;
case 0x657f7c:goto L657f7c;
case 0x657f7e:c.instructions+=1;goto B657f7e;
case 0x657f80:goto L657f80;
case 0x657f83:c.instructions+=2;goto B657f83;
case 0x657f84:c.instructions+=1;goto B657f84;
case 0x657f89:goto L657f89;
case 0x657f8b:c.instructions+=1;goto B657f8b;
case 0x657f8d:goto L657f8d;
case 0x657f8f:c.instructions+=1;goto B657f8f;
case 0x657f91:goto L657f91;
case 0x657f94:c.instructions+=2;goto B657f94;
case 0x657f96:c.instructions+=1;goto B657f96;
case 0x657f98:goto L657f98;
case 0x657f9b:c.instructions+=1;goto B657f9b;
case 0x657f9c:goto L657f9c;
case 0x657f9e:c.instructions+=1;goto B657f9e;
case 0x657fa0:goto L657fa0;
case 0x657fa3:c.instructions+=2;goto B657fa3;
case 0x657fa8:c.instructions+=1;goto B657fa8;
case 0x657faa:goto L657faa;
case 0x657fad:c.instructions+=1;goto B657fad;
case 0x657faf:goto L657faf;
case 0x657fb4:goto L657fb4;
case 0x657fb5:c.instructions+=4;goto B657fb5;
case 0x657fb6:c.instructions+=3;goto B657fb6;
case 0x657fb9:c.instructions+=2;goto B657fb9;
case 0x657fbe:c.instructions+=1;goto B657fbe;
case 0x657fc0:goto L657fc0;
case 0x657fc3:c.instructions+=1;goto B657fc3;
case 0x657fc5:goto L657fc5;
case 0x657fca:goto L657fca;
case 0x657fcb:c.instructions+=3;goto B657fcb;
case 0x657fcc:c.instructions+=2;goto B657fcc;
case 0x657fcf:c.instructions+=1;goto B657fcf;
case 0x657fd4:goto L657fd4;
case 0x657fd9:c.instructions+=3;goto B657fd9;
case 0x657fda:c.instructions+=2;goto B657fda;
case 0x657fdd:c.instructions+=1;goto B657fdd;
case 0x657fe2:goto L657fe2;
case 0x657fe5:goto L657fe5;
case 0x657fe7:goto L657fe7;
case 0x657fe9:c.instructions+=3;goto B657fe9;
case 0x657fea:c.instructions+=2;goto B657fea;
case 0x657feb:c.instructions+=1;goto B657feb;
case 0x657fed:goto L657fed;
case 0x657fef:goto L657fef;
case 0x657ff0:c.instructions+=2;goto B657ff0;
case 0x657ff1:c.instructions+=1;goto B657ff1;
case 0x657ff4:goto L657ff4;
case 0x657ff6:c.instructions+=5;goto B657ff6;
case 0x657ff7:c.instructions+=4;goto B657ff7;
case 0x657ff9:c.instructions+=3;goto B657ff9;
case 0x657ffc:c.instructions+=2;goto B657ffc;
case 0x657fff:c.instructions+=1;goto B657fff;
default:missing_instruction(c.pc);}
B657004:L657004:{c.instructions+=2;NFSU2_TR(0x657004);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657007:{NFSU2_TR(0x657007);
if(r1(R+518)){{goto L657104;}}
}
B65700d:L65700d:{c.instructions+=2;NFSU2_TR(0x65700d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65700f:{NFSU2_TR(0x65700f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657030;}}
}
B657011:L657011:{c.instructions+=2;NFSU2_TR(0x657011);
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
B657013:{NFSU2_TR(0x657013);
if(r1(R+518)){{goto L657146;}}
}
B657019:L657019:{c.instructions+=3;NFSU2_TR(0x657019);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65701b:{NFSU2_TR(0x65701b);
__builtin_memmove((R+4),(R+12),4);
}
B65701d:{NFSU2_TR(0x65701d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657020ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B657020:L657020:{c.instructions+=3;NFSU2_TR(0x657020);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657022:{NFSU2_TR(0x657022);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657025:{NFSU2_TR(0x657025);
if(r1(R+518)){{goto L6571f8;}}
}
B65702b:L65702b:{c.instructions+=1;NFSU2_TR(0x65702b);
{goto L657146;}
}
B657030:L657030:{c.instructions+=2;NFSU2_TR(0x657030);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657033:{NFSU2_TR(0x657033);
if(r1(R+518)){{goto L6570df;}}
}
B657039:L657039:{c.instructions+=2;NFSU2_TR(0x657039);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65703c:{NFSU2_TR(0x65703c);
if(r1(R+518)){{goto L6570df;}}
}
B657042:L657042:{c.instructions+=2;NFSU2_TR(0x657042);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657045:{NFSU2_TR(0x657045);
if(r1(R+518)){{goto L6570df;}}
}
B65704b:L65704b:{c.instructions+=2;NFSU2_TR(0x65704b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65704e:{NFSU2_TR(0x65704e);
if(r1(R+518)){{goto L6570df;}}
}
B657054:L657054:{c.instructions+=2;NFSU2_TR(0x657054);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657057:{NFSU2_TR(0x657057);
if(r1(R+518)){{goto L6570df;}}
}
B65705d:L65705d:{c.instructions+=2;NFSU2_TR(0x65705d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657060:{NFSU2_TR(0x657060);
if(r1(R+518)){{goto L6570df;}}
}
B657062:L657062:{c.instructions+=2;NFSU2_TR(0x657062);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657065:{NFSU2_TR(0x657065);
if(r1(R+518)){{goto L6570ac;}}
}
B657067:L657067:{c.instructions+=2;NFSU2_TR(0x657067);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65706a:{NFSU2_TR(0x65706a);
if(r1(R+518)){{goto L6570ac;}}
}
B65706c:L65706c:{c.instructions+=2;NFSU2_TR(0x65706c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65706f:{NFSU2_TR(0x65706f);
if(r1(R+518)){{goto L6570ac;}}
}
B657071:L657071:{c.instructions+=2;NFSU2_TR(0x657071);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657074:{NFSU2_TR(0x657074);
if(r1(R+518)){{goto L6570ac;}}
}
B657076:L657076:{c.instructions+=2;NFSU2_TR(0x657076);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657079:{NFSU2_TR(0x657079);
if(r1(R+518)){{goto L6570ac;}}
}
B65707b:L65707b:{c.instructions+=2;NFSU2_TR(0x65707b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65707e:{NFSU2_TR(0x65707e);
if(r1(R+518)){{goto L6570ac;}}
}
B657080:L657080:{c.instructions+=2;NFSU2_TR(0x657080);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657083:{NFSU2_TR(0x657083);
if(r1(R+518)){{goto L6570ac;}}
}
B657085:L657085:{c.instructions+=2;NFSU2_TR(0x657085);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657088:{NFSU2_TR(0x657088);
if(r1(R+518)){{goto L6570ac;}}
}
B65708a:L65708a:{c.instructions+=10;NFSU2_TR(0x65708a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65708d:{NFSU2_TR(0x65708d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B657090:{NFSU2_TR(0x657090);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657091:{NFSU2_TR(0x657091);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B657094:{NFSU2_TR(0x657094);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657095:{NFSU2_TR(0x657095);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B657098:{NFSU2_TR(0x657098);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657099:{NFSU2_TR(0x657099);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65709c:{NFSU2_TR(0x65709c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65709d:{NFSU2_TR(0x65709d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6570a2ull));
TAIL_STATIC(0x651cb3u,651);
}
B6570a2:L6570a2:{c.instructions+=2;NFSU2_TR(0x6570a2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6570a4:{NFSU2_TR(0x6570a4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L657146;}}
}
B6570aa:L6570aa:{c.instructions+=1;NFSU2_TR(0x6570aa);
{goto L6570c8;}
}
B6570ac:L6570ac:{c.instructions+=10;NFSU2_TR(0x6570ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6570af:{NFSU2_TR(0x6570af);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6570b2:{NFSU2_TR(0x6570b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6570b3:{NFSU2_TR(0x6570b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6570b6:{NFSU2_TR(0x6570b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6570b7:{NFSU2_TR(0x6570b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6570ba:{NFSU2_TR(0x6570ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6570bb:{NFSU2_TR(0x6570bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6570be:{NFSU2_TR(0x6570be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6570bf:{NFSU2_TR(0x6570bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6570c4ull));
TAIL_STATIC(0x651cb3u,651);
}
B6570c4:L6570c4:{c.instructions+=2;NFSU2_TR(0x6570c4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6570c6:{NFSU2_TR(0x6570c6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6570d7;}}
}
B6570c8:L6570c8:{c.instructions+=3;NFSU2_TR(0x6570c8);
u8 U[4];
w4(U+0,u32(0x7b494cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6570cd:{NFSU2_TR(0x6570cd);
u8 U[4];
w4(U+0,u32(0xbccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6570d2:{NFSU2_TR(0x6570d2);
{goto L6571ea;}
}
B6570d7:L6570d7:{c.instructions+=3;NFSU2_TR(0x6570d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6570d9:{NFSU2_TR(0x6570d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6570dd:{NFSU2_TR(0x6570dd);
{goto L657146;}
}
B6570df:L6570df:{c.instructions+=2;NFSU2_TR(0x6570df);
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
B6570e1:{NFSU2_TR(0x6570e1);
if(r1(R+518)){{goto L6570f5;}}
}
B6570e3:L6570e3:{c.instructions+=3;NFSU2_TR(0x6570e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6570e5:{NFSU2_TR(0x6570e5);
__builtin_memmove((R+4),(R+12),4);
}
B6570e7:{NFSU2_TR(0x6570e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6570eaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6570ea:L6570ea:{c.instructions+=3;NFSU2_TR(0x6570ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6570ec:{NFSU2_TR(0x6570ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6570ef:{NFSU2_TR(0x6570ef);
if(r1(R+518)){{goto L6571f8;}}
}
B6570f5:L6570f5:{c.instructions+=4;NFSU2_TR(0x6570f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6570f8:{NFSU2_TR(0x6570f8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6570fa:{NFSU2_TR(0x6570fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6570fd:{NFSU2_TR(0x6570fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657102ull));
TAIL_STATIC(0x64f92eu,64f);
}
B657102:L657102:{c.instructions+=1;NFSU2_TR(0x657102);
{goto L657146;}
}
B657104:L657104:{c.instructions+=6;NFSU2_TR(0x657104);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657107:{NFSU2_TR(0x657107);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B657109:{NFSU2_TR(0x657109);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65710a:{NFSU2_TR(0x65710a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65710d:{NFSU2_TR(0x65710d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65710e:{NFSU2_TR(0x65710e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657113ull));
TAIL_STATIC(0x65164au,651);
}
B657113:L657113:{c.instructions+=2;NFSU2_TR(0x657113);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657115:{NFSU2_TR(0x657115);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65712d;}}
}
B657117:L657117:{c.instructions+=7;NFSU2_TR(0x657117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65711a:{NFSU2_TR(0x65711a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65711b:{NFSU2_TR(0x65711b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65711e:{NFSU2_TR(0x65711e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65711f:{NFSU2_TR(0x65711f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657120:{NFSU2_TR(0x657120);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657123:{NFSU2_TR(0x657123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657128ull));
TAIL_STATIC(0x651982u,651);
}
B657128:L657128:{c.instructions+=1;NFSU2_TR(0x657128);
{goto L6571f8;}
}
B65712d:L65712d:{c.instructions+=2;NFSU2_TR(0x65712d);
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
B65712f:{NFSU2_TR(0x65712f);
if(r1(R+518)){{goto L657143;}}
}
B657131:L657131:{c.instructions+=3;NFSU2_TR(0x657131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B657133:{NFSU2_TR(0x657133);
__builtin_memmove((R+4),(R+12),4);
}
B657135:{NFSU2_TR(0x657135);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657138ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B657138:L657138:{c.instructions+=3;NFSU2_TR(0x657138);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65713a:{NFSU2_TR(0x65713a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65713d:{NFSU2_TR(0x65713d);
if(r1(R+518)){{goto L6571f8;}}
}
B657143:L657143:{c.instructions+=1;NFSU2_TR(0x657143);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657146:L657146:{c.instructions+=3;NFSU2_TR(0x657146);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B657149:{NFSU2_TR(0x657149);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65714b:{NFSU2_TR(0x65714b);
if(r1(R+518)){{goto L65717b;}}
}
B65714d:L65714d:{c.instructions+=2;NFSU2_TR(0x65714d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657150:{NFSU2_TR(0x657150);
if(r1(R+518)){{goto L65717b;}}
}
B657152:L657152:{c.instructions+=4;NFSU2_TR(0x657152);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657155:{NFSU2_TR(0x657155);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657158:{NFSU2_TR(0x657158);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657159:{NFSU2_TR(0x657159);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65715eull));
TAIL_STATIC(0x64fbecu,64f);
}
B65715e:L65715e:{c.instructions+=2;NFSU2_TR(0x65715e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657160:{NFSU2_TR(0x657160);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65717b;}}
}
B657162:L657162:{c.instructions+=6;NFSU2_TR(0x657162);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657165:{NFSU2_TR(0x657165);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657166:{NFSU2_TR(0x657166);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657167:{NFSU2_TR(0x657167);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657168:{NFSU2_TR(0x657168);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65716b:{NFSU2_TR(0x65716b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657170ull));
TAIL_STATIC(0x6548a3u,654);
}
B657170:L657170:{c.instructions+=2;NFSU2_TR(0x657170);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657172:{NFSU2_TR(0x657172);
if(r1(R+518)){{goto L6571f8;}}
}
B657178:L657178:{c.instructions+=1;NFSU2_TR(0x657178);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65717b:L65717b:{c.instructions+=3;NFSU2_TR(0x65717b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65717e:{NFSU2_TR(0x65717e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657180:{NFSU2_TR(0x657180);
if(r1(R+518)){{goto L6571af;}}
}
B657182:L657182:{c.instructions+=3;NFSU2_TR(0x657182);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657185:{NFSU2_TR(0x657185);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657188:{NFSU2_TR(0x657188);
if(r1(R+518)){{goto L6571af;}}
}
B65718a:L65718a:{c.instructions+=4;NFSU2_TR(0x65718a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65718d:{NFSU2_TR(0x65718d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65718e:{NFSU2_TR(0x65718e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657191:{NFSU2_TR(0x657191);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657196ull));
TAIL_STATIC(0x64fbecu,64f);
}
B657196:L657196:{c.instructions+=2;NFSU2_TR(0x657196);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657198:{NFSU2_TR(0x657198);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6571af;}}
}
B65719a:L65719a:{c.instructions+=6;NFSU2_TR(0x65719a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65719d:{NFSU2_TR(0x65719d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65719e:{NFSU2_TR(0x65719e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65719f:{NFSU2_TR(0x65719f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6571a0:{NFSU2_TR(0x6571a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6571a3:{NFSU2_TR(0x6571a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6571a8ull));
TAIL_STATIC(0x6548a3u,654);
}
B6571a8:L6571a8:{c.instructions+=2;NFSU2_TR(0x6571a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6571aa:{NFSU2_TR(0x6571aa);
if(r1(R+518)){{goto L6571f8;}}
}
B6571ac:L6571ac:{c.instructions+=1;NFSU2_TR(0x6571ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6571af:L6571af:{c.instructions+=2;NFSU2_TR(0x6571af);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6571b3:{NFSU2_TR(0x6571b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6571b9;}}
}
B6571b5:L6571b5:{c.instructions+=1;NFSU2_TR(0x6571b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6571b9:L6571b9:{c.instructions+=3;NFSU2_TR(0x6571b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6571bc:{NFSU2_TR(0x6571bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6571bd:{NFSU2_TR(0x6571bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6571c2ull));
TAIL_STATIC(0x650571u,650);
}
B6571c2:L6571c2:{c.instructions+=3;NFSU2_TR(0x6571c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6571c5:{NFSU2_TR(0x6571c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6571c6:{NFSU2_TR(0x6571c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6571cbull));
TAIL_STATIC(0x650453u,650);
}
B6571cb:L6571cb:{c.instructions+=2;NFSU2_TR(0x6571cb);
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
B6571cd:{NFSU2_TR(0x6571cd);
if(r1(R+518)){{goto L6571fa;}}
}
B6571cf:L6571cf:{c.instructions+=3;NFSU2_TR(0x6571cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6571d2:{NFSU2_TR(0x6571d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6571d3:{NFSU2_TR(0x6571d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6571d8ull));
TAIL_STATIC(0x65669cu,656);
}
B6571d8:L6571d8:{c.instructions+=2;NFSU2_TR(0x6571d8);
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
B6571da:{NFSU2_TR(0x6571da);
if(r1(R+518)){{goto L6571fa;}}
}
B6571dc:L6571dc:{c.instructions+=2;NFSU2_TR(0x6571dc);
__builtin_memmove((R+24),(R+0),4);
}
B6571de:{NFSU2_TR(0x6571de);
{goto L6571fa;}
}
B6571e0:L6571e0:{c.instructions+=2;NFSU2_TR(0x6571e0);
u8 U[4];
w4(U+0,u32(0x7b492cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6571e5:{NFSU2_TR(0x6571e5);
u8 U[4];
w4(U+0,u32(0xbd1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6571ea:L6571ea:{c.instructions+=3;NFSU2_TR(0x6571ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6571ed:{NFSU2_TR(0x6571ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6571f0:{NFSU2_TR(0x6571f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6571f5ull));
TAIL_STATIC(0x64f52au,64f);
}
B6571f5:L6571f5:{c.instructions+=1;NFSU2_TR(0x6571f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6571f8:L6571f8:{c.instructions+=1;NFSU2_TR(0x6571f8);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6571fa:L6571fa:{c.instructions+=6;NFSU2_TR(0x6571fa);
__builtin_memmove((R+0),(R+24),4);
}
B6571fc:{NFSU2_TR(0x6571fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6571fd:{NFSU2_TR(0x6571fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6571fe:{NFSU2_TR(0x6571fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6571ff:{NFSU2_TR(0x6571ff);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B657200:{NFSU2_TR(0x657200);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B657203:L657203:{c.instructions+=9;NFSU2_TR(0x657203);
__builtin_memmove((R+28),(R+28),4);
}
B657205:{NFSU2_TR(0x657205);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657206:{NFSU2_TR(0x657206);
__builtin_memmove((R+20),(R+16),4);
}
B657208:{NFSU2_TR(0x657208);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657209:{NFSU2_TR(0x657209);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65720a:{NFSU2_TR(0x65720a);
__builtin_memmove((R+24),(R+4),4);
}
B65720c:{NFSU2_TR(0x65720c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65720e:{NFSU2_TR(0x65720e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657211:{NFSU2_TR(0x657211);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65721a;}}
}
B657213:L657213:{c.instructions+=2;NFSU2_TR(0x657213);
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
B657215:{NFSU2_TR(0x657215);
{goto L6572b1;}
}
B65721a:L65721a:{c.instructions+=3;NFSU2_TR(0x65721a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65721b:{NFSU2_TR(0x65721b);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65721d:{NFSU2_TR(0x65721d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657222ull));
TAIL_STATIC(0x645362u,645);
}
B657222:L657222:{c.instructions+=2;NFSU2_TR(0x657222);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657224:{NFSU2_TR(0x657224);
if(r1(R+518)){{goto L657231;}}
}
B657226:L657226:{c.instructions+=2;NFSU2_TR(0x657226);
__builtin_memmove((R+4),(R+0),4);
}
B657228:{NFSU2_TR(0x657228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65722dull));
TAIL_STATIC(0x672cb8u,672);
}
B65722d:L65722d:{c.instructions+=2;NFSU2_TR(0x65722d);
__builtin_memmove((R+28),(R+0),4);
}
B65722f:{NFSU2_TR(0x65722f);
{goto L657233;}
}
B657231:L657231:{c.instructions+=1;NFSU2_TR(0x657231);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B657233:L657233:{c.instructions+=2;NFSU2_TR(0x657233);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657235:{NFSU2_TR(0x657235);
if(r1(R+518)){{goto L6572ae;}}
}
B657237:L657237:{c.instructions+=6;NFSU2_TR(0x657237);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B657239:{NFSU2_TR(0x657239);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65723a:{NFSU2_TR(0x65723a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65723d:{NFSU2_TR(0x65723d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657240:{NFSU2_TR(0x657240);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657243:{NFSU2_TR(0x657243);
if(r1(R+518)){{goto L657269;}}
}
B657245:L657245:{c.instructions+=2;NFSU2_TR(0x657245);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657248:{NFSU2_TR(0x657248);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657280;}}
}
B65724a:L65724a:{c.instructions+=4;NFSU2_TR(0x65724a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65724d:{NFSU2_TR(0x65724d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657250:{NFSU2_TR(0x657250);
u8 U[4];
w4(U+0,u32(0x7b49d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657255:{NFSU2_TR(0x657255);
u8 U[4];
w4(U+0,u32(0xc07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65725a:L65725a:{c.instructions+=4;NFSU2_TR(0x65725a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65725d:{NFSU2_TR(0x65725d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65725e:{NFSU2_TR(0x65725e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65725f:{NFSU2_TR(0x65725f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657264ull));
TAIL_STATIC(0x64f52au,64f);
}
B657264:L657264:{c.instructions+=2;NFSU2_TR(0x657264);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B657267:{NFSU2_TR(0x657267);
{goto L657293;}
}
B657269:L657269:{c.instructions+=2;NFSU2_TR(0x657269);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65726c:{NFSU2_TR(0x65726c);
if(r1(R+518)){{goto L657293;}}
}
B65726e:L65726e:{c.instructions+=5;NFSU2_TR(0x65726e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657271:{NFSU2_TR(0x657271);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657274:{NFSU2_TR(0x657274);
u8 U[4];
w4(U+0,u32(0x7b49b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657279:{NFSU2_TR(0x657279);
u8 U[4];
w4(U+0,u32(0xc08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65727e:{NFSU2_TR(0x65727e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65725au);}goto L65725a;}
}
B657280:L657280:{c.instructions+=6;NFSU2_TR(0x657280);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657281:{NFSU2_TR(0x657281);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657284:{NFSU2_TR(0x657284);
__builtin_memmove((R+4),(R+24),4);
}
B657286:{NFSU2_TR(0x657286);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657289:{NFSU2_TR(0x657289);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65728b:{NFSU2_TR(0x65728b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657290ull));
TAIL_STATIC(0x656deau,656);
}
B657290:L657290:{c.instructions+=1;NFSU2_TR(0x657290);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657293:L657293:{c.instructions+=2;NFSU2_TR(0x657293);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657295:{NFSU2_TR(0x657295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65729aull));
TAIL_STATIC(0x645362u,645);
}
B65729a:L65729a:{c.instructions+=2;NFSU2_TR(0x65729a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65729c:{NFSU2_TR(0x65729c);
if(r1(R+518)){{goto L6572ae;}}
}
B65729e:L65729e:{c.instructions+=5;NFSU2_TR(0x65729e);
u8 U[4];
w4(U+0,u32(0x7b3cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6572a3:{NFSU2_TR(0x6572a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6572a4:{NFSU2_TR(0x6572a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6572a5:{NFSU2_TR(0x6572a5);
__builtin_memmove((R+4),(R+0),4);
}
B6572a7:{NFSU2_TR(0x6572a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6572acull));
TAIL_STATIC(0x672498u,672);
}
B6572ac:L6572ac:{c.instructions+=1;NFSU2_TR(0x6572ac);
{goto L6572b0;}
}
B6572ae:L6572ae:{c.instructions+=1;NFSU2_TR(0x6572ae);
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
B6572b0:L6572b0:{c.instructions+=1;NFSU2_TR(0x6572b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6572b1:L6572b1:{c.instructions+=4;NFSU2_TR(0x6572b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6572b2:{NFSU2_TR(0x6572b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6572b3:{NFSU2_TR(0x6572b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6572b4:{NFSU2_TR(0x6572b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6572b7:L6572b7:{c.instructions+=22;NFSU2_TR(0x6572b7);
__builtin_memmove((R+28),(R+28),4);
}
B6572b9:{NFSU2_TR(0x6572b9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6572ba:{NFSU2_TR(0x6572ba);
__builtin_memmove((R+20),(R+16),4);
}
B6572bc:{NFSU2_TR(0x6572bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B6572bf:{NFSU2_TR(0x6572bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6572c0:{NFSU2_TR(0x6572c0);
w4(R+0,u32(0x7b4e54ull));
}
B6572c5:{NFSU2_TR(0x6572c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6572c6:{NFSU2_TR(0x6572c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6572c7:{NFSU2_TR(0x6572c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6572ca:{NFSU2_TR(0x6572ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x7b4e40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6572d1:{NFSU2_TR(0x6572d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x7b4e2cull));
s4(u32(r4(U+0)),r4(U+4));
}
B6572d8:{NFSU2_TR(0x6572d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x7b4e18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6572df:{NFSU2_TR(0x6572df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x7b4e08ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6572e6:{NFSU2_TR(0x6572e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7b4df0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6572ed:{NFSU2_TR(0x6572ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x7b4ddcull));
s4(u32(r4(U+0)),r4(U+4));
}
B6572f4:{NFSU2_TR(0x6572f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6572f7:{NFSU2_TR(0x6572f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
w4(U+4,u32(0x7b4dd0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6572fe:{NFSU2_TR(0x6572fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x7b4dc0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B657305:{NFSU2_TR(0x657305);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657308:{NFSU2_TR(0x657308);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65730b:{NFSU2_TR(0x65730b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x7b4db8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B657312:{NFSU2_TR(0x657312);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657317ull));
TAIL_STATIC(0x64f922u,64f);
}
B657317:L657317:{c.instructions+=4;NFSU2_TR(0x657317);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B657319:{NFSU2_TR(0x657319);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65731b:{NFSU2_TR(0x65731b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65731e:{NFSU2_TR(0x65731e);
if(r1(R+518)){{goto L657bd3;}}
}
B657324:L657324:{c.instructions+=2;NFSU2_TR(0x657324);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657327:{NFSU2_TR(0x657327);
if(r1(R+518)){{goto L657bd3;}}
}
B65732d:L65732d:{c.instructions+=2;NFSU2_TR(0x65732d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657330:{NFSU2_TR(0x657330);
if(r1(R+518)){{goto L657bd3;}}
}
B657336:L657336:{c.instructions+=4;NFSU2_TR(0x657336);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657339:{NFSU2_TR(0x657339);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65733b:{NFSU2_TR(0x65733b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65733e:{NFSU2_TR(0x65733e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657343ull));
TAIL_STATIC(0x645362u,645);
}
B657343:L657343:{c.instructions+=2;NFSU2_TR(0x657343);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657345:{NFSU2_TR(0x657345);
if(r1(R+518)){{goto L65735a;}}
}
B657347:L657347:{c.instructions+=5;NFSU2_TR(0x657347);
u8 U[4];
w4(U+0,u32(0x7b3cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65734c:{NFSU2_TR(0x65734c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65734d:{NFSU2_TR(0x65734d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65734e:{NFSU2_TR(0x65734e);
__builtin_memmove((R+4),(R+0),4);
}
B657350:{NFSU2_TR(0x657350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657355ull));
TAIL_STATIC(0x672498u,672);
}
B657355:L657355:{c.instructions+=2;NFSU2_TR(0x657355);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657358:{NFSU2_TR(0x657358);
{goto L65735d;}
}
B65735a:L65735a:{c.instructions+=1;NFSU2_TR(0x65735a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65735d:L65735d:{c.instructions+=2;NFSU2_TR(0x65735d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657360:{NFSU2_TR(0x657360);
if(r1(R+518)){{goto L657bd3;}}
}
B657366:L657366:{c.instructions+=2;NFSU2_TR(0x657366);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657368:{NFSU2_TR(0x657368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65736dull));
TAIL_STATIC(0x645362u,645);
}
B65736d:L65736d:{c.instructions+=2;NFSU2_TR(0x65736d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65736f:{NFSU2_TR(0x65736f);
if(r1(R+518)){{goto L657381;}}
}
B657371:L657371:{c.instructions+=6;NFSU2_TR(0x657371);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657372:{NFSU2_TR(0x657372);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657373:{NFSU2_TR(0x657373);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657374:{NFSU2_TR(0x657374);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657376:{NFSU2_TR(0x657376);
__builtin_memmove((R+4),(R+0),4);
}
B657378:{NFSU2_TR(0x657378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65737dull));
TAIL_STATIC(0x67286cu,672);
}
B65737d:L65737d:{c.instructions+=2;NFSU2_TR(0x65737d);
__builtin_memmove((R+28),(R+0),4);
}
B65737f:{NFSU2_TR(0x65737f);
{goto L657383;}
}
B657381:L657381:{c.instructions+=1;NFSU2_TR(0x657381);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B657383:L657383:{c.instructions+=3;NFSU2_TR(0x657383);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657385:{NFSU2_TR(0x657385);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657388:{NFSU2_TR(0x657388);
if(r1(R+518)){{goto L657bd3;}}
}
B65738e:L65738e:{c.instructions+=4;NFSU2_TR(0x65738e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657391:{NFSU2_TR(0x657391);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657393:{NFSU2_TR(0x657393);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657396:{NFSU2_TR(0x657396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65739bull));
TAIL_STATIC(0x645362u,645);
}
B65739b:L65739b:{c.instructions+=2;NFSU2_TR(0x65739b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65739d:{NFSU2_TR(0x65739d);
if(r1(R+518)){{goto L6573aa;}}
}
B65739f:L65739f:{c.instructions+=2;NFSU2_TR(0x65739f);
__builtin_memmove((R+4),(R+0),4);
}
B6573a1:{NFSU2_TR(0x6573a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6573a6ull));
TAIL_STATIC(0x672bc6u,672);
}
B6573a6:L6573a6:{c.instructions+=2;NFSU2_TR(0x6573a6);
__builtin_memmove((R+24),(R+0),4);
}
B6573a8:{NFSU2_TR(0x6573a8);
{goto L6573ac;}
}
B6573aa:L6573aa:{c.instructions+=1;NFSU2_TR(0x6573aa);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6573ac:L6573ac:{c.instructions+=2;NFSU2_TR(0x6573ac);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6573ae:{NFSU2_TR(0x6573ae);
if(r1(R+518)){{goto L657bd3;}}
}
B6573b4:L6573b4:{c.instructions+=3;NFSU2_TR(0x6573b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6573b7:{NFSU2_TR(0x6573b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6573ba:{NFSU2_TR(0x6573ba);
if(r1(R+518)){{goto L6573cf;}}
}
B6573bc:L6573bc:{c.instructions+=2;NFSU2_TR(0x6573bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6573bf:{NFSU2_TR(0x6573bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6573c4ull));
TAIL_STATIC(0x672440u,672);
}
B6573c4:L6573c4:{c.instructions+=3;NFSU2_TR(0x6573c4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6573c6:{NFSU2_TR(0x6573c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6573c9:{NFSU2_TR(0x6573c9);
if(r1(R+518)){{goto L657bd3;}}
}
B6573cf:L6573cf:{c.instructions+=3;NFSU2_TR(0x6573cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6573d2:{NFSU2_TR(0x6573d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6573d4:{NFSU2_TR(0x6573d4);
if(r1(R+518)){{goto L65740c;}}
}
B6573d6:L6573d6:{c.instructions+=2;NFSU2_TR(0x6573d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6573d7:{NFSU2_TR(0x6573d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6573dcull));
TAIL_STATIC(0x672440u,672);
}
B6573dc:L6573dc:{c.instructions+=3;NFSU2_TR(0x6573dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6573de:{NFSU2_TR(0x6573de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6573e1:{NFSU2_TR(0x6573e1);
if(r1(R+518)){{goto L657bd3;}}
}
B6573e7:L6573e7:{c.instructions+=3;NFSU2_TR(0x6573e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6573ea:{NFSU2_TR(0x6573ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6573ec:{NFSU2_TR(0x6573ec);
if(r1(R+518)){{goto L657405;}}
}
B6573ee:L6573ee:{c.instructions+=2;NFSU2_TR(0x6573ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6573f2:{NFSU2_TR(0x6573f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657405;}}
}
B6573f4:L6573f4:{c.instructions+=2;NFSU2_TR(0x6573f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6573f5:{NFSU2_TR(0x6573f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6573faull));
TAIL_STATIC(0x672440u,672);
}
B6573fa:L6573fa:{c.instructions+=3;NFSU2_TR(0x6573fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6573fc:{NFSU2_TR(0x6573fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6573ff:{NFSU2_TR(0x6573ff);
if(r1(R+518)){{goto L657bd3;}}
}
B657405:L657405:{c.instructions+=3;NFSU2_TR(0x657405);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B657408:{NFSU2_TR(0x657408);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65740a:{NFSU2_TR(0x65740a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6573e7u);}goto L6573e7;}}
}
B65740c:L65740c:{c.instructions+=3;NFSU2_TR(0x65740c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65740f:{NFSU2_TR(0x65740f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657411:{NFSU2_TR(0x657411);
if(r1(R+518)){{goto L657428;}}
}
B657413:L657413:{c.instructions+=2;NFSU2_TR(0x657413);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657417:{NFSU2_TR(0x657417);
if(r1(R+518)){{goto L657428;}}
}
B657419:L657419:{c.instructions+=4;NFSU2_TR(0x657419);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65741c:{NFSU2_TR(0x65741c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65741d:{NFSU2_TR(0x65741d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657420:{NFSU2_TR(0x657420);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657425ull));
TAIL_STATIC(0x652033u,652);
}
B657425:L657425:{c.instructions+=1;NFSU2_TR(0x657425);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657428:L657428:{c.instructions+=6;NFSU2_TR(0x657428);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65742a:{NFSU2_TR(0x65742a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65742d:{NFSU2_TR(0x65742d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B657434:{NFSU2_TR(0x657434);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657437:{NFSU2_TR(0x657437);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65743a:{NFSU2_TR(0x65743a);
if(r1(R+518)){{goto L65744f;}}
}
B65743c:L65743c:{c.instructions+=2;NFSU2_TR(0x65743c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65743f:{NFSU2_TR(0x65743f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657444ull));
TAIL_STATIC(0x672440u,672);
}
B657444:L657444:{c.instructions+=3;NFSU2_TR(0x657444);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657446:{NFSU2_TR(0x657446);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657449:{NFSU2_TR(0x657449);
if(r1(R+518)){{goto L657bd3;}}
}
B65744f:L65744f:{c.instructions+=3;NFSU2_TR(0x65744f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657452:{NFSU2_TR(0x657452);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657456:{NFSU2_TR(0x657456);
if(r1(R+518)){{goto L6574d6;}}
}
B657458:L657458:{c.instructions+=2;NFSU2_TR(0x657458);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65745a:{NFSU2_TR(0x65745a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65745full));
TAIL_STATIC(0x645362u,645);
}
B65745f:L65745f:{c.instructions+=2;NFSU2_TR(0x65745f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657461:{NFSU2_TR(0x657461);
if(r1(R+518)){{goto L65746e;}}
}
B657463:L657463:{c.instructions+=2;NFSU2_TR(0x657463);
__builtin_memmove((R+4),(R+0),4);
}
B657465:{NFSU2_TR(0x657465);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65746aull));
TAIL_STATIC(0x6729b7u,672);
}
B65746a:L65746a:{c.instructions+=2;NFSU2_TR(0x65746a);
__builtin_memmove((R+12),(R+0),4);
}
B65746c:{NFSU2_TR(0x65746c);
{goto L657470;}
}
B65746e:L65746e:{c.instructions+=1;NFSU2_TR(0x65746e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B657470:L657470:{c.instructions+=2;NFSU2_TR(0x657470);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657472:{NFSU2_TR(0x657472);
if(r1(R+518)){{goto L657bd3;}}
}
B657478:L657478:{c.instructions+=2;NFSU2_TR(0x657478);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65747c:{NFSU2_TR(0x65747c);
if(r1(R+518)){{goto L657485;}}
}
B65747e:L65747e:{c.instructions+=1;NFSU2_TR(0x65747e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0xc01ull));
s4(u32(r4(U+0)),r4(U+4));
}
B657485:L657485:{c.instructions+=7;NFSU2_TR(0x657485);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657488:{NFSU2_TR(0x657488);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65748b:{NFSU2_TR(0x65748b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65748e:{NFSU2_TR(0x65748e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657491:{NFSU2_TR(0x657491);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657493:{NFSU2_TR(0x657493);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B657496:{NFSU2_TR(0x657496);
if(r1(R+518)){{goto L6574af;}}
}
B657498:L657498:{c.instructions+=4;NFSU2_TR(0x657498);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65749b:{NFSU2_TR(0x65749b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65749c:{NFSU2_TR(0x65749c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65749d:{NFSU2_TR(0x65749d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6574a2ull));
TAIL_STATIC(0x6567c7u,656);
}
B6574a2:L6574a2:{c.instructions+=2;NFSU2_TR(0x6574a2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6574a4:{NFSU2_TR(0x6574a4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6574b8;}}
}
B6574a6:L6574a6:{c.instructions+=2;NFSU2_TR(0x6574a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0xbf2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6574ad:{NFSU2_TR(0x6574ad);
{goto L6574b2;}
}
B6574af:L6574af:{c.instructions+=1;NFSU2_TR(0x6574af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6574b2:L6574b2:{c.instructions+=1;NFSU2_TR(0x6574b2);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+28)),r4(U+0));
}
B6574b8:L6574b8:{c.instructions+=9;NFSU2_TR(0x6574b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6574ba:{NFSU2_TR(0x6574ba);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6574be:{NFSU2_TR(0x6574be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6574c1:{NFSU2_TR(0x6574c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6574c4:{NFSU2_TR(0x6574c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6574c7:{NFSU2_TR(0x6574c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6574ca:{NFSU2_TR(0x6574ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6574ce:{NFSU2_TR(0x6574ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6574d1:{NFSU2_TR(0x6574d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x657458u);}goto L657458;}}
}
B6574d3:L6574d3:{c.instructions+=1;NFSU2_TR(0x6574d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6574d6:L6574d6:{c.instructions+=2;NFSU2_TR(0x6574d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6574d9:{NFSU2_TR(0x6574d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6574deull));
TAIL_STATIC(0x672440u,672);
}
B6574de:L6574de:{c.instructions+=3;NFSU2_TR(0x6574de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6574e0:{NFSU2_TR(0x6574e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6574e3:{NFSU2_TR(0x6574e3);
if(r1(R+518)){{goto L657bd3;}}
}
B6574e9:L6574e9:{c.instructions+=8;NFSU2_TR(0x6574e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6574ec:{NFSU2_TR(0x6574ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6574ef:{NFSU2_TR(0x6574ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6574f2:{NFSU2_TR(0x6574f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6574f5:{NFSU2_TR(0x6574f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6574f8:{NFSU2_TR(0x6574f8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6574fb:{NFSU2_TR(0x6574fb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xbf2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B657500:{NFSU2_TR(0x657500);
if(r1(R+518)){{goto L657bba;}}
}
B657506:L657506:{c.instructions+=2;NFSU2_TR(0x657506);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B657509:{NFSU2_TR(0x657509);
if(r1(R+518)){{goto L657bab;}}
}
B65750f:L65750f:{c.instructions+=2;NFSU2_TR(0x65750f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657513:{NFSU2_TR(0x657513);
if(r1(R+518)){{goto L6575c3;}}
}
B657519:L657519:{c.instructions+=2;NFSU2_TR(0x657519);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65751b:{NFSU2_TR(0x65751b);
if(r1(R+518)){{goto L65754e;}}
}
B65751d:L65751d:{c.instructions+=2;NFSU2_TR(0x65751d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657520:{NFSU2_TR(0x657520);
if(r1(R+518)){{goto L65754e;}}
}
B657522:L657522:{c.instructions+=2;NFSU2_TR(0x657522);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657525:{NFSU2_TR(0x657525);
if(r1(R+518)){{goto L65754e;}}
}
B657527:L657527:{c.instructions+=2;NFSU2_TR(0x657527);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65752a:{NFSU2_TR(0x65752a);
if(r1(R+518)){{goto L65754e;}}
}
B65752c:L65752c:{c.instructions+=4;NFSU2_TR(0x65752c);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B657530:{NFSU2_TR(0x657530);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657533:{NFSU2_TR(0x657533);
u8 U[4];
w4(U+0,u32(0x7b4d88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657538:{NFSU2_TR(0x657538);
u8 U[4];
w4(U+0,u32(0xc00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65753d:L65753d:{c.instructions+=3;NFSU2_TR(0x65753d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65753e:{NFSU2_TR(0x65753e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657541:{NFSU2_TR(0x657541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657546ull));
TAIL_STATIC(0x64f52au,64f);
}
B657546:L657546:{c.instructions+=2;NFSU2_TR(0x657546);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B657549:{NFSU2_TR(0x657549);
{goto L657bd3;}
}
B65754e:L65754e:{c.instructions+=3;NFSU2_TR(0x65754e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657551:{NFSU2_TR(0x657551);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657554:{NFSU2_TR(0x657554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657559ull));
TAIL_STATIC(0x64fb5eu,64f);
}
B657559:L657559:{c.instructions+=4;NFSU2_TR(0x657559);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B65755d:{NFSU2_TR(0x65755d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65755f:{NFSU2_TR(0x65755f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657562:{NFSU2_TR(0x657562);
if(r1(R+518)){{goto L6575b9;}}
}
B657564:L657564:{c.instructions+=3;NFSU2_TR(0x657564);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657567:{NFSU2_TR(0x657567);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657569:{NFSU2_TR(0x657569);
if(r1(R+518)){{goto L6575a6;}}
}
B65756b:L65756b:{c.instructions+=2;NFSU2_TR(0x65756b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65756f:{NFSU2_TR(0x65756f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6575a6;}}
}
B657571:L657571:{c.instructions+=3;NFSU2_TR(0x657571);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657574:{NFSU2_TR(0x657574);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657577:{NFSU2_TR(0x657577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65757cull));
TAIL_STATIC(0x64fb5eu,64f);
}
B65757c:L65757c:{c.instructions+=4;NFSU2_TR(0x65757c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65757e:{NFSU2_TR(0x65757e);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x65757e);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x65757e);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B657581:{NFSU2_TR(0x657581);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657583:{NFSU2_TR(0x657583);
if(r1(R+518)){{goto L657598;}}
}
B657585:L657585:{c.instructions+=5;NFSU2_TR(0x657585);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B657589:{NFSU2_TR(0x657589);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65758c:{NFSU2_TR(0x65758c);
u8 U[4];
w4(U+0,u32(0x7b4d5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657591:{NFSU2_TR(0x657591);
u8 U[4];
w4(U+0,u32(0xc03ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657596:{NFSU2_TR(0x657596);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65753du);}goto L65753d;}
}
B657598:L657598:{c.instructions+=5;NFSU2_TR(0x657598);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65759b:{NFSU2_TR(0x65759b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65759d:{NFSU2_TR(0x65759d);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6575a1:{NFSU2_TR(0x6575a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6575a4:{NFSU2_TR(0x6575a4);
{goto L6575c3;}
}
B6575a6:L6575a6:{c.instructions+=5;NFSU2_TR(0x6575a6);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6575aa:{NFSU2_TR(0x6575aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6575ad:{NFSU2_TR(0x6575ad);
u8 U[4];
w4(U+0,u32(0x7b4d3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6575b2:{NFSU2_TR(0x6575b2);
u8 U[4];
w4(U+0,u32(0xc02ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6575b7:{NFSU2_TR(0x6575b7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65753du);}goto L65753d;}
}
B6575b9:L6575b9:{c.instructions+=3;NFSU2_TR(0x6575b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6575bc:{NFSU2_TR(0x6575bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6575bf:{NFSU2_TR(0x6575bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6575c3:L6575c3:{c.instructions+=2;NFSU2_TR(0x6575c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6575c7:{NFSU2_TR(0x6575c7);
if(r1(R+512)){{goto L657b9c;}}
}
B6575cd:L6575cd:{c.instructions+=2;NFSU2_TR(0x6575cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10000ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6575d4:{NFSU2_TR(0x6575d4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L657b9c;}}
}
B6575da:L6575da:{c.instructions+=3;NFSU2_TR(0x6575da);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6575dd:{NFSU2_TR(0x6575dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6575e0:{NFSU2_TR(0x6575e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6575e5ull));
TAIL_STATIC(0x64fb5eu,64f);
}
B6575e5:L6575e5:{c.instructions+=8;NFSU2_TR(0x6575e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6575e8:{NFSU2_TR(0x6575e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6575eb:{NFSU2_TR(0x6575eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6575ee:{NFSU2_TR(0x6575ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6575f1:{NFSU2_TR(0x6575f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6575f4:{NFSU2_TR(0x6575f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6575f7:{NFSU2_TR(0x6575f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6575fb:{NFSU2_TR(0x6575fb);
if(r1(R+518)){{goto L65760b;}}
}
B6575fd:L6575fd:{c.instructions+=5;NFSU2_TR(0x6575fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657600:{NFSU2_TR(0x657600);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B657603:{NFSU2_TR(0x657603);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657606:{NFSU2_TR(0x657606);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B657609:{NFSU2_TR(0x657609);
{goto L65760f;}
}
B65760b:L65760b:{c.instructions+=1;NFSU2_TR(0x65760b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65760f:L65760f:{c.instructions+=5;NFSU2_TR(0x65760f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657612:{NFSU2_TR(0x657612);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657616:{NFSU2_TR(0x657616);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657619:{NFSU2_TR(0x657619);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65761c:{NFSU2_TR(0x65761c);
if(r1(R+518)){{goto L65763b;}}
}
B65761e:L65761e:{c.instructions+=7;NFSU2_TR(0x65761e);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B657622:{NFSU2_TR(0x657622);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657625:{NFSU2_TR(0x657625);
u8 U[4];
w4(U+0,u32(0x7b4d18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65762a:{NFSU2_TR(0x65762a);
u8 U[4];
w4(U+0,u32(0xbdfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65762f:{NFSU2_TR(0x65762f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657630:{NFSU2_TR(0x657630);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657633:{NFSU2_TR(0x657633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657638ull));
TAIL_STATIC(0x64f52au,64f);
}
B657638:L657638:{c.instructions+=1;NFSU2_TR(0x657638);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B65763b:L65763b:{c.instructions+=2;NFSU2_TR(0x65763b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65763f:{NFSU2_TR(0x65763f);
if(r1(R+518)){{goto L65765e;}}
}
B657641:L657641:{c.instructions+=7;NFSU2_TR(0x657641);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B657645:{NFSU2_TR(0x657645);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657648:{NFSU2_TR(0x657648);
u8 U[4];
w4(U+0,u32(0x7b4cf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65764d:{NFSU2_TR(0x65764d);
u8 U[4];
w4(U+0,u32(0xbefull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657652:{NFSU2_TR(0x657652);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657653:{NFSU2_TR(0x657653);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657656:{NFSU2_TR(0x657656);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65765bull));
TAIL_STATIC(0x64f52au,64f);
}
B65765b:L65765b:{c.instructions+=1;NFSU2_TR(0x65765b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B65765e:L65765e:{c.instructions+=2;NFSU2_TR(0x65765e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657661:{NFSU2_TR(0x657661);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657694;}}
}
B657663:L657663:{c.instructions+=3;NFSU2_TR(0x657663);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657666:{NFSU2_TR(0x657666);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657669:{NFSU2_TR(0x657669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65766eull));
TAIL_STATIC(0x64fa50u,64f);
}
B65766e:L65766e:{c.instructions+=2;NFSU2_TR(0x65766e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657670:{NFSU2_TR(0x657670);
if(r1(R+518)){{goto L657778;}}
}
B657676:L657676:{c.instructions+=7;NFSU2_TR(0x657676);
u8 U[4];
w4(U+0,u32(0x7b4e2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65767b:{NFSU2_TR(0x65767b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65767e:{NFSU2_TR(0x65767e);
u8 U[4];
w4(U+0,u32(0x7b4cccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657683:{NFSU2_TR(0x657683);
u8 U[4];
w4(U+0,u32(0xbdbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657688:{NFSU2_TR(0x657688);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657689:{NFSU2_TR(0x657689);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65768c:{NFSU2_TR(0x65768c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657691ull));
TAIL_STATIC(0x64f52au,64f);
}
B657691:L657691:{c.instructions+=1;NFSU2_TR(0x657691);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B657694:L657694:{c.instructions+=2;NFSU2_TR(0x657694);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657697:{NFSU2_TR(0x657697);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6576cf;}}
}
B657699:L657699:{c.instructions+=2;NFSU2_TR(0x657699);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65769d:{NFSU2_TR(0x65769d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657778;}}
}
B6576a3:L6576a3:{c.instructions+=3;NFSU2_TR(0x6576a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6576a6:{NFSU2_TR(0x6576a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6576a9:{NFSU2_TR(0x6576a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6576aeull));
TAIL_STATIC(0x64fa50u,64f);
}
B6576ae:L6576ae:{c.instructions+=2;NFSU2_TR(0x6576ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6576b0:{NFSU2_TR(0x6576b0);
if(r1(R+518)){{goto L657778;}}
}
B6576b6:L6576b6:{c.instructions+=6;NFSU2_TR(0x6576b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6576b9:{NFSU2_TR(0x6576b9);
u8 U[4];
w4(U+0,u32(0x7b4c98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6576be:{NFSU2_TR(0x6576be);
u8 U[4];
w4(U+0,u32(0xbe6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6576c3:{NFSU2_TR(0x6576c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6576c4:{NFSU2_TR(0x6576c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6576c7:{NFSU2_TR(0x6576c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6576ccull));
TAIL_STATIC(0x64f52au,64f);
}
B6576cc:L6576cc:{c.instructions+=1;NFSU2_TR(0x6576cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6576cf:L6576cf:{c.instructions+=2;NFSU2_TR(0x6576cf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6576d2:{NFSU2_TR(0x6576d2);
if(r1(R+518)){{goto L6576d9;}}
}
B6576d4:L6576d4:{c.instructions+=2;NFSU2_TR(0x6576d4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6576d7:{NFSU2_TR(0x6576d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657705;}}
}
B6576d9:L6576d9:{c.instructions+=3;NFSU2_TR(0x6576d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6576dc:{NFSU2_TR(0x6576dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6576df:{NFSU2_TR(0x6576df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6576e4ull));
TAIL_STATIC(0x64fae7u,64f);
}
B6576e4:L6576e4:{c.instructions+=2;NFSU2_TR(0x6576e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6576e6:{NFSU2_TR(0x6576e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657705;}}
}
B6576e8:L6576e8:{c.instructions+=7;NFSU2_TR(0x6576e8);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6576ec:{NFSU2_TR(0x6576ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6576ef:{NFSU2_TR(0x6576ef);
u8 U[4];
w4(U+0,u32(0x7b4c7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6576f4:{NFSU2_TR(0x6576f4);
u8 U[4];
w4(U+0,u32(0xbdeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6576f9:{NFSU2_TR(0x6576f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6576fa:{NFSU2_TR(0x6576fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6576fd:{NFSU2_TR(0x6576fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657702ull));
TAIL_STATIC(0x64f52au,64f);
}
B657702:L657702:{c.instructions+=1;NFSU2_TR(0x657702);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B657705:L657705:{c.instructions+=2;NFSU2_TR(0x657705);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657707:{NFSU2_TR(0x657707);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657778;}}
}
B657709:L657709:{c.instructions+=2;NFSU2_TR(0x657709);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65770d:{NFSU2_TR(0x65770d);
if(r1(R+518)){{goto L65776f;}}
}
B65770f:L65770f:{c.instructions+=2;NFSU2_TR(0x65770f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B657713:{NFSU2_TR(0x657713);
if(r1(R+518)){{goto L657737;}}
}
B657715:L657715:{c.instructions+=7;NFSU2_TR(0x657715);
u8 U[4];
w4(U+0,u32(0x7b4e40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65771a:{NFSU2_TR(0x65771a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65771d:{NFSU2_TR(0x65771d);
u8 U[4];
w4(U+0,u32(0x7b4c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657722:{NFSU2_TR(0x657722);
u8 U[4];
w4(U+0,u32(0xbbfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657727:{NFSU2_TR(0x657727);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657728:{NFSU2_TR(0x657728);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65772b:{NFSU2_TR(0x65772b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657730ull));
TAIL_STATIC(0x64f52au,64f);
}
B657730:L657730:{c.instructions+=2;NFSU2_TR(0x657730);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B657733:{NFSU2_TR(0x657733);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B657737:L657737:{c.instructions+=2;NFSU2_TR(0x657737);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65773b:{NFSU2_TR(0x65773b);
if(r1(R+518)){{goto L65776f;}}
}
B65773d:L65773d:{c.instructions+=2;NFSU2_TR(0x65773d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B657741:{NFSU2_TR(0x657741);
if(r1(R+518)){{goto L657765;}}
}
B657743:L657743:{c.instructions+=7;NFSU2_TR(0x657743);
u8 U[4];
w4(U+0,u32(0x7b4e40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657748:{NFSU2_TR(0x657748);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65774b:{NFSU2_TR(0x65774b);
u8 U[4];
w4(U+0,u32(0x7b4c20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657750:{NFSU2_TR(0x657750);
u8 U[4];
w4(U+0,u32(0xbbfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657755:{NFSU2_TR(0x657755);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657756:{NFSU2_TR(0x657756);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657759:{NFSU2_TR(0x657759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65775eull));
TAIL_STATIC(0x64f52au,64f);
}
B65775e:L65775e:{c.instructions+=2;NFSU2_TR(0x65775e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B657761:{NFSU2_TR(0x657761);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B657765:L657765:{c.instructions+=2;NFSU2_TR(0x657765);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B657769:{NFSU2_TR(0x657769);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657850;}}
}
B65776f:L65776f:{c.instructions+=2;NFSU2_TR(0x65776f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x41ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B657773:{NFSU2_TR(0x657773);
{goto L657850;}
}
B657778:L657778:{c.instructions+=2;NFSU2_TR(0x657778);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65777c:{NFSU2_TR(0x65777c);
if(r1(R+518)){{goto L6577a9;}}
}
B65777e:L65777e:{c.instructions+=2;NFSU2_TR(0x65777e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657781:{NFSU2_TR(0x657781);
if(r1(R+518)){{goto L6577a9;}}
}
B657783:L657783:{c.instructions+=2;NFSU2_TR(0x657783);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657786:{NFSU2_TR(0x657786);
if(r1(R+518)){{goto L6577a9;}}
}
B657788:L657788:{c.instructions+=7;NFSU2_TR(0x657788);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B65778c:{NFSU2_TR(0x65778c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65778f:{NFSU2_TR(0x65778f);
u8 U[4];
w4(U+0,u32(0x7b4bf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657794:{NFSU2_TR(0x657794);
u8 U[4];
w4(U+0,u32(0xbbfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657799:{NFSU2_TR(0x657799);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65779a:{NFSU2_TR(0x65779a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65779d:{NFSU2_TR(0x65779d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6577a2ull));
TAIL_STATIC(0x64f52au,64f);
}
B6577a2:L6577a2:{c.instructions+=2;NFSU2_TR(0x6577a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6577a5:{NFSU2_TR(0x6577a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6577a9:L6577a9:{c.instructions+=2;NFSU2_TR(0x6577a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6577ad:{NFSU2_TR(0x6577ad);
if(r1(R+518)){{goto L657802;}}
}
B6577af:L6577af:{c.instructions+=2;NFSU2_TR(0x6577af);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6577b2:{NFSU2_TR(0x6577b2);
if(r1(R+518)){{goto L6577d5;}}
}
B6577b4:L6577b4:{c.instructions+=7;NFSU2_TR(0x6577b4);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6577b8:{NFSU2_TR(0x6577b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6577bb:{NFSU2_TR(0x6577bb);
u8 U[4];
w4(U+0,u32(0x7b4bd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6577c0:{NFSU2_TR(0x6577c0);
u8 U[4];
w4(U+0,u32(0xbe7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6577c5:{NFSU2_TR(0x6577c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6577c6:{NFSU2_TR(0x6577c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6577c9:{NFSU2_TR(0x6577c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6577ceull));
TAIL_STATIC(0x64f52au,64f);
}
B6577ce:L6577ce:{c.instructions+=2;NFSU2_TR(0x6577ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6577d1:{NFSU2_TR(0x6577d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xffffffbfull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6577d5:L6577d5:{c.instructions+=2;NFSU2_TR(0x6577d5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6577d9:{NFSU2_TR(0x6577d9);
if(r1(R+518)){{goto L657802;}}
}
B6577db:L6577db:{c.instructions+=2;NFSU2_TR(0x6577db);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6577df:{NFSU2_TR(0x6577df);
if(r1(R+518)){{goto L657802;}}
}
B6577e1:L6577e1:{c.instructions+=7;NFSU2_TR(0x6577e1);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6577e5:{NFSU2_TR(0x6577e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6577e8:{NFSU2_TR(0x6577e8);
u8 U[4];
w4(U+0,u32(0x7b4ba4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6577ed:{NFSU2_TR(0x6577ed);
u8 U[4];
w4(U+0,u32(0xbf6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6577f2:{NFSU2_TR(0x6577f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6577f3:{NFSU2_TR(0x6577f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6577f6:{NFSU2_TR(0x6577f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6577fbull));
TAIL_STATIC(0x64f52au,64f);
}
B6577fb:L6577fb:{c.instructions+=2;NFSU2_TR(0x6577fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6577fe:{NFSU2_TR(0x6577fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xffffffbfull))));
s4(u32(r4(U+0)),r4(U+4));
}
B657802:L657802:{c.instructions+=2;NFSU2_TR(0x657802);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B657806:{NFSU2_TR(0x657806);
if(r1(R+518)){{goto L657829;}}
}
B657808:L657808:{c.instructions+=7;NFSU2_TR(0x657808);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B65780c:{NFSU2_TR(0x65780c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65780f:{NFSU2_TR(0x65780f);
u8 U[4];
w4(U+0,u32(0x7b4b7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657814:{NFSU2_TR(0x657814);
u8 U[4];
w4(U+0,u32(0xbbeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657819:{NFSU2_TR(0x657819);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65781a:{NFSU2_TR(0x65781a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65781d:{NFSU2_TR(0x65781d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657822ull));
TAIL_STATIC(0x64f52au,64f);
}
B657822:L657822:{c.instructions+=2;NFSU2_TR(0x657822);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B657825:{NFSU2_TR(0x657825);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B657829:L657829:{c.instructions+=2;NFSU2_TR(0x657829);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65782d:{NFSU2_TR(0x65782d);
if(r1(R+518)){{goto L657850;}}
}
B65782f:L65782f:{c.instructions+=7;NFSU2_TR(0x65782f);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B657833:{NFSU2_TR(0x657833);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657836:{NFSU2_TR(0x657836);
u8 U[4];
w4(U+0,u32(0x7b4b54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65783b:{NFSU2_TR(0x65783b);
u8 U[4];
w4(U+0,u32(0xbeeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657840:{NFSU2_TR(0x657840);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657841:{NFSU2_TR(0x657841);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657844:{NFSU2_TR(0x657844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657849ull));
TAIL_STATIC(0x64f52au,64f);
}
B657849:L657849:{c.instructions+=2;NFSU2_TR(0x657849);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B65784c:{NFSU2_TR(0x65784c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffff7ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B657850:L657850:{c.instructions+=2;NFSU2_TR(0x657850);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B657854:{NFSU2_TR(0x657854);
if(r1(R+518)){{goto L657886;}}
}
B657856:L657856:{c.instructions+=2;NFSU2_TR(0x657856);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657859:{NFSU2_TR(0x657859);
if(r1(R+518)){{goto L657886;}}
}
B65785b:L65785b:{c.instructions+=2;NFSU2_TR(0x65785b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65785e:{NFSU2_TR(0x65785e);
if(r1(R+518)){{goto L657886;}}
}
B657860:L657860:{c.instructions+=2;NFSU2_TR(0x657860);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657863:{NFSU2_TR(0x657863);
if(r1(R+518)){{goto L657886;}}
}
B657865:L657865:{c.instructions+=7;NFSU2_TR(0x657865);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B657869:{NFSU2_TR(0x657869);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65786c:{NFSU2_TR(0x65786c);
u8 U[4];
w4(U+0,u32(0x7b4b2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657871:{NFSU2_TR(0x657871);
u8 U[4];
w4(U+0,u32(0xbc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657876:{NFSU2_TR(0x657876);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657877:{NFSU2_TR(0x657877);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65787a:{NFSU2_TR(0x65787a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65787full));
TAIL_STATIC(0x64f52au,64f);
}
B65787f:L65787f:{c.instructions+=2;NFSU2_TR(0x65787f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B657882:{NFSU2_TR(0x657882);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffbull))));
s4(u32(r4(U+0)),r4(U+4));
}
B657886:L657886:{c.instructions+=2;NFSU2_TR(0x657886);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657889:{NFSU2_TR(0x657889);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65789c;}}
}
B65788b:L65788b:{c.instructions+=4;NFSU2_TR(0x65788b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65788e:{NFSU2_TR(0x65788e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657890:{NFSU2_TR(0x657890);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657893:{NFSU2_TR(0x657893);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657898ull));
TAIL_STATIC(0x64f92eu,64f);
}
B657898:L657898:{c.instructions+=1;NFSU2_TR(0x657898);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65789c:L65789c:{c.instructions+=6;NFSU2_TR(0x65789c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65789f:{NFSU2_TR(0x65789f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6578a2:{NFSU2_TR(0x6578a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6578a6:{NFSU2_TR(0x6578a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6578a8:{NFSU2_TR(0x6578a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6578ab:{NFSU2_TR(0x6578ab);
if(r1(R+518)){{goto L65790c;}}
}
B6578ad:L6578ad:{c.instructions+=2;NFSU2_TR(0x6578ad);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6578b1:{NFSU2_TR(0x6578b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6578bd;}}
}
B6578b3:L6578b3:{c.instructions+=5;NFSU2_TR(0x6578b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6578b6:{NFSU2_TR(0x6578b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6578b8:{NFSU2_TR(0x6578b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6578ba:{NFSU2_TR(0x6578ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6578bb:{NFSU2_TR(0x6578bb);
{goto L6578ed;}
}
B6578bd:L6578bd:{c.instructions+=4;NFSU2_TR(0x6578bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6578c0:{NFSU2_TR(0x6578c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6578c2:{NFSU2_TR(0x6578c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6578c5:{NFSU2_TR(0x6578c5);
if(r1(R+518)){{goto L6578cf;}}
}
B6578c7:L6578c7:{c.instructions+=3;NFSU2_TR(0x6578c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6578ca:{NFSU2_TR(0x6578ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6578cd:{NFSU2_TR(0x6578cd);
{goto L6578d3;}
}
B6578cf:L6578cf:{c.instructions+=1;NFSU2_TR(0x6578cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6578d3:L6578d3:{c.instructions+=3;NFSU2_TR(0x6578d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6578d6:{NFSU2_TR(0x6578d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6578d9:{NFSU2_TR(0x6578d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6578deull));
TAIL_STATIC(0x64fb5eu,64f);
}
B6578de:L6578de:{c.instructions+=4;NFSU2_TR(0x6578de);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6578e1:{NFSU2_TR(0x6578e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6578e4:{NFSU2_TR(0x6578e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6578e6:{NFSU2_TR(0x6578e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6578f7;}}
}
B6578e8:L6578e8:{c.instructions+=2;NFSU2_TR(0x6578e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6578ea:{NFSU2_TR(0x6578ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6578ed:L6578ed:{c.instructions+=2;NFSU2_TR(0x6578ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6578f0:{NFSU2_TR(0x6578f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6578f5ull));
TAIL_STATIC(0x6548a3u,654);
}
B6578f5:L6578f5:{c.instructions+=1;NFSU2_TR(0x6578f5);
{goto L657933;}
}
B6578f7:L6578f7:{c.instructions+=5;NFSU2_TR(0x6578f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6578fa:{NFSU2_TR(0x6578fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6578fd:{NFSU2_TR(0x6578fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657900:{NFSU2_TR(0x657900);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657901:{NFSU2_TR(0x657901);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657906ull));
TAIL_STATIC(0x651982u,651);
}
B657906:L657906:{c.instructions+=2;NFSU2_TR(0x657906);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65790a:{NFSU2_TR(0x65790a);
{goto L657936;}
}
B65790c:L65790c:{c.instructions+=2;NFSU2_TR(0x65790c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65790e:{NFSU2_TR(0x65790e);
if(r1(R+518)){{goto L65791a;}}
}
B657910:L657910:{c.instructions+=2;NFSU2_TR(0x657910);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657913:{NFSU2_TR(0x657913);
if(r1(R+518)){{goto L65791a;}}
}
B657915:L657915:{c.instructions+=2;NFSU2_TR(0x657915);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657918:{NFSU2_TR(0x657918);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657936;}}
}
B65791a:L65791a:{c.instructions+=2;NFSU2_TR(0x65791a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65791d:{NFSU2_TR(0x65791d);
if(r1(R+518)){{goto L657936;}}
}
B65791f:L65791f:{c.instructions+=9;NFSU2_TR(0x65791f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657920:{NFSU2_TR(0x657920);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B657922:{NFSU2_TR(0x657922);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657923:{NFSU2_TR(0x657923);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657924:{NFSU2_TR(0x657924);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657927:{NFSU2_TR(0x657927);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B65792a:{NFSU2_TR(0x65792a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65792c:{NFSU2_TR(0x65792c);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65792e:{NFSU2_TR(0x65792e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657933ull));
TAIL_STATIC(0x651db1u,651);
}
B657933:L657933:{c.instructions+=1;NFSU2_TR(0x657933);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657936:L657936:{c.instructions+=2;NFSU2_TR(0x657936);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65793a:{NFSU2_TR(0x65793a);
if(r1(R+518)){{goto L657aac;}}
}
B657940:L657940:{c.instructions+=2;NFSU2_TR(0x657940);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657943:{NFSU2_TR(0x657943);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657959;}}
}
B657945:L657945:{c.instructions+=5;NFSU2_TR(0x657945);
u8 U[4];
w4(U+0,u32(0x7b4dd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65794a:{NFSU2_TR(0x65794a);
u8 U[4];
w4(U+0,u32(0x7b4e2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65794f:{NFSU2_TR(0x65794f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657952:{NFSU2_TR(0x657952);
u8 U[4];
w4(U+0,u32(0x7b4b10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657957:{NFSU2_TR(0x657957);
{goto L65797f;}
}
B657959:L657959:{c.instructions+=2;NFSU2_TR(0x657959);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65795c:{NFSU2_TR(0x65795c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657995;}}
}
B65795e:L65795e:{c.instructions+=3;NFSU2_TR(0x65795e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657961:{NFSU2_TR(0x657961);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657964:{NFSU2_TR(0x657964);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657969ull));
TAIL_STATIC(0x64fae7u,64f);
}
B657969:L657969:{c.instructions+=2;NFSU2_TR(0x657969);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65796b:{NFSU2_TR(0x65796b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657995;}}
}
B65796d:L65796d:{c.instructions+=4;NFSU2_TR(0x65796d);
u8 U[4];
w4(U+0,u32(0x7b4dc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657972:{NFSU2_TR(0x657972);
u8 U[4];
w4(U+0,u32(0x7b4e18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657977:{NFSU2_TR(0x657977);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65797a:{NFSU2_TR(0x65797a);
u8 U[4];
w4(U+0,u32(0x7b4ae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65797f:L65797f:{c.instructions+=4;NFSU2_TR(0x65797f);
u8 U[4];
w4(U+0,u32(0xbc1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657984:{NFSU2_TR(0x657984);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657985:{NFSU2_TR(0x657985);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657988:{NFSU2_TR(0x657988);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65798dull));
TAIL_STATIC(0x64f52au,64f);
}
B65798d:L65798d:{c.instructions+=2;NFSU2_TR(0x65798d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B657990:{NFSU2_TR(0x657990);
{goto L657b31;}
}
B657995:L657995:{c.instructions+=4;NFSU2_TR(0x657995);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657998:{NFSU2_TR(0x657998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65799b:{NFSU2_TR(0x65799b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65799f:{NFSU2_TR(0x65799f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6579c8;}}
}
B6579a1:L6579a1:{c.instructions+=2;NFSU2_TR(0x6579a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6579a3:{NFSU2_TR(0x6579a3);
if(r1(R+518)){{goto L6579c8;}}
}
B6579a5:L6579a5:{c.instructions+=8;NFSU2_TR(0x6579a5);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6579a9:{NFSU2_TR(0x6579a9);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6579ad:{NFSU2_TR(0x6579ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6579b0:{NFSU2_TR(0x6579b0);
u8 U[4];
w4(U+0,u32(0x7b4ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6579b5:{NFSU2_TR(0x6579b5);
u8 U[4];
w4(U+0,u32(0xbe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6579ba:{NFSU2_TR(0x6579ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6579bb:{NFSU2_TR(0x6579bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6579be:{NFSU2_TR(0x6579be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6579c3ull));
TAIL_STATIC(0x64f52au,64f);
}
B6579c3:L6579c3:{c.instructions+=2;NFSU2_TR(0x6579c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B6579c6:{NFSU2_TR(0x6579c6);
{goto L657a2c;}
}
B6579c8:L6579c8:{c.instructions+=3;NFSU2_TR(0x6579c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6579cb:{NFSU2_TR(0x6579cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x50ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6579cf:{NFSU2_TR(0x6579cf);
if(r1(R+518)){{goto L6579ff;}}
}
B6579d1:L6579d1:{c.instructions+=3;NFSU2_TR(0x6579d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6579d4:{NFSU2_TR(0x6579d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6579d7:{NFSU2_TR(0x6579d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6579dcull));
TAIL_STATIC(0x650453u,650);
}
B6579dc:L6579dc:{c.instructions+=2;NFSU2_TR(0x6579dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6579de:{NFSU2_TR(0x6579de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6579ff;}}
}
B6579e0:L6579e0:{c.instructions+=7;NFSU2_TR(0x6579e0);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6579e4:{NFSU2_TR(0x6579e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6579e7:{NFSU2_TR(0x6579e7);
u8 U[4];
w4(U+0,u32(0x7b4a90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6579ec:{NFSU2_TR(0x6579ec);
u8 U[4];
w4(U+0,u32(0xbc3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6579f1:{NFSU2_TR(0x6579f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6579f2:{NFSU2_TR(0x6579f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6579f5:{NFSU2_TR(0x6579f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6579faull));
TAIL_STATIC(0x64f52au,64f);
}
B6579fa:L6579fa:{c.instructions+=2;NFSU2_TR(0x6579fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6579fd:{NFSU2_TR(0x6579fd);
{goto L657a2c;}
}
B6579ff:L6579ff:{c.instructions+=6;NFSU2_TR(0x6579ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657a02:{NFSU2_TR(0x657a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657a05:{NFSU2_TR(0x657a05);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657a07:{NFSU2_TR(0x657a07);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657a0a:{NFSU2_TR(0x657a0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657a0d:{NFSU2_TR(0x657a0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657a12ull));
TAIL_STATIC(0x65164au,651);
}
B657a12:L657a12:{c.instructions+=2;NFSU2_TR(0x657a12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657a14:{NFSU2_TR(0x657a14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657a35;}}
}
B657a16:L657a16:{c.instructions+=8;NFSU2_TR(0x657a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657a19:{NFSU2_TR(0x657a19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657a1a:{NFSU2_TR(0x657a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657a1d:{NFSU2_TR(0x657a1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657a20:{NFSU2_TR(0x657a20);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657a23:{NFSU2_TR(0x657a23);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657a26:{NFSU2_TR(0x657a26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657a27:{NFSU2_TR(0x657a27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657a2cull));
TAIL_STATIC(0x651982u,651);
}
B657a2c:L657a2c:{c.instructions+=2;NFSU2_TR(0x657a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B657a30:{NFSU2_TR(0x657a30);
{goto L657b00;}
}
B657a35:L657a35:{c.instructions+=4;NFSU2_TR(0x657a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657a38:{NFSU2_TR(0x657a38);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x40ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B657a3b:{NFSU2_TR(0x657a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657a3e:{NFSU2_TR(0x657a3e);
if(r1(R+518)){{goto L657a4e;}}
}
B657a40:L657a40:{c.instructions+=3;NFSU2_TR(0x657a40);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657a43:{NFSU2_TR(0x657a43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657a46:{NFSU2_TR(0x657a46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657a4bull));
TAIL_STATIC(0x65669cu,656);
}
B657a4b:L657a4b:{c.instructions+=1;NFSU2_TR(0x657a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657a4e:L657a4e:{c.instructions+=2;NFSU2_TR(0x657a4e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657a52:{NFSU2_TR(0x657a52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657a70;}}
}
B657a54:L657a54:{c.instructions+=3;NFSU2_TR(0x657a54);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657a57:{NFSU2_TR(0x657a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657a5a:{NFSU2_TR(0x657a5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657a5full));
TAIL_STATIC(0x64fa50u,64f);
}
B657a5f:L657a5f:{c.instructions+=2;NFSU2_TR(0x657a5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657a61:{NFSU2_TR(0x657a61);
if(r1(R+518)){{goto L657a70;}}
}
B657a63:L657a63:{c.instructions+=3;NFSU2_TR(0x657a63);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657a66:{NFSU2_TR(0x657a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657a69:{NFSU2_TR(0x657a69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657a6eull));
TAIL_STATIC(0x65669cu,656);
}
B657a6e:L657a6e:{c.instructions+=1;NFSU2_TR(0x657a6e);
{goto L657a7c;}
}
B657a70:L657a70:{c.instructions+=3;NFSU2_TR(0x657a70);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B657a72:{NFSU2_TR(0x657a72);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657a75:{NFSU2_TR(0x657a75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657a81;}}
}
B657a77:L657a77:{c.instructions+=2;NFSU2_TR(0x657a77);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657a7a:{NFSU2_TR(0x657a7a);
if(r1(R+518)){{goto L657a81;}}
}
B657a7c:L657a7c:{c.instructions+=2;NFSU2_TR(0x657a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657a7f:{NFSU2_TR(0x657a7f);
{goto L657b00;}
}
B657a81:L657a81:{c.instructions+=7;NFSU2_TR(0x657a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657a84:{NFSU2_TR(0x657a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657a87:{NFSU2_TR(0x657a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B657a8b:{NFSU2_TR(0x657a8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657a8c:{NFSU2_TR(0x657a8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657a8f:{NFSU2_TR(0x657a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657a92:{NFSU2_TR(0x657a92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657a97ull));
TAIL_STATIC(0x65479cu,654);
}
B657a97:L657a97:{c.instructions+=6;NFSU2_TR(0x657a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657a9a:{NFSU2_TR(0x657a9a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657a9c:{NFSU2_TR(0x657a9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657a9f:{NFSU2_TR(0x657a9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657aa0:{NFSU2_TR(0x657aa0);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657aa2:{NFSU2_TR(0x657aa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657aa7ull));
TAIL_STATIC(0x656deau,656);
}
B657aa7:L657aa7:{c.instructions+=2;NFSU2_TR(0x657aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657aaa:{NFSU2_TR(0x657aaa);
{goto L657b00;}
}
B657aac:L657aac:{c.instructions+=2;NFSU2_TR(0x657aac);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657aae:{NFSU2_TR(0x657aae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657ac5;}}
}
B657ab0:L657ab0:{c.instructions+=3;NFSU2_TR(0x657ab0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657ab3:{NFSU2_TR(0x657ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657ab6:{NFSU2_TR(0x657ab6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657abbull));
TAIL_STATIC(0x64fa50u,64f);
}
B657abb:L657abb:{c.instructions+=2;NFSU2_TR(0x657abb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657abd:{NFSU2_TR(0x657abd);
if(r1(R+518)){{goto L657b35;}}
}
B657abf:L657abf:{c.instructions+=2;NFSU2_TR(0x657abf);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B657ac3:{NFSU2_TR(0x657ac3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657ae3;}}
}
B657ac5:L657ac5:{c.instructions+=2;NFSU2_TR(0x657ac5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657ac8:{NFSU2_TR(0x657ac8);
if(r1(R+518)){{goto L657acf;}}
}
B657aca:L657aca:{c.instructions+=2;NFSU2_TR(0x657aca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657acd:{NFSU2_TR(0x657acd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657ade;}}
}
B657acf:L657acf:{c.instructions+=3;NFSU2_TR(0x657acf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657ad2:{NFSU2_TR(0x657ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657ad5:{NFSU2_TR(0x657ad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657adaull));
TAIL_STATIC(0x64fa50u,64f);
}
B657ada:L657ada:{c.instructions+=2;NFSU2_TR(0x657ada);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657adc:{NFSU2_TR(0x657adc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657ae3;}}
}
B657ade:L657ade:{c.instructions+=2;NFSU2_TR(0x657ade);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657ae1:{NFSU2_TR(0x657ae1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657b00;}}
}
B657ae3:L657ae3:{c.instructions+=7;NFSU2_TR(0x657ae3);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B657ae7:{NFSU2_TR(0x657ae7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657aea:{NFSU2_TR(0x657aea);
u8 U[4];
w4(U+0,u32(0x7b4a7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657aef:{NFSU2_TR(0x657aef);
u8 U[4];
w4(U+0,u32(0xbc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657af4:{NFSU2_TR(0x657af4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657af5:{NFSU2_TR(0x657af5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657af8:{NFSU2_TR(0x657af8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657afdull));
TAIL_STATIC(0x64f52au,64f);
}
B657afd:L657afd:{c.instructions+=1;NFSU2_TR(0x657afd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B657b00:L657b00:{c.instructions+=2;NFSU2_TR(0x657b00);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657b02:{NFSU2_TR(0x657b02);
if(r1(R+518)){{goto L657b35;}}
}
B657b04:L657b04:{c.instructions+=2;NFSU2_TR(0x657b04);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657b07:{NFSU2_TR(0x657b07);
if(r1(R+518)){{goto L657b35;}}
}
B657b09:L657b09:{c.instructions+=2;NFSU2_TR(0x657b09);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657b0c:{NFSU2_TR(0x657b0c);
if(r1(R+518)){{goto L657b35;}}
}
B657b0e:L657b0e:{c.instructions+=2;NFSU2_TR(0x657b0e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657b12:{NFSU2_TR(0x657b12);
if(r1(R+518)){{goto L657b35;}}
}
B657b14:L657b14:{c.instructions+=7;NFSU2_TR(0x657b14);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B657b18:{NFSU2_TR(0x657b18);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657b1b:{NFSU2_TR(0x657b1b);
u8 U[4];
w4(U+0,u32(0x7b4a5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657b20:{NFSU2_TR(0x657b20);
u8 U[4];
w4(U+0,u32(0xbe3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657b25:{NFSU2_TR(0x657b25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657b26:{NFSU2_TR(0x657b26);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657b29:{NFSU2_TR(0x657b29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657b2eull));
TAIL_STATIC(0x64f52au,64f);
}
B657b2e:L657b2e:{c.instructions+=1;NFSU2_TR(0x657b2e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B657b31:L657b31:{c.instructions+=1;NFSU2_TR(0x657b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B657b35:L657b35:{c.instructions+=3;NFSU2_TR(0x657b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657b38:{NFSU2_TR(0x657b38);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657b3c:{NFSU2_TR(0x657b3c);
if(r1(R+518)){{goto L657b6b;}}
}
B657b3e:L657b3e:{c.instructions+=2;NFSU2_TR(0x657b3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657b40:{NFSU2_TR(0x657b40);
if(r1(R+518)){{goto L657b6b;}}
}
B657b42:L657b42:{c.instructions+=2;NFSU2_TR(0x657b42);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657b45:{NFSU2_TR(0x657b45);
if(r1(R+518)){{goto L657b6b;}}
}
B657b47:L657b47:{c.instructions+=7;NFSU2_TR(0x657b47);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B657b4b:{NFSU2_TR(0x657b4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657b4e:{NFSU2_TR(0x657b4e);
u8 U[4];
w4(U+0,u32(0x7b4a38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657b53:{NFSU2_TR(0x657b53);
u8 U[4];
w4(U+0,u32(0xbe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657b58:{NFSU2_TR(0x657b58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657b59:{NFSU2_TR(0x657b59);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657b5c:{NFSU2_TR(0x657b5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657b61ull));
TAIL_STATIC(0x64f52au,64f);
}
B657b61:L657b61:{c.instructions+=3;NFSU2_TR(0x657b61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657b64:{NFSU2_TR(0x657b64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B657b67:{NFSU2_TR(0x657b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B657b6b:L657b6b:{c.instructions+=4;NFSU2_TR(0x657b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657b6e:{NFSU2_TR(0x657b6e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657b70:{NFSU2_TR(0x657b70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657b73:{NFSU2_TR(0x657b73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657b78ull));
TAIL_STATIC(0x650b63u,650);
}
B657b78:L657b78:{c.instructions+=2;NFSU2_TR(0x657b78);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B657b7a:{NFSU2_TR(0x657b7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L657bd3;}}
}
B657b7c:L657b7c:{c.instructions+=2;NFSU2_TR(0x657b7c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
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
B657b80:{NFSU2_TR(0x657b80);
if(r1(R+518)){{goto L657b97;}}
}
B657b82:L657b82:{c.instructions+=3;NFSU2_TR(0x657b82);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657b85:{NFSU2_TR(0x657b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657b88:{NFSU2_TR(0x657b88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657b8dull));
TAIL_STATIC(0x6505b9u,650);
}
B657b8d:L657b8d:{c.instructions+=4;NFSU2_TR(0x657b8d);
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
B657b8f:{NFSU2_TR(0x657b8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657b92:{NFSU2_TR(0x657b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657b95:{NFSU2_TR(0x657b95);
if(r1(R+518)){{goto L657bd3;}}
}
B657b97:L657b97:{c.instructions+=2;NFSU2_TR(0x657b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657b9a:{NFSU2_TR(0x657b9a);
{goto L657bd5;}
}
B657b9c:L657b9c:{c.instructions+=4;NFSU2_TR(0x657b9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657b9f:{NFSU2_TR(0x657b9f);
u8 U[4];
w4(U+0,u32(0x7b47d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657ba4:{NFSU2_TR(0x657ba4);
u8 U[4];
w4(U+0,u32(0xbf3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657ba9:{NFSU2_TR(0x657ba9);
{goto L657bc7;}
}
B657bab:L657bab:{c.instructions+=4;NFSU2_TR(0x657bab);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657bae:{NFSU2_TR(0x657bae);
u8 U[4];
w4(U+0,u32(0x7b4a04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657bb3:{NFSU2_TR(0x657bb3);
u8 U[4];
w4(U+0,u32(0xc01ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657bb8:{NFSU2_TR(0x657bb8);
{goto L657bc7;}
}
B657bba:L657bba:{c.instructions+=3;NFSU2_TR(0x657bba);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657bbd:{NFSU2_TR(0x657bbd);
u8 U[4];
w4(U+0,u32(0x7b476cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657bc2:{NFSU2_TR(0x657bc2);
u8 U[4];
w4(U+0,u32(0xbf2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657bc7:L657bc7:{c.instructions+=3;NFSU2_TR(0x657bc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657bc8:{NFSU2_TR(0x657bc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657bcb:{NFSU2_TR(0x657bcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657bd0ull));
TAIL_STATIC(0x64f52au,64f);
}
B657bd0:L657bd0:{c.instructions+=1;NFSU2_TR(0x657bd0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B657bd3:L657bd3:{c.instructions+=1;NFSU2_TR(0x657bd3);
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
B657bd5:L657bd5:{c.instructions+=5;NFSU2_TR(0x657bd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B657bd6:{NFSU2_TR(0x657bd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B657bd7:{NFSU2_TR(0x657bd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B657bd8:{NFSU2_TR(0x657bd8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B657bd9:{NFSU2_TR(0x657bd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B657bdc:L657bdc:{c.instructions+=15;NFSU2_TR(0x657bdc);
__builtin_memmove((R+28),(R+28),4);
}
B657bde:{NFSU2_TR(0x657bde);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657bdf:{NFSU2_TR(0x657bdf);
__builtin_memmove((R+20),(R+16),4);
}
B657be1:{NFSU2_TR(0x657be1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B657be4:{NFSU2_TR(0x657be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657be7:{NFSU2_TR(0x657be7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657be8:{NFSU2_TR(0x657be8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B657bea:{NFSU2_TR(0x657bea);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657bec:{NFSU2_TR(0x657bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657bef:{NFSU2_TR(0x657bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657bf2:{NFSU2_TR(0x657bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657bf5:{NFSU2_TR(0x657bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657bf8:{NFSU2_TR(0x657bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657bfb:{NFSU2_TR(0x657bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657bfe:{NFSU2_TR(0x657bfe);
if(r1(R+518)){{goto L657fed;}}
}
B657c04:L657c04:{c.instructions+=2;NFSU2_TR(0x657c04);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657c08:{NFSU2_TR(0x657c08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657fed;}}
}
B657c0e:L657c0e:{c.instructions+=7;NFSU2_TR(0x657c0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c0f:{NFSU2_TR(0x657c0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B657c12:{NFSU2_TR(0x657c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657c15:{NFSU2_TR(0x657c15);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657c17:{NFSU2_TR(0x657c17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c18:{NFSU2_TR(0x657c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657c1b:{NFSU2_TR(0x657c1b);
if(r1(R+518)){{goto L657c22;}}
}
B657c1d:L657c1d:{c.instructions+=2;NFSU2_TR(0x657c1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657c20:{NFSU2_TR(0x657c20);
{goto L657c24;}
}
B657c22:L657c22:{c.instructions+=1;NFSU2_TR(0x657c22);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B657c24:L657c24:{c.instructions+=4;NFSU2_TR(0x657c24);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657c27:{NFSU2_TR(0x657c27);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c29:{NFSU2_TR(0x657c29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B657c2a:{NFSU2_TR(0x657c2a);
if(r1(R+518)){{goto L657c2f;}}
}
B657c2c:L657c2c:{c.instructions+=2;NFSU2_TR(0x657c2c);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c2e:{NFSU2_TR(0x657c2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B657c2f:L657c2f:{c.instructions+=13;NFSU2_TR(0x657c2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B657c32:{NFSU2_TR(0x657c32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c33:{NFSU2_TR(0x657c33);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B657c36:{NFSU2_TR(0x657c36);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c37:{NFSU2_TR(0x657c37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c38:{NFSU2_TR(0x657c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657c3b:{NFSU2_TR(0x657c3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657c3e:{NFSU2_TR(0x657c3e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B657c40:{NFSU2_TR(0x657c40);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657c43:{NFSU2_TR(0x657c43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c44:{NFSU2_TR(0x657c44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c45:{NFSU2_TR(0x657c45);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c47:{NFSU2_TR(0x657c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657c4cull));
TAIL_STATIC(0x6540dfu,654);
}
B657c4c:L657c4c:{c.instructions+=2;NFSU2_TR(0x657c4c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657c4e:{NFSU2_TR(0x657c4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L657fe5;}}
}
B657c54:L657c54:{c.instructions+=1;NFSU2_TR(0x657c54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657c57;}}
}
B657c56:L657c56:{c.instructions+=1;NFSU2_TR(0x657c56);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B657c57:L657c57:{c.instructions+=2;NFSU2_TR(0x657c57);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657c5a:{NFSU2_TR(0x657c5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657c85;}}
}
B657c5c:L657c5c:{c.instructions+=2;NFSU2_TR(0x657c5c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657c5e:{NFSU2_TR(0x657c5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657d04;}}
}
B657c64:L657c64:{c.instructions+=8;NFSU2_TR(0x657c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657c67:{NFSU2_TR(0x657c67);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B657c6a:{NFSU2_TR(0x657c6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c6b:{NFSU2_TR(0x657c6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B657c6e:{NFSU2_TR(0x657c6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c6f:{NFSU2_TR(0x657c6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657c72:{NFSU2_TR(0x657c72);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c73:{NFSU2_TR(0x657c73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657c78ull));
TAIL_STATIC(0x650cadu,650);
}
B657c78:L657c78:{c.instructions+=2;NFSU2_TR(0x657c78);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657c7a:{NFSU2_TR(0x657c7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L657fe5;}}
}
B657c80:L657c80:{c.instructions+=1;NFSU2_TR(0x657c80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657c89;}}
}
B657c82:L657c82:{c.instructions+=2;NFSU2_TR(0x657c82);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B657c84:{NFSU2_TR(0x657c84);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B657c85:L657c85:{c.instructions+=2;NFSU2_TR(0x657c85);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657c87:{NFSU2_TR(0x657c87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657cb0;}}
}
B657c89:L657c89:{c.instructions+=12;NFSU2_TR(0x657c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657c8c:{NFSU2_TR(0x657c8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B657c8f:{NFSU2_TR(0x657c8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c90:{NFSU2_TR(0x657c90);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B657c93:{NFSU2_TR(0x657c93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c94:{NFSU2_TR(0x657c94);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c96:{NFSU2_TR(0x657c96);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657c99:{NFSU2_TR(0x657c99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c9a:{NFSU2_TR(0x657c9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c9b:{NFSU2_TR(0x657c9b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c9c:{NFSU2_TR(0x657c9c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657c9e:{NFSU2_TR(0x657c9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657ca3ull));
TAIL_STATIC(0x6540dfu,654);
}
B657ca3:L657ca3:{c.instructions+=2;NFSU2_TR(0x657ca3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657ca5:{NFSU2_TR(0x657ca5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L657fe5;}}
}
B657cab:L657cab:{c.instructions+=1;NFSU2_TR(0x657cab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657cb0;}}
}
B657cad:L657cad:{c.instructions+=2;NFSU2_TR(0x657cad);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B657caf:{NFSU2_TR(0x657caf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B657cb0:L657cb0:{c.instructions+=2;NFSU2_TR(0x657cb0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657cb3:{NFSU2_TR(0x657cb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657cd8;}}
}
B657cb5:L657cb5:{c.instructions+=2;NFSU2_TR(0x657cb5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657cb7:{NFSU2_TR(0x657cb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657cfa;}}
}
B657cb9:L657cb9:{c.instructions+=8;NFSU2_TR(0x657cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657cbc:{NFSU2_TR(0x657cbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B657cbf:{NFSU2_TR(0x657cbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657cc0:{NFSU2_TR(0x657cc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B657cc3:{NFSU2_TR(0x657cc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657cc4:{NFSU2_TR(0x657cc4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657cc5:{NFSU2_TR(0x657cc5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657cc6:{NFSU2_TR(0x657cc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657ccbull));
TAIL_STATIC(0x650cadu,650);
}
B657ccb:L657ccb:{c.instructions+=2;NFSU2_TR(0x657ccb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657ccd:{NFSU2_TR(0x657ccd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L657fe5;}}
}
B657cd3:L657cd3:{c.instructions+=1;NFSU2_TR(0x657cd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657cdc;}}
}
B657cd5:L657cd5:{c.instructions+=2;NFSU2_TR(0x657cd5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B657cd7:{NFSU2_TR(0x657cd7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B657cd8:L657cd8:{c.instructions+=2;NFSU2_TR(0x657cd8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657cda:{NFSU2_TR(0x657cda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657cfa;}}
}
B657cdc:L657cdc:{c.instructions+=6;NFSU2_TR(0x657cdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657cdf:{NFSU2_TR(0x657cdf);
u8 U[4];
w4(U+0,u32(0x7b41a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657ce4:{NFSU2_TR(0x657ce4);
u8 U[4];
w4(U+0,u32(0xbbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657ce9:{NFSU2_TR(0x657ce9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657cea:{NFSU2_TR(0x657cea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657ced:{NFSU2_TR(0x657ced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657cf2ull));
TAIL_STATIC(0x64f52au,64f);
}
B657cf2:L657cf2:{c.instructions+=2;NFSU2_TR(0x657cf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B657cf5:{NFSU2_TR(0x657cf5);
{goto L657fe5;}
}
B657cfa:L657cfa:{c.instructions+=3;NFSU2_TR(0x657cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657cfd:{NFSU2_TR(0x657cfd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657cff:{NFSU2_TR(0x657cff);
if(r1(R+518)){{goto L657d04;}}
}
B657d01:L657d01:{c.instructions+=1;NFSU2_TR(0x657d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657d04:L657d04:{c.instructions+=8;NFSU2_TR(0x657d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B657d07:{NFSU2_TR(0x657d07);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B657d0a:{NFSU2_TR(0x657d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657d0d:{NFSU2_TR(0x657d0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B657d10:{NFSU2_TR(0x657d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657d13:{NFSU2_TR(0x657d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657d16:{NFSU2_TR(0x657d16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657d19:{NFSU2_TR(0x657d19);
{goto L657ea5;}
}
B657d1e:L657d1e:{c.instructions+=7;NFSU2_TR(0x657d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657d21:{NFSU2_TR(0x657d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657d24:{NFSU2_TR(0x657d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657d27:{NFSU2_TR(0x657d27);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B657d29:{NFSU2_TR(0x657d29);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657d2b:{NFSU2_TR(0x657d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657d2e:{NFSU2_TR(0x657d2e);
if(r1(R+518)){{goto L657d40;}}
}
B657d30:L657d30:{c.instructions+=4;NFSU2_TR(0x657d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B657d33:{NFSU2_TR(0x657d33);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657d37:{NFSU2_TR(0x657d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B657d3a:{NFSU2_TR(0x657d3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657d40;}}
}
B657d3c:L657d3c:{c.instructions+=2;NFSU2_TR(0x657d3c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B657d3d:{NFSU2_TR(0x657d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657d40:L657d40:{c.instructions+=2;NFSU2_TR(0x657d40);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657d43:{NFSU2_TR(0x657d43);
if(r1(R+518)){{goto L657d52;}}
}
B657d45:L657d45:{c.instructions+=3;NFSU2_TR(0x657d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657d48:{NFSU2_TR(0x657d48);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B657d4c:{NFSU2_TR(0x657d4c);
if(r1(R+518)){{goto L657e9f;}}
}
B657d52:L657d52:{c.instructions+=2;NFSU2_TR(0x657d52);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657d54:{NFSU2_TR(0x657d54);
if(r1(R+518)){{goto L657e9b;}}
}
B657d5a:L657d5a:{c.instructions+=6;NFSU2_TR(0x657d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657d5d:{NFSU2_TR(0x657d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B657d60:{NFSU2_TR(0x657d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657d63:{NFSU2_TR(0x657d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657d66:{NFSU2_TR(0x657d66);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657d68:{NFSU2_TR(0x657d68);
if(r1(R+518)){{goto L657d72;}}
}
B657d6a:L657d6a:{c.instructions+=3;NFSU2_TR(0x657d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657d6d:{NFSU2_TR(0x657d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657d70:{NFSU2_TR(0x657d70);
{goto L657d75;}
}
B657d72:L657d72:{c.instructions+=1;NFSU2_TR(0x657d72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657d75:L657d75:{c.instructions+=2;NFSU2_TR(0x657d75);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657d77:{NFSU2_TR(0x657d77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657d7cull));
TAIL_STATIC(0x645362u,645);
}
B657d7c:L657d7c:{c.instructions+=2;NFSU2_TR(0x657d7c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657d7e:{NFSU2_TR(0x657d7e);
if(r1(R+518)){{goto L657d90;}}
}
B657d80:L657d80:{c.instructions+=5;NFSU2_TR(0x657d80);
u8 U[4];
w4(U+0,u32(0x7b4edcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657d85:{NFSU2_TR(0x657d85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657d86:{NFSU2_TR(0x657d86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657d87:{NFSU2_TR(0x657d87);
__builtin_memmove((R+4),(R+0),4);
}
B657d89:{NFSU2_TR(0x657d89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657d8eull));
TAIL_STATIC(0x672498u,672);
}
B657d8e:L657d8e:{c.instructions+=1;NFSU2_TR(0x657d8e);
{goto L657d92;}
}
B657d90:L657d90:{c.instructions+=1;NFSU2_TR(0x657d90);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B657d92:L657d92:{c.instructions+=4;NFSU2_TR(0x657d92);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657d94:{NFSU2_TR(0x657d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657d97:{NFSU2_TR(0x657d97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B657d99:{NFSU2_TR(0x657d99);
if(r1(R+518)){{goto L657fe5;}}
}
B657d9f:L657d9f:{c.instructions+=2;NFSU2_TR(0x657d9f);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657da1:{NFSU2_TR(0x657da1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657da6ull));
TAIL_STATIC(0x645362u,645);
}
B657da6:L657da6:{c.instructions+=2;NFSU2_TR(0x657da6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657da8:{NFSU2_TR(0x657da8);
if(r1(R+518)){{goto L657dba;}}
}
B657daa:L657daa:{c.instructions+=5;NFSU2_TR(0x657daa);
u8 U[4];
w4(U+0,u32(0x7b4ed4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657daf:{NFSU2_TR(0x657daf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657db0:{NFSU2_TR(0x657db0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657db1:{NFSU2_TR(0x657db1);
__builtin_memmove((R+4),(R+0),4);
}
B657db3:{NFSU2_TR(0x657db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657db8ull));
TAIL_STATIC(0x672498u,672);
}
B657db8:L657db8:{c.instructions+=1;NFSU2_TR(0x657db8);
{goto L657dbc;}
}
B657dba:L657dba:{c.instructions+=1;NFSU2_TR(0x657dba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B657dbc:L657dbc:{c.instructions+=4;NFSU2_TR(0x657dbc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657dbe:{NFSU2_TR(0x657dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657dc1:{NFSU2_TR(0x657dc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B657dc3:{NFSU2_TR(0x657dc3);
if(r1(R+518)){{goto L657fe5;}}
}
B657dc9:L657dc9:{c.instructions+=3;NFSU2_TR(0x657dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657dcc:{NFSU2_TR(0x657dcc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B657dd0:{NFSU2_TR(0x657dd0);
if(r1(R+518)){{goto L657dfd;}}
}
B657dd2:L657dd2:{c.instructions+=5;NFSU2_TR(0x657dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657dd5:{NFSU2_TR(0x657dd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657dd6:{NFSU2_TR(0x657dd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657dd9:{NFSU2_TR(0x657dd9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657dda:{NFSU2_TR(0x657dda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657ddfull));
TAIL_STATIC(0x65164au,651);
}
B657ddf:L657ddf:{c.instructions+=4;NFSU2_TR(0x657ddf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657de1:{NFSU2_TR(0x657de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657de4:{NFSU2_TR(0x657de4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657de5:{NFSU2_TR(0x657de5);
if(r1(R+518)){{goto L657ee9;}}
}
B657deb:L657deb:{c.instructions+=4;NFSU2_TR(0x657deb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657dec:{NFSU2_TR(0x657dec);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657def:{NFSU2_TR(0x657def);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657df0:{NFSU2_TR(0x657df0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657df5ull));
TAIL_STATIC(0x6548a3u,654);
}
B657df5:L657df5:{c.instructions+=3;NFSU2_TR(0x657df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657df8:{NFSU2_TR(0x657df8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B657dfa:{NFSU2_TR(0x657dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657dfd:L657dfd:{c.instructions+=3;NFSU2_TR(0x657dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657e00:{NFSU2_TR(0x657e00);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B657e04:{NFSU2_TR(0x657e04);
if(r1(R+518)){{goto L657e7d;}}
}
B657e06:L657e06:{c.instructions+=3;NFSU2_TR(0x657e06);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657e09:{NFSU2_TR(0x657e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657e0c:{NFSU2_TR(0x657e0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657e11ull));
TAIL_STATIC(0x64fa50u,64f);
}
B657e11:L657e11:{c.instructions+=2;NFSU2_TR(0x657e11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657e13:{NFSU2_TR(0x657e13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657efe;}}
}
B657e19:L657e19:{c.instructions+=5;NFSU2_TR(0x657e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657e1c:{NFSU2_TR(0x657e1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657e1d:{NFSU2_TR(0x657e1d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657e1e:{NFSU2_TR(0x657e1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657e21:{NFSU2_TR(0x657e21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657e26ull));
TAIL_STATIC(0x65164au,651);
}
B657e26:L657e26:{c.instructions+=2;NFSU2_TR(0x657e26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B657e28:{NFSU2_TR(0x657e28);
if(r1(R+518)){{goto L657efe;}}
}
B657e2e:L657e2e:{c.instructions+=5;NFSU2_TR(0x657e2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657e31:{NFSU2_TR(0x657e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657e34:{NFSU2_TR(0x657e34);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657e37:{NFSU2_TR(0x657e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657e3a:{NFSU2_TR(0x657e3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657e3full));
TAIL_STATIC(0x65479cu,654);
}
B657e3f:L657e3f:{c.instructions+=2;NFSU2_TR(0x657e3f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657e41:{NFSU2_TR(0x657e41);
if(r1(R+518)){{goto L657fe5;}}
}
B657e47:L657e47:{c.instructions+=6;NFSU2_TR(0x657e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657e4a:{NFSU2_TR(0x657e4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657e4b:{NFSU2_TR(0x657e4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657e4c:{NFSU2_TR(0x657e4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657e4d:{NFSU2_TR(0x657e4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657e50:{NFSU2_TR(0x657e50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657e55ull));
TAIL_STATIC(0x6548a3u,654);
}
B657e55:L657e55:{c.instructions+=2;NFSU2_TR(0x657e55);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657e57:{NFSU2_TR(0x657e57);
if(r1(R+518)){{goto L657fe5;}}
}
B657e5d:L657e5d:{c.instructions+=6;NFSU2_TR(0x657e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657e60:{NFSU2_TR(0x657e60);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657e62:{NFSU2_TR(0x657e62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657e63:{NFSU2_TR(0x657e63);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657e66:{NFSU2_TR(0x657e66);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657e68:{NFSU2_TR(0x657e68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657e6dull));
TAIL_STATIC(0x656deau,656);
}
B657e6d:L657e6d:{c.instructions+=2;NFSU2_TR(0x657e6d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657e6f:{NFSU2_TR(0x657e6f);
if(r1(R+518)){{goto L657fe5;}}
}
B657e75:L657e75:{c.instructions+=3;NFSU2_TR(0x657e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657e78:{NFSU2_TR(0x657e78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B657e7a:{NFSU2_TR(0x657e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657e7d:L657e7d:{c.instructions+=11;NFSU2_TR(0x657e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657e80:{NFSU2_TR(0x657e80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B657e82:{NFSU2_TR(0x657e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B657e85:{NFSU2_TR(0x657e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B657e88:{NFSU2_TR(0x657e88);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B657e8b:{NFSU2_TR(0x657e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657e8e:{NFSU2_TR(0x657e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657e91:{NFSU2_TR(0x657e91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B657e93:{NFSU2_TR(0x657e93);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B657e96:{NFSU2_TR(0x657e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657e99:{NFSU2_TR(0x657e99);
{goto L657e9f;}
}
B657e9b:L657e9b:{c.instructions+=2;NFSU2_TR(0x657e9b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657e9d:{NFSU2_TR(0x657e9d);
if(r1(R+518)){{goto L657eb8;}}
}
B657e9f:L657e9f:{c.instructions+=2;NFSU2_TR(0x657e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657ea2:{NFSU2_TR(0x657ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657ea5:L657ea5:{c.instructions+=3;NFSU2_TR(0x657ea5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657ea7:{NFSU2_TR(0x657ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657eaa:{NFSU2_TR(0x657eaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x657d1eu);}goto L657d1e;}}
}
B657eb0:L657eb0:{c.instructions+=2;NFSU2_TR(0x657eb0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657eb2:{NFSU2_TR(0x657eb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657f91;}}
}
B657eb8:L657eb8:{c.instructions+=2;NFSU2_TR(0x657eb8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657ebb:{NFSU2_TR(0x657ebb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657f91;}}
}
B657ec1:L657ec1:{c.instructions+=2;NFSU2_TR(0x657ec1);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657ec3:{NFSU2_TR(0x657ec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657ec8ull));
TAIL_STATIC(0x645362u,645);
}
B657ec8:L657ec8:{c.instructions+=2;NFSU2_TR(0x657ec8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657eca:{NFSU2_TR(0x657eca);
if(r1(R+518)){{goto L657f08;}}
}
B657ecc:L657ecc:{c.instructions+=12;NFSU2_TR(0x657ecc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B657ece:{NFSU2_TR(0x657ece);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657ed1:{NFSU2_TR(0x657ed1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657ed2:{NFSU2_TR(0x657ed2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B657ed5:{NFSU2_TR(0x657ed5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657ed7:{NFSU2_TR(0x657ed7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657ed8:{NFSU2_TR(0x657ed8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657ed9:{NFSU2_TR(0x657ed9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x19ull))));
}
B657edc:{NFSU2_TR(0x657edc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657edd:{NFSU2_TR(0x657edd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657ede:{NFSU2_TR(0x657ede);
__builtin_memmove((R+4),(R+0),4);
}
B657ee0:{NFSU2_TR(0x657ee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657ee5ull));
TAIL_STATIC(0x672d7bu,672);
}
B657ee5:L657ee5:{c.instructions+=2;NFSU2_TR(0x657ee5);
__builtin_memmove((R+24),(R+0),4);
}
B657ee7:{NFSU2_TR(0x657ee7);
{goto L657f0a;}
}
B657ee9:L657ee9:{c.instructions+=2;NFSU2_TR(0x657ee9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657eec:{NFSU2_TR(0x657eec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657eed:L657eed:{c.instructions+=4;NFSU2_TR(0x657eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657ef0:{NFSU2_TR(0x657ef0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657ef3:{NFSU2_TR(0x657ef3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657ef4:{NFSU2_TR(0x657ef4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657ef9ull));
TAIL_STATIC(0x651982u,651);
}
B657ef9:L657ef9:{c.instructions+=1;NFSU2_TR(0x657ef9);
{goto L657fe5;}
}
B657efe:L657efe:{c.instructions+=5;NFSU2_TR(0x657efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657f01:{NFSU2_TR(0x657f01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657f02:{NFSU2_TR(0x657f02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657f03:{NFSU2_TR(0x657f03);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657f06:{NFSU2_TR(0x657f06);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x657eedu);}goto L657eed;}
}
B657f08:L657f08:{c.instructions+=1;NFSU2_TR(0x657f08);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B657f0a:L657f0a:{c.instructions+=2;NFSU2_TR(0x657f0a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657f0c:{NFSU2_TR(0x657f0c);
if(r1(R+518)){{goto L657fe5;}}
}
B657f12:L657f12:{c.instructions+=3;NFSU2_TR(0x657f12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657f15:{NFSU2_TR(0x657f15);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
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
B657f18:{NFSU2_TR(0x657f18);
if(r1(R+518)){{goto L657f2d;}}
}
B657f1a:L657f1a:{c.instructions+=3;NFSU2_TR(0x657f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657f1d:{NFSU2_TR(0x657f1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B657f1f:{NFSU2_TR(0x657f1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657f22ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B657f22:L657f22:{c.instructions+=3;NFSU2_TR(0x657f22);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657f24:{NFSU2_TR(0x657f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657f27:{NFSU2_TR(0x657f27);
if(r1(R+518)){{goto L657fe5;}}
}
B657f2d:L657f2d:{c.instructions+=4;NFSU2_TR(0x657f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657f30:{NFSU2_TR(0x657f30);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657f32:{NFSU2_TR(0x657f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657f35:{NFSU2_TR(0x657f35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657f3aull));
TAIL_STATIC(0x645362u,645);
}
B657f3a:L657f3a:{c.instructions+=2;NFSU2_TR(0x657f3a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657f3c:{NFSU2_TR(0x657f3c);
if(r1(R+518)){{goto L657f4e;}}
}
B657f3e:L657f3e:{c.instructions+=5;NFSU2_TR(0x657f3e);
u8 U[4];
w4(U+0,u32(0x7b4ec8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657f43:{NFSU2_TR(0x657f43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657f44:{NFSU2_TR(0x657f44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657f45:{NFSU2_TR(0x657f45);
__builtin_memmove((R+4),(R+0),4);
}
B657f47:{NFSU2_TR(0x657f47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657f4cull));
TAIL_STATIC(0x672498u,672);
}
B657f4c:L657f4c:{c.instructions+=1;NFSU2_TR(0x657f4c);
{goto L657f50;}
}
B657f4e:L657f4e:{c.instructions+=1;NFSU2_TR(0x657f4e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B657f50:L657f50:{c.instructions+=3;NFSU2_TR(0x657f50);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657f52:{NFSU2_TR(0x657f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657f55:{NFSU2_TR(0x657f55);
if(r1(R+518)){{goto L657fe5;}}
}
B657f5b:L657f5b:{c.instructions+=8;NFSU2_TR(0x657f5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657f5e:{NFSU2_TR(0x657f5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657f61:{NFSU2_TR(0x657f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657f64:{NFSU2_TR(0x657f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657f67:{NFSU2_TR(0x657f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B657f6a:{NFSU2_TR(0x657f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657f6d:{NFSU2_TR(0x657f6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657f6e:{NFSU2_TR(0x657f6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657f73ull));
TAIL_STATIC(0x650571u,650);
}
B657f73:L657f73:{c.instructions+=3;NFSU2_TR(0x657f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657f76:{NFSU2_TR(0x657f76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657f77:{NFSU2_TR(0x657f77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657f7cull));
TAIL_STATIC(0x650453u,650);
}
B657f7c:L657f7c:{c.instructions+=2;NFSU2_TR(0x657f7c);
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
B657f7e:{NFSU2_TR(0x657f7e);
if(r1(R+518)){{goto L657fe7;}}
}
B657f80:L657f80:{c.instructions+=3;NFSU2_TR(0x657f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B657f83:{NFSU2_TR(0x657f83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657f84:{NFSU2_TR(0x657f84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657f89ull));
TAIL_STATIC(0x65669cu,656);
}
B657f89:L657f89:{c.instructions+=2;NFSU2_TR(0x657f89);
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
B657f8b:{NFSU2_TR(0x657f8b);
if(r1(R+518)){{goto L657fe7;}}
}
B657f8d:L657f8d:{c.instructions+=2;NFSU2_TR(0x657f8d);
__builtin_memmove((R+24),(R+0),4);
}
B657f8f:{NFSU2_TR(0x657f8f);
{goto L657fe7;}
}
B657f91:L657f91:{c.instructions+=3;NFSU2_TR(0x657f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657f94:{NFSU2_TR(0x657f94);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B657f96:{NFSU2_TR(0x657f96);
{goto L657f9c;}
}
B657f98:L657f98:{c.instructions+=2;NFSU2_TR(0x657f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657f9b:{NFSU2_TR(0x657f9b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B657f9c:L657f9c:{c.instructions+=2;NFSU2_TR(0x657f9c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657f9e:{NFSU2_TR(0x657f9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x657f98u);}goto L657f98;}}
}
B657fa0:L657fa0:{c.instructions+=3;NFSU2_TR(0x657fa0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B657fa3:{NFSU2_TR(0x657fa3);
w4(R+0,u32(0x7b3b24ull));
}
B657fa8:{NFSU2_TR(0x657fa8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657fc0;}}
}
B657faa:L657faa:{c.instructions+=2;NFSU2_TR(0x657faa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657fad:{NFSU2_TR(0x657fad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657fb4;}}
}
B657faf:L657faf:{c.instructions+=1;NFSU2_TR(0x657faf);
w4(R+0,u32(0x783fe5ull));
}
B657fb4:L657fb4:{c.instructions+=5;NFSU2_TR(0x657fb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657fb5:{NFSU2_TR(0x657fb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657fb6:{NFSU2_TR(0x657fb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657fb9:{NFSU2_TR(0x657fb9);
u8 U[4];
w4(U+0,u32(0x7b4e9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657fbe:{NFSU2_TR(0x657fbe);
{goto L657fd4;}
}
B657fc0:L657fc0:{c.instructions+=2;NFSU2_TR(0x657fc0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B657fc3:{NFSU2_TR(0x657fc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L657fca;}}
}
B657fc5:L657fc5:{c.instructions+=1;NFSU2_TR(0x657fc5);
w4(R+0,u32(0x783fe5ull));
}
B657fca:L657fca:{c.instructions+=4;NFSU2_TR(0x657fca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657fcb:{NFSU2_TR(0x657fcb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657fcc:{NFSU2_TR(0x657fcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657fcf:{NFSU2_TR(0x657fcf);
u8 U[4];
w4(U+0,u32(0x7b4e64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657fd4:L657fd4:{c.instructions+=4;NFSU2_TR(0x657fd4);
u8 U[4];
w4(U+0,u32(0xbc5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657fd9:{NFSU2_TR(0x657fd9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657fda:{NFSU2_TR(0x657fda);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B657fdd:{NFSU2_TR(0x657fdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x657fe2ull));
TAIL_STATIC(0x64f52au,64f);
}
B657fe2:L657fe2:{c.instructions+=1;NFSU2_TR(0x657fe2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B657fe5:L657fe5:{c.instructions+=1;NFSU2_TR(0x657fe5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B657fe7:L657fe7:{c.instructions+=4;NFSU2_TR(0x657fe7);
__builtin_memmove((R+0),(R+24),4);
}
B657fe9:{NFSU2_TR(0x657fe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B657fea:{NFSU2_TR(0x657fea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B657feb:{NFSU2_TR(0x657feb);
{goto L657fef;}
}
B657fed:L657fed:{c.instructions+=1;NFSU2_TR(0x657fed);
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
B657fef:L657fef:{c.instructions+=3;NFSU2_TR(0x657fef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B657ff0:{NFSU2_TR(0x657ff0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B657ff1:{NFSU2_TR(0x657ff1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B657ff4:L657ff4:{c.instructions+=6;NFSU2_TR(0x657ff4);
__builtin_memmove((R+28),(R+28),4);
}
B657ff6:{NFSU2_TR(0x657ff6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B657ff7:{NFSU2_TR(0x657ff7);
__builtin_memmove((R+20),(R+16),4);
}
B657ff9:{NFSU2_TR(0x657ff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B657ffc:{NFSU2_TR(0x657ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B657fff:{NFSU2_TR(0x657fff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x658000u,658);
}
XIT:NFSU2_TR_EXIT(0x657,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
