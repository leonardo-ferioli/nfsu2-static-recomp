#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_54c(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x504,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x504,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_504(u8* __restrict R,Cpu& c);
u32 page_504(Cpu& c){return body_504(c.regs.data(),c);}
__attribute__((noinline)) u32 body_504(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x504000:goto L504000;
case 0x504006:c.instructions+=19;goto B504006;
case 0x504008:c.instructions+=18;goto B504008;
case 0x50400a:c.instructions+=17;goto B50400a;
case 0x50400f:c.instructions+=16;goto B50400f;
case 0x504011:c.instructions+=15;goto B504011;
case 0x504013:c.instructions+=14;goto B504013;
case 0x504016:c.instructions+=13;goto B504016;
case 0x504019:c.instructions+=12;goto B504019;
case 0x50401c:c.instructions+=11;goto B50401c;
case 0x50401f:c.instructions+=10;goto B50401f;
case 0x504022:c.instructions+=9;goto B504022;
case 0x504025:c.instructions+=8;goto B504025;
case 0x504027:c.instructions+=7;goto B504027;
case 0x504028:c.instructions+=6;goto B504028;
case 0x50402b:c.instructions+=5;goto B50402b;
case 0x50402c:c.instructions+=4;goto B50402c;
case 0x50402e:c.instructions+=3;goto B50402e;
case 0x504031:c.instructions+=2;goto B504031;
case 0x504032:c.instructions+=1;goto B504032;
case 0x504040:goto L504040;
case 0x504042:c.instructions+=7;goto B504042;
case 0x504046:c.instructions+=6;goto B504046;
case 0x504047:c.instructions+=5;goto B504047;
case 0x504048:c.instructions+=4;goto B504048;
case 0x50404a:c.instructions+=3;goto B50404a;
case 0x50404f:c.instructions+=2;goto B50404f;
case 0x504051:c.instructions+=1;goto B504051;
case 0x504056:goto L504056;
case 0x504058:goto L504058;
case 0x50405a:c.instructions+=14;goto B50405a;
case 0x50405c:c.instructions+=13;goto B50405c;
case 0x504062:c.instructions+=12;goto B504062;
case 0x504064:c.instructions+=11;goto B504064;
case 0x504067:c.instructions+=10;goto B504067;
case 0x50406a:c.instructions+=9;goto B50406a;
case 0x50406d:c.instructions+=8;goto B50406d;
case 0x504070:c.instructions+=7;goto B504070;
case 0x504073:c.instructions+=6;goto B504073;
case 0x504076:c.instructions+=5;goto B504076;
case 0x504079:c.instructions+=4;goto B504079;
case 0x50407b:c.instructions+=3;goto B50407b;
case 0x504080:c.instructions+=2;goto B504080;
case 0x504086:c.instructions+=1;goto B504086;
case 0x50408b:goto L50408b;
case 0x50408d:goto L50408d;
case 0x50408f:c.instructions+=42;goto B50408f;
case 0x504091:c.instructions+=41;goto B504091;
case 0x504097:c.instructions+=40;goto B504097;
case 0x504099:c.instructions+=39;goto B504099;
case 0x50409c:c.instructions+=38;goto B50409c;
case 0x50409f:c.instructions+=37;goto B50409f;
case 0x5040a2:c.instructions+=36;goto B5040a2;
case 0x5040a5:c.instructions+=35;goto B5040a5;
case 0x5040a8:c.instructions+=34;goto B5040a8;
case 0x5040ab:c.instructions+=33;goto B5040ab;
case 0x5040ae:c.instructions+=32;goto B5040ae;
case 0x5040b0:c.instructions+=31;goto B5040b0;
case 0x5040b2:c.instructions+=30;goto B5040b2;
case 0x5040b8:c.instructions+=29;goto B5040b8;
case 0x5040ba:c.instructions+=28;goto B5040ba;
case 0x5040bd:c.instructions+=27;goto B5040bd;
case 0x5040c0:c.instructions+=26;goto B5040c0;
case 0x5040c3:c.instructions+=25;goto B5040c3;
case 0x5040c6:c.instructions+=24;goto B5040c6;
case 0x5040c9:c.instructions+=23;goto B5040c9;
case 0x5040cc:c.instructions+=22;goto B5040cc;
case 0x5040cf:c.instructions+=21;goto B5040cf;
case 0x5040d1:c.instructions+=20;goto B5040d1;
case 0x5040d3:c.instructions+=19;goto B5040d3;
case 0x5040d9:c.instructions+=18;goto B5040d9;
case 0x5040db:c.instructions+=17;goto B5040db;
case 0x5040de:c.instructions+=16;goto B5040de;
case 0x5040e1:c.instructions+=15;goto B5040e1;
case 0x5040e4:c.instructions+=14;goto B5040e4;
case 0x5040ea:c.instructions+=13;goto B5040ea;
case 0x5040ed:c.instructions+=12;goto B5040ed;
case 0x5040f3:c.instructions+=11;goto B5040f3;
case 0x5040f6:c.instructions+=10;goto B5040f6;
case 0x5040f8:c.instructions+=9;goto B5040f8;
case 0x5040fa:c.instructions+=8;goto B5040fa;
case 0x504100:c.instructions+=7;goto B504100;
case 0x504102:c.instructions+=6;goto B504102;
case 0x504105:c.instructions+=5;goto B504105;
case 0x504108:c.instructions+=4;goto B504108;
case 0x50410b:c.instructions+=3;goto B50410b;
case 0x504111:c.instructions+=2;goto B504111;
case 0x504113:c.instructions+=1;goto B504113;
case 0x504118:goto L504118;
case 0x50411a:goto L50411a;
case 0x50411f:c.instructions+=14;goto B50411f;
case 0x504121:c.instructions+=13;goto B504121;
case 0x504123:c.instructions+=12;goto B504123;
case 0x504129:c.instructions+=11;goto B504129;
case 0x50412b:c.instructions+=10;goto B50412b;
case 0x50412e:c.instructions+=9;goto B50412e;
case 0x504131:c.instructions+=8;goto B504131;
case 0x504134:c.instructions+=7;goto B504134;
case 0x504137:c.instructions+=6;goto B504137;
case 0x50413a:c.instructions+=5;goto B50413a;
case 0x50413d:c.instructions+=4;goto B50413d;
case 0x504140:c.instructions+=3;goto B504140;
case 0x504141:c.instructions+=2;goto B504141;
case 0x504142:c.instructions+=1;goto B504142;
case 0x50414d:goto L50414d;
case 0x50414e:c.instructions+=15;goto B50414e;
case 0x50414f:c.instructions+=14;goto B50414f;
case 0x504150:c.instructions+=13;goto B504150;
case 0x504152:c.instructions+=12;goto B504152;
case 0x504154:c.instructions+=11;goto B504154;
case 0x504156:c.instructions+=10;goto B504156;
case 0x50415b:c.instructions+=9;goto B50415b;
case 0x50415e:c.instructions+=8;goto B50415e;
case 0x504161:c.instructions+=7;goto B504161;
case 0x504164:c.instructions+=6;goto B504164;
case 0x504167:c.instructions+=5;goto B504167;
case 0x50416a:c.instructions+=4;goto B50416a;
case 0x50416d:c.instructions+=3;goto B50416d;
case 0x504170:c.instructions+=2;goto B504170;
case 0x504177:c.instructions+=1;goto B504177;
case 0x504180:goto L504180;
case 0x504183:c.instructions+=2;goto B504183;
case 0x504185:c.instructions+=1;goto B504185;
case 0x504187:goto L504187;
case 0x50418b:c.instructions+=2;goto B50418b;
case 0x50418d:c.instructions+=1;goto B50418d;
case 0x50418f:goto L50418f;
case 0x504190:c.instructions+=2;goto B504190;
case 0x504196:c.instructions+=1;goto B504196;
case 0x504199:goto L504199;
case 0x50419f:c.instructions+=1;goto B50419f;
case 0x5041a2:goto L5041a2;
case 0x5041a4:c.instructions+=2;goto B5041a4;
case 0x5041aa:c.instructions+=1;goto B5041aa;
case 0x5041b0:goto L5041b0;
case 0x5041b3:c.instructions+=2;goto B5041b3;
case 0x5041b5:c.instructions+=1;goto B5041b5;
case 0x5041b7:goto L5041b7;
case 0x5041bb:c.instructions+=2;goto B5041bb;
case 0x5041bd:c.instructions+=1;goto B5041bd;
case 0x5041bf:goto L5041bf;
case 0x5041c0:c.instructions+=2;goto B5041c0;
case 0x5041c6:c.instructions+=1;goto B5041c6;
case 0x5041c9:goto L5041c9;
case 0x5041cf:c.instructions+=1;goto B5041cf;
case 0x5041d2:goto L5041d2;
case 0x5041d4:c.instructions+=2;goto B5041d4;
case 0x5041da:c.instructions+=1;goto B5041da;
case 0x5041e0:goto L5041e0;
case 0x5041e6:c.instructions+=12;goto B5041e6;
case 0x5041ea:c.instructions+=11;goto B5041ea;
case 0x5041f0:c.instructions+=10;goto B5041f0;
case 0x5041f6:c.instructions+=9;goto B5041f6;
case 0x5041f7:c.instructions+=8;goto B5041f7;
case 0x5041fa:c.instructions+=7;goto B5041fa;
case 0x5041fd:c.instructions+=6;goto B5041fd;
case 0x504201:c.instructions+=5;goto B504201;
case 0x504203:c.instructions+=4;goto B504203;
case 0x504204:c.instructions+=3;goto B504204;
case 0x504208:c.instructions+=2;goto B504208;
case 0x50420a:c.instructions+=1;goto B50420a;
case 0x50420c:goto L50420c;
case 0x50420f:c.instructions+=1;goto B50420f;
case 0x504211:goto L504211;
case 0x504214:c.instructions+=2;goto B504214;
case 0x504216:c.instructions+=1;goto B504216;
case 0x504218:goto L504218;
case 0x504219:c.instructions+=1;goto B504219;
case 0x50421e:goto L50421e;
case 0x504221:c.instructions+=1;goto B504221;
case 0x504228:goto L504228;
case 0x50422b:goto L50422b;
case 0x50422c:c.instructions+=2;goto B50422c;
case 0x50422d:c.instructions+=1;goto B50422d;
case 0x504230:goto L504230;
case 0x504236:c.instructions+=5;goto B504236;
case 0x504239:c.instructions+=4;goto B504239;
case 0x50423a:c.instructions+=3;goto B50423a;
case 0x50423c:c.instructions+=2;goto B50423c;
case 0x504242:c.instructions+=1;goto B504242;
case 0x504244:goto L504244;
case 0x50424a:c.instructions+=9;goto B50424a;
case 0x50424c:c.instructions+=8;goto B50424c;
case 0x50424d:c.instructions+=7;goto B50424d;
case 0x504250:c.instructions+=6;goto B504250;
case 0x504251:c.instructions+=5;goto B504251;
case 0x504253:c.instructions+=4;goto B504253;
case 0x504259:c.instructions+=3;goto B504259;
case 0x50425f:c.instructions+=2;goto B50425f;
case 0x504260:c.instructions+=1;goto B504260;
case 0x504262:goto L504262;
case 0x504268:goto L504268;
case 0x504270:goto L504270;
case 0x504274:c.instructions+=3;goto B504274;
case 0x504276:c.instructions+=2;goto B504276;
case 0x504279:c.instructions+=1;goto B504279;
case 0x50427b:goto L50427b;
case 0x50427e:c.instructions+=2;goto B50427e;
case 0x504281:c.instructions+=1;goto B504281;
case 0x504284:goto L504284;
case 0x504287:c.instructions+=2;goto B504287;
case 0x50428a:c.instructions+=1;goto B50428a;
case 0x504290:goto L504290;
case 0x504291:c.instructions+=4;goto B504291;
case 0x504295:c.instructions+=3;goto B504295;
case 0x504297:c.instructions+=2;goto B504297;
case 0x504299:c.instructions+=1;goto B504299;
case 0x50429b:goto L50429b;
case 0x50429f:c.instructions+=3;goto B50429f;
case 0x5042a2:c.instructions+=2;goto B5042a2;
case 0x5042a7:c.instructions+=1;goto B5042a7;
case 0x5042b0:goto L5042b0;
case 0x5042b7:c.instructions+=14;goto B5042b7;
case 0x5042ba:c.instructions+=13;goto B5042ba;
case 0x5042bd:c.instructions+=12;goto B5042bd;
case 0x5042c0:c.instructions+=11;goto B5042c0;
case 0x5042c2:c.instructions+=10;goto B5042c2;
case 0x5042c5:c.instructions+=9;goto B5042c5;
case 0x5042c8:c.instructions+=8;goto B5042c8;
case 0x5042cb:c.instructions+=7;goto B5042cb;
case 0x5042ce:c.instructions+=6;goto B5042ce;
case 0x5042d1:c.instructions+=5;goto B5042d1;
case 0x5042d4:c.instructions+=4;goto B5042d4;
case 0x5042d7:c.instructions+=3;goto B5042d7;
case 0x5042da:c.instructions+=2;goto B5042da;
case 0x5042db:c.instructions+=1;goto B5042db;
case 0x5042dd:goto L5042dd;
case 0x5042de:c.instructions+=1;goto B5042de;
case 0x5042e0:goto L5042e0;
case 0x5042e1:c.instructions+=5;goto B5042e1;
case 0x5042e3:c.instructions+=4;goto B5042e3;
case 0x5042e6:c.instructions+=3;goto B5042e6;
case 0x5042ea:c.instructions+=2;goto B5042ea;
case 0x5042ec:c.instructions+=1;goto B5042ec;
case 0x5042ee:goto L5042ee;
case 0x5042f0:goto L5042f0;
case 0x5042f1:c.instructions+=4;goto B5042f1;
case 0x5042f2:c.instructions+=3;goto B5042f2;
case 0x5042f4:c.instructions+=2;goto B5042f4;
case 0x5042f6:c.instructions+=1;goto B5042f6;
case 0x504300:goto L504300;
case 0x504306:c.instructions+=4;goto B504306;
case 0x50430a:c.instructions+=3;goto B50430a;
case 0x50430c:c.instructions+=2;goto B50430c;
case 0x50430f:c.instructions+=1;goto B50430f;
case 0x504311:goto L504311;
case 0x504314:c.instructions+=2;goto B504314;
case 0x504316:c.instructions+=1;goto B504316;
case 0x504318:goto L504318;
case 0x504319:c.instructions+=1;goto B504319;
case 0x50431e:goto L50431e;
case 0x504324:c.instructions+=2;goto B504324;
case 0x504327:c.instructions+=1;goto B504327;
case 0x50432f:goto L50432f;
case 0x504332:c.instructions+=2;goto B504332;
case 0x504333:c.instructions+=1;goto B504333;
case 0x504335:goto L504335;
case 0x504336:c.instructions+=1;goto B504336;
case 0x504337:goto L504337;
case 0x50433d:c.instructions+=2;goto B50433d;
case 0x50433e:c.instructions+=1;goto B50433e;
case 0x504343:goto L504343;
case 0x504346:c.instructions+=1;goto B504346;
case 0x504350:goto L504350;
case 0x504351:c.instructions+=1;goto B504351;
case 0x504354:goto L504354;
case 0x504355:c.instructions+=18;goto B504355;
case 0x504356:c.instructions+=17;goto B504356;
case 0x504357:c.instructions+=16;goto B504357;
case 0x504358:c.instructions+=15;goto B504358;
case 0x504359:c.instructions+=14;goto B504359;
case 0x50435a:c.instructions+=13;goto B50435a;
case 0x50435b:c.instructions+=12;goto B50435b;
case 0x50435c:c.instructions+=11;goto B50435c;
case 0x50435d:c.instructions+=10;goto B50435d;
case 0x50435e:c.instructions+=9;goto B50435e;
case 0x50435f:c.instructions+=8;goto B50435f;
case 0x504360:c.instructions+=7;goto B504360;
case 0x504363:c.instructions+=6;goto B504363;
case 0x504369:c.instructions+=5;goto B504369;
case 0x50436a:c.instructions+=4;goto B50436a;
case 0x50436d:c.instructions+=3;goto B50436d;
case 0x50436f:c.instructions+=2;goto B50436f;
case 0x504371:c.instructions+=1;goto B504371;
case 0x504373:goto L504373;
case 0x504376:c.instructions+=6;goto B504376;
case 0x504379:c.instructions+=5;goto B504379;
case 0x50437b:c.instructions+=4;goto B50437b;
case 0x50437e:c.instructions+=3;goto B50437e;
case 0x50437f:c.instructions+=2;goto B50437f;
case 0x504381:c.instructions+=1;goto B504381;
case 0x504383:goto L504383;
case 0x504386:c.instructions+=6;goto B504386;
case 0x504388:c.instructions+=5;goto B504388;
case 0x50438b:c.instructions+=4;goto B50438b;
case 0x504391:c.instructions+=3;goto B504391;
case 0x504393:c.instructions+=2;goto B504393;
case 0x504395:c.instructions+=1;goto B504395;
case 0x504397:goto L504397;
case 0x50439a:c.instructions+=6;goto B50439a;
case 0x50439d:c.instructions+=5;goto B50439d;
case 0x50439f:c.instructions+=4;goto B50439f;
case 0x5043a2:c.instructions+=3;goto B5043a2;
case 0x5043a3:c.instructions+=2;goto B5043a3;
case 0x5043a5:c.instructions+=1;goto B5043a5;
case 0x5043a7:goto L5043a7;
case 0x5043a9:c.instructions+=2;goto B5043a9;
case 0x5043aa:c.instructions+=1;goto B5043aa;
case 0x5043b0:goto L5043b0;
case 0x5043b6:c.instructions+=12;goto B5043b6;
case 0x5043b9:c.instructions+=11;goto B5043b9;
case 0x5043bf:c.instructions+=10;goto B5043bf;
case 0x5043c2:c.instructions+=9;goto B5043c2;
case 0x5043c5:c.instructions+=8;goto B5043c5;
case 0x5043c6:c.instructions+=7;goto B5043c6;
case 0x5043cc:c.instructions+=6;goto B5043cc;
case 0x5043cf:c.instructions+=5;goto B5043cf;
case 0x5043d1:c.instructions+=4;goto B5043d1;
case 0x5043d3:c.instructions+=3;goto B5043d3;
case 0x5043d6:c.instructions+=2;goto B5043d6;
case 0x5043d7:c.instructions+=1;goto B5043d7;
case 0x5043d9:goto L5043d9;
case 0x5043dc:c.instructions+=2;goto B5043dc;
case 0x5043df:c.instructions+=1;goto B5043df;
case 0x5043e2:goto L5043e2;
case 0x5043e8:c.instructions+=1;goto B5043e8;
case 0x5043ea:goto L5043ea;
case 0x5043ee:c.instructions+=1;goto B5043ee;
case 0x5043f1:goto L5043f1;
case 0x504400:goto L504400;
case 0x504401:c.instructions+=5;goto B504401;
case 0x504403:c.instructions+=4;goto B504403;
case 0x504404:c.instructions+=3;goto B504404;
case 0x504408:c.instructions+=2;goto B504408;
case 0x50440c:c.instructions+=1;goto B50440c;
case 0x50440e:goto L50440e;
case 0x50440f:c.instructions+=3;goto B50440f;
case 0x504411:c.instructions+=2;goto B504411;
case 0x504412:c.instructions+=1;goto B504412;
case 0x504413:goto L504413;
case 0x504416:c.instructions+=4;goto B504416;
case 0x504418:c.instructions+=3;goto B504418;
case 0x50441a:c.instructions+=2;goto B50441a;
case 0x50441c:c.instructions+=1;goto B50441c;
case 0x50441e:goto L50441e;
case 0x504420:goto L504420;
case 0x504424:c.instructions+=3;goto B504424;
case 0x504425:c.instructions+=2;goto B504425;
case 0x504427:c.instructions+=1;goto B504427;
case 0x504429:goto L504429;
case 0x50442c:c.instructions+=9;goto B50442c;
case 0x50442e:c.instructions+=8;goto B50442e;
case 0x504431:c.instructions+=7;goto B504431;
case 0x504436:c.instructions+=6;goto B504436;
case 0x504438:c.instructions+=5;goto B504438;
case 0x50443a:c.instructions+=4;goto B50443a;
case 0x50443d:c.instructions+=3;goto B50443d;
case 0x504441:c.instructions+=2;goto B504441;
case 0x504443:c.instructions+=1;goto B504443;
case 0x504445:goto L504445;
case 0x504446:c.instructions+=9;goto B504446;
case 0x504448:c.instructions+=8;goto B504448;
case 0x50444b:c.instructions+=7;goto B50444b;
case 0x504450:c.instructions+=6;goto B504450;
case 0x504452:c.instructions+=5;goto B504452;
case 0x504454:c.instructions+=4;goto B504454;
case 0x504457:c.instructions+=3;goto B504457;
case 0x50445b:c.instructions+=2;goto B50445b;
case 0x50445d:c.instructions+=1;goto B50445d;
case 0x50445f:goto L50445f;
case 0x504460:c.instructions+=16;goto B504460;
case 0x504464:c.instructions+=15;goto B504464;
case 0x504466:c.instructions+=14;goto B504466;
case 0x504469:c.instructions+=13;goto B504469;
case 0x50446d:c.instructions+=12;goto B50446d;
case 0x50446f:c.instructions+=11;goto B50446f;
case 0x504472:c.instructions+=10;goto B504472;
case 0x504474:c.instructions+=9;goto B504474;
case 0x504476:c.instructions+=8;goto B504476;
case 0x504478:c.instructions+=7;goto B504478;
case 0x50447c:c.instructions+=6;goto B50447c;
case 0x50447f:c.instructions+=5;goto B50447f;
case 0x504482:c.instructions+=4;goto B504482;
case 0x504483:c.instructions+=3;goto B504483;
case 0x504485:c.instructions+=2;goto B504485;
case 0x504486:c.instructions+=1;goto B504486;
case 0x504490:goto L504490;
case 0x504494:c.instructions+=5;goto B504494;
case 0x504495:c.instructions+=4;goto B504495;
case 0x504498:c.instructions+=3;goto B504498;
case 0x50449b:c.instructions+=2;goto B50449b;
case 0x50449d:c.instructions+=1;goto B50449d;
case 0x50449f:goto L50449f;
case 0x5044a1:c.instructions+=2;goto B5044a1;
case 0x5044a2:c.instructions+=1;goto B5044a2;
case 0x5044a5:goto L5044a5;
case 0x5044a8:c.instructions+=5;goto B5044a8;
case 0x5044aa:c.instructions+=4;goto B5044aa;
case 0x5044ad:c.instructions+=3;goto B5044ad;
case 0x5044ae:c.instructions+=2;goto B5044ae;
case 0x5044b3:c.instructions+=1;goto B5044b3;
case 0x5044b6:goto L5044b6;
case 0x5044b9:c.instructions+=4;goto B5044b9;
case 0x5044bc:c.instructions+=3;goto B5044bc;
case 0x5044bd:c.instructions+=2;goto B5044bd;
case 0x5044c3:c.instructions+=1;goto B5044c3;
case 0x5044c5:goto L5044c5;
case 0x5044c7:goto L5044c7;
case 0x5044cd:c.instructions+=1;goto B5044cd;
case 0x5044cf:goto L5044cf;
case 0x5044d5:c.instructions+=1;goto B5044d5;
case 0x5044d7:goto L5044d7;
case 0x5044d8:c.instructions+=1;goto B5044d8;
case 0x5044da:goto L5044da;
case 0x5044dd:c.instructions+=1;goto B5044dd;
case 0x5044df:goto L5044df;
case 0x5044e1:c.instructions+=1;goto B5044e1;
case 0x5044e3:goto L5044e3;
case 0x5044e9:c.instructions+=1;goto B5044e9;
case 0x5044eb:goto L5044eb;
case 0x5044ec:goto L5044ec;
case 0x5044ee:c.instructions+=1;goto B5044ee;
case 0x5044f0:goto L5044f0;
case 0x5044f2:c.instructions+=1;goto B5044f2;
case 0x5044f4:goto L5044f4;
case 0x5044f5:c.instructions+=2;goto B5044f5;
case 0x5044f6:c.instructions+=1;goto B5044f6;
case 0x504500:goto L504500;
case 0x504504:c.instructions+=9;goto B504504;
case 0x504506:c.instructions+=8;goto B504506;
case 0x50450a:c.instructions+=7;goto B50450a;
case 0x50450c:c.instructions+=6;goto B50450c;
case 0x504512:c.instructions+=5;goto B504512;
case 0x504514:c.instructions+=4;goto B504514;
case 0x504516:c.instructions+=3;goto B504516;
case 0x504518:c.instructions+=2;goto B504518;
case 0x50451b:c.instructions+=1;goto B50451b;
case 0x50451d:goto L50451d;
case 0x504523:c.instructions+=7;goto B504523;
case 0x504525:c.instructions+=6;goto B504525;
case 0x504527:c.instructions+=5;goto B504527;
case 0x504529:c.instructions+=4;goto B504529;
case 0x50452b:c.instructions+=3;goto B50452b;
case 0x50452e:c.instructions+=2;goto B50452e;
case 0x504530:c.instructions+=1;goto B504530;
case 0x504532:goto L504532;
case 0x504535:c.instructions+=7;goto B504535;
case 0x504538:c.instructions+=6;goto B504538;
case 0x50453e:c.instructions+=5;goto B50453e;
case 0x504540:c.instructions+=4;goto B504540;
case 0x504542:c.instructions+=3;goto B504542;
case 0x504544:c.instructions+=2;goto B504544;
case 0x504547:c.instructions+=1;goto B504547;
case 0x504549:goto L504549;
case 0x50454f:c.instructions+=7;goto B50454f;
case 0x504551:c.instructions+=6;goto B504551;
case 0x504553:c.instructions+=5;goto B504553;
case 0x504555:c.instructions+=4;goto B504555;
case 0x504557:c.instructions+=3;goto B504557;
case 0x50455a:c.instructions+=2;goto B50455a;
case 0x50455c:c.instructions+=1;goto B50455c;
case 0x50455e:goto L50455e;
case 0x504561:c.instructions+=7;goto B504561;
case 0x504564:c.instructions+=6;goto B504564;
case 0x50456a:c.instructions+=5;goto B50456a;
case 0x50456c:c.instructions+=4;goto B50456c;
case 0x50456e:c.instructions+=3;goto B50456e;
case 0x504570:c.instructions+=2;goto B504570;
case 0x504573:c.instructions+=1;goto B504573;
case 0x504575:goto L504575;
case 0x50457b:c.instructions+=7;goto B50457b;
case 0x50457d:c.instructions+=6;goto B50457d;
case 0x50457f:c.instructions+=5;goto B50457f;
case 0x504581:c.instructions+=4;goto B504581;
case 0x504583:c.instructions+=3;goto B504583;
case 0x504586:c.instructions+=2;goto B504586;
case 0x504588:c.instructions+=1;goto B504588;
case 0x50458a:goto L50458a;
case 0x50458f:c.instructions+=1;goto B50458f;
case 0x504590:goto L504590;
case 0x504592:c.instructions+=1;goto B504592;
case 0x504594:goto L504594;
case 0x504596:c.instructions+=1;goto B504596;
case 0x504597:goto L504597;
case 0x504599:c.instructions+=1;goto B504599;
case 0x50459b:goto L50459b;
case 0x50459d:c.instructions+=1;goto B50459d;
case 0x5045a0:goto L5045a0;
case 0x5045a4:c.instructions+=9;goto B5045a4;
case 0x5045a6:c.instructions+=8;goto B5045a6;
case 0x5045aa:c.instructions+=7;goto B5045aa;
case 0x5045ac:c.instructions+=6;goto B5045ac;
case 0x5045b2:c.instructions+=5;goto B5045b2;
case 0x5045b4:c.instructions+=4;goto B5045b4;
case 0x5045b6:c.instructions+=3;goto B5045b6;
case 0x5045b8:c.instructions+=2;goto B5045b8;
case 0x5045bb:c.instructions+=1;goto B5045bb;
case 0x5045bd:goto L5045bd;
case 0x5045c3:c.instructions+=7;goto B5045c3;
case 0x5045c5:c.instructions+=6;goto B5045c5;
case 0x5045c7:c.instructions+=5;goto B5045c7;
case 0x5045c9:c.instructions+=4;goto B5045c9;
case 0x5045cb:c.instructions+=3;goto B5045cb;
case 0x5045ce:c.instructions+=2;goto B5045ce;
case 0x5045d0:c.instructions+=1;goto B5045d0;
case 0x5045d2:goto L5045d2;
case 0x5045d5:c.instructions+=7;goto B5045d5;
case 0x5045d8:c.instructions+=6;goto B5045d8;
case 0x5045de:c.instructions+=5;goto B5045de;
case 0x5045e0:c.instructions+=4;goto B5045e0;
case 0x5045e2:c.instructions+=3;goto B5045e2;
case 0x5045e4:c.instructions+=2;goto B5045e4;
case 0x5045e7:c.instructions+=1;goto B5045e7;
case 0x5045e9:goto L5045e9;
case 0x5045ef:c.instructions+=7;goto B5045ef;
case 0x5045f1:c.instructions+=6;goto B5045f1;
case 0x5045f3:c.instructions+=5;goto B5045f3;
case 0x5045f5:c.instructions+=4;goto B5045f5;
case 0x5045f7:c.instructions+=3;goto B5045f7;
case 0x5045fa:c.instructions+=2;goto B5045fa;
case 0x5045fc:c.instructions+=1;goto B5045fc;
case 0x5045fe:goto L5045fe;
case 0x504601:c.instructions+=7;goto B504601;
case 0x504604:c.instructions+=6;goto B504604;
case 0x50460a:c.instructions+=5;goto B50460a;
case 0x50460c:c.instructions+=4;goto B50460c;
case 0x50460e:c.instructions+=3;goto B50460e;
case 0x504610:c.instructions+=2;goto B504610;
case 0x504613:c.instructions+=1;goto B504613;
case 0x504615:goto L504615;
case 0x50461b:c.instructions+=7;goto B50461b;
case 0x50461d:c.instructions+=6;goto B50461d;
case 0x50461f:c.instructions+=5;goto B50461f;
case 0x504621:c.instructions+=4;goto B504621;
case 0x504623:c.instructions+=3;goto B504623;
case 0x504626:c.instructions+=2;goto B504626;
case 0x504628:c.instructions+=1;goto B504628;
case 0x50462a:goto L50462a;
case 0x50462f:c.instructions+=1;goto B50462f;
case 0x504630:goto L504630;
case 0x504632:c.instructions+=1;goto B504632;
case 0x504634:goto L504634;
case 0x504636:c.instructions+=1;goto B504636;
case 0x504637:goto L504637;
case 0x504639:c.instructions+=1;goto B504639;
case 0x50463b:goto L50463b;
case 0x50463d:c.instructions+=1;goto B50463d;
case 0x504640:goto L504640;
case 0x504644:c.instructions+=8;goto B504644;
case 0x504648:c.instructions+=7;goto B504648;
case 0x50464b:c.instructions+=6;goto B50464b;
case 0x50464c:c.instructions+=5;goto B50464c;
case 0x50464f:c.instructions+=4;goto B50464f;
case 0x504650:c.instructions+=3;goto B504650;
case 0x504653:c.instructions+=2;goto B504653;
case 0x504655:c.instructions+=1;goto B504655;
case 0x504657:goto L504657;
case 0x504658:c.instructions+=2;goto B504658;
case 0x50465a:c.instructions+=1;goto B50465a;
case 0x50465c:goto L50465c;
case 0x50465f:c.instructions+=4;goto B50465f;
case 0x504662:c.instructions+=3;goto B504662;
case 0x504665:c.instructions+=2;goto B504665;
case 0x504667:c.instructions+=1;goto B504667;
case 0x504669:goto L504669;
case 0x50466a:c.instructions+=2;goto B50466a;
case 0x50466c:c.instructions+=1;goto B50466c;
case 0x50466e:goto L50466e;
case 0x504670:c.instructions+=4;goto B504670;
case 0x504672:c.instructions+=3;goto B504672;
case 0x504675:c.instructions+=2;goto B504675;
case 0x504677:c.instructions+=1;goto B504677;
case 0x504679:goto L504679;
case 0x50467a:c.instructions+=2;goto B50467a;
case 0x50467c:c.instructions+=1;goto B50467c;
case 0x50467e:goto L50467e;
case 0x50467f:c.instructions+=3;goto B50467f;
case 0x504681:c.instructions+=2;goto B504681;
case 0x504682:c.instructions+=1;goto B504682;
case 0x504683:goto L504683;
case 0x504686:c.instructions+=4;goto B504686;
case 0x504689:c.instructions+=3;goto B504689;
case 0x50468c:c.instructions+=2;goto B50468c;
case 0x50468e:c.instructions+=1;goto B50468e;
case 0x504690:goto L504690;
case 0x504691:c.instructions+=2;goto B504691;
case 0x504693:c.instructions+=1;goto B504693;
case 0x504695:goto L504695;
case 0x504696:c.instructions+=3;goto B504696;
case 0x50469b:c.instructions+=2;goto B50469b;
case 0x50469c:c.instructions+=1;goto B50469c;
case 0x50469d:goto L50469d;
case 0x50469e:c.instructions+=3;goto B50469e;
case 0x5046a0:c.instructions+=2;goto B5046a0;
case 0x5046a1:c.instructions+=1;goto B5046a1;
case 0x5046b0:goto L5046b0;
case 0x5046b3:c.instructions+=2;goto B5046b3;
case 0x5046b5:c.instructions+=1;goto B5046b5;
case 0x5046b7:goto L5046b7;
case 0x5046bb:c.instructions+=1;goto B5046bb;
case 0x5046c0:goto L5046c0;
case 0x5046c3:c.instructions+=1;goto B5046c3;
case 0x5046c5:goto L5046c5;
case 0x5046c8:c.instructions+=2;goto B5046c8;
case 0x5046ca:c.instructions+=1;goto B5046ca;
case 0x5046cc:goto L5046cc;
case 0x5046d0:goto L5046d0;
case 0x5046d3:c.instructions+=2;goto B5046d3;
case 0x5046d5:c.instructions+=1;goto B5046d5;
case 0x5046d7:goto L5046d7;
case 0x5046db:c.instructions+=1;goto B5046db;
case 0x5046e0:goto L5046e0;
case 0x5046e3:c.instructions+=1;goto B5046e3;
case 0x5046e5:goto L5046e5;
case 0x5046e8:c.instructions+=2;goto B5046e8;
case 0x5046ea:c.instructions+=1;goto B5046ea;
case 0x5046ec:goto L5046ec;
case 0x5046f0:goto L5046f0;
case 0x5046f4:c.instructions+=2;goto B5046f4;
case 0x5046f7:c.instructions+=1;goto B5046f7;
case 0x5046f9:goto L5046f9;
case 0x504700:goto L504700;
case 0x504705:c.instructions+=1;goto B504705;
case 0x504708:goto L504708;
case 0x50470d:c.instructions+=1;goto B50470d;
case 0x504710:goto L504710;
case 0x504715:c.instructions+=1;goto B504715;
case 0x504718:goto L504718;
case 0x50471d:c.instructions+=1;goto B50471d;
case 0x504720:goto L504720;
case 0x504725:c.instructions+=1;goto B504725;
case 0x504728:goto L504728;
case 0x50472d:c.instructions+=1;goto B50472d;
case 0x504730:goto L504730;
case 0x504735:c.instructions+=1;goto B504735;
case 0x504738:goto L504738;
case 0x50473d:c.instructions+=1;goto B50473d;
case 0x504740:goto L504740;
case 0x504745:c.instructions+=1;goto B504745;
case 0x504748:goto L504748;
case 0x50474d:c.instructions+=1;goto B50474d;
case 0x504750:goto L504750;
case 0x504752:c.instructions+=1;goto B504752;
case 0x504790:goto L504790;
case 0x504794:c.instructions+=2;goto B504794;
case 0x504796:c.instructions+=1;goto B504796;
case 0x504798:goto L504798;
case 0x504799:c.instructions+=3;goto B504799;
case 0x50479d:c.instructions+=2;goto B50479d;
case 0x50479f:c.instructions+=1;goto B50479f;
case 0x5047a0:goto L5047a0;
case 0x5047a4:c.instructions+=2;goto B5047a4;
case 0x5047a7:c.instructions+=1;goto B5047a7;
case 0x5047a9:goto L5047a9;
case 0x5047ab:c.instructions+=5;goto B5047ab;
case 0x5047ac:c.instructions+=4;goto B5047ac;
case 0x5047ae:c.instructions+=3;goto B5047ae;
case 0x5047b0:c.instructions+=2;goto B5047b0;
case 0x5047b2:c.instructions+=1;goto B5047b2;
case 0x5047b3:goto L5047b3;
case 0x5047b5:c.instructions+=1;goto B5047b5;
case 0x5047c0:goto L5047c0;
case 0x5047c1:c.instructions+=2;goto B5047c1;
case 0x5047c3:c.instructions+=1;goto B5047c3;
case 0x5047c8:goto L5047c8;
case 0x5047cd:c.instructions+=1;goto B5047cd;
case 0x5047cf:goto L5047cf;
case 0x5047d0:c.instructions+=1;goto B5047d0;
case 0x5047d5:goto L5047d5;
case 0x5047d8:goto L5047d8;
case 0x5047da:c.instructions+=2;goto B5047da;
case 0x5047db:c.instructions+=1;goto B5047db;
case 0x5047e0:goto L5047e0;
case 0x5047e4:c.instructions+=5;goto B5047e4;
case 0x5047e7:c.instructions+=4;goto B5047e7;
case 0x5047ea:c.instructions+=3;goto B5047ea;
case 0x5047ed:c.instructions+=2;goto B5047ed;
case 0x5047f0:c.instructions+=1;goto B5047f0;
case 0x504800:goto L504800;
case 0x504803:c.instructions+=2;goto B504803;
case 0x504805:c.instructions+=1;goto B504805;
case 0x504807:goto L504807;
case 0x50480b:c.instructions+=1;goto B50480b;
case 0x504810:goto L504810;
case 0x504813:c.instructions+=1;goto B504813;
case 0x504815:goto L504815;
case 0x504818:c.instructions+=2;goto B504818;
case 0x50481a:c.instructions+=1;goto B50481a;
case 0x50481c:goto L50481c;
case 0x504820:goto L504820;
case 0x504824:c.instructions+=2;goto B504824;
case 0x50482a:c.instructions+=1;goto B50482a;
case 0x504830:goto L504830;
case 0x504834:c.instructions+=7;goto B504834;
case 0x504835:c.instructions+=6;goto B504835;
case 0x504836:c.instructions+=5;goto B504836;
case 0x504839:c.instructions+=4;goto B504839;
case 0x50483b:c.instructions+=3;goto B50483b;
case 0x50483c:c.instructions+=2;goto B50483c;
case 0x50483e:c.instructions+=1;goto B50483e;
case 0x504840:goto L504840;
case 0x504844:goto L504844;
case 0x504846:c.instructions+=3;goto B504846;
case 0x504847:c.instructions+=2;goto B504847;
case 0x504849:c.instructions+=1;goto B504849;
case 0x50484c:goto L50484c;
case 0x50484e:c.instructions+=1;goto B50484e;
case 0x504850:goto L504850;
case 0x504854:c.instructions+=1;goto B504854;
case 0x504856:goto L504856;
case 0x504857:c.instructions+=3;goto B504857;
case 0x504858:c.instructions+=2;goto B504858;
case 0x50485a:c.instructions+=1;goto B50485a;
case 0x50485f:goto L50485f;
case 0x504861:c.instructions+=1;goto B504861;
case 0x504863:goto L504863;
case 0x504866:c.instructions+=2;goto B504866;
case 0x504868:c.instructions+=1;goto B504868;
case 0x50486a:goto L50486a;
case 0x50486b:c.instructions+=4;goto B50486b;
case 0x50486c:c.instructions+=3;goto B50486c;
case 0x50486e:c.instructions+=2;goto B50486e;
case 0x50486f:c.instructions+=1;goto B50486f;
case 0x504872:goto L504872;
case 0x504873:c.instructions+=4;goto B504873;
case 0x504874:c.instructions+=3;goto B504874;
case 0x504876:c.instructions+=2;goto B504876;
case 0x504877:c.instructions+=1;goto B504877;
case 0x504880:goto L504880;
case 0x504881:c.instructions+=6;goto B504881;
case 0x504882:c.instructions+=5;goto B504882;
case 0x504884:c.instructions+=4;goto B504884;
case 0x504887:c.instructions+=3;goto B504887;
case 0x504889:c.instructions+=2;goto B504889;
case 0x50488a:c.instructions+=1;goto B50488a;
case 0x50488c:goto L50488c;
case 0x504890:goto L504890;
case 0x504892:c.instructions+=3;goto B504892;
case 0x504893:c.instructions+=2;goto B504893;
case 0x504895:c.instructions+=1;goto B504895;
case 0x504898:goto L504898;
case 0x50489a:c.instructions+=1;goto B50489a;
case 0x50489c:goto L50489c;
case 0x5048a0:c.instructions+=1;goto B5048a0;
case 0x5048a2:goto L5048a2;
case 0x5048a3:c.instructions+=3;goto B5048a3;
case 0x5048a4:c.instructions+=2;goto B5048a4;
case 0x5048a6:c.instructions+=1;goto B5048a6;
case 0x5048ab:goto L5048ab;
case 0x5048ad:c.instructions+=1;goto B5048ad;
case 0x5048af:goto L5048af;
case 0x5048b2:c.instructions+=2;goto B5048b2;
case 0x5048b4:c.instructions+=1;goto B5048b4;
case 0x5048b6:goto L5048b6;
case 0x5048b7:c.instructions+=4;goto B5048b7;
case 0x5048b8:c.instructions+=3;goto B5048b8;
case 0x5048ba:c.instructions+=2;goto B5048ba;
case 0x5048bb:c.instructions+=1;goto B5048bb;
case 0x5048be:goto L5048be;
case 0x5048bf:c.instructions+=4;goto B5048bf;
case 0x5048c0:c.instructions+=3;goto B5048c0;
case 0x5048c2:c.instructions+=2;goto B5048c2;
case 0x5048c3:c.instructions+=1;goto B5048c3;
case 0x5048d0:goto L5048d0;
case 0x5048d4:c.instructions+=3;goto B5048d4;
case 0x5048d7:c.instructions+=2;goto B5048d7;
case 0x5048da:c.instructions+=1;goto B5048da;
case 0x5048dc:goto L5048dc;
case 0x5048df:c.instructions+=2;goto B5048df;
case 0x5048e1:c.instructions+=1;goto B5048e1;
case 0x5048e4:goto L5048e4;
case 0x5048e6:c.instructions+=1;goto B5048e6;
case 0x5048f0:goto L5048f0;
case 0x5048f4:c.instructions+=3;goto B5048f4;
case 0x5048f7:c.instructions+=2;goto B5048f7;
case 0x5048fa:c.instructions+=1;goto B5048fa;
case 0x5048fc:goto L5048fc;
case 0x5048ff:c.instructions+=2;goto B5048ff;
case 0x504901:c.instructions+=1;goto B504901;
case 0x504904:goto L504904;
case 0x504906:c.instructions+=1;goto B504906;
case 0x504910:goto L504910;
case 0x504911:c.instructions+=7;goto B504911;
case 0x504915:c.instructions+=6;goto B504915;
case 0x504916:c.instructions+=5;goto B504916;
case 0x504919:c.instructions+=4;goto B504919;
case 0x50491b:c.instructions+=3;goto B50491b;
case 0x50491c:c.instructions+=2;goto B50491c;
case 0x50491e:c.instructions+=1;goto B50491e;
case 0x504920:goto L504920;
case 0x504921:c.instructions+=1;goto B504921;
case 0x504925:goto L504925;
case 0x504926:c.instructions+=3;goto B504926;
case 0x504927:c.instructions+=2;goto B504927;
case 0x504929:c.instructions+=1;goto B504929;
case 0x50492e:goto L50492e;
case 0x504931:c.instructions+=7;goto B504931;
case 0x504934:c.instructions+=6;goto B504934;
case 0x504939:c.instructions+=5;goto B504939;
case 0x50493b:c.instructions+=4;goto B50493b;
case 0x50493e:c.instructions+=3;goto B50493e;
case 0x504941:c.instructions+=2;goto B504941;
case 0x504943:c.instructions+=1;goto B504943;
case 0x504945:goto L504945;
case 0x504946:goto L504946;
case 0x504947:c.instructions+=3;goto B504947;
case 0x504948:c.instructions+=2;goto B504948;
case 0x504949:c.instructions+=1;goto B504949;
case 0x504950:goto L504950;
case 0x504956:c.instructions+=1;goto B504956;
case 0x504960:goto L504960;
case 0x504966:c.instructions+=5;goto B504966;
case 0x504967:c.instructions+=4;goto B504967;
case 0x504969:c.instructions+=3;goto B504969;
case 0x50496b:c.instructions+=2;goto B50496b;
case 0x50496c:c.instructions+=1;goto B50496c;
case 0x50496e:goto L50496e;
case 0x504974:c.instructions+=3;goto B504974;
case 0x504978:c.instructions+=2;goto B504978;
case 0x50497a:c.instructions+=1;goto B50497a;
case 0x504980:goto L504980;
case 0x504982:c.instructions+=1;goto B504982;
case 0x504984:goto L504984;
case 0x504985:c.instructions+=3;goto B504985;
case 0x504988:c.instructions+=2;goto B504988;
case 0x50498a:c.instructions+=1;goto B50498a;
case 0x50498c:goto L50498c;
case 0x50498d:c.instructions+=3;goto B50498d;
case 0x50498e:c.instructions+=2;goto B50498e;
case 0x504990:c.instructions+=1;goto B504990;
case 0x504993:goto L504993;
case 0x504996:c.instructions+=4;goto B504996;
case 0x504997:c.instructions+=3;goto B504997;
case 0x50499a:c.instructions+=2;goto B50499a;
case 0x50499b:c.instructions+=1;goto B50499b;
case 0x5049a0:goto L5049a0;
case 0x5049a3:c.instructions+=6;goto B5049a3;
case 0x5049a6:c.instructions+=5;goto B5049a6;
case 0x5049aa:c.instructions+=4;goto B5049aa;
case 0x5049ad:c.instructions+=3;goto B5049ad;
case 0x5049ae:c.instructions+=2;goto B5049ae;
case 0x5049b4:c.instructions+=1;goto B5049b4;
case 0x5049b6:goto L5049b6;
case 0x5049b8:c.instructions+=1;goto B5049b8;
case 0x5049ba:goto L5049ba;
case 0x5049bd:c.instructions+=3;goto B5049bd;
case 0x5049c1:c.instructions+=2;goto B5049c1;
case 0x5049c7:c.instructions+=1;goto B5049c7;
case 0x5049c9:goto L5049c9;
case 0x5049cc:c.instructions+=7;goto B5049cc;
case 0x5049cf:c.instructions+=6;goto B5049cf;
case 0x5049d2:c.instructions+=5;goto B5049d2;
case 0x5049d5:c.instructions+=4;goto B5049d5;
case 0x5049d8:c.instructions+=3;goto B5049d8;
case 0x5049da:c.instructions+=2;goto B5049da;
case 0x5049db:c.instructions+=1;goto B5049db;
case 0x5049dc:goto L5049dc;
case 0x5049e2:c.instructions+=1;goto B5049e2;
case 0x5049e4:goto L5049e4;
case 0x5049e7:c.instructions+=4;goto B5049e7;
case 0x5049ea:c.instructions+=3;goto B5049ea;
case 0x5049ed:c.instructions+=2;goto B5049ed;
case 0x5049f0:c.instructions+=1;goto B5049f0;
case 0x5049f3:goto L5049f3;
case 0x5049f5:c.instructions+=2;goto B5049f5;
case 0x5049f6:c.instructions+=1;goto B5049f6;
case 0x504a00:goto L504a00;
case 0x504a04:c.instructions+=8;goto B504a04;
case 0x504a07:c.instructions+=7;goto B504a07;
case 0x504a08:c.instructions+=6;goto B504a08;
case 0x504a09:c.instructions+=5;goto B504a09;
case 0x504a10:c.instructions+=4;goto B504a10;
case 0x504a12:c.instructions+=3;goto B504a12;
case 0x504a14:c.instructions+=2;goto B504a14;
case 0x504a15:c.instructions+=1;goto B504a15;
case 0x504a17:goto L504a17;
case 0x504a1a:c.instructions+=2;goto B504a1a;
case 0x504a1d:c.instructions+=1;goto B504a1d;
case 0x504a20:goto L504a20;
case 0x504a24:c.instructions+=2;goto B504a24;
case 0x504a26:c.instructions+=1;goto B504a26;
case 0x504a28:goto L504a28;
case 0x504a29:c.instructions+=3;goto B504a29;
case 0x504a2c:c.instructions+=2;goto B504a2c;
case 0x504a2e:c.instructions+=1;goto B504a2e;
case 0x504a30:goto L504a30;
case 0x504a31:c.instructions+=4;goto B504a31;
case 0x504a32:c.instructions+=3;goto B504a32;
case 0x504a34:c.instructions+=2;goto B504a34;
case 0x504a35:c.instructions+=1;goto B504a35;
case 0x504a38:goto L504a38;
case 0x504a3b:c.instructions+=5;goto B504a3b;
case 0x504a3d:c.instructions+=4;goto B504a3d;
case 0x504a3e:c.instructions+=3;goto B504a3e;
case 0x504a3f:c.instructions+=2;goto B504a3f;
case 0x504a40:c.instructions+=1;goto B504a40;
case 0x504a50:goto L504a50;
case 0x504a53:c.instructions+=72;goto B504a53;
case 0x504a55:c.instructions+=71;goto B504a55;
case 0x504a59:c.instructions+=70;goto B504a59;
case 0x504a5b:c.instructions+=69;goto B504a5b;
case 0x504a5e:c.instructions+=68;goto B504a5e;
case 0x504a60:c.instructions+=67;goto B504a60;
case 0x504a63:c.instructions+=66;goto B504a63;
case 0x504a65:c.instructions+=65;goto B504a65;
case 0x504a69:c.instructions+=64;goto B504a69;
case 0x504a6b:c.instructions+=63;goto B504a6b;
case 0x504a6d:c.instructions+=62;goto B504a6d;
case 0x504a71:c.instructions+=61;goto B504a71;
case 0x504a73:c.instructions+=60;goto B504a73;
case 0x504a75:c.instructions+=59;goto B504a75;
case 0x504a79:c.instructions+=58;goto B504a79;
case 0x504a7d:c.instructions+=57;goto B504a7d;
case 0x504a7f:c.instructions+=56;goto B504a7f;
case 0x504a83:c.instructions+=55;goto B504a83;
case 0x504a85:c.instructions+=54;goto B504a85;
case 0x504a88:c.instructions+=53;goto B504a88;
case 0x504a8c:c.instructions+=52;goto B504a8c;
case 0x504a90:c.instructions+=51;goto B504a90;
case 0x504a93:c.instructions+=50;goto B504a93;
case 0x504a97:c.instructions+=49;goto B504a97;
case 0x504a9b:c.instructions+=48;goto B504a9b;
case 0x504a9e:c.instructions+=47;goto B504a9e;
case 0x504aa2:c.instructions+=46;goto B504aa2;
case 0x504aa4:c.instructions+=45;goto B504aa4;
case 0x504aa7:c.instructions+=44;goto B504aa7;
case 0x504aab:c.instructions+=43;goto B504aab;
case 0x504aae:c.instructions+=42;goto B504aae;
case 0x504ab2:c.instructions+=41;goto B504ab2;
case 0x504ab5:c.instructions+=40;goto B504ab5;
case 0x504ab7:c.instructions+=39;goto B504ab7;
case 0x504abb:c.instructions+=38;goto B504abb;
case 0x504abe:c.instructions+=37;goto B504abe;
case 0x504ac2:c.instructions+=36;goto B504ac2;
case 0x504ac5:c.instructions+=35;goto B504ac5;
case 0x504ac8:c.instructions+=34;goto B504ac8;
case 0x504acb:c.instructions+=33;goto B504acb;
case 0x504ad1:c.instructions+=32;goto B504ad1;
case 0x504ad4:c.instructions+=31;goto B504ad4;
case 0x504ad7:c.instructions+=30;goto B504ad7;
case 0x504ad9:c.instructions+=29;goto B504ad9;
case 0x504ae0:c.instructions+=28;goto B504ae0;
case 0x504ae4:c.instructions+=27;goto B504ae4;
case 0x504ae6:c.instructions+=26;goto B504ae6;
case 0x504ae9:c.instructions+=25;goto B504ae9;
case 0x504aeb:c.instructions+=24;goto B504aeb;
case 0x504aef:c.instructions+=23;goto B504aef;
case 0x504af2:c.instructions+=22;goto B504af2;
case 0x504af6:c.instructions+=21;goto B504af6;
case 0x504af9:c.instructions+=20;goto B504af9;
case 0x504afd:c.instructions+=19;goto B504afd;
case 0x504b01:c.instructions+=18;goto B504b01;
case 0x504b07:c.instructions+=17;goto B504b07;
case 0x504b0a:c.instructions+=16;goto B504b0a;
case 0x504b0e:c.instructions+=15;goto B504b0e;
case 0x504b12:c.instructions+=14;goto B504b12;
case 0x504b15:c.instructions+=13;goto B504b15;
case 0x504b19:c.instructions+=12;goto B504b19;
case 0x504b1b:c.instructions+=11;goto B504b1b;
case 0x504b1e:c.instructions+=10;goto B504b1e;
case 0x504b20:c.instructions+=9;goto B504b20;
case 0x504b24:c.instructions+=8;goto B504b24;
case 0x504b28:c.instructions+=7;goto B504b28;
case 0x504b2b:c.instructions+=6;goto B504b2b;
case 0x504b2f:c.instructions+=5;goto B504b2f;
case 0x504b33:c.instructions+=4;goto B504b33;
case 0x504b39:c.instructions+=3;goto B504b39;
case 0x504b3c:c.instructions+=2;goto B504b3c;
case 0x504b3f:c.instructions+=1;goto B504b3f;
case 0x504b50:goto L504b50;
case 0x504b54:c.instructions+=34;goto B504b54;
case 0x504b58:c.instructions+=33;goto B504b58;
case 0x504b5b:c.instructions+=32;goto B504b5b;
case 0x504b5e:c.instructions+=31;goto B504b5e;
case 0x504b61:c.instructions+=30;goto B504b61;
case 0x504b63:c.instructions+=29;goto B504b63;
case 0x504b65:c.instructions+=28;goto B504b65;
case 0x504b68:c.instructions+=27;goto B504b68;
case 0x504b6b:c.instructions+=26;goto B504b6b;
case 0x504b6d:c.instructions+=25;goto B504b6d;
case 0x504b70:c.instructions+=24;goto B504b70;
case 0x504b73:c.instructions+=23;goto B504b73;
case 0x504b76:c.instructions+=22;goto B504b76;
case 0x504b79:c.instructions+=21;goto B504b79;
case 0x504b7b:c.instructions+=20;goto B504b7b;
case 0x504b7d:c.instructions+=19;goto B504b7d;
case 0x504b80:c.instructions+=18;goto B504b80;
case 0x504b83:c.instructions+=17;goto B504b83;
case 0x504b85:c.instructions+=16;goto B504b85;
case 0x504b88:c.instructions+=15;goto B504b88;
case 0x504b8b:c.instructions+=14;goto B504b8b;
case 0x504b8e:c.instructions+=13;goto B504b8e;
case 0x504b91:c.instructions+=12;goto B504b91;
case 0x504b94:c.instructions+=11;goto B504b94;
case 0x504b96:c.instructions+=10;goto B504b96;
case 0x504b98:c.instructions+=9;goto B504b98;
case 0x504b9a:c.instructions+=8;goto B504b9a;
case 0x504b9c:c.instructions+=7;goto B504b9c;
case 0x504b9f:c.instructions+=6;goto B504b9f;
case 0x504ba3:c.instructions+=5;goto B504ba3;
case 0x504ba5:c.instructions+=4;goto B504ba5;
case 0x504ba7:c.instructions+=3;goto B504ba7;
case 0x504baa:c.instructions+=2;goto B504baa;
case 0x504bad:c.instructions+=1;goto B504bad;
case 0x504bb0:goto L504bb0;
case 0x504bb4:c.instructions+=5;goto B504bb4;
case 0x504bb7:c.instructions+=4;goto B504bb7;
case 0x504bb9:c.instructions+=3;goto B504bb9;
case 0x504bba:c.instructions+=2;goto B504bba;
case 0x504bbe:c.instructions+=1;goto B504bbe;
case 0x504bc0:goto L504bc0;
case 0x504bc2:c.instructions+=3;goto B504bc2;
case 0x504bc6:c.instructions+=2;goto B504bc6;
case 0x504bc9:c.instructions+=1;goto B504bc9;
case 0x504bcb:goto L504bcb;
case 0x504bcd:c.instructions+=5;goto B504bcd;
case 0x504bce:c.instructions+=4;goto B504bce;
case 0x504bd2:c.instructions+=3;goto B504bd2;
case 0x504bd3:c.instructions+=2;goto B504bd3;
case 0x504bd4:c.instructions+=1;goto B504bd4;
case 0x504bd7:goto L504bd7;
case 0x504bd9:c.instructions+=2;goto B504bd9;
case 0x504bda:c.instructions+=1;goto B504bda;
case 0x504bdc:goto L504bdc;
case 0x504bdf:c.instructions+=9;goto B504bdf;
case 0x504be2:c.instructions+=8;goto B504be2;
case 0x504be3:c.instructions+=7;goto B504be3;
case 0x504be7:c.instructions+=6;goto B504be7;
case 0x504beb:c.instructions+=5;goto B504beb;
case 0x504bec:c.instructions+=4;goto B504bec;
case 0x504bed:c.instructions+=3;goto B504bed;
case 0x504bf5:c.instructions+=2;goto B504bf5;
case 0x504bfd:c.instructions+=1;goto B504bfd;
case 0x504c02:goto L504c02;
case 0x504c06:c.instructions+=8;goto B504c06;
case 0x504c0a:c.instructions+=7;goto B504c0a;
case 0x504c0e:c.instructions+=6;goto B504c0e;
case 0x504c10:c.instructions+=5;goto B504c10;
case 0x504c13:c.instructions+=4;goto B504c13;
case 0x504c16:c.instructions+=3;goto B504c16;
case 0x504c17:c.instructions+=2;goto B504c17;
case 0x504c1a:c.instructions+=1;goto B504c1a;
case 0x504c1d:goto L504c1d;
case 0x504c20:c.instructions+=9;goto B504c20;
case 0x504c23:c.instructions+=8;goto B504c23;
case 0x504c27:c.instructions+=7;goto B504c27;
case 0x504c2a:c.instructions+=6;goto B504c2a;
case 0x504c2c:c.instructions+=5;goto B504c2c;
case 0x504c2f:c.instructions+=4;goto B504c2f;
case 0x504c32:c.instructions+=3;goto B504c32;
case 0x504c33:c.instructions+=2;goto B504c33;
case 0x504c36:c.instructions+=1;goto B504c36;
case 0x504c40:goto L504c40;
case 0x504c43:c.instructions+=6;goto B504c43;
case 0x504c44:c.instructions+=5;goto B504c44;
case 0x504c46:c.instructions+=4;goto B504c46;
case 0x504c47:c.instructions+=3;goto B504c47;
case 0x504c4a:c.instructions+=2;goto B504c4a;
case 0x504c4c:c.instructions+=1;goto B504c4c;
case 0x504c52:goto L504c52;
case 0x504c55:c.instructions+=2;goto B504c55;
case 0x504c57:c.instructions+=1;goto B504c57;
case 0x504c5d:goto L504c5d;
case 0x504c60:c.instructions+=2;goto B504c60;
case 0x504c62:c.instructions+=1;goto B504c62;
case 0x504c68:goto L504c68;
case 0x504c6b:c.instructions+=2;goto B504c6b;
case 0x504c6d:c.instructions+=1;goto B504c6d;
case 0x504c73:goto L504c73;
case 0x504c75:c.instructions+=6;goto B504c75;
case 0x504c76:c.instructions+=5;goto B504c76;
case 0x504c79:c.instructions+=4;goto B504c79;
case 0x504c7a:c.instructions+=3;goto B504c7a;
case 0x504c7d:c.instructions+=2;goto B504c7d;
case 0x504c81:c.instructions+=1;goto B504c81;
case 0x504c83:goto L504c83;
case 0x504c85:goto L504c85;
case 0x504c87:c.instructions+=2;goto B504c87;
case 0x504c8b:c.instructions+=1;goto B504c8b;
case 0x504c8d:goto L504c8d;
case 0x504c91:goto L504c91;
case 0x504c97:c.instructions+=2;goto B504c97;
case 0x504c99:c.instructions+=1;goto B504c99;
case 0x504c9f:goto L504c9f;
case 0x504ca1:c.instructions+=1;goto B504ca1;
case 0x504ca7:goto L504ca7;
case 0x504cab:c.instructions+=1;goto B504cab;
case 0x504cb0:goto L504cb0;
case 0x504cb4:c.instructions+=3;goto B504cb4;
case 0x504cb6:c.instructions+=2;goto B504cb6;
case 0x504cba:c.instructions+=1;goto B504cba;
case 0x504cbc:goto L504cbc;
case 0x504cc0:goto L504cc0;
case 0x504cc6:c.instructions+=5;goto B504cc6;
case 0x504cc7:c.instructions+=4;goto B504cc7;
case 0x504cc8:c.instructions+=3;goto B504cc8;
case 0x504cc9:c.instructions+=2;goto B504cc9;
case 0x504cca:c.instructions+=1;goto B504cca;
case 0x504cd0:goto L504cd0;
case 0x504cd3:c.instructions+=4;goto B504cd3;
case 0x504cd6:c.instructions+=3;goto B504cd6;
case 0x504cd9:c.instructions+=2;goto B504cd9;
case 0x504cdb:c.instructions+=1;goto B504cdb;
case 0x504cdd:goto L504cdd;
case 0x504cde:c.instructions+=3;goto B504cde;
case 0x504ce0:c.instructions+=2;goto B504ce0;
case 0x504ce2:c.instructions+=1;goto B504ce2;
case 0x504ce4:goto L504ce4;
case 0x504ce7:c.instructions+=1;goto B504ce7;
case 0x504ce9:goto L504ce9;
case 0x504ceb:c.instructions+=5;goto B504ceb;
case 0x504cec:c.instructions+=4;goto B504cec;
case 0x504cee:c.instructions+=3;goto B504cee;
case 0x504cf0:c.instructions+=2;goto B504cf0;
case 0x504cf2:c.instructions+=1;goto B504cf2;
case 0x504cf4:goto L504cf4;
case 0x504cf6:goto L504cf6;
case 0x504cf7:c.instructions+=1;goto B504cf7;
case 0x504cf9:goto L504cf9;
case 0x504cfc:c.instructions+=3;goto B504cfc;
case 0x504cff:c.instructions+=2;goto B504cff;
case 0x504d01:c.instructions+=1;goto B504d01;
case 0x504d03:goto L504d03;
case 0x504d04:c.instructions+=3;goto B504d04;
case 0x504d06:c.instructions+=2;goto B504d06;
case 0x504d08:c.instructions+=1;goto B504d08;
case 0x504d0a:goto L504d0a;
case 0x504d0d:c.instructions+=1;goto B504d0d;
case 0x504d0f:goto L504d0f;
case 0x504d11:c.instructions+=5;goto B504d11;
case 0x504d12:c.instructions+=4;goto B504d12;
case 0x504d14:c.instructions+=3;goto B504d14;
case 0x504d16:c.instructions+=2;goto B504d16;
case 0x504d18:c.instructions+=1;goto B504d18;
case 0x504d1a:goto L504d1a;
case 0x504d1c:goto L504d1c;
case 0x504d20:c.instructions+=1;goto B504d20;
case 0x504d22:goto L504d22;
case 0x504d23:c.instructions+=5;goto B504d23;
case 0x504d24:c.instructions+=4;goto B504d24;
case 0x504d25:c.instructions+=3;goto B504d25;
case 0x504d26:c.instructions+=2;goto B504d26;
case 0x504d29:c.instructions+=1;goto B504d29;
case 0x504d2a:goto L504d2a;
case 0x504d2d:c.instructions+=2;goto B504d2d;
case 0x504d2f:c.instructions+=1;goto B504d2f;
case 0x504d31:goto L504d31;
case 0x504d33:c.instructions+=1;goto B504d33;
case 0x504d35:goto L504d35;
case 0x504d39:c.instructions+=1;goto B504d39;
case 0x504d40:goto L504d40;
case 0x504d44:c.instructions+=3;goto B504d44;
case 0x504d46:c.instructions+=2;goto B504d46;
case 0x504d4a:c.instructions+=1;goto B504d4a;
case 0x504d4c:goto L504d4c;
case 0x504d50:goto L504d50;
case 0x504d53:c.instructions+=5;goto B504d53;
case 0x504d55:c.instructions+=4;goto B504d55;
case 0x504d56:c.instructions+=3;goto B504d56;
case 0x504d57:c.instructions+=2;goto B504d57;
case 0x504d58:c.instructions+=1;goto B504d58;
case 0x504d5b:goto L504d5b;
case 0x504d5e:c.instructions+=3;goto B504d5e;
case 0x504d61:c.instructions+=2;goto B504d61;
case 0x504d63:c.instructions+=1;goto B504d63;
case 0x504d65:goto L504d65;
case 0x504d66:c.instructions+=3;goto B504d66;
case 0x504d68:c.instructions+=2;goto B504d68;
case 0x504d6a:c.instructions+=1;goto B504d6a;
case 0x504d6c:goto L504d6c;
case 0x504d6f:c.instructions+=1;goto B504d6f;
case 0x504d71:goto L504d71;
case 0x504d73:c.instructions+=5;goto B504d73;
case 0x504d74:c.instructions+=4;goto B504d74;
case 0x504d76:c.instructions+=3;goto B504d76;
case 0x504d78:c.instructions+=2;goto B504d78;
case 0x504d7a:c.instructions+=1;goto B504d7a;
case 0x504d7c:goto L504d7c;
case 0x504d7e:goto L504d7e;
case 0x504d7f:c.instructions+=1;goto B504d7f;
case 0x504d81:goto L504d81;
case 0x504d84:c.instructions+=3;goto B504d84;
case 0x504d87:c.instructions+=2;goto B504d87;
case 0x504d89:c.instructions+=1;goto B504d89;
case 0x504d8b:goto L504d8b;
case 0x504d8c:c.instructions+=3;goto B504d8c;
case 0x504d8e:c.instructions+=2;goto B504d8e;
case 0x504d90:c.instructions+=1;goto B504d90;
case 0x504d92:goto L504d92;
case 0x504d95:c.instructions+=1;goto B504d95;
case 0x504d97:goto L504d97;
case 0x504d99:c.instructions+=5;goto B504d99;
case 0x504d9a:c.instructions+=4;goto B504d9a;
case 0x504d9c:c.instructions+=3;goto B504d9c;
case 0x504d9e:c.instructions+=2;goto B504d9e;
case 0x504da0:c.instructions+=1;goto B504da0;
case 0x504da2:goto L504da2;
case 0x504da4:goto L504da4;
case 0x504da8:c.instructions+=1;goto B504da8;
case 0x504daa:goto L504daa;
case 0x504dab:c.instructions+=1;goto B504dab;
case 0x504dac:goto L504dac;
case 0x504dad:c.instructions+=3;goto B504dad;
case 0x504dae:c.instructions+=2;goto B504dae;
case 0x504db1:c.instructions+=1;goto B504db1;
case 0x504dc0:goto L504dc0;
case 0x504dc1:c.instructions+=4;goto B504dc1;
case 0x504dc3:c.instructions+=3;goto B504dc3;
case 0x504dc9:c.instructions+=2;goto B504dc9;
case 0x504dcb:c.instructions+=1;goto B504dcb;
case 0x504dcd:goto L504dcd;
case 0x504dce:c.instructions+=1;goto B504dce;
case 0x504dd0:goto L504dd0;
case 0x504dd3:goto L504dd3;
case 0x504dd7:c.instructions+=7;goto B504dd7;
case 0x504ddd:c.instructions+=6;goto B504ddd;
case 0x504de3:c.instructions+=5;goto B504de3;
case 0x504de9:c.instructions+=4;goto B504de9;
case 0x504def:c.instructions+=3;goto B504def;
case 0x504df1:c.instructions+=2;goto B504df1;
case 0x504df4:c.instructions+=1;goto B504df4;
case 0x504df6:goto L504df6;
case 0x504df8:c.instructions+=6;goto B504df8;
case 0x504e02:c.instructions+=5;goto B504e02;
case 0x504e08:c.instructions+=4;goto B504e08;
case 0x504e0a:c.instructions+=3;goto B504e0a;
case 0x504e10:c.instructions+=2;goto B504e10;
case 0x504e11:c.instructions+=1;goto B504e11;
case 0x504e14:goto L504e14;
case 0x504e1a:c.instructions+=3;goto B504e1a;
case 0x504e1c:c.instructions+=2;goto B504e1c;
case 0x504e1f:c.instructions+=1;goto B504e1f;
case 0x504e21:goto L504e21;
case 0x504e27:c.instructions+=3;goto B504e27;
case 0x504e31:c.instructions+=2;goto B504e31;
case 0x504e33:c.instructions+=1;goto B504e33;
case 0x504e39:goto L504e39;
case 0x504e3a:c.instructions+=1;goto B504e3a;
case 0x504e40:goto L504e40;
case 0x504e43:c.instructions+=6;goto B504e43;
case 0x504e45:c.instructions+=5;goto B504e45;
case 0x504e46:c.instructions+=4;goto B504e46;
case 0x504e47:c.instructions+=3;goto B504e47;
case 0x504e48:c.instructions+=2;goto B504e48;
case 0x504e49:c.instructions+=1;goto B504e49;
case 0x504e4b:goto L504e4b;
case 0x504e4f:c.instructions+=5;goto B504e4f;
case 0x504e51:c.instructions+=4;goto B504e51;
case 0x504e55:c.instructions+=3;goto B504e55;
case 0x504e57:c.instructions+=2;goto B504e57;
case 0x504e5b:c.instructions+=1;goto B504e5b;
case 0x504e5d:goto L504e5d;
case 0x504e5e:c.instructions+=3;goto B504e5e;
case 0x504e60:c.instructions+=2;goto B504e60;
case 0x504e62:c.instructions+=1;goto B504e62;
case 0x504e64:goto L504e64;
case 0x504e67:c.instructions+=1;goto B504e67;
case 0x504e69:goto L504e69;
case 0x504e6b:c.instructions+=5;goto B504e6b;
case 0x504e6c:c.instructions+=4;goto B504e6c;
case 0x504e6e:c.instructions+=3;goto B504e6e;
case 0x504e70:c.instructions+=2;goto B504e70;
case 0x504e72:c.instructions+=1;goto B504e72;
case 0x504e74:goto L504e74;
case 0x504e76:goto L504e76;
case 0x504e78:c.instructions+=4;goto B504e78;
case 0x504e7c:c.instructions+=3;goto B504e7c;
case 0x504e7e:c.instructions+=2;goto B504e7e;
case 0x504e80:c.instructions+=1;goto B504e80;
case 0x504e82:goto L504e82;
case 0x504e83:c.instructions+=9;goto B504e83;
case 0x504e85:c.instructions+=8;goto B504e85;
case 0x504e86:c.instructions+=7;goto B504e86;
case 0x504e88:c.instructions+=6;goto B504e88;
case 0x504e8a:c.instructions+=5;goto B504e8a;
case 0x504e8c:c.instructions+=4;goto B504e8c;
case 0x504e8d:c.instructions+=3;goto B504e8d;
case 0x504e8e:c.instructions+=2;goto B504e8e;
case 0x504e8f:c.instructions+=1;goto B504e8f;
case 0x504e92:goto L504e92;
case 0x504e95:c.instructions+=1;goto B504e95;
case 0x504e97:goto L504e97;
case 0x504e99:c.instructions+=10;goto B504e99;
case 0x504e9a:c.instructions+=9;goto B504e9a;
case 0x504e9c:c.instructions+=8;goto B504e9c;
case 0x504e9d:c.instructions+=7;goto B504e9d;
case 0x504e9f:c.instructions+=6;goto B504e9f;
case 0x504ea1:c.instructions+=5;goto B504ea1;
case 0x504ea3:c.instructions+=4;goto B504ea3;
case 0x504ea4:c.instructions+=3;goto B504ea4;
case 0x504ea5:c.instructions+=2;goto B504ea5;
case 0x504ea6:c.instructions+=1;goto B504ea6;
case 0x504ea9:goto L504ea9;
case 0x504eaa:c.instructions+=7;goto B504eaa;
case 0x504eac:c.instructions+=6;goto B504eac;
case 0x504eae:c.instructions+=5;goto B504eae;
case 0x504eaf:c.instructions+=4;goto B504eaf;
case 0x504eb0:c.instructions+=3;goto B504eb0;
case 0x504eb2:c.instructions+=2;goto B504eb2;
case 0x504eb3:c.instructions+=1;goto B504eb3;
case 0x504eb6:goto L504eb6;
case 0x504eb8:c.instructions+=1;goto B504eb8;
case 0x504eba:goto L504eba;
case 0x504ebc:c.instructions+=1;goto B504ebc;
case 0x504ebe:goto L504ebe;
case 0x504ec2:c.instructions+=3;goto B504ec2;
case 0x504ec4:c.instructions+=2;goto B504ec4;
case 0x504ec8:c.instructions+=1;goto B504ec8;
case 0x504eca:goto L504eca;
case 0x504ecb:c.instructions+=11;goto B504ecb;
case 0x504ecf:c.instructions+=10;goto B504ecf;
case 0x504ed3:c.instructions+=9;goto B504ed3;
case 0x504ed4:c.instructions+=8;goto B504ed4;
case 0x504ed6:c.instructions+=7;goto B504ed6;
case 0x504ed8:c.instructions+=6;goto B504ed8;
case 0x504ed9:c.instructions+=5;goto B504ed9;
case 0x504eda:c.instructions+=4;goto B504eda;
case 0x504edc:c.instructions+=3;goto B504edc;
case 0x504ede:c.instructions+=2;goto B504ede;
case 0x504edf:c.instructions+=1;goto B504edf;
case 0x504ee2:goto L504ee2;
case 0x504ee6:c.instructions+=2;goto B504ee6;
case 0x504ee9:c.instructions+=1;goto B504ee9;
case 0x504eeb:goto L504eeb;
case 0x504eed:c.instructions+=12;goto B504eed;
case 0x504eee:c.instructions+=11;goto B504eee;
case 0x504ef0:c.instructions+=10;goto B504ef0;
case 0x504ef4:c.instructions+=9;goto B504ef4;
case 0x504ef5:c.instructions+=8;goto B504ef5;
case 0x504ef7:c.instructions+=7;goto B504ef7;
case 0x504ef9:c.instructions+=6;goto B504ef9;
case 0x504efa:c.instructions+=5;goto B504efa;
case 0x504efb:c.instructions+=4;goto B504efb;
case 0x504efd:c.instructions+=3;goto B504efd;
case 0x504eff:c.instructions+=2;goto B504eff;
case 0x504f00:c.instructions+=1;goto B504f00;
case 0x504f03:goto L504f03;
case 0x504f07:c.instructions+=9;goto B504f07;
case 0x504f09:c.instructions+=8;goto B504f09;
case 0x504f0a:c.instructions+=7;goto B504f0a;
case 0x504f0c:c.instructions+=6;goto B504f0c;
case 0x504f0d:c.instructions+=5;goto B504f0d;
case 0x504f0e:c.instructions+=4;goto B504f0e;
case 0x504f10:c.instructions+=3;goto B504f10;
case 0x504f12:c.instructions+=2;goto B504f12;
case 0x504f13:c.instructions+=1;goto B504f13;
case 0x504f16:goto L504f16;
case 0x504f1a:c.instructions+=6;goto B504f1a;
case 0x504f1c:c.instructions+=5;goto B504f1c;
case 0x504f20:c.instructions+=4;goto B504f20;
case 0x504f24:c.instructions+=3;goto B504f24;
case 0x504f27:c.instructions+=2;goto B504f27;
case 0x504f29:c.instructions+=1;goto B504f29;
case 0x504f2b:goto L504f2b;
case 0x504f2c:c.instructions+=3;goto B504f2c;
case 0x504f2e:c.instructions+=2;goto B504f2e;
case 0x504f30:c.instructions+=1;goto B504f30;
case 0x504f32:goto L504f32;
case 0x504f35:c.instructions+=1;goto B504f35;
case 0x504f37:goto L504f37;
case 0x504f39:c.instructions+=5;goto B504f39;
case 0x504f3a:c.instructions+=4;goto B504f3a;
case 0x504f3c:c.instructions+=3;goto B504f3c;
case 0x504f3e:c.instructions+=2;goto B504f3e;
case 0x504f40:c.instructions+=1;goto B504f40;
case 0x504f42:goto L504f42;
case 0x504f44:goto L504f44;
case 0x504f46:c.instructions+=2;goto B504f46;
case 0x504f48:c.instructions+=1;goto B504f48;
case 0x504f4a:goto L504f4a;
case 0x504f4e:c.instructions+=2;goto B504f4e;
case 0x504f50:c.instructions+=1;goto B504f50;
case 0x504f52:goto L504f52;
case 0x504f53:c.instructions+=6;goto B504f53;
case 0x504f54:c.instructions+=5;goto B504f54;
case 0x504f55:c.instructions+=4;goto B504f55;
case 0x504f57:c.instructions+=3;goto B504f57;
case 0x504f59:c.instructions+=2;goto B504f59;
case 0x504f5a:c.instructions+=1;goto B504f5a;
case 0x504f5d:goto L504f5d;
case 0x504f61:c.instructions+=3;goto B504f61;
case 0x504f64:c.instructions+=2;goto B504f64;
case 0x504f66:c.instructions+=1;goto B504f66;
case 0x504f68:goto L504f68;
case 0x504f6a:c.instructions+=1;goto B504f6a;
case 0x504f6c:goto L504f6c;
case 0x504f6e:c.instructions+=1;goto B504f6e;
case 0x504f70:goto L504f70;
case 0x504f72:c.instructions+=1;goto B504f72;
case 0x504f74:goto L504f74;
case 0x504f78:c.instructions+=1;goto B504f78;
case 0x504f7a:goto L504f7a;
case 0x504f7b:c.instructions+=5;goto B504f7b;
case 0x504f7c:c.instructions+=4;goto B504f7c;
case 0x504f7d:c.instructions+=3;goto B504f7d;
case 0x504f7f:c.instructions+=2;goto B504f7f;
case 0x504f80:c.instructions+=1;goto B504f80;
case 0x504f83:goto L504f83;
case 0x504f85:c.instructions+=3;goto B504f85;
case 0x504f86:c.instructions+=2;goto B504f86;
case 0x504f87:c.instructions+=1;goto B504f87;
case 0x504f8c:goto L504f8c;
case 0x504f8f:c.instructions+=7;goto B504f8f;
case 0x504f90:c.instructions+=6;goto B504f90;
case 0x504f91:c.instructions+=5;goto B504f91;
case 0x504f94:c.instructions+=4;goto B504f94;
case 0x504f95:c.instructions+=3;goto B504f95;
case 0x504f97:c.instructions+=2;goto B504f97;
case 0x504f98:c.instructions+=1;goto B504f98;
case 0x504fa0:goto L504fa0;
case 0x504fa2:c.instructions+=11;goto B504fa2;
case 0x504fa6:c.instructions+=10;goto B504fa6;
case 0x504fa9:c.instructions+=9;goto B504fa9;
case 0x504faa:c.instructions+=8;goto B504faa;
case 0x504fab:c.instructions+=7;goto B504fab;
case 0x504fac:c.instructions+=6;goto B504fac;
case 0x504fb0:c.instructions+=5;goto B504fb0;
case 0x504fb3:c.instructions+=4;goto B504fb3;
case 0x504fb5:c.instructions+=3;goto B504fb5;
case 0x504fb7:c.instructions+=2;goto B504fb7;
case 0x504fba:c.instructions+=1;goto B504fba;
case 0x504fc0:goto L504fc0;
case 0x504fc3:c.instructions+=4;goto B504fc3;
case 0x504fc8:c.instructions+=3;goto B504fc8;
case 0x504fca:c.instructions+=2;goto B504fca;
case 0x504fcc:c.instructions+=1;goto B504fcc;
case 0x504fce:goto L504fce;
case 0x504fd0:c.instructions+=1;goto B504fd0;
case 0x504fd2:goto L504fd2;
case 0x504fd4:c.instructions+=1;goto B504fd4;
case 0x504fd6:goto L504fd6;
case 0x504fdc:goto L504fdc;
case 0x504fdd:c.instructions+=3;goto B504fdd;
case 0x504fe0:c.instructions+=2;goto B504fe0;
case 0x504fe3:c.instructions+=1;goto B504fe3;
case 0x504fe5:goto L504fe5;
case 0x504fe6:c.instructions+=3;goto B504fe6;
case 0x504fe7:c.instructions+=2;goto B504fe7;
case 0x504fe8:c.instructions+=1;goto B504fe8;
case 0x504ff0:goto L504ff0;
case 0x504ff1:c.instructions+=6;goto B504ff1;
case 0x504ff2:c.instructions+=5;goto B504ff2;
case 0x504ff3:c.instructions+=4;goto B504ff3;
case 0x504ff7:c.instructions+=3;goto B504ff7;
case 0x504ffa:c.instructions+=2;goto B504ffa;
case 0x504fff:c.instructions+=1;goto B504fff;
default:missing_instruction(c.pc);}
B504000:L504000:{c.instructions+=20;NFSU2_TR(0x504000);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffef0ull))));
}
B504006:{NFSU2_TR(0x504006);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B504008:{NFSU2_TR(0x504008);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B50400a:{NFSU2_TR(0x50400a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
}
B50400f:{NFSU2_TR(0x50400f);
__builtin_memmove((R+4),(R+0),4);
}
B504011:{NFSU2_TR(0x504011);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B504013:{NFSU2_TR(0x504013);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504016:{NFSU2_TR(0x504016);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504019:{NFSU2_TR(0x504019);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50401c:{NFSU2_TR(0x50401c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50401f:{NFSU2_TR(0x50401f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504022:{NFSU2_TR(0x504022);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504025:{NFSU2_TR(0x504025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B504027:{NFSU2_TR(0x504027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504028:{NFSU2_TR(0x504028);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
}
B50402b:{NFSU2_TR(0x50402b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50402c:{NFSU2_TR(0x50402c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B50402e:{NFSU2_TR(0x50402e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504031:{NFSU2_TR(0x504031);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504032:{NFSU2_TR(0x504032);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504040:L504040:{c.instructions+=8;NFSU2_TR(0x504040);
__builtin_memmove((R+8),(R+4),4);
}
B504042:{NFSU2_TR(0x504042);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504046:{NFSU2_TR(0x504046);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504047:{NFSU2_TR(0x504047);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504048:{NFSU2_TR(0x504048);
__builtin_memmove((R+24),(R+0),4);
}
B50404a:{NFSU2_TR(0x50404a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x15cull))));
}
B50404f:{NFSU2_TR(0x50404f);
__builtin_memmove((R+28),(R+8),4);
}
B504051:{NFSU2_TR(0x504051);
w4(R+4,u32(0x57ull));
}
B504056:L504056:{c.instructions+=1;NFSU2_TR(0x504056);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L504058;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504056u);}goto L504056;}
}
B504058:L504058:{c.instructions+=15;NFSU2_TR(0x504058);
__builtin_memmove((R+4),(R+0),4);
}
B50405a:{NFSU2_TR(0x50405a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B50405c:{NFSU2_TR(0x50405c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x15cull))));
__builtin_memmove((R+24),(U+0),4);
}
B504062:{NFSU2_TR(0x504062);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B504064:{NFSU2_TR(0x504064);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B504067:{NFSU2_TR(0x504067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50406a:{NFSU2_TR(0x50406a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50406d:{NFSU2_TR(0x50406d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504070:{NFSU2_TR(0x504070);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504073:{NFSU2_TR(0x504073);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504076:{NFSU2_TR(0x504076);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B504079:{NFSU2_TR(0x504079);
__builtin_memmove((R+24),(R+0),4);
}
B50407b:{NFSU2_TR(0x50407b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
}
B504080:{NFSU2_TR(0x504080);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16cull))));
__builtin_memmove((R+28),(U+0),4);
}
B504086:{NFSU2_TR(0x504086);
w4(R+4,u32(0x40ull));
}
B50408b:L50408b:{c.instructions+=1;NFSU2_TR(0x50408b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50408d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50408bu);}goto L50408b;}
}
B50408d:L50408d:{c.instructions+=43;NFSU2_TR(0x50408d);
__builtin_memmove((R+4),(R+0),4);
}
B50408f:{NFSU2_TR(0x50408f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B504091:{NFSU2_TR(0x504091);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x26cull))));
__builtin_memmove((R+24),(U+0),4);
}
B504097:{NFSU2_TR(0x504097);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B504099:{NFSU2_TR(0x504099);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50409c:{NFSU2_TR(0x50409c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50409f:{NFSU2_TR(0x50409f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5040a2:{NFSU2_TR(0x5040a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5040a5:{NFSU2_TR(0x5040a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5040a8:{NFSU2_TR(0x5040a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5040ab:{NFSU2_TR(0x5040ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5040ae:{NFSU2_TR(0x5040ae);
__builtin_memmove((R+4),(R+0),4);
}
B5040b0:{NFSU2_TR(0x5040b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5040b2:{NFSU2_TR(0x5040b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x27cull))));
__builtin_memmove((R+24),(U+0),4);
}
B5040b8:{NFSU2_TR(0x5040b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5040ba:{NFSU2_TR(0x5040ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5040bd:{NFSU2_TR(0x5040bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5040c0:{NFSU2_TR(0x5040c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5040c3:{NFSU2_TR(0x5040c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5040c6:{NFSU2_TR(0x5040c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5040c9:{NFSU2_TR(0x5040c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5040cc:{NFSU2_TR(0x5040cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5040cf:{NFSU2_TR(0x5040cf);
__builtin_memmove((R+4),(R+0),4);
}
B5040d1:{NFSU2_TR(0x5040d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5040d3:{NFSU2_TR(0x5040d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28cull))));
__builtin_memmove((R+24),(U+0),4);
}
B5040d9:{NFSU2_TR(0x5040d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5040db:{NFSU2_TR(0x5040db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5040de:{NFSU2_TR(0x5040de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5040e1:{NFSU2_TR(0x5040e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5040e4:{NFSU2_TR(0x5040e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3bcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5040ea:{NFSU2_TR(0x5040ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5040ed:{NFSU2_TR(0x5040ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3bcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5040f3:{NFSU2_TR(0x5040f3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5040f6:{NFSU2_TR(0x5040f6);
__builtin_memmove((R+4),(R+0),4);
}
B5040f8:{NFSU2_TR(0x5040f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5040fa:{NFSU2_TR(0x5040fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x294ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504100:{NFSU2_TR(0x504100);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B504102:{NFSU2_TR(0x504102);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504105:{NFSU2_TR(0x504105);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504108:{NFSU2_TR(0x504108);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B50410b:{NFSU2_TR(0x50410b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2acull))));
__builtin_memmove((R+28),(U+0),4);
}
B504111:{NFSU2_TR(0x504111);
__builtin_memmove((R+24),(R+0),4);
}
B504113:{NFSU2_TR(0x504113);
w4(R+4,u32(0x44ull));
}
B504118:L504118:{c.instructions+=1;NFSU2_TR(0x504118);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50411a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504118u);}goto L504118;}
}
B50411a:L50411a:{c.instructions+=15;NFSU2_TR(0x50411a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
}
B50411f:{NFSU2_TR(0x50411f);
__builtin_memmove((R+4),(R+0),4);
}
B504121:{NFSU2_TR(0x504121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B504123:{NFSU2_TR(0x504123);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x29cull))));
}
B504129:{NFSU2_TR(0x504129);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B50412b:{NFSU2_TR(0x50412b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50412e:{NFSU2_TR(0x50412e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504131:{NFSU2_TR(0x504131);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504134:{NFSU2_TR(0x504134);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504137:{NFSU2_TR(0x504137);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50413a:{NFSU2_TR(0x50413a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50413d:{NFSU2_TR(0x50413d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504140:{NFSU2_TR(0x504140);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504141:{NFSU2_TR(0x504141);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504142:{NFSU2_TR(0x504142);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50414d:L50414d:{c.instructions+=16;NFSU2_TR(0x50414d);
}
B50414e:{NFSU2_TR(0x50414e);
}
B50414f:{NFSU2_TR(0x50414f);
}
B504150:{NFSU2_TR(0x504150);
__builtin_memmove((R+0),(R+4),4);
}
B504152:{NFSU2_TR(0x504152);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504154:{NFSU2_TR(0x504154);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B504156:{NFSU2_TR(0x504156);
w4(R+8,u32(0x3f800000ull));
}
B50415b:{NFSU2_TR(0x50415b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50415e:{NFSU2_TR(0x50415e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504161:{NFSU2_TR(0x504161);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504164:{NFSU2_TR(0x504164);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504167:{NFSU2_TR(0x504167);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50416a:{NFSU2_TR(0x50416a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50416d:{NFSU2_TR(0x50416d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504170:{NFSU2_TR(0x504170);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B504177:{NFSU2_TR(0x504177);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504180:L504180:{c.instructions+=3;NFSU2_TR(0x504180);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504183:{NFSU2_TR(0x504183);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B504185:{NFSU2_TR(0x504185);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5041a2;}}
}
B504187:L504187:{c.instructions+=3;NFSU2_TR(0x504187);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50418b:{NFSU2_TR(0x50418b);
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
B50418d:{NFSU2_TR(0x50418d);
if(r1(R+512)){{goto L504199;}}
}
B50418f:L50418f:{c.instructions+=3;NFSU2_TR(0x50418f);
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
B504190:{NFSU2_TR(0x504190);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504196:{NFSU2_TR(0x504196);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504199:L504199:{c.instructions+=2;NFSU2_TR(0x504199);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50419f:{NFSU2_TR(0x50419f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5041a2:L5041a2:{c.instructions+=3;NFSU2_TR(0x5041a2);
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
B5041a4:{NFSU2_TR(0x5041a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5041aa:{NFSU2_TR(0x5041aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5041b0:L5041b0:{c.instructions+=3;NFSU2_TR(0x5041b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5041b3:{NFSU2_TR(0x5041b3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5041b5:{NFSU2_TR(0x5041b5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5041d2;}}
}
B5041b7:L5041b7:{c.instructions+=3;NFSU2_TR(0x5041b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5041bb:{NFSU2_TR(0x5041bb);
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
B5041bd:{NFSU2_TR(0x5041bd);
if(r1(R+512)){{goto L5041c9;}}
}
B5041bf:L5041bf:{c.instructions+=3;NFSU2_TR(0x5041bf);
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
B5041c0:{NFSU2_TR(0x5041c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5041c6:{NFSU2_TR(0x5041c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5041c9:L5041c9:{c.instructions+=2;NFSU2_TR(0x5041c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5041cf:{NFSU2_TR(0x5041cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5041d2:L5041d2:{c.instructions+=3;NFSU2_TR(0x5041d2);
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
B5041d4:{NFSU2_TR(0x5041d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5041da:{NFSU2_TR(0x5041da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5041e0:L5041e0:{c.instructions+=13;NFSU2_TR(0x5041e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5041e6:{NFSU2_TR(0x5041e6);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B5041ea:{NFSU2_TR(0x5041ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5041f0:{NFSU2_TR(0x5041f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5041f6:{NFSU2_TR(0x5041f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5041f7:{NFSU2_TR(0x5041f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5041fa:{NFSU2_TR(0x5041fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5041fd:{NFSU2_TR(0x5041fd);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B504201:{NFSU2_TR(0x504201);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B504203:{NFSU2_TR(0x504203);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504204:{NFSU2_TR(0x504204);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B504208:{NFSU2_TR(0x504208);
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
B50420a:{NFSU2_TR(0x50420a);
if(r1(R+518)){{goto L50422b;}}
}
B50420c:L50420c:{c.instructions+=2;NFSU2_TR(0x50420c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B50420f:{NFSU2_TR(0x50420f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L504228;}}
}
B504211:L504211:{c.instructions+=3;NFSU2_TR(0x504211);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504214:{NFSU2_TR(0x504214);
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
B504216:{NFSU2_TR(0x504216);
if(r1(R+518)){{goto L504228;}}
}
B504218:L504218:{c.instructions+=2;NFSU2_TR(0x504218);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504219:{NFSU2_TR(0x504219);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50421eull));
TAIL_STATIC(0x575630u,575);
}
B50421e:L50421e:{c.instructions+=2;NFSU2_TR(0x50421e);
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
B504221:{NFSU2_TR(0x504221);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B504228:L504228:{c.instructions+=1;NFSU2_TR(0x504228);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50422b:L50422b:{c.instructions+=3;NFSU2_TR(0x50422b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50422c:{NFSU2_TR(0x50422c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50422d:{NFSU2_TR(0x50422d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504230:L504230:{c.instructions+=6;NFSU2_TR(0x504230);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504236:{NFSU2_TR(0x504236);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B504239:{NFSU2_TR(0x504239);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50423a:{NFSU2_TR(0x50423a);
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
B50423c:{NFSU2_TR(0x50423c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504242:{NFSU2_TR(0x504242);
if(r1(R+512)){{goto L504268;}}
}
B504244:L504244:{c.instructions+=10;NFSU2_TR(0x504244);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50424a:{NFSU2_TR(0x50424a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B50424c:{NFSU2_TR(0x50424c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50424d:{NFSU2_TR(0x50424d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504250:{NFSU2_TR(0x504250);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B504251:{NFSU2_TR(0x504251);
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
B504253:{NFSU2_TR(0x504253);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504259:{NFSU2_TR(0x504259);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50425f:{NFSU2_TR(0x50425f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504260:{NFSU2_TR(0x504260);
if(r1(R+512)){{goto L504268;}}
}
B504262:L504262:{c.instructions+=1;NFSU2_TR(0x504262);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504268:L504268:{c.instructions+=1;NFSU2_TR(0x504268);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504270:L504270:{c.instructions+=4;NFSU2_TR(0x504270);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B504274:{NFSU2_TR(0x504274);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B504276:{NFSU2_TR(0x504276);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504279:{NFSU2_TR(0x504279);
if(r1(R+518)){{goto L504284;}}
}
B50427b:L50427b:{c.instructions+=3;NFSU2_TR(0x50427b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffbull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50427e:{NFSU2_TR(0x50427e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504281:{NFSU2_TR(0x504281);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504284:L504284:{c.instructions+=3;NFSU2_TR(0x504284);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504287:{NFSU2_TR(0x504287);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50428a:{NFSU2_TR(0x50428a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504290:L504290:{c.instructions+=5;NFSU2_TR(0x504290);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504291:{NFSU2_TR(0x504291);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504295:{NFSU2_TR(0x504295);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B504297:{NFSU2_TR(0x504297);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B504299:{NFSU2_TR(0x504299);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5042dd;}}
}
B50429b:L50429b:{c.instructions+=4;NFSU2_TR(0x50429b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50429f:{NFSU2_TR(0x50429f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5042a2:{NFSU2_TR(0x5042a2);
w4(R+8,u32(0x3f800000ull));
}
B5042a7:{NFSU2_TR(0x5042a7);
{goto L5042b0;}
}
B5042b0:L5042b0:{c.instructions+=15;NFSU2_TR(0x5042b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5042b7:{NFSU2_TR(0x5042b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5042ba:{NFSU2_TR(0x5042ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5042bd:{NFSU2_TR(0x5042bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5042c0:{NFSU2_TR(0x5042c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5042c2:{NFSU2_TR(0x5042c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5042c5:{NFSU2_TR(0x5042c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5042c8:{NFSU2_TR(0x5042c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5042cb:{NFSU2_TR(0x5042cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5042ce:{NFSU2_TR(0x5042ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5042d1:{NFSU2_TR(0x5042d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5042d4:{NFSU2_TR(0x5042d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5042d7:{NFSU2_TR(0x5042d7);
w1(R+512,carry<u32>(r4(R+0),u32(0x30ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5042da:{NFSU2_TR(0x5042da);
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
B5042db:{NFSU2_TR(0x5042db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5042b0u);}goto L5042b0;}}
}
B5042dd:L5042dd:{c.instructions+=2;NFSU2_TR(0x5042dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5042de:{NFSU2_TR(0x5042de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5042e0:L5042e0:{c.instructions+=6;NFSU2_TR(0x5042e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5042e1:{NFSU2_TR(0x5042e1);
__builtin_memmove((R+28),(R+4),4);
}
B5042e3:{NFSU2_TR(0x5042e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5042e6:{NFSU2_TR(0x5042e6);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B5042ea:{NFSU2_TR(0x5042ea);
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
B5042ec:{NFSU2_TR(0x5042ec);
if(r1(R+518)){{goto L504350;}}
}
B5042ee:L5042ee:{c.instructions+=1;NFSU2_TR(0x5042ee);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L504337;}}
}
B5042f0:L5042f0:{c.instructions+=5;NFSU2_TR(0x5042f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5042f1:{NFSU2_TR(0x5042f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5042f2:{NFSU2_TR(0x5042f2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5042f4:{NFSU2_TR(0x5042f4);
__builtin_memmove((R+12),(R+0),4);
}
B5042f6:{NFSU2_TR(0x5042f6);
{goto L504300;}
}
B504300:L504300:{c.instructions+=5;NFSU2_TR(0x504300);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504306:{NFSU2_TR(0x504306);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B50430a:{NFSU2_TR(0x50430a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B50430c:{NFSU2_TR(0x50430c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50430f:{NFSU2_TR(0x50430f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50432f;}}
}
B504311:L504311:{c.instructions+=3;NFSU2_TR(0x504311);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504314:{NFSU2_TR(0x504314);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B504316:{NFSU2_TR(0x504316);
if(r1(R+518)){{goto L50432f;}}
}
B504318:L504318:{c.instructions+=2;NFSU2_TR(0x504318);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504319:{NFSU2_TR(0x504319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50431eull));
TAIL_STATIC(0x575630u,575);
}
B50431e:L50431e:{c.instructions+=3;NFSU2_TR(0x50431e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504324:{NFSU2_TR(0x504324);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B504327:{NFSU2_TR(0x504327);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B50432f:L50432f:{c.instructions+=3;NFSU2_TR(0x50432f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B504332:{NFSU2_TR(0x504332);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B504333:{NFSU2_TR(0x504333);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504300u);}goto L504300;}}
}
B504335:L504335:{c.instructions+=2;NFSU2_TR(0x504335);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504336:{NFSU2_TR(0x504336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504337:L504337:{c.instructions+=3;NFSU2_TR(0x504337);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50433d:{NFSU2_TR(0x50433d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50433e:{NFSU2_TR(0x50433e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x504343ull));
TAIL_STATIC(0x575630u,575);
}
B504343:L504343:{c.instructions+=2;NFSU2_TR(0x504343);
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
B504346:{NFSU2_TR(0x504346);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B504350:L504350:{c.instructions+=2;NFSU2_TR(0x504350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504351:{NFSU2_TR(0x504351);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504354:L504354:{c.instructions+=19;NFSU2_TR(0x504354);
}
B504355:{NFSU2_TR(0x504355);
}
B504356:{NFSU2_TR(0x504356);
}
B504357:{NFSU2_TR(0x504357);
}
B504358:{NFSU2_TR(0x504358);
}
B504359:{NFSU2_TR(0x504359);
}
B50435a:{NFSU2_TR(0x50435a);
}
B50435b:{NFSU2_TR(0x50435b);
}
B50435c:{NFSU2_TR(0x50435c);
}
B50435d:{NFSU2_TR(0x50435d);
}
B50435e:{NFSU2_TR(0x50435e);
}
B50435f:{NFSU2_TR(0x50435f);
}
B504360:{NFSU2_TR(0x504360);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504363:{NFSU2_TR(0x504363);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504369:{NFSU2_TR(0x504369);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50436a:{NFSU2_TR(0x50436a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50436d:{NFSU2_TR(0x50436d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B50436f:{NFSU2_TR(0x50436f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B504371:{NFSU2_TR(0x504371);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L504383;}}
}
B504373:L504373:{c.instructions+=7;NFSU2_TR(0x504373);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B504376:{NFSU2_TR(0x504376);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504379:{NFSU2_TR(0x504379);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50437b:{NFSU2_TR(0x50437b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B50437e:{NFSU2_TR(0x50437e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B50437f:{NFSU2_TR(0x50437f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B504381:{NFSU2_TR(0x504381);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504373u);}goto L504373;}}
}
B504383:L504383:{c.instructions+=7;NFSU2_TR(0x504383);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504386:{NFSU2_TR(0x504386);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B504388:{NFSU2_TR(0x504388);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50438b:{NFSU2_TR(0x50438b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504391:{NFSU2_TR(0x504391);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B504393:{NFSU2_TR(0x504393);
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
B504395:{NFSU2_TR(0x504395);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5043a7;}}
}
B504397:L504397:{c.instructions+=7;NFSU2_TR(0x504397);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B50439a:{NFSU2_TR(0x50439a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50439d:{NFSU2_TR(0x50439d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50439f:{NFSU2_TR(0x50439f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B5043a2:{NFSU2_TR(0x5043a2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5043a3:{NFSU2_TR(0x5043a3);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5043a5:{NFSU2_TR(0x5043a5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504397u);}goto L504397;}}
}
B5043a7:L5043a7:{c.instructions+=3;NFSU2_TR(0x5043a7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5043a9:{NFSU2_TR(0x5043a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5043aa:{NFSU2_TR(0x5043aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5043b0:L5043b0:{c.instructions+=13;NFSU2_TR(0x5043b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5043b6:{NFSU2_TR(0x5043b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5043b9:{NFSU2_TR(0x5043b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5043bf:{NFSU2_TR(0x5043bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5043c2:{NFSU2_TR(0x5043c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5043c5:{NFSU2_TR(0x5043c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5043c6:{NFSU2_TR(0x5043c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5043cc:{NFSU2_TR(0x5043cc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff9dull))));
}
B5043cf:{NFSU2_TR(0x5043cf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5043d1:{NFSU2_TR(0x5043d1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5043d3:{NFSU2_TR(0x5043d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5043d6:{NFSU2_TR(0x5043d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5043d7:{NFSU2_TR(0x5043d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5043e2;}}
}
B5043d9:L5043d9:{c.instructions+=3;NFSU2_TR(0x5043d9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff7ull))));
}
B5043dc:{NFSU2_TR(0x5043dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5043df:{NFSU2_TR(0x5043df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5043e2:L5043e2:{c.instructions+=2;NFSU2_TR(0x5043e2);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
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
B5043e8:{NFSU2_TR(0x5043e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5043f1;}}
}
B5043ea:L5043ea:{c.instructions+=2;NFSU2_TR(0x5043ea);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xffffffefull))));
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
B5043ee:{NFSU2_TR(0x5043ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5043f1:L5043f1:{c.instructions+=1;NFSU2_TR(0x5043f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504400:L504400:{c.instructions+=6;NFSU2_TR(0x504400);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504401:{NFSU2_TR(0x504401);
__builtin_memmove((R+24),(R+4),4);
}
B504403:{NFSU2_TR(0x504403);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504404:{NFSU2_TR(0x504404);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B504408:{NFSU2_TR(0x504408);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x20ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50440c:{NFSU2_TR(0x50440c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L504413;}}
}
B50440e:L50440e:{c.instructions+=4;NFSU2_TR(0x50440e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50440f:{NFSU2_TR(0x50440f);
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
B504411:{NFSU2_TR(0x504411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504412:{NFSU2_TR(0x504412);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504413:L504413:{c.instructions+=5;NFSU2_TR(0x504413);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B504416:{NFSU2_TR(0x504416);
w1(R+0,u8(0xffull));
}
B504418:{NFSU2_TR(0x504418);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B50441a:{NFSU2_TR(0x50441a);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50441c:{NFSU2_TR(0x50441c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L504429;}}
}
B50441e:L50441e:{c.instructions+=1;NFSU2_TR(0x50441e);
__builtin_memmove((R+28),(R+28),4);
}
B504420:L504420:{c.instructions+=4;NFSU2_TR(0x504420);
u8 U[13];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B504424:{NFSU2_TR(0x504424);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B504425:{NFSU2_TR(0x504425);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B504427:{NFSU2_TR(0x504427);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504420u);}goto L504420;}}
}
B504429:L504429:{c.instructions+=10;NFSU2_TR(0x504429);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B50442c:{NFSU2_TR(0x50442c);
__builtin_memmove((R+4),(R+8),4);
}
B50442e:{NFSU2_TR(0x50442e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B504431:{NFSU2_TR(0x504431);
w4(R+0,u32(0x1ull));
}
B504436:{NFSU2_TR(0x504436);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B504438:{NFSU2_TR(0x504438);
__builtin_memmove((R+4),(R+8),4);
}
B50443a:{NFSU2_TR(0x50443a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B50443d:{NFSU2_TR(0x50443d);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B504441:{NFSU2_TR(0x504441);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B504443:{NFSU2_TR(0x504443);
if(r1(R+518)){{goto L50445f;}}
}
B504445:L504445:{c.instructions+=10;NFSU2_TR(0x504445);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B504446:{NFSU2_TR(0x504446);
__builtin_memmove((R+4),(R+8),4);
}
B504448:{NFSU2_TR(0x504448);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B50444b:{NFSU2_TR(0x50444b);
w4(R+0,u32(0x1ull));
}
B504450:{NFSU2_TR(0x504450);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B504452:{NFSU2_TR(0x504452);
__builtin_memmove((R+4),(R+8),4);
}
B504454:{NFSU2_TR(0x504454);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B504457:{NFSU2_TR(0x504457);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B50445b:{NFSU2_TR(0x50445b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50445d:{NFSU2_TR(0x50445d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504445u);}goto L504445;}}
}
B50445f:L50445f:{c.instructions+=17;NFSU2_TR(0x50445f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B504460:{NFSU2_TR(0x504460);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B504464:{NFSU2_TR(0x504464);
__builtin_memmove((R+0),(R+8),4);
}
B504466:{NFSU2_TR(0x504466);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B504469:{NFSU2_TR(0x504469);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B50446d:{NFSU2_TR(0x50446d);
__builtin_memmove((R+4),(R+8),4);
}
B50446f:{NFSU2_TR(0x50446f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B504472:{NFSU2_TR(0x504472);
w1(R+0,u8(0x1ull));
}
B504474:{NFSU2_TR(0x504474);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+0,shl<u8>(r1(R+0),u64(r1(U+0))));
}
B504476:{NFSU2_TR(0x504476);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+0,u8(u32(r1(U+0))|u32(r1(R+0))));
s1(u32(r4(R+28)),r1(U+0));
}
B504478:{NFSU2_TR(0x504478);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B50447c:{NFSU2_TR(0x50447c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50447f:{NFSU2_TR(0x50447f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B504482:{NFSU2_TR(0x504482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504483:{NFSU2_TR(0x504483);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504485:{NFSU2_TR(0x504485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504486:{NFSU2_TR(0x504486);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504490:L504490:{c.instructions+=6;NFSU2_TR(0x504490);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B504494:{NFSU2_TR(0x504494);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504495:{NFSU2_TR(0x504495);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B504498:{NFSU2_TR(0x504498);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B50449b:{NFSU2_TR(0x50449b);
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
B50449d:{NFSU2_TR(0x50449d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5044a5;}}
}
B50449f:L50449f:{c.instructions+=3;NFSU2_TR(0x50449f);
__builtin_memmove((R+0),(R+28),4);
}
B5044a1:{NFSU2_TR(0x5044a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5044a2:{NFSU2_TR(0x5044a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5044a5:L5044a5:{c.instructions+=6;NFSU2_TR(0x5044a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5044a8:{NFSU2_TR(0x5044a8);
__builtin_memmove((R+0),(R+8),4);
}
B5044aa:{NFSU2_TR(0x5044aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5044ad:{NFSU2_TR(0x5044ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5044ae:{NFSU2_TR(0x5044ae);
w4(R+24,u32(0x1ull));
}
B5044b3:{NFSU2_TR(0x5044b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5044b6:L5044b6:{c.instructions+=5;NFSU2_TR(0x5044b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5044b9:{NFSU2_TR(0x5044b9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B5044bc:{NFSU2_TR(0x5044bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5044bd:{NFSU2_TR(0x5044bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x500ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x500ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5044c3:{NFSU2_TR(0x5044c3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5044e3;}}
}
B5044c5:L5044c5:{c.instructions+=1;NFSU2_TR(0x5044c5);
if(r1(R+518)){{goto L5044da;}}
}
B5044c7:L5044c7:{c.instructions+=2;NFSU2_TR(0x5044c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x300ull))));
}
B5044cd:{NFSU2_TR(0x5044cd);
if(r1(R+512)){{goto L5044ec;}}
}
B5044cf:L5044cf:{c.instructions+=2;NFSU2_TR(0x5044cf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x301ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x301ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5044d5:{NFSU2_TR(0x5044d5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5044ec;}}
}
B5044d7:L5044d7:{c.instructions+=2;NFSU2_TR(0x5044d7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5044d8:{NFSU2_TR(0x5044d8);
{goto L5044ec;}
}
B5044da:L5044da:{c.instructions+=2;NFSU2_TR(0x5044da);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5044dd:{NFSU2_TR(0x5044dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5044ec;}}
}
B5044df:L5044df:{c.instructions+=2;NFSU2_TR(0x5044df);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5044e1:{NFSU2_TR(0x5044e1);
{goto L5044ec;}
}
B5044e3:L5044e3:{c.instructions+=2;NFSU2_TR(0x5044e3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x501ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5044e9:{NFSU2_TR(0x5044e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5044ec;}}
}
B5044eb:L5044eb:{c.instructions+=1;NFSU2_TR(0x5044eb);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5044ec:L5044ec:{c.instructions+=2;NFSU2_TR(0x5044ec);
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
B5044ee:{NFSU2_TR(0x5044ee);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5044f4;}}
}
B5044f0:L5044f0:{c.instructions+=2;NFSU2_TR(0x5044f0);
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
B5044f2:{NFSU2_TR(0x5044f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5044b6u);}goto L5044b6;}}
}
B5044f4:L5044f4:{c.instructions+=3;NFSU2_TR(0x5044f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5044f5:{NFSU2_TR(0x5044f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5044f6:{NFSU2_TR(0x5044f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504500:L504500:{c.instructions+=10;NFSU2_TR(0x504500);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504504:{NFSU2_TR(0x504504);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504506:{NFSU2_TR(0x504506);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50450a:{NFSU2_TR(0x50450a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50450c:{NFSU2_TR(0x50450c);
{u32 ea_=u32(u32(7967468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504512:{NFSU2_TR(0x504512);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B504514:{NFSU2_TR(0x504514);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B504516:{NFSU2_TR(0x504516);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B504518:{NFSU2_TR(0x504518);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50451b:{NFSU2_TR(0x50451b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L504590;}}
}
B50451d:L50451d:{c.instructions+=8;NFSU2_TR(0x50451d);
{u32 ea_=u32(u32(7967468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504523:{NFSU2_TR(0x504523);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B504525:{NFSU2_TR(0x504525);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B504527:{NFSU2_TR(0x504527);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B504529:{NFSU2_TR(0x504529);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50452b:{NFSU2_TR(0x50452b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50452e:{NFSU2_TR(0x50452e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B504530:{NFSU2_TR(0x504530);
if(r1(R+514)){{goto L504594;}}
}
B504532:L504532:{c.instructions+=8;NFSU2_TR(0x504532);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504535:{NFSU2_TR(0x504535);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504538:{NFSU2_TR(0x504538);
{u32 ea_=u32(u32(7967468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50453e:{NFSU2_TR(0x50453e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B504540:{NFSU2_TR(0x504540);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B504542:{NFSU2_TR(0x504542);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B504544:{NFSU2_TR(0x504544);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B504547:{NFSU2_TR(0x504547);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L504590;}}
}
B504549:L504549:{c.instructions+=8;NFSU2_TR(0x504549);
{u32 ea_=u32(u32(7967468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50454f:{NFSU2_TR(0x50454f);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B504551:{NFSU2_TR(0x504551);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B504553:{NFSU2_TR(0x504553);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B504555:{NFSU2_TR(0x504555);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B504557:{NFSU2_TR(0x504557);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50455a:{NFSU2_TR(0x50455a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50455c:{NFSU2_TR(0x50455c);
if(r1(R+514)){{goto L504594;}}
}
B50455e:L50455e:{c.instructions+=8;NFSU2_TR(0x50455e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504561:{NFSU2_TR(0x504561);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504564:{NFSU2_TR(0x504564);
{u32 ea_=u32(u32(7967468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50456a:{NFSU2_TR(0x50456a);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B50456c:{NFSU2_TR(0x50456c);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B50456e:{NFSU2_TR(0x50456e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B504570:{NFSU2_TR(0x504570);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B504573:{NFSU2_TR(0x504573);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L504597;}}
}
B504575:L504575:{c.instructions+=8;NFSU2_TR(0x504575);
{u32 ea_=u32(u32(7967468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50457b:{NFSU2_TR(0x50457b);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B50457d:{NFSU2_TR(0x50457d);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B50457f:{NFSU2_TR(0x50457f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B504581:{NFSU2_TR(0x504581);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B504583:{NFSU2_TR(0x504583);
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
B504586:{NFSU2_TR(0x504586);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B504588:{NFSU2_TR(0x504588);
if(r1(R+514)){{goto L50459b;}}
}
B50458a:L50458a:{c.instructions+=2;NFSU2_TR(0x50458a);
w4(R+0,u32(0x1ull));
}
B50458f:{NFSU2_TR(0x50458f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504590:L504590:{c.instructions+=2;NFSU2_TR(0x504590);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B504592:{NFSU2_TR(0x504592);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B504594:L504594:{c.instructions+=2;NFSU2_TR(0x504594);
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
B504596:{NFSU2_TR(0x504596);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504597:L504597:{c.instructions+=2;NFSU2_TR(0x504597);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B504599:{NFSU2_TR(0x504599);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50459b:L50459b:{c.instructions+=2;NFSU2_TR(0x50459b);
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
B50459d:{NFSU2_TR(0x50459d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5045a0:L5045a0:{c.instructions+=10;NFSU2_TR(0x5045a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5045a4:{NFSU2_TR(0x5045a4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5045a6:{NFSU2_TR(0x5045a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5045aa:{NFSU2_TR(0x5045aa);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5045ac:{NFSU2_TR(0x5045ac);
{u32 ea_=u32(u32(7967472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5045b2:{NFSU2_TR(0x5045b2);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5045b4:{NFSU2_TR(0x5045b4);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B5045b6:{NFSU2_TR(0x5045b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5045b8:{NFSU2_TR(0x5045b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5045bb:{NFSU2_TR(0x5045bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L504630;}}
}
B5045bd:L5045bd:{c.instructions+=8;NFSU2_TR(0x5045bd);
{u32 ea_=u32(u32(7967472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5045c3:{NFSU2_TR(0x5045c3);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B5045c5:{NFSU2_TR(0x5045c5);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B5045c7:{NFSU2_TR(0x5045c7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5045c9:{NFSU2_TR(0x5045c9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5045cb:{NFSU2_TR(0x5045cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5045ce:{NFSU2_TR(0x5045ce);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5045d0:{NFSU2_TR(0x5045d0);
if(r1(R+514)){{goto L504634;}}
}
B5045d2:L5045d2:{c.instructions+=8;NFSU2_TR(0x5045d2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5045d5:{NFSU2_TR(0x5045d5);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5045d8:{NFSU2_TR(0x5045d8);
{u32 ea_=u32(u32(7967472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5045de:{NFSU2_TR(0x5045de);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5045e0:{NFSU2_TR(0x5045e0);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B5045e2:{NFSU2_TR(0x5045e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5045e4:{NFSU2_TR(0x5045e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5045e7:{NFSU2_TR(0x5045e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L504630;}}
}
B5045e9:L5045e9:{c.instructions+=8;NFSU2_TR(0x5045e9);
{u32 ea_=u32(u32(7967472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5045ef:{NFSU2_TR(0x5045ef);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B5045f1:{NFSU2_TR(0x5045f1);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B5045f3:{NFSU2_TR(0x5045f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5045f5:{NFSU2_TR(0x5045f5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5045f7:{NFSU2_TR(0x5045f7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5045fa:{NFSU2_TR(0x5045fa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5045fc:{NFSU2_TR(0x5045fc);
if(r1(R+514)){{goto L504634;}}
}
B5045fe:L5045fe:{c.instructions+=8;NFSU2_TR(0x5045fe);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504601:{NFSU2_TR(0x504601);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504604:{NFSU2_TR(0x504604);
{u32 ea_=u32(u32(7967472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50460a:{NFSU2_TR(0x50460a);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B50460c:{NFSU2_TR(0x50460c);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B50460e:{NFSU2_TR(0x50460e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B504610:{NFSU2_TR(0x504610);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B504613:{NFSU2_TR(0x504613);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L504637;}}
}
B504615:L504615:{c.instructions+=8;NFSU2_TR(0x504615);
{u32 ea_=u32(u32(7967472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50461b:{NFSU2_TR(0x50461b);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B50461d:{NFSU2_TR(0x50461d);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B50461f:{NFSU2_TR(0x50461f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B504621:{NFSU2_TR(0x504621);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B504623:{NFSU2_TR(0x504623);
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
B504626:{NFSU2_TR(0x504626);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B504628:{NFSU2_TR(0x504628);
if(r1(R+514)){{goto L50463b;}}
}
B50462a:L50462a:{c.instructions+=2;NFSU2_TR(0x50462a);
w4(R+0,u32(0x1ull));
}
B50462f:{NFSU2_TR(0x50462f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504630:L504630:{c.instructions+=2;NFSU2_TR(0x504630);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B504632:{NFSU2_TR(0x504632);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B504634:L504634:{c.instructions+=2;NFSU2_TR(0x504634);
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
B504636:{NFSU2_TR(0x504636);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504637:L504637:{c.instructions+=2;NFSU2_TR(0x504637);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B504639:{NFSU2_TR(0x504639);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50463b:L50463b:{c.instructions+=2;NFSU2_TR(0x50463b);
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
B50463d:{NFSU2_TR(0x50463d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504640:L504640:{c.instructions+=9;NFSU2_TR(0x504640);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504644:{NFSU2_TR(0x504644);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504648:{NFSU2_TR(0x504648);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50464b:{NFSU2_TR(0x50464b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50464c:{NFSU2_TR(0x50464c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50464f:{NFSU2_TR(0x50464f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504650:{NFSU2_TR(0x504650);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504653:{NFSU2_TR(0x504653);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B504655:{NFSU2_TR(0x504655);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50467e;}}
}
B504657:L504657:{c.instructions+=3;NFSU2_TR(0x504657);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B504658:{NFSU2_TR(0x504658);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50465a:{NFSU2_TR(0x50465a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50467e;}}
}
B50465c:L50465c:{c.instructions+=5;NFSU2_TR(0x50465c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50465f:{NFSU2_TR(0x50465f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B504662:{NFSU2_TR(0x504662);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504665:{NFSU2_TR(0x504665);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B504667:{NFSU2_TR(0x504667);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50467e;}}
}
B504669:L504669:{c.instructions+=3;NFSU2_TR(0x504669);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B50466a:{NFSU2_TR(0x50466a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50466c:{NFSU2_TR(0x50466c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50467e;}}
}
B50466e:L50466e:{c.instructions+=5;NFSU2_TR(0x50466e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B504670:{NFSU2_TR(0x504670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B504672:{NFSU2_TR(0x504672);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504675:{NFSU2_TR(0x504675);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B504677:{NFSU2_TR(0x504677);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50467e;}}
}
B504679:L504679:{c.instructions+=3;NFSU2_TR(0x504679);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B50467a:{NFSU2_TR(0x50467a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50467c:{NFSU2_TR(0x50467c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L504683;}}
}
B50467e:L50467e:{c.instructions+=4;NFSU2_TR(0x50467e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50467f:{NFSU2_TR(0x50467f);
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
B504681:{NFSU2_TR(0x504681);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504682:{NFSU2_TR(0x504682);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504683:L504683:{c.instructions+=5;NFSU2_TR(0x504683);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504686:{NFSU2_TR(0x504686);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504689:{NFSU2_TR(0x504689);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B50468c:{NFSU2_TR(0x50468c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50468e:{NFSU2_TR(0x50468e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50469d;}}
}
B504690:L504690:{c.instructions+=3;NFSU2_TR(0x504690);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B504691:{NFSU2_TR(0x504691);
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
B504693:{NFSU2_TR(0x504693);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50469d;}}
}
B504695:L504695:{c.instructions+=4;NFSU2_TR(0x504695);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504696:{NFSU2_TR(0x504696);
w4(R+0,u32(0x1ull));
}
B50469b:{NFSU2_TR(0x50469b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50469c:{NFSU2_TR(0x50469c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50469d:L50469d:{c.instructions+=4;NFSU2_TR(0x50469d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50469e:{NFSU2_TR(0x50469e);
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
B5046a0:{NFSU2_TR(0x5046a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5046a1:{NFSU2_TR(0x5046a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5046b0:L5046b0:{c.instructions+=3;NFSU2_TR(0x5046b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5046b3:{NFSU2_TR(0x5046b3);
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
B5046b5:{NFSU2_TR(0x5046b5);
if(r1(R+518)){{goto L5046cc;}}
}
B5046b7:L5046b7:{c.instructions+=2;NFSU2_TR(0x5046b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5046bb:{NFSU2_TR(0x5046bb);
{goto L5046c0;}
}
B5046c0:L5046c0:{c.instructions+=2;NFSU2_TR(0x5046c0);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
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
B5046c3:{NFSU2_TR(0x5046c3);
if(r1(R+518)){{goto L5046cc;}}
}
B5046c5:L5046c5:{c.instructions+=3;NFSU2_TR(0x5046c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5046c8:{NFSU2_TR(0x5046c8);
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
B5046ca:{NFSU2_TR(0x5046ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5046c0u);}goto L5046c0;}}
}
B5046cc:L5046cc:{c.instructions+=1;NFSU2_TR(0x5046cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5046d0:L5046d0:{c.instructions+=3;NFSU2_TR(0x5046d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5046d3:{NFSU2_TR(0x5046d3);
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
B5046d5:{NFSU2_TR(0x5046d5);
if(r1(R+518)){{goto L5046ec;}}
}
B5046d7:L5046d7:{c.instructions+=2;NFSU2_TR(0x5046d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5046db:{NFSU2_TR(0x5046db);
{goto L5046e0;}
}
B5046e0:L5046e0:{c.instructions+=2;NFSU2_TR(0x5046e0);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
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
B5046e3:{NFSU2_TR(0x5046e3);
if(r1(R+518)){{goto L5046ec;}}
}
B5046e5:L5046e5:{c.instructions+=3;NFSU2_TR(0x5046e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5046e8:{NFSU2_TR(0x5046e8);
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
B5046ea:{NFSU2_TR(0x5046ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5046e0u);}goto L5046e0;}}
}
B5046ec:L5046ec:{c.instructions+=1;NFSU2_TR(0x5046ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5046f0:L5046f0:{c.instructions+=3;NFSU2_TR(0x5046f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5046f4:{NFSU2_TR(0x5046f4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5046f7:{NFSU2_TR(0x5046f7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L504750;}}
}
B5046f9:L5046f9:{c.instructions+=1;NFSU2_TR(0x5046f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x504758ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B504700:L504700:{c.instructions+=2;NFSU2_TR(0x504700);
w4(R+0,u32(0x10ull));
}
B504705:{NFSU2_TR(0x504705);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504708:L504708:{c.instructions+=2;NFSU2_TR(0x504708);
w4(R+0,u32(0x1cull));
}
B50470d:{NFSU2_TR(0x50470d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504710:L504710:{c.instructions+=2;NFSU2_TR(0x504710);
w4(R+0,u32(0x28ull));
}
B504715:{NFSU2_TR(0x504715);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504718:L504718:{c.instructions+=2;NFSU2_TR(0x504718);
w4(R+0,u32(0x38ull));
}
B50471d:{NFSU2_TR(0x50471d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504720:L504720:{c.instructions+=2;NFSU2_TR(0x504720);
w4(R+0,u32(0x44ull));
}
B504725:{NFSU2_TR(0x504725);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504728:L504728:{c.instructions+=2;NFSU2_TR(0x504728);
w4(R+0,u32(0x4cull));
}
B50472d:{NFSU2_TR(0x50472d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504730:L504730:{c.instructions+=2;NFSU2_TR(0x504730);
w4(R+0,u32(0x54ull));
}
B504735:{NFSU2_TR(0x504735);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504738:L504738:{c.instructions+=2;NFSU2_TR(0x504738);
w4(R+0,u32(0x64ull));
}
B50473d:{NFSU2_TR(0x50473d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504740:L504740:{c.instructions+=2;NFSU2_TR(0x504740);
w4(R+0,u32(0x74ull));
}
B504745:{NFSU2_TR(0x504745);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504748:L504748:{c.instructions+=2;NFSU2_TR(0x504748);
w4(R+0,u32(0x84ull));
}
B50474d:{NFSU2_TR(0x50474d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504750:L504750:{c.instructions+=2;NFSU2_TR(0x504750);
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
B504752:{NFSU2_TR(0x504752);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504790:L504790:{c.instructions+=3;NFSU2_TR(0x504790);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504794:{NFSU2_TR(0x504794);
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
B504796:{NFSU2_TR(0x504796);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5047a0;}}
}
B504798:L504798:{c.instructions+=4;NFSU2_TR(0x504798);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504799:{NFSU2_TR(0x504799);
u8 U[64];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504799);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504799);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B50479d:{NFSU2_TR(0x50479d);
__builtin_memmove((R+0),(R+8),4);
}
B50479f:{NFSU2_TR(0x50479f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5047a0:L5047a0:{c.instructions+=3;NFSU2_TR(0x5047a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5047a4:{NFSU2_TR(0x5047a4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5047a7:{NFSU2_TR(0x5047a7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5047b3;}}
}
B5047a9:L5047a9:{c.instructions+=6;NFSU2_TR(0x5047a9);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5047ab:{NFSU2_TR(0x5047ab);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5047ac:{NFSU2_TR(0x5047ac);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5047ac);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5047ac);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5047ae:{NFSU2_TR(0x5047ae);
__builtin_memmove((R+0),(R+4),4);
}
B5047b0:{NFSU2_TR(0x5047b0);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5047b2:{NFSU2_TR(0x5047b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5047b3:L5047b3:{c.instructions+=2;NFSU2_TR(0x5047b3);
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
B5047b5:{NFSU2_TR(0x5047b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5047c0:L5047c0:{c.instructions+=3;NFSU2_TR(0x5047c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5047c1:{NFSU2_TR(0x5047c1);
__builtin_memmove((R+24),(R+4),4);
}
B5047c3:{NFSU2_TR(0x5047c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5047c8ull));
{goto L504950;}
}
B5047c8:L5047c8:{c.instructions+=2;NFSU2_TR(0x5047c8);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5047cd:{NFSU2_TR(0x5047cd);
if(r1(R+518)){{goto L5047d8;}}
}
B5047cf:L5047cf:{c.instructions+=2;NFSU2_TR(0x5047cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5047d0:{NFSU2_TR(0x5047d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5047d5ull));
TAIL_STATIC(0x575630u,575);
}
B5047d5:L5047d5:{c.instructions+=1;NFSU2_TR(0x5047d5);
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
B5047d8:L5047d8:{c.instructions+=3;NFSU2_TR(0x5047d8);
__builtin_memmove((R+0),(R+24),4);
}
B5047da:{NFSU2_TR(0x5047da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5047db:{NFSU2_TR(0x5047db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5047e0:L5047e0:{c.instructions+=6;NFSU2_TR(0x5047e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5047e4:{NFSU2_TR(0x5047e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5047e7:{NFSU2_TR(0x5047e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5047ea:{NFSU2_TR(0x5047ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5047ed:{NFSU2_TR(0x5047ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5047f0:{NFSU2_TR(0x5047f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504800:L504800:{c.instructions+=3;NFSU2_TR(0x504800);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504803:{NFSU2_TR(0x504803);
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
B504805:{NFSU2_TR(0x504805);
if(r1(R+518)){{goto L50481c;}}
}
B504807:L504807:{c.instructions+=2;NFSU2_TR(0x504807);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50480b:{NFSU2_TR(0x50480b);
{goto L504810;}
}
B504810:L504810:{c.instructions+=2;NFSU2_TR(0x504810);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
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
B504813:{NFSU2_TR(0x504813);
if(r1(R+518)){{goto L50481c;}}
}
B504815:L504815:{c.instructions+=3;NFSU2_TR(0x504815);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504818:{NFSU2_TR(0x504818);
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
B50481a:{NFSU2_TR(0x50481a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504810u);}goto L504810;}}
}
B50481c:L50481c:{c.instructions+=1;NFSU2_TR(0x50481c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504820:L504820:{c.instructions+=3;NFSU2_TR(0x504820);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B504824:{NFSU2_TR(0x504824);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50482a:{NFSU2_TR(0x50482a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504830:L504830:{c.instructions+=8;NFSU2_TR(0x504830);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504834:{NFSU2_TR(0x504834);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504835:{NFSU2_TR(0x504835);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504836:{NFSU2_TR(0x504836);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504839:{NFSU2_TR(0x504839);
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
B50483b:{NFSU2_TR(0x50483b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50483c:{NFSU2_TR(0x50483c);
__builtin_memmove((R+12),(R+4),4);
}
B50483e:{NFSU2_TR(0x50483e);
if(r1(R+518)){{goto L50486a;}}
}
B504840:L504840:{c.instructions+=1;NFSU2_TR(0x504840);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B504844:L504844:{c.instructions+=4;NFSU2_TR(0x504844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B504846:{NFSU2_TR(0x504846);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504847:{NFSU2_TR(0x504847);
__builtin_memmove((R+4),(R+28),4);
}
B504849:{NFSU2_TR(0x504849);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50484cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50484c:L50484c:{c.instructions+=2;NFSU2_TR(0x50484c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50484e:{NFSU2_TR(0x50484e);
if(r1(R+518)){{goto L504872;}}
}
B504850:L504850:{c.instructions+=2;NFSU2_TR(0x504850);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B504854:{NFSU2_TR(0x504854);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L504863;}}
}
B504856:L504856:{c.instructions+=4;NFSU2_TR(0x504856);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504857:{NFSU2_TR(0x504857);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504858:{NFSU2_TR(0x504858);
__builtin_memmove((R+4),(R+12),4);
}
B50485a:{NFSU2_TR(0x50485a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50485full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504830u);}goto L504830;}
}
B50485f:L50485f:{c.instructions+=2;NFSU2_TR(0x50485f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B504861:{NFSU2_TR(0x504861);
if(r1(R+518)){{goto L504872;}}
}
B504863:L504863:{c.instructions+=3;NFSU2_TR(0x504863);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504866:{NFSU2_TR(0x504866);
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
B504868:{NFSU2_TR(0x504868);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504844u);}goto L504844;}}
}
B50486a:L50486a:{c.instructions+=5;NFSU2_TR(0x50486a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50486b:{NFSU2_TR(0x50486b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50486c:{NFSU2_TR(0x50486c);
w1(R+0,u8(0x1ull));
}
B50486e:{NFSU2_TR(0x50486e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50486f:{NFSU2_TR(0x50486f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504872:L504872:{c.instructions+=5;NFSU2_TR(0x504872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504873:{NFSU2_TR(0x504873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504874:{NFSU2_TR(0x504874);
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
B504876:{NFSU2_TR(0x504876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504877:{NFSU2_TR(0x504877);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504880:L504880:{c.instructions+=7;NFSU2_TR(0x504880);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504881:{NFSU2_TR(0x504881);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504882:{NFSU2_TR(0x504882);
__builtin_memmove((R+12),(R+4),4);
}
B504884:{NFSU2_TR(0x504884);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504887:{NFSU2_TR(0x504887);
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
B504889:{NFSU2_TR(0x504889);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50488a:{NFSU2_TR(0x50488a);
if(r1(R+518)){{goto L5048b6;}}
}
B50488c:L50488c:{c.instructions+=1;NFSU2_TR(0x50488c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B504890:L504890:{c.instructions+=4;NFSU2_TR(0x504890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B504892:{NFSU2_TR(0x504892);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504893:{NFSU2_TR(0x504893);
__builtin_memmove((R+4),(R+28),4);
}
B504895:{NFSU2_TR(0x504895);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x504898ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B504898:L504898:{c.instructions+=2;NFSU2_TR(0x504898);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50489a:{NFSU2_TR(0x50489a);
if(r1(R+518)){{goto L5048be;}}
}
B50489c:L50489c:{c.instructions+=2;NFSU2_TR(0x50489c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5048a0:{NFSU2_TR(0x5048a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5048af;}}
}
B5048a2:L5048a2:{c.instructions+=4;NFSU2_TR(0x5048a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5048a3:{NFSU2_TR(0x5048a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5048a4:{NFSU2_TR(0x5048a4);
__builtin_memmove((R+4),(R+12),4);
}
B5048a6:{NFSU2_TR(0x5048a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5048abull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504830u);}goto L504830;}
}
B5048ab:L5048ab:{c.instructions+=2;NFSU2_TR(0x5048ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5048ad:{NFSU2_TR(0x5048ad);
if(r1(R+518)){{goto L5048be;}}
}
B5048af:L5048af:{c.instructions+=3;NFSU2_TR(0x5048af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5048b2:{NFSU2_TR(0x5048b2);
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
B5048b4:{NFSU2_TR(0x5048b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504890u);}goto L504890;}}
}
B5048b6:L5048b6:{c.instructions+=5;NFSU2_TR(0x5048b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5048b7:{NFSU2_TR(0x5048b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5048b8:{NFSU2_TR(0x5048b8);
w1(R+0,u8(0x1ull));
}
B5048ba:{NFSU2_TR(0x5048ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5048bb:{NFSU2_TR(0x5048bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5048be:L5048be:{c.instructions+=5;NFSU2_TR(0x5048be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5048bf:{NFSU2_TR(0x5048bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5048c0:{NFSU2_TR(0x5048c0);
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
B5048c2:{NFSU2_TR(0x5048c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5048c3:{NFSU2_TR(0x5048c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5048d0:L5048d0:{c.instructions+=4;NFSU2_TR(0x5048d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5048d4:{NFSU2_TR(0x5048d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5048d7:{NFSU2_TR(0x5048d7);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5048da:{NFSU2_TR(0x5048da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5048e4;}}
}
B5048dc:L5048dc:{c.instructions+=3;NFSU2_TR(0x5048dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5048df:{NFSU2_TR(0x5048df);
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
B5048e1:{NFSU2_TR(0x5048e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5048e4:L5048e4:{c.instructions+=2;NFSU2_TR(0x5048e4);
w1(R+0,u8(0x1ull));
}
B5048e6:{NFSU2_TR(0x5048e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5048f0:L5048f0:{c.instructions+=4;NFSU2_TR(0x5048f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5048f4:{NFSU2_TR(0x5048f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5048f7:{NFSU2_TR(0x5048f7);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5048fa:{NFSU2_TR(0x5048fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L504904;}}
}
B5048fc:L5048fc:{c.instructions+=3;NFSU2_TR(0x5048fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5048ff:{NFSU2_TR(0x5048ff);
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
B504901:{NFSU2_TR(0x504901);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504904:L504904:{c.instructions+=2;NFSU2_TR(0x504904);
w1(R+0,u8(0x1ull));
}
B504906:{NFSU2_TR(0x504906);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504910:L504910:{c.instructions+=8;NFSU2_TR(0x504910);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504911:{NFSU2_TR(0x504911);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B504915:{NFSU2_TR(0x504915);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504916:{NFSU2_TR(0x504916);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504919:{NFSU2_TR(0x504919);
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
B50491b:{NFSU2_TR(0x50491b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50491c:{NFSU2_TR(0x50491c);
__builtin_memmove((R+28),(R+4),4);
}
B50491e:{NFSU2_TR(0x50491e);
if(r1(R+518)){{goto L504946;}}
}
B504920:L504920:{c.instructions+=2;NFSU2_TR(0x504920);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504921:{NFSU2_TR(0x504921);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B504925:L504925:{c.instructions+=4;NFSU2_TR(0x504925);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504926:{NFSU2_TR(0x504926);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504927:{NFSU2_TR(0x504927);
__builtin_memmove((R+4),(R+28),4);
}
B504929:{NFSU2_TR(0x504929);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50492eull));
TAIL_STATIC(0x54ce60u,54c);
}
B50492e:L50492e:{c.instructions+=8;NFSU2_TR(0x50492e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504931:{NFSU2_TR(0x504931);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504934:{NFSU2_TR(0x504934);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3c00000ull))));
}
B504939:{NFSU2_TR(0x504939);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B50493b:{NFSU2_TR(0x50493b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50493e:{NFSU2_TR(0x50493e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504941:{NFSU2_TR(0x504941);
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
B504943:{NFSU2_TR(0x504943);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504925u);}goto L504925;}}
}
B504945:L504945:{c.instructions+=1;NFSU2_TR(0x504945);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B504946:L504946:{c.instructions+=4;NFSU2_TR(0x504946);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504947:{NFSU2_TR(0x504947);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504948:{NFSU2_TR(0x504948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504949:{NFSU2_TR(0x504949);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504950:L504950:{c.instructions+=2;NFSU2_TR(0x504950);
u8 U[4];
w4(U+0,u32(0x79aa4cull));
s4(u32(r4(R+4)),r4(U+0));
}
B504956:{NFSU2_TR(0x504956);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504960:L504960:{c.instructions+=6;NFSU2_TR(0x504960);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B504966:{NFSU2_TR(0x504966);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504967:{NFSU2_TR(0x504967);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B504969:{NFSU2_TR(0x504969);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50496b:{NFSU2_TR(0x50496b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50496c:{NFSU2_TR(0x50496c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L50498c;}}
}
B50496e:L50496e:{c.instructions+=4;NFSU2_TR(0x50496e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504974:{NFSU2_TR(0x504974);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B504978:{NFSU2_TR(0x504978);
__builtin_memmove((R+4),(R+24),4);
}
B50497a:{NFSU2_TR(0x50497a);
__builtin_memmove((R+12),(R+12),4);
}
B504980:L504980:{c.instructions+=2;NFSU2_TR(0x504980);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B504982:{NFSU2_TR(0x504982);
if(r1(R+518)){{goto L504993;}}
}
B504984:L504984:{c.instructions+=4;NFSU2_TR(0x504984);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B504985:{NFSU2_TR(0x504985);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B504988:{NFSU2_TR(0x504988);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B50498a:{NFSU2_TR(0x50498a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504980u);}goto L504980;}}
}
B50498c:L50498c:{c.instructions+=4;NFSU2_TR(0x50498c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50498d:{NFSU2_TR(0x50498d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50498e:{NFSU2_TR(0x50498e);
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
B504990:{NFSU2_TR(0x504990);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504993:L504993:{c.instructions+=5;NFSU2_TR(0x504993);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B504996:{NFSU2_TR(0x504996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504997:{NFSU2_TR(0x504997);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B50499a:{NFSU2_TR(0x50499a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50499b:{NFSU2_TR(0x50499b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5049a0:L5049a0:{c.instructions+=7;NFSU2_TR(0x5049a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5049a3:{NFSU2_TR(0x5049a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5049a6:{NFSU2_TR(0x5049a6);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5049aa:{NFSU2_TR(0x5049aa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5049ad:{NFSU2_TR(0x5049ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5049ae:{NFSU2_TR(0x5049ae);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x53707954ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5049b4:{NFSU2_TR(0x5049b4);
if(r1(R+518)){{goto L5049e4;}}
}
B5049b6:L5049b6:{c.instructions+=2;NFSU2_TR(0x5049b6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5049b8:{NFSU2_TR(0x5049b8);
if(r1(R+518)){{goto L5049dc;}}
}
B5049ba:L5049ba:{c.instructions+=4;NFSU2_TR(0x5049ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5049bd:{NFSU2_TR(0x5049bd);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5049c1:{NFSU2_TR(0x5049c1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x53707954ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5049c7:{NFSU2_TR(0x5049c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5049b6u);}goto L5049b6;}}
}
B5049c9:L5049c9:{c.instructions+=8;NFSU2_TR(0x5049c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5049cc:{NFSU2_TR(0x5049cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5049cf:{NFSU2_TR(0x5049cf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5049d2:{NFSU2_TR(0x5049d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5049d5:{NFSU2_TR(0x5049d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5049d8:{NFSU2_TR(0x5049d8);
w1(R+0,u8(0x1ull));
}
B5049da:{NFSU2_TR(0x5049da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5049db:{NFSU2_TR(0x5049db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5049dc:L5049dc:{c.instructions+=2;NFSU2_TR(0x5049dc);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x53707954ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x53707954ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x53707954ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5049e2:{NFSU2_TR(0x5049e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5049f3;}}
}
B5049e4:L5049e4:{c.instructions+=5;NFSU2_TR(0x5049e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5049e7:{NFSU2_TR(0x5049e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5049ea:{NFSU2_TR(0x5049ea);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5049ed:{NFSU2_TR(0x5049ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5049f0:{NFSU2_TR(0x5049f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5049f3:L5049f3:{c.instructions+=3;NFSU2_TR(0x5049f3);
w1(R+0,u8(0x1ull));
}
B5049f5:{NFSU2_TR(0x5049f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5049f6:{NFSU2_TR(0x5049f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504a00:L504a00:{c.instructions+=9;NFSU2_TR(0x504a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504a04:{NFSU2_TR(0x504a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B504a07:{NFSU2_TR(0x504a07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504a08:{NFSU2_TR(0x504a08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504a09:{NFSU2_TR(0x504a09);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7992f4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B504a10:{NFSU2_TR(0x504a10);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B504a12:{NFSU2_TR(0x504a12);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B504a14:{NFSU2_TR(0x504a14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504a15:{NFSU2_TR(0x504a15);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L504a30;}}
}
B504a17:L504a17:{c.instructions+=3;NFSU2_TR(0x504a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B504a1a:{NFSU2_TR(0x504a1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B504a1d:{NFSU2_TR(0x504a1d);
__builtin_memmove((R+4),(R+4),4);
}
B504a20:L504a20:{c.instructions+=3;NFSU2_TR(0x504a20);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B504a24:{NFSU2_TR(0x504a24);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B504a26:{NFSU2_TR(0x504a26);
if(r1(R+518)){{goto L504a38;}}
}
B504a28:L504a28:{c.instructions+=4;NFSU2_TR(0x504a28);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B504a29:{NFSU2_TR(0x504a29);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x38ull))));
}
B504a2c:{NFSU2_TR(0x504a2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B504a2e:{NFSU2_TR(0x504a2e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504a20u);}goto L504a20;}}
}
B504a30:L504a30:{c.instructions+=5;NFSU2_TR(0x504a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504a31:{NFSU2_TR(0x504a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504a32:{NFSU2_TR(0x504a32);
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
B504a34:{NFSU2_TR(0x504a34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504a35:{NFSU2_TR(0x504a35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504a38:L504a38:{c.instructions+=6;NFSU2_TR(0x504a38);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B504a3b:{NFSU2_TR(0x504a3b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504a3d:{NFSU2_TR(0x504a3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504a3e:{NFSU2_TR(0x504a3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504a3f:{NFSU2_TR(0x504a3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504a40:{NFSU2_TR(0x504a40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504a50:L504a50:{c.instructions+=73;NFSU2_TR(0x504a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B504a53:{NFSU2_TR(0x504a53);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504a55:{NFSU2_TR(0x504a55);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504a59:{NFSU2_TR(0x504a59);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B504a5b:{NFSU2_TR(0x504a5b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504a5e:{NFSU2_TR(0x504a5e);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B504a60:{NFSU2_TR(0x504a60);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504a63:{NFSU2_TR(0x504a63);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B504a65:{NFSU2_TR(0x504a65);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504a69:{NFSU2_TR(0x504a69);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B504a6b:{NFSU2_TR(0x504a6b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504a6d:{NFSU2_TR(0x504a6d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504a71:{NFSU2_TR(0x504a71);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B504a73:{NFSU2_TR(0x504a73);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504a75:{NFSU2_TR(0x504a75);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504a79:{NFSU2_TR(0x504a79);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504a7d:{NFSU2_TR(0x504a7d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504a7f:{NFSU2_TR(0x504a7f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504a83:{NFSU2_TR(0x504a83);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B504a85:{NFSU2_TR(0x504a85);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504a88:{NFSU2_TR(0x504a88);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504a8c:{NFSU2_TR(0x504a8c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504a90:{NFSU2_TR(0x504a90);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504a93:{NFSU2_TR(0x504a93);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504a97:{NFSU2_TR(0x504a97);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504a9b:{NFSU2_TR(0x504a9b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504a9e:{NFSU2_TR(0x504a9e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504aa2:{NFSU2_TR(0x504aa2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B504aa4:{NFSU2_TR(0x504aa4);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504aa7:{NFSU2_TR(0x504aa7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504aab:{NFSU2_TR(0x504aab);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504aae:{NFSU2_TR(0x504aae);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504ab2:{NFSU2_TR(0x504ab2);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504ab5:{NFSU2_TR(0x504ab5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B504ab7:{NFSU2_TR(0x504ab7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504abb:{NFSU2_TR(0x504abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504abe:{NFSU2_TR(0x504abe);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B504ac2:{NFSU2_TR(0x504ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504ac5:{NFSU2_TR(0x504ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504ac8:{NFSU2_TR(0x504ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504acb:{NFSU2_TR(0x504acb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B504ad1:{NFSU2_TR(0x504ad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504ad4:{NFSU2_TR(0x504ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504ad7:{NFSU2_TR(0x504ad7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504ad9:{NFSU2_TR(0x504ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B504ae0:{NFSU2_TR(0x504ae0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504ae4:{NFSU2_TR(0x504ae4);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B504ae6:{NFSU2_TR(0x504ae6);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504ae9:{NFSU2_TR(0x504ae9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B504aeb:{NFSU2_TR(0x504aeb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B504aef:{NFSU2_TR(0x504aef);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504af2:{NFSU2_TR(0x504af2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B504af6:{NFSU2_TR(0x504af6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504af9:{NFSU2_TR(0x504af9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504afd:{NFSU2_TR(0x504afd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B504b01:{NFSU2_TR(0x504b01);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B504b07:{NFSU2_TR(0x504b07);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504b0a:{NFSU2_TR(0x504b0a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504b0e:{NFSU2_TR(0x504b0e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B504b12:{NFSU2_TR(0x504b12);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504b15:{NFSU2_TR(0x504b15);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504b19:{NFSU2_TR(0x504b19);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B504b1b:{NFSU2_TR(0x504b1b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504b1e:{NFSU2_TR(0x504b1e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B504b20:{NFSU2_TR(0x504b20);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504b24:{NFSU2_TR(0x504b24);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B504b28:{NFSU2_TR(0x504b28);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504b2b:{NFSU2_TR(0x504b2b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504b2f:{NFSU2_TR(0x504b2f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B504b33:{NFSU2_TR(0x504b33);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B504b39:{NFSU2_TR(0x504b39);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504b3c:{NFSU2_TR(0x504b3c);
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
B504b3f:{NFSU2_TR(0x504b3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504b50:L504b50:{c.instructions+=35;NFSU2_TR(0x504b50);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504b54:{NFSU2_TR(0x504b54);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504b58:{NFSU2_TR(0x504b58);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504b5b:{NFSU2_TR(0x504b5b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504b5e:{NFSU2_TR(0x504b5e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504b61:{NFSU2_TR(0x504b61);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504b63:{NFSU2_TR(0x504b63);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B504b65:{NFSU2_TR(0x504b65);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504b68:{NFSU2_TR(0x504b68);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504b6b:{NFSU2_TR(0x504b6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B504b6d:{NFSU2_TR(0x504b6d);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B504b70:{NFSU2_TR(0x504b70);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504b73:{NFSU2_TR(0x504b73);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504b76:{NFSU2_TR(0x504b76);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504b79:{NFSU2_TR(0x504b79);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504b7b:{NFSU2_TR(0x504b7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B504b7d:{NFSU2_TR(0x504b7d);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504b80:{NFSU2_TR(0x504b80);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504b83:{NFSU2_TR(0x504b83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B504b85:{NFSU2_TR(0x504b85);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B504b88:{NFSU2_TR(0x504b88);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504b8b:{NFSU2_TR(0x504b8b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504b8e:{NFSU2_TR(0x504b8e);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504b91:{NFSU2_TR(0x504b91);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504b94:{NFSU2_TR(0x504b94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B504b96:{NFSU2_TR(0x504b96);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504b98:{NFSU2_TR(0x504b98);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504b9a:{NFSU2_TR(0x504b9a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B504b9c:{NFSU2_TR(0x504b9c);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B504b9f:{NFSU2_TR(0x504b9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504ba3:{NFSU2_TR(0x504ba3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504ba5:{NFSU2_TR(0x504ba5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B504ba7:{NFSU2_TR(0x504ba7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504baa:{NFSU2_TR(0x504baa);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504bad:{NFSU2_TR(0x504bad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504bb0:L504bb0:{c.instructions+=6;NFSU2_TR(0x504bb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504bb4:{NFSU2_TR(0x504bb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B504bb7:{NFSU2_TR(0x504bb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B504bb9:{NFSU2_TR(0x504bb9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504bba:{NFSU2_TR(0x504bba);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504bbe:{NFSU2_TR(0x504bbe);
if(r1(R+518)){{goto L504c1d;}}
}
B504bc0:L504bc0:{c.instructions+=4;NFSU2_TR(0x504bc0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B504bc2:{NFSU2_TR(0x504bc2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B504bc6:{NFSU2_TR(0x504bc6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B504bc9:{NFSU2_TR(0x504bc9);
if(r1(R+518)){{goto L504c1d;}}
}
B504bcb:L504bcb:{c.instructions+=6;NFSU2_TR(0x504bcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B504bcd:{NFSU2_TR(0x504bcd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504bce:{NFSU2_TR(0x504bce);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B504bd2:{NFSU2_TR(0x504bd2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504bd3:{NFSU2_TR(0x504bd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504bd4:{NFSU2_TR(0x504bd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x504bd7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B504bd7:L504bd7:{c.instructions+=3;NFSU2_TR(0x504bd7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B504bd9:{NFSU2_TR(0x504bd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504bda:{NFSU2_TR(0x504bda);
if(r1(R+518)){{goto L504c1d;}}
}
B504bdc:L504bdc:{c.instructions+=10;NFSU2_TR(0x504bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504bdf:{NFSU2_TR(0x504bdf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x1cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504be2:{NFSU2_TR(0x504be2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504be3:{NFSU2_TR(0x504be3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B504be7:{NFSU2_TR(0x504be7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B504beb:{NFSU2_TR(0x504beb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504bec:{NFSU2_TR(0x504bec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504bed:{NFSU2_TR(0x504bed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B504bf5:{NFSU2_TR(0x504bf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B504bfd:{NFSU2_TR(0x504bfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x504c02ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504b50u);}goto L504b50;}
}
B504c02:L504c02:{c.instructions+=9;NFSU2_TR(0x504c02);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504c06:{NFSU2_TR(0x504c06);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504c0a:{NFSU2_TR(0x504c0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504c0e:{NFSU2_TR(0x504c0e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504c10:{NFSU2_TR(0x504c10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B504c13:{NFSU2_TR(0x504c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504c16:{NFSU2_TR(0x504c16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504c17:{NFSU2_TR(0x504c17);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504c1a:{NFSU2_TR(0x504c1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504c1d:L504c1d:{c.instructions+=10;NFSU2_TR(0x504c1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504c20:{NFSU2_TR(0x504c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B504c23:{NFSU2_TR(0x504c23);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504c27:{NFSU2_TR(0x504c27);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B504c2a:{NFSU2_TR(0x504c2a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B504c2c:{NFSU2_TR(0x504c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504c2f:{NFSU2_TR(0x504c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504c32:{NFSU2_TR(0x504c32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504c33:{NFSU2_TR(0x504c33);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504c36:{NFSU2_TR(0x504c36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504c40:L504c40:{c.instructions+=7;NFSU2_TR(0x504c40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B504c43:{NFSU2_TR(0x504c43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504c44:{NFSU2_TR(0x504c44);
__builtin_memmove((R+24),(R+4),4);
}
B504c46:{NFSU2_TR(0x504c46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504c47:{NFSU2_TR(0x504c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B504c4a:{NFSU2_TR(0x504c4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B504c4c:{NFSU2_TR(0x504c4c);
if(r1(R+518)){{goto L504dac;}}
}
B504c52:L504c52:{c.instructions+=3;NFSU2_TR(0x504c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504c55:{NFSU2_TR(0x504c55);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B504c57:{NFSU2_TR(0x504c57);
if(r1(R+518)){{goto L504dac;}}
}
B504c5d:L504c5d:{c.instructions+=3;NFSU2_TR(0x504c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504c60:{NFSU2_TR(0x504c60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B504c62:{NFSU2_TR(0x504c62);
if(r1(R+518)){{goto L504dac;}}
}
B504c68:L504c68:{c.instructions+=3;NFSU2_TR(0x504c68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B504c6b:{NFSU2_TR(0x504c6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B504c6d:{NFSU2_TR(0x504c6d);
if(r1(R+518)){{goto L504dac;}}
}
B504c73:L504c73:{c.instructions+=7;NFSU2_TR(0x504c73);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B504c75:{NFSU2_TR(0x504c75);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504c76:{NFSU2_TR(0x504c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B504c79:{NFSU2_TR(0x504c79);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504c7a:{NFSU2_TR(0x504c7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B504c7d:{NFSU2_TR(0x504c7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504c81:{NFSU2_TR(0x504c81);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L504c85;}}
}
B504c83:L504c83:{c.instructions+=1;NFSU2_TR(0x504c83);
__builtin_memmove((R+0),(R+4),4);
}
B504c85:L504c85:{c.instructions+=3;NFSU2_TR(0x504c85);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B504c87:{NFSU2_TR(0x504c87);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504c8b:{NFSU2_TR(0x504c8b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L504c91;}}
}
B504c8d:L504c8d:{c.instructions+=1;NFSU2_TR(0x504c8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504c91:L504c91:{c.instructions+=3;NFSU2_TR(0x504c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504c97:{NFSU2_TR(0x504c97);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B504c99:{NFSU2_TR(0x504c99);
if(r1(R+518)){{goto L504d2a;}}
}
B504c9f:L504c9f:{c.instructions+=2;NFSU2_TR(0x504c9f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B504ca1:{NFSU2_TR(0x504ca1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L504daa;}}
}
B504ca7:L504ca7:{c.instructions+=2;NFSU2_TR(0x504ca7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504cab:{NFSU2_TR(0x504cab);
{goto L504cb0;}
}
B504cb0:L504cb0:{c.instructions+=4;NFSU2_TR(0x504cb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B504cb4:{NFSU2_TR(0x504cb4);
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
B504cb6:{NFSU2_TR(0x504cb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B504cba:{NFSU2_TR(0x504cba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L504cf9;}}
}
B504cbc:L504cbc:{c.instructions+=1;NFSU2_TR(0x504cbc);
__builtin_memmove((R+16),(R+16),4);
}
B504cc0:L504cc0:{c.instructions+=6;NFSU2_TR(0x504cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504cc6:{NFSU2_TR(0x504cc6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504cc7:{NFSU2_TR(0x504cc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504cc8:{NFSU2_TR(0x504cc8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504cc9:{NFSU2_TR(0x504cc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504cca:{NFSU2_TR(0x504cca);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x504cd0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B504cd0:L504cd0:{c.instructions+=5;NFSU2_TR(0x504cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504cd3:{NFSU2_TR(0x504cd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B504cd6:{NFSU2_TR(0x504cd6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B504cd9:{NFSU2_TR(0x504cd9);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B504cdb:{NFSU2_TR(0x504cdb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L504ce4;}}
}
B504cdd:L504cdd:{c.instructions+=4;NFSU2_TR(0x504cdd);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504cde:{NFSU2_TR(0x504cde);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504cde);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504cde);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B504ce0:{NFSU2_TR(0x504ce0);
__builtin_memmove((R+28),(R+8),4);
}
B504ce2:{NFSU2_TR(0x504ce2);
{goto L504cf6;}
}
B504ce4:L504ce4:{c.instructions+=2;NFSU2_TR(0x504ce4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B504ce7:{NFSU2_TR(0x504ce7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L504cf4;}}
}
B504ce9:L504ce9:{c.instructions+=6;NFSU2_TR(0x504ce9);
w4(R+0,u32(0-u32(r4(R+0))));
}
B504ceb:{NFSU2_TR(0x504ceb);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504cec:{NFSU2_TR(0x504cec);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504cec);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504cec);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B504cee:{NFSU2_TR(0x504cee);
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B504cf0:{NFSU2_TR(0x504cf0);
__builtin_memmove((R+28),(R+4),4);
}
B504cf2:{NFSU2_TR(0x504cf2);
{goto L504cf6;}
}
B504cf4:L504cf4:{c.instructions+=1;NFSU2_TR(0x504cf4);
w1(R+512,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B504cf6:L504cf6:{c.instructions+=2;NFSU2_TR(0x504cf6);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504cf7:{NFSU2_TR(0x504cf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504cc0u);}goto L504cc0;}}
}
B504cf9:L504cf9:{c.instructions+=4;NFSU2_TR(0x504cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504cfc:{NFSU2_TR(0x504cfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B504cff:{NFSU2_TR(0x504cff);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B504d01:{NFSU2_TR(0x504d01);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L504d0a;}}
}
B504d03:L504d03:{c.instructions+=4;NFSU2_TR(0x504d03);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504d04:{NFSU2_TR(0x504d04);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504d04);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504d04);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B504d06:{NFSU2_TR(0x504d06);
__builtin_memmove((R+12),(R+8),4);
}
B504d08:{NFSU2_TR(0x504d08);
{goto L504d1c;}
}
B504d0a:L504d0a:{c.instructions+=2;NFSU2_TR(0x504d0a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B504d0d:{NFSU2_TR(0x504d0d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L504d1a;}}
}
B504d0f:L504d0f:{c.instructions+=6;NFSU2_TR(0x504d0f);
w4(R+0,u32(0-u32(r4(R+0))));
}
B504d11:{NFSU2_TR(0x504d11);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504d12:{NFSU2_TR(0x504d12);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504d12);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504d12);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B504d14:{NFSU2_TR(0x504d14);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B504d16:{NFSU2_TR(0x504d16);
__builtin_memmove((R+12),(R+4),4);
}
B504d18:{NFSU2_TR(0x504d18);
{goto L504d1c;}
}
B504d1a:L504d1a:{c.instructions+=1;NFSU2_TR(0x504d1a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B504d1c:L504d1c:{c.instructions+=2;NFSU2_TR(0x504d1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B504d20:{NFSU2_TR(0x504d20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504cb0u);}goto L504cb0;}}
}
B504d22:L504d22:{c.instructions+=6;NFSU2_TR(0x504d22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B504d23:{NFSU2_TR(0x504d23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504d24:{NFSU2_TR(0x504d24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504d25:{NFSU2_TR(0x504d25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504d26:{NFSU2_TR(0x504d26);
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
B504d29:{NFSU2_TR(0x504d29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504d2a:L504d2a:{c.instructions+=3;NFSU2_TR(0x504d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504d2d:{NFSU2_TR(0x504d2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B504d2f:{NFSU2_TR(0x504d2f);
if(r1(R+518)){{goto L504daa;}}
}
B504d31:L504d31:{c.instructions+=2;NFSU2_TR(0x504d31);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B504d33:{NFSU2_TR(0x504d33);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L504daa;}}
}
B504d35:L504d35:{c.instructions+=2;NFSU2_TR(0x504d35);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504d39:{NFSU2_TR(0x504d39);
__builtin_memmove((R+16),(R+16),4);
}
B504d40:L504d40:{c.instructions+=4;NFSU2_TR(0x504d40);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B504d44:{NFSU2_TR(0x504d44);
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
B504d46:{NFSU2_TR(0x504d46);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B504d4a:{NFSU2_TR(0x504d4a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L504d81;}}
}
B504d4c:L504d4c:{c.instructions+=1;NFSU2_TR(0x504d4c);
__builtin_memmove((R+16),(R+16),4);
}
B504d50:L504d50:{c.instructions+=6;NFSU2_TR(0x504d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504d53:{NFSU2_TR(0x504d53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B504d55:{NFSU2_TR(0x504d55);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504d56:{NFSU2_TR(0x504d56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504d57:{NFSU2_TR(0x504d57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504d58:{NFSU2_TR(0x504d58);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x504d5bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B504d5b:L504d5b:{c.instructions+=4;NFSU2_TR(0x504d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504d5e:{NFSU2_TR(0x504d5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B504d61:{NFSU2_TR(0x504d61);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B504d63:{NFSU2_TR(0x504d63);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L504d6c;}}
}
B504d65:L504d65:{c.instructions+=4;NFSU2_TR(0x504d65);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504d66:{NFSU2_TR(0x504d66);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504d66);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504d66);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B504d68:{NFSU2_TR(0x504d68);
__builtin_memmove((R+28),(R+8),4);
}
B504d6a:{NFSU2_TR(0x504d6a);
{goto L504d7e;}
}
B504d6c:L504d6c:{c.instructions+=2;NFSU2_TR(0x504d6c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B504d6f:{NFSU2_TR(0x504d6f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L504d7c;}}
}
B504d71:L504d71:{c.instructions+=6;NFSU2_TR(0x504d71);
w4(R+0,u32(0-u32(r4(R+0))));
}
B504d73:{NFSU2_TR(0x504d73);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504d74:{NFSU2_TR(0x504d74);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504d74);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504d74);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B504d76:{NFSU2_TR(0x504d76);
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B504d78:{NFSU2_TR(0x504d78);
__builtin_memmove((R+28),(R+4),4);
}
B504d7a:{NFSU2_TR(0x504d7a);
{goto L504d7e;}
}
B504d7c:L504d7c:{c.instructions+=1;NFSU2_TR(0x504d7c);
w1(R+512,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B504d7e:L504d7e:{c.instructions+=2;NFSU2_TR(0x504d7e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504d7f:{NFSU2_TR(0x504d7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504d50u);}goto L504d50;}}
}
B504d81:L504d81:{c.instructions+=4;NFSU2_TR(0x504d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504d84:{NFSU2_TR(0x504d84);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B504d87:{NFSU2_TR(0x504d87);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B504d89:{NFSU2_TR(0x504d89);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L504d92;}}
}
B504d8b:L504d8b:{c.instructions+=4;NFSU2_TR(0x504d8b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504d8c:{NFSU2_TR(0x504d8c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504d8c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504d8c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B504d8e:{NFSU2_TR(0x504d8e);
__builtin_memmove((R+12),(R+8),4);
}
B504d90:{NFSU2_TR(0x504d90);
{goto L504da4;}
}
B504d92:L504d92:{c.instructions+=2;NFSU2_TR(0x504d92);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B504d95:{NFSU2_TR(0x504d95);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L504da2;}}
}
B504d97:L504d97:{c.instructions+=6;NFSU2_TR(0x504d97);
w4(R+0,u32(0-u32(r4(R+0))));
}
B504d99:{NFSU2_TR(0x504d99);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504d9a:{NFSU2_TR(0x504d9a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504d9a);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504d9a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B504d9c:{NFSU2_TR(0x504d9c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B504d9e:{NFSU2_TR(0x504d9e);
__builtin_memmove((R+12),(R+4),4);
}
B504da0:{NFSU2_TR(0x504da0);
{goto L504da4;}
}
B504da2:L504da2:{c.instructions+=1;NFSU2_TR(0x504da2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B504da4:L504da4:{c.instructions+=2;NFSU2_TR(0x504da4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B504da8:{NFSU2_TR(0x504da8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504d40u);}goto L504d40;}}
}
B504daa:L504daa:{c.instructions+=2;NFSU2_TR(0x504daa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B504dab:{NFSU2_TR(0x504dab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504dac:L504dac:{c.instructions+=4;NFSU2_TR(0x504dac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504dad:{NFSU2_TR(0x504dad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504dae:{NFSU2_TR(0x504dae);
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
B504db1:{NFSU2_TR(0x504db1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504dc0:L504dc0:{c.instructions+=5;NFSU2_TR(0x504dc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504dc1:{NFSU2_TR(0x504dc1);
__builtin_memmove((R+24),(R+4),4);
}
B504dc3:{NFSU2_TR(0x504dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504dc9:{NFSU2_TR(0x504dc9);
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
B504dcb:{NFSU2_TR(0x504dcb);
if(r1(R+518)){{goto L504dd3;}}
}
B504dcd:L504dcd:{c.instructions+=2;NFSU2_TR(0x504dcd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504dce:{NFSU2_TR(0x504dce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x504dd0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B504dd0:L504dd0:{c.instructions+=1;NFSU2_TR(0x504dd0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B504dd3:L504dd3:{c.instructions+=8;NFSU2_TR(0x504dd3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504dd7:{NFSU2_TR(0x504dd7);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B504ddd:{NFSU2_TR(0x504ddd);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B504de3:{NFSU2_TR(0x504de3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B504de9:{NFSU2_TR(0x504de9);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B504def:{NFSU2_TR(0x504def);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B504df1:{NFSU2_TR(0x504df1);
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
B504df4:{NFSU2_TR(0x504df4);
if(r1(R+514)){{goto L504e14;}}
}
B504df6:L504df6:{c.instructions+=7;NFSU2_TR(0x504df6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B504df8:{NFSU2_TR(0x504df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B504e02:{NFSU2_TR(0x504e02);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504e08:{NFSU2_TR(0x504e08);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B504e0a:{NFSU2_TR(0x504e0a);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504e10:{NFSU2_TR(0x504e10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504e11:{NFSU2_TR(0x504e11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504e14:L504e14:{c.instructions+=4;NFSU2_TR(0x504e14);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B504e1a:{NFSU2_TR(0x504e1a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B504e1c:{NFSU2_TR(0x504e1c);
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
B504e1f:{NFSU2_TR(0x504e1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L504e39;}}
}
B504e21:L504e21:{c.instructions+=4;NFSU2_TR(0x504e21);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B504e27:{NFSU2_TR(0x504e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B504e31:{NFSU2_TR(0x504e31);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B504e33:{NFSU2_TR(0x504e33);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B504e39:L504e39:{c.instructions+=2;NFSU2_TR(0x504e39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504e3a:{NFSU2_TR(0x504e3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504e40:L504e40:{c.instructions+=7;NFSU2_TR(0x504e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504e43:{NFSU2_TR(0x504e43);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B504e45:{NFSU2_TR(0x504e45);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504e46:{NFSU2_TR(0x504e46);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504e47:{NFSU2_TR(0x504e47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504e48:{NFSU2_TR(0x504e48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504e49:{NFSU2_TR(0x504e49);
if(r1(R+518)){{goto L504eb6;}}
}
B504e4b:L504e4b:{c.instructions+=6;NFSU2_TR(0x504e4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504e4f:{NFSU2_TR(0x504e4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B504e51:{NFSU2_TR(0x504e51);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B504e55:{NFSU2_TR(0x504e55);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B504e57:{NFSU2_TR(0x504e57);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504e5b:{NFSU2_TR(0x504e5b);
if(r1(R+519)){{goto L504e64;}}
}
B504e5d:L504e5d:{c.instructions+=4;NFSU2_TR(0x504e5d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504e5e:{NFSU2_TR(0x504e5e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504e5e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504e5e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B504e60:{NFSU2_TR(0x504e60);
__builtin_memmove((R+0),(R+8),4);
}
B504e62:{NFSU2_TR(0x504e62);
{goto L504e76;}
}
B504e64:L504e64:{c.instructions+=2;NFSU2_TR(0x504e64);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B504e67:{NFSU2_TR(0x504e67);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L504e74;}}
}
B504e69:L504e69:{c.instructions+=6;NFSU2_TR(0x504e69);
w4(R+0,u32(0-u32(r4(R+0))));
}
B504e6b:{NFSU2_TR(0x504e6b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504e6c:{NFSU2_TR(0x504e6c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504e6c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504e6c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B504e6e:{NFSU2_TR(0x504e6e);
__builtin_memmove((R+0),(R+4),4);
}
B504e70:{NFSU2_TR(0x504e70);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B504e72:{NFSU2_TR(0x504e72);
{goto L504e76;}
}
B504e74:L504e74:{c.instructions+=1;NFSU2_TR(0x504e74);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B504e76:L504e76:{c.instructions+=5;NFSU2_TR(0x504e76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B504e78:{NFSU2_TR(0x504e78);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504e7c:{NFSU2_TR(0x504e7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B504e7e:{NFSU2_TR(0x504e7e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504e80:{NFSU2_TR(0x504e80);
if(r1(R+519)){{goto L504e92;}}
}
B504e82:L504e82:{c.instructions+=10;NFSU2_TR(0x504e82);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504e83:{NFSU2_TR(0x504e83);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504e83);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504e83);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B504e85:{NFSU2_TR(0x504e85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504e86:{NFSU2_TR(0x504e86);
w1(R+0,u8(0x1ull));
}
B504e88:{NFSU2_TR(0x504e88);
__builtin_memmove((R+4),(R+8),4);
}
B504e8a:{NFSU2_TR(0x504e8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B504e8c:{NFSU2_TR(0x504e8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504e8d:{NFSU2_TR(0x504e8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B504e8e:{NFSU2_TR(0x504e8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504e8f:{NFSU2_TR(0x504e8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504e92:L504e92:{c.instructions+=2;NFSU2_TR(0x504e92);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B504e95:{NFSU2_TR(0x504e95);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L504ea9;}}
}
B504e97:L504e97:{c.instructions+=11;NFSU2_TR(0x504e97);
w4(R+0,u32(0-u32(r4(R+0))));
}
B504e99:{NFSU2_TR(0x504e99);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504e9a:{NFSU2_TR(0x504e9a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504e9a);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504e9a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B504e9c:{NFSU2_TR(0x504e9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504e9d:{NFSU2_TR(0x504e9d);
w1(R+0,u8(0x1ull));
}
B504e9f:{NFSU2_TR(0x504e9f);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504ea1:{NFSU2_TR(0x504ea1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B504ea3:{NFSU2_TR(0x504ea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504ea4:{NFSU2_TR(0x504ea4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B504ea5:{NFSU2_TR(0x504ea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504ea6:{NFSU2_TR(0x504ea6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504ea9:L504ea9:{c.instructions+=8;NFSU2_TR(0x504ea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504eaa:{NFSU2_TR(0x504eaa);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504eac:{NFSU2_TR(0x504eac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B504eae:{NFSU2_TR(0x504eae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504eaf:{NFSU2_TR(0x504eaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B504eb0:{NFSU2_TR(0x504eb0);
w1(R+0,u8(0x1ull));
}
B504eb2:{NFSU2_TR(0x504eb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504eb3:{NFSU2_TR(0x504eb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504eb6:L504eb6:{c.instructions+=2;NFSU2_TR(0x504eb6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B504eb8:{NFSU2_TR(0x504eb8);
if(r1(R+518)){{goto L504f16;}}
}
B504eba:L504eba:{c.instructions+=2;NFSU2_TR(0x504eba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B504ebc:{NFSU2_TR(0x504ebc);
if(r1(R+518)){{goto L504f16;}}
}
B504ebe:L504ebe:{c.instructions+=4;NFSU2_TR(0x504ebe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504ec2:{NFSU2_TR(0x504ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B504ec4:{NFSU2_TR(0x504ec4);
u8 U[14];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B504ec8:{NFSU2_TR(0x504ec8);
if(r1(R+519)){{goto L504ee2;}}
}
B504eca:L504eca:{c.instructions+=12;NFSU2_TR(0x504eca);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504ecb:{NFSU2_TR(0x504ecb);
u8 U[64];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504ecb);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504ecb);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B504ecf:{NFSU2_TR(0x504ecf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504ed3:{NFSU2_TR(0x504ed3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504ed4:{NFSU2_TR(0x504ed4);
__builtin_memmove((R+4),(R+8),4);
}
B504ed6:{NFSU2_TR(0x504ed6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B504ed8:{NFSU2_TR(0x504ed8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504ed9:{NFSU2_TR(0x504ed9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B504eda:{NFSU2_TR(0x504eda);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B504edc:{NFSU2_TR(0x504edc);
w1(R+0,u8(0x1ull));
}
B504ede:{NFSU2_TR(0x504ede);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504edf:{NFSU2_TR(0x504edf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504ee2:L504ee2:{c.instructions+=3;NFSU2_TR(0x504ee2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504ee6:{NFSU2_TR(0x504ee6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B504ee9:{NFSU2_TR(0x504ee9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L504f03;}}
}
B504eeb:L504eeb:{c.instructions+=13;NFSU2_TR(0x504eeb);
w4(R+0,u32(0-u32(r4(R+0))));
}
B504eed:{NFSU2_TR(0x504eed);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504eee:{NFSU2_TR(0x504eee);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504eee);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504eee);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B504ef0:{NFSU2_TR(0x504ef0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504ef4:{NFSU2_TR(0x504ef4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504ef5:{NFSU2_TR(0x504ef5);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504ef7:{NFSU2_TR(0x504ef7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B504ef9:{NFSU2_TR(0x504ef9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504efa:{NFSU2_TR(0x504efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B504efb:{NFSU2_TR(0x504efb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B504efd:{NFSU2_TR(0x504efd);
w1(R+0,u8(0x1ull));
}
B504eff:{NFSU2_TR(0x504eff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504f00:{NFSU2_TR(0x504f00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504f03:L504f03:{c.instructions+=10;NFSU2_TR(0x504f03);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504f07:{NFSU2_TR(0x504f07);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504f09:{NFSU2_TR(0x504f09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504f0a:{NFSU2_TR(0x504f0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B504f0c:{NFSU2_TR(0x504f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504f0d:{NFSU2_TR(0x504f0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B504f0e:{NFSU2_TR(0x504f0e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B504f10:{NFSU2_TR(0x504f10);
w1(R+0,u8(0x1ull));
}
B504f12:{NFSU2_TR(0x504f12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504f13:{NFSU2_TR(0x504f13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504f16:L504f16:{c.instructions+=7;NFSU2_TR(0x504f16);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504f1a:{NFSU2_TR(0x504f1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B504f1c:{NFSU2_TR(0x504f1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B504f20:{NFSU2_TR(0x504f20);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B504f24:{NFSU2_TR(0x504f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B504f27:{NFSU2_TR(0x504f27);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B504f29:{NFSU2_TR(0x504f29);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L504f32;}}
}
B504f2b:L504f2b:{c.instructions+=4;NFSU2_TR(0x504f2b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504f2c:{NFSU2_TR(0x504f2c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504f2c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504f2c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B504f2e:{NFSU2_TR(0x504f2e);
__builtin_memmove((R+0),(R+8),4);
}
B504f30:{NFSU2_TR(0x504f30);
{goto L504f44;}
}
B504f32:L504f32:{c.instructions+=2;NFSU2_TR(0x504f32);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B504f35:{NFSU2_TR(0x504f35);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L504f42;}}
}
B504f37:L504f37:{c.instructions+=6;NFSU2_TR(0x504f37);
w4(R+0,u32(0-u32(r4(R+0))));
}
B504f39:{NFSU2_TR(0x504f39);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B504f3a:{NFSU2_TR(0x504f3a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504f3a);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x504f3a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B504f3c:{NFSU2_TR(0x504f3c);
__builtin_memmove((R+0),(R+24),4);
}
B504f3e:{NFSU2_TR(0x504f3e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B504f40:{NFSU2_TR(0x504f40);
{goto L504f44;}
}
B504f42:L504f42:{c.instructions+=1;NFSU2_TR(0x504f42);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B504f44:L504f44:{c.instructions+=3;NFSU2_TR(0x504f44);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B504f46:{NFSU2_TR(0x504f46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B504f48:{NFSU2_TR(0x504f48);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L504f5d;}}
}
B504f4a:L504f4a:{c.instructions+=3;NFSU2_TR(0x504f4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504f4e:{NFSU2_TR(0x504f4e);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B504f50:{NFSU2_TR(0x504f50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L504f7a;}}
}
B504f52:L504f52:{c.instructions+=7;NFSU2_TR(0x504f52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504f53:{NFSU2_TR(0x504f53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504f54:{NFSU2_TR(0x504f54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B504f55:{NFSU2_TR(0x504f55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B504f57:{NFSU2_TR(0x504f57);
w1(R+0,u8(0x1ull));
}
B504f59:{NFSU2_TR(0x504f59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504f5a:{NFSU2_TR(0x504f5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504f5d:L504f5d:{c.instructions+=4;NFSU2_TR(0x504f5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B504f61:{NFSU2_TR(0x504f61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B504f64:{NFSU2_TR(0x504f64);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B504f66:{NFSU2_TR(0x504f66);
if(r1(R+518)){{goto L504f7a;}}
}
B504f68:L504f68:{c.instructions+=2;NFSU2_TR(0x504f68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B504f6a:{NFSU2_TR(0x504f6a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L504f70;}}
}
B504f6c:L504f6c:{c.instructions+=2;NFSU2_TR(0x504f6c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B504f6e:{NFSU2_TR(0x504f6e);
{goto L504f74;}
}
B504f70:L504f70:{c.instructions+=2;NFSU2_TR(0x504f70);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B504f72:{NFSU2_TR(0x504f72);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B504f74:L504f74:{c.instructions+=2;NFSU2_TR(0x504f74);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B504f78:{NFSU2_TR(0x504f78);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L504f83;}}
}
B504f7a:L504f7a:{c.instructions+=6;NFSU2_TR(0x504f7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504f7b:{NFSU2_TR(0x504f7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504f7c:{NFSU2_TR(0x504f7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B504f7d:{NFSU2_TR(0x504f7d);
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
B504f7f:{NFSU2_TR(0x504f7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504f80:{NFSU2_TR(0x504f80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504f83:L504f83:{c.instructions+=4;NFSU2_TR(0x504f83);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B504f85:{NFSU2_TR(0x504f85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504f86:{NFSU2_TR(0x504f86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504f87:{NFSU2_TR(0x504f87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x504f8cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504790u);}goto L504790;}
}
B504f8c:L504f8c:{c.instructions+=8;NFSU2_TR(0x504f8c);
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
B504f8f:{NFSU2_TR(0x504f8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504f90:{NFSU2_TR(0x504f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504f91:{NFSU2_TR(0x504f91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B504f94:{NFSU2_TR(0x504f94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B504f95:{NFSU2_TR(0x504f95);
w1(R+0,u8(0x1ull));
}
B504f97:{NFSU2_TR(0x504f97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504f98:{NFSU2_TR(0x504f98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504fa0:L504fa0:{c.instructions+=12;NFSU2_TR(0x504fa0);
__builtin_memmove((R+8),(R+4),4);
}
B504fa2:{NFSU2_TR(0x504fa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B504fa6:{NFSU2_TR(0x504fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B504fa9:{NFSU2_TR(0x504fa9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504faa:{NFSU2_TR(0x504faa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504fab:{NFSU2_TR(0x504fab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504fac:{NFSU2_TR(0x504fac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B504fb0:{NFSU2_TR(0x504fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B504fb3:{NFSU2_TR(0x504fb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B504fb5:{NFSU2_TR(0x504fb5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B504fb7:{NFSU2_TR(0x504fb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504fba:{NFSU2_TR(0x504fba);
__builtin_memmove((R+12),(R+12),4);
}
B504fc0:L504fc0:{c.instructions+=5;NFSU2_TR(0x504fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B504fc3:{NFSU2_TR(0x504fc3);
w4(R+0,u32(0x1ull));
}
B504fc8:{NFSU2_TR(0x504fc8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B504fca:{NFSU2_TR(0x504fca);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B504fcc:{NFSU2_TR(0x504fcc);
if(r1(R+518)){{goto L504fdc;}}
}
B504fce:L504fce:{c.instructions+=2;NFSU2_TR(0x504fce);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+4,u32(u32(r4(U+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B504fd0:{NFSU2_TR(0x504fd0);
if(r1(R+518)){{goto L504fd6;}}
}
B504fd2:L504fd2:{c.instructions+=2;NFSU2_TR(0x504fd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+28))));
s4(u32(r4(R+24)),r4(U+0));
}
B504fd4:{NFSU2_TR(0x504fd4);
{goto L504fdc;}
}
B504fd6:L504fd6:{c.instructions+=1;NFSU2_TR(0x504fd6);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B504fdc:L504fdc:{c.instructions+=4;NFSU2_TR(0x504fdc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B504fdd:{NFSU2_TR(0x504fdd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B504fe0:{NFSU2_TR(0x504fe0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B504fe3:{NFSU2_TR(0x504fe3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x504fc0u);}goto L504fc0;}}
}
B504fe5:L504fe5:{c.instructions+=4;NFSU2_TR(0x504fe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B504fe6:{NFSU2_TR(0x504fe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B504fe7:{NFSU2_TR(0x504fe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B504fe8:{NFSU2_TR(0x504fe8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B504ff0:L504ff0:{c.instructions+=7;NFSU2_TR(0x504ff0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504ff1:{NFSU2_TR(0x504ff1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504ff2:{NFSU2_TR(0x504ff2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B504ff3:{NFSU2_TR(0x504ff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B504ff7:{NFSU2_TR(0x504ff7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B504ffa:{NFSU2_TR(0x504ffa);
w4(R+8,u32(0x2ull));
}
B504fff:{NFSU2_TR(0x504fff);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
TAIL_STATIC(0x505002u,505);
}
XIT:NFSU2_TR_EXIT(0x504,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
