#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_467(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_477(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x478,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x478,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_478(u8* __restrict R,Cpu& c);
u32 page_478(Cpu& c){return body_478(c.regs.data(),c);}
__attribute__((noinline)) u32 body_478(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x478001:goto L478001;
case 0x478004:c.instructions+=3;goto B478004;
case 0x478007:c.instructions+=2;goto B478007;
case 0x47800a:c.instructions+=1;goto B47800a;
case 0x47800c:goto L47800c;
case 0x47800f:c.instructions+=2;goto B47800f;
case 0x478011:c.instructions+=1;goto B478011;
case 0x478013:goto L478013;
case 0x478018:goto L478018;
case 0x47801a:c.instructions+=2;goto B47801a;
case 0x47801c:c.instructions+=1;goto B47801c;
case 0x478021:goto L478021;
case 0x478023:c.instructions+=3;goto B478023;
case 0x478025:c.instructions+=2;goto B478025;
case 0x478026:c.instructions+=1;goto B478026;
case 0x478028:goto L478028;
case 0x47802a:c.instructions+=1;goto B47802a;
case 0x47802f:goto L47802f;
case 0x478031:c.instructions+=2;goto B478031;
case 0x478033:c.instructions+=1;goto B478033;
case 0x478035:goto L478035;
case 0x478036:c.instructions+=1;goto B478036;
case 0x478037:goto L478037;
case 0x478039:c.instructions+=1;goto B478039;
case 0x47803e:goto L47803e;
case 0x478040:goto L478040;
case 0x478044:goto L478044;
case 0x47804a:c.instructions+=2;goto B47804a;
case 0x47804b:c.instructions+=1;goto B47804b;
case 0x478050:goto L478050;
case 0x478053:c.instructions+=2;goto B478053;
case 0x478055:c.instructions+=1;goto B478055;
case 0x478057:goto L478057;
case 0x47805d:c.instructions+=1;goto B47805d;
case 0x47805f:goto L47805f;
case 0x478061:c.instructions+=4;goto B478061;
case 0x478065:c.instructions+=3;goto B478065;
case 0x478068:c.instructions+=2;goto B478068;
case 0x47806a:c.instructions+=1;goto B47806a;
case 0x47806c:goto L47806c;
case 0x478070:c.instructions+=3;goto B478070;
case 0x478073:c.instructions+=2;goto B478073;
case 0x478075:c.instructions+=1;goto B478075;
case 0x478079:goto L478079;
case 0x47807f:c.instructions+=2;goto B47807f;
case 0x478080:c.instructions+=1;goto B478080;
case 0x478085:goto L478085;
case 0x478088:c.instructions+=2;goto B478088;
case 0x47808a:c.instructions+=1;goto B47808a;
case 0x47808c:goto L47808c;
case 0x478092:c.instructions+=1;goto B478092;
case 0x478094:goto L478094;
case 0x478096:goto L478096;
case 0x478099:c.instructions+=10;goto B478099;
case 0x47809c:c.instructions+=9;goto B47809c;
case 0x47809f:c.instructions+=8;goto B47809f;
case 0x4780a2:c.instructions+=7;goto B4780a2;
case 0x4780a5:c.instructions+=6;goto B4780a5;
case 0x4780a8:c.instructions+=5;goto B4780a8;
case 0x4780aa:c.instructions+=4;goto B4780aa;
case 0x4780ab:c.instructions+=3;goto B4780ab;
case 0x4780af:c.instructions+=2;goto B4780af;
case 0x4780b0:c.instructions+=1;goto B4780b0;
case 0x4780b3:goto L4780b3;
case 0x4780b6:c.instructions+=5;goto B4780b6;
case 0x4780b9:c.instructions+=4;goto B4780b9;
case 0x4780bc:c.instructions+=3;goto B4780bc;
case 0x4780bd:c.instructions+=2;goto B4780bd;
case 0x4780c0:c.instructions+=1;goto B4780c0;
case 0x4780c2:goto L4780c2;
case 0x4780c4:goto L4780c4;
case 0x4780c7:c.instructions+=11;goto B4780c7;
case 0x4780ca:c.instructions+=10;goto B4780ca;
case 0x4780cd:c.instructions+=9;goto B4780cd;
case 0x4780d0:c.instructions+=8;goto B4780d0;
case 0x4780d3:c.instructions+=7;goto B4780d3;
case 0x4780d6:c.instructions+=6;goto B4780d6;
case 0x4780d8:c.instructions+=5;goto B4780d8;
case 0x4780d9:c.instructions+=4;goto B4780d9;
case 0x4780da:c.instructions+=3;goto B4780da;
case 0x4780db:c.instructions+=2;goto B4780db;
case 0x4780dc:c.instructions+=1;goto B4780dc;
case 0x4780df:goto L4780df;
case 0x4780e2:c.instructions+=6;goto B4780e2;
case 0x4780e5:c.instructions+=5;goto B4780e5;
case 0x4780e6:c.instructions+=4;goto B4780e6;
case 0x4780e9:c.instructions+=3;goto B4780e9;
case 0x4780eb:c.instructions+=2;goto B4780eb;
case 0x4780ee:c.instructions+=1;goto B4780ee;
case 0x4780f0:goto L4780f0;
case 0x4780f2:c.instructions+=3;goto B4780f2;
case 0x4780f5:c.instructions+=2;goto B4780f5;
case 0x4780f8:c.instructions+=1;goto B4780f8;
case 0x4780fa:goto L4780fa;
case 0x4780fd:c.instructions+=3;goto B4780fd;
case 0x478100:c.instructions+=2;goto B478100;
case 0x478102:c.instructions+=1;goto B478102;
case 0x478105:goto L478105;
case 0x478107:goto L478107;
case 0x47810a:c.instructions+=5;goto B47810a;
case 0x47810c:c.instructions+=4;goto B47810c;
case 0x47810d:c.instructions+=3;goto B47810d;
case 0x47810f:c.instructions+=2;goto B47810f;
case 0x478113:c.instructions+=1;goto B478113;
case 0x478119:goto L478119;
case 0x47811a:c.instructions+=5;goto B47811a;
case 0x47811b:c.instructions+=4;goto B47811b;
case 0x47811c:c.instructions+=3;goto B47811c;
case 0x47811d:c.instructions+=2;goto B47811d;
case 0x47811e:c.instructions+=1;goto B47811e;
case 0x478120:goto L478120;
case 0x478123:c.instructions+=8;goto B478123;
case 0x478124:c.instructions+=7;goto B478124;
case 0x478126:c.instructions+=6;goto B478126;
case 0x478129:c.instructions+=5;goto B478129;
case 0x47812a:c.instructions+=4;goto B47812a;
case 0x47812c:c.instructions+=3;goto B47812c;
case 0x47812e:c.instructions+=2;goto B47812e;
case 0x478132:c.instructions+=1;goto B478132;
case 0x478138:goto L478138;
case 0x478139:c.instructions+=2;goto B478139;
case 0x47813a:c.instructions+=1;goto B47813a;
case 0x47813c:goto L47813c;
case 0x478140:goto L478140;
case 0x478143:c.instructions+=8;goto B478143;
case 0x478146:c.instructions+=7;goto B478146;
case 0x478149:c.instructions+=6;goto B478149;
case 0x47814c:c.instructions+=5;goto B47814c;
case 0x47814e:c.instructions+=4;goto B47814e;
case 0x478150:c.instructions+=3;goto B478150;
case 0x478152:c.instructions+=2;goto B478152;
case 0x478156:c.instructions+=1;goto B478156;
case 0x478158:goto L478158;
case 0x47815b:c.instructions+=2;goto B47815b;
case 0x47815f:c.instructions+=1;goto B47815f;
case 0x478160:goto L478160;
case 0x478162:c.instructions+=6;goto B478162;
case 0x478164:c.instructions+=5;goto B478164;
case 0x478167:c.instructions+=4;goto B478167;
case 0x47816c:c.instructions+=3;goto B47816c;
case 0x47816f:c.instructions+=2;goto B47816f;
case 0x478171:c.instructions+=1;goto B478171;
case 0x478173:goto L478173;
case 0x478179:c.instructions+=2;goto B478179;
case 0x47817f:c.instructions+=1;goto B47817f;
case 0x478181:goto L478181;
case 0x478182:c.instructions+=1;goto B478182;
case 0x478184:goto L478184;
case 0x478185:c.instructions+=1;goto B478185;
case 0x478187:goto L478187;
case 0x47818a:c.instructions+=1;goto B47818a;
case 0x47818e:goto L47818e;
case 0x478192:c.instructions+=1;goto B478192;
case 0x478194:goto L478194;
case 0x478198:c.instructions+=1;goto B478198;
case 0x47819c:goto L47819c;
case 0x47819f:c.instructions+=5;goto B47819f;
case 0x4781a0:c.instructions+=4;goto B4781a0;
case 0x4781a1:c.instructions+=3;goto B4781a1;
case 0x4781a6:c.instructions+=2;goto B4781a6;
case 0x4781a8:c.instructions+=1;goto B4781a8;
case 0x4781ad:goto L4781ad;
case 0x4781b0:c.instructions+=7;goto B4781b0;
case 0x4781b3:c.instructions+=6;goto B4781b3;
case 0x4781b6:c.instructions+=5;goto B4781b6;
case 0x4781b7:c.instructions+=4;goto B4781b7;
case 0x4781b8:c.instructions+=3;goto B4781b8;
case 0x4781bd:c.instructions+=2;goto B4781bd;
case 0x4781bf:c.instructions+=1;goto B4781bf;
case 0x4781c4:goto L4781c4;
case 0x4781c7:c.instructions+=19;goto B4781c7;
case 0x4781ca:c.instructions+=18;goto B4781ca;
case 0x4781cd:c.instructions+=17;goto B4781cd;
case 0x4781d0:c.instructions+=16;goto B4781d0;
case 0x4781d6:c.instructions+=15;goto B4781d6;
case 0x4781d9:c.instructions+=14;goto B4781d9;
case 0x4781dc:c.instructions+=13;goto B4781dc;
case 0x4781e0:c.instructions+=12;goto B4781e0;
case 0x4781e2:c.instructions+=11;goto B4781e2;
case 0x4781e4:c.instructions+=10;goto B4781e4;
case 0x4781ea:c.instructions+=9;goto B4781ea;
case 0x4781ed:c.instructions+=8;goto B4781ed;
case 0x4781f0:c.instructions+=7;goto B4781f0;
case 0x4781f3:c.instructions+=6;goto B4781f3;
case 0x4781f6:c.instructions+=5;goto B4781f6;
case 0x4781f8:c.instructions+=4;goto B4781f8;
case 0x4781fb:c.instructions+=3;goto B4781fb;
case 0x4781fe:c.instructions+=2;goto B4781fe;
case 0x478201:c.instructions+=1;goto B478201;
case 0x478203:goto L478203;
case 0x478206:c.instructions+=2;goto B478206;
case 0x478209:c.instructions+=1;goto B478209;
case 0x47820b:goto L47820b;
case 0x478212:goto L478212;
case 0x478214:c.instructions+=2;goto B478214;
case 0x478216:c.instructions+=1;goto B478216;
case 0x478218:goto L478218;
case 0x47821a:c.instructions+=1;goto B47821a;
case 0x47821c:goto L47821c;
case 0x47821e:goto L47821e;
case 0x478221:c.instructions+=4;goto B478221;
case 0x478222:c.instructions+=3;goto B478222;
case 0x478224:c.instructions+=2;goto B478224;
case 0x478228:c.instructions+=1;goto B478228;
case 0x47822e:goto L47822e;
case 0x47822f:c.instructions+=1;goto B47822f;
case 0x478230:goto L478230;
case 0x478231:c.instructions+=3;goto B478231;
case 0x478232:c.instructions+=2;goto B478232;
case 0x478235:c.instructions+=1;goto B478235;
case 0x478240:goto L478240;
case 0x478243:c.instructions+=19;goto B478243;
case 0x478244:c.instructions+=18;goto B478244;
case 0x478245:c.instructions+=17;goto B478245;
case 0x478246:c.instructions+=16;goto B478246;
case 0x478247:c.instructions+=15;goto B478247;
case 0x478249:c.instructions+=14;goto B478249;
case 0x47824d:c.instructions+=13;goto B47824d;
case 0x478250:c.instructions+=12;goto B478250;
case 0x478252:c.instructions+=11;goto B478252;
case 0x478255:c.instructions+=10;goto B478255;
case 0x478259:c.instructions+=9;goto B478259;
case 0x47825c:c.instructions+=8;goto B47825c;
case 0x47825d:c.instructions+=7;goto B47825d;
case 0x478262:c.instructions+=6;goto B478262;
case 0x478264:c.instructions+=5;goto B478264;
case 0x478266:c.instructions+=4;goto B478266;
case 0x47826a:c.instructions+=3;goto B47826a;
case 0x47826e:c.instructions+=2;goto B47826e;
case 0x478274:c.instructions+=1;goto B478274;
case 0x478279:goto L478279;
case 0x47827c:c.instructions+=1;goto B47827c;
case 0x478280:goto L478280;
case 0x478286:c.instructions+=1;goto B478286;
case 0x478288:goto L478288;
case 0x47828e:c.instructions+=1;goto B47828e;
case 0x478294:goto L478294;
case 0x478297:c.instructions+=6;goto B478297;
case 0x478299:c.instructions+=5;goto B478299;
case 0x47829c:c.instructions+=4;goto B47829c;
case 0x4782a2:c.instructions+=3;goto B4782a2;
case 0x4782a4:c.instructions+=2;goto B4782a4;
case 0x4782a8:c.instructions+=1;goto B4782a8;
case 0x4782ae:goto L4782ae;
case 0x4782b1:c.instructions+=6;goto B4782b1;
case 0x4782b4:c.instructions+=5;goto B4782b4;
case 0x4782b6:c.instructions+=4;goto B4782b6;
case 0x4782b9:c.instructions+=3;goto B4782b9;
case 0x4782bf:c.instructions+=2;goto B4782bf;
case 0x4782c1:c.instructions+=1;goto B4782c1;
case 0x4782c7:goto L4782c7;
case 0x4782c9:c.instructions+=3;goto B4782c9;
case 0x4782cc:c.instructions+=2;goto B4782cc;
case 0x4782cf:c.instructions+=1;goto B4782cf;
case 0x4782d1:goto L4782d1;
case 0x4782d4:c.instructions+=2;goto B4782d4;
case 0x4782d6:c.instructions+=1;goto B4782d6;
case 0x4782d8:goto L4782d8;
case 0x4782da:c.instructions+=1;goto B4782da;
case 0x4782df:goto L4782df;
case 0x4782e1:c.instructions+=1;goto B4782e1;
case 0x4782e3:goto L4782e3;
case 0x4782e5:c.instructions+=1;goto B4782e5;
case 0x4782ea:goto L4782ea;
case 0x4782ec:goto L4782ec;
case 0x4782ee:c.instructions+=1;goto B4782ee;
case 0x4782f0:goto L4782f0;
case 0x4782f3:c.instructions+=1;goto B4782f3;
case 0x4782f5:goto L4782f5;
case 0x4782f8:c.instructions+=1;goto B4782f8;
case 0x4782fa:goto L4782fa;
case 0x4782fd:c.instructions+=2;goto B4782fd;
case 0x4782ff:c.instructions+=1;goto B4782ff;
case 0x478301:goto L478301;
case 0x478303:goto L478303;
case 0x478306:c.instructions+=13;goto B478306;
case 0x47830a:c.instructions+=12;goto B47830a;
case 0x47830d:c.instructions+=11;goto B47830d;
case 0x478310:c.instructions+=10;goto B478310;
case 0x478312:c.instructions+=9;goto B478312;
case 0x478315:c.instructions+=8;goto B478315;
case 0x478319:c.instructions+=7;goto B478319;
case 0x47831b:c.instructions+=6;goto B47831b;
case 0x478321:c.instructions+=5;goto B478321;
case 0x478324:c.instructions+=4;goto B478324;
case 0x478327:c.instructions+=3;goto B478327;
case 0x47832a:c.instructions+=2;goto B47832a;
case 0x47832b:c.instructions+=1;goto B47832b;
case 0x47832e:goto L47832e;
case 0x478330:c.instructions+=1;goto B478330;
case 0x478332:goto L478332;
case 0x478335:c.instructions+=3;goto B478335;
case 0x478338:c.instructions+=2;goto B478338;
case 0x47833a:c.instructions+=1;goto B47833a;
case 0x47833c:goto L47833c;
case 0x47833e:c.instructions+=1;goto B47833e;
case 0x478343:goto L478343;
case 0x478345:c.instructions+=1;goto B478345;
case 0x478347:goto L478347;
case 0x478349:c.instructions+=1;goto B478349;
case 0x47834e:goto L47834e;
case 0x478350:goto L478350;
case 0x478352:c.instructions+=1;goto B478352;
case 0x478354:goto L478354;
case 0x478357:c.instructions+=1;goto B478357;
case 0x478359:goto L478359;
case 0x47835c:c.instructions+=1;goto B47835c;
case 0x47835e:goto L47835e;
case 0x478361:c.instructions+=3;goto B478361;
case 0x478364:c.instructions+=2;goto B478364;
case 0x478366:c.instructions+=1;goto B478366;
case 0x478368:goto L478368;
case 0x47836a:goto L47836a;
case 0x47836d:goto L47836d;
case 0x47836f:goto L47836f;
case 0x478372:c.instructions+=9;goto B478372;
case 0x478376:c.instructions+=8;goto B478376;
case 0x478379:c.instructions+=7;goto B478379;
case 0x47837c:c.instructions+=6;goto B47837c;
case 0x47837e:c.instructions+=5;goto B47837e;
case 0x478381:c.instructions+=4;goto B478381;
case 0x478384:c.instructions+=3;goto B478384;
case 0x478387:c.instructions+=2;goto B478387;
case 0x478389:c.instructions+=1;goto B478389;
case 0x47838b:goto L47838b;
case 0x47838e:c.instructions+=2;goto B47838e;
case 0x478390:c.instructions+=1;goto B478390;
case 0x478392:goto L478392;
case 0x478394:c.instructions+=1;goto B478394;
case 0x478399:goto L478399;
case 0x47839b:c.instructions+=1;goto B47839b;
case 0x47839d:goto L47839d;
case 0x47839f:c.instructions+=1;goto B47839f;
case 0x4783a4:goto L4783a4;
case 0x4783a6:goto L4783a6;
case 0x4783a8:c.instructions+=1;goto B4783a8;
case 0x4783aa:goto L4783aa;
case 0x4783ad:c.instructions+=1;goto B4783ad;
case 0x4783af:goto L4783af;
case 0x4783b2:c.instructions+=1;goto B4783b2;
case 0x4783b4:goto L4783b4;
case 0x4783b7:c.instructions+=2;goto B4783b7;
case 0x4783b9:c.instructions+=1;goto B4783b9;
case 0x4783bb:goto L4783bb;
case 0x4783bd:goto L4783bd;
case 0x4783c0:c.instructions+=16;goto B4783c0;
case 0x4783c2:c.instructions+=15;goto B4783c2;
case 0x4783c6:c.instructions+=14;goto B4783c6;
case 0x4783c7:c.instructions+=13;goto B4783c7;
case 0x4783ca:c.instructions+=12;goto B4783ca;
case 0x4783cd:c.instructions+=11;goto B4783cd;
case 0x4783cf:c.instructions+=10;goto B4783cf;
case 0x4783d2:c.instructions+=9;goto B4783d2;
case 0x4783d5:c.instructions+=8;goto B4783d5;
case 0x4783d9:c.instructions+=7;goto B4783d9;
case 0x4783dc:c.instructions+=6;goto B4783dc;
case 0x4783df:c.instructions+=5;goto B4783df;
case 0x4783e0:c.instructions+=4;goto B4783e0;
case 0x4783e1:c.instructions+=3;goto B4783e1;
case 0x4783e6:c.instructions+=2;goto B4783e6;
case 0x4783e8:c.instructions+=1;goto B4783e8;
case 0x4783ed:goto L4783ed;
case 0x4783f1:c.instructions+=1;goto B4783f1;
case 0x4783f4:goto L4783f4;
case 0x4783f8:c.instructions+=7;goto B4783f8;
case 0x4783fa:c.instructions+=6;goto B4783fa;
case 0x4783fd:c.instructions+=5;goto B4783fd;
case 0x4783ff:c.instructions+=4;goto B4783ff;
case 0x478403:c.instructions+=3;goto B478403;
case 0x478407:c.instructions+=2;goto B478407;
case 0x47840d:c.instructions+=1;goto B47840d;
case 0x478412:goto L478412;
case 0x478414:c.instructions+=3;goto B478414;
case 0x478417:c.instructions+=2;goto B478417;
case 0x47841a:c.instructions+=1;goto B47841a;
case 0x47841c:goto L47841c;
case 0x47841f:c.instructions+=3;goto B47841f;
case 0x478422:c.instructions+=2;goto B478422;
case 0x478424:c.instructions+=1;goto B478424;
case 0x478426:goto L478426;
case 0x478428:c.instructions+=1;goto B478428;
case 0x47842d:goto L47842d;
case 0x47842f:c.instructions+=1;goto B47842f;
case 0x478431:goto L478431;
case 0x478433:c.instructions+=1;goto B478433;
case 0x478438:goto L478438;
case 0x47843a:goto L47843a;
case 0x47843c:c.instructions+=1;goto B47843c;
case 0x47843e:goto L47843e;
case 0x478441:c.instructions+=1;goto B478441;
case 0x478443:goto L478443;
case 0x478446:c.instructions+=1;goto B478446;
case 0x478448:goto L478448;
case 0x47844b:c.instructions+=3;goto B47844b;
case 0x47844e:c.instructions+=2;goto B47844e;
case 0x478450:c.instructions+=1;goto B478450;
case 0x478452:goto L478452;
case 0x478454:c.instructions+=1;goto B478454;
case 0x478456:goto L478456;
case 0x478459:goto L478459;
case 0x47845d:c.instructions+=2;goto B47845d;
case 0x47845f:c.instructions+=1;goto B47845f;
case 0x478461:goto L478461;
case 0x478468:c.instructions+=2;goto B478468;
case 0x478470:c.instructions+=1;goto B478470;
case 0x478474:goto L478474;
case 0x478476:c.instructions+=1;goto B478476;
case 0x478478:goto L478478;
case 0x47847b:c.instructions+=3;goto B47847b;
case 0x47847e:c.instructions+=2;goto B47847e;
case 0x478480:c.instructions+=1;goto B478480;
case 0x478482:goto L478482;
case 0x478484:c.instructions+=1;goto B478484;
case 0x478489:goto L478489;
case 0x47848b:c.instructions+=1;goto B47848b;
case 0x47848d:goto L47848d;
case 0x47848f:c.instructions+=1;goto B47848f;
case 0x478494:goto L478494;
case 0x478496:goto L478496;
case 0x478498:c.instructions+=1;goto B478498;
case 0x47849a:goto L47849a;
case 0x47849d:c.instructions+=1;goto B47849d;
case 0x47849f:goto L47849f;
case 0x4784a2:c.instructions+=1;goto B4784a2;
case 0x4784a4:goto L4784a4;
case 0x4784a7:c.instructions+=3;goto B4784a7;
case 0x4784aa:c.instructions+=2;goto B4784aa;
case 0x4784ac:c.instructions+=1;goto B4784ac;
case 0x4784ae:goto L4784ae;
case 0x4784b0:goto L4784b0;
case 0x4784b3:goto L4784b3;
case 0x4784b5:goto L4784b5;
case 0x4784b9:c.instructions+=3;goto B4784b9;
case 0x4784bd:c.instructions+=2;goto B4784bd;
case 0x4784c0:c.instructions+=1;goto B4784c0;
case 0x4784c6:goto L4784c6;
case 0x4784c8:c.instructions+=1;goto B4784c8;
case 0x4784ca:goto L4784ca;
case 0x4784cd:c.instructions+=2;goto B4784cd;
case 0x4784cf:c.instructions+=1;goto B4784cf;
case 0x4784d1:goto L4784d1;
case 0x4784d3:c.instructions+=1;goto B4784d3;
case 0x4784d8:goto L4784d8;
case 0x4784da:c.instructions+=1;goto B4784da;
case 0x4784dc:goto L4784dc;
case 0x4784de:c.instructions+=1;goto B4784de;
case 0x4784e3:goto L4784e3;
case 0x4784e5:goto L4784e5;
case 0x4784e7:c.instructions+=1;goto B4784e7;
case 0x4784e9:goto L4784e9;
case 0x4784ec:c.instructions+=1;goto B4784ec;
case 0x4784ee:goto L4784ee;
case 0x4784f1:c.instructions+=1;goto B4784f1;
case 0x4784f3:goto L4784f3;
case 0x4784f6:c.instructions+=2;goto B4784f6;
case 0x4784f8:c.instructions+=1;goto B4784f8;
case 0x4784fa:goto L4784fa;
case 0x4784fc:goto L4784fc;
case 0x4784ff:c.instructions+=12;goto B4784ff;
case 0x478503:c.instructions+=11;goto B478503;
case 0x478506:c.instructions+=10;goto B478506;
case 0x478509:c.instructions+=9;goto B478509;
case 0x47850d:c.instructions+=8;goto B47850d;
case 0x47850f:c.instructions+=7;goto B47850f;
case 0x478512:c.instructions+=6;goto B478512;
case 0x478518:c.instructions+=5;goto B478518;
case 0x47851b:c.instructions+=4;goto B47851b;
case 0x47851e:c.instructions+=3;goto B47851e;
case 0x478521:c.instructions+=2;goto B478521;
case 0x478523:c.instructions+=1;goto B478523;
case 0x478525:goto L478525;
case 0x478528:c.instructions+=2;goto B478528;
case 0x47852a:c.instructions+=1;goto B47852a;
case 0x47852c:goto L47852c;
case 0x47852e:c.instructions+=1;goto B47852e;
case 0x478533:goto L478533;
case 0x478535:c.instructions+=1;goto B478535;
case 0x478537:goto L478537;
case 0x478539:c.instructions+=1;goto B478539;
case 0x47853e:goto L47853e;
case 0x478540:goto L478540;
case 0x478542:c.instructions+=1;goto B478542;
case 0x478544:goto L478544;
case 0x478547:c.instructions+=1;goto B478547;
case 0x478549:goto L478549;
case 0x47854c:c.instructions+=1;goto B47854c;
case 0x47854e:goto L47854e;
case 0x478551:c.instructions+=2;goto B478551;
case 0x478553:c.instructions+=1;goto B478553;
case 0x478555:goto L478555;
case 0x478557:goto L478557;
case 0x47855a:c.instructions+=16;goto B47855a;
case 0x47855c:c.instructions+=15;goto B47855c;
case 0x478560:c.instructions+=14;goto B478560;
case 0x478563:c.instructions+=13;goto B478563;
case 0x478567:c.instructions+=12;goto B478567;
case 0x478568:c.instructions+=11;goto B478568;
case 0x47856b:c.instructions+=10;goto B47856b;
case 0x47856d:c.instructions+=9;goto B47856d;
case 0x478570:c.instructions+=8;goto B478570;
case 0x478573:c.instructions+=7;goto B478573;
case 0x478576:c.instructions+=6;goto B478576;
case 0x478579:c.instructions+=5;goto B478579;
case 0x47857a:c.instructions+=4;goto B47857a;
case 0x47857b:c.instructions+=3;goto B47857b;
case 0x478580:c.instructions+=2;goto B478580;
case 0x478582:c.instructions+=1;goto B478582;
case 0x478587:goto L478587;
case 0x47858a:c.instructions+=2;goto B47858a;
case 0x47858c:c.instructions+=1;goto B47858c;
case 0x47858e:goto L47858e;
case 0x478592:c.instructions+=4;goto B478592;
case 0x478595:c.instructions+=3;goto B478595;
case 0x478598:c.instructions+=2;goto B478598;
case 0x47859a:c.instructions+=1;goto B47859a;
case 0x47859c:goto L47859c;
case 0x47859e:c.instructions+=1;goto B47859e;
case 0x4785a3:goto L4785a3;
case 0x4785a5:c.instructions+=1;goto B4785a5;
case 0x4785a7:goto L4785a7;
case 0x4785a9:c.instructions+=1;goto B4785a9;
case 0x4785ae:goto L4785ae;
case 0x4785b0:goto L4785b0;
case 0x4785b2:c.instructions+=1;goto B4785b2;
case 0x4785b4:goto L4785b4;
case 0x4785b7:c.instructions+=1;goto B4785b7;
case 0x4785b9:goto L4785b9;
case 0x4785bd:c.instructions+=2;goto B4785bd;
case 0x4785c0:c.instructions+=1;goto B4785c0;
case 0x4785c2:goto L4785c2;
case 0x4785c5:c.instructions+=1;goto B4785c5;
case 0x4785c7:goto L4785c7;
case 0x4785cb:c.instructions+=4;goto B4785cb;
case 0x4785ce:c.instructions+=3;goto B4785ce;
case 0x4785d1:c.instructions+=2;goto B4785d1;
case 0x4785d3:c.instructions+=1;goto B4785d3;
case 0x4785d5:goto L4785d5;
case 0x4785d7:c.instructions+=1;goto B4785d7;
case 0x4785d9:goto L4785d9;
case 0x4785dd:c.instructions+=1;goto B4785dd;
case 0x4785e0:goto L4785e0;
case 0x4785e3:c.instructions+=10;goto B4785e3;
case 0x4785e6:c.instructions+=9;goto B4785e6;
case 0x4785e9:c.instructions+=8;goto B4785e9;
case 0x4785eb:c.instructions+=7;goto B4785eb;
case 0x4785ee:c.instructions+=6;goto B4785ee;
case 0x4785f1:c.instructions+=5;goto B4785f1;
case 0x4785f3:c.instructions+=4;goto B4785f3;
case 0x4785f6:c.instructions+=3;goto B4785f6;
case 0x4785f7:c.instructions+=2;goto B4785f7;
case 0x4785f9:c.instructions+=1;goto B4785f9;
case 0x4785fc:goto L4785fc;
case 0x478600:c.instructions+=4;goto B478600;
case 0x478604:c.instructions+=3;goto B478604;
case 0x478605:c.instructions+=2;goto B478605;
case 0x478609:c.instructions+=1;goto B478609;
case 0x478610:goto L478610;
case 0x478616:c.instructions+=1;goto B478616;
case 0x478618:goto L478618;
case 0x47861e:c.instructions+=1;goto B47861e;
case 0x478624:goto L478624;
case 0x478627:c.instructions+=6;goto B478627;
case 0x478629:c.instructions+=5;goto B478629;
case 0x47862c:c.instructions+=4;goto B47862c;
case 0x478631:c.instructions+=3;goto B478631;
case 0x478633:c.instructions+=2;goto B478633;
case 0x478637:c.instructions+=1;goto B478637;
case 0x47863d:goto L47863d;
case 0x478640:c.instructions+=6;goto B478640;
case 0x478643:c.instructions+=5;goto B478643;
case 0x478645:c.instructions+=4;goto B478645;
case 0x478648:c.instructions+=3;goto B478648;
case 0x47864e:c.instructions+=2;goto B47864e;
case 0x478650:c.instructions+=1;goto B478650;
case 0x478656:goto L478656;
case 0x47865a:c.instructions+=4;goto B47865a;
case 0x47865c:c.instructions+=3;goto B47865c;
case 0x47865f:c.instructions+=2;goto B47865f;
case 0x478662:c.instructions+=1;goto B478662;
case 0x478664:goto L478664;
case 0x478667:c.instructions+=2;goto B478667;
case 0x478669:c.instructions+=1;goto B478669;
case 0x47866b:goto L47866b;
case 0x47866d:c.instructions+=1;goto B47866d;
case 0x478672:goto L478672;
case 0x478674:c.instructions+=1;goto B478674;
case 0x478676:goto L478676;
case 0x478678:c.instructions+=1;goto B478678;
case 0x47867d:goto L47867d;
case 0x47867f:goto L47867f;
case 0x478681:c.instructions+=1;goto B478681;
case 0x478683:goto L478683;
case 0x478686:c.instructions+=1;goto B478686;
case 0x478688:goto L478688;
case 0x47868b:c.instructions+=1;goto B47868b;
case 0x47868d:goto L47868d;
case 0x478690:c.instructions+=2;goto B478690;
case 0x478692:c.instructions+=1;goto B478692;
case 0x478694:goto L478694;
case 0x478696:goto L478696;
case 0x478699:c.instructions+=15;goto B478699;
case 0x47869d:c.instructions+=14;goto B47869d;
case 0x4786a0:c.instructions+=13;goto B4786a0;
case 0x4786a3:c.instructions+=12;goto B4786a3;
case 0x4786a5:c.instructions+=11;goto B4786a5;
case 0x4786a8:c.instructions+=10;goto B4786a8;
case 0x4786ac:c.instructions+=9;goto B4786ac;
case 0x4786b2:c.instructions+=8;goto B4786b2;
case 0x4786b5:c.instructions+=7;goto B4786b5;
case 0x4786b7:c.instructions+=6;goto B4786b7;
case 0x4786ba:c.instructions+=5;goto B4786ba;
case 0x4786bc:c.instructions+=4;goto B4786bc;
case 0x4786bf:c.instructions+=3;goto B4786bf;
case 0x4786c0:c.instructions+=2;goto B4786c0;
case 0x4786c4:c.instructions+=1;goto B4786c4;
case 0x4786c7:goto L4786c7;
case 0x4786c9:c.instructions+=1;goto B4786c9;
case 0x4786cb:goto L4786cb;
case 0x4786cf:c.instructions+=4;goto B4786cf;
case 0x4786d2:c.instructions+=3;goto B4786d2;
case 0x4786d5:c.instructions+=2;goto B4786d5;
case 0x4786d7:c.instructions+=1;goto B4786d7;
case 0x4786d9:goto L4786d9;
case 0x4786db:c.instructions+=1;goto B4786db;
case 0x4786e0:goto L4786e0;
case 0x4786e2:c.instructions+=1;goto B4786e2;
case 0x4786e4:goto L4786e4;
case 0x4786e6:c.instructions+=1;goto B4786e6;
case 0x4786eb:goto L4786eb;
case 0x4786ed:goto L4786ed;
case 0x4786ef:c.instructions+=1;goto B4786ef;
case 0x4786f1:goto L4786f1;
case 0x4786f4:c.instructions+=1;goto B4786f4;
case 0x4786f6:goto L4786f6;
case 0x4786fa:c.instructions+=2;goto B4786fa;
case 0x4786fd:c.instructions+=1;goto B4786fd;
case 0x4786ff:goto L4786ff;
case 0x478702:c.instructions+=1;goto B478702;
case 0x478704:goto L478704;
case 0x478708:c.instructions+=4;goto B478708;
case 0x47870b:c.instructions+=3;goto B47870b;
case 0x47870e:c.instructions+=2;goto B47870e;
case 0x478710:c.instructions+=1;goto B478710;
case 0x478712:goto L478712;
case 0x478714:goto L478714;
case 0x478718:c.instructions+=1;goto B478718;
case 0x47871b:goto L47871b;
case 0x47871d:goto L47871d;
case 0x478720:c.instructions+=8;goto B478720;
case 0x478723:c.instructions+=7;goto B478723;
case 0x478726:c.instructions+=6;goto B478726;
case 0x478728:c.instructions+=5;goto B478728;
case 0x47872b:c.instructions+=4;goto B47872b;
case 0x47872e:c.instructions+=3;goto B47872e;
case 0x478731:c.instructions+=2;goto B478731;
case 0x478733:c.instructions+=1;goto B478733;
case 0x478735:goto L478735;
case 0x478738:c.instructions+=2;goto B478738;
case 0x47873a:c.instructions+=1;goto B47873a;
case 0x47873c:goto L47873c;
case 0x47873e:c.instructions+=1;goto B47873e;
case 0x478743:goto L478743;
case 0x478745:c.instructions+=1;goto B478745;
case 0x478747:goto L478747;
case 0x478749:c.instructions+=1;goto B478749;
case 0x47874e:goto L47874e;
case 0x478750:goto L478750;
case 0x478752:c.instructions+=1;goto B478752;
case 0x478754:goto L478754;
case 0x478757:c.instructions+=1;goto B478757;
case 0x478759:goto L478759;
case 0x47875c:c.instructions+=1;goto B47875c;
case 0x47875e:goto L47875e;
case 0x478761:c.instructions+=2;goto B478761;
case 0x478763:c.instructions+=1;goto B478763;
case 0x478765:goto L478765;
case 0x478767:goto L478767;
case 0x47876a:c.instructions+=16;goto B47876a;
case 0x47876d:c.instructions+=15;goto B47876d;
case 0x47876f:c.instructions+=14;goto B47876f;
case 0x478770:c.instructions+=13;goto B478770;
case 0x478773:c.instructions+=12;goto B478773;
case 0x478775:c.instructions+=11;goto B478775;
case 0x478778:c.instructions+=10;goto B478778;
case 0x47877c:c.instructions+=9;goto B47877c;
case 0x47877f:c.instructions+=8;goto B47877f;
case 0x478783:c.instructions+=7;goto B478783;
case 0x478786:c.instructions+=6;goto B478786;
case 0x478789:c.instructions+=5;goto B478789;
case 0x47878a:c.instructions+=4;goto B47878a;
case 0x47878b:c.instructions+=3;goto B47878b;
case 0x478790:c.instructions+=2;goto B478790;
case 0x478792:c.instructions+=1;goto B478792;
case 0x478797:goto L478797;
case 0x47879b:c.instructions+=1;goto B47879b;
case 0x47879e:goto L47879e;
case 0x4787a2:c.instructions+=7;goto B4787a2;
case 0x4787a4:c.instructions+=6;goto B4787a4;
case 0x4787a7:c.instructions+=5;goto B4787a7;
case 0x4787a9:c.instructions+=4;goto B4787a9;
case 0x4787ad:c.instructions+=3;goto B4787ad;
case 0x4787b1:c.instructions+=2;goto B4787b1;
case 0x4787b7:c.instructions+=1;goto B4787b7;
case 0x4787bc:goto L4787bc;
case 0x4787be:c.instructions+=3;goto B4787be;
case 0x4787c1:c.instructions+=2;goto B4787c1;
case 0x4787c4:c.instructions+=1;goto B4787c4;
case 0x4787c6:goto L4787c6;
case 0x4787c9:c.instructions+=3;goto B4787c9;
case 0x4787cc:c.instructions+=2;goto B4787cc;
case 0x4787ce:c.instructions+=1;goto B4787ce;
case 0x4787d0:goto L4787d0;
case 0x4787d2:c.instructions+=1;goto B4787d2;
case 0x4787d7:goto L4787d7;
case 0x4787d9:c.instructions+=1;goto B4787d9;
case 0x4787db:goto L4787db;
case 0x4787dd:c.instructions+=1;goto B4787dd;
case 0x4787e2:goto L4787e2;
case 0x4787e4:goto L4787e4;
case 0x4787e6:c.instructions+=1;goto B4787e6;
case 0x4787e8:goto L4787e8;
case 0x4787eb:c.instructions+=1;goto B4787eb;
case 0x4787ed:goto L4787ed;
case 0x4787f0:c.instructions+=1;goto B4787f0;
case 0x4787f2:goto L4787f2;
case 0x4787f5:c.instructions+=3;goto B4787f5;
case 0x4787f8:c.instructions+=2;goto B4787f8;
case 0x4787fa:c.instructions+=1;goto B4787fa;
case 0x4787fc:goto L4787fc;
case 0x4787fe:c.instructions+=1;goto B4787fe;
case 0x478800:goto L478800;
case 0x478803:goto L478803;
case 0x478807:c.instructions+=3;goto B478807;
case 0x47880b:c.instructions+=2;goto B47880b;
case 0x47880d:c.instructions+=1;goto B47880d;
case 0x47880f:goto L47880f;
case 0x478817:goto L478817;
case 0x478819:c.instructions+=1;goto B478819;
case 0x47881b:goto L47881b;
case 0x47881e:c.instructions+=3;goto B47881e;
case 0x478821:c.instructions+=2;goto B478821;
case 0x478823:c.instructions+=1;goto B478823;
case 0x478825:goto L478825;
case 0x478827:c.instructions+=1;goto B478827;
case 0x47882c:goto L47882c;
case 0x47882e:c.instructions+=1;goto B47882e;
case 0x478830:goto L478830;
case 0x478832:c.instructions+=1;goto B478832;
case 0x478837:goto L478837;
case 0x478839:goto L478839;
case 0x47883b:c.instructions+=1;goto B47883b;
case 0x47883d:goto L47883d;
case 0x478840:c.instructions+=1;goto B478840;
case 0x478842:goto L478842;
case 0x478845:c.instructions+=1;goto B478845;
case 0x478847:goto L478847;
case 0x47884a:c.instructions+=3;goto B47884a;
case 0x47884d:c.instructions+=2;goto B47884d;
case 0x47884f:c.instructions+=1;goto B47884f;
case 0x478851:goto L478851;
case 0x478853:goto L478853;
case 0x478856:goto L478856;
case 0x478858:goto L478858;
case 0x47885c:c.instructions+=3;goto B47885c;
case 0x478860:c.instructions+=2;goto B478860;
case 0x478864:c.instructions+=1;goto B478864;
case 0x47886a:goto L47886a;
case 0x47886c:c.instructions+=1;goto B47886c;
case 0x47886e:goto L47886e;
case 0x478871:c.instructions+=2;goto B478871;
case 0x478873:c.instructions+=1;goto B478873;
case 0x478875:goto L478875;
case 0x478877:c.instructions+=1;goto B478877;
case 0x47887c:goto L47887c;
case 0x47887e:c.instructions+=1;goto B47887e;
case 0x478880:goto L478880;
case 0x478882:c.instructions+=1;goto B478882;
case 0x478887:goto L478887;
case 0x478889:goto L478889;
case 0x47888b:c.instructions+=1;goto B47888b;
case 0x47888d:goto L47888d;
case 0x478890:c.instructions+=1;goto B478890;
case 0x478892:goto L478892;
case 0x478895:c.instructions+=1;goto B478895;
case 0x478897:goto L478897;
case 0x47889a:c.instructions+=2;goto B47889a;
case 0x47889c:c.instructions+=1;goto B47889c;
case 0x47889e:goto L47889e;
case 0x4788a0:goto L4788a0;
case 0x4788a3:c.instructions+=12;goto B4788a3;
case 0x4788a7:c.instructions+=11;goto B4788a7;
case 0x4788aa:c.instructions+=10;goto B4788aa;
case 0x4788ad:c.instructions+=9;goto B4788ad;
case 0x4788b1:c.instructions+=8;goto B4788b1;
case 0x4788b3:c.instructions+=7;goto B4788b3;
case 0x4788b6:c.instructions+=6;goto B4788b6;
case 0x4788bc:c.instructions+=5;goto B4788bc;
case 0x4788bf:c.instructions+=4;goto B4788bf;
case 0x4788c2:c.instructions+=3;goto B4788c2;
case 0x4788c5:c.instructions+=2;goto B4788c5;
case 0x4788c7:c.instructions+=1;goto B4788c7;
case 0x4788c9:goto L4788c9;
case 0x4788cc:c.instructions+=2;goto B4788cc;
case 0x4788ce:c.instructions+=1;goto B4788ce;
case 0x4788d0:goto L4788d0;
case 0x4788d2:c.instructions+=1;goto B4788d2;
case 0x4788d7:goto L4788d7;
case 0x4788d9:c.instructions+=1;goto B4788d9;
case 0x4788db:goto L4788db;
case 0x4788dd:c.instructions+=1;goto B4788dd;
case 0x4788e2:goto L4788e2;
case 0x4788e6:c.instructions+=2;goto B4788e6;
case 0x4788e8:c.instructions+=1;goto B4788e8;
case 0x4788ea:goto L4788ea;
case 0x4788ec:goto L4788ec;
case 0x4788f0:c.instructions+=1;goto B4788f0;
case 0x4788f2:goto L4788f2;
case 0x4788f5:c.instructions+=1;goto B4788f5;
case 0x4788f7:goto L4788f7;
case 0x4788fa:c.instructions+=1;goto B4788fa;
case 0x4788fc:goto L4788fc;
case 0x4788ff:c.instructions+=2;goto B4788ff;
case 0x478901:c.instructions+=1;goto B478901;
case 0x478903:goto L478903;
case 0x478905:goto L478905;
case 0x478908:c.instructions+=15;goto B478908;
case 0x47890a:c.instructions+=14;goto B47890a;
case 0x47890d:c.instructions+=13;goto B47890d;
case 0x478911:c.instructions+=12;goto B478911;
case 0x478912:c.instructions+=11;goto B478912;
case 0x478915:c.instructions+=10;goto B478915;
case 0x478917:c.instructions+=9;goto B478917;
case 0x47891a:c.instructions+=8;goto B47891a;
case 0x47891d:c.instructions+=7;goto B47891d;
case 0x478920:c.instructions+=6;goto B478920;
case 0x478923:c.instructions+=5;goto B478923;
case 0x478924:c.instructions+=4;goto B478924;
case 0x478925:c.instructions+=3;goto B478925;
case 0x47892a:c.instructions+=2;goto B47892a;
case 0x47892c:c.instructions+=1;goto B47892c;
case 0x478931:goto L478931;
case 0x478934:c.instructions+=2;goto B478934;
case 0x478936:c.instructions+=1;goto B478936;
case 0x478938:goto L478938;
case 0x47893c:c.instructions+=4;goto B47893c;
case 0x47893f:c.instructions+=3;goto B47893f;
case 0x478942:c.instructions+=2;goto B478942;
case 0x478944:c.instructions+=1;goto B478944;
case 0x478946:goto L478946;
case 0x478948:c.instructions+=1;goto B478948;
case 0x47894d:goto L47894d;
case 0x47894f:c.instructions+=1;goto B47894f;
case 0x478951:goto L478951;
case 0x478953:c.instructions+=1;goto B478953;
case 0x478958:goto L478958;
case 0x47895a:goto L47895a;
case 0x47895c:c.instructions+=1;goto B47895c;
case 0x47895e:goto L47895e;
case 0x478961:c.instructions+=1;goto B478961;
case 0x478963:goto L478963;
case 0x478967:c.instructions+=2;goto B478967;
case 0x47896a:c.instructions+=1;goto B47896a;
case 0x47896c:goto L47896c;
case 0x47896f:c.instructions+=1;goto B47896f;
case 0x478971:goto L478971;
case 0x478975:c.instructions+=4;goto B478975;
case 0x478978:c.instructions+=3;goto B478978;
case 0x47897b:c.instructions+=2;goto B47897b;
case 0x47897d:c.instructions+=1;goto B47897d;
case 0x47897f:goto L47897f;
case 0x478981:c.instructions+=1;goto B478981;
case 0x478983:goto L478983;
case 0x478987:c.instructions+=1;goto B478987;
case 0x47898a:goto L47898a;
case 0x47898d:c.instructions+=10;goto B47898d;
case 0x478990:c.instructions+=9;goto B478990;
case 0x478993:c.instructions+=8;goto B478993;
case 0x478995:c.instructions+=7;goto B478995;
case 0x478998:c.instructions+=6;goto B478998;
case 0x47899b:c.instructions+=5;goto B47899b;
case 0x47899d:c.instructions+=4;goto B47899d;
case 0x4789a0:c.instructions+=3;goto B4789a0;
case 0x4789a1:c.instructions+=2;goto B4789a1;
case 0x4789a3:c.instructions+=1;goto B4789a3;
case 0x4789a6:goto L4789a6;
case 0x4789aa:c.instructions+=4;goto B4789aa;
case 0x4789ae:c.instructions+=3;goto B4789ae;
case 0x4789af:c.instructions+=2;goto B4789af;
case 0x4789b3:c.instructions+=1;goto B4789b3;
case 0x4789b8:goto L4789b8;
case 0x4789ba:c.instructions+=1;goto B4789ba;
case 0x4789bc:goto L4789bc;
case 0x4789c2:c.instructions+=1;goto B4789c2;
case 0x4789c8:goto L4789c8;
case 0x4789cc:c.instructions+=3;goto B4789cc;
case 0x4789cf:c.instructions+=2;goto B4789cf;
case 0x4789d2:c.instructions+=1;goto B4789d2;
case 0x4789d8:goto L4789d8;
case 0x4789da:c.instructions+=1;goto B4789da;
case 0x4789e0:goto L4789e0;
case 0x4789e4:c.instructions+=11;goto B4789e4;
case 0x4789e7:c.instructions+=10;goto B4789e7;
case 0x4789e9:c.instructions+=9;goto B4789e9;
case 0x4789ea:c.instructions+=8;goto B4789ea;
case 0x4789ed:c.instructions+=7;goto B4789ed;
case 0x4789f3:c.instructions+=6;goto B4789f3;
case 0x4789f4:c.instructions+=5;goto B4789f4;
case 0x4789f5:c.instructions+=4;goto B4789f5;
case 0x4789fa:c.instructions+=3;goto B4789fa;
case 0x4789fb:c.instructions+=2;goto B4789fb;
case 0x4789ff:c.instructions+=1;goto B4789ff;
case 0x478a04:goto L478a04;
case 0x478a08:c.instructions+=4;goto B478a08;
case 0x478a0b:c.instructions+=3;goto B478a0b;
case 0x478a0e:c.instructions+=2;goto B478a0e;
case 0x478a10:c.instructions+=1;goto B478a10;
case 0x478a16:goto L478a16;
case 0x478a19:c.instructions+=6;goto B478a19;
case 0x478a1c:c.instructions+=5;goto B478a1c;
case 0x478a1e:c.instructions+=4;goto B478a1e;
case 0x478a21:c.instructions+=3;goto B478a21;
case 0x478a24:c.instructions+=2;goto B478a24;
case 0x478a26:c.instructions+=1;goto B478a26;
case 0x478a2c:goto L478a2c;
case 0x478a2f:c.instructions+=2;goto B478a2f;
case 0x478a32:c.instructions+=1;goto B478a32;
case 0x478a34:goto L478a34;
case 0x478a37:c.instructions+=2;goto B478a37;
case 0x478a39:c.instructions+=1;goto B478a39;
case 0x478a3b:goto L478a3b;
case 0x478a3d:c.instructions+=1;goto B478a3d;
case 0x478a42:goto L478a42;
case 0x478a44:c.instructions+=1;goto B478a44;
case 0x478a46:goto L478a46;
case 0x478a48:c.instructions+=1;goto B478a48;
case 0x478a4d:goto L478a4d;
case 0x478a4f:goto L478a4f;
case 0x478a51:c.instructions+=1;goto B478a51;
case 0x478a53:goto L478a53;
case 0x478a56:c.instructions+=1;goto B478a56;
case 0x478a58:goto L478a58;
case 0x478a5b:c.instructions+=1;goto B478a5b;
case 0x478a5d:goto L478a5d;
case 0x478a60:c.instructions+=2;goto B478a60;
case 0x478a62:c.instructions+=1;goto B478a62;
case 0x478a64:goto L478a64;
case 0x478a66:goto L478a66;
case 0x478a69:c.instructions+=12;goto B478a69;
case 0x478a6c:c.instructions+=11;goto B478a6c;
case 0x478a6f:c.instructions+=10;goto B478a6f;
case 0x478a71:c.instructions+=9;goto B478a71;
case 0x478a75:c.instructions+=8;goto B478a75;
case 0x478a78:c.instructions+=7;goto B478a78;
case 0x478a7c:c.instructions+=6;goto B478a7c;
case 0x478a7e:c.instructions+=5;goto B478a7e;
case 0x478a84:c.instructions+=4;goto B478a84;
case 0x478a87:c.instructions+=3;goto B478a87;
case 0x478a8a:c.instructions+=2;goto B478a8a;
case 0x478a8c:c.instructions+=1;goto B478a8c;
case 0x478a8f:goto L478a8f;
case 0x478a93:c.instructions+=2;goto B478a93;
case 0x478a94:c.instructions+=1;goto B478a94;
case 0x478a97:goto L478a97;
case 0x478a99:c.instructions+=1;goto B478a99;
case 0x478a9b:goto L478a9b;
case 0x478a9e:c.instructions+=3;goto B478a9e;
case 0x478aa1:c.instructions+=2;goto B478aa1;
case 0x478aa3:c.instructions+=1;goto B478aa3;
case 0x478aa5:goto L478aa5;
case 0x478aa7:c.instructions+=1;goto B478aa7;
case 0x478aac:goto L478aac;
case 0x478aae:c.instructions+=1;goto B478aae;
case 0x478ab0:goto L478ab0;
case 0x478ab2:c.instructions+=1;goto B478ab2;
case 0x478ab7:goto L478ab7;
case 0x478ab9:goto L478ab9;
case 0x478abb:c.instructions+=1;goto B478abb;
case 0x478abd:goto L478abd;
case 0x478ac0:c.instructions+=1;goto B478ac0;
case 0x478ac2:goto L478ac2;
case 0x478ac5:c.instructions+=1;goto B478ac5;
case 0x478ac7:goto L478ac7;
case 0x478aca:c.instructions+=3;goto B478aca;
case 0x478acd:c.instructions+=2;goto B478acd;
case 0x478acf:c.instructions+=1;goto B478acf;
case 0x478ad1:goto L478ad1;
case 0x478ad3:goto L478ad3;
case 0x478ad6:goto L478ad6;
case 0x478ad8:goto L478ad8;
case 0x478ada:c.instructions+=8;goto B478ada;
case 0x478add:c.instructions+=7;goto B478add;
case 0x478ae1:c.instructions+=6;goto B478ae1;
case 0x478ae4:c.instructions+=5;goto B478ae4;
case 0x478ae7:c.instructions+=4;goto B478ae7;
case 0x478ae9:c.instructions+=3;goto B478ae9;
case 0x478aec:c.instructions+=2;goto B478aec;
case 0x478aef:c.instructions+=1;goto B478aef;
case 0x478af1:goto L478af1;
case 0x478af4:c.instructions+=2;goto B478af4;
case 0x478af6:c.instructions+=1;goto B478af6;
case 0x478af8:goto L478af8;
case 0x478afa:c.instructions+=1;goto B478afa;
case 0x478aff:goto L478aff;
case 0x478b01:c.instructions+=1;goto B478b01;
case 0x478b03:goto L478b03;
case 0x478b05:c.instructions+=1;goto B478b05;
case 0x478b0a:goto L478b0a;
case 0x478b0c:goto L478b0c;
case 0x478b0e:c.instructions+=1;goto B478b0e;
case 0x478b10:goto L478b10;
case 0x478b13:c.instructions+=1;goto B478b13;
case 0x478b15:goto L478b15;
case 0x478b18:c.instructions+=1;goto B478b18;
case 0x478b1a:goto L478b1a;
case 0x478b1d:c.instructions+=2;goto B478b1d;
case 0x478b1f:c.instructions+=1;goto B478b1f;
case 0x478b21:goto L478b21;
case 0x478b23:goto L478b23;
case 0x478b26:c.instructions+=9;goto B478b26;
case 0x478b2a:c.instructions+=8;goto B478b2a;
case 0x478b2d:c.instructions+=7;goto B478b2d;
case 0x478b30:c.instructions+=6;goto B478b30;
case 0x478b32:c.instructions+=5;goto B478b32;
case 0x478b35:c.instructions+=4;goto B478b35;
case 0x478b38:c.instructions+=3;goto B478b38;
case 0x478b3b:c.instructions+=2;goto B478b3b;
case 0x478b3d:c.instructions+=1;goto B478b3d;
case 0x478b40:goto L478b40;
case 0x478b42:c.instructions+=4;goto B478b42;
case 0x478b44:c.instructions+=3;goto B478b44;
case 0x478b45:c.instructions+=2;goto B478b45;
case 0x478b47:c.instructions+=1;goto B478b47;
case 0x478b4a:goto L478b4a;
case 0x478b4b:c.instructions+=3;goto B478b4b;
case 0x478b4f:c.instructions+=2;goto B478b4f;
case 0x478b50:c.instructions+=1;goto B478b50;
case 0x478b55:goto L478b55;
case 0x478b57:c.instructions+=1;goto B478b57;
case 0x478b5c:goto L478b5c;
case 0x478b5f:goto L478b5f;
case 0x478b63:c.instructions+=8;goto B478b63;
case 0x478b65:c.instructions+=7;goto B478b65;
case 0x478b69:c.instructions+=6;goto B478b69;
case 0x478b6c:c.instructions+=5;goto B478b6c;
case 0x478b6e:c.instructions+=4;goto B478b6e;
case 0x478b72:c.instructions+=3;goto B478b72;
case 0x478b76:c.instructions+=2;goto B478b76;
case 0x478b7c:c.instructions+=1;goto B478b7c;
case 0x478b81:goto L478b81;
case 0x478b84:c.instructions+=3;goto B478b84;
case 0x478b87:c.instructions+=2;goto B478b87;
case 0x478b8b:c.instructions+=1;goto B478b8b;
case 0x478b8d:goto L478b8d;
case 0x478b90:c.instructions+=3;goto B478b90;
case 0x478b93:c.instructions+=2;goto B478b93;
case 0x478b95:c.instructions+=1;goto B478b95;
case 0x478b97:goto L478b97;
case 0x478b99:c.instructions+=1;goto B478b99;
case 0x478b9e:goto L478b9e;
case 0x478ba0:c.instructions+=1;goto B478ba0;
case 0x478ba2:goto L478ba2;
case 0x478ba4:c.instructions+=1;goto B478ba4;
case 0x478ba9:goto L478ba9;
case 0x478bab:goto L478bab;
case 0x478bad:c.instructions+=1;goto B478bad;
case 0x478baf:goto L478baf;
case 0x478bb2:c.instructions+=1;goto B478bb2;
case 0x478bb4:goto L478bb4;
case 0x478bb7:c.instructions+=1;goto B478bb7;
case 0x478bb9:goto L478bb9;
case 0x478bbc:c.instructions+=3;goto B478bbc;
case 0x478bbf:c.instructions+=2;goto B478bbf;
case 0x478bc1:c.instructions+=1;goto B478bc1;
case 0x478bc3:goto L478bc3;
case 0x478bc5:c.instructions+=1;goto B478bc5;
case 0x478bc7:goto L478bc7;
case 0x478bca:goto L478bca;
case 0x478bce:c.instructions+=2;goto B478bce;
case 0x478bd0:c.instructions+=1;goto B478bd0;
case 0x478bd2:goto L478bd2;
case 0x478bd9:c.instructions+=2;goto B478bd9;
case 0x478be1:c.instructions+=1;goto B478be1;
case 0x478be5:goto L478be5;
case 0x478be7:c.instructions+=2;goto B478be7;
case 0x478beb:c.instructions+=1;goto B478beb;
case 0x478bed:goto L478bed;
case 0x478bf0:c.instructions+=3;goto B478bf0;
case 0x478bf3:c.instructions+=2;goto B478bf3;
case 0x478bf5:c.instructions+=1;goto B478bf5;
case 0x478bf7:goto L478bf7;
case 0x478bf9:c.instructions+=1;goto B478bf9;
case 0x478bfe:goto L478bfe;
case 0x478c00:c.instructions+=1;goto B478c00;
case 0x478c02:goto L478c02;
case 0x478c04:c.instructions+=1;goto B478c04;
case 0x478c09:goto L478c09;
case 0x478c0b:goto L478c0b;
case 0x478c0d:c.instructions+=1;goto B478c0d;
case 0x478c0f:goto L478c0f;
case 0x478c12:c.instructions+=1;goto B478c12;
case 0x478c14:goto L478c14;
case 0x478c17:c.instructions+=1;goto B478c17;
case 0x478c19:goto L478c19;
case 0x478c1c:c.instructions+=3;goto B478c1c;
case 0x478c1f:c.instructions+=2;goto B478c1f;
case 0x478c21:c.instructions+=1;goto B478c21;
case 0x478c23:goto L478c23;
case 0x478c25:goto L478c25;
case 0x478c28:goto L478c28;
case 0x478c2a:goto L478c2a;
case 0x478c2e:c.instructions+=3;goto B478c2e;
case 0x478c32:c.instructions+=2;goto B478c32;
case 0x478c35:c.instructions+=1;goto B478c35;
case 0x478c3b:goto L478c3b;
case 0x478c3d:c.instructions+=1;goto B478c3d;
case 0x478c3f:goto L478c3f;
case 0x478c42:c.instructions+=2;goto B478c42;
case 0x478c44:c.instructions+=1;goto B478c44;
case 0x478c46:goto L478c46;
case 0x478c48:c.instructions+=1;goto B478c48;
case 0x478c4d:goto L478c4d;
case 0x478c4f:c.instructions+=1;goto B478c4f;
case 0x478c51:goto L478c51;
case 0x478c53:c.instructions+=1;goto B478c53;
case 0x478c58:goto L478c58;
case 0x478c5a:goto L478c5a;
case 0x478c5c:c.instructions+=1;goto B478c5c;
case 0x478c5e:goto L478c5e;
case 0x478c61:c.instructions+=1;goto B478c61;
case 0x478c63:goto L478c63;
case 0x478c66:c.instructions+=1;goto B478c66;
case 0x478c68:goto L478c68;
case 0x478c6b:c.instructions+=2;goto B478c6b;
case 0x478c6d:c.instructions+=1;goto B478c6d;
case 0x478c6f:goto L478c6f;
case 0x478c71:goto L478c71;
case 0x478c74:c.instructions+=11;goto B478c74;
case 0x478c78:c.instructions+=10;goto B478c78;
case 0x478c7b:c.instructions+=9;goto B478c7b;
case 0x478c7e:c.instructions+=8;goto B478c7e;
case 0x478c82:c.instructions+=7;goto B478c82;
case 0x478c84:c.instructions+=6;goto B478c84;
case 0x478c87:c.instructions+=5;goto B478c87;
case 0x478c8d:c.instructions+=4;goto B478c8d;
case 0x478c90:c.instructions+=3;goto B478c90;
case 0x478c92:c.instructions+=2;goto B478c92;
case 0x478c95:c.instructions+=1;goto B478c95;
case 0x478c97:goto L478c97;
case 0x478c9a:c.instructions+=2;goto B478c9a;
case 0x478c9c:c.instructions+=1;goto B478c9c;
case 0x478c9e:goto L478c9e;
case 0x478ca0:c.instructions+=1;goto B478ca0;
case 0x478ca5:goto L478ca5;
case 0x478ca7:c.instructions+=1;goto B478ca7;
case 0x478ca9:goto L478ca9;
case 0x478cab:c.instructions+=1;goto B478cab;
case 0x478cb0:goto L478cb0;
case 0x478cb2:goto L478cb2;
case 0x478cb4:c.instructions+=1;goto B478cb4;
case 0x478cb6:goto L478cb6;
case 0x478cb9:c.instructions+=1;goto B478cb9;
case 0x478cbb:goto L478cbb;
case 0x478cbe:c.instructions+=1;goto B478cbe;
case 0x478cc0:goto L478cc0;
case 0x478cc3:c.instructions+=2;goto B478cc3;
case 0x478cc5:c.instructions+=1;goto B478cc5;
case 0x478cc7:goto L478cc7;
case 0x478cc9:goto L478cc9;
case 0x478ccc:c.instructions+=10;goto B478ccc;
case 0x478cd0:c.instructions+=9;goto B478cd0;
case 0x478cd3:c.instructions+=8;goto B478cd3;
case 0x478cd6:c.instructions+=7;goto B478cd6;
case 0x478cda:c.instructions+=6;goto B478cda;
case 0x478cdd:c.instructions+=5;goto B478cdd;
case 0x478ce0:c.instructions+=4;goto B478ce0;
case 0x478ce3:c.instructions+=3;goto B478ce3;
case 0x478ce6:c.instructions+=2;goto B478ce6;
case 0x478ce8:c.instructions+=1;goto B478ce8;
case 0x478ceb:goto L478ceb;
case 0x478ced:c.instructions+=4;goto B478ced;
case 0x478cef:c.instructions+=3;goto B478cef;
case 0x478cf0:c.instructions+=2;goto B478cf0;
case 0x478cf2:c.instructions+=1;goto B478cf2;
case 0x478cf5:goto L478cf5;
case 0x478cf6:c.instructions+=5;goto B478cf6;
case 0x478cfa:c.instructions+=4;goto B478cfa;
case 0x478cfb:c.instructions+=3;goto B478cfb;
case 0x478d00:c.instructions+=2;goto B478d00;
case 0x478d02:c.instructions+=1;goto B478d02;
case 0x478d07:goto L478d07;
case 0x478d0b:c.instructions+=3;goto B478d0b;
case 0x478d0e:c.instructions+=2;goto B478d0e;
case 0x478d10:c.instructions+=1;goto B478d10;
case 0x478d12:goto L478d12;
case 0x478d16:c.instructions+=4;goto B478d16;
case 0x478d19:c.instructions+=3;goto B478d19;
case 0x478d1c:c.instructions+=2;goto B478d1c;
case 0x478d1e:c.instructions+=1;goto B478d1e;
case 0x478d20:goto L478d20;
case 0x478d22:c.instructions+=1;goto B478d22;
case 0x478d27:goto L478d27;
case 0x478d29:c.instructions+=1;goto B478d29;
case 0x478d2b:goto L478d2b;
case 0x478d2d:c.instructions+=1;goto B478d2d;
case 0x478d32:goto L478d32;
case 0x478d34:goto L478d34;
case 0x478d36:c.instructions+=1;goto B478d36;
case 0x478d38:goto L478d38;
case 0x478d3a:c.instructions+=1;goto B478d3a;
case 0x478d3c:goto L478d3c;
case 0x478d40:c.instructions+=2;goto B478d40;
case 0x478d43:c.instructions+=1;goto B478d43;
case 0x478d45:goto L478d45;
case 0x478d48:c.instructions+=1;goto B478d48;
case 0x478d4a:goto L478d4a;
case 0x478d4e:c.instructions+=4;goto B478d4e;
case 0x478d51:c.instructions+=3;goto B478d51;
case 0x478d54:c.instructions+=2;goto B478d54;
case 0x478d56:c.instructions+=1;goto B478d56;
case 0x478d58:goto L478d58;
case 0x478d5a:c.instructions+=1;goto B478d5a;
case 0x478d5c:goto L478d5c;
case 0x478d60:c.instructions+=1;goto B478d60;
case 0x478d63:goto L478d63;
case 0x478d66:c.instructions+=10;goto B478d66;
case 0x478d69:c.instructions+=9;goto B478d69;
case 0x478d6c:c.instructions+=8;goto B478d6c;
case 0x478d70:c.instructions+=7;goto B478d70;
case 0x478d73:c.instructions+=6;goto B478d73;
case 0x478d76:c.instructions+=5;goto B478d76;
case 0x478d79:c.instructions+=4;goto B478d79;
case 0x478d7d:c.instructions+=3;goto B478d7d;
case 0x478d7f:c.instructions+=2;goto B478d7f;
case 0x478d81:c.instructions+=1;goto B478d81;
case 0x478d84:goto L478d84;
case 0x478d85:c.instructions+=2;goto B478d85;
case 0x478d87:c.instructions+=1;goto B478d87;
case 0x478d8a:goto L478d8a;
case 0x478d8b:c.instructions+=3;goto B478d8b;
case 0x478d8f:c.instructions+=2;goto B478d8f;
case 0x478d93:c.instructions+=1;goto B478d93;
case 0x478d98:goto L478d98;
case 0x478d9e:c.instructions+=1;goto B478d9e;
case 0x478da4:goto L478da4;
case 0x478da7:c.instructions+=6;goto B478da7;
case 0x478da9:c.instructions+=5;goto B478da9;
case 0x478dac:c.instructions+=4;goto B478dac;
case 0x478db1:c.instructions+=3;goto B478db1;
case 0x478db3:c.instructions+=2;goto B478db3;
case 0x478db7:c.instructions+=1;goto B478db7;
case 0x478dbd:goto L478dbd;
case 0x478dc1:c.instructions+=4;goto B478dc1;
case 0x478dc3:c.instructions+=3;goto B478dc3;
case 0x478dc6:c.instructions+=2;goto B478dc6;
case 0x478dc9:c.instructions+=1;goto B478dc9;
case 0x478dcb:goto L478dcb;
case 0x478dcf:c.instructions+=4;goto B478dcf;
case 0x478dd2:c.instructions+=3;goto B478dd2;
case 0x478dd5:c.instructions+=2;goto B478dd5;
case 0x478dd7:c.instructions+=1;goto B478dd7;
case 0x478dd9:goto L478dd9;
case 0x478ddb:c.instructions+=1;goto B478ddb;
case 0x478de0:goto L478de0;
case 0x478de2:c.instructions+=1;goto B478de2;
case 0x478de4:goto L478de4;
case 0x478de6:c.instructions+=1;goto B478de6;
case 0x478deb:goto L478deb;
case 0x478ded:goto L478ded;
case 0x478def:c.instructions+=1;goto B478def;
case 0x478df1:goto L478df1;
case 0x478df4:c.instructions+=1;goto B478df4;
case 0x478df6:goto L478df6;
case 0x478dfa:c.instructions+=2;goto B478dfa;
case 0x478dfd:c.instructions+=1;goto B478dfd;
case 0x478dff:goto L478dff;
case 0x478e02:c.instructions+=1;goto B478e02;
case 0x478e04:goto L478e04;
case 0x478e08:c.instructions+=4;goto B478e08;
case 0x478e0b:c.instructions+=3;goto B478e0b;
case 0x478e0e:c.instructions+=2;goto B478e0e;
case 0x478e10:c.instructions+=1;goto B478e10;
case 0x478e12:goto L478e12;
case 0x478e14:c.instructions+=1;goto B478e14;
case 0x478e16:goto L478e16;
case 0x478e1a:c.instructions+=1;goto B478e1a;
case 0x478e1d:goto L478e1d;
case 0x478e20:c.instructions+=13;goto B478e20;
case 0x478e24:c.instructions+=12;goto B478e24;
case 0x478e27:c.instructions+=11;goto B478e27;
case 0x478e2a:c.instructions+=10;goto B478e2a;
case 0x478e2c:c.instructions+=9;goto B478e2c;
case 0x478e2f:c.instructions+=8;goto B478e2f;
case 0x478e33:c.instructions+=7;goto B478e33;
case 0x478e35:c.instructions+=6;goto B478e35;
case 0x478e3b:c.instructions+=5;goto B478e3b;
case 0x478e3e:c.instructions+=4;goto B478e3e;
case 0x478e41:c.instructions+=3;goto B478e41;
case 0x478e43:c.instructions+=2;goto B478e43;
case 0x478e45:c.instructions+=1;goto B478e45;
case 0x478e48:goto L478e48;
case 0x478e49:c.instructions+=2;goto B478e49;
case 0x478e4b:c.instructions+=1;goto B478e4b;
case 0x478e4e:goto L478e4e;
case 0x478e50:c.instructions+=1;goto B478e50;
case 0x478e52:goto L478e52;
case 0x478e56:c.instructions+=4;goto B478e56;
case 0x478e59:c.instructions+=3;goto B478e59;
case 0x478e5c:c.instructions+=2;goto B478e5c;
case 0x478e5e:c.instructions+=1;goto B478e5e;
case 0x478e60:goto L478e60;
case 0x478e62:c.instructions+=1;goto B478e62;
case 0x478e67:goto L478e67;
case 0x478e69:c.instructions+=1;goto B478e69;
case 0x478e6b:goto L478e6b;
case 0x478e6d:c.instructions+=1;goto B478e6d;
case 0x478e72:goto L478e72;
case 0x478e74:goto L478e74;
case 0x478e76:c.instructions+=1;goto B478e76;
case 0x478e78:goto L478e78;
case 0x478e7b:c.instructions+=1;goto B478e7b;
case 0x478e7d:goto L478e7d;
case 0x478e81:c.instructions+=2;goto B478e81;
case 0x478e84:c.instructions+=1;goto B478e84;
case 0x478e86:goto L478e86;
case 0x478e89:c.instructions+=1;goto B478e89;
case 0x478e8b:goto L478e8b;
case 0x478e8f:c.instructions+=4;goto B478e8f;
case 0x478e92:c.instructions+=3;goto B478e92;
case 0x478e95:c.instructions+=2;goto B478e95;
case 0x478e97:c.instructions+=1;goto B478e97;
case 0x478e99:goto L478e99;
case 0x478e9b:c.instructions+=1;goto B478e9b;
case 0x478e9d:goto L478e9d;
case 0x478ea1:c.instructions+=1;goto B478ea1;
case 0x478ea4:goto L478ea4;
case 0x478ea7:c.instructions+=9;goto B478ea7;
case 0x478eab:c.instructions+=8;goto B478eab;
case 0x478eae:c.instructions+=7;goto B478eae;
case 0x478eb1:c.instructions+=6;goto B478eb1;
case 0x478eb3:c.instructions+=5;goto B478eb3;
case 0x478eb6:c.instructions+=4;goto B478eb6;
case 0x478eb9:c.instructions+=3;goto B478eb9;
case 0x478ebb:c.instructions+=2;goto B478ebb;
case 0x478ebd:c.instructions+=1;goto B478ebd;
case 0x478ec0:goto L478ec0;
case 0x478ec2:c.instructions+=6;goto B478ec2;
case 0x478ec6:c.instructions+=5;goto B478ec6;
case 0x478ec7:c.instructions+=4;goto B478ec7;
case 0x478ec8:c.instructions+=3;goto B478ec8;
case 0x478ec9:c.instructions+=2;goto B478ec9;
case 0x478ece:c.instructions+=1;goto B478ece;
case 0x478ed3:goto L478ed3;
case 0x478ed5:c.instructions+=4;goto B478ed5;
case 0x478ed8:c.instructions+=3;goto B478ed8;
case 0x478eda:c.instructions+=2;goto B478eda;
case 0x478edd:c.instructions+=1;goto B478edd;
case 0x478ee1:goto L478ee1;
case 0x478ee3:c.instructions+=1;goto B478ee3;
case 0x478ee5:goto L478ee5;
case 0x478ee8:c.instructions+=3;goto B478ee8;
case 0x478eeb:c.instructions+=2;goto B478eeb;
case 0x478eed:c.instructions+=1;goto B478eed;
case 0x478eef:goto L478eef;
case 0x478ef1:c.instructions+=1;goto B478ef1;
case 0x478ef6:goto L478ef6;
case 0x478ef8:c.instructions+=1;goto B478ef8;
case 0x478efa:goto L478efa;
case 0x478efc:c.instructions+=1;goto B478efc;
case 0x478f01:goto L478f01;
case 0x478f03:goto L478f03;
case 0x478f05:c.instructions+=1;goto B478f05;
case 0x478f07:goto L478f07;
case 0x478f09:c.instructions+=1;goto B478f09;
case 0x478f0b:goto L478f0b;
case 0x478f0e:c.instructions+=1;goto B478f0e;
case 0x478f10:goto L478f10;
case 0x478f13:c.instructions+=3;goto B478f13;
case 0x478f16:c.instructions+=2;goto B478f16;
case 0x478f18:c.instructions+=1;goto B478f18;
case 0x478f1a:goto L478f1a;
case 0x478f1c:c.instructions+=1;goto B478f1c;
case 0x478f1e:goto L478f1e;
case 0x478f21:goto L478f21;
case 0x478f25:c.instructions+=2;goto B478f25;
case 0x478f29:c.instructions+=1;goto B478f29;
case 0x478f2f:goto L478f2f;
case 0x478f30:c.instructions+=3;goto B478f30;
case 0x478f35:c.instructions+=2;goto B478f35;
case 0x478f37:c.instructions+=1;goto B478f37;
case 0x478f3c:goto L478f3c;
case 0x478f40:c.instructions+=3;goto B478f40;
case 0x478f43:c.instructions+=2;goto B478f43;
case 0x478f45:c.instructions+=1;goto B478f45;
case 0x478f47:goto L478f47;
case 0x478f4a:c.instructions+=3;goto B478f4a;
case 0x478f4d:c.instructions+=2;goto B478f4d;
case 0x478f4f:c.instructions+=1;goto B478f4f;
case 0x478f51:goto L478f51;
case 0x478f53:c.instructions+=1;goto B478f53;
case 0x478f58:goto L478f58;
case 0x478f5a:c.instructions+=1;goto B478f5a;
case 0x478f5c:goto L478f5c;
case 0x478f5e:c.instructions+=1;goto B478f5e;
case 0x478f63:goto L478f63;
case 0x478f65:goto L478f65;
case 0x478f67:c.instructions+=1;goto B478f67;
case 0x478f69:goto L478f69;
case 0x478f6b:c.instructions+=1;goto B478f6b;
case 0x478f6d:goto L478f6d;
case 0x478f70:c.instructions+=1;goto B478f70;
case 0x478f72:goto L478f72;
case 0x478f75:c.instructions+=3;goto B478f75;
case 0x478f78:c.instructions+=2;goto B478f78;
case 0x478f7a:c.instructions+=1;goto B478f7a;
case 0x478f7c:goto L478f7c;
case 0x478f7e:c.instructions+=1;goto B478f7e;
case 0x478f80:goto L478f80;
case 0x478f83:goto L478f83;
case 0x478f86:c.instructions+=11;goto B478f86;
case 0x478f8a:c.instructions+=10;goto B478f8a;
case 0x478f8d:c.instructions+=9;goto B478f8d;
case 0x478f90:c.instructions+=8;goto B478f90;
case 0x478f93:c.instructions+=7;goto B478f93;
case 0x478f96:c.instructions+=6;goto B478f96;
case 0x478f98:c.instructions+=5;goto B478f98;
case 0x478f9e:c.instructions+=4;goto B478f9e;
case 0x478fa1:c.instructions+=3;goto B478fa1;
case 0x478fa3:c.instructions+=2;goto B478fa3;
case 0x478fa5:c.instructions+=1;goto B478fa5;
case 0x478fa8:goto L478fa8;
case 0x478faa:c.instructions+=7;goto B478faa;
case 0x478fac:c.instructions+=6;goto B478fac;
case 0x478fad:c.instructions+=5;goto B478fad;
case 0x478fae:c.instructions+=4;goto B478fae;
case 0x478faf:c.instructions+=3;goto B478faf;
case 0x478fb4:c.instructions+=2;goto B478fb4;
case 0x478fb6:c.instructions+=1;goto B478fb6;
case 0x478fbb:goto L478fbb;
case 0x478fbf:c.instructions+=4;goto B478fbf;
case 0x478fc1:c.instructions+=3;goto B478fc1;
case 0x478fc4:c.instructions+=2;goto B478fc4;
case 0x478fc5:c.instructions+=1;goto B478fc5;
case 0x478fc8:goto L478fc8;
case 0x478fcc:c.instructions+=2;goto B478fcc;
case 0x478fcd:c.instructions+=1;goto B478fcd;
case 0x478fd2:goto L478fd2;
case 0x478fd3:c.instructions+=5;goto B478fd3;
case 0x478fd4:c.instructions+=4;goto B478fd4;
case 0x478fd5:c.instructions+=3;goto B478fd5;
case 0x478fd6:c.instructions+=2;goto B478fd6;
case 0x478fd9:c.instructions+=1;goto B478fd9;
case 0x478fe0:goto L478fe0;
case 0x478fe1:c.instructions+=6;goto B478fe1;
case 0x478fe2:c.instructions+=5;goto B478fe2;
case 0x478fe4:c.instructions+=4;goto B478fe4;
case 0x478fe7:c.instructions+=3;goto B478fe7;
case 0x478fe9:c.instructions+=2;goto B478fe9;
case 0x478feb:c.instructions+=1;goto B478feb;
case 0x478fed:goto L478fed;
case 0x478fee:c.instructions+=6;goto B478fee;
case 0x478fef:c.instructions+=5;goto B478fef;
case 0x478ff0:c.instructions+=4;goto B478ff0;
case 0x478ff3:c.instructions+=3;goto B478ff3;
case 0x478ff6:c.instructions+=2;goto B478ff6;
case 0x478ff8:c.instructions+=1;goto B478ff8;
case 0x478ffa:goto L478ffa;
case 0x478ffd:c.instructions+=2;goto B478ffd;
case 0x478fff:c.instructions+=1;goto B478fff;
default:missing_instruction(c.pc);}
B478001:L478001:{c.instructions+=4;NFSU2_TR(0x478001);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478004:{NFSU2_TR(0x478004);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478007:{NFSU2_TR(0x478007);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B47800a:{NFSU2_TR(0x47800a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47805f;}}
}
B47800c:L47800c:{c.instructions+=3;NFSU2_TR(0x47800c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47800f:{NFSU2_TR(0x47800f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478011:{NFSU2_TR(0x478011);
if(r1(R+518)){{goto L478044;}}
}
B478013:L478013:{c.instructions+=1;NFSU2_TR(0x478013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478018ull));
TAIL_STATIC(0x467e40u,467);
}
B478018:L478018:{c.instructions+=3;NFSU2_TR(0x478018);
__builtin_memmove((R+20),(R+0),4);
}
B47801a:{NFSU2_TR(0x47801a);
__builtin_memmove((R+4),(R+20),4);
}
B47801c:{NFSU2_TR(0x47801c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478021ull));
TAIL_STATIC(0x467e40u,467);
}
B478021:L478021:{c.instructions+=4;NFSU2_TR(0x478021);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478023:{NFSU2_TR(0x478023);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478025:{NFSU2_TR(0x478025);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478026:{NFSU2_TR(0x478026);
if(r1(R+518)){{goto L478037;}}
}
B478028:L478028:{c.instructions+=2;NFSU2_TR(0x478028);
__builtin_memmove((R+4),(R+0),4);
}
B47802a:{NFSU2_TR(0x47802a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47802full));
TAIL_STATIC(0x467dc0u,467);
}
B47802f:L47802f:{c.instructions+=3;NFSU2_TR(0x47802f);
__builtin_memmove((R+28),(R+0),4);
}
B478031:{NFSU2_TR(0x478031);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478033:{NFSU2_TR(0x478033);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478040;}}
}
B478035:L478035:{c.instructions+=2;NFSU2_TR(0x478035);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478036:{NFSU2_TR(0x478036);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478037:L478037:{c.instructions+=2;NFSU2_TR(0x478037);
__builtin_memmove((R+4),(R+20),4);
}
B478039:{NFSU2_TR(0x478039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47803eull));
TAIL_STATIC(0x467dc0u,467);
}
B47803e:L47803e:{c.instructions+=1;NFSU2_TR(0x47803e);
__builtin_memmove((R+28),(R+0),4);
}
B478040:L478040:{c.instructions+=1;NFSU2_TR(0x478040);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B478044:L478044:{c.instructions+=3;NFSU2_TR(0x478044);
__builtin_memmove((R+8),gp(0x82af34),4);
}
B47804a:{NFSU2_TR(0x47804a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47804b:{NFSU2_TR(0x47804b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478050ull));
TAIL_STATIC(0x440e50u,440);
}
B478050:L478050:{c.instructions+=3;NFSU2_TR(0x478050);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B478053:{NFSU2_TR(0x478053);
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
B478055:{NFSU2_TR(0x478055);
if(r1(R+518)){{goto L4780c2;}}
}
B478057:L478057:{c.instructions+=2;NFSU2_TR(0x478057);
u8 U[4];
w4(U+0,u32(0x78a5ccull));
s4(u32(r4(R+0)),r4(U+0));
}
B47805d:{NFSU2_TR(0x47805d);
{goto L4780c4;}
}
B47805f:L47805f:{c.instructions+=5;NFSU2_TR(0x47805f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B478061:{NFSU2_TR(0x478061);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478065:{NFSU2_TR(0x478065);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478068:{NFSU2_TR(0x478068);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47806a:{NFSU2_TR(0x47806a);
if(r1(R+518)){{goto L478079;}}
}
B47806c:L47806c:{c.instructions+=4;NFSU2_TR(0x47806c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478070:{NFSU2_TR(0x478070);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B478073:{NFSU2_TR(0x478073);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B478075:{NFSU2_TR(0x478075);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478079:L478079:{c.instructions+=3;NFSU2_TR(0x478079);
__builtin_memmove((R+4),gp(0x82af38),4);
}
B47807f:{NFSU2_TR(0x47807f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478080:{NFSU2_TR(0x478080);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478085ull));
TAIL_STATIC(0x440e50u,440);
}
B478085:L478085:{c.instructions+=3;NFSU2_TR(0x478085);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B478088:{NFSU2_TR(0x478088);
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
B47808a:{NFSU2_TR(0x47808a);
if(r1(R+518)){{goto L478094;}}
}
B47808c:L47808c:{c.instructions+=2;NFSU2_TR(0x47808c);
u8 U[4];
w4(U+0,u32(0x78a5f0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B478092:{NFSU2_TR(0x478092);
{goto L478096;}
}
B478094:L478094:{c.instructions+=1;NFSU2_TR(0x478094);
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
B478096:L478096:{c.instructions+=11;NFSU2_TR(0x478096);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478099:{NFSU2_TR(0x478099);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47809c:{NFSU2_TR(0x47809c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B47809f:{NFSU2_TR(0x47809f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4780a2:{NFSU2_TR(0x4780a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4780a5:{NFSU2_TR(0x4780a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4780a8:{NFSU2_TR(0x4780a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4780aa:{NFSU2_TR(0x4780aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4780ab:{NFSU2_TR(0x4780ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4780af:{NFSU2_TR(0x4780af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4780b0:{NFSU2_TR(0x4780b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4780b3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4780b3:L4780b3:{c.instructions+=6;NFSU2_TR(0x4780b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4780b6:{NFSU2_TR(0x4780b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4780b9:{NFSU2_TR(0x4780b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4780bc:{NFSU2_TR(0x4780bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4780bd:{NFSU2_TR(0x4780bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4780c0:{NFSU2_TR(0x4780c0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x478044u);}goto L478044;}
}
B4780c2:L4780c2:{c.instructions+=1;NFSU2_TR(0x4780c2);
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
B4780c4:L4780c4:{c.instructions+=12;NFSU2_TR(0x4780c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4780c7:{NFSU2_TR(0x4780c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4780ca:{NFSU2_TR(0x4780ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4780cd:{NFSU2_TR(0x4780cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4780d0:{NFSU2_TR(0x4780d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4780d3:{NFSU2_TR(0x4780d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4780d6:{NFSU2_TR(0x4780d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4780d8:{NFSU2_TR(0x4780d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4780d9:{NFSU2_TR(0x4780d9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4780da:{NFSU2_TR(0x4780da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4780db:{NFSU2_TR(0x4780db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4780dc:{NFSU2_TR(0x4780dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4780dfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4780df:L4780df:{c.instructions+=7;NFSU2_TR(0x4780df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4780e2:{NFSU2_TR(0x4780e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4780e5:{NFSU2_TR(0x4780e5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4780e6:{NFSU2_TR(0x4780e6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xcull))));
}
B4780e9:{NFSU2_TR(0x4780e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4780eb:{NFSU2_TR(0x4780eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4780ee:{NFSU2_TR(0x4780ee);
if(r1(R+518)){{goto L478107;}}
}
B4780f0:L4780f0:{c.instructions+=4;NFSU2_TR(0x4780f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4780f2:{NFSU2_TR(0x4780f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B4780f5:{NFSU2_TR(0x4780f5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4780f8:{NFSU2_TR(0x4780f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478107;}}
}
B4780fa:L4780fa:{c.instructions+=4;NFSU2_TR(0x4780fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4780fd:{NFSU2_TR(0x4780fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B478100:{NFSU2_TR(0x478100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B478102:{NFSU2_TR(0x478102);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478105ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B478105:L478105:{c.instructions+=1;NFSU2_TR(0x478105);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4780f0u);}goto L4780f0;}
}
B478107:L478107:{c.instructions+=6;NFSU2_TR(0x478107);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47810a:{NFSU2_TR(0x47810a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47810c:{NFSU2_TR(0x47810c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B47810d:{NFSU2_TR(0x47810d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47810f:{NFSU2_TR(0x47810f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478113:{NFSU2_TR(0x478113);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x477fffu,477);}
}
B478119:L478119:{c.instructions+=6;NFSU2_TR(0x478119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47811a:{NFSU2_TR(0x47811a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47811b:{NFSU2_TR(0x47811b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47811c:{NFSU2_TR(0x47811c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47811d:{NFSU2_TR(0x47811d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47811e:{NFSU2_TR(0x47811e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B478120:L478120:{c.instructions+=9;NFSU2_TR(0x478120);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B478123:{NFSU2_TR(0x478123);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478124:{NFSU2_TR(0x478124);
__builtin_memmove((R+24),(R+4),4);
}
B478126:{NFSU2_TR(0x478126);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478129:{NFSU2_TR(0x478129);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47812a:{NFSU2_TR(0x47812a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B47812c:{NFSU2_TR(0x47812c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47812e:{NFSU2_TR(0x47812e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478132:{NFSU2_TR(0x478132);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L478230;}}
}
B478138:L478138:{c.instructions+=3;NFSU2_TR(0x478138);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478139:{NFSU2_TR(0x478139);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47813a:{NFSU2_TR(0x47813a);
{goto L478140;}
}
B47813c:L47813c:{c.instructions+=1;NFSU2_TR(0x47813c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B478140:L478140:{c.instructions+=9;NFSU2_TR(0x478140);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478143:{NFSU2_TR(0x478143);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B478146:{NFSU2_TR(0x478146);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478149:{NFSU2_TR(0x478149);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47814c:{NFSU2_TR(0x47814c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47814e:{NFSU2_TR(0x47814e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B478150:{NFSU2_TR(0x478150);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478152:{NFSU2_TR(0x478152);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478156:{NFSU2_TR(0x478156);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47819c;}}
}
B478158:L478158:{c.instructions+=3;NFSU2_TR(0x478158);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47815b:{NFSU2_TR(0x47815b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47815f:{NFSU2_TR(0x47815f);
}
B478160:L478160:{c.instructions+=7;NFSU2_TR(0x478160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B478162:{NFSU2_TR(0x478162);
__builtin_memmove((R+0),(R+4),4);
}
B478164:{NFSU2_TR(0x478164);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B478167:{NFSU2_TR(0x478167);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B47816c:{NFSU2_TR(0x47816c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B47816f:{NFSU2_TR(0x47816f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478171:{NFSU2_TR(0x478171);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478187;}}
}
B478173:L478173:{c.instructions+=3;NFSU2_TR(0x478173);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xe0000000ull))));
}
B478179:{NFSU2_TR(0x478179);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47817f:{NFSU2_TR(0x47817f);
if(r1(R+518)){{goto L478184;}}
}
B478181:L478181:{c.instructions+=2;NFSU2_TR(0x478181);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B478182:{NFSU2_TR(0x478182);
{goto L47818e;}
}
B478184:L478184:{c.instructions+=2;NFSU2_TR(0x478184);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B478185:{NFSU2_TR(0x478185);
{goto L47818e;}
}
B478187:L478187:{c.instructions+=2;NFSU2_TR(0x478187);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47818a:{NFSU2_TR(0x47818a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+12))));
}
B47818e:L47818e:{c.instructions+=2;NFSU2_TR(0x47818e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478192:{NFSU2_TR(0x478192);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x478160u);}goto L478160;}}
}
B478194:L478194:{c.instructions+=2;NFSU2_TR(0x478194);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478198:{NFSU2_TR(0x478198);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47819c:L47819c:{c.instructions+=6;NFSU2_TR(0x47819c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47819f:{NFSU2_TR(0x47819f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4781a0:{NFSU2_TR(0x4781a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4781a1:{NFSU2_TR(0x4781a1);
u8 U[4];
w4(U+0,u32(0x78b7c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4781a6:{NFSU2_TR(0x4781a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4781a8:{NFSU2_TR(0x4781a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4781adull));
TAIL_STATIC(0x4691c0u,469);
}
B4781ad:L4781ad:{c.instructions+=8;NFSU2_TR(0x4781ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4781b0:{NFSU2_TR(0x4781b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4781b3:{NFSU2_TR(0x4781b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4781b6:{NFSU2_TR(0x4781b6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4781b7:{NFSU2_TR(0x4781b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4781b8:{NFSU2_TR(0x4781b8);
u8 U[4];
w4(U+0,u32(0x78b7a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4781bd:{NFSU2_TR(0x4781bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4781bf:{NFSU2_TR(0x4781bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4781c4ull));
TAIL_STATIC(0x4691c0u,469);
}
B4781c4:L4781c4:{c.instructions+=20;NFSU2_TR(0x4781c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4781c7:{NFSU2_TR(0x4781c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4781ca:{NFSU2_TR(0x4781ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4781cd:{NFSU2_TR(0x4781cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4781d0:{NFSU2_TR(0x4781d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4781d6:{NFSU2_TR(0x4781d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4781d9:{NFSU2_TR(0x4781d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B4781dc:{NFSU2_TR(0x4781dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4781e0:{NFSU2_TR(0x4781e0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B4781e2:{NFSU2_TR(0x4781e2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B4781e4:{NFSU2_TR(0x4781e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4781ea:{NFSU2_TR(0x4781ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4781ed:{NFSU2_TR(0x4781ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4781f0:{NFSU2_TR(0x4781f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4781f3:{NFSU2_TR(0x4781f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4781f6:{NFSU2_TR(0x4781f6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4781f8:{NFSU2_TR(0x4781f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4781fb:{NFSU2_TR(0x4781fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4781fe:{NFSU2_TR(0x4781fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478201:{NFSU2_TR(0x478201);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47820b;}}
}
B478203:L478203:{c.instructions+=3;NFSU2_TR(0x478203);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B478206:{NFSU2_TR(0x478206);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478209:{NFSU2_TR(0x478209);
{goto L478212;}
}
B47820b:L47820b:{c.instructions+=1;NFSU2_TR(0x47820b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B478212:L478212:{c.instructions+=3;NFSU2_TR(0x478212);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+20))));
}
B478214:{NFSU2_TR(0x478214);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478216:{NFSU2_TR(0x478216);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47821e;}}
}
B478218:L478218:{c.instructions+=2;NFSU2_TR(0x478218);
__builtin_memmove((R+4),(R+12),4);
}
B47821a:{NFSU2_TR(0x47821a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47821c:L47821c:{c.instructions+=1;NFSU2_TR(0x47821c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L47821e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47821cu);}goto L47821c;}
}
B47821e:L47821e:{c.instructions+=5;NFSU2_TR(0x47821e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478221:{NFSU2_TR(0x478221);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B478222:{NFSU2_TR(0x478222);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B478224:{NFSU2_TR(0x478224);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478228:{NFSU2_TR(0x478228);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47813cu);}goto L47813c;}}
}
B47822e:L47822e:{c.instructions+=2;NFSU2_TR(0x47822e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47822f:{NFSU2_TR(0x47822f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B478230:L478230:{c.instructions+=4;NFSU2_TR(0x478230);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B478231:{NFSU2_TR(0x478231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B478232:{NFSU2_TR(0x478232);
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
B478235:{NFSU2_TR(0x478235);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B478240:L478240:{c.instructions+=20;NFSU2_TR(0x478240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B478243:{NFSU2_TR(0x478243);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478244:{NFSU2_TR(0x478244);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478245:{NFSU2_TR(0x478245);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478246:{NFSU2_TR(0x478246);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478247:{NFSU2_TR(0x478247);
__builtin_memmove((R+28),(R+4),4);
}
B478249:{NFSU2_TR(0x478249);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47824d:{NFSU2_TR(0x47824d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478250:{NFSU2_TR(0x478250);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B478252:{NFSU2_TR(0x478252);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B478255:{NFSU2_TR(0x478255);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478259:{NFSU2_TR(0x478259);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47825c:{NFSU2_TR(0x47825c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47825d:{NFSU2_TR(0x47825d);
u8 U[4];
w4(U+0,u32(0x78b9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478262:{NFSU2_TR(0x478262);
__builtin_memmove((R+24),(R+20),4);
}
B478264:{NFSU2_TR(0x478264);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478266:{NFSU2_TR(0x478266);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47826a:{NFSU2_TR(0x47826a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47826e:{NFSU2_TR(0x47826e);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xf0000000ull))));
}
B478274:{NFSU2_TR(0x478274);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478279ull));
TAIL_STATIC(0x4691c0u,469);
}
B478279:L478279:{c.instructions+=2;NFSU2_TR(0x478279);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B47827c:{NFSU2_TR(0x47827c);
__builtin_memmove((R+16),(R+16),4);
}
B478280:L478280:{c.instructions+=2;NFSU2_TR(0x478280);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478286:{NFSU2_TR(0x478286);
if(r1(R+518)){{goto L478294;}}
}
B478288:L478288:{c.instructions+=2;NFSU2_TR(0x478288);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20020000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47828e:{NFSU2_TR(0x47828e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478610;}}
}
B478294:L478294:{c.instructions+=7;NFSU2_TR(0x478294);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478297:{NFSU2_TR(0x478297);
__builtin_memmove((R+24),(R+20),4);
}
B478299:{NFSU2_TR(0x478299);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B47829c:{NFSU2_TR(0x47829c);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffull))));
}
B4782a2:{NFSU2_TR(0x4782a2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4782a4:{NFSU2_TR(0x4782a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4782a8:{NFSU2_TR(0x4782a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478412;}}
}
B4782ae:L4782ae:{c.instructions+=7;NFSU2_TR(0x4782ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4782b1:{NFSU2_TR(0x4782b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4782b4:{NFSU2_TR(0x4782b4);
__builtin_memmove((R+4),(R+20),4);
}
B4782b6:{NFSU2_TR(0x4782b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B4782b9:{NFSU2_TR(0x4782b9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0ull))));
}
B4782bf:{NFSU2_TR(0x4782bf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4782c1:{NFSU2_TR(0x4782c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478412;}}
}
B4782c7:L4782c7:{c.instructions+=4;NFSU2_TR(0x4782c7);
__builtin_memmove((R+12),(R+20),4);
}
B4782c9:{NFSU2_TR(0x4782c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B4782cc:{NFSU2_TR(0x4782cc);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B4782cf:{NFSU2_TR(0x4782cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4782f0;}}
}
B4782d1:L4782d1:{c.instructions+=3;NFSU2_TR(0x4782d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4782d4:{NFSU2_TR(0x4782d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4782d6:{NFSU2_TR(0x4782d6);
if(r1(R+518)){{goto L478303;}}
}
B4782d8:L4782d8:{c.instructions+=2;NFSU2_TR(0x4782d8);
__builtin_memmove((R+4),(R+8),4);
}
B4782da:{NFSU2_TR(0x4782da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4782dfull));
TAIL_STATIC(0x467e40u,467);
}
B4782df:L4782df:{c.instructions+=2;NFSU2_TR(0x4782df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4782e1:{NFSU2_TR(0x4782e1);
if(r1(R+518)){{goto L4782ec;}}
}
B4782e3:L4782e3:{c.instructions+=2;NFSU2_TR(0x4782e3);
__builtin_memmove((R+4),(R+8),4);
}
B4782e5:{NFSU2_TR(0x4782e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4782eaull));
TAIL_STATIC(0x467e40u,467);
}
B4782ea:L4782ea:{c.instructions+=1;NFSU2_TR(0x4782ea);
{goto L478303;}
}
B4782ec:L4782ec:{c.instructions+=2;NFSU2_TR(0x4782ec);
__builtin_memmove((R+0),(R+8),4);
}
B4782ee:{NFSU2_TR(0x4782ee);
{goto L478303;}
}
B4782f0:L4782f0:{c.instructions+=2;NFSU2_TR(0x4782f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4782f3:{NFSU2_TR(0x4782f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478303;}}
}
B4782f5:L4782f5:{c.instructions+=2;NFSU2_TR(0x4782f5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4782f8:{NFSU2_TR(0x4782f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478303;}}
}
B4782fa:L4782fa:{c.instructions+=3;NFSU2_TR(0x4782fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4782fd:{NFSU2_TR(0x4782fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4782ff:{NFSU2_TR(0x4782ff);
if(r1(R+518)){{goto L478303;}}
}
B478301:L478301:{c.instructions+=1;NFSU2_TR(0x478301);
__builtin_memmove((R+0),(R+4),4);
}
B478303:L478303:{c.instructions+=14;NFSU2_TR(0x478303);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478306:{NFSU2_TR(0x478306);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47830a:{NFSU2_TR(0x47830a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B47830d:{NFSU2_TR(0x47830d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478310:{NFSU2_TR(0x478310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B478312:{NFSU2_TR(0x478312);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478315:{NFSU2_TR(0x478315);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478319:{NFSU2_TR(0x478319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47831b:{NFSU2_TR(0x47831b);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffull))));
}
B478321:{NFSU2_TR(0x478321);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B478324:{NFSU2_TR(0x478324);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B478327:{NFSU2_TR(0x478327);
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
B47832a:{NFSU2_TR(0x47832a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47832b:{NFSU2_TR(0x47832b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47832eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47832e:L47832e:{c.instructions+=2;NFSU2_TR(0x47832e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478330:{NFSU2_TR(0x478330);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478354;}}
}
B478332:L478332:{c.instructions+=4;NFSU2_TR(0x478332);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478335:{NFSU2_TR(0x478335);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B478338:{NFSU2_TR(0x478338);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47833a:{NFSU2_TR(0x47833a);
if(r1(R+518)){{goto L47836d;}}
}
B47833c:L47833c:{c.instructions+=2;NFSU2_TR(0x47833c);
__builtin_memmove((R+4),(R+24),4);
}
B47833e:{NFSU2_TR(0x47833e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478343ull));
TAIL_STATIC(0x467e40u,467);
}
B478343:L478343:{c.instructions+=2;NFSU2_TR(0x478343);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478345:{NFSU2_TR(0x478345);
if(r1(R+518)){{goto L478350;}}
}
B478347:L478347:{c.instructions+=2;NFSU2_TR(0x478347);
__builtin_memmove((R+4),(R+24),4);
}
B478349:{NFSU2_TR(0x478349);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47834eull));
TAIL_STATIC(0x467e40u,467);
}
B47834e:L47834e:{c.instructions+=1;NFSU2_TR(0x47834e);
{goto L47836f;}
}
B478350:L478350:{c.instructions+=2;NFSU2_TR(0x478350);
__builtin_memmove((R+0),(R+24),4);
}
B478352:{NFSU2_TR(0x478352);
{goto L47836f;}
}
B478354:L478354:{c.instructions+=2;NFSU2_TR(0x478354);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478357:{NFSU2_TR(0x478357);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47836a;}}
}
B478359:L478359:{c.instructions+=2;NFSU2_TR(0x478359);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47835c:{NFSU2_TR(0x47835c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47836a;}}
}
B47835e:L47835e:{c.instructions+=4;NFSU2_TR(0x47835e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478361:{NFSU2_TR(0x478361);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478364:{NFSU2_TR(0x478364);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478366:{NFSU2_TR(0x478366);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47836f;}}
}
B478368:L478368:{c.instructions+=1;NFSU2_TR(0x478368);
{goto L47836d;}
}
B47836a:L47836a:{c.instructions+=1;NFSU2_TR(0x47836a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47836d:L47836d:{c.instructions+=1;NFSU2_TR(0x47836d);
__builtin_memmove((R+0),(R+8),4);
}
B47836f:L47836f:{c.instructions+=10;NFSU2_TR(0x47836f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478372:{NFSU2_TR(0x478372);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478376:{NFSU2_TR(0x478376);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B478379:{NFSU2_TR(0x478379);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47837c:{NFSU2_TR(0x47837c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47837e:{NFSU2_TR(0x47837e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478381:{NFSU2_TR(0x478381);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B478384:{NFSU2_TR(0x478384);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B478387:{NFSU2_TR(0x478387);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478389:{NFSU2_TR(0x478389);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4783aa;}}
}
B47838b:L47838b:{c.instructions+=3;NFSU2_TR(0x47838b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47838e:{NFSU2_TR(0x47838e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478390:{NFSU2_TR(0x478390);
if(r1(R+518)){{goto L4783bd;}}
}
B478392:L478392:{c.instructions+=2;NFSU2_TR(0x478392);
__builtin_memmove((R+4),(R+28),4);
}
B478394:{NFSU2_TR(0x478394);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478399ull));
TAIL_STATIC(0x467e40u,467);
}
B478399:L478399:{c.instructions+=2;NFSU2_TR(0x478399);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47839b:{NFSU2_TR(0x47839b);
if(r1(R+518)){{goto L4783a6;}}
}
B47839d:L47839d:{c.instructions+=2;NFSU2_TR(0x47839d);
__builtin_memmove((R+4),(R+28),4);
}
B47839f:{NFSU2_TR(0x47839f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4783a4ull));
TAIL_STATIC(0x467e40u,467);
}
B4783a4:L4783a4:{c.instructions+=1;NFSU2_TR(0x4783a4);
{goto L4783bb;}
}
B4783a6:L4783a6:{c.instructions+=2;NFSU2_TR(0x4783a6);
__builtin_memmove((R+8),(R+28),4);
}
B4783a8:{NFSU2_TR(0x4783a8);
{goto L4783bd;}
}
B4783aa:L4783aa:{c.instructions+=2;NFSU2_TR(0x4783aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4783ad:{NFSU2_TR(0x4783ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4783bd;}}
}
B4783af:L4783af:{c.instructions+=2;NFSU2_TR(0x4783af);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4783b2:{NFSU2_TR(0x4783b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4783bd;}}
}
B4783b4:L4783b4:{c.instructions+=3;NFSU2_TR(0x4783b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4783b7:{NFSU2_TR(0x4783b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4783b9:{NFSU2_TR(0x4783b9);
if(r1(R+518)){{goto L4783bd;}}
}
B4783bb:L4783bb:{c.instructions+=1;NFSU2_TR(0x4783bb);
__builtin_memmove((R+8),(R+0),4);
}
B4783bd:L4783bd:{c.instructions+=17;NFSU2_TR(0x4783bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4783c0:{NFSU2_TR(0x4783c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4783c2:{NFSU2_TR(0x4783c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4783c6:{NFSU2_TR(0x4783c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4783c7:{NFSU2_TR(0x4783c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4783ca:{NFSU2_TR(0x4783ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4783cd:{NFSU2_TR(0x4783cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4783cf:{NFSU2_TR(0x4783cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4783d2:{NFSU2_TR(0x4783d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4783d5:{NFSU2_TR(0x4783d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4783d9:{NFSU2_TR(0x4783d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4783dc:{NFSU2_TR(0x4783dc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B4783df:{NFSU2_TR(0x4783df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4783e0:{NFSU2_TR(0x4783e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4783e1:{NFSU2_TR(0x4783e1);
u8 U[4];
w4(U+0,u32(0x78b9a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4783e6:{NFSU2_TR(0x4783e6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4783e8:{NFSU2_TR(0x4783e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4783edull));
TAIL_STATIC(0x4691c0u,469);
}
B4783ed:L4783ed:{c.instructions+=2;NFSU2_TR(0x4783ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4783f1:{NFSU2_TR(0x4783f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4783f4:L4783f4:{c.instructions+=8;NFSU2_TR(0x4783f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4783f8:{NFSU2_TR(0x4783f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B4783fa:{NFSU2_TR(0x4783fa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4783fd:{NFSU2_TR(0x4783fd);
__builtin_memmove((R+24),(R+20),4);
}
B4783ff:{NFSU2_TR(0x4783ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478403:{NFSU2_TR(0x478403);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478407:{NFSU2_TR(0x478407);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xf0000000ull))));
}
B47840d:{NFSU2_TR(0x47840d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x478280u);}goto L478280;}
}
B478412:L478412:{c.instructions+=4;NFSU2_TR(0x478412);
__builtin_memmove((R+12),(R+20),4);
}
B478414:{NFSU2_TR(0x478414);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B478417:{NFSU2_TR(0x478417);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B47841a:{NFSU2_TR(0x47841a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47843e;}}
}
B47841c:L47841c:{c.instructions+=4;NFSU2_TR(0x47841c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47841f:{NFSU2_TR(0x47841f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478422:{NFSU2_TR(0x478422);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478424:{NFSU2_TR(0x478424);
if(r1(R+518)){{goto L478459;}}
}
B478426:L478426:{c.instructions+=2;NFSU2_TR(0x478426);
__builtin_memmove((R+4),(R+8),4);
}
B478428:{NFSU2_TR(0x478428);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47842dull));
TAIL_STATIC(0x467e40u,467);
}
B47842d:L47842d:{c.instructions+=2;NFSU2_TR(0x47842d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47842f:{NFSU2_TR(0x47842f);
if(r1(R+518)){{goto L47843a;}}
}
B478431:L478431:{c.instructions+=2;NFSU2_TR(0x478431);
__builtin_memmove((R+4),(R+8),4);
}
B478433:{NFSU2_TR(0x478433);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478438ull));
TAIL_STATIC(0x467e40u,467);
}
B478438:L478438:{c.instructions+=1;NFSU2_TR(0x478438);
{goto L478459;}
}
B47843a:L47843a:{c.instructions+=2;NFSU2_TR(0x47843a);
__builtin_memmove((R+0),(R+8),4);
}
B47843c:{NFSU2_TR(0x47843c);
{goto L478459;}
}
B47843e:L47843e:{c.instructions+=2;NFSU2_TR(0x47843e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478441:{NFSU2_TR(0x478441);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478456;}}
}
B478443:L478443:{c.instructions+=2;NFSU2_TR(0x478443);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478446:{NFSU2_TR(0x478446);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478456;}}
}
B478448:L478448:{c.instructions+=4;NFSU2_TR(0x478448);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47844b:{NFSU2_TR(0x47844b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47844e:{NFSU2_TR(0x47844e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478450:{NFSU2_TR(0x478450);
if(r1(R+518)){{goto L478459;}}
}
B478452:L478452:{c.instructions+=2;NFSU2_TR(0x478452);
__builtin_memmove((R+0),(R+4),4);
}
B478454:{NFSU2_TR(0x478454);
{goto L478459;}
}
B478456:L478456:{c.instructions+=1;NFSU2_TR(0x478456);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478459:L478459:{c.instructions+=3;NFSU2_TR(0x478459);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B47845d:{NFSU2_TR(0x47845d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47845f:{NFSU2_TR(0x47845f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4783f4u);}goto L4783f4;}}
}
B478461:L478461:{c.instructions+=3;NFSU2_TR(0x478461);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B478468:{NFSU2_TR(0x478468);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B478470:{NFSU2_TR(0x478470);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478474:L478474:{c.instructions+=2;NFSU2_TR(0x478474);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478476:{NFSU2_TR(0x478476);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47849a;}}
}
B478478:L478478:{c.instructions+=4;NFSU2_TR(0x478478);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47847b:{NFSU2_TR(0x47847b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47847e:{NFSU2_TR(0x47847e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478480:{NFSU2_TR(0x478480);
if(r1(R+518)){{goto L4784b3;}}
}
B478482:L478482:{c.instructions+=2;NFSU2_TR(0x478482);
__builtin_memmove((R+4),(R+24),4);
}
B478484:{NFSU2_TR(0x478484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478489ull));
TAIL_STATIC(0x467e40u,467);
}
B478489:L478489:{c.instructions+=2;NFSU2_TR(0x478489);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47848b:{NFSU2_TR(0x47848b);
if(r1(R+518)){{goto L478496;}}
}
B47848d:L47848d:{c.instructions+=2;NFSU2_TR(0x47848d);
__builtin_memmove((R+4),(R+24),4);
}
B47848f:{NFSU2_TR(0x47848f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478494ull));
TAIL_STATIC(0x467e40u,467);
}
B478494:L478494:{c.instructions+=1;NFSU2_TR(0x478494);
{goto L4784b5;}
}
B478496:L478496:{c.instructions+=2;NFSU2_TR(0x478496);
__builtin_memmove((R+0),(R+24),4);
}
B478498:{NFSU2_TR(0x478498);
{goto L4784b5;}
}
B47849a:L47849a:{c.instructions+=2;NFSU2_TR(0x47849a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47849d:{NFSU2_TR(0x47849d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4784b0;}}
}
B47849f:L47849f:{c.instructions+=2;NFSU2_TR(0x47849f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4784a2:{NFSU2_TR(0x4784a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4784b0;}}
}
B4784a4:L4784a4:{c.instructions+=4;NFSU2_TR(0x4784a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4784a7:{NFSU2_TR(0x4784a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4784aa:{NFSU2_TR(0x4784aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4784ac:{NFSU2_TR(0x4784ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4784b5;}}
}
B4784ae:L4784ae:{c.instructions+=1;NFSU2_TR(0x4784ae);
{goto L4784b3;}
}
B4784b0:L4784b0:{c.instructions+=1;NFSU2_TR(0x4784b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4784b3:L4784b3:{c.instructions+=1;NFSU2_TR(0x4784b3);
__builtin_memmove((R+0),(R+8),4);
}
B4784b5:L4784b5:{c.instructions+=4;NFSU2_TR(0x4784b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4784b9:{NFSU2_TR(0x4784b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4784bd:{NFSU2_TR(0x4784bd);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+12)));
w4(U+16,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
}
B4784c0:{NFSU2_TR(0x4784c0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4783f4u);}goto L4783f4;}}
}
B4784c6:L4784c6:{c.instructions+=2;NFSU2_TR(0x4784c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4784c8:{NFSU2_TR(0x4784c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4784e9;}}
}
B4784ca:L4784ca:{c.instructions+=3;NFSU2_TR(0x4784ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4784cd:{NFSU2_TR(0x4784cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4784cf:{NFSU2_TR(0x4784cf);
if(r1(R+518)){{goto L4784fa;}}
}
B4784d1:L4784d1:{c.instructions+=2;NFSU2_TR(0x4784d1);
__builtin_memmove((R+4),(R+24),4);
}
B4784d3:{NFSU2_TR(0x4784d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4784d8ull));
TAIL_STATIC(0x467e40u,467);
}
B4784d8:L4784d8:{c.instructions+=2;NFSU2_TR(0x4784d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4784da:{NFSU2_TR(0x4784da);
if(r1(R+518)){{goto L4784e5;}}
}
B4784dc:L4784dc:{c.instructions+=2;NFSU2_TR(0x4784dc);
__builtin_memmove((R+4),(R+24),4);
}
B4784de:{NFSU2_TR(0x4784de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4784e3ull));
TAIL_STATIC(0x467e40u,467);
}
B4784e3:L4784e3:{c.instructions+=1;NFSU2_TR(0x4784e3);
{goto L4784fc;}
}
B4784e5:L4784e5:{c.instructions+=2;NFSU2_TR(0x4784e5);
__builtin_memmove((R+0),(R+24),4);
}
B4784e7:{NFSU2_TR(0x4784e7);
{goto L4784fc;}
}
B4784e9:L4784e9:{c.instructions+=2;NFSU2_TR(0x4784e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4784ec:{NFSU2_TR(0x4784ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4784fa;}}
}
B4784ee:L4784ee:{c.instructions+=2;NFSU2_TR(0x4784ee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4784f1:{NFSU2_TR(0x4784f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4784fa;}}
}
B4784f3:L4784f3:{c.instructions+=3;NFSU2_TR(0x4784f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4784f6:{NFSU2_TR(0x4784f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4784f8:{NFSU2_TR(0x4784f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4784fc;}}
}
B4784fa:L4784fa:{c.instructions+=1;NFSU2_TR(0x4784fa);
__builtin_memmove((R+0),(R+8),4);
}
B4784fc:L4784fc:{c.instructions+=13;NFSU2_TR(0x4784fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4784ff:{NFSU2_TR(0x4784ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478503:{NFSU2_TR(0x478503);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B478506:{NFSU2_TR(0x478506);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478509:{NFSU2_TR(0x478509);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47850d:{NFSU2_TR(0x47850d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47850f:{NFSU2_TR(0x47850f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478512:{NFSU2_TR(0x478512);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffull))));
}
B478518:{NFSU2_TR(0x478518);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B47851b:{NFSU2_TR(0x47851b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B47851e:{NFSU2_TR(0x47851e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B478521:{NFSU2_TR(0x478521);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478523:{NFSU2_TR(0x478523);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478544;}}
}
B478525:L478525:{c.instructions+=3;NFSU2_TR(0x478525);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B478528:{NFSU2_TR(0x478528);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47852a:{NFSU2_TR(0x47852a);
if(r1(R+518)){{goto L478557;}}
}
B47852c:L47852c:{c.instructions+=2;NFSU2_TR(0x47852c);
__builtin_memmove((R+4),(R+20),4);
}
B47852e:{NFSU2_TR(0x47852e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478533ull));
TAIL_STATIC(0x467e40u,467);
}
B478533:L478533:{c.instructions+=2;NFSU2_TR(0x478533);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478535:{NFSU2_TR(0x478535);
if(r1(R+518)){{goto L478540;}}
}
B478537:L478537:{c.instructions+=2;NFSU2_TR(0x478537);
__builtin_memmove((R+4),(R+20),4);
}
B478539:{NFSU2_TR(0x478539);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47853eull));
TAIL_STATIC(0x467e40u,467);
}
B47853e:L47853e:{c.instructions+=1;NFSU2_TR(0x47853e);
{goto L478555;}
}
B478540:L478540:{c.instructions+=2;NFSU2_TR(0x478540);
__builtin_memmove((R+8),(R+20),4);
}
B478542:{NFSU2_TR(0x478542);
{goto L478557;}
}
B478544:L478544:{c.instructions+=2;NFSU2_TR(0x478544);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478547:{NFSU2_TR(0x478547);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478557;}}
}
B478549:L478549:{c.instructions+=2;NFSU2_TR(0x478549);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47854c:{NFSU2_TR(0x47854c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478557;}}
}
B47854e:L47854e:{c.instructions+=3;NFSU2_TR(0x47854e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478551:{NFSU2_TR(0x478551);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478553:{NFSU2_TR(0x478553);
if(r1(R+518)){{goto L478557;}}
}
B478555:L478555:{c.instructions+=1;NFSU2_TR(0x478555);
__builtin_memmove((R+8),(R+0),4);
}
B478557:L478557:{c.instructions+=17;NFSU2_TR(0x478557);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47855a:{NFSU2_TR(0x47855a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47855c:{NFSU2_TR(0x47855c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B478560:{NFSU2_TR(0x478560);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B478563:{NFSU2_TR(0x478563);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B478567:{NFSU2_TR(0x478567);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478568:{NFSU2_TR(0x478568);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47856b:{NFSU2_TR(0x47856b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47856d:{NFSU2_TR(0x47856d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478570:{NFSU2_TR(0x478570);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B478573:{NFSU2_TR(0x478573);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478576:{NFSU2_TR(0x478576);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B478579:{NFSU2_TR(0x478579);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47857a:{NFSU2_TR(0x47857a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47857b:{NFSU2_TR(0x47857b);
u8 U[4];
w4(U+0,u32(0x78b96cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478580:{NFSU2_TR(0x478580);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478582:{NFSU2_TR(0x478582);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478587ull));
TAIL_STATIC(0x4691c0u,469);
}
B478587:L478587:{c.instructions+=3;NFSU2_TR(0x478587);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B47858a:{NFSU2_TR(0x47858a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47858c:{NFSU2_TR(0x47858c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4785b4;}}
}
B47858e:L47858e:{c.instructions+=5;NFSU2_TR(0x47858e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478592:{NFSU2_TR(0x478592);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478595:{NFSU2_TR(0x478595);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478598:{NFSU2_TR(0x478598);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47859a:{NFSU2_TR(0x47859a);
if(r1(R+518)){{goto L4785e0;}}
}
B47859c:L47859c:{c.instructions+=2;NFSU2_TR(0x47859c);
__builtin_memmove((R+4),(R+8),4);
}
B47859e:{NFSU2_TR(0x47859e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4785a3ull));
TAIL_STATIC(0x467e40u,467);
}
B4785a3:L4785a3:{c.instructions+=2;NFSU2_TR(0x4785a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4785a5:{NFSU2_TR(0x4785a5);
if(r1(R+518)){{goto L4785b0;}}
}
B4785a7:L4785a7:{c.instructions+=2;NFSU2_TR(0x4785a7);
__builtin_memmove((R+4),(R+8),4);
}
B4785a9:{NFSU2_TR(0x4785a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4785aeull));
TAIL_STATIC(0x467e40u,467);
}
B4785ae:L4785ae:{c.instructions+=1;NFSU2_TR(0x4785ae);
{goto L4785e0;}
}
B4785b0:L4785b0:{c.instructions+=2;NFSU2_TR(0x4785b0);
__builtin_memmove((R+0),(R+8),4);
}
B4785b2:{NFSU2_TR(0x4785b2);
{goto L4785e0;}
}
B4785b4:L4785b4:{c.instructions+=2;NFSU2_TR(0x4785b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4785b7:{NFSU2_TR(0x4785b7);
if(r1(R+518)){{goto L4785c2;}}
}
B4785b9:L4785b9:{c.instructions+=3;NFSU2_TR(0x4785b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4785bd:{NFSU2_TR(0x4785bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4785c0:{NFSU2_TR(0x4785c0);
{goto L4785e0;}
}
B4785c2:L4785c2:{c.instructions+=2;NFSU2_TR(0x4785c2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4785c5:{NFSU2_TR(0x4785c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4785d9;}}
}
B4785c7:L4785c7:{c.instructions+=5;NFSU2_TR(0x4785c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4785cb:{NFSU2_TR(0x4785cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4785ce:{NFSU2_TR(0x4785ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4785d1:{NFSU2_TR(0x4785d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4785d3:{NFSU2_TR(0x4785d3);
if(r1(R+518)){{goto L4785e0;}}
}
B4785d5:L4785d5:{c.instructions+=2;NFSU2_TR(0x4785d5);
__builtin_memmove((R+0),(R+4),4);
}
B4785d7:{NFSU2_TR(0x4785d7);
{goto L4785e0;}
}
B4785d9:L4785d9:{c.instructions+=2;NFSU2_TR(0x4785d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4785dd:{NFSU2_TR(0x4785dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4785e0:L4785e0:{c.instructions+=11;NFSU2_TR(0x4785e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4785e3:{NFSU2_TR(0x4785e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4785e6:{NFSU2_TR(0x4785e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4785e9:{NFSU2_TR(0x4785e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4785eb:{NFSU2_TR(0x4785eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4785ee:{NFSU2_TR(0x4785ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4785f1:{NFSU2_TR(0x4785f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4785f3:{NFSU2_TR(0x4785f3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4785f6:{NFSU2_TR(0x4785f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4785f7:{NFSU2_TR(0x4785f7);
__builtin_memmove((R+4),(R+28),4);
}
B4785f9:{NFSU2_TR(0x4785f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4785fcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4785fc:L4785fc:{c.instructions+=5;NFSU2_TR(0x4785fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478600:{NFSU2_TR(0x478600);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B478604:{NFSU2_TR(0x478604);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B478605:{NFSU2_TR(0x478605);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478609:{NFSU2_TR(0x478609);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x478474u);}goto L478474;}
}
B478610:L478610:{c.instructions+=2;NFSU2_TR(0x478610);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478616:{NFSU2_TR(0x478616);
if(r1(R+518)){{goto L478624;}}
}
B478618:L478618:{c.instructions+=2;NFSU2_TR(0x478618);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20030000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47861e:{NFSU2_TR(0x47861e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4789b8;}}
}
B478624:L478624:{c.instructions+=7;NFSU2_TR(0x478624);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478627:{NFSU2_TR(0x478627);
__builtin_memmove((R+0),(R+20),4);
}
B478629:{NFSU2_TR(0x478629);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B47862c:{NFSU2_TR(0x47862c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B478631:{NFSU2_TR(0x478631);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478633:{NFSU2_TR(0x478633);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478637:{NFSU2_TR(0x478637);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4787bc;}}
}
B47863d:L47863d:{c.instructions+=7;NFSU2_TR(0x47863d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478640:{NFSU2_TR(0x478640);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478643:{NFSU2_TR(0x478643);
__builtin_memmove((R+8),(R+20),4);
}
B478645:{NFSU2_TR(0x478645);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B478648:{NFSU2_TR(0x478648);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xf0ull))));
}
B47864e:{NFSU2_TR(0x47864e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478650:{NFSU2_TR(0x478650);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4787bc;}}
}
B478656:L478656:{c.instructions+=5;NFSU2_TR(0x478656);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47865a:{NFSU2_TR(0x47865a);
__builtin_memmove((R+12),(R+8),4);
}
B47865c:{NFSU2_TR(0x47865c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B47865f:{NFSU2_TR(0x47865f);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B478662:{NFSU2_TR(0x478662);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478683;}}
}
B478664:L478664:{c.instructions+=3;NFSU2_TR(0x478664);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B478667:{NFSU2_TR(0x478667);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478669:{NFSU2_TR(0x478669);
if(r1(R+518)){{goto L478696;}}
}
B47866b:L47866b:{c.instructions+=2;NFSU2_TR(0x47866b);
__builtin_memmove((R+4),(R+24),4);
}
B47866d:{NFSU2_TR(0x47866d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478672ull));
TAIL_STATIC(0x467e40u,467);
}
B478672:L478672:{c.instructions+=2;NFSU2_TR(0x478672);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478674:{NFSU2_TR(0x478674);
if(r1(R+518)){{goto L47867f;}}
}
B478676:L478676:{c.instructions+=2;NFSU2_TR(0x478676);
__builtin_memmove((R+4),(R+24),4);
}
B478678:{NFSU2_TR(0x478678);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47867dull));
TAIL_STATIC(0x467e40u,467);
}
B47867d:L47867d:{c.instructions+=1;NFSU2_TR(0x47867d);
{goto L478696;}
}
B47867f:L47867f:{c.instructions+=2;NFSU2_TR(0x47867f);
__builtin_memmove((R+0),(R+24),4);
}
B478681:{NFSU2_TR(0x478681);
{goto L478696;}
}
B478683:L478683:{c.instructions+=2;NFSU2_TR(0x478683);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478686:{NFSU2_TR(0x478686);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478696;}}
}
B478688:L478688:{c.instructions+=2;NFSU2_TR(0x478688);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47868b:{NFSU2_TR(0x47868b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478696;}}
}
B47868d:L47868d:{c.instructions+=3;NFSU2_TR(0x47868d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478690:{NFSU2_TR(0x478690);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478692:{NFSU2_TR(0x478692);
if(r1(R+518)){{goto L478696;}}
}
B478694:L478694:{c.instructions+=1;NFSU2_TR(0x478694);
__builtin_memmove((R+0),(R+4),4);
}
B478696:L478696:{c.instructions+=16;NFSU2_TR(0x478696);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478699:{NFSU2_TR(0x478699);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B47869d:{NFSU2_TR(0x47869d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4786a0:{NFSU2_TR(0x4786a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4786a3:{NFSU2_TR(0x4786a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4786a5:{NFSU2_TR(0x4786a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4786a8:{NFSU2_TR(0x4786a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4786ac:{NFSU2_TR(0x4786ac);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B4786b2:{NFSU2_TR(0x4786b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4786b5:{NFSU2_TR(0x4786b5);
__builtin_memmove((R+28),(R+8),4);
}
B4786b7:{NFSU2_TR(0x4786b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4786ba:{NFSU2_TR(0x4786ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4786bc:{NFSU2_TR(0x4786bc);
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
B4786bf:{NFSU2_TR(0x4786bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4786c0:{NFSU2_TR(0x4786c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4786c4:{NFSU2_TR(0x4786c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4786c7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4786c7:L4786c7:{c.instructions+=2;NFSU2_TR(0x4786c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4786c9:{NFSU2_TR(0x4786c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4786f1;}}
}
B4786cb:L4786cb:{c.instructions+=5;NFSU2_TR(0x4786cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4786cf:{NFSU2_TR(0x4786cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4786d2:{NFSU2_TR(0x4786d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4786d5:{NFSU2_TR(0x4786d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4786d7:{NFSU2_TR(0x4786d7);
if(r1(R+518)){{goto L47871b;}}
}
B4786d9:L4786d9:{c.instructions+=2;NFSU2_TR(0x4786d9);
__builtin_memmove((R+4),(R+24),4);
}
B4786db:{NFSU2_TR(0x4786db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4786e0ull));
TAIL_STATIC(0x467e40u,467);
}
B4786e0:L4786e0:{c.instructions+=2;NFSU2_TR(0x4786e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4786e2:{NFSU2_TR(0x4786e2);
if(r1(R+518)){{goto L4786ed;}}
}
B4786e4:L4786e4:{c.instructions+=2;NFSU2_TR(0x4786e4);
__builtin_memmove((R+4),(R+24),4);
}
B4786e6:{NFSU2_TR(0x4786e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4786ebull));
TAIL_STATIC(0x467e40u,467);
}
B4786eb:L4786eb:{c.instructions+=1;NFSU2_TR(0x4786eb);
{goto L47871d;}
}
B4786ed:L4786ed:{c.instructions+=2;NFSU2_TR(0x4786ed);
__builtin_memmove((R+0),(R+24),4);
}
B4786ef:{NFSU2_TR(0x4786ef);
{goto L47871d;}
}
B4786f1:L4786f1:{c.instructions+=2;NFSU2_TR(0x4786f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4786f4:{NFSU2_TR(0x4786f4);
if(r1(R+518)){{goto L4786ff;}}
}
B4786f6:L4786f6:{c.instructions+=3;NFSU2_TR(0x4786f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4786fa:{NFSU2_TR(0x4786fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4786fd:{NFSU2_TR(0x4786fd);
{goto L47871b;}
}
B4786ff:L4786ff:{c.instructions+=2;NFSU2_TR(0x4786ff);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478702:{NFSU2_TR(0x478702);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478714;}}
}
B478704:L478704:{c.instructions+=5;NFSU2_TR(0x478704);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478708:{NFSU2_TR(0x478708);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47870b:{NFSU2_TR(0x47870b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47870e:{NFSU2_TR(0x47870e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478710:{NFSU2_TR(0x478710);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47871d;}}
}
B478712:L478712:{c.instructions+=1;NFSU2_TR(0x478712);
{goto L47871b;}
}
B478714:L478714:{c.instructions+=2;NFSU2_TR(0x478714);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478718:{NFSU2_TR(0x478718);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47871b:L47871b:{c.instructions+=1;NFSU2_TR(0x47871b);
__builtin_memmove((R+0),(R+8),4);
}
B47871d:L47871d:{c.instructions+=9;NFSU2_TR(0x47871d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478720:{NFSU2_TR(0x478720);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B478723:{NFSU2_TR(0x478723);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478726:{NFSU2_TR(0x478726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B478728:{NFSU2_TR(0x478728);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47872b:{NFSU2_TR(0x47872b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B47872e:{NFSU2_TR(0x47872e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B478731:{NFSU2_TR(0x478731);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478733:{NFSU2_TR(0x478733);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478754;}}
}
B478735:L478735:{c.instructions+=3;NFSU2_TR(0x478735);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B478738:{NFSU2_TR(0x478738);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47873a:{NFSU2_TR(0x47873a);
if(r1(R+518)){{goto L478767;}}
}
B47873c:L47873c:{c.instructions+=2;NFSU2_TR(0x47873c);
__builtin_memmove((R+4),(R+28),4);
}
B47873e:{NFSU2_TR(0x47873e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478743ull));
TAIL_STATIC(0x467e40u,467);
}
B478743:L478743:{c.instructions+=2;NFSU2_TR(0x478743);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478745:{NFSU2_TR(0x478745);
if(r1(R+518)){{goto L478750;}}
}
B478747:L478747:{c.instructions+=2;NFSU2_TR(0x478747);
__builtin_memmove((R+4),(R+28),4);
}
B478749:{NFSU2_TR(0x478749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47874eull));
TAIL_STATIC(0x467e40u,467);
}
B47874e:L47874e:{c.instructions+=1;NFSU2_TR(0x47874e);
{goto L478765;}
}
B478750:L478750:{c.instructions+=2;NFSU2_TR(0x478750);
__builtin_memmove((R+8),(R+28),4);
}
B478752:{NFSU2_TR(0x478752);
{goto L478767;}
}
B478754:L478754:{c.instructions+=2;NFSU2_TR(0x478754);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478757:{NFSU2_TR(0x478757);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478767;}}
}
B478759:L478759:{c.instructions+=2;NFSU2_TR(0x478759);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47875c:{NFSU2_TR(0x47875c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478767;}}
}
B47875e:L47875e:{c.instructions+=3;NFSU2_TR(0x47875e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478761:{NFSU2_TR(0x478761);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478763:{NFSU2_TR(0x478763);
if(r1(R+518)){{goto L478767;}}
}
B478765:L478765:{c.instructions+=1;NFSU2_TR(0x478765);
__builtin_memmove((R+8),(R+0),4);
}
B478767:L478767:{c.instructions+=17;NFSU2_TR(0x478767);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47876a:{NFSU2_TR(0x47876a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B47876d:{NFSU2_TR(0x47876d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47876f:{NFSU2_TR(0x47876f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478770:{NFSU2_TR(0x478770);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478773:{NFSU2_TR(0x478773);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B478775:{NFSU2_TR(0x478775);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478778:{NFSU2_TR(0x478778);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47877c:{NFSU2_TR(0x47877c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B47877f:{NFSU2_TR(0x47877f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478783:{NFSU2_TR(0x478783);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478786:{NFSU2_TR(0x478786);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B478789:{NFSU2_TR(0x478789);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47878a:{NFSU2_TR(0x47878a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47878b:{NFSU2_TR(0x47878b);
u8 U[4];
w4(U+0,u32(0x78b938ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478790:{NFSU2_TR(0x478790);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478792:{NFSU2_TR(0x478792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478797ull));
TAIL_STATIC(0x4691c0u,469);
}
B478797:L478797:{c.instructions+=2;NFSU2_TR(0x478797);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47879b:{NFSU2_TR(0x47879b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B47879e:L47879e:{c.instructions+=8;NFSU2_TR(0x47879e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4787a2:{NFSU2_TR(0x4787a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B4787a4:{NFSU2_TR(0x4787a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4787a7:{NFSU2_TR(0x4787a7);
__builtin_memmove((R+24),(R+20),4);
}
B4787a9:{NFSU2_TR(0x4787a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4787ad:{NFSU2_TR(0x4787ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4787b1:{NFSU2_TR(0x4787b1);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xf0000000ull))));
}
B4787b7:{NFSU2_TR(0x4787b7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x478610u);}goto L478610;}
}
B4787bc:L4787bc:{c.instructions+=4;NFSU2_TR(0x4787bc);
__builtin_memmove((R+12),(R+20),4);
}
B4787be:{NFSU2_TR(0x4787be);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B4787c1:{NFSU2_TR(0x4787c1);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B4787c4:{NFSU2_TR(0x4787c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4787e8;}}
}
B4787c6:L4787c6:{c.instructions+=4;NFSU2_TR(0x4787c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4787c9:{NFSU2_TR(0x4787c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4787cc:{NFSU2_TR(0x4787cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4787ce:{NFSU2_TR(0x4787ce);
if(r1(R+518)){{goto L478803;}}
}
B4787d0:L4787d0:{c.instructions+=2;NFSU2_TR(0x4787d0);
__builtin_memmove((R+4),(R+8),4);
}
B4787d2:{NFSU2_TR(0x4787d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4787d7ull));
TAIL_STATIC(0x467e40u,467);
}
B4787d7:L4787d7:{c.instructions+=2;NFSU2_TR(0x4787d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4787d9:{NFSU2_TR(0x4787d9);
if(r1(R+518)){{goto L4787e4;}}
}
B4787db:L4787db:{c.instructions+=2;NFSU2_TR(0x4787db);
__builtin_memmove((R+4),(R+8),4);
}
B4787dd:{NFSU2_TR(0x4787dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4787e2ull));
TAIL_STATIC(0x467e40u,467);
}
B4787e2:L4787e2:{c.instructions+=1;NFSU2_TR(0x4787e2);
{goto L478803;}
}
B4787e4:L4787e4:{c.instructions+=2;NFSU2_TR(0x4787e4);
__builtin_memmove((R+0),(R+8),4);
}
B4787e6:{NFSU2_TR(0x4787e6);
{goto L478803;}
}
B4787e8:L4787e8:{c.instructions+=2;NFSU2_TR(0x4787e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4787eb:{NFSU2_TR(0x4787eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478800;}}
}
B4787ed:L4787ed:{c.instructions+=2;NFSU2_TR(0x4787ed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4787f0:{NFSU2_TR(0x4787f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478800;}}
}
B4787f2:L4787f2:{c.instructions+=4;NFSU2_TR(0x4787f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4787f5:{NFSU2_TR(0x4787f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4787f8:{NFSU2_TR(0x4787f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4787fa:{NFSU2_TR(0x4787fa);
if(r1(R+518)){{goto L478803;}}
}
B4787fc:L4787fc:{c.instructions+=2;NFSU2_TR(0x4787fc);
__builtin_memmove((R+0),(R+4),4);
}
B4787fe:{NFSU2_TR(0x4787fe);
{goto L478803;}
}
B478800:L478800:{c.instructions+=1;NFSU2_TR(0x478800);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478803:L478803:{c.instructions+=4;NFSU2_TR(0x478803);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478807:{NFSU2_TR(0x478807);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B47880b:{NFSU2_TR(0x47880b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47880d:{NFSU2_TR(0x47880d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47879eu);}goto L47879e;}}
}
B47880f:L47880f:{c.instructions+=1;NFSU2_TR(0x47880f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B478817:L478817:{c.instructions+=2;NFSU2_TR(0x478817);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478819:{NFSU2_TR(0x478819);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47883d;}}
}
B47881b:L47881b:{c.instructions+=4;NFSU2_TR(0x47881b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47881e:{NFSU2_TR(0x47881e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B478821:{NFSU2_TR(0x478821);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478823:{NFSU2_TR(0x478823);
if(r1(R+518)){{goto L478856;}}
}
B478825:L478825:{c.instructions+=2;NFSU2_TR(0x478825);
__builtin_memmove((R+4),(R+24),4);
}
B478827:{NFSU2_TR(0x478827);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47882cull));
TAIL_STATIC(0x467e40u,467);
}
B47882c:L47882c:{c.instructions+=2;NFSU2_TR(0x47882c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47882e:{NFSU2_TR(0x47882e);
if(r1(R+518)){{goto L478839;}}
}
B478830:L478830:{c.instructions+=2;NFSU2_TR(0x478830);
__builtin_memmove((R+4),(R+24),4);
}
B478832:{NFSU2_TR(0x478832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478837ull));
TAIL_STATIC(0x467e40u,467);
}
B478837:L478837:{c.instructions+=1;NFSU2_TR(0x478837);
{goto L478858;}
}
B478839:L478839:{c.instructions+=2;NFSU2_TR(0x478839);
__builtin_memmove((R+0),(R+24),4);
}
B47883b:{NFSU2_TR(0x47883b);
{goto L478858;}
}
B47883d:L47883d:{c.instructions+=2;NFSU2_TR(0x47883d);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478840:{NFSU2_TR(0x478840);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478853;}}
}
B478842:L478842:{c.instructions+=2;NFSU2_TR(0x478842);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478845:{NFSU2_TR(0x478845);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478853;}}
}
B478847:L478847:{c.instructions+=4;NFSU2_TR(0x478847);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47884a:{NFSU2_TR(0x47884a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47884d:{NFSU2_TR(0x47884d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47884f:{NFSU2_TR(0x47884f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478858;}}
}
B478851:L478851:{c.instructions+=1;NFSU2_TR(0x478851);
{goto L478856;}
}
B478853:L478853:{c.instructions+=1;NFSU2_TR(0x478853);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478856:L478856:{c.instructions+=1;NFSU2_TR(0x478856);
__builtin_memmove((R+0),(R+8),4);
}
B478858:L478858:{c.instructions+=4;NFSU2_TR(0x478858);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47885c:{NFSU2_TR(0x47885c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478860:{NFSU2_TR(0x478860);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+16)));
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+519,u8(s32(r4(U+20))<s32(u32(0x0ull))));
}
B478864:{NFSU2_TR(0x478864);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47879eu);}goto L47879e;}}
}
B47886a:L47886a:{c.instructions+=2;NFSU2_TR(0x47886a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47886c:{NFSU2_TR(0x47886c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47888d;}}
}
B47886e:L47886e:{c.instructions+=3;NFSU2_TR(0x47886e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B478871:{NFSU2_TR(0x478871);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478873:{NFSU2_TR(0x478873);
if(r1(R+518)){{goto L47889e;}}
}
B478875:L478875:{c.instructions+=2;NFSU2_TR(0x478875);
__builtin_memmove((R+4),(R+24),4);
}
B478877:{NFSU2_TR(0x478877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47887cull));
TAIL_STATIC(0x467e40u,467);
}
B47887c:L47887c:{c.instructions+=2;NFSU2_TR(0x47887c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47887e:{NFSU2_TR(0x47887e);
if(r1(R+518)){{goto L478889;}}
}
B478880:L478880:{c.instructions+=2;NFSU2_TR(0x478880);
__builtin_memmove((R+4),(R+24),4);
}
B478882:{NFSU2_TR(0x478882);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478887ull));
TAIL_STATIC(0x467e40u,467);
}
B478887:L478887:{c.instructions+=1;NFSU2_TR(0x478887);
{goto L4788a0;}
}
B478889:L478889:{c.instructions+=2;NFSU2_TR(0x478889);
__builtin_memmove((R+0),(R+24),4);
}
B47888b:{NFSU2_TR(0x47888b);
{goto L4788a0;}
}
B47888d:L47888d:{c.instructions+=2;NFSU2_TR(0x47888d);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478890:{NFSU2_TR(0x478890);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47889e;}}
}
B478892:L478892:{c.instructions+=2;NFSU2_TR(0x478892);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478895:{NFSU2_TR(0x478895);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47889e;}}
}
B478897:L478897:{c.instructions+=3;NFSU2_TR(0x478897);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47889a:{NFSU2_TR(0x47889a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47889c:{NFSU2_TR(0x47889c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4788a0;}}
}
B47889e:L47889e:{c.instructions+=1;NFSU2_TR(0x47889e);
__builtin_memmove((R+0),(R+8),4);
}
B4788a0:L4788a0:{c.instructions+=13;NFSU2_TR(0x4788a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4788a3:{NFSU2_TR(0x4788a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4788a7:{NFSU2_TR(0x4788a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4788aa:{NFSU2_TR(0x4788aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4788ad:{NFSU2_TR(0x4788ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4788b1:{NFSU2_TR(0x4788b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4788b3:{NFSU2_TR(0x4788b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4788b6:{NFSU2_TR(0x4788b6);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffull))));
}
B4788bc:{NFSU2_TR(0x4788bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B4788bf:{NFSU2_TR(0x4788bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4788c2:{NFSU2_TR(0x4788c2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B4788c5:{NFSU2_TR(0x4788c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4788c7:{NFSU2_TR(0x4788c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4788f2;}}
}
B4788c9:L4788c9:{c.instructions+=3;NFSU2_TR(0x4788c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4788cc:{NFSU2_TR(0x4788cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4788ce:{NFSU2_TR(0x4788ce);
if(r1(R+518)){{goto L4788ec;}}
}
B4788d0:L4788d0:{c.instructions+=2;NFSU2_TR(0x4788d0);
__builtin_memmove((R+4),(R+20),4);
}
B4788d2:{NFSU2_TR(0x4788d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4788d7ull));
TAIL_STATIC(0x467e40u,467);
}
B4788d7:L4788d7:{c.instructions+=2;NFSU2_TR(0x4788d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4788d9:{NFSU2_TR(0x4788d9);
if(r1(R+518)){{goto L4788ea;}}
}
B4788db:L4788db:{c.instructions+=2;NFSU2_TR(0x4788db);
__builtin_memmove((R+4),(R+20),4);
}
B4788dd:{NFSU2_TR(0x4788dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4788e2ull));
TAIL_STATIC(0x467e40u,467);
}
B4788e2:L4788e2:{c.instructions+=3;NFSU2_TR(0x4788e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4788e6:{NFSU2_TR(0x4788e6);
__builtin_memmove((R+8),(R+0),4);
}
B4788e8:{NFSU2_TR(0x4788e8);
{goto L478905;}
}
B4788ea:L4788ea:{c.instructions+=1;NFSU2_TR(0x4788ea);
__builtin_memmove((R+8),(R+20),4);
}
B4788ec:L4788ec:{c.instructions+=2;NFSU2_TR(0x4788ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4788f0:{NFSU2_TR(0x4788f0);
{goto L478905;}
}
B4788f2:L4788f2:{c.instructions+=2;NFSU2_TR(0x4788f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4788f5:{NFSU2_TR(0x4788f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478905;}}
}
B4788f7:L4788f7:{c.instructions+=2;NFSU2_TR(0x4788f7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4788fa:{NFSU2_TR(0x4788fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478905;}}
}
B4788fc:L4788fc:{c.instructions+=3;NFSU2_TR(0x4788fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4788ff:{NFSU2_TR(0x4788ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478901:{NFSU2_TR(0x478901);
if(r1(R+518)){{goto L478905;}}
}
B478903:L478903:{c.instructions+=1;NFSU2_TR(0x478903);
__builtin_memmove((R+8),(R+0),4);
}
B478905:L478905:{c.instructions+=16;NFSU2_TR(0x478905);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478908:{NFSU2_TR(0x478908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47890a:{NFSU2_TR(0x47890a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B47890d:{NFSU2_TR(0x47890d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B478911:{NFSU2_TR(0x478911);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478912:{NFSU2_TR(0x478912);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478915:{NFSU2_TR(0x478915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B478917:{NFSU2_TR(0x478917);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47891a:{NFSU2_TR(0x47891a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B47891d:{NFSU2_TR(0x47891d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478920:{NFSU2_TR(0x478920);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B478923:{NFSU2_TR(0x478923);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478924:{NFSU2_TR(0x478924);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478925:{NFSU2_TR(0x478925);
u8 U[4];
w4(U+0,u32(0x78b908ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47892a:{NFSU2_TR(0x47892a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47892c:{NFSU2_TR(0x47892c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478931ull));
TAIL_STATIC(0x4691c0u,469);
}
B478931:L478931:{c.instructions+=3;NFSU2_TR(0x478931);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B478934:{NFSU2_TR(0x478934);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478936:{NFSU2_TR(0x478936);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47895e;}}
}
B478938:L478938:{c.instructions+=5;NFSU2_TR(0x478938);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47893c:{NFSU2_TR(0x47893c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47893f:{NFSU2_TR(0x47893f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478942:{NFSU2_TR(0x478942);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478944:{NFSU2_TR(0x478944);
if(r1(R+518)){{goto L47898a;}}
}
B478946:L478946:{c.instructions+=2;NFSU2_TR(0x478946);
__builtin_memmove((R+4),(R+8),4);
}
B478948:{NFSU2_TR(0x478948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47894dull));
TAIL_STATIC(0x467e40u,467);
}
B47894d:L47894d:{c.instructions+=2;NFSU2_TR(0x47894d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47894f:{NFSU2_TR(0x47894f);
if(r1(R+518)){{goto L47895a;}}
}
B478951:L478951:{c.instructions+=2;NFSU2_TR(0x478951);
__builtin_memmove((R+4),(R+8),4);
}
B478953:{NFSU2_TR(0x478953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478958ull));
TAIL_STATIC(0x467e40u,467);
}
B478958:L478958:{c.instructions+=1;NFSU2_TR(0x478958);
{goto L47898a;}
}
B47895a:L47895a:{c.instructions+=2;NFSU2_TR(0x47895a);
__builtin_memmove((R+0),(R+8),4);
}
B47895c:{NFSU2_TR(0x47895c);
{goto L47898a;}
}
B47895e:L47895e:{c.instructions+=2;NFSU2_TR(0x47895e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478961:{NFSU2_TR(0x478961);
if(r1(R+518)){{goto L47896c;}}
}
B478963:L478963:{c.instructions+=3;NFSU2_TR(0x478963);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478967:{NFSU2_TR(0x478967);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47896a:{NFSU2_TR(0x47896a);
{goto L47898a;}
}
B47896c:L47896c:{c.instructions+=2;NFSU2_TR(0x47896c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47896f:{NFSU2_TR(0x47896f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478983;}}
}
B478971:L478971:{c.instructions+=5;NFSU2_TR(0x478971);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478975:{NFSU2_TR(0x478975);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478978:{NFSU2_TR(0x478978);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47897b:{NFSU2_TR(0x47897b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47897d:{NFSU2_TR(0x47897d);
if(r1(R+518)){{goto L47898a;}}
}
B47897f:L47897f:{c.instructions+=2;NFSU2_TR(0x47897f);
__builtin_memmove((R+0),(R+4),4);
}
B478981:{NFSU2_TR(0x478981);
{goto L47898a;}
}
B478983:L478983:{c.instructions+=2;NFSU2_TR(0x478983);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478987:{NFSU2_TR(0x478987);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47898a:L47898a:{c.instructions+=11;NFSU2_TR(0x47898a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47898d:{NFSU2_TR(0x47898d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B478990:{NFSU2_TR(0x478990);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478993:{NFSU2_TR(0x478993);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B478995:{NFSU2_TR(0x478995);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478998:{NFSU2_TR(0x478998);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B47899b:{NFSU2_TR(0x47899b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47899d:{NFSU2_TR(0x47899d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4789a0:{NFSU2_TR(0x4789a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4789a1:{NFSU2_TR(0x4789a1);
__builtin_memmove((R+4),(R+28),4);
}
B4789a3:{NFSU2_TR(0x4789a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4789a6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4789a6:L4789a6:{c.instructions+=5;NFSU2_TR(0x4789a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4789aa:{NFSU2_TR(0x4789aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4789ae:{NFSU2_TR(0x4789ae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4789af:{NFSU2_TR(0x4789af);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4789b3:{NFSU2_TR(0x4789b3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x478817u);}goto L478817;}
}
B4789b8:L4789b8:{c.instructions+=2;NFSU2_TR(0x4789b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4789ba:{NFSU2_TR(0x4789ba);
if(r1(R+518)){{goto L4789c8;}}
}
B4789bc:L4789bc:{c.instructions+=2;NFSU2_TR(0x4789bc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb0000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4789c2:{NFSU2_TR(0x4789c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478fd2;}}
}
B4789c8:L4789c8:{c.instructions+=4;NFSU2_TR(0x4789c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4789cc:{NFSU2_TR(0x4789cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4789cf:{NFSU2_TR(0x4789cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4789d2:{NFSU2_TR(0x4789d2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L478fd2;}}
}
B4789d8:L4789d8:{c.instructions+=2;NFSU2_TR(0x4789d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4789da:{NFSU2_TR(0x4789da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478d98;}}
}
B4789e0:L4789e0:{c.instructions+=12;NFSU2_TR(0x4789e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4789e4:{NFSU2_TR(0x4789e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4789e7:{NFSU2_TR(0x4789e7);
__builtin_memmove((R+28),(R+12),4);
}
B4789e9:{NFSU2_TR(0x4789e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4789ea:{NFSU2_TR(0x4789ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B4789ed:{NFSU2_TR(0x4789ed);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffull))));
}
B4789f3:{NFSU2_TR(0x4789f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4789f4:{NFSU2_TR(0x4789f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4789f5:{NFSU2_TR(0x4789f5);
u8 U[4];
w4(U+0,u32(0x78b8e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4789fa:{NFSU2_TR(0x4789fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4789fb:{NFSU2_TR(0x4789fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4789ff:{NFSU2_TR(0x4789ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478a04ull));
TAIL_STATIC(0x4691c0u,469);
}
B478a04:L478a04:{c.instructions+=5;NFSU2_TR(0x478a04);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B478a08:{NFSU2_TR(0x478a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478a0b:{NFSU2_TR(0x478a0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B478a0e:{NFSU2_TR(0x478a0e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478a10:{NFSU2_TR(0x478a10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478b81;}}
}
B478a16:L478a16:{c.instructions+=7;NFSU2_TR(0x478a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478a19:{NFSU2_TR(0x478a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478a1c:{NFSU2_TR(0x478a1c);
__builtin_memmove((R+8),(R+12),4);
}
B478a1e:{NFSU2_TR(0x478a1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B478a21:{NFSU2_TR(0x478a21);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B478a24:{NFSU2_TR(0x478a24);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478a26:{NFSU2_TR(0x478a26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478b81;}}
}
B478a2c:L478a2c:{c.instructions+=3;NFSU2_TR(0x478a2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B478a2f:{NFSU2_TR(0x478a2f);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B478a32:{NFSU2_TR(0x478a32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478a53;}}
}
B478a34:L478a34:{c.instructions+=3;NFSU2_TR(0x478a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478a37:{NFSU2_TR(0x478a37);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478a39:{NFSU2_TR(0x478a39);
if(r1(R+518)){{goto L478a66;}}
}
B478a3b:L478a3b:{c.instructions+=2;NFSU2_TR(0x478a3b);
__builtin_memmove((R+4),(R+8),4);
}
B478a3d:{NFSU2_TR(0x478a3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478a42ull));
TAIL_STATIC(0x467e40u,467);
}
B478a42:L478a42:{c.instructions+=2;NFSU2_TR(0x478a42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478a44:{NFSU2_TR(0x478a44);
if(r1(R+518)){{goto L478a4f;}}
}
B478a46:L478a46:{c.instructions+=2;NFSU2_TR(0x478a46);
__builtin_memmove((R+4),(R+8),4);
}
B478a48:{NFSU2_TR(0x478a48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478a4dull));
TAIL_STATIC(0x467e40u,467);
}
B478a4d:L478a4d:{c.instructions+=1;NFSU2_TR(0x478a4d);
{goto L478a66;}
}
B478a4f:L478a4f:{c.instructions+=2;NFSU2_TR(0x478a4f);
__builtin_memmove((R+0),(R+8),4);
}
B478a51:{NFSU2_TR(0x478a51);
{goto L478a66;}
}
B478a53:L478a53:{c.instructions+=2;NFSU2_TR(0x478a53);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478a56:{NFSU2_TR(0x478a56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478a66;}}
}
B478a58:L478a58:{c.instructions+=2;NFSU2_TR(0x478a58);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478a5b:{NFSU2_TR(0x478a5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478a66;}}
}
B478a5d:L478a5d:{c.instructions+=3;NFSU2_TR(0x478a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478a60:{NFSU2_TR(0x478a60);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478a62:{NFSU2_TR(0x478a62);
if(r1(R+518)){{goto L478a66;}}
}
B478a64:L478a64:{c.instructions+=1;NFSU2_TR(0x478a64);
__builtin_memmove((R+0),(R+4),4);
}
B478a66:L478a66:{c.instructions+=13;NFSU2_TR(0x478a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478a69:{NFSU2_TR(0x478a69);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B478a6c:{NFSU2_TR(0x478a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478a6f:{NFSU2_TR(0x478a6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B478a71:{NFSU2_TR(0x478a71);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B478a75:{NFSU2_TR(0x478a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478a78:{NFSU2_TR(0x478a78);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478a7c:{NFSU2_TR(0x478a7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B478a7e:{NFSU2_TR(0x478a7e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B478a84:{NFSU2_TR(0x478a84);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+24),4);
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+24))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B478a87:{NFSU2_TR(0x478a87);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B478a8a:{NFSU2_TR(0x478a8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B478a8c:{NFSU2_TR(0x478a8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478a8full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B478a8f:L478a8f:{c.instructions+=3;NFSU2_TR(0x478a8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478a93:{NFSU2_TR(0x478a93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478a94:{NFSU2_TR(0x478a94);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478a97ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B478a97:L478a97:{c.instructions+=2;NFSU2_TR(0x478a97);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478a99:{NFSU2_TR(0x478a99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478abd;}}
}
B478a9b:L478a9b:{c.instructions+=4;NFSU2_TR(0x478a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478a9e:{NFSU2_TR(0x478a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B478aa1:{NFSU2_TR(0x478aa1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478aa3:{NFSU2_TR(0x478aa3);
if(r1(R+518)){{goto L478ad6;}}
}
B478aa5:L478aa5:{c.instructions+=2;NFSU2_TR(0x478aa5);
__builtin_memmove((R+4),(R+28),4);
}
B478aa7:{NFSU2_TR(0x478aa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478aacull));
TAIL_STATIC(0x467e40u,467);
}
B478aac:L478aac:{c.instructions+=2;NFSU2_TR(0x478aac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478aae:{NFSU2_TR(0x478aae);
if(r1(R+518)){{goto L478ab9;}}
}
B478ab0:L478ab0:{c.instructions+=2;NFSU2_TR(0x478ab0);
__builtin_memmove((R+4),(R+28),4);
}
B478ab2:{NFSU2_TR(0x478ab2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478ab7ull));
TAIL_STATIC(0x467e40u,467);
}
B478ab7:L478ab7:{c.instructions+=1;NFSU2_TR(0x478ab7);
{goto L478ad8;}
}
B478ab9:L478ab9:{c.instructions+=2;NFSU2_TR(0x478ab9);
__builtin_memmove((R+0),(R+28),4);
}
B478abb:{NFSU2_TR(0x478abb);
{goto L478ad8;}
}
B478abd:L478abd:{c.instructions+=2;NFSU2_TR(0x478abd);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478ac0:{NFSU2_TR(0x478ac0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478ad3;}}
}
B478ac2:L478ac2:{c.instructions+=2;NFSU2_TR(0x478ac2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478ac5:{NFSU2_TR(0x478ac5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478ad3;}}
}
B478ac7:L478ac7:{c.instructions+=4;NFSU2_TR(0x478ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478aca:{NFSU2_TR(0x478aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478acd:{NFSU2_TR(0x478acd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478acf:{NFSU2_TR(0x478acf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478ad8;}}
}
B478ad1:L478ad1:{c.instructions+=1;NFSU2_TR(0x478ad1);
{goto L478ad6;}
}
B478ad3:L478ad3:{c.instructions+=1;NFSU2_TR(0x478ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478ad6:L478ad6:{c.instructions+=1;NFSU2_TR(0x478ad6);
__builtin_memmove((R+0),(R+8),4);
}
B478ad8:L478ad8:{c.instructions+=9;NFSU2_TR(0x478ad8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478ada:{NFSU2_TR(0x478ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478add:{NFSU2_TR(0x478add);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478ae1:{NFSU2_TR(0x478ae1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B478ae4:{NFSU2_TR(0x478ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478ae7:{NFSU2_TR(0x478ae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B478ae9:{NFSU2_TR(0x478ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478aec:{NFSU2_TR(0x478aec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B478aef:{NFSU2_TR(0x478aef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478b10;}}
}
B478af1:L478af1:{c.instructions+=3;NFSU2_TR(0x478af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B478af4:{NFSU2_TR(0x478af4);
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
B478af6:{NFSU2_TR(0x478af6);
if(r1(R+518)){{goto L478b23;}}
}
B478af8:L478af8:{c.instructions+=2;NFSU2_TR(0x478af8);
__builtin_memmove((R+4),(R+28),4);
}
B478afa:{NFSU2_TR(0x478afa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478affull));
TAIL_STATIC(0x467e40u,467);
}
B478aff:L478aff:{c.instructions+=2;NFSU2_TR(0x478aff);
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
B478b01:{NFSU2_TR(0x478b01);
if(r1(R+518)){{goto L478b0c;}}
}
B478b03:L478b03:{c.instructions+=2;NFSU2_TR(0x478b03);
__builtin_memmove((R+4),(R+28),4);
}
B478b05:{NFSU2_TR(0x478b05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478b0aull));
TAIL_STATIC(0x467e40u,467);
}
B478b0a:L478b0a:{c.instructions+=1;NFSU2_TR(0x478b0a);
{goto L478b21;}
}
B478b0c:L478b0c:{c.instructions+=2;NFSU2_TR(0x478b0c);
__builtin_memmove((R+8),(R+28),4);
}
B478b0e:{NFSU2_TR(0x478b0e);
{goto L478b23;}
}
B478b10:L478b10:{c.instructions+=2;NFSU2_TR(0x478b10);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B478b13:{NFSU2_TR(0x478b13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478b23;}}
}
B478b15:L478b15:{c.instructions+=2;NFSU2_TR(0x478b15);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B478b18:{NFSU2_TR(0x478b18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478b23;}}
}
B478b1a:L478b1a:{c.instructions+=3;NFSU2_TR(0x478b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478b1d:{NFSU2_TR(0x478b1d);
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
B478b1f:{NFSU2_TR(0x478b1f);
if(r1(R+518)){{goto L478b23;}}
}
B478b21:L478b21:{c.instructions+=1;NFSU2_TR(0x478b21);
__builtin_memmove((R+8),(R+0),4);
}
B478b23:L478b23:{c.instructions+=10;NFSU2_TR(0x478b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478b26:{NFSU2_TR(0x478b26);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478b2a:{NFSU2_TR(0x478b2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B478b2d:{NFSU2_TR(0x478b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478b30:{NFSU2_TR(0x478b30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B478b32:{NFSU2_TR(0x478b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478b35:{NFSU2_TR(0x478b35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B478b38:{NFSU2_TR(0x478b38);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B478b3b:{NFSU2_TR(0x478b3b);
__builtin_memmove((R+4),(R+20),4);
}
B478b3d:{NFSU2_TR(0x478b3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478b40ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B478b40:L478b40:{c.instructions+=5;NFSU2_TR(0x478b40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B478b42:{NFSU2_TR(0x478b42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B478b44:{NFSU2_TR(0x478b44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478b45:{NFSU2_TR(0x478b45);
__builtin_memmove((R+4),(R+24),4);
}
B478b47:{NFSU2_TR(0x478b47);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478b4aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B478b4a:L478b4a:{c.instructions+=4;NFSU2_TR(0x478b4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478b4b:{NFSU2_TR(0x478b4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478b4f:{NFSU2_TR(0x478b4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478b50:{NFSU2_TR(0x478b50);
u8 U[4];
w4(U+0,u32(0x78b8acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478b55:L478b55:{c.instructions+=2;NFSU2_TR(0x478b55);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478b57:{NFSU2_TR(0x478b57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478b5cull));
TAIL_STATIC(0x4691c0u,469);
}
B478b5c:L478b5c:{c.instructions+=1;NFSU2_TR(0x478b5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B478b5f:L478b5f:{c.instructions+=9;NFSU2_TR(0x478b5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478b63:{NFSU2_TR(0x478b63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B478b65:{NFSU2_TR(0x478b65);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B478b69:{NFSU2_TR(0x478b69);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B478b6c:{NFSU2_TR(0x478b6c);
__builtin_memmove((R+24),(R+20),4);
}
B478b6e:{NFSU2_TR(0x478b6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478b72:{NFSU2_TR(0x478b72);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478b76:{NFSU2_TR(0x478b76);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xf0000000ull))));
}
B478b7c:{NFSU2_TR(0x478b7c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4789b8u);}goto L4789b8;}
}
B478b81:L478b81:{c.instructions+=4;NFSU2_TR(0x478b81);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B478b84:{NFSU2_TR(0x478b84);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B478b87:{NFSU2_TR(0x478b87);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478b8b:{NFSU2_TR(0x478b8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478baf;}}
}
B478b8d:L478b8d:{c.instructions+=4;NFSU2_TR(0x478b8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478b90:{NFSU2_TR(0x478b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478b93:{NFSU2_TR(0x478b93);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478b95:{NFSU2_TR(0x478b95);
if(r1(R+518)){{goto L478bca;}}
}
B478b97:L478b97:{c.instructions+=2;NFSU2_TR(0x478b97);
__builtin_memmove((R+4),(R+8),4);
}
B478b99:{NFSU2_TR(0x478b99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478b9eull));
TAIL_STATIC(0x467e40u,467);
}
B478b9e:L478b9e:{c.instructions+=2;NFSU2_TR(0x478b9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478ba0:{NFSU2_TR(0x478ba0);
if(r1(R+518)){{goto L478bab;}}
}
B478ba2:L478ba2:{c.instructions+=2;NFSU2_TR(0x478ba2);
__builtin_memmove((R+4),(R+8),4);
}
B478ba4:{NFSU2_TR(0x478ba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478ba9ull));
TAIL_STATIC(0x467e40u,467);
}
B478ba9:L478ba9:{c.instructions+=1;NFSU2_TR(0x478ba9);
{goto L478bca;}
}
B478bab:L478bab:{c.instructions+=2;NFSU2_TR(0x478bab);
__builtin_memmove((R+0),(R+8),4);
}
B478bad:{NFSU2_TR(0x478bad);
{goto L478bca;}
}
B478baf:L478baf:{c.instructions+=2;NFSU2_TR(0x478baf);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478bb2:{NFSU2_TR(0x478bb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478bc7;}}
}
B478bb4:L478bb4:{c.instructions+=2;NFSU2_TR(0x478bb4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478bb7:{NFSU2_TR(0x478bb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478bc7;}}
}
B478bb9:L478bb9:{c.instructions+=4;NFSU2_TR(0x478bb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478bbc:{NFSU2_TR(0x478bbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478bbf:{NFSU2_TR(0x478bbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478bc1:{NFSU2_TR(0x478bc1);
if(r1(R+518)){{goto L478bca;}}
}
B478bc3:L478bc3:{c.instructions+=2;NFSU2_TR(0x478bc3);
__builtin_memmove((R+0),(R+4),4);
}
B478bc5:{NFSU2_TR(0x478bc5);
{goto L478bca;}
}
B478bc7:L478bc7:{c.instructions+=1;NFSU2_TR(0x478bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478bca:L478bca:{c.instructions+=3;NFSU2_TR(0x478bca);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B478bce:{NFSU2_TR(0x478bce);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478bd0:{NFSU2_TR(0x478bd0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x478b5fu);}goto L478b5f;}}
}
B478bd2:L478bd2:{c.instructions+=3;NFSU2_TR(0x478bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B478bd9:{NFSU2_TR(0x478bd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B478be1:{NFSU2_TR(0x478be1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478be5:L478be5:{c.instructions+=3;NFSU2_TR(0x478be5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478be7:{NFSU2_TR(0x478be7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478beb:{NFSU2_TR(0x478beb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478c0f;}}
}
B478bed:L478bed:{c.instructions+=4;NFSU2_TR(0x478bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478bf0:{NFSU2_TR(0x478bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B478bf3:{NFSU2_TR(0x478bf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478bf5:{NFSU2_TR(0x478bf5);
if(r1(R+518)){{goto L478c28;}}
}
B478bf7:L478bf7:{c.instructions+=2;NFSU2_TR(0x478bf7);
__builtin_memmove((R+4),(R+24),4);
}
B478bf9:{NFSU2_TR(0x478bf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478bfeull));
TAIL_STATIC(0x467e40u,467);
}
B478bfe:L478bfe:{c.instructions+=2;NFSU2_TR(0x478bfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478c00:{NFSU2_TR(0x478c00);
if(r1(R+518)){{goto L478c0b;}}
}
B478c02:L478c02:{c.instructions+=2;NFSU2_TR(0x478c02);
__builtin_memmove((R+4),(R+24),4);
}
B478c04:{NFSU2_TR(0x478c04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478c09ull));
TAIL_STATIC(0x467e40u,467);
}
B478c09:L478c09:{c.instructions+=1;NFSU2_TR(0x478c09);
{goto L478c2a;}
}
B478c0b:L478c0b:{c.instructions+=2;NFSU2_TR(0x478c0b);
__builtin_memmove((R+0),(R+24),4);
}
B478c0d:{NFSU2_TR(0x478c0d);
{goto L478c2a;}
}
B478c0f:L478c0f:{c.instructions+=2;NFSU2_TR(0x478c0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478c12:{NFSU2_TR(0x478c12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478c25;}}
}
B478c14:L478c14:{c.instructions+=2;NFSU2_TR(0x478c14);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478c17:{NFSU2_TR(0x478c17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478c25;}}
}
B478c19:L478c19:{c.instructions+=4;NFSU2_TR(0x478c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478c1c:{NFSU2_TR(0x478c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478c1f:{NFSU2_TR(0x478c1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478c21:{NFSU2_TR(0x478c21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478c2a;}}
}
B478c23:L478c23:{c.instructions+=1;NFSU2_TR(0x478c23);
{goto L478c28;}
}
B478c25:L478c25:{c.instructions+=1;NFSU2_TR(0x478c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478c28:L478c28:{c.instructions+=1;NFSU2_TR(0x478c28);
__builtin_memmove((R+0),(R+8),4);
}
B478c2a:L478c2a:{c.instructions+=4;NFSU2_TR(0x478c2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B478c2e:{NFSU2_TR(0x478c2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478c32:{NFSU2_TR(0x478c32);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+12)));
w4(U+16,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
}
B478c35:{NFSU2_TR(0x478c35);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x478b5fu);}goto L478b5f;}}
}
B478c3b:L478c3b:{c.instructions+=2;NFSU2_TR(0x478c3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478c3d:{NFSU2_TR(0x478c3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478c5e;}}
}
B478c3f:L478c3f:{c.instructions+=3;NFSU2_TR(0x478c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B478c42:{NFSU2_TR(0x478c42);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478c44:{NFSU2_TR(0x478c44);
if(r1(R+518)){{goto L478c6f;}}
}
B478c46:L478c46:{c.instructions+=2;NFSU2_TR(0x478c46);
__builtin_memmove((R+4),(R+24),4);
}
B478c48:{NFSU2_TR(0x478c48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478c4dull));
TAIL_STATIC(0x467e40u,467);
}
B478c4d:L478c4d:{c.instructions+=2;NFSU2_TR(0x478c4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478c4f:{NFSU2_TR(0x478c4f);
if(r1(R+518)){{goto L478c5a;}}
}
B478c51:L478c51:{c.instructions+=2;NFSU2_TR(0x478c51);
__builtin_memmove((R+4),(R+24),4);
}
B478c53:{NFSU2_TR(0x478c53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478c58ull));
TAIL_STATIC(0x467e40u,467);
}
B478c58:L478c58:{c.instructions+=1;NFSU2_TR(0x478c58);
{goto L478c71;}
}
B478c5a:L478c5a:{c.instructions+=2;NFSU2_TR(0x478c5a);
__builtin_memmove((R+0),(R+24),4);
}
B478c5c:{NFSU2_TR(0x478c5c);
{goto L478c71;}
}
B478c5e:L478c5e:{c.instructions+=2;NFSU2_TR(0x478c5e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478c61:{NFSU2_TR(0x478c61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478c6f;}}
}
B478c63:L478c63:{c.instructions+=2;NFSU2_TR(0x478c63);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478c66:{NFSU2_TR(0x478c66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478c6f;}}
}
B478c68:L478c68:{c.instructions+=3;NFSU2_TR(0x478c68);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478c6b:{NFSU2_TR(0x478c6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478c6d:{NFSU2_TR(0x478c6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478c71;}}
}
B478c6f:L478c6f:{c.instructions+=1;NFSU2_TR(0x478c6f);
__builtin_memmove((R+0),(R+8),4);
}
B478c71:L478c71:{c.instructions+=12;NFSU2_TR(0x478c71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478c74:{NFSU2_TR(0x478c74);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478c78:{NFSU2_TR(0x478c78);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B478c7b:{NFSU2_TR(0x478c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478c7e:{NFSU2_TR(0x478c7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B478c82:{NFSU2_TR(0x478c82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B478c84:{NFSU2_TR(0x478c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478c87:{NFSU2_TR(0x478c87);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffull))));
}
B478c8d:{NFSU2_TR(0x478c8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B478c90:{NFSU2_TR(0x478c90);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478c92:{NFSU2_TR(0x478c92);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B478c95:{NFSU2_TR(0x478c95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478cb6;}}
}
B478c97:L478c97:{c.instructions+=3;NFSU2_TR(0x478c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B478c9a:{NFSU2_TR(0x478c9a);
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
B478c9c:{NFSU2_TR(0x478c9c);
if(r1(R+518)){{goto L478cc9;}}
}
B478c9e:L478c9e:{c.instructions+=2;NFSU2_TR(0x478c9e);
__builtin_memmove((R+4),(R+24),4);
}
B478ca0:{NFSU2_TR(0x478ca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478ca5ull));
TAIL_STATIC(0x467e40u,467);
}
B478ca5:L478ca5:{c.instructions+=2;NFSU2_TR(0x478ca5);
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
B478ca7:{NFSU2_TR(0x478ca7);
if(r1(R+518)){{goto L478cb2;}}
}
B478ca9:L478ca9:{c.instructions+=2;NFSU2_TR(0x478ca9);
__builtin_memmove((R+4),(R+24),4);
}
B478cab:{NFSU2_TR(0x478cab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478cb0ull));
TAIL_STATIC(0x467e40u,467);
}
B478cb0:L478cb0:{c.instructions+=1;NFSU2_TR(0x478cb0);
{goto L478cc7;}
}
B478cb2:L478cb2:{c.instructions+=2;NFSU2_TR(0x478cb2);
__builtin_memmove((R+8),(R+24),4);
}
B478cb4:{NFSU2_TR(0x478cb4);
{goto L478cc9;}
}
B478cb6:L478cb6:{c.instructions+=2;NFSU2_TR(0x478cb6);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B478cb9:{NFSU2_TR(0x478cb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478cc9;}}
}
B478cbb:L478cbb:{c.instructions+=2;NFSU2_TR(0x478cbb);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B478cbe:{NFSU2_TR(0x478cbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478cc9;}}
}
B478cc0:L478cc0:{c.instructions+=3;NFSU2_TR(0x478cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478cc3:{NFSU2_TR(0x478cc3);
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
B478cc5:{NFSU2_TR(0x478cc5);
if(r1(R+518)){{goto L478cc9;}}
}
B478cc7:L478cc7:{c.instructions+=1;NFSU2_TR(0x478cc7);
__builtin_memmove((R+8),(R+0),4);
}
B478cc9:L478cc9:{c.instructions+=11;NFSU2_TR(0x478cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478ccc:{NFSU2_TR(0x478ccc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B478cd0:{NFSU2_TR(0x478cd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B478cd3:{NFSU2_TR(0x478cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478cd6:{NFSU2_TR(0x478cd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478cda:{NFSU2_TR(0x478cda);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B478cdd:{NFSU2_TR(0x478cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478ce0:{NFSU2_TR(0x478ce0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B478ce3:{NFSU2_TR(0x478ce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B478ce6:{NFSU2_TR(0x478ce6);
__builtin_memmove((R+4),(R+20),4);
}
B478ce8:{NFSU2_TR(0x478ce8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478cebull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B478ceb:L478ceb:{c.instructions+=5;NFSU2_TR(0x478ceb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B478ced:{NFSU2_TR(0x478ced);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B478cef:{NFSU2_TR(0x478cef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478cf0:{NFSU2_TR(0x478cf0);
__builtin_memmove((R+4),(R+24),4);
}
B478cf2:{NFSU2_TR(0x478cf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478cf5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B478cf5:L478cf5:{c.instructions+=6;NFSU2_TR(0x478cf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478cf6:{NFSU2_TR(0x478cf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478cfa:{NFSU2_TR(0x478cfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478cfb:{NFSU2_TR(0x478cfb);
u8 U[4];
w4(U+0,u32(0x78b878ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478d00:{NFSU2_TR(0x478d00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478d02:{NFSU2_TR(0x478d02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478d07ull));
TAIL_STATIC(0x4691c0u,469);
}
B478d07:L478d07:{c.instructions+=4;NFSU2_TR(0x478d07);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478d0b:{NFSU2_TR(0x478d0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B478d0e:{NFSU2_TR(0x478d0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478d10:{NFSU2_TR(0x478d10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478d38;}}
}
B478d12:L478d12:{c.instructions+=5;NFSU2_TR(0x478d12);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478d16:{NFSU2_TR(0x478d16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478d19:{NFSU2_TR(0x478d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478d1c:{NFSU2_TR(0x478d1c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B478d1e:{NFSU2_TR(0x478d1e);
if(r1(R+518)){{goto L478d63;}}
}
B478d20:L478d20:{c.instructions+=2;NFSU2_TR(0x478d20);
__builtin_memmove((R+4),(R+8),4);
}
B478d22:{NFSU2_TR(0x478d22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478d27ull));
TAIL_STATIC(0x467e40u,467);
}
B478d27:L478d27:{c.instructions+=2;NFSU2_TR(0x478d27);
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
B478d29:{NFSU2_TR(0x478d29);
if(r1(R+518)){{goto L478d34;}}
}
B478d2b:L478d2b:{c.instructions+=2;NFSU2_TR(0x478d2b);
__builtin_memmove((R+4),(R+8),4);
}
B478d2d:{NFSU2_TR(0x478d2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478d32ull));
TAIL_STATIC(0x467e40u,467);
}
B478d32:L478d32:{c.instructions+=1;NFSU2_TR(0x478d32);
{goto L478d63;}
}
B478d34:L478d34:{c.instructions+=2;NFSU2_TR(0x478d34);
__builtin_memmove((R+0),(R+8),4);
}
B478d36:{NFSU2_TR(0x478d36);
{goto L478d63;}
}
B478d38:L478d38:{c.instructions+=2;NFSU2_TR(0x478d38);
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
B478d3a:{NFSU2_TR(0x478d3a);
if(r1(R+518)){{goto L478d45;}}
}
B478d3c:L478d3c:{c.instructions+=3;NFSU2_TR(0x478d3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478d40:{NFSU2_TR(0x478d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478d43:{NFSU2_TR(0x478d43);
{goto L478d63;}
}
B478d45:L478d45:{c.instructions+=2;NFSU2_TR(0x478d45);
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
B478d48:{NFSU2_TR(0x478d48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478d5c;}}
}
B478d4a:L478d4a:{c.instructions+=5;NFSU2_TR(0x478d4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478d4e:{NFSU2_TR(0x478d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478d51:{NFSU2_TR(0x478d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478d54:{NFSU2_TR(0x478d54);
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
B478d56:{NFSU2_TR(0x478d56);
if(r1(R+518)){{goto L478d63;}}
}
B478d58:L478d58:{c.instructions+=2;NFSU2_TR(0x478d58);
__builtin_memmove((R+0),(R+4),4);
}
B478d5a:{NFSU2_TR(0x478d5a);
{goto L478d63;}
}
B478d5c:L478d5c:{c.instructions+=2;NFSU2_TR(0x478d5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478d60:{NFSU2_TR(0x478d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478d63:L478d63:{c.instructions+=11;NFSU2_TR(0x478d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478d66:{NFSU2_TR(0x478d66);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B478d69:{NFSU2_TR(0x478d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478d6c:{NFSU2_TR(0x478d6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B478d70:{NFSU2_TR(0x478d70);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B478d73:{NFSU2_TR(0x478d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478d76:{NFSU2_TR(0x478d76);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B478d79:{NFSU2_TR(0x478d79);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B478d7d:{NFSU2_TR(0x478d7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B478d7f:{NFSU2_TR(0x478d7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B478d81:{NFSU2_TR(0x478d81);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478d84ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B478d84:L478d84:{c.instructions+=3;NFSU2_TR(0x478d84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478d85:{NFSU2_TR(0x478d85);
__builtin_memmove((R+4),(R+24),4);
}
B478d87:{NFSU2_TR(0x478d87);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478d8aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B478d8a:L478d8a:{c.instructions+=4;NFSU2_TR(0x478d8a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B478d8b:{NFSU2_TR(0x478d8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478d8f:{NFSU2_TR(0x478d8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B478d93:{NFSU2_TR(0x478d93);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x478be5u);}goto L478be5;}
}
B478d98:L478d98:{c.instructions+=2;NFSU2_TR(0x478d98);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb0000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478d9e:{NFSU2_TR(0x478d9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x478b5fu);}goto L478b5f;}}
}
B478da4:L478da4:{c.instructions+=7;NFSU2_TR(0x478da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478da7:{NFSU2_TR(0x478da7);
__builtin_memmove((R+0),(R+20),4);
}
B478da9:{NFSU2_TR(0x478da9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B478dac:{NFSU2_TR(0x478dac);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B478db1:{NFSU2_TR(0x478db1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478db3:{NFSU2_TR(0x478db3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478db7:{NFSU2_TR(0x478db7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478ed3;}}
}
B478dbd:L478dbd:{c.instructions+=5;NFSU2_TR(0x478dbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B478dc1:{NFSU2_TR(0x478dc1);
__builtin_memmove((R+12),(R+24),4);
}
B478dc3:{NFSU2_TR(0x478dc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B478dc6:{NFSU2_TR(0x478dc6);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B478dc9:{NFSU2_TR(0x478dc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478df1;}}
}
B478dcb:L478dcb:{c.instructions+=5;NFSU2_TR(0x478dcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478dcf:{NFSU2_TR(0x478dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478dd2:{NFSU2_TR(0x478dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478dd5:{NFSU2_TR(0x478dd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478dd7:{NFSU2_TR(0x478dd7);
if(r1(R+518)){{goto L478e1d;}}
}
B478dd9:L478dd9:{c.instructions+=2;NFSU2_TR(0x478dd9);
__builtin_memmove((R+4),(R+8),4);
}
B478ddb:{NFSU2_TR(0x478ddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478de0ull));
TAIL_STATIC(0x467e40u,467);
}
B478de0:L478de0:{c.instructions+=2;NFSU2_TR(0x478de0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478de2:{NFSU2_TR(0x478de2);
if(r1(R+518)){{goto L478ded;}}
}
B478de4:L478de4:{c.instructions+=2;NFSU2_TR(0x478de4);
__builtin_memmove((R+4),(R+8),4);
}
B478de6:{NFSU2_TR(0x478de6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478debull));
TAIL_STATIC(0x467e40u,467);
}
B478deb:L478deb:{c.instructions+=1;NFSU2_TR(0x478deb);
{goto L478e1d;}
}
B478ded:L478ded:{c.instructions+=2;NFSU2_TR(0x478ded);
__builtin_memmove((R+0),(R+8),4);
}
B478def:{NFSU2_TR(0x478def);
{goto L478e1d;}
}
B478df1:L478df1:{c.instructions+=2;NFSU2_TR(0x478df1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478df4:{NFSU2_TR(0x478df4);
if(r1(R+518)){{goto L478dff;}}
}
B478df6:L478df6:{c.instructions+=3;NFSU2_TR(0x478df6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478dfa:{NFSU2_TR(0x478dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478dfd:{NFSU2_TR(0x478dfd);
{goto L478e1d;}
}
B478dff:L478dff:{c.instructions+=2;NFSU2_TR(0x478dff);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478e02:{NFSU2_TR(0x478e02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478e16;}}
}
B478e04:L478e04:{c.instructions+=5;NFSU2_TR(0x478e04);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478e08:{NFSU2_TR(0x478e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478e0b:{NFSU2_TR(0x478e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478e0e:{NFSU2_TR(0x478e0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478e10:{NFSU2_TR(0x478e10);
if(r1(R+518)){{goto L478e1d;}}
}
B478e12:L478e12:{c.instructions+=2;NFSU2_TR(0x478e12);
__builtin_memmove((R+0),(R+4),4);
}
B478e14:{NFSU2_TR(0x478e14);
{goto L478e1d;}
}
B478e16:L478e16:{c.instructions+=2;NFSU2_TR(0x478e16);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478e1a:{NFSU2_TR(0x478e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478e1d:L478e1d:{c.instructions+=14;NFSU2_TR(0x478e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478e20:{NFSU2_TR(0x478e20);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478e24:{NFSU2_TR(0x478e24);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B478e27:{NFSU2_TR(0x478e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478e2a:{NFSU2_TR(0x478e2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B478e2c:{NFSU2_TR(0x478e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478e2f:{NFSU2_TR(0x478e2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B478e33:{NFSU2_TR(0x478e33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+20),(U+0),4);
}
B478e35:{NFSU2_TR(0x478e35);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B478e3b:{NFSU2_TR(0x478e3b);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+24),4);
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+24))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B478e3e:{NFSU2_TR(0x478e3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B478e41:{NFSU2_TR(0x478e41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B478e43:{NFSU2_TR(0x478e43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478e45:{NFSU2_TR(0x478e45);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478e48ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B478e48:L478e48:{c.instructions+=3;NFSU2_TR(0x478e48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478e49:{NFSU2_TR(0x478e49);
__builtin_memmove((R+4),(R+28),4);
}
B478e4b:{NFSU2_TR(0x478e4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478e4eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B478e4e:L478e4e:{c.instructions+=2;NFSU2_TR(0x478e4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478e50:{NFSU2_TR(0x478e50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478e78;}}
}
B478e52:L478e52:{c.instructions+=5;NFSU2_TR(0x478e52);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478e56:{NFSU2_TR(0x478e56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478e59:{NFSU2_TR(0x478e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478e5c:{NFSU2_TR(0x478e5c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B478e5e:{NFSU2_TR(0x478e5e);
if(r1(R+518)){{goto L478ea4;}}
}
B478e60:L478e60:{c.instructions+=2;NFSU2_TR(0x478e60);
__builtin_memmove((R+4),(R+8),4);
}
B478e62:{NFSU2_TR(0x478e62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478e67ull));
TAIL_STATIC(0x467e40u,467);
}
B478e67:L478e67:{c.instructions+=2;NFSU2_TR(0x478e67);
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
B478e69:{NFSU2_TR(0x478e69);
if(r1(R+518)){{goto L478e74;}}
}
B478e6b:L478e6b:{c.instructions+=2;NFSU2_TR(0x478e6b);
__builtin_memmove((R+4),(R+8),4);
}
B478e6d:{NFSU2_TR(0x478e6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478e72ull));
TAIL_STATIC(0x467e40u,467);
}
B478e72:L478e72:{c.instructions+=1;NFSU2_TR(0x478e72);
{goto L478ea4;}
}
B478e74:L478e74:{c.instructions+=2;NFSU2_TR(0x478e74);
__builtin_memmove((R+0),(R+8),4);
}
B478e76:{NFSU2_TR(0x478e76);
{goto L478ea4;}
}
B478e78:L478e78:{c.instructions+=2;NFSU2_TR(0x478e78);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B478e7b:{NFSU2_TR(0x478e7b);
if(r1(R+518)){{goto L478e86;}}
}
B478e7d:L478e7d:{c.instructions+=3;NFSU2_TR(0x478e7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478e81:{NFSU2_TR(0x478e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478e84:{NFSU2_TR(0x478e84);
{goto L478ea4;}
}
B478e86:L478e86:{c.instructions+=2;NFSU2_TR(0x478e86);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B478e89:{NFSU2_TR(0x478e89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478e9d;}}
}
B478e8b:L478e8b:{c.instructions+=5;NFSU2_TR(0x478e8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478e8f:{NFSU2_TR(0x478e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478e92:{NFSU2_TR(0x478e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478e95:{NFSU2_TR(0x478e95);
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
B478e97:{NFSU2_TR(0x478e97);
if(r1(R+518)){{goto L478ea4;}}
}
B478e99:L478e99:{c.instructions+=2;NFSU2_TR(0x478e99);
__builtin_memmove((R+0),(R+4),4);
}
B478e9b:{NFSU2_TR(0x478e9b);
{goto L478ea4;}
}
B478e9d:L478e9d:{c.instructions+=2;NFSU2_TR(0x478e9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478ea1:{NFSU2_TR(0x478ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478ea4:L478ea4:{c.instructions+=10;NFSU2_TR(0x478ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478ea7:{NFSU2_TR(0x478ea7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478eab:{NFSU2_TR(0x478eab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B478eae:{NFSU2_TR(0x478eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478eb1:{NFSU2_TR(0x478eb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B478eb3:{NFSU2_TR(0x478eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478eb6:{NFSU2_TR(0x478eb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B478eb9:{NFSU2_TR(0x478eb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B478ebb:{NFSU2_TR(0x478ebb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478ebd:{NFSU2_TR(0x478ebd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478ec0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B478ec0:L478ec0:{c.instructions+=7;NFSU2_TR(0x478ec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B478ec2:{NFSU2_TR(0x478ec2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478ec6:{NFSU2_TR(0x478ec6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478ec7:{NFSU2_TR(0x478ec7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478ec8:{NFSU2_TR(0x478ec8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478ec9:{NFSU2_TR(0x478ec9);
u8 U[4];
w4(U+0,u32(0x78b840ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478ece:{NFSU2_TR(0x478ece);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x478b55u);}goto L478b55;}
}
B478ed3:L478ed3:{c.instructions+=5;NFSU2_TR(0x478ed3);
__builtin_memmove((R+0),(R+20),4);
}
B478ed5:{NFSU2_TR(0x478ed5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B478ed8:{NFSU2_TR(0x478ed8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B478eda:{NFSU2_TR(0x478eda);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B478edd:{NFSU2_TR(0x478edd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B478ee1:L478ee1:{c.instructions+=2;NFSU2_TR(0x478ee1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478ee3:{NFSU2_TR(0x478ee3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478f07;}}
}
B478ee5:L478ee5:{c.instructions+=4;NFSU2_TR(0x478ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478ee8:{NFSU2_TR(0x478ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478eeb:{NFSU2_TR(0x478eeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478eed:{NFSU2_TR(0x478eed);
if(r1(R+518)){{goto L478f21;}}
}
B478eef:L478eef:{c.instructions+=2;NFSU2_TR(0x478eef);
__builtin_memmove((R+4),(R+8),4);
}
B478ef1:{NFSU2_TR(0x478ef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478ef6ull));
TAIL_STATIC(0x467e40u,467);
}
B478ef6:L478ef6:{c.instructions+=2;NFSU2_TR(0x478ef6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478ef8:{NFSU2_TR(0x478ef8);
if(r1(R+518)){{goto L478f03;}}
}
B478efa:L478efa:{c.instructions+=2;NFSU2_TR(0x478efa);
__builtin_memmove((R+4),(R+8),4);
}
B478efc:{NFSU2_TR(0x478efc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478f01ull));
TAIL_STATIC(0x467e40u,467);
}
B478f01:L478f01:{c.instructions+=1;NFSU2_TR(0x478f01);
{goto L478f21;}
}
B478f03:L478f03:{c.instructions+=2;NFSU2_TR(0x478f03);
__builtin_memmove((R+0),(R+8),4);
}
B478f05:{NFSU2_TR(0x478f05);
{goto L478f21;}
}
B478f07:L478f07:{c.instructions+=2;NFSU2_TR(0x478f07);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478f09:{NFSU2_TR(0x478f09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478f1e;}}
}
B478f0b:L478f0b:{c.instructions+=2;NFSU2_TR(0x478f0b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478f0e:{NFSU2_TR(0x478f0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478f1e;}}
}
B478f10:L478f10:{c.instructions+=4;NFSU2_TR(0x478f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478f13:{NFSU2_TR(0x478f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478f16:{NFSU2_TR(0x478f16);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478f18:{NFSU2_TR(0x478f18);
if(r1(R+518)){{goto L478f21;}}
}
B478f1a:L478f1a:{c.instructions+=2;NFSU2_TR(0x478f1a);
__builtin_memmove((R+0),(R+4),4);
}
B478f1c:{NFSU2_TR(0x478f1c);
{goto L478f21;}
}
B478f1e:L478f1e:{c.instructions+=1;NFSU2_TR(0x478f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478f21:L478f21:{c.instructions+=3;NFSU2_TR(0x478f21);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478f25:{NFSU2_TR(0x478f25);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+16)));
w4(U+20,u32(u32(r4(R+12))-u32(r4(U+16))));
w1(R+519,u8(s32(r4(U+20))<s32(u32(0x0ull))));
}
B478f29:{NFSU2_TR(0x478f29);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x478b5fu);}goto L478b5f;}}
}
B478f2f:L478f2f:{c.instructions+=4;NFSU2_TR(0x478f2f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478f30:{NFSU2_TR(0x478f30);
u8 U[4];
w4(U+0,u32(0x78b828ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478f35:{NFSU2_TR(0x478f35);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478f37:{NFSU2_TR(0x478f37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478f3cull));
TAIL_STATIC(0x4691c0u,469);
}
B478f3c:L478f3c:{c.instructions+=4;NFSU2_TR(0x478f3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478f40:{NFSU2_TR(0x478f40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B478f43:{NFSU2_TR(0x478f43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478f45:{NFSU2_TR(0x478f45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478f69;}}
}
B478f47:L478f47:{c.instructions+=4;NFSU2_TR(0x478f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478f4a:{NFSU2_TR(0x478f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478f4d:{NFSU2_TR(0x478f4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478f4f:{NFSU2_TR(0x478f4f);
if(r1(R+518)){{goto L478f83;}}
}
B478f51:L478f51:{c.instructions+=2;NFSU2_TR(0x478f51);
__builtin_memmove((R+4),(R+8),4);
}
B478f53:{NFSU2_TR(0x478f53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478f58ull));
TAIL_STATIC(0x467e40u,467);
}
B478f58:L478f58:{c.instructions+=2;NFSU2_TR(0x478f58);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478f5a:{NFSU2_TR(0x478f5a);
if(r1(R+518)){{goto L478f65;}}
}
B478f5c:L478f5c:{c.instructions+=2;NFSU2_TR(0x478f5c);
__builtin_memmove((R+4),(R+8),4);
}
B478f5e:{NFSU2_TR(0x478f5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478f63ull));
TAIL_STATIC(0x467e40u,467);
}
B478f63:L478f63:{c.instructions+=1;NFSU2_TR(0x478f63);
{goto L478f83;}
}
B478f65:L478f65:{c.instructions+=2;NFSU2_TR(0x478f65);
__builtin_memmove((R+0),(R+8),4);
}
B478f67:{NFSU2_TR(0x478f67);
{goto L478f83;}
}
B478f69:L478f69:{c.instructions+=2;NFSU2_TR(0x478f69);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B478f6b:{NFSU2_TR(0x478f6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478f80;}}
}
B478f6d:L478f6d:{c.instructions+=2;NFSU2_TR(0x478f6d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B478f70:{NFSU2_TR(0x478f70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L478f80;}}
}
B478f72:L478f72:{c.instructions+=4;NFSU2_TR(0x478f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478f75:{NFSU2_TR(0x478f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478f78:{NFSU2_TR(0x478f78);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478f7a:{NFSU2_TR(0x478f7a);
if(r1(R+518)){{goto L478f83;}}
}
B478f7c:L478f7c:{c.instructions+=2;NFSU2_TR(0x478f7c);
__builtin_memmove((R+0),(R+4),4);
}
B478f7e:{NFSU2_TR(0x478f7e);
{goto L478f83;}
}
B478f80:L478f80:{c.instructions+=1;NFSU2_TR(0x478f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478f83:L478f83:{c.instructions+=12;NFSU2_TR(0x478f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478f86:{NFSU2_TR(0x478f86);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478f8a:{NFSU2_TR(0x478f8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B478f8d:{NFSU2_TR(0x478f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478f90:{NFSU2_TR(0x478f90);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B478f93:{NFSU2_TR(0x478f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B478f96:{NFSU2_TR(0x478f96);
__builtin_memmove((R+4),(R+20),4);
}
B478f98:{NFSU2_TR(0x478f98);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B478f9e:{NFSU2_TR(0x478f9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B478fa1:{NFSU2_TR(0x478fa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B478fa3:{NFSU2_TR(0x478fa3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478fa5:{NFSU2_TR(0x478fa5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478fa8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B478fa8:L478fa8:{c.instructions+=8;NFSU2_TR(0x478fa8);
__builtin_memmove((R+24),(R+0),4);
}
B478faa:{NFSU2_TR(0x478faa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B478fac:{NFSU2_TR(0x478fac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478fad:{NFSU2_TR(0x478fad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478fae:{NFSU2_TR(0x478fae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478faf:{NFSU2_TR(0x478faf);
u8 U[4];
w4(U+0,u32(0x78b7f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478fb4:{NFSU2_TR(0x478fb4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478fb6:{NFSU2_TR(0x478fb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478fbbull));
TAIL_STATIC(0x4691c0u,469);
}
B478fbb:L478fbb:{c.instructions+=5;NFSU2_TR(0x478fbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B478fbf:{NFSU2_TR(0x478fbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B478fc1:{NFSU2_TR(0x478fc1);
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
B478fc4:{NFSU2_TR(0x478fc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478fc5:{NFSU2_TR(0x478fc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x478fc8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B478fc8:L478fc8:{c.instructions+=3;NFSU2_TR(0x478fc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478fcc:{NFSU2_TR(0x478fcc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B478fcd:{NFSU2_TR(0x478fcd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x478ee1u);}goto L478ee1;}
}
B478fd2:L478fd2:{c.instructions+=6;NFSU2_TR(0x478fd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B478fd3:{NFSU2_TR(0x478fd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B478fd4:{NFSU2_TR(0x478fd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B478fd5:{NFSU2_TR(0x478fd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B478fd6:{NFSU2_TR(0x478fd6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B478fd9:{NFSU2_TR(0x478fd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B478fe0:L478fe0:{c.instructions+=7;NFSU2_TR(0x478fe0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478fe1:{NFSU2_TR(0x478fe1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478fe2:{NFSU2_TR(0x478fe2);
__builtin_memmove((R+20),(R+4),4);
}
B478fe4:{NFSU2_TR(0x478fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478fe7:{NFSU2_TR(0x478fe7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B478fe9:{NFSU2_TR(0x478fe9);
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
B478feb:{NFSU2_TR(0x478feb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x479029u,479);}
}
B478fed:L478fed:{c.instructions+=7;NFSU2_TR(0x478fed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478fee:{NFSU2_TR(0x478fee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B478fef:{NFSU2_TR(0x478fef);
}
B478ff0:{NFSU2_TR(0x478ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478ff3:{NFSU2_TR(0x478ff3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B478ff6:{NFSU2_TR(0x478ff6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B478ff8:{NFSU2_TR(0x478ff8);
if(r1(R+518)){TAIL_STATIC(0x47901fu,479);}
}
B478ffa:L478ffa:{c.instructions+=3;NFSU2_TR(0x478ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B478ffd:{NFSU2_TR(0x478ffd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B478fff:{NFSU2_TR(0x478fff);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
TAIL_STATIC(0x479001u,479);
}
XIT:NFSU2_TR_EXIT(0x478,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
