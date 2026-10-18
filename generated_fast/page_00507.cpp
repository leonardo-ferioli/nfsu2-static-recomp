#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_506(u8* __restrict R,Cpu& c);
u32 body_508(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x507,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x507,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_507(u8* __restrict R,Cpu& c);
u32 page_507(Cpu& c){return body_507(c.regs.data(),c);}
__attribute__((noinline)) u32 body_507(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x507000:goto L507000;
case 0x507003:c.instructions+=67;goto B507003;
case 0x507006:c.instructions+=66;goto B507006;
case 0x50700a:c.instructions+=65;goto B50700a;
case 0x50700d:c.instructions+=64;goto B50700d;
case 0x507011:c.instructions+=63;goto B507011;
case 0x507014:c.instructions+=62;goto B507014;
case 0x507017:c.instructions+=61;goto B507017;
case 0x50701b:c.instructions+=60;goto B50701b;
case 0x50701d:c.instructions+=59;goto B50701d;
case 0x50701f:c.instructions+=58;goto B50701f;
case 0x507023:c.instructions+=57;goto B507023;
case 0x507025:c.instructions+=56;goto B507025;
case 0x507029:c.instructions+=55;goto B507029;
case 0x50702d:c.instructions+=54;goto B50702d;
case 0x507030:c.instructions+=53;goto B507030;
case 0x507034:c.instructions+=52;goto B507034;
case 0x507037:c.instructions+=51;goto B507037;
case 0x50703b:c.instructions+=50;goto B50703b;
case 0x50703f:c.instructions+=49;goto B50703f;
case 0x507041:c.instructions+=48;goto B507041;
case 0x507044:c.instructions+=47;goto B507044;
case 0x507048:c.instructions+=46;goto B507048;
case 0x50704c:c.instructions+=45;goto B50704c;
case 0x50704f:c.instructions+=44;goto B50704f;
case 0x507052:c.instructions+=43;goto B507052;
case 0x507055:c.instructions+=42;goto B507055;
case 0x507058:c.instructions+=41;goto B507058;
case 0x50705b:c.instructions+=40;goto B50705b;
case 0x50705f:c.instructions+=39;goto B50705f;
case 0x507062:c.instructions+=38;goto B507062;
case 0x507066:c.instructions+=37;goto B507066;
case 0x50706d:c.instructions+=36;goto B50706d;
case 0x507070:c.instructions+=35;goto B507070;
case 0x507074:c.instructions+=34;goto B507074;
case 0x507079:c.instructions+=33;goto B507079;
case 0x507080:c.instructions+=32;goto B507080;
case 0x507082:c.instructions+=31;goto B507082;
case 0x507084:c.instructions+=30;goto B507084;
case 0x507088:c.instructions+=29;goto B507088;
case 0x50708a:c.instructions+=28;goto B50708a;
case 0x50708e:c.instructions+=27;goto B50708e;
case 0x507095:c.instructions+=26;goto B507095;
case 0x507097:c.instructions+=25;goto B507097;
case 0x50709b:c.instructions+=24;goto B50709b;
case 0x5070a2:c.instructions+=23;goto B5070a2;
case 0x5070a6:c.instructions+=22;goto B5070a6;
case 0x5070a9:c.instructions+=21;goto B5070a9;
case 0x5070ad:c.instructions+=20;goto B5070ad;
case 0x5070b1:c.instructions+=19;goto B5070b1;
case 0x5070b5:c.instructions+=18;goto B5070b5;
case 0x5070b9:c.instructions+=17;goto B5070b9;
case 0x5070c0:c.instructions+=16;goto B5070c0;
case 0x5070c4:c.instructions+=15;goto B5070c4;
case 0x5070cb:c.instructions+=14;goto B5070cb;
case 0x5070cf:c.instructions+=13;goto B5070cf;
case 0x5070d1:c.instructions+=12;goto B5070d1;
case 0x5070d4:c.instructions+=11;goto B5070d4;
case 0x5070d5:c.instructions+=10;goto B5070d5;
case 0x5070dc:c.instructions+=9;goto B5070dc;
case 0x5070e3:c.instructions+=8;goto B5070e3;
case 0x5070e5:c.instructions+=7;goto B5070e5;
case 0x5070e7:c.instructions+=6;goto B5070e7;
case 0x5070ea:c.instructions+=5;goto B5070ea;
case 0x5070ee:c.instructions+=4;goto B5070ee;
case 0x5070f1:c.instructions+=3;goto B5070f1;
case 0x5070f4:c.instructions+=2;goto B5070f4;
case 0x5070f6:c.instructions+=1;goto B5070f6;
case 0x5070f8:goto L5070f8;
case 0x5070fc:goto L5070fc;
case 0x5070ff:c.instructions+=5;goto B5070ff;
case 0x507102:c.instructions+=4;goto B507102;
case 0x507104:c.instructions+=3;goto B507104;
case 0x507108:c.instructions+=2;goto B507108;
case 0x50710b:c.instructions+=1;goto B50710b;
case 0x507111:goto L507111;
case 0x507113:c.instructions+=1;goto B507113;
case 0x507119:goto L507119;
case 0x50711c:c.instructions+=91;goto B50711c;
case 0x50711f:c.instructions+=90;goto B50711f;
case 0x507122:c.instructions+=89;goto B507122;
case 0x507125:c.instructions+=88;goto B507125;
case 0x507127:c.instructions+=87;goto B507127;
case 0x50712a:c.instructions+=86;goto B50712a;
case 0x507131:c.instructions+=85;goto B507131;
case 0x507138:c.instructions+=84;goto B507138;
case 0x50713a:c.instructions+=83;goto B50713a;
case 0x50713c:c.instructions+=82;goto B50713c;
case 0x50713f:c.instructions+=81;goto B50713f;
case 0x507143:c.instructions+=80;goto B507143;
case 0x507146:c.instructions+=79;goto B507146;
case 0x507149:c.instructions+=78;goto B507149;
case 0x50714c:c.instructions+=77;goto B50714c;
case 0x50714e:c.instructions+=76;goto B50714e;
case 0x507150:c.instructions+=75;goto B507150;
case 0x507152:c.instructions+=74;goto B507152;
case 0x507154:c.instructions+=73;goto B507154;
case 0x507156:c.instructions+=72;goto B507156;
case 0x507159:c.instructions+=71;goto B507159;
case 0x50715c:c.instructions+=70;goto B50715c;
case 0x50715e:c.instructions+=69;goto B50715e;
case 0x507161:c.instructions+=68;goto B507161;
case 0x507164:c.instructions+=67;goto B507164;
case 0x507167:c.instructions+=66;goto B507167;
case 0x50716a:c.instructions+=65;goto B50716a;
case 0x50716d:c.instructions+=64;goto B50716d;
case 0x50716f:c.instructions+=63;goto B50716f;
case 0x507171:c.instructions+=62;goto B507171;
case 0x507173:c.instructions+=61;goto B507173;
case 0x507176:c.instructions+=60;goto B507176;
case 0x507179:c.instructions+=59;goto B507179;
case 0x50717c:c.instructions+=58;goto B50717c;
case 0x50717f:c.instructions+=57;goto B50717f;
case 0x507182:c.instructions+=56;goto B507182;
case 0x507185:c.instructions+=55;goto B507185;
case 0x507187:c.instructions+=54;goto B507187;
case 0x50718a:c.instructions+=53;goto B50718a;
case 0x50718c:c.instructions+=52;goto B50718c;
case 0x50718e:c.instructions+=51;goto B50718e;
case 0x507192:c.instructions+=50;goto B507192;
case 0x507194:c.instructions+=49;goto B507194;
case 0x507198:c.instructions+=48;goto B507198;
case 0x50719c:c.instructions+=47;goto B50719c;
case 0x50719f:c.instructions+=46;goto B50719f;
case 0x5071a3:c.instructions+=45;goto B5071a3;
case 0x5071a6:c.instructions+=44;goto B5071a6;
case 0x5071a9:c.instructions+=43;goto B5071a9;
case 0x5071ab:c.instructions+=42;goto B5071ab;
case 0x5071ae:c.instructions+=41;goto B5071ae;
case 0x5071b2:c.instructions+=40;goto B5071b2;
case 0x5071b6:c.instructions+=39;goto B5071b6;
case 0x5071b9:c.instructions+=38;goto B5071b9;
case 0x5071bc:c.instructions+=37;goto B5071bc;
case 0x5071bf:c.instructions+=36;goto B5071bf;
case 0x5071c2:c.instructions+=35;goto B5071c2;
case 0x5071c5:c.instructions+=34;goto B5071c5;
case 0x5071c8:c.instructions+=33;goto B5071c8;
case 0x5071cc:c.instructions+=32;goto B5071cc;
case 0x5071ce:c.instructions+=31;goto B5071ce;
case 0x5071d1:c.instructions+=30;goto B5071d1;
case 0x5071d5:c.instructions+=29;goto B5071d5;
case 0x5071d7:c.instructions+=28;goto B5071d7;
case 0x5071d9:c.instructions+=27;goto B5071d9;
case 0x5071da:c.instructions+=26;goto B5071da;
case 0x5071dd:c.instructions+=25;goto B5071dd;
case 0x5071e0:c.instructions+=24;goto B5071e0;
case 0x5071e4:c.instructions+=23;goto B5071e4;
case 0x5071e9:c.instructions+=22;goto B5071e9;
case 0x5071eb:c.instructions+=21;goto B5071eb;
case 0x5071ef:c.instructions+=20;goto B5071ef;
case 0x5071f3:c.instructions+=19;goto B5071f3;
case 0x5071f5:c.instructions+=18;goto B5071f5;
case 0x5071f9:c.instructions+=17;goto B5071f9;
case 0x5071fd:c.instructions+=16;goto B5071fd;
case 0x507201:c.instructions+=15;goto B507201;
case 0x507204:c.instructions+=14;goto B507204;
case 0x507208:c.instructions+=13;goto B507208;
case 0x50720b:c.instructions+=12;goto B50720b;
case 0x50720f:c.instructions+=11;goto B50720f;
case 0x507212:c.instructions+=10;goto B507212;
case 0x507216:c.instructions+=9;goto B507216;
case 0x50721a:c.instructions+=8;goto B50721a;
case 0x50721c:c.instructions+=7;goto B50721c;
case 0x50721f:c.instructions+=6;goto B50721f;
case 0x507222:c.instructions+=5;goto B507222;
case 0x507226:c.instructions+=4;goto B507226;
case 0x50722a:c.instructions+=3;goto B50722a;
case 0x50722d:c.instructions+=2;goto B50722d;
case 0x507230:c.instructions+=1;goto B507230;
case 0x507233:goto L507233;
case 0x507236:c.instructions+=23;goto B507236;
case 0x507239:c.instructions+=22;goto B507239;
case 0x50723b:c.instructions+=21;goto B50723b;
case 0x50723d:c.instructions+=20;goto B50723d;
case 0x507241:c.instructions+=19;goto B507241;
case 0x507243:c.instructions+=18;goto B507243;
case 0x507246:c.instructions+=17;goto B507246;
case 0x507249:c.instructions+=16;goto B507249;
case 0x50724b:c.instructions+=15;goto B50724b;
case 0x50724e:c.instructions+=14;goto B50724e;
case 0x507251:c.instructions+=13;goto B507251;
case 0x507254:c.instructions+=12;goto B507254;
case 0x507258:c.instructions+=11;goto B507258;
case 0x50725c:c.instructions+=10;goto B50725c;
case 0x50725f:c.instructions+=9;goto B50725f;
case 0x507262:c.instructions+=8;goto B507262;
case 0x507264:c.instructions+=7;goto B507264;
case 0x507267:c.instructions+=6;goto B507267;
case 0x50726b:c.instructions+=5;goto B50726b;
case 0x50726d:c.instructions+=4;goto B50726d;
case 0x50726f:c.instructions+=3;goto B50726f;
case 0x507272:c.instructions+=2;goto B507272;
case 0x507275:c.instructions+=1;goto B507275;
case 0x50727a:goto L50727a;
case 0x50727c:c.instructions+=1;goto B50727c;
case 0x507282:goto L507282;
case 0x507285:c.instructions+=87;goto B507285;
case 0x507288:c.instructions+=86;goto B507288;
case 0x50728b:c.instructions+=85;goto B50728b;
case 0x50728e:c.instructions+=84;goto B50728e;
case 0x507290:c.instructions+=83;goto B507290;
case 0x507293:c.instructions+=82;goto B507293;
case 0x50729a:c.instructions+=81;goto B50729a;
case 0x5072a1:c.instructions+=80;goto B5072a1;
case 0x5072a3:c.instructions+=79;goto B5072a3;
case 0x5072a5:c.instructions+=78;goto B5072a5;
case 0x5072a8:c.instructions+=77;goto B5072a8;
case 0x5072ac:c.instructions+=76;goto B5072ac;
case 0x5072af:c.instructions+=75;goto B5072af;
case 0x5072b2:c.instructions+=74;goto B5072b2;
case 0x5072b5:c.instructions+=73;goto B5072b5;
case 0x5072b7:c.instructions+=72;goto B5072b7;
case 0x5072b9:c.instructions+=71;goto B5072b9;
case 0x5072bb:c.instructions+=70;goto B5072bb;
case 0x5072bd:c.instructions+=69;goto B5072bd;
case 0x5072bf:c.instructions+=68;goto B5072bf;
case 0x5072c2:c.instructions+=67;goto B5072c2;
case 0x5072c5:c.instructions+=66;goto B5072c5;
case 0x5072c7:c.instructions+=65;goto B5072c7;
case 0x5072ca:c.instructions+=64;goto B5072ca;
case 0x5072cd:c.instructions+=63;goto B5072cd;
case 0x5072d0:c.instructions+=62;goto B5072d0;
case 0x5072d3:c.instructions+=61;goto B5072d3;
case 0x5072d6:c.instructions+=60;goto B5072d6;
case 0x5072d8:c.instructions+=59;goto B5072d8;
case 0x5072da:c.instructions+=58;goto B5072da;
case 0x5072dc:c.instructions+=57;goto B5072dc;
case 0x5072df:c.instructions+=56;goto B5072df;
case 0x5072e2:c.instructions+=55;goto B5072e2;
case 0x5072e5:c.instructions+=54;goto B5072e5;
case 0x5072e8:c.instructions+=53;goto B5072e8;
case 0x5072eb:c.instructions+=52;goto B5072eb;
case 0x5072ee:c.instructions+=51;goto B5072ee;
case 0x5072f0:c.instructions+=50;goto B5072f0;
case 0x5072f3:c.instructions+=49;goto B5072f3;
case 0x5072f5:c.instructions+=48;goto B5072f5;
case 0x5072f7:c.instructions+=47;goto B5072f7;
case 0x5072fb:c.instructions+=46;goto B5072fb;
case 0x5072fd:c.instructions+=45;goto B5072fd;
case 0x507301:c.instructions+=44;goto B507301;
case 0x507305:c.instructions+=43;goto B507305;
case 0x507308:c.instructions+=42;goto B507308;
case 0x50730c:c.instructions+=41;goto B50730c;
case 0x50730f:c.instructions+=40;goto B50730f;
case 0x507312:c.instructions+=39;goto B507312;
case 0x507314:c.instructions+=38;goto B507314;
case 0x507317:c.instructions+=37;goto B507317;
case 0x50731b:c.instructions+=36;goto B50731b;
case 0x50731f:c.instructions+=35;goto B50731f;
case 0x507322:c.instructions+=34;goto B507322;
case 0x507325:c.instructions+=33;goto B507325;
case 0x507328:c.instructions+=32;goto B507328;
case 0x50732b:c.instructions+=31;goto B50732b;
case 0x50732e:c.instructions+=30;goto B50732e;
case 0x507331:c.instructions+=29;goto B507331;
case 0x507338:c.instructions+=28;goto B507338;
case 0x50733a:c.instructions+=27;goto B50733a;
case 0x50733d:c.instructions+=26;goto B50733d;
case 0x507344:c.instructions+=25;goto B507344;
case 0x507346:c.instructions+=24;goto B507346;
case 0x507348:c.instructions+=23;goto B507348;
case 0x50734d:c.instructions+=22;goto B50734d;
case 0x507351:c.instructions+=21;goto B507351;
case 0x507353:c.instructions+=20;goto B507353;
case 0x507357:c.instructions+=19;goto B507357;
case 0x50735e:c.instructions+=18;goto B50735e;
case 0x507360:c.instructions+=17;goto B507360;
case 0x507364:c.instructions+=16;goto B507364;
case 0x50736b:c.instructions+=15;goto B50736b;
case 0x50736f:c.instructions+=14;goto B50736f;
case 0x507372:c.instructions+=13;goto B507372;
case 0x507376:c.instructions+=12;goto B507376;
case 0x507379:c.instructions+=11;goto B507379;
case 0x50737d:c.instructions+=10;goto B50737d;
case 0x507380:c.instructions+=9;goto B507380;
case 0x507387:c.instructions+=8;goto B507387;
case 0x50738e:c.instructions+=7;goto B50738e;
case 0x507390:c.instructions+=6;goto B507390;
case 0x507393:c.instructions+=5;goto B507393;
case 0x507396:c.instructions+=4;goto B507396;
case 0x50739d:c.instructions+=3;goto B50739d;
case 0x5073a4:c.instructions+=2;goto B5073a4;
case 0x5073a6:c.instructions+=1;goto B5073a6;
case 0x5073a9:goto L5073a9;
case 0x5073aa:c.instructions+=4;goto B5073aa;
case 0x5073ad:c.instructions+=3;goto B5073ad;
case 0x5073b0:c.instructions+=2;goto B5073b0;
case 0x5073b4:c.instructions+=1;goto B5073b4;
case 0x5073b7:goto L5073b7;
case 0x5073ba:c.instructions+=5;goto B5073ba;
case 0x5073bd:c.instructions+=4;goto B5073bd;
case 0x5073bf:c.instructions+=3;goto B5073bf;
case 0x5073c3:c.instructions+=2;goto B5073c3;
case 0x5073c6:c.instructions+=1;goto B5073c6;
case 0x5073cc:goto L5073cc;
case 0x5073ce:c.instructions+=1;goto B5073ce;
case 0x5073d4:goto L5073d4;
case 0x5073d7:c.instructions+=91;goto B5073d7;
case 0x5073da:c.instructions+=90;goto B5073da;
case 0x5073dd:c.instructions+=89;goto B5073dd;
case 0x5073e0:c.instructions+=88;goto B5073e0;
case 0x5073e3:c.instructions+=87;goto B5073e3;
case 0x5073e5:c.instructions+=86;goto B5073e5;
case 0x5073ec:c.instructions+=85;goto B5073ec;
case 0x5073f3:c.instructions+=84;goto B5073f3;
case 0x5073f5:c.instructions+=83;goto B5073f5;
case 0x5073f7:c.instructions+=82;goto B5073f7;
case 0x5073fa:c.instructions+=81;goto B5073fa;
case 0x5073fe:c.instructions+=80;goto B5073fe;
case 0x507401:c.instructions+=79;goto B507401;
case 0x507404:c.instructions+=78;goto B507404;
case 0x507407:c.instructions+=77;goto B507407;
case 0x507409:c.instructions+=76;goto B507409;
case 0x50740b:c.instructions+=75;goto B50740b;
case 0x50740d:c.instructions+=74;goto B50740d;
case 0x50740f:c.instructions+=73;goto B50740f;
case 0x507411:c.instructions+=72;goto B507411;
case 0x507414:c.instructions+=71;goto B507414;
case 0x507417:c.instructions+=70;goto B507417;
case 0x507419:c.instructions+=69;goto B507419;
case 0x50741c:c.instructions+=68;goto B50741c;
case 0x50741f:c.instructions+=67;goto B50741f;
case 0x507422:c.instructions+=66;goto B507422;
case 0x507424:c.instructions+=65;goto B507424;
case 0x507426:c.instructions+=64;goto B507426;
case 0x507429:c.instructions+=63;goto B507429;
case 0x50742b:c.instructions+=62;goto B50742b;
case 0x50742d:c.instructions+=61;goto B50742d;
case 0x507430:c.instructions+=60;goto B507430;
case 0x507433:c.instructions+=59;goto B507433;
case 0x507436:c.instructions+=58;goto B507436;
case 0x507439:c.instructions+=57;goto B507439;
case 0x50743c:c.instructions+=56;goto B50743c;
case 0x50743f:c.instructions+=55;goto B50743f;
case 0x507442:c.instructions+=54;goto B507442;
case 0x507444:c.instructions+=53;goto B507444;
case 0x507446:c.instructions+=52;goto B507446;
case 0x507448:c.instructions+=51;goto B507448;
case 0x50744c:c.instructions+=50;goto B50744c;
case 0x50744e:c.instructions+=49;goto B50744e;
case 0x507452:c.instructions+=48;goto B507452;
case 0x507456:c.instructions+=47;goto B507456;
case 0x507459:c.instructions+=46;goto B507459;
case 0x50745d:c.instructions+=45;goto B50745d;
case 0x50745f:c.instructions+=44;goto B50745f;
case 0x507462:c.instructions+=43;goto B507462;
case 0x507464:c.instructions+=42;goto B507464;
case 0x507467:c.instructions+=41;goto B507467;
case 0x50746b:c.instructions+=40;goto B50746b;
case 0x50746f:c.instructions+=39;goto B50746f;
case 0x507472:c.instructions+=38;goto B507472;
case 0x507475:c.instructions+=37;goto B507475;
case 0x507478:c.instructions+=36;goto B507478;
case 0x50747b:c.instructions+=35;goto B50747b;
case 0x50747e:c.instructions+=34;goto B50747e;
case 0x507481:c.instructions+=33;goto B507481;
case 0x507485:c.instructions+=32;goto B507485;
case 0x507488:c.instructions+=31;goto B507488;
case 0x50748a:c.instructions+=30;goto B50748a;
case 0x50748e:c.instructions+=29;goto B50748e;
case 0x507490:c.instructions+=28;goto B507490;
case 0x507491:c.instructions+=27;goto B507491;
case 0x507493:c.instructions+=26;goto B507493;
case 0x507496:c.instructions+=25;goto B507496;
case 0x507499:c.instructions+=24;goto B507499;
case 0x50749e:c.instructions+=23;goto B50749e;
case 0x5074a2:c.instructions+=22;goto B5074a2;
case 0x5074a4:c.instructions+=21;goto B5074a4;
case 0x5074a8:c.instructions+=20;goto B5074a8;
case 0x5074ac:c.instructions+=19;goto B5074ac;
case 0x5074ae:c.instructions+=18;goto B5074ae;
case 0x5074b2:c.instructions+=17;goto B5074b2;
case 0x5074b6:c.instructions+=16;goto B5074b6;
case 0x5074ba:c.instructions+=15;goto B5074ba;
case 0x5074bd:c.instructions+=14;goto B5074bd;
case 0x5074c1:c.instructions+=13;goto B5074c1;
case 0x5074c4:c.instructions+=12;goto B5074c4;
case 0x5074c8:c.instructions+=11;goto B5074c8;
case 0x5074cb:c.instructions+=10;goto B5074cb;
case 0x5074cf:c.instructions+=9;goto B5074cf;
case 0x5074d3:c.instructions+=8;goto B5074d3;
case 0x5074d5:c.instructions+=7;goto B5074d5;
case 0x5074d7:c.instructions+=6;goto B5074d7;
case 0x5074da:c.instructions+=5;goto B5074da;
case 0x5074de:c.instructions+=4;goto B5074de;
case 0x5074e2:c.instructions+=3;goto B5074e2;
case 0x5074e5:c.instructions+=2;goto B5074e5;
case 0x5074e8:c.instructions+=1;goto B5074e8;
case 0x5074eb:goto L5074eb;
case 0x5074ee:c.instructions+=22;goto B5074ee;
case 0x5074f1:c.instructions+=21;goto B5074f1;
case 0x5074f4:c.instructions+=20;goto B5074f4;
case 0x5074f6:c.instructions+=19;goto B5074f6;
case 0x5074fa:c.instructions+=18;goto B5074fa;
case 0x5074fc:c.instructions+=17;goto B5074fc;
case 0x5074ff:c.instructions+=16;goto B5074ff;
case 0x507502:c.instructions+=15;goto B507502;
case 0x507505:c.instructions+=14;goto B507505;
case 0x507508:c.instructions+=13;goto B507508;
case 0x50750b:c.instructions+=12;goto B50750b;
case 0x50750e:c.instructions+=11;goto B50750e;
case 0x507512:c.instructions+=10;goto B507512;
case 0x507515:c.instructions+=9;goto B507515;
case 0x507518:c.instructions+=8;goto B507518;
case 0x50751c:c.instructions+=7;goto B50751c;
case 0x50751f:c.instructions+=6;goto B50751f;
case 0x507522:c.instructions+=5;goto B507522;
case 0x507524:c.instructions+=4;goto B507524;
case 0x507526:c.instructions+=3;goto B507526;
case 0x507529:c.instructions+=2;goto B507529;
case 0x50752c:c.instructions+=1;goto B50752c;
case 0x507531:goto L507531;
case 0x507533:c.instructions+=1;goto B507533;
case 0x507539:goto L507539;
case 0x50753c:c.instructions+=87;goto B50753c;
case 0x50753f:c.instructions+=86;goto B50753f;
case 0x507542:c.instructions+=85;goto B507542;
case 0x507545:c.instructions+=84;goto B507545;
case 0x507548:c.instructions+=83;goto B507548;
case 0x50754a:c.instructions+=82;goto B50754a;
case 0x507551:c.instructions+=81;goto B507551;
case 0x507558:c.instructions+=80;goto B507558;
case 0x50755a:c.instructions+=79;goto B50755a;
case 0x50755c:c.instructions+=78;goto B50755c;
case 0x50755f:c.instructions+=77;goto B50755f;
case 0x507563:c.instructions+=76;goto B507563;
case 0x507566:c.instructions+=75;goto B507566;
case 0x507569:c.instructions+=74;goto B507569;
case 0x50756c:c.instructions+=73;goto B50756c;
case 0x50756e:c.instructions+=72;goto B50756e;
case 0x507570:c.instructions+=71;goto B507570;
case 0x507572:c.instructions+=70;goto B507572;
case 0x507574:c.instructions+=69;goto B507574;
case 0x507576:c.instructions+=68;goto B507576;
case 0x507579:c.instructions+=67;goto B507579;
case 0x50757c:c.instructions+=66;goto B50757c;
case 0x50757e:c.instructions+=65;goto B50757e;
case 0x507581:c.instructions+=64;goto B507581;
case 0x507584:c.instructions+=63;goto B507584;
case 0x507587:c.instructions+=62;goto B507587;
case 0x507589:c.instructions+=61;goto B507589;
case 0x50758b:c.instructions+=60;goto B50758b;
case 0x50758e:c.instructions+=59;goto B50758e;
case 0x507590:c.instructions+=58;goto B507590;
case 0x507592:c.instructions+=57;goto B507592;
case 0x507595:c.instructions+=56;goto B507595;
case 0x507598:c.instructions+=55;goto B507598;
case 0x50759b:c.instructions+=54;goto B50759b;
case 0x50759e:c.instructions+=53;goto B50759e;
case 0x5075a1:c.instructions+=52;goto B5075a1;
case 0x5075a4:c.instructions+=51;goto B5075a4;
case 0x5075a7:c.instructions+=50;goto B5075a7;
case 0x5075a9:c.instructions+=49;goto B5075a9;
case 0x5075ab:c.instructions+=48;goto B5075ab;
case 0x5075ad:c.instructions+=47;goto B5075ad;
case 0x5075b1:c.instructions+=46;goto B5075b1;
case 0x5075b3:c.instructions+=45;goto B5075b3;
case 0x5075b7:c.instructions+=44;goto B5075b7;
case 0x5075bb:c.instructions+=43;goto B5075bb;
case 0x5075be:c.instructions+=42;goto B5075be;
case 0x5075c2:c.instructions+=41;goto B5075c2;
case 0x5075c4:c.instructions+=40;goto B5075c4;
case 0x5075c7:c.instructions+=39;goto B5075c7;
case 0x5075c9:c.instructions+=38;goto B5075c9;
case 0x5075cc:c.instructions+=37;goto B5075cc;
case 0x5075d0:c.instructions+=36;goto B5075d0;
case 0x5075d4:c.instructions+=35;goto B5075d4;
case 0x5075d7:c.instructions+=34;goto B5075d7;
case 0x5075da:c.instructions+=33;goto B5075da;
case 0x5075dd:c.instructions+=32;goto B5075dd;
case 0x5075e0:c.instructions+=31;goto B5075e0;
case 0x5075e3:c.instructions+=30;goto B5075e3;
case 0x5075e6:c.instructions+=29;goto B5075e6;
case 0x5075ed:c.instructions+=28;goto B5075ed;
case 0x5075f0:c.instructions+=27;goto B5075f0;
case 0x5075f2:c.instructions+=26;goto B5075f2;
case 0x5075f9:c.instructions+=25;goto B5075f9;
case 0x5075fb:c.instructions+=24;goto B5075fb;
case 0x507600:c.instructions+=23;goto B507600;
case 0x507602:c.instructions+=22;goto B507602;
case 0x507606:c.instructions+=21;goto B507606;
case 0x507608:c.instructions+=20;goto B507608;
case 0x50760c:c.instructions+=19;goto B50760c;
case 0x507613:c.instructions+=18;goto B507613;
case 0x507615:c.instructions+=17;goto B507615;
case 0x507619:c.instructions+=16;goto B507619;
case 0x507620:c.instructions+=15;goto B507620;
case 0x507624:c.instructions+=14;goto B507624;
case 0x507627:c.instructions+=13;goto B507627;
case 0x50762b:c.instructions+=12;goto B50762b;
case 0x50762e:c.instructions+=11;goto B50762e;
case 0x507632:c.instructions+=10;goto B507632;
case 0x507635:c.instructions+=9;goto B507635;
case 0x50763c:c.instructions+=8;goto B50763c;
case 0x507643:c.instructions+=7;goto B507643;
case 0x507645:c.instructions+=6;goto B507645;
case 0x507647:c.instructions+=5;goto B507647;
case 0x50764a:c.instructions+=4;goto B50764a;
case 0x507651:c.instructions+=3;goto B507651;
case 0x507658:c.instructions+=2;goto B507658;
case 0x50765a:c.instructions+=1;goto B50765a;
case 0x50765d:goto L50765d;
case 0x50765e:c.instructions+=4;goto B50765e;
case 0x507661:c.instructions+=3;goto B507661;
case 0x507664:c.instructions+=2;goto B507664;
case 0x507668:c.instructions+=1;goto B507668;
case 0x50766b:goto L50766b;
case 0x50766e:c.instructions+=5;goto B50766e;
case 0x507671:c.instructions+=4;goto B507671;
case 0x507673:c.instructions+=3;goto B507673;
case 0x507677:c.instructions+=2;goto B507677;
case 0x50767a:c.instructions+=1;goto B50767a;
case 0x507680:goto L507680;
case 0x507682:c.instructions+=1;goto B507682;
case 0x507688:goto L507688;
case 0x50768b:c.instructions+=90;goto B50768b;
case 0x50768e:c.instructions+=89;goto B50768e;
case 0x507691:c.instructions+=88;goto B507691;
case 0x507694:c.instructions+=87;goto B507694;
case 0x507697:c.instructions+=86;goto B507697;
case 0x50769a:c.instructions+=85;goto B50769a;
case 0x5076a1:c.instructions+=84;goto B5076a1;
case 0x5076a8:c.instructions+=83;goto B5076a8;
case 0x5076aa:c.instructions+=82;goto B5076aa;
case 0x5076ac:c.instructions+=81;goto B5076ac;
case 0x5076af:c.instructions+=80;goto B5076af;
case 0x5076b3:c.instructions+=79;goto B5076b3;
case 0x5076b6:c.instructions+=78;goto B5076b6;
case 0x5076b9:c.instructions+=77;goto B5076b9;
case 0x5076bc:c.instructions+=76;goto B5076bc;
case 0x5076be:c.instructions+=75;goto B5076be;
case 0x5076c0:c.instructions+=74;goto B5076c0;
case 0x5076c2:c.instructions+=73;goto B5076c2;
case 0x5076c4:c.instructions+=72;goto B5076c4;
case 0x5076c6:c.instructions+=71;goto B5076c6;
case 0x5076c9:c.instructions+=70;goto B5076c9;
case 0x5076cc:c.instructions+=69;goto B5076cc;
case 0x5076ce:c.instructions+=68;goto B5076ce;
case 0x5076d1:c.instructions+=67;goto B5076d1;
case 0x5076d4:c.instructions+=66;goto B5076d4;
case 0x5076d7:c.instructions+=65;goto B5076d7;
case 0x5076da:c.instructions+=64;goto B5076da;
case 0x5076dd:c.instructions+=63;goto B5076dd;
case 0x5076df:c.instructions+=62;goto B5076df;
case 0x5076e1:c.instructions+=61;goto B5076e1;
case 0x5076e3:c.instructions+=60;goto B5076e3;
case 0x5076e6:c.instructions+=59;goto B5076e6;
case 0x5076e9:c.instructions+=58;goto B5076e9;
case 0x5076ec:c.instructions+=57;goto B5076ec;
case 0x5076ef:c.instructions+=56;goto B5076ef;
case 0x5076f2:c.instructions+=55;goto B5076f2;
case 0x5076f5:c.instructions+=54;goto B5076f5;
case 0x5076f8:c.instructions+=53;goto B5076f8;
case 0x5076fb:c.instructions+=52;goto B5076fb;
case 0x5076fd:c.instructions+=51;goto B5076fd;
case 0x5076ff:c.instructions+=50;goto B5076ff;
case 0x507703:c.instructions+=49;goto B507703;
case 0x507705:c.instructions+=48;goto B507705;
case 0x507709:c.instructions+=47;goto B507709;
case 0x50770d:c.instructions+=46;goto B50770d;
case 0x507710:c.instructions+=45;goto B507710;
case 0x507714:c.instructions+=44;goto B507714;
case 0x507717:c.instructions+=43;goto B507717;
case 0x50771a:c.instructions+=42;goto B50771a;
case 0x50771c:c.instructions+=41;goto B50771c;
case 0x50771f:c.instructions+=40;goto B50771f;
case 0x507723:c.instructions+=39;goto B507723;
case 0x507726:c.instructions+=38;goto B507726;
case 0x507729:c.instructions+=37;goto B507729;
case 0x50772c:c.instructions+=36;goto B50772c;
case 0x50772f:c.instructions+=35;goto B50772f;
case 0x507732:c.instructions+=34;goto B507732;
case 0x507735:c.instructions+=33;goto B507735;
case 0x507739:c.instructions+=32;goto B507739;
case 0x50773c:c.instructions+=31;goto B50773c;
case 0x50773f:c.instructions+=30;goto B50773f;
case 0x507743:c.instructions+=29;goto B507743;
case 0x507744:c.instructions+=28;goto B507744;
case 0x507746:c.instructions+=27;goto B507746;
case 0x507749:c.instructions+=26;goto B507749;
case 0x50774b:c.instructions+=25;goto B50774b;
case 0x50774e:c.instructions+=24;goto B50774e;
case 0x507753:c.instructions+=23;goto B507753;
case 0x507757:c.instructions+=22;goto B507757;
case 0x507759:c.instructions+=21;goto B507759;
case 0x50775d:c.instructions+=20;goto B50775d;
case 0x507761:c.instructions+=19;goto B507761;
case 0x507763:c.instructions+=18;goto B507763;
case 0x507767:c.instructions+=17;goto B507767;
case 0x50776b:c.instructions+=16;goto B50776b;
case 0x50776f:c.instructions+=15;goto B50776f;
case 0x507772:c.instructions+=14;goto B507772;
case 0x507776:c.instructions+=13;goto B507776;
case 0x507779:c.instructions+=12;goto B507779;
case 0x50777d:c.instructions+=11;goto B50777d;
case 0x507780:c.instructions+=10;goto B507780;
case 0x507784:c.instructions+=9;goto B507784;
case 0x507788:c.instructions+=8;goto B507788;
case 0x50778a:c.instructions+=7;goto B50778a;
case 0x50778d:c.instructions+=6;goto B50778d;
case 0x507790:c.instructions+=5;goto B507790;
case 0x507794:c.instructions+=4;goto B507794;
case 0x507798:c.instructions+=3;goto B507798;
case 0x50779b:c.instructions+=2;goto B50779b;
case 0x50779e:c.instructions+=1;goto B50779e;
case 0x5077a1:goto L5077a1;
case 0x5077a4:c.instructions+=22;goto B5077a4;
case 0x5077a7:c.instructions+=21;goto B5077a7;
case 0x5077aa:c.instructions+=20;goto B5077aa;
case 0x5077ac:c.instructions+=19;goto B5077ac;
case 0x5077b0:c.instructions+=18;goto B5077b0;
case 0x5077b2:c.instructions+=17;goto B5077b2;
case 0x5077b5:c.instructions+=16;goto B5077b5;
case 0x5077b8:c.instructions+=15;goto B5077b8;
case 0x5077bb:c.instructions+=14;goto B5077bb;
case 0x5077be:c.instructions+=13;goto B5077be;
case 0x5077c1:c.instructions+=12;goto B5077c1;
case 0x5077c4:c.instructions+=11;goto B5077c4;
case 0x5077c8:c.instructions+=10;goto B5077c8;
case 0x5077cb:c.instructions+=9;goto B5077cb;
case 0x5077ce:c.instructions+=8;goto B5077ce;
case 0x5077d2:c.instructions+=7;goto B5077d2;
case 0x5077d5:c.instructions+=6;goto B5077d5;
case 0x5077d8:c.instructions+=5;goto B5077d8;
case 0x5077da:c.instructions+=4;goto B5077da;
case 0x5077dc:c.instructions+=3;goto B5077dc;
case 0x5077df:c.instructions+=2;goto B5077df;
case 0x5077e2:c.instructions+=1;goto B5077e2;
case 0x5077e7:goto L5077e7;
case 0x5077e9:c.instructions+=1;goto B5077e9;
case 0x5077ef:goto L5077ef;
case 0x5077f2:c.instructions+=86;goto B5077f2;
case 0x5077f5:c.instructions+=85;goto B5077f5;
case 0x5077f8:c.instructions+=84;goto B5077f8;
case 0x5077fb:c.instructions+=83;goto B5077fb;
case 0x5077fe:c.instructions+=82;goto B5077fe;
case 0x507801:c.instructions+=81;goto B507801;
case 0x507808:c.instructions+=80;goto B507808;
case 0x50780f:c.instructions+=79;goto B50780f;
case 0x507811:c.instructions+=78;goto B507811;
case 0x507813:c.instructions+=77;goto B507813;
case 0x507816:c.instructions+=76;goto B507816;
case 0x50781a:c.instructions+=75;goto B50781a;
case 0x50781d:c.instructions+=74;goto B50781d;
case 0x507820:c.instructions+=73;goto B507820;
case 0x507823:c.instructions+=72;goto B507823;
case 0x507825:c.instructions+=71;goto B507825;
case 0x507827:c.instructions+=70;goto B507827;
case 0x507829:c.instructions+=69;goto B507829;
case 0x50782b:c.instructions+=68;goto B50782b;
case 0x50782d:c.instructions+=67;goto B50782d;
case 0x507830:c.instructions+=66;goto B507830;
case 0x507833:c.instructions+=65;goto B507833;
case 0x507835:c.instructions+=64;goto B507835;
case 0x507838:c.instructions+=63;goto B507838;
case 0x50783b:c.instructions+=62;goto B50783b;
case 0x50783e:c.instructions+=61;goto B50783e;
case 0x507841:c.instructions+=60;goto B507841;
case 0x507844:c.instructions+=59;goto B507844;
case 0x507846:c.instructions+=58;goto B507846;
case 0x507848:c.instructions+=57;goto B507848;
case 0x50784a:c.instructions+=56;goto B50784a;
case 0x50784d:c.instructions+=55;goto B50784d;
case 0x507850:c.instructions+=54;goto B507850;
case 0x507853:c.instructions+=53;goto B507853;
case 0x507856:c.instructions+=52;goto B507856;
case 0x507859:c.instructions+=51;goto B507859;
case 0x50785c:c.instructions+=50;goto B50785c;
case 0x50785f:c.instructions+=49;goto B50785f;
case 0x507862:c.instructions+=48;goto B507862;
case 0x507864:c.instructions+=47;goto B507864;
case 0x507866:c.instructions+=46;goto B507866;
case 0x50786a:c.instructions+=45;goto B50786a;
case 0x50786c:c.instructions+=44;goto B50786c;
case 0x507870:c.instructions+=43;goto B507870;
case 0x507874:c.instructions+=42;goto B507874;
case 0x507877:c.instructions+=41;goto B507877;
case 0x50787b:c.instructions+=40;goto B50787b;
case 0x50787e:c.instructions+=39;goto B50787e;
case 0x507881:c.instructions+=38;goto B507881;
case 0x507883:c.instructions+=37;goto B507883;
case 0x507886:c.instructions+=36;goto B507886;
case 0x50788a:c.instructions+=35;goto B50788a;
case 0x50788d:c.instructions+=34;goto B50788d;
case 0x507890:c.instructions+=33;goto B507890;
case 0x507893:c.instructions+=32;goto B507893;
case 0x507896:c.instructions+=31;goto B507896;
case 0x507899:c.instructions+=30;goto B507899;
case 0x50789c:c.instructions+=29;goto B50789c;
case 0x5078a3:c.instructions+=28;goto B5078a3;
case 0x5078a6:c.instructions+=27;goto B5078a6;
case 0x5078a9:c.instructions+=26;goto B5078a9;
case 0x5078b0:c.instructions+=25;goto B5078b0;
case 0x5078b5:c.instructions+=24;goto B5078b5;
case 0x5078b7:c.instructions+=23;goto B5078b7;
case 0x5078b9:c.instructions+=22;goto B5078b9;
case 0x5078bd:c.instructions+=21;goto B5078bd;
case 0x5078bf:c.instructions+=20;goto B5078bf;
case 0x5078c3:c.instructions+=19;goto B5078c3;
case 0x5078ca:c.instructions+=18;goto B5078ca;
case 0x5078cc:c.instructions+=17;goto B5078cc;
case 0x5078d0:c.instructions+=16;goto B5078d0;
case 0x5078d7:c.instructions+=15;goto B5078d7;
case 0x5078db:c.instructions+=14;goto B5078db;
case 0x5078de:c.instructions+=13;goto B5078de;
case 0x5078e2:c.instructions+=12;goto B5078e2;
case 0x5078e5:c.instructions+=11;goto B5078e5;
case 0x5078e9:c.instructions+=10;goto B5078e9;
case 0x5078ec:c.instructions+=9;goto B5078ec;
case 0x5078f3:c.instructions+=8;goto B5078f3;
case 0x5078fa:c.instructions+=7;goto B5078fa;
case 0x5078fc:c.instructions+=6;goto B5078fc;
case 0x5078ff:c.instructions+=5;goto B5078ff;
case 0x507902:c.instructions+=4;goto B507902;
case 0x507909:c.instructions+=3;goto B507909;
case 0x507910:c.instructions+=2;goto B507910;
case 0x507912:c.instructions+=1;goto B507912;
case 0x507915:goto L507915;
case 0x507916:c.instructions+=4;goto B507916;
case 0x507919:c.instructions+=3;goto B507919;
case 0x50791c:c.instructions+=2;goto B50791c;
case 0x507920:c.instructions+=1;goto B507920;
case 0x507923:goto L507923;
case 0x507927:c.instructions+=21;goto B507927;
case 0x50792e:c.instructions+=20;goto B50792e;
case 0x507935:c.instructions+=19;goto B507935;
case 0x507939:c.instructions+=18;goto B507939;
case 0x50793b:c.instructions+=17;goto B50793b;
case 0x50793f:c.instructions+=16;goto B50793f;
case 0x507946:c.instructions+=15;goto B507946;
case 0x507948:c.instructions+=14;goto B507948;
case 0x50794c:c.instructions+=13;goto B50794c;
case 0x507950:c.instructions+=12;goto B507950;
case 0x507953:c.instructions+=11;goto B507953;
case 0x507956:c.instructions+=10;goto B507956;
case 0x50795a:c.instructions+=9;goto B50795a;
case 0x50795e:c.instructions+=8;goto B50795e;
case 0x507962:c.instructions+=7;goto B507962;
case 0x507965:c.instructions+=6;goto B507965;
case 0x507968:c.instructions+=5;goto B507968;
case 0x50796b:c.instructions+=4;goto B50796b;
case 0x50796e:c.instructions+=3;goto B50796e;
case 0x507970:c.instructions+=2;goto B507970;
case 0x507974:c.instructions+=1;goto B507974;
case 0x50797a:goto L50797a;
case 0x507981:c.instructions+=6;goto B507981;
case 0x507984:c.instructions+=5;goto B507984;
case 0x507987:c.instructions+=4;goto B507987;
case 0x50798a:c.instructions+=3;goto B50798a;
case 0x50798e:c.instructions+=2;goto B50798e;
case 0x507991:c.instructions+=1;goto B507991;
case 0x507997:goto L507997;
case 0x50799e:c.instructions+=24;goto B50799e;
case 0x5079a2:c.instructions+=23;goto B5079a2;
case 0x5079a6:c.instructions+=22;goto B5079a6;
case 0x5079a9:c.instructions+=21;goto B5079a9;
case 0x5079ab:c.instructions+=20;goto B5079ab;
case 0x5079af:c.instructions+=19;goto B5079af;
case 0x5079b2:c.instructions+=18;goto B5079b2;
case 0x5079b4:c.instructions+=17;goto B5079b4;
case 0x5079b8:c.instructions+=16;goto B5079b8;
case 0x5079bb:c.instructions+=15;goto B5079bb;
case 0x5079bd:c.instructions+=14;goto B5079bd;
case 0x5079c1:c.instructions+=13;goto B5079c1;
case 0x5079c5:c.instructions+=12;goto B5079c5;
case 0x5079c8:c.instructions+=11;goto B5079c8;
case 0x5079cc:c.instructions+=10;goto B5079cc;
case 0x5079d0:c.instructions+=9;goto B5079d0;
case 0x5079d2:c.instructions+=8;goto B5079d2;
case 0x5079d4:c.instructions+=7;goto B5079d4;
case 0x5079d8:c.instructions+=6;goto B5079d8;
case 0x5079dd:c.instructions+=5;goto B5079dd;
case 0x5079e0:c.instructions+=4;goto B5079e0;
case 0x5079e2:c.instructions+=3;goto B5079e2;
case 0x5079e6:c.instructions+=2;goto B5079e6;
case 0x5079ed:c.instructions+=1;goto B5079ed;
case 0x5079f0:goto L5079f0;
case 0x5079f4:c.instructions+=6;goto B5079f4;
case 0x5079f7:c.instructions+=5;goto B5079f7;
case 0x5079fa:c.instructions+=4;goto B5079fa;
case 0x5079fc:c.instructions+=3;goto B5079fc;
case 0x507a00:c.instructions+=2;goto B507a00;
case 0x507a03:c.instructions+=1;goto B507a03;
case 0x507a09:goto L507a09;
case 0x507a0b:c.instructions+=1;goto B507a0b;
case 0x507a11:goto L507a11;
case 0x507a14:c.instructions+=104;goto B507a14;
case 0x507a18:c.instructions+=103;goto B507a18;
case 0x507a1b:c.instructions+=102;goto B507a1b;
case 0x507a1e:c.instructions+=101;goto B507a1e;
case 0x507a21:c.instructions+=100;goto B507a21;
case 0x507a25:c.instructions+=99;goto B507a25;
case 0x507a29:c.instructions+=98;goto B507a29;
case 0x507a2b:c.instructions+=97;goto B507a2b;
case 0x507a32:c.instructions+=96;goto B507a32;
case 0x507a39:c.instructions+=95;goto B507a39;
case 0x507a3b:c.instructions+=94;goto B507a3b;
case 0x507a3d:c.instructions+=93;goto B507a3d;
case 0x507a40:c.instructions+=92;goto B507a40;
case 0x507a44:c.instructions+=91;goto B507a44;
case 0x507a47:c.instructions+=90;goto B507a47;
case 0x507a4a:c.instructions+=89;goto B507a4a;
case 0x507a4d:c.instructions+=88;goto B507a4d;
case 0x507a4f:c.instructions+=87;goto B507a4f;
case 0x507a51:c.instructions+=86;goto B507a51;
case 0x507a53:c.instructions+=85;goto B507a53;
case 0x507a55:c.instructions+=84;goto B507a55;
case 0x507a57:c.instructions+=83;goto B507a57;
case 0x507a5a:c.instructions+=82;goto B507a5a;
case 0x507a5d:c.instructions+=81;goto B507a5d;
case 0x507a5f:c.instructions+=80;goto B507a5f;
case 0x507a62:c.instructions+=79;goto B507a62;
case 0x507a65:c.instructions+=78;goto B507a65;
case 0x507a69:c.instructions+=77;goto B507a69;
case 0x507a6d:c.instructions+=76;goto B507a6d;
case 0x507a6f:c.instructions+=75;goto B507a6f;
case 0x507a72:c.instructions+=74;goto B507a72;
case 0x507a76:c.instructions+=73;goto B507a76;
case 0x507a78:c.instructions+=72;goto B507a78;
case 0x507a7a:c.instructions+=71;goto B507a7a;
case 0x507a7d:c.instructions+=70;goto B507a7d;
case 0x507a80:c.instructions+=69;goto B507a80;
case 0x507a83:c.instructions+=68;goto B507a83;
case 0x507a86:c.instructions+=67;goto B507a86;
case 0x507a89:c.instructions+=66;goto B507a89;
case 0x507a8c:c.instructions+=65;goto B507a8c;
case 0x507a90:c.instructions+=64;goto B507a90;
case 0x507a93:c.instructions+=63;goto B507a93;
case 0x507a97:c.instructions+=62;goto B507a97;
case 0x507a99:c.instructions+=61;goto B507a99;
case 0x507a9b:c.instructions+=60;goto B507a9b;
case 0x507a9f:c.instructions+=59;goto B507a9f;
case 0x507aa1:c.instructions+=58;goto B507aa1;
case 0x507aa5:c.instructions+=57;goto B507aa5;
case 0x507aa9:c.instructions+=56;goto B507aa9;
case 0x507aac:c.instructions+=55;goto B507aac;
case 0x507ab0:c.instructions+=54;goto B507ab0;
case 0x507ab4:c.instructions+=53;goto B507ab4;
case 0x507ab8:c.instructions+=52;goto B507ab8;
case 0x507aba:c.instructions+=51;goto B507aba;
case 0x507abd:c.instructions+=50;goto B507abd;
case 0x507ac1:c.instructions+=49;goto B507ac1;
case 0x507ac5:c.instructions+=48;goto B507ac5;
case 0x507ac8:c.instructions+=47;goto B507ac8;
case 0x507acb:c.instructions+=46;goto B507acb;
case 0x507ace:c.instructions+=45;goto B507ace;
case 0x507ad2:c.instructions+=44;goto B507ad2;
case 0x507ad6:c.instructions+=43;goto B507ad6;
case 0x507ada:c.instructions+=42;goto B507ada;
case 0x507add:c.instructions+=41;goto B507add;
case 0x507ae1:c.instructions+=40;goto B507ae1;
case 0x507ae5:c.instructions+=39;goto B507ae5;
case 0x507ae8:c.instructions+=38;goto B507ae8;
case 0x507aec:c.instructions+=37;goto B507aec;
case 0x507af0:c.instructions+=36;goto B507af0;
case 0x507af5:c.instructions+=35;goto B507af5;
case 0x507af7:c.instructions+=34;goto B507af7;
case 0x507afb:c.instructions+=33;goto B507afb;
case 0x507aff:c.instructions+=32;goto B507aff;
case 0x507b01:c.instructions+=31;goto B507b01;
case 0x507b03:c.instructions+=30;goto B507b03;
case 0x507b07:c.instructions+=29;goto B507b07;
case 0x507b09:c.instructions+=28;goto B507b09;
case 0x507b0d:c.instructions+=27;goto B507b0d;
case 0x507b11:c.instructions+=26;goto B507b11;
case 0x507b13:c.instructions+=25;goto B507b13;
case 0x507b17:c.instructions+=24;goto B507b17;
case 0x507b1b:c.instructions+=23;goto B507b1b;
case 0x507b1f:c.instructions+=22;goto B507b1f;
case 0x507b22:c.instructions+=21;goto B507b22;
case 0x507b26:c.instructions+=20;goto B507b26;
case 0x507b2a:c.instructions+=19;goto B507b2a;
case 0x507b2e:c.instructions+=18;goto B507b2e;
case 0x507b32:c.instructions+=17;goto B507b32;
case 0x507b36:c.instructions+=16;goto B507b36;
case 0x507b3a:c.instructions+=15;goto B507b3a;
case 0x507b3e:c.instructions+=14;goto B507b3e;
case 0x507b40:c.instructions+=13;goto B507b40;
case 0x507b43:c.instructions+=12;goto B507b43;
case 0x507b47:c.instructions+=11;goto B507b47;
case 0x507b4b:c.instructions+=10;goto B507b4b;
case 0x507b4d:c.instructions+=9;goto B507b4d;
case 0x507b4f:c.instructions+=8;goto B507b4f;
case 0x507b52:c.instructions+=7;goto B507b52;
case 0x507b56:c.instructions+=6;goto B507b56;
case 0x507b59:c.instructions+=5;goto B507b59;
case 0x507b5a:c.instructions+=4;goto B507b5a;
case 0x507b5e:c.instructions+=3;goto B507b5e;
case 0x507b60:c.instructions+=2;goto B507b60;
case 0x507b63:c.instructions+=1;goto B507b63;
case 0x507b65:goto L507b65;
case 0x507b69:goto L507b69;
case 0x507b6c:c.instructions+=28;goto B507b6c;
case 0x507b6f:c.instructions+=27;goto B507b6f;
case 0x507b71:c.instructions+=26;goto B507b71;
case 0x507b74:c.instructions+=25;goto B507b74;
case 0x507b76:c.instructions+=24;goto B507b76;
case 0x507b78:c.instructions+=23;goto B507b78;
case 0x507b7c:c.instructions+=22;goto B507b7c;
case 0x507b7f:c.instructions+=21;goto B507b7f;
case 0x507b82:c.instructions+=20;goto B507b82;
case 0x507b86:c.instructions+=19;goto B507b86;
case 0x507b89:c.instructions+=18;goto B507b89;
case 0x507b8d:c.instructions+=17;goto B507b8d;
case 0x507b90:c.instructions+=16;goto B507b90;
case 0x507b94:c.instructions+=15;goto B507b94;
case 0x507b98:c.instructions+=14;goto B507b98;
case 0x507b9b:c.instructions+=13;goto B507b9b;
case 0x507b9f:c.instructions+=12;goto B507b9f;
case 0x507ba3:c.instructions+=11;goto B507ba3;
case 0x507ba6:c.instructions+=10;goto B507ba6;
case 0x507baa:c.instructions+=9;goto B507baa;
case 0x507bad:c.instructions+=8;goto B507bad;
case 0x507baf:c.instructions+=7;goto B507baf;
case 0x507bb1:c.instructions+=6;goto B507bb1;
case 0x507bb3:c.instructions+=5;goto B507bb3;
case 0x507bb7:c.instructions+=4;goto B507bb7;
case 0x507bba:c.instructions+=3;goto B507bba;
case 0x507bbc:c.instructions+=2;goto B507bbc;
case 0x507bbf:c.instructions+=1;goto B507bbf;
case 0x507bc4:goto L507bc4;
case 0x507bc6:c.instructions+=1;goto B507bc6;
case 0x507bcc:goto L507bcc;
case 0x507bcf:c.instructions+=97;goto B507bcf;
case 0x507bd3:c.instructions+=96;goto B507bd3;
case 0x507bd6:c.instructions+=95;goto B507bd6;
case 0x507bd9:c.instructions+=94;goto B507bd9;
case 0x507bdc:c.instructions+=93;goto B507bdc;
case 0x507be0:c.instructions+=92;goto B507be0;
case 0x507be4:c.instructions+=91;goto B507be4;
case 0x507be6:c.instructions+=90;goto B507be6;
case 0x507bed:c.instructions+=89;goto B507bed;
case 0x507bf4:c.instructions+=88;goto B507bf4;
case 0x507bf6:c.instructions+=87;goto B507bf6;
case 0x507bf8:c.instructions+=86;goto B507bf8;
case 0x507bfb:c.instructions+=85;goto B507bfb;
case 0x507bff:c.instructions+=84;goto B507bff;
case 0x507c02:c.instructions+=83;goto B507c02;
case 0x507c05:c.instructions+=82;goto B507c05;
case 0x507c08:c.instructions+=81;goto B507c08;
case 0x507c0a:c.instructions+=80;goto B507c0a;
case 0x507c0c:c.instructions+=79;goto B507c0c;
case 0x507c0e:c.instructions+=78;goto B507c0e;
case 0x507c10:c.instructions+=77;goto B507c10;
case 0x507c12:c.instructions+=76;goto B507c12;
case 0x507c15:c.instructions+=75;goto B507c15;
case 0x507c18:c.instructions+=74;goto B507c18;
case 0x507c1a:c.instructions+=73;goto B507c1a;
case 0x507c1d:c.instructions+=72;goto B507c1d;
case 0x507c20:c.instructions+=71;goto B507c20;
case 0x507c24:c.instructions+=70;goto B507c24;
case 0x507c28:c.instructions+=69;goto B507c28;
case 0x507c2b:c.instructions+=68;goto B507c2b;
case 0x507c2f:c.instructions+=67;goto B507c2f;
case 0x507c31:c.instructions+=66;goto B507c31;
case 0x507c33:c.instructions+=65;goto B507c33;
case 0x507c35:c.instructions+=64;goto B507c35;
case 0x507c38:c.instructions+=63;goto B507c38;
case 0x507c3b:c.instructions+=62;goto B507c3b;
case 0x507c3e:c.instructions+=61;goto B507c3e;
case 0x507c41:c.instructions+=60;goto B507c41;
case 0x507c44:c.instructions+=59;goto B507c44;
case 0x507c47:c.instructions+=58;goto B507c47;
case 0x507c4b:c.instructions+=57;goto B507c4b;
case 0x507c4e:c.instructions+=56;goto B507c4e;
case 0x507c52:c.instructions+=55;goto B507c52;
case 0x507c54:c.instructions+=54;goto B507c54;
case 0x507c56:c.instructions+=53;goto B507c56;
case 0x507c5a:c.instructions+=52;goto B507c5a;
case 0x507c5c:c.instructions+=51;goto B507c5c;
case 0x507c60:c.instructions+=50;goto B507c60;
case 0x507c64:c.instructions+=49;goto B507c64;
case 0x507c67:c.instructions+=48;goto B507c67;
case 0x507c6b:c.instructions+=47;goto B507c6b;
case 0x507c6f:c.instructions+=46;goto B507c6f;
case 0x507c73:c.instructions+=45;goto B507c73;
case 0x507c75:c.instructions+=44;goto B507c75;
case 0x507c78:c.instructions+=43;goto B507c78;
case 0x507c7c:c.instructions+=42;goto B507c7c;
case 0x507c80:c.instructions+=41;goto B507c80;
case 0x507c83:c.instructions+=40;goto B507c83;
case 0x507c86:c.instructions+=39;goto B507c86;
case 0x507c89:c.instructions+=38;goto B507c89;
case 0x507c8d:c.instructions+=37;goto B507c8d;
case 0x507c91:c.instructions+=36;goto B507c91;
case 0x507c95:c.instructions+=35;goto B507c95;
case 0x507c98:c.instructions+=34;goto B507c98;
case 0x507c9c:c.instructions+=33;goto B507c9c;
case 0x507ca0:c.instructions+=32;goto B507ca0;
case 0x507ca4:c.instructions+=31;goto B507ca4;
case 0x507cab:c.instructions+=30;goto B507cab;
case 0x507caf:c.instructions+=29;goto B507caf;
case 0x507cb4:c.instructions+=28;goto B507cb4;
case 0x507cb6:c.instructions+=27;goto B507cb6;
case 0x507cbd:c.instructions+=26;goto B507cbd;
case 0x507cbf:c.instructions+=25;goto B507cbf;
case 0x507cc1:c.instructions+=24;goto B507cc1;
case 0x507cc5:c.instructions+=23;goto B507cc5;
case 0x507cc7:c.instructions+=22;goto B507cc7;
case 0x507ccb:c.instructions+=21;goto B507ccb;
case 0x507cd2:c.instructions+=20;goto B507cd2;
case 0x507cd4:c.instructions+=19;goto B507cd4;
case 0x507cd8:c.instructions+=18;goto B507cd8;
case 0x507cdf:c.instructions+=17;goto B507cdf;
case 0x507ce3:c.instructions+=16;goto B507ce3;
case 0x507ce6:c.instructions+=15;goto B507ce6;
case 0x507cea:c.instructions+=14;goto B507cea;
case 0x507cee:c.instructions+=13;goto B507cee;
case 0x507cf2:c.instructions+=12;goto B507cf2;
case 0x507cf6:c.instructions+=11;goto B507cf6;
case 0x507cfd:c.instructions+=10;goto B507cfd;
case 0x507d01:c.instructions+=9;goto B507d01;
case 0x507d08:c.instructions+=8;goto B507d08;
case 0x507d0a:c.instructions+=7;goto B507d0a;
case 0x507d0d:c.instructions+=6;goto B507d0d;
case 0x507d14:c.instructions+=5;goto B507d14;
case 0x507d1b:c.instructions+=4;goto B507d1b;
case 0x507d1d:c.instructions+=3;goto B507d1d;
case 0x507d1f:c.instructions+=2;goto B507d1f;
case 0x507d22:c.instructions+=1;goto B507d22;
case 0x507d24:goto L507d24;
case 0x507d27:c.instructions+=6;goto B507d27;
case 0x507d2b:c.instructions+=5;goto B507d2b;
case 0x507d2e:c.instructions+=4;goto B507d2e;
case 0x507d2f:c.instructions+=3;goto B507d2f;
case 0x507d32:c.instructions+=2;goto B507d32;
case 0x507d36:c.instructions+=1;goto B507d36;
case 0x507d3a:goto L507d3a;
case 0x507d3e:c.instructions+=11;goto B507d3e;
case 0x507d45:c.instructions+=10;goto B507d45;
case 0x507d4c:c.instructions+=9;goto B507d4c;
case 0x507d50:c.instructions+=8;goto B507d50;
case 0x507d54:c.instructions+=7;goto B507d54;
case 0x507d56:c.instructions+=6;goto B507d56;
case 0x507d5a:c.instructions+=5;goto B507d5a;
case 0x507d5f:c.instructions+=4;goto B507d5f;
case 0x507d64:c.instructions+=3;goto B507d64;
case 0x507d68:c.instructions+=2;goto B507d68;
case 0x507d6b:c.instructions+=1;goto B507d6b;
case 0x507d71:goto L507d71;
case 0x507d75:c.instructions+=6;goto B507d75;
case 0x507d76:c.instructions+=5;goto B507d76;
case 0x507d77:c.instructions+=4;goto B507d77;
case 0x507d78:c.instructions+=3;goto B507d78;
case 0x507d7a:c.instructions+=2;goto B507d7a;
case 0x507d7b:c.instructions+=1;goto B507d7b;
case 0x507d80:goto L507d80;
case 0x507d81:c.instructions+=19;goto B507d81;
case 0x507d83:c.instructions+=18;goto B507d83;
case 0x507d86:c.instructions+=17;goto B507d86;
case 0x507d8c:c.instructions+=16;goto B507d8c;
case 0x507d8f:c.instructions+=15;goto B507d8f;
case 0x507d90:c.instructions+=14;goto B507d90;
case 0x507d93:c.instructions+=13;goto B507d93;
case 0x507d94:c.instructions+=12;goto B507d94;
case 0x507d97:c.instructions+=11;goto B507d97;
case 0x507d98:c.instructions+=10;goto B507d98;
case 0x507d9b:c.instructions+=9;goto B507d9b;
case 0x507d9c:c.instructions+=8;goto B507d9c;
case 0x507d9e:c.instructions+=7;goto B507d9e;
case 0x507da1:c.instructions+=6;goto B507da1;
case 0x507da5:c.instructions+=5;goto B507da5;
case 0x507da8:c.instructions+=4;goto B507da8;
case 0x507daa:c.instructions+=3;goto B507daa;
case 0x507dad:c.instructions+=2;goto B507dad;
case 0x507db0:c.instructions+=1;goto B507db0;
case 0x507db2:goto L507db2;
case 0x507db6:c.instructions+=27;goto B507db6;
case 0x507db9:c.instructions+=26;goto B507db9;
case 0x507dbd:c.instructions+=25;goto B507dbd;
case 0x507dc0:c.instructions+=24;goto B507dc0;
case 0x507dc2:c.instructions+=23;goto B507dc2;
case 0x507dc4:c.instructions+=22;goto B507dc4;
case 0x507dc7:c.instructions+=21;goto B507dc7;
case 0x507dcf:c.instructions+=20;goto B507dcf;
case 0x507dd4:c.instructions+=19;goto B507dd4;
case 0x507dd7:c.instructions+=18;goto B507dd7;
case 0x507dda:c.instructions+=17;goto B507dda;
case 0x507dde:c.instructions+=16;goto B507dde;
case 0x507de1:c.instructions+=15;goto B507de1;
case 0x507de4:c.instructions+=14;goto B507de4;
case 0x507de6:c.instructions+=13;goto B507de6;
case 0x507dea:c.instructions+=12;goto B507dea;
case 0x507ded:c.instructions+=11;goto B507ded;
case 0x507df1:c.instructions+=10;goto B507df1;
case 0x507df4:c.instructions+=9;goto B507df4;
case 0x507df8:c.instructions+=8;goto B507df8;
case 0x507dfa:c.instructions+=7;goto B507dfa;
case 0x507dfe:c.instructions+=6;goto B507dfe;
case 0x507e02:c.instructions+=5;goto B507e02;
case 0x507e04:c.instructions+=4;goto B507e04;
case 0x507e07:c.instructions+=3;goto B507e07;
case 0x507e0a:c.instructions+=2;goto B507e0a;
case 0x507e0d:c.instructions+=1;goto B507e0d;
case 0x507e0f:goto L507e0f;
case 0x507e17:c.instructions+=1;goto B507e17;
case 0x507e1c:goto L507e1c;
case 0x507e20:c.instructions+=2;goto B507e20;
case 0x507e28:c.instructions+=1;goto B507e28;
case 0x507e2e:goto L507e2e;
case 0x507e31:c.instructions+=29;goto B507e31;
case 0x507e35:c.instructions+=28;goto B507e35;
case 0x507e3c:c.instructions+=27;goto B507e3c;
case 0x507e40:c.instructions+=26;goto B507e40;
case 0x507e44:c.instructions+=25;goto B507e44;
case 0x507e47:c.instructions+=24;goto B507e47;
case 0x507e4a:c.instructions+=23;goto B507e4a;
case 0x507e4d:c.instructions+=22;goto B507e4d;
case 0x507e4f:c.instructions+=21;goto B507e4f;
case 0x507e52:c.instructions+=20;goto B507e52;
case 0x507e54:c.instructions+=19;goto B507e54;
case 0x507e58:c.instructions+=18;goto B507e58;
case 0x507e5b:c.instructions+=17;goto B507e5b;
case 0x507e60:c.instructions+=16;goto B507e60;
case 0x507e62:c.instructions+=15;goto B507e62;
case 0x507e66:c.instructions+=14;goto B507e66;
case 0x507e69:c.instructions+=13;goto B507e69;
case 0x507e70:c.instructions+=12;goto B507e70;
case 0x507e73:c.instructions+=11;goto B507e73;
case 0x507e78:c.instructions+=10;goto B507e78;
case 0x507e7b:c.instructions+=9;goto B507e7b;
case 0x507e7d:c.instructions+=8;goto B507e7d;
case 0x507e85:c.instructions+=7;goto B507e85;
case 0x507e8c:c.instructions+=6;goto B507e8c;
case 0x507e8f:c.instructions+=5;goto B507e8f;
case 0x507e92:c.instructions+=4;goto B507e92;
case 0x507e94:c.instructions+=3;goto B507e94;
case 0x507e98:c.instructions+=2;goto B507e98;
case 0x507e9b:c.instructions+=1;goto B507e9b;
case 0x507ea1:goto L507ea1;
case 0x507ea3:c.instructions+=1;goto B507ea3;
case 0x507ea9:goto L507ea9;
case 0x507eac:c.instructions+=104;goto B507eac;
case 0x507eb0:c.instructions+=103;goto B507eb0;
case 0x507eb3:c.instructions+=102;goto B507eb3;
case 0x507eb6:c.instructions+=101;goto B507eb6;
case 0x507eba:c.instructions+=100;goto B507eba;
case 0x507ebd:c.instructions+=99;goto B507ebd;
case 0x507ec0:c.instructions+=98;goto B507ec0;
case 0x507ec4:c.instructions+=97;goto B507ec4;
case 0x507ecb:c.instructions+=96;goto B507ecb;
case 0x507ed2:c.instructions+=95;goto B507ed2;
case 0x507ed4:c.instructions+=94;goto B507ed4;
case 0x507ed6:c.instructions+=93;goto B507ed6;
case 0x507ed9:c.instructions+=92;goto B507ed9;
case 0x507edc:c.instructions+=91;goto B507edc;
case 0x507edf:c.instructions+=90;goto B507edf;
case 0x507ee2:c.instructions+=89;goto B507ee2;
case 0x507ee6:c.instructions+=88;goto B507ee6;
case 0x507ee9:c.instructions+=87;goto B507ee9;
case 0x507eeb:c.instructions+=86;goto B507eeb;
case 0x507eed:c.instructions+=85;goto B507eed;
case 0x507eef:c.instructions+=84;goto B507eef;
case 0x507ef1:c.instructions+=83;goto B507ef1;
case 0x507ef4:c.instructions+=82;goto B507ef4;
case 0x507ef7:c.instructions+=81;goto B507ef7;
case 0x507ef9:c.instructions+=80;goto B507ef9;
case 0x507efc:c.instructions+=79;goto B507efc;
case 0x507eff:c.instructions+=78;goto B507eff;
case 0x507f03:c.instructions+=77;goto B507f03;
case 0x507f07:c.instructions+=76;goto B507f07;
case 0x507f09:c.instructions+=75;goto B507f09;
case 0x507f0c:c.instructions+=74;goto B507f0c;
case 0x507f10:c.instructions+=73;goto B507f10;
case 0x507f13:c.instructions+=72;goto B507f13;
case 0x507f15:c.instructions+=71;goto B507f15;
case 0x507f17:c.instructions+=70;goto B507f17;
case 0x507f1a:c.instructions+=69;goto B507f1a;
case 0x507f1d:c.instructions+=68;goto B507f1d;
case 0x507f20:c.instructions+=67;goto B507f20;
case 0x507f23:c.instructions+=66;goto B507f23;
case 0x507f26:c.instructions+=65;goto B507f26;
case 0x507f2a:c.instructions+=64;goto B507f2a;
case 0x507f2d:c.instructions+=63;goto B507f2d;
case 0x507f31:c.instructions+=62;goto B507f31;
case 0x507f34:c.instructions+=61;goto B507f34;
case 0x507f37:c.instructions+=60;goto B507f37;
case 0x507f3b:c.instructions+=59;goto B507f3b;
case 0x507f3d:c.instructions+=58;goto B507f3d;
case 0x507f3f:c.instructions+=57;goto B507f3f;
case 0x507f43:c.instructions+=56;goto B507f43;
case 0x507f45:c.instructions+=55;goto B507f45;
case 0x507f49:c.instructions+=54;goto B507f49;
case 0x507f4d:c.instructions+=53;goto B507f4d;
case 0x507f50:c.instructions+=52;goto B507f50;
case 0x507f54:c.instructions+=51;goto B507f54;
case 0x507f57:c.instructions+=50;goto B507f57;
case 0x507f5b:c.instructions+=49;goto B507f5b;
case 0x507f5f:c.instructions+=48;goto B507f5f;
case 0x507f61:c.instructions+=47;goto B507f61;
case 0x507f64:c.instructions+=46;goto B507f64;
case 0x507f68:c.instructions+=45;goto B507f68;
case 0x507f6c:c.instructions+=44;goto B507f6c;
case 0x507f6f:c.instructions+=43;goto B507f6f;
case 0x507f72:c.instructions+=42;goto B507f72;
case 0x507f75:c.instructions+=41;goto B507f75;
case 0x507f78:c.instructions+=40;goto B507f78;
case 0x507f7b:c.instructions+=39;goto B507f7b;
case 0x507f7f:c.instructions+=38;goto B507f7f;
case 0x507f82:c.instructions+=37;goto B507f82;
case 0x507f86:c.instructions+=36;goto B507f86;
case 0x507f8a:c.instructions+=35;goto B507f8a;
case 0x507f8d:c.instructions+=34;goto B507f8d;
case 0x507f91:c.instructions+=33;goto B507f91;
case 0x507f96:c.instructions+=32;goto B507f96;
case 0x507f9a:c.instructions+=31;goto B507f9a;
case 0x507f9c:c.instructions+=30;goto B507f9c;
case 0x507f9e:c.instructions+=29;goto B507f9e;
case 0x507fa2:c.instructions+=28;goto B507fa2;
case 0x507fa4:c.instructions+=27;goto B507fa4;
case 0x507fa8:c.instructions+=26;goto B507fa8;
case 0x507fac:c.instructions+=25;goto B507fac;
case 0x507fae:c.instructions+=24;goto B507fae;
case 0x507fb2:c.instructions+=23;goto B507fb2;
case 0x507fb6:c.instructions+=22;goto B507fb6;
case 0x507fba:c.instructions+=21;goto B507fba;
case 0x507fbd:c.instructions+=20;goto B507fbd;
case 0x507fc1:c.instructions+=19;goto B507fc1;
case 0x507fc5:c.instructions+=18;goto B507fc5;
case 0x507fc9:c.instructions+=17;goto B507fc9;
case 0x507fcd:c.instructions+=16;goto B507fcd;
case 0x507fd1:c.instructions+=15;goto B507fd1;
case 0x507fd5:c.instructions+=14;goto B507fd5;
case 0x507fd9:c.instructions+=13;goto B507fd9;
case 0x507fdd:c.instructions+=12;goto B507fdd;
case 0x507fdf:c.instructions+=11;goto B507fdf;
case 0x507fe2:c.instructions+=10;goto B507fe2;
case 0x507fe3:c.instructions+=9;goto B507fe3;
case 0x507fe7:c.instructions+=8;goto B507fe7;
case 0x507feb:c.instructions+=7;goto B507feb;
case 0x507fed:c.instructions+=6;goto B507fed;
case 0x507fef:c.instructions+=5;goto B507fef;
case 0x507ff2:c.instructions+=4;goto B507ff2;
case 0x507ff5:c.instructions+=3;goto B507ff5;
case 0x507ff8:c.instructions+=2;goto B507ff8;
case 0x507ffa:c.instructions+=1;goto B507ffa;
case 0x507ffc:goto L507ffc;
default:missing_instruction(c.pc);}
B507000:L507000:{c.instructions+=68;NFSU2_TR(0x507000);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507003:{NFSU2_TR(0x507003);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507006:{NFSU2_TR(0x507006);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50700a:{NFSU2_TR(0x50700a);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50700d:{NFSU2_TR(0x50700d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507011:{NFSU2_TR(0x507011);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507014:{NFSU2_TR(0x507014);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507017:{NFSU2_TR(0x507017);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50701b:{NFSU2_TR(0x50701b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50701d:{NFSU2_TR(0x50701d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50701f:{NFSU2_TR(0x50701f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507023:{NFSU2_TR(0x507023);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507025:{NFSU2_TR(0x507025);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507029:{NFSU2_TR(0x507029);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50702d:{NFSU2_TR(0x50702d);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507030:{NFSU2_TR(0x507030);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507034:{NFSU2_TR(0x507034);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507037:{NFSU2_TR(0x507037);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50703b:{NFSU2_TR(0x50703b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50703f:{NFSU2_TR(0x50703f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507041:{NFSU2_TR(0x507041);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507044:{NFSU2_TR(0x507044);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507048:{NFSU2_TR(0x507048);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50704c:{NFSU2_TR(0x50704c);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50704f:{NFSU2_TR(0x50704f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507052:{NFSU2_TR(0x507052);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507055:{NFSU2_TR(0x507055);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507058:{NFSU2_TR(0x507058);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50705b:{NFSU2_TR(0x50705b);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50705f:{NFSU2_TR(0x50705f);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507062:{NFSU2_TR(0x507062);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507066:{NFSU2_TR(0x507066);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50706d:{NFSU2_TR(0x50706d);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507070:{NFSU2_TR(0x507070);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507074:{NFSU2_TR(0x507074);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B507079:{NFSU2_TR(0x507079);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507080:{NFSU2_TR(0x507080);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507082:{NFSU2_TR(0x507082);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507084:{NFSU2_TR(0x507084);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507088:{NFSU2_TR(0x507088);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50708a:{NFSU2_TR(0x50708a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50708e:{NFSU2_TR(0x50708e);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507095:{NFSU2_TR(0x507095);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507097:{NFSU2_TR(0x507097);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50709b:{NFSU2_TR(0x50709b);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5070a2:{NFSU2_TR(0x5070a2);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5070a6:{NFSU2_TR(0x5070a6);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5070a9:{NFSU2_TR(0x5070a9);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5070ad:{NFSU2_TR(0x5070ad);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5070b1:{NFSU2_TR(0x5070b1);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5070b5:{NFSU2_TR(0x5070b5);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5070b9:{NFSU2_TR(0x5070b9);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5070c0:{NFSU2_TR(0x5070c0);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5070c4:{NFSU2_TR(0x5070c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5070cb:{NFSU2_TR(0x5070cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5070cf:{NFSU2_TR(0x5070cf);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B5070d1:{NFSU2_TR(0x5070d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5070d4:{NFSU2_TR(0x5070d4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5070d5:{NFSU2_TR(0x5070d5);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5070dc:{NFSU2_TR(0x5070dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5070e3:{NFSU2_TR(0x5070e3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5070e5:{NFSU2_TR(0x5070e5);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5070e7:{NFSU2_TR(0x5070e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5070ea:{NFSU2_TR(0x5070ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5070ee:{NFSU2_TR(0x5070ee);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5070f1:{NFSU2_TR(0x5070f1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5070f4:{NFSU2_TR(0x5070f4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5070f6:{NFSU2_TR(0x5070f6);
{goto L5070fc;}
}
B5070f8:L5070f8:{c.instructions+=1;NFSU2_TR(0x5070f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5070fc:L5070fc:{c.instructions+=6;NFSU2_TR(0x5070fc);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5070ff:{NFSU2_TR(0x5070ff);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B507102:{NFSU2_TR(0x507102);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B507104:{NFSU2_TR(0x507104);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B507108:{NFSU2_TR(0x507108);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50710b:{NFSU2_TR(0x50710b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50727a;}}
}
B507111:L507111:{c.instructions+=2;NFSU2_TR(0x507111);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B507113:{NFSU2_TR(0x507113);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L507233;}}
}
B507119:L507119:{c.instructions+=92;NFSU2_TR(0x507119);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50711c:{NFSU2_TR(0x50711c);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50711f:{NFSU2_TR(0x50711f);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507122:{NFSU2_TR(0x507122);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507125:{NFSU2_TR(0x507125);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507127:{NFSU2_TR(0x507127);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50712a:{NFSU2_TR(0x50712a);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507131:{NFSU2_TR(0x507131);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507138:{NFSU2_TR(0x507138);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50713a:{NFSU2_TR(0x50713a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50713c:{NFSU2_TR(0x50713c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50713f:{NFSU2_TR(0x50713f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507143:{NFSU2_TR(0x507143);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507146:{NFSU2_TR(0x507146);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507149:{NFSU2_TR(0x507149);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50714c:{NFSU2_TR(0x50714c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50714e:{NFSU2_TR(0x50714e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507150:{NFSU2_TR(0x507150);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507152:{NFSU2_TR(0x507152);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507154:{NFSU2_TR(0x507154);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507156:{NFSU2_TR(0x507156);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507159:{NFSU2_TR(0x507159);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50715c:{NFSU2_TR(0x50715c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50715e:{NFSU2_TR(0x50715e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507161:{NFSU2_TR(0x507161);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507164:{NFSU2_TR(0x507164);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507167:{NFSU2_TR(0x507167);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50716a:{NFSU2_TR(0x50716a);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50716d:{NFSU2_TR(0x50716d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50716f:{NFSU2_TR(0x50716f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507171:{NFSU2_TR(0x507171);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507173:{NFSU2_TR(0x507173);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507176:{NFSU2_TR(0x507176);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507179:{NFSU2_TR(0x507179);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50717c:{NFSU2_TR(0x50717c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50717f:{NFSU2_TR(0x50717f);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507182:{NFSU2_TR(0x507182);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507185:{NFSU2_TR(0x507185);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507187:{NFSU2_TR(0x507187);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50718a:{NFSU2_TR(0x50718a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50718c:{NFSU2_TR(0x50718c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50718e:{NFSU2_TR(0x50718e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507192:{NFSU2_TR(0x507192);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507194:{NFSU2_TR(0x507194);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507198:{NFSU2_TR(0x507198);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50719c:{NFSU2_TR(0x50719c);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50719f:{NFSU2_TR(0x50719f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5071a3:{NFSU2_TR(0x5071a3);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5071a6:{NFSU2_TR(0x5071a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5071a9:{NFSU2_TR(0x5071a9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5071ab:{NFSU2_TR(0x5071ab);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5071ae:{NFSU2_TR(0x5071ae);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5071b2:{NFSU2_TR(0x5071b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5071b6:{NFSU2_TR(0x5071b6);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5071b9:{NFSU2_TR(0x5071b9);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5071bc:{NFSU2_TR(0x5071bc);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5071bf:{NFSU2_TR(0x5071bf);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5071c2:{NFSU2_TR(0x5071c2);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5071c5:{NFSU2_TR(0x5071c5);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5071c8:{NFSU2_TR(0x5071c8);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5071cc:{NFSU2_TR(0x5071cc);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5071ce:{NFSU2_TR(0x5071ce);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5071d1:{NFSU2_TR(0x5071d1);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5071d5:{NFSU2_TR(0x5071d5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5071d7:{NFSU2_TR(0x5071d7);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5071d9:{NFSU2_TR(0x5071d9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5071da:{NFSU2_TR(0x5071da);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5071dd:{NFSU2_TR(0x5071dd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5071e0:{NFSU2_TR(0x5071e0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5071e4:{NFSU2_TR(0x5071e4);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5071e9:{NFSU2_TR(0x5071e9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5071eb:{NFSU2_TR(0x5071eb);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5071ef:{NFSU2_TR(0x5071ef);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5071f3:{NFSU2_TR(0x5071f3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5071f5:{NFSU2_TR(0x5071f5);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5071f9:{NFSU2_TR(0x5071f9);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5071fd:{NFSU2_TR(0x5071fd);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507201:{NFSU2_TR(0x507201);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507204:{NFSU2_TR(0x507204);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507208:{NFSU2_TR(0x507208);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50720b:{NFSU2_TR(0x50720b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50720f:{NFSU2_TR(0x50720f);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507212:{NFSU2_TR(0x507212);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507216:{NFSU2_TR(0x507216);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50721a:{NFSU2_TR(0x50721a);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50721c:{NFSU2_TR(0x50721c);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50721f:{NFSU2_TR(0x50721f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507222:{NFSU2_TR(0x507222);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507226:{NFSU2_TR(0x507226);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50722a:{NFSU2_TR(0x50722a);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50722d:{NFSU2_TR(0x50722d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507230:{NFSU2_TR(0x507230);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507233:L507233:{c.instructions+=24;NFSU2_TR(0x507233);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507236:{NFSU2_TR(0x507236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507239:{NFSU2_TR(0x507239);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50723b:{NFSU2_TR(0x50723b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B50723d:{NFSU2_TR(0x50723d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507241:{NFSU2_TR(0x507241);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507243:{NFSU2_TR(0x507243);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507246:{NFSU2_TR(0x507246);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507249:{NFSU2_TR(0x507249);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50724b:{NFSU2_TR(0x50724b);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50724e:{NFSU2_TR(0x50724e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507251:{NFSU2_TR(0x507251);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507254:{NFSU2_TR(0x507254);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507258:{NFSU2_TR(0x507258);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50725c:{NFSU2_TR(0x50725c);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50725f:{NFSU2_TR(0x50725f);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507262:{NFSU2_TR(0x507262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B507264:{NFSU2_TR(0x507264);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507267:{NFSU2_TR(0x507267);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50726b:{NFSU2_TR(0x50726b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50726d:{NFSU2_TR(0x50726d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50726f:{NFSU2_TR(0x50726f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507272:{NFSU2_TR(0x507272);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507275:{NFSU2_TR(0x507275);
{goto L5073a9;}
}
B50727a:L50727a:{c.instructions+=2;NFSU2_TR(0x50727a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50727c:{NFSU2_TR(0x50727c);
if(r1(R+518)){{goto L5073b7;}}
}
B507282:L507282:{c.instructions+=88;NFSU2_TR(0x507282);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507285:{NFSU2_TR(0x507285);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507288:{NFSU2_TR(0x507288);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50728b:{NFSU2_TR(0x50728b);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50728e:{NFSU2_TR(0x50728e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507290:{NFSU2_TR(0x507290);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507293:{NFSU2_TR(0x507293);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50729a:{NFSU2_TR(0x50729a);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5072a1:{NFSU2_TR(0x5072a1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5072a3:{NFSU2_TR(0x5072a3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072a5:{NFSU2_TR(0x5072a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5072a8:{NFSU2_TR(0x5072a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5072ac:{NFSU2_TR(0x5072ac);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072af:{NFSU2_TR(0x5072af);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5072b2:{NFSU2_TR(0x5072b2);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5072b5:{NFSU2_TR(0x5072b5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5072b7:{NFSU2_TR(0x5072b7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5072b9:{NFSU2_TR(0x5072b9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5072bb:{NFSU2_TR(0x5072bb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072bd:{NFSU2_TR(0x5072bd);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5072bf:{NFSU2_TR(0x5072bf);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5072c2:{NFSU2_TR(0x5072c2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072c5:{NFSU2_TR(0x5072c5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5072c7:{NFSU2_TR(0x5072c7);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5072ca:{NFSU2_TR(0x5072ca);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072cd:{NFSU2_TR(0x5072cd);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5072d0:{NFSU2_TR(0x5072d0);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5072d3:{NFSU2_TR(0x5072d3);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5072d6:{NFSU2_TR(0x5072d6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5072d8:{NFSU2_TR(0x5072d8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072da:{NFSU2_TR(0x5072da);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5072dc:{NFSU2_TR(0x5072dc);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5072df:{NFSU2_TR(0x5072df);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072e2:{NFSU2_TR(0x5072e2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5072e5:{NFSU2_TR(0x5072e5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072e8:{NFSU2_TR(0x5072e8);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5072eb:{NFSU2_TR(0x5072eb);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5072ee:{NFSU2_TR(0x5072ee);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5072f0:{NFSU2_TR(0x5072f0);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5072f3:{NFSU2_TR(0x5072f3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5072f5:{NFSU2_TR(0x5072f5);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5072f7:{NFSU2_TR(0x5072f7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072fb:{NFSU2_TR(0x5072fb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5072fd:{NFSU2_TR(0x5072fd);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507301:{NFSU2_TR(0x507301);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507305:{NFSU2_TR(0x507305);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507308:{NFSU2_TR(0x507308);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50730c:{NFSU2_TR(0x50730c);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50730f:{NFSU2_TR(0x50730f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507312:{NFSU2_TR(0x507312);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507314:{NFSU2_TR(0x507314);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507317:{NFSU2_TR(0x507317);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50731b:{NFSU2_TR(0x50731b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50731f:{NFSU2_TR(0x50731f);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507322:{NFSU2_TR(0x507322);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507325:{NFSU2_TR(0x507325);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507328:{NFSU2_TR(0x507328);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50732b:{NFSU2_TR(0x50732b);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50732e:{NFSU2_TR(0x50732e);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507331:{NFSU2_TR(0x507331);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507338:{NFSU2_TR(0x507338);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50733a:{NFSU2_TR(0x50733a);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50733d:{NFSU2_TR(0x50733d);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507344:{NFSU2_TR(0x507344);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507346:{NFSU2_TR(0x507346);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507348:{NFSU2_TR(0x507348);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50734d:{NFSU2_TR(0x50734d);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507351:{NFSU2_TR(0x507351);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507353:{NFSU2_TR(0x507353);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507357:{NFSU2_TR(0x507357);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50735e:{NFSU2_TR(0x50735e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507360:{NFSU2_TR(0x507360);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507364:{NFSU2_TR(0x507364);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50736b:{NFSU2_TR(0x50736b);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50736f:{NFSU2_TR(0x50736f);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507372:{NFSU2_TR(0x507372);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507376:{NFSU2_TR(0x507376);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507379:{NFSU2_TR(0x507379);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50737d:{NFSU2_TR(0x50737d);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507380:{NFSU2_TR(0x507380);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507387:{NFSU2_TR(0x507387);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50738e:{NFSU2_TR(0x50738e);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B507390:{NFSU2_TR(0x507390);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507393:{NFSU2_TR(0x507393);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507396:{NFSU2_TR(0x507396);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50739d:{NFSU2_TR(0x50739d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5073a4:{NFSU2_TR(0x5073a4);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5073a6:{NFSU2_TR(0x5073a6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5073a9:L5073a9:{c.instructions+=5;NFSU2_TR(0x5073a9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5073aa:{NFSU2_TR(0x5073aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5073ad:{NFSU2_TR(0x5073ad);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5073b0:{NFSU2_TR(0x5073b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5073b4:{NFSU2_TR(0x5073b4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5073b7:L5073b7:{c.instructions+=6;NFSU2_TR(0x5073b7);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5073ba:{NFSU2_TR(0x5073ba);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5073bd:{NFSU2_TR(0x5073bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5073bf:{NFSU2_TR(0x5073bf);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5073c3:{NFSU2_TR(0x5073c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5073c6:{NFSU2_TR(0x5073c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L507531;}}
}
B5073cc:L5073cc:{c.instructions+=2;NFSU2_TR(0x5073cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5073ce:{NFSU2_TR(0x5073ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5074eb;}}
}
B5073d4:L5073d4:{c.instructions+=92;NFSU2_TR(0x5073d4);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5073d7:{NFSU2_TR(0x5073d7);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5073da:{NFSU2_TR(0x5073da);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5073dd:{NFSU2_TR(0x5073dd);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5073e0:{NFSU2_TR(0x5073e0);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5073e3:{NFSU2_TR(0x5073e3);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5073e5:{NFSU2_TR(0x5073e5);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5073ec:{NFSU2_TR(0x5073ec);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5073f3:{NFSU2_TR(0x5073f3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5073f5:{NFSU2_TR(0x5073f5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5073f7:{NFSU2_TR(0x5073f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5073fa:{NFSU2_TR(0x5073fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5073fe:{NFSU2_TR(0x5073fe);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507401:{NFSU2_TR(0x507401);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507404:{NFSU2_TR(0x507404);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507407:{NFSU2_TR(0x507407);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B507409:{NFSU2_TR(0x507409);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50740b:{NFSU2_TR(0x50740b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50740d:{NFSU2_TR(0x50740d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50740f:{NFSU2_TR(0x50740f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507411:{NFSU2_TR(0x507411);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507414:{NFSU2_TR(0x507414);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507417:{NFSU2_TR(0x507417);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507419:{NFSU2_TR(0x507419);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50741c:{NFSU2_TR(0x50741c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50741f:{NFSU2_TR(0x50741f);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507422:{NFSU2_TR(0x507422);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507424:{NFSU2_TR(0x507424);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507426:{NFSU2_TR(0x507426);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507429:{NFSU2_TR(0x507429);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50742b:{NFSU2_TR(0x50742b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50742d:{NFSU2_TR(0x50742d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507430:{NFSU2_TR(0x507430);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507433:{NFSU2_TR(0x507433);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507436:{NFSU2_TR(0x507436);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507439:{NFSU2_TR(0x507439);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50743c:{NFSU2_TR(0x50743c);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50743f:{NFSU2_TR(0x50743f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507442:{NFSU2_TR(0x507442);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507444:{NFSU2_TR(0x507444);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507446:{NFSU2_TR(0x507446);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507448:{NFSU2_TR(0x507448);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50744c:{NFSU2_TR(0x50744c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50744e:{NFSU2_TR(0x50744e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507452:{NFSU2_TR(0x507452);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507456:{NFSU2_TR(0x507456);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507459:{NFSU2_TR(0x507459);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50745d:{NFSU2_TR(0x50745d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50745f:{NFSU2_TR(0x50745f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507462:{NFSU2_TR(0x507462);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507464:{NFSU2_TR(0x507464);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507467:{NFSU2_TR(0x507467);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50746b:{NFSU2_TR(0x50746b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50746f:{NFSU2_TR(0x50746f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507472:{NFSU2_TR(0x507472);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507475:{NFSU2_TR(0x507475);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507478:{NFSU2_TR(0x507478);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50747b:{NFSU2_TR(0x50747b);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50747e:{NFSU2_TR(0x50747e);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507481:{NFSU2_TR(0x507481);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507485:{NFSU2_TR(0x507485);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507488:{NFSU2_TR(0x507488);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50748a:{NFSU2_TR(0x50748a);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50748e:{NFSU2_TR(0x50748e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507490:{NFSU2_TR(0x507490);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B507491:{NFSU2_TR(0x507491);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507493:{NFSU2_TR(0x507493);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B507496:{NFSU2_TR(0x507496);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B507499:{NFSU2_TR(0x507499);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50749e:{NFSU2_TR(0x50749e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5074a2:{NFSU2_TR(0x5074a2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5074a4:{NFSU2_TR(0x5074a4);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5074a8:{NFSU2_TR(0x5074a8);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5074ac:{NFSU2_TR(0x5074ac);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5074ae:{NFSU2_TR(0x5074ae);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5074b2:{NFSU2_TR(0x5074b2);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5074b6:{NFSU2_TR(0x5074b6);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5074ba:{NFSU2_TR(0x5074ba);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5074bd:{NFSU2_TR(0x5074bd);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5074c1:{NFSU2_TR(0x5074c1);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5074c4:{NFSU2_TR(0x5074c4);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5074c8:{NFSU2_TR(0x5074c8);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5074cb:{NFSU2_TR(0x5074cb);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5074cf:{NFSU2_TR(0x5074cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5074d3:{NFSU2_TR(0x5074d3);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5074d5:{NFSU2_TR(0x5074d5);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5074d7:{NFSU2_TR(0x5074d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5074da:{NFSU2_TR(0x5074da);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5074de:{NFSU2_TR(0x5074de);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5074e2:{NFSU2_TR(0x5074e2);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5074e5:{NFSU2_TR(0x5074e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5074e8:{NFSU2_TR(0x5074e8);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5074eb:L5074eb:{c.instructions+=23;NFSU2_TR(0x5074eb);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5074ee:{NFSU2_TR(0x5074ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5074f1:{NFSU2_TR(0x5074f1);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5074f4:{NFSU2_TR(0x5074f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5074f6:{NFSU2_TR(0x5074f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5074fa:{NFSU2_TR(0x5074fa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5074fc:{NFSU2_TR(0x5074fc);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5074ff:{NFSU2_TR(0x5074ff);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507502:{NFSU2_TR(0x507502);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507505:{NFSU2_TR(0x507505);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507508:{NFSU2_TR(0x507508);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50750b:{NFSU2_TR(0x50750b);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50750e:{NFSU2_TR(0x50750e);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507512:{NFSU2_TR(0x507512);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507515:{NFSU2_TR(0x507515);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507518:{NFSU2_TR(0x507518);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50751c:{NFSU2_TR(0x50751c);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50751f:{NFSU2_TR(0x50751f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507522:{NFSU2_TR(0x507522);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507524:{NFSU2_TR(0x507524);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507526:{NFSU2_TR(0x507526);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507529:{NFSU2_TR(0x507529);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50752c:{NFSU2_TR(0x50752c);
{goto L50765d;}
}
B507531:L507531:{c.instructions+=2;NFSU2_TR(0x507531);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B507533:{NFSU2_TR(0x507533);
if(r1(R+518)){{goto L50766b;}}
}
B507539:L507539:{c.instructions+=88;NFSU2_TR(0x507539);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50753c:{NFSU2_TR(0x50753c);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50753f:{NFSU2_TR(0x50753f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507542:{NFSU2_TR(0x507542);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507545:{NFSU2_TR(0x507545);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507548:{NFSU2_TR(0x507548);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50754a:{NFSU2_TR(0x50754a);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507551:{NFSU2_TR(0x507551);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507558:{NFSU2_TR(0x507558);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50755a:{NFSU2_TR(0x50755a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50755c:{NFSU2_TR(0x50755c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50755f:{NFSU2_TR(0x50755f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507563:{NFSU2_TR(0x507563);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507566:{NFSU2_TR(0x507566);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507569:{NFSU2_TR(0x507569);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50756c:{NFSU2_TR(0x50756c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50756e:{NFSU2_TR(0x50756e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507570:{NFSU2_TR(0x507570);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507572:{NFSU2_TR(0x507572);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507574:{NFSU2_TR(0x507574);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507576:{NFSU2_TR(0x507576);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507579:{NFSU2_TR(0x507579);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50757c:{NFSU2_TR(0x50757c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50757e:{NFSU2_TR(0x50757e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507581:{NFSU2_TR(0x507581);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507584:{NFSU2_TR(0x507584);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507587:{NFSU2_TR(0x507587);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507589:{NFSU2_TR(0x507589);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50758b:{NFSU2_TR(0x50758b);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50758e:{NFSU2_TR(0x50758e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507590:{NFSU2_TR(0x507590);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507592:{NFSU2_TR(0x507592);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507595:{NFSU2_TR(0x507595);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507598:{NFSU2_TR(0x507598);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50759b:{NFSU2_TR(0x50759b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50759e:{NFSU2_TR(0x50759e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075a1:{NFSU2_TR(0x5075a1);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5075a4:{NFSU2_TR(0x5075a4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075a7:{NFSU2_TR(0x5075a7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5075a9:{NFSU2_TR(0x5075a9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5075ab:{NFSU2_TR(0x5075ab);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5075ad:{NFSU2_TR(0x5075ad);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5075b1:{NFSU2_TR(0x5075b1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5075b3:{NFSU2_TR(0x5075b3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5075b7:{NFSU2_TR(0x5075b7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075bb:{NFSU2_TR(0x5075bb);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5075be:{NFSU2_TR(0x5075be);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075c2:{NFSU2_TR(0x5075c2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5075c4:{NFSU2_TR(0x5075c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5075c7:{NFSU2_TR(0x5075c7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5075c9:{NFSU2_TR(0x5075c9);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5075cc:{NFSU2_TR(0x5075cc);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5075d0:{NFSU2_TR(0x5075d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5075d4:{NFSU2_TR(0x5075d4);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075d7:{NFSU2_TR(0x5075d7);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5075da:{NFSU2_TR(0x5075da);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075dd:{NFSU2_TR(0x5075dd);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5075e0:{NFSU2_TR(0x5075e0);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075e3:{NFSU2_TR(0x5075e3);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5075e6:{NFSU2_TR(0x5075e6);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5075ed:{NFSU2_TR(0x5075ed);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075f0:{NFSU2_TR(0x5075f0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5075f2:{NFSU2_TR(0x5075f2);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5075f9:{NFSU2_TR(0x5075f9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5075fb:{NFSU2_TR(0x5075fb);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B507600:{NFSU2_TR(0x507600);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507602:{NFSU2_TR(0x507602);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507606:{NFSU2_TR(0x507606);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507608:{NFSU2_TR(0x507608);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50760c:{NFSU2_TR(0x50760c);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507613:{NFSU2_TR(0x507613);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507615:{NFSU2_TR(0x507615);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507619:{NFSU2_TR(0x507619);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507620:{NFSU2_TR(0x507620);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507624:{NFSU2_TR(0x507624);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507627:{NFSU2_TR(0x507627);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50762b:{NFSU2_TR(0x50762b);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50762e:{NFSU2_TR(0x50762e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507632:{NFSU2_TR(0x507632);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507635:{NFSU2_TR(0x507635);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50763c:{NFSU2_TR(0x50763c);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507643:{NFSU2_TR(0x507643);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B507645:{NFSU2_TR(0x507645);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507647:{NFSU2_TR(0x507647);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50764a:{NFSU2_TR(0x50764a);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507651:{NFSU2_TR(0x507651);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507658:{NFSU2_TR(0x507658);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50765a:{NFSU2_TR(0x50765a);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50765d:L50765d:{c.instructions+=5;NFSU2_TR(0x50765d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50765e:{NFSU2_TR(0x50765e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507661:{NFSU2_TR(0x507661);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B507664:{NFSU2_TR(0x507664);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507668:{NFSU2_TR(0x507668);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50766b:L50766b:{c.instructions+=6;NFSU2_TR(0x50766b);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50766e:{NFSU2_TR(0x50766e);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B507671:{NFSU2_TR(0x507671);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B507673:{NFSU2_TR(0x507673);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B507677:{NFSU2_TR(0x507677);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50767a:{NFSU2_TR(0x50767a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5077e7;}}
}
B507680:L507680:{c.instructions+=2;NFSU2_TR(0x507680);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B507682:{NFSU2_TR(0x507682);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5077a1;}}
}
B507688:L507688:{c.instructions+=91;NFSU2_TR(0x507688);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50768b:{NFSU2_TR(0x50768b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50768e:{NFSU2_TR(0x50768e);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507691:{NFSU2_TR(0x507691);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507694:{NFSU2_TR(0x507694);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507697:{NFSU2_TR(0x507697);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50769a:{NFSU2_TR(0x50769a);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076a1:{NFSU2_TR(0x5076a1);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5076a8:{NFSU2_TR(0x5076a8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5076aa:{NFSU2_TR(0x5076aa);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076ac:{NFSU2_TR(0x5076ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5076af:{NFSU2_TR(0x5076af);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5076b3:{NFSU2_TR(0x5076b3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076b6:{NFSU2_TR(0x5076b6);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5076b9:{NFSU2_TR(0x5076b9);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5076bc:{NFSU2_TR(0x5076bc);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5076be:{NFSU2_TR(0x5076be);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5076c0:{NFSU2_TR(0x5076c0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5076c2:{NFSU2_TR(0x5076c2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076c4:{NFSU2_TR(0x5076c4);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5076c6:{NFSU2_TR(0x5076c6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5076c9:{NFSU2_TR(0x5076c9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076cc:{NFSU2_TR(0x5076cc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5076ce:{NFSU2_TR(0x5076ce);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5076d1:{NFSU2_TR(0x5076d1);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076d4:{NFSU2_TR(0x5076d4);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5076d7:{NFSU2_TR(0x5076d7);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5076da:{NFSU2_TR(0x5076da);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5076dd:{NFSU2_TR(0x5076dd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5076df:{NFSU2_TR(0x5076df);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076e1:{NFSU2_TR(0x5076e1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5076e3:{NFSU2_TR(0x5076e3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5076e6:{NFSU2_TR(0x5076e6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076e9:{NFSU2_TR(0x5076e9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5076ec:{NFSU2_TR(0x5076ec);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076ef:{NFSU2_TR(0x5076ef);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5076f2:{NFSU2_TR(0x5076f2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5076f5:{NFSU2_TR(0x5076f5);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5076f8:{NFSU2_TR(0x5076f8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5076fb:{NFSU2_TR(0x5076fb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5076fd:{NFSU2_TR(0x5076fd);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5076ff:{NFSU2_TR(0x5076ff);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507703:{NFSU2_TR(0x507703);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507705:{NFSU2_TR(0x507705);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507709:{NFSU2_TR(0x507709);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50770d:{NFSU2_TR(0x50770d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507710:{NFSU2_TR(0x507710);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507714:{NFSU2_TR(0x507714);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507717:{NFSU2_TR(0x507717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50771a:{NFSU2_TR(0x50771a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50771c:{NFSU2_TR(0x50771c);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50771f:{NFSU2_TR(0x50771f);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507723:{NFSU2_TR(0x507723);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507726:{NFSU2_TR(0x507726);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507729:{NFSU2_TR(0x507729);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50772c:{NFSU2_TR(0x50772c);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50772f:{NFSU2_TR(0x50772f);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507732:{NFSU2_TR(0x507732);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507735:{NFSU2_TR(0x507735);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507739:{NFSU2_TR(0x507739);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50773c:{NFSU2_TR(0x50773c);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50773f:{NFSU2_TR(0x50773f);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507743:{NFSU2_TR(0x507743);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B507744:{NFSU2_TR(0x507744);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507746:{NFSU2_TR(0x507746);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B507749:{NFSU2_TR(0x507749);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50774b:{NFSU2_TR(0x50774b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50774e:{NFSU2_TR(0x50774e);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B507753:{NFSU2_TR(0x507753);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507757:{NFSU2_TR(0x507757);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507759:{NFSU2_TR(0x507759);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50775d:{NFSU2_TR(0x50775d);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507761:{NFSU2_TR(0x507761);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507763:{NFSU2_TR(0x507763);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507767:{NFSU2_TR(0x507767);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50776b:{NFSU2_TR(0x50776b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50776f:{NFSU2_TR(0x50776f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507772:{NFSU2_TR(0x507772);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507776:{NFSU2_TR(0x507776);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507779:{NFSU2_TR(0x507779);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50777d:{NFSU2_TR(0x50777d);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507780:{NFSU2_TR(0x507780);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507784:{NFSU2_TR(0x507784);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507788:{NFSU2_TR(0x507788);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50778a:{NFSU2_TR(0x50778a);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50778d:{NFSU2_TR(0x50778d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507790:{NFSU2_TR(0x507790);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507794:{NFSU2_TR(0x507794);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507798:{NFSU2_TR(0x507798);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50779b:{NFSU2_TR(0x50779b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50779e:{NFSU2_TR(0x50779e);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5077a1:L5077a1:{c.instructions+=23;NFSU2_TR(0x5077a1);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077a4:{NFSU2_TR(0x5077a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5077a7:{NFSU2_TR(0x5077a7);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077aa:{NFSU2_TR(0x5077aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5077ac:{NFSU2_TR(0x5077ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5077b0:{NFSU2_TR(0x5077b0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5077b2:{NFSU2_TR(0x5077b2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5077b5:{NFSU2_TR(0x5077b5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5077b8:{NFSU2_TR(0x5077b8);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077bb:{NFSU2_TR(0x5077bb);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077be:{NFSU2_TR(0x5077be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5077c1:{NFSU2_TR(0x5077c1);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5077c4:{NFSU2_TR(0x5077c4);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5077c8:{NFSU2_TR(0x5077c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5077cb:{NFSU2_TR(0x5077cb);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077ce:{NFSU2_TR(0x5077ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5077d2:{NFSU2_TR(0x5077d2);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077d5:{NFSU2_TR(0x5077d5);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077d8:{NFSU2_TR(0x5077d8);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5077da:{NFSU2_TR(0x5077da);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5077dc:{NFSU2_TR(0x5077dc);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5077df:{NFSU2_TR(0x5077df);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5077e2:{NFSU2_TR(0x5077e2);
{goto L507915;}
}
B5077e7:L5077e7:{c.instructions+=2;NFSU2_TR(0x5077e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5077e9:{NFSU2_TR(0x5077e9);
if(r1(R+518)){{goto L507923;}}
}
B5077ef:L5077ef:{c.instructions+=87;NFSU2_TR(0x5077ef);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077f2:{NFSU2_TR(0x5077f2);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5077f5:{NFSU2_TR(0x5077f5);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077f8:{NFSU2_TR(0x5077f8);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5077fb:{NFSU2_TR(0x5077fb);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077fe:{NFSU2_TR(0x5077fe);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507801:{NFSU2_TR(0x507801);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507808:{NFSU2_TR(0x507808);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50780f:{NFSU2_TR(0x50780f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507811:{NFSU2_TR(0x507811);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507813:{NFSU2_TR(0x507813);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507816:{NFSU2_TR(0x507816);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50781a:{NFSU2_TR(0x50781a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50781d:{NFSU2_TR(0x50781d);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507820:{NFSU2_TR(0x507820);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507823:{NFSU2_TR(0x507823);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B507825:{NFSU2_TR(0x507825);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507827:{NFSU2_TR(0x507827);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507829:{NFSU2_TR(0x507829);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50782b:{NFSU2_TR(0x50782b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50782d:{NFSU2_TR(0x50782d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507830:{NFSU2_TR(0x507830);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507833:{NFSU2_TR(0x507833);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507835:{NFSU2_TR(0x507835);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507838:{NFSU2_TR(0x507838);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50783b:{NFSU2_TR(0x50783b);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50783e:{NFSU2_TR(0x50783e);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507841:{NFSU2_TR(0x507841);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507844:{NFSU2_TR(0x507844);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507846:{NFSU2_TR(0x507846);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507848:{NFSU2_TR(0x507848);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50784a:{NFSU2_TR(0x50784a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50784d:{NFSU2_TR(0x50784d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507850:{NFSU2_TR(0x507850);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507853:{NFSU2_TR(0x507853);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507856:{NFSU2_TR(0x507856);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507859:{NFSU2_TR(0x507859);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50785c:{NFSU2_TR(0x50785c);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50785f:{NFSU2_TR(0x50785f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507862:{NFSU2_TR(0x507862);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507864:{NFSU2_TR(0x507864);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507866:{NFSU2_TR(0x507866);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50786a:{NFSU2_TR(0x50786a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50786c:{NFSU2_TR(0x50786c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507870:{NFSU2_TR(0x507870);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507874:{NFSU2_TR(0x507874);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507877:{NFSU2_TR(0x507877);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50787b:{NFSU2_TR(0x50787b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50787e:{NFSU2_TR(0x50787e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507881:{NFSU2_TR(0x507881);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507883:{NFSU2_TR(0x507883);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507886:{NFSU2_TR(0x507886);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50788a:{NFSU2_TR(0x50788a);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50788d:{NFSU2_TR(0x50788d);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507890:{NFSU2_TR(0x507890);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507893:{NFSU2_TR(0x507893);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507896:{NFSU2_TR(0x507896);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507899:{NFSU2_TR(0x507899);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50789c:{NFSU2_TR(0x50789c);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5078a3:{NFSU2_TR(0x5078a3);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5078a6:{NFSU2_TR(0x5078a6);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5078a9:{NFSU2_TR(0x5078a9);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5078b0:{NFSU2_TR(0x5078b0);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5078b5:{NFSU2_TR(0x5078b5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5078b7:{NFSU2_TR(0x5078b7);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5078b9:{NFSU2_TR(0x5078b9);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5078bd:{NFSU2_TR(0x5078bd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5078bf:{NFSU2_TR(0x5078bf);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5078c3:{NFSU2_TR(0x5078c3);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5078ca:{NFSU2_TR(0x5078ca);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5078cc:{NFSU2_TR(0x5078cc);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5078d0:{NFSU2_TR(0x5078d0);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5078d7:{NFSU2_TR(0x5078d7);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5078db:{NFSU2_TR(0x5078db);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5078de:{NFSU2_TR(0x5078de);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5078e2:{NFSU2_TR(0x5078e2);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5078e5:{NFSU2_TR(0x5078e5);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5078e9:{NFSU2_TR(0x5078e9);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5078ec:{NFSU2_TR(0x5078ec);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5078f3:{NFSU2_TR(0x5078f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5078fa:{NFSU2_TR(0x5078fa);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5078fc:{NFSU2_TR(0x5078fc);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5078ff:{NFSU2_TR(0x5078ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507902:{NFSU2_TR(0x507902);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507909:{NFSU2_TR(0x507909);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507910:{NFSU2_TR(0x507910);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507912:{NFSU2_TR(0x507912);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507915:L507915:{c.instructions+=5;NFSU2_TR(0x507915);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B507916:{NFSU2_TR(0x507916);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507919:{NFSU2_TR(0x507919);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50791c:{NFSU2_TR(0x50791c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507920:{NFSU2_TR(0x507920);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B507923:L507923:{c.instructions+=22;NFSU2_TR(0x507923);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507927:{NFSU2_TR(0x507927);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50792e:{NFSU2_TR(0x50792e);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507935:{NFSU2_TR(0x507935);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507939:{NFSU2_TR(0x507939);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B50793b:{NFSU2_TR(0x50793b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50793f:{NFSU2_TR(0x50793f);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507946:{NFSU2_TR(0x507946);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B507948:{NFSU2_TR(0x507948);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50794c:{NFSU2_TR(0x50794c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507950:{NFSU2_TR(0x507950);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B507953:{NFSU2_TR(0x507953);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B507956:{NFSU2_TR(0x507956);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50795a:{NFSU2_TR(0x50795a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50795e:{NFSU2_TR(0x50795e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507962:{NFSU2_TR(0x507962);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507965:{NFSU2_TR(0x507965);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B507968:{NFSU2_TR(0x507968);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B50796b:{NFSU2_TR(0x50796b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B50796e:{NFSU2_TR(0x50796e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B507970:{NFSU2_TR(0x507970);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507974:{NFSU2_TR(0x507974);
if(r1(R+512)){TAIL_STATIC(0x506dbbu,506);}
}
B50797a:L50797a:{c.instructions+=7;NFSU2_TR(0x50797a);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507981:{NFSU2_TR(0x507981);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507984:{NFSU2_TR(0x507984);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507987:{NFSU2_TR(0x507987);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50798a:{NFSU2_TR(0x50798a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50798e:{NFSU2_TR(0x50798e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B507991:{NFSU2_TR(0x507991);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L507d71;}}
}
B507997:L507997:{c.instructions+=25;NFSU2_TR(0x507997);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B50799e:{NFSU2_TR(0x50799e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5079a2:{NFSU2_TR(0x5079a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5079a6:{NFSU2_TR(0x5079a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5079a9:{NFSU2_TR(0x5079a9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5079ab:{NFSU2_TR(0x5079ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5079af:{NFSU2_TR(0x5079af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5079b2:{NFSU2_TR(0x5079b2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5079b4:{NFSU2_TR(0x5079b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5079b8:{NFSU2_TR(0x5079b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5079bb:{NFSU2_TR(0x5079bb);
__builtin_memmove((R+8),(R+28),4);
}
B5079bd:{NFSU2_TR(0x5079bd);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5079c1:{NFSU2_TR(0x5079c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5079c5:{NFSU2_TR(0x5079c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5079c8:{NFSU2_TR(0x5079c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5079cc:{NFSU2_TR(0x5079cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5079d0:{NFSU2_TR(0x5079d0);
__builtin_memmove((R+0),(R+12),4);
}
B5079d2:{NFSU2_TR(0x5079d2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B5079d4:{NFSU2_TR(0x5079d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5079d8:{NFSU2_TR(0x5079d8);
w4(R+0,u32(0xfffffff8ull));
}
B5079dd:{NFSU2_TR(0x5079dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5079e0:{NFSU2_TR(0x5079e0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B5079e2:{NFSU2_TR(0x5079e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5079e6:{NFSU2_TR(0x5079e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5079ed:{NFSU2_TR(0x5079ed);
__builtin_memmove((R+4),(R+4),4);
}
B5079f0:L5079f0:{c.instructions+=7;NFSU2_TR(0x5079f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5079f4:{NFSU2_TR(0x5079f4);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5079f7:{NFSU2_TR(0x5079f7);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5079fa:{NFSU2_TR(0x5079fa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5079fc:{NFSU2_TR(0x5079fc);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B507a00:{NFSU2_TR(0x507a00);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B507a03:{NFSU2_TR(0x507a03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L507bc4;}}
}
B507a09:L507a09:{c.instructions+=2;NFSU2_TR(0x507a09);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B507a0b:{NFSU2_TR(0x507a0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L507b65;}}
}
B507a11:L507a11:{c.instructions+=105;NFSU2_TR(0x507a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507a14:{NFSU2_TR(0x507a14);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507a18:{NFSU2_TR(0x507a18);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a1b:{NFSU2_TR(0x507a1b);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507a1e:{NFSU2_TR(0x507a1e);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a21:{NFSU2_TR(0x507a21);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507a25:{NFSU2_TR(0x507a25);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a29:{NFSU2_TR(0x507a29);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B507a2b:{NFSU2_TR(0x507a2b);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a32:{NFSU2_TR(0x507a32);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507a39:{NFSU2_TR(0x507a39);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507a3b:{NFSU2_TR(0x507a3b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a3d:{NFSU2_TR(0x507a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507a40:{NFSU2_TR(0x507a40);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507a44:{NFSU2_TR(0x507a44);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a47:{NFSU2_TR(0x507a47);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a4a:{NFSU2_TR(0x507a4a);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507a4d:{NFSU2_TR(0x507a4d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B507a4f:{NFSU2_TR(0x507a4f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507a51:{NFSU2_TR(0x507a51);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507a53:{NFSU2_TR(0x507a53);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a55:{NFSU2_TR(0x507a55);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507a57:{NFSU2_TR(0x507a57);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507a5a:{NFSU2_TR(0x507a5a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a5d:{NFSU2_TR(0x507a5d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507a5f:{NFSU2_TR(0x507a5f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507a62:{NFSU2_TR(0x507a62);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a65:{NFSU2_TR(0x507a65);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a69:{NFSU2_TR(0x507a69);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a6d:{NFSU2_TR(0x507a6d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a6f:{NFSU2_TR(0x507a6f);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507a72:{NFSU2_TR(0x507a72);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507a76:{NFSU2_TR(0x507a76);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a78:{NFSU2_TR(0x507a78);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507a7a:{NFSU2_TR(0x507a7a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507a7d:{NFSU2_TR(0x507a7d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a80:{NFSU2_TR(0x507a80);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507a83:{NFSU2_TR(0x507a83);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a86:{NFSU2_TR(0x507a86);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a89:{NFSU2_TR(0x507a89);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507a8c:{NFSU2_TR(0x507a8c);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a90:{NFSU2_TR(0x507a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507a93:{NFSU2_TR(0x507a93);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507a97:{NFSU2_TR(0x507a97);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507a99:{NFSU2_TR(0x507a99);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507a9b:{NFSU2_TR(0x507a9b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a9f:{NFSU2_TR(0x507a9f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507aa1:{NFSU2_TR(0x507aa1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507aa5:{NFSU2_TR(0x507aa5);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507aa9:{NFSU2_TR(0x507aa9);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507aac:{NFSU2_TR(0x507aac);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507ab0:{NFSU2_TR(0x507ab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507ab4:{NFSU2_TR(0x507ab4);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507ab8:{NFSU2_TR(0x507ab8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507aba:{NFSU2_TR(0x507aba);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507abd:{NFSU2_TR(0x507abd);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507ac1:{NFSU2_TR(0x507ac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507ac5:{NFSU2_TR(0x507ac5);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507ac8:{NFSU2_TR(0x507ac8);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507acb:{NFSU2_TR(0x507acb);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507ace:{NFSU2_TR(0x507ace);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507ad2:{NFSU2_TR(0x507ad2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507ad6:{NFSU2_TR(0x507ad6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507ada:{NFSU2_TR(0x507ada);
{u32 ea_=u32(r4(R+28)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507add:{NFSU2_TR(0x507add);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507ae1:{NFSU2_TR(0x507ae1);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507ae5:{NFSU2_TR(0x507ae5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B507ae8:{NFSU2_TR(0x507ae8);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507aec:{NFSU2_TR(0x507aec);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507af0:{NFSU2_TR(0x507af0);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B507af5:{NFSU2_TR(0x507af5);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B507af7:{NFSU2_TR(0x507af7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507afb:{NFSU2_TR(0x507afb);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507aff:{NFSU2_TR(0x507aff);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507b01:{NFSU2_TR(0x507b01);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507b03:{NFSU2_TR(0x507b03);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b07:{NFSU2_TR(0x507b07);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507b09:{NFSU2_TR(0x507b09);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b0d:{NFSU2_TR(0x507b0d);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b11:{NFSU2_TR(0x507b11);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507b13:{NFSU2_TR(0x507b13);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b17:{NFSU2_TR(0x507b17);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507b1b:{NFSU2_TR(0x507b1b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b1f:{NFSU2_TR(0x507b1f);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507b22:{NFSU2_TR(0x507b22);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b26:{NFSU2_TR(0x507b26);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507b2a:{NFSU2_TR(0x507b2a);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b2e:{NFSU2_TR(0x507b2e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507b32:{NFSU2_TR(0x507b32);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b36:{NFSU2_TR(0x507b36);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b3a:{NFSU2_TR(0x507b3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507b3e:{NFSU2_TR(0x507b3e);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B507b40:{NFSU2_TR(0x507b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507b43:{NFSU2_TR(0x507b43);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b47:{NFSU2_TR(0x507b47);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507b4b:{NFSU2_TR(0x507b4b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507b4d:{NFSU2_TR(0x507b4d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b4f:{NFSU2_TR(0x507b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507b52:{NFSU2_TR(0x507b52);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507b56:{NFSU2_TR(0x507b56);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b59:{NFSU2_TR(0x507b59);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B507b5a:{NFSU2_TR(0x507b5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507b5e:{NFSU2_TR(0x507b5e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B507b60:{NFSU2_TR(0x507b60);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B507b63:{NFSU2_TR(0x507b63);
{goto L507b69;}
}
B507b65:L507b65:{c.instructions+=1;NFSU2_TR(0x507b65);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507b69:L507b69:{c.instructions+=29;NFSU2_TR(0x507b69);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b6c:{NFSU2_TR(0x507b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507b6f:{NFSU2_TR(0x507b6f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b71:{NFSU2_TR(0x507b71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507b74:{NFSU2_TR(0x507b74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B507b76:{NFSU2_TR(0x507b76);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507b78:{NFSU2_TR(0x507b78);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507b7c:{NFSU2_TR(0x507b7c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b7f:{NFSU2_TR(0x507b7f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b82:{NFSU2_TR(0x507b82);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b86:{NFSU2_TR(0x507b86);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b89:{NFSU2_TR(0x507b89);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507b8d:{NFSU2_TR(0x507b8d);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b90:{NFSU2_TR(0x507b90);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b94:{NFSU2_TR(0x507b94);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507b98:{NFSU2_TR(0x507b98);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b9b:{NFSU2_TR(0x507b9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507b9f:{NFSU2_TR(0x507b9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507ba3:{NFSU2_TR(0x507ba3);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507ba6:{NFSU2_TR(0x507ba6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507baa:{NFSU2_TR(0x507baa);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507bad:{NFSU2_TR(0x507bad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B507baf:{NFSU2_TR(0x507baf);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507bb1:{NFSU2_TR(0x507bb1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507bb3:{NFSU2_TR(0x507bb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507bb7:{NFSU2_TR(0x507bb7);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507bba:{NFSU2_TR(0x507bba);
__builtin_memmove((R+0),(R+8),4);
}
B507bbc:{NFSU2_TR(0x507bbc);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507bbf:{NFSU2_TR(0x507bbf);
{goto L507d24;}
}
B507bc4:L507bc4:{c.instructions+=2;NFSU2_TR(0x507bc4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B507bc6:{NFSU2_TR(0x507bc6);
if(r1(R+518)){{goto L507d3a;}}
}
B507bcc:L507bcc:{c.instructions+=98;NFSU2_TR(0x507bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507bcf:{NFSU2_TR(0x507bcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507bd3:{NFSU2_TR(0x507bd3);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507bd6:{NFSU2_TR(0x507bd6);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507bd9:{NFSU2_TR(0x507bd9);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507bdc:{NFSU2_TR(0x507bdc);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507be0:{NFSU2_TR(0x507be0);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507be4:{NFSU2_TR(0x507be4);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B507be6:{NFSU2_TR(0x507be6);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507bed:{NFSU2_TR(0x507bed);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507bf4:{NFSU2_TR(0x507bf4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507bf6:{NFSU2_TR(0x507bf6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507bf8:{NFSU2_TR(0x507bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507bfb:{NFSU2_TR(0x507bfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507bff:{NFSU2_TR(0x507bff);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c02:{NFSU2_TR(0x507c02);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c05:{NFSU2_TR(0x507c05);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507c08:{NFSU2_TR(0x507c08);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B507c0a:{NFSU2_TR(0x507c0a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507c0c:{NFSU2_TR(0x507c0c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507c0e:{NFSU2_TR(0x507c0e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c10:{NFSU2_TR(0x507c10);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507c12:{NFSU2_TR(0x507c12);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507c15:{NFSU2_TR(0x507c15);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c18:{NFSU2_TR(0x507c18);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507c1a:{NFSU2_TR(0x507c1a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507c1d:{NFSU2_TR(0x507c1d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c20:{NFSU2_TR(0x507c20);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c24:{NFSU2_TR(0x507c24);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c28:{NFSU2_TR(0x507c28);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c2b:{NFSU2_TR(0x507c2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507c2f:{NFSU2_TR(0x507c2f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507c31:{NFSU2_TR(0x507c31);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c33:{NFSU2_TR(0x507c33);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507c35:{NFSU2_TR(0x507c35);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507c38:{NFSU2_TR(0x507c38);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c3b:{NFSU2_TR(0x507c3b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507c3e:{NFSU2_TR(0x507c3e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c41:{NFSU2_TR(0x507c41);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c44:{NFSU2_TR(0x507c44);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507c47:{NFSU2_TR(0x507c47);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c4b:{NFSU2_TR(0x507c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507c4e:{NFSU2_TR(0x507c4e);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507c52:{NFSU2_TR(0x507c52);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507c54:{NFSU2_TR(0x507c54);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507c56:{NFSU2_TR(0x507c56);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c5a:{NFSU2_TR(0x507c5a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507c5c:{NFSU2_TR(0x507c5c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c60:{NFSU2_TR(0x507c60);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c64:{NFSU2_TR(0x507c64);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507c67:{NFSU2_TR(0x507c67);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c6b:{NFSU2_TR(0x507c6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507c6f:{NFSU2_TR(0x507c6f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507c73:{NFSU2_TR(0x507c73);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507c75:{NFSU2_TR(0x507c75);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c78:{NFSU2_TR(0x507c78);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c7c:{NFSU2_TR(0x507c7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507c80:{NFSU2_TR(0x507c80);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c83:{NFSU2_TR(0x507c83);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507c86:{NFSU2_TR(0x507c86);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c89:{NFSU2_TR(0x507c89);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507c8d:{NFSU2_TR(0x507c8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507c91:{NFSU2_TR(0x507c91);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507c95:{NFSU2_TR(0x507c95);
{u32 ea_=u32(r4(R+0)+r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c98:{NFSU2_TR(0x507c98);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507c9c:{NFSU2_TR(0x507c9c);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507ca0:{NFSU2_TR(0x507ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507ca4:{NFSU2_TR(0x507ca4);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507cab:{NFSU2_TR(0x507cab);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507caf:{NFSU2_TR(0x507caf);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B507cb4:{NFSU2_TR(0x507cb4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B507cb6:{NFSU2_TR(0x507cb6);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507cbd:{NFSU2_TR(0x507cbd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507cbf:{NFSU2_TR(0x507cbf);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507cc1:{NFSU2_TR(0x507cc1);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507cc5:{NFSU2_TR(0x507cc5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507cc7:{NFSU2_TR(0x507cc7);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507ccb:{NFSU2_TR(0x507ccb);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507cd2:{NFSU2_TR(0x507cd2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507cd4:{NFSU2_TR(0x507cd4);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507cd8:{NFSU2_TR(0x507cd8);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507cdf:{NFSU2_TR(0x507cdf);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507ce3:{NFSU2_TR(0x507ce3);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507ce6:{NFSU2_TR(0x507ce6);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507cea:{NFSU2_TR(0x507cea);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507cee:{NFSU2_TR(0x507cee);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507cf2:{NFSU2_TR(0x507cf2);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507cf6:{NFSU2_TR(0x507cf6);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507cfd:{NFSU2_TR(0x507cfd);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507d01:{NFSU2_TR(0x507d01);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507d08:{NFSU2_TR(0x507d08);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B507d0a:{NFSU2_TR(0x507d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507d0d:{NFSU2_TR(0x507d0d);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507d14:{NFSU2_TR(0x507d14);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507d1b:{NFSU2_TR(0x507d1b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507d1d:{NFSU2_TR(0x507d1d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507d1f:{NFSU2_TR(0x507d1f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507d22:{NFSU2_TR(0x507d22);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B507d24:L507d24:{c.instructions+=7;NFSU2_TR(0x507d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507d27:{NFSU2_TR(0x507d27);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507d2b:{NFSU2_TR(0x507d2b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B507d2e:{NFSU2_TR(0x507d2e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B507d2f:{NFSU2_TR(0x507d2f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B507d32:{NFSU2_TR(0x507d32);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507d36:{NFSU2_TR(0x507d36);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507d3a:L507d3a:{c.instructions+=12;NFSU2_TR(0x507d3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507d3e:{NFSU2_TR(0x507d3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B507d45:{NFSU2_TR(0x507d45);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507d4c:{NFSU2_TR(0x507d4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507d50:{NFSU2_TR(0x507d50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507d54:{NFSU2_TR(0x507d54);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B507d56:{NFSU2_TR(0x507d56);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B507d5a:{NFSU2_TR(0x507d5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B507d5f:{NFSU2_TR(0x507d5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B507d64:{NFSU2_TR(0x507d64);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507d68:{NFSU2_TR(0x507d68);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
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
B507d6b:{NFSU2_TR(0x507d6b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5079f0u);}goto L5079f0;}}
}
B507d71:L507d71:{c.instructions+=7;NFSU2_TR(0x507d71);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507d75:{NFSU2_TR(0x507d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B507d76:{NFSU2_TR(0x507d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B507d77:{NFSU2_TR(0x507d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B507d78:{NFSU2_TR(0x507d78);
__builtin_memmove((R+16),(R+20),4);
}
B507d7a:{NFSU2_TR(0x507d7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B507d7b:{NFSU2_TR(0x507d7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B507d80:L507d80:{c.instructions+=20;NFSU2_TR(0x507d80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B507d81:{NFSU2_TR(0x507d81);
__builtin_memmove((R+20),(R+16),4);
}
B507d83:{NFSU2_TR(0x507d83);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B507d86:{NFSU2_TR(0x507d86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd4ull))));
}
B507d8c:{NFSU2_TR(0x507d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507d8f:{NFSU2_TR(0x507d8f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B507d90:{NFSU2_TR(0x507d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507d93:{NFSU2_TR(0x507d93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B507d94:{NFSU2_TR(0x507d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B507d97:{NFSU2_TR(0x507d97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B507d98:{NFSU2_TR(0x507d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507d9b:{NFSU2_TR(0x507d9b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B507d9c:{NFSU2_TR(0x507d9c);
__builtin_memmove((R+4),(R+28),4);
}
B507d9e:{NFSU2_TR(0x507d9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B507da1:{NFSU2_TR(0x507da1);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507da5:{NFSU2_TR(0x507da5);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B507da8:{NFSU2_TR(0x507da8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B507daa:{NFSU2_TR(0x507daa);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B507dad:{NFSU2_TR(0x507dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507db0:{NFSU2_TR(0x507db0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L507e0f;}}
}
B507db2:L507db2:{c.instructions+=28;NFSU2_TR(0x507db2);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507db6:{NFSU2_TR(0x507db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507db9:{NFSU2_TR(0x507db9);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507dbd:{NFSU2_TR(0x507dbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B507dc0:{NFSU2_TR(0x507dc0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B507dc2:{NFSU2_TR(0x507dc2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507dc4:{NFSU2_TR(0x507dc4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507dc7:{NFSU2_TR(0x507dc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B507dcf:{NFSU2_TR(0x507dcf);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B507dd4:{NFSU2_TR(0x507dd4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507dd7:{NFSU2_TR(0x507dd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B507dda:{NFSU2_TR(0x507dda);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507dde:{NFSU2_TR(0x507dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507de1:{NFSU2_TR(0x507de1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507de4:{NFSU2_TR(0x507de4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B507de6:{NFSU2_TR(0x507de6);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507dea:{NFSU2_TR(0x507dea);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B507ded:{NFSU2_TR(0x507ded);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507df1:{NFSU2_TR(0x507df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507df4:{NFSU2_TR(0x507df4);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507df8:{NFSU2_TR(0x507df8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B507dfa:{NFSU2_TR(0x507dfa);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507dfe:{NFSU2_TR(0x507dfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507e02:{NFSU2_TR(0x507e02);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507e04:{NFSU2_TR(0x507e04);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507e07:{NFSU2_TR(0x507e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507e0a:{NFSU2_TR(0x507e0a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507e0d:{NFSU2_TR(0x507e0d);
{goto L507e1c;}
}
B507e0f:L507e0f:{c.instructions+=2;NFSU2_TR(0x507e0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B507e17:{NFSU2_TR(0x507e17);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B507e1c:L507e1c:{c.instructions+=3;NFSU2_TR(0x507e1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B507e20:{NFSU2_TR(0x507e20);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B507e28:{NFSU2_TR(0x507e28);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x508a66u,508);}
}
B507e2e:L507e2e:{c.instructions+=30;NFSU2_TR(0x507e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507e31:{NFSU2_TR(0x507e31);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507e35:{NFSU2_TR(0x507e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B507e3c:{NFSU2_TR(0x507e3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507e40:{NFSU2_TR(0x507e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B507e44:{NFSU2_TR(0x507e44);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B507e47:{NFSU2_TR(0x507e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B507e4a:{NFSU2_TR(0x507e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507e4d:{NFSU2_TR(0x507e4d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B507e4f:{NFSU2_TR(0x507e4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B507e52:{NFSU2_TR(0x507e52);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B507e54:{NFSU2_TR(0x507e54);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507e58:{NFSU2_TR(0x507e58);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B507e5b:{NFSU2_TR(0x507e5b);
w4(R+12,u32(0x18ull));
}
B507e60:{NFSU2_TR(0x507e60);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B507e62:{NFSU2_TR(0x507e62);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507e66:{NFSU2_TR(0x507e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B507e69:{NFSU2_TR(0x507e69);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507e70:{NFSU2_TR(0x507e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507e73:{NFSU2_TR(0x507e73);
w4(R+0,u32(0xcull));
}
B507e78:{NFSU2_TR(0x507e78);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B507e7b:{NFSU2_TR(0x507e7b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B507e7d:{NFSU2_TR(0x507e7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B507e85:{NFSU2_TR(0x507e85);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507e8c:{NFSU2_TR(0x507e8c);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507e8f:{NFSU2_TR(0x507e8f);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B507e92:{NFSU2_TR(0x507e92);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B507e94:{NFSU2_TR(0x507e94);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B507e98:{NFSU2_TR(0x507e98);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B507e9b:{NFSU2_TR(0x507e9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x508057u,508);}
}
B507ea1:L507ea1:{c.instructions+=2;NFSU2_TR(0x507ea1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B507ea3:{NFSU2_TR(0x507ea3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L507ffc;}}
}
B507ea9:L507ea9:{c.instructions+=105;NFSU2_TR(0x507ea9);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507eac:{NFSU2_TR(0x507eac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507eb0:{NFSU2_TR(0x507eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507eb3:{NFSU2_TR(0x507eb3);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507eb6:{NFSU2_TR(0x507eb6);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507eba:{NFSU2_TR(0x507eba);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B507ebd:{NFSU2_TR(0x507ebd);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507ec0:{NFSU2_TR(0x507ec0);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507ec4:{NFSU2_TR(0x507ec4);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507ecb:{NFSU2_TR(0x507ecb);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507ed2:{NFSU2_TR(0x507ed2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507ed4:{NFSU2_TR(0x507ed4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507ed6:{NFSU2_TR(0x507ed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507ed9:{NFSU2_TR(0x507ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507edc:{NFSU2_TR(0x507edc);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507edf:{NFSU2_TR(0x507edf);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507ee2:{NFSU2_TR(0x507ee2);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507ee6:{NFSU2_TR(0x507ee6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B507ee9:{NFSU2_TR(0x507ee9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507eeb:{NFSU2_TR(0x507eeb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507eed:{NFSU2_TR(0x507eed);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507eef:{NFSU2_TR(0x507eef);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507ef1:{NFSU2_TR(0x507ef1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507ef4:{NFSU2_TR(0x507ef4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507ef7:{NFSU2_TR(0x507ef7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507ef9:{NFSU2_TR(0x507ef9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507efc:{NFSU2_TR(0x507efc);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507eff:{NFSU2_TR(0x507eff);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f03:{NFSU2_TR(0x507f03);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f07:{NFSU2_TR(0x507f07);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f09:{NFSU2_TR(0x507f09);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507f0c:{NFSU2_TR(0x507f0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507f10:{NFSU2_TR(0x507f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507f13:{NFSU2_TR(0x507f13);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f15:{NFSU2_TR(0x507f15);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507f17:{NFSU2_TR(0x507f17);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507f1a:{NFSU2_TR(0x507f1a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f1d:{NFSU2_TR(0x507f1d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507f20:{NFSU2_TR(0x507f20);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f23:{NFSU2_TR(0x507f23);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f26:{NFSU2_TR(0x507f26);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507f2a:{NFSU2_TR(0x507f2a);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507f2d:{NFSU2_TR(0x507f2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507f31:{NFSU2_TR(0x507f31);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f34:{NFSU2_TR(0x507f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507f37:{NFSU2_TR(0x507f37);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507f3b:{NFSU2_TR(0x507f3b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507f3d:{NFSU2_TR(0x507f3d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507f3f:{NFSU2_TR(0x507f3f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f43:{NFSU2_TR(0x507f43);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507f45:{NFSU2_TR(0x507f45);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f49:{NFSU2_TR(0x507f49);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f4d:{NFSU2_TR(0x507f4d);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507f50:{NFSU2_TR(0x507f50);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f54:{NFSU2_TR(0x507f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507f57:{NFSU2_TR(0x507f57);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507f5b:{NFSU2_TR(0x507f5b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507f5f:{NFSU2_TR(0x507f5f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507f61:{NFSU2_TR(0x507f61);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f64:{NFSU2_TR(0x507f64);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f68:{NFSU2_TR(0x507f68);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507f6c:{NFSU2_TR(0x507f6c);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f6f:{NFSU2_TR(0x507f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507f72:{NFSU2_TR(0x507f72);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507f75:{NFSU2_TR(0x507f75);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f78:{NFSU2_TR(0x507f78);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B507f7b:{NFSU2_TR(0x507f7b);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507f7f:{NFSU2_TR(0x507f7f);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f82:{NFSU2_TR(0x507f82);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507f86:{NFSU2_TR(0x507f86);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f8a:{NFSU2_TR(0x507f8a);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f8d:{NFSU2_TR(0x507f8d);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507f91:{NFSU2_TR(0x507f91);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B507f96:{NFSU2_TR(0x507f96);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f9a:{NFSU2_TR(0x507f9a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507f9c:{NFSU2_TR(0x507f9c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507f9e:{NFSU2_TR(0x507f9e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507fa2:{NFSU2_TR(0x507fa2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507fa4:{NFSU2_TR(0x507fa4);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507fa8:{NFSU2_TR(0x507fa8);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507fac:{NFSU2_TR(0x507fac);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507fae:{NFSU2_TR(0x507fae);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507fb2:{NFSU2_TR(0x507fb2);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507fb6:{NFSU2_TR(0x507fb6);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507fba:{NFSU2_TR(0x507fba);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507fbd:{NFSU2_TR(0x507fbd);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507fc1:{NFSU2_TR(0x507fc1);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507fc5:{NFSU2_TR(0x507fc5);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507fc9:{NFSU2_TR(0x507fc9);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507fcd:{NFSU2_TR(0x507fcd);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507fd1:{NFSU2_TR(0x507fd1);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507fd5:{NFSU2_TR(0x507fd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507fd9:{NFSU2_TR(0x507fd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507fdd:{NFSU2_TR(0x507fdd);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B507fdf:{NFSU2_TR(0x507fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507fe2:{NFSU2_TR(0x507fe2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B507fe3:{NFSU2_TR(0x507fe3);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507fe7:{NFSU2_TR(0x507fe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B507feb:{NFSU2_TR(0x507feb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507fed:{NFSU2_TR(0x507fed);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507fef:{NFSU2_TR(0x507fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507ff2:{NFSU2_TR(0x507ff2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B507ff5:{NFSU2_TR(0x507ff5);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507ff8:{NFSU2_TR(0x507ff8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B507ffa:{NFSU2_TR(0x507ffa);
TAIL_STATIC(0x508000u,508);
}
B507ffc:L507ffc:{c.instructions+=1;NFSU2_TR(0x507ffc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
TAIL_STATIC(0x508000u,508);
}
XIT:NFSU2_TR_EXIT(0x507,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
