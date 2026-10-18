#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x487,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x487,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_487(u8* __restrict R,Cpu& c);
u32 page_487(Cpu& c){return body_487(c.regs.data(),c);}
__attribute__((noinline)) u32 body_487(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x487001:goto L487001;
case 0x487005:c.instructions+=16;goto B487005;
case 0x487008:c.instructions+=15;goto B487008;
case 0x48700c:c.instructions+=14;goto B48700c;
case 0x487010:c.instructions+=13;goto B487010;
case 0x487013:c.instructions+=12;goto B487013;
case 0x487015:c.instructions+=11;goto B487015;
case 0x487019:c.instructions+=10;goto B487019;
case 0x48701b:c.instructions+=9;goto B48701b;
case 0x48701f:c.instructions+=8;goto B48701f;
case 0x487022:c.instructions+=7;goto B487022;
case 0x487026:c.instructions+=6;goto B487026;
case 0x48702a:c.instructions+=5;goto B48702a;
case 0x48702d:c.instructions+=4;goto B48702d;
case 0x487031:c.instructions+=3;goto B487031;
case 0x487034:c.instructions+=2;goto B487034;
case 0x487037:c.instructions+=1;goto B487037;
case 0x487040:goto L487040;
case 0x487044:c.instructions+=18;goto B487044;
case 0x487048:c.instructions+=17;goto B487048;
case 0x48704a:c.instructions+=16;goto B48704a;
case 0x48704e:c.instructions+=15;goto B48704e;
case 0x487051:c.instructions+=14;goto B487051;
case 0x487055:c.instructions+=13;goto B487055;
case 0x487058:c.instructions+=12;goto B487058;
case 0x487059:c.instructions+=11;goto B487059;
case 0x48705b:c.instructions+=10;goto B48705b;
case 0x48705d:c.instructions+=9;goto B48705d;
case 0x48705f:c.instructions+=8;goto B48705f;
case 0x487062:c.instructions+=7;goto B487062;
case 0x487065:c.instructions+=6;goto B487065;
case 0x487068:c.instructions+=5;goto B487068;
case 0x48706b:c.instructions+=4;goto B48706b;
case 0x48706e:c.instructions+=3;goto B48706e;
case 0x487071:c.instructions+=2;goto B487071;
case 0x487072:c.instructions+=1;goto B487072;
case 0x487080:goto L487080;
case 0x487084:c.instructions+=14;goto B487084;
case 0x487087:c.instructions+=13;goto B487087;
case 0x48708b:c.instructions+=12;goto B48708b;
case 0x48708c:c.instructions+=11;goto B48708c;
case 0x48708e:c.instructions+=10;goto B48708e;
case 0x487090:c.instructions+=9;goto B487090;
case 0x487092:c.instructions+=8;goto B487092;
case 0x487095:c.instructions+=7;goto B487095;
case 0x487098:c.instructions+=6;goto B487098;
case 0x48709b:c.instructions+=5;goto B48709b;
case 0x48709e:c.instructions+=4;goto B48709e;
case 0x4870a1:c.instructions+=3;goto B4870a1;
case 0x4870a4:c.instructions+=2;goto B4870a4;
case 0x4870a5:c.instructions+=1;goto B4870a5;
case 0x4870b0:goto L4870b0;
case 0x4870b3:c.instructions+=36;goto B4870b3;
case 0x4870b6:c.instructions+=35;goto B4870b6;
case 0x4870ba:c.instructions+=34;goto B4870ba;
case 0x4870bd:c.instructions+=33;goto B4870bd;
case 0x4870bf:c.instructions+=32;goto B4870bf;
case 0x4870c1:c.instructions+=31;goto B4870c1;
case 0x4870c3:c.instructions+=30;goto B4870c3;
case 0x4870c5:c.instructions+=29;goto B4870c5;
case 0x4870c7:c.instructions+=28;goto B4870c7;
case 0x4870c9:c.instructions+=27;goto B4870c9;
case 0x4870cb:c.instructions+=26;goto B4870cb;
case 0x4870cd:c.instructions+=25;goto B4870cd;
case 0x4870cf:c.instructions+=24;goto B4870cf;
case 0x4870d1:c.instructions+=23;goto B4870d1;
case 0x4870d3:c.instructions+=22;goto B4870d3;
case 0x4870d5:c.instructions+=21;goto B4870d5;
case 0x4870d7:c.instructions+=20;goto B4870d7;
case 0x4870dd:c.instructions+=19;goto B4870dd;
case 0x4870df:c.instructions+=18;goto B4870df;
case 0x4870e1:c.instructions+=17;goto B4870e1;
case 0x4870e5:c.instructions+=16;goto B4870e5;
case 0x4870e9:c.instructions+=15;goto B4870e9;
case 0x4870eb:c.instructions+=14;goto B4870eb;
case 0x4870ee:c.instructions+=13;goto B4870ee;
case 0x4870f2:c.instructions+=12;goto B4870f2;
case 0x4870f5:c.instructions+=11;goto B4870f5;
case 0x4870f7:c.instructions+=10;goto B4870f7;
case 0x4870f9:c.instructions+=9;goto B4870f9;
case 0x4870fd:c.instructions+=8;goto B4870fd;
case 0x487100:c.instructions+=7;goto B487100;
case 0x487104:c.instructions+=6;goto B487104;
case 0x487108:c.instructions+=5;goto B487108;
case 0x48710b:c.instructions+=4;goto B48710b;
case 0x48710f:c.instructions+=3;goto B48710f;
case 0x487112:c.instructions+=2;goto B487112;
case 0x487115:c.instructions+=1;goto B487115;
case 0x487120:goto L487120;
case 0x487124:c.instructions+=19;goto B487124;
case 0x487126:c.instructions+=18;goto B487126;
case 0x487128:c.instructions+=17;goto B487128;
case 0x48712b:c.instructions+=16;goto B48712b;
case 0x48712e:c.instructions+=15;goto B48712e;
case 0x487131:c.instructions+=14;goto B487131;
case 0x487134:c.instructions+=13;goto B487134;
case 0x487138:c.instructions+=12;goto B487138;
case 0x487139:c.instructions+=11;goto B487139;
case 0x48713b:c.instructions+=10;goto B48713b;
case 0x48713d:c.instructions+=9;goto B48713d;
case 0x48713f:c.instructions+=8;goto B48713f;
case 0x487142:c.instructions+=7;goto B487142;
case 0x487145:c.instructions+=6;goto B487145;
case 0x487148:c.instructions+=5;goto B487148;
case 0x48714b:c.instructions+=4;goto B48714b;
case 0x48714e:c.instructions+=3;goto B48714e;
case 0x487151:c.instructions+=2;goto B487151;
case 0x487152:c.instructions+=1;goto B487152;
case 0x487160:goto L487160;
case 0x487164:c.instructions+=14;goto B487164;
case 0x487166:c.instructions+=13;goto B487166;
case 0x48716a:c.instructions+=12;goto B48716a;
case 0x48716b:c.instructions+=11;goto B48716b;
case 0x48716d:c.instructions+=10;goto B48716d;
case 0x48716f:c.instructions+=9;goto B48716f;
case 0x487171:c.instructions+=8;goto B487171;
case 0x487174:c.instructions+=7;goto B487174;
case 0x487177:c.instructions+=6;goto B487177;
case 0x48717a:c.instructions+=5;goto B48717a;
case 0x48717d:c.instructions+=4;goto B48717d;
case 0x487180:c.instructions+=3;goto B487180;
case 0x487183:c.instructions+=2;goto B487183;
case 0x487184:c.instructions+=1;goto B487184;
case 0x487190:goto L487190;
case 0x487191:c.instructions+=19;goto B487191;
case 0x487193:c.instructions+=18;goto B487193;
case 0x487196:c.instructions+=17;goto B487196;
case 0x487199:c.instructions+=16;goto B487199;
case 0x48719c:c.instructions+=15;goto B48719c;
case 0x48719f:c.instructions+=14;goto B48719f;
case 0x4871a3:c.instructions+=13;goto B4871a3;
case 0x4871a6:c.instructions+=12;goto B4871a6;
case 0x4871aa:c.instructions+=11;goto B4871aa;
case 0x4871ae:c.instructions+=10;goto B4871ae;
case 0x4871af:c.instructions+=9;goto B4871af;
case 0x4871b3:c.instructions+=8;goto B4871b3;
case 0x4871b4:c.instructions+=7;goto B4871b4;
case 0x4871b8:c.instructions+=6;goto B4871b8;
case 0x4871b9:c.instructions+=5;goto B4871b9;
case 0x4871c1:c.instructions+=4;goto B4871c1;
case 0x4871c9:c.instructions+=3;goto B4871c9;
case 0x4871d1:c.instructions+=2;goto B4871d1;
case 0x4871d9:c.instructions+=1;goto B4871d9;
case 0x4871de:goto L4871de;
case 0x4871e1:c.instructions+=13;goto B4871e1;
case 0x4871e5:c.instructions+=12;goto B4871e5;
case 0x4871e7:c.instructions+=11;goto B4871e7;
case 0x4871e9:c.instructions+=10;goto B4871e9;
case 0x4871ed:c.instructions+=9;goto B4871ed;
case 0x4871f0:c.instructions+=8;goto B4871f0;
case 0x4871f4:c.instructions+=7;goto B4871f4;
case 0x4871f7:c.instructions+=6;goto B4871f7;
case 0x4871fb:c.instructions+=5;goto B4871fb;
case 0x4871fe:c.instructions+=4;goto B4871fe;
case 0x487201:c.instructions+=3;goto B487201;
case 0x487203:c.instructions+=2;goto B487203;
case 0x487204:c.instructions+=1;goto B487204;
case 0x487210:goto L487210;
case 0x487211:c.instructions+=9;goto B487211;
case 0x487213:c.instructions+=8;goto B487213;
case 0x487216:c.instructions+=7;goto B487216;
case 0x487219:c.instructions+=6;goto B487219;
case 0x48721c:c.instructions+=5;goto B48721c;
case 0x48721d:c.instructions+=4;goto B48721d;
case 0x48721e:c.instructions+=3;goto B48721e;
case 0x487222:c.instructions+=2;goto B487222;
case 0x487223:c.instructions+=1;goto B487223;
case 0x487228:goto L487228;
case 0x48722c:c.instructions+=19;goto B48722c;
case 0x487230:c.instructions+=18;goto B487230;
case 0x487234:c.instructions+=17;goto B487234;
case 0x487238:c.instructions+=16;goto B487238;
case 0x48723c:c.instructions+=15;goto B48723c;
case 0x48723f:c.instructions+=14;goto B48723f;
case 0x487243:c.instructions+=13;goto B487243;
case 0x487247:c.instructions+=12;goto B487247;
case 0x487249:c.instructions+=11;goto B487249;
case 0x48724b:c.instructions+=10;goto B48724b;
case 0x48724f:c.instructions+=9;goto B48724f;
case 0x487252:c.instructions+=8;goto B487252;
case 0x487256:c.instructions+=7;goto B487256;
case 0x487259:c.instructions+=6;goto B487259;
case 0x48725d:c.instructions+=5;goto B48725d;
case 0x487260:c.instructions+=4;goto B487260;
case 0x487263:c.instructions+=3;goto B487263;
case 0x487265:c.instructions+=2;goto B487265;
case 0x487266:c.instructions+=1;goto B487266;
case 0x487270:goto L487270;
case 0x487272:c.instructions+=60;goto B487272;
case 0x487274:c.instructions+=59;goto B487274;
case 0x487276:c.instructions+=58;goto B487276;
case 0x487279:c.instructions+=57;goto B487279;
case 0x48727c:c.instructions+=56;goto B48727c;
case 0x48727f:c.instructions+=55;goto B48727f;
case 0x487282:c.instructions+=54;goto B487282;
case 0x487285:c.instructions+=53;goto B487285;
case 0x487288:c.instructions+=52;goto B487288;
case 0x48728b:c.instructions+=51;goto B48728b;
case 0x48728e:c.instructions+=50;goto B48728e;
case 0x487291:c.instructions+=49;goto B487291;
case 0x487294:c.instructions+=48;goto B487294;
case 0x487297:c.instructions+=47;goto B487297;
case 0x48729a:c.instructions+=46;goto B48729a;
case 0x48729d:c.instructions+=45;goto B48729d;
case 0x4872a0:c.instructions+=44;goto B4872a0;
case 0x4872a3:c.instructions+=43;goto B4872a3;
case 0x4872a7:c.instructions+=42;goto B4872a7;
case 0x4872a8:c.instructions+=41;goto B4872a8;
case 0x4872aa:c.instructions+=40;goto B4872aa;
case 0x4872ab:c.instructions+=39;goto B4872ab;
case 0x4872ad:c.instructions+=38;goto B4872ad;
case 0x4872af:c.instructions+=37;goto B4872af;
case 0x4872b1:c.instructions+=36;goto B4872b1;
case 0x4872b4:c.instructions+=35;goto B4872b4;
case 0x4872b7:c.instructions+=34;goto B4872b7;
case 0x4872ba:c.instructions+=33;goto B4872ba;
case 0x4872bd:c.instructions+=32;goto B4872bd;
case 0x4872c0:c.instructions+=31;goto B4872c0;
case 0x4872c3:c.instructions+=30;goto B4872c3;
case 0x4872c6:c.instructions+=29;goto B4872c6;
case 0x4872c8:c.instructions+=28;goto B4872c8;
case 0x4872cb:c.instructions+=27;goto B4872cb;
case 0x4872ce:c.instructions+=26;goto B4872ce;
case 0x4872d1:c.instructions+=25;goto B4872d1;
case 0x4872d4:c.instructions+=24;goto B4872d4;
case 0x4872d7:c.instructions+=23;goto B4872d7;
case 0x4872da:c.instructions+=22;goto B4872da;
case 0x4872dd:c.instructions+=21;goto B4872dd;
case 0x4872e0:c.instructions+=20;goto B4872e0;
case 0x4872e2:c.instructions+=19;goto B4872e2;
case 0x4872e5:c.instructions+=18;goto B4872e5;
case 0x4872e8:c.instructions+=17;goto B4872e8;
case 0x4872eb:c.instructions+=16;goto B4872eb;
case 0x4872ee:c.instructions+=15;goto B4872ee;
case 0x4872f1:c.instructions+=14;goto B4872f1;
case 0x4872f4:c.instructions+=13;goto B4872f4;
case 0x4872f7:c.instructions+=12;goto B4872f7;
case 0x4872fa:c.instructions+=11;goto B4872fa;
case 0x4872fc:c.instructions+=10;goto B4872fc;
case 0x4872ff:c.instructions+=9;goto B4872ff;
case 0x487302:c.instructions+=8;goto B487302;
case 0x487305:c.instructions+=7;goto B487305;
case 0x487308:c.instructions+=6;goto B487308;
case 0x48730b:c.instructions+=5;goto B48730b;
case 0x48730e:c.instructions+=4;goto B48730e;
case 0x48730f:c.instructions+=3;goto B48730f;
case 0x487312:c.instructions+=2;goto B487312;
case 0x487313:c.instructions+=1;goto B487313;
case 0x487320:goto L487320;
case 0x487323:c.instructions+=15;goto B487323;
case 0x487326:c.instructions+=14;goto B487326;
case 0x48732a:c.instructions+=13;goto B48732a;
case 0x48732e:c.instructions+=12;goto B48732e;
case 0x487330:c.instructions+=11;goto B487330;
case 0x487332:c.instructions+=10;goto B487332;
case 0x487336:c.instructions+=9;goto B487336;
case 0x487338:c.instructions+=8;goto B487338;
case 0x48733c:c.instructions+=7;goto B48733c;
case 0x48733f:c.instructions+=6;goto B48733f;
case 0x487343:c.instructions+=5;goto B487343;
case 0x487346:c.instructions+=4;goto B487346;
case 0x48734a:c.instructions+=3;goto B48734a;
case 0x48734d:c.instructions+=2;goto B48734d;
case 0x487350:c.instructions+=1;goto B487350;
case 0x487360:goto L487360;
case 0x487364:c.instructions+=16;goto B487364;
case 0x487366:c.instructions+=15;goto B487366;
case 0x487368:c.instructions+=14;goto B487368;
case 0x48736b:c.instructions+=13;goto B48736b;
case 0x48736d:c.instructions+=12;goto B48736d;
case 0x48736f:c.instructions+=11;goto B48736f;
case 0x487372:c.instructions+=10;goto B487372;
case 0x487374:c.instructions+=9;goto B487374;
case 0x487376:c.instructions+=8;goto B487376;
case 0x487379:c.instructions+=7;goto B487379;
case 0x48737b:c.instructions+=6;goto B48737b;
case 0x48737d:c.instructions+=5;goto B48737d;
case 0x487382:c.instructions+=4;goto B487382;
case 0x487384:c.instructions+=3;goto B487384;
case 0x487388:c.instructions+=2;goto B487388;
case 0x48738c:c.instructions+=1;goto B48738c;
case 0x48738e:goto L48738e;
case 0x487394:goto L487394;
case 0x48739a:c.instructions+=2;goto B48739a;
case 0x48739e:c.instructions+=1;goto B48739e;
case 0x4873a0:goto L4873a0;
case 0x4873a4:c.instructions+=116;goto B4873a4;
case 0x4873a7:c.instructions+=115;goto B4873a7;
case 0x4873aa:c.instructions+=114;goto B4873aa;
case 0x4873ad:c.instructions+=113;goto B4873ad;
case 0x4873b0:c.instructions+=112;goto B4873b0;
case 0x4873b3:c.instructions+=111;goto B4873b3;
case 0x4873b6:c.instructions+=110;goto B4873b6;
case 0x4873b9:c.instructions+=109;goto B4873b9;
case 0x4873bc:c.instructions+=108;goto B4873bc;
case 0x4873bf:c.instructions+=107;goto B4873bf;
case 0x4873c2:c.instructions+=106;goto B4873c2;
case 0x4873c4:c.instructions+=105;goto B4873c4;
case 0x4873c7:c.instructions+=104;goto B4873c7;
case 0x4873ca:c.instructions+=103;goto B4873ca;
case 0x4873cc:c.instructions+=102;goto B4873cc;
case 0x4873ce:c.instructions+=101;goto B4873ce;
case 0x4873d1:c.instructions+=100;goto B4873d1;
case 0x4873d4:c.instructions+=99;goto B4873d4;
case 0x4873d7:c.instructions+=98;goto B4873d7;
case 0x4873da:c.instructions+=97;goto B4873da;
case 0x4873dc:c.instructions+=96;goto B4873dc;
case 0x4873df:c.instructions+=95;goto B4873df;
case 0x4873e2:c.instructions+=94;goto B4873e2;
case 0x4873e5:c.instructions+=93;goto B4873e5;
case 0x4873e8:c.instructions+=92;goto B4873e8;
case 0x4873eb:c.instructions+=91;goto B4873eb;
case 0x4873ee:c.instructions+=90;goto B4873ee;
case 0x4873f0:c.instructions+=89;goto B4873f0;
case 0x4873f3:c.instructions+=88;goto B4873f3;
case 0x4873f5:c.instructions+=87;goto B4873f5;
case 0x4873f8:c.instructions+=86;goto B4873f8;
case 0x4873fb:c.instructions+=85;goto B4873fb;
case 0x4873fe:c.instructions+=84;goto B4873fe;
case 0x487401:c.instructions+=83;goto B487401;
case 0x487403:c.instructions+=82;goto B487403;
case 0x487406:c.instructions+=81;goto B487406;
case 0x487409:c.instructions+=80;goto B487409;
case 0x48740c:c.instructions+=79;goto B48740c;
case 0x48740f:c.instructions+=78;goto B48740f;
case 0x487411:c.instructions+=77;goto B487411;
case 0x487414:c.instructions+=76;goto B487414;
case 0x487417:c.instructions+=75;goto B487417;
case 0x48741a:c.instructions+=74;goto B48741a;
case 0x48741d:c.instructions+=73;goto B48741d;
case 0x487420:c.instructions+=72;goto B487420;
case 0x487423:c.instructions+=71;goto B487423;
case 0x487425:c.instructions+=70;goto B487425;
case 0x487428:c.instructions+=69;goto B487428;
case 0x48742a:c.instructions+=68;goto B48742a;
case 0x48742d:c.instructions+=67;goto B48742d;
case 0x487430:c.instructions+=66;goto B487430;
case 0x487432:c.instructions+=65;goto B487432;
case 0x487435:c.instructions+=64;goto B487435;
case 0x487437:c.instructions+=63;goto B487437;
case 0x48743a:c.instructions+=62;goto B48743a;
case 0x48743d:c.instructions+=61;goto B48743d;
case 0x48743f:c.instructions+=60;goto B48743f;
case 0x487441:c.instructions+=59;goto B487441;
case 0x487443:c.instructions+=58;goto B487443;
case 0x487446:c.instructions+=57;goto B487446;
case 0x487449:c.instructions+=56;goto B487449;
case 0x48744b:c.instructions+=55;goto B48744b;
case 0x48744d:c.instructions+=54;goto B48744d;
case 0x487450:c.instructions+=53;goto B487450;
case 0x487452:c.instructions+=52;goto B487452;
case 0x487454:c.instructions+=51;goto B487454;
case 0x487456:c.instructions+=50;goto B487456;
case 0x487459:c.instructions+=49;goto B487459;
case 0x48745c:c.instructions+=48;goto B48745c;
case 0x48745e:c.instructions+=47;goto B48745e;
case 0x487461:c.instructions+=46;goto B487461;
case 0x487464:c.instructions+=45;goto B487464;
case 0x487467:c.instructions+=44;goto B487467;
case 0x48746a:c.instructions+=43;goto B48746a;
case 0x48746c:c.instructions+=42;goto B48746c;
case 0x48746f:c.instructions+=41;goto B48746f;
case 0x487472:c.instructions+=40;goto B487472;
case 0x487474:c.instructions+=39;goto B487474;
case 0x487477:c.instructions+=38;goto B487477;
case 0x48747a:c.instructions+=37;goto B48747a;
case 0x48747d:c.instructions+=36;goto B48747d;
case 0x48747f:c.instructions+=35;goto B48747f;
case 0x487482:c.instructions+=34;goto B487482;
case 0x487484:c.instructions+=33;goto B487484;
case 0x487487:c.instructions+=32;goto B487487;
case 0x48748a:c.instructions+=31;goto B48748a;
case 0x48748c:c.instructions+=30;goto B48748c;
case 0x48748f:c.instructions+=29;goto B48748f;
case 0x487491:c.instructions+=28;goto B487491;
case 0x487494:c.instructions+=27;goto B487494;
case 0x487497:c.instructions+=26;goto B487497;
case 0x48749a:c.instructions+=25;goto B48749a;
case 0x48749d:c.instructions+=24;goto B48749d;
case 0x48749f:c.instructions+=23;goto B48749f;
case 0x4874a2:c.instructions+=22;goto B4874a2;
case 0x4874a5:c.instructions+=21;goto B4874a5;
case 0x4874a8:c.instructions+=20;goto B4874a8;
case 0x4874ab:c.instructions+=19;goto B4874ab;
case 0x4874ae:c.instructions+=18;goto B4874ae;
case 0x4874b1:c.instructions+=17;goto B4874b1;
case 0x4874b3:c.instructions+=16;goto B4874b3;
case 0x4874b6:c.instructions+=15;goto B4874b6;
case 0x4874b8:c.instructions+=14;goto B4874b8;
case 0x4874bb:c.instructions+=13;goto B4874bb;
case 0x4874be:c.instructions+=12;goto B4874be;
case 0x4874c1:c.instructions+=11;goto B4874c1;
case 0x4874c3:c.instructions+=10;goto B4874c3;
case 0x4874c5:c.instructions+=9;goto B4874c5;
case 0x4874c7:c.instructions+=8;goto B4874c7;
case 0x4874ca:c.instructions+=7;goto B4874ca;
case 0x4874cd:c.instructions+=6;goto B4874cd;
case 0x4874cf:c.instructions+=5;goto B4874cf;
case 0x4874d1:c.instructions+=4;goto B4874d1;
case 0x4874d4:c.instructions+=3;goto B4874d4;
case 0x4874d6:c.instructions+=2;goto B4874d6;
case 0x4874d8:c.instructions+=1;goto B4874d8;
case 0x4874e0:goto L4874e0;
case 0x4874e4:c.instructions+=2;goto B4874e4;
case 0x4874e5:c.instructions+=1;goto B4874e5;
case 0x4874ea:goto L4874ea;
case 0x4874f0:c.instructions+=404;goto B4874f0;
case 0x4874f4:c.instructions+=403;goto B4874f4;
case 0x4874f7:c.instructions+=402;goto B4874f7;
case 0x4874fa:c.instructions+=401;goto B4874fa;
case 0x4874fd:c.instructions+=400;goto B4874fd;
case 0x487500:c.instructions+=399;goto B487500;
case 0x487503:c.instructions+=398;goto B487503;
case 0x487506:c.instructions+=397;goto B487506;
case 0x487509:c.instructions+=396;goto B487509;
case 0x48750b:c.instructions+=395;goto B48750b;
case 0x48750e:c.instructions+=394;goto B48750e;
case 0x487511:c.instructions+=393;goto B487511;
case 0x487514:c.instructions+=392;goto B487514;
case 0x487516:c.instructions+=391;goto B487516;
case 0x487519:c.instructions+=390;goto B487519;
case 0x48751c:c.instructions+=389;goto B48751c;
case 0x48751f:c.instructions+=388;goto B48751f;
case 0x487521:c.instructions+=387;goto B487521;
case 0x487524:c.instructions+=386;goto B487524;
case 0x487527:c.instructions+=385;goto B487527;
case 0x48752a:c.instructions+=384;goto B48752a;
case 0x48752c:c.instructions+=383;goto B48752c;
case 0x48752f:c.instructions+=382;goto B48752f;
case 0x487532:c.instructions+=381;goto B487532;
case 0x487535:c.instructions+=380;goto B487535;
case 0x487537:c.instructions+=379;goto B487537;
case 0x487539:c.instructions+=378;goto B487539;
case 0x48753b:c.instructions+=377;goto B48753b;
case 0x48753e:c.instructions+=376;goto B48753e;
case 0x487541:c.instructions+=375;goto B487541;
case 0x487544:c.instructions+=374;goto B487544;
case 0x487547:c.instructions+=373;goto B487547;
case 0x48754a:c.instructions+=372;goto B48754a;
case 0x48754d:c.instructions+=371;goto B48754d;
case 0x48754f:c.instructions+=370;goto B48754f;
case 0x487552:c.instructions+=369;goto B487552;
case 0x487555:c.instructions+=368;goto B487555;
case 0x487558:c.instructions+=367;goto B487558;
case 0x48755a:c.instructions+=366;goto B48755a;
case 0x48755d:c.instructions+=365;goto B48755d;
case 0x487560:c.instructions+=364;goto B487560;
case 0x487563:c.instructions+=363;goto B487563;
case 0x487565:c.instructions+=362;goto B487565;
case 0x487568:c.instructions+=361;goto B487568;
case 0x48756b:c.instructions+=360;goto B48756b;
case 0x48756e:c.instructions+=359;goto B48756e;
case 0x487570:c.instructions+=358;goto B487570;
case 0x487573:c.instructions+=357;goto B487573;
case 0x487576:c.instructions+=356;goto B487576;
case 0x487579:c.instructions+=355;goto B487579;
case 0x48757b:c.instructions+=354;goto B48757b;
case 0x48757d:c.instructions+=353;goto B48757d;
case 0x487580:c.instructions+=352;goto B487580;
case 0x487583:c.instructions+=351;goto B487583;
case 0x487586:c.instructions+=350;goto B487586;
case 0x487589:c.instructions+=349;goto B487589;
case 0x48758c:c.instructions+=348;goto B48758c;
case 0x48758f:c.instructions+=347;goto B48758f;
case 0x487592:c.instructions+=346;goto B487592;
case 0x487594:c.instructions+=345;goto B487594;
case 0x487597:c.instructions+=344;goto B487597;
case 0x48759a:c.instructions+=343;goto B48759a;
case 0x48759d:c.instructions+=342;goto B48759d;
case 0x48759f:c.instructions+=341;goto B48759f;
case 0x4875a2:c.instructions+=340;goto B4875a2;
case 0x4875a5:c.instructions+=339;goto B4875a5;
case 0x4875a8:c.instructions+=338;goto B4875a8;
case 0x4875aa:c.instructions+=337;goto B4875aa;
case 0x4875ad:c.instructions+=336;goto B4875ad;
case 0x4875b0:c.instructions+=335;goto B4875b0;
case 0x4875b3:c.instructions+=334;goto B4875b3;
case 0x4875b5:c.instructions+=333;goto B4875b5;
case 0x4875b8:c.instructions+=332;goto B4875b8;
case 0x4875bb:c.instructions+=331;goto B4875bb;
case 0x4875be:c.instructions+=330;goto B4875be;
case 0x4875c0:c.instructions+=329;goto B4875c0;
case 0x4875c2:c.instructions+=328;goto B4875c2;
case 0x4875c5:c.instructions+=327;goto B4875c5;
case 0x4875c8:c.instructions+=326;goto B4875c8;
case 0x4875cb:c.instructions+=325;goto B4875cb;
case 0x4875ce:c.instructions+=324;goto B4875ce;
case 0x4875d1:c.instructions+=323;goto B4875d1;
case 0x4875d4:c.instructions+=322;goto B4875d4;
case 0x4875d7:c.instructions+=321;goto B4875d7;
case 0x4875d9:c.instructions+=320;goto B4875d9;
case 0x4875dc:c.instructions+=319;goto B4875dc;
case 0x4875df:c.instructions+=318;goto B4875df;
case 0x4875e2:c.instructions+=317;goto B4875e2;
case 0x4875e4:c.instructions+=316;goto B4875e4;
case 0x4875e7:c.instructions+=315;goto B4875e7;
case 0x4875ea:c.instructions+=314;goto B4875ea;
case 0x4875ed:c.instructions+=313;goto B4875ed;
case 0x4875ef:c.instructions+=312;goto B4875ef;
case 0x4875f2:c.instructions+=311;goto B4875f2;
case 0x4875f5:c.instructions+=310;goto B4875f5;
case 0x4875f8:c.instructions+=309;goto B4875f8;
case 0x4875fa:c.instructions+=308;goto B4875fa;
case 0x4875fd:c.instructions+=307;goto B4875fd;
case 0x487600:c.instructions+=306;goto B487600;
case 0x487603:c.instructions+=305;goto B487603;
case 0x487605:c.instructions+=304;goto B487605;
case 0x487607:c.instructions+=303;goto B487607;
case 0x48760a:c.instructions+=302;goto B48760a;
case 0x48760d:c.instructions+=301;goto B48760d;
case 0x487610:c.instructions+=300;goto B487610;
case 0x487613:c.instructions+=299;goto B487613;
case 0x487616:c.instructions+=298;goto B487616;
case 0x487619:c.instructions+=297;goto B487619;
case 0x48761c:c.instructions+=296;goto B48761c;
case 0x48761e:c.instructions+=295;goto B48761e;
case 0x487621:c.instructions+=294;goto B487621;
case 0x487624:c.instructions+=293;goto B487624;
case 0x487627:c.instructions+=292;goto B487627;
case 0x487629:c.instructions+=291;goto B487629;
case 0x48762c:c.instructions+=290;goto B48762c;
case 0x48762f:c.instructions+=289;goto B48762f;
case 0x487632:c.instructions+=288;goto B487632;
case 0x487634:c.instructions+=287;goto B487634;
case 0x487637:c.instructions+=286;goto B487637;
case 0x48763a:c.instructions+=285;goto B48763a;
case 0x48763d:c.instructions+=284;goto B48763d;
case 0x48763f:c.instructions+=283;goto B48763f;
case 0x487642:c.instructions+=282;goto B487642;
case 0x487645:c.instructions+=281;goto B487645;
case 0x487648:c.instructions+=280;goto B487648;
case 0x48764a:c.instructions+=279;goto B48764a;
case 0x48764c:c.instructions+=278;goto B48764c;
case 0x48764f:c.instructions+=277;goto B48764f;
case 0x487652:c.instructions+=276;goto B487652;
case 0x487655:c.instructions+=275;goto B487655;
case 0x487658:c.instructions+=274;goto B487658;
case 0x48765b:c.instructions+=273;goto B48765b;
case 0x48765e:c.instructions+=272;goto B48765e;
case 0x487661:c.instructions+=271;goto B487661;
case 0x487663:c.instructions+=270;goto B487663;
case 0x487666:c.instructions+=269;goto B487666;
case 0x487669:c.instructions+=268;goto B487669;
case 0x48766c:c.instructions+=267;goto B48766c;
case 0x48766e:c.instructions+=266;goto B48766e;
case 0x487671:c.instructions+=265;goto B487671;
case 0x487674:c.instructions+=264;goto B487674;
case 0x487676:c.instructions+=263;goto B487676;
case 0x487678:c.instructions+=262;goto B487678;
case 0x48767b:c.instructions+=261;goto B48767b;
case 0x48767e:c.instructions+=260;goto B48767e;
case 0x487681:c.instructions+=259;goto B487681;
case 0x487683:c.instructions+=258;goto B487683;
case 0x487685:c.instructions+=257;goto B487685;
case 0x487688:c.instructions+=256;goto B487688;
case 0x48768b:c.instructions+=255;goto B48768b;
case 0x48768d:c.instructions+=254;goto B48768d;
case 0x48768f:c.instructions+=253;goto B48768f;
case 0x487692:c.instructions+=252;goto B487692;
case 0x487695:c.instructions+=251;goto B487695;
case 0x487698:c.instructions+=250;goto B487698;
case 0x48769b:c.instructions+=249;goto B48769b;
case 0x48769e:c.instructions+=248;goto B48769e;
case 0x4876a1:c.instructions+=247;goto B4876a1;
case 0x4876a4:c.instructions+=246;goto B4876a4;
case 0x4876a6:c.instructions+=245;goto B4876a6;
case 0x4876a9:c.instructions+=244;goto B4876a9;
case 0x4876ac:c.instructions+=243;goto B4876ac;
case 0x4876af:c.instructions+=242;goto B4876af;
case 0x4876b1:c.instructions+=241;goto B4876b1;
case 0x4876b4:c.instructions+=240;goto B4876b4;
case 0x4876b7:c.instructions+=239;goto B4876b7;
case 0x4876ba:c.instructions+=238;goto B4876ba;
case 0x4876bc:c.instructions+=237;goto B4876bc;
case 0x4876bf:c.instructions+=236;goto B4876bf;
case 0x4876c1:c.instructions+=235;goto B4876c1;
case 0x4876c4:c.instructions+=234;goto B4876c4;
case 0x4876c6:c.instructions+=233;goto B4876c6;
case 0x4876c8:c.instructions+=232;goto B4876c8;
case 0x4876cb:c.instructions+=231;goto B4876cb;
case 0x4876ce:c.instructions+=230;goto B4876ce;
case 0x4876d0:c.instructions+=229;goto B4876d0;
case 0x4876d2:c.instructions+=228;goto B4876d2;
case 0x4876d5:c.instructions+=227;goto B4876d5;
case 0x4876d8:c.instructions+=226;goto B4876d8;
case 0x4876db:c.instructions+=225;goto B4876db;
case 0x4876de:c.instructions+=224;goto B4876de;
case 0x4876e1:c.instructions+=223;goto B4876e1;
case 0x4876e4:c.instructions+=222;goto B4876e4;
case 0x4876e7:c.instructions+=221;goto B4876e7;
case 0x4876e9:c.instructions+=220;goto B4876e9;
case 0x4876ec:c.instructions+=219;goto B4876ec;
case 0x4876ef:c.instructions+=218;goto B4876ef;
case 0x4876f2:c.instructions+=217;goto B4876f2;
case 0x4876f4:c.instructions+=216;goto B4876f4;
case 0x4876f6:c.instructions+=215;goto B4876f6;
case 0x4876f9:c.instructions+=214;goto B4876f9;
case 0x4876fc:c.instructions+=213;goto B4876fc;
case 0x4876fe:c.instructions+=212;goto B4876fe;
case 0x487701:c.instructions+=211;goto B487701;
case 0x487704:c.instructions+=210;goto B487704;
case 0x487707:c.instructions+=209;goto B487707;
case 0x487709:c.instructions+=208;goto B487709;
case 0x48770c:c.instructions+=207;goto B48770c;
case 0x48770e:c.instructions+=206;goto B48770e;
case 0x487711:c.instructions+=205;goto B487711;
case 0x487713:c.instructions+=204;goto B487713;
case 0x487715:c.instructions+=203;goto B487715;
case 0x487718:c.instructions+=202;goto B487718;
case 0x48771b:c.instructions+=201;goto B48771b;
case 0x48771e:c.instructions+=200;goto B48771e;
case 0x487721:c.instructions+=199;goto B487721;
case 0x487724:c.instructions+=198;goto B487724;
case 0x487727:c.instructions+=197;goto B487727;
case 0x48772a:c.instructions+=196;goto B48772a;
case 0x48772c:c.instructions+=195;goto B48772c;
case 0x48772f:c.instructions+=194;goto B48772f;
case 0x487732:c.instructions+=193;goto B487732;
case 0x487735:c.instructions+=192;goto B487735;
case 0x487737:c.instructions+=191;goto B487737;
case 0x48773a:c.instructions+=190;goto B48773a;
case 0x48773d:c.instructions+=189;goto B48773d;
case 0x487740:c.instructions+=188;goto B487740;
case 0x487742:c.instructions+=187;goto B487742;
case 0x487745:c.instructions+=186;goto B487745;
case 0x487748:c.instructions+=185;goto B487748;
case 0x48774b:c.instructions+=184;goto B48774b;
case 0x48774d:c.instructions+=183;goto B48774d;
case 0x487750:c.instructions+=182;goto B487750;
case 0x487753:c.instructions+=181;goto B487753;
case 0x487756:c.instructions+=180;goto B487756;
case 0x487758:c.instructions+=179;goto B487758;
case 0x48775a:c.instructions+=178;goto B48775a;
case 0x48775d:c.instructions+=177;goto B48775d;
case 0x487760:c.instructions+=176;goto B487760;
case 0x487763:c.instructions+=175;goto B487763;
case 0x487766:c.instructions+=174;goto B487766;
case 0x487769:c.instructions+=173;goto B487769;
case 0x48776c:c.instructions+=172;goto B48776c;
case 0x48776f:c.instructions+=171;goto B48776f;
case 0x487771:c.instructions+=170;goto B487771;
case 0x487774:c.instructions+=169;goto B487774;
case 0x487777:c.instructions+=168;goto B487777;
case 0x48777a:c.instructions+=167;goto B48777a;
case 0x48777c:c.instructions+=166;goto B48777c;
case 0x48777f:c.instructions+=165;goto B48777f;
case 0x487782:c.instructions+=164;goto B487782;
case 0x487784:c.instructions+=163;goto B487784;
case 0x487786:c.instructions+=162;goto B487786;
case 0x487789:c.instructions+=161;goto B487789;
case 0x48778c:c.instructions+=160;goto B48778c;
case 0x48778f:c.instructions+=159;goto B48778f;
case 0x487791:c.instructions+=158;goto B487791;
case 0x487794:c.instructions+=157;goto B487794;
case 0x487796:c.instructions+=156;goto B487796;
case 0x487799:c.instructions+=155;goto B487799;
case 0x48779b:c.instructions+=154;goto B48779b;
case 0x48779d:c.instructions+=153;goto B48779d;
case 0x4877a0:c.instructions+=152;goto B4877a0;
case 0x4877a3:c.instructions+=151;goto B4877a3;
case 0x4877a6:c.instructions+=150;goto B4877a6;
case 0x4877a9:c.instructions+=149;goto B4877a9;
case 0x4877ac:c.instructions+=148;goto B4877ac;
case 0x4877af:c.instructions+=147;goto B4877af;
case 0x4877b2:c.instructions+=146;goto B4877b2;
case 0x4877b4:c.instructions+=145;goto B4877b4;
case 0x4877b7:c.instructions+=144;goto B4877b7;
case 0x4877ba:c.instructions+=143;goto B4877ba;
case 0x4877bd:c.instructions+=142;goto B4877bd;
case 0x4877bf:c.instructions+=141;goto B4877bf;
case 0x4877c2:c.instructions+=140;goto B4877c2;
case 0x4877c4:c.instructions+=139;goto B4877c4;
case 0x4877c7:c.instructions+=138;goto B4877c7;
case 0x4877c9:c.instructions+=137;goto B4877c9;
case 0x4877cc:c.instructions+=136;goto B4877cc;
case 0x4877cf:c.instructions+=135;goto B4877cf;
case 0x4877d2:c.instructions+=134;goto B4877d2;
case 0x4877d4:c.instructions+=133;goto B4877d4;
case 0x4877d7:c.instructions+=132;goto B4877d7;
case 0x4877d9:c.instructions+=131;goto B4877d9;
case 0x4877dc:c.instructions+=130;goto B4877dc;
case 0x4877de:c.instructions+=129;goto B4877de;
case 0x4877e0:c.instructions+=128;goto B4877e0;
case 0x4877e3:c.instructions+=127;goto B4877e3;
case 0x4877e6:c.instructions+=126;goto B4877e6;
case 0x4877e9:c.instructions+=125;goto B4877e9;
case 0x4877ec:c.instructions+=124;goto B4877ec;
case 0x4877ef:c.instructions+=123;goto B4877ef;
case 0x4877f2:c.instructions+=122;goto B4877f2;
case 0x4877f5:c.instructions+=121;goto B4877f5;
case 0x4877f7:c.instructions+=120;goto B4877f7;
case 0x4877fa:c.instructions+=119;goto B4877fa;
case 0x4877fd:c.instructions+=118;goto B4877fd;
case 0x487800:c.instructions+=117;goto B487800;
case 0x487802:c.instructions+=116;goto B487802;
case 0x487805:c.instructions+=115;goto B487805;
case 0x487807:c.instructions+=114;goto B487807;
case 0x48780a:c.instructions+=113;goto B48780a;
case 0x48780c:c.instructions+=112;goto B48780c;
case 0x48780f:c.instructions+=111;goto B48780f;
case 0x487812:c.instructions+=110;goto B487812;
case 0x487815:c.instructions+=109;goto B487815;
case 0x487817:c.instructions+=108;goto B487817;
case 0x48781a:c.instructions+=107;goto B48781a;
case 0x48781d:c.instructions+=106;goto B48781d;
case 0x48781f:c.instructions+=105;goto B48781f;
case 0x487821:c.instructions+=104;goto B487821;
case 0x487823:c.instructions+=103;goto B487823;
case 0x487826:c.instructions+=102;goto B487826;
case 0x487829:c.instructions+=101;goto B487829;
case 0x48782c:c.instructions+=100;goto B48782c;
case 0x48782f:c.instructions+=99;goto B48782f;
case 0x487832:c.instructions+=98;goto B487832;
case 0x487835:c.instructions+=97;goto B487835;
case 0x487838:c.instructions+=96;goto B487838;
case 0x48783a:c.instructions+=95;goto B48783a;
case 0x48783d:c.instructions+=94;goto B48783d;
case 0x487840:c.instructions+=93;goto B487840;
case 0x487843:c.instructions+=92;goto B487843;
case 0x487845:c.instructions+=91;goto B487845;
case 0x487848:c.instructions+=90;goto B487848;
case 0x48784b:c.instructions+=89;goto B48784b;
case 0x48784e:c.instructions+=88;goto B48784e;
case 0x487850:c.instructions+=87;goto B487850;
case 0x487853:c.instructions+=86;goto B487853;
case 0x487856:c.instructions+=85;goto B487856;
case 0x487859:c.instructions+=84;goto B487859;
case 0x48785b:c.instructions+=83;goto B48785b;
case 0x48785e:c.instructions+=82;goto B48785e;
case 0x487861:c.instructions+=81;goto B487861;
case 0x487864:c.instructions+=80;goto B487864;
case 0x487866:c.instructions+=79;goto B487866;
case 0x487868:c.instructions+=78;goto B487868;
case 0x48786b:c.instructions+=77;goto B48786b;
case 0x48786e:c.instructions+=76;goto B48786e;
case 0x487871:c.instructions+=75;goto B487871;
case 0x487874:c.instructions+=74;goto B487874;
case 0x487877:c.instructions+=73;goto B487877;
case 0x48787a:c.instructions+=72;goto B48787a;
case 0x48787d:c.instructions+=71;goto B48787d;
case 0x48787f:c.instructions+=70;goto B48787f;
case 0x487882:c.instructions+=69;goto B487882;
case 0x487885:c.instructions+=68;goto B487885;
case 0x487888:c.instructions+=67;goto B487888;
case 0x48788a:c.instructions+=66;goto B48788a;
case 0x48788d:c.instructions+=65;goto B48788d;
case 0x48788f:c.instructions+=64;goto B48788f;
case 0x487892:c.instructions+=63;goto B487892;
case 0x487894:c.instructions+=62;goto B487894;
case 0x487897:c.instructions+=61;goto B487897;
case 0x48789a:c.instructions+=60;goto B48789a;
case 0x48789d:c.instructions+=59;goto B48789d;
case 0x48789f:c.instructions+=58;goto B48789f;
case 0x4878a2:c.instructions+=57;goto B4878a2;
case 0x4878a5:c.instructions+=56;goto B4878a5;
case 0x4878a7:c.instructions+=55;goto B4878a7;
case 0x4878a9:c.instructions+=54;goto B4878a9;
case 0x4878ab:c.instructions+=53;goto B4878ab;
case 0x4878ae:c.instructions+=52;goto B4878ae;
case 0x4878b1:c.instructions+=51;goto B4878b1;
case 0x4878b4:c.instructions+=50;goto B4878b4;
case 0x4878b7:c.instructions+=49;goto B4878b7;
case 0x4878ba:c.instructions+=48;goto B4878ba;
case 0x4878bd:c.instructions+=47;goto B4878bd;
case 0x4878c0:c.instructions+=46;goto B4878c0;
case 0x4878c2:c.instructions+=45;goto B4878c2;
case 0x4878c5:c.instructions+=44;goto B4878c5;
case 0x4878c8:c.instructions+=43;goto B4878c8;
case 0x4878cb:c.instructions+=42;goto B4878cb;
case 0x4878cd:c.instructions+=41;goto B4878cd;
case 0x4878d0:c.instructions+=40;goto B4878d0;
case 0x4878d2:c.instructions+=39;goto B4878d2;
case 0x4878d5:c.instructions+=38;goto B4878d5;
case 0x4878d7:c.instructions+=37;goto B4878d7;
case 0x4878da:c.instructions+=36;goto B4878da;
case 0x4878dd:c.instructions+=35;goto B4878dd;
case 0x4878e0:c.instructions+=34;goto B4878e0;
case 0x4878e2:c.instructions+=33;goto B4878e2;
case 0x4878e5:c.instructions+=32;goto B4878e5;
case 0x4878e8:c.instructions+=31;goto B4878e8;
case 0x4878ea:c.instructions+=30;goto B4878ea;
case 0x4878ec:c.instructions+=29;goto B4878ec;
case 0x4878ee:c.instructions+=28;goto B4878ee;
case 0x4878f1:c.instructions+=27;goto B4878f1;
case 0x4878f4:c.instructions+=26;goto B4878f4;
case 0x4878f7:c.instructions+=25;goto B4878f7;
case 0x4878fa:c.instructions+=24;goto B4878fa;
case 0x4878fd:c.instructions+=23;goto B4878fd;
case 0x487900:c.instructions+=22;goto B487900;
case 0x487903:c.instructions+=21;goto B487903;
case 0x487905:c.instructions+=20;goto B487905;
case 0x487908:c.instructions+=19;goto B487908;
case 0x48790b:c.instructions+=18;goto B48790b;
case 0x48790e:c.instructions+=17;goto B48790e;
case 0x487910:c.instructions+=16;goto B487910;
case 0x487913:c.instructions+=15;goto B487913;
case 0x487915:c.instructions+=14;goto B487915;
case 0x487918:c.instructions+=13;goto B487918;
case 0x48791a:c.instructions+=12;goto B48791a;
case 0x48791d:c.instructions+=11;goto B48791d;
case 0x487920:c.instructions+=10;goto B487920;
case 0x487923:c.instructions+=9;goto B487923;
case 0x487925:c.instructions+=8;goto B487925;
case 0x487928:c.instructions+=7;goto B487928;
case 0x48792a:c.instructions+=6;goto B48792a;
case 0x48792d:c.instructions+=5;goto B48792d;
case 0x48792f:c.instructions+=4;goto B48792f;
case 0x487931:c.instructions+=3;goto B487931;
case 0x487934:c.instructions+=2;goto B487934;
case 0x487936:c.instructions+=1;goto B487936;
case 0x487940:goto L487940;
case 0x487941:c.instructions+=44;goto B487941;
case 0x487943:c.instructions+=43;goto B487943;
case 0x487946:c.instructions+=42;goto B487946;
case 0x48794c:c.instructions+=41;goto B48794c;
case 0x48794f:c.instructions+=40;goto B48794f;
case 0x487952:c.instructions+=39;goto B487952;
case 0x487955:c.instructions+=38;goto B487955;
case 0x487958:c.instructions+=37;goto B487958;
case 0x48795b:c.instructions+=36;goto B48795b;
case 0x48795e:c.instructions+=35;goto B48795e;
case 0x487962:c.instructions+=34;goto B487962;
case 0x487964:c.instructions+=33;goto B487964;
case 0x487968:c.instructions+=32;goto B487968;
case 0x48796f:c.instructions+=31;goto B48796f;
case 0x487973:c.instructions+=30;goto B487973;
case 0x487977:c.instructions+=29;goto B487977;
case 0x48797a:c.instructions+=28;goto B48797a;
case 0x48797b:c.instructions+=27;goto B48797b;
case 0x48797f:c.instructions+=26;goto B48797f;
case 0x487983:c.instructions+=25;goto B487983;
case 0x487986:c.instructions+=24;goto B487986;
case 0x487987:c.instructions+=23;goto B487987;
case 0x48798a:c.instructions+=22;goto B48798a;
case 0x487992:c.instructions+=21;goto B487992;
case 0x487995:c.instructions+=20;goto B487995;
case 0x4879a0:c.instructions+=19;goto B4879a0;
case 0x4879ab:c.instructions+=18;goto B4879ab;
case 0x4879ad:c.instructions+=17;goto B4879ad;
case 0x4879b4:c.instructions+=16;goto B4879b4;
case 0x4879bf:c.instructions+=15;goto B4879bf;
case 0x4879c3:c.instructions+=14;goto B4879c3;
case 0x4879c7:c.instructions+=13;goto B4879c7;
case 0x4879ca:c.instructions+=12;goto B4879ca;
case 0x4879cd:c.instructions+=11;goto B4879cd;
case 0x4879d0:c.instructions+=10;goto B4879d0;
case 0x4879d2:c.instructions+=9;goto B4879d2;
case 0x4879d9:c.instructions+=8;goto B4879d9;
case 0x4879e0:c.instructions+=7;goto B4879e0;
case 0x4879e3:c.instructions+=6;goto B4879e3;
case 0x4879e6:c.instructions+=5;goto B4879e6;
case 0x4879e9:c.instructions+=4;goto B4879e9;
case 0x4879eb:c.instructions+=3;goto B4879eb;
case 0x4879f2:c.instructions+=2;goto B4879f2;
case 0x4879f9:c.instructions+=1;goto B4879f9;
case 0x4879fe:goto L4879fe;
case 0x487a02:c.instructions+=146;goto B487a02;
case 0x487a06:c.instructions+=145;goto B487a06;
case 0x487a0c:c.instructions+=144;goto B487a0c;
case 0x487a10:c.instructions+=143;goto B487a10;
case 0x487a16:c.instructions+=142;goto B487a16;
case 0x487a1a:c.instructions+=141;goto B487a1a;
case 0x487a20:c.instructions+=140;goto B487a20;
case 0x487a22:c.instructions+=139;goto B487a22;
case 0x487a24:c.instructions+=138;goto B487a24;
case 0x487a26:c.instructions+=137;goto B487a26;
case 0x487a2a:c.instructions+=136;goto B487a2a;
case 0x487a2e:c.instructions+=135;goto B487a2e;
case 0x487a32:c.instructions+=134;goto B487a32;
case 0x487a38:c.instructions+=133;goto B487a38;
case 0x487a3c:c.instructions+=132;goto B487a3c;
case 0x487a40:c.instructions+=131;goto B487a40;
case 0x487a46:c.instructions+=130;goto B487a46;
case 0x487a4d:c.instructions+=129;goto B487a4d;
case 0x487a51:c.instructions+=128;goto B487a51;
case 0x487a57:c.instructions+=127;goto B487a57;
case 0x487a5e:c.instructions+=126;goto B487a5e;
case 0x487a62:c.instructions+=125;goto B487a62;
case 0x487a64:c.instructions+=124;goto B487a64;
case 0x487a68:c.instructions+=123;goto B487a68;
case 0x487a6c:c.instructions+=122;goto B487a6c;
case 0x487a70:c.instructions+=121;goto B487a70;
case 0x487a76:c.instructions+=120;goto B487a76;
case 0x487a7a:c.instructions+=119;goto B487a7a;
case 0x487a7e:c.instructions+=118;goto B487a7e;
case 0x487a84:c.instructions+=117;goto B487a84;
case 0x487a88:c.instructions+=116;goto B487a88;
case 0x487a8c:c.instructions+=115;goto B487a8c;
case 0x487a92:c.instructions+=114;goto B487a92;
case 0x487a96:c.instructions+=113;goto B487a96;
case 0x487a9a:c.instructions+=112;goto B487a9a;
case 0x487a9c:c.instructions+=111;goto B487a9c;
case 0x487aa0:c.instructions+=110;goto B487aa0;
case 0x487aa4:c.instructions+=109;goto B487aa4;
case 0x487aa8:c.instructions+=108;goto B487aa8;
case 0x487aae:c.instructions+=107;goto B487aae;
case 0x487ab2:c.instructions+=106;goto B487ab2;
case 0x487ab6:c.instructions+=105;goto B487ab6;
case 0x487abd:c.instructions+=104;goto B487abd;
case 0x487ac1:c.instructions+=103;goto B487ac1;
case 0x487ac5:c.instructions+=102;goto B487ac5;
case 0x487ac9:c.instructions+=101;goto B487ac9;
case 0x487acd:c.instructions+=100;goto B487acd;
case 0x487ad3:c.instructions+=99;goto B487ad3;
case 0x487ada:c.instructions+=98;goto B487ada;
case 0x487ade:c.instructions+=97;goto B487ade;
case 0x487ae2:c.instructions+=96;goto B487ae2;
case 0x487ae6:c.instructions+=95;goto B487ae6;
case 0x487aea:c.instructions+=94;goto B487aea;
case 0x487aee:c.instructions+=93;goto B487aee;
case 0x487af4:c.instructions+=92;goto B487af4;
case 0x487af8:c.instructions+=91;goto B487af8;
case 0x487afc:c.instructions+=90;goto B487afc;
case 0x487b03:c.instructions+=89;goto B487b03;
case 0x487b07:c.instructions+=88;goto B487b07;
case 0x487b0b:c.instructions+=87;goto B487b0b;
case 0x487b0f:c.instructions+=86;goto B487b0f;
case 0x487b13:c.instructions+=85;goto B487b13;
case 0x487b15:c.instructions+=84;goto B487b15;
case 0x487b19:c.instructions+=83;goto B487b19;
case 0x487b1d:c.instructions+=82;goto B487b1d;
case 0x487b21:c.instructions+=81;goto B487b21;
case 0x487b28:c.instructions+=80;goto B487b28;
case 0x487b2a:c.instructions+=79;goto B487b2a;
case 0x487b2e:c.instructions+=78;goto B487b2e;
case 0x487b32:c.instructions+=77;goto B487b32;
case 0x487b36:c.instructions+=76;goto B487b36;
case 0x487b3a:c.instructions+=75;goto B487b3a;
case 0x487b3c:c.instructions+=74;goto B487b3c;
case 0x487b43:c.instructions+=73;goto B487b43;
case 0x487b45:c.instructions+=72;goto B487b45;
case 0x487b47:c.instructions+=71;goto B487b47;
case 0x487b4b:c.instructions+=70;goto B487b4b;
case 0x487b4f:c.instructions+=69;goto B487b4f;
case 0x487b53:c.instructions+=68;goto B487b53;
case 0x487b5a:c.instructions+=67;goto B487b5a;
case 0x487b61:c.instructions+=66;goto B487b61;
case 0x487b65:c.instructions+=65;goto B487b65;
case 0x487b6b:c.instructions+=64;goto B487b6b;
case 0x487b6f:c.instructions+=63;goto B487b6f;
case 0x487b73:c.instructions+=62;goto B487b73;
case 0x487b75:c.instructions+=61;goto B487b75;
case 0x487b77:c.instructions+=60;goto B487b77;
case 0x487b7e:c.instructions+=59;goto B487b7e;
case 0x487b80:c.instructions+=58;goto B487b80;
case 0x487b82:c.instructions+=57;goto B487b82;
case 0x487b84:c.instructions+=56;goto B487b84;
case 0x487b88:c.instructions+=55;goto B487b88;
case 0x487b8e:c.instructions+=54;goto B487b8e;
case 0x487b95:c.instructions+=53;goto B487b95;
case 0x487b9c:c.instructions+=52;goto B487b9c;
case 0x487b9e:c.instructions+=51;goto B487b9e;
case 0x487ba2:c.instructions+=50;goto B487ba2;
case 0x487ba9:c.instructions+=49;goto B487ba9;
case 0x487bad:c.instructions+=48;goto B487bad;
case 0x487bb3:c.instructions+=47;goto B487bb3;
case 0x487bb7:c.instructions+=46;goto B487bb7;
case 0x487bbb:c.instructions+=45;goto B487bbb;
case 0x487bbd:c.instructions+=44;goto B487bbd;
case 0x487bc1:c.instructions+=43;goto B487bc1;
case 0x487bc8:c.instructions+=42;goto B487bc8;
case 0x487bcc:c.instructions+=41;goto B487bcc;
case 0x487bd2:c.instructions+=40;goto B487bd2;
case 0x487bd6:c.instructions+=39;goto B487bd6;
case 0x487bd7:c.instructions+=38;goto B487bd7;
case 0x487bdb:c.instructions+=37;goto B487bdb;
case 0x487bdf:c.instructions+=36;goto B487bdf;
case 0x487be0:c.instructions+=35;goto B487be0;
case 0x487be4:c.instructions+=34;goto B487be4;
case 0x487be8:c.instructions+=33;goto B487be8;
case 0x487bec:c.instructions+=32;goto B487bec;
case 0x487bf3:c.instructions+=31;goto B487bf3;
case 0x487bf7:c.instructions+=30;goto B487bf7;
case 0x487bfd:c.instructions+=29;goto B487bfd;
case 0x487c01:c.instructions+=28;goto B487c01;
case 0x487c03:c.instructions+=27;goto B487c03;
case 0x487c05:c.instructions+=26;goto B487c05;
case 0x487c09:c.instructions+=25;goto B487c09;
case 0x487c10:c.instructions+=24;goto B487c10;
case 0x487c14:c.instructions+=23;goto B487c14;
case 0x487c16:c.instructions+=22;goto B487c16;
case 0x487c1a:c.instructions+=21;goto B487c1a;
case 0x487c20:c.instructions+=20;goto B487c20;
case 0x487c22:c.instructions+=19;goto B487c22;
case 0x487c24:c.instructions+=18;goto B487c24;
case 0x487c2b:c.instructions+=17;goto B487c2b;
case 0x487c2f:c.instructions+=16;goto B487c2f;
case 0x487c31:c.instructions+=15;goto B487c31;
case 0x487c35:c.instructions+=14;goto B487c35;
case 0x487c3b:c.instructions+=13;goto B487c3b;
case 0x487c3d:c.instructions+=12;goto B487c3d;
case 0x487c3f:c.instructions+=11;goto B487c3f;
case 0x487c46:c.instructions+=10;goto B487c46;
case 0x487c48:c.instructions+=9;goto B487c48;
case 0x487c4a:c.instructions+=8;goto B487c4a;
case 0x487c4e:c.instructions+=7;goto B487c4e;
case 0x487c50:c.instructions+=6;goto B487c50;
case 0x487c54:c.instructions+=5;goto B487c54;
case 0x487c5a:c.instructions+=4;goto B487c5a;
case 0x487c5c:c.instructions+=3;goto B487c5c;
case 0x487c60:c.instructions+=2;goto B487c60;
case 0x487c67:c.instructions+=1;goto B487c67;
case 0x487c6c:goto L487c6c;
case 0x487c70:c.instructions+=164;goto B487c70;
case 0x487c74:c.instructions+=163;goto B487c74;
case 0x487c78:c.instructions+=162;goto B487c78;
case 0x487c7c:c.instructions+=161;goto B487c7c;
case 0x487c82:c.instructions+=160;goto B487c82;
case 0x487c86:c.instructions+=159;goto B487c86;
case 0x487c88:c.instructions+=158;goto B487c88;
case 0x487c8a:c.instructions+=157;goto B487c8a;
case 0x487c8e:c.instructions+=156;goto B487c8e;
case 0x487c90:c.instructions+=155;goto B487c90;
case 0x487c94:c.instructions+=154;goto B487c94;
case 0x487c98:c.instructions+=153;goto B487c98;
case 0x487c9c:c.instructions+=152;goto B487c9c;
case 0x487ca2:c.instructions+=151;goto B487ca2;
case 0x487ca6:c.instructions+=150;goto B487ca6;
case 0x487ca8:c.instructions+=149;goto B487ca8;
case 0x487caa:c.instructions+=148;goto B487caa;
case 0x487cae:c.instructions+=147;goto B487cae;
case 0x487cb0:c.instructions+=146;goto B487cb0;
case 0x487cb4:c.instructions+=145;goto B487cb4;
case 0x487cb8:c.instructions+=144;goto B487cb8;
case 0x487cbe:c.instructions+=143;goto B487cbe;
case 0x487cc2:c.instructions+=142;goto B487cc2;
case 0x487cc4:c.instructions+=141;goto B487cc4;
case 0x487cc8:c.instructions+=140;goto B487cc8;
case 0x487cca:c.instructions+=139;goto B487cca;
case 0x487cce:c.instructions+=138;goto B487cce;
case 0x487cd2:c.instructions+=137;goto B487cd2;
case 0x487cd6:c.instructions+=136;goto B487cd6;
case 0x487cda:c.instructions+=135;goto B487cda;
case 0x487cde:c.instructions+=134;goto B487cde;
case 0x487ce4:c.instructions+=133;goto B487ce4;
case 0x487ce8:c.instructions+=132;goto B487ce8;
case 0x487cea:c.instructions+=131;goto B487cea;
case 0x487cec:c.instructions+=130;goto B487cec;
case 0x487cf0:c.instructions+=129;goto B487cf0;
case 0x487cf4:c.instructions+=128;goto B487cf4;
case 0x487cf8:c.instructions+=127;goto B487cf8;
case 0x487cfc:c.instructions+=126;goto B487cfc;
case 0x487d02:c.instructions+=125;goto B487d02;
case 0x487d06:c.instructions+=124;goto B487d06;
case 0x487d0c:c.instructions+=123;goto B487d0c;
case 0x487d0e:c.instructions+=122;goto B487d0e;
case 0x487d12:c.instructions+=121;goto B487d12;
case 0x487d18:c.instructions+=120;goto B487d18;
case 0x487d1a:c.instructions+=119;goto B487d1a;
case 0x487d1e:c.instructions+=118;goto B487d1e;
case 0x487d24:c.instructions+=117;goto B487d24;
case 0x487d26:c.instructions+=116;goto B487d26;
case 0x487d2d:c.instructions+=115;goto B487d2d;
case 0x487d31:c.instructions+=114;goto B487d31;
case 0x487d37:c.instructions+=113;goto B487d37;
case 0x487d3b:c.instructions+=112;goto B487d3b;
case 0x487d41:c.instructions+=111;goto B487d41;
case 0x487d43:c.instructions+=110;goto B487d43;
case 0x487d47:c.instructions+=109;goto B487d47;
case 0x487d4d:c.instructions+=108;goto B487d4d;
case 0x487d4f:c.instructions+=107;goto B487d4f;
case 0x487d53:c.instructions+=106;goto B487d53;
case 0x487d59:c.instructions+=105;goto B487d59;
case 0x487d5b:c.instructions+=104;goto B487d5b;
case 0x487d62:c.instructions+=103;goto B487d62;
case 0x487d66:c.instructions+=102;goto B487d66;
case 0x487d6c:c.instructions+=101;goto B487d6c;
case 0x487d70:c.instructions+=100;goto B487d70;
case 0x487d76:c.instructions+=99;goto B487d76;
case 0x487d78:c.instructions+=98;goto B487d78;
case 0x487d7c:c.instructions+=97;goto B487d7c;
case 0x487d82:c.instructions+=96;goto B487d82;
case 0x487d84:c.instructions+=95;goto B487d84;
case 0x487d88:c.instructions+=94;goto B487d88;
case 0x487d8e:c.instructions+=93;goto B487d8e;
case 0x487d90:c.instructions+=92;goto B487d90;
case 0x487d97:c.instructions+=91;goto B487d97;
case 0x487d9b:c.instructions+=90;goto B487d9b;
case 0x487da1:c.instructions+=89;goto B487da1;
case 0x487da5:c.instructions+=88;goto B487da5;
case 0x487dab:c.instructions+=87;goto B487dab;
case 0x487dad:c.instructions+=86;goto B487dad;
case 0x487db1:c.instructions+=85;goto B487db1;
case 0x487db7:c.instructions+=84;goto B487db7;
case 0x487db9:c.instructions+=83;goto B487db9;
case 0x487dbd:c.instructions+=82;goto B487dbd;
case 0x487dc3:c.instructions+=81;goto B487dc3;
case 0x487dc5:c.instructions+=80;goto B487dc5;
case 0x487dcc:c.instructions+=79;goto B487dcc;
case 0x487dd0:c.instructions+=78;goto B487dd0;
case 0x487dd6:c.instructions+=77;goto B487dd6;
case 0x487dda:c.instructions+=76;goto B487dda;
case 0x487dde:c.instructions+=75;goto B487dde;
case 0x487de4:c.instructions+=74;goto B487de4;
case 0x487de8:c.instructions+=73;goto B487de8;
case 0x487dec:c.instructions+=72;goto B487dec;
case 0x487df2:c.instructions+=71;goto B487df2;
case 0x487df6:c.instructions+=70;goto B487df6;
case 0x487dfa:c.instructions+=69;goto B487dfa;
case 0x487dfc:c.instructions+=68;goto B487dfc;
case 0x487e03:c.instructions+=67;goto B487e03;
case 0x487e07:c.instructions+=66;goto B487e07;
case 0x487e0d:c.instructions+=65;goto B487e0d;
case 0x487e11:c.instructions+=64;goto B487e11;
case 0x487e15:c.instructions+=63;goto B487e15;
case 0x487e1b:c.instructions+=62;goto B487e1b;
case 0x487e1f:c.instructions+=61;goto B487e1f;
case 0x487e23:c.instructions+=60;goto B487e23;
case 0x487e29:c.instructions+=59;goto B487e29;
case 0x487e2d:c.instructions+=58;goto B487e2d;
case 0x487e31:c.instructions+=57;goto B487e31;
case 0x487e33:c.instructions+=56;goto B487e33;
case 0x487e3a:c.instructions+=55;goto B487e3a;
case 0x487e3c:c.instructions+=54;goto B487e3c;
case 0x487e3e:c.instructions+=53;goto B487e3e;
case 0x487e42:c.instructions+=52;goto B487e42;
case 0x487e48:c.instructions+=51;goto B487e48;
case 0x487e4c:c.instructions+=50;goto B487e4c;
case 0x487e52:c.instructions+=49;goto B487e52;
case 0x487e56:c.instructions+=48;goto B487e56;
case 0x487e5c:c.instructions+=47;goto B487e5c;
case 0x487e5e:c.instructions+=46;goto B487e5e;
case 0x487e60:c.instructions+=45;goto B487e60;
case 0x487e64:c.instructions+=44;goto B487e64;
case 0x487e6b:c.instructions+=43;goto B487e6b;
case 0x487e6f:c.instructions+=42;goto B487e6f;
case 0x487e75:c.instructions+=41;goto B487e75;
case 0x487e79:c.instructions+=40;goto B487e79;
case 0x487e7d:c.instructions+=39;goto B487e7d;
case 0x487e83:c.instructions+=38;goto B487e83;
case 0x487e87:c.instructions+=37;goto B487e87;
case 0x487e8b:c.instructions+=36;goto B487e8b;
case 0x487e91:c.instructions+=35;goto B487e91;
case 0x487e95:c.instructions+=34;goto B487e95;
case 0x487e99:c.instructions+=33;goto B487e99;
case 0x487e9d:c.instructions+=32;goto B487e9d;
case 0x487ea4:c.instructions+=31;goto B487ea4;
case 0x487ea8:c.instructions+=30;goto B487ea8;
case 0x487eae:c.instructions+=29;goto B487eae;
case 0x487eb2:c.instructions+=28;goto B487eb2;
case 0x487eb6:c.instructions+=27;goto B487eb6;
case 0x487eba:c.instructions+=26;goto B487eba;
case 0x487ec1:c.instructions+=25;goto B487ec1;
case 0x487ec5:c.instructions+=24;goto B487ec5;
case 0x487ecb:c.instructions+=23;goto B487ecb;
case 0x487ecf:c.instructions+=22;goto B487ecf;
case 0x487ed3:c.instructions+=21;goto B487ed3;
case 0x487ed7:c.instructions+=20;goto B487ed7;
case 0x487ede:c.instructions+=19;goto B487ede;
case 0x487ee2:c.instructions+=18;goto B487ee2;
case 0x487ee8:c.instructions+=17;goto B487ee8;
case 0x487eec:c.instructions+=16;goto B487eec;
case 0x487eee:c.instructions+=15;goto B487eee;
case 0x487ef0:c.instructions+=14;goto B487ef0;
case 0x487ef7:c.instructions+=13;goto B487ef7;
case 0x487ef9:c.instructions+=12;goto B487ef9;
case 0x487efb:c.instructions+=11;goto B487efb;
case 0x487eff:c.instructions+=10;goto B487eff;
case 0x487f05:c.instructions+=9;goto B487f05;
case 0x487f09:c.instructions+=8;goto B487f09;
case 0x487f0a:c.instructions+=7;goto B487f0a;
case 0x487f0e:c.instructions+=6;goto B487f0e;
case 0x487f12:c.instructions+=5;goto B487f12;
case 0x487f13:c.instructions+=4;goto B487f13;
case 0x487f17:c.instructions+=3;goto B487f17;
case 0x487f1b:c.instructions+=2;goto B487f1b;
case 0x487f22:c.instructions+=1;goto B487f22;
case 0x487f27:goto L487f27;
case 0x487f2a:c.instructions+=66;goto B487f2a;
case 0x487f2e:c.instructions+=65;goto B487f2e;
case 0x487f30:c.instructions+=64;goto B487f30;
case 0x487f34:c.instructions+=63;goto B487f34;
case 0x487f37:c.instructions+=62;goto B487f37;
case 0x487f39:c.instructions+=61;goto B487f39;
case 0x487f3d:c.instructions+=60;goto B487f3d;
case 0x487f40:c.instructions+=59;goto B487f40;
case 0x487f42:c.instructions+=58;goto B487f42;
case 0x487f46:c.instructions+=57;goto B487f46;
case 0x487f49:c.instructions+=56;goto B487f49;
case 0x487f4b:c.instructions+=55;goto B487f4b;
case 0x487f4f:c.instructions+=54;goto B487f4f;
case 0x487f53:c.instructions+=53;goto B487f53;
case 0x487f56:c.instructions+=52;goto B487f56;
case 0x487f5a:c.instructions+=51;goto B487f5a;
case 0x487f5d:c.instructions+=50;goto B487f5d;
case 0x487f5f:c.instructions+=49;goto B487f5f;
case 0x487f63:c.instructions+=48;goto B487f63;
case 0x487f66:c.instructions+=47;goto B487f66;
case 0x487f68:c.instructions+=46;goto B487f68;
case 0x487f6c:c.instructions+=45;goto B487f6c;
case 0x487f6f:c.instructions+=44;goto B487f6f;
case 0x487f71:c.instructions+=43;goto B487f71;
case 0x487f75:c.instructions+=42;goto B487f75;
case 0x487f79:c.instructions+=41;goto B487f79;
case 0x487f7c:c.instructions+=40;goto B487f7c;
case 0x487f80:c.instructions+=39;goto B487f80;
case 0x487f83:c.instructions+=38;goto B487f83;
case 0x487f85:c.instructions+=37;goto B487f85;
case 0x487f89:c.instructions+=36;goto B487f89;
case 0x487f8c:c.instructions+=35;goto B487f8c;
case 0x487f8e:c.instructions+=34;goto B487f8e;
case 0x487f92:c.instructions+=33;goto B487f92;
case 0x487f95:c.instructions+=32;goto B487f95;
case 0x487f97:c.instructions+=31;goto B487f97;
case 0x487f9e:c.instructions+=30;goto B487f9e;
case 0x487fa2:c.instructions+=29;goto B487fa2;
case 0x487fa5:c.instructions+=28;goto B487fa5;
case 0x487fa9:c.instructions+=27;goto B487fa9;
case 0x487fac:c.instructions+=26;goto B487fac;
case 0x487fae:c.instructions+=25;goto B487fae;
case 0x487fb2:c.instructions+=24;goto B487fb2;
case 0x487fb5:c.instructions+=23;goto B487fb5;
case 0x487fb7:c.instructions+=22;goto B487fb7;
case 0x487fbb:c.instructions+=21;goto B487fbb;
case 0x487fbe:c.instructions+=20;goto B487fbe;
case 0x487fc0:c.instructions+=19;goto B487fc0;
case 0x487fc7:c.instructions+=18;goto B487fc7;
case 0x487fcb:c.instructions+=17;goto B487fcb;
case 0x487fce:c.instructions+=16;goto B487fce;
case 0x487fd2:c.instructions+=15;goto B487fd2;
case 0x487fd5:c.instructions+=14;goto B487fd5;
case 0x487fd7:c.instructions+=13;goto B487fd7;
case 0x487fdb:c.instructions+=12;goto B487fdb;
case 0x487fde:c.instructions+=11;goto B487fde;
case 0x487fe0:c.instructions+=10;goto B487fe0;
case 0x487fe4:c.instructions+=9;goto B487fe4;
case 0x487fe6:c.instructions+=8;goto B487fe6;
case 0x487fe8:c.instructions+=7;goto B487fe8;
case 0x487fef:c.instructions+=6;goto B487fef;
case 0x487ff3:c.instructions+=5;goto B487ff3;
case 0x487ff6:c.instructions+=4;goto B487ff6;
case 0x487ffa:c.instructions+=3;goto B487ffa;
case 0x487ffd:c.instructions+=2;goto B487ffd;
case 0x487fff:c.instructions+=1;goto B487fff;
default:missing_instruction(c.pc);}
B487001:L487001:{c.instructions+=17;NFSU2_TR(0x487001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B487005:{NFSU2_TR(0x487005);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487008:{NFSU2_TR(0x487008);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48700c:{NFSU2_TR(0x48700c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487010:{NFSU2_TR(0x487010);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487013:{NFSU2_TR(0x487013);
__builtin_memmove((R+4),(R+0),4);
}
B487015:{NFSU2_TR(0x487015);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B487019:{NFSU2_TR(0x487019);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48701b:{NFSU2_TR(0x48701b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48701f:{NFSU2_TR(0x48701f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487022:{NFSU2_TR(0x487022);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487026:{NFSU2_TR(0x487026);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48702a:{NFSU2_TR(0x48702a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48702d:{NFSU2_TR(0x48702d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B487031:{NFSU2_TR(0x487031);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487034:{NFSU2_TR(0x487034);
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
B487037:{NFSU2_TR(0x487037);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B487040:L487040:{c.instructions+=19;NFSU2_TR(0x487040);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B487044:{NFSU2_TR(0x487044);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B487048:{NFSU2_TR(0x487048);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48704a:{NFSU2_TR(0x48704a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48704e:{NFSU2_TR(0x48704e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487051:{NFSU2_TR(0x487051);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B487055:{NFSU2_TR(0x487055);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487058:{NFSU2_TR(0x487058);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B487059:{NFSU2_TR(0x487059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48705b:{NFSU2_TR(0x48705b);
__builtin_memmove((R+8),(R+0),4);
}
B48705d:{NFSU2_TR(0x48705d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B48705f:{NFSU2_TR(0x48705f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B487062:{NFSU2_TR(0x487062);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487065:{NFSU2_TR(0x487065);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B487068:{NFSU2_TR(0x487068);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48706b:{NFSU2_TR(0x48706b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48706e:{NFSU2_TR(0x48706e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487071:{NFSU2_TR(0x487071);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B487072:{NFSU2_TR(0x487072);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B487080:L487080:{c.instructions+=15;NFSU2_TR(0x487080);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B487084:{NFSU2_TR(0x487084);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487087:{NFSU2_TR(0x487087);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48708b:{NFSU2_TR(0x48708b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48708c:{NFSU2_TR(0x48708c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48708e:{NFSU2_TR(0x48708e);
__builtin_memmove((R+8),(R+0),4);
}
B487090:{NFSU2_TR(0x487090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B487092:{NFSU2_TR(0x487092);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B487095:{NFSU2_TR(0x487095);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487098:{NFSU2_TR(0x487098);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48709b:{NFSU2_TR(0x48709b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48709e:{NFSU2_TR(0x48709e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4870a1:{NFSU2_TR(0x4870a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4870a4:{NFSU2_TR(0x4870a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4870a5:{NFSU2_TR(0x4870a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4870b0:L4870b0:{c.instructions+=37;NFSU2_TR(0x4870b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4870b3:{NFSU2_TR(0x4870b3);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4870b6:{NFSU2_TR(0x4870b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4870ba:{NFSU2_TR(0x4870ba);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4870bd:{NFSU2_TR(0x4870bd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4870bf:{NFSU2_TR(0x4870bf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4870c1:{NFSU2_TR(0x4870c1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4870c3:{NFSU2_TR(0x4870c3);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4870c5:{NFSU2_TR(0x4870c5);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B4870c7:{NFSU2_TR(0x4870c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4870c9:{NFSU2_TR(0x4870c9);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B4870cb:{NFSU2_TR(0x4870cb);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B4870cd:{NFSU2_TR(0x4870cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4870cf:{NFSU2_TR(0x4870cf);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B4870d1:{NFSU2_TR(0x4870d1);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B4870d3:{NFSU2_TR(0x4870d3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4870d5:{NFSU2_TR(0x4870d5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4870d7:{NFSU2_TR(0x4870d7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4870dd:{NFSU2_TR(0x4870dd);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4870df:{NFSU2_TR(0x4870df);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4870e1:{NFSU2_TR(0x4870e1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4870e5:{NFSU2_TR(0x4870e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4870e9:{NFSU2_TR(0x4870e9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4870eb:{NFSU2_TR(0x4870eb);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4870ee:{NFSU2_TR(0x4870ee);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4870f2:{NFSU2_TR(0x4870f2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4870f5:{NFSU2_TR(0x4870f5);
__builtin_memmove((R+4),(R+0),4);
}
B4870f7:{NFSU2_TR(0x4870f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4870f9:{NFSU2_TR(0x4870f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4870fd:{NFSU2_TR(0x4870fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487100:{NFSU2_TR(0x487100);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487104:{NFSU2_TR(0x487104);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B487108:{NFSU2_TR(0x487108);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48710b:{NFSU2_TR(0x48710b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48710f:{NFSU2_TR(0x48710f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487112:{NFSU2_TR(0x487112);
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
B487115:{NFSU2_TR(0x487115);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B487120:L487120:{c.instructions+=20;NFSU2_TR(0x487120);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B487124:{NFSU2_TR(0x487124);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B487126:{NFSU2_TR(0x487126);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B487128:{NFSU2_TR(0x487128);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48712b:{NFSU2_TR(0x48712b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48712e:{NFSU2_TR(0x48712e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B487131:{NFSU2_TR(0x487131);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487134:{NFSU2_TR(0x487134);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B487138:{NFSU2_TR(0x487138);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B487139:{NFSU2_TR(0x487139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48713b:{NFSU2_TR(0x48713b);
__builtin_memmove((R+8),(R+0),4);
}
B48713d:{NFSU2_TR(0x48713d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B48713f:{NFSU2_TR(0x48713f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B487142:{NFSU2_TR(0x487142);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487145:{NFSU2_TR(0x487145);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B487148:{NFSU2_TR(0x487148);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48714b:{NFSU2_TR(0x48714b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48714e:{NFSU2_TR(0x48714e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487151:{NFSU2_TR(0x487151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B487152:{NFSU2_TR(0x487152);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B487160:L487160:{c.instructions+=15;NFSU2_TR(0x487160);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B487164:{NFSU2_TR(0x487164);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B487166:{NFSU2_TR(0x487166);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48716a:{NFSU2_TR(0x48716a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48716b:{NFSU2_TR(0x48716b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48716d:{NFSU2_TR(0x48716d);
__builtin_memmove((R+8),(R+0),4);
}
B48716f:{NFSU2_TR(0x48716f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B487171:{NFSU2_TR(0x487171);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B487174:{NFSU2_TR(0x487174);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487177:{NFSU2_TR(0x487177);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48717a:{NFSU2_TR(0x48717a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48717d:{NFSU2_TR(0x48717d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B487180:{NFSU2_TR(0x487180);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487183:{NFSU2_TR(0x487183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B487184:{NFSU2_TR(0x487184);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B487190:L487190:{c.instructions+=20;NFSU2_TR(0x487190);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B487191:{NFSU2_TR(0x487191);
__builtin_memmove((R+20),(R+16),4);
}
B487193:{NFSU2_TR(0x487193);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B487196:{NFSU2_TR(0x487196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B487199:{NFSU2_TR(0x487199);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48719c:{NFSU2_TR(0x48719c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48719f:{NFSU2_TR(0x48719f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4871a3:{NFSU2_TR(0x4871a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4871a6:{NFSU2_TR(0x4871a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4871aa:{NFSU2_TR(0x4871aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4871ae:{NFSU2_TR(0x4871ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4871af:{NFSU2_TR(0x4871af);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4871b3:{NFSU2_TR(0x4871b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4871b4:{NFSU2_TR(0x4871b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4871b8:{NFSU2_TR(0x4871b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4871b9:{NFSU2_TR(0x4871b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4871c1:{NFSU2_TR(0x4871c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4871c9:{NFSU2_TR(0x4871c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4871d1:{NFSU2_TR(0x4871d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4871d9:{NFSU2_TR(0x4871d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4871deull));
TAIL_STATIC(0x43c9b0u,43c);
}
B4871de:L4871de:{c.instructions+=14;NFSU2_TR(0x4871de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4871e1:{NFSU2_TR(0x4871e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4871e5:{NFSU2_TR(0x4871e5);
__builtin_memmove((R+4),(R+0),4);
}
B4871e7:{NFSU2_TR(0x4871e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4871e9:{NFSU2_TR(0x4871e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4871ed:{NFSU2_TR(0x4871ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4871f0:{NFSU2_TR(0x4871f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4871f4:{NFSU2_TR(0x4871f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4871f7:{NFSU2_TR(0x4871f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4871fb:{NFSU2_TR(0x4871fb);
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
B4871fe:{NFSU2_TR(0x4871fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487201:{NFSU2_TR(0x487201);
__builtin_memmove((R+16),(R+20),4);
}
B487203:{NFSU2_TR(0x487203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B487204:{NFSU2_TR(0x487204);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B487210:L487210:{c.instructions+=10;NFSU2_TR(0x487210);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B487211:{NFSU2_TR(0x487211);
__builtin_memmove((R+20),(R+16),4);
}
B487213:{NFSU2_TR(0x487213);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B487216:{NFSU2_TR(0x487216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B487219:{NFSU2_TR(0x487219);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B48721c:{NFSU2_TR(0x48721c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48721d:{NFSU2_TR(0x48721d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48721e:{NFSU2_TR(0x48721e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B487222:{NFSU2_TR(0x487222);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B487223:{NFSU2_TR(0x487223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x487228ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B487228:L487228:{c.instructions+=20;NFSU2_TR(0x487228);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48722c:{NFSU2_TR(0x48722c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B487230:{NFSU2_TR(0x487230);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B487234:{NFSU2_TR(0x487234);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487238:{NFSU2_TR(0x487238);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48723c:{NFSU2_TR(0x48723c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48723f:{NFSU2_TR(0x48723f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487243:{NFSU2_TR(0x487243);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B487247:{NFSU2_TR(0x487247);
__builtin_memmove((R+8),(R+0),4);
}
B487249:{NFSU2_TR(0x487249);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B48724b:{NFSU2_TR(0x48724b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48724f:{NFSU2_TR(0x48724f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487252:{NFSU2_TR(0x487252);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B487256:{NFSU2_TR(0x487256);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487259:{NFSU2_TR(0x487259);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48725d:{NFSU2_TR(0x48725d);
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
B487260:{NFSU2_TR(0x487260);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487263:{NFSU2_TR(0x487263);
__builtin_memmove((R+16),(R+20),4);
}
B487265:{NFSU2_TR(0x487265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B487266:{NFSU2_TR(0x487266);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B487270:L487270:{c.instructions+=61;NFSU2_TR(0x487270);
__builtin_memmove((R+0),(R+4),4);
}
B487272:{NFSU2_TR(0x487272);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B487274:{NFSU2_TR(0x487274);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B487276:{NFSU2_TR(0x487276);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487279:{NFSU2_TR(0x487279);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48727c:{NFSU2_TR(0x48727c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48727f:{NFSU2_TR(0x48727f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487282:{NFSU2_TR(0x487282);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487285:{NFSU2_TR(0x487285);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487288:{NFSU2_TR(0x487288);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48728b:{NFSU2_TR(0x48728b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48728e:{NFSU2_TR(0x48728e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487291:{NFSU2_TR(0x487291);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487294:{NFSU2_TR(0x487294);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487297:{NFSU2_TR(0x487297);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48729a:{NFSU2_TR(0x48729a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48729d:{NFSU2_TR(0x48729d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4872a0:{NFSU2_TR(0x4872a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4872a3:{NFSU2_TR(0x4872a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4872a7:{NFSU2_TR(0x4872a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4872a8:{NFSU2_TR(0x4872a8);
__builtin_memmove((R+8),(R+4),4);
}
B4872aa:{NFSU2_TR(0x4872aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4872ab:{NFSU2_TR(0x4872ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4872ad:{NFSU2_TR(0x4872ad);
__builtin_memmove((R+24),(R+0),4);
}
B4872af:{NFSU2_TR(0x4872af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4872b1:{NFSU2_TR(0x4872b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4872b4:{NFSU2_TR(0x4872b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4872b7:{NFSU2_TR(0x4872b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4872ba:{NFSU2_TR(0x4872ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4872bd:{NFSU2_TR(0x4872bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4872c0:{NFSU2_TR(0x4872c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4872c3:{NFSU2_TR(0x4872c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4872c6:{NFSU2_TR(0x4872c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4872c8:{NFSU2_TR(0x4872c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4872cb:{NFSU2_TR(0x4872cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4872ce:{NFSU2_TR(0x4872ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4872d1:{NFSU2_TR(0x4872d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4872d4:{NFSU2_TR(0x4872d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4872d7:{NFSU2_TR(0x4872d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4872da:{NFSU2_TR(0x4872da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4872dd:{NFSU2_TR(0x4872dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4872e0:{NFSU2_TR(0x4872e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4872e2:{NFSU2_TR(0x4872e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4872e5:{NFSU2_TR(0x4872e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4872e8:{NFSU2_TR(0x4872e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4872eb:{NFSU2_TR(0x4872eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4872ee:{NFSU2_TR(0x4872ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4872f1:{NFSU2_TR(0x4872f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4872f4:{NFSU2_TR(0x4872f4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x30ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4872f7:{NFSU2_TR(0x4872f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4872fa:{NFSU2_TR(0x4872fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4872fc:{NFSU2_TR(0x4872fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4872ff:{NFSU2_TR(0x4872ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B487302:{NFSU2_TR(0x487302);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487305:{NFSU2_TR(0x487305);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B487308:{NFSU2_TR(0x487308);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48730b:{NFSU2_TR(0x48730b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48730e:{NFSU2_TR(0x48730e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48730f:{NFSU2_TR(0x48730f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487312:{NFSU2_TR(0x487312);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B487313:{NFSU2_TR(0x487313);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B487320:L487320:{c.instructions+=16;NFSU2_TR(0x487320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B487323:{NFSU2_TR(0x487323);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487326:{NFSU2_TR(0x487326);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48732a:{NFSU2_TR(0x48732a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48732e:{NFSU2_TR(0x48732e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B487330:{NFSU2_TR(0x487330);
__builtin_memmove((R+4),(R+0),4);
}
B487332:{NFSU2_TR(0x487332);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487336:{NFSU2_TR(0x487336);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B487338:{NFSU2_TR(0x487338);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48733c:{NFSU2_TR(0x48733c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48733f:{NFSU2_TR(0x48733f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B487343:{NFSU2_TR(0x487343);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487346:{NFSU2_TR(0x487346);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48734a:{NFSU2_TR(0x48734a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48734d:{NFSU2_TR(0x48734d);
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
B487350:{NFSU2_TR(0x487350);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B487360:L487360:{c.instructions+=17;NFSU2_TR(0x487360);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B487364:{NFSU2_TR(0x487364);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B487366:{NFSU2_TR(0x487366);
__builtin_memmove((R+0),(R+4),4);
}
B487368:{NFSU2_TR(0x487368);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B48736b:{NFSU2_TR(0x48736b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B48736d:{NFSU2_TR(0x48736d);
__builtin_memmove((R+4),(R+0),4);
}
B48736f:{NFSU2_TR(0x48736f);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B487372:{NFSU2_TR(0x487372);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B487374:{NFSU2_TR(0x487374);
__builtin_memmove((R+4),(R+0),4);
}
B487376:{NFSU2_TR(0x487376);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B487379:{NFSU2_TR(0x487379);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B48737b:{NFSU2_TR(0x48737b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B48737d:{NFSU2_TR(0x48737d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B487382:{NFSU2_TR(0x487382);
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
B487384:{NFSU2_TR(0x487384);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487388:{NFSU2_TR(0x487388);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48738c:{NFSU2_TR(0x48738c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L487394;}}
}
B48738e:L48738e:{c.instructions+=1;NFSU2_TR(0x48738e);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487394:L487394:{c.instructions+=3;NFSU2_TR(0x487394);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48739a:{NFSU2_TR(0x48739a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48739e:{NFSU2_TR(0x48739e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4873a0:L4873a0:{c.instructions+=117;NFSU2_TR(0x4873a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4873a4:{NFSU2_TR(0x4873a4);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4873a7:{NFSU2_TR(0x4873a7);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873aa:{NFSU2_TR(0x4873aa);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4873ad:{NFSU2_TR(0x4873ad);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873b0:{NFSU2_TR(0x4873b0);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4873b3:{NFSU2_TR(0x4873b3);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873b6:{NFSU2_TR(0x4873b6);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4873b9:{NFSU2_TR(0x4873b9);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873bc:{NFSU2_TR(0x4873bc);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4873bf:{NFSU2_TR(0x4873bf);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873c2:{NFSU2_TR(0x4873c2);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B4873c4:{NFSU2_TR(0x4873c4);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4873c7:{NFSU2_TR(0x4873c7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873ca:{NFSU2_TR(0x4873ca);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B4873cc:{NFSU2_TR(0x4873cc);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4873ce:{NFSU2_TR(0x4873ce);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4873d1:{NFSU2_TR(0x4873d1);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873d4:{NFSU2_TR(0x4873d4);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873d7:{NFSU2_TR(0x4873d7);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873da:{NFSU2_TR(0x4873da);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4873dc:{NFSU2_TR(0x4873dc);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4873df:{NFSU2_TR(0x4873df);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873e2:{NFSU2_TR(0x4873e2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873e5:{NFSU2_TR(0x4873e5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4873e8:{NFSU2_TR(0x4873e8);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873eb:{NFSU2_TR(0x4873eb);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873ee:{NFSU2_TR(0x4873ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4873f0:{NFSU2_TR(0x4873f0);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873f3:{NFSU2_TR(0x4873f3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4873f5:{NFSU2_TR(0x4873f5);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4873f8:{NFSU2_TR(0x4873f8);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873fb:{NFSU2_TR(0x4873fb);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4873fe:{NFSU2_TR(0x4873fe);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487401:{NFSU2_TR(0x487401);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487403:{NFSU2_TR(0x487403);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487406:{NFSU2_TR(0x487406);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487409:{NFSU2_TR(0x487409);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48740c:{NFSU2_TR(0x48740c);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48740f:{NFSU2_TR(0x48740f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487411:{NFSU2_TR(0x487411);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487414:{NFSU2_TR(0x487414);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487417:{NFSU2_TR(0x487417);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48741a:{NFSU2_TR(0x48741a);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48741d:{NFSU2_TR(0x48741d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487420:{NFSU2_TR(0x487420);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487423:{NFSU2_TR(0x487423);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487425:{NFSU2_TR(0x487425);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487428:{NFSU2_TR(0x487428);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48742a:{NFSU2_TR(0x48742a);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48742d:{NFSU2_TR(0x48742d);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487430:{NFSU2_TR(0x487430);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487432:{NFSU2_TR(0x487432);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487435:{NFSU2_TR(0x487435);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487437:{NFSU2_TR(0x487437);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48743a:{NFSU2_TR(0x48743a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48743d:{NFSU2_TR(0x48743d);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B48743f:{NFSU2_TR(0x48743f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487441:{NFSU2_TR(0x487441);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B487443:{NFSU2_TR(0x487443);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487446:{NFSU2_TR(0x487446);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487449:{NFSU2_TR(0x487449);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48744b:{NFSU2_TR(0x48744b);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B48744d:{NFSU2_TR(0x48744d);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487450:{NFSU2_TR(0x487450);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487452:{NFSU2_TR(0x487452);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B487454:{NFSU2_TR(0x487454);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B487456:{NFSU2_TR(0x487456);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487459:{NFSU2_TR(0x487459);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48745c:{NFSU2_TR(0x48745c);
__asm__ volatile(".byte 0xde,0xea":::"memory");
}
B48745e:{NFSU2_TR(0x48745e);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487461:{NFSU2_TR(0x487461);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487464:{NFSU2_TR(0x487464);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487467:{NFSU2_TR(0x487467);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48746a:{NFSU2_TR(0x48746a);
__asm__ volatile(".byte 0xde,0xea":::"memory");
}
B48746c:{NFSU2_TR(0x48746c);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48746f:{NFSU2_TR(0x48746f);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487472:{NFSU2_TR(0x487472);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487474:{NFSU2_TR(0x487474);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487477:{NFSU2_TR(0x487477);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48747a:{NFSU2_TR(0x48747a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48747d:{NFSU2_TR(0x48747d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48747f:{NFSU2_TR(0x48747f);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487482:{NFSU2_TR(0x487482);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B487484:{NFSU2_TR(0x487484);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487487:{NFSU2_TR(0x487487);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48748a:{NFSU2_TR(0x48748a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48748c:{NFSU2_TR(0x48748c);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48748f:{NFSU2_TR(0x48748f);
__asm__ volatile(".byte 0xde,0xea":::"memory");
}
B487491:{NFSU2_TR(0x487491);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487494:{NFSU2_TR(0x487494);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487497:{NFSU2_TR(0x487497);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48749a:{NFSU2_TR(0x48749a);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48749d:{NFSU2_TR(0x48749d);
__asm__ volatile(".byte 0xde,0xea":::"memory");
}
B48749f:{NFSU2_TR(0x48749f);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4874a2:{NFSU2_TR(0x4874a2);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4874a5:{NFSU2_TR(0x4874a5);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4874a8:{NFSU2_TR(0x4874a8);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4874ab:{NFSU2_TR(0x4874ab);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4874ae:{NFSU2_TR(0x4874ae);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4874b1:{NFSU2_TR(0x4874b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4874b3:{NFSU2_TR(0x4874b3);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4874b6:{NFSU2_TR(0x4874b6);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B4874b8:{NFSU2_TR(0x4874b8);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4874bb:{NFSU2_TR(0x4874bb);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4874be:{NFSU2_TR(0x4874be);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4874c1:{NFSU2_TR(0x4874c1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4874c3:{NFSU2_TR(0x4874c3);
__asm__ volatile(".byte 0xde,0xea":::"memory");
}
B4874c5:{NFSU2_TR(0x4874c5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4874c7:{NFSU2_TR(0x4874c7);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4874ca:{NFSU2_TR(0x4874ca);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4874cd:{NFSU2_TR(0x4874cd);
__asm__ volatile(".byte 0xde,0xea":::"memory");
}
B4874cf:{NFSU2_TR(0x4874cf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4874d1:{NFSU2_TR(0x4874d1);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4874d4:{NFSU2_TR(0x4874d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4874d6:{NFSU2_TR(0x4874d6);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B4874d8:{NFSU2_TR(0x4874d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4874e0:L4874e0:{c.instructions+=3;NFSU2_TR(0x4874e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4874e4:{NFSU2_TR(0x4874e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4874e5:{NFSU2_TR(0x4874e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4874eaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4873a0u);}goto L4873a0;}
}
B4874ea:L4874ea:{c.instructions+=405;NFSU2_TR(0x4874ea);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4874f0:{NFSU2_TR(0x4874f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4874f4:{NFSU2_TR(0x4874f4);
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
B4874f7:{NFSU2_TR(0x4874f7);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4874fa:{NFSU2_TR(0x4874fa);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4874fd:{NFSU2_TR(0x4874fd);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487500:{NFSU2_TR(0x487500);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487503:{NFSU2_TR(0x487503);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487506:{NFSU2_TR(0x487506);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487509:{NFSU2_TR(0x487509);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B48750b:{NFSU2_TR(0x48750b);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48750e:{NFSU2_TR(0x48750e);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487511:{NFSU2_TR(0x487511);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487514:{NFSU2_TR(0x487514);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487516:{NFSU2_TR(0x487516);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487519:{NFSU2_TR(0x487519);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48751c:{NFSU2_TR(0x48751c);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48751f:{NFSU2_TR(0x48751f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487521:{NFSU2_TR(0x487521);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487524:{NFSU2_TR(0x487524);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487527:{NFSU2_TR(0x487527);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48752a:{NFSU2_TR(0x48752a);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B48752c:{NFSU2_TR(0x48752c);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48752f:{NFSU2_TR(0x48752f);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487532:{NFSU2_TR(0x487532);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487535:{NFSU2_TR(0x487535);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487537:{NFSU2_TR(0x487537);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B487539:{NFSU2_TR(0x487539);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48753b:{NFSU2_TR(0x48753b);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48753e:{NFSU2_TR(0x48753e);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487541:{NFSU2_TR(0x487541);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487544:{NFSU2_TR(0x487544);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487547:{NFSU2_TR(0x487547);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48754a:{NFSU2_TR(0x48754a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48754d:{NFSU2_TR(0x48754d);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B48754f:{NFSU2_TR(0x48754f);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487552:{NFSU2_TR(0x487552);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487555:{NFSU2_TR(0x487555);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487558:{NFSU2_TR(0x487558);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B48755a:{NFSU2_TR(0x48755a);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48755d:{NFSU2_TR(0x48755d);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487560:{NFSU2_TR(0x487560);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487563:{NFSU2_TR(0x487563);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487565:{NFSU2_TR(0x487565);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487568:{NFSU2_TR(0x487568);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48756b:{NFSU2_TR(0x48756b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48756e:{NFSU2_TR(0x48756e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487570:{NFSU2_TR(0x487570);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487573:{NFSU2_TR(0x487573);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487576:{NFSU2_TR(0x487576);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487579:{NFSU2_TR(0x487579);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B48757b:{NFSU2_TR(0x48757b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48757d:{NFSU2_TR(0x48757d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487580:{NFSU2_TR(0x487580);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487583:{NFSU2_TR(0x487583);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487586:{NFSU2_TR(0x487586);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487589:{NFSU2_TR(0x487589);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48758c:{NFSU2_TR(0x48758c);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48758f:{NFSU2_TR(0x48758f);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487592:{NFSU2_TR(0x487592);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487594:{NFSU2_TR(0x487594);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487597:{NFSU2_TR(0x487597);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48759a:{NFSU2_TR(0x48759a);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48759d:{NFSU2_TR(0x48759d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48759f:{NFSU2_TR(0x48759f);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4875a2:{NFSU2_TR(0x4875a2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875a5:{NFSU2_TR(0x4875a5);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875a8:{NFSU2_TR(0x4875a8);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4875aa:{NFSU2_TR(0x4875aa);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4875ad:{NFSU2_TR(0x4875ad);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875b0:{NFSU2_TR(0x4875b0);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875b3:{NFSU2_TR(0x4875b3);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4875b5:{NFSU2_TR(0x4875b5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4875b8:{NFSU2_TR(0x4875b8);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875bb:{NFSU2_TR(0x4875bb);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875be:{NFSU2_TR(0x4875be);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4875c0:{NFSU2_TR(0x4875c0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4875c2:{NFSU2_TR(0x4875c2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4875c5:{NFSU2_TR(0x4875c5);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4875c8:{NFSU2_TR(0x4875c8);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875cb:{NFSU2_TR(0x4875cb);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875ce:{NFSU2_TR(0x4875ce);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4875d1:{NFSU2_TR(0x4875d1);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875d4:{NFSU2_TR(0x4875d4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875d7:{NFSU2_TR(0x4875d7);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4875d9:{NFSU2_TR(0x4875d9);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4875dc:{NFSU2_TR(0x4875dc);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875df:{NFSU2_TR(0x4875df);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875e2:{NFSU2_TR(0x4875e2);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4875e4:{NFSU2_TR(0x4875e4);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4875e7:{NFSU2_TR(0x4875e7);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875ea:{NFSU2_TR(0x4875ea);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875ed:{NFSU2_TR(0x4875ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4875ef:{NFSU2_TR(0x4875ef);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4875f2:{NFSU2_TR(0x4875f2);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875f5:{NFSU2_TR(0x4875f5);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4875f8:{NFSU2_TR(0x4875f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4875fa:{NFSU2_TR(0x4875fa);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4875fd:{NFSU2_TR(0x4875fd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487600:{NFSU2_TR(0x487600);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487603:{NFSU2_TR(0x487603);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487605:{NFSU2_TR(0x487605);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B487607:{NFSU2_TR(0x487607);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48760a:{NFSU2_TR(0x48760a);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48760d:{NFSU2_TR(0x48760d);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487610:{NFSU2_TR(0x487610);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487613:{NFSU2_TR(0x487613);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487616:{NFSU2_TR(0x487616);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487619:{NFSU2_TR(0x487619);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48761c:{NFSU2_TR(0x48761c);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B48761e:{NFSU2_TR(0x48761e);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487621:{NFSU2_TR(0x487621);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487624:{NFSU2_TR(0x487624);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487627:{NFSU2_TR(0x487627);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487629:{NFSU2_TR(0x487629);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48762c:{NFSU2_TR(0x48762c);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48762f:{NFSU2_TR(0x48762f);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487632:{NFSU2_TR(0x487632);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487634:{NFSU2_TR(0x487634);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487637:{NFSU2_TR(0x487637);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48763a:{NFSU2_TR(0x48763a);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48763d:{NFSU2_TR(0x48763d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48763f:{NFSU2_TR(0x48763f);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487642:{NFSU2_TR(0x487642);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487645:{NFSU2_TR(0x487645);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487648:{NFSU2_TR(0x487648);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B48764a:{NFSU2_TR(0x48764a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48764c:{NFSU2_TR(0x48764c);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48764f:{NFSU2_TR(0x48764f);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487652:{NFSU2_TR(0x487652);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487655:{NFSU2_TR(0x487655);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487658:{NFSU2_TR(0x487658);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48765b:{NFSU2_TR(0x48765b);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48765e:{NFSU2_TR(0x48765e);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487661:{NFSU2_TR(0x487661);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487663:{NFSU2_TR(0x487663);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487666:{NFSU2_TR(0x487666);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487669:{NFSU2_TR(0x487669);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48766c:{NFSU2_TR(0x48766c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48766e:{NFSU2_TR(0x48766e);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487671:{NFSU2_TR(0x487671);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487674:{NFSU2_TR(0x487674);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487676:{NFSU2_TR(0x487676);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487678:{NFSU2_TR(0x487678);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48767b:{NFSU2_TR(0x48767b);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48767e:{NFSU2_TR(0x48767e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487681:{NFSU2_TR(0x487681);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487683:{NFSU2_TR(0x487683);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487685:{NFSU2_TR(0x487685);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487688:{NFSU2_TR(0x487688);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48768b:{NFSU2_TR(0x48768b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48768d:{NFSU2_TR(0x48768d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48768f:{NFSU2_TR(0x48768f);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487692:{NFSU2_TR(0x487692);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487695:{NFSU2_TR(0x487695);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487698:{NFSU2_TR(0x487698);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48769b:{NFSU2_TR(0x48769b);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48769e:{NFSU2_TR(0x48769e);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876a1:{NFSU2_TR(0x4876a1);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876a4:{NFSU2_TR(0x4876a4);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4876a6:{NFSU2_TR(0x4876a6);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4876a9:{NFSU2_TR(0x4876a9);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876ac:{NFSU2_TR(0x4876ac);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876af:{NFSU2_TR(0x4876af);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4876b1:{NFSU2_TR(0x4876b1);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4876b4:{NFSU2_TR(0x4876b4);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876b7:{NFSU2_TR(0x4876b7);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876ba:{NFSU2_TR(0x4876ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4876bc:{NFSU2_TR(0x4876bc);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4876bf:{NFSU2_TR(0x4876bf);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876c1:{NFSU2_TR(0x4876c1);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876c4:{NFSU2_TR(0x4876c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4876c6:{NFSU2_TR(0x4876c6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4876c8:{NFSU2_TR(0x4876c8);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876cb:{NFSU2_TR(0x4876cb);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876ce:{NFSU2_TR(0x4876ce);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4876d0:{NFSU2_TR(0x4876d0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4876d2:{NFSU2_TR(0x4876d2);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4876d5:{NFSU2_TR(0x4876d5);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4876d8:{NFSU2_TR(0x4876d8);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876db:{NFSU2_TR(0x4876db);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876de:{NFSU2_TR(0x4876de);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4876e1:{NFSU2_TR(0x4876e1);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876e4:{NFSU2_TR(0x4876e4);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876e7:{NFSU2_TR(0x4876e7);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4876e9:{NFSU2_TR(0x4876e9);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4876ec:{NFSU2_TR(0x4876ec);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876ef:{NFSU2_TR(0x4876ef);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876f2:{NFSU2_TR(0x4876f2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4876f4:{NFSU2_TR(0x4876f4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4876f6:{NFSU2_TR(0x4876f6);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876f9:{NFSU2_TR(0x4876f9);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4876fc:{NFSU2_TR(0x4876fc);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4876fe:{NFSU2_TR(0x4876fe);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487701:{NFSU2_TR(0x487701);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487704:{NFSU2_TR(0x487704);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487707:{NFSU2_TR(0x487707);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487709:{NFSU2_TR(0x487709);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48770c:{NFSU2_TR(0x48770c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48770e:{NFSU2_TR(0x48770e);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487711:{NFSU2_TR(0x487711);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487713:{NFSU2_TR(0x487713);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B487715:{NFSU2_TR(0x487715);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487718:{NFSU2_TR(0x487718);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48771b:{NFSU2_TR(0x48771b);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48771e:{NFSU2_TR(0x48771e);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487721:{NFSU2_TR(0x487721);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487724:{NFSU2_TR(0x487724);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487727:{NFSU2_TR(0x487727);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48772a:{NFSU2_TR(0x48772a);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B48772c:{NFSU2_TR(0x48772c);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48772f:{NFSU2_TR(0x48772f);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487732:{NFSU2_TR(0x487732);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487735:{NFSU2_TR(0x487735);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487737:{NFSU2_TR(0x487737);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48773a:{NFSU2_TR(0x48773a);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48773d:{NFSU2_TR(0x48773d);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487740:{NFSU2_TR(0x487740);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487742:{NFSU2_TR(0x487742);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487745:{NFSU2_TR(0x487745);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487748:{NFSU2_TR(0x487748);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48774b:{NFSU2_TR(0x48774b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B48774d:{NFSU2_TR(0x48774d);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487750:{NFSU2_TR(0x487750);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487753:{NFSU2_TR(0x487753);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487756:{NFSU2_TR(0x487756);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487758:{NFSU2_TR(0x487758);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48775a:{NFSU2_TR(0x48775a);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48775d:{NFSU2_TR(0x48775d);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487760:{NFSU2_TR(0x487760);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487763:{NFSU2_TR(0x487763);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487766:{NFSU2_TR(0x487766);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487769:{NFSU2_TR(0x487769);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48776c:{NFSU2_TR(0x48776c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48776f:{NFSU2_TR(0x48776f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487771:{NFSU2_TR(0x487771);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487774:{NFSU2_TR(0x487774);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487777:{NFSU2_TR(0x487777);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48777a:{NFSU2_TR(0x48777a);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B48777c:{NFSU2_TR(0x48777c);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48777f:{NFSU2_TR(0x48777f);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487782:{NFSU2_TR(0x487782);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487784:{NFSU2_TR(0x487784);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487786:{NFSU2_TR(0x487786);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487789:{NFSU2_TR(0x487789);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48778c:{NFSU2_TR(0x48778c);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48778f:{NFSU2_TR(0x48778f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487791:{NFSU2_TR(0x487791);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487794:{NFSU2_TR(0x487794);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487796:{NFSU2_TR(0x487796);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487799:{NFSU2_TR(0x487799);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B48779b:{NFSU2_TR(0x48779b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48779d:{NFSU2_TR(0x48779d);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4877a0:{NFSU2_TR(0x4877a0);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4877a3:{NFSU2_TR(0x4877a3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877a6:{NFSU2_TR(0x4877a6);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877a9:{NFSU2_TR(0x4877a9);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4877ac:{NFSU2_TR(0x4877ac);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877af:{NFSU2_TR(0x4877af);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877b2:{NFSU2_TR(0x4877b2);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4877b4:{NFSU2_TR(0x4877b4);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4877b7:{NFSU2_TR(0x4877b7);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877ba:{NFSU2_TR(0x4877ba);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877bd:{NFSU2_TR(0x4877bd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4877bf:{NFSU2_TR(0x4877bf);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4877c2:{NFSU2_TR(0x4877c2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877c4:{NFSU2_TR(0x4877c4);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877c7:{NFSU2_TR(0x4877c7);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4877c9:{NFSU2_TR(0x4877c9);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4877cc:{NFSU2_TR(0x4877cc);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877cf:{NFSU2_TR(0x4877cf);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877d2:{NFSU2_TR(0x4877d2);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4877d4:{NFSU2_TR(0x4877d4);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4877d7:{NFSU2_TR(0x4877d7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877d9:{NFSU2_TR(0x4877d9);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877dc:{NFSU2_TR(0x4877dc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4877de:{NFSU2_TR(0x4877de);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4877e0:{NFSU2_TR(0x4877e0);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4877e3:{NFSU2_TR(0x4877e3);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4877e6:{NFSU2_TR(0x4877e6);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877e9:{NFSU2_TR(0x4877e9);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877ec:{NFSU2_TR(0x4877ec);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4877ef:{NFSU2_TR(0x4877ef);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877f2:{NFSU2_TR(0x4877f2);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877f5:{NFSU2_TR(0x4877f5);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4877f7:{NFSU2_TR(0x4877f7);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4877fa:{NFSU2_TR(0x4877fa);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4877fd:{NFSU2_TR(0x4877fd);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487800:{NFSU2_TR(0x487800);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487802:{NFSU2_TR(0x487802);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487805:{NFSU2_TR(0x487805);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487807:{NFSU2_TR(0x487807);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48780a:{NFSU2_TR(0x48780a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48780c:{NFSU2_TR(0x48780c);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48780f:{NFSU2_TR(0x48780f);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487812:{NFSU2_TR(0x487812);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487815:{NFSU2_TR(0x487815);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487817:{NFSU2_TR(0x487817);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48781a:{NFSU2_TR(0x48781a);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48781d:{NFSU2_TR(0x48781d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48781f:{NFSU2_TR(0x48781f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487821:{NFSU2_TR(0x487821);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B487823:{NFSU2_TR(0x487823);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487826:{NFSU2_TR(0x487826);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487829:{NFSU2_TR(0x487829);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48782c:{NFSU2_TR(0x48782c);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48782f:{NFSU2_TR(0x48782f);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487832:{NFSU2_TR(0x487832);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487835:{NFSU2_TR(0x487835);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487838:{NFSU2_TR(0x487838);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B48783a:{NFSU2_TR(0x48783a);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48783d:{NFSU2_TR(0x48783d);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487840:{NFSU2_TR(0x487840);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487843:{NFSU2_TR(0x487843);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487845:{NFSU2_TR(0x487845);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487848:{NFSU2_TR(0x487848);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48784b:{NFSU2_TR(0x48784b);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48784e:{NFSU2_TR(0x48784e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487850:{NFSU2_TR(0x487850);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487853:{NFSU2_TR(0x487853);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487856:{NFSU2_TR(0x487856);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487859:{NFSU2_TR(0x487859);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48785b:{NFSU2_TR(0x48785b);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48785e:{NFSU2_TR(0x48785e);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487861:{NFSU2_TR(0x487861);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487864:{NFSU2_TR(0x487864);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487866:{NFSU2_TR(0x487866);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B487868:{NFSU2_TR(0x487868);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48786b:{NFSU2_TR(0x48786b);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48786e:{NFSU2_TR(0x48786e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487871:{NFSU2_TR(0x487871);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487874:{NFSU2_TR(0x487874);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487877:{NFSU2_TR(0x487877);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48787a:{NFSU2_TR(0x48787a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48787d:{NFSU2_TR(0x48787d);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B48787f:{NFSU2_TR(0x48787f);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487882:{NFSU2_TR(0x487882);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487885:{NFSU2_TR(0x487885);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487888:{NFSU2_TR(0x487888);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48788a:{NFSU2_TR(0x48788a);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48788d:{NFSU2_TR(0x48788d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48788f:{NFSU2_TR(0x48788f);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487892:{NFSU2_TR(0x487892);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487894:{NFSU2_TR(0x487894);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487897:{NFSU2_TR(0x487897);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48789a:{NFSU2_TR(0x48789a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48789d:{NFSU2_TR(0x48789d);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B48789f:{NFSU2_TR(0x48789f);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4878a2:{NFSU2_TR(0x4878a2);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878a5:{NFSU2_TR(0x4878a5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878a7:{NFSU2_TR(0x4878a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4878a9:{NFSU2_TR(0x4878a9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4878ab:{NFSU2_TR(0x4878ab);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4878ae:{NFSU2_TR(0x4878ae);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4878b1:{NFSU2_TR(0x4878b1);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878b4:{NFSU2_TR(0x4878b4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878b7:{NFSU2_TR(0x4878b7);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4878ba:{NFSU2_TR(0x4878ba);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878bd:{NFSU2_TR(0x4878bd);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878c0:{NFSU2_TR(0x4878c0);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4878c2:{NFSU2_TR(0x4878c2);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4878c5:{NFSU2_TR(0x4878c5);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878c8:{NFSU2_TR(0x4878c8);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878cb:{NFSU2_TR(0x4878cb);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4878cd:{NFSU2_TR(0x4878cd);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4878d0:{NFSU2_TR(0x4878d0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878d2:{NFSU2_TR(0x4878d2);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878d5:{NFSU2_TR(0x4878d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4878d7:{NFSU2_TR(0x4878d7);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4878da:{NFSU2_TR(0x4878da);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878dd:{NFSU2_TR(0x4878dd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878e0:{NFSU2_TR(0x4878e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4878e2:{NFSU2_TR(0x4878e2);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4878e5:{NFSU2_TR(0x4878e5);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878e8:{NFSU2_TR(0x4878e8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878ea:{NFSU2_TR(0x4878ea);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4878ec:{NFSU2_TR(0x4878ec);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4878ee:{NFSU2_TR(0x4878ee);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4878f1:{NFSU2_TR(0x4878f1);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4878f4:{NFSU2_TR(0x4878f4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878f7:{NFSU2_TR(0x4878f7);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4878fa:{NFSU2_TR(0x4878fa);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4878fd:{NFSU2_TR(0x4878fd);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487900:{NFSU2_TR(0x487900);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487903:{NFSU2_TR(0x487903);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487905:{NFSU2_TR(0x487905);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487908:{NFSU2_TR(0x487908);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48790b:{NFSU2_TR(0x48790b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48790e:{NFSU2_TR(0x48790e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487910:{NFSU2_TR(0x487910);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487913:{NFSU2_TR(0x487913);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487915:{NFSU2_TR(0x487915);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487918:{NFSU2_TR(0x487918);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B48791a:{NFSU2_TR(0x48791a);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48791d:{NFSU2_TR(0x48791d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487920:{NFSU2_TR(0x487920);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487923:{NFSU2_TR(0x487923);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B487925:{NFSU2_TR(0x487925);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487928:{NFSU2_TR(0x487928);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48792a:{NFSU2_TR(0x48792a);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48792d:{NFSU2_TR(0x48792d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48792f:{NFSU2_TR(0x48792f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B487931:{NFSU2_TR(0x487931);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487934:{NFSU2_TR(0x487934);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B487936:{NFSU2_TR(0x487936);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B487940:L487940:{c.instructions+=45;NFSU2_TR(0x487940);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B487941:{NFSU2_TR(0x487941);
__builtin_memmove((R+20),(R+16),4);
}
B487943:{NFSU2_TR(0x487943);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B487946:{NFSU2_TR(0x487946);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xb0ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xb0ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48794c:{NFSU2_TR(0x48794c);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48794f:{NFSU2_TR(0x48794f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B487952:{NFSU2_TR(0x487952);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487955:{NFSU2_TR(0x487955);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B487958:{NFSU2_TR(0x487958);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48795b:{NFSU2_TR(0x48795b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48795e:{NFSU2_TR(0x48795e);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487962:{NFSU2_TR(0x487962);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B487964:{NFSU2_TR(0x487964);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B487968:{NFSU2_TR(0x487968);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48796f:{NFSU2_TR(0x48796f);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487973:{NFSU2_TR(0x487973);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487977:{NFSU2_TR(0x487977);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48797a:{NFSU2_TR(0x48797a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48797b:{NFSU2_TR(0x48797b);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48797f:{NFSU2_TR(0x48797f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B487983:{NFSU2_TR(0x487983);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487986:{NFSU2_TR(0x487986);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B487987:{NFSU2_TR(0x487987);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48798a:{NFSU2_TR(0x48798a);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B487992:{NFSU2_TR(0x487992);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487995:{NFSU2_TR(0x487995);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4879a0:{NFSU2_TR(0x4879a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4879ab:{NFSU2_TR(0x4879ab);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4879ad:{NFSU2_TR(0x4879ad);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4879b4:{NFSU2_TR(0x4879b4);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4879bf:{NFSU2_TR(0x4879bf);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4879c3:{NFSU2_TR(0x4879c3);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4879c7:{NFSU2_TR(0x4879c7);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4879ca:{NFSU2_TR(0x4879ca);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4879cd:{NFSU2_TR(0x4879cd);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4879d0:{NFSU2_TR(0x4879d0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4879d2:{NFSU2_TR(0x4879d2);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4879d9:{NFSU2_TR(0x4879d9);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4879e0:{NFSU2_TR(0x4879e0);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4879e3:{NFSU2_TR(0x4879e3);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4879e6:{NFSU2_TR(0x4879e6);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4879e9:{NFSU2_TR(0x4879e9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4879eb:{NFSU2_TR(0x4879eb);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4879f2:{NFSU2_TR(0x4879f2);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4879f9:{NFSU2_TR(0x4879f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4879feull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4874e0u);}goto L4874e0;}
}
B4879fe:L4879fe:{c.instructions+=147;NFSU2_TR(0x4879fe);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487a02:{NFSU2_TR(0x487a02);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487a06:{NFSU2_TR(0x487a06);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487a0c:{NFSU2_TR(0x487a0c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487a10:{NFSU2_TR(0x487a10);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487a16:{NFSU2_TR(0x487a16);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487a1a:{NFSU2_TR(0x487a1a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487a20:{NFSU2_TR(0x487a20);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B487a22:{NFSU2_TR(0x487a22);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B487a24:{NFSU2_TR(0x487a24);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B487a26:{NFSU2_TR(0x487a26);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487a2a:{NFSU2_TR(0x487a2a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487a2e:{NFSU2_TR(0x487a2e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487a32:{NFSU2_TR(0x487a32);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487a38:{NFSU2_TR(0x487a38);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487a3c:{NFSU2_TR(0x487a3c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487a40:{NFSU2_TR(0x487a40);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487a46:{NFSU2_TR(0x487a46);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487a4d:{NFSU2_TR(0x487a4d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487a51:{NFSU2_TR(0x487a51);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487a57:{NFSU2_TR(0x487a57);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487a5e:{NFSU2_TR(0x487a5e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487a62:{NFSU2_TR(0x487a62);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B487a64:{NFSU2_TR(0x487a64);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487a68:{NFSU2_TR(0x487a68);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487a6c:{NFSU2_TR(0x487a6c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487a70:{NFSU2_TR(0x487a70);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487a76:{NFSU2_TR(0x487a76);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487a7a:{NFSU2_TR(0x487a7a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487a7e:{NFSU2_TR(0x487a7e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487a84:{NFSU2_TR(0x487a84);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487a88:{NFSU2_TR(0x487a88);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487a8c:{NFSU2_TR(0x487a8c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487a92:{NFSU2_TR(0x487a92);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487a96:{NFSU2_TR(0x487a96);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487a9a:{NFSU2_TR(0x487a9a);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B487a9c:{NFSU2_TR(0x487a9c);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487aa0:{NFSU2_TR(0x487aa0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487aa4:{NFSU2_TR(0x487aa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B487aa8:{NFSU2_TR(0x487aa8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487aae:{NFSU2_TR(0x487aae);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B487ab2:{NFSU2_TR(0x487ab2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B487ab6:{NFSU2_TR(0x487ab6);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487abd:{NFSU2_TR(0x487abd);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487ac1:{NFSU2_TR(0x487ac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487ac5:{NFSU2_TR(0x487ac5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487ac9:{NFSU2_TR(0x487ac9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B487acd:{NFSU2_TR(0x487acd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487ad3:{NFSU2_TR(0x487ad3);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487ada:{NFSU2_TR(0x487ada);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B487ade:{NFSU2_TR(0x487ade);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487ae2:{NFSU2_TR(0x487ae2);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487ae6:{NFSU2_TR(0x487ae6);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487aea:{NFSU2_TR(0x487aea);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487aee:{NFSU2_TR(0x487aee);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487af4:{NFSU2_TR(0x487af4);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487af8:{NFSU2_TR(0x487af8);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487afc:{NFSU2_TR(0x487afc);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487b03:{NFSU2_TR(0x487b03);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487b07:{NFSU2_TR(0x487b07);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487b0b:{NFSU2_TR(0x487b0b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487b0f:{NFSU2_TR(0x487b0f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487b13:{NFSU2_TR(0x487b13);
__asm__ volatile(".byte 0xd8,0xc5":::"memory");
}
B487b15:{NFSU2_TR(0x487b15);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487b19:{NFSU2_TR(0x487b19);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487b1d:{NFSU2_TR(0x487b1d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487b21:{NFSU2_TR(0x487b21);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487b28:{NFSU2_TR(0x487b28);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B487b2a:{NFSU2_TR(0x487b2a);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487b2e:{NFSU2_TR(0x487b2e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487b32:{NFSU2_TR(0x487b32);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487b36:{NFSU2_TR(0x487b36);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487b3a:{NFSU2_TR(0x487b3a);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B487b3c:{NFSU2_TR(0x487b3c);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487b43:{NFSU2_TR(0x487b43);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B487b45:{NFSU2_TR(0x487b45);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B487b47:{NFSU2_TR(0x487b47);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487b4b:{NFSU2_TR(0x487b4b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487b4f:{NFSU2_TR(0x487b4f);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487b53:{NFSU2_TR(0x487b53);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487b5a:{NFSU2_TR(0x487b5a);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487b61:{NFSU2_TR(0x487b61);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487b65:{NFSU2_TR(0x487b65);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487b6b:{NFSU2_TR(0x487b6b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487b6f:{NFSU2_TR(0x487b6f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B487b73:{NFSU2_TR(0x487b73);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B487b75:{NFSU2_TR(0x487b75);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B487b77:{NFSU2_TR(0x487b77);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487b7e:{NFSU2_TR(0x487b7e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B487b80:{NFSU2_TR(0x487b80);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B487b82:{NFSU2_TR(0x487b82);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B487b84:{NFSU2_TR(0x487b84);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487b88:{NFSU2_TR(0x487b88);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487b8e:{NFSU2_TR(0x487b8e);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487b95:{NFSU2_TR(0x487b95);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487b9c:{NFSU2_TR(0x487b9c);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B487b9e:{NFSU2_TR(0x487b9e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487ba2:{NFSU2_TR(0x487ba2);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487ba9:{NFSU2_TR(0x487ba9);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487bad:{NFSU2_TR(0x487bad);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487bb3:{NFSU2_TR(0x487bb3);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487bb7:{NFSU2_TR(0x487bb7);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487bbb:{NFSU2_TR(0x487bbb);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B487bbd:{NFSU2_TR(0x487bbd);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487bc1:{NFSU2_TR(0x487bc1);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487bc8:{NFSU2_TR(0x487bc8);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487bcc:{NFSU2_TR(0x487bcc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487bd2:{NFSU2_TR(0x487bd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B487bd6:{NFSU2_TR(0x487bd6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B487bd7:{NFSU2_TR(0x487bd7);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B487bdb:{NFSU2_TR(0x487bdb);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487bdf:{NFSU2_TR(0x487bdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B487be0:{NFSU2_TR(0x487be0);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B487be4:{NFSU2_TR(0x487be4);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487be8:{NFSU2_TR(0x487be8);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487bec:{NFSU2_TR(0x487bec);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487bf3:{NFSU2_TR(0x487bf3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487bf7:{NFSU2_TR(0x487bf7);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487bfd:{NFSU2_TR(0x487bfd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487c01:{NFSU2_TR(0x487c01);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B487c03:{NFSU2_TR(0x487c03);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487c05:{NFSU2_TR(0x487c05);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487c09:{NFSU2_TR(0x487c09);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487c10:{NFSU2_TR(0x487c10);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487c14:{NFSU2_TR(0x487c14);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B487c16:{NFSU2_TR(0x487c16);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487c1a:{NFSU2_TR(0x487c1a);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487c20:{NFSU2_TR(0x487c20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487c22:{NFSU2_TR(0x487c22);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B487c24:{NFSU2_TR(0x487c24);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487c2b:{NFSU2_TR(0x487c2b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487c2f:{NFSU2_TR(0x487c2f);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B487c31:{NFSU2_TR(0x487c31);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487c35:{NFSU2_TR(0x487c35);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487c3b:{NFSU2_TR(0x487c3b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487c3d:{NFSU2_TR(0x487c3d);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B487c3f:{NFSU2_TR(0x487c3f);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487c46:{NFSU2_TR(0x487c46);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B487c48:{NFSU2_TR(0x487c48);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B487c4a:{NFSU2_TR(0x487c4a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487c4e:{NFSU2_TR(0x487c4e);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B487c50:{NFSU2_TR(0x487c50);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487c54:{NFSU2_TR(0x487c54);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487c5a:{NFSU2_TR(0x487c5a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487c5c:{NFSU2_TR(0x487c5c);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487c60:{NFSU2_TR(0x487c60);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487c67:{NFSU2_TR(0x487c67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x487c6cull));
TAIL_STATIC(0x4012b0u,401);
}
B487c6c:L487c6c:{c.instructions+=165;NFSU2_TR(0x487c6c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487c70:{NFSU2_TR(0x487c70);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B487c74:{NFSU2_TR(0x487c74);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487c78:{NFSU2_TR(0x487c78);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487c7c:{NFSU2_TR(0x487c7c);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487c82:{NFSU2_TR(0x487c82);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487c86:{NFSU2_TR(0x487c86);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B487c88:{NFSU2_TR(0x487c88);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487c8a:{NFSU2_TR(0x487c8a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487c8e:{NFSU2_TR(0x487c8e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B487c90:{NFSU2_TR(0x487c90);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487c94:{NFSU2_TR(0x487c94);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487c98:{NFSU2_TR(0x487c98);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487c9c:{NFSU2_TR(0x487c9c);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487ca2:{NFSU2_TR(0x487ca2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487ca6:{NFSU2_TR(0x487ca6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B487ca8:{NFSU2_TR(0x487ca8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487caa:{NFSU2_TR(0x487caa);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487cae:{NFSU2_TR(0x487cae);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B487cb0:{NFSU2_TR(0x487cb0);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487cb4:{NFSU2_TR(0x487cb4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487cb8:{NFSU2_TR(0x487cb8);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487cbe:{NFSU2_TR(0x487cbe);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487cc2:{NFSU2_TR(0x487cc2);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B487cc4:{NFSU2_TR(0x487cc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B487cc8:{NFSU2_TR(0x487cc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487cca:{NFSU2_TR(0x487cca);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B487cce:{NFSU2_TR(0x487cce);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487cd2:{NFSU2_TR(0x487cd2);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487cd6:{NFSU2_TR(0x487cd6);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487cda:{NFSU2_TR(0x487cda);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487cde:{NFSU2_TR(0x487cde);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487ce4:{NFSU2_TR(0x487ce4);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487ce8:{NFSU2_TR(0x487ce8);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B487cea:{NFSU2_TR(0x487cea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487cec:{NFSU2_TR(0x487cec);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487cf0:{NFSU2_TR(0x487cf0);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487cf4:{NFSU2_TR(0x487cf4);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487cf8:{NFSU2_TR(0x487cf8);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487cfc:{NFSU2_TR(0x487cfc);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487d02:{NFSU2_TR(0x487d02);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487d06:{NFSU2_TR(0x487d06);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487d0c:{NFSU2_TR(0x487d0c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487d0e:{NFSU2_TR(0x487d0e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487d12:{NFSU2_TR(0x487d12);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487d18:{NFSU2_TR(0x487d18);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487d1a:{NFSU2_TR(0x487d1a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487d1e:{NFSU2_TR(0x487d1e);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487d24:{NFSU2_TR(0x487d24);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487d26:{NFSU2_TR(0x487d26);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487d2d:{NFSU2_TR(0x487d2d);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487d31:{NFSU2_TR(0x487d31);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487d37:{NFSU2_TR(0x487d37);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487d3b:{NFSU2_TR(0x487d3b);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487d41:{NFSU2_TR(0x487d41);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487d43:{NFSU2_TR(0x487d43);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487d47:{NFSU2_TR(0x487d47);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487d4d:{NFSU2_TR(0x487d4d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487d4f:{NFSU2_TR(0x487d4f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487d53:{NFSU2_TR(0x487d53);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487d59:{NFSU2_TR(0x487d59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487d5b:{NFSU2_TR(0x487d5b);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487d62:{NFSU2_TR(0x487d62);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487d66:{NFSU2_TR(0x487d66);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487d6c:{NFSU2_TR(0x487d6c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487d70:{NFSU2_TR(0x487d70);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487d76:{NFSU2_TR(0x487d76);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487d78:{NFSU2_TR(0x487d78);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487d7c:{NFSU2_TR(0x487d7c);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487d82:{NFSU2_TR(0x487d82);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487d84:{NFSU2_TR(0x487d84);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487d88:{NFSU2_TR(0x487d88);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487d8e:{NFSU2_TR(0x487d8e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487d90:{NFSU2_TR(0x487d90);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487d97:{NFSU2_TR(0x487d97);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487d9b:{NFSU2_TR(0x487d9b);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487da1:{NFSU2_TR(0x487da1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487da5:{NFSU2_TR(0x487da5);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487dab:{NFSU2_TR(0x487dab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487dad:{NFSU2_TR(0x487dad);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487db1:{NFSU2_TR(0x487db1);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487db7:{NFSU2_TR(0x487db7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487db9:{NFSU2_TR(0x487db9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487dbd:{NFSU2_TR(0x487dbd);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487dc3:{NFSU2_TR(0x487dc3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487dc5:{NFSU2_TR(0x487dc5);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487dcc:{NFSU2_TR(0x487dcc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487dd0:{NFSU2_TR(0x487dd0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487dd6:{NFSU2_TR(0x487dd6);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487dda:{NFSU2_TR(0x487dda);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487dde:{NFSU2_TR(0x487dde);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487de4:{NFSU2_TR(0x487de4);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487de8:{NFSU2_TR(0x487de8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487dec:{NFSU2_TR(0x487dec);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487df2:{NFSU2_TR(0x487df2);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487df6:{NFSU2_TR(0x487df6);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487dfa:{NFSU2_TR(0x487dfa);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B487dfc:{NFSU2_TR(0x487dfc);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487e03:{NFSU2_TR(0x487e03);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487e07:{NFSU2_TR(0x487e07);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487e0d:{NFSU2_TR(0x487e0d);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487e11:{NFSU2_TR(0x487e11);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487e15:{NFSU2_TR(0x487e15);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487e1b:{NFSU2_TR(0x487e1b);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487e1f:{NFSU2_TR(0x487e1f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487e23:{NFSU2_TR(0x487e23);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487e29:{NFSU2_TR(0x487e29);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487e2d:{NFSU2_TR(0x487e2d);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487e31:{NFSU2_TR(0x487e31);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B487e33:{NFSU2_TR(0x487e33);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487e3a:{NFSU2_TR(0x487e3a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B487e3c:{NFSU2_TR(0x487e3c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B487e3e:{NFSU2_TR(0x487e3e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487e42:{NFSU2_TR(0x487e42);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487e48:{NFSU2_TR(0x487e48);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487e4c:{NFSU2_TR(0x487e4c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487e52:{NFSU2_TR(0x487e52);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487e56:{NFSU2_TR(0x487e56);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487e5c:{NFSU2_TR(0x487e5c);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B487e5e:{NFSU2_TR(0x487e5e);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B487e60:{NFSU2_TR(0x487e60);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487e64:{NFSU2_TR(0x487e64);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487e6b:{NFSU2_TR(0x487e6b);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487e6f:{NFSU2_TR(0x487e6f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487e75:{NFSU2_TR(0x487e75);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487e79:{NFSU2_TR(0x487e79);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487e7d:{NFSU2_TR(0x487e7d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487e83:{NFSU2_TR(0x487e83);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487e87:{NFSU2_TR(0x487e87);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487e8b:{NFSU2_TR(0x487e8b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487e91:{NFSU2_TR(0x487e91);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487e95:{NFSU2_TR(0x487e95);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487e99:{NFSU2_TR(0x487e99);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487e9d:{NFSU2_TR(0x487e9d);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487ea4:{NFSU2_TR(0x487ea4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487ea8:{NFSU2_TR(0x487ea8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487eae:{NFSU2_TR(0x487eae);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487eb2:{NFSU2_TR(0x487eb2);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487eb6:{NFSU2_TR(0x487eb6);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487eba:{NFSU2_TR(0x487eba);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487ec1:{NFSU2_TR(0x487ec1);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487ec5:{NFSU2_TR(0x487ec5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487ecb:{NFSU2_TR(0x487ecb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487ecf:{NFSU2_TR(0x487ecf);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487ed3:{NFSU2_TR(0x487ed3);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487ed7:{NFSU2_TR(0x487ed7);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487ede:{NFSU2_TR(0x487ede);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487ee2:{NFSU2_TR(0x487ee2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487ee8:{NFSU2_TR(0x487ee8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487eec:{NFSU2_TR(0x487eec);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B487eee:{NFSU2_TR(0x487eee);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B487ef0:{NFSU2_TR(0x487ef0);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487ef7:{NFSU2_TR(0x487ef7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B487ef9:{NFSU2_TR(0x487ef9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B487efb:{NFSU2_TR(0x487efb);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487eff:{NFSU2_TR(0x487eff);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487f05:{NFSU2_TR(0x487f05);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B487f09:{NFSU2_TR(0x487f09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B487f0a:{NFSU2_TR(0x487f0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B487f0e:{NFSU2_TR(0x487f0e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487f12:{NFSU2_TR(0x487f12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B487f13:{NFSU2_TR(0x487f13);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487f17:{NFSU2_TR(0x487f17);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B487f1b:{NFSU2_TR(0x487f1b);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487f22:{NFSU2_TR(0x487f22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x487f27ull));
TAIL_STATIC(0x4012b0u,401);
}
B487f27:L487f27:{c.instructions+=67;NFSU2_TR(0x487f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B487f2a:{NFSU2_TR(0x487f2a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487f2e:{NFSU2_TR(0x487f2e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487f30:{NFSU2_TR(0x487f30);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487f34:{NFSU2_TR(0x487f34);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487f37:{NFSU2_TR(0x487f37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487f39:{NFSU2_TR(0x487f39);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487f3d:{NFSU2_TR(0x487f3d);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487f40:{NFSU2_TR(0x487f40);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487f42:{NFSU2_TR(0x487f42);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487f46:{NFSU2_TR(0x487f46);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487f49:{NFSU2_TR(0x487f49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487f4b:{NFSU2_TR(0x487f4b);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487f4f:{NFSU2_TR(0x487f4f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487f53:{NFSU2_TR(0x487f53);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487f56:{NFSU2_TR(0x487f56);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487f5a:{NFSU2_TR(0x487f5a);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487f5d:{NFSU2_TR(0x487f5d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487f5f:{NFSU2_TR(0x487f5f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487f63:{NFSU2_TR(0x487f63);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487f66:{NFSU2_TR(0x487f66);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487f68:{NFSU2_TR(0x487f68);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487f6c:{NFSU2_TR(0x487f6c);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487f6f:{NFSU2_TR(0x487f6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487f71:{NFSU2_TR(0x487f71);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487f75:{NFSU2_TR(0x487f75);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487f79:{NFSU2_TR(0x487f79);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487f7c:{NFSU2_TR(0x487f7c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487f80:{NFSU2_TR(0x487f80);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487f83:{NFSU2_TR(0x487f83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487f85:{NFSU2_TR(0x487f85);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487f89:{NFSU2_TR(0x487f89);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487f8c:{NFSU2_TR(0x487f8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487f8e:{NFSU2_TR(0x487f8e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487f92:{NFSU2_TR(0x487f92);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487f95:{NFSU2_TR(0x487f95);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487f97:{NFSU2_TR(0x487f97);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487f9e:{NFSU2_TR(0x487f9e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487fa2:{NFSU2_TR(0x487fa2);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487fa5:{NFSU2_TR(0x487fa5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487fa9:{NFSU2_TR(0x487fa9);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487fac:{NFSU2_TR(0x487fac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487fae:{NFSU2_TR(0x487fae);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487fb2:{NFSU2_TR(0x487fb2);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487fb5:{NFSU2_TR(0x487fb5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487fb7:{NFSU2_TR(0x487fb7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487fbb:{NFSU2_TR(0x487fbb);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487fbe:{NFSU2_TR(0x487fbe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487fc0:{NFSU2_TR(0x487fc0);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487fc7:{NFSU2_TR(0x487fc7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487fcb:{NFSU2_TR(0x487fcb);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487fce:{NFSU2_TR(0x487fce);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487fd2:{NFSU2_TR(0x487fd2);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487fd5:{NFSU2_TR(0x487fd5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487fd7:{NFSU2_TR(0x487fd7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487fdb:{NFSU2_TR(0x487fdb);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487fde:{NFSU2_TR(0x487fde);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487fe0:{NFSU2_TR(0x487fe0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487fe4:{NFSU2_TR(0x487fe4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487fe6:{NFSU2_TR(0x487fe6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487fe8:{NFSU2_TR(0x487fe8);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B487fef:{NFSU2_TR(0x487fef);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487ff3:{NFSU2_TR(0x487ff3);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487ff6:{NFSU2_TR(0x487ff6);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B487ffa:{NFSU2_TR(0x487ffa);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B487ffd:{NFSU2_TR(0x487ffd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B487fff:{NFSU2_TR(0x487fff);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x488003u,488);
}
XIT:NFSU2_TR_EXIT(0x487,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
