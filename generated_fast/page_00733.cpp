#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_72a(u8* __restrict R,Cpu& c);
u32 body_72c(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x733,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x733,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_733(u8* __restrict R,Cpu& c);
u32 page_733(Cpu& c){return body_733(c.regs.data(),c);}
__attribute__((noinline)) u32 body_733(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x733000:goto L733000;
case 0x733003:c.instructions+=4;goto B733003;
case 0x733006:c.instructions+=3;goto B733006;
case 0x733009:c.instructions+=2;goto B733009;
case 0x73300c:c.instructions+=1;goto B73300c;
case 0x73300e:goto L73300e;
case 0x733011:c.instructions+=6;goto B733011;
case 0x733014:c.instructions+=5;goto B733014;
case 0x733015:c.instructions+=4;goto B733015;
case 0x733018:c.instructions+=3;goto B733018;
case 0x733019:c.instructions+=2;goto B733019;
case 0x73301b:c.instructions+=1;goto B73301b;
case 0x733020:goto L733020;
case 0x733021:c.instructions+=2;goto B733021;
case 0x733022:c.instructions+=1;goto B733022;
case 0x733023:goto L733023;
case 0x733024:c.instructions+=8;goto B733024;
case 0x733026:c.instructions+=7;goto B733026;
case 0x733029:c.instructions+=6;goto B733029;
case 0x73302a:c.instructions+=5;goto B73302a;
case 0x73302d:c.instructions+=4;goto B73302d;
case 0x733030:c.instructions+=3;goto B733030;
case 0x733033:c.instructions+=2;goto B733033;
case 0x733036:c.instructions+=1;goto B733036;
case 0x733038:goto L733038;
case 0x73303b:c.instructions+=1;goto B73303b;
case 0x73303d:goto L73303d;
case 0x733040:c.instructions+=7;goto B733040;
case 0x733041:c.instructions+=6;goto B733041;
case 0x733044:c.instructions+=5;goto B733044;
case 0x733045:c.instructions+=4;goto B733045;
case 0x733046:c.instructions+=3;goto B733046;
case 0x733049:c.instructions+=2;goto B733049;
case 0x73304a:c.instructions+=1;goto B73304a;
case 0x73304f:goto L73304f;
case 0x733051:c.instructions+=6;goto B733051;
case 0x733054:c.instructions+=5;goto B733054;
case 0x733057:c.instructions+=4;goto B733057;
case 0x733059:c.instructions+=3;goto B733059;
case 0x73305c:c.instructions+=2;goto B73305c;
case 0x73305f:c.instructions+=1;goto B73305f;
case 0x733061:goto L733061;
case 0x733063:c.instructions+=5;goto B733063;
case 0x733065:c.instructions+=4;goto B733065;
case 0x733068:c.instructions+=3;goto B733068;
case 0x733069:c.instructions+=2;goto B733069;
case 0x73306a:c.instructions+=1;goto B73306a;
case 0x73306f:goto L73306f;
case 0x733070:c.instructions+=2;goto B733070;
case 0x733071:c.instructions+=1;goto B733071;
case 0x733073:goto L733073;
case 0x733075:c.instructions+=2;goto B733075;
case 0x733076:c.instructions+=1;goto B733076;
case 0x733077:goto L733077;
case 0x733078:c.instructions+=2;goto B733078;
case 0x733079:c.instructions+=1;goto B733079;
case 0x73307a:goto L73307a;
case 0x73307e:c.instructions+=2;goto B73307e;
case 0x733081:c.instructions+=1;goto B733081;
case 0x733082:goto L733082;
case 0x733086:c.instructions+=3;goto B733086;
case 0x733089:c.instructions+=2;goto B733089;
case 0x73308b:c.instructions+=1;goto B73308b;
case 0x73308d:goto L73308d;
case 0x73308e:c.instructions+=1;goto B73308e;
case 0x733093:goto L733093;
case 0x733094:goto L733094;
case 0x733095:goto L733095;
case 0x733096:c.instructions+=12;goto B733096;
case 0x73309a:c.instructions+=11;goto B73309a;
case 0x73309b:c.instructions+=10;goto B73309b;
case 0x73309f:c.instructions+=9;goto B73309f;
case 0x7330a5:c.instructions+=8;goto B7330a5;
case 0x7330ac:c.instructions+=7;goto B7330ac;
case 0x7330ae:c.instructions+=6;goto B7330ae;
case 0x7330b1:c.instructions+=5;goto B7330b1;
case 0x7330b4:c.instructions+=4;goto B7330b4;
case 0x7330b8:c.instructions+=3;goto B7330b8;
case 0x7330bd:c.instructions+=2;goto B7330bd;
case 0x7330c0:c.instructions+=1;goto B7330c0;
case 0x7330c5:goto L7330c5;
case 0x7330c7:c.instructions+=2;goto B7330c7;
case 0x7330c8:c.instructions+=1;goto B7330c8;
case 0x7330ca:goto L7330ca;
case 0x7330cc:c.instructions+=1;goto B7330cc;
case 0x7330d1:goto L7330d1;
case 0x7330d3:goto L7330d3;
case 0x7330d5:goto L7330d5;
case 0x7330d8:c.instructions+=8;goto B7330d8;
case 0x7330df:c.instructions+=7;goto B7330df;
case 0x7330e2:c.instructions+=6;goto B7330e2;
case 0x7330e5:c.instructions+=5;goto B7330e5;
case 0x7330e6:c.instructions+=4;goto B7330e6;
case 0x7330e9:c.instructions+=3;goto B7330e9;
case 0x7330ea:c.instructions+=2;goto B7330ea;
case 0x7330ed:c.instructions+=1;goto B7330ed;
case 0x7330f2:goto L7330f2;
case 0x7330f3:c.instructions+=2;goto B7330f3;
case 0x7330f4:c.instructions+=1;goto B7330f4;
case 0x7330f5:goto L7330f5;
case 0x7330f6:c.instructions+=9;goto B7330f6;
case 0x7330f8:c.instructions+=8;goto B7330f8;
case 0x7330f9:c.instructions+=7;goto B7330f9;
case 0x7330fc:c.instructions+=6;goto B7330fc;
case 0x7330fd:c.instructions+=5;goto B7330fd;
case 0x733100:c.instructions+=4;goto B733100;
case 0x733103:c.instructions+=3;goto B733103;
case 0x733105:c.instructions+=2;goto B733105;
case 0x733106:c.instructions+=1;goto B733106;
case 0x73310c:goto L73310c;
case 0x73310d:c.instructions+=4;goto B73310d;
case 0x733111:c.instructions+=3;goto B733111;
case 0x733112:c.instructions+=2;goto B733112;
case 0x733115:c.instructions+=1;goto B733115;
case 0x73311a:goto L73311a;
case 0x73311d:c.instructions+=2;goto B73311d;
case 0x733121:c.instructions+=1;goto B733121;
case 0x733123:goto L733123;
case 0x733126:c.instructions+=2;goto B733126;
case 0x733129:c.instructions+=1;goto B733129;
case 0x73312b:goto L73312b;
case 0x73312e:c.instructions+=7;goto B73312e;
case 0x73312f:c.instructions+=6;goto B73312f;
case 0x733132:c.instructions+=5;goto B733132;
case 0x733133:c.instructions+=4;goto B733133;
case 0x733137:c.instructions+=3;goto B733137;
case 0x733138:c.instructions+=2;goto B733138;
case 0x73313b:c.instructions+=1;goto B73313b;
case 0x733140:goto L733140;
case 0x733143:c.instructions+=3;goto B733143;
case 0x733145:c.instructions+=2;goto B733145;
case 0x733148:c.instructions+=1;goto B733148;
case 0x73314a:goto L73314a;
case 0x73314d:c.instructions+=2;goto B73314d;
case 0x733151:c.instructions+=1;goto B733151;
case 0x733154:goto L733154;
case 0x733157:c.instructions+=4;goto B733157;
case 0x73315a:c.instructions+=3;goto B73315a;
case 0x73315c:c.instructions+=2;goto B73315c;
case 0x73315f:c.instructions+=1;goto B73315f;
case 0x733161:goto L733161;
case 0x733164:goto L733164;
case 0x733168:c.instructions+=3;goto B733168;
case 0x73316b:c.instructions+=2;goto B73316b;
case 0x73316c:c.instructions+=1;goto B73316c;
case 0x73316e:goto L73316e;
case 0x733171:c.instructions+=3;goto B733171;
case 0x733172:c.instructions+=2;goto B733172;
case 0x733173:c.instructions+=1;goto B733173;
case 0x733179:goto L733179;
case 0x73317b:goto L73317b;
case 0x73317d:c.instructions+=3;goto B73317d;
case 0x73317e:c.instructions+=2;goto B73317e;
case 0x73317f:c.instructions+=1;goto B73317f;
case 0x733184:goto L733184;
case 0x733187:c.instructions+=4;goto B733187;
case 0x73318a:c.instructions+=3;goto B73318a;
case 0x73318d:c.instructions+=2;goto B73318d;
case 0x733190:c.instructions+=1;goto B733190;
case 0x733193:goto L733193;
case 0x733197:c.instructions+=1;goto B733197;
case 0x733199:goto L733199;
case 0x73319b:goto L73319b;
case 0x73319f:c.instructions+=1;goto B73319f;
case 0x7331a1:goto L7331a1;
case 0x7331a4:c.instructions+=4;goto B7331a4;
case 0x7331a7:c.instructions+=3;goto B7331a7;
case 0x7331a8:c.instructions+=2;goto B7331a8;
case 0x7331a9:c.instructions+=1;goto B7331a9;
case 0x7331ae:goto L7331ae;
case 0x7331af:c.instructions+=1;goto B7331af;
case 0x7331b0:goto L7331b0;
case 0x7331b3:c.instructions+=5;goto B7331b3;
case 0x7331b4:c.instructions+=4;goto B7331b4;
case 0x7331b5:c.instructions+=3;goto B7331b5;
case 0x7331b6:c.instructions+=2;goto B7331b6;
case 0x7331b7:c.instructions+=1;goto B7331b7;
case 0x7331b8:goto L7331b8;
case 0x7331b9:c.instructions+=6;goto B7331b9;
case 0x7331bd:c.instructions+=5;goto B7331bd;
case 0x7331be:c.instructions+=4;goto B7331be;
case 0x7331c2:c.instructions+=3;goto B7331c2;
case 0x7331c8:c.instructions+=2;goto B7331c8;
case 0x7331cb:c.instructions+=1;goto B7331cb;
case 0x7331d0:goto L7331d0;
case 0x7331d1:c.instructions+=1;goto B7331d1;
case 0x7331d6:goto L7331d6;
case 0x7331d9:c.instructions+=2;goto B7331d9;
case 0x7331dc:c.instructions+=1;goto B7331dc;
case 0x7331e1:goto L7331e1;
case 0x7331e5:c.instructions+=11;goto B7331e5;
case 0x7331e8:c.instructions+=10;goto B7331e8;
case 0x7331ea:c.instructions+=9;goto B7331ea;
case 0x7331ed:c.instructions+=8;goto B7331ed;
case 0x7331f0:c.instructions+=7;goto B7331f0;
case 0x7331f3:c.instructions+=6;goto B7331f3;
case 0x7331f6:c.instructions+=5;goto B7331f6;
case 0x7331f7:c.instructions+=4;goto B7331f7;
case 0x7331fa:c.instructions+=3;goto B7331fa;
case 0x7331fd:c.instructions+=2;goto B7331fd;
case 0x7331fe:c.instructions+=1;goto B7331fe;
case 0x7331ff:goto L7331ff;
case 0x733200:c.instructions+=5;goto B733200;
case 0x733202:c.instructions+=4;goto B733202;
case 0x733206:c.instructions+=3;goto B733206;
case 0x733207:c.instructions+=2;goto B733207;
case 0x73320a:c.instructions+=1;goto B73320a;
case 0x73320c:goto L73320c;
case 0x73320d:c.instructions+=2;goto B73320d;
case 0x733210:c.instructions+=1;goto B733210;
case 0x733211:goto L733211;
case 0x733214:c.instructions+=5;goto B733214;
case 0x733217:c.instructions+=4;goto B733217;
case 0x733219:c.instructions+=3;goto B733219;
case 0x73321a:c.instructions+=2;goto B73321a;
case 0x73321d:c.instructions+=1;goto B73321d;
case 0x73321f:goto L73321f;
case 0x733222:goto L733222;
case 0x733226:c.instructions+=3;goto B733226;
case 0x733229:c.instructions+=2;goto B733229;
case 0x73322a:c.instructions+=1;goto B73322a;
case 0x73322c:goto L73322c;
case 0x73322f:c.instructions+=3;goto B73322f;
case 0x733230:c.instructions+=2;goto B733230;
case 0x733231:c.instructions+=1;goto B733231;
case 0x733237:goto L733237;
case 0x733239:goto L733239;
case 0x73323b:c.instructions+=3;goto B73323b;
case 0x73323c:c.instructions+=2;goto B73323c;
case 0x73323d:c.instructions+=1;goto B73323d;
case 0x733242:goto L733242;
case 0x733245:c.instructions+=6;goto B733245;
case 0x733248:c.instructions+=5;goto B733248;
case 0x73324b:c.instructions+=4;goto B73324b;
case 0x73324e:c.instructions+=3;goto B73324e;
case 0x733251:c.instructions+=2;goto B733251;
case 0x733254:c.instructions+=1;goto B733254;
case 0x733256:goto L733256;
case 0x733259:c.instructions+=1;goto B733259;
case 0x73325c:goto L73325c;
case 0x733260:c.instructions+=1;goto B733260;
case 0x733262:goto L733262;
case 0x733263:c.instructions+=1;goto B733263;
case 0x733264:goto L733264;
case 0x733266:c.instructions+=4;goto B733266;
case 0x733267:c.instructions+=3;goto B733267;
case 0x733268:c.instructions+=2;goto B733268;
case 0x733269:c.instructions+=1;goto B733269;
case 0x73326a:goto L73326a;
case 0x73326e:c.instructions+=13;goto B73326e;
case 0x733272:c.instructions+=12;goto B733272;
case 0x733278:c.instructions+=11;goto B733278;
case 0x73327a:c.instructions+=10;goto B73327a;
case 0x73327e:c.instructions+=9;goto B73327e;
case 0x733281:c.instructions+=8;goto B733281;
case 0x733284:c.instructions+=7;goto B733284;
case 0x733287:c.instructions+=6;goto B733287;
case 0x73328a:c.instructions+=5;goto B73328a;
case 0x73328d:c.instructions+=4;goto B73328d;
case 0x733290:c.instructions+=3;goto B733290;
case 0x733293:c.instructions+=2;goto B733293;
case 0x73329a:c.instructions+=1;goto B73329a;
case 0x73329b:goto L73329b;
case 0x73329f:c.instructions+=2;goto B73329f;
case 0x7332a2:c.instructions+=1;goto B7332a2;
case 0x7332a3:goto L7332a3;
case 0x7332a4:c.instructions+=6;goto B7332a4;
case 0x7332a6:c.instructions+=5;goto B7332a6;
case 0x7332a9:c.instructions+=4;goto B7332a9;
case 0x7332ac:c.instructions+=3;goto B7332ac;
case 0x7332af:c.instructions+=2;goto B7332af;
case 0x7332b1:c.instructions+=1;goto B7332b1;
case 0x7332b3:goto L7332b3;
case 0x7332b6:c.instructions+=2;goto B7332b6;
case 0x7332b7:c.instructions+=1;goto B7332b7;
case 0x7332b8:goto L7332b8;
case 0x7332b9:c.instructions+=7;goto B7332b9;
case 0x7332ba:c.instructions+=6;goto B7332ba;
case 0x7332bd:c.instructions+=5;goto B7332bd;
case 0x7332c0:c.instructions+=4;goto B7332c0;
case 0x7332c3:c.instructions+=3;goto B7332c3;
case 0x7332c5:c.instructions+=2;goto B7332c5;
case 0x7332c8:c.instructions+=1;goto B7332c8;
case 0x7332ca:goto L7332ca;
case 0x7332ce:c.instructions+=2;goto B7332ce;
case 0x7332d1:c.instructions+=1;goto B7332d1;
case 0x7332d3:goto L7332d3;
case 0x7332d6:c.instructions+=3;goto B7332d6;
case 0x7332d7:c.instructions+=2;goto B7332d7;
case 0x7332d8:c.instructions+=1;goto B7332d8;
case 0x7332de:goto L7332de;
case 0x7332e1:c.instructions+=1;goto B7332e1;
case 0x7332e3:goto L7332e3;
case 0x7332e5:c.instructions+=3;goto B7332e5;
case 0x7332e6:c.instructions+=2;goto B7332e6;
case 0x7332e7:c.instructions+=1;goto B7332e7;
case 0x7332ec:goto L7332ec;
case 0x7332ee:goto L7332ee;
case 0x7332f0:c.instructions+=4;goto B7332f0;
case 0x7332f4:c.instructions+=3;goto B7332f4;
case 0x7332f7:c.instructions+=2;goto B7332f7;
case 0x7332f9:c.instructions+=1;goto B7332f9;
case 0x7332fb:goto L7332fb;
case 0x7332fe:c.instructions+=3;goto B7332fe;
case 0x7332ff:c.instructions+=2;goto B7332ff;
case 0x733300:c.instructions+=1;goto B733300;
case 0x733306:goto L733306;
case 0x733308:goto L733308;
case 0x73330a:c.instructions+=3;goto B73330a;
case 0x73330b:c.instructions+=2;goto B73330b;
case 0x73330c:c.instructions+=1;goto B73330c;
case 0x733311:goto L733311;
case 0x733314:c.instructions+=7;goto B733314;
case 0x733316:c.instructions+=6;goto B733316;
case 0x733319:c.instructions+=5;goto B733319;
case 0x73331c:c.instructions+=4;goto B73331c;
case 0x73331f:c.instructions+=3;goto B73331f;
case 0x733320:c.instructions+=2;goto B733320;
case 0x733321:c.instructions+=1;goto B733321;
case 0x733326:goto L733326;
case 0x733327:c.instructions+=1;goto B733327;
case 0x733328:goto L733328;
case 0x73332a:c.instructions+=5;goto B73332a;
case 0x73332b:c.instructions+=4;goto B73332b;
case 0x73332c:c.instructions+=3;goto B73332c;
case 0x73332d:c.instructions+=2;goto B73332d;
case 0x73332e:c.instructions+=1;goto B73332e;
case 0x73332f:goto L73332f;
case 0x733333:c.instructions+=12;goto B733333;
case 0x733337:c.instructions+=11;goto B733337;
case 0x73333d:c.instructions+=10;goto B73333d;
case 0x73333f:c.instructions+=9;goto B73333f;
case 0x733343:c.instructions+=8;goto B733343;
case 0x733346:c.instructions+=7;goto B733346;
case 0x733349:c.instructions+=6;goto B733349;
case 0x73334c:c.instructions+=5;goto B73334c;
case 0x73334f:c.instructions+=4;goto B73334f;
case 0x733352:c.instructions+=3;goto B733352;
case 0x733359:c.instructions+=2;goto B733359;
case 0x73335d:c.instructions+=1;goto B73335d;
case 0x73335e:goto L73335e;
case 0x73335f:c.instructions+=3;goto B73335f;
case 0x733361:c.instructions+=2;goto B733361;
case 0x733362:c.instructions+=1;goto B733362;
case 0x733369:goto L733369;
case 0x73336c:c.instructions+=6;goto B73336c;
case 0x733370:c.instructions+=5;goto B733370;
case 0x733373:c.instructions+=4;goto B733373;
case 0x733377:c.instructions+=3;goto B733377;
case 0x73337d:c.instructions+=2;goto B73337d;
case 0x733384:c.instructions+=1;goto B733384;
case 0x733386:goto L733386;
case 0x733387:c.instructions+=1;goto B733387;
case 0x733388:goto L733388;
case 0x733389:c.instructions+=13;goto B733389;
case 0x73338b:c.instructions+=12;goto B73338b;
case 0x73338e:c.instructions+=11;goto B73338e;
case 0x733392:c.instructions+=10;goto B733392;
case 0x733396:c.instructions+=9;goto B733396;
case 0x733397:c.instructions+=8;goto B733397;
case 0x73339a:c.instructions+=7;goto B73339a;
case 0x73339c:c.instructions+=6;goto B73339c;
case 0x73339f:c.instructions+=5;goto B73339f;
case 0x7333a2:c.instructions+=4;goto B7333a2;
case 0x7333a5:c.instructions+=3;goto B7333a5;
case 0x7333a7:c.instructions+=2;goto B7333a7;
case 0x7333ab:c.instructions+=1;goto B7333ab;
case 0x7333b1:goto L7333b1;
case 0x7333b7:c.instructions+=4;goto B7333b7;
case 0x7333b8:c.instructions+=3;goto B7333b8;
case 0x7333bb:c.instructions+=2;goto B7333bb;
case 0x7333bc:c.instructions+=1;goto B7333bc;
case 0x7333bf:goto L7333bf;
case 0x7333c1:c.instructions+=3;goto B7333c1;
case 0x7333c3:c.instructions+=2;goto B7333c3;
case 0x7333c5:c.instructions+=1;goto B7333c5;
case 0x7333c7:goto L7333c7;
case 0x7333cd:goto L7333cd;
case 0x7333d3:c.instructions+=44;goto B7333d3;
case 0x7333d5:c.instructions+=43;goto B7333d5;
case 0x7333d8:c.instructions+=42;goto B7333d8;
case 0x7333dc:c.instructions+=41;goto B7333dc;
case 0x7333de:c.instructions+=40;goto B7333de;
case 0x7333e0:c.instructions+=39;goto B7333e0;
case 0x7333e2:c.instructions+=38;goto B7333e2;
case 0x7333e5:c.instructions+=37;goto B7333e5;
case 0x7333eb:c.instructions+=36;goto B7333eb;
case 0x7333ee:c.instructions+=35;goto B7333ee;
case 0x7333f0:c.instructions+=34;goto B7333f0;
case 0x7333f2:c.instructions+=33;goto B7333f2;
case 0x7333f4:c.instructions+=32;goto B7333f4;
case 0x7333f6:c.instructions+=31;goto B7333f6;
case 0x7333f8:c.instructions+=30;goto B7333f8;
case 0x7333fb:c.instructions+=29;goto B7333fb;
case 0x7333fd:c.instructions+=28;goto B7333fd;
case 0x733400:c.instructions+=27;goto B733400;
case 0x733402:c.instructions+=26;goto B733402;
case 0x733408:c.instructions+=25;goto B733408;
case 0x73340a:c.instructions+=24;goto B73340a;
case 0x73340d:c.instructions+=23;goto B73340d;
case 0x73340f:c.instructions+=22;goto B73340f;
case 0x733411:c.instructions+=21;goto B733411;
case 0x733413:c.instructions+=20;goto B733413;
case 0x733415:c.instructions+=19;goto B733415;
case 0x733418:c.instructions+=18;goto B733418;
case 0x73341b:c.instructions+=17;goto B73341b;
case 0x73341d:c.instructions+=16;goto B73341d;
case 0x73341f:c.instructions+=15;goto B73341f;
case 0x733421:c.instructions+=14;goto B733421;
case 0x733423:c.instructions+=13;goto B733423;
case 0x733426:c.instructions+=12;goto B733426;
case 0x733429:c.instructions+=11;goto B733429;
case 0x73342b:c.instructions+=10;goto B73342b;
case 0x73342d:c.instructions+=9;goto B73342d;
case 0x733430:c.instructions+=8;goto B733430;
case 0x733432:c.instructions+=7;goto B733432;
case 0x733434:c.instructions+=6;goto B733434;
case 0x733436:c.instructions+=5;goto B733436;
case 0x73343b:c.instructions+=4;goto B73343b;
case 0x73343c:c.instructions+=3;goto B73343c;
case 0x73343f:c.instructions+=2;goto B73343f;
case 0x733442:c.instructions+=1;goto B733442;
case 0x733448:goto L733448;
case 0x733449:c.instructions+=2;goto B733449;
case 0x73344b:c.instructions+=1;goto B73344b;
case 0x73344c:goto L73344c;
case 0x73344f:c.instructions+=3;goto B73344f;
case 0x733450:c.instructions+=2;goto B733450;
case 0x733451:c.instructions+=1;goto B733451;
case 0x733460:goto L733460;
case 0x733461:c.instructions+=15;goto B733461;
case 0x733463:c.instructions+=14;goto B733463;
case 0x733464:c.instructions+=13;goto B733464;
case 0x733465:c.instructions+=12;goto B733465;
case 0x733468:c.instructions+=11;goto B733468;
case 0x73346b:c.instructions+=10;goto B73346b;
case 0x73346e:c.instructions+=9;goto B73346e;
case 0x733471:c.instructions+=8;goto B733471;
case 0x733474:c.instructions+=7;goto B733474;
case 0x733476:c.instructions+=6;goto B733476;
case 0x733479:c.instructions+=5;goto B733479;
case 0x73347c:c.instructions+=4;goto B73347c;
case 0x73347f:c.instructions+=3;goto B73347f;
case 0x733485:c.instructions+=2;goto B733485;
case 0x733488:c.instructions+=1;goto B733488;
case 0x73348e:goto L73348e;
case 0x733491:goto L733491;
case 0x733493:c.instructions+=89;goto B733493;
case 0x733497:c.instructions+=88;goto B733497;
case 0x73349d:c.instructions+=87;goto B73349d;
case 0x7334a3:c.instructions+=86;goto B7334a3;
case 0x7334a6:c.instructions+=85;goto B7334a6;
case 0x7334a8:c.instructions+=84;goto B7334a8;
case 0x7334aa:c.instructions+=83;goto B7334aa;
case 0x7334b0:c.instructions+=82;goto B7334b0;
case 0x7334b4:c.instructions+=81;goto B7334b4;
case 0x7334ba:c.instructions+=80;goto B7334ba;
case 0x7334be:c.instructions+=79;goto B7334be;
case 0x7334c4:c.instructions+=78;goto B7334c4;
case 0x7334c6:c.instructions+=77;goto B7334c6;
case 0x7334c8:c.instructions+=76;goto B7334c8;
case 0x7334cc:c.instructions+=75;goto B7334cc;
case 0x7334d2:c.instructions+=74;goto B7334d2;
case 0x7334d8:c.instructions+=73;goto B7334d8;
case 0x7334db:c.instructions+=72;goto B7334db;
case 0x7334dd:c.instructions+=71;goto B7334dd;
case 0x7334df:c.instructions+=70;goto B7334df;
case 0x7334e5:c.instructions+=69;goto B7334e5;
case 0x7334e9:c.instructions+=68;goto B7334e9;
case 0x7334ef:c.instructions+=67;goto B7334ef;
case 0x7334f3:c.instructions+=66;goto B7334f3;
case 0x7334f9:c.instructions+=65;goto B7334f9;
case 0x7334fb:c.instructions+=64;goto B7334fb;
case 0x7334fd:c.instructions+=63;goto B7334fd;
case 0x733501:c.instructions+=62;goto B733501;
case 0x733507:c.instructions+=61;goto B733507;
case 0x73350d:c.instructions+=60;goto B73350d;
case 0x733510:c.instructions+=59;goto B733510;
case 0x733512:c.instructions+=58;goto B733512;
case 0x733514:c.instructions+=57;goto B733514;
case 0x73351a:c.instructions+=56;goto B73351a;
case 0x73351e:c.instructions+=55;goto B73351e;
case 0x733524:c.instructions+=54;goto B733524;
case 0x733528:c.instructions+=53;goto B733528;
case 0x73352e:c.instructions+=52;goto B73352e;
case 0x733530:c.instructions+=51;goto B733530;
case 0x733532:c.instructions+=50;goto B733532;
case 0x733536:c.instructions+=49;goto B733536;
case 0x73353c:c.instructions+=48;goto B73353c;
case 0x733542:c.instructions+=47;goto B733542;
case 0x733545:c.instructions+=46;goto B733545;
case 0x733547:c.instructions+=45;goto B733547;
case 0x733549:c.instructions+=44;goto B733549;
case 0x73354f:c.instructions+=43;goto B73354f;
case 0x733553:c.instructions+=42;goto B733553;
case 0x733559:c.instructions+=41;goto B733559;
case 0x73355d:c.instructions+=40;goto B73355d;
case 0x733563:c.instructions+=39;goto B733563;
case 0x733565:c.instructions+=38;goto B733565;
case 0x73356c:c.instructions+=37;goto B73356c;
case 0x733573:c.instructions+=36;goto B733573;
case 0x733577:c.instructions+=35;goto B733577;
case 0x73357e:c.instructions+=34;goto B73357e;
case 0x733585:c.instructions+=33;goto B733585;
case 0x73358c:c.instructions+=32;goto B73358c;
case 0x733590:c.instructions+=31;goto B733590;
case 0x733597:c.instructions+=30;goto B733597;
case 0x73359e:c.instructions+=29;goto B73359e;
case 0x7335a5:c.instructions+=28;goto B7335a5;
case 0x7335a8:c.instructions+=27;goto B7335a8;
case 0x7335ab:c.instructions+=26;goto B7335ab;
case 0x7335ae:c.instructions+=25;goto B7335ae;
case 0x7335b1:c.instructions+=24;goto B7335b1;
case 0x7335b8:c.instructions+=23;goto B7335b8;
case 0x7335bf:c.instructions+=22;goto B7335bf;
case 0x7335c2:c.instructions+=21;goto B7335c2;
case 0x7335c5:c.instructions+=20;goto B7335c5;
case 0x7335c8:c.instructions+=19;goto B7335c8;
case 0x7335cb:c.instructions+=18;goto B7335cb;
case 0x7335d2:c.instructions+=17;goto B7335d2;
case 0x7335d9:c.instructions+=16;goto B7335d9;
case 0x7335dc:c.instructions+=15;goto B7335dc;
case 0x7335df:c.instructions+=14;goto B7335df;
case 0x7335e2:c.instructions+=13;goto B7335e2;
case 0x7335e9:c.instructions+=12;goto B7335e9;
case 0x7335ec:c.instructions+=11;goto B7335ec;
case 0x7335ef:c.instructions+=10;goto B7335ef;
case 0x7335f2:c.instructions+=9;goto B7335f2;
case 0x7335f5:c.instructions+=8;goto B7335f5;
case 0x7335f8:c.instructions+=7;goto B7335f8;
case 0x7335fb:c.instructions+=6;goto B7335fb;
case 0x7335fe:c.instructions+=5;goto B7335fe;
case 0x733601:c.instructions+=4;goto B733601;
case 0x733604:c.instructions+=3;goto B733604;
case 0x733607:c.instructions+=2;goto B733607;
case 0x73360b:c.instructions+=1;goto B73360b;
case 0x733611:goto L733611;
case 0x733614:goto L733614;
case 0x73361a:c.instructions+=1;goto B73361a;
case 0x733620:goto L733620;
case 0x733622:c.instructions+=39;goto B733622;
case 0x733628:c.instructions+=38;goto B733628;
case 0x73362e:c.instructions+=37;goto B73362e;
case 0x733633:c.instructions+=36;goto B733633;
case 0x733635:c.instructions+=35;goto B733635;
case 0x733637:c.instructions+=34;goto B733637;
case 0x73363d:c.instructions+=33;goto B73363d;
case 0x733643:c.instructions+=32;goto B733643;
case 0x733645:c.instructions+=31;goto B733645;
case 0x73364c:c.instructions+=30;goto B73364c;
case 0x733653:c.instructions+=29;goto B733653;
case 0x733657:c.instructions+=28;goto B733657;
case 0x73365b:c.instructions+=27;goto B73365b;
case 0x733663:c.instructions+=26;goto B733663;
case 0x733667:c.instructions+=25;goto B733667;
case 0x73366b:c.instructions+=24;goto B73366b;
case 0x733673:c.instructions+=23;goto B733673;
case 0x73367b:c.instructions+=22;goto B73367b;
case 0x73367f:c.instructions+=21;goto B73367f;
case 0x733683:c.instructions+=20;goto B733683;
case 0x73368b:c.instructions+=19;goto B73368b;
case 0x73368f:c.instructions+=18;goto B73368f;
case 0x733693:c.instructions+=17;goto B733693;
case 0x73369b:c.instructions+=16;goto B73369b;
case 0x73369f:c.instructions+=15;goto B73369f;
case 0x7336a3:c.instructions+=14;goto B7336a3;
case 0x7336a7:c.instructions+=13;goto B7336a7;
case 0x7336af:c.instructions+=12;goto B7336af;
case 0x7336b3:c.instructions+=11;goto B7336b3;
case 0x7336b7:c.instructions+=10;goto B7336b7;
case 0x7336bb:c.instructions+=9;goto B7336bb;
case 0x7336bf:c.instructions+=8;goto B7336bf;
case 0x7336c3:c.instructions+=7;goto B7336c3;
case 0x7336c7:c.instructions+=6;goto B7336c7;
case 0x7336cb:c.instructions+=5;goto B7336cb;
case 0x7336cf:c.instructions+=4;goto B7336cf;
case 0x7336d3:c.instructions+=3;goto B7336d3;
case 0x7336d6:c.instructions+=2;goto B7336d6;
case 0x7336d9:c.instructions+=1;goto B7336d9;
case 0x7336de:goto L7336de;
case 0x7336e4:c.instructions+=9;goto B7336e4;
case 0x7336e6:c.instructions+=8;goto B7336e6;
case 0x7336e7:c.instructions+=7;goto B7336e7;
case 0x7336ea:c.instructions+=6;goto B7336ea;
case 0x7336ed:c.instructions+=5;goto B7336ed;
case 0x7336ef:c.instructions+=4;goto B7336ef;
case 0x7336f1:c.instructions+=3;goto B7336f1;
case 0x7336f2:c.instructions+=2;goto B7336f2;
case 0x7336f3:c.instructions+=1;goto B7336f3;
case 0x733700:goto L733700;
case 0x733701:c.instructions+=15;goto B733701;
case 0x733703:c.instructions+=14;goto B733703;
case 0x733704:c.instructions+=13;goto B733704;
case 0x733705:c.instructions+=12;goto B733705;
case 0x733708:c.instructions+=11;goto B733708;
case 0x73370b:c.instructions+=10;goto B73370b;
case 0x73370e:c.instructions+=9;goto B73370e;
case 0x733711:c.instructions+=8;goto B733711;
case 0x733714:c.instructions+=7;goto B733714;
case 0x733716:c.instructions+=6;goto B733716;
case 0x733719:c.instructions+=5;goto B733719;
case 0x73371f:c.instructions+=4;goto B73371f;
case 0x733722:c.instructions+=3;goto B733722;
case 0x733725:c.instructions+=2;goto B733725;
case 0x733728:c.instructions+=1;goto B733728;
case 0x73372a:goto L73372a;
case 0x73372d:goto L73372d;
case 0x733731:c.instructions+=23;goto B733731;
case 0x733734:c.instructions+=22;goto B733734;
case 0x73373a:c.instructions+=21;goto B73373a;
case 0x73373c:c.instructions+=20;goto B73373c;
case 0x733742:c.instructions+=19;goto B733742;
case 0x733744:c.instructions+=18;goto B733744;
case 0x733747:c.instructions+=17;goto B733747;
case 0x733749:c.instructions+=16;goto B733749;
case 0x73374c:c.instructions+=15;goto B73374c;
case 0x733752:c.instructions+=14;goto B733752;
case 0x733755:c.instructions+=13;goto B733755;
case 0x733759:c.instructions+=12;goto B733759;
case 0x73375c:c.instructions+=11;goto B73375c;
case 0x733762:c.instructions+=10;goto B733762;
case 0x733764:c.instructions+=9;goto B733764;
case 0x73376a:c.instructions+=8;goto B73376a;
case 0x73376c:c.instructions+=7;goto B73376c;
case 0x73376f:c.instructions+=6;goto B73376f;
case 0x733771:c.instructions+=5;goto B733771;
case 0x733774:c.instructions+=4;goto B733774;
case 0x73377a:c.instructions+=3;goto B73377a;
case 0x73377d:c.instructions+=2;goto B73377d;
case 0x733780:c.instructions+=1;goto B733780;
case 0x733782:goto L733782;
case 0x733785:goto L733785;
case 0x73378b:c.instructions+=1;goto B73378b;
case 0x73378d:goto L73378d;
case 0x733791:c.instructions+=12;goto B733791;
case 0x733794:c.instructions+=11;goto B733794;
case 0x73379a:c.instructions+=10;goto B73379a;
case 0x73379c:c.instructions+=9;goto B73379c;
case 0x7337a2:c.instructions+=8;goto B7337a2;
case 0x7337a4:c.instructions+=7;goto B7337a4;
case 0x7337a7:c.instructions+=6;goto B7337a7;
case 0x7337a9:c.instructions+=5;goto B7337a9;
case 0x7337ac:c.instructions+=4;goto B7337ac;
case 0x7337b2:c.instructions+=3;goto B7337b2;
case 0x7337b5:c.instructions+=2;goto B7337b5;
case 0x7337b8:c.instructions+=1;goto B7337b8;
case 0x7337ba:goto L7337ba;
case 0x7337bc:c.instructions+=8;goto B7337bc;
case 0x7337bd:c.instructions+=7;goto B7337bd;
case 0x7337c0:c.instructions+=6;goto B7337c0;
case 0x7337c3:c.instructions+=5;goto B7337c3;
case 0x7337c5:c.instructions+=4;goto B7337c5;
case 0x7337c7:c.instructions+=3;goto B7337c7;
case 0x7337c8:c.instructions+=2;goto B7337c8;
case 0x7337c9:c.instructions+=1;goto B7337c9;
case 0x7337d0:goto L7337d0;
case 0x7337d1:c.instructions+=15;goto B7337d1;
case 0x7337d3:c.instructions+=14;goto B7337d3;
case 0x7337d4:c.instructions+=13;goto B7337d4;
case 0x7337d5:c.instructions+=12;goto B7337d5;
case 0x7337d8:c.instructions+=11;goto B7337d8;
case 0x7337db:c.instructions+=10;goto B7337db;
case 0x7337de:c.instructions+=9;goto B7337de;
case 0x7337e1:c.instructions+=8;goto B7337e1;
case 0x7337e4:c.instructions+=7;goto B7337e4;
case 0x7337e6:c.instructions+=6;goto B7337e6;
case 0x7337e9:c.instructions+=5;goto B7337e9;
case 0x7337ec:c.instructions+=4;goto B7337ec;
case 0x7337ef:c.instructions+=3;goto B7337ef;
case 0x7337f6:c.instructions+=2;goto B7337f6;
case 0x7337f9:c.instructions+=1;goto B7337f9;
case 0x7337ff:goto L7337ff;
case 0x733802:goto L733802;
case 0x733803:c.instructions+=96;goto B733803;
case 0x733805:c.instructions+=95;goto B733805;
case 0x733809:c.instructions+=94;goto B733809;
case 0x73380f:c.instructions+=93;goto B73380f;
case 0x733815:c.instructions+=92;goto B733815;
case 0x733818:c.instructions+=91;goto B733818;
case 0x73381a:c.instructions+=90;goto B73381a;
case 0x73381c:c.instructions+=89;goto B73381c;
case 0x733822:c.instructions+=88;goto B733822;
case 0x733824:c.instructions+=87;goto B733824;
case 0x733826:c.instructions+=86;goto B733826;
case 0x73382a:c.instructions+=85;goto B73382a;
case 0x733830:c.instructions+=84;goto B733830;
case 0x733836:c.instructions+=83;goto B733836;
case 0x733839:c.instructions+=82;goto B733839;
case 0x73383b:c.instructions+=81;goto B73383b;
case 0x73383d:c.instructions+=80;goto B73383d;
case 0x733843:c.instructions+=79;goto B733843;
case 0x733845:c.instructions+=78;goto B733845;
case 0x733847:c.instructions+=77;goto B733847;
case 0x73384b:c.instructions+=76;goto B73384b;
case 0x733851:c.instructions+=75;goto B733851;
case 0x733857:c.instructions+=74;goto B733857;
case 0x73385a:c.instructions+=73;goto B73385a;
case 0x73385c:c.instructions+=72;goto B73385c;
case 0x73385e:c.instructions+=71;goto B73385e;
case 0x733864:c.instructions+=70;goto B733864;
case 0x733866:c.instructions+=69;goto B733866;
case 0x733868:c.instructions+=68;goto B733868;
case 0x73386c:c.instructions+=67;goto B73386c;
case 0x733872:c.instructions+=66;goto B733872;
case 0x733878:c.instructions+=65;goto B733878;
case 0x73387b:c.instructions+=64;goto B73387b;
case 0x73387d:c.instructions+=63;goto B73387d;
case 0x73387f:c.instructions+=62;goto B73387f;
case 0x733885:c.instructions+=61;goto B733885;
case 0x733887:c.instructions+=60;goto B733887;
case 0x73388e:c.instructions+=59;goto B73388e;
case 0x733890:c.instructions+=58;goto B733890;
case 0x733894:c.instructions+=57;goto B733894;
case 0x73389a:c.instructions+=56;goto B73389a;
case 0x7338a0:c.instructions+=55;goto B7338a0;
case 0x7338a3:c.instructions+=54;goto B7338a3;
case 0x7338a5:c.instructions+=53;goto B7338a5;
case 0x7338a7:c.instructions+=52;goto B7338a7;
case 0x7338ad:c.instructions+=51;goto B7338ad;
case 0x7338af:c.instructions+=50;goto B7338af;
case 0x7338b1:c.instructions+=49;goto B7338b1;
case 0x7338b5:c.instructions+=48;goto B7338b5;
case 0x7338bb:c.instructions+=47;goto B7338bb;
case 0x7338c1:c.instructions+=46;goto B7338c1;
case 0x7338c4:c.instructions+=45;goto B7338c4;
case 0x7338c6:c.instructions+=44;goto B7338c6;
case 0x7338c8:c.instructions+=43;goto B7338c8;
case 0x7338ce:c.instructions+=42;goto B7338ce;
case 0x7338d0:c.instructions+=41;goto B7338d0;
case 0x7338d2:c.instructions+=40;goto B7338d2;
case 0x7338d6:c.instructions+=39;goto B7338d6;
case 0x7338dc:c.instructions+=38;goto B7338dc;
case 0x7338e2:c.instructions+=37;goto B7338e2;
case 0x7338e5:c.instructions+=36;goto B7338e5;
case 0x7338e7:c.instructions+=35;goto B7338e7;
case 0x7338e9:c.instructions+=34;goto B7338e9;
case 0x7338ef:c.instructions+=33;goto B7338ef;
case 0x7338f1:c.instructions+=32;goto B7338f1;
case 0x7338f3:c.instructions+=31;goto B7338f3;
case 0x7338f7:c.instructions+=30;goto B7338f7;
case 0x7338fd:c.instructions+=29;goto B7338fd;
case 0x733903:c.instructions+=28;goto B733903;
case 0x733906:c.instructions+=27;goto B733906;
case 0x733908:c.instructions+=26;goto B733908;
case 0x73390a:c.instructions+=25;goto B73390a;
case 0x733910:c.instructions+=24;goto B733910;
case 0x733912:c.instructions+=23;goto B733912;
case 0x733919:c.instructions+=22;goto B733919;
case 0x733920:c.instructions+=21;goto B733920;
case 0x733927:c.instructions+=20;goto B733927;
case 0x73392b:c.instructions+=19;goto B73392b;
case 0x73392f:c.instructions+=18;goto B73392f;
case 0x733936:c.instructions+=17;goto B733936;
case 0x73393d:c.instructions+=16;goto B73393d;
case 0x733941:c.instructions+=15;goto B733941;
case 0x733945:c.instructions+=14;goto B733945;
case 0x733946:c.instructions+=13;goto B733946;
case 0x733949:c.instructions+=12;goto B733949;
case 0x73394c:c.instructions+=11;goto B73394c;
case 0x733953:c.instructions+=10;goto B733953;
case 0x73395a:c.instructions+=9;goto B73395a;
case 0x73395d:c.instructions+=8;goto B73395d;
case 0x733960:c.instructions+=7;goto B733960;
case 0x733963:c.instructions+=6;goto B733963;
case 0x73396a:c.instructions+=5;goto B73396a;
case 0x733971:c.instructions+=4;goto B733971;
case 0x733975:c.instructions+=3;goto B733975;
case 0x733979:c.instructions+=2;goto B733979;
case 0x73397c:c.instructions+=1;goto B73397c;
case 0x733982:goto L733982;
case 0x733985:goto L733985;
case 0x73398b:c.instructions+=1;goto B73398b;
case 0x73398d:goto L73398d;
case 0x73398f:c.instructions+=14;goto B73398f;
case 0x733995:c.instructions+=13;goto B733995;
case 0x733999:c.instructions+=12;goto B733999;
case 0x73399e:c.instructions+=11;goto B73399e;
case 0x7339a2:c.instructions+=10;goto B7339a2;
case 0x7339a6:c.instructions+=9;goto B7339a6;
case 0x7339a8:c.instructions+=8;goto B7339a8;
case 0x7339ac:c.instructions+=7;goto B7339ac;
case 0x7339af:c.instructions+=6;goto B7339af;
case 0x7339b1:c.instructions+=5;goto B7339b1;
case 0x7339b5:c.instructions+=4;goto B7339b5;
case 0x7339b7:c.instructions+=3;goto B7339b7;
case 0x7339bc:c.instructions+=2;goto B7339bc;
case 0x7339bf:c.instructions+=1;goto B7339bf;
case 0x7339c1:goto L7339c1;
case 0x7339c3:c.instructions+=8;goto B7339c3;
case 0x7339c4:c.instructions+=7;goto B7339c4;
case 0x7339c7:c.instructions+=6;goto B7339c7;
case 0x7339ca:c.instructions+=5;goto B7339ca;
case 0x7339cc:c.instructions+=4;goto B7339cc;
case 0x7339ce:c.instructions+=3;goto B7339ce;
case 0x7339cf:c.instructions+=2;goto B7339cf;
case 0x7339d0:c.instructions+=1;goto B7339d0;
case 0x7339d1:goto L7339d1;
case 0x7339d3:goto L7339d3;
case 0x7339d5:c.instructions+=4;goto B7339d5;
case 0x7339d8:c.instructions+=3;goto B7339d8;
case 0x7339d9:c.instructions+=2;goto B7339d9;
case 0x7339dd:c.instructions+=1;goto B7339dd;
case 0x7339df:goto L7339df;
case 0x7339e1:goto L7339e1;
case 0x7339e4:c.instructions+=1;goto B7339e4;
case 0x7339e5:goto L7339e5;
case 0x7339e8:c.instructions+=1;goto B7339e8;
case 0x7339e9:goto L7339e9;
case 0x7339ed:c.instructions+=9;goto B7339ed;
case 0x7339f2:c.instructions+=8;goto B7339f2;
case 0x7339f3:c.instructions+=7;goto B7339f3;
case 0x7339f8:c.instructions+=6;goto B7339f8;
case 0x7339fa:c.instructions+=5;goto B7339fa;
case 0x7339fb:c.instructions+=4;goto B7339fb;
case 0x7339fc:c.instructions+=3;goto B7339fc;
case 0x7339fe:c.instructions+=2;goto B7339fe;
case 0x733a01:c.instructions+=1;goto B733a01;
case 0x733a03:goto L733a03;
case 0x733a05:c.instructions+=1;goto B733a05;
case 0x733a06:goto L733a06;
case 0x733a07:c.instructions+=1;goto B733a07;
case 0x733a0c:goto L733a0c;
case 0x733a0d:c.instructions+=6;goto B733a0d;
case 0x733a0f:c.instructions+=5;goto B733a0f;
case 0x733a11:c.instructions+=4;goto B733a11;
case 0x733a12:c.instructions+=3;goto B733a12;
case 0x733a13:c.instructions+=2;goto B733a13;
case 0x733a15:c.instructions+=1;goto B733a15;
case 0x733a17:goto L733a17;
case 0x733a19:c.instructions+=4;goto B733a19;
case 0x733a1a:c.instructions+=3;goto B733a1a;
case 0x733a1c:c.instructions+=2;goto B733a1c;
case 0x733a1e:c.instructions+=1;goto B733a1e;
case 0x733a20:goto L733a20;
case 0x733a22:c.instructions+=1;goto B733a22;
case 0x733a24:goto L733a24;
case 0x733a25:c.instructions+=2;goto B733a25;
case 0x733a27:c.instructions+=1;goto B733a27;
case 0x733a29:goto L733a29;
case 0x733a2b:goto L733a2b;
case 0x733a2c:c.instructions+=1;goto B733a2c;
case 0x733a2e:goto L733a2e;
case 0x733a30:c.instructions+=3;goto B733a30;
case 0x733a31:c.instructions+=2;goto B733a31;
case 0x733a32:c.instructions+=1;goto B733a32;
case 0x733a33:goto L733a33;
case 0x733a3a:c.instructions+=9;goto B733a3a;
case 0x733a3d:c.instructions+=8;goto B733a3d;
case 0x733a3e:c.instructions+=7;goto B733a3e;
case 0x733a41:c.instructions+=6;goto B733a41;
case 0x733a43:c.instructions+=5;goto B733a43;
case 0x733a45:c.instructions+=4;goto B733a45;
case 0x733a48:c.instructions+=3;goto B733a48;
case 0x733a4b:c.instructions+=2;goto B733a4b;
case 0x733a4e:c.instructions+=1;goto B733a4e;
case 0x733a50:goto L733a50;
case 0x733a51:c.instructions+=12;goto B733a51;
case 0x733a52:c.instructions+=11;goto B733a52;
case 0x733a54:c.instructions+=10;goto B733a54;
case 0x733a57:c.instructions+=9;goto B733a57;
case 0x733a59:c.instructions+=8;goto B733a59;
case 0x733a5b:c.instructions+=7;goto B733a5b;
case 0x733a5c:c.instructions+=6;goto B733a5c;
case 0x733a5e:c.instructions+=5;goto B733a5e;
case 0x733a61:c.instructions+=4;goto B733a61;
case 0x733a62:c.instructions+=3;goto B733a62;
case 0x733a65:c.instructions+=2;goto B733a65;
case 0x733a68:c.instructions+=1;goto B733a68;
case 0x733a69:goto L733a69;
case 0x733a6a:c.instructions+=1;goto B733a6a;
case 0x733a6b:goto L733a6b;
case 0x733a6f:c.instructions+=8;goto B733a6f;
case 0x733a73:c.instructions+=7;goto B733a73;
case 0x733a76:c.instructions+=6;goto B733a76;
case 0x733a79:c.instructions+=5;goto B733a79;
case 0x733a7c:c.instructions+=4;goto B733a7c;
case 0x733a7f:c.instructions+=3;goto B733a7f;
case 0x733a80:c.instructions+=2;goto B733a80;
case 0x733a83:c.instructions+=1;goto B733a83;
case 0x733a85:goto L733a85;
case 0x733a87:c.instructions+=10;goto B733a87;
case 0x733a88:c.instructions+=9;goto B733a88;
case 0x733a8b:c.instructions+=8;goto B733a8b;
case 0x733a8d:c.instructions+=7;goto B733a8d;
case 0x733a8f:c.instructions+=6;goto B733a8f;
case 0x733a90:c.instructions+=5;goto B733a90;
case 0x733a93:c.instructions+=4;goto B733a93;
case 0x733a96:c.instructions+=3;goto B733a96;
case 0x733a98:c.instructions+=2;goto B733a98;
case 0x733a9b:c.instructions+=1;goto B733a9b;
case 0x733a9c:goto L733a9c;
case 0x733a9d:c.instructions+=1;goto B733a9d;
case 0x733a9e:goto L733a9e;
case 0x733a9f:c.instructions+=8;goto B733a9f;
case 0x733aa1:c.instructions+=7;goto B733aa1;
case 0x733aa2:c.instructions+=6;goto B733aa2;
case 0x733aa3:c.instructions+=5;goto B733aa3;
case 0x733aa4:c.instructions+=4;goto B733aa4;
case 0x733aa6:c.instructions+=3;goto B733aa6;
case 0x733aa9:c.instructions+=2;goto B733aa9;
case 0x733aaa:c.instructions+=1;goto B733aaa;
case 0x733ab0:goto L733ab0;
case 0x733ab3:c.instructions+=1;goto B733ab3;
case 0x733ab5:goto L733ab5;
case 0x733ab8:c.instructions+=12;goto B733ab8;
case 0x733abb:c.instructions+=11;goto B733abb;
case 0x733abe:c.instructions+=10;goto B733abe;
case 0x733ac4:c.instructions+=9;goto B733ac4;
case 0x733ac7:c.instructions+=8;goto B733ac7;
case 0x733acf:c.instructions+=7;goto B733acf;
case 0x733ad2:c.instructions+=6;goto B733ad2;
case 0x733ad5:c.instructions+=5;goto B733ad5;
case 0x733adb:c.instructions+=4;goto B733adb;
case 0x733ae1:c.instructions+=3;goto B733ae1;
case 0x733ae2:c.instructions+=2;goto B733ae2;
case 0x733ae5:c.instructions+=1;goto B733ae5;
case 0x733aea:goto L733aea;
case 0x733aed:c.instructions+=3;goto B733aed;
case 0x733aee:c.instructions+=2;goto B733aee;
case 0x733aef:c.instructions+=1;goto B733aef;
case 0x733af1:goto L733af1;
case 0x733af7:c.instructions+=1;goto B733af7;
case 0x733af9:goto L733af9;
case 0x733afc:c.instructions+=4;goto B733afc;
case 0x733afe:c.instructions+=3;goto B733afe;
case 0x733aff:c.instructions+=2;goto B733aff;
case 0x733b01:c.instructions+=1;goto B733b01;
case 0x733b03:goto L733b03;
case 0x733b05:c.instructions+=2;goto B733b05;
case 0x733b06:c.instructions+=1;goto B733b06;
case 0x733b0b:goto L733b0b;
case 0x733b0e:c.instructions+=5;goto B733b0e;
case 0x733b10:c.instructions+=4;goto B733b10;
case 0x733b14:c.instructions+=3;goto B733b14;
case 0x733b16:c.instructions+=2;goto B733b16;
case 0x733b19:c.instructions+=1;goto B733b19;
case 0x733b1b:goto L733b1b;
case 0x733b1d:c.instructions+=4;goto B733b1d;
case 0x733b1e:c.instructions+=3;goto B733b1e;
case 0x733b20:c.instructions+=2;goto B733b20;
case 0x733b21:c.instructions+=1;goto B733b21;
case 0x733b24:goto L733b24;
case 0x733b26:c.instructions+=1;goto B733b26;
case 0x733b28:goto L733b28;
case 0x733b2b:c.instructions+=5;goto B733b2b;
case 0x733b2d:c.instructions+=4;goto B733b2d;
case 0x733b30:c.instructions+=3;goto B733b30;
case 0x733b33:c.instructions+=2;goto B733b33;
case 0x733b34:c.instructions+=1;goto B733b34;
case 0x733b36:goto L733b36;
case 0x733b38:goto L733b38;
case 0x733b3a:c.instructions+=4;goto B733b3a;
case 0x733b3b:c.instructions+=3;goto B733b3b;
case 0x733b3d:c.instructions+=2;goto B733b3d;
case 0x733b40:c.instructions+=1;goto B733b40;
case 0x733b45:goto L733b45;
case 0x733b47:c.instructions+=1;goto B733b47;
case 0x733b49:goto L733b49;
case 0x733b4b:c.instructions+=2;goto B733b4b;
case 0x733b4c:c.instructions+=1;goto B733b4c;
case 0x733b51:goto L733b51;
case 0x733b53:c.instructions+=1;goto B733b53;
case 0x733b55:goto L733b55;
case 0x733b58:goto L733b58;
case 0x733b5a:c.instructions+=1;goto B733b5a;
case 0x733b5f:goto L733b5f;
case 0x733b61:c.instructions+=1;goto B733b61;
case 0x733b63:goto L733b63;
case 0x733b66:c.instructions+=1;goto B733b66;
case 0x733b68:goto L733b68;
case 0x733b6a:c.instructions+=2;goto B733b6a;
case 0x733b6d:c.instructions+=1;goto B733b6d;
case 0x733b70:goto L733b70;
case 0x733b73:c.instructions+=2;goto B733b73;
case 0x733b76:c.instructions+=1;goto B733b76;
case 0x733b79:goto L733b79;
case 0x733b7c:c.instructions+=1;goto B733b7c;
case 0x733b82:goto L733b82;
case 0x733b84:goto L733b84;
case 0x733b87:c.instructions+=1;goto B733b87;
case 0x733b8a:goto L733b8a;
case 0x733b8d:c.instructions+=3;goto B733b8d;
case 0x733b90:c.instructions+=2;goto B733b90;
case 0x733b93:c.instructions+=1;goto B733b93;
case 0x733b95:goto L733b95;
case 0x733b9b:c.instructions+=1;goto B733b9b;
case 0x733b9d:goto L733b9d;
case 0x733ba0:c.instructions+=1;goto B733ba0;
case 0x733ba2:goto L733ba2;
case 0x733ba8:goto L733ba8;
case 0x733baa:c.instructions+=1;goto B733baa;
case 0x733bac:goto L733bac;
case 0x733bae:c.instructions+=1;goto B733bae;
case 0x733bb0:goto L733bb0;
case 0x733bb1:c.instructions+=2;goto B733bb1;
case 0x733bb4:c.instructions+=1;goto B733bb4;
case 0x733bb9:goto L733bb9;
case 0x733bbc:c.instructions+=4;goto B733bbc;
case 0x733bbd:c.instructions+=3;goto B733bbd;
case 0x733bc0:c.instructions+=2;goto B733bc0;
case 0x733bc1:c.instructions+=1;goto B733bc1;
case 0x733bc3:goto L733bc3;
case 0x733bc4:c.instructions+=4;goto B733bc4;
case 0x733bc5:c.instructions+=3;goto B733bc5;
case 0x733bc6:c.instructions+=2;goto B733bc6;
case 0x733bc7:c.instructions+=1;goto B733bc7;
case 0x733bc8:goto L733bc8;
case 0x733bc9:c.instructions+=4;goto B733bc9;
case 0x733bcb:c.instructions+=3;goto B733bcb;
case 0x733bce:c.instructions+=2;goto B733bce;
case 0x733bd0:c.instructions+=1;goto B733bd0;
case 0x733bd1:goto L733bd1;
case 0x733bd4:c.instructions+=3;goto B733bd4;
case 0x733bd5:c.instructions+=2;goto B733bd5;
case 0x733bd9:c.instructions+=1;goto B733bd9;
case 0x733bdb:goto L733bdb;
case 0x733bde:c.instructions+=10;goto B733bde;
case 0x733be0:c.instructions+=9;goto B733be0;
case 0x733be1:c.instructions+=8;goto B733be1;
case 0x733be4:c.instructions+=7;goto B733be4;
case 0x733be5:c.instructions+=6;goto B733be5;
case 0x733be8:c.instructions+=5;goto B733be8;
case 0x733beb:c.instructions+=4;goto B733beb;
case 0x733bed:c.instructions+=3;goto B733bed;
case 0x733bef:c.instructions+=2;goto B733bef;
case 0x733bf1:c.instructions+=1;goto B733bf1;
case 0x733bf4:goto L733bf4;
case 0x733bf7:c.instructions+=5;goto B733bf7;
case 0x733bf9:c.instructions+=4;goto B733bf9;
case 0x733bfc:c.instructions+=3;goto B733bfc;
case 0x733bfd:c.instructions+=2;goto B733bfd;
case 0x733c00:c.instructions+=1;goto B733c00;
case 0x733c02:goto L733c02;
case 0x733c06:c.instructions+=11;goto B733c06;
case 0x733c08:c.instructions+=10;goto B733c08;
case 0x733c09:c.instructions+=9;goto B733c09;
case 0x733c0b:c.instructions+=8;goto B733c0b;
case 0x733c0d:c.instructions+=7;goto B733c0d;
case 0x733c0f:c.instructions+=6;goto B733c0f;
case 0x733c11:c.instructions+=5;goto B733c11;
case 0x733c13:c.instructions+=4;goto B733c13;
case 0x733c16:c.instructions+=3;goto B733c16;
case 0x733c19:c.instructions+=2;goto B733c19;
case 0x733c1b:c.instructions+=1;goto B733c1b;
case 0x733c1d:goto L733c1d;
case 0x733c1f:c.instructions+=4;goto B733c1f;
case 0x733c22:c.instructions+=3;goto B733c22;
case 0x733c24:c.instructions+=2;goto B733c24;
case 0x733c28:c.instructions+=1;goto B733c28;
case 0x733c2a:goto L733c2a;
case 0x733c2e:goto L733c2e;
case 0x733c31:c.instructions+=7;goto B733c31;
case 0x733c34:c.instructions+=6;goto B733c34;
case 0x733c35:c.instructions+=5;goto B733c35;
case 0x733c37:c.instructions+=4;goto B733c37;
case 0x733c3a:c.instructions+=3;goto B733c3a;
case 0x733c3c:c.instructions+=2;goto B733c3c;
case 0x733c3e:c.instructions+=1;goto B733c3e;
case 0x733c40:goto L733c40;
case 0x733c43:c.instructions+=5;goto B733c43;
case 0x733c46:c.instructions+=4;goto B733c46;
case 0x733c47:c.instructions+=3;goto B733c47;
case 0x733c4b:c.instructions+=2;goto B733c4b;
case 0x733c4e:c.instructions+=1;goto B733c4e;
case 0x733c50:goto L733c50;
case 0x733c51:c.instructions+=3;goto B733c51;
case 0x733c52:c.instructions+=2;goto B733c52;
case 0x733c53:c.instructions+=1;goto B733c53;
case 0x733c54:goto L733c54;
case 0x733c55:c.instructions+=9;goto B733c55;
case 0x733c57:c.instructions+=8;goto B733c57;
case 0x733c5a:c.instructions+=7;goto B733c5a;
case 0x733c5b:c.instructions+=6;goto B733c5b;
case 0x733c62:c.instructions+=5;goto B733c62;
case 0x733c63:c.instructions+=4;goto B733c63;
case 0x733c66:c.instructions+=3;goto B733c66;
case 0x733c67:c.instructions+=2;goto B733c67;
case 0x733c6d:c.instructions+=1;goto B733c6d;
case 0x733c72:goto L733c72;
case 0x733c75:c.instructions+=3;goto B733c75;
case 0x733c77:c.instructions+=2;goto B733c77;
case 0x733c78:c.instructions+=1;goto B733c78;
case 0x733c7e:goto L733c7e;
case 0x733c81:c.instructions+=253;goto B733c81;
case 0x733c84:c.instructions+=252;goto B733c84;
case 0x733c87:c.instructions+=251;goto B733c87;
case 0x733c8a:c.instructions+=250;goto B733c8a;
case 0x733c8d:c.instructions+=249;goto B733c8d;
case 0x733c90:c.instructions+=248;goto B733c90;
case 0x733c92:c.instructions+=247;goto B733c92;
case 0x733c98:c.instructions+=246;goto B733c98;
case 0x733c9b:c.instructions+=245;goto B733c9b;
case 0x733ca1:c.instructions+=244;goto B733ca1;
case 0x733ca3:c.instructions+=243;goto B733ca3;
case 0x733ca6:c.instructions+=242;goto B733ca6;
case 0x733cac:c.instructions+=241;goto B733cac;
case 0x733cae:c.instructions+=240;goto B733cae;
case 0x733cb0:c.instructions+=239;goto B733cb0;
case 0x733cb6:c.instructions+=238;goto B733cb6;
case 0x733cb8:c.instructions+=237;goto B733cb8;
case 0x733cbb:c.instructions+=236;goto B733cbb;
case 0x733cc1:c.instructions+=235;goto B733cc1;
case 0x733cc3:c.instructions+=234;goto B733cc3;
case 0x733cc6:c.instructions+=233;goto B733cc6;
case 0x733ccc:c.instructions+=232;goto B733ccc;
case 0x733cce:c.instructions+=231;goto B733cce;
case 0x733cd0:c.instructions+=230;goto B733cd0;
case 0x733cd6:c.instructions+=229;goto B733cd6;
case 0x733cd8:c.instructions+=228;goto B733cd8;
case 0x733cda:c.instructions+=227;goto B733cda;
case 0x733ce0:c.instructions+=226;goto B733ce0;
case 0x733ce2:c.instructions+=225;goto B733ce2;
case 0x733ce4:c.instructions+=224;goto B733ce4;
case 0x733cea:c.instructions+=223;goto B733cea;
case 0x733cec:c.instructions+=222;goto B733cec;
case 0x733cef:c.instructions+=221;goto B733cef;
case 0x733cf5:c.instructions+=220;goto B733cf5;
case 0x733cf7:c.instructions+=219;goto B733cf7;
case 0x733cf9:c.instructions+=218;goto B733cf9;
case 0x733cff:c.instructions+=217;goto B733cff;
case 0x733d01:c.instructions+=216;goto B733d01;
case 0x733d04:c.instructions+=215;goto B733d04;
case 0x733d0a:c.instructions+=214;goto B733d0a;
case 0x733d0c:c.instructions+=213;goto B733d0c;
case 0x733d0e:c.instructions+=212;goto B733d0e;
case 0x733d11:c.instructions+=211;goto B733d11;
case 0x733d17:c.instructions+=210;goto B733d17;
case 0x733d19:c.instructions+=209;goto B733d19;
case 0x733d1b:c.instructions+=208;goto B733d1b;
case 0x733d21:c.instructions+=207;goto B733d21;
case 0x733d24:c.instructions+=206;goto B733d24;
case 0x733d2a:c.instructions+=205;goto B733d2a;
case 0x733d2c:c.instructions+=204;goto B733d2c;
case 0x733d2f:c.instructions+=203;goto B733d2f;
case 0x733d35:c.instructions+=202;goto B733d35;
case 0x733d37:c.instructions+=201;goto B733d37;
case 0x733d39:c.instructions+=200;goto B733d39;
case 0x733d3f:c.instructions+=199;goto B733d3f;
case 0x733d41:c.instructions+=198;goto B733d41;
case 0x733d43:c.instructions+=197;goto B733d43;
case 0x733d49:c.instructions+=196;goto B733d49;
case 0x733d4b:c.instructions+=195;goto B733d4b;
case 0x733d4e:c.instructions+=194;goto B733d4e;
case 0x733d54:c.instructions+=193;goto B733d54;
case 0x733d56:c.instructions+=192;goto B733d56;
case 0x733d58:c.instructions+=191;goto B733d58;
case 0x733d5e:c.instructions+=190;goto B733d5e;
case 0x733d60:c.instructions+=189;goto B733d60;
case 0x733d62:c.instructions+=188;goto B733d62;
case 0x733d68:c.instructions+=187;goto B733d68;
case 0x733d6a:c.instructions+=186;goto B733d6a;
case 0x733d6d:c.instructions+=185;goto B733d6d;
case 0x733d73:c.instructions+=184;goto B733d73;
case 0x733d75:c.instructions+=183;goto B733d75;
case 0x733d78:c.instructions+=182;goto B733d78;
case 0x733d7e:c.instructions+=181;goto B733d7e;
case 0x733d80:c.instructions+=180;goto B733d80;
case 0x733d82:c.instructions+=179;goto B733d82;
case 0x733d88:c.instructions+=178;goto B733d88;
case 0x733d8a:c.instructions+=177;goto B733d8a;
case 0x733d8d:c.instructions+=176;goto B733d8d;
case 0x733d93:c.instructions+=175;goto B733d93;
case 0x733d95:c.instructions+=174;goto B733d95;
case 0x733d98:c.instructions+=173;goto B733d98;
case 0x733d9b:c.instructions+=172;goto B733d9b;
case 0x733da1:c.instructions+=171;goto B733da1;
case 0x733da4:c.instructions+=170;goto B733da4;
case 0x733da6:c.instructions+=169;goto B733da6;
case 0x733dac:c.instructions+=168;goto B733dac;
case 0x733dae:c.instructions+=167;goto B733dae;
case 0x733db4:c.instructions+=166;goto B733db4;
case 0x733db6:c.instructions+=165;goto B733db6;
case 0x733db9:c.instructions+=164;goto B733db9;
case 0x733dbf:c.instructions+=163;goto B733dbf;
case 0x733dc1:c.instructions+=162;goto B733dc1;
case 0x733dc3:c.instructions+=161;goto B733dc3;
case 0x733dc9:c.instructions+=160;goto B733dc9;
case 0x733dcb:c.instructions+=159;goto B733dcb;
case 0x733dcd:c.instructions+=158;goto B733dcd;
case 0x733dd3:c.instructions+=157;goto B733dd3;
case 0x733dd5:c.instructions+=156;goto B733dd5;
case 0x733dd8:c.instructions+=155;goto B733dd8;
case 0x733dde:c.instructions+=154;goto B733dde;
case 0x733de0:c.instructions+=153;goto B733de0;
case 0x733de2:c.instructions+=152;goto B733de2;
case 0x733de8:c.instructions+=151;goto B733de8;
case 0x733dea:c.instructions+=150;goto B733dea;
case 0x733ded:c.instructions+=149;goto B733ded;
case 0x733df3:c.instructions+=148;goto B733df3;
case 0x733df5:c.instructions+=147;goto B733df5;
case 0x733df8:c.instructions+=146;goto B733df8;
case 0x733dfe:c.instructions+=145;goto B733dfe;
case 0x733e00:c.instructions+=144;goto B733e00;
case 0x733e03:c.instructions+=143;goto B733e03;
case 0x733e09:c.instructions+=142;goto B733e09;
case 0x733e0b:c.instructions+=141;goto B733e0b;
case 0x733e0d:c.instructions+=140;goto B733e0d;
case 0x733e13:c.instructions+=139;goto B733e13;
case 0x733e15:c.instructions+=138;goto B733e15;
case 0x733e18:c.instructions+=137;goto B733e18;
case 0x733e1e:c.instructions+=136;goto B733e1e;
case 0x733e20:c.instructions+=135;goto B733e20;
case 0x733e23:c.instructions+=134;goto B733e23;
case 0x733e26:c.instructions+=133;goto B733e26;
case 0x733e2c:c.instructions+=132;goto B733e2c;
case 0x733e2f:c.instructions+=131;goto B733e2f;
case 0x733e31:c.instructions+=130;goto B733e31;
case 0x733e37:c.instructions+=129;goto B733e37;
case 0x733e39:c.instructions+=128;goto B733e39;
case 0x733e3f:c.instructions+=127;goto B733e3f;
case 0x733e41:c.instructions+=126;goto B733e41;
case 0x733e44:c.instructions+=125;goto B733e44;
case 0x733e4a:c.instructions+=124;goto B733e4a;
case 0x733e4c:c.instructions+=123;goto B733e4c;
case 0x733e4e:c.instructions+=122;goto B733e4e;
case 0x733e54:c.instructions+=121;goto B733e54;
case 0x733e56:c.instructions+=120;goto B733e56;
case 0x733e59:c.instructions+=119;goto B733e59;
case 0x733e5f:c.instructions+=118;goto B733e5f;
case 0x733e61:c.instructions+=117;goto B733e61;
case 0x733e64:c.instructions+=116;goto B733e64;
case 0x733e6a:c.instructions+=115;goto B733e6a;
case 0x733e6c:c.instructions+=114;goto B733e6c;
case 0x733e6e:c.instructions+=113;goto B733e6e;
case 0x733e74:c.instructions+=112;goto B733e74;
case 0x733e76:c.instructions+=111;goto B733e76;
case 0x733e79:c.instructions+=110;goto B733e79;
case 0x733e7f:c.instructions+=109;goto B733e7f;
case 0x733e81:c.instructions+=108;goto B733e81;
case 0x733e84:c.instructions+=107;goto B733e84;
case 0x733e8a:c.instructions+=106;goto B733e8a;
case 0x733e8c:c.instructions+=105;goto B733e8c;
case 0x733e8f:c.instructions+=104;goto B733e8f;
case 0x733e95:c.instructions+=103;goto B733e95;
case 0x733e97:c.instructions+=102;goto B733e97;
case 0x733e99:c.instructions+=101;goto B733e99;
case 0x733e9f:c.instructions+=100;goto B733e9f;
case 0x733ea1:c.instructions+=99;goto B733ea1;
case 0x733ea3:c.instructions+=98;goto B733ea3;
case 0x733ea9:c.instructions+=97;goto B733ea9;
case 0x733eab:c.instructions+=96;goto B733eab;
case 0x733eae:c.instructions+=95;goto B733eae;
case 0x733eb1:c.instructions+=94;goto B733eb1;
case 0x733eb7:c.instructions+=93;goto B733eb7;
case 0x733eba:c.instructions+=92;goto B733eba;
case 0x733ebc:c.instructions+=91;goto B733ebc;
case 0x733ec2:c.instructions+=90;goto B733ec2;
case 0x733ec5:c.instructions+=89;goto B733ec5;
case 0x733ecb:c.instructions+=88;goto B733ecb;
case 0x733ecd:c.instructions+=87;goto B733ecd;
case 0x733ed0:c.instructions+=86;goto B733ed0;
case 0x733ed6:c.instructions+=85;goto B733ed6;
case 0x733ed8:c.instructions+=84;goto B733ed8;
case 0x733eda:c.instructions+=83;goto B733eda;
case 0x733ee0:c.instructions+=82;goto B733ee0;
case 0x733ee2:c.instructions+=81;goto B733ee2;
case 0x733ee5:c.instructions+=80;goto B733ee5;
case 0x733eeb:c.instructions+=79;goto B733eeb;
case 0x733eed:c.instructions+=78;goto B733eed;
case 0x733ef0:c.instructions+=77;goto B733ef0;
case 0x733ef6:c.instructions+=76;goto B733ef6;
case 0x733ef8:c.instructions+=75;goto B733ef8;
case 0x733efa:c.instructions+=74;goto B733efa;
case 0x733f00:c.instructions+=73;goto B733f00;
case 0x733f02:c.instructions+=72;goto B733f02;
case 0x733f04:c.instructions+=71;goto B733f04;
case 0x733f0a:c.instructions+=70;goto B733f0a;
case 0x733f0c:c.instructions+=69;goto B733f0c;
case 0x733f0f:c.instructions+=68;goto B733f0f;
case 0x733f15:c.instructions+=67;goto B733f15;
case 0x733f17:c.instructions+=66;goto B733f17;
case 0x733f1a:c.instructions+=65;goto B733f1a;
case 0x733f20:c.instructions+=64;goto B733f20;
case 0x733f22:c.instructions+=63;goto B733f22;
case 0x733f24:c.instructions+=62;goto B733f24;
case 0x733f2a:c.instructions+=61;goto B733f2a;
case 0x733f2c:c.instructions+=60;goto B733f2c;
case 0x733f2e:c.instructions+=59;goto B733f2e;
case 0x733f34:c.instructions+=58;goto B733f34;
case 0x733f36:c.instructions+=57;goto B733f36;
case 0x733f39:c.instructions+=56;goto B733f39;
case 0x733f3c:c.instructions+=55;goto B733f3c;
case 0x733f42:c.instructions+=54;goto B733f42;
case 0x733f45:c.instructions+=53;goto B733f45;
case 0x733f47:c.instructions+=52;goto B733f47;
case 0x733f4d:c.instructions+=51;goto B733f4d;
case 0x733f50:c.instructions+=50;goto B733f50;
case 0x733f56:c.instructions+=49;goto B733f56;
case 0x733f58:c.instructions+=48;goto B733f58;
case 0x733f5b:c.instructions+=47;goto B733f5b;
case 0x733f61:c.instructions+=46;goto B733f61;
case 0x733f63:c.instructions+=45;goto B733f63;
case 0x733f65:c.instructions+=44;goto B733f65;
case 0x733f6b:c.instructions+=43;goto B733f6b;
case 0x733f6d:c.instructions+=42;goto B733f6d;
case 0x733f6f:c.instructions+=41;goto B733f6f;
case 0x733f75:c.instructions+=40;goto B733f75;
case 0x733f77:c.instructions+=39;goto B733f77;
case 0x733f7a:c.instructions+=38;goto B733f7a;
case 0x733f80:c.instructions+=37;goto B733f80;
case 0x733f82:c.instructions+=36;goto B733f82;
case 0x733f84:c.instructions+=35;goto B733f84;
case 0x733f8a:c.instructions+=34;goto B733f8a;
case 0x733f8c:c.instructions+=33;goto B733f8c;
case 0x733f8e:c.instructions+=32;goto B733f8e;
case 0x733f94:c.instructions+=31;goto B733f94;
case 0x733f96:c.instructions+=30;goto B733f96;
case 0x733f99:c.instructions+=29;goto B733f99;
case 0x733f9f:c.instructions+=28;goto B733f9f;
case 0x733fa1:c.instructions+=27;goto B733fa1;
case 0x733fa4:c.instructions+=26;goto B733fa4;
case 0x733faa:c.instructions+=25;goto B733faa;
case 0x733fac:c.instructions+=24;goto B733fac;
case 0x733fae:c.instructions+=23;goto B733fae;
case 0x733fb4:c.instructions+=22;goto B733fb4;
case 0x733fb6:c.instructions+=21;goto B733fb6;
case 0x733fb9:c.instructions+=20;goto B733fb9;
case 0x733fbf:c.instructions+=19;goto B733fbf;
case 0x733fc1:c.instructions+=18;goto B733fc1;
case 0x733fc4:c.instructions+=17;goto B733fc4;
case 0x733fc7:c.instructions+=16;goto B733fc7;
case 0x733fcd:c.instructions+=15;goto B733fcd;
case 0x733fd0:c.instructions+=14;goto B733fd0;
case 0x733fd2:c.instructions+=13;goto B733fd2;
case 0x733fd8:c.instructions+=12;goto B733fd8;
case 0x733fda:c.instructions+=11;goto B733fda;
case 0x733fe0:c.instructions+=10;goto B733fe0;
case 0x733fe2:c.instructions+=9;goto B733fe2;
case 0x733fe5:c.instructions+=8;goto B733fe5;
case 0x733feb:c.instructions+=7;goto B733feb;
case 0x733fed:c.instructions+=6;goto B733fed;
case 0x733fef:c.instructions+=5;goto B733fef;
case 0x733ff5:c.instructions+=4;goto B733ff5;
case 0x733ff7:c.instructions+=3;goto B733ff7;
case 0x733ff9:c.instructions+=2;goto B733ff9;
case 0x733fff:c.instructions+=1;goto B733fff;
default:missing_instruction(c.pc);}
B733000:L733000:{c.instructions+=5;NFSU2_TR(0x733000);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733003:{NFSU2_TR(0x733003);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733006:{NFSU2_TR(0x733006);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733009:{NFSU2_TR(0x733009);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73300c:{NFSU2_TR(0x73300c);
{goto L733020;}
}
B73300e:L73300e:{c.instructions+=7;NFSU2_TR(0x73300e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733011:{NFSU2_TR(0x733011);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B733014:{NFSU2_TR(0x733014);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733015:{NFSU2_TR(0x733015);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B733018:{NFSU2_TR(0x733018);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733019:{NFSU2_TR(0x733019);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B73301b:{NFSU2_TR(0x73301b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733020ull));
TAIL_STATIC(0x734919u,734);
}
B733020:L733020:{c.instructions+=3;NFSU2_TR(0x733020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733021:{NFSU2_TR(0x733021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733022:{NFSU2_TR(0x733022);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B733023:L733023:{c.instructions+=9;NFSU2_TR(0x733023);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733024:{NFSU2_TR(0x733024);
__builtin_memmove((R+20),(R+16),4);
}
B733026:{NFSU2_TR(0x733026);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733029:{NFSU2_TR(0x733029);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73302a:{NFSU2_TR(0x73302a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73302d:{NFSU2_TR(0x73302d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733030:{NFSU2_TR(0x733030);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733033:{NFSU2_TR(0x733033);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B733036:{NFSU2_TR(0x733036);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73303d;}}
}
B733038:L733038:{c.instructions+=2;NFSU2_TR(0x733038);
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
B73303b:{NFSU2_TR(0x73303b);
{goto L733077;}
}
B73303d:L73303d:{c.instructions+=8;NFSU2_TR(0x73303d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B733040:{NFSU2_TR(0x733040);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733041:{NFSU2_TR(0x733041);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B733044:{NFSU2_TR(0x733044);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733045:{NFSU2_TR(0x733045);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733046:{NFSU2_TR(0x733046);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B733049:{NFSU2_TR(0x733049);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73304a:{NFSU2_TR(0x73304a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73304full));
TAIL_STATIC(0x734945u,734);
}
B73304f:L73304f:{c.instructions+=7;NFSU2_TR(0x73304f);
__builtin_memmove((R+24),(R+0),4);
}
B733051:{NFSU2_TR(0x733051);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733054:{NFSU2_TR(0x733054);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B733057:{NFSU2_TR(0x733057);
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
B733059:{NFSU2_TR(0x733059);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73305c:{NFSU2_TR(0x73305c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73305f:{NFSU2_TR(0x73305f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L733073;}}
}
B733061:L733061:{c.instructions+=6;NFSU2_TR(0x733061);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B733063:{NFSU2_TR(0x733063);
__builtin_memmove((R+4),(R+12),4);
}
B733065:{NFSU2_TR(0x733065);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B733068:{NFSU2_TR(0x733068);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733069:{NFSU2_TR(0x733069);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73306a:{NFSU2_TR(0x73306a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73306full));
TAIL_STATIC(0x727030u,727);
}
B73306f:L73306f:{c.instructions+=3;NFSU2_TR(0x73306f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B733070:{NFSU2_TR(0x733070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B733071:{NFSU2_TR(0x733071);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+24),r4(R+12)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B733073:L733073:{c.instructions+=3;NFSU2_TR(0x733073);
__builtin_memmove((R+0),(R+24),4);
}
B733075:{NFSU2_TR(0x733075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733076:{NFSU2_TR(0x733076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B733077:L733077:{c.instructions+=3;NFSU2_TR(0x733077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733078:{NFSU2_TR(0x733078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B733079:{NFSU2_TR(0x733079);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73307a:L73307a:{c.instructions+=3;NFSU2_TR(0x73307a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73307e:{NFSU2_TR(0x73307e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733081:{NFSU2_TR(0x733081);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B733082:L733082:{c.instructions+=4;NFSU2_TR(0x733082);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733086:{NFSU2_TR(0x733086);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733089:{NFSU2_TR(0x733089);
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
B73308b:{NFSU2_TR(0x73308b);
if(r1(R+518)){{goto L733094;}}
}
B73308d:L73308d:{c.instructions+=2;NFSU2_TR(0x73308d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73308e:{NFSU2_TR(0x73308e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733093ull));
TAIL_STATIC(0x72aceau,72a);
}
B733093:L733093:{c.instructions+=1;NFSU2_TR(0x733093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B733094:L733094:{c.instructions+=1;NFSU2_TR(0x733094);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B733095:L733095:{c.instructions+=13;NFSU2_TR(0x733095);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733096:{NFSU2_TR(0x733096);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73309a:{NFSU2_TR(0x73309a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73309b:{NFSU2_TR(0x73309b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73309f:{NFSU2_TR(0x73309f);
u8 U[4];
w4(U+0,u32(0x733023ull));
s4(u32(r4(R+24)),r4(U+0));
}
B7330a5:{NFSU2_TR(0x7330a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x733082ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7330ac:{NFSU2_TR(0x7330ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7330ae:{NFSU2_TR(0x7330ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7330b1:{NFSU2_TR(0x7330b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7330b4:{NFSU2_TR(0x7330b4);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B7330b8:{NFSU2_TR(0x7330b8);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7330bd:{NFSU2_TR(0x7330bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7330c0:{NFSU2_TR(0x7330c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7330c5ull));
TAIL_STATIC(0x72ace4u,72a);
}
B7330c5:L7330c5:{c.instructions+=3;NFSU2_TR(0x7330c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7330c7:{NFSU2_TR(0x7330c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7330c8:{NFSU2_TR(0x7330c8);
if(r1(R+518)){{goto L7330d3;}}
}
B7330ca:L7330ca:{c.instructions+=2;NFSU2_TR(0x7330ca);
__builtin_memmove((R+4),(R+0),4);
}
B7330cc:{NFSU2_TR(0x7330cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7330d1ull));
TAIL_STATIC(0x734ce9u,734);
}
B7330d1:L7330d1:{c.instructions+=1;NFSU2_TR(0x7330d1);
{goto L7330d5;}
}
B7330d3:L7330d3:{c.instructions+=1;NFSU2_TR(0x7330d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7330d5:L7330d5:{c.instructions+=9;NFSU2_TR(0x7330d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7330d8:{NFSU2_TR(0x7330d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
w4(U+4,u32(0x73307aull));
s4(u32(r4(U+0)),r4(U+4));
}
B7330df:{NFSU2_TR(0x7330df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7330e2:{NFSU2_TR(0x7330e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7330e5:{NFSU2_TR(0x7330e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7330e6:{NFSU2_TR(0x7330e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7330e9:{NFSU2_TR(0x7330e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7330ea:{NFSU2_TR(0x7330ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7330ed:{NFSU2_TR(0x7330ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7330f2ull));
TAIL_STATIC(0x734919u,734);
}
B7330f2:L7330f2:{c.instructions+=3;NFSU2_TR(0x7330f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7330f3:{NFSU2_TR(0x7330f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7330f4:{NFSU2_TR(0x7330f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7330f5:L7330f5:{c.instructions+=10;NFSU2_TR(0x7330f5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7330f6:{NFSU2_TR(0x7330f6);
__builtin_memmove((R+20),(R+16),4);
}
B7330f8:{NFSU2_TR(0x7330f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7330f9:{NFSU2_TR(0x7330f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7330fc:{NFSU2_TR(0x7330fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7330fd:{NFSU2_TR(0x7330fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B733100:{NFSU2_TR(0x733100);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733103:{NFSU2_TR(0x733103);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B733105:{NFSU2_TR(0x733105);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733106:{NFSU2_TR(0x733106);
if(r1(R+518)){{goto L733193;}}
}
B73310c:L73310c:{c.instructions+=5;NFSU2_TR(0x73310c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73310d:{NFSU2_TR(0x73310d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B733111:{NFSU2_TR(0x733111);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733112:{NFSU2_TR(0x733112);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B733115:{NFSU2_TR(0x733115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73311aull));
TAIL_STATIC(0x7237efu,723);
}
B73311a:L73311a:{c.instructions+=3;NFSU2_TR(0x73311a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73311d:{NFSU2_TR(0x73311d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B733121:{NFSU2_TR(0x733121);
{goto L733193;}
}
B733123:L733123:{c.instructions+=3;NFSU2_TR(0x733123);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733126:{NFSU2_TR(0x733126);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B733129:{NFSU2_TR(0x733129);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L733154;}}
}
B73312b:L73312b:{c.instructions+=8;NFSU2_TR(0x73312b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B73312e:{NFSU2_TR(0x73312e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73312f:{NFSU2_TR(0x73312f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B733132:{NFSU2_TR(0x733132);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733133:{NFSU2_TR(0x733133);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B733137:{NFSU2_TR(0x733137);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733138:{NFSU2_TR(0x733138);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B73313b:{NFSU2_TR(0x73313b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733140ull));
TAIL_STATIC(0x723699u,723);
}
B733140:L733140:{c.instructions+=4;NFSU2_TR(0x733140);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B733143:{NFSU2_TR(0x733143);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B733145:{NFSU2_TR(0x733145);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733148:{NFSU2_TR(0x733148);
if(r1(R+518)){{goto L73319b;}}
}
B73314a:L73314a:{c.instructions+=3;NFSU2_TR(0x73314a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73314d:{NFSU2_TR(0x73314d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B733151:{NFSU2_TR(0x733151);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733154:L733154:{c.instructions+=5;NFSU2_TR(0x733154);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733157:{NFSU2_TR(0x733157);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73315a:{NFSU2_TR(0x73315a);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B73315c:{NFSU2_TR(0x73315c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B73315f:{NFSU2_TR(0x73315f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L733164;}}
}
B733161:L733161:{c.instructions+=1;NFSU2_TR(0x733161);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B733164:L733164:{c.instructions+=4;NFSU2_TR(0x733164);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B733168:{NFSU2_TR(0x733168);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73316b:{NFSU2_TR(0x73316b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73316c:{NFSU2_TR(0x73316c);
if(r1(R+518)){{goto L73317b;}}
}
B73316e:L73316e:{c.instructions+=4;NFSU2_TR(0x73316e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B733171:{NFSU2_TR(0x733171);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733172:{NFSU2_TR(0x733172);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733173:{NFSU2_TR(0x733173);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a08),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733179ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B733179:L733179:{c.instructions+=1;NFSU2_TR(0x733179);
{goto L733184;}
}
B73317b:L73317b:{c.instructions+=4;NFSU2_TR(0x73317b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B73317d:{NFSU2_TR(0x73317d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73317e:{NFSU2_TR(0x73317e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73317f:{NFSU2_TR(0x73317f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733184ull));
TAIL_STATIC(0x734d20u,734);
}
B733184:L733184:{c.instructions+=5;NFSU2_TR(0x733184);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B733187:{NFSU2_TR(0x733187);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B73318a:{NFSU2_TR(0x73318a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73318d:{NFSU2_TR(0x73318d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B733190:{NFSU2_TR(0x733190);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B733193:L733193:{c.instructions+=2;NFSU2_TR(0x733193);
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
B733197:{NFSU2_TR(0x733197);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733123u);}goto L733123;}}
}
B733199:L733199:{c.instructions+=1;NFSU2_TR(0x733199);
{goto L7331b0;}
}
B73319b:L73319b:{c.instructions+=2;NFSU2_TR(0x73319b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
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
B73319f:{NFSU2_TR(0x73319f);
if(r1(R+518)){{goto L7331b0;}}
}
B7331a1:L7331a1:{c.instructions+=5;NFSU2_TR(0x7331a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7331a4:{NFSU2_TR(0x7331a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7331a7:{NFSU2_TR(0x7331a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7331a8:{NFSU2_TR(0x7331a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7331a9:{NFSU2_TR(0x7331a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7331aeull));
TAIL_STATIC(0x727030u,727);
}
B7331ae:L7331ae:{c.instructions+=2;NFSU2_TR(0x7331ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7331af:{NFSU2_TR(0x7331af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7331b0:L7331b0:{c.instructions+=6;NFSU2_TR(0x7331b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7331b3:{NFSU2_TR(0x7331b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7331b4:{NFSU2_TR(0x7331b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7331b5:{NFSU2_TR(0x7331b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7331b6:{NFSU2_TR(0x7331b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7331b7:{NFSU2_TR(0x7331b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7331b8:L7331b8:{c.instructions+=7;NFSU2_TR(0x7331b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7331b9:{NFSU2_TR(0x7331b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7331bd:{NFSU2_TR(0x7331bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7331be:{NFSU2_TR(0x7331be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7331c2:{NFSU2_TR(0x7331c2);
u8 U[4];
w4(U+0,u32(0x7330f5ull));
s4(u32(r4(R+24)),r4(U+0));
}
B7331c8:{NFSU2_TR(0x7331c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7331cb:{NFSU2_TR(0x7331cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7331d0ull));
TAIL_STATIC(0x727e0cu,727);
}
B7331d0:L7331d0:{c.instructions+=2;NFSU2_TR(0x7331d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7331d1:{NFSU2_TR(0x7331d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7331d6ull));
TAIL_STATIC(0x72c31eu,72c);
}
B7331d6:L7331d6:{c.instructions+=3;NFSU2_TR(0x7331d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7331d9:{NFSU2_TR(0x7331d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7331dc:{NFSU2_TR(0x7331dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7331e1ull));
TAIL_STATIC(0x727e2au,727);
}
B7331e1:L7331e1:{c.instructions+=12;NFSU2_TR(0x7331e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7331e5:{NFSU2_TR(0x7331e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7331e8:{NFSU2_TR(0x7331e8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7331ea:{NFSU2_TR(0x7331ea);
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
B7331ed:{NFSU2_TR(0x7331ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7331f0:{NFSU2_TR(0x7331f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7331f3:{NFSU2_TR(0x7331f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7331f6:{NFSU2_TR(0x7331f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7331f7:{NFSU2_TR(0x7331f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7331fa:{NFSU2_TR(0x7331fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7331fd:{NFSU2_TR(0x7331fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7331fe:{NFSU2_TR(0x7331fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7331ff:L7331ff:{c.instructions+=6;NFSU2_TR(0x7331ff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733200:{NFSU2_TR(0x733200);
__builtin_memmove((R+20),(R+16),4);
}
B733202:{NFSU2_TR(0x733202);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B733206:{NFSU2_TR(0x733206);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733207:{NFSU2_TR(0x733207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73320a:{NFSU2_TR(0x73320a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L733264;}}
}
B73320c:L73320c:{c.instructions+=3;NFSU2_TR(0x73320c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73320d:{NFSU2_TR(0x73320d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B733210:{NFSU2_TR(0x733210);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733211:L733211:{c.instructions+=6;NFSU2_TR(0x733211);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733214:{NFSU2_TR(0x733214);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B733217:{NFSU2_TR(0x733217);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B733219:{NFSU2_TR(0x733219);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B73321a:{NFSU2_TR(0x73321a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B73321d:{NFSU2_TR(0x73321d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L733222;}}
}
B73321f:L73321f:{c.instructions+=1;NFSU2_TR(0x73321f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B733222:L733222:{c.instructions+=4;NFSU2_TR(0x733222);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
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
B733226:{NFSU2_TR(0x733226);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B733229:{NFSU2_TR(0x733229);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73322a:{NFSU2_TR(0x73322a);
if(r1(R+518)){{goto L733239;}}
}
B73322c:L73322c:{c.instructions+=4;NFSU2_TR(0x73322c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73322f:{NFSU2_TR(0x73322f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733230:{NFSU2_TR(0x733230);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733231:{NFSU2_TR(0x733231);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a08),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733237ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B733237:L733237:{c.instructions+=1;NFSU2_TR(0x733237);
{goto L733242;}
}
B733239:L733239:{c.instructions+=4;NFSU2_TR(0x733239);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B73323b:{NFSU2_TR(0x73323b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73323c:{NFSU2_TR(0x73323c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73323d:{NFSU2_TR(0x73323d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733242ull));
TAIL_STATIC(0x734d20u,734);
}
B733242:L733242:{c.instructions+=7;NFSU2_TR(0x733242);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B733245:{NFSU2_TR(0x733245);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733248:{NFSU2_TR(0x733248);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B73324b:{NFSU2_TR(0x73324b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73324e:{NFSU2_TR(0x73324e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B733251:{NFSU2_TR(0x733251);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B733254:{NFSU2_TR(0x733254);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L73325c;}}
}
B733256:L733256:{c.instructions+=2;NFSU2_TR(0x733256);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733259:{NFSU2_TR(0x733259);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73325c:L73325c:{c.instructions+=2;NFSU2_TR(0x73325c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B733260:{NFSU2_TR(0x733260);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733211u);}goto L733211;}}
}
B733262:L733262:{c.instructions+=2;NFSU2_TR(0x733262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733263:{NFSU2_TR(0x733263);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733264:L733264:{c.instructions+=5;NFSU2_TR(0x733264);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B733266:{NFSU2_TR(0x733266);
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
B733267:{NFSU2_TR(0x733267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B733268:{NFSU2_TR(0x733268);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B733269:{NFSU2_TR(0x733269);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73326a:L73326a:{c.instructions+=14;NFSU2_TR(0x73326a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73326e:{NFSU2_TR(0x73326e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B733272:{NFSU2_TR(0x733272);
u8 U[4];
w4(U+0,u32(0x7331ffull));
s4(u32(r4(R+0)),r4(U+0));
}
B733278:{NFSU2_TR(0x733278);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73327a:{NFSU2_TR(0x73327a);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B73327e:{NFSU2_TR(0x73327e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733281:{NFSU2_TR(0x733281);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733284:{NFSU2_TR(0x733284);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733287:{NFSU2_TR(0x733287);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73328a:{NFSU2_TR(0x73328a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73328d:{NFSU2_TR(0x73328d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733290:{NFSU2_TR(0x733290);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733293:{NFSU2_TR(0x733293);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w4(U+4,u32(0x73329bull));
s4(u32(r4(U+0)),r4(U+4));
}
B73329a:{NFSU2_TR(0x73329a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73329b:L73329b:{c.instructions+=3;NFSU2_TR(0x73329b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73329f:{NFSU2_TR(0x73329f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7332a2:{NFSU2_TR(0x7332a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7332a3:L7332a3:{c.instructions+=7;NFSU2_TR(0x7332a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7332a4:{NFSU2_TR(0x7332a4);
__builtin_memmove((R+20),(R+16),4);
}
B7332a6:{NFSU2_TR(0x7332a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7332a9:{NFSU2_TR(0x7332a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7332ac:{NFSU2_TR(0x7332ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7332af:{NFSU2_TR(0x7332af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B7332b1:{NFSU2_TR(0x7332b1);
if(r1(R+512)){{goto L7332b8;}}
}
B7332b3:L7332b3:{c.instructions+=3;NFSU2_TR(0x7332b3);
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
B7332b6:{NFSU2_TR(0x7332b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7332b7:{NFSU2_TR(0x7332b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7332b8:L7332b8:{c.instructions+=8;NFSU2_TR(0x7332b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7332b9:{NFSU2_TR(0x7332b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7332ba:{NFSU2_TR(0x7332ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7332bd:{NFSU2_TR(0x7332bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7332c0:{NFSU2_TR(0x7332c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7332c3:{NFSU2_TR(0x7332c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B7332c5:{NFSU2_TR(0x7332c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7332c8:{NFSU2_TR(0x7332c8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7332ee;}}
}
B7332ca:L7332ca:{c.instructions+=3;NFSU2_TR(0x7332ca);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
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
B7332ce:{NFSU2_TR(0x7332ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7332d1:{NFSU2_TR(0x7332d1);
if(r1(R+518)){{goto L7332e3;}}
}
B7332d3:L7332d3:{c.instructions+=4;NFSU2_TR(0x7332d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7332d6:{NFSU2_TR(0x7332d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7332d7:{NFSU2_TR(0x7332d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7332d8:{NFSU2_TR(0x7332d8);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a08),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7332deull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7332de:L7332de:{c.instructions+=2;NFSU2_TR(0x7332de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7332e1:{NFSU2_TR(0x7332e1);
{goto L733328;}
}
B7332e3:L7332e3:{c.instructions+=4;NFSU2_TR(0x7332e3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7332e5:{NFSU2_TR(0x7332e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7332e6:{NFSU2_TR(0x7332e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7332e7:{NFSU2_TR(0x7332e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7332ecull));
TAIL_STATIC(0x734d20u,734);
}
B7332ec:L7332ec:{c.instructions+=1;NFSU2_TR(0x7332ec);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7332deu);}goto L7332de;}
}
B7332ee:L7332ee:{c.instructions+=5;NFSU2_TR(0x7332ee);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B7332f0:{NFSU2_TR(0x7332f0);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
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
B7332f4:{NFSU2_TR(0x7332f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7332f7:{NFSU2_TR(0x7332f7);
__builtin_memmove((R+24),(R+8),4);
}
B7332f9:{NFSU2_TR(0x7332f9);
if(r1(R+518)){{goto L733308;}}
}
B7332fb:L7332fb:{c.instructions+=4;NFSU2_TR(0x7332fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7332fe:{NFSU2_TR(0x7332fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7332ff:{NFSU2_TR(0x7332ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733300:{NFSU2_TR(0x733300);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a08),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733306ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B733306:L733306:{c.instructions+=1;NFSU2_TR(0x733306);
{goto L733311;}
}
B733308:L733308:{c.instructions+=4;NFSU2_TR(0x733308);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B73330a:{NFSU2_TR(0x73330a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73330b:{NFSU2_TR(0x73330b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73330c:{NFSU2_TR(0x73330c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733311ull));
TAIL_STATIC(0x734d20u,734);
}
B733311:L733311:{c.instructions+=8;NFSU2_TR(0x733311);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733314:{NFSU2_TR(0x733314);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B733316:{NFSU2_TR(0x733316);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B733319:{NFSU2_TR(0x733319);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B73331c:{NFSU2_TR(0x73331c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73331f:{NFSU2_TR(0x73331f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733320:{NFSU2_TR(0x733320);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733321:{NFSU2_TR(0x733321);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733326ull));
TAIL_STATIC(0x727030u,727);
}
B733326:L733326:{c.instructions+=2;NFSU2_TR(0x733326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B733327:{NFSU2_TR(0x733327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B733328:L733328:{c.instructions+=6;NFSU2_TR(0x733328);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73332a:{NFSU2_TR(0x73332a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73332b:{NFSU2_TR(0x73332b);
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
B73332c:{NFSU2_TR(0x73332c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73332d:{NFSU2_TR(0x73332d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73332e:{NFSU2_TR(0x73332e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73332f:L73332f:{c.instructions+=13;NFSU2_TR(0x73332f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733333:{NFSU2_TR(0x733333);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B733337:{NFSU2_TR(0x733337);
u8 U[4];
w4(U+0,u32(0x7332a3ull));
s4(u32(r4(R+0)),r4(U+0));
}
B73333d:{NFSU2_TR(0x73333d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73333f:{NFSU2_TR(0x73333f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B733343:{NFSU2_TR(0x733343);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733346:{NFSU2_TR(0x733346);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733349:{NFSU2_TR(0x733349);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73334c:{NFSU2_TR(0x73334c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73334f:{NFSU2_TR(0x73334f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733352:{NFSU2_TR(0x733352);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w4(U+4,u32(0x73329bull));
s4(u32(r4(U+0)),r4(U+4));
}
B733359:{NFSU2_TR(0x733359);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B73335d:{NFSU2_TR(0x73335d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73335e:L73335e:{c.instructions+=4;NFSU2_TR(0x73335e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73335f:{NFSU2_TR(0x73335f);
__builtin_memmove((R+20),(R+16),4);
}
B733361:{NFSU2_TR(0x733361);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733362:{NFSU2_TR(0x733362);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffff80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B733369:L733369:{c.instructions+=7;NFSU2_TR(0x733369);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73336c:{NFSU2_TR(0x73336c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B733370:{NFSU2_TR(0x733370);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B733373:{NFSU2_TR(0x733373);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x7full))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x7full)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B733377:{NFSU2_TR(0x733377);
{u32 ea_=u32(u32(7919712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73337d:{NFSU2_TR(0x73337d);
{u32 ea_=u32((r4(R+0)*4u)+u32(9128760u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733384:{NFSU2_TR(0x733384);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733369u);}goto L733369;}}
}
B733386:L733386:{c.instructions+=2;NFSU2_TR(0x733386);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B733387:{NFSU2_TR(0x733387);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B733388:L733388:{c.instructions+=14;NFSU2_TR(0x733388);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733389:{NFSU2_TR(0x733389);
__builtin_memmove((R+20),(R+16),4);
}
B73338b:{NFSU2_TR(0x73338b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73338e:{NFSU2_TR(0x73338e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B733392:{NFSU2_TR(0x733392);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B733396:{NFSU2_TR(0x733396);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733397:{NFSU2_TR(0x733397);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73339a:{NFSU2_TR(0x73339a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B73339c:{NFSU2_TR(0x73339c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73339f:{NFSU2_TR(0x73339f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B7333a2:{NFSU2_TR(0x7333a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7333a5:{NFSU2_TR(0x7333a5);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B7333a7:{NFSU2_TR(0x7333a7);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B7333ab:{NFSU2_TR(0x7333ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73344c;}}
}
B7333b1:L7333b1:{c.instructions+=5;NFSU2_TR(0x7333b1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7333b7:{NFSU2_TR(0x7333b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7333b8:{NFSU2_TR(0x7333b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7333bb:{NFSU2_TR(0x7333bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7333bc:{NFSU2_TR(0x7333bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7333bf:L7333bf:{c.instructions+=4;NFSU2_TR(0x7333bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7333c1:{NFSU2_TR(0x7333c1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7333c3:{NFSU2_TR(0x7333c3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7333c5:{NFSU2_TR(0x7333c5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7333cd;}}
}
B7333c7:L7333c7:{c.instructions+=1;NFSU2_TR(0x7333c7);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7333cd:L7333cd:{c.instructions+=45;NFSU2_TR(0x7333cd);
{u32 ea_=u32(u32(8199932u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7333d3:{NFSU2_TR(0x7333d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7333d5:{NFSU2_TR(0x7333d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7333d8:{NFSU2_TR(0x7333d8);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7333dc:{NFSU2_TR(0x7333dc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B7333de:{NFSU2_TR(0x7333de);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7333e0:{NFSU2_TR(0x7333e0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7333e2:{NFSU2_TR(0x7333e2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7333e5:{NFSU2_TR(0x7333e5);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7333eb:{NFSU2_TR(0x7333eb);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7333ee:{NFSU2_TR(0x7333ee);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7333f0:{NFSU2_TR(0x7333f0);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B7333f2:{NFSU2_TR(0x7333f2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B7333f4:{NFSU2_TR(0x7333f4);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B7333f6:{NFSU2_TR(0x7333f6);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B7333f8:{NFSU2_TR(0x7333f8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7333fb:{NFSU2_TR(0x7333fb);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7333fd:{NFSU2_TR(0x7333fd);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733400:{NFSU2_TR(0x733400);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733402:{NFSU2_TR(0x733402);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733408:{NFSU2_TR(0x733408);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73340a:{NFSU2_TR(0x73340a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73340d:{NFSU2_TR(0x73340d);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B73340f:{NFSU2_TR(0x73340f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B733411:{NFSU2_TR(0x733411);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B733413:{NFSU2_TR(0x733413);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733415:{NFSU2_TR(0x733415);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733418:{NFSU2_TR(0x733418);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73341b:{NFSU2_TR(0x73341b);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B73341d:{NFSU2_TR(0x73341d);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B73341f:{NFSU2_TR(0x73341f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733421:{NFSU2_TR(0x733421);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733423:{NFSU2_TR(0x733423);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733426:{NFSU2_TR(0x733426);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733429:{NFSU2_TR(0x733429);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+28))));
s4(u32(r4(R+4)),r4(U+0));
}
B73342b:{NFSU2_TR(0x73342b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73342d:{NFSU2_TR(0x73342d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B733430:{NFSU2_TR(0x733430);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B733432:{NFSU2_TR(0x733432);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B733434:{NFSU2_TR(0x733434);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B733436:{NFSU2_TR(0x733436);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B73343b:{NFSU2_TR(0x73343b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B73343c:{NFSU2_TR(0x73343c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B73343f:{NFSU2_TR(0x73343f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733442:{NFSU2_TR(0x733442);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7333bfu);}goto L7333bf;}}
}
B733448:L733448:{c.instructions+=3;NFSU2_TR(0x733448);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733449:{NFSU2_TR(0x733449);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73344b:{NFSU2_TR(0x73344b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73344c:L73344c:{c.instructions+=4;NFSU2_TR(0x73344c);
u8 U[49];
w4(U+41,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+5),gp(u32(r4(R+4))),4);
__builtin_memmove((U+45),(U+5),4);
__builtin_memmove((U+5),gp(u32(r4(R+4))),4);
w4(U+5,shl<u32>(r4(U+5),u64(r4(U+41))));
s4(u32(r4(R+4)),r4(U+5));
w1(U+28,u8((r4(U+41))==(u32(0x0ull))));
w4(U+29,u32(u32(r4(U+41))-u32(u32(0x1ull))));
w4(U+33,shl<u32>(r4(U+45),u64(r4(U+29))));
w1(U+37,u8(s32(r4(U+33))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+28),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+28))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+41))==(u32(0x1ull))));
__builtin_memmove((U+5),gp(u32(r4(R+4))),4);
w1(U+39,u8(s32(r4(U+5))<s32(u32(0x0ull))));
w1(U+40,u8(u32(r1(R+512))^u32(r1(U+39))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+40))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+9,u8((r4(U+41))!=(u32(0x0ull))));
__builtin_memmove((U+5),gp(u32(r4(R+4))),4);
w1(U+10,u8(s32(r4(U+5))<s32(u32(0x0ull))));
w1(U+11,u8(!(r1(U+9))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+519))));
w1(U+13,u8(u32(r1(U+9))&u32(r1(U+10))));
w1(R+519,u8(u32(r1(U+12))|u32(r1(U+13))));
__builtin_memmove((U+5),gp(u32(r4(R+4))),4);
w1(U+14,u8((r4(U+5))==(u32(0x0ull))));
w1(U+15,u8(!(r1(U+9))));
w1(U+16,u8(u32(r1(U+15))&u32(r1(R+518))));
w1(U+17,u8(u32(r1(U+9))&u32(r1(U+14))));
w1(R+518,u8(u32(r1(U+16))|u32(r1(U+17))));
__builtin_memmove((U+5),gp(u32(r4(R+4))),4);
w4(U+18,u32(u32(r4(U+5))&u32(u32(0xffull))));
w1(U+22,u8(__builtin_popcountll(u64(r4(U+18)))));
w1(U+23,u8(u32(r1(U+22))&u32(u8(0x1ull))));
w1(U+24,u8((r1(U+23))==(u8(0x0ull))));
w1(U+25,u8(!(r1(U+9))));
w1(U+26,u8(u32(r1(U+25))&u32(r1(R+514))));
w1(U+27,u8(u32(r1(U+9))&u32(r1(U+24))));
w1(R+514,u8(u32(r1(U+26))|u32(r1(U+27))));
}
B73344f:{NFSU2_TR(0x73344f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733450:{NFSU2_TR(0x733450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B733451:{NFSU2_TR(0x733451);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B733460:L733460:{c.instructions+=16;NFSU2_TR(0x733460);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733461:{NFSU2_TR(0x733461);
__builtin_memmove((R+20),(R+16),4);
}
B733463:{NFSU2_TR(0x733463);
u8 U[8];
__builtin_memmove((U+4),(R+16),4);
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733464:{NFSU2_TR(0x733464);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733465:{NFSU2_TR(0x733465);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B733468:{NFSU2_TR(0x733468);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73346b:{NFSU2_TR(0x73346b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73346e:{NFSU2_TR(0x73346e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B733471:{NFSU2_TR(0x733471);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733474:{NFSU2_TR(0x733474);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B733476:{NFSU2_TR(0x733476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733479:{NFSU2_TR(0x733479);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73347c:{NFSU2_TR(0x73347c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B73347f:{NFSU2_TR(0x73347f);
__builtin_memmove(gp(0x819160),(R+16),4);
}
B733485:{NFSU2_TR(0x733485);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B733488:{NFSU2_TR(0x733488);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L733614;}}
}
B73348e:L73348e:{c.instructions+=1;NFSU2_TR(0x73348e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B733491:L733491:{c.instructions+=90;NFSU2_TR(0x733491);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733493:{NFSU2_TR(0x733493);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+16),(U+12),4);
}
B733497:{NFSU2_TR(0x733497);
__builtin_memmove(gp(0x819110),(R+12),4);
}
B73349d:{NFSU2_TR(0x73349d);
__builtin_memmove(gp(0x8190d0),(R+16),4);
}
B7334a3:{NFSU2_TR(0x7334a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+16),(U+8),4);
}
B7334a6:{NFSU2_TR(0x7334a6);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7334a8:{NFSU2_TR(0x7334a8);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B7334aa:{NFSU2_TR(0x7334aa);
__builtin_memmove(gp(0x8190e0),(R+16),4);
}
B7334b0:{NFSU2_TR(0x7334b0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+16),(U+12),4);
}
B7334b4:{NFSU2_TR(0x7334b4);
__builtin_memmove(gp(0x8190f0),(R+16),4);
}
B7334ba:{NFSU2_TR(0x7334ba);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+16),(U+12),4);
}
B7334be:{NFSU2_TR(0x7334be);
__builtin_memmove(gp(0x819100),(R+16),4);
}
B7334c4:{NFSU2_TR(0x7334c4);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7334c6:{NFSU2_TR(0x7334c6);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7334c8:{NFSU2_TR(0x7334c8);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+16),(U+12),4);
}
B7334cc:{NFSU2_TR(0x7334cc);
__builtin_memmove(gp(0x819114),(R+12),4);
}
B7334d2:{NFSU2_TR(0x7334d2);
__builtin_memmove(gp(0x8190d4),(R+16),4);
}
B7334d8:{NFSU2_TR(0x7334d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+16),(U+8),4);
}
B7334db:{NFSU2_TR(0x7334db);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7334dd:{NFSU2_TR(0x7334dd);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B7334df:{NFSU2_TR(0x7334df);
__builtin_memmove(gp(0x8190e4),(R+16),4);
}
B7334e5:{NFSU2_TR(0x7334e5);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+16),(U+12),4);
}
B7334e9:{NFSU2_TR(0x7334e9);
__builtin_memmove(gp(0x8190f4),(R+16),4);
}
B7334ef:{NFSU2_TR(0x7334ef);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+16),(U+12),4);
}
B7334f3:{NFSU2_TR(0x7334f3);
__builtin_memmove(gp(0x819104),(R+16),4);
}
B7334f9:{NFSU2_TR(0x7334f9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7334fb:{NFSU2_TR(0x7334fb);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7334fd:{NFSU2_TR(0x7334fd);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+16),(U+12),4);
}
B733501:{NFSU2_TR(0x733501);
__builtin_memmove(gp(0x819118),(R+12),4);
}
B733507:{NFSU2_TR(0x733507);
__builtin_memmove(gp(0x8190d8),(R+16),4);
}
B73350d:{NFSU2_TR(0x73350d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+16),(U+8),4);
}
B733510:{NFSU2_TR(0x733510);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733512:{NFSU2_TR(0x733512);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B733514:{NFSU2_TR(0x733514);
__builtin_memmove(gp(0x8190e8),(R+16),4);
}
B73351a:{NFSU2_TR(0x73351a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+16),(U+12),4);
}
B73351e:{NFSU2_TR(0x73351e);
__builtin_memmove(gp(0x8190f8),(R+16),4);
}
B733524:{NFSU2_TR(0x733524);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+16),(U+12),4);
}
B733528:{NFSU2_TR(0x733528);
__builtin_memmove(gp(0x819108),(R+16),4);
}
B73352e:{NFSU2_TR(0x73352e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733530:{NFSU2_TR(0x733530);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733532:{NFSU2_TR(0x733532);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+16),(U+12),4);
}
B733536:{NFSU2_TR(0x733536);
__builtin_memmove(gp(0x81911c),(R+12),4);
}
B73353c:{NFSU2_TR(0x73353c);
__builtin_memmove(gp(0x8190dc),(R+16),4);
}
B733542:{NFSU2_TR(0x733542);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+16),(U+8),4);
}
B733545:{NFSU2_TR(0x733545);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733547:{NFSU2_TR(0x733547);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B733549:{NFSU2_TR(0x733549);
__builtin_memmove(gp(0x8190ec),(R+16),4);
}
B73354f:{NFSU2_TR(0x73354f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+16),(U+12),4);
}
B733553:{NFSU2_TR(0x733553);
__builtin_memmove(gp(0x8190fc),(R+16),4);
}
B733559:{NFSU2_TR(0x733559);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+16),(U+12),4);
}
B73355d:{NFSU2_TR(0x73355d);
__builtin_memmove(gp(0x81910c),(R+16),4);
}
B733563:{NFSU2_TR(0x733563);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733565:{NFSU2_TR(0x733565);
u8 U[8];
__builtin_memmove((U+0),gp(0x819118),8);
w4(R+5056,b32(float(s64(s32(r4(U+0))))));
w4(R+5060,b32(float(s64(s32(r4(U+4))))));
}
B73356c:{NFSU2_TR(0x73356c);
u8 U[16];
__builtin_memmove((U+0),gp(0x8190d0),16);
__builtin_memmove((R+4608),(U+0),4);
__builtin_memmove((R+4612),(U+4),4);
__builtin_memmove((R+4616),(U+8),4);
__builtin_memmove((R+4620),(U+12),4);
}
B733573:{NFSU2_TR(0x733573);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B733577:{NFSU2_TR(0x733577);
u8 U[16];
__builtin_memmove((U+0),gp(0x8190e0),16);
__builtin_memmove((R+4672),(U+0),4);
__builtin_memmove((R+4676),(U+4),4);
__builtin_memmove((R+4680),(U+8),4);
__builtin_memmove((R+4684),(U+12),4);
}
B73357e:{NFSU2_TR(0x73357e);
u8 U[8];
__builtin_memmove((U+0),gp(0x819110),8);
w4(R+5056,b32(float(s64(s32(r4(U+0))))));
w4(R+5060,b32(float(s64(s32(r4(U+4))))));
}
B733585:{NFSU2_TR(0x733585);
u8 U[16];
__builtin_memmove((U+0),gp(0x8190f0),16);
__builtin_memmove((R+4736),(U+0),4);
__builtin_memmove((R+4740),(U+4),4);
__builtin_memmove((R+4744),(U+8),4);
__builtin_memmove((R+4748),(U+12),4);
}
B73358c:{NFSU2_TR(0x73358c);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B733590:{NFSU2_TR(0x733590);
u8 U[16];
__builtin_memmove((U+0),gp(0x819100),16);
__builtin_memmove((R+4800),(U+0),4);
__builtin_memmove((R+4804),(U+4),4);
__builtin_memmove((R+4808),(U+8),4);
__builtin_memmove((R+4812),(U+12),4);
}
B733597:{NFSU2_TR(0x733597);
u8 U[16];
__builtin_memmove((U+0),gp(0x8190c0),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+0))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+4))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+8))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+12))));
}
B73359e:{NFSU2_TR(0x73359e);
u8 U[16];
__builtin_memmove((U+0),gp(0x819130),16);
__builtin_memmove((R+4928),(U+0),4);
__builtin_memmove((R+4932),(U+4),4);
__builtin_memmove((R+4936),(U+8),4);
__builtin_memmove((R+4940),(U+12),4);
}
B7335a5:{NFSU2_TR(0x7335a5);
__builtin_memmove((R+4864),(R+4672),4);
__builtin_memmove((R+4868),(R+4676),4);
__builtin_memmove((R+4872),(R+4680),4);
__builtin_memmove((R+4876),(R+4684),4);
}
B7335a8:{NFSU2_TR(0x7335a8);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B7335ab:{NFSU2_TR(0x7335ab);
w4(R+4864,b32(f32(r4(R+4864))-f32(r4(R+4736))));
w4(R+4868,b32(f32(r4(R+4868))-f32(r4(R+4740))));
w4(R+4872,b32(f32(r4(R+4872))-f32(r4(R+4744))));
w4(R+4876,b32(f32(r4(R+4876))-f32(r4(R+4748))));
}
B7335ae:{NFSU2_TR(0x7335ae);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4608))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4612))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4616))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4620))));
}
B7335b1:{NFSU2_TR(0x7335b1);
u8 U[16];
__builtin_memmove((U+0),gp(0x819140),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+0))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+4))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+8))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+12))));
}
B7335b8:{NFSU2_TR(0x7335b8);
u8 U[16];
__builtin_memmove((U+0),gp(0x819150),16);
__builtin_memmove((R+4992),(U+0),4);
__builtin_memmove((R+4996),(U+4),4);
__builtin_memmove((R+5000),(U+8),4);
__builtin_memmove((R+5004),(U+12),4);
}
B7335bf:{NFSU2_TR(0x7335bf);
w4(R+4864,b32(f32(r4(R+4864))-f32(r4(R+4608))));
w4(R+4868,b32(f32(r4(R+4868))-f32(r4(R+4612))));
w4(R+4872,b32(f32(r4(R+4872))-f32(r4(R+4616))));
w4(R+4876,b32(f32(r4(R+4876))-f32(r4(R+4620))));
}
B7335c2:{NFSU2_TR(0x7335c2);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4672))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4676))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4680))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4684))));
}
B7335c5:{NFSU2_TR(0x7335c5);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4800))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4804))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4808))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4812))));
}
B7335c8:{NFSU2_TR(0x7335c8);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4800))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4804))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4808))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4812))));
}
B7335cb:{NFSU2_TR(0x7335cb);
u8 U[16];
__builtin_memmove((U+0),gp(0x819120),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+0))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+4))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+8))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+12))));
}
B7335d2:{NFSU2_TR(0x7335d2);
u8 U[16];
__builtin_memmove((U+0),gp(0x819120),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+0))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+4))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+8))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+12))));
}
B7335d9:{NFSU2_TR(0x7335d9);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+4992))));
w4(R+4932,b32(f32(r4(R+4932))-f32(r4(R+4996))));
w4(R+4936,b32(f32(r4(R+4936))-f32(r4(R+5000))));
w4(R+4940,b32(f32(r4(R+4940))-f32(r4(R+5004))));
}
B7335dc:{NFSU2_TR(0x7335dc);
__builtin_memmove((R+4992),(R+4736),4);
__builtin_memmove((R+4996),(R+4740),4);
__builtin_memmove((R+5000),(R+4744),4);
__builtin_memmove((R+5004),(R+4748),4);
}
B7335df:{NFSU2_TR(0x7335df);
w4(R+4992,b32(f32(r4(R+4992))-f32(r4(R+4608))));
w4(R+4996,b32(f32(r4(R+4996))-f32(r4(R+4612))));
w4(R+5000,b32(f32(r4(R+5000))-f32(r4(R+4616))));
w4(R+5004,b32(f32(r4(R+5004))-f32(r4(R+4620))));
}
B7335e2:{NFSU2_TR(0x7335e2);
u8 U[16];
__builtin_memmove((U+0),gp(0x819120),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+0))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+4))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+8))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+12))));
}
B7335e9:{NFSU2_TR(0x7335e9);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+5068))));
}
B7335ec:{NFSU2_TR(0x7335ec);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+5056))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+5060))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+5064))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+5068))));
}
B7335ef:{NFSU2_TR(0x7335ef);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+5056))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+5060))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+5064))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+5068))));
}
B7335f2:{NFSU2_TR(0x7335f2);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+5056))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+5060))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+5064))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+5068))));
}
B7335f5:{NFSU2_TR(0x7335f5);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+5056))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+5060))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+5064))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+5068))));
}
B7335f8:{NFSU2_TR(0x7335f8);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4928))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4932))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4936))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4940))));
}
B7335fb:{NFSU2_TR(0x7335fb);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4864))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4868))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4872))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4876))));
}
B7335fe:{NFSU2_TR(0x7335fe);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4992))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4996))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+5000))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+5004))));
}
B733601:{NFSU2_TR(0x733601);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B733604:{NFSU2_TR(0x733604);
w1(R+523,sborrow<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B733607:{NFSU2_TR(0x733607);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B73360b:{NFSU2_TR(0x73360b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733491u);}goto L733491;}}
}
B733611:L733611:{c.instructions+=1;NFSU2_TR(0x733611);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B733614:L733614:{c.instructions+=2;NFSU2_TR(0x733614);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73361a:{NFSU2_TR(0x73361a);
if(r1(R+518)){{goto L7336de;}}
}
B733620:L733620:{c.instructions+=40;NFSU2_TR(0x733620);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733622:{NFSU2_TR(0x733622);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4608),(U+12),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B733628:{NFSU2_TR(0x733628);
__builtin_memmove(gp(0x819110),(R+12),4);
}
B73362e:{NFSU2_TR(0x73362e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4672),(U+8),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B733633:{NFSU2_TR(0x733633);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733635:{NFSU2_TR(0x733635);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B733637:{NFSU2_TR(0x733637);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4736),(U+12),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B73363d:{NFSU2_TR(0x73363d);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4800),(U+12),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B733643:{NFSU2_TR(0x733643);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733645:{NFSU2_TR(0x733645);
u8 U[8];
__builtin_memmove((U+0),gp(0x819110),8);
w4(R+5056,b32(float(s64(s32(r4(U+0))))));
w4(R+5060,b32(float(s64(s32(r4(U+4))))));
}
B73364c:{NFSU2_TR(0x73364c);
u8 U[16];
__builtin_memmove((U+0),gp(0x8190c0),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+0))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+4))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+8))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+12))));
}
B733653:{NFSU2_TR(0x733653);
__builtin_memmove((R+4864),(R+4672),4);
}
B733657:{NFSU2_TR(0x733657);
w4(R+4864,b32(f32(r4(R+4864))-f32(r4(R+4736))));
}
B73365b:{NFSU2_TR(0x73365b);
w4(R+4864,b32(f32(r4(R+4864))*f32(m4(0x819140))));
}
B733663:{NFSU2_TR(0x733663);
w4(R+4864,b32(f32(r4(R+4864))-f32(r4(R+4608))));
}
B733667:{NFSU2_TR(0x733667);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4800))));
}
B73366b:{NFSU2_TR(0x73366b);
w4(R+4864,b32(f32(r4(R+4864))*f32(m4(0x819120))));
}
B733673:{NFSU2_TR(0x733673);
__builtin_memmove((R+4928),gp(0x819130),4);
w4(R+4932,u32(0x0ull));
w4(R+4936,u32(0x0ull));
w4(R+4940,u32(0x0ull));
}
B73367b:{NFSU2_TR(0x73367b);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
}
B73367f:{NFSU2_TR(0x73367f);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4608))));
}
B733683:{NFSU2_TR(0x733683);
__builtin_memmove((R+4992),gp(0x819150),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
}
B73368b:{NFSU2_TR(0x73368b);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4672))));
}
B73368f:{NFSU2_TR(0x73368f);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4800))));
}
B733693:{NFSU2_TR(0x733693);
w4(R+4992,b32(f32(r4(R+4992))*f32(m4(0x819120))));
}
B73369b:{NFSU2_TR(0x73369b);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+4992))));
}
B73369f:{NFSU2_TR(0x73369f);
__builtin_memmove((R+4992),(R+4736),4);
}
B7336a3:{NFSU2_TR(0x7336a3);
w4(R+4992,b32(f32(r4(R+4992))-f32(r4(R+4608))));
}
B7336a7:{NFSU2_TR(0x7336a7);
w4(R+4992,b32(f32(r4(R+4992))*f32(m4(0x819120))));
}
B7336af:{NFSU2_TR(0x7336af);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
}
B7336b3:{NFSU2_TR(0x7336b3);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+5056))));
}
B7336b7:{NFSU2_TR(0x7336b7);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+5056))));
}
B7336bb:{NFSU2_TR(0x7336bb);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+5056))));
}
B7336bf:{NFSU2_TR(0x7336bf);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+5056))));
}
B7336c3:{NFSU2_TR(0x7336c3);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4928))));
}
B7336c7:{NFSU2_TR(0x7336c7);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4864))));
}
B7336cb:{NFSU2_TR(0x7336cb);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4992))));
}
B7336cf:{NFSU2_TR(0x7336cf);
u8 U[4];
__builtin_memmove((U+0),(R+4672),4);
s4(u32(r4(R+28)),r4(U+0));
}
B7336d3:{NFSU2_TR(0x7336d3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B7336d6:{NFSU2_TR(0x7336d6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7336d9:{NFSU2_TR(0x7336d9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733614u);}goto L733614;}
}
B7336de:L7336de:{c.instructions+=10;NFSU2_TR(0x7336de);
__builtin_memmove((R+16),gp(0x819160),4);
}
B7336e4:{NFSU2_TR(0x7336e4);
__builtin_memmove((R+4),(R+20),4);
}
B7336e6:{NFSU2_TR(0x7336e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7336e7:{NFSU2_TR(0x7336e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7336ea:{NFSU2_TR(0x7336ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7336ed:{NFSU2_TR(0x7336ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B7336ef:{NFSU2_TR(0x7336ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7336f1:{NFSU2_TR(0x7336f1);
__builtin_memmove((R+28),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7336f2:{NFSU2_TR(0x7336f2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7336f3:{NFSU2_TR(0x7336f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B733700:L733700:{c.instructions+=16;NFSU2_TR(0x733700);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733701:{NFSU2_TR(0x733701);
__builtin_memmove((R+20),(R+16),4);
}
B733703:{NFSU2_TR(0x733703);
u8 U[8];
__builtin_memmove((U+4),(R+16),4);
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733704:{NFSU2_TR(0x733704);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733705:{NFSU2_TR(0x733705);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B733708:{NFSU2_TR(0x733708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73370b:{NFSU2_TR(0x73370b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73370e:{NFSU2_TR(0x73370e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B733711:{NFSU2_TR(0x733711);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733714:{NFSU2_TR(0x733714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B733716:{NFSU2_TR(0x733716);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733719:{NFSU2_TR(0x733719);
__builtin_memmove(gp(0x819170),(R+12),4);
}
B73371f:{NFSU2_TR(0x73371f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B733722:{NFSU2_TR(0x733722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B733725:{NFSU2_TR(0x733725);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B733728:{NFSU2_TR(0x733728);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L733785;}}
}
B73372a:L73372a:{c.instructions+=1;NFSU2_TR(0x73372a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B73372d:L73372d:{c.instructions+=24;NFSU2_TR(0x73372d);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733731:{NFSU2_TR(0x733731);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B733734:{NFSU2_TR(0x733734);
{u32 ea_=u32(u32(8491376u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B73373a:{NFSU2_TR(0x73373a);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B73373c:{NFSU2_TR(0x73373c);
{u32 ea_=u32(u32(8491384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733742:{NFSU2_TR(0x733742);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B733744:{NFSU2_TR(0x733744);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733747:{NFSU2_TR(0x733747);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733749:{NFSU2_TR(0x733749);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B73374c:{NFSU2_TR(0x73374c);
__builtin_memmove(gp(0x819170),(R+12),4);
}
B733752:{NFSU2_TR(0x733752);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733755:{NFSU2_TR(0x733755);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733759:{NFSU2_TR(0x733759);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73375c:{NFSU2_TR(0x73375c);
{u32 ea_=u32(u32(8491376u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B733762:{NFSU2_TR(0x733762);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B733764:{NFSU2_TR(0x733764);
{u32 ea_=u32(u32(8491384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73376a:{NFSU2_TR(0x73376a);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B73376c:{NFSU2_TR(0x73376c);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73376f:{NFSU2_TR(0x73376f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733771:{NFSU2_TR(0x733771);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B733774:{NFSU2_TR(0x733774);
__builtin_memmove(gp(0x819170),(R+12),4);
}
B73377a:{NFSU2_TR(0x73377a);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73377d:{NFSU2_TR(0x73377d);
w1(R+523,sborrow<u32>(r4(R+4),u32(0x2ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B733780:{NFSU2_TR(0x733780);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73372du);}goto L73372d;}}
}
B733782:L733782:{c.instructions+=1;NFSU2_TR(0x733782);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B733785:L733785:{c.instructions+=2;NFSU2_TR(0x733785);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73378b:{NFSU2_TR(0x73378b);
if(r1(R+518)){{goto L7337ba;}}
}
B73378d:L73378d:{c.instructions+=13;NFSU2_TR(0x73378d);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733791:{NFSU2_TR(0x733791);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B733794:{NFSU2_TR(0x733794);
{u32 ea_=u32(u32(8491376u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B73379a:{NFSU2_TR(0x73379a);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B73379c:{NFSU2_TR(0x73379c);
{u32 ea_=u32(u32(8491384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7337a2:{NFSU2_TR(0x7337a2);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B7337a4:{NFSU2_TR(0x7337a4);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7337a7:{NFSU2_TR(0x7337a7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7337a9:{NFSU2_TR(0x7337a9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B7337ac:{NFSU2_TR(0x7337ac);
__builtin_memmove(gp(0x819170),(R+12),4);
}
B7337b2:{NFSU2_TR(0x7337b2);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7337b5:{NFSU2_TR(0x7337b5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7337b8:{NFSU2_TR(0x7337b8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733785u);}goto L733785;}
}
B7337ba:L7337ba:{c.instructions+=9;NFSU2_TR(0x7337ba);
__builtin_memmove((R+4),(R+20),4);
}
B7337bc:{NFSU2_TR(0x7337bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7337bd:{NFSU2_TR(0x7337bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7337c0:{NFSU2_TR(0x7337c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7337c3:{NFSU2_TR(0x7337c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B7337c5:{NFSU2_TR(0x7337c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7337c7:{NFSU2_TR(0x7337c7);
__builtin_memmove((R+28),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7337c8:{NFSU2_TR(0x7337c8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7337c9:{NFSU2_TR(0x7337c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7337d0:L7337d0:{c.instructions+=16;NFSU2_TR(0x7337d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7337d1:{NFSU2_TR(0x7337d1);
__builtin_memmove((R+20),(R+16),4);
}
B7337d3:{NFSU2_TR(0x7337d3);
u8 U[8];
__builtin_memmove((U+4),(R+16),4);
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7337d4:{NFSU2_TR(0x7337d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7337d5:{NFSU2_TR(0x7337d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7337d8:{NFSU2_TR(0x7337d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7337db:{NFSU2_TR(0x7337db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7337de:{NFSU2_TR(0x7337de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7337e1:{NFSU2_TR(0x7337e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7337e4:{NFSU2_TR(0x7337e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B7337e6:{NFSU2_TR(0x7337e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7337e9:{NFSU2_TR(0x7337e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7337ec:{NFSU2_TR(0x7337ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B7337ef:{NFSU2_TR(0x7337ef);
u8 U[16];
__builtin_memmove((U+0),gp(0x819180),16);
__builtin_memmove((R+5056),(U+0),4);
__builtin_memmove((R+5060),(U+4),4);
__builtin_memmove((R+5064),(U+8),4);
__builtin_memmove((R+5068),(U+12),4);
}
B7337f6:{NFSU2_TR(0x7337f6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7337f9:{NFSU2_TR(0x7337f9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L733985;}}
}
B7337ff:L7337ff:{c.instructions+=1;NFSU2_TR(0x7337ff);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
}
B733802:L733802:{c.instructions+=97;NFSU2_TR(0x733802);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733803:{NFSU2_TR(0x733803);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733805:{NFSU2_TR(0x733805);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B733809:{NFSU2_TR(0x733809);
__builtin_memmove(gp(0x8191c0),(R+12),4);
}
B73380f:{NFSU2_TR(0x73380f);
__builtin_memmove(gp(0x8191b0),(R+28),4);
}
B733815:{NFSU2_TR(0x733815);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B733818:{NFSU2_TR(0x733818);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B73381a:{NFSU2_TR(0x73381a);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B73381c:{NFSU2_TR(0x73381c);
__builtin_memmove(gp(0x819190),(R+28),4);
}
B733822:{NFSU2_TR(0x733822);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733824:{NFSU2_TR(0x733824);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733826:{NFSU2_TR(0x733826);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B73382a:{NFSU2_TR(0x73382a);
__builtin_memmove(gp(0x8191c4),(R+12),4);
}
B733830:{NFSU2_TR(0x733830);
__builtin_memmove(gp(0x8191b4),(R+28),4);
}
B733836:{NFSU2_TR(0x733836);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B733839:{NFSU2_TR(0x733839);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B73383b:{NFSU2_TR(0x73383b);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B73383d:{NFSU2_TR(0x73383d);
__builtin_memmove(gp(0x819194),(R+28),4);
}
B733843:{NFSU2_TR(0x733843);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733845:{NFSU2_TR(0x733845);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733847:{NFSU2_TR(0x733847);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B73384b:{NFSU2_TR(0x73384b);
__builtin_memmove(gp(0x8191c8),(R+12),4);
}
B733851:{NFSU2_TR(0x733851);
__builtin_memmove(gp(0x8191b8),(R+28),4);
}
B733857:{NFSU2_TR(0x733857);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B73385a:{NFSU2_TR(0x73385a);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B73385c:{NFSU2_TR(0x73385c);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B73385e:{NFSU2_TR(0x73385e);
__builtin_memmove(gp(0x819198),(R+28),4);
}
B733864:{NFSU2_TR(0x733864);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733866:{NFSU2_TR(0x733866);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733868:{NFSU2_TR(0x733868);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B73386c:{NFSU2_TR(0x73386c);
__builtin_memmove(gp(0x8191cc),(R+12),4);
}
B733872:{NFSU2_TR(0x733872);
__builtin_memmove(gp(0x8191bc),(R+28),4);
}
B733878:{NFSU2_TR(0x733878);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B73387b:{NFSU2_TR(0x73387b);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B73387d:{NFSU2_TR(0x73387d);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B73387f:{NFSU2_TR(0x73387f);
__builtin_memmove(gp(0x81919c),(R+28),4);
}
B733885:{NFSU2_TR(0x733885);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733887:{NFSU2_TR(0x733887);
u8 U[16];
__builtin_memmove((U+0),gp(0x8191b0),16);
__builtin_memmove((R+4672),(U+0),4);
__builtin_memmove((R+4676),(U+4),4);
__builtin_memmove((R+4680),(U+8),4);
__builtin_memmove((R+4684),(U+12),4);
}
B73388e:{NFSU2_TR(0x73388e);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733890:{NFSU2_TR(0x733890);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B733894:{NFSU2_TR(0x733894);
__builtin_memmove(gp(0x8191d0),(R+12),4);
}
B73389a:{NFSU2_TR(0x73389a);
__builtin_memmove(gp(0x8191b0),(R+28),4);
}
B7338a0:{NFSU2_TR(0x7338a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B7338a3:{NFSU2_TR(0x7338a3);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7338a5:{NFSU2_TR(0x7338a5);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B7338a7:{NFSU2_TR(0x7338a7);
__builtin_memmove(gp(0x8191a0),(R+28),4);
}
B7338ad:{NFSU2_TR(0x7338ad);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7338af:{NFSU2_TR(0x7338af);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7338b1:{NFSU2_TR(0x7338b1);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B7338b5:{NFSU2_TR(0x7338b5);
__builtin_memmove(gp(0x8191d4),(R+12),4);
}
B7338bb:{NFSU2_TR(0x7338bb);
__builtin_memmove(gp(0x8191b4),(R+28),4);
}
B7338c1:{NFSU2_TR(0x7338c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B7338c4:{NFSU2_TR(0x7338c4);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7338c6:{NFSU2_TR(0x7338c6);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B7338c8:{NFSU2_TR(0x7338c8);
__builtin_memmove(gp(0x8191a4),(R+28),4);
}
B7338ce:{NFSU2_TR(0x7338ce);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7338d0:{NFSU2_TR(0x7338d0);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7338d2:{NFSU2_TR(0x7338d2);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B7338d6:{NFSU2_TR(0x7338d6);
__builtin_memmove(gp(0x8191d8),(R+12),4);
}
B7338dc:{NFSU2_TR(0x7338dc);
__builtin_memmove(gp(0x8191b8),(R+28),4);
}
B7338e2:{NFSU2_TR(0x7338e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B7338e5:{NFSU2_TR(0x7338e5);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7338e7:{NFSU2_TR(0x7338e7);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B7338e9:{NFSU2_TR(0x7338e9);
__builtin_memmove(gp(0x8191a8),(R+28),4);
}
B7338ef:{NFSU2_TR(0x7338ef);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7338f1:{NFSU2_TR(0x7338f1);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7338f3:{NFSU2_TR(0x7338f3);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B7338f7:{NFSU2_TR(0x7338f7);
__builtin_memmove(gp(0x8191dc),(R+12),4);
}
B7338fd:{NFSU2_TR(0x7338fd);
__builtin_memmove(gp(0x8191bc),(R+28),4);
}
B733903:{NFSU2_TR(0x733903);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B733906:{NFSU2_TR(0x733906);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733908:{NFSU2_TR(0x733908);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B73390a:{NFSU2_TR(0x73390a);
__builtin_memmove(gp(0x8191ac),(R+28),4);
}
B733910:{NFSU2_TR(0x733910);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733912:{NFSU2_TR(0x733912);
u8 U[16];
__builtin_memmove((U+0),gp(0x8191b0),16);
__builtin_memmove((R+4800),(U+0),4);
__builtin_memmove((R+4804),(U+4),4);
__builtin_memmove((R+4808),(U+8),4);
__builtin_memmove((R+4812),(U+12),4);
}
B733919:{NFSU2_TR(0x733919);
u8 U[8];
__builtin_memmove((U+0),gp(0x8191c8),8);
w4(R+4992,b32(float(s64(s32(r4(U+0))))));
w4(R+4996,b32(float(s64(s32(r4(U+4))))));
}
B733920:{NFSU2_TR(0x733920);
u8 U[8];
__builtin_memmove((U+0),gp(0x8191d8),8);
w4(R+4928,b32(float(s64(s32(r4(U+0))))));
w4(R+4932,b32(float(s64(s32(r4(U+4))))));
}
B733927:{NFSU2_TR(0x733927);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B73392b:{NFSU2_TR(0x73392b);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B73392f:{NFSU2_TR(0x73392f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8191c0),8);
w4(R+4992,b32(float(s64(s32(r4(U+0))))));
w4(R+4996,b32(float(s64(s32(r4(U+4))))));
}
B733936:{NFSU2_TR(0x733936);
u8 U[8];
__builtin_memmove((U+0),gp(0x8191d0),8);
w4(R+4928,b32(float(s64(s32(r4(U+0))))));
w4(R+4932,b32(float(s64(s32(r4(U+4))))));
}
B73393d:{NFSU2_TR(0x73393d);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B733941:{NFSU2_TR(0x733941);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B733945:{NFSU2_TR(0x733945);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733946:{NFSU2_TR(0x733946);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+5068))));
}
B733949:{NFSU2_TR(0x733949);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+5056))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+5060))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+5064))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+5068))));
}
B73394c:{NFSU2_TR(0x73394c);
u8 U[16];
__builtin_memmove((U+0),gp(0x819190),16);
w4(R+4672,b32(f32(r4(R+4672))-f32(r4(U+0))));
w4(R+4676,b32(f32(r4(R+4676))-f32(r4(U+4))));
w4(R+4680,b32(f32(r4(R+4680))-f32(r4(U+8))));
w4(R+4684,b32(f32(r4(R+4684))-f32(r4(U+12))));
}
B733953:{NFSU2_TR(0x733953);
u8 U[16];
__builtin_memmove((U+0),gp(0x8191a0),16);
w4(R+4800,b32(f32(r4(R+4800))-f32(r4(U+0))));
w4(R+4804,b32(f32(r4(R+4804))-f32(r4(U+4))));
w4(R+4808,b32(f32(r4(R+4808))-f32(r4(U+8))));
w4(R+4812,b32(f32(r4(R+4812))-f32(r4(U+12))));
}
B73395a:{NFSU2_TR(0x73395a);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4992))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4996))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+5000))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+5004))));
}
B73395d:{NFSU2_TR(0x73395d);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4928))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4932))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4936))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4940))));
}
B733960:{NFSU2_TR(0x733960);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B733963:{NFSU2_TR(0x733963);
u8 U[16];
__builtin_memmove((U+0),gp(0x819190),16);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(U+0))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(U+4))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(U+8))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(U+12))));
}
B73396a:{NFSU2_TR(0x73396a);
u8 U[16];
__builtin_memmove((U+0),gp(0x8191a0),16);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(U+0))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(U+4))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(U+8))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(U+12))));
}
B733971:{NFSU2_TR(0x733971);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B733975:{NFSU2_TR(0x733975);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B733979:{NFSU2_TR(0x733979);
w1(R+523,sborrow<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B73397c:{NFSU2_TR(0x73397c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733802u);}goto L733802;}}
}
B733982:L733982:{c.instructions+=1;NFSU2_TR(0x733982);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B733985:L733985:{c.instructions+=2;NFSU2_TR(0x733985);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73398b:{NFSU2_TR(0x73398b);
if(r1(R+518)){{goto L7339c1;}}
}
B73398d:L73398d:{c.instructions+=15;NFSU2_TR(0x73398d);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B73398f:{NFSU2_TR(0x73398f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B733995:{NFSU2_TR(0x733995);
w4(R+4992,b32(float(s64(s32(r4(R+12))))));
}
B733999:{NFSU2_TR(0x733999);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4608),(U+8),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B73399e:{NFSU2_TR(0x73399e);
w4(R+4672,b32(f32(r4(R+4672))-f32(r4(R+4608))));
}
B7339a2:{NFSU2_TR(0x7339a2);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
}
B7339a6:{NFSU2_TR(0x7339a6);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7339a8:{NFSU2_TR(0x7339a8);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4992))));
}
B7339ac:{NFSU2_TR(0x7339ac);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B7339af:{NFSU2_TR(0x7339af);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B7339b1:{NFSU2_TR(0x7339b1);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
}
B7339b5:{NFSU2_TR(0x7339b5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7339b7:{NFSU2_TR(0x7339b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4608),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7339bc:{NFSU2_TR(0x7339bc);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7339bf:{NFSU2_TR(0x7339bf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733985u);}goto L733985;}
}
B7339c1:L7339c1:{c.instructions+=9;NFSU2_TR(0x7339c1);
__builtin_memmove((R+4),(R+20),4);
}
B7339c3:{NFSU2_TR(0x7339c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7339c4:{NFSU2_TR(0x7339c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7339c7:{NFSU2_TR(0x7339c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7339ca:{NFSU2_TR(0x7339ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B7339cc:{NFSU2_TR(0x7339cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7339ce:{NFSU2_TR(0x7339ce);
__builtin_memmove((R+28),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7339cf:{NFSU2_TR(0x7339cf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7339d0:{NFSU2_TR(0x7339d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7339d1:L7339d1:{c.instructions+=1;NFSU2_TR(0x7339d1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7339d3:L7339d3:{c.instructions+=5;NFSU2_TR(0x7339d3);
__builtin_memmove((R+0),(R+4),4);
}
B7339d5:{NFSU2_TR(0x7339d5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7339d8:{NFSU2_TR(0x7339d8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7339d9:{NFSU2_TR(0x7339d9);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B7339dd:{NFSU2_TR(0x7339dd);
if(r1(R+518)){{goto L7339e5;}}
}
B7339df:L7339df:{c.instructions+=1;NFSU2_TR(0x7339df);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7339d3u);}goto L7339d3;}}
}
B7339e1:L7339e1:{c.instructions+=2;NFSU2_TR(0x7339e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B7339e4:{NFSU2_TR(0x7339e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7339e5:L7339e5:{c.instructions+=2;NFSU2_TR(0x7339e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B7339e8:{NFSU2_TR(0x7339e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7339e9:L7339e9:{c.instructions+=10;NFSU2_TR(0x7339e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7339ed:{NFSU2_TR(0x7339ed);
u8 U[32];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B7339f2:{NFSU2_TR(0x7339f2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7339f3:{NFSU2_TR(0x7339f3);
w4(R+4,u32(0x3e8ull));
}
B7339f8:{NFSU2_TR(0x7339f8);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7339f8);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7339f8);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7339fa:{NFSU2_TR(0x7339fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7339fb:{NFSU2_TR(0x7339fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7339fc:{NFSU2_TR(0x7339fc);
__builtin_memmove((R+28),(R+0),4);
}
B7339fe:{NFSU2_TR(0x7339fe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B733a01:{NFSU2_TR(0x733a01);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L733a06;}}
}
B733a03:L733a03:{c.instructions+=2;NFSU2_TR(0x733a03);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733a05:{NFSU2_TR(0x733a05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733a06:L733a06:{c.instructions+=2;NFSU2_TR(0x733a06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733a07:{NFSU2_TR(0x733a07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733a0cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7339d1u);}goto L7339d1;}
}
B733a0c:L733a0c:{c.instructions+=7;NFSU2_TR(0x733a0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B733a0d:{NFSU2_TR(0x733a0d);
__builtin_memmove((R+4),(R+0),4);
}
B733a0f:{NFSU2_TR(0x733a0f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733a11:{NFSU2_TR(0x733a11);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B733a12:{NFSU2_TR(0x733a12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733a13:{NFSU2_TR(0x733a13);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B733a15:{NFSU2_TR(0x733a15);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733a06u);}goto L733a06;}}
}
B733a17:L733a17:{c.instructions+=5;NFSU2_TR(0x733a17);
__builtin_memmove((R+0),(R+28),4);
}
B733a19:{NFSU2_TR(0x733a19);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B733a1a:{NFSU2_TR(0x733a1a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x733a1a);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x733a1a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B733a1c:{NFSU2_TR(0x733a1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B733a1e:{NFSU2_TR(0x733a1e);
if(r1(R+518)){{goto L733a2b;}}
}
B733a20:L733a20:{c.instructions+=2;NFSU2_TR(0x733a20);
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
B733a22:{NFSU2_TR(0x733a22);
if(r1(R+518)){{goto L733a2e;}}
}
B733a24:L733a24:{c.instructions+=3;NFSU2_TR(0x733a24);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B733a25:{NFSU2_TR(0x733a25);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B733a27:{NFSU2_TR(0x733a27);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733a17u);}goto L733a17;}}
}
B733a29:L733a29:{c.instructions+=1;NFSU2_TR(0x733a29);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733a06u);}goto L733a06;}
}
B733a2b:L733a2b:{c.instructions+=2;NFSU2_TR(0x733a2b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B733a2c:{NFSU2_TR(0x733a2c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733a06u);}goto L733a06;}
}
B733a2e:L733a2e:{c.instructions+=4;NFSU2_TR(0x733a2e);
__builtin_memmove((R+0),(R+28),4);
}
B733a30:{NFSU2_TR(0x733a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733a31:{NFSU2_TR(0x733a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733a32:{NFSU2_TR(0x733a32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B733a33:L733a33:{c.instructions+=10;NFSU2_TR(0x733a33);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8191e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B733a3a:{NFSU2_TR(0x733a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B733a3d:{NFSU2_TR(0x733a3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733a3e:{NFSU2_TR(0x733a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B733a41:{NFSU2_TR(0x733a41);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B733a43:{NFSU2_TR(0x733a43);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r1(U+0))));
}
B733a45:{NFSU2_TR(0x733a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B733a48:{NFSU2_TR(0x733a48);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B733a4b:{NFSU2_TR(0x733a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733a4e:{NFSU2_TR(0x733a4e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L733a69;}}
}
B733a50:L733a50:{c.instructions+=13;NFSU2_TR(0x733a50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733a51:{NFSU2_TR(0x733a51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733a52:{NFSU2_TR(0x733a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B733a54:{NFSU2_TR(0x733a54);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+12,u32(r1(U+0)));
}
B733a57:{NFSU2_TR(0x733a57);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B733a59:{NFSU2_TR(0x733a59);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+28))));
}
B733a5b:{NFSU2_TR(0x733a5b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B733a5c:{NFSU2_TR(0x733a5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B733a5e:{NFSU2_TR(0x733a5e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B733a61:{NFSU2_TR(0x733a61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733a62:{NFSU2_TR(0x733a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733a65:{NFSU2_TR(0x733a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733a68:{NFSU2_TR(0x733a68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B733a69:L733a69:{c.instructions+=2;NFSU2_TR(0x733a69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733a6a:{NFSU2_TR(0x733a6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B733a6b:L733a6b:{c.instructions+=9;NFSU2_TR(0x733a6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733a6f:{NFSU2_TR(0x733a6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B733a73:{NFSU2_TR(0x733a73);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+8,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shr<u32>(r4(U+4),u64(r1(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B733a76:{NFSU2_TR(0x733a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B733a79:{NFSU2_TR(0x733a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B733a7c:{NFSU2_TR(0x733a7c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B733a7f:{NFSU2_TR(0x733a7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733a80:{NFSU2_TR(0x733a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B733a83:{NFSU2_TR(0x733a83);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L733a9c;}}
}
B733a85:L733a85:{c.instructions+=11;NFSU2_TR(0x733a85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B733a87:{NFSU2_TR(0x733a87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733a88:{NFSU2_TR(0x733a88);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+28,u32(r1(U+0)));
}
B733a8b:{NFSU2_TR(0x733a8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B733a8d:{NFSU2_TR(0x733a8d);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B733a8f:{NFSU2_TR(0x733a8f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B733a90:{NFSU2_TR(0x733a90);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B733a93:{NFSU2_TR(0x733a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733a96:{NFSU2_TR(0x733a96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B733a98:{NFSU2_TR(0x733a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733a9b:{NFSU2_TR(0x733a9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733a9c:L733a9c:{c.instructions+=2;NFSU2_TR(0x733a9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733a9d:{NFSU2_TR(0x733a9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B733a9e:L733a9e:{c.instructions+=9;NFSU2_TR(0x733a9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733a9f:{NFSU2_TR(0x733a9f);
__builtin_memmove((R+20),(R+16),4);
}
B733aa1:{NFSU2_TR(0x733aa1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733aa2:{NFSU2_TR(0x733aa2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733aa3:{NFSU2_TR(0x733aa3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733aa4:{NFSU2_TR(0x733aa4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B733aa6:{NFSU2_TR(0x733aa6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B733aa9:{NFSU2_TR(0x733aa9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733aaa:{NFSU2_TR(0x733aaa);
if(r1(R+518)){{goto L733b84;}}
}
B733ab0:L733ab0:{c.instructions+=2;NFSU2_TR(0x733ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733ab3:{NFSU2_TR(0x733ab3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B733ab5:L733ab5:{c.instructions+=13;NFSU2_TR(0x733ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733ab8:{NFSU2_TR(0x733ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B733abb:{NFSU2_TR(0x733abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733abe:{NFSU2_TR(0x733abe);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B733ac4:{NFSU2_TR(0x733ac4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B733ac7:{NFSU2_TR(0x733ac7);
u8 U[13];
w4(U+0,u32(u32(u32(0x819308ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+28,u32(r1(U+12)));
}
B733acf:{NFSU2_TR(0x733acf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B733ad2:{NFSU2_TR(0x733ad2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B733ad5:{NFSU2_TR(0x733ad5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x81950cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B733adb:{NFSU2_TR(0x733adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x819508ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B733ae1:{NFSU2_TR(0x733ae1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733ae2:{NFSU2_TR(0x733ae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733ae5:{NFSU2_TR(0x733ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733aeaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733a6bu);}goto L733a6b;}
}
B733aea:L733aea:{c.instructions+=4;NFSU2_TR(0x733aea);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B733aed:{NFSU2_TR(0x733aed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B733aee:{NFSU2_TR(0x733aee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B733aef:{NFSU2_TR(0x733aef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L733af9;}}
}
B733af1:L733af1:{c.instructions+=2;NFSU2_TR(0x733af1);
{u32 ea_=u32(r4(R+24)+u32(8492304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733af7:{NFSU2_TR(0x733af7);
{goto L733b70;}
}
B733af9:L733af9:{c.instructions+=5;NFSU2_TR(0x733af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733afc:{NFSU2_TR(0x733afc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B733afe:{NFSU2_TR(0x733afe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B733aff:{NFSU2_TR(0x733aff);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B733b01:{NFSU2_TR(0x733b01);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L733b38;}}
}
B733b03:L733b03:{c.instructions+=3;NFSU2_TR(0x733b03);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733b05:{NFSU2_TR(0x733b05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B733b06:{NFSU2_TR(0x733b06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733b0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733a33u);}goto L733a33;}
}
B733b0b:L733b0b:{c.instructions+=6;NFSU2_TR(0x733b0b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
}
B733b0e:{NFSU2_TR(0x733b0e);
__builtin_memmove((R+4),(R+0),4);
}
B733b10:{NFSU2_TR(0x733b10);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B733b14:{NFSU2_TR(0x733b14);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B733b16:{NFSU2_TR(0x733b16);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B733b19:{NFSU2_TR(0x733b19);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L733b24;}}
}
B733b1b:L733b1b:{c.instructions+=5;NFSU2_TR(0x733b1b);
u8 U[4];
w4(U+0,u32(0x6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733b1d:{NFSU2_TR(0x733b1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B733b1e:{NFSU2_TR(0x733b1e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B733b20:{NFSU2_TR(0x733b20);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B733b21:{NFSU2_TR(0x733b21);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x733b21);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x733b21);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B733b24:L733b24:{c.instructions+=2;NFSU2_TR(0x733b24);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B733b26:{NFSU2_TR(0x733b26);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L733b79;}}
}
B733b28:L733b28:{c.instructions+=6;NFSU2_TR(0x733b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B733b2b:{NFSU2_TR(0x733b2b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B733b2d:{NFSU2_TR(0x733b2d);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733b30:{NFSU2_TR(0x733b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B733b33:{NFSU2_TR(0x733b33);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B733b34:{NFSU2_TR(0x733b34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733b28u);}goto L733b28;}}
}
B733b36:L733b36:{c.instructions+=1;NFSU2_TR(0x733b36);
{goto L733b79;}
}
B733b38:L733b38:{c.instructions+=5;NFSU2_TR(0x733b38);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733b3a:{NFSU2_TR(0x733b3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733b3b:{NFSU2_TR(0x733b3b);
__builtin_memmove((R+4),(R+24),4);
}
B733b3d:{NFSU2_TR(0x733b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733b40:{NFSU2_TR(0x733b40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733b45ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733a33u);}goto L733a33;}
}
B733b45:L733b45:{c.instructions+=2;NFSU2_TR(0x733b45);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B733b47:{NFSU2_TR(0x733b47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L733b58;}}
}
B733b49:L733b49:{c.instructions+=3;NFSU2_TR(0x733b49);
__builtin_memmove((R+4),(R+24),4);
}
B733b4b:{NFSU2_TR(0x733b4b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B733b4c:{NFSU2_TR(0x733b4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733b51ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733a33u);}goto L733a33;}
}
B733b51:L733b51:{c.instructions+=2;NFSU2_TR(0x733b51);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B733b53:{NFSU2_TR(0x733b53);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733b49u);}goto L733b49;}}
}
B733b55:L733b55:{c.instructions+=1;NFSU2_TR(0x733b55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733b58:L733b58:{c.instructions+=2;NFSU2_TR(0x733b58);
__builtin_memmove((R+4),(R+24),4);
}
B733b5a:{NFSU2_TR(0x733b5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733b5full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733a33u);}goto L733a33;}
}
B733b5f:L733b5f:{c.instructions+=2;NFSU2_TR(0x733b5f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B733b61:{NFSU2_TR(0x733b61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L733b68;}}
}
B733b63:L733b63:{c.instructions+=2;NFSU2_TR(0x733b63);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B733b66:{NFSU2_TR(0x733b66);
{goto L733b70;}
}
B733b68:L733b68:{c.instructions+=3;NFSU2_TR(0x733b68);
w4(R+28,u32(0-u32(r4(R+28))));
}
B733b6a:{NFSU2_TR(0x733b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733b6d:{NFSU2_TR(0x733b6d);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B733b70:L733b70:{c.instructions+=3;NFSU2_TR(0x733b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733b73:{NFSU2_TR(0x733b73);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733b76:{NFSU2_TR(0x733b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B733b79:L733b79:{c.instructions+=2;NFSU2_TR(0x733b79);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x6cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B733b7c:{NFSU2_TR(0x733b7c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733ab5u);}goto L733ab5;}}
}
B733b82:L733b82:{c.instructions+=1;NFSU2_TR(0x733b82);
{goto L733bc3;}
}
B733b84:L733b84:{c.instructions+=2;NFSU2_TR(0x733b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B733b87:{NFSU2_TR(0x733b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B733b8a:L733b8a:{c.instructions+=4;NFSU2_TR(0x733b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733b8d:{NFSU2_TR(0x733b8d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B733b90:{NFSU2_TR(0x733b90);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B733b93:{NFSU2_TR(0x733b93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L733b9d;}}
}
B733b95:L733b95:{c.instructions+=2;NFSU2_TR(0x733b95);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733b9b:{NFSU2_TR(0x733b9b);
{goto L733ba8;}
}
B733b9d:L733b9d:{c.instructions+=2;NFSU2_TR(0x733b9d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B733ba0:{NFSU2_TR(0x733ba0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L733bac;}}
}
B733ba2:L733ba2:{c.instructions+=1;NFSU2_TR(0x733ba2);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733ba8:L733ba8:{c.instructions+=2;NFSU2_TR(0x733ba8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733baa:{NFSU2_TR(0x733baa);
{goto L733bb0;}
}
B733bac:L733bac:{c.instructions+=2;NFSU2_TR(0x733bac);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B733bae:{NFSU2_TR(0x733bae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733bb0:L733bb0:{c.instructions+=3;NFSU2_TR(0x733bb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733bb1:{NFSU2_TR(0x733bb1);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733bb4:{NFSU2_TR(0x733bb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733bb9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733a6bu);}goto L733a6b;}
}
B733bb9:L733bb9:{c.instructions+=5;NFSU2_TR(0x733bb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B733bbc:{NFSU2_TR(0x733bbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B733bbd:{NFSU2_TR(0x733bbd);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x6cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B733bc0:{NFSU2_TR(0x733bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B733bc1:{NFSU2_TR(0x733bc1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733b8au);}goto L733b8a;}}
}
B733bc3:L733bc3:{c.instructions+=5;NFSU2_TR(0x733bc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733bc4:{NFSU2_TR(0x733bc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733bc5:{NFSU2_TR(0x733bc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B733bc6:{NFSU2_TR(0x733bc6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B733bc7:{NFSU2_TR(0x733bc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B733bc8:L733bc8:{c.instructions+=5;NFSU2_TR(0x733bc8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733bc9:{NFSU2_TR(0x733bc9);
__builtin_memmove((R+20),(R+16),4);
}
B733bcb:{NFSU2_TR(0x733bcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B733bce:{NFSU2_TR(0x733bce);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733bd0:{NFSU2_TR(0x733bd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B733bd1:L733bd1:{c.instructions+=4;NFSU2_TR(0x733bd1);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733bd4:{NFSU2_TR(0x733bd4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B733bd5:{NFSU2_TR(0x733bd5);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733bd9:{NFSU2_TR(0x733bd9);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733bd1u);}goto L733bd1;}}
}
B733bdb:L733bdb:{c.instructions+=11;NFSU2_TR(0x733bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733bde:{NFSU2_TR(0x733bde);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B733be0:{NFSU2_TR(0x733be0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733be1:{NFSU2_TR(0x733be1);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733be4:{NFSU2_TR(0x733be4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733be5:{NFSU2_TR(0x733be5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733be8:{NFSU2_TR(0x733be8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+4),(U+0),4);
}
B733beb:{NFSU2_TR(0x733beb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B733bed:{NFSU2_TR(0x733bed);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B733bef:{NFSU2_TR(0x733bef);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B733bf1:{NFSU2_TR(0x733bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733bf4:L733bf4:{c.instructions+=6;NFSU2_TR(0x733bf4);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733bf7:{NFSU2_TR(0x733bf7);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733bf9:{NFSU2_TR(0x733bf9);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733bfc:{NFSU2_TR(0x733bfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B733bfd:{NFSU2_TR(0x733bfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B733c00:{NFSU2_TR(0x733c00);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B733c02:L733c02:{c.instructions+=12;NFSU2_TR(0x733c02);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B733c06:{NFSU2_TR(0x733c06);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c08:{NFSU2_TR(0x733c08);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B733c09:{NFSU2_TR(0x733c09);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733c0b:{NFSU2_TR(0x733c0b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B733c0d:{NFSU2_TR(0x733c0d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B733c0f:{NFSU2_TR(0x733c0f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733c11:{NFSU2_TR(0x733c11);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733c13:{NFSU2_TR(0x733c13);
{u32 ea_=u32(r4(R+0)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733c16:{NFSU2_TR(0x733c16);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B733c19:{NFSU2_TR(0x733c19);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B733c1b:{NFSU2_TR(0x733c1b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733c02u);}goto L733c02;}}
}
B733c1d:L733c1d:{c.instructions+=5;NFSU2_TR(0x733c1d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B733c1f:{NFSU2_TR(0x733c1f);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733c22:{NFSU2_TR(0x733c22);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B733c24:{NFSU2_TR(0x733c24);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4294967196u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733c28:{NFSU2_TR(0x733c28);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L733c40;}}
}
B733c2a:L733c2a:{c.instructions+=1;NFSU2_TR(0x733c2a);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B733c2e:L733c2e:{c.instructions+=8;NFSU2_TR(0x733c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733c31:{NFSU2_TR(0x733c31);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c34:{NFSU2_TR(0x733c34);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B733c35:{NFSU2_TR(0x733c35);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733c37:{NFSU2_TR(0x733c37);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B733c3a:{NFSU2_TR(0x733c3a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B733c3c:{NFSU2_TR(0x733c3c);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B733c3e:{NFSU2_TR(0x733c3e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733c2eu);}goto L733c2e;}}
}
B733c40:L733c40:{c.instructions+=6;NFSU2_TR(0x733c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733c43:{NFSU2_TR(0x733c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B733c46:{NFSU2_TR(0x733c46);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B733c47:{NFSU2_TR(0x733c47);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294967196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733c4b:{NFSU2_TR(0x733c4b);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B733c4e:{NFSU2_TR(0x733c4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733bf4u);}goto L733bf4;}}
}
B733c50:L733c50:{c.instructions+=4;NFSU2_TR(0x733c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733c51:{NFSU2_TR(0x733c51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B733c52:{NFSU2_TR(0x733c52);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B733c53:{NFSU2_TR(0x733c53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B733c54:L733c54:{c.instructions+=10;NFSU2_TR(0x733c54);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733c55:{NFSU2_TR(0x733c55);
__builtin_memmove((R+20),(R+16),4);
}
B733c57:{NFSU2_TR(0x733c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B733c5a:{NFSU2_TR(0x733c5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733c5b:{NFSU2_TR(0x733c5b);
u8 U[12];
w4(U+0,u32(u32(u32(0x684ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B733c62:{NFSU2_TR(0x733c62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733c63:{NFSU2_TR(0x733c63);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B733c66:{NFSU2_TR(0x733c66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B733c67:{NFSU2_TR(0x733c67);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x114ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733c6d:{NFSU2_TR(0x733c6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x733c72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x733bc8u);}goto L733bc8;}
}
B733c72:L733c72:{c.instructions+=4;NFSU2_TR(0x733c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B733c75:{NFSU2_TR(0x733c75);
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
B733c77:{NFSU2_TR(0x733c77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B733c78:{NFSU2_TR(0x733c78);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x734328u,734);}
}
B733c7e:L733c7e:{c.instructions+=254;NFSU2_TR(0x733c7e);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c81:{NFSU2_TR(0x733c81);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c84:{NFSU2_TR(0x733c84);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c87:{NFSU2_TR(0x733c87);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c8a:{NFSU2_TR(0x733c8a);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c8d:{NFSU2_TR(0x733c8d);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c90:{NFSU2_TR(0x733c90);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733c92:{NFSU2_TR(0x733c92);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733c98:{NFSU2_TR(0x733c98);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c9b:{NFSU2_TR(0x733c9b);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ca1:{NFSU2_TR(0x733ca1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ca3:{NFSU2_TR(0x733ca3);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733ca6:{NFSU2_TR(0x733ca6);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733cac:{NFSU2_TR(0x733cac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733cae:{NFSU2_TR(0x733cae);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B733cb0:{NFSU2_TR(0x733cb0);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733cb6:{NFSU2_TR(0x733cb6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733cb8:{NFSU2_TR(0x733cb8);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733cbb:{NFSU2_TR(0x733cbb);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733cc1:{NFSU2_TR(0x733cc1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733cc3:{NFSU2_TR(0x733cc3);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733cc6:{NFSU2_TR(0x733cc6);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ccc:{NFSU2_TR(0x733ccc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733cce:{NFSU2_TR(0x733cce);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B733cd0:{NFSU2_TR(0x733cd0);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733cd6:{NFSU2_TR(0x733cd6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733cd8:{NFSU2_TR(0x733cd8);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B733cda:{NFSU2_TR(0x733cda);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ce0:{NFSU2_TR(0x733ce0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ce2:{NFSU2_TR(0x733ce2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B733ce4:{NFSU2_TR(0x733ce4);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733cea:{NFSU2_TR(0x733cea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733cec:{NFSU2_TR(0x733cec);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733cef:{NFSU2_TR(0x733cef);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733cf5:{NFSU2_TR(0x733cf5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733cf7:{NFSU2_TR(0x733cf7);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733cf9:{NFSU2_TR(0x733cf9);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733cff:{NFSU2_TR(0x733cff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d01:{NFSU2_TR(0x733d01);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733d04:{NFSU2_TR(0x733d04);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d0a:{NFSU2_TR(0x733d0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d0c:{NFSU2_TR(0x733d0c);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733d0e:{NFSU2_TR(0x733d0e);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733d11:{NFSU2_TR(0x733d11);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733d17:{NFSU2_TR(0x733d17);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733d19:{NFSU2_TR(0x733d19);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B733d1b:{NFSU2_TR(0x733d1b);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d21:{NFSU2_TR(0x733d21);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733d24:{NFSU2_TR(0x733d24);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d2a:{NFSU2_TR(0x733d2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d2c:{NFSU2_TR(0x733d2c);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733d2f:{NFSU2_TR(0x733d2f);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d35:{NFSU2_TR(0x733d35);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d37:{NFSU2_TR(0x733d37);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B733d39:{NFSU2_TR(0x733d39);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d3f:{NFSU2_TR(0x733d3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d41:{NFSU2_TR(0x733d41);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B733d43:{NFSU2_TR(0x733d43);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d49:{NFSU2_TR(0x733d49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d4b:{NFSU2_TR(0x733d4b);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733d4e:{NFSU2_TR(0x733d4e);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d54:{NFSU2_TR(0x733d54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d56:{NFSU2_TR(0x733d56);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B733d58:{NFSU2_TR(0x733d58);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d5e:{NFSU2_TR(0x733d5e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d60:{NFSU2_TR(0x733d60);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733d62:{NFSU2_TR(0x733d62);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d68:{NFSU2_TR(0x733d68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d6a:{NFSU2_TR(0x733d6a);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733d6d:{NFSU2_TR(0x733d6d);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d73:{NFSU2_TR(0x733d73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d75:{NFSU2_TR(0x733d75);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733d78:{NFSU2_TR(0x733d78);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d7e:{NFSU2_TR(0x733d7e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d80:{NFSU2_TR(0x733d80);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B733d82:{NFSU2_TR(0x733d82);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d88:{NFSU2_TR(0x733d88);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d8a:{NFSU2_TR(0x733d8a);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733d8d:{NFSU2_TR(0x733d8d);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d93:{NFSU2_TR(0x733d93);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d95:{NFSU2_TR(0x733d95);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733d98:{NFSU2_TR(0x733d98);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733d9b:{NFSU2_TR(0x733d9b);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733da1:{NFSU2_TR(0x733da1);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733da4:{NFSU2_TR(0x733da4);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B733da6:{NFSU2_TR(0x733da6);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733dac:{NFSU2_TR(0x733dac);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B733dae:{NFSU2_TR(0x733dae);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733db4:{NFSU2_TR(0x733db4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733db6:{NFSU2_TR(0x733db6);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733db9:{NFSU2_TR(0x733db9);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733dbf:{NFSU2_TR(0x733dbf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733dc1:{NFSU2_TR(0x733dc1);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B733dc3:{NFSU2_TR(0x733dc3);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733dc9:{NFSU2_TR(0x733dc9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733dcb:{NFSU2_TR(0x733dcb);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733dcd:{NFSU2_TR(0x733dcd);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733dd3:{NFSU2_TR(0x733dd3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733dd5:{NFSU2_TR(0x733dd5);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733dd8:{NFSU2_TR(0x733dd8);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733dde:{NFSU2_TR(0x733dde);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733de0:{NFSU2_TR(0x733de0);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B733de2:{NFSU2_TR(0x733de2);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733de8:{NFSU2_TR(0x733de8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733dea:{NFSU2_TR(0x733dea);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733ded:{NFSU2_TR(0x733ded);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733df3:{NFSU2_TR(0x733df3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733df5:{NFSU2_TR(0x733df5);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733df8:{NFSU2_TR(0x733df8);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733dfe:{NFSU2_TR(0x733dfe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e00:{NFSU2_TR(0x733e00);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e03:{NFSU2_TR(0x733e03);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e09:{NFSU2_TR(0x733e09);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e0b:{NFSU2_TR(0x733e0b);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B733e0d:{NFSU2_TR(0x733e0d);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e13:{NFSU2_TR(0x733e13);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e15:{NFSU2_TR(0x733e15);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e18:{NFSU2_TR(0x733e18);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e1e:{NFSU2_TR(0x733e1e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e20:{NFSU2_TR(0x733e20);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733e23:{NFSU2_TR(0x733e23);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733e26:{NFSU2_TR(0x733e26);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733e2c:{NFSU2_TR(0x733e2c);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733e2f:{NFSU2_TR(0x733e2f);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B733e31:{NFSU2_TR(0x733e31);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e37:{NFSU2_TR(0x733e37);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733e39:{NFSU2_TR(0x733e39);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e3f:{NFSU2_TR(0x733e3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e41:{NFSU2_TR(0x733e41);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e44:{NFSU2_TR(0x733e44);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e4a:{NFSU2_TR(0x733e4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e4c:{NFSU2_TR(0x733e4c);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B733e4e:{NFSU2_TR(0x733e4e);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e54:{NFSU2_TR(0x733e54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e56:{NFSU2_TR(0x733e56);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e59:{NFSU2_TR(0x733e59);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e5f:{NFSU2_TR(0x733e5f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e61:{NFSU2_TR(0x733e61);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e64:{NFSU2_TR(0x733e64);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e6a:{NFSU2_TR(0x733e6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e6c:{NFSU2_TR(0x733e6c);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B733e6e:{NFSU2_TR(0x733e6e);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e74:{NFSU2_TR(0x733e74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e76:{NFSU2_TR(0x733e76);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e79:{NFSU2_TR(0x733e79);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e7f:{NFSU2_TR(0x733e7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e81:{NFSU2_TR(0x733e81);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e84:{NFSU2_TR(0x733e84);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e8a:{NFSU2_TR(0x733e8a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e8c:{NFSU2_TR(0x733e8c);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e8f:{NFSU2_TR(0x733e8f);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e95:{NFSU2_TR(0x733e95);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e97:{NFSU2_TR(0x733e97);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B733e99:{NFSU2_TR(0x733e99);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e9f:{NFSU2_TR(0x733e9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ea1:{NFSU2_TR(0x733ea1);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B733ea3:{NFSU2_TR(0x733ea3);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ea9:{NFSU2_TR(0x733ea9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733eab:{NFSU2_TR(0x733eab);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733eae:{NFSU2_TR(0x733eae);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733eb1:{NFSU2_TR(0x733eb1);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733eb7:{NFSU2_TR(0x733eb7);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733eba:{NFSU2_TR(0x733eba);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733ebc:{NFSU2_TR(0x733ebc);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ec2:{NFSU2_TR(0x733ec2);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733ec5:{NFSU2_TR(0x733ec5);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ecb:{NFSU2_TR(0x733ecb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ecd:{NFSU2_TR(0x733ecd);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733ed0:{NFSU2_TR(0x733ed0);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ed6:{NFSU2_TR(0x733ed6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ed8:{NFSU2_TR(0x733ed8);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B733eda:{NFSU2_TR(0x733eda);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ee0:{NFSU2_TR(0x733ee0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ee2:{NFSU2_TR(0x733ee2);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733ee5:{NFSU2_TR(0x733ee5);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733eeb:{NFSU2_TR(0x733eeb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733eed:{NFSU2_TR(0x733eed);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733ef0:{NFSU2_TR(0x733ef0);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ef6:{NFSU2_TR(0x733ef6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ef8:{NFSU2_TR(0x733ef8);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B733efa:{NFSU2_TR(0x733efa);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f00:{NFSU2_TR(0x733f00);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f02:{NFSU2_TR(0x733f02);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B733f04:{NFSU2_TR(0x733f04);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f0a:{NFSU2_TR(0x733f0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f0c:{NFSU2_TR(0x733f0c);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733f0f:{NFSU2_TR(0x733f0f);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f15:{NFSU2_TR(0x733f15);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f17:{NFSU2_TR(0x733f17);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733f1a:{NFSU2_TR(0x733f1a);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f20:{NFSU2_TR(0x733f20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f22:{NFSU2_TR(0x733f22);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B733f24:{NFSU2_TR(0x733f24);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f2a:{NFSU2_TR(0x733f2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f2c:{NFSU2_TR(0x733f2c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733f2e:{NFSU2_TR(0x733f2e);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f34:{NFSU2_TR(0x733f34);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f36:{NFSU2_TR(0x733f36);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733f39:{NFSU2_TR(0x733f39);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733f3c:{NFSU2_TR(0x733f3c);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733f42:{NFSU2_TR(0x733f42);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733f45:{NFSU2_TR(0x733f45);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B733f47:{NFSU2_TR(0x733f47);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f4d:{NFSU2_TR(0x733f4d);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733f50:{NFSU2_TR(0x733f50);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f56:{NFSU2_TR(0x733f56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f58:{NFSU2_TR(0x733f58);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733f5b:{NFSU2_TR(0x733f5b);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f61:{NFSU2_TR(0x733f61);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f63:{NFSU2_TR(0x733f63);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B733f65:{NFSU2_TR(0x733f65);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f6b:{NFSU2_TR(0x733f6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f6d:{NFSU2_TR(0x733f6d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B733f6f:{NFSU2_TR(0x733f6f);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f75:{NFSU2_TR(0x733f75);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f77:{NFSU2_TR(0x733f77);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733f7a:{NFSU2_TR(0x733f7a);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f80:{NFSU2_TR(0x733f80);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f82:{NFSU2_TR(0x733f82);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B733f84:{NFSU2_TR(0x733f84);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f8a:{NFSU2_TR(0x733f8a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f8c:{NFSU2_TR(0x733f8c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733f8e:{NFSU2_TR(0x733f8e);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f94:{NFSU2_TR(0x733f94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f96:{NFSU2_TR(0x733f96);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733f99:{NFSU2_TR(0x733f99);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f9f:{NFSU2_TR(0x733f9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733fa1:{NFSU2_TR(0x733fa1);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733fa4:{NFSU2_TR(0x733fa4);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733faa:{NFSU2_TR(0x733faa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733fac:{NFSU2_TR(0x733fac);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B733fae:{NFSU2_TR(0x733fae);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733fb4:{NFSU2_TR(0x733fb4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733fb6:{NFSU2_TR(0x733fb6);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733fb9:{NFSU2_TR(0x733fb9);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733fbf:{NFSU2_TR(0x733fbf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733fc1:{NFSU2_TR(0x733fc1);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733fc4:{NFSU2_TR(0x733fc4);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733fc7:{NFSU2_TR(0x733fc7);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733fcd:{NFSU2_TR(0x733fcd);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733fd0:{NFSU2_TR(0x733fd0);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B733fd2:{NFSU2_TR(0x733fd2);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733fd8:{NFSU2_TR(0x733fd8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B733fda:{NFSU2_TR(0x733fda);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733fe0:{NFSU2_TR(0x733fe0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733fe2:{NFSU2_TR(0x733fe2);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733fe5:{NFSU2_TR(0x733fe5);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733feb:{NFSU2_TR(0x733feb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733fed:{NFSU2_TR(0x733fed);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B733fef:{NFSU2_TR(0x733fef);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ff5:{NFSU2_TR(0x733ff5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ff7:{NFSU2_TR(0x733ff7);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733ff9:{NFSU2_TR(0x733ff9);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733fff:{NFSU2_TR(0x733fff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
TAIL_STATIC(0x734001u,734);
}
XIT:NFSU2_TR_EXIT(0x733,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
