#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_768(u8* __restrict R,Cpu& c);
u32 body_76c(u8* __restrict R,Cpu& c);
u32 body_76d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x767,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x767,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_767(u8* __restrict R,Cpu& c);
u32 page_767(Cpu& c){return body_767(c.regs.data(),c);}
__attribute__((noinline)) u32 body_767(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x767003:goto L767003;
case 0x767005:c.instructions+=1;goto B767005;
case 0x767007:goto L767007;
case 0x76700a:c.instructions+=2;goto B76700a;
case 0x76700e:c.instructions+=1;goto B76700e;
case 0x767015:goto L767015;
case 0x767018:c.instructions+=1;goto B767018;
case 0x76701a:goto L76701a;
case 0x76701d:c.instructions+=2;goto B76701d;
case 0x767021:c.instructions+=1;goto B767021;
case 0x767028:goto L767028;
case 0x76702b:c.instructions+=1;goto B76702b;
case 0x76702d:goto L76702d;
case 0x767030:c.instructions+=2;goto B767030;
case 0x767034:c.instructions+=1;goto B767034;
case 0x76703b:goto L76703b;
case 0x76703e:c.instructions+=38;goto B76703e;
case 0x767040:c.instructions+=37;goto B767040;
case 0x767043:c.instructions+=36;goto B767043;
case 0x767046:c.instructions+=35;goto B767046;
case 0x767048:c.instructions+=34;goto B767048;
case 0x76704b:c.instructions+=33;goto B76704b;
case 0x76704d:c.instructions+=32;goto B76704d;
case 0x767050:c.instructions+=31;goto B767050;
case 0x767053:c.instructions+=30;goto B767053;
case 0x767055:c.instructions+=29;goto B767055;
case 0x767058:c.instructions+=28;goto B767058;
case 0x76705a:c.instructions+=27;goto B76705a;
case 0x76705c:c.instructions+=26;goto B76705c;
case 0x76705f:c.instructions+=25;goto B76705f;
case 0x767060:c.instructions+=24;goto B767060;
case 0x767063:c.instructions+=23;goto B767063;
case 0x767066:c.instructions+=22;goto B767066;
case 0x767068:c.instructions+=21;goto B767068;
case 0x76706b:c.instructions+=20;goto B76706b;
case 0x76706d:c.instructions+=19;goto B76706d;
case 0x76706f:c.instructions+=18;goto B76706f;
case 0x767072:c.instructions+=17;goto B767072;
case 0x767075:c.instructions+=16;goto B767075;
case 0x767078:c.instructions+=15;goto B767078;
case 0x76707a:c.instructions+=14;goto B76707a;
case 0x76707d:c.instructions+=13;goto B76707d;
case 0x767080:c.instructions+=12;goto B767080;
case 0x767082:c.instructions+=11;goto B767082;
case 0x767085:c.instructions+=10;goto B767085;
case 0x767087:c.instructions+=9;goto B767087;
case 0x76708a:c.instructions+=8;goto B76708a;
case 0x76708c:c.instructions+=7;goto B76708c;
case 0x76708f:c.instructions+=6;goto B76708f;
case 0x767092:c.instructions+=5;goto B767092;
case 0x767094:c.instructions+=4;goto B767094;
case 0x767097:c.instructions+=3;goto B767097;
case 0x767099:c.instructions+=2;goto B767099;
case 0x76709c:c.instructions+=1;goto B76709c;
case 0x7670a1:goto L7670a1;
case 0x7670a3:c.instructions+=1;goto B7670a3;
case 0x7670a5:goto L7670a5;
case 0x7670a8:c.instructions+=1;goto B7670a8;
case 0x7670ac:goto L7670ac;
case 0x7670ae:c.instructions+=1;goto B7670ae;
case 0x7670b0:goto L7670b0;
case 0x7670b3:c.instructions+=1;goto B7670b3;
case 0x7670b7:goto L7670b7;
case 0x7670b9:c.instructions+=1;goto B7670b9;
case 0x7670bb:goto L7670bb;
case 0x7670be:c.instructions+=1;goto B7670be;
case 0x7670c2:goto L7670c2;
case 0x7670c4:c.instructions+=1;goto B7670c4;
case 0x7670c6:goto L7670c6;
case 0x7670c9:c.instructions+=1;goto B7670c9;
case 0x7670cc:goto L7670cc;
case 0x7670ce:c.instructions+=1;goto B7670ce;
case 0x7670d0:goto L7670d0;
case 0x7670d3:c.instructions+=1;goto B7670d3;
case 0x7670d6:goto L7670d6;
case 0x7670d8:c.instructions+=3;goto B7670d8;
case 0x7670dd:c.instructions+=2;goto B7670dd;
case 0x7670df:c.instructions+=1;goto B7670df;
case 0x7670e1:goto L7670e1;
case 0x7670e6:c.instructions+=1;goto B7670e6;
case 0x7670e8:goto L7670e8;
case 0x7670ed:c.instructions+=1;goto B7670ed;
case 0x7670ef:goto L7670ef;
case 0x7670f1:c.instructions+=1;goto B7670f1;
case 0x7670f3:goto L7670f3;
case 0x7670f6:c.instructions+=2;goto B7670f6;
case 0x7670f9:c.instructions+=1;goto B7670f9;
case 0x7670fb:goto L7670fb;
case 0x7670fe:c.instructions+=4;goto B7670fe;
case 0x767100:c.instructions+=3;goto B767100;
case 0x767103:c.instructions+=2;goto B767103;
case 0x767105:c.instructions+=1;goto B767105;
case 0x767107:goto L767107;
case 0x76710a:c.instructions+=3;goto B76710a;
case 0x76710c:c.instructions+=2;goto B76710c;
case 0x76710f:c.instructions+=1;goto B76710f;
case 0x767111:goto L767111;
case 0x767113:c.instructions+=1;goto B767113;
case 0x767115:goto L767115;
case 0x767118:c.instructions+=1;goto B767118;
case 0x76711b:goto L76711b;
case 0x76711d:c.instructions+=3;goto B76711d;
case 0x767122:c.instructions+=2;goto B767122;
case 0x767124:c.instructions+=1;goto B767124;
case 0x767126:goto L767126;
case 0x76712b:c.instructions+=1;goto B76712b;
case 0x76712d:goto L76712d;
case 0x76712f:c.instructions+=1;goto B76712f;
case 0x767131:goto L767131;
case 0x767134:c.instructions+=2;goto B767134;
case 0x767137:c.instructions+=1;goto B767137;
case 0x767139:goto L767139;
case 0x76713c:c.instructions+=4;goto B76713c;
case 0x76713e:c.instructions+=3;goto B76713e;
case 0x767141:c.instructions+=2;goto B767141;
case 0x767144:c.instructions+=1;goto B767144;
case 0x767146:goto L767146;
case 0x767149:c.instructions+=3;goto B767149;
case 0x76714b:c.instructions+=2;goto B76714b;
case 0x76714e:c.instructions+=1;goto B76714e;
case 0x767151:goto L767151;
case 0x767153:goto L767153;
case 0x767156:c.instructions+=28;goto B767156;
case 0x767159:c.instructions+=27;goto B767159;
case 0x76715c:c.instructions+=26;goto B76715c;
case 0x76715e:c.instructions+=25;goto B76715e;
case 0x767164:c.instructions+=24;goto B767164;
case 0x767166:c.instructions+=23;goto B767166;
case 0x767169:c.instructions+=22;goto B767169;
case 0x76716c:c.instructions+=21;goto B76716c;
case 0x76716f:c.instructions+=20;goto B76716f;
case 0x767172:c.instructions+=19;goto B767172;
case 0x767175:c.instructions+=18;goto B767175;
case 0x767177:c.instructions+=17;goto B767177;
case 0x76717a:c.instructions+=16;goto B76717a;
case 0x76717d:c.instructions+=15;goto B76717d;
case 0x76717f:c.instructions+=14;goto B76717f;
case 0x767182:c.instructions+=13;goto B767182;
case 0x767185:c.instructions+=12;goto B767185;
case 0x767188:c.instructions+=11;goto B767188;
case 0x76718b:c.instructions+=10;goto B76718b;
case 0x76718e:c.instructions+=9;goto B76718e;
case 0x767191:c.instructions+=8;goto B767191;
case 0x767194:c.instructions+=7;goto B767194;
case 0x767196:c.instructions+=6;goto B767196;
case 0x767199:c.instructions+=5;goto B767199;
case 0x76719c:c.instructions+=4;goto B76719c;
case 0x76719e:c.instructions+=3;goto B76719e;
case 0x7671a1:c.instructions+=2;goto B7671a1;
case 0x7671a4:c.instructions+=1;goto B7671a4;
case 0x7671a9:goto L7671a9;
case 0x7671ac:c.instructions+=5;goto B7671ac;
case 0x7671ad:c.instructions+=4;goto B7671ad;
case 0x7671ae:c.instructions+=3;goto B7671ae;
case 0x7671b0:c.instructions+=2;goto B7671b0;
case 0x7671b3:c.instructions+=1;goto B7671b3;
case 0x7671b9:goto L7671b9;
case 0x7671bc:c.instructions+=2;goto B7671bc;
case 0x7671c0:c.instructions+=1;goto B7671c0;
case 0x7671c2:goto L7671c2;
case 0x7671c5:goto L7671c5;
case 0x7671c9:c.instructions+=1;goto B7671c9;
case 0x7671cb:goto L7671cb;
case 0x7671ce:goto L7671ce;
case 0x7671d2:c.instructions+=1;goto B7671d2;
case 0x7671d4:goto L7671d4;
case 0x7671d7:goto L7671d7;
case 0x7671db:c.instructions+=1;goto B7671db;
case 0x7671dd:goto L7671dd;
case 0x7671e0:goto L7671e0;
case 0x7671e3:c.instructions+=1;goto B7671e3;
case 0x7671e5:goto L7671e5;
case 0x7671e8:goto L7671e8;
case 0x7671ea:c.instructions+=4;goto B7671ea;
case 0x7671ed:c.instructions+=3;goto B7671ed;
case 0x7671f0:c.instructions+=2;goto B7671f0;
case 0x7671f5:c.instructions+=1;goto B7671f5;
case 0x7671f7:goto L7671f7;
case 0x7671f8:c.instructions+=1;goto B7671f8;
case 0x7671fa:goto L7671fa;
case 0x7671fb:c.instructions+=1;goto B7671fb;
case 0x7671fd:goto L7671fd;
case 0x7671fe:c.instructions+=1;goto B7671fe;
case 0x767200:goto L767200;
case 0x767204:c.instructions+=1;goto B767204;
case 0x767206:goto L767206;
case 0x767208:c.instructions+=3;goto B767208;
case 0x76720e:c.instructions+=2;goto B76720e;
case 0x767214:c.instructions+=1;goto B767214;
case 0x767216:goto L767216;
case 0x767218:c.instructions+=2;goto B767218;
case 0x76721e:c.instructions+=1;goto B76721e;
case 0x767224:goto L767224;
case 0x767226:c.instructions+=1;goto B767226;
case 0x767228:goto L767228;
case 0x76722a:goto L76722a;
case 0x76722c:c.instructions+=4;goto B76722c;
case 0x76722f:c.instructions+=3;goto B76722f;
case 0x767232:c.instructions+=2;goto B767232;
case 0x767235:c.instructions+=1;goto B767235;
case 0x767237:goto L767237;
case 0x767238:c.instructions+=1;goto B767238;
case 0x76723a:goto L76723a;
case 0x76723b:c.instructions+=1;goto B76723b;
case 0x76723d:goto L76723d;
case 0x76723f:c.instructions+=1;goto B76723f;
case 0x767241:goto L767241;
case 0x767243:c.instructions+=3;goto B767243;
case 0x767245:c.instructions+=2;goto B767245;
case 0x76724b:c.instructions+=1;goto B76724b;
case 0x76724d:goto L76724d;
case 0x76724f:c.instructions+=2;goto B76724f;
case 0x767251:c.instructions+=1;goto B767251;
case 0x767257:goto L767257;
case 0x767259:goto L767259;
case 0x76725c:c.instructions+=6;goto B76725c;
case 0x76725e:c.instructions+=5;goto B76725e;
case 0x76725f:c.instructions+=4;goto B76725f;
case 0x767260:c.instructions+=3;goto B767260;
case 0x767261:c.instructions+=2;goto B767261;
case 0x767262:c.instructions+=1;goto B767262;
case 0x767263:goto L767263;
case 0x767264:c.instructions+=12;goto B767264;
case 0x767266:c.instructions+=11;goto B767266;
case 0x767269:c.instructions+=10;goto B767269;
case 0x76726c:c.instructions+=9;goto B76726c;
case 0x76726d:c.instructions+=8;goto B76726d;
case 0x76726e:c.instructions+=7;goto B76726e;
case 0x767270:c.instructions+=6;goto B767270;
case 0x767272:c.instructions+=5;goto B767272;
case 0x767275:c.instructions+=4;goto B767275;
case 0x767276:c.instructions+=3;goto B767276;
case 0x767278:c.instructions+=2;goto B767278;
case 0x76727b:c.instructions+=1;goto B76727b;
case 0x76727d:goto L76727d;
case 0x767280:c.instructions+=1;goto B767280;
case 0x767282:goto L767282;
case 0x767283:c.instructions+=1;goto B767283;
case 0x767288:goto L767288;
case 0x767289:c.instructions+=2;goto B767289;
case 0x76728c:c.instructions+=1;goto B76728c;
case 0x767291:goto L767291;
case 0x767293:c.instructions+=1;goto B767293;
case 0x767295:goto L767295;
case 0x767299:c.instructions+=1;goto B767299;
case 0x76729b:goto L76729b;
case 0x76729d:c.instructions+=1;goto B76729d;
case 0x7672a2:goto L7672a2;
case 0x7672a3:c.instructions+=2;goto B7672a3;
case 0x7672a6:c.instructions+=1;goto B7672a6;
case 0x7672ab:goto L7672ab;
case 0x7672ad:c.instructions+=1;goto B7672ad;
case 0x7672b3:goto L7672b3;
case 0x7672b7:c.instructions+=1;goto B7672b7;
case 0x7672bd:goto L7672bd;
case 0x7672bf:c.instructions+=1;goto B7672bf;
case 0x7672c4:goto L7672c4;
case 0x7672c7:c.instructions+=4;goto B7672c7;
case 0x7672c8:c.instructions+=3;goto B7672c8;
case 0x7672cd:c.instructions+=2;goto B7672cd;
case 0x7672cf:c.instructions+=1;goto B7672cf;
case 0x7672d5:goto L7672d5;
case 0x7672da:c.instructions+=1;goto B7672da;
case 0x7672dc:goto L7672dc;
case 0x7672e1:c.instructions+=1;goto B7672e1;
case 0x7672e3:goto L7672e3;
case 0x7672e5:c.instructions+=1;goto B7672e5;
case 0x7672eb:goto L7672eb;
case 0x7672ee:c.instructions+=6;goto B7672ee;
case 0x7672f0:c.instructions+=5;goto B7672f0;
case 0x7672f6:c.instructions+=4;goto B7672f6;
case 0x7672fc:c.instructions+=3;goto B7672fc;
case 0x7672fe:c.instructions+=2;goto B7672fe;
case 0x767301:c.instructions+=1;goto B767301;
case 0x767303:goto L767303;
case 0x767305:goto L767305;
case 0x767308:c.instructions+=2;goto B767308;
case 0x76730b:c.instructions+=1;goto B76730b;
case 0x76730d:goto L76730d;
case 0x767310:c.instructions+=5;goto B767310;
case 0x767312:c.instructions+=4;goto B767312;
case 0x767318:c.instructions+=3;goto B767318;
case 0x76731a:c.instructions+=2;goto B76731a;
case 0x76731d:c.instructions+=1;goto B76731d;
case 0x76731f:goto L76731f;
case 0x767325:c.instructions+=1;goto B767325;
case 0x767327:goto L767327;
case 0x76732d:c.instructions+=1;goto B76732d;
case 0x76732f:goto L76732f;
case 0x767332:c.instructions+=2;goto B767332;
case 0x767335:c.instructions+=1;goto B767335;
case 0x767337:goto L767337;
case 0x76733a:c.instructions+=5;goto B76733a;
case 0x76733c:c.instructions+=4;goto B76733c;
case 0x767342:c.instructions+=3;goto B767342;
case 0x767344:c.instructions+=2;goto B767344;
case 0x767347:c.instructions+=1;goto B767347;
case 0x767349:goto L767349;
case 0x76734f:c.instructions+=1;goto B76734f;
case 0x767351:goto L767351;
case 0x767357:c.instructions+=1;goto B767357;
case 0x767359:goto L767359;
case 0x76735c:c.instructions+=2;goto B76735c;
case 0x76735f:c.instructions+=1;goto B76735f;
case 0x767361:goto L767361;
case 0x767364:c.instructions+=6;goto B767364;
case 0x767366:c.instructions+=5;goto B767366;
case 0x76736c:c.instructions+=4;goto B76736c;
case 0x767372:c.instructions+=3;goto B767372;
case 0x767374:c.instructions+=2;goto B767374;
case 0x767377:c.instructions+=1;goto B767377;
case 0x767379:goto L767379;
case 0x76737b:goto L76737b;
case 0x76737e:c.instructions+=1;goto B76737e;
case 0x767381:goto L767381;
case 0x767383:goto L767383;
case 0x767386:c.instructions+=1;goto B767386;
case 0x76738b:goto L76738b;
case 0x76738d:c.instructions+=1;goto B76738d;
case 0x767393:goto L767393;
case 0x767397:c.instructions+=1;goto B767397;
case 0x76739d:goto L76739d;
case 0x76739f:c.instructions+=2;goto B76739f;
case 0x7673a1:c.instructions+=1;goto B7673a1;
case 0x7673a3:goto L7673a3;
case 0x7673a5:goto L7673a5;
case 0x7673a6:c.instructions+=6;goto B7673a6;
case 0x7673a9:c.instructions+=5;goto B7673a9;
case 0x7673ab:c.instructions+=4;goto B7673ab;
case 0x7673b1:c.instructions+=3;goto B7673b1;
case 0x7673b3:c.instructions+=2;goto B7673b3;
case 0x7673b6:c.instructions+=1;goto B7673b6;
case 0x7673bc:goto L7673bc;
case 0x7673be:c.instructions+=6;goto B7673be;
case 0x7673c1:c.instructions+=5;goto B7673c1;
case 0x7673c2:c.instructions+=4;goto B7673c2;
case 0x7673c3:c.instructions+=3;goto B7673c3;
case 0x7673c4:c.instructions+=2;goto B7673c4;
case 0x7673c7:c.instructions+=1;goto B7673c7;
case 0x7673cc:goto L7673cc;
case 0x7673cf:c.instructions+=6;goto B7673cf;
case 0x7673d2:c.instructions+=5;goto B7673d2;
case 0x7673d5:c.instructions+=4;goto B7673d5;
case 0x7673db:c.instructions+=3;goto B7673db;
case 0x7673de:c.instructions+=2;goto B7673de;
case 0x7673e4:c.instructions+=1;goto B7673e4;
case 0x7673e6:goto L7673e6;
case 0x7673ec:c.instructions+=2;goto B7673ec;
case 0x7673ee:c.instructions+=1;goto B7673ee;
case 0x7673f0:goto L7673f0;
case 0x7673f6:c.instructions+=3;goto B7673f6;
case 0x7673f8:c.instructions+=2;goto B7673f8;
case 0x7673fb:c.instructions+=1;goto B7673fb;
case 0x7673fd:goto L7673fd;
case 0x7673ff:c.instructions+=1;goto B7673ff;
case 0x767401:goto L767401;
case 0x767403:goto L767403;
case 0x767405:c.instructions+=7;goto B767405;
case 0x767408:c.instructions+=6;goto B767408;
case 0x76740b:c.instructions+=5;goto B76740b;
case 0x76740e:c.instructions+=4;goto B76740e;
case 0x767412:c.instructions+=3;goto B767412;
case 0x767417:c.instructions+=2;goto B767417;
case 0x767419:c.instructions+=1;goto B767419;
case 0x76741b:goto L76741b;
case 0x76741d:goto L76741d;
case 0x767420:c.instructions+=1;goto B767420;
case 0x767422:goto L767422;
case 0x767424:c.instructions+=1;goto B767424;
case 0x767426:goto L767426;
case 0x767428:goto L767428;
case 0x76742b:c.instructions+=2;goto B76742b;
case 0x76742e:c.instructions+=1;goto B76742e;
case 0x767430:goto L767430;
case 0x767434:goto L767434;
case 0x767437:c.instructions+=2;goto B767437;
case 0x767438:c.instructions+=1;goto B767438;
case 0x76743a:goto L76743a;
case 0x76743c:c.instructions+=1;goto B76743c;
case 0x76743e:goto L76743e;
case 0x767441:c.instructions+=1;goto B767441;
case 0x767443:goto L767443;
case 0x767446:goto L767446;
case 0x767449:c.instructions+=2;goto B767449;
case 0x76744b:c.instructions+=1;goto B76744b;
case 0x76744d:goto L76744d;
case 0x76744f:goto L76744f;
case 0x767451:c.instructions+=2;goto B767451;
case 0x767452:c.instructions+=1;goto B767452;
case 0x767454:goto L767454;
case 0x767456:c.instructions+=1;goto B767456;
case 0x76745b:goto L76745b;
case 0x76745c:goto L76745c;
case 0x767460:c.instructions+=1;goto B767460;
case 0x767463:goto L767463;
case 0x767467:c.instructions+=1;goto B767467;
case 0x767469:goto L767469;
case 0x76746d:c.instructions+=1;goto B76746d;
case 0x76746f:goto L76746f;
case 0x767471:c.instructions+=1;goto B767471;
case 0x767476:goto L767476;
case 0x767477:c.instructions+=1;goto B767477;
case 0x76747a:goto L76747a;
case 0x76747c:c.instructions+=6;goto B76747c;
case 0x76747e:c.instructions+=5;goto B76747e;
case 0x76747f:c.instructions+=4;goto B76747f;
case 0x767482:c.instructions+=3;goto B767482;
case 0x767483:c.instructions+=2;goto B767483;
case 0x767484:c.instructions+=1;goto B767484;
case 0x767485:goto L767485;
case 0x767489:c.instructions+=2;goto B767489;
case 0x76748c:c.instructions+=1;goto B76748c;
case 0x76748e:goto L76748e;
case 0x767490:goto L767490;
case 0x767493:c.instructions+=1;goto B767493;
case 0x767495:goto L767495;
case 0x76749a:goto L76749a;
case 0x7674a0:c.instructions+=1;goto B7674a0;
case 0x7674a1:goto L7674a1;
case 0x7674a6:goto L7674a6;
case 0x7674ac:goto L7674ac;
case 0x7674ad:goto L7674ad;
case 0x7674b1:c.instructions+=2;goto B7674b1;
case 0x7674b3:c.instructions+=1;goto B7674b3;
case 0x7674b5:goto L7674b5;
case 0x7674b7:c.instructions+=1;goto B7674b7;
case 0x7674b9:goto L7674b9;
case 0x7674bb:c.instructions+=1;goto B7674bb;
case 0x7674bd:goto L7674bd;
case 0x7674bf:c.instructions+=2;goto B7674bf;
case 0x7674c0:c.instructions+=1;goto B7674c0;
case 0x7674c1:goto L7674c1;
case 0x7674c3:c.instructions+=1;goto B7674c3;
case 0x7674c5:goto L7674c5;
case 0x7674c7:c.instructions+=1;goto B7674c7;
case 0x7674c9:goto L7674c9;
case 0x7674cb:c.instructions+=1;goto B7674cb;
case 0x7674cd:goto L7674cd;
case 0x7674cf:goto L7674cf;
case 0x7674d0:c.instructions+=1;goto B7674d0;
case 0x7674d1:goto L7674d1;
case 0x7674d4:c.instructions+=3;goto B7674d4;
case 0x7674d7:c.instructions+=2;goto B7674d7;
case 0x7674d9:c.instructions+=1;goto B7674d9;
case 0x7674da:goto L7674da;
case 0x7674db:c.instructions+=3;goto B7674db;
case 0x7674dd:c.instructions+=2;goto B7674dd;
case 0x7674e0:c.instructions+=1;goto B7674e0;
case 0x7674e2:goto L7674e2;
case 0x7674e9:c.instructions+=2;goto B7674e9;
case 0x7674ec:c.instructions+=1;goto B7674ec;
case 0x7674ee:goto L7674ee;
case 0x7674ef:c.instructions+=2;goto B7674ef;
case 0x7674f2:c.instructions+=1;goto B7674f2;
case 0x7674f4:goto L7674f4;
case 0x7674f6:goto L7674f6;
case 0x7674f8:c.instructions+=2;goto B7674f8;
case 0x7674fb:c.instructions+=1;goto B7674fb;
case 0x7674fd:goto L7674fd;
case 0x767500:c.instructions+=17;goto B767500;
case 0x767503:c.instructions+=16;goto B767503;
case 0x767506:c.instructions+=15;goto B767506;
case 0x767509:c.instructions+=14;goto B767509;
case 0x76750c:c.instructions+=13;goto B76750c;
case 0x76750f:c.instructions+=12;goto B76750f;
case 0x767512:c.instructions+=11;goto B767512;
case 0x767513:c.instructions+=10;goto B767513;
case 0x767516:c.instructions+=9;goto B767516;
case 0x767519:c.instructions+=8;goto B767519;
case 0x76751c:c.instructions+=7;goto B76751c;
case 0x76751f:c.instructions+=6;goto B76751f;
case 0x767522:c.instructions+=5;goto B767522;
case 0x767527:c.instructions+=4;goto B767527;
case 0x76752a:c.instructions+=3;goto B76752a;
case 0x76752d:c.instructions+=2;goto B76752d;
case 0x767530:c.instructions+=1;goto B767530;
case 0x767535:goto L767535;
case 0x767538:c.instructions+=2;goto B767538;
case 0x767539:c.instructions+=1;goto B767539;
case 0x76753e:goto L76753e;
case 0x767541:c.instructions+=2;goto B767541;
case 0x767543:c.instructions+=1;goto B767543;
case 0x767545:goto L767545;
case 0x767546:c.instructions+=1;goto B767546;
case 0x76754b:goto L76754b;
case 0x76754c:goto L76754c;
case 0x76754f:c.instructions+=3;goto B76754f;
case 0x767550:c.instructions+=2;goto B767550;
case 0x767551:c.instructions+=1;goto B767551;
case 0x767552:goto L767552;
case 0x767559:c.instructions+=1;goto B767559;
case 0x76755b:goto L76755b;
case 0x767560:c.instructions+=2;goto B767560;
case 0x767563:c.instructions+=1;goto B767563;
case 0x767568:goto L767568;
case 0x76756b:c.instructions+=1;goto B76756b;
case 0x767570:goto L767570;
case 0x767573:c.instructions+=3;goto B767573;
case 0x767576:c.instructions+=2;goto B767576;
case 0x767577:c.instructions+=1;goto B767577;
case 0x767578:goto L767578;
case 0x767579:c.instructions+=3;goto B767579;
case 0x76757b:c.instructions+=2;goto B76757b;
case 0x767582:c.instructions+=1;goto B767582;
case 0x767584:goto L767584;
case 0x767587:c.instructions+=10;goto B767587;
case 0x76758a:c.instructions+=9;goto B76758a;
case 0x76758d:c.instructions+=8;goto B76758d;
case 0x767591:c.instructions+=7;goto B767591;
case 0x767593:c.instructions+=6;goto B767593;
case 0x767597:c.instructions+=5;goto B767597;
case 0x76759a:c.instructions+=4;goto B76759a;
case 0x76759d:c.instructions+=3;goto B76759d;
case 0x7675a0:c.instructions+=2;goto B7675a0;
case 0x7675a2:c.instructions+=1;goto B7675a2;
case 0x7675a7:goto L7675a7;
case 0x7675aa:c.instructions+=2;goto B7675aa;
case 0x7675ab:c.instructions+=1;goto B7675ab;
case 0x7675ac:goto L7675ac;
case 0x7675b1:goto L7675b1;
case 0x7675b6:c.instructions+=3;goto B7675b6;
case 0x7675b9:c.instructions+=2;goto B7675b9;
case 0x7675bf:c.instructions+=1;goto B7675bf;
case 0x7675c4:goto L7675c4;
case 0x7675c7:c.instructions+=4;goto B7675c7;
case 0x7675c8:c.instructions+=3;goto B7675c8;
case 0x7675c9:c.instructions+=2;goto B7675c9;
case 0x7675ca:c.instructions+=1;goto B7675ca;
case 0x7675cb:goto L7675cb;
case 0x7675cc:c.instructions+=11;goto B7675cc;
case 0x7675ce:c.instructions+=10;goto B7675ce;
case 0x7675d1:c.instructions+=9;goto B7675d1;
case 0x7675d7:c.instructions+=8;goto B7675d7;
case 0x7675dc:c.instructions+=7;goto B7675dc;
case 0x7675df:c.instructions+=6;goto B7675df;
case 0x7675e2:c.instructions+=5;goto B7675e2;
case 0x7675e9:c.instructions+=4;goto B7675e9;
case 0x7675ec:c.instructions+=3;goto B7675ec;
case 0x7675ed:c.instructions+=2;goto B7675ed;
case 0x7675f0:c.instructions+=1;goto B7675f0;
case 0x7675f5:goto L7675f5;
case 0x7675f8:c.instructions+=2;goto B7675f8;
case 0x7675fa:c.instructions+=1;goto B7675fa;
case 0x7675fc:goto L7675fc;
case 0x767601:c.instructions+=11;goto B767601;
case 0x767604:c.instructions+=10;goto B767604;
case 0x767605:c.instructions+=9;goto B767605;
case 0x767608:c.instructions+=8;goto B767608;
case 0x767609:c.instructions+=7;goto B767609;
case 0x76760c:c.instructions+=6;goto B76760c;
case 0x76760f:c.instructions+=5;goto B76760f;
case 0x767612:c.instructions+=4;goto B767612;
case 0x767613:c.instructions+=3;goto B767613;
case 0x767617:c.instructions+=2;goto B767617;
case 0x767618:c.instructions+=1;goto B767618;
case 0x76761d:goto L76761d;
case 0x767620:goto L767620;
case 0x767623:c.instructions+=1;goto B767623;
case 0x767628:goto L767628;
case 0x76762b:c.instructions+=2;goto B76762b;
case 0x767632:c.instructions+=1;goto B767632;
case 0x767634:goto L767634;
case 0x767636:c.instructions+=1;goto B767636;
case 0x767638:goto L767638;
case 0x76763b:c.instructions+=10;goto B76763b;
case 0x76763e:c.instructions+=9;goto B76763e;
case 0x767641:c.instructions+=8;goto B767641;
case 0x767645:c.instructions+=7;goto B767645;
case 0x767647:c.instructions+=6;goto B767647;
case 0x76764b:c.instructions+=5;goto B76764b;
case 0x76764e:c.instructions+=4;goto B76764e;
case 0x767651:c.instructions+=3;goto B767651;
case 0x767654:c.instructions+=2;goto B767654;
case 0x767655:c.instructions+=1;goto B767655;
case 0x76765a:goto L76765a;
case 0x76765d:c.instructions+=1;goto B76765d;
case 0x76765f:goto L76765f;
case 0x767660:c.instructions+=1;goto B767660;
case 0x767665:goto L767665;
case 0x76766c:c.instructions+=2;goto B76766c;
case 0x76766f:c.instructions+=1;goto B76766f;
case 0x767674:goto L767674;
case 0x767677:c.instructions+=2;goto B767677;
case 0x767678:c.instructions+=1;goto B767678;
case 0x767679:goto L767679;
case 0x76767d:c.instructions+=2;goto B76767d;
case 0x767680:c.instructions+=1;goto B767680;
case 0x767685:goto L767685;
case 0x767687:c.instructions+=2;goto B767687;
case 0x767688:c.instructions+=1;goto B767688;
case 0x767689:goto L767689;
case 0x76768a:c.instructions+=4;goto B76768a;
case 0x76768f:c.instructions+=3;goto B76768f;
case 0x767694:c.instructions+=2;goto B767694;
case 0x767695:c.instructions+=1;goto B767695;
case 0x767696:goto L767696;
case 0x767697:c.instructions+=5;goto B767697;
case 0x76769b:c.instructions+=4;goto B76769b;
case 0x76769d:c.instructions+=3;goto B76769d;
case 0x7676a2:c.instructions+=2;goto B7676a2;
case 0x7676a3:c.instructions+=1;goto B7676a3;
case 0x7676a4:goto L7676a4;
case 0x7676a5:c.instructions+=14;goto B7676a5;
case 0x7676a7:c.instructions+=13;goto B7676a7;
case 0x7676a8:c.instructions+=12;goto B7676a8;
case 0x7676ac:c.instructions+=11;goto B7676ac;
case 0x7676af:c.instructions+=10;goto B7676af;
case 0x7676b2:c.instructions+=9;goto B7676b2;
case 0x7676b5:c.instructions+=8;goto B7676b5;
case 0x7676b7:c.instructions+=7;goto B7676b7;
case 0x7676ba:c.instructions+=6;goto B7676ba;
case 0x7676bc:c.instructions+=5;goto B7676bc;
case 0x7676bf:c.instructions+=4;goto B7676bf;
case 0x7676c2:c.instructions+=3;goto B7676c2;
case 0x7676c6:c.instructions+=2;goto B7676c6;
case 0x7676c7:c.instructions+=1;goto B7676c7;
case 0x7676c8:goto L7676c8;
case 0x7676c9:c.instructions+=4;goto B7676c9;
case 0x7676ca:c.instructions+=3;goto B7676ca;
case 0x7676ce:c.instructions+=2;goto B7676ce;
case 0x7676d1:c.instructions+=1;goto B7676d1;
case 0x7676d3:goto L7676d3;
case 0x7676d9:c.instructions+=2;goto B7676d9;
case 0x7676dd:c.instructions+=1;goto B7676dd;
case 0x7676de:goto L7676de;
case 0x7676e1:c.instructions+=1;goto B7676e1;
case 0x7676e3:goto L7676e3;
case 0x7676e6:c.instructions+=4;goto B7676e6;
case 0x7676ec:c.instructions+=3;goto B7676ec;
case 0x7676f0:c.instructions+=2;goto B7676f0;
case 0x7676f1:c.instructions+=1;goto B7676f1;
case 0x7676f4:goto L7676f4;
case 0x7676f7:c.instructions+=1;goto B7676f7;
case 0x7676f9:goto L7676f9;
case 0x7676ff:c.instructions+=2;goto B7676ff;
case 0x767703:c.instructions+=1;goto B767703;
case 0x767704:goto L767704;
case 0x767707:c.instructions+=1;goto B767707;
case 0x767709:goto L767709;
case 0x76770b:c.instructions+=4;goto B76770b;
case 0x76770d:c.instructions+=3;goto B76770d;
case 0x76770f:c.instructions+=2;goto B76770f;
case 0x767711:c.instructions+=1;goto B767711;
case 0x767712:goto L767712;
case 0x767715:c.instructions+=1;goto B767715;
case 0x767717:goto L767717;
case 0x767719:c.instructions+=2;goto B767719;
case 0x76771d:c.instructions+=1;goto B76771d;
case 0x76771e:goto L76771e;
case 0x76771f:c.instructions+=2;goto B76771f;
case 0x767720:c.instructions+=1;goto B767720;
case 0x767730:goto L767730;
case 0x767731:c.instructions+=8;goto B767731;
case 0x767733:c.instructions+=7;goto B767733;
case 0x767734:c.instructions+=6;goto B767734;
case 0x767735:c.instructions+=5;goto B767735;
case 0x767736:c.instructions+=4;goto B767736;
case 0x767739:c.instructions+=3;goto B767739;
case 0x76773c:c.instructions+=2;goto B76773c;
case 0x76773e:c.instructions+=1;goto B76773e;
case 0x767740:goto L767740;
case 0x767742:c.instructions+=1;goto B767742;
case 0x767744:goto L767744;
case 0x767746:c.instructions+=5;goto B767746;
case 0x767749:c.instructions+=4;goto B767749;
case 0x76774b:c.instructions+=3;goto B76774b;
case 0x76774e:c.instructions+=2;goto B76774e;
case 0x767750:c.instructions+=1;goto B767750;
case 0x767752:goto L767752;
case 0x767754:c.instructions+=14;goto B767754;
case 0x767756:c.instructions+=13;goto B767756;
case 0x767758:c.instructions+=12;goto B767758;
case 0x76775b:c.instructions+=11;goto B76775b;
case 0x76775d:c.instructions+=10;goto B76775d;
case 0x76775f:c.instructions+=9;goto B76775f;
case 0x767761:c.instructions+=8;goto B767761;
case 0x767763:c.instructions+=7;goto B767763;
case 0x767765:c.instructions+=6;goto B767765;
case 0x767767:c.instructions+=5;goto B767767;
case 0x76776a:c.instructions+=4;goto B76776a;
case 0x76776c:c.instructions+=3;goto B76776c;
case 0x76776e:c.instructions+=2;goto B76776e;
case 0x767770:c.instructions+=1;goto B767770;
case 0x767772:goto L767772;
case 0x767774:c.instructions+=1;goto B767774;
case 0x767776:goto L767776;
case 0x767779:c.instructions+=5;goto B767779;
case 0x76777a:c.instructions+=4;goto B76777a;
case 0x76777b:c.instructions+=3;goto B76777b;
case 0x76777c:c.instructions+=2;goto B76777c;
case 0x76777d:c.instructions+=1;goto B76777d;
case 0x76777e:goto L76777e;
case 0x76777f:c.instructions+=20;goto B76777f;
case 0x767781:c.instructions+=19;goto B767781;
case 0x767784:c.instructions+=18;goto B767784;
case 0x767789:c.instructions+=17;goto B767789;
case 0x76778c:c.instructions+=16;goto B76778c;
case 0x76778d:c.instructions+=15;goto B76778d;
case 0x76778e:c.instructions+=14;goto B76778e;
case 0x76778f:c.instructions+=13;goto B76778f;
case 0x767791:c.instructions+=12;goto B767791;
case 0x767792:c.instructions+=11;goto B767792;
case 0x767793:c.instructions+=10;goto B767793;
case 0x767794:c.instructions+=9;goto B767794;
case 0x767795:c.instructions+=8;goto B767795;
case 0x767798:c.instructions+=7;goto B767798;
case 0x76779b:c.instructions+=6;goto B76779b;
case 0x76779e:c.instructions+=5;goto B76779e;
case 0x76779f:c.instructions+=4;goto B76779f;
case 0x7677a2:c.instructions+=3;goto B7677a2;
case 0x7677a3:c.instructions+=2;goto B7677a3;
case 0x7677a5:c.instructions+=1;goto B7677a5;
case 0x7677aa:goto L7677aa;
case 0x7677ac:c.instructions+=3;goto B7677ac;
case 0x7677af:c.instructions+=2;goto B7677af;
case 0x7677b2:c.instructions+=1;goto B7677b2;
case 0x7677b4:goto L7677b4;
case 0x7677b9:c.instructions+=3;goto B7677b9;
case 0x7677bc:c.instructions+=2;goto B7677bc;
case 0x7677bf:c.instructions+=1;goto B7677bf;
case 0x7677c1:goto L7677c1;
case 0x7677c4:c.instructions+=4;goto B7677c4;
case 0x7677c5:c.instructions+=3;goto B7677c5;
case 0x7677c8:c.instructions+=2;goto B7677c8;
case 0x7677c9:c.instructions+=1;goto B7677c9;
case 0x7677ce:goto L7677ce;
case 0x7677d1:c.instructions+=3;goto B7677d1;
case 0x7677d2:c.instructions+=2;goto B7677d2;
case 0x7677d3:c.instructions+=1;goto B7677d3;
case 0x7677d5:goto L7677d5;
case 0x7677d8:c.instructions+=1;goto B7677d8;
case 0x7677da:goto L7677da;
case 0x7677df:goto L7677df;
case 0x7677e2:c.instructions+=1;goto B7677e2;
case 0x7677e4:goto L7677e4;
case 0x7677e7:c.instructions+=1;goto B7677e7;
case 0x7677e9:goto L7677e9;
case 0x7677ef:goto L7677ef;
case 0x7677f2:c.instructions+=14;goto B7677f2;
case 0x7677f5:c.instructions+=13;goto B7677f5;
case 0x7677f8:c.instructions+=12;goto B7677f8;
case 0x7677fa:c.instructions+=11;goto B7677fa;
case 0x7677fd:c.instructions+=10;goto B7677fd;
case 0x767800:c.instructions+=9;goto B767800;
case 0x767803:c.instructions+=8;goto B767803;
case 0x767806:c.instructions+=7;goto B767806;
case 0x767809:c.instructions+=6;goto B767809;
case 0x76780c:c.instructions+=5;goto B76780c;
case 0x76780f:c.instructions+=4;goto B76780f;
case 0x767810:c.instructions+=3;goto B767810;
case 0x767811:c.instructions+=2;goto B767811;
case 0x767812:c.instructions+=1;goto B767812;
case 0x767817:goto L767817;
case 0x767818:c.instructions+=1;goto B767818;
case 0x767819:goto L767819;
case 0x76781b:c.instructions+=2;goto B76781b;
case 0x767820:c.instructions+=1;goto B767820;
case 0x767825:goto L767825;
case 0x767827:c.instructions+=2;goto B767827;
case 0x76782d:c.instructions+=1;goto B76782d;
case 0x76782f:goto L76782f;
case 0x767830:c.instructions+=8;goto B767830;
case 0x767831:c.instructions+=7;goto B767831;
case 0x767833:c.instructions+=6;goto B767833;
case 0x767834:c.instructions+=5;goto B767834;
case 0x767835:c.instructions+=4;goto B767835;
case 0x76783a:c.instructions+=3;goto B76783a;
case 0x76783f:c.instructions+=2;goto B76783f;
case 0x767840:c.instructions+=1;goto B767840;
case 0x767846:goto L767846;
case 0x767848:c.instructions+=1;goto B767848;
case 0x76784a:goto L76784a;
case 0x767850:c.instructions+=1;goto B767850;
case 0x767852:goto L767852;
case 0x767858:goto L767858;
case 0x76785b:c.instructions+=1;goto B76785b;
case 0x76785d:goto L76785d;
case 0x767867:goto L767867;
case 0x76786a:c.instructions+=1;goto B76786a;
case 0x76786c:goto L76786c;
case 0x76786f:c.instructions+=1;goto B76786f;
case 0x767872:goto L767872;
case 0x767873:c.instructions+=2;goto B767873;
case 0x767875:c.instructions+=1;goto B767875;
case 0x767877:goto L767877;
case 0x767878:c.instructions+=2;goto B767878;
case 0x76787a:c.instructions+=1;goto B76787a;
case 0x76787c:goto L76787c;
case 0x76787f:goto L76787f;
case 0x767882:c.instructions+=2;goto B767882;
case 0x767884:c.instructions+=1;goto B767884;
case 0x767887:goto L767887;
case 0x76788c:c.instructions+=2;goto B76788c;
case 0x76788f:c.instructions+=1;goto B76788f;
case 0x767895:goto L767895;
case 0x767897:c.instructions+=1;goto B767897;
case 0x76789d:goto L76789d;
case 0x7678a0:c.instructions+=1;goto B7678a0;
case 0x7678a6:goto L7678a6;
case 0x7678a8:c.instructions+=5;goto B7678a8;
case 0x7678ab:c.instructions+=4;goto B7678ab;
case 0x7678ae:c.instructions+=3;goto B7678ae;
case 0x7678b1:c.instructions+=2;goto B7678b1;
case 0x7678b4:c.instructions+=1;goto B7678b4;
case 0x7678b6:goto L7678b6;
case 0x7678bb:c.instructions+=1;goto B7678bb;
case 0x7678be:goto L7678be;
case 0x7678bf:c.instructions+=10;goto B7678bf;
case 0x7678c0:c.instructions+=9;goto B7678c0;
case 0x7678c3:c.instructions+=8;goto B7678c3;
case 0x7678c6:c.instructions+=7;goto B7678c6;
case 0x7678c8:c.instructions+=6;goto B7678c8;
case 0x7678cb:c.instructions+=5;goto B7678cb;
case 0x7678ce:c.instructions+=4;goto B7678ce;
case 0x7678d5:c.instructions+=3;goto B7678d5;
case 0x7678d6:c.instructions+=2;goto B7678d6;
case 0x7678d9:c.instructions+=1;goto B7678d9;
case 0x7678df:goto L7678df;
case 0x7678e1:c.instructions+=3;goto B7678e1;
case 0x7678e4:c.instructions+=2;goto B7678e4;
case 0x7678e6:c.instructions+=1;goto B7678e6;
case 0x7678ec:goto L7678ec;
case 0x7678f3:c.instructions+=4;goto B7678f3;
case 0x7678f6:c.instructions+=3;goto B7678f6;
case 0x7678f9:c.instructions+=2;goto B7678f9;
case 0x7678fc:c.instructions+=1;goto B7678fc;
case 0x767901:goto L767901;
case 0x767904:c.instructions+=4;goto B767904;
case 0x767906:c.instructions+=3;goto B767906;
case 0x767909:c.instructions+=2;goto B767909;
case 0x76790d:c.instructions+=1;goto B76790d;
case 0x76790f:goto L76790f;
case 0x767911:c.instructions+=2;goto B767911;
case 0x767912:c.instructions+=1;goto B767912;
case 0x767913:goto L767913;
case 0x767916:c.instructions+=1;goto B767916;
case 0x76791b:goto L76791b;
case 0x76791d:c.instructions+=4;goto B76791d;
case 0x767920:c.instructions+=3;goto B767920;
case 0x767924:c.instructions+=2;goto B767924;
case 0x767927:c.instructions+=1;goto B767927;
case 0x76792a:goto L76792a;
case 0x76792d:c.instructions+=1;goto B76792d;
case 0x76792f:goto L76792f;
case 0x767932:c.instructions+=2;goto B767932;
case 0x767933:c.instructions+=1;goto B767933;
case 0x767938:goto L767938;
case 0x767939:c.instructions+=3;goto B767939;
case 0x76793c:c.instructions+=2;goto B76793c;
case 0x76793e:c.instructions+=1;goto B76793e;
case 0x767944:goto L767944;
case 0x76794b:goto L76794b;
case 0x76794c:c.instructions+=6;goto B76794c;
case 0x76794f:c.instructions+=5;goto B76794f;
case 0x767952:c.instructions+=4;goto B767952;
case 0x767955:c.instructions+=3;goto B767955;
case 0x767957:c.instructions+=2;goto B767957;
case 0x76795a:c.instructions+=1;goto B76795a;
case 0x767960:goto L767960;
case 0x767962:c.instructions+=1;goto B767962;
case 0x767968:goto L767968;
case 0x767969:c.instructions+=6;goto B767969;
case 0x76796a:c.instructions+=5;goto B76796a;
case 0x76796b:c.instructions+=4;goto B76796b;
case 0x76796e:c.instructions+=3;goto B76796e;
case 0x767971:c.instructions+=2;goto B767971;
case 0x767974:c.instructions+=1;goto B767974;
case 0x76797a:goto L76797a;
case 0x76797c:c.instructions+=3;goto B76797c;
case 0x76797f:c.instructions+=2;goto B76797f;
case 0x767981:c.instructions+=1;goto B767981;
case 0x767987:goto L767987;
case 0x76798b:c.instructions+=1;goto B76798b;
case 0x76798d:goto L76798d;
case 0x767990:c.instructions+=1;goto B767990;
case 0x767996:goto L767996;
case 0x767999:c.instructions+=1;goto B767999;
case 0x76799f:goto L76799f;
case 0x7679a2:c.instructions+=6;goto B7679a2;
case 0x7679a5:c.instructions+=5;goto B7679a5;
case 0x7679a6:c.instructions+=4;goto B7679a6;
case 0x7679a9:c.instructions+=3;goto B7679a9;
case 0x7679ac:c.instructions+=2;goto B7679ac;
case 0x7679af:c.instructions+=1;goto B7679af;
case 0x7679b5:goto L7679b5;
case 0x7679ba:goto L7679ba;
case 0x7679c1:c.instructions+=4;goto B7679c1;
case 0x7679c4:c.instructions+=3;goto B7679c4;
case 0x7679c7:c.instructions+=2;goto B7679c7;
case 0x7679ca:c.instructions+=1;goto B7679ca;
case 0x7679cf:goto L7679cf;
case 0x7679d2:c.instructions+=4;goto B7679d2;
case 0x7679d4:c.instructions+=3;goto B7679d4;
case 0x7679d7:c.instructions+=2;goto B7679d7;
case 0x7679db:c.instructions+=1;goto B7679db;
case 0x7679dd:goto L7679dd;
case 0x7679df:c.instructions+=2;goto B7679df;
case 0x7679e0:c.instructions+=1;goto B7679e0;
case 0x7679e1:goto L7679e1;
case 0x7679e4:c.instructions+=1;goto B7679e4;
case 0x7679e9:goto L7679e9;
case 0x7679eb:c.instructions+=4;goto B7679eb;
case 0x7679ee:c.instructions+=3;goto B7679ee;
case 0x7679f2:c.instructions+=2;goto B7679f2;
case 0x7679f5:c.instructions+=1;goto B7679f5;
case 0x7679f8:goto L7679f8;
case 0x7679fb:c.instructions+=1;goto B7679fb;
case 0x7679fd:goto L7679fd;
case 0x767a00:c.instructions+=2;goto B767a00;
case 0x767a01:c.instructions+=1;goto B767a01;
case 0x767a06:goto L767a06;
case 0x767a07:c.instructions+=3;goto B767a07;
case 0x767a0a:c.instructions+=2;goto B767a0a;
case 0x767a0c:c.instructions+=1;goto B767a0c;
case 0x767a0e:goto L767a0e;
case 0x767a15:goto L767a15;
case 0x767a16:c.instructions+=6;goto B767a16;
case 0x767a19:c.instructions+=5;goto B767a19;
case 0x767a1a:c.instructions+=4;goto B767a1a;
case 0x767a1d:c.instructions+=3;goto B767a1d;
case 0x767a20:c.instructions+=2;goto B767a20;
case 0x767a23:c.instructions+=1;goto B767a23;
case 0x767a29:goto L767a29;
case 0x767a2b:c.instructions+=1;goto B767a2b;
case 0x767a2d:goto L767a2d;
case 0x767a2e:c.instructions+=3;goto B767a2e;
case 0x767a2f:c.instructions+=2;goto B767a2f;
case 0x767a32:c.instructions+=1;goto B767a32;
case 0x767a34:goto L767a34;
case 0x767a35:c.instructions+=2;goto B767a35;
case 0x767a36:c.instructions+=1;goto B767a36;
case 0x767a38:goto L767a38;
case 0x767a3b:c.instructions+=1;goto B767a3b;
case 0x767a3e:goto L767a3e;
case 0x767a3f:c.instructions+=4;goto B767a3f;
case 0x767a42:c.instructions+=3;goto B767a42;
case 0x767a43:c.instructions+=2;goto B767a43;
case 0x767a46:c.instructions+=1;goto B767a46;
case 0x767a4c:goto L767a4c;
case 0x767a4e:goto L767a4e;
case 0x767a51:c.instructions+=1;goto B767a51;
case 0x767a53:goto L767a53;
case 0x767a56:c.instructions+=1;goto B767a56;
case 0x767a5b:goto L767a5b;
case 0x767a5c:goto L767a5c;
case 0x767a5f:c.instructions+=1;goto B767a5f;
case 0x767a61:goto L767a61;
case 0x767a64:c.instructions+=1;goto B767a64;
case 0x767a69:goto L767a69;
case 0x767a6a:goto L767a6a;
case 0x767a6c:c.instructions+=1;goto B767a6c;
case 0x767a71:goto L767a71;
case 0x767a74:c.instructions+=4;goto B767a74;
case 0x767a76:c.instructions+=3;goto B767a76;
case 0x767a79:c.instructions+=2;goto B767a79;
case 0x767a7c:c.instructions+=1;goto B767a7c;
case 0x767a7e:goto L767a7e;
case 0x767a83:c.instructions+=1;goto B767a83;
case 0x767a86:goto L767a86;
case 0x767a89:c.instructions+=1;goto B767a89;
case 0x767a8b:goto L767a8b;
case 0x767a90:c.instructions+=1;goto B767a90;
case 0x767a93:goto L767a93;
case 0x767a96:c.instructions+=1;goto B767a96;
case 0x767a9b:goto L767a9b;
case 0x767a9c:c.instructions+=3;goto B767a9c;
case 0x767a9f:c.instructions+=2;goto B767a9f;
case 0x767aa2:c.instructions+=1;goto B767aa2;
case 0x767aa4:goto L767aa4;
case 0x767aa6:c.instructions+=1;goto B767aa6;
case 0x767aab:goto L767aab;
case 0x767aae:c.instructions+=1;goto B767aae;
case 0x767ab4:goto L767ab4;
case 0x767ab5:c.instructions+=7;goto B767ab5;
case 0x767ab6:c.instructions+=6;goto B767ab6;
case 0x767ab9:c.instructions+=5;goto B767ab9;
case 0x767aba:c.instructions+=4;goto B767aba;
case 0x767abd:c.instructions+=3;goto B767abd;
case 0x767abe:c.instructions+=2;goto B767abe;
case 0x767ac1:c.instructions+=1;goto B767ac1;
case 0x767ac6:goto L767ac6;
case 0x767ac9:c.instructions+=3;goto B767ac9;
case 0x767acc:c.instructions+=2;goto B767acc;
case 0x767ace:c.instructions+=1;goto B767ace;
case 0x767ad0:goto L767ad0;
case 0x767ad1:c.instructions+=6;goto B767ad1;
case 0x767ad2:c.instructions+=5;goto B767ad2;
case 0x767ad5:c.instructions+=4;goto B767ad5;
case 0x767ad6:c.instructions+=3;goto B767ad6;
case 0x767ad9:c.instructions+=2;goto B767ad9;
case 0x767adc:c.instructions+=1;goto B767adc;
case 0x767ae2:goto L767ae2;
case 0x767ae4:c.instructions+=3;goto B767ae4;
case 0x767ae7:c.instructions+=2;goto B767ae7;
case 0x767ae9:c.instructions+=1;goto B767ae9;
case 0x767aef:goto L767aef;
case 0x767af2:c.instructions+=3;goto B767af2;
case 0x767af5:c.instructions+=2;goto B767af5;
case 0x767af8:c.instructions+=1;goto B767af8;
case 0x767afd:goto L767afd;
case 0x767b00:c.instructions+=6;goto B767b00;
case 0x767b02:c.instructions+=5;goto B767b02;
case 0x767b05:c.instructions+=4;goto B767b05;
case 0x767b06:c.instructions+=3;goto B767b06;
case 0x767b07:c.instructions+=2;goto B767b07;
case 0x767b08:c.instructions+=1;goto B767b08;
case 0x767b0d:goto L767b0d;
case 0x767b10:c.instructions+=1;goto B767b10;
case 0x767b12:goto L767b12;
case 0x767b14:c.instructions+=2;goto B767b14;
case 0x767b15:c.instructions+=1;goto B767b15;
case 0x767b16:goto L767b16;
case 0x767b19:c.instructions+=1;goto B767b19;
case 0x767b1e:goto L767b1e;
case 0x767b20:c.instructions+=1;goto B767b20;
case 0x767b22:goto L767b22;
case 0x767b26:c.instructions+=2;goto B767b26;
case 0x767b28:c.instructions+=1;goto B767b28;
case 0x767b2a:goto L767b2a;
case 0x767b2d:c.instructions+=1;goto B767b2d;
case 0x767b32:goto L767b32;
case 0x767b33:c.instructions+=3;goto B767b33;
case 0x767b35:c.instructions+=2;goto B767b35;
case 0x767b37:c.instructions+=1;goto B767b37;
case 0x767b39:goto L767b39;
case 0x767b3c:c.instructions+=3;goto B767b3c;
case 0x767b3d:c.instructions+=2;goto B767b3d;
case 0x767b3e:c.instructions+=1;goto B767b3e;
case 0x767b43:goto L767b43;
case 0x767b46:c.instructions+=1;goto B767b46;
case 0x767b4d:goto L767b4d;
case 0x767b50:c.instructions+=6;goto B767b50;
case 0x767b51:c.instructions+=5;goto B767b51;
case 0x767b54:c.instructions+=4;goto B767b54;
case 0x767b57:c.instructions+=3;goto B767b57;
case 0x767b5a:c.instructions+=2;goto B767b5a;
case 0x767b5d:c.instructions+=1;goto B767b5d;
case 0x767b63:goto L767b63;
case 0x767b66:c.instructions+=2;goto B767b66;
case 0x767b68:c.instructions+=1;goto B767b68;
case 0x767b6a:goto L767b6a;
case 0x767b6c:c.instructions+=1;goto B767b6c;
case 0x767b6e:goto L767b6e;
case 0x767b71:c.instructions+=7;goto B767b71;
case 0x767b74:c.instructions+=6;goto B767b74;
case 0x767b77:c.instructions+=5;goto B767b77;
case 0x767b78:c.instructions+=4;goto B767b78;
case 0x767b79:c.instructions+=3;goto B767b79;
case 0x767b7c:c.instructions+=2;goto B767b7c;
case 0x767b7f:c.instructions+=1;goto B767b7f;
case 0x767b84:goto L767b84;
case 0x767b87:c.instructions+=5;goto B767b87;
case 0x767b89:c.instructions+=4;goto B767b89;
case 0x767b8b:c.instructions+=3;goto B767b8b;
case 0x767b8d:c.instructions+=2;goto B767b8d;
case 0x767b8f:c.instructions+=1;goto B767b8f;
case 0x767b91:goto L767b91;
case 0x767b94:goto L767b94;
case 0x767b97:c.instructions+=1;goto B767b97;
case 0x767b99:goto L767b99;
case 0x767b9a:c.instructions+=1;goto B767b9a;
case 0x767b9f:goto L767b9f;
case 0x767ba0:c.instructions+=1;goto B767ba0;
case 0x767ba2:goto L767ba2;
case 0x767ba5:c.instructions+=6;goto B767ba5;
case 0x767ba8:c.instructions+=5;goto B767ba8;
case 0x767bab:c.instructions+=4;goto B767bab;
case 0x767bae:c.instructions+=3;goto B767bae;
case 0x767bb1:c.instructions+=2;goto B767bb1;
case 0x767bb4:c.instructions+=1;goto B767bb4;
case 0x767bba:goto L767bba;
case 0x767bbc:goto L767bbc;
case 0x767bbf:c.instructions+=1;goto B767bbf;
case 0x767bc1:goto L767bc1;
case 0x767bc4:c.instructions+=1;goto B767bc4;
case 0x767bc9:goto L767bc9;
case 0x767bca:goto L767bca;
case 0x767bcc:goto L767bcc;
case 0x767bcf:c.instructions+=1;goto B767bcf;
case 0x767bd4:goto L767bd4;
case 0x767bd5:goto L767bd5;
case 0x767bd6:c.instructions+=9;goto B767bd6;
case 0x767bd8:c.instructions+=8;goto B767bd8;
case 0x767bd9:c.instructions+=7;goto B767bd9;
case 0x767bda:c.instructions+=6;goto B767bda;
case 0x767bdc:c.instructions+=5;goto B767bdc;
case 0x767be3:c.instructions+=4;goto B767be3;
case 0x767bea:c.instructions+=3;goto B767bea;
case 0x767bed:c.instructions+=2;goto B767bed;
case 0x767bf0:c.instructions+=1;goto B767bf0;
case 0x767bf2:goto L767bf2;
case 0x767bf5:c.instructions+=2;goto B767bf5;
case 0x767bf6:c.instructions+=1;goto B767bf6;
case 0x767bf7:goto L767bf7;
case 0x767bf8:c.instructions+=9;goto B767bf8;
case 0x767bf9:c.instructions+=8;goto B767bf9;
case 0x767bfc:c.instructions+=7;goto B767bfc;
case 0x767bfd:c.instructions+=6;goto B767bfd;
case 0x767bff:c.instructions+=5;goto B767bff;
case 0x767c01:c.instructions+=4;goto B767c01;
case 0x767c02:c.instructions+=3;goto B767c02;
case 0x767c03:c.instructions+=2;goto B767c03;
case 0x767c04:c.instructions+=1;goto B767c04;
case 0x767c09:goto L767c09;
case 0x767c0b:c.instructions+=6;goto B767c0b;
case 0x767c0e:c.instructions+=5;goto B767c0e;
case 0x767c0f:c.instructions+=4;goto B767c0f;
case 0x767c11:c.instructions+=3;goto B767c11;
case 0x767c14:c.instructions+=2;goto B767c14;
case 0x767c15:c.instructions+=1;goto B767c15;
case 0x767c1a:goto L767c1a;
case 0x767c1c:c.instructions+=6;goto B767c1c;
case 0x767c1f:c.instructions+=5;goto B767c1f;
case 0x767c20:c.instructions+=4;goto B767c20;
case 0x767c22:c.instructions+=3;goto B767c22;
case 0x767c25:c.instructions+=2;goto B767c25;
case 0x767c26:c.instructions+=1;goto B767c26;
case 0x767c2b:goto L767c2b;
case 0x767c2d:c.instructions+=6;goto B767c2d;
case 0x767c30:c.instructions+=5;goto B767c30;
case 0x767c31:c.instructions+=4;goto B767c31;
case 0x767c33:c.instructions+=3;goto B767c33;
case 0x767c36:c.instructions+=2;goto B767c36;
case 0x767c37:c.instructions+=1;goto B767c37;
case 0x767c3c:goto L767c3c;
case 0x767c3f:c.instructions+=7;goto B767c3f;
case 0x767c41:c.instructions+=6;goto B767c41;
case 0x767c44:c.instructions+=5;goto B767c44;
case 0x767c45:c.instructions+=4;goto B767c45;
case 0x767c47:c.instructions+=3;goto B767c47;
case 0x767c4a:c.instructions+=2;goto B767c4a;
case 0x767c4b:c.instructions+=1;goto B767c4b;
case 0x767c50:goto L767c50;
case 0x767c52:c.instructions+=6;goto B767c52;
case 0x767c55:c.instructions+=5;goto B767c55;
case 0x767c56:c.instructions+=4;goto B767c56;
case 0x767c58:c.instructions+=3;goto B767c58;
case 0x767c5b:c.instructions+=2;goto B767c5b;
case 0x767c5c:c.instructions+=1;goto B767c5c;
case 0x767c61:goto L767c61;
case 0x767c62:c.instructions+=5;goto B767c62;
case 0x767c64:c.instructions+=4;goto B767c64;
case 0x767c67:c.instructions+=3;goto B767c67;
case 0x767c69:c.instructions+=2;goto B767c69;
case 0x767c6a:c.instructions+=1;goto B767c6a;
case 0x767c6f:goto L767c6f;
case 0x767c71:c.instructions+=6;goto B767c71;
case 0x767c74:c.instructions+=5;goto B767c74;
case 0x767c75:c.instructions+=4;goto B767c75;
case 0x767c77:c.instructions+=3;goto B767c77;
case 0x767c7a:c.instructions+=2;goto B767c7a;
case 0x767c7b:c.instructions+=1;goto B767c7b;
case 0x767c80:goto L767c80;
case 0x767c83:c.instructions+=7;goto B767c83;
case 0x767c85:c.instructions+=6;goto B767c85;
case 0x767c88:c.instructions+=5;goto B767c88;
case 0x767c89:c.instructions+=4;goto B767c89;
case 0x767c8b:c.instructions+=3;goto B767c8b;
case 0x767c8e:c.instructions+=2;goto B767c8e;
case 0x767c8f:c.instructions+=1;goto B767c8f;
case 0x767c94:goto L767c94;
case 0x767c96:c.instructions+=6;goto B767c96;
case 0x767c99:c.instructions+=5;goto B767c99;
case 0x767c9a:c.instructions+=4;goto B767c9a;
case 0x767c9c:c.instructions+=3;goto B767c9c;
case 0x767c9f:c.instructions+=2;goto B767c9f;
case 0x767ca0:c.instructions+=1;goto B767ca0;
case 0x767ca5:goto L767ca5;
case 0x767ca7:c.instructions+=6;goto B767ca7;
case 0x767caa:c.instructions+=5;goto B767caa;
case 0x767cab:c.instructions+=4;goto B767cab;
case 0x767cad:c.instructions+=3;goto B767cad;
case 0x767cb0:c.instructions+=2;goto B767cb0;
case 0x767cb1:c.instructions+=1;goto B767cb1;
case 0x767cb6:goto L767cb6;
case 0x767cb8:c.instructions+=6;goto B767cb8;
case 0x767cbb:c.instructions+=5;goto B767cbb;
case 0x767cbc:c.instructions+=4;goto B767cbc;
case 0x767cbe:c.instructions+=3;goto B767cbe;
case 0x767cc1:c.instructions+=2;goto B767cc1;
case 0x767cc2:c.instructions+=1;goto B767cc2;
case 0x767cc7:goto L767cc7;
case 0x767cca:c.instructions+=7;goto B767cca;
case 0x767ccc:c.instructions+=6;goto B767ccc;
case 0x767ccf:c.instructions+=5;goto B767ccf;
case 0x767cd0:c.instructions+=4;goto B767cd0;
case 0x767cd2:c.instructions+=3;goto B767cd2;
case 0x767cd5:c.instructions+=2;goto B767cd5;
case 0x767cd6:c.instructions+=1;goto B767cd6;
case 0x767cdb:goto L767cdb;
case 0x767cdd:c.instructions+=6;goto B767cdd;
case 0x767ce0:c.instructions+=5;goto B767ce0;
case 0x767ce1:c.instructions+=4;goto B767ce1;
case 0x767ce3:c.instructions+=3;goto B767ce3;
case 0x767ce6:c.instructions+=2;goto B767ce6;
case 0x767ce7:c.instructions+=1;goto B767ce7;
case 0x767cec:goto L767cec;
case 0x767cee:c.instructions+=6;goto B767cee;
case 0x767cf1:c.instructions+=5;goto B767cf1;
case 0x767cf2:c.instructions+=4;goto B767cf2;
case 0x767cf4:c.instructions+=3;goto B767cf4;
case 0x767cf7:c.instructions+=2;goto B767cf7;
case 0x767cf8:c.instructions+=1;goto B767cf8;
case 0x767cfd:goto L767cfd;
case 0x767cff:c.instructions+=6;goto B767cff;
case 0x767d02:c.instructions+=5;goto B767d02;
case 0x767d03:c.instructions+=4;goto B767d03;
case 0x767d05:c.instructions+=3;goto B767d05;
case 0x767d08:c.instructions+=2;goto B767d08;
case 0x767d09:c.instructions+=1;goto B767d09;
case 0x767d0e:goto L767d0e;
case 0x767d11:c.instructions+=7;goto B767d11;
case 0x767d13:c.instructions+=6;goto B767d13;
case 0x767d16:c.instructions+=5;goto B767d16;
case 0x767d17:c.instructions+=4;goto B767d17;
case 0x767d19:c.instructions+=3;goto B767d19;
case 0x767d1c:c.instructions+=2;goto B767d1c;
case 0x767d1d:c.instructions+=1;goto B767d1d;
case 0x767d22:goto L767d22;
case 0x767d24:c.instructions+=6;goto B767d24;
case 0x767d27:c.instructions+=5;goto B767d27;
case 0x767d28:c.instructions+=4;goto B767d28;
case 0x767d2a:c.instructions+=3;goto B767d2a;
case 0x767d2d:c.instructions+=2;goto B767d2d;
case 0x767d2e:c.instructions+=1;goto B767d2e;
case 0x767d33:goto L767d33;
case 0x767d35:c.instructions+=6;goto B767d35;
case 0x767d38:c.instructions+=5;goto B767d38;
case 0x767d39:c.instructions+=4;goto B767d39;
case 0x767d3b:c.instructions+=3;goto B767d3b;
case 0x767d3e:c.instructions+=2;goto B767d3e;
case 0x767d3f:c.instructions+=1;goto B767d3f;
case 0x767d44:goto L767d44;
case 0x767d46:c.instructions+=6;goto B767d46;
case 0x767d49:c.instructions+=5;goto B767d49;
case 0x767d4a:c.instructions+=4;goto B767d4a;
case 0x767d4c:c.instructions+=3;goto B767d4c;
case 0x767d4f:c.instructions+=2;goto B767d4f;
case 0x767d50:c.instructions+=1;goto B767d50;
case 0x767d55:goto L767d55;
case 0x767d58:c.instructions+=7;goto B767d58;
case 0x767d5a:c.instructions+=6;goto B767d5a;
case 0x767d5d:c.instructions+=5;goto B767d5d;
case 0x767d5e:c.instructions+=4;goto B767d5e;
case 0x767d60:c.instructions+=3;goto B767d60;
case 0x767d63:c.instructions+=2;goto B767d63;
case 0x767d64:c.instructions+=1;goto B767d64;
case 0x767d69:goto L767d69;
case 0x767d6b:c.instructions+=6;goto B767d6b;
case 0x767d6e:c.instructions+=5;goto B767d6e;
case 0x767d6f:c.instructions+=4;goto B767d6f;
case 0x767d71:c.instructions+=3;goto B767d71;
case 0x767d74:c.instructions+=2;goto B767d74;
case 0x767d75:c.instructions+=1;goto B767d75;
case 0x767d7a:goto L767d7a;
case 0x767d7c:c.instructions+=6;goto B767d7c;
case 0x767d7f:c.instructions+=5;goto B767d7f;
case 0x767d80:c.instructions+=4;goto B767d80;
case 0x767d82:c.instructions+=3;goto B767d82;
case 0x767d85:c.instructions+=2;goto B767d85;
case 0x767d86:c.instructions+=1;goto B767d86;
case 0x767d8b:goto L767d8b;
case 0x767d8d:c.instructions+=6;goto B767d8d;
case 0x767d90:c.instructions+=5;goto B767d90;
case 0x767d91:c.instructions+=4;goto B767d91;
case 0x767d93:c.instructions+=3;goto B767d93;
case 0x767d96:c.instructions+=2;goto B767d96;
case 0x767d97:c.instructions+=1;goto B767d97;
case 0x767d9c:goto L767d9c;
case 0x767d9f:c.instructions+=7;goto B767d9f;
case 0x767da1:c.instructions+=6;goto B767da1;
case 0x767da4:c.instructions+=5;goto B767da4;
case 0x767da5:c.instructions+=4;goto B767da5;
case 0x767da7:c.instructions+=3;goto B767da7;
case 0x767daa:c.instructions+=2;goto B767daa;
case 0x767dab:c.instructions+=1;goto B767dab;
case 0x767db0:goto L767db0;
case 0x767db2:c.instructions+=6;goto B767db2;
case 0x767db5:c.instructions+=5;goto B767db5;
case 0x767db6:c.instructions+=4;goto B767db6;
case 0x767db8:c.instructions+=3;goto B767db8;
case 0x767dbb:c.instructions+=2;goto B767dbb;
case 0x767dbc:c.instructions+=1;goto B767dbc;
case 0x767dc1:goto L767dc1;
case 0x767dc3:c.instructions+=6;goto B767dc3;
case 0x767dc6:c.instructions+=5;goto B767dc6;
case 0x767dc7:c.instructions+=4;goto B767dc7;
case 0x767dc9:c.instructions+=3;goto B767dc9;
case 0x767dcc:c.instructions+=2;goto B767dcc;
case 0x767dcd:c.instructions+=1;goto B767dcd;
case 0x767dd2:goto L767dd2;
case 0x767dd4:c.instructions+=6;goto B767dd4;
case 0x767dd7:c.instructions+=5;goto B767dd7;
case 0x767dd8:c.instructions+=4;goto B767dd8;
case 0x767dda:c.instructions+=3;goto B767dda;
case 0x767ddd:c.instructions+=2;goto B767ddd;
case 0x767dde:c.instructions+=1;goto B767dde;
case 0x767de3:goto L767de3;
case 0x767de6:c.instructions+=7;goto B767de6;
case 0x767de8:c.instructions+=6;goto B767de8;
case 0x767deb:c.instructions+=5;goto B767deb;
case 0x767dec:c.instructions+=4;goto B767dec;
case 0x767dee:c.instructions+=3;goto B767dee;
case 0x767df1:c.instructions+=2;goto B767df1;
case 0x767df2:c.instructions+=1;goto B767df2;
case 0x767df7:goto L767df7;
case 0x767df9:c.instructions+=6;goto B767df9;
case 0x767dfc:c.instructions+=5;goto B767dfc;
case 0x767dfd:c.instructions+=4;goto B767dfd;
case 0x767dff:c.instructions+=3;goto B767dff;
case 0x767e02:c.instructions+=2;goto B767e02;
case 0x767e03:c.instructions+=1;goto B767e03;
case 0x767e08:goto L767e08;
case 0x767e0a:c.instructions+=6;goto B767e0a;
case 0x767e0d:c.instructions+=5;goto B767e0d;
case 0x767e0e:c.instructions+=4;goto B767e0e;
case 0x767e10:c.instructions+=3;goto B767e10;
case 0x767e13:c.instructions+=2;goto B767e13;
case 0x767e14:c.instructions+=1;goto B767e14;
case 0x767e19:goto L767e19;
case 0x767e1b:c.instructions+=6;goto B767e1b;
case 0x767e1e:c.instructions+=5;goto B767e1e;
case 0x767e1f:c.instructions+=4;goto B767e1f;
case 0x767e21:c.instructions+=3;goto B767e21;
case 0x767e24:c.instructions+=2;goto B767e24;
case 0x767e25:c.instructions+=1;goto B767e25;
case 0x767e2a:goto L767e2a;
case 0x767e2d:c.instructions+=7;goto B767e2d;
case 0x767e2f:c.instructions+=6;goto B767e2f;
case 0x767e35:c.instructions+=5;goto B767e35;
case 0x767e36:c.instructions+=4;goto B767e36;
case 0x767e38:c.instructions+=3;goto B767e38;
case 0x767e3b:c.instructions+=2;goto B767e3b;
case 0x767e3c:c.instructions+=1;goto B767e3c;
case 0x767e41:goto L767e41;
case 0x767e43:c.instructions+=6;goto B767e43;
case 0x767e49:c.instructions+=5;goto B767e49;
case 0x767e4a:c.instructions+=4;goto B767e4a;
case 0x767e4c:c.instructions+=3;goto B767e4c;
case 0x767e4f:c.instructions+=2;goto B767e4f;
case 0x767e50:c.instructions+=1;goto B767e50;
case 0x767e55:goto L767e55;
case 0x767e57:c.instructions+=6;goto B767e57;
case 0x767e5d:c.instructions+=5;goto B767e5d;
case 0x767e5e:c.instructions+=4;goto B767e5e;
case 0x767e60:c.instructions+=3;goto B767e60;
case 0x767e63:c.instructions+=2;goto B767e63;
case 0x767e64:c.instructions+=1;goto B767e64;
case 0x767e69:goto L767e69;
case 0x767e6b:c.instructions+=6;goto B767e6b;
case 0x767e71:c.instructions+=5;goto B767e71;
case 0x767e72:c.instructions+=4;goto B767e72;
case 0x767e74:c.instructions+=3;goto B767e74;
case 0x767e77:c.instructions+=2;goto B767e77;
case 0x767e78:c.instructions+=1;goto B767e78;
case 0x767e7d:goto L767e7d;
case 0x767e80:c.instructions+=7;goto B767e80;
case 0x767e82:c.instructions+=6;goto B767e82;
case 0x767e88:c.instructions+=5;goto B767e88;
case 0x767e89:c.instructions+=4;goto B767e89;
case 0x767e8b:c.instructions+=3;goto B767e8b;
case 0x767e8e:c.instructions+=2;goto B767e8e;
case 0x767e8f:c.instructions+=1;goto B767e8f;
case 0x767e94:goto L767e94;
case 0x767e96:c.instructions+=6;goto B767e96;
case 0x767e9c:c.instructions+=5;goto B767e9c;
case 0x767e9d:c.instructions+=4;goto B767e9d;
case 0x767e9f:c.instructions+=3;goto B767e9f;
case 0x767ea2:c.instructions+=2;goto B767ea2;
case 0x767ea3:c.instructions+=1;goto B767ea3;
case 0x767ea8:goto L767ea8;
case 0x767eaa:c.instructions+=6;goto B767eaa;
case 0x767eb0:c.instructions+=5;goto B767eb0;
case 0x767eb1:c.instructions+=4;goto B767eb1;
case 0x767eb3:c.instructions+=3;goto B767eb3;
case 0x767eb6:c.instructions+=2;goto B767eb6;
case 0x767eb7:c.instructions+=1;goto B767eb7;
case 0x767ebc:goto L767ebc;
case 0x767ebe:c.instructions+=6;goto B767ebe;
case 0x767ec4:c.instructions+=5;goto B767ec4;
case 0x767ec5:c.instructions+=4;goto B767ec5;
case 0x767ec7:c.instructions+=3;goto B767ec7;
case 0x767eca:c.instructions+=2;goto B767eca;
case 0x767ecb:c.instructions+=1;goto B767ecb;
case 0x767ed0:goto L767ed0;
case 0x767ed3:c.instructions+=7;goto B767ed3;
case 0x767ed5:c.instructions+=6;goto B767ed5;
case 0x767edb:c.instructions+=5;goto B767edb;
case 0x767edc:c.instructions+=4;goto B767edc;
case 0x767ede:c.instructions+=3;goto B767ede;
case 0x767ee1:c.instructions+=2;goto B767ee1;
case 0x767ee2:c.instructions+=1;goto B767ee2;
case 0x767ee7:goto L767ee7;
case 0x767ee9:c.instructions+=6;goto B767ee9;
case 0x767eef:c.instructions+=5;goto B767eef;
case 0x767ef0:c.instructions+=4;goto B767ef0;
case 0x767ef2:c.instructions+=3;goto B767ef2;
case 0x767ef5:c.instructions+=2;goto B767ef5;
case 0x767ef6:c.instructions+=1;goto B767ef6;
case 0x767efb:goto L767efb;
case 0x767efd:c.instructions+=6;goto B767efd;
case 0x767f03:c.instructions+=5;goto B767f03;
case 0x767f04:c.instructions+=4;goto B767f04;
case 0x767f09:c.instructions+=3;goto B767f09;
case 0x767f0c:c.instructions+=2;goto B767f0c;
case 0x767f0d:c.instructions+=1;goto B767f0d;
case 0x767f12:goto L767f12;
case 0x767f15:c.instructions+=7;goto B767f15;
case 0x767f17:c.instructions+=6;goto B767f17;
case 0x767f1d:c.instructions+=5;goto B767f1d;
case 0x767f1e:c.instructions+=4;goto B767f1e;
case 0x767f23:c.instructions+=3;goto B767f23;
case 0x767f24:c.instructions+=2;goto B767f24;
case 0x767f26:c.instructions+=1;goto B767f26;
case 0x767f2b:goto L767f2b;
case 0x767f2e:c.instructions+=7;goto B767f2e;
case 0x767f30:c.instructions+=6;goto B767f30;
case 0x767f36:c.instructions+=5;goto B767f36;
case 0x767f38:c.instructions+=4;goto B767f38;
case 0x767f39:c.instructions+=3;goto B767f39;
case 0x767f3a:c.instructions+=2;goto B767f3a;
case 0x767f3b:c.instructions+=1;goto B767f3b;
case 0x767f3c:goto L767f3c;
case 0x767f3d:c.instructions+=3;goto B767f3d;
case 0x767f41:c.instructions+=2;goto B767f41;
case 0x767f43:c.instructions+=1;goto B767f43;
case 0x767f49:goto L767f49;
case 0x767f4c:c.instructions+=1;goto B767f4c;
case 0x767f51:goto L767f51;
case 0x767f54:c.instructions+=1;goto B767f54;
case 0x767f59:goto L767f59;
case 0x767f5c:c.instructions+=1;goto B767f5c;
case 0x767f61:goto L767f61;
case 0x767f64:c.instructions+=1;goto B767f64;
case 0x767f69:goto L767f69;
case 0x767f6c:c.instructions+=1;goto B767f6c;
case 0x767f71:goto L767f71;
case 0x767f74:c.instructions+=1;goto B767f74;
case 0x767f79:goto L767f79;
case 0x767f7b:c.instructions+=1;goto B767f7b;
case 0x767f80:goto L767f80;
case 0x767f83:c.instructions+=1;goto B767f83;
case 0x767f88:goto L767f88;
case 0x767f8b:c.instructions+=1;goto B767f8b;
case 0x767f90:goto L767f90;
case 0x767f93:c.instructions+=1;goto B767f93;
case 0x767f98:goto L767f98;
case 0x767f9b:c.instructions+=1;goto B767f9b;
case 0x767fa0:goto L767fa0;
case 0x767fa3:c.instructions+=1;goto B767fa3;
case 0x767fa8:goto L767fa8;
case 0x767fab:c.instructions+=1;goto B767fab;
case 0x767fb0:goto L767fb0;
case 0x767fb3:c.instructions+=1;goto B767fb3;
case 0x767fb8:goto L767fb8;
case 0x767fbb:c.instructions+=1;goto B767fbb;
case 0x767fc0:goto L767fc0;
case 0x767fc3:c.instructions+=1;goto B767fc3;
case 0x767fc8:goto L767fc8;
case 0x767fcb:c.instructions+=2;goto B767fcb;
case 0x767fce:c.instructions+=1;goto B767fce;
case 0x767fd3:goto L767fd3;
case 0x767fd6:c.instructions+=1;goto B767fd6;
case 0x767fdb:goto L767fdb;
case 0x767fde:c.instructions+=1;goto B767fde;
case 0x767fe3:goto L767fe3;
case 0x767fe6:c.instructions+=1;goto B767fe6;
case 0x767feb:goto L767feb;
case 0x767fee:c.instructions+=1;goto B767fee;
case 0x767ff3:goto L767ff3;
case 0x767ff6:c.instructions+=1;goto B767ff6;
case 0x767ffb:goto L767ffb;
case 0x767ffe:c.instructions+=1;goto B767ffe;
default:missing_instruction(c.pc);}
B767003:L767003:{c.instructions+=2;NFSU2_TR(0x767003);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B767005:{NFSU2_TR(0x767005);
if(r1(R+518)){{goto L767015;}}
}
B767007:L767007:{c.instructions+=3;NFSU2_TR(0x767007);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76700a:{NFSU2_TR(0x76700a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76700e:{NFSU2_TR(0x76700e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0xc0000091ull));
s4(u32(r4(U+0)),r4(U+4));
}
B767015:L767015:{c.instructions+=2;NFSU2_TR(0x767015);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B767018:{NFSU2_TR(0x767018);
if(r1(R+518)){{goto L767028;}}
}
B76701a:L76701a:{c.instructions+=3;NFSU2_TR(0x76701a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76701d:{NFSU2_TR(0x76701d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B767021:{NFSU2_TR(0x767021);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0xc000008eull));
s4(u32(r4(U+0)),r4(U+4));
}
B767028:L767028:{c.instructions+=2;NFSU2_TR(0x767028);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76702b:{NFSU2_TR(0x76702b);
if(r1(R+518)){{goto L76703b;}}
}
B76702d:L76702d:{c.instructions+=3;NFSU2_TR(0x76702d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767030:{NFSU2_TR(0x767030);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B767034:{NFSU2_TR(0x767034);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0xc0000090ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76703b:L76703b:{c.instructions+=39;NFSU2_TR(0x76703b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76703e:{NFSU2_TR(0x76703e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B767040:{NFSU2_TR(0x767040);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767043:{NFSU2_TR(0x767043);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B767046:{NFSU2_TR(0x767046);
w4(R+4,u32(~u32(r4(R+4))));
}
B767048:{NFSU2_TR(0x767048);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76704b:{NFSU2_TR(0x76704b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76704d:{NFSU2_TR(0x76704d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x10ull))));
}
B767050:{NFSU2_TR(0x767050);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B767053:{NFSU2_TR(0x767053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B767055:{NFSU2_TR(0x767055);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767058:{NFSU2_TR(0x767058);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B76705a:{NFSU2_TR(0x76705a);
w4(R+4,u32(~u32(r4(R+4))));
}
B76705c:{NFSU2_TR(0x76705c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76705f:{NFSU2_TR(0x76705f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B767060:{NFSU2_TR(0x767060);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8ull))));
}
B767063:{NFSU2_TR(0x767063);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B767066:{NFSU2_TR(0x767066);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B767068:{NFSU2_TR(0x767068);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76706b:{NFSU2_TR(0x76706b);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B76706d:{NFSU2_TR(0x76706d);
w4(R+4,u32(~u32(r4(R+4))));
}
B76706f:{NFSU2_TR(0x76706f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B767072:{NFSU2_TR(0x767072);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x4ull))));
}
B767075:{NFSU2_TR(0x767075);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B767078:{NFSU2_TR(0x767078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76707a:{NFSU2_TR(0x76707a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76707d:{NFSU2_TR(0x76707d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B767080:{NFSU2_TR(0x767080);
w4(R+4,u32(~u32(r4(R+4))));
}
B767082:{NFSU2_TR(0x767082);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B767085:{NFSU2_TR(0x767085);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B767087:{NFSU2_TR(0x767087);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B76708a:{NFSU2_TR(0x76708a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76708c:{NFSU2_TR(0x76708c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76708f:{NFSU2_TR(0x76708f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B767092:{NFSU2_TR(0x767092);
w4(R+4,u32(~u32(r4(R+4))));
}
B767094:{NFSU2_TR(0x767094);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B767097:{NFSU2_TR(0x767097);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+12))));
}
B767099:{NFSU2_TR(0x767099);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+4))));
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
B76709c:{NFSU2_TR(0x76709c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7670a1ull));
{goto L767689;}
}
B7670a1:L7670a1:{c.instructions+=2;NFSU2_TR(0x7670a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7670a3:{NFSU2_TR(0x7670a3);
if(r1(R+518)){{goto L7670ac;}}
}
B7670a5:L7670a5:{c.instructions+=2;NFSU2_TR(0x7670a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7670a8:{NFSU2_TR(0x7670a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7670ac:L7670ac:{c.instructions+=2;NFSU2_TR(0x7670ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7670ae:{NFSU2_TR(0x7670ae);
if(r1(R+518)){{goto L7670b7;}}
}
B7670b0:L7670b0:{c.instructions+=2;NFSU2_TR(0x7670b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7670b3:{NFSU2_TR(0x7670b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7670b7:L7670b7:{c.instructions+=2;NFSU2_TR(0x7670b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7670b9:{NFSU2_TR(0x7670b9);
if(r1(R+518)){{goto L7670c2;}}
}
B7670bb:L7670bb:{c.instructions+=2;NFSU2_TR(0x7670bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7670be:{NFSU2_TR(0x7670be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7670c2:L7670c2:{c.instructions+=2;NFSU2_TR(0x7670c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7670c4:{NFSU2_TR(0x7670c4);
if(r1(R+518)){{goto L7670cc;}}
}
B7670c6:L7670c6:{c.instructions+=2;NFSU2_TR(0x7670c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7670c9:{NFSU2_TR(0x7670c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B7670cc:L7670cc:{c.instructions+=2;NFSU2_TR(0x7670cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7670ce:{NFSU2_TR(0x7670ce);
if(r1(R+518)){{goto L7670d6;}}
}
B7670d0:L7670d0:{c.instructions+=2;NFSU2_TR(0x7670d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7670d3:{NFSU2_TR(0x7670d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7670d6:L7670d6:{c.instructions+=4;NFSU2_TR(0x7670d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7670d8:{NFSU2_TR(0x7670d8);
w4(R+4,u32(0xc00ull));
}
B7670dd:{NFSU2_TR(0x7670dd);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7670df:{NFSU2_TR(0x7670df);
if(r1(R+518)){{goto L767115;}}
}
B7670e1:L7670e1:{c.instructions+=2;NFSU2_TR(0x7670e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7670e6:{NFSU2_TR(0x7670e6);
if(r1(R+518)){{goto L767107;}}
}
B7670e8:L7670e8:{c.instructions+=2;NFSU2_TR(0x7670e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x800ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7670ed:{NFSU2_TR(0x7670ed);
if(r1(R+518)){{goto L7670fb;}}
}
B7670ef:L7670ef:{c.instructions+=2;NFSU2_TR(0x7670ef);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7670f1:{NFSU2_TR(0x7670f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76711b;}}
}
B7670f3:L7670f3:{c.instructions+=3;NFSU2_TR(0x7670f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7670f6:{NFSU2_TR(0x7670f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x3ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B7670f9:{NFSU2_TR(0x7670f9);
{goto L76711b;}
}
B7670fb:L7670fb:{c.instructions+=5;NFSU2_TR(0x7670fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7670fe:{NFSU2_TR(0x7670fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B767100:{NFSU2_TR(0x767100);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B767103:{NFSU2_TR(0x767103);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B767105:{NFSU2_TR(0x767105);
{goto L767111;}
}
B767107:L767107:{c.instructions+=4;NFSU2_TR(0x767107);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76710a:{NFSU2_TR(0x76710a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76710c:{NFSU2_TR(0x76710c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffdull))));
}
B76710f:{NFSU2_TR(0x76710f);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+12))));
}
B767111:L767111:{c.instructions+=2;NFSU2_TR(0x767111);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B767113:{NFSU2_TR(0x767113);
{goto L76711b;}
}
B767115:L767115:{c.instructions+=2;NFSU2_TR(0x767115);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767118:{NFSU2_TR(0x767118);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffcull))));
s4(u32(r4(R+0)),r4(U+0));
}
B76711b:L76711b:{c.instructions+=4;NFSU2_TR(0x76711b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76711d:{NFSU2_TR(0x76711d);
w4(R+4,u32(0x300ull));
}
B767122:{NFSU2_TR(0x767122);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B767124:{NFSU2_TR(0x767124);
if(r1(R+518)){{goto L767146;}}
}
B767126:L767126:{c.instructions+=2;NFSU2_TR(0x767126);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76712b:{NFSU2_TR(0x76712b);
if(r1(R+518)){{goto L767139;}}
}
B76712d:L76712d:{c.instructions+=2;NFSU2_TR(0x76712d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76712f:{NFSU2_TR(0x76712f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767153;}}
}
B767131:L767131:{c.instructions+=3;NFSU2_TR(0x767131);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767134:{NFSU2_TR(0x767134);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xffffffe3ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B767137:{NFSU2_TR(0x767137);
{goto L767153;}
}
B767139:L767139:{c.instructions+=5;NFSU2_TR(0x767139);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76713c:{NFSU2_TR(0x76713c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76713e:{NFSU2_TR(0x76713e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffe7ull))));
}
B767141:{NFSU2_TR(0x767141);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x4ull))));
}
B767144:{NFSU2_TR(0x767144);
{goto L767151;}
}
B767146:L767146:{c.instructions+=4;NFSU2_TR(0x767146);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767149:{NFSU2_TR(0x767149);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76714b:{NFSU2_TR(0x76714b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffebull))));
}
B76714e:{NFSU2_TR(0x76714e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x8ull))));
}
B767151:L767151:{c.instructions+=1;NFSU2_TR(0x767151);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B767153:L767153:{c.instructions+=29;NFSU2_TR(0x767153);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767156:{NFSU2_TR(0x767156);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B767159:{NFSU2_TR(0x767159);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B76715c:{NFSU2_TR(0x76715c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+0))));
}
B76715e:{NFSU2_TR(0x76715e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ffe0ull))));
}
B767164:{NFSU2_TR(0x767164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))^u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B767166:{NFSU2_TR(0x767166);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767169:{NFSU2_TR(0x767169);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B76716c:{NFSU2_TR(0x76716c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76716f:{NFSU2_TR(0x76716f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B767172:{NFSU2_TR(0x767172);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffe3ull))));
}
B767175:{NFSU2_TR(0x767175);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B767177:{NFSU2_TR(0x767177);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76717a:{NFSU2_TR(0x76717a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76717d:{NFSU2_TR(0x76717d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76717f:{NFSU2_TR(0x76717f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767182:{NFSU2_TR(0x767182);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B767185:{NFSU2_TR(0x767185);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767188:{NFSU2_TR(0x767188);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B76718b:{NFSU2_TR(0x76718b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76718e:{NFSU2_TR(0x76718e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B767191:{NFSU2_TR(0x767191);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffe3ull))));
}
B767194:{NFSU2_TR(0x767194);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B767196:{NFSU2_TR(0x767196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B767199:{NFSU2_TR(0x767199);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76719c:{NFSU2_TR(0x76719c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76719e:{NFSU2_TR(0x76719e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7671a1:{NFSU2_TR(0x7671a1);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7671a4:{NFSU2_TR(0x7671a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7671a9ull));
{goto L767696;}
}
B7671a9:L7671a9:{c.instructions+=6;NFSU2_TR(0x7671a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7671ac:{NFSU2_TR(0x7671ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7671ad:{NFSU2_TR(0x7671ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7671ae:{NFSU2_TR(0x7671ae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7671b0:{NFSU2_TR(0x7671b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7671b3:{NFSU2_TR(0x7671b3);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832a4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7671b9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7671b9:L7671b9:{c.instructions+=3;NFSU2_TR(0x7671b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7671bc:{NFSU2_TR(0x7671bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B7671c0:{NFSU2_TR(0x7671c0);
if(r1(R+518)){{goto L7671c5;}}
}
B7671c2:L7671c2:{c.instructions+=1;NFSU2_TR(0x7671c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffeull))));
s4(u32(r4(R+24)),r4(U+0));
}
B7671c5:L7671c5:{c.instructions+=2;NFSU2_TR(0x7671c5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B7671c9:{NFSU2_TR(0x7671c9);
if(r1(R+518)){{goto L7671ce;}}
}
B7671cb:L7671cb:{c.instructions+=1;NFSU2_TR(0x7671cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffbull))));
s4(u32(r4(R+24)),r4(U+0));
}
B7671ce:L7671ce:{c.instructions+=2;NFSU2_TR(0x7671ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B7671d2:{NFSU2_TR(0x7671d2);
if(r1(R+518)){{goto L7671d7;}}
}
B7671d4:L7671d4:{c.instructions+=1;NFSU2_TR(0x7671d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffff7ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B7671d7:L7671d7:{c.instructions+=2;NFSU2_TR(0x7671d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B7671db:{NFSU2_TR(0x7671db);
if(r1(R+518)){{goto L7671e0;}}
}
B7671dd:L7671dd:{c.instructions+=1;NFSU2_TR(0x7671dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xffffffefull))));
s4(u32(r4(R+24)),r4(U+0));
}
B7671e0:L7671e0:{c.instructions+=2;NFSU2_TR(0x7671e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+12))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B7671e3:{NFSU2_TR(0x7671e3);
if(r1(R+518)){{goto L7671e8;}}
}
B7671e5:L7671e5:{c.instructions+=1;NFSU2_TR(0x7671e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xffffffdfull))));
s4(u32(r4(R+24)),r4(U+0));
}
B7671e8:L7671e8:{c.instructions+=5;NFSU2_TR(0x7671e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7671ea:{NFSU2_TR(0x7671ea);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7671ed:{NFSU2_TR(0x7671ed);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B7671f0:{NFSU2_TR(0x7671f0);
w4(R+8,u32(0xfffff3ffull));
}
B7671f5:{NFSU2_TR(0x7671f5);
if(r1(R+518)){{goto L767228;}}
}
B7671f7:L7671f7:{c.instructions+=2;NFSU2_TR(0x7671f7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B7671f8:{NFSU2_TR(0x7671f8);
if(r1(R+518)){{goto L767216;}}
}
B7671fa:L7671fa:{c.instructions+=2;NFSU2_TR(0x7671fa);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B7671fb:{NFSU2_TR(0x7671fb);
if(r1(R+518)){{goto L767206;}}
}
B7671fd:L7671fd:{c.instructions+=2;NFSU2_TR(0x7671fd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B7671fe:{NFSU2_TR(0x7671fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76722a;}}
}
B767200:L767200:{c.instructions+=2;NFSU2_TR(0x767200);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0xcull))));
s1(u32(r4(U+0)),r1(U+4));
}
B767204:{NFSU2_TR(0x767204);
{goto L76722a;}
}
B767206:L767206:{c.instructions+=4;NFSU2_TR(0x767206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B767208:{NFSU2_TR(0x767208);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffbffull))));
}
B76720e:{NFSU2_TR(0x76720e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x800ull))));
}
B767214:{NFSU2_TR(0x767214);
{goto L767224;}
}
B767216:L767216:{c.instructions+=3;NFSU2_TR(0x767216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B767218:{NFSU2_TR(0x767218);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffff7ffull))));
}
B76721e:{NFSU2_TR(0x76721e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400ull))));
}
B767224:L767224:{c.instructions+=2;NFSU2_TR(0x767224);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B767226:{NFSU2_TR(0x767226);
{goto L76722a;}
}
B767228:L767228:{c.instructions+=1;NFSU2_TR(0x767228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+8))));
s4(u32(r4(R+24)),r4(U+0));
}
B76722a:L76722a:{c.instructions+=5;NFSU2_TR(0x76722a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76722c:{NFSU2_TR(0x76722c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B76722f:{NFSU2_TR(0x76722f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B767232:{NFSU2_TR(0x767232);
w1(R+512,u8((r4(R+4))<(u32(0x0ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B767235:{NFSU2_TR(0x767235);
if(r1(R+518)){{goto L76724d;}}
}
B767237:L767237:{c.instructions+=2;NFSU2_TR(0x767237);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B767238:{NFSU2_TR(0x767238);
if(r1(R+518)){{goto L767241;}}
}
B76723a:L76723a:{c.instructions+=2;NFSU2_TR(0x76723a);
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
B76723b:{NFSU2_TR(0x76723b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767259;}}
}
B76723d:L76723d:{c.instructions+=2;NFSU2_TR(0x76723d);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+8))));
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
B76723f:{NFSU2_TR(0x76723f);
{goto L767259;}
}
B767241:L767241:{c.instructions+=4;NFSU2_TR(0x767241);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B767243:{NFSU2_TR(0x767243);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B767245:{NFSU2_TR(0x767245);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76724b:{NFSU2_TR(0x76724b);
{goto L767257;}
}
B76724d:L76724d:{c.instructions+=3;NFSU2_TR(0x76724d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76724f:{NFSU2_TR(0x76724f);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B767251:{NFSU2_TR(0x767251);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x300ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B767257:L767257:{c.instructions+=1;NFSU2_TR(0x767257);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B767259:L767259:{c.instructions+=7;NFSU2_TR(0x767259);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76725c:{NFSU2_TR(0x76725c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76725e:{NFSU2_TR(0x76725e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76725f:{NFSU2_TR(0x76725f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B767260:{NFSU2_TR(0x767260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B767261:{NFSU2_TR(0x767261);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B767262:{NFSU2_TR(0x767262);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B767263:L767263:{c.instructions+=13;NFSU2_TR(0x767263);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767264:{NFSU2_TR(0x767264);
__builtin_memmove((R+20),(R+16),4);
}
B767266:{NFSU2_TR(0x767266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B767269:{NFSU2_TR(0x767269);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76726c:{NFSU2_TR(0x76726c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76726d:{NFSU2_TR(0x76726d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76726e:{NFSU2_TR(0x76726e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B767270:{NFSU2_TR(0x767270);
__builtin_memmove((R+24),(R+0),4);
}
B767272:{NFSU2_TR(0x767272);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1full))));
}
B767275:{NFSU2_TR(0x767275);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B767276:{NFSU2_TR(0x767276);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B767278:{NFSU2_TR(0x767278);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76727b:{NFSU2_TR(0x76727b);
if(r1(R+518)){{goto L767291;}}
}
B76727d:L76727d:{c.instructions+=2;NFSU2_TR(0x76727d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+12))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B767280:{NFSU2_TR(0x767280);
if(r1(R+518)){{goto L767291;}}
}
B767282:L767282:{c.instructions+=2;NFSU2_TR(0x767282);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767283:{NFSU2_TR(0x767283);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767288ull));
{goto L7676c8;}
}
B767288:L767288:{c.instructions+=3;NFSU2_TR(0x767288);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767289:{NFSU2_TR(0x767289);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff7ull))));
}
B76728c:{NFSU2_TR(0x76728c);
{goto L767463;}
}
B767291:L767291:{c.instructions+=2;NFSU2_TR(0x767291);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B767293:{NFSU2_TR(0x767293);
if(r1(R+518)){{goto L7672ab;}}
}
B767295:L767295:{c.instructions+=2;NFSU2_TR(0x767295);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B767299:{NFSU2_TR(0x767299);
if(r1(R+518)){{goto L7672ab;}}
}
B76729b:L76729b:{c.instructions+=2;NFSU2_TR(0x76729b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76729d:{NFSU2_TR(0x76729d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7672a2ull));
{goto L7676c8;}
}
B7672a2:L7672a2:{c.instructions+=3;NFSU2_TR(0x7672a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7672a3:{NFSU2_TR(0x7672a3);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffbull))));
}
B7672a6:{NFSU2_TR(0x7672a6);
{goto L767463;}
}
B7672ab:L7672ab:{c.instructions+=2;NFSU2_TR(0x7672ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7672ad:{NFSU2_TR(0x7672ad);
if(r1(R+518)){{goto L76738b;}}
}
B7672b3:L7672b3:{c.instructions+=2;NFSU2_TR(0x7672b3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B7672b7:{NFSU2_TR(0x7672b7);
if(r1(R+518)){{goto L76738b;}}
}
B7672bd:L7672bd:{c.instructions+=2;NFSU2_TR(0x7672bd);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7672bf:{NFSU2_TR(0x7672bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7672c4ull));
{goto L7676c8;}
}
B7672c4:L7672c4:{c.instructions+=5;NFSU2_TR(0x7672c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7672c7:{NFSU2_TR(0x7672c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7672c8:{NFSU2_TR(0x7672c8);
w4(R+4,u32(0xc00ull));
}
B7672cd:{NFSU2_TR(0x7672cd);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7672cf:{NFSU2_TR(0x7672cf);
if(r1(R+518)){{goto L767361;}}
}
B7672d5:L7672d5:{c.instructions+=2;NFSU2_TR(0x7672d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7672da:{NFSU2_TR(0x7672da);
if(r1(R+518)){{goto L767337;}}
}
B7672dc:L7672dc:{c.instructions+=2;NFSU2_TR(0x7672dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x800ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7672e1:{NFSU2_TR(0x7672e1);
if(r1(R+518)){{goto L76730d;}}
}
B7672e3:L7672e3:{c.instructions+=2;NFSU2_TR(0x7672e3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7672e5:{NFSU2_TR(0x7672e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767383;}}
}
B7672eb:L7672eb:{c.instructions+=7;NFSU2_TR(0x7672eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7672ee:{NFSU2_TR(0x7672ee);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7672f0:{NFSU2_TR(0x7672f0);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B7672f6:{NFSU2_TR(0x7672f6);
{u32 ea_=u32(u32(8497184u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7672fc:{NFSU2_TR(0x7672fc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7672fe:{NFSU2_TR(0x7672fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B767301:{NFSU2_TR(0x767301);
if(r1(R+518)){{goto L767305;}}
}
B767303:L767303:{c.instructions+=1;NFSU2_TR(0x767303);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B767305:L767305:{c.instructions+=3;NFSU2_TR(0x767305);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B767308:{NFSU2_TR(0x767308);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76730b:{NFSU2_TR(0x76730b);
{goto L767381;}
}
B76730d:L76730d:{c.instructions+=6;NFSU2_TR(0x76730d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B767310:{NFSU2_TR(0x767310);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B767312:{NFSU2_TR(0x767312);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B767318:{NFSU2_TR(0x767318);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B76731a:{NFSU2_TR(0x76731a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76731d:{NFSU2_TR(0x76731d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767327;}}
}
B76731f:L76731f:{c.instructions+=2;NFSU2_TR(0x76731f);
{u32 ea_=u32(u32(8497168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B767325:{NFSU2_TR(0x767325);
{goto L76732f;}
}
B767327:L767327:{c.instructions+=2;NFSU2_TR(0x767327);
{u32 ea_=u32(u32(8497184u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76732d:{NFSU2_TR(0x76732d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B76732f:L76732f:{c.instructions+=3;NFSU2_TR(0x76732f);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B767332:{NFSU2_TR(0x767332);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B767335:{NFSU2_TR(0x767335);
{goto L767381;}
}
B767337:L767337:{c.instructions+=6;NFSU2_TR(0x767337);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76733a:{NFSU2_TR(0x76733a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76733c:{NFSU2_TR(0x76733c);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B767342:{NFSU2_TR(0x767342);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B767344:{NFSU2_TR(0x767344);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B767347:{NFSU2_TR(0x767347);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767351;}}
}
B767349:L767349:{c.instructions+=2;NFSU2_TR(0x767349);
{u32 ea_=u32(u32(8497184u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76734f:{NFSU2_TR(0x76734f);
{goto L767359;}
}
B767351:L767351:{c.instructions+=2;NFSU2_TR(0x767351);
{u32 ea_=u32(u32(8497168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B767357:{NFSU2_TR(0x767357);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B767359:L767359:{c.instructions+=3;NFSU2_TR(0x767359);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76735c:{NFSU2_TR(0x76735c);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76735f:{NFSU2_TR(0x76735f);
{goto L767381;}
}
B767361:L767361:{c.instructions+=7;NFSU2_TR(0x767361);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B767364:{NFSU2_TR(0x767364);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B767366:{NFSU2_TR(0x767366);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B76736c:{NFSU2_TR(0x76736c);
{u32 ea_=u32(u32(8497168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B767372:{NFSU2_TR(0x767372);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B767374:{NFSU2_TR(0x767374);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B767377:{NFSU2_TR(0x767377);
if(r1(R+518)){{goto L76737b;}}
}
B767379:L767379:{c.instructions+=1;NFSU2_TR(0x767379);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B76737b:L76737b:{c.instructions+=2;NFSU2_TR(0x76737b);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76737e:{NFSU2_TR(0x76737e);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B767381:L767381:{c.instructions+=1;NFSU2_TR(0x767381);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B767383:L767383:{c.instructions+=2;NFSU2_TR(0x767383);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffeull))));
}
B767386:{NFSU2_TR(0x767386);
{goto L767463;}
}
B76738b:L76738b:{c.instructions+=2;NFSU2_TR(0x76738b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76738d:{NFSU2_TR(0x76738d);
if(r1(R+518)){{goto L767463;}}
}
B767393:L767393:{c.instructions+=2;NFSU2_TR(0x767393);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B767397:{NFSU2_TR(0x767397);
if(r1(R+518)){{goto L767463;}}
}
B76739d:L76739d:{c.instructions+=3;NFSU2_TR(0x76739d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76739f:{NFSU2_TR(0x76739f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7673a1:{NFSU2_TR(0x7673a1);
if(r1(R+518)){{goto L7673a5;}}
}
B7673a3:L7673a3:{c.instructions+=1;NFSU2_TR(0x7673a3);
__builtin_memmove((R+24),(R+12),4);
}
B7673a5:L7673a5:{c.instructions+=7;NFSU2_TR(0x7673a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7673a6:{NFSU2_TR(0x7673a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7673a9:{NFSU2_TR(0x7673a9);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7673ab:{NFSU2_TR(0x7673ab);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B7673b1:{NFSU2_TR(0x7673b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7673b3:{NFSU2_TR(0x7673b3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7673b6:{NFSU2_TR(0x7673b6);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L76744d;}}
}
B7673bc:L7673bc:{c.instructions+=7;NFSU2_TR(0x7673bc);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7673be:{NFSU2_TR(0x7673be);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7673c1:{NFSU2_TR(0x7673c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7673c2:{NFSU2_TR(0x7673c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7673c3:{NFSU2_TR(0x7673c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7673c4:{NFSU2_TR(0x7673c4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7673c7:{NFSU2_TR(0x7673c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7673ccull));
TAIL_STATIC(0x766f04u,766);
}
B7673cc:L7673cc:{c.instructions+=7;NFSU2_TR(0x7673cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7673cf:{NFSU2_TR(0x7673cf);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7673d2:{NFSU2_TR(0x7673d2);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7673d5:{NFSU2_TR(0x7673d5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffa00ull))));
}
B7673db:{NFSU2_TR(0x7673db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7673de:{NFSU2_TR(0x7673de);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfffffbceull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffbceull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7673e4:{NFSU2_TR(0x7673e4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7673f0;}}
}
B7673e6:L7673e6:{c.instructions+=3;NFSU2_TR(0x7673e6);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7673ec:{NFSU2_TR(0x7673ec);
__builtin_memmove((R+24),(R+12),4);
}
B7673ee:{NFSU2_TR(0x7673ee);
{goto L767443;}
}
B7673f0:L7673f0:{c.instructions+=4;NFSU2_TR(0x7673f0);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B7673f6:{NFSU2_TR(0x7673f6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7673f8:{NFSU2_TR(0x7673f8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7673fb:{NFSU2_TR(0x7673fb);
if(r1(R+514)){{goto L767401;}}
}
B7673fd:L7673fd:{c.instructions+=2;NFSU2_TR(0x7673fd);
__builtin_memmove((R+8),(R+12),4);
}
B7673ff:{NFSU2_TR(0x7673ff);
{goto L767403;}
}
B767401:L767401:{c.instructions+=1;NFSU2_TR(0x767401);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B767403:L767403:{c.instructions+=8;NFSU2_TR(0x767403);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B767405:{NFSU2_TR(0x767405);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B767408:{NFSU2_TR(0x767408);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B76740b:{NFSU2_TR(0x76740b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10ull))));
}
B76740e:{NFSU2_TR(0x76740e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B767412:{NFSU2_TR(0x767412);
w4(R+0,u32(0xfffffc03ull));
}
B767417:{NFSU2_TR(0x767417);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B767419:{NFSU2_TR(0x767419);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76743a;}}
}
B76741b:L76741b:{c.instructions+=1;NFSU2_TR(0x76741b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B76741d:L76741d:{c.instructions+=2;NFSU2_TR(0x76741d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+12))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B767420:{NFSU2_TR(0x767420);
if(r1(R+518)){{goto L767428;}}
}
B767422:L767422:{c.instructions+=2;NFSU2_TR(0x767422);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B767424:{NFSU2_TR(0x767424);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767428;}}
}
B767426:L767426:{c.instructions+=1;NFSU2_TR(0x767426);
__builtin_memmove((R+24),(R+12),4);
}
B767428:L767428:{c.instructions+=3;NFSU2_TR(0x767428);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shr<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76742b:{NFSU2_TR(0x76742b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+12))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76742e:{NFSU2_TR(0x76742e);
if(r1(R+518)){{goto L767434;}}
}
B767430:L767430:{c.instructions+=1;NFSU2_TR(0x767430);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x80ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B767434:L767434:{c.instructions+=3;NFSU2_TR(0x767434);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shr<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B767437:{NFSU2_TR(0x767437);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B767438:{NFSU2_TR(0x767438);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76741du);}goto L76741d;}}
}
B76743a:L76743a:{c.instructions+=2;NFSU2_TR(0x76743a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76743c:{NFSU2_TR(0x76743c);
if(r1(R+518)){{goto L767446;}}
}
B76743e:L76743e:{c.instructions+=2;NFSU2_TR(0x76743e);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B767441:{NFSU2_TR(0x767441);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B767443:L767443:{c.instructions+=1;NFSU2_TR(0x767443);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B767446:L767446:{c.instructions+=3;NFSU2_TR(0x767446);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B767449:{NFSU2_TR(0x767449);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76744b:{NFSU2_TR(0x76744b);
{goto L76744f;}
}
B76744d:L76744d:{c.instructions+=1;NFSU2_TR(0x76744d);
__builtin_memmove((R+24),(R+12),4);
}
B76744f:L76744f:{c.instructions+=3;NFSU2_TR(0x76744f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B767451:{NFSU2_TR(0x767451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B767452:{NFSU2_TR(0x767452);
if(r1(R+518)){{goto L76745c;}}
}
B767454:L767454:{c.instructions+=2;NFSU2_TR(0x767454);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767456:{NFSU2_TR(0x767456);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76745bull));
{goto L7676c8;}
}
B76745b:L76745b:{c.instructions+=1;NFSU2_TR(0x76745b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76745c:L76745c:{c.instructions+=2;NFSU2_TR(0x76745c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B767460:{NFSU2_TR(0x767460);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B767463:L767463:{c.instructions+=2;NFSU2_TR(0x767463);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B767467:{NFSU2_TR(0x767467);
if(r1(R+518)){{goto L76747a;}}
}
B767469:L767469:{c.instructions+=2;NFSU2_TR(0x767469);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76746d:{NFSU2_TR(0x76746d);
if(r1(R+518)){{goto L76747a;}}
}
B76746f:L76746f:{c.instructions+=2;NFSU2_TR(0x76746f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767471:{NFSU2_TR(0x767471);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767476ull));
{goto L7676c8;}
}
B767476:L767476:{c.instructions+=2;NFSU2_TR(0x767476);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767477:{NFSU2_TR(0x767477);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffffefull))));
}
B76747a:L76747a:{c.instructions+=7;NFSU2_TR(0x76747a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76747c:{NFSU2_TR(0x76747c);
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
B76747e:{NFSU2_TR(0x76747e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76747f:{NFSU2_TR(0x76747f);
__builtin_memmove((R+0),(R+518),1);
}
B767482:{NFSU2_TR(0x767482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B767483:{NFSU2_TR(0x767483);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B767484:{NFSU2_TR(0x767484);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B767485:L767485:{c.instructions+=3;NFSU2_TR(0x767485);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767489:{NFSU2_TR(0x767489);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B76748c:{NFSU2_TR(0x76748c);
if(r1(R+518)){{goto L7674a1;}}
}
B76748e:L76748e:{c.instructions+=1;NFSU2_TR(0x76748e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7674ac;}}
}
B767490:L767490:{c.instructions+=2;NFSU2_TR(0x767490);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B767493:{NFSU2_TR(0x767493);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7674ac;}}
}
B767495:L767495:{c.instructions+=1;NFSU2_TR(0x767495);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76749aull));
TAIL_STATIC(0x7661bau,766);
}
B76749a:L76749a:{c.instructions+=2;NFSU2_TR(0x76749a);
u8 U[4];
w4(U+0,u32(0x22ull));
s4(u32(r4(R+0)),r4(U+0));
}
B7674a0:{NFSU2_TR(0x7674a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7674a1:L7674a1:{c.instructions+=1;NFSU2_TR(0x7674a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7674a6ull));
TAIL_STATIC(0x7661bau,766);
}
B7674a6:L7674a6:{c.instructions+=1;NFSU2_TR(0x7674a6);
u8 U[4];
w4(U+0,u32(0x21ull));
s4(u32(r4(R+0)),r4(U+0));
}
B7674ac:L7674ac:{c.instructions+=1;NFSU2_TR(0x7674ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7674ad:L7674ad:{c.instructions+=3;NFSU2_TR(0x7674ad);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7674b1:{NFSU2_TR(0x7674b1);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7674b3:{NFSU2_TR(0x7674b3);
if(r1(R+518)){{goto L7674b9;}}
}
B7674b5:L7674b5:{c.instructions+=2;NFSU2_TR(0x7674b5);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7674b7:{NFSU2_TR(0x7674b7);
{goto L7674cf;}
}
B7674b9:L7674b9:{c.instructions+=2;NFSU2_TR(0x7674b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7674bb:{NFSU2_TR(0x7674bb);
if(r1(R+518)){{goto L7674c1;}}
}
B7674bd:L7674bd:{c.instructions+=3;NFSU2_TR(0x7674bd);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7674bf:{NFSU2_TR(0x7674bf);
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
B7674c0:{NFSU2_TR(0x7674c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7674c1:L7674c1:{c.instructions+=2;NFSU2_TR(0x7674c1);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7674c3:{NFSU2_TR(0x7674c3);
if(r1(R+518)){{goto L7674c9;}}
}
B7674c5:L7674c5:{c.instructions+=2;NFSU2_TR(0x7674c5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7674c7:{NFSU2_TR(0x7674c7);
{goto L7674cf;}
}
B7674c9:L7674c9:{c.instructions+=2;NFSU2_TR(0x7674c9);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7674cb:{NFSU2_TR(0x7674cb);
if(r1(R+518)){{goto L7674d1;}}
}
B7674cd:L7674cd:{c.instructions+=1;NFSU2_TR(0x7674cd);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7674cf:L7674cf:{c.instructions+=2;NFSU2_TR(0x7674cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7674d0:{NFSU2_TR(0x7674d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7674d1:L7674d1:{c.instructions+=4;NFSU2_TR(0x7674d1);
w4(R+0,u32(r1(R+0)));
}
B7674d4:{NFSU2_TR(0x7674d4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B7674d7:{NFSU2_TR(0x7674d7);
u8 U[7];
w1(R+512,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+523,u8(u32(r1(R+512))^u32(r1(U+6))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7674d9:{NFSU2_TR(0x7674d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7674da:L7674da:{c.instructions+=4;NFSU2_TR(0x7674da);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7674db:{NFSU2_TR(0x7674db);
__builtin_memmove((R+20),(R+16),4);
}
B7674dd:{NFSU2_TR(0x7674dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B7674e0:{NFSU2_TR(0x7674e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7674e2:L7674e2:{c.instructions+=3;NFSU2_TR(0x7674e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x81a838ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B7674e9:{NFSU2_TR(0x7674e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7674ec:{NFSU2_TR(0x7674ec);
if(r1(R+518)){{goto L767552;}}
}
B7674ee:L7674ee:{c.instructions+=3;NFSU2_TR(0x7674ee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7674ef:{NFSU2_TR(0x7674ef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1dull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7674f2:{NFSU2_TR(0x7674f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7674e2u);}goto L7674e2;}}
}
B7674f4:L7674f4:{c.instructions+=1;NFSU2_TR(0x7674f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7674f6:L7674f6:{c.instructions+=3;NFSU2_TR(0x7674f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7674f8:{NFSU2_TR(0x7674f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7674fb:{NFSU2_TR(0x7674fb);
if(r1(R+518)){{goto L76755b;}}
}
B7674fd:L7674fd:{c.instructions+=18;NFSU2_TR(0x7674fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767500:{NFSU2_TR(0x767500);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767503:{NFSU2_TR(0x767503);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767506:{NFSU2_TR(0x767506);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767509:{NFSU2_TR(0x767509);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76750c:{NFSU2_TR(0x76750c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76750f:{NFSU2_TR(0x76750f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767512:{NFSU2_TR(0x767512);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767513:{NFSU2_TR(0x767513);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B767516:{NFSU2_TR(0x767516);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767519:{NFSU2_TR(0x767519);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76751c:{NFSU2_TR(0x76751c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76751f:{NFSU2_TR(0x76751f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767522:{NFSU2_TR(0x767522);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767527:{NFSU2_TR(0x767527);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76752a:{NFSU2_TR(0x76752a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76752d:{NFSU2_TR(0x76752d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767530:{NFSU2_TR(0x767530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767535ull));
{goto L7676a4;}
}
B767535:L767535:{c.instructions+=3;NFSU2_TR(0x767535);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767538:{NFSU2_TR(0x767538);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767539:{NFSU2_TR(0x767539);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76753eull));
TAIL_STATIC(0x727e6bu,727);
}
B76753e:L76753e:{c.instructions+=3;NFSU2_TR(0x76753e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B767541:{NFSU2_TR(0x767541);
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
B767543:{NFSU2_TR(0x767543);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76754c;}}
}
B767545:L767545:{c.instructions+=2;NFSU2_TR(0x767545);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767546:{NFSU2_TR(0x767546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76754bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x767485u);}goto L767485;}
}
B76754b:L76754b:{c.instructions+=1;NFSU2_TR(0x76754b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76754c:L76754c:{c.instructions+=4;NFSU2_TR(0x76754c);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76754f:{NFSU2_TR(0x76754f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B767550:{NFSU2_TR(0x767550);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B767551:{NFSU2_TR(0x767551);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B767552:L767552:{c.instructions+=2;NFSU2_TR(0x767552);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x81a83cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B767559:{NFSU2_TR(0x767559);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7674f6u);}goto L7674f6;}
}
B76755b:L76755b:{c.instructions+=3;NFSU2_TR(0x76755b);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767560:{NFSU2_TR(0x767560);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767563:{NFSU2_TR(0x767563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767568ull));
{goto L7676a4;}
}
B767568:L767568:{c.instructions+=2;NFSU2_TR(0x767568);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76756b:{NFSU2_TR(0x76756b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767570ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x767485u);}goto L767485;}
}
B767570:L767570:{c.instructions+=4;NFSU2_TR(0x767570);
{u32 ea_=u32(r4(R+20)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B767573:{NFSU2_TR(0x767573);
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
B767576:{NFSU2_TR(0x767576);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B767577:{NFSU2_TR(0x767577);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B767578:L767578:{c.instructions+=4;NFSU2_TR(0x767578);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767579:{NFSU2_TR(0x767579);
__builtin_memmove((R+20),(R+16),4);
}
B76757b:{NFSU2_TR(0x76757b);
u8 U[14];
__builtin_memmove((U+6),gp(0x81ace0),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B767582:{NFSU2_TR(0x767582);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7675ac;}}
}
B767584:L767584:{c.instructions+=11;NFSU2_TR(0x767584);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767587:{NFSU2_TR(0x767587);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76758a:{NFSU2_TR(0x76758a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B76758d:{NFSU2_TR(0x76758d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B767591:{NFSU2_TR(0x767591);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B767593:{NFSU2_TR(0x767593);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B767597:{NFSU2_TR(0x767597);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76759a:{NFSU2_TR(0x76759a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76759d:{NFSU2_TR(0x76759d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7675a0:{NFSU2_TR(0x7675a0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7675a2:{NFSU2_TR(0x7675a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7675a7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7674dau);}goto L7674da;}
}
B7675a7:L7675a7:{c.instructions+=3;NFSU2_TR(0x7675a7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7675aa:{NFSU2_TR(0x7675aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7675ab:{NFSU2_TR(0x7675ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7675ac:L7675ac:{c.instructions+=1;NFSU2_TR(0x7675ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7675b1ull));
TAIL_STATIC(0x7661bau,766);
}
B7675b1:L7675b1:{c.instructions+=4;NFSU2_TR(0x7675b1);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7675b6:{NFSU2_TR(0x7675b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7675b9:{NFSU2_TR(0x7675b9);
u8 U[4];
w4(U+0,u32(0x21ull));
s4(u32(r4(R+0)),r4(U+0));
}
B7675bf:{NFSU2_TR(0x7675bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7675c4ull));
{goto L7676a4;}
}
B7675c4:L7675c4:{c.instructions+=5;NFSU2_TR(0x7675c4);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7675c7:{NFSU2_TR(0x7675c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7675c8:{NFSU2_TR(0x7675c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7675c9:{NFSU2_TR(0x7675c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7675ca:{NFSU2_TR(0x7675ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7675cb:L7675cb:{c.instructions+=12;NFSU2_TR(0x7675cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7675cc:{NFSU2_TR(0x7675cc);
__builtin_memmove((R+20),(R+16),4);
}
B7675ce:{NFSU2_TR(0x7675ce);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B7675d1:{NFSU2_TR(0x7675d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B7675d7:{NFSU2_TR(0x7675d7);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7675dc:{NFSU2_TR(0x7675dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B7675df:{NFSU2_TR(0x7675df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7675e2:{NFSU2_TR(0x7675e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7675e9:{NFSU2_TR(0x7675e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7675ec:{NFSU2_TR(0x7675ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7675ed:{NFSU2_TR(0x7675ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7675f0:{NFSU2_TR(0x7675f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7675f5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x767263u);}goto L767263;}
}
B7675f5:L7675f5:{c.instructions+=3;NFSU2_TR(0x7675f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7675f8:{NFSU2_TR(0x7675f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7675fa:{NFSU2_TR(0x7675fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767620;}}
}
B7675fc:L7675fc:{c.instructions+=12;NFSU2_TR(0x7675fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B767601:{NFSU2_TR(0x767601);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767604:{NFSU2_TR(0x767604);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767605:{NFSU2_TR(0x767605);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767608:{NFSU2_TR(0x767608);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767609:{NFSU2_TR(0x767609);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76760c:{NFSU2_TR(0x76760c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76760f:{NFSU2_TR(0x76760f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767612:{NFSU2_TR(0x767612);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767613:{NFSU2_TR(0x767613);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B767617:{NFSU2_TR(0x767617);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767618:{NFSU2_TR(0x767618);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76761dull));
TAIL_STATIC(0x766fbeu,766);
}
B76761d:L76761d:{c.instructions+=1;NFSU2_TR(0x76761d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B767620:L767620:{c.instructions+=2;NFSU2_TR(0x767620);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767623:{NFSU2_TR(0x767623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767628ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7674adu);}goto L7674ad;}
}
B767628:L767628:{c.instructions+=3;NFSU2_TR(0x767628);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76762b:{NFSU2_TR(0x76762b);
u8 U[8];
__builtin_memmove((U+0),gp(0x81ace0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B767632:{NFSU2_TR(0x767632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76765f;}}
}
B767634:L767634:{c.instructions+=2;NFSU2_TR(0x767634);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B767636:{NFSU2_TR(0x767636);
if(r1(R+518)){{goto L76765f;}}
}
B767638:L767638:{c.instructions+=11;NFSU2_TR(0x767638);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76763b:{NFSU2_TR(0x76763b);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76763e:{NFSU2_TR(0x76763e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B767641:{NFSU2_TR(0x767641);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B767645:{NFSU2_TR(0x767645);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B767647:{NFSU2_TR(0x767647);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76764b:{NFSU2_TR(0x76764b);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76764e:{NFSU2_TR(0x76764e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B767651:{NFSU2_TR(0x767651);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767654:{NFSU2_TR(0x767654);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767655:{NFSU2_TR(0x767655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76765aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7674dau);}goto L7674da;}
}
B76765a:L76765a:{c.instructions+=2;NFSU2_TR(0x76765a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B76765d:{NFSU2_TR(0x76765d);
{goto L767679;}
}
B76765f:L76765f:{c.instructions+=2;NFSU2_TR(0x76765f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767660:{NFSU2_TR(0x767660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767665ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x767485u);}goto L767485;}
}
B767665:L767665:{c.instructions+=3;NFSU2_TR(0x767665);
u8 U[4];
w4(U+0,u32(0xffffull));
s4(u32(r4(R+16)),r4(U+0));
}
B76766c:{NFSU2_TR(0x76766c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76766f:{NFSU2_TR(0x76766f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767674ull));
{goto L7676a4;}
}
B767674:L767674:{c.instructions+=3;NFSU2_TR(0x767674);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B767677:{NFSU2_TR(0x767677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767678:{NFSU2_TR(0x767678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767679:L767679:{c.instructions+=3;NFSU2_TR(0x767679);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76767d:{NFSU2_TR(0x76767d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B767680:{NFSU2_TR(0x767680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767685ull));
TAIL_STATIC(0x76115eu,761);
}
B767685:L767685:{c.instructions+=3;NFSU2_TR(0x767685);
__builtin_memmove((R+16),(R+20),4);
}
B767687:{NFSU2_TR(0x767687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B767688:{NFSU2_TR(0x767688);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B767689:L767689:{c.instructions+=5;NFSU2_TR(0x767689);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76768a:{NFSU2_TR(0x76768a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0x9b,0xdd,0x38"::"a"(ea_):"memory");}
}
B76768f:{NFSU2_TR(0x76768f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+16))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B767694:{NFSU2_TR(0x767694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767695:{NFSU2_TR(0x767695);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B767696:L767696:{c.instructions+=6;NFSU2_TR(0x767696);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767697:{NFSU2_TR(0x767697);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x38"::"a"(ea_):"memory");}
}
B76769b:{NFSU2_TR(0x76769b);
__asm__ volatile(".byte 0xdb,0xe2":::"memory");
}
B76769d:{NFSU2_TR(0x76769d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+16))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B7676a2:{NFSU2_TR(0x7676a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7676a3:{NFSU2_TR(0x7676a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7676a4:L7676a4:{c.instructions+=15;NFSU2_TR(0x7676a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7676a5:{NFSU2_TR(0x7676a5);
__builtin_memmove((R+20),(R+16),4);
}
B7676a7:{NFSU2_TR(0x7676a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7676a8:{NFSU2_TR(0x7676a8);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0x9b,0xd9,0x38"::"a"(ea_):"memory");}
}
B7676ac:{NFSU2_TR(0x7676ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7676af:{NFSU2_TR(0x7676af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7676b2:{NFSU2_TR(0x7676b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B7676b5:{NFSU2_TR(0x7676b5);
w4(R+0,u32(~u32(r4(R+0))));
}
B7676b7:{NFSU2_TR(0x7676b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B7676ba:{NFSU2_TR(0x7676ba);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7676bc:{NFSU2_TR(0x7676bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7676bf:{NFSU2_TR(0x7676bf);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B7676c2:{NFSU2_TR(0x7676c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B7676c6:{NFSU2_TR(0x7676c6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7676c7:{NFSU2_TR(0x7676c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7676c8:L7676c8:{c.instructions+=5;NFSU2_TR(0x7676c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7676c9:{NFSU2_TR(0x7676c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7676ca:{NFSU2_TR(0x7676ca);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7676ce:{NFSU2_TR(0x7676ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7676d1:{NFSU2_TR(0x7676d1);
if(r1(R+518)){{goto L7676de;}}
}
B7676d3:L7676d3:{c.instructions+=3;NFSU2_TR(0x7676d3);
{u32 ea_=u32(u32(8497440u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B7676d9:{NFSU2_TR(0x7676d9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B7676dd:{NFSU2_TR(0x7676dd);
}
B7676de:L7676de:{c.instructions+=2;NFSU2_TR(0x7676de);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7676e1:{NFSU2_TR(0x7676e1);
if(r1(R+518)){{goto L7676f4;}}
}
B7676e3:L7676e3:{c.instructions+=5;NFSU2_TR(0x7676e3);
{u32 ax_;__asm__ volatile(".byte 0x9b,0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7676e6:{NFSU2_TR(0x7676e6);
{u32 ea_=u32(u32(8497440u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B7676ec:{NFSU2_TR(0x7676ec);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7676f0:{NFSU2_TR(0x7676f0);
}
B7676f1:{NFSU2_TR(0x7676f1);
{u32 ax_;__asm__ volatile(".byte 0x9b,0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7676f4:L7676f4:{c.instructions+=2;NFSU2_TR(0x7676f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7676f7:{NFSU2_TR(0x7676f7);
if(r1(R+518)){{goto L767704;}}
}
B7676f9:L7676f9:{c.instructions+=3;NFSU2_TR(0x7676f9);
{u32 ea_=u32(u32(8497452u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B7676ff:{NFSU2_TR(0x7676ff);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B767703:{NFSU2_TR(0x767703);
}
B767704:L767704:{c.instructions+=2;NFSU2_TR(0x767704);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B767707:{NFSU2_TR(0x767707);
if(r1(R+518)){{goto L767712;}}
}
B767709:L767709:{c.instructions+=5;NFSU2_TR(0x767709);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B76770b:{NFSU2_TR(0x76770b);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B76770d:{NFSU2_TR(0x76770d);
__asm__ volatile(".byte 0xde,0xf1":::"memory");
}
B76770f:{NFSU2_TR(0x76770f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B767711:{NFSU2_TR(0x767711);
}
B767712:L767712:{c.instructions+=2;NFSU2_TR(0x767712);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B767715:{NFSU2_TR(0x767715);
if(r1(R+518)){{goto L76771e;}}
}
B767717:L767717:{c.instructions+=3;NFSU2_TR(0x767717);
__asm__ volatile(".byte 0xd9,0xeb":::"memory");
}
B767719:{NFSU2_TR(0x767719);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76771d:{NFSU2_TR(0x76771d);
}
B76771e:L76771e:{c.instructions+=3;NFSU2_TR(0x76771e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76771f:{NFSU2_TR(0x76771f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767720:{NFSU2_TR(0x767720);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B767730:L767730:{c.instructions+=9;NFSU2_TR(0x767730);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767731:{NFSU2_TR(0x767731);
__builtin_memmove((R+20),(R+16),4);
}
B767733:{NFSU2_TR(0x767733);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767734:{NFSU2_TR(0x767734);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767735:{NFSU2_TR(0x767735);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767736:{NFSU2_TR(0x767736);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B767739:{NFSU2_TR(0x767739);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76773c:{NFSU2_TR(0x76773c);
w1(R+0,u8(0xffull));
}
B76773e:{NFSU2_TR(0x76773e);
__builtin_memmove((R+28),(R+28),4);
}
B767740:L767740:{c.instructions+=2;NFSU2_TR(0x767740);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B767742:{NFSU2_TR(0x767742);
if(r1(R+518)){{goto L767776;}}
}
B767744:L767744:{c.instructions+=6;NFSU2_TR(0x767744);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B767746:{NFSU2_TR(0x767746);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B767749:{NFSU2_TR(0x767749);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+1),(U+0),1);
}
B76774b:{NFSU2_TR(0x76774b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76774e:{NFSU2_TR(0x76774e);
u8 U[2];
__builtin_memmove((U+0),(R+1),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B767750:{NFSU2_TR(0x767750);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x767740u);}goto L767740;}}
}
B767752:L767752:{c.instructions+=15;NFSU2_TR(0x767752);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
}
B767754:{NFSU2_TR(0x767754);
w1(R+512,u8((r1(R+0))<(u8(0x1aull))));
}
B767756:{NFSU2_TR(0x767756);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(R+4))));
w1(R+4,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B767758:{NFSU2_TR(0x767758);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x20ull))));
}
B76775b:{NFSU2_TR(0x76775b);
w1(R+0,u8(u32(r1(R+0))+u32(r1(R+4))));
}
B76775d:{NFSU2_TR(0x76775d);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x41ull))));
}
B76775f:{NFSU2_TR(0x76775f);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
__builtin_memmove((R+0),(R+1),1);
__builtin_memmove((R+1),(U+0),1);
}
B767761:{NFSU2_TR(0x767761);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
}
B767763:{NFSU2_TR(0x767763);
w1(R+512,u8((r1(R+0))<(u8(0x1aull))));
}
B767765:{NFSU2_TR(0x767765);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(R+4))));
w1(R+4,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B767767:{NFSU2_TR(0x767767);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x20ull))));
}
B76776a:{NFSU2_TR(0x76776a);
w1(R+0,u8(u32(r1(R+0))+u32(r1(R+4))));
}
B76776c:{NFSU2_TR(0x76776c);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x41ull))));
}
B76776e:{NFSU2_TR(0x76776e);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(R+512,u8((r1(U+0))<(r1(R+1))));
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+1))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B767770:{NFSU2_TR(0x767770);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x767740u);}goto L767740;}}
}
B767772:L767772:{c.instructions+=2;NFSU2_TR(0x767772);
u8 U[3];
__builtin_memmove((U+0),(R+512),1);
w1(R+512,u8((r1(R+0))<(r1(R+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(U+2,u8((r1(U+1))<(r1(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+2))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B767774:{NFSU2_TR(0x767774);
u8 U[7];
__builtin_memmove((U+0),(R+512),1);
w1(R+512,u8((r1(R+0))<(u8(0xffull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0xffull)));
w1(U+1,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(U+2,u8((r1(U+1))<(r1(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+2))));
w1(U+3,sborrow<u8>(r1(U+1),r1(U+0)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+3))!=0)));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+4,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+5,u8(__builtin_popcountll(u64(r1(U+4)))));
w1(U+6,u8(u32(r1(U+5))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+6))==(u8(0x0ull))));
}
B767776:L767776:{c.instructions+=6;NFSU2_TR(0x767776);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B767779:{NFSU2_TR(0x767779);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76777a:{NFSU2_TR(0x76777a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76777b:{NFSU2_TR(0x76777b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76777c:{NFSU2_TR(0x76777c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76777d:{NFSU2_TR(0x76777d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76777e:L76777e:{c.instructions+=21;NFSU2_TR(0x76777e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76777f:{NFSU2_TR(0x76777f);
__builtin_memmove((R+20),(R+16),4);
}
B767781:{NFSU2_TR(0x767781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B767784:{NFSU2_TR(0x767784);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B767789:{NFSU2_TR(0x767789);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76778c:{NFSU2_TR(0x76778c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76778d:{NFSU2_TR(0x76778d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76778e:{NFSU2_TR(0x76778e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76778f:{NFSU2_TR(0x76778f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B767791:{NFSU2_TR(0x767791);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767792:{NFSU2_TR(0x767792);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767793:{NFSU2_TR(0x767793);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767794:{NFSU2_TR(0x767794);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767795:{NFSU2_TR(0x767795);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767798:{NFSU2_TR(0x767798);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76779b:{NFSU2_TR(0x76779b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76779e:{NFSU2_TR(0x76779e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76779f:{NFSU2_TR(0x76779f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7677a2:{NFSU2_TR(0x7677a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7677a3:{NFSU2_TR(0x7677a3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7677a5:{NFSU2_TR(0x7677a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7677aaull));
TAIL_STATIC(0x76cc86u,76c);
}
B7677aa:L7677aa:{c.instructions+=4;NFSU2_TR(0x7677aa);
__builtin_memmove((R+12),(R+0),4);
}
B7677ac:{NFSU2_TR(0x7677ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B7677af:{NFSU2_TR(0x7677af);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7677b2:{NFSU2_TR(0x7677b2);
if(r1(R+518)){{goto L7677c1;}}
}
B7677b4:L7677b4:{c.instructions+=4;NFSU2_TR(0x7677b4);
w4(R+28,u32(0x200ull));
}
B7677b9:{NFSU2_TR(0x7677b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7677bc:{NFSU2_TR(0x7677bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7677bf:{NFSU2_TR(0x7677bf);
{goto L7677ef;}
}
B7677c1:L7677c1:{c.instructions+=5;NFSU2_TR(0x7677c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7677c4:{NFSU2_TR(0x7677c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7677c5:{NFSU2_TR(0x7677c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7677c8:{NFSU2_TR(0x7677c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7677c9:{NFSU2_TR(0x7677c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7677ceull));
TAIL_STATIC(0x76c739u,76c);
}
B7677ce:L7677ce:{c.instructions+=4;NFSU2_TR(0x7677ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7677d1:{NFSU2_TR(0x7677d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7677d2:{NFSU2_TR(0x7677d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7677d3:{NFSU2_TR(0x7677d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7677da;}}
}
B7677d5:L7677d5:{c.instructions+=2;NFSU2_TR(0x7677d5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7677d8:{NFSU2_TR(0x7677d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7677df;}}
}
B7677da:L7677da:{c.instructions+=1;NFSU2_TR(0x7677da);
w4(R+28,u32(0x80ull));
}
B7677df:L7677df:{c.instructions+=2;NFSU2_TR(0x7677df);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7677e2:{NFSU2_TR(0x7677e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7677e9;}}
}
B7677e4:L7677e4:{c.instructions+=2;NFSU2_TR(0x7677e4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7677e7:{NFSU2_TR(0x7677e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7677ef;}}
}
B7677e9:L7677e9:{c.instructions+=1;NFSU2_TR(0x7677e9);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x100ull))));
}
B7677ef:L7677ef:{c.instructions+=15;NFSU2_TR(0x7677ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7677f2:{NFSU2_TR(0x7677f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7677f5:{NFSU2_TR(0x7677f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B7677f8:{NFSU2_TR(0x7677f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7677fa:{NFSU2_TR(0x7677fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7677fd:{NFSU2_TR(0x7677fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B767800:{NFSU2_TR(0x767800);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767803:{NFSU2_TR(0x767803);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B767806:{NFSU2_TR(0x767806);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767809:{NFSU2_TR(0x767809);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76780c:{NFSU2_TR(0x76780c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76780f:{NFSU2_TR(0x76780f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B767810:{NFSU2_TR(0x767810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B767811:{NFSU2_TR(0x767811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B767812:{NFSU2_TR(0x767812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767817ull));
TAIL_STATIC(0x76115eu,761);
}
B767817:L767817:{c.instructions+=2;NFSU2_TR(0x767817);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B767818:{NFSU2_TR(0x767818);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B767819:L767819:{c.instructions+=3;NFSU2_TR(0x767819);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76781b:{NFSU2_TR(0x76781b);
u8 U[4];
w4(U+0,u32(0x7d7d40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767820:{NFSU2_TR(0x767820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767825ull));
TAIL_STATIC(0x760da0u,760);
}
B767825:L767825:{c.instructions+=3;NFSU2_TR(0x767825);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B767827:{NFSU2_TR(0x767827);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b87f8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76782d:{NFSU2_TR(0x76782d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767867;}}
}
B76782f:L76782f:{c.instructions+=9;NFSU2_TR(0x76782f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767830:{NFSU2_TR(0x767830);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767831:{NFSU2_TR(0x767831);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B767833:{NFSU2_TR(0x767833);
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
B767834:{NFSU2_TR(0x767834);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767835:{NFSU2_TR(0x767835);
u8 U[4];
w4(U+0,u32(0x7d7d3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76783a:{NFSU2_TR(0x76783a);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76783f:{NFSU2_TR(0x76783f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767840:{NFSU2_TR(0x767840);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830b8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767846ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B767846:L767846:{c.instructions+=2;NFSU2_TR(0x767846);
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
B767848:{NFSU2_TR(0x767848);
if(r1(R+518)){{goto L767852;}}
}
B76784a:L76784a:{c.instructions+=2;NFSU2_TR(0x76784a);
__builtin_memmove(gp(0x8b87f8),(R+24),4);
}
B767850:{NFSU2_TR(0x767850);
{goto L767867;}
}
B767852:L767852:{c.instructions+=1;NFSU2_TR(0x767852);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767858ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B767858:L767858:{c.instructions+=2;NFSU2_TR(0x767858);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x78ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76785b:{NFSU2_TR(0x76785b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767867;}}
}
B76785d:L76785d:{c.instructions+=1;NFSU2_TR(0x76785d);
s4(0x8b87f8,u32(0x2ull));
}
B767867:L767867:{c.instructions+=2;NFSU2_TR(0x767867);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76786a:{NFSU2_TR(0x76786a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L767887;}}
}
B76786c:L76786c:{c.instructions+=2;NFSU2_TR(0x76786c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76786f:{NFSU2_TR(0x76786f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B767872:L767872:{c.instructions+=3;NFSU2_TR(0x767872);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B767873:{NFSU2_TR(0x767873);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B767875:{NFSU2_TR(0x767875);
if(r1(R+518)){{goto L76787f;}}
}
B767877:L767877:{c.instructions+=3;NFSU2_TR(0x767877);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B767878:{NFSU2_TR(0x767878);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76787a:{NFSU2_TR(0x76787a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x767872u);}goto L767872;}}
}
B76787c:L76787c:{c.instructions+=1;NFSU2_TR(0x76787c);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B76787f:L76787f:{c.instructions+=3;NFSU2_TR(0x76787f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B767882:{NFSU2_TR(0x767882);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B767884:{NFSU2_TR(0x767884);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B767887:L767887:{c.instructions+=3;NFSU2_TR(0x767887);
__builtin_memmove((R+0),gp(0x8b87f8),4);
}
B76788c:{NFSU2_TR(0x76788c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76788f:{NFSU2_TR(0x76788f);
if(r1(R+518)){{goto L767a71;}}
}
B767895:L767895:{c.instructions+=2;NFSU2_TR(0x767895);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B767897:{NFSU2_TR(0x767897);
if(r1(R+518)){{goto L767a71;}}
}
B76789d:L76789d:{c.instructions+=2;NFSU2_TR(0x76789d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7678a0:{NFSU2_TR(0x7678a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767aa4;}}
}
B7678a6:L7678a6:{c.instructions+=6;NFSU2_TR(0x7678a6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7678a8:{NFSU2_TR(0x7678a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7678ab:{NFSU2_TR(0x7678ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7678ae:{NFSU2_TR(0x7678ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7678b1:{NFSU2_TR(0x7678b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7678b4:{NFSU2_TR(0x7678b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7678be;}}
}
B7678b6:L7678b6:{c.instructions+=2;NFSU2_TR(0x7678b6);
__builtin_memmove((R+0),gp(0x8b8844),4);
}
B7678bb:{NFSU2_TR(0x7678bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7678be:L7678be:{c.instructions+=11;NFSU2_TR(0x7678be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7678bf:{NFSU2_TR(0x7678bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7678c0:{NFSU2_TR(0x7678c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7678c3:{NFSU2_TR(0x7678c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7678c6:{NFSU2_TR(0x7678c6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7678c8:{NFSU2_TR(0x7678c8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
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
B7678cb:{NFSU2_TR(0x7678cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B7678ce:{NFSU2_TR(0x7678ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x1ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7678d5:{NFSU2_TR(0x7678d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7678d6:{NFSU2_TR(0x7678d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7678d9:{NFSU2_TR(0x7678d9);
u8 U[4];
__builtin_memmove((U+0),gp(0x783130),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7678dfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7678df:L7678df:{c.instructions+=4;NFSU2_TR(0x7678df);
__builtin_memmove((R+24),(R+0),4);
}
B7678e1:{NFSU2_TR(0x7678e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7678e4:{NFSU2_TR(0x7678e4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7678e6:{NFSU2_TR(0x7678e6);
if(r1(R+518)){{goto L767aa4;}}
}
B7678ec:L7678ec:{c.instructions+=5;NFSU2_TR(0x7678ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7678f3:{NFSU2_TR(0x7678f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7678f6:{NFSU2_TR(0x7678f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B7678f9:{NFSU2_TR(0x7678f9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B7678fc:{NFSU2_TR(0x7678fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767901ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B767901:L767901:{c.instructions+=5;NFSU2_TR(0x767901);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767904:{NFSU2_TR(0x767904);
__builtin_memmove((R+0),(R+16),4);
}
B767906:{NFSU2_TR(0x767906);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767909:{NFSU2_TR(0x767909);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76790d:{NFSU2_TR(0x76790d);
{goto L76792a;}
}
B76790f:L76790f:{c.instructions+=3;NFSU2_TR(0x76790f);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B767911:{NFSU2_TR(0x767911);
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
B767912:{NFSU2_TR(0x767912);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B767913:L767913:{c.instructions+=2;NFSU2_TR(0x767913);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B767916:{NFSU2_TR(0x767916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76791bull));
TAIL_STATIC(0x76d2d8u,76d);
}
B76791b:L76791b:{c.instructions+=5;NFSU2_TR(0x76791b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76791d:{NFSU2_TR(0x76791d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767920:{NFSU2_TR(0x767920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B767924:{NFSU2_TR(0x767924);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B767927:{NFSU2_TR(0x767927);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76792a:L76792a:{c.instructions+=2;NFSU2_TR(0x76792a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
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
B76792d:{NFSU2_TR(0x76792d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76794b;}}
}
B76792f:L76792f:{c.instructions+=3;NFSU2_TR(0x76792f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B767932:{NFSU2_TR(0x767932);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767933:{NFSU2_TR(0x767933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767938ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B767938:L767938:{c.instructions+=4;NFSU2_TR(0x767938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767939:{NFSU2_TR(0x767939);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76793c:{NFSU2_TR(0x76793c);
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
B76793e:{NFSU2_TR(0x76793e);
if(r1(R+518)){{goto L767aa4;}}
}
B767944:L767944:{c.instructions+=1;NFSU2_TR(0x767944);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76794b:L76794b:{c.instructions+=7;NFSU2_TR(0x76794b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76794c:{NFSU2_TR(0x76794c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76794f:{NFSU2_TR(0x76794f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767952:{NFSU2_TR(0x767952);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767955:{NFSU2_TR(0x767955);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767957:{NFSU2_TR(0x767957);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76795a:{NFSU2_TR(0x76795a);
u8 U[4];
__builtin_memmove((U+0),gp(0x783130),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767960ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B767960:L767960:{c.instructions+=2;NFSU2_TR(0x767960);
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
B767962:{NFSU2_TR(0x767962);
if(r1(R+518)){{goto L767a4e;}}
}
B767968:L767968:{c.instructions+=7;NFSU2_TR(0x767968);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767969:{NFSU2_TR(0x767969);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76796a:{NFSU2_TR(0x76796a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76796b:{NFSU2_TR(0x76796b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76796e:{NFSU2_TR(0x76796e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767971:{NFSU2_TR(0x767971);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767974:{NFSU2_TR(0x767974);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830b8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76797aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76797a:L76797a:{c.instructions+=4;NFSU2_TR(0x76797a);
__builtin_memmove((R+28),(R+0),4);
}
B76797c:{NFSU2_TR(0x76797c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76797f:{NFSU2_TR(0x76797f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B767981:{NFSU2_TR(0x767981);
if(r1(R+518)){{goto L767a4e;}}
}
B767987:L767987:{c.instructions+=2;NFSU2_TR(0x767987);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76798b:{NFSU2_TR(0x76798b);
if(r1(R+518)){{goto L7679ba;}}
}
B76798d:L76798d:{c.instructions+=2;NFSU2_TR(0x76798d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B767990:{NFSU2_TR(0x767990);
if(r1(R+518)){{goto L767a4e;}}
}
B767996:L767996:{c.instructions+=2;NFSU2_TR(0x767996);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B767999:{NFSU2_TR(0x767999);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L767a4e;}}
}
B76799f:L76799f:{c.instructions+=7;NFSU2_TR(0x76799f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7679a2:{NFSU2_TR(0x7679a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7679a5:{NFSU2_TR(0x7679a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7679a6:{NFSU2_TR(0x7679a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7679a9:{NFSU2_TR(0x7679a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7679ac:{NFSU2_TR(0x7679ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7679af:{NFSU2_TR(0x7679af);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830b8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7679b5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7679b5:L7679b5:{c.instructions+=1;NFSU2_TR(0x7679b5);
{goto L767a4e;}
}
B7679ba:L7679ba:{c.instructions+=5;NFSU2_TR(0x7679ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7679c1:{NFSU2_TR(0x7679c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7679c4:{NFSU2_TR(0x7679c4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B7679c7:{NFSU2_TR(0x7679c7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B7679ca:{NFSU2_TR(0x7679ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7679cfull));
TAIL_STATIC(0x75c4d0u,75c);
}
B7679cf:L7679cf:{c.instructions+=5;NFSU2_TR(0x7679cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7679d2:{NFSU2_TR(0x7679d2);
__builtin_memmove((R+0),(R+16),4);
}
B7679d4:{NFSU2_TR(0x7679d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7679d7:{NFSU2_TR(0x7679d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7679db:{NFSU2_TR(0x7679db);
{goto L7679f8;}
}
B7679dd:L7679dd:{c.instructions+=3;NFSU2_TR(0x7679dd);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7679df:{NFSU2_TR(0x7679df);
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
B7679e0:{NFSU2_TR(0x7679e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7679e1:L7679e1:{c.instructions+=2;NFSU2_TR(0x7679e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B7679e4:{NFSU2_TR(0x7679e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7679e9ull));
TAIL_STATIC(0x76d2d8u,76d);
}
B7679e9:L7679e9:{c.instructions+=5;NFSU2_TR(0x7679e9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7679eb:{NFSU2_TR(0x7679eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7679ee:{NFSU2_TR(0x7679ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7679f2:{NFSU2_TR(0x7679f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7679f5:{NFSU2_TR(0x7679f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7679f8:L7679f8:{c.instructions+=2;NFSU2_TR(0x7679f8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
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
B7679fb:{NFSU2_TR(0x7679fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767a15;}}
}
B7679fd:L7679fd:{c.instructions+=3;NFSU2_TR(0x7679fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B767a00:{NFSU2_TR(0x767a00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767a01:{NFSU2_TR(0x767a01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767a06ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B767a06:L767a06:{c.instructions+=4;NFSU2_TR(0x767a06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767a07:{NFSU2_TR(0x767a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767a0a:{NFSU2_TR(0x767a0a);
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
B767a0c:{NFSU2_TR(0x767a0c);
if(r1(R+518)){{goto L767a4e;}}
}
B767a0e:L767a0e:{c.instructions+=1;NFSU2_TR(0x767a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B767a15:L767a15:{c.instructions+=7;NFSU2_TR(0x767a15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767a16:{NFSU2_TR(0x767a16);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767a19:{NFSU2_TR(0x767a19);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767a1a:{NFSU2_TR(0x767a1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767a1d:{NFSU2_TR(0x767a1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767a20:{NFSU2_TR(0x767a20);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767a23:{NFSU2_TR(0x767a23);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830b8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767a29ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B767a29:L767a29:{c.instructions+=2;NFSU2_TR(0x767a29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B767a2b:{NFSU2_TR(0x767a2b);
if(r1(R+518)){{goto L767a4e;}}
}
B767a2d:L767a2d:{c.instructions+=4;NFSU2_TR(0x767a2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767a2e:{NFSU2_TR(0x767a2e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767a2f:{NFSU2_TR(0x767a2f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
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
B767a32:{NFSU2_TR(0x767a32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767a38;}}
}
B767a34:L767a34:{c.instructions+=3;NFSU2_TR(0x767a34);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767a35:{NFSU2_TR(0x767a35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767a36:{NFSU2_TR(0x767a36);
{goto L767a3e;}
}
B767a38:L767a38:{c.instructions+=2;NFSU2_TR(0x767a38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767a3b:{NFSU2_TR(0x767a3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767a3e:L767a3e:{c.instructions+=5;NFSU2_TR(0x767a3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767a3f:{NFSU2_TR(0x767a3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767a42:{NFSU2_TR(0x767a42);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767a43:{NFSU2_TR(0x767a43);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767a46:{NFSU2_TR(0x767a46);
u8 U[4];
__builtin_memmove((U+0),gp(0x78319c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767a4cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B767a4c:L767a4c:{c.instructions+=1;NFSU2_TR(0x767a4c);
__builtin_memmove((R+28),(R+0),4);
}
B767a4e:L767a4e:{c.instructions+=2;NFSU2_TR(0x767a4e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B767a51:{NFSU2_TR(0x767a51);
if(r1(R+518)){{goto L767a5c;}}
}
B767a53:L767a53:{c.instructions+=2;NFSU2_TR(0x767a53);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767a56:{NFSU2_TR(0x767a56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767a5bull));
TAIL_STATIC(0x75c6dau,75c);
}
B767a5b:L767a5b:{c.instructions+=1;NFSU2_TR(0x767a5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767a5c:L767a5c:{c.instructions+=2;NFSU2_TR(0x767a5c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
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
B767a5f:{NFSU2_TR(0x767a5f);
if(r1(R+518)){{goto L767a6a;}}
}
B767a61:L767a61:{c.instructions+=2;NFSU2_TR(0x767a61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767a64:{NFSU2_TR(0x767a64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767a69ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767a69:L767a69:{c.instructions+=1;NFSU2_TR(0x767a69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767a6a:L767a6a:{c.instructions+=2;NFSU2_TR(0x767a6a);
__builtin_memmove((R+0),(R+28),4);
}
B767a6c:{NFSU2_TR(0x767a6c);
{goto L767bcc;}
}
B767a71:L767a71:{c.instructions+=5;NFSU2_TR(0x767a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767a74:{NFSU2_TR(0x767a74);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B767a76:{NFSU2_TR(0x767a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767a79:{NFSU2_TR(0x767a79);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B767a7c:{NFSU2_TR(0x767a7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767a86;}}
}
B767a7e:L767a7e:{c.instructions+=2;NFSU2_TR(0x767a7e);
__builtin_memmove((R+0),gp(0x8b8834),4);
}
B767a83:{NFSU2_TR(0x767a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767a86:L767a86:{c.instructions+=2;NFSU2_TR(0x767a86);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B767a89:{NFSU2_TR(0x767a89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767a93;}}
}
B767a8b:L767a8b:{c.instructions+=2;NFSU2_TR(0x767a8b);
__builtin_memmove((R+0),gp(0x8b8844),4);
}
B767a90:{NFSU2_TR(0x767a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767a93:L767a93:{c.instructions+=2;NFSU2_TR(0x767a93);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767a96:{NFSU2_TR(0x767a96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767a9bull));
TAIL_STATIC(0x76d0c0u,76d);
}
B767a9b:L767a9b:{c.instructions+=4;NFSU2_TR(0x767a9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767a9c:{NFSU2_TR(0x767a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767a9f:{NFSU2_TR(0x767a9f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B767aa2:{NFSU2_TR(0x767aa2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767aab;}}
}
B767aa4:L767aa4:{c.instructions+=2;NFSU2_TR(0x767aa4);
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
B767aa6:{NFSU2_TR(0x767aa6);
{goto L767bcc;}
}
B767aab:L767aab:{c.instructions+=2;NFSU2_TR(0x767aab);
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
B767aae:{NFSU2_TR(0x767aae);
if(r1(R+518)){{goto L767ba2;}}
}
B767ab4:L767ab4:{c.instructions+=8;NFSU2_TR(0x767ab4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ab5:{NFSU2_TR(0x767ab5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ab6:{NFSU2_TR(0x767ab6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767ab9:{NFSU2_TR(0x767ab9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767aba:{NFSU2_TR(0x767aba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767abd:{NFSU2_TR(0x767abd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767abe:{NFSU2_TR(0x767abe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767ac1:{NFSU2_TR(0x767ac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767ac6ull));
TAIL_STATIC(0x76d109u,76d);
}
B767ac6:L767ac6:{c.instructions+=4;NFSU2_TR(0x767ac6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B767ac9:{NFSU2_TR(0x767ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767acc:{NFSU2_TR(0x767acc);
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
B767ace:{NFSU2_TR(0x767ace);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x767aa4u);}goto L767aa4;}}
}
B767ad0:L767ad0:{c.instructions+=7;NFSU2_TR(0x767ad0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ad1:{NFSU2_TR(0x767ad1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ad2:{NFSU2_TR(0x767ad2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767ad5:{NFSU2_TR(0x767ad5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ad6:{NFSU2_TR(0x767ad6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767ad9:{NFSU2_TR(0x767ad9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767adc:{NFSU2_TR(0x767adc);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767ae2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B767ae2:L767ae2:{c.instructions+=4;NFSU2_TR(0x767ae2);
__builtin_memmove((R+24),(R+0),4);
}
B767ae4:{NFSU2_TR(0x767ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767ae7:{NFSU2_TR(0x767ae7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B767ae9:{NFSU2_TR(0x767ae9);
if(r1(R+518)){{goto L767b91;}}
}
B767aef:L767aef:{c.instructions+=4;NFSU2_TR(0x767aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767af2:{NFSU2_TR(0x767af2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B767af5:{NFSU2_TR(0x767af5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B767af8:{NFSU2_TR(0x767af8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767afdull));
TAIL_STATIC(0x75c4d0u,75c);
}
B767afd:L767afd:{c.instructions+=7;NFSU2_TR(0x767afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767b00:{NFSU2_TR(0x767b00);
__builtin_memmove((R+28),(R+16),4);
}
B767b02:{NFSU2_TR(0x767b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767b05:{NFSU2_TR(0x767b05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767b06:{NFSU2_TR(0x767b06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767b07:{NFSU2_TR(0x767b07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767b08:{NFSU2_TR(0x767b08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767b0dull));
TAIL_STATIC(0x768890u,768);
}
B767b0d:L767b0d:{c.instructions+=2;NFSU2_TR(0x767b0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B767b10:{NFSU2_TR(0x767b10);
{goto L767b22;}
}
B767b12:L767b12:{c.instructions+=3;NFSU2_TR(0x767b12);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B767b14:{NFSU2_TR(0x767b14);
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
B767b15:{NFSU2_TR(0x767b15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B767b16:L767b16:{c.instructions+=2;NFSU2_TR(0x767b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B767b19:{NFSU2_TR(0x767b19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767b1eull));
TAIL_STATIC(0x76d2d8u,76d);
}
B767b1e:L767b1e:{c.instructions+=2;NFSU2_TR(0x767b1e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B767b20:{NFSU2_TR(0x767b20);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B767b22:L767b22:{c.instructions+=3;NFSU2_TR(0x767b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B767b26:{NFSU2_TR(0x767b26);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B767b28:{NFSU2_TR(0x767b28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767b4d;}}
}
B767b2a:L767b2a:{c.instructions+=2;NFSU2_TR(0x767b2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767b2d:{NFSU2_TR(0x767b2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767b32ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B767b32:L767b32:{c.instructions+=4;NFSU2_TR(0x767b32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767b33:{NFSU2_TR(0x767b33);
__builtin_memmove((R+28),(R+0),4);
}
B767b35:{NFSU2_TR(0x767b35);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B767b37:{NFSU2_TR(0x767b37);
if(r1(R+518)){{goto L767b6a;}}
}
B767b39:L767b39:{c.instructions+=4;NFSU2_TR(0x767b39);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767b3c:{NFSU2_TR(0x767b3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767b3d:{NFSU2_TR(0x767b3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767b3e:{NFSU2_TR(0x767b3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767b43ull));
TAIL_STATIC(0x768890u,768);
}
B767b43:L767b43:{c.instructions+=2;NFSU2_TR(0x767b43);
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
B767b46:{NFSU2_TR(0x767b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B767b4d:L767b4d:{c.instructions+=7;NFSU2_TR(0x767b4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767b50:{NFSU2_TR(0x767b50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767b51:{NFSU2_TR(0x767b51);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767b54:{NFSU2_TR(0x767b54);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767b57:{NFSU2_TR(0x767b57);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767b5a:{NFSU2_TR(0x767b5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767b5d:{NFSU2_TR(0x767b5d);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767b63ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B767b63:L767b63:{c.instructions+=3;NFSU2_TR(0x767b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767b66:{NFSU2_TR(0x767b66);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B767b68:{NFSU2_TR(0x767b68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767b6e;}}
}
B767b6a:L767b6a:{c.instructions+=2;NFSU2_TR(0x767b6a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B767b6c:{NFSU2_TR(0x767b6c);
{goto L767b94;}
}
B767b6e:L767b6e:{c.instructions+=8;NFSU2_TR(0x767b6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767b71:{NFSU2_TR(0x767b71);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767b74:{NFSU2_TR(0x767b74);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767b77:{NFSU2_TR(0x767b77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767b78:{NFSU2_TR(0x767b78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767b79:{NFSU2_TR(0x767b79);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767b7c:{NFSU2_TR(0x767b7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767b7f:{NFSU2_TR(0x767b7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767b84ull));
TAIL_STATIC(0x76d109u,76d);
}
B767b84:L767b84:{c.instructions+=6;NFSU2_TR(0x767b84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B767b87:{NFSU2_TR(0x767b87);
__builtin_memmove((R+24),(R+0),4);
}
B767b89:{NFSU2_TR(0x767b89);
w1(R+512,u8((r4(R+24))!=(u32(0x0ull))));
w4(R+24,u32(0-u32(r4(R+24))));
}
B767b8b:{NFSU2_TR(0x767b8b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B767b8d:{NFSU2_TR(0x767b8d);
w4(R+24,u32(0-u32(r4(R+24))));
}
B767b8f:{NFSU2_TR(0x767b8f);
{goto L767b94;}
}
B767b91:L767b91:{c.instructions+=1;NFSU2_TR(0x767b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B767b94:L767b94:{c.instructions+=2;NFSU2_TR(0x767b94);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B767b97:{NFSU2_TR(0x767b97);
if(r1(R+518)){{goto L767bbc;}}
}
B767b99:L767b99:{c.instructions+=2;NFSU2_TR(0x767b99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767b9a:{NFSU2_TR(0x767b9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767b9full));
TAIL_STATIC(0x75c6dau,75c);
}
B767b9f:L767b9f:{c.instructions+=2;NFSU2_TR(0x767b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767ba0:{NFSU2_TR(0x767ba0);
{goto L767bbc;}
}
B767ba2:L767ba2:{c.instructions+=7;NFSU2_TR(0x767ba2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767ba5:{NFSU2_TR(0x767ba5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767ba8:{NFSU2_TR(0x767ba8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767bab:{NFSU2_TR(0x767bab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767bae:{NFSU2_TR(0x767bae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767bb1:{NFSU2_TR(0x767bb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767bb4:{NFSU2_TR(0x767bb4);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767bbaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B767bba:L767bba:{c.instructions+=1;NFSU2_TR(0x767bba);
__builtin_memmove((R+24),(R+0),4);
}
B767bbc:L767bbc:{c.instructions+=2;NFSU2_TR(0x767bbc);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
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
B767bbf:{NFSU2_TR(0x767bbf);
if(r1(R+518)){{goto L767bca;}}
}
B767bc1:L767bc1:{c.instructions+=2;NFSU2_TR(0x767bc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767bc4:{NFSU2_TR(0x767bc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767bc9ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767bc9:L767bc9:{c.instructions+=1;NFSU2_TR(0x767bc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767bca:L767bca:{c.instructions+=1;NFSU2_TR(0x767bca);
__builtin_memmove((R+0),(R+24),4);
}
B767bcc:L767bcc:{c.instructions+=2;NFSU2_TR(0x767bcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+16),(U+0),4);
}
B767bcf:{NFSU2_TR(0x767bcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767bd4ull));
TAIL_STATIC(0x760ddbu,760);
}
B767bd4:L767bd4:{c.instructions+=1;NFSU2_TR(0x767bd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B767bd5:L767bd5:{c.instructions+=10;NFSU2_TR(0x767bd5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767bd6:{NFSU2_TR(0x767bd6);
__builtin_memmove((R+20),(R+16),4);
}
B767bd8:{NFSU2_TR(0x767bd8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767bd9:{NFSU2_TR(0x767bd9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767bda:{NFSU2_TR(0x767bda);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B767bdc:{NFSU2_TR(0x767bdc);
w4(R+0,u32(m2(0x8b886e)));
}
B767be3:{NFSU2_TR(0x767be3);
w4(R+4,u32(m2(0x8b8870)));
}
B767bea:{NFSU2_TR(0x767bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767bed:{NFSU2_TR(0x767bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767bf0:{NFSU2_TR(0x767bf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L767bf7;}}
}
B767bf2:L767bf2:{c.instructions+=3;NFSU2_TR(0x767bf2);
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
B767bf5:{NFSU2_TR(0x767bf5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B767bf6:{NFSU2_TR(0x767bf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B767bf7:L767bf7:{c.instructions+=10;NFSU2_TR(0x767bf7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767bf8:{NFSU2_TR(0x767bf8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767bf9:{NFSU2_TR(0x767bf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B767bfc:{NFSU2_TR(0x767bfc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767bfd:{NFSU2_TR(0x767bfd);
u8 U[4];
w4(U+0,u32(0x31ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767bff:{NFSU2_TR(0x767bff);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B767c01:{NFSU2_TR(0x767c01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c02:{NFSU2_TR(0x767c02);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B767c03:{NFSU2_TR(0x767c03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c04:{NFSU2_TR(0x767c04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767c09ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767c09:L767c09:{c.instructions+=7;NFSU2_TR(0x767c09);
__builtin_memmove((R+28),(R+0),4);
}
B767c0b:{NFSU2_TR(0x767c0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767c0e:{NFSU2_TR(0x767c0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c0f:{NFSU2_TR(0x767c0f);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c11:{NFSU2_TR(0x767c11);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767c14:{NFSU2_TR(0x767c14);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c15:{NFSU2_TR(0x767c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767c1aull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767c1a:L767c1a:{c.instructions+=7;NFSU2_TR(0x767c1a);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767c1c:{NFSU2_TR(0x767c1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B767c1f:{NFSU2_TR(0x767c1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c20:{NFSU2_TR(0x767c20);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c22:{NFSU2_TR(0x767c22);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767c25:{NFSU2_TR(0x767c25);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c26:{NFSU2_TR(0x767c26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767c2bull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767c2b:L767c2b:{c.instructions+=7;NFSU2_TR(0x767c2b);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767c2d:{NFSU2_TR(0x767c2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767c30:{NFSU2_TR(0x767c30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c31:{NFSU2_TR(0x767c31);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c33:{NFSU2_TR(0x767c33);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767c36:{NFSU2_TR(0x767c36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c37:{NFSU2_TR(0x767c37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767c3cull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767c3c:L767c3c:{c.instructions+=8;NFSU2_TR(0x767c3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B767c3f:{NFSU2_TR(0x767c3f);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767c41:{NFSU2_TR(0x767c41);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767c44:{NFSU2_TR(0x767c44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c45:{NFSU2_TR(0x767c45);
u8 U[4];
w4(U+0,u32(0x35ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c47:{NFSU2_TR(0x767c47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767c4a:{NFSU2_TR(0x767c4a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c4b:{NFSU2_TR(0x767c4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767c50ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767c50:L767c50:{c.instructions+=7;NFSU2_TR(0x767c50);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767c52:{NFSU2_TR(0x767c52);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767c55:{NFSU2_TR(0x767c55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c56:{NFSU2_TR(0x767c56);
u8 U[4];
w4(U+0,u32(0x36ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c58:{NFSU2_TR(0x767c58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767c5b:{NFSU2_TR(0x767c5b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c5c:{NFSU2_TR(0x767c5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767c61ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767c61:L767c61:{c.instructions+=6;NFSU2_TR(0x767c61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c62:{NFSU2_TR(0x767c62);
u8 U[4];
w4(U+0,u32(0x37ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c64:{NFSU2_TR(0x767c64);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767c67:{NFSU2_TR(0x767c67);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767c69:{NFSU2_TR(0x767c69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c6a:{NFSU2_TR(0x767c6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767c6full));
TAIL_STATIC(0x76d3a9u,76d);
}
B767c6f:L767c6f:{c.instructions+=7;NFSU2_TR(0x767c6f);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767c71:{NFSU2_TR(0x767c71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767c74:{NFSU2_TR(0x767c74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c75:{NFSU2_TR(0x767c75);
u8 U[4];
w4(U+0,u32(0x2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c77:{NFSU2_TR(0x767c77);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767c7a:{NFSU2_TR(0x767c7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c7b:{NFSU2_TR(0x767c7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767c80ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767c80:L767c80:{c.instructions+=8;NFSU2_TR(0x767c80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B767c83:{NFSU2_TR(0x767c83);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767c85:{NFSU2_TR(0x767c85);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767c88:{NFSU2_TR(0x767c88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c89:{NFSU2_TR(0x767c89);
u8 U[4];
w4(U+0,u32(0x2bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c8b:{NFSU2_TR(0x767c8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767c8e:{NFSU2_TR(0x767c8e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c8f:{NFSU2_TR(0x767c8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767c94ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767c94:L767c94:{c.instructions+=7;NFSU2_TR(0x767c94);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767c96:{NFSU2_TR(0x767c96);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767c99:{NFSU2_TR(0x767c99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c9a:{NFSU2_TR(0x767c9a);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767c9c:{NFSU2_TR(0x767c9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767c9f:{NFSU2_TR(0x767c9f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ca0:{NFSU2_TR(0x767ca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767ca5ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767ca5:L767ca5:{c.instructions+=7;NFSU2_TR(0x767ca5);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767ca7:{NFSU2_TR(0x767ca7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B767caa:{NFSU2_TR(0x767caa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767cab:{NFSU2_TR(0x767cab);
u8 U[4];
w4(U+0,u32(0x2dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767cad:{NFSU2_TR(0x767cad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767cb0:{NFSU2_TR(0x767cb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767cb1:{NFSU2_TR(0x767cb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767cb6ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767cb6:L767cb6:{c.instructions+=7;NFSU2_TR(0x767cb6);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767cb8:{NFSU2_TR(0x767cb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767cbb:{NFSU2_TR(0x767cbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767cbc:{NFSU2_TR(0x767cbc);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767cbe:{NFSU2_TR(0x767cbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767cc1:{NFSU2_TR(0x767cc1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767cc2:{NFSU2_TR(0x767cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767cc7ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767cc7:L767cc7:{c.instructions+=8;NFSU2_TR(0x767cc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B767cca:{NFSU2_TR(0x767cca);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767ccc:{NFSU2_TR(0x767ccc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767ccf:{NFSU2_TR(0x767ccf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767cd0:{NFSU2_TR(0x767cd0);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767cd2:{NFSU2_TR(0x767cd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767cd5:{NFSU2_TR(0x767cd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767cd6:{NFSU2_TR(0x767cd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767cdbull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767cdb:L767cdb:{c.instructions+=7;NFSU2_TR(0x767cdb);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767cdd:{NFSU2_TR(0x767cdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B767ce0:{NFSU2_TR(0x767ce0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ce1:{NFSU2_TR(0x767ce1);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ce3:{NFSU2_TR(0x767ce3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767ce6:{NFSU2_TR(0x767ce6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ce7:{NFSU2_TR(0x767ce7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767cecull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767cec:L767cec:{c.instructions+=7;NFSU2_TR(0x767cec);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767cee:{NFSU2_TR(0x767cee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767cf1:{NFSU2_TR(0x767cf1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767cf2:{NFSU2_TR(0x767cf2);
u8 U[4];
w4(U+0,u32(0x44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767cf4:{NFSU2_TR(0x767cf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767cf7:{NFSU2_TR(0x767cf7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767cf8:{NFSU2_TR(0x767cf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767cfdull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767cfd:L767cfd:{c.instructions+=7;NFSU2_TR(0x767cfd);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767cff:{NFSU2_TR(0x767cff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B767d02:{NFSU2_TR(0x767d02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d03:{NFSU2_TR(0x767d03);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d05:{NFSU2_TR(0x767d05);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767d08:{NFSU2_TR(0x767d08);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d09:{NFSU2_TR(0x767d09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767d0eull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767d0e:L767d0e:{c.instructions+=8;NFSU2_TR(0x767d0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B767d11:{NFSU2_TR(0x767d11);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767d13:{NFSU2_TR(0x767d13);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767d16:{NFSU2_TR(0x767d16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d17:{NFSU2_TR(0x767d17);
u8 U[4];
w4(U+0,u32(0x46ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d19:{NFSU2_TR(0x767d19);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767d1c:{NFSU2_TR(0x767d1c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d1d:{NFSU2_TR(0x767d1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767d22ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767d22:L767d22:{c.instructions+=7;NFSU2_TR(0x767d22);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767d24:{NFSU2_TR(0x767d24);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767d27:{NFSU2_TR(0x767d27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d28:{NFSU2_TR(0x767d28);
u8 U[4];
w4(U+0,u32(0x47ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d2a:{NFSU2_TR(0x767d2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767d2d:{NFSU2_TR(0x767d2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d2e:{NFSU2_TR(0x767d2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767d33ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767d33:L767d33:{c.instructions+=7;NFSU2_TR(0x767d33);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767d35:{NFSU2_TR(0x767d35);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767d38:{NFSU2_TR(0x767d38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d39:{NFSU2_TR(0x767d39);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d3b:{NFSU2_TR(0x767d3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767d3e:{NFSU2_TR(0x767d3e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d3f:{NFSU2_TR(0x767d3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767d44ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767d44:L767d44:{c.instructions+=7;NFSU2_TR(0x767d44);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767d46:{NFSU2_TR(0x767d46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B767d49:{NFSU2_TR(0x767d49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d4a:{NFSU2_TR(0x767d4a);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d4c:{NFSU2_TR(0x767d4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767d4f:{NFSU2_TR(0x767d4f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d50:{NFSU2_TR(0x767d50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767d55ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767d55:L767d55:{c.instructions+=8;NFSU2_TR(0x767d55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B767d58:{NFSU2_TR(0x767d58);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767d5a:{NFSU2_TR(0x767d5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767d5d:{NFSU2_TR(0x767d5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d5e:{NFSU2_TR(0x767d5e);
u8 U[4];
w4(U+0,u32(0x4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d60:{NFSU2_TR(0x767d60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767d63:{NFSU2_TR(0x767d63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d64:{NFSU2_TR(0x767d64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767d69ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767d69:L767d69:{c.instructions+=7;NFSU2_TR(0x767d69);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767d6b:{NFSU2_TR(0x767d6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767d6e:{NFSU2_TR(0x767d6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d6f:{NFSU2_TR(0x767d6f);
u8 U[4];
w4(U+0,u32(0x4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d71:{NFSU2_TR(0x767d71);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767d74:{NFSU2_TR(0x767d74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d75:{NFSU2_TR(0x767d75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767d7aull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767d7a:L767d7a:{c.instructions+=7;NFSU2_TR(0x767d7a);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767d7c:{NFSU2_TR(0x767d7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767d7f:{NFSU2_TR(0x767d7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d80:{NFSU2_TR(0x767d80);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d82:{NFSU2_TR(0x767d82);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767d85:{NFSU2_TR(0x767d85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d86:{NFSU2_TR(0x767d86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767d8bull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767d8b:L767d8b:{c.instructions+=7;NFSU2_TR(0x767d8b);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767d8d:{NFSU2_TR(0x767d8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B767d90:{NFSU2_TR(0x767d90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d91:{NFSU2_TR(0x767d91);
u8 U[4];
w4(U+0,u32(0x4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d93:{NFSU2_TR(0x767d93);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767d96:{NFSU2_TR(0x767d96);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767d97:{NFSU2_TR(0x767d97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767d9cull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767d9c:L767d9c:{c.instructions+=8;NFSU2_TR(0x767d9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B767d9f:{NFSU2_TR(0x767d9f);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767da1:{NFSU2_TR(0x767da1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767da4:{NFSU2_TR(0x767da4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767da5:{NFSU2_TR(0x767da5);
u8 U[4];
w4(U+0,u32(0x4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767da7:{NFSU2_TR(0x767da7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767daa:{NFSU2_TR(0x767daa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767dab:{NFSU2_TR(0x767dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767db0ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767db0:L767db0:{c.instructions+=7;NFSU2_TR(0x767db0);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767db2:{NFSU2_TR(0x767db2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767db5:{NFSU2_TR(0x767db5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767db6:{NFSU2_TR(0x767db6);
u8 U[4];
w4(U+0,u32(0x4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767db8:{NFSU2_TR(0x767db8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767dbb:{NFSU2_TR(0x767dbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767dbc:{NFSU2_TR(0x767dbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767dc1ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767dc1:L767dc1:{c.instructions+=7;NFSU2_TR(0x767dc1);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767dc3:{NFSU2_TR(0x767dc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767dc6:{NFSU2_TR(0x767dc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767dc7:{NFSU2_TR(0x767dc7);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767dc9:{NFSU2_TR(0x767dc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767dcc:{NFSU2_TR(0x767dcc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767dcd:{NFSU2_TR(0x767dcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767dd2ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767dd2:L767dd2:{c.instructions+=7;NFSU2_TR(0x767dd2);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767dd4:{NFSU2_TR(0x767dd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B767dd7:{NFSU2_TR(0x767dd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767dd8:{NFSU2_TR(0x767dd8);
u8 U[4];
w4(U+0,u32(0x39ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767dda:{NFSU2_TR(0x767dda);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767ddd:{NFSU2_TR(0x767ddd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767dde:{NFSU2_TR(0x767dde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767de3ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767de3:L767de3:{c.instructions+=8;NFSU2_TR(0x767de3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B767de6:{NFSU2_TR(0x767de6);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767de8:{NFSU2_TR(0x767de8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767deb:{NFSU2_TR(0x767deb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767dec:{NFSU2_TR(0x767dec);
u8 U[4];
w4(U+0,u32(0x3aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767dee:{NFSU2_TR(0x767dee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767df1:{NFSU2_TR(0x767df1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767df2:{NFSU2_TR(0x767df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767df7ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767df7:L767df7:{c.instructions+=7;NFSU2_TR(0x767df7);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767df9:{NFSU2_TR(0x767df9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767dfc:{NFSU2_TR(0x767dfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767dfd:{NFSU2_TR(0x767dfd);
u8 U[4];
w4(U+0,u32(0x3bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767dff:{NFSU2_TR(0x767dff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767e02:{NFSU2_TR(0x767e02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e03:{NFSU2_TR(0x767e03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767e08ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767e08:L767e08:{c.instructions+=7;NFSU2_TR(0x767e08);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767e0a:{NFSU2_TR(0x767e0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767e0d:{NFSU2_TR(0x767e0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e0e:{NFSU2_TR(0x767e0e);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e10:{NFSU2_TR(0x767e10);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767e13:{NFSU2_TR(0x767e13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e14:{NFSU2_TR(0x767e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767e19ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767e19:L767e19:{c.instructions+=7;NFSU2_TR(0x767e19);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767e1b:{NFSU2_TR(0x767e1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B767e1e:{NFSU2_TR(0x767e1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e1f:{NFSU2_TR(0x767e1f);
u8 U[4];
w4(U+0,u32(0x3dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e21:{NFSU2_TR(0x767e21);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767e24:{NFSU2_TR(0x767e24);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e25:{NFSU2_TR(0x767e25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767e2aull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767e2a:L767e2a:{c.instructions+=8;NFSU2_TR(0x767e2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B767e2d:{NFSU2_TR(0x767e2d);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767e2f:{NFSU2_TR(0x767e2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767e35:{NFSU2_TR(0x767e35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e36:{NFSU2_TR(0x767e36);
u8 U[4];
w4(U+0,u32(0x3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e38:{NFSU2_TR(0x767e38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767e3b:{NFSU2_TR(0x767e3b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e3c:{NFSU2_TR(0x767e3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767e41ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767e41:L767e41:{c.instructions+=7;NFSU2_TR(0x767e41);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767e43:{NFSU2_TR(0x767e43);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767e49:{NFSU2_TR(0x767e49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e4a:{NFSU2_TR(0x767e4a);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e4c:{NFSU2_TR(0x767e4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767e4f:{NFSU2_TR(0x767e4f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e50:{NFSU2_TR(0x767e50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767e55ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767e55:L767e55:{c.instructions+=7;NFSU2_TR(0x767e55);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767e57:{NFSU2_TR(0x767e57);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767e5d:{NFSU2_TR(0x767e5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e5e:{NFSU2_TR(0x767e5e);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e60:{NFSU2_TR(0x767e60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767e63:{NFSU2_TR(0x767e63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e64:{NFSU2_TR(0x767e64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767e69ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767e69:L767e69:{c.instructions+=7;NFSU2_TR(0x767e69);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767e6b:{NFSU2_TR(0x767e6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B767e71:{NFSU2_TR(0x767e71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e72:{NFSU2_TR(0x767e72);
u8 U[4];
w4(U+0,u32(0x41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e74:{NFSU2_TR(0x767e74);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767e77:{NFSU2_TR(0x767e77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e78:{NFSU2_TR(0x767e78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767e7dull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767e7d:L767e7d:{c.instructions+=8;NFSU2_TR(0x767e7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B767e80:{NFSU2_TR(0x767e80);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767e82:{NFSU2_TR(0x767e82);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767e88:{NFSU2_TR(0x767e88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e89:{NFSU2_TR(0x767e89);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e8b:{NFSU2_TR(0x767e8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767e8e:{NFSU2_TR(0x767e8e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e8f:{NFSU2_TR(0x767e8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767e94ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767e94:L767e94:{c.instructions+=7;NFSU2_TR(0x767e94);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767e96:{NFSU2_TR(0x767e96);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767e9c:{NFSU2_TR(0x767e9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e9d:{NFSU2_TR(0x767e9d);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767e9f:{NFSU2_TR(0x767e9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767ea2:{NFSU2_TR(0x767ea2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ea3:{NFSU2_TR(0x767ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767ea8ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767ea8:L767ea8:{c.instructions+=7;NFSU2_TR(0x767ea8);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767eaa:{NFSU2_TR(0x767eaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767eb0:{NFSU2_TR(0x767eb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767eb1:{NFSU2_TR(0x767eb1);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767eb3:{NFSU2_TR(0x767eb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767eb6:{NFSU2_TR(0x767eb6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767eb7:{NFSU2_TR(0x767eb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767ebcull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767ebc:L767ebc:{c.instructions+=7;NFSU2_TR(0x767ebc);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767ebe:{NFSU2_TR(0x767ebe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B767ec4:{NFSU2_TR(0x767ec4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ec5:{NFSU2_TR(0x767ec5);
u8 U[4];
w4(U+0,u32(0x29ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ec7:{NFSU2_TR(0x767ec7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767eca:{NFSU2_TR(0x767eca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ecb:{NFSU2_TR(0x767ecb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767ed0ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767ed0:L767ed0:{c.instructions+=8;NFSU2_TR(0x767ed0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B767ed3:{NFSU2_TR(0x767ed3);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767ed5:{NFSU2_TR(0x767ed5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767edb:{NFSU2_TR(0x767edb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767edc:{NFSU2_TR(0x767edc);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ede:{NFSU2_TR(0x767ede);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767ee1:{NFSU2_TR(0x767ee1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ee2:{NFSU2_TR(0x767ee2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767ee7ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767ee7:L767ee7:{c.instructions+=7;NFSU2_TR(0x767ee7);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767ee9:{NFSU2_TR(0x767ee9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767eef:{NFSU2_TR(0x767eef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ef0:{NFSU2_TR(0x767ef0);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ef2:{NFSU2_TR(0x767ef2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767ef5:{NFSU2_TR(0x767ef5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767ef6:{NFSU2_TR(0x767ef6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767efbull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767efb:L767efb:{c.instructions+=7;NFSU2_TR(0x767efb);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767efd:{NFSU2_TR(0x767efd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767f03:{NFSU2_TR(0x767f03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767f04:{NFSU2_TR(0x767f04);
u8 U[4];
w4(U+0,u32(0x1003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767f09:{NFSU2_TR(0x767f09);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767f0c:{NFSU2_TR(0x767f0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767f0d:{NFSU2_TR(0x767f0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767f12ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767f12:L767f12:{c.instructions+=8;NFSU2_TR(0x767f12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B767f15:{NFSU2_TR(0x767f15);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B767f17:{NFSU2_TR(0x767f17);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B767f1d:{NFSU2_TR(0x767f1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767f1e:{NFSU2_TR(0x767f1e);
u8 U[4];
w4(U+0,u32(0x1009ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767f23:{NFSU2_TR(0x767f23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767f24:{NFSU2_TR(0x767f24);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767f26:{NFSU2_TR(0x767f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767f2bull));
TAIL_STATIC(0x76d3a9u,76d);
}
B767f2b:L767f2b:{c.instructions+=8;NFSU2_TR(0x767f2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B767f2e:{NFSU2_TR(0x767f2e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B767f30:{NFSU2_TR(0x767f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B767f36:{NFSU2_TR(0x767f36);
__builtin_memmove((R+0),(R+28),4);
}
B767f38:{NFSU2_TR(0x767f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B767f39:{NFSU2_TR(0x767f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B767f3a:{NFSU2_TR(0x767f3a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B767f3b:{NFSU2_TR(0x767f3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B767f3c:L767f3c:{c.instructions+=4;NFSU2_TR(0x767f3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B767f3d:{NFSU2_TR(0x767f3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B767f41:{NFSU2_TR(0x767f41);
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
B767f43:{NFSU2_TR(0x767f43);
if(r1(R+518)){TAIL_STATIC(0x7680cau,768);}
}
B767f49:L767f49:{c.instructions+=2;NFSU2_TR(0x767f49);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767f4c:{NFSU2_TR(0x767f4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767f51ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767f51:L767f51:{c.instructions+=2;NFSU2_TR(0x767f51);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767f54:{NFSU2_TR(0x767f54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767f59ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767f59:L767f59:{c.instructions+=2;NFSU2_TR(0x767f59);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767f5c:{NFSU2_TR(0x767f5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767f61ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767f61:L767f61:{c.instructions+=2;NFSU2_TR(0x767f61);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767f64:{NFSU2_TR(0x767f64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767f69ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767f69:L767f69:{c.instructions+=2;NFSU2_TR(0x767f69);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767f6c:{NFSU2_TR(0x767f6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767f71ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767f71:L767f71:{c.instructions+=2;NFSU2_TR(0x767f71);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767f74:{NFSU2_TR(0x767f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767f79ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767f79:L767f79:{c.instructions+=2;NFSU2_TR(0x767f79);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B767f7b:{NFSU2_TR(0x767f7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767f80ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767f80:L767f80:{c.instructions+=2;NFSU2_TR(0x767f80);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767f83:{NFSU2_TR(0x767f83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767f88ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767f88:L767f88:{c.instructions+=2;NFSU2_TR(0x767f88);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767f8b:{NFSU2_TR(0x767f8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767f90ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767f90:L767f90:{c.instructions+=2;NFSU2_TR(0x767f90);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767f93:{NFSU2_TR(0x767f93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767f98ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767f98:L767f98:{c.instructions+=2;NFSU2_TR(0x767f98);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767f9b:{NFSU2_TR(0x767f9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767fa0ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767fa0:L767fa0:{c.instructions+=2;NFSU2_TR(0x767fa0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767fa3:{NFSU2_TR(0x767fa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767fa8ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767fa8:L767fa8:{c.instructions+=2;NFSU2_TR(0x767fa8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767fab:{NFSU2_TR(0x767fab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767fb0ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767fb0:L767fb0:{c.instructions+=2;NFSU2_TR(0x767fb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767fb3:{NFSU2_TR(0x767fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767fb8ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767fb8:L767fb8:{c.instructions+=2;NFSU2_TR(0x767fb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767fbb:{NFSU2_TR(0x767fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767fc0ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767fc0:L767fc0:{c.instructions+=2;NFSU2_TR(0x767fc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767fc3:{NFSU2_TR(0x767fc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767fc8ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767fc8:L767fc8:{c.instructions+=3;NFSU2_TR(0x767fc8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B767fcb:{NFSU2_TR(0x767fcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767fce:{NFSU2_TR(0x767fce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767fd3ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767fd3:L767fd3:{c.instructions+=2;NFSU2_TR(0x767fd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767fd6:{NFSU2_TR(0x767fd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767fdbull));
TAIL_STATIC(0x75c6dau,75c);
}
B767fdb:L767fdb:{c.instructions+=2;NFSU2_TR(0x767fdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767fde:{NFSU2_TR(0x767fde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767fe3ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767fe3:L767fe3:{c.instructions+=2;NFSU2_TR(0x767fe3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767fe6:{NFSU2_TR(0x767fe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767febull));
TAIL_STATIC(0x75c6dau,75c);
}
B767feb:L767feb:{c.instructions+=2;NFSU2_TR(0x767feb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767fee:{NFSU2_TR(0x767fee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767ff3ull));
TAIL_STATIC(0x75c6dau,75c);
}
B767ff3:L767ff3:{c.instructions+=2;NFSU2_TR(0x767ff3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767ff6:{NFSU2_TR(0x767ff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x767ffbull));
TAIL_STATIC(0x75c6dau,75c);
}
B767ffb:L767ffb:{c.instructions+=2;NFSU2_TR(0x767ffb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B767ffe:{NFSU2_TR(0x767ffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768003ull));
TAIL_STATIC(0x75c6dau,75c);
}
XIT:NFSU2_TR_EXIT(0x767,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
