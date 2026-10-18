#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_442(u8* __restrict R,Cpu& c);
u32 body_443(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_448(u8* __restrict R,Cpu& c);
u32 body_44a(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x449,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x449,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_449(u8* __restrict R,Cpu& c);
u32 page_449(Cpu& c){return body_449(c.regs.data(),c);}
__attribute__((noinline)) u32 body_449(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x449000:goto L449000;
case 0x449003:c.instructions+=6;goto B449003;
case 0x449004:c.instructions+=5;goto B449004;
case 0x44900a:c.instructions+=4;goto B44900a;
case 0x44900e:c.instructions+=3;goto B44900e;
case 0x44900f:c.instructions+=2;goto B44900f;
case 0x449010:c.instructions+=1;goto B449010;
case 0x449015:goto L449015;
case 0x449019:c.instructions+=28;goto B449019;
case 0x44901d:c.instructions+=27;goto B44901d;
case 0x449020:c.instructions+=26;goto B449020;
case 0x449024:c.instructions+=25;goto B449024;
case 0x449028:c.instructions+=24;goto B449028;
case 0x44902a:c.instructions+=23;goto B44902a;
case 0x44902e:c.instructions+=22;goto B44902e;
case 0x449032:c.instructions+=21;goto B449032;
case 0x449034:c.instructions+=20;goto B449034;
case 0x449038:c.instructions+=19;goto B449038;
case 0x44903c:c.instructions+=18;goto B44903c;
case 0x449040:c.instructions+=17;goto B449040;
case 0x449044:c.instructions+=16;goto B449044;
case 0x449048:c.instructions+=15;goto B449048;
case 0x44904a:c.instructions+=14;goto B44904a;
case 0x44904e:c.instructions+=13;goto B44904e;
case 0x449052:c.instructions+=12;goto B449052;
case 0x449054:c.instructions+=11;goto B449054;
case 0x449058:c.instructions+=10;goto B449058;
case 0x44905c:c.instructions+=9;goto B44905c;
case 0x449060:c.instructions+=8;goto B449060;
case 0x449064:c.instructions+=7;goto B449064;
case 0x449068:c.instructions+=6;goto B449068;
case 0x44906a:c.instructions+=5;goto B44906a;
case 0x44906e:c.instructions+=4;goto B44906e;
case 0x449072:c.instructions+=3;goto B449072;
case 0x449074:c.instructions+=2;goto B449074;
case 0x449078:c.instructions+=1;goto B449078;
case 0x44907d:goto L44907d;
case 0x449080:c.instructions+=5;goto B449080;
case 0x449084:c.instructions+=4;goto B449084;
case 0x449085:c.instructions+=3;goto B449085;
case 0x449086:c.instructions+=2;goto B449086;
case 0x44908c:c.instructions+=1;goto B44908c;
case 0x449091:goto L449091;
case 0x449094:c.instructions+=9;goto B449094;
case 0x44909a:c.instructions+=8;goto B44909a;
case 0x44909d:c.instructions+=7;goto B44909d;
case 0x44909f:c.instructions+=6;goto B44909f;
case 0x4490a1:c.instructions+=5;goto B4490a1;
case 0x4490a4:c.instructions+=4;goto B4490a4;
case 0x4490a5:c.instructions+=3;goto B4490a5;
case 0x4490a7:c.instructions+=2;goto B4490a7;
case 0x4490a9:c.instructions+=1;goto B4490a9;
case 0x4490ab:goto L4490ab;
case 0x4490ad:c.instructions+=1;goto B4490ad;
case 0x4490af:goto L4490af;
case 0x4490b1:goto L4490b1;
case 0x4490b7:c.instructions+=3;goto B4490b7;
case 0x4490be:c.instructions+=2;goto B4490be;
case 0x4490c2:c.instructions+=1;goto B4490c2;
case 0x4490c4:goto L4490c4;
case 0x4490cc:goto L4490cc;
case 0x4490d0:c.instructions+=3;goto B4490d0;
case 0x4490d1:c.instructions+=2;goto B4490d1;
case 0x4490d3:c.instructions+=1;goto B4490d3;
case 0x4490d8:goto L4490d8;
case 0x4490dc:c.instructions+=8;goto B4490dc;
case 0x4490e2:c.instructions+=7;goto B4490e2;
case 0x4490e5:c.instructions+=6;goto B4490e5;
case 0x4490e8:c.instructions+=5;goto B4490e8;
case 0x4490eb:c.instructions+=4;goto B4490eb;
case 0x4490ef:c.instructions+=3;goto B4490ef;
case 0x4490f2:c.instructions+=2;goto B4490f2;
case 0x4490f6:c.instructions+=1;goto B4490f6;
case 0x4490fb:goto L4490fb;
case 0x449101:c.instructions+=3;goto B449101;
case 0x449102:c.instructions+=2;goto B449102;
case 0x449107:c.instructions+=1;goto B449107;
case 0x44910c:goto L44910c;
case 0x449110:c.instructions+=6;goto B449110;
case 0x449112:c.instructions+=5;goto B449112;
case 0x449115:c.instructions+=4;goto B449115;
case 0x449116:c.instructions+=3;goto B449116;
case 0x449117:c.instructions+=2;goto B449117;
case 0x44911d:c.instructions+=1;goto B44911d;
case 0x449122:goto L449122;
case 0x449126:c.instructions+=26;goto B449126;
case 0x44912c:c.instructions+=25;goto B44912c;
case 0x449130:c.instructions+=24;goto B449130;
case 0x449136:c.instructions+=23;goto B449136;
case 0x449138:c.instructions+=22;goto B449138;
case 0x44913c:c.instructions+=21;goto B44913c;
case 0x449142:c.instructions+=20;goto B449142;
case 0x449144:c.instructions+=19;goto B449144;
case 0x44914a:c.instructions+=18;goto B44914a;
case 0x44914e:c.instructions+=17;goto B44914e;
case 0x449154:c.instructions+=16;goto B449154;
case 0x449158:c.instructions+=15;goto B449158;
case 0x44915e:c.instructions+=14;goto B44915e;
case 0x449160:c.instructions+=13;goto B449160;
case 0x449164:c.instructions+=12;goto B449164;
case 0x44916a:c.instructions+=11;goto B44916a;
case 0x44916c:c.instructions+=10;goto B44916c;
case 0x449172:c.instructions+=9;goto B449172;
case 0x449176:c.instructions+=8;goto B449176;
case 0x44917c:c.instructions+=7;goto B44917c;
case 0x449180:c.instructions+=6;goto B449180;
case 0x449186:c.instructions+=5;goto B449186;
case 0x449188:c.instructions+=4;goto B449188;
case 0x44918c:c.instructions+=3;goto B44918c;
case 0x449192:c.instructions+=2;goto B449192;
case 0x449194:c.instructions+=1;goto B449194;
case 0x44919a:goto L44919a;
case 0x44919d:c.instructions+=10;goto B44919d;
case 0x44919f:c.instructions+=9;goto B44919f;
case 0x4491a1:c.instructions+=8;goto B4491a1;
case 0x4491a4:c.instructions+=7;goto B4491a4;
case 0x4491a7:c.instructions+=6;goto B4491a7;
case 0x4491a8:c.instructions+=5;goto B4491a8;
case 0x4491a9:c.instructions+=4;goto B4491a9;
case 0x4491aa:c.instructions+=3;goto B4491aa;
case 0x4491ac:c.instructions+=2;goto B4491ac;
case 0x4491ad:c.instructions+=1;goto B4491ad;
case 0x4491c0:goto L4491c0;
case 0x4491c1:c.instructions+=14;goto B4491c1;
case 0x4491c3:c.instructions+=13;goto B4491c3;
case 0x4491c6:c.instructions+=12;goto B4491c6;
case 0x4491c9:c.instructions+=11;goto B4491c9;
case 0x4491ca:c.instructions+=10;goto B4491ca;
case 0x4491cd:c.instructions+=9;goto B4491cd;
case 0x4491cf:c.instructions+=8;goto B4491cf;
case 0x4491d5:c.instructions+=7;goto B4491d5;
case 0x4491d6:c.instructions+=6;goto B4491d6;
case 0x4491d8:c.instructions+=5;goto B4491d8;
case 0x4491d9:c.instructions+=4;goto B4491d9;
case 0x4491dc:c.instructions+=3;goto B4491dc;
case 0x4491e3:c.instructions+=2;goto B4491e3;
case 0x4491e6:c.instructions+=1;goto B4491e6;
case 0x4491ec:goto L4491ec;
case 0x4491f3:goto L4491f3;
case 0x4491f6:c.instructions+=5;goto B4491f6;
case 0x4491fa:c.instructions+=4;goto B4491fa;
case 0x4491fb:c.instructions+=3;goto B4491fb;
case 0x4491fc:c.instructions+=2;goto B4491fc;
case 0x449202:c.instructions+=1;goto B449202;
case 0x449207:goto L449207;
case 0x44920a:c.instructions+=9;goto B44920a;
case 0x449210:c.instructions+=8;goto B449210;
case 0x449212:c.instructions+=7;goto B449212;
case 0x449214:c.instructions+=6;goto B449214;
case 0x449216:c.instructions+=5;goto B449216;
case 0x449219:c.instructions+=4;goto B449219;
case 0x44921a:c.instructions+=3;goto B44921a;
case 0x44921c:c.instructions+=2;goto B44921c;
case 0x44921e:c.instructions+=1;goto B44921e;
case 0x449220:goto L449220;
case 0x449222:c.instructions+=1;goto B449222;
case 0x449224:goto L449224;
case 0x449226:goto L449226;
case 0x44922c:c.instructions+=3;goto B44922c;
case 0x449233:c.instructions+=2;goto B449233;
case 0x449237:c.instructions+=1;goto B449237;
case 0x449239:goto L449239;
case 0x449241:goto L449241;
case 0x449245:c.instructions+=3;goto B449245;
case 0x449246:c.instructions+=2;goto B449246;
case 0x449248:c.instructions+=1;goto B449248;
case 0x44924d:goto L44924d;
case 0x449253:c.instructions+=7;goto B449253;
case 0x449256:c.instructions+=6;goto B449256;
case 0x449257:c.instructions+=5;goto B449257;
case 0x44925d:c.instructions+=4;goto B44925d;
case 0x449261:c.instructions+=3;goto B449261;
case 0x449262:c.instructions+=2;goto B449262;
case 0x449263:c.instructions+=1;goto B449263;
case 0x449268:goto L449268;
case 0x44926c:c.instructions+=28;goto B44926c;
case 0x449270:c.instructions+=27;goto B449270;
case 0x449273:c.instructions+=26;goto B449273;
case 0x449277:c.instructions+=25;goto B449277;
case 0x44927b:c.instructions+=24;goto B44927b;
case 0x44927d:c.instructions+=23;goto B44927d;
case 0x449281:c.instructions+=22;goto B449281;
case 0x449285:c.instructions+=21;goto B449285;
case 0x449287:c.instructions+=20;goto B449287;
case 0x44928b:c.instructions+=19;goto B44928b;
case 0x44928f:c.instructions+=18;goto B44928f;
case 0x449293:c.instructions+=17;goto B449293;
case 0x449297:c.instructions+=16;goto B449297;
case 0x44929b:c.instructions+=15;goto B44929b;
case 0x44929d:c.instructions+=14;goto B44929d;
case 0x4492a1:c.instructions+=13;goto B4492a1;
case 0x4492a5:c.instructions+=12;goto B4492a5;
case 0x4492a7:c.instructions+=11;goto B4492a7;
case 0x4492ab:c.instructions+=10;goto B4492ab;
case 0x4492af:c.instructions+=9;goto B4492af;
case 0x4492b3:c.instructions+=8;goto B4492b3;
case 0x4492b7:c.instructions+=7;goto B4492b7;
case 0x4492bb:c.instructions+=6;goto B4492bb;
case 0x4492bd:c.instructions+=5;goto B4492bd;
case 0x4492c1:c.instructions+=4;goto B4492c1;
case 0x4492c5:c.instructions+=3;goto B4492c5;
case 0x4492c7:c.instructions+=2;goto B4492c7;
case 0x4492cb:c.instructions+=1;goto B4492cb;
case 0x4492d0:goto L4492d0;
case 0x4492d3:c.instructions+=5;goto B4492d3;
case 0x4492d6:c.instructions+=4;goto B4492d6;
case 0x4492d7:c.instructions+=3;goto B4492d7;
case 0x4492d8:c.instructions+=2;goto B4492d8;
case 0x4492de:c.instructions+=1;goto B4492de;
case 0x4492e3:goto L4492e3;
case 0x4492e4:c.instructions+=5;goto B4492e4;
case 0x4492e5:c.instructions+=4;goto B4492e5;
case 0x4492e6:c.instructions+=3;goto B4492e6;
case 0x4492e8:c.instructions+=2;goto B4492e8;
case 0x4492e9:c.instructions+=1;goto B4492e9;
case 0x4492ec:goto L4492ec;
case 0x4492ef:c.instructions+=5;goto B4492ef;
case 0x4492f3:c.instructions+=4;goto B4492f3;
case 0x4492f4:c.instructions+=3;goto B4492f4;
case 0x4492f5:c.instructions+=2;goto B4492f5;
case 0x4492fb:c.instructions+=1;goto B4492fb;
case 0x449300:goto L449300;
case 0x449303:c.instructions+=9;goto B449303;
case 0x449306:c.instructions+=8;goto B449306;
case 0x44930c:c.instructions+=7;goto B44930c;
case 0x44930e:c.instructions+=6;goto B44930e;
case 0x449310:c.instructions+=5;goto B449310;
case 0x449313:c.instructions+=4;goto B449313;
case 0x449314:c.instructions+=3;goto B449314;
case 0x449316:c.instructions+=2;goto B449316;
case 0x449318:c.instructions+=1;goto B449318;
case 0x44931a:goto L44931a;
case 0x44931c:c.instructions+=1;goto B44931c;
case 0x44931e:goto L44931e;
case 0x449320:goto L449320;
case 0x449326:c.instructions+=3;goto B449326;
case 0x44932d:c.instructions+=2;goto B44932d;
case 0x449331:c.instructions+=1;goto B449331;
case 0x449333:goto L449333;
case 0x44933b:goto L44933b;
case 0x44933f:c.instructions+=3;goto B44933f;
case 0x449340:c.instructions+=2;goto B449340;
case 0x449342:c.instructions+=1;goto B449342;
case 0x449347:goto L449347;
case 0x44934b:c.instructions+=8;goto B44934b;
case 0x449351:c.instructions+=7;goto B449351;
case 0x449354:c.instructions+=6;goto B449354;
case 0x449357:c.instructions+=5;goto B449357;
case 0x44935a:c.instructions+=4;goto B44935a;
case 0x44935e:c.instructions+=3;goto B44935e;
case 0x449361:c.instructions+=2;goto B449361;
case 0x449365:c.instructions+=1;goto B449365;
case 0x44936a:goto L44936a;
case 0x449370:c.instructions+=3;goto B449370;
case 0x449371:c.instructions+=2;goto B449371;
case 0x449376:c.instructions+=1;goto B449376;
case 0x44937b:goto L44937b;
case 0x44937f:c.instructions+=6;goto B44937f;
case 0x449381:c.instructions+=5;goto B449381;
case 0x449384:c.instructions+=4;goto B449384;
case 0x449385:c.instructions+=3;goto B449385;
case 0x449386:c.instructions+=2;goto B449386;
case 0x44938c:c.instructions+=1;goto B44938c;
case 0x449391:goto L449391;
case 0x449395:c.instructions+=26;goto B449395;
case 0x44939b:c.instructions+=25;goto B44939b;
case 0x44939f:c.instructions+=24;goto B44939f;
case 0x4493a5:c.instructions+=23;goto B4493a5;
case 0x4493a7:c.instructions+=22;goto B4493a7;
case 0x4493ab:c.instructions+=21;goto B4493ab;
case 0x4493b1:c.instructions+=20;goto B4493b1;
case 0x4493b3:c.instructions+=19;goto B4493b3;
case 0x4493b9:c.instructions+=18;goto B4493b9;
case 0x4493bd:c.instructions+=17;goto B4493bd;
case 0x4493c3:c.instructions+=16;goto B4493c3;
case 0x4493c7:c.instructions+=15;goto B4493c7;
case 0x4493cd:c.instructions+=14;goto B4493cd;
case 0x4493cf:c.instructions+=13;goto B4493cf;
case 0x4493d3:c.instructions+=12;goto B4493d3;
case 0x4493d9:c.instructions+=11;goto B4493d9;
case 0x4493db:c.instructions+=10;goto B4493db;
case 0x4493e1:c.instructions+=9;goto B4493e1;
case 0x4493e5:c.instructions+=8;goto B4493e5;
case 0x4493eb:c.instructions+=7;goto B4493eb;
case 0x4493ef:c.instructions+=6;goto B4493ef;
case 0x4493f5:c.instructions+=5;goto B4493f5;
case 0x4493f7:c.instructions+=4;goto B4493f7;
case 0x4493fb:c.instructions+=3;goto B4493fb;
case 0x449401:c.instructions+=2;goto B449401;
case 0x449403:c.instructions+=1;goto B449403;
case 0x449409:goto L449409;
case 0x44940c:c.instructions+=4;goto B44940c;
case 0x44940e:c.instructions+=3;goto B44940e;
case 0x449410:c.instructions+=2;goto B449410;
case 0x449413:c.instructions+=1;goto B449413;
case 0x449416:goto L449416;
case 0x449417:c.instructions+=5;goto B449417;
case 0x449418:c.instructions+=4;goto B449418;
case 0x449419:c.instructions+=3;goto B449419;
case 0x44941b:c.instructions+=2;goto B44941b;
case 0x44941c:c.instructions+=1;goto B44941c;
case 0x449430:goto L449430;
case 0x449431:c.instructions+=9;goto B449431;
case 0x449433:c.instructions+=8;goto B449433;
case 0x449436:c.instructions+=7;goto B449436;
case 0x449439:c.instructions+=6;goto B449439;
case 0x44943a:c.instructions+=5;goto B44943a;
case 0x44943c:c.instructions+=4;goto B44943c;
case 0x449442:c.instructions+=3;goto B449442;
case 0x449445:c.instructions+=2;goto B449445;
case 0x449446:c.instructions+=1;goto B449446;
case 0x449448:goto L449448;
case 0x44944b:c.instructions+=1;goto B44944b;
case 0x44944d:goto L44944d;
case 0x449450:c.instructions+=1;goto B449450;
case 0x449452:goto L449452;
case 0x449454:c.instructions+=1;goto B449454;
case 0x449456:goto L449456;
case 0x44945b:goto L44945b;
case 0x449461:c.instructions+=6;goto B449461;
case 0x449462:c.instructions+=5;goto B449462;
case 0x449463:c.instructions+=4;goto B449463;
case 0x449467:c.instructions+=3;goto B449467;
case 0x449468:c.instructions+=2;goto B449468;
case 0x44946a:c.instructions+=1;goto B44946a;
case 0x44946f:goto L44946f;
case 0x449475:c.instructions+=6;goto B449475;
case 0x449476:c.instructions+=5;goto B449476;
case 0x449477:c.instructions+=4;goto B449477;
case 0x44947b:c.instructions+=3;goto B44947b;
case 0x44947c:c.instructions+=2;goto B44947c;
case 0x44947e:c.instructions+=1;goto B44947e;
case 0x449483:goto L449483;
case 0x449487:c.instructions+=13;goto B449487;
case 0x44948b:c.instructions+=12;goto B44948b;
case 0x44948f:c.instructions+=11;goto B44948f;
case 0x449493:c.instructions+=10;goto B449493;
case 0x449497:c.instructions+=9;goto B449497;
case 0x44949b:c.instructions+=8;goto B44949b;
case 0x44949f:c.instructions+=7;goto B44949f;
case 0x4494a3:c.instructions+=6;goto B4494a3;
case 0x4494a7:c.instructions+=5;goto B4494a7;
case 0x4494ab:c.instructions+=4;goto B4494ab;
case 0x4494ac:c.instructions+=3;goto B4494ac;
case 0x4494ad:c.instructions+=2;goto B4494ad;
case 0x4494b1:c.instructions+=1;goto B4494b1;
case 0x4494b6:goto L4494b6;
case 0x4494ba:c.instructions+=15;goto B4494ba;
case 0x4494be:c.instructions+=14;goto B4494be;
case 0x4494c5:c.instructions+=13;goto B4494c5;
case 0x4494c9:c.instructions+=12;goto B4494c9;
case 0x4494cc:c.instructions+=11;goto B4494cc;
case 0x4494d0:c.instructions+=10;goto B4494d0;
case 0x4494d1:c.instructions+=9;goto B4494d1;
case 0x4494d5:c.instructions+=8;goto B4494d5;
case 0x4494d6:c.instructions+=7;goto B4494d6;
case 0x4494da:c.instructions+=6;goto B4494da;
case 0x4494de:c.instructions+=5;goto B4494de;
case 0x4494e2:c.instructions+=4;goto B4494e2;
case 0x4494e6:c.instructions+=3;goto B4494e6;
case 0x4494e8:c.instructions+=2;goto B4494e8;
case 0x4494eb:c.instructions+=1;goto B4494eb;
case 0x4494f0:goto L4494f0;
case 0x4494f4:c.instructions+=12;goto B4494f4;
case 0x4494f8:c.instructions+=11;goto B4494f8;
case 0x4494fb:c.instructions+=10;goto B4494fb;
case 0x4494fc:c.instructions+=9;goto B4494fc;
case 0x449503:c.instructions+=8;goto B449503;
case 0x449507:c.instructions+=7;goto B449507;
case 0x44950b:c.instructions+=6;goto B44950b;
case 0x44950d:c.instructions+=5;goto B44950d;
case 0x449513:c.instructions+=4;goto B449513;
case 0x449514:c.instructions+=3;goto B449514;
case 0x449516:c.instructions+=2;goto B449516;
case 0x449517:c.instructions+=1;goto B449517;
case 0x449520:goto L449520;
case 0x449521:c.instructions+=15;goto B449521;
case 0x449523:c.instructions+=14;goto B449523;
case 0x449526:c.instructions+=13;goto B449526;
case 0x44952c:c.instructions+=12;goto B44952c;
case 0x44952d:c.instructions+=11;goto B44952d;
case 0x44952e:c.instructions+=10;goto B44952e;
case 0x449530:c.instructions+=9;goto B449530;
case 0x449532:c.instructions+=8;goto B449532;
case 0x449539:c.instructions+=7;goto B449539;
case 0x44953a:c.instructions+=6;goto B44953a;
case 0x44953e:c.instructions+=5;goto B44953e;
case 0x449542:c.instructions+=4;goto B449542;
case 0x449543:c.instructions+=3;goto B449543;
case 0x449544:c.instructions+=2;goto B449544;
case 0x449545:c.instructions+=1;goto B449545;
case 0x44954a:goto L44954a;
case 0x44954c:c.instructions+=7;goto B44954c;
case 0x449553:c.instructions+=6;goto B449553;
case 0x449557:c.instructions+=5;goto B449557;
case 0x44955b:c.instructions+=4;goto B44955b;
case 0x44955c:c.instructions+=3;goto B44955c;
case 0x44955d:c.instructions+=2;goto B44955d;
case 0x44955e:c.instructions+=1;goto B44955e;
case 0x449563:goto L449563;
case 0x449569:c.instructions+=3;goto B449569;
case 0x44956c:c.instructions+=2;goto B44956c;
case 0x44956f:c.instructions+=1;goto B44956f;
case 0x449571:goto L449571;
case 0x449574:c.instructions+=1;goto B449574;
case 0x449576:goto L449576;
case 0x449579:c.instructions+=1;goto B449579;
case 0x44957b:goto L44957b;
case 0x44957d:c.instructions+=1;goto B44957d;
case 0x44957f:goto L44957f;
case 0x449584:goto L449584;
case 0x449588:c.instructions+=13;goto B449588;
case 0x44958b:c.instructions+=12;goto B44958b;
case 0x44958d:c.instructions+=11;goto B44958d;
case 0x449593:c.instructions+=10;goto B449593;
case 0x449597:c.instructions+=9;goto B449597;
case 0x449598:c.instructions+=8;goto B449598;
case 0x44959a:c.instructions+=7;goto B44959a;
case 0x44959e:c.instructions+=6;goto B44959e;
case 0x4495a2:c.instructions+=5;goto B4495a2;
case 0x4495a6:c.instructions+=4;goto B4495a6;
case 0x4495aa:c.instructions+=3;goto B4495aa;
case 0x4495b0:c.instructions+=2;goto B4495b0;
case 0x4495b4:c.instructions+=1;goto B4495b4;
case 0x4495b6:goto L4495b6;
case 0x4495bc:c.instructions+=5;goto B4495bc;
case 0x4495bd:c.instructions+=4;goto B4495bd;
case 0x4495c1:c.instructions+=3;goto B4495c1;
case 0x4495c2:c.instructions+=2;goto B4495c2;
case 0x4495c4:c.instructions+=1;goto B4495c4;
case 0x4495c9:goto L4495c9;
case 0x4495cd:c.instructions+=16;goto B4495cd;
case 0x4495d1:c.instructions+=15;goto B4495d1;
case 0x4495d7:c.instructions+=14;goto B4495d7;
case 0x4495db:c.instructions+=13;goto B4495db;
case 0x4495e1:c.instructions+=12;goto B4495e1;
case 0x4495e5:c.instructions+=11;goto B4495e5;
case 0x4495e9:c.instructions+=10;goto B4495e9;
case 0x4495ed:c.instructions+=9;goto B4495ed;
case 0x4495f5:c.instructions+=8;goto B4495f5;
case 0x4495f9:c.instructions+=7;goto B4495f9;
case 0x4495fd:c.instructions+=6;goto B4495fd;
case 0x4495ff:c.instructions+=5;goto B4495ff;
case 0x449603:c.instructions+=4;goto B449603;
case 0x449607:c.instructions+=3;goto B449607;
case 0x44960b:c.instructions+=2;goto B44960b;
case 0x44960f:c.instructions+=1;goto B44960f;
case 0x449611:goto L449611;
case 0x449617:c.instructions+=5;goto B449617;
case 0x449618:c.instructions+=4;goto B449618;
case 0x44961c:c.instructions+=3;goto B44961c;
case 0x44961d:c.instructions+=2;goto B44961d;
case 0x44961f:c.instructions+=1;goto B44961f;
case 0x449624:goto L449624;
case 0x449628:c.instructions+=15;goto B449628;
case 0x44962c:c.instructions+=14;goto B44962c;
case 0x449632:c.instructions+=13;goto B449632;
case 0x449636:c.instructions+=12;goto B449636;
case 0x44963c:c.instructions+=11;goto B44963c;
case 0x449640:c.instructions+=10;goto B449640;
case 0x449644:c.instructions+=9;goto B449644;
case 0x449648:c.instructions+=8;goto B449648;
case 0x449650:c.instructions+=7;goto B449650;
case 0x449654:c.instructions+=6;goto B449654;
case 0x449658:c.instructions+=5;goto B449658;
case 0x44965a:c.instructions+=4;goto B44965a;
case 0x44965e:c.instructions+=3;goto B44965e;
case 0x449662:c.instructions+=2;goto B449662;
case 0x449666:c.instructions+=1;goto B449666;
case 0x44966a:goto L44966a;
case 0x44966d:c.instructions+=1;goto B44966d;
case 0x449673:goto L449673;
case 0x449676:c.instructions+=1;goto B449676;
case 0x44967c:goto L44967c;
case 0x44967d:c.instructions+=1;goto B44967d;
case 0x449683:goto L449683;
case 0x449689:c.instructions+=3;goto B449689;
case 0x44968a:c.instructions+=2;goto B44968a;
case 0x44968f:c.instructions+=1;goto B44968f;
case 0x449694:goto L449694;
case 0x449699:c.instructions+=4;goto B449699;
case 0x44969a:c.instructions+=3;goto B44969a;
case 0x44969e:c.instructions+=2;goto B44969e;
case 0x44969f:c.instructions+=1;goto B44969f;
case 0x4496a4:goto L4496a4;
case 0x4496a7:c.instructions+=3;goto B4496a7;
case 0x4496a8:c.instructions+=2;goto B4496a8;
case 0x4496aa:c.instructions+=1;goto B4496aa;
case 0x4496af:goto L4496af;
case 0x4496b2:c.instructions+=30;goto B4496b2;
case 0x4496b6:c.instructions+=29;goto B4496b6;
case 0x4496b8:c.instructions+=28;goto B4496b8;
case 0x4496bc:c.instructions+=27;goto B4496bc;
case 0x4496bf:c.instructions+=26;goto B4496bf;
case 0x4496c1:c.instructions+=25;goto B4496c1;
case 0x4496c3:c.instructions+=24;goto B4496c3;
case 0x4496c7:c.instructions+=23;goto B4496c7;
case 0x4496c9:c.instructions+=22;goto B4496c9;
case 0x4496d0:c.instructions+=21;goto B4496d0;
case 0x4496d4:c.instructions+=20;goto B4496d4;
case 0x4496d6:c.instructions+=19;goto B4496d6;
case 0x4496da:c.instructions+=18;goto B4496da;
case 0x4496dd:c.instructions+=17;goto B4496dd;
case 0x4496df:c.instructions+=16;goto B4496df;
case 0x4496e1:c.instructions+=15;goto B4496e1;
case 0x4496e5:c.instructions+=14;goto B4496e5;
case 0x4496e7:c.instructions+=13;goto B4496e7;
case 0x4496ee:c.instructions+=12;goto B4496ee;
case 0x4496f2:c.instructions+=11;goto B4496f2;
case 0x4496f4:c.instructions+=10;goto B4496f4;
case 0x4496f8:c.instructions+=9;goto B4496f8;
case 0x4496fb:c.instructions+=8;goto B4496fb;
case 0x4496fd:c.instructions+=7;goto B4496fd;
case 0x4496ff:c.instructions+=6;goto B4496ff;
case 0x449703:c.instructions+=5;goto B449703;
case 0x449705:c.instructions+=4;goto B449705;
case 0x449707:c.instructions+=3;goto B449707;
case 0x44970e:c.instructions+=2;goto B44970e;
case 0x449712:c.instructions+=1;goto B449712;
case 0x449717:goto L449717;
case 0x44971d:c.instructions+=15;goto B44971d;
case 0x449720:c.instructions+=14;goto B449720;
case 0x449723:c.instructions+=13;goto B449723;
case 0x449726:c.instructions+=12;goto B449726;
case 0x449728:c.instructions+=11;goto B449728;
case 0x44972a:c.instructions+=10;goto B44972a;
case 0x44972c:c.instructions+=9;goto B44972c;
case 0x44972f:c.instructions+=8;goto B44972f;
case 0x449731:c.instructions+=7;goto B449731;
case 0x449734:c.instructions+=6;goto B449734;
case 0x449737:c.instructions+=5;goto B449737;
case 0x449739:c.instructions+=4;goto B449739;
case 0x44973c:c.instructions+=3;goto B44973c;
case 0x44973e:c.instructions+=2;goto B44973e;
case 0x449740:c.instructions+=1;goto B449740;
case 0x449745:goto L449745;
case 0x44974b:c.instructions+=7;goto B44974b;
case 0x44974e:c.instructions+=6;goto B44974e;
case 0x44974f:c.instructions+=5;goto B44974f;
case 0x449754:c.instructions+=4;goto B449754;
case 0x449755:c.instructions+=3;goto B449755;
case 0x44975c:c.instructions+=2;goto B44975c;
case 0x44975d:c.instructions+=1;goto B44975d;
case 0x449762:goto L449762;
case 0x449769:c.instructions+=4;goto B449769;
case 0x44976a:c.instructions+=3;goto B44976a;
case 0x44976e:c.instructions+=2;goto B44976e;
case 0x44976f:c.instructions+=1;goto B44976f;
case 0x449774:goto L449774;
case 0x449778:c.instructions+=29;goto B449778;
case 0x44977b:c.instructions+=28;goto B44977b;
case 0x44977e:c.instructions+=27;goto B44977e;
case 0x449782:c.instructions+=26;goto B449782;
case 0x449785:c.instructions+=25;goto B449785;
case 0x449787:c.instructions+=24;goto B449787;
case 0x44978b:c.instructions+=23;goto B44978b;
case 0x44978d:c.instructions+=22;goto B44978d;
case 0x44978f:c.instructions+=21;goto B44978f;
case 0x449796:c.instructions+=20;goto B449796;
case 0x44979a:c.instructions+=19;goto B44979a;
case 0x44979c:c.instructions+=18;goto B44979c;
case 0x4497a0:c.instructions+=17;goto B4497a0;
case 0x4497a3:c.instructions+=16;goto B4497a3;
case 0x4497a5:c.instructions+=15;goto B4497a5;
case 0x4497a9:c.instructions+=14;goto B4497a9;
case 0x4497ac:c.instructions+=13;goto B4497ac;
case 0x4497ae:c.instructions+=12;goto B4497ae;
case 0x4497b5:c.instructions+=11;goto B4497b5;
case 0x4497b9:c.instructions+=10;goto B4497b9;
case 0x4497bb:c.instructions+=9;goto B4497bb;
case 0x4497bf:c.instructions+=8;goto B4497bf;
case 0x4497c2:c.instructions+=7;goto B4497c2;
case 0x4497c4:c.instructions+=6;goto B4497c4;
case 0x4497c8:c.instructions+=5;goto B4497c8;
case 0x4497cb:c.instructions+=4;goto B4497cb;
case 0x4497cd:c.instructions+=3;goto B4497cd;
case 0x4497d4:c.instructions+=2;goto B4497d4;
case 0x4497d8:c.instructions+=1;goto B4497d8;
case 0x4497da:goto L4497da;
case 0x4497de:c.instructions+=3;goto B4497de;
case 0x4497e0:c.instructions+=2;goto B4497e0;
case 0x4497e3:c.instructions+=1;goto B4497e3;
case 0x4497e6:goto L4497e6;
case 0x4497e9:c.instructions+=3;goto B4497e9;
case 0x4497eb:c.instructions+=2;goto B4497eb;
case 0x4497ee:c.instructions+=1;goto B4497ee;
case 0x4497f0:goto L4497f0;
case 0x4497f6:c.instructions+=22;goto B4497f6;
case 0x4497fa:c.instructions+=21;goto B4497fa;
case 0x449800:c.instructions+=20;goto B449800;
case 0x449803:c.instructions+=19;goto B449803;
case 0x449805:c.instructions+=18;goto B449805;
case 0x44980c:c.instructions+=17;goto B44980c;
case 0x449812:c.instructions+=16;goto B449812;
case 0x449816:c.instructions+=15;goto B449816;
case 0x44981c:c.instructions+=14;goto B44981c;
case 0x44981e:c.instructions+=13;goto B44981e;
case 0x449822:c.instructions+=12;goto B449822;
case 0x449829:c.instructions+=11;goto B449829;
case 0x44982f:c.instructions+=10;goto B44982f;
case 0x449833:c.instructions+=9;goto B449833;
case 0x449839:c.instructions+=8;goto B449839;
case 0x44983b:c.instructions+=7;goto B44983b;
case 0x44983e:c.instructions+=6;goto B44983e;
case 0x44983f:c.instructions+=5;goto B44983f;
case 0x449840:c.instructions+=4;goto B449840;
case 0x449841:c.instructions+=3;goto B449841;
case 0x449843:c.instructions+=2;goto B449843;
case 0x449844:c.instructions+=1;goto B449844;
case 0x449847:goto L449847;
case 0x44984d:c.instructions+=22;goto B44984d;
case 0x449851:c.instructions+=21;goto B449851;
case 0x449857:c.instructions+=20;goto B449857;
case 0x44985a:c.instructions+=19;goto B44985a;
case 0x44985c:c.instructions+=18;goto B44985c;
case 0x44985d:c.instructions+=17;goto B44985d;
case 0x449864:c.instructions+=16;goto B449864;
case 0x44986a:c.instructions+=15;goto B44986a;
case 0x44986e:c.instructions+=14;goto B44986e;
case 0x449874:c.instructions+=13;goto B449874;
case 0x449876:c.instructions+=12;goto B449876;
case 0x44987a:c.instructions+=11;goto B44987a;
case 0x449881:c.instructions+=10;goto B449881;
case 0x449887:c.instructions+=9;goto B449887;
case 0x44988b:c.instructions+=8;goto B44988b;
case 0x449891:c.instructions+=7;goto B449891;
case 0x449893:c.instructions+=6;goto B449893;
case 0x449896:c.instructions+=5;goto B449896;
case 0x449897:c.instructions+=4;goto B449897;
case 0x449898:c.instructions+=3;goto B449898;
case 0x44989a:c.instructions+=2;goto B44989a;
case 0x44989b:c.instructions+=1;goto B44989b;
case 0x4498a0:goto L4498a0;
case 0x4498a1:c.instructions+=14;goto B4498a1;
case 0x4498a3:c.instructions+=13;goto B4498a3;
case 0x4498a6:c.instructions+=12;goto B4498a6;
case 0x4498ac:c.instructions+=11;goto B4498ac;
case 0x4498ad:c.instructions+=10;goto B4498ad;
case 0x4498ae:c.instructions+=9;goto B4498ae;
case 0x4498af:c.instructions+=8;goto B4498af;
case 0x4498b2:c.instructions+=7;goto B4498b2;
case 0x4498b4:c.instructions+=6;goto B4498b4;
case 0x4498ba:c.instructions+=5;goto B4498ba;
case 0x4498bc:c.instructions+=4;goto B4498bc;
case 0x4498c4:c.instructions+=3;goto B4498c4;
case 0x4498c7:c.instructions+=2;goto B4498c7;
case 0x4498ca:c.instructions+=1;goto B4498ca;
case 0x4498d0:goto L4498d0;
case 0x4498d2:c.instructions+=5;goto B4498d2;
case 0x4498d3:c.instructions+=4;goto B4498d3;
case 0x4498d7:c.instructions+=3;goto B4498d7;
case 0x4498d8:c.instructions+=2;goto B4498d8;
case 0x4498da:c.instructions+=1;goto B4498da;
case 0x4498df:goto L4498df;
case 0x4498e1:c.instructions+=5;goto B4498e1;
case 0x4498e2:c.instructions+=4;goto B4498e2;
case 0x4498e6:c.instructions+=3;goto B4498e6;
case 0x4498e7:c.instructions+=2;goto B4498e7;
case 0x4498e9:c.instructions+=1;goto B4498e9;
case 0x4498ee:goto L4498ee;
case 0x4498f1:c.instructions+=2;goto B4498f1;
case 0x4498f4:c.instructions+=1;goto B4498f4;
case 0x4498fa:goto L4498fa;
case 0x4498fd:c.instructions+=1;goto B4498fd;
case 0x449903:goto L449903;
case 0x449904:c.instructions+=1;goto B449904;
case 0x44990a:goto L44990a;
case 0x44990e:c.instructions+=3;goto B44990e;
case 0x44990f:c.instructions+=2;goto B44990f;
case 0x449911:c.instructions+=1;goto B449911;
case 0x449916:goto L449916;
case 0x44991a:c.instructions+=5;goto B44991a;
case 0x44991e:c.instructions+=4;goto B44991e;
case 0x44991f:c.instructions+=3;goto B44991f;
case 0x449921:c.instructions+=2;goto B449921;
case 0x449925:c.instructions+=1;goto B449925;
case 0x44992a:goto L44992a;
case 0x44992e:c.instructions+=5;goto B44992e;
case 0x449934:c.instructions+=4;goto B449934;
case 0x449935:c.instructions+=3;goto B449935;
case 0x44993a:c.instructions+=2;goto B44993a;
case 0x44993e:c.instructions+=1;goto B44993e;
case 0x449943:goto L449943;
case 0x449948:c.instructions+=4;goto B449948;
case 0x449949:c.instructions+=3;goto B449949;
case 0x44994d:c.instructions+=2;goto B44994d;
case 0x44994e:c.instructions+=1;goto B44994e;
case 0x449953:goto L449953;
case 0x449957:c.instructions+=41;goto B449957;
case 0x44995b:c.instructions+=40;goto B44995b;
case 0x44995e:c.instructions+=39;goto B44995e;
case 0x449962:c.instructions+=38;goto B449962;
case 0x449966:c.instructions+=37;goto B449966;
case 0x449968:c.instructions+=36;goto B449968;
case 0x44996c:c.instructions+=35;goto B44996c;
case 0x449970:c.instructions+=34;goto B449970;
case 0x449972:c.instructions+=33;goto B449972;
case 0x449976:c.instructions+=32;goto B449976;
case 0x44997a:c.instructions+=31;goto B44997a;
case 0x44997e:c.instructions+=30;goto B44997e;
case 0x449982:c.instructions+=29;goto B449982;
case 0x449986:c.instructions+=28;goto B449986;
case 0x449988:c.instructions+=27;goto B449988;
case 0x44998c:c.instructions+=26;goto B44998c;
case 0x449990:c.instructions+=25;goto B449990;
case 0x449992:c.instructions+=24;goto B449992;
case 0x449996:c.instructions+=23;goto B449996;
case 0x44999a:c.instructions+=22;goto B44999a;
case 0x44999e:c.instructions+=21;goto B44999e;
case 0x4499a2:c.instructions+=20;goto B4499a2;
case 0x4499a6:c.instructions+=19;goto B4499a6;
case 0x4499a8:c.instructions+=18;goto B4499a8;
case 0x4499ac:c.instructions+=17;goto B4499ac;
case 0x4499b0:c.instructions+=16;goto B4499b0;
case 0x4499b2:c.instructions+=15;goto B4499b2;
case 0x4499b6:c.instructions+=14;goto B4499b6;
case 0x4499ba:c.instructions+=13;goto B4499ba;
case 0x4499be:c.instructions+=12;goto B4499be;
case 0x4499c0:c.instructions+=11;goto B4499c0;
case 0x4499c4:c.instructions+=10;goto B4499c4;
case 0x4499c8:c.instructions+=9;goto B4499c8;
case 0x4499cc:c.instructions+=8;goto B4499cc;
case 0x4499d0:c.instructions+=7;goto B4499d0;
case 0x4499d4:c.instructions+=6;goto B4499d4;
case 0x4499d8:c.instructions+=5;goto B4499d8;
case 0x4499dc:c.instructions+=4;goto B4499dc;
case 0x4499de:c.instructions+=3;goto B4499de;
case 0x4499e2:c.instructions+=2;goto B4499e2;
case 0x4499e6:c.instructions+=1;goto B4499e6;
case 0x4499eb:goto L4499eb;
case 0x4499f1:c.instructions+=7;goto B4499f1;
case 0x4499f3:c.instructions+=6;goto B4499f3;
case 0x4499f5:c.instructions+=5;goto B4499f5;
case 0x4499f8:c.instructions+=4;goto B4499f8;
case 0x4499f9:c.instructions+=3;goto B4499f9;
case 0x4499fb:c.instructions+=2;goto B4499fb;
case 0x4499fd:c.instructions+=1;goto B4499fd;
case 0x4499ff:goto L4499ff;
case 0x449a01:c.instructions+=1;goto B449a01;
case 0x449a03:goto L449a03;
case 0x449a05:goto L449a05;
case 0x449a0b:c.instructions+=3;goto B449a0b;
case 0x449a12:c.instructions+=2;goto B449a12;
case 0x449a16:c.instructions+=1;goto B449a16;
case 0x449a18:goto L449a18;
case 0x449a20:goto L449a20;
case 0x449a24:c.instructions+=3;goto B449a24;
case 0x449a25:c.instructions+=2;goto B449a25;
case 0x449a27:c.instructions+=1;goto B449a27;
case 0x449a2c:goto L449a2c;
case 0x449a32:c.instructions+=23;goto B449a32;
case 0x449a35:c.instructions+=22;goto B449a35;
case 0x449a38:c.instructions+=21;goto B449a38;
case 0x449a3b:c.instructions+=20;goto B449a3b;
case 0x449a41:c.instructions+=19;goto B449a41;
case 0x449a45:c.instructions+=18;goto B449a45;
case 0x449a47:c.instructions+=17;goto B449a47;
case 0x449a49:c.instructions+=16;goto B449a49;
case 0x449a4c:c.instructions+=15;goto B449a4c;
case 0x449a4e:c.instructions+=14;goto B449a4e;
case 0x449a51:c.instructions+=13;goto B449a51;
case 0x449a55:c.instructions+=12;goto B449a55;
case 0x449a59:c.instructions+=11;goto B449a59;
case 0x449a5b:c.instructions+=10;goto B449a5b;
case 0x449a5f:c.instructions+=9;goto B449a5f;
case 0x449a63:c.instructions+=8;goto B449a63;
case 0x449a64:c.instructions+=7;goto B449a64;
case 0x449a66:c.instructions+=6;goto B449a66;
case 0x449a68:c.instructions+=5;goto B449a68;
case 0x449a6a:c.instructions+=4;goto B449a6a;
case 0x449a6e:c.instructions+=3;goto B449a6e;
case 0x449a70:c.instructions+=2;goto B449a70;
case 0x449a72:c.instructions+=1;goto B449a72;
case 0x449a74:goto L449a74;
case 0x449a76:c.instructions+=1;goto B449a76;
case 0x449a78:goto L449a78;
case 0x449a7a:goto L449a7a;
case 0x449a80:c.instructions+=3;goto B449a80;
case 0x449a87:c.instructions+=2;goto B449a87;
case 0x449a8b:c.instructions+=1;goto B449a8b;
case 0x449a8d:goto L449a8d;
case 0x449a95:goto L449a95;
case 0x449a99:c.instructions+=3;goto B449a99;
case 0x449a9a:c.instructions+=2;goto B449a9a;
case 0x449a9c:c.instructions+=1;goto B449a9c;
case 0x449aa1:goto L449aa1;
case 0x449aa7:c.instructions+=11;goto B449aa7;
case 0x449aaa:c.instructions+=10;goto B449aaa;
case 0x449aad:c.instructions+=9;goto B449aad;
case 0x449ab1:c.instructions+=8;goto B449ab1;
case 0x449ab4:c.instructions+=7;goto B449ab4;
case 0x449ab6:c.instructions+=6;goto B449ab6;
case 0x449aba:c.instructions+=5;goto B449aba;
case 0x449abe:c.instructions+=4;goto B449abe;
case 0x449ac2:c.instructions+=3;goto B449ac2;
case 0x449ac6:c.instructions+=2;goto B449ac6;
case 0x449aca:c.instructions+=1;goto B449aca;
case 0x449acf:goto L449acf;
case 0x449ad5:c.instructions+=7;goto B449ad5;
case 0x449ad7:c.instructions+=6;goto B449ad7;
case 0x449ad9:c.instructions+=5;goto B449ad9;
case 0x449adc:c.instructions+=4;goto B449adc;
case 0x449add:c.instructions+=3;goto B449add;
case 0x449adf:c.instructions+=2;goto B449adf;
case 0x449ae1:c.instructions+=1;goto B449ae1;
case 0x449ae3:goto L449ae3;
case 0x449ae5:c.instructions+=1;goto B449ae5;
case 0x449ae7:goto L449ae7;
case 0x449ae9:goto L449ae9;
case 0x449aef:c.instructions+=3;goto B449aef;
case 0x449af6:c.instructions+=2;goto B449af6;
case 0x449afa:c.instructions+=1;goto B449afa;
case 0x449afc:goto L449afc;
case 0x449b04:goto L449b04;
case 0x449b08:c.instructions+=3;goto B449b08;
case 0x449b09:c.instructions+=2;goto B449b09;
case 0x449b0b:c.instructions+=1;goto B449b0b;
case 0x449b10:goto L449b10;
case 0x449b16:c.instructions+=7;goto B449b16;
case 0x449b19:c.instructions+=6;goto B449b19;
case 0x449b1a:c.instructions+=5;goto B449b1a;
case 0x449b1f:c.instructions+=4;goto B449b1f;
case 0x449b20:c.instructions+=3;goto B449b20;
case 0x449b27:c.instructions+=2;goto B449b27;
case 0x449b28:c.instructions+=1;goto B449b28;
case 0x449b2d:goto L449b2d;
case 0x449b34:c.instructions+=4;goto B449b34;
case 0x449b35:c.instructions+=3;goto B449b35;
case 0x449b39:c.instructions+=2;goto B449b39;
case 0x449b3a:c.instructions+=1;goto B449b3a;
case 0x449b3f:goto L449b3f;
case 0x449b43:c.instructions+=42;goto B449b43;
case 0x449b47:c.instructions+=41;goto B449b47;
case 0x449b4d:c.instructions+=40;goto B449b4d;
case 0x449b51:c.instructions+=39;goto B449b51;
case 0x449b54:c.instructions+=38;goto B449b54;
case 0x449b58:c.instructions+=37;goto B449b58;
case 0x449b5b:c.instructions+=36;goto B449b5b;
case 0x449b5d:c.instructions+=35;goto B449b5d;
case 0x449b61:c.instructions+=34;goto B449b61;
case 0x449b65:c.instructions+=33;goto B449b65;
case 0x449b67:c.instructions+=32;goto B449b67;
case 0x449b6b:c.instructions+=31;goto B449b6b;
case 0x449b6f:c.instructions+=30;goto B449b6f;
case 0x449b73:c.instructions+=29;goto B449b73;
case 0x449b77:c.instructions+=28;goto B449b77;
case 0x449b7b:c.instructions+=27;goto B449b7b;
case 0x449b7d:c.instructions+=26;goto B449b7d;
case 0x449b81:c.instructions+=25;goto B449b81;
case 0x449b85:c.instructions+=24;goto B449b85;
case 0x449b87:c.instructions+=23;goto B449b87;
case 0x449b8b:c.instructions+=22;goto B449b8b;
case 0x449b8f:c.instructions+=21;goto B449b8f;
case 0x449b93:c.instructions+=20;goto B449b93;
case 0x449b97:c.instructions+=19;goto B449b97;
case 0x449b9b:c.instructions+=18;goto B449b9b;
case 0x449b9d:c.instructions+=17;goto B449b9d;
case 0x449ba1:c.instructions+=16;goto B449ba1;
case 0x449ba5:c.instructions+=15;goto B449ba5;
case 0x449ba7:c.instructions+=14;goto B449ba7;
case 0x449bab:c.instructions+=13;goto B449bab;
case 0x449baf:c.instructions+=12;goto B449baf;
case 0x449bb3:c.instructions+=11;goto B449bb3;
case 0x449bb7:c.instructions+=10;goto B449bb7;
case 0x449bb9:c.instructions+=9;goto B449bb9;
case 0x449bbb:c.instructions+=8;goto B449bbb;
case 0x449bbf:c.instructions+=7;goto B449bbf;
case 0x449bc1:c.instructions+=6;goto B449bc1;
case 0x449bc4:c.instructions+=5;goto B449bc4;
case 0x449bc8:c.instructions+=4;goto B449bc8;
case 0x449bc9:c.instructions+=3;goto B449bc9;
case 0x449bcb:c.instructions+=2;goto B449bcb;
case 0x449bcd:c.instructions+=1;goto B449bcd;
case 0x449bcf:goto L449bcf;
case 0x449bd1:c.instructions+=1;goto B449bd1;
case 0x449bd3:goto L449bd3;
case 0x449bd5:goto L449bd5;
case 0x449bdb:c.instructions+=3;goto B449bdb;
case 0x449be2:c.instructions+=2;goto B449be2;
case 0x449be6:c.instructions+=1;goto B449be6;
case 0x449be8:goto L449be8;
case 0x449bf0:goto L449bf0;
case 0x449bf4:c.instructions+=3;goto B449bf4;
case 0x449bf5:c.instructions+=2;goto B449bf5;
case 0x449bf7:c.instructions+=1;goto B449bf7;
case 0x449bfc:goto L449bfc;
case 0x449c02:c.instructions+=7;goto B449c02;
case 0x449c05:c.instructions+=6;goto B449c05;
case 0x449c06:c.instructions+=5;goto B449c06;
case 0x449c0c:c.instructions+=4;goto B449c0c;
case 0x449c13:c.instructions+=3;goto B449c13;
case 0x449c14:c.instructions+=2;goto B449c14;
case 0x449c15:c.instructions+=1;goto B449c15;
case 0x449c1a:goto L449c1a;
case 0x449c21:c.instructions+=4;goto B449c21;
case 0x449c22:c.instructions+=3;goto B449c22;
case 0x449c26:c.instructions+=2;goto B449c26;
case 0x449c27:c.instructions+=1;goto B449c27;
case 0x449c2c:goto L449c2c;
case 0x449c30:c.instructions+=7;goto B449c30;
case 0x449c34:c.instructions+=6;goto B449c34;
case 0x449c37:c.instructions+=5;goto B449c37;
case 0x449c3b:c.instructions+=4;goto B449c3b;
case 0x449c3f:c.instructions+=3;goto B449c3f;
case 0x449c41:c.instructions+=2;goto B449c41;
case 0x449c45:c.instructions+=1;goto B449c45;
case 0x449c49:goto L449c49;
case 0x449c4b:c.instructions+=25;goto B449c4b;
case 0x449c4f:c.instructions+=24;goto B449c4f;
case 0x449c53:c.instructions+=23;goto B449c53;
case 0x449c57:c.instructions+=22;goto B449c57;
case 0x449c5b:c.instructions+=21;goto B449c5b;
case 0x449c5f:c.instructions+=20;goto B449c5f;
case 0x449c61:c.instructions+=19;goto B449c61;
case 0x449c65:c.instructions+=18;goto B449c65;
case 0x449c69:c.instructions+=17;goto B449c69;
case 0x449c6b:c.instructions+=16;goto B449c6b;
case 0x449c6f:c.instructions+=15;goto B449c6f;
case 0x449c73:c.instructions+=14;goto B449c73;
case 0x449c77:c.instructions+=13;goto B449c77;
case 0x449c7b:c.instructions+=12;goto B449c7b;
case 0x449c7f:c.instructions+=11;goto B449c7f;
case 0x449c83:c.instructions+=10;goto B449c83;
case 0x449c85:c.instructions+=9;goto B449c85;
case 0x449c89:c.instructions+=8;goto B449c89;
case 0x449c8d:c.instructions+=7;goto B449c8d;
case 0x449c8f:c.instructions+=6;goto B449c8f;
case 0x449c93:c.instructions+=5;goto B449c93;
case 0x449c97:c.instructions+=4;goto B449c97;
case 0x449c9b:c.instructions+=3;goto B449c9b;
case 0x449c9f:c.instructions+=2;goto B449c9f;
case 0x449ca3:c.instructions+=1;goto B449ca3;
case 0x449ca5:goto L449ca5;
case 0x449ca9:c.instructions+=1;goto B449ca9;
case 0x449cad:goto L449cad;
case 0x449cb0:c.instructions+=12;goto B449cb0;
case 0x449cb2:c.instructions+=11;goto B449cb2;
case 0x449cb6:c.instructions+=10;goto B449cb6;
case 0x449cbc:c.instructions+=9;goto B449cbc;
case 0x449cc0:c.instructions+=8;goto B449cc0;
case 0x449cc6:c.instructions+=7;goto B449cc6;
case 0x449ccc:c.instructions+=6;goto B449ccc;
case 0x449cd0:c.instructions+=5;goto B449cd0;
case 0x449cd6:c.instructions+=4;goto B449cd6;
case 0x449cda:c.instructions+=3;goto B449cda;
case 0x449ce0:c.instructions+=2;goto B449ce0;
case 0x449ce6:c.instructions+=1;goto B449ce6;
case 0x449cec:goto L449cec;
case 0x449ced:c.instructions+=5;goto B449ced;
case 0x449cee:c.instructions+=4;goto B449cee;
case 0x449cef:c.instructions+=3;goto B449cef;
case 0x449cf1:c.instructions+=2;goto B449cf1;
case 0x449cf2:c.instructions+=1;goto B449cf2;
case 0x449d00:goto L449d00;
case 0x449d01:c.instructions+=14;goto B449d01;
case 0x449d03:c.instructions+=13;goto B449d03;
case 0x449d06:c.instructions+=12;goto B449d06;
case 0x449d0c:c.instructions+=11;goto B449d0c;
case 0x449d0d:c.instructions+=10;goto B449d0d;
case 0x449d0e:c.instructions+=9;goto B449d0e;
case 0x449d0f:c.instructions+=8;goto B449d0f;
case 0x449d12:c.instructions+=7;goto B449d12;
case 0x449d14:c.instructions+=6;goto B449d14;
case 0x449d1a:c.instructions+=5;goto B449d1a;
case 0x449d1c:c.instructions+=4;goto B449d1c;
case 0x449d24:c.instructions+=3;goto B449d24;
case 0x449d27:c.instructions+=2;goto B449d27;
case 0x449d2a:c.instructions+=1;goto B449d2a;
case 0x449d30:goto L449d30;
case 0x449d32:c.instructions+=5;goto B449d32;
case 0x449d33:c.instructions+=4;goto B449d33;
case 0x449d37:c.instructions+=3;goto B449d37;
case 0x449d38:c.instructions+=2;goto B449d38;
case 0x449d3a:c.instructions+=1;goto B449d3a;
case 0x449d3f:goto L449d3f;
case 0x449d41:c.instructions+=5;goto B449d41;
case 0x449d42:c.instructions+=4;goto B449d42;
case 0x449d46:c.instructions+=3;goto B449d46;
case 0x449d47:c.instructions+=2;goto B449d47;
case 0x449d49:c.instructions+=1;goto B449d49;
case 0x449d4e:goto L449d4e;
case 0x449d51:c.instructions+=2;goto B449d51;
case 0x449d54:c.instructions+=1;goto B449d54;
case 0x449d5a:goto L449d5a;
case 0x449d5d:c.instructions+=1;goto B449d5d;
case 0x449d63:goto L449d63;
case 0x449d64:c.instructions+=1;goto B449d64;
case 0x449d6a:goto L449d6a;
case 0x449d6e:c.instructions+=3;goto B449d6e;
case 0x449d6f:c.instructions+=2;goto B449d6f;
case 0x449d71:c.instructions+=1;goto B449d71;
case 0x449d76:goto L449d76;
case 0x449d7a:c.instructions+=5;goto B449d7a;
case 0x449d7e:c.instructions+=4;goto B449d7e;
case 0x449d7f:c.instructions+=3;goto B449d7f;
case 0x449d81:c.instructions+=2;goto B449d81;
case 0x449d85:c.instructions+=1;goto B449d85;
case 0x449d8a:goto L449d8a;
case 0x449d8e:c.instructions+=5;goto B449d8e;
case 0x449d94:c.instructions+=4;goto B449d94;
case 0x449d95:c.instructions+=3;goto B449d95;
case 0x449d9a:c.instructions+=2;goto B449d9a;
case 0x449d9e:c.instructions+=1;goto B449d9e;
case 0x449da3:goto L449da3;
case 0x449da8:c.instructions+=4;goto B449da8;
case 0x449da9:c.instructions+=3;goto B449da9;
case 0x449dad:c.instructions+=2;goto B449dad;
case 0x449dae:c.instructions+=1;goto B449dae;
case 0x449db3:goto L449db3;
case 0x449db7:c.instructions+=41;goto B449db7;
case 0x449dbb:c.instructions+=40;goto B449dbb;
case 0x449dbe:c.instructions+=39;goto B449dbe;
case 0x449dc2:c.instructions+=38;goto B449dc2;
case 0x449dc6:c.instructions+=37;goto B449dc6;
case 0x449dc8:c.instructions+=36;goto B449dc8;
case 0x449dcc:c.instructions+=35;goto B449dcc;
case 0x449dd0:c.instructions+=34;goto B449dd0;
case 0x449dd2:c.instructions+=33;goto B449dd2;
case 0x449dd6:c.instructions+=32;goto B449dd6;
case 0x449dda:c.instructions+=31;goto B449dda;
case 0x449dde:c.instructions+=30;goto B449dde;
case 0x449de2:c.instructions+=29;goto B449de2;
case 0x449de6:c.instructions+=28;goto B449de6;
case 0x449de8:c.instructions+=27;goto B449de8;
case 0x449dec:c.instructions+=26;goto B449dec;
case 0x449df0:c.instructions+=25;goto B449df0;
case 0x449df2:c.instructions+=24;goto B449df2;
case 0x449df6:c.instructions+=23;goto B449df6;
case 0x449dfa:c.instructions+=22;goto B449dfa;
case 0x449dfe:c.instructions+=21;goto B449dfe;
case 0x449e02:c.instructions+=20;goto B449e02;
case 0x449e06:c.instructions+=19;goto B449e06;
case 0x449e08:c.instructions+=18;goto B449e08;
case 0x449e0c:c.instructions+=17;goto B449e0c;
case 0x449e10:c.instructions+=16;goto B449e10;
case 0x449e12:c.instructions+=15;goto B449e12;
case 0x449e16:c.instructions+=14;goto B449e16;
case 0x449e1a:c.instructions+=13;goto B449e1a;
case 0x449e1e:c.instructions+=12;goto B449e1e;
case 0x449e20:c.instructions+=11;goto B449e20;
case 0x449e24:c.instructions+=10;goto B449e24;
case 0x449e28:c.instructions+=9;goto B449e28;
case 0x449e2c:c.instructions+=8;goto B449e2c;
case 0x449e30:c.instructions+=7;goto B449e30;
case 0x449e34:c.instructions+=6;goto B449e34;
case 0x449e38:c.instructions+=5;goto B449e38;
case 0x449e3c:c.instructions+=4;goto B449e3c;
case 0x449e3e:c.instructions+=3;goto B449e3e;
case 0x449e42:c.instructions+=2;goto B449e42;
case 0x449e46:c.instructions+=1;goto B449e46;
case 0x449e4b:goto L449e4b;
case 0x449e51:c.instructions+=7;goto B449e51;
case 0x449e53:c.instructions+=6;goto B449e53;
case 0x449e55:c.instructions+=5;goto B449e55;
case 0x449e58:c.instructions+=4;goto B449e58;
case 0x449e59:c.instructions+=3;goto B449e59;
case 0x449e5b:c.instructions+=2;goto B449e5b;
case 0x449e5d:c.instructions+=1;goto B449e5d;
case 0x449e5f:goto L449e5f;
case 0x449e61:c.instructions+=1;goto B449e61;
case 0x449e63:goto L449e63;
case 0x449e65:goto L449e65;
case 0x449e6b:c.instructions+=3;goto B449e6b;
case 0x449e72:c.instructions+=2;goto B449e72;
case 0x449e76:c.instructions+=1;goto B449e76;
case 0x449e78:goto L449e78;
case 0x449e80:goto L449e80;
case 0x449e84:c.instructions+=3;goto B449e84;
case 0x449e85:c.instructions+=2;goto B449e85;
case 0x449e87:c.instructions+=1;goto B449e87;
case 0x449e8c:goto L449e8c;
case 0x449e92:c.instructions+=23;goto B449e92;
case 0x449e95:c.instructions+=22;goto B449e95;
case 0x449e98:c.instructions+=21;goto B449e98;
case 0x449e9b:c.instructions+=20;goto B449e9b;
case 0x449ea1:c.instructions+=19;goto B449ea1;
case 0x449ea5:c.instructions+=18;goto B449ea5;
case 0x449ea7:c.instructions+=17;goto B449ea7;
case 0x449ea9:c.instructions+=16;goto B449ea9;
case 0x449eac:c.instructions+=15;goto B449eac;
case 0x449eae:c.instructions+=14;goto B449eae;
case 0x449eb1:c.instructions+=13;goto B449eb1;
case 0x449eb5:c.instructions+=12;goto B449eb5;
case 0x449eb9:c.instructions+=11;goto B449eb9;
case 0x449ebb:c.instructions+=10;goto B449ebb;
case 0x449ebf:c.instructions+=9;goto B449ebf;
case 0x449ec3:c.instructions+=8;goto B449ec3;
case 0x449ec4:c.instructions+=7;goto B449ec4;
case 0x449ec6:c.instructions+=6;goto B449ec6;
case 0x449ec8:c.instructions+=5;goto B449ec8;
case 0x449eca:c.instructions+=4;goto B449eca;
case 0x449ece:c.instructions+=3;goto B449ece;
case 0x449ed0:c.instructions+=2;goto B449ed0;
case 0x449ed2:c.instructions+=1;goto B449ed2;
case 0x449ed4:goto L449ed4;
case 0x449ed6:c.instructions+=1;goto B449ed6;
case 0x449ed8:goto L449ed8;
case 0x449eda:goto L449eda;
case 0x449ee0:c.instructions+=3;goto B449ee0;
case 0x449ee7:c.instructions+=2;goto B449ee7;
case 0x449eeb:c.instructions+=1;goto B449eeb;
case 0x449eed:goto L449eed;
case 0x449ef5:goto L449ef5;
case 0x449ef9:c.instructions+=3;goto B449ef9;
case 0x449efa:c.instructions+=2;goto B449efa;
case 0x449efc:c.instructions+=1;goto B449efc;
case 0x449f01:goto L449f01;
case 0x449f07:c.instructions+=11;goto B449f07;
case 0x449f0a:c.instructions+=10;goto B449f0a;
case 0x449f0d:c.instructions+=9;goto B449f0d;
case 0x449f11:c.instructions+=8;goto B449f11;
case 0x449f14:c.instructions+=7;goto B449f14;
case 0x449f16:c.instructions+=6;goto B449f16;
case 0x449f1a:c.instructions+=5;goto B449f1a;
case 0x449f1e:c.instructions+=4;goto B449f1e;
case 0x449f22:c.instructions+=3;goto B449f22;
case 0x449f26:c.instructions+=2;goto B449f26;
case 0x449f2a:c.instructions+=1;goto B449f2a;
case 0x449f2f:goto L449f2f;
case 0x449f35:c.instructions+=7;goto B449f35;
case 0x449f37:c.instructions+=6;goto B449f37;
case 0x449f39:c.instructions+=5;goto B449f39;
case 0x449f3c:c.instructions+=4;goto B449f3c;
case 0x449f3d:c.instructions+=3;goto B449f3d;
case 0x449f3f:c.instructions+=2;goto B449f3f;
case 0x449f41:c.instructions+=1;goto B449f41;
case 0x449f43:goto L449f43;
case 0x449f45:c.instructions+=1;goto B449f45;
case 0x449f47:goto L449f47;
case 0x449f49:goto L449f49;
case 0x449f4f:c.instructions+=3;goto B449f4f;
case 0x449f56:c.instructions+=2;goto B449f56;
case 0x449f5a:c.instructions+=1;goto B449f5a;
case 0x449f5c:goto L449f5c;
case 0x449f64:goto L449f64;
case 0x449f68:c.instructions+=3;goto B449f68;
case 0x449f69:c.instructions+=2;goto B449f69;
case 0x449f6b:c.instructions+=1;goto B449f6b;
case 0x449f70:goto L449f70;
case 0x449f76:c.instructions+=7;goto B449f76;
case 0x449f79:c.instructions+=6;goto B449f79;
case 0x449f7a:c.instructions+=5;goto B449f7a;
case 0x449f7f:c.instructions+=4;goto B449f7f;
case 0x449f80:c.instructions+=3;goto B449f80;
case 0x449f87:c.instructions+=2;goto B449f87;
case 0x449f88:c.instructions+=1;goto B449f88;
case 0x449f8d:goto L449f8d;
case 0x449f94:c.instructions+=4;goto B449f94;
case 0x449f95:c.instructions+=3;goto B449f95;
case 0x449f99:c.instructions+=2;goto B449f99;
case 0x449f9a:c.instructions+=1;goto B449f9a;
case 0x449f9f:goto L449f9f;
case 0x449fa3:c.instructions+=26;goto B449fa3;
case 0x449fa7:c.instructions+=25;goto B449fa7;
case 0x449fad:c.instructions+=24;goto B449fad;
case 0x449fb1:c.instructions+=23;goto B449fb1;
case 0x449fb4:c.instructions+=22;goto B449fb4;
case 0x449fb8:c.instructions+=21;goto B449fb8;
case 0x449fbb:c.instructions+=20;goto B449fbb;
case 0x449fbd:c.instructions+=19;goto B449fbd;
case 0x449fc1:c.instructions+=18;goto B449fc1;
case 0x449fc5:c.instructions+=17;goto B449fc5;
case 0x449fc7:c.instructions+=16;goto B449fc7;
case 0x449fcb:c.instructions+=15;goto B449fcb;
case 0x449fcf:c.instructions+=14;goto B449fcf;
case 0x449fd3:c.instructions+=13;goto B449fd3;
case 0x449fd7:c.instructions+=12;goto B449fd7;
case 0x449fdb:c.instructions+=11;goto B449fdb;
case 0x449fdd:c.instructions+=10;goto B449fdd;
case 0x449fe1:c.instructions+=9;goto B449fe1;
case 0x449fe5:c.instructions+=8;goto B449fe5;
case 0x449fe7:c.instructions+=7;goto B449fe7;
case 0x449feb:c.instructions+=6;goto B449feb;
case 0x449fef:c.instructions+=5;goto B449fef;
case 0x449ff3:c.instructions+=4;goto B449ff3;
case 0x449ff7:c.instructions+=3;goto B449ff7;
case 0x449ffb:c.instructions+=2;goto B449ffb;
case 0x449ffd:c.instructions+=1;goto B449ffd;
default:missing_instruction(c.pc);}
B449000:L449000:{c.instructions+=7;NFSU2_TR(0x449000);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B449003:{NFSU2_TR(0x449003);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449004:{NFSU2_TR(0x449004);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x90ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44900a:{NFSU2_TR(0x44900a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44900e:{NFSU2_TR(0x44900e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44900f:{NFSU2_TR(0x44900f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449010:{NFSU2_TR(0x449010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449015ull));
TAIL_STATIC(0x401340u,401);
}
B449015:L449015:{c.instructions+=29;NFSU2_TR(0x449015);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449019:{NFSU2_TR(0x449019);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44901d:{NFSU2_TR(0x44901d);
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
B449020:{NFSU2_TR(0x449020);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449024:{NFSU2_TR(0x449024);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449028:{NFSU2_TR(0x449028);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44902a:{NFSU2_TR(0x44902a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44902e:{NFSU2_TR(0x44902e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449032:{NFSU2_TR(0x449032);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449034:{NFSU2_TR(0x449034);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449038:{NFSU2_TR(0x449038);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44903c:{NFSU2_TR(0x44903c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449040:{NFSU2_TR(0x449040);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449044:{NFSU2_TR(0x449044);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449048:{NFSU2_TR(0x449048);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44904a:{NFSU2_TR(0x44904a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44904e:{NFSU2_TR(0x44904e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449052:{NFSU2_TR(0x449052);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449054:{NFSU2_TR(0x449054);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449058:{NFSU2_TR(0x449058);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44905c:{NFSU2_TR(0x44905c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449060:{NFSU2_TR(0x449060);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449064:{NFSU2_TR(0x449064);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449068:{NFSU2_TR(0x449068);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44906a:{NFSU2_TR(0x44906a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44906e:{NFSU2_TR(0x44906e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449072:{NFSU2_TR(0x449072);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449074:{NFSU2_TR(0x449074);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449078:{NFSU2_TR(0x449078);
{goto L44919a;}
}
B44907d:L44907d:{c.instructions+=6;NFSU2_TR(0x44907d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B449080:{NFSU2_TR(0x449080);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B449084:{NFSU2_TR(0x449084);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449085:{NFSU2_TR(0x449085);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449086:{NFSU2_TR(0x449086);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19cull))));
__builtin_memmove((R+4),(U+0),4);
}
B44908c:{NFSU2_TR(0x44908c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449091ull));
TAIL_STATIC(0x447a30u,447);
}
B449091:L449091:{c.instructions+=10;NFSU2_TR(0x449091);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B449094:{NFSU2_TR(0x449094);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44909a:{NFSU2_TR(0x44909a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44909d:{NFSU2_TR(0x44909d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B44909f:{NFSU2_TR(0x44909f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4490a1:{NFSU2_TR(0x4490a1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B4490a4:{NFSU2_TR(0x4490a4);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4490a5:{NFSU2_TR(0x4490a5);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B4490a7:{NFSU2_TR(0x4490a7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4490a9:{NFSU2_TR(0x4490a9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4490af;}}
}
B4490ab:L4490ab:{c.instructions+=2;NFSU2_TR(0x4490ab);
__builtin_memmove((R+0),(R+4),4);
}
B4490ad:{NFSU2_TR(0x4490ad);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4490af:L4490af:{c.instructions+=1;NFSU2_TR(0x4490af);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4490c4;}}
}
B4490b1:L4490b1:{c.instructions+=4;NFSU2_TR(0x4490b1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4490b7:{NFSU2_TR(0x4490b7);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4490be:{NFSU2_TR(0x4490be);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4490c2:{NFSU2_TR(0x4490c2);
{goto L4490cc;}
}
B4490c4:L4490c4:{c.instructions+=1;NFSU2_TR(0x4490c4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4490cc:L4490cc:{c.instructions+=4;NFSU2_TR(0x4490cc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4490d0:{NFSU2_TR(0x4490d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4490d1:{NFSU2_TR(0x4490d1);
__builtin_memmove((R+4),(R+24),4);
}
B4490d3:{NFSU2_TR(0x4490d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4490d8ull));
TAIL_STATIC(0x443270u,443);
}
B4490d8:L4490d8:{c.instructions+=9;NFSU2_TR(0x4490d8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4490dc:{NFSU2_TR(0x4490dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4490e2:{NFSU2_TR(0x4490e2);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4490e5:{NFSU2_TR(0x4490e5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x60ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4490e8:{NFSU2_TR(0x4490e8);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4490eb:{NFSU2_TR(0x4490eb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4490ef:{NFSU2_TR(0x4490ef);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4490f2:{NFSU2_TR(0x4490f2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4490f6:{NFSU2_TR(0x4490f6);
{goto L44919a;}
}
B4490fb:L4490fb:{c.instructions+=4;NFSU2_TR(0x4490fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B449101:{NFSU2_TR(0x449101);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449102:{NFSU2_TR(0x449102);
w4(R+4,u32(0x827b88ull));
}
B449107:{NFSU2_TR(0x449107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44910cull));
TAIL_STATIC(0x432490u,432);
}
B44910c:L44910c:{c.instructions+=7;NFSU2_TR(0x44910c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B449110:{NFSU2_TR(0x449110);
__builtin_memmove((R+24),(R+0),4);
}
B449112:{NFSU2_TR(0x449112);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449115:{NFSU2_TR(0x449115);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449116:{NFSU2_TR(0x449116);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449117:{NFSU2_TR(0x449117);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19cull))));
__builtin_memmove((R+4),(U+0),4);
}
B44911d:{NFSU2_TR(0x44911d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449122ull));
TAIL_STATIC(0x447a30u,447);
}
B449122:L449122:{c.instructions+=27;NFSU2_TR(0x449122);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449126:{NFSU2_TR(0x449126);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44912c:{NFSU2_TR(0x44912c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449130:{NFSU2_TR(0x449130);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449136:{NFSU2_TR(0x449136);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449138:{NFSU2_TR(0x449138);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44913c:{NFSU2_TR(0x44913c);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449142:{NFSU2_TR(0x449142);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449144:{NFSU2_TR(0x449144);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44914a:{NFSU2_TR(0x44914a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44914e:{NFSU2_TR(0x44914e);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449154:{NFSU2_TR(0x449154);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449158:{NFSU2_TR(0x449158);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44915e:{NFSU2_TR(0x44915e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449160:{NFSU2_TR(0x449160);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449164:{NFSU2_TR(0x449164);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44916a:{NFSU2_TR(0x44916a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44916c:{NFSU2_TR(0x44916c);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449172:{NFSU2_TR(0x449172);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449176:{NFSU2_TR(0x449176);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44917c:{NFSU2_TR(0x44917c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449180:{NFSU2_TR(0x449180);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449186:{NFSU2_TR(0x449186);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449188:{NFSU2_TR(0x449188);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44918c:{NFSU2_TR(0x44918c);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449192:{NFSU2_TR(0x449192);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449194:{NFSU2_TR(0x449194);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44919a:L44919a:{c.instructions+=11;NFSU2_TR(0x44919a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44919d:{NFSU2_TR(0x44919d);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B44919f:{NFSU2_TR(0x44919f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4491a1:{NFSU2_TR(0x4491a1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4491a4:{NFSU2_TR(0x4491a4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4491a7:{NFSU2_TR(0x4491a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4491a8:{NFSU2_TR(0x4491a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4491a9:{NFSU2_TR(0x4491a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4491aa:{NFSU2_TR(0x4491aa);
__builtin_memmove((R+16),(R+20),4);
}
B4491ac:{NFSU2_TR(0x4491ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4491ad:{NFSU2_TR(0x4491ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4491c0:L4491c0:{c.instructions+=15;NFSU2_TR(0x4491c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4491c1:{NFSU2_TR(0x4491c1);
__builtin_memmove((R+20),(R+16),4);
}
B4491c3:{NFSU2_TR(0x4491c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4491c6:{NFSU2_TR(0x4491c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B4491c9:{NFSU2_TR(0x4491c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4491ca:{NFSU2_TR(0x4491ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4491cd:{NFSU2_TR(0x4491cd);
__builtin_memmove((R+0),(R+12),4);
}
B4491cf:{NFSU2_TR(0x4491cf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4491d5:{NFSU2_TR(0x4491d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4491d6:{NFSU2_TR(0x4491d6);
__builtin_memmove((R+24),(R+4),4);
}
B4491d8:{NFSU2_TR(0x4491d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4491d9:{NFSU2_TR(0x4491d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B4491dc:{NFSU2_TR(0x4491dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4491e3:{NFSU2_TR(0x4491e3);
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
B4491e6:{NFSU2_TR(0x4491e6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L449416;}}
}
B4491ec:L4491ec:{c.instructions+=1;NFSU2_TR(0x4491ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x449420ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4491f3:L4491f3:{c.instructions+=6;NFSU2_TR(0x4491f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4491f6:{NFSU2_TR(0x4491f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4491fa:{NFSU2_TR(0x4491fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4491fb:{NFSU2_TR(0x4491fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4491fc:{NFSU2_TR(0x4491fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19cull))));
__builtin_memmove((R+4),(U+0),4);
}
B449202:{NFSU2_TR(0x449202);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449207ull));
TAIL_STATIC(0x447a80u,447);
}
B449207:L449207:{c.instructions+=10;NFSU2_TR(0x449207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44920a:{NFSU2_TR(0x44920a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B449210:{NFSU2_TR(0x449210);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B449212:{NFSU2_TR(0x449212);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B449214:{NFSU2_TR(0x449214);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B449216:{NFSU2_TR(0x449216);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B449219:{NFSU2_TR(0x449219);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B44921a:{NFSU2_TR(0x44921a);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B44921c:{NFSU2_TR(0x44921c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44921e:{NFSU2_TR(0x44921e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L449224;}}
}
B449220:L449220:{c.instructions+=2;NFSU2_TR(0x449220);
__builtin_memmove((R+0),(R+4),4);
}
B449222:{NFSU2_TR(0x449222);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B449224:L449224:{c.instructions+=1;NFSU2_TR(0x449224);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L449239;}}
}
B449226:L449226:{c.instructions+=4;NFSU2_TR(0x449226);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B44922c:{NFSU2_TR(0x44922c);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449233:{NFSU2_TR(0x449233);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449237:{NFSU2_TR(0x449237);
{goto L449241;}
}
B449239:L449239:{c.instructions+=1;NFSU2_TR(0x449239);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B449241:L449241:{c.instructions+=4;NFSU2_TR(0x449241);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449245:{NFSU2_TR(0x449245);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449246:{NFSU2_TR(0x449246);
__builtin_memmove((R+4),(R+24),4);
}
B449248:{NFSU2_TR(0x449248);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44924dull));
TAIL_STATIC(0x443270u,443);
}
B44924d:L44924d:{c.instructions+=8;NFSU2_TR(0x44924d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B449253:{NFSU2_TR(0x449253);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B449256:{NFSU2_TR(0x449256);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449257:{NFSU2_TR(0x449257);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x90ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44925d:{NFSU2_TR(0x44925d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B449261:{NFSU2_TR(0x449261);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449262:{NFSU2_TR(0x449262);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449263:{NFSU2_TR(0x449263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449268ull));
TAIL_STATIC(0x401340u,401);
}
B449268:L449268:{c.instructions+=29;NFSU2_TR(0x449268);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44926c:{NFSU2_TR(0x44926c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449270:{NFSU2_TR(0x449270);
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
B449273:{NFSU2_TR(0x449273);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449277:{NFSU2_TR(0x449277);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44927b:{NFSU2_TR(0x44927b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44927d:{NFSU2_TR(0x44927d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449281:{NFSU2_TR(0x449281);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449285:{NFSU2_TR(0x449285);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449287:{NFSU2_TR(0x449287);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44928b:{NFSU2_TR(0x44928b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44928f:{NFSU2_TR(0x44928f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449293:{NFSU2_TR(0x449293);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449297:{NFSU2_TR(0x449297);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44929b:{NFSU2_TR(0x44929b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44929d:{NFSU2_TR(0x44929d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4492a1:{NFSU2_TR(0x4492a1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4492a5:{NFSU2_TR(0x4492a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4492a7:{NFSU2_TR(0x4492a7);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4492ab:{NFSU2_TR(0x4492ab);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4492af:{NFSU2_TR(0x4492af);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4492b3:{NFSU2_TR(0x4492b3);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4492b7:{NFSU2_TR(0x4492b7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4492bb:{NFSU2_TR(0x4492bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4492bd:{NFSU2_TR(0x4492bd);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4492c1:{NFSU2_TR(0x4492c1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4492c5:{NFSU2_TR(0x4492c5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4492c7:{NFSU2_TR(0x4492c7);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4492cb:{NFSU2_TR(0x4492cb);
{goto L449409;}
}
B4492d0:L4492d0:{c.instructions+=6;NFSU2_TR(0x4492d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4492d3:{NFSU2_TR(0x4492d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4492d6:{NFSU2_TR(0x4492d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4492d7:{NFSU2_TR(0x4492d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4492d8:{NFSU2_TR(0x4492d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4492de:{NFSU2_TR(0x4492de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4492e3ull));
TAIL_STATIC(0x447a80u,447);
}
B4492e3:L4492e3:{c.instructions+=6;NFSU2_TR(0x4492e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4492e4:{NFSU2_TR(0x4492e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4492e5:{NFSU2_TR(0x4492e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4492e6:{NFSU2_TR(0x4492e6);
__builtin_memmove((R+16),(R+20),4);
}
B4492e8:{NFSU2_TR(0x4492e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4492e9:{NFSU2_TR(0x4492e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4492ec:L4492ec:{c.instructions+=6;NFSU2_TR(0x4492ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4492ef:{NFSU2_TR(0x4492ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4492f3:{NFSU2_TR(0x4492f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4492f4:{NFSU2_TR(0x4492f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4492f5:{NFSU2_TR(0x4492f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4492fb:{NFSU2_TR(0x4492fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449300ull));
TAIL_STATIC(0x447a80u,447);
}
B449300:L449300:{c.instructions+=10;NFSU2_TR(0x449300);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B449303:{NFSU2_TR(0x449303);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B449306:{NFSU2_TR(0x449306);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44930c:{NFSU2_TR(0x44930c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B44930e:{NFSU2_TR(0x44930e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B449310:{NFSU2_TR(0x449310);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B449313:{NFSU2_TR(0x449313);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B449314:{NFSU2_TR(0x449314);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B449316:{NFSU2_TR(0x449316);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B449318:{NFSU2_TR(0x449318);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44931e;}}
}
B44931a:L44931a:{c.instructions+=2;NFSU2_TR(0x44931a);
__builtin_memmove((R+0),(R+4),4);
}
B44931c:{NFSU2_TR(0x44931c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44931e:L44931e:{c.instructions+=1;NFSU2_TR(0x44931e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L449333;}}
}
B449320:L449320:{c.instructions+=4;NFSU2_TR(0x449320);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B449326:{NFSU2_TR(0x449326);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44932d:{NFSU2_TR(0x44932d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449331:{NFSU2_TR(0x449331);
{goto L44933b;}
}
B449333:L449333:{c.instructions+=1;NFSU2_TR(0x449333);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44933b:L44933b:{c.instructions+=4;NFSU2_TR(0x44933b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44933f:{NFSU2_TR(0x44933f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449340:{NFSU2_TR(0x449340);
__builtin_memmove((R+4),(R+24),4);
}
B449342:{NFSU2_TR(0x449342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449347ull));
TAIL_STATIC(0x443270u,443);
}
B449347:L449347:{c.instructions+=9;NFSU2_TR(0x449347);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44934b:{NFSU2_TR(0x44934b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B449351:{NFSU2_TR(0x449351);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449354:{NFSU2_TR(0x449354);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x60ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B449357:{NFSU2_TR(0x449357);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44935a:{NFSU2_TR(0x44935a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44935e:{NFSU2_TR(0x44935e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449361:{NFSU2_TR(0x449361);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449365:{NFSU2_TR(0x449365);
{goto L449409;}
}
B44936a:L44936a:{c.instructions+=4;NFSU2_TR(0x44936a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B449370:{NFSU2_TR(0x449370);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449371:{NFSU2_TR(0x449371);
w4(R+4,u32(0x827b88ull));
}
B449376:{NFSU2_TR(0x449376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44937bull));
TAIL_STATIC(0x432490u,432);
}
B44937b:L44937b:{c.instructions+=7;NFSU2_TR(0x44937b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44937f:{NFSU2_TR(0x44937f);
__builtin_memmove((R+24),(R+0),4);
}
B449381:{NFSU2_TR(0x449381);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449384:{NFSU2_TR(0x449384);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449385:{NFSU2_TR(0x449385);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449386:{NFSU2_TR(0x449386);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19cull))));
__builtin_memmove((R+4),(U+0),4);
}
B44938c:{NFSU2_TR(0x44938c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449391ull));
TAIL_STATIC(0x447a80u,447);
}
B449391:L449391:{c.instructions+=27;NFSU2_TR(0x449391);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449395:{NFSU2_TR(0x449395);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44939b:{NFSU2_TR(0x44939b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44939f:{NFSU2_TR(0x44939f);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4493a5:{NFSU2_TR(0x4493a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4493a7:{NFSU2_TR(0x4493a7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4493ab:{NFSU2_TR(0x4493ab);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4493b1:{NFSU2_TR(0x4493b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4493b3:{NFSU2_TR(0x4493b3);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4493b9:{NFSU2_TR(0x4493b9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4493bd:{NFSU2_TR(0x4493bd);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4493c3:{NFSU2_TR(0x4493c3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4493c7:{NFSU2_TR(0x4493c7);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4493cd:{NFSU2_TR(0x4493cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4493cf:{NFSU2_TR(0x4493cf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4493d3:{NFSU2_TR(0x4493d3);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4493d9:{NFSU2_TR(0x4493d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4493db:{NFSU2_TR(0x4493db);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4493e1:{NFSU2_TR(0x4493e1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4493e5:{NFSU2_TR(0x4493e5);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4493eb:{NFSU2_TR(0x4493eb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4493ef:{NFSU2_TR(0x4493ef);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4493f5:{NFSU2_TR(0x4493f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4493f7:{NFSU2_TR(0x4493f7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4493fb:{NFSU2_TR(0x4493fb);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449401:{NFSU2_TR(0x449401);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449403:{NFSU2_TR(0x449403);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449409:L449409:{c.instructions+=5;NFSU2_TR(0x449409);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44940c:{NFSU2_TR(0x44940c);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B44940e:{NFSU2_TR(0x44940e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449410:{NFSU2_TR(0x449410);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449413:{NFSU2_TR(0x449413);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449416:L449416:{c.instructions+=6;NFSU2_TR(0x449416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B449417:{NFSU2_TR(0x449417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B449418:{NFSU2_TR(0x449418);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B449419:{NFSU2_TR(0x449419);
__builtin_memmove((R+16),(R+20),4);
}
B44941b:{NFSU2_TR(0x44941b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44941c:{NFSU2_TR(0x44941c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B449430:L449430:{c.instructions+=10;NFSU2_TR(0x449430);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449431:{NFSU2_TR(0x449431);
__builtin_memmove((R+20),(R+16),4);
}
B449433:{NFSU2_TR(0x449433);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B449436:{NFSU2_TR(0x449436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B449439:{NFSU2_TR(0x449439);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44943a:{NFSU2_TR(0x44943a);
__builtin_memmove((R+24),(R+4),4);
}
B44943c:{NFSU2_TR(0x44943c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449442:{NFSU2_TR(0x449442);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B449445:{NFSU2_TR(0x449445);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449446:{NFSU2_TR(0x449446);
if(r1(R+518)){{goto L449456;}}
}
B449448:L449448:{c.instructions+=2;NFSU2_TR(0x449448);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B44944b:{NFSU2_TR(0x44944b);
if(r1(R+518)){{goto L449456;}}
}
B44944d:L44944d:{c.instructions+=2;NFSU2_TR(0x44944d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B449450:{NFSU2_TR(0x449450);
if(r1(R+518)){{goto L449456;}}
}
B449452:L449452:{c.instructions+=2;NFSU2_TR(0x449452);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B449454:{NFSU2_TR(0x449454);
{goto L44945b;}
}
B449456:L449456:{c.instructions+=1;NFSU2_TR(0x449456);
w4(R+28,u32(0x1ull));
}
B44945b:L44945b:{c.instructions+=7;NFSU2_TR(0x44945b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449461:{NFSU2_TR(0x449461);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449462:{NFSU2_TR(0x449462);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449463:{NFSU2_TR(0x449463);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B449467:{NFSU2_TR(0x449467);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449468:{NFSU2_TR(0x449468);
__builtin_memmove((R+4),(R+24),4);
}
B44946a:{NFSU2_TR(0x44946a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44946full));
TAIL_STATIC(0x448f50u,448);
}
B44946f:L44946f:{c.instructions+=7;NFSU2_TR(0x44946f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B449475:{NFSU2_TR(0x449475);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449476:{NFSU2_TR(0x449476);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449477:{NFSU2_TR(0x449477);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44947b:{NFSU2_TR(0x44947b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44947c:{NFSU2_TR(0x44947c);
__builtin_memmove((R+4),(R+24),4);
}
B44947e:{NFSU2_TR(0x44947e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449483ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4491c0u);}goto L4491c0;}
}
B449483:L449483:{c.instructions+=14;NFSU2_TR(0x449483);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449487:{NFSU2_TR(0x449487);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44948b:{NFSU2_TR(0x44948b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44948f:{NFSU2_TR(0x44948f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449493:{NFSU2_TR(0x449493);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B449497:{NFSU2_TR(0x449497);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44949b:{NFSU2_TR(0x44949b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44949f:{NFSU2_TR(0x44949f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4494a3:{NFSU2_TR(0x4494a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4494a7:{NFSU2_TR(0x4494a7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4494ab:{NFSU2_TR(0x4494ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4494ac:{NFSU2_TR(0x4494ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4494ad:{NFSU2_TR(0x4494ad);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4494b1:{NFSU2_TR(0x4494b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4494b6ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B4494b6:L4494b6:{c.instructions+=16;NFSU2_TR(0x4494b6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4494ba:{NFSU2_TR(0x4494ba);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4494be:{NFSU2_TR(0x4494be);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c84ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4494c5:{NFSU2_TR(0x4494c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4494c9:{NFSU2_TR(0x4494c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4494cc:{NFSU2_TR(0x4494cc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4494d0:{NFSU2_TR(0x4494d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4494d1:{NFSU2_TR(0x4494d1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4494d5:{NFSU2_TR(0x4494d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4494d6:{NFSU2_TR(0x4494d6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4494da:{NFSU2_TR(0x4494da);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4494de:{NFSU2_TR(0x4494de);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4494e2:{NFSU2_TR(0x4494e2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4494e6:{NFSU2_TR(0x4494e6);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B4494e8:{NFSU2_TR(0x4494e8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4494eb:{NFSU2_TR(0x4494eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4494f0ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B4494f0:L4494f0:{c.instructions+=13;NFSU2_TR(0x4494f0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4494f4:{NFSU2_TR(0x4494f4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4494f8:{NFSU2_TR(0x4494f8);
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
B4494fb:{NFSU2_TR(0x4494fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4494fc:{NFSU2_TR(0x4494fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c86ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B449503:{NFSU2_TR(0x449503);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449507:{NFSU2_TR(0x449507);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44950b:{NFSU2_TR(0x44950b);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B44950d:{NFSU2_TR(0x44950d);
{u32 ea_=u32(r4(R+24)+u32(7304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449513:{NFSU2_TR(0x449513);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B449514:{NFSU2_TR(0x449514);
__builtin_memmove((R+16),(R+20),4);
}
B449516:{NFSU2_TR(0x449516);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B449517:{NFSU2_TR(0x449517);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B449520:L449520:{c.instructions+=16;NFSU2_TR(0x449520);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449521:{NFSU2_TR(0x449521);
__builtin_memmove((R+20),(R+16),4);
}
B449523:{NFSU2_TR(0x449523);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B449526:{NFSU2_TR(0x449526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc4ull))));
}
B44952c:{NFSU2_TR(0x44952c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44952d:{NFSU2_TR(0x44952d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44952e:{NFSU2_TR(0x44952e);
__builtin_memmove((R+24),(R+4),4);
}
B449530:{NFSU2_TR(0x449530);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B449532:{NFSU2_TR(0x449532);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B449539:{NFSU2_TR(0x449539);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44953a:{NFSU2_TR(0x44953a);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44953e:{NFSU2_TR(0x44953e);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B449542:{NFSU2_TR(0x449542);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449543:{NFSU2_TR(0x449543);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449544:{NFSU2_TR(0x449544);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449545:{NFSU2_TR(0x449545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44954aull));
TAIL_STATIC(0x43c390u,43c);
}
B44954a:L44954a:{c.instructions+=8;NFSU2_TR(0x44954a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44954c:{NFSU2_TR(0x44954c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c86ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B449553:{NFSU2_TR(0x449553);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B449557:{NFSU2_TR(0x449557);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44955b:{NFSU2_TR(0x44955b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44955c:{NFSU2_TR(0x44955c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44955d:{NFSU2_TR(0x44955d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44955e:{NFSU2_TR(0x44955e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449563ull));
TAIL_STATIC(0x43c390u,43c);
}
B449563:L449563:{c.instructions+=4;NFSU2_TR(0x449563);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449569:{NFSU2_TR(0x449569);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B44956c:{NFSU2_TR(0x44956c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B44956f:{NFSU2_TR(0x44956f);
if(r1(R+518)){{goto L44957f;}}
}
B449571:L449571:{c.instructions+=2;NFSU2_TR(0x449571);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B449574:{NFSU2_TR(0x449574);
if(r1(R+518)){{goto L44957f;}}
}
B449576:L449576:{c.instructions+=2;NFSU2_TR(0x449576);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B449579:{NFSU2_TR(0x449579);
if(r1(R+518)){{goto L44957f;}}
}
B44957b:L44957b:{c.instructions+=2;NFSU2_TR(0x44957b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B44957d:{NFSU2_TR(0x44957d);
{goto L449584;}
}
B44957f:L44957f:{c.instructions+=1;NFSU2_TR(0x44957f);
w4(R+12,u32(0x1ull));
}
B449584:L449584:{c.instructions+=14;NFSU2_TR(0x449584);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449588:{NFSU2_TR(0x449588);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44958b:{NFSU2_TR(0x44958b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44958d:{NFSU2_TR(0x44958d);
{u32 ea_=u32(r4(R+24)+u32(7304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449593:{NFSU2_TR(0x449593);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449597:{NFSU2_TR(0x449597);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449598:{NFSU2_TR(0x449598);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44959a:{NFSU2_TR(0x44959a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44959e:{NFSU2_TR(0x44959e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4495a2:{NFSU2_TR(0x4495a2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4495a6:{NFSU2_TR(0x4495a6);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4495aa:{NFSU2_TR(0x4495aa);
{u32 ea_=u32(r4(R+24)+u32(7304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4495b0:{NFSU2_TR(0x4495b0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4495b4:{NFSU2_TR(0x4495b4);
if(r1(R+518)){{goto L449611;}}
}
B4495b6:L4495b6:{c.instructions+=6;NFSU2_TR(0x4495b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4495bc:{NFSU2_TR(0x4495bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4495bd:{NFSU2_TR(0x4495bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4495c1:{NFSU2_TR(0x4495c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4495c2:{NFSU2_TR(0x4495c2);
__builtin_memmove((R+4),(R+24),4);
}
B4495c4:{NFSU2_TR(0x4495c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4495c9ull));
TAIL_STATIC(0x448f50u,448);
}
B4495c9:L4495c9:{c.instructions+=17;NFSU2_TR(0x4495c9);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4495cd:{NFSU2_TR(0x4495cd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4495d1:{NFSU2_TR(0x4495d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4495d7:{NFSU2_TR(0x4495d7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4495db:{NFSU2_TR(0x4495db);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4495e1:{NFSU2_TR(0x4495e1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4495e5:{NFSU2_TR(0x4495e5);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4495e9:{NFSU2_TR(0x4495e9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4495ed:{NFSU2_TR(0x4495ed);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B4495f5:{NFSU2_TR(0x4495f5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4495f9:{NFSU2_TR(0x4495f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4495fd:{NFSU2_TR(0x4495fd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4495ff:{NFSU2_TR(0x4495ff);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449603:{NFSU2_TR(0x449603);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B449607:{NFSU2_TR(0x449607);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B44960b:{NFSU2_TR(0x44960b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44960f:{NFSU2_TR(0x44960f);
{goto L44966a;}
}
B449611:L449611:{c.instructions+=6;NFSU2_TR(0x449611);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B449617:{NFSU2_TR(0x449617);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449618:{NFSU2_TR(0x449618);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44961c:{NFSU2_TR(0x44961c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44961d:{NFSU2_TR(0x44961d);
__builtin_memmove((R+4),(R+24),4);
}
B44961f:{NFSU2_TR(0x44961f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449624ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4491c0u);}goto L4491c0;}
}
B449624:L449624:{c.instructions+=16;NFSU2_TR(0x449624);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449628:{NFSU2_TR(0x449628);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44962c:{NFSU2_TR(0x44962c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B449632:{NFSU2_TR(0x449632);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449636:{NFSU2_TR(0x449636);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B44963c:{NFSU2_TR(0x44963c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449640:{NFSU2_TR(0x449640);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449644:{NFSU2_TR(0x449644);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449648:{NFSU2_TR(0x449648);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B449650:{NFSU2_TR(0x449650);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449654:{NFSU2_TR(0x449654);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B449658:{NFSU2_TR(0x449658);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44965a:{NFSU2_TR(0x44965a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44965e:{NFSU2_TR(0x44965e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B449662:{NFSU2_TR(0x449662);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B449666:{NFSU2_TR(0x449666);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44966a:L44966a:{c.instructions+=2;NFSU2_TR(0x44966a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B44966d:{NFSU2_TR(0x44966d);
if(r1(R+518)){{goto L449745;}}
}
B449673:L449673:{c.instructions+=2;NFSU2_TR(0x449673);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B449676:{NFSU2_TR(0x449676);
if(r1(R+518)){{goto L449717;}}
}
B44967c:L44967c:{c.instructions+=2;NFSU2_TR(0x44967c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B44967d:{NFSU2_TR(0x44967d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4497e6;}}
}
B449683:L449683:{c.instructions+=4;NFSU2_TR(0x449683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449689:{NFSU2_TR(0x449689);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44968a:{NFSU2_TR(0x44968a);
w4(R+4,u32(0x827b88ull));
}
B44968f:{NFSU2_TR(0x44968f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449694ull));
TAIL_STATIC(0x432490u,432);
}
B449694:L449694:{c.instructions+=5;NFSU2_TR(0x449694);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
}
B449699:{NFSU2_TR(0x449699);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44969a:{NFSU2_TR(0x44969a);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44969e:{NFSU2_TR(0x44969e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44969f:{NFSU2_TR(0x44969f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4496a4ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B4496a4:L4496a4:{c.instructions+=4;NFSU2_TR(0x4496a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4496a7:{NFSU2_TR(0x4496a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4496a8:{NFSU2_TR(0x4496a8);
__builtin_memmove((R+4),(R+24),4);
}
B4496aa:{NFSU2_TR(0x4496aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4496afull));
TAIL_STATIC(0x442700u,442);
}
B4496af:L4496af:{c.instructions+=31;NFSU2_TR(0x4496af);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4496b2:{NFSU2_TR(0x4496b2);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4496b6:{NFSU2_TR(0x4496b6);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4496b8:{NFSU2_TR(0x4496b8);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4496bc:{NFSU2_TR(0x4496bc);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4496bf:{NFSU2_TR(0x4496bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4496c1:{NFSU2_TR(0x4496c1);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4496c3:{NFSU2_TR(0x4496c3);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4496c7:{NFSU2_TR(0x4496c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4496c9:{NFSU2_TR(0x4496c9);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4496d0:{NFSU2_TR(0x4496d0);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4496d4:{NFSU2_TR(0x4496d4);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4496d6:{NFSU2_TR(0x4496d6);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4496da:{NFSU2_TR(0x4496da);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4496dd:{NFSU2_TR(0x4496dd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4496df:{NFSU2_TR(0x4496df);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4496e1:{NFSU2_TR(0x4496e1);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4496e5:{NFSU2_TR(0x4496e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4496e7:{NFSU2_TR(0x4496e7);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4496ee:{NFSU2_TR(0x4496ee);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4496f2:{NFSU2_TR(0x4496f2);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4496f4:{NFSU2_TR(0x4496f4);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4496f8:{NFSU2_TR(0x4496f8);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4496fb:{NFSU2_TR(0x4496fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4496fd:{NFSU2_TR(0x4496fd);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B4496ff:{NFSU2_TR(0x4496ff);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449703:{NFSU2_TR(0x449703);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B449705:{NFSU2_TR(0x449705);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B449707:{NFSU2_TR(0x449707);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44970e:{NFSU2_TR(0x44970e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449712:{NFSU2_TR(0x449712);
{goto L4497da;}
}
B449717:L449717:{c.instructions+=16;NFSU2_TR(0x449717);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44971d:{NFSU2_TR(0x44971d);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449720:{NFSU2_TR(0x449720);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B449723:{NFSU2_TR(0x449723);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449726:{NFSU2_TR(0x449726);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449728:{NFSU2_TR(0x449728);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44972a:{NFSU2_TR(0x44972a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44972c:{NFSU2_TR(0x44972c);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44972f:{NFSU2_TR(0x44972f);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B449731:{NFSU2_TR(0x449731);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449734:{NFSU2_TR(0x449734);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449737:{NFSU2_TR(0x449737);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B449739:{NFSU2_TR(0x449739);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44973c:{NFSU2_TR(0x44973c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44973e:{NFSU2_TR(0x44973e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B449740:{NFSU2_TR(0x449740);
{goto L4497e6;}
}
B449745:L449745:{c.instructions+=8;NFSU2_TR(0x449745);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44974b:{NFSU2_TR(0x44974b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44974e:{NFSU2_TR(0x44974e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44974f:{NFSU2_TR(0x44974f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x90ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B449754:{NFSU2_TR(0x449754);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449755:{NFSU2_TR(0x449755);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44975c:{NFSU2_TR(0x44975c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44975d:{NFSU2_TR(0x44975d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449762ull));
TAIL_STATIC(0x401340u,401);
}
B449762:L449762:{c.instructions+=5;NFSU2_TR(0x449762);
u8 U[4];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B449769:{NFSU2_TR(0x449769);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44976a:{NFSU2_TR(0x44976a);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44976e:{NFSU2_TR(0x44976e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44976f:{NFSU2_TR(0x44976f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449774ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B449774:L449774:{c.instructions+=30;NFSU2_TR(0x449774);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449778:{NFSU2_TR(0x449778);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44977b:{NFSU2_TR(0x44977b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B44977e:{NFSU2_TR(0x44977e);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449782:{NFSU2_TR(0x449782);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449785:{NFSU2_TR(0x449785);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449787:{NFSU2_TR(0x449787);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44978b:{NFSU2_TR(0x44978b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44978d:{NFSU2_TR(0x44978d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44978f:{NFSU2_TR(0x44978f);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449796:{NFSU2_TR(0x449796);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44979a:{NFSU2_TR(0x44979a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44979c:{NFSU2_TR(0x44979c);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4497a0:{NFSU2_TR(0x4497a0);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4497a3:{NFSU2_TR(0x4497a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4497a5:{NFSU2_TR(0x4497a5);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4497a9:{NFSU2_TR(0x4497a9);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4497ac:{NFSU2_TR(0x4497ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4497ae:{NFSU2_TR(0x4497ae);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4497b5:{NFSU2_TR(0x4497b5);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4497b9:{NFSU2_TR(0x4497b9);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4497bb:{NFSU2_TR(0x4497bb);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4497bf:{NFSU2_TR(0x4497bf);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4497c2:{NFSU2_TR(0x4497c2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4497c4:{NFSU2_TR(0x4497c4);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4497c8:{NFSU2_TR(0x4497c8);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4497cb:{NFSU2_TR(0x4497cb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4497cd:{NFSU2_TR(0x4497cd);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4497d4:{NFSU2_TR(0x4497d4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4497d8:{NFSU2_TR(0x4497d8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4497da:L4497da:{c.instructions+=4;NFSU2_TR(0x4497da);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4497de:{NFSU2_TR(0x4497de);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4497e0:{NFSU2_TR(0x4497e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4497e3:{NFSU2_TR(0x4497e3);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4497e6:L4497e6:{c.instructions+=4;NFSU2_TR(0x4497e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4497e9:{NFSU2_TR(0x4497e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4497eb:{NFSU2_TR(0x4497eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4497ee:{NFSU2_TR(0x4497ee);
if(r1(R+518)){{goto L449847;}}
}
B4497f0:L4497f0:{c.instructions+=23;NFSU2_TR(0x4497f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4497f6:{NFSU2_TR(0x4497f6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4497fa:{NFSU2_TR(0x4497fa);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B449800:{NFSU2_TR(0x449800);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B449803:{NFSU2_TR(0x449803);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B449805:{NFSU2_TR(0x449805);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(460u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44980c:{NFSU2_TR(0x44980c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B449812:{NFSU2_TR(0x449812);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449816:{NFSU2_TR(0x449816);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B44981c:{NFSU2_TR(0x44981c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B44981e:{NFSU2_TR(0x44981e);
u8 U[12];
w4(U+0,u32(u32(u32(0x75ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B449822:{NFSU2_TR(0x449822);
{u32 ea_=u32(r4(R+24)+r4(R+8)+u32(464u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449829:{NFSU2_TR(0x449829);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44982f:{NFSU2_TR(0x44982f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449833:{NFSU2_TR(0x449833);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B449839:{NFSU2_TR(0x449839);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+24),r4(R+4)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44983b:{NFSU2_TR(0x44983b);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44983e:{NFSU2_TR(0x44983e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44983f:{NFSU2_TR(0x44983f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B449840:{NFSU2_TR(0x449840);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B449841:{NFSU2_TR(0x449841);
__builtin_memmove((R+16),(R+20),4);
}
B449843:{NFSU2_TR(0x449843);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B449844:{NFSU2_TR(0x449844);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B449847:L449847:{c.instructions+=23;NFSU2_TR(0x449847);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44984d:{NFSU2_TR(0x44984d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449851:{NFSU2_TR(0x449851);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B449857:{NFSU2_TR(0x449857);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B44985a:{NFSU2_TR(0x44985a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B44985c:{NFSU2_TR(0x44985c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44985d:{NFSU2_TR(0x44985d);
{u32 ea_=u32(r4(R+24)+r4(R+8)+u32(436u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449864:{NFSU2_TR(0x449864);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44986a:{NFSU2_TR(0x44986a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44986e:{NFSU2_TR(0x44986e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B449874:{NFSU2_TR(0x449874);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B449876:{NFSU2_TR(0x449876);
u8 U[12];
w4(U+0,u32(u32(u32(0x6full))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B44987a:{NFSU2_TR(0x44987a);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(440u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449881:{NFSU2_TR(0x449881);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449887:{NFSU2_TR(0x449887);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44988b:{NFSU2_TR(0x44988b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B449891:{NFSU2_TR(0x449891);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+24),r4(R+0)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B449893:{NFSU2_TR(0x449893);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449896:{NFSU2_TR(0x449896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B449897:{NFSU2_TR(0x449897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B449898:{NFSU2_TR(0x449898);
__builtin_memmove((R+16),(R+20),4);
}
B44989a:{NFSU2_TR(0x44989a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44989b:{NFSU2_TR(0x44989b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4498a0:L4498a0:{c.instructions+=15;NFSU2_TR(0x4498a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4498a1:{NFSU2_TR(0x4498a1);
__builtin_memmove((R+20),(R+16),4);
}
B4498a3:{NFSU2_TR(0x4498a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4498a6:{NFSU2_TR(0x4498a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb4ull))));
}
B4498ac:{NFSU2_TR(0x4498ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4498ad:{NFSU2_TR(0x4498ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4498ae:{NFSU2_TR(0x4498ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4498af:{NFSU2_TR(0x4498af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4498b2:{NFSU2_TR(0x4498b2);
__builtin_memmove((R+0),(R+28),4);
}
B4498b4:{NFSU2_TR(0x4498b4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4498ba:{NFSU2_TR(0x4498ba);
__builtin_memmove((R+24),(R+4),4);
}
B4498bc:{NFSU2_TR(0x4498bc);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B4498c4:{NFSU2_TR(0x4498c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B4498c7:{NFSU2_TR(0x4498c7);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B4498ca:{NFSU2_TR(0x4498ca);
if(r1(R+518)){{goto L449cec;}}
}
B4498d0:L4498d0:{c.instructions+=6;NFSU2_TR(0x4498d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4498d2:{NFSU2_TR(0x4498d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4498d3:{NFSU2_TR(0x4498d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4498d7:{NFSU2_TR(0x4498d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4498d8:{NFSU2_TR(0x4498d8);
__builtin_memmove((R+4),(R+24),4);
}
B4498da:{NFSU2_TR(0x4498da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4498dfull));
TAIL_STATIC(0x448f50u,448);
}
B4498df:L4498df:{c.instructions+=6;NFSU2_TR(0x4498df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4498e1:{NFSU2_TR(0x4498e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4498e2:{NFSU2_TR(0x4498e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4498e6:{NFSU2_TR(0x4498e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4498e7:{NFSU2_TR(0x4498e7);
__builtin_memmove((R+4),(R+24),4);
}
B4498e9:{NFSU2_TR(0x4498e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4498eeull));
TAIL_STATIC(0x448f50u,448);
}
B4498ee:L4498ee:{c.instructions+=3;NFSU2_TR(0x4498ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4498f1:{NFSU2_TR(0x4498f1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4498f4:{NFSU2_TR(0x4498f4);
if(r1(R+518)){{goto L449acf;}}
}
B4498fa:L4498fa:{c.instructions+=2;NFSU2_TR(0x4498fa);
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4498fd:{NFSU2_TR(0x4498fd);
if(r1(R+518)){{goto L4499eb;}}
}
B449903:L449903:{c.instructions+=2;NFSU2_TR(0x449903);
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
B449904:{NFSU2_TR(0x449904);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L449ca5;}}
}
B44990a:L44990a:{c.instructions+=4;NFSU2_TR(0x44990a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44990e:{NFSU2_TR(0x44990e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44990f:{NFSU2_TR(0x44990f);
__builtin_memmove((R+4),(R+24),4);
}
B449911:{NFSU2_TR(0x449911);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449916ull));
TAIL_STATIC(0x442700u,442);
}
B449916:L449916:{c.instructions+=6;NFSU2_TR(0x449916);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B44991a:{NFSU2_TR(0x44991a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44991e:{NFSU2_TR(0x44991e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44991f:{NFSU2_TR(0x44991f);
__builtin_memmove((R+4),(R+24),4);
}
B449921:{NFSU2_TR(0x449921);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449925:{NFSU2_TR(0x449925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44992aull));
TAIL_STATIC(0x442700u,442);
}
B44992a:L44992a:{c.instructions+=6;NFSU2_TR(0x44992a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B44992e:{NFSU2_TR(0x44992e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449934:{NFSU2_TR(0x449934);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449935:{NFSU2_TR(0x449935);
w4(R+4,u32(0x827b88ull));
}
B44993a:{NFSU2_TR(0x44993a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44993e:{NFSU2_TR(0x44993e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449943ull));
TAIL_STATIC(0x432490u,432);
}
B449943:L449943:{c.instructions+=5;NFSU2_TR(0x449943);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
}
B449948:{NFSU2_TR(0x449948);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449949:{NFSU2_TR(0x449949);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44994d:{NFSU2_TR(0x44994d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44994e:{NFSU2_TR(0x44994e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449953ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B449953:L449953:{c.instructions+=42;NFSU2_TR(0x449953);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449957:{NFSU2_TR(0x449957);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44995b:{NFSU2_TR(0x44995b);
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
B44995e:{NFSU2_TR(0x44995e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449962:{NFSU2_TR(0x449962);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449966:{NFSU2_TR(0x449966);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449968:{NFSU2_TR(0x449968);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44996c:{NFSU2_TR(0x44996c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449970:{NFSU2_TR(0x449970);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449972:{NFSU2_TR(0x449972);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449976:{NFSU2_TR(0x449976);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44997a:{NFSU2_TR(0x44997a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44997e:{NFSU2_TR(0x44997e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449982:{NFSU2_TR(0x449982);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449986:{NFSU2_TR(0x449986);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449988:{NFSU2_TR(0x449988);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44998c:{NFSU2_TR(0x44998c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449990:{NFSU2_TR(0x449990);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449992:{NFSU2_TR(0x449992);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449996:{NFSU2_TR(0x449996);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44999a:{NFSU2_TR(0x44999a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44999e:{NFSU2_TR(0x44999e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4499a2:{NFSU2_TR(0x4499a2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4499a6:{NFSU2_TR(0x4499a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4499a8:{NFSU2_TR(0x4499a8);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4499ac:{NFSU2_TR(0x4499ac);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4499b0:{NFSU2_TR(0x4499b0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4499b2:{NFSU2_TR(0x4499b2);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4499b6:{NFSU2_TR(0x4499b6);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4499ba:{NFSU2_TR(0x4499ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4499be:{NFSU2_TR(0x4499be);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4499c0:{NFSU2_TR(0x4499c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4499c4:{NFSU2_TR(0x4499c4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4499c8:{NFSU2_TR(0x4499c8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4499cc:{NFSU2_TR(0x4499cc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4499d0:{NFSU2_TR(0x4499d0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4499d4:{NFSU2_TR(0x4499d4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4499d8:{NFSU2_TR(0x4499d8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4499dc:{NFSU2_TR(0x4499dc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4499de:{NFSU2_TR(0x4499de);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4499e2:{NFSU2_TR(0x4499e2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4499e6:{NFSU2_TR(0x4499e6);
{goto L449c49;}
}
B4499eb:L4499eb:{c.instructions+=8;NFSU2_TR(0x4499eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4499f1:{NFSU2_TR(0x4499f1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4499f3:{NFSU2_TR(0x4499f3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4499f5:{NFSU2_TR(0x4499f5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B4499f8:{NFSU2_TR(0x4499f8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4499f9:{NFSU2_TR(0x4499f9);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B4499fb:{NFSU2_TR(0x4499fb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4499fd:{NFSU2_TR(0x4499fd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L449a03;}}
}
B4499ff:L4499ff:{c.instructions+=2;NFSU2_TR(0x4499ff);
__builtin_memmove((R+4),(R+0),4);
}
B449a01:{NFSU2_TR(0x449a01);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B449a03:L449a03:{c.instructions+=1;NFSU2_TR(0x449a03);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L449a18;}}
}
B449a05:L449a05:{c.instructions+=4;NFSU2_TR(0x449a05);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B449a0b:{NFSU2_TR(0x449a0b);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449a12:{NFSU2_TR(0x449a12);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449a16:{NFSU2_TR(0x449a16);
{goto L449a20;}
}
B449a18:L449a18:{c.instructions+=1;NFSU2_TR(0x449a18);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B449a20:L449a20:{c.instructions+=4;NFSU2_TR(0x449a20);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449a24:{NFSU2_TR(0x449a24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449a25:{NFSU2_TR(0x449a25);
__builtin_memmove((R+4),(R+24),4);
}
B449a27:{NFSU2_TR(0x449a27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449a2cull));
TAIL_STATIC(0x443270u,443);
}
B449a2c:L449a2c:{c.instructions+=24;NFSU2_TR(0x449a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449a32:{NFSU2_TR(0x449a32);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449a35:{NFSU2_TR(0x449a35);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B449a38:{NFSU2_TR(0x449a38);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449a3b:{NFSU2_TR(0x449a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B449a41:{NFSU2_TR(0x449a41);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449a45:{NFSU2_TR(0x449a45);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B449a47:{NFSU2_TR(0x449a47);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B449a49:{NFSU2_TR(0x449a49);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B449a4c:{NFSU2_TR(0x449a4c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B449a4e:{NFSU2_TR(0x449a4e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B449a51:{NFSU2_TR(0x449a51);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449a55:{NFSU2_TR(0x449a55);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449a59:{NFSU2_TR(0x449a59);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B449a5b:{NFSU2_TR(0x449a5b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449a5f:{NFSU2_TR(0x449a5f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449a63:{NFSU2_TR(0x449a63);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B449a64:{NFSU2_TR(0x449a64);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B449a66:{NFSU2_TR(0x449a66);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B449a68:{NFSU2_TR(0x449a68);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B449a6a:{NFSU2_TR(0x449a6a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449a6e:{NFSU2_TR(0x449a6e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B449a70:{NFSU2_TR(0x449a70);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B449a72:{NFSU2_TR(0x449a72);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L449a78;}}
}
B449a74:L449a74:{c.instructions+=2;NFSU2_TR(0x449a74);
__builtin_memmove((R+0),(R+4),4);
}
B449a76:{NFSU2_TR(0x449a76);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B449a78:L449a78:{c.instructions+=1;NFSU2_TR(0x449a78);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L449a8d;}}
}
B449a7a:L449a7a:{c.instructions+=4;NFSU2_TR(0x449a7a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B449a80:{NFSU2_TR(0x449a80);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449a87:{NFSU2_TR(0x449a87);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449a8b:{NFSU2_TR(0x449a8b);
{goto L449a95;}
}
B449a8d:L449a8d:{c.instructions+=1;NFSU2_TR(0x449a8d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B449a95:L449a95:{c.instructions+=4;NFSU2_TR(0x449a95);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449a99:{NFSU2_TR(0x449a99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449a9a:{NFSU2_TR(0x449a9a);
__builtin_memmove((R+4),(R+24),4);
}
B449a9c:{NFSU2_TR(0x449a9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449aa1ull));
TAIL_STATIC(0x443270u,443);
}
B449aa1:L449aa1:{c.instructions+=12;NFSU2_TR(0x449aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B449aa7:{NFSU2_TR(0x449aa7);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449aaa:{NFSU2_TR(0x449aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B449aad:{NFSU2_TR(0x449aad);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449ab1:{NFSU2_TR(0x449ab1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x60ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B449ab4:{NFSU2_TR(0x449ab4);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B449ab6:{NFSU2_TR(0x449ab6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B449aba:{NFSU2_TR(0x449aba);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449abe:{NFSU2_TR(0x449abe);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B449ac2:{NFSU2_TR(0x449ac2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449ac6:{NFSU2_TR(0x449ac6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B449aca:{NFSU2_TR(0x449aca);
{goto L449cad;}
}
B449acf:L449acf:{c.instructions+=8;NFSU2_TR(0x449acf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449ad5:{NFSU2_TR(0x449ad5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B449ad7:{NFSU2_TR(0x449ad7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B449ad9:{NFSU2_TR(0x449ad9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B449adc:{NFSU2_TR(0x449adc);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B449add:{NFSU2_TR(0x449add);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B449adf:{NFSU2_TR(0x449adf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B449ae1:{NFSU2_TR(0x449ae1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L449ae7;}}
}
B449ae3:L449ae3:{c.instructions+=2;NFSU2_TR(0x449ae3);
__builtin_memmove((R+4),(R+0),4);
}
B449ae5:{NFSU2_TR(0x449ae5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B449ae7:L449ae7:{c.instructions+=1;NFSU2_TR(0x449ae7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L449afc;}}
}
B449ae9:L449ae9:{c.instructions+=4;NFSU2_TR(0x449ae9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B449aef:{NFSU2_TR(0x449aef);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449af6:{NFSU2_TR(0x449af6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449afa:{NFSU2_TR(0x449afa);
{goto L449b04;}
}
B449afc:L449afc:{c.instructions+=1;NFSU2_TR(0x449afc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B449b04:L449b04:{c.instructions+=4;NFSU2_TR(0x449b04);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B449b08:{NFSU2_TR(0x449b08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449b09:{NFSU2_TR(0x449b09);
__builtin_memmove((R+4),(R+24),4);
}
B449b0b:{NFSU2_TR(0x449b0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449b10ull));
TAIL_STATIC(0x443270u,443);
}
B449b10:L449b10:{c.instructions+=8;NFSU2_TR(0x449b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449b16:{NFSU2_TR(0x449b16);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B449b19:{NFSU2_TR(0x449b19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449b1a:{NFSU2_TR(0x449b1a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x90ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B449b1f:{NFSU2_TR(0x449b1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449b20:{NFSU2_TR(0x449b20);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B449b27:{NFSU2_TR(0x449b27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449b28:{NFSU2_TR(0x449b28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449b2dull));
TAIL_STATIC(0x401340u,401);
}
B449b2d:L449b2d:{c.instructions+=5;NFSU2_TR(0x449b2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B449b34:{NFSU2_TR(0x449b34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449b35:{NFSU2_TR(0x449b35);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B449b39:{NFSU2_TR(0x449b39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449b3a:{NFSU2_TR(0x449b3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449b3full));
TAIL_STATIC(0x5baf90u,5ba);
}
B449b3f:L449b3f:{c.instructions+=43;NFSU2_TR(0x449b3f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449b43:{NFSU2_TR(0x449b43);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449b47:{NFSU2_TR(0x449b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B449b4d:{NFSU2_TR(0x449b4d);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449b51:{NFSU2_TR(0x449b51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B449b54:{NFSU2_TR(0x449b54);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449b58:{NFSU2_TR(0x449b58);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B449b5b:{NFSU2_TR(0x449b5b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449b5d:{NFSU2_TR(0x449b5d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449b61:{NFSU2_TR(0x449b61);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449b65:{NFSU2_TR(0x449b65);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449b67:{NFSU2_TR(0x449b67);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449b6b:{NFSU2_TR(0x449b6b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449b6f:{NFSU2_TR(0x449b6f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449b73:{NFSU2_TR(0x449b73);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449b77:{NFSU2_TR(0x449b77);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449b7b:{NFSU2_TR(0x449b7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449b7d:{NFSU2_TR(0x449b7d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449b81:{NFSU2_TR(0x449b81);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449b85:{NFSU2_TR(0x449b85);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449b87:{NFSU2_TR(0x449b87);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449b8b:{NFSU2_TR(0x449b8b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449b8f:{NFSU2_TR(0x449b8f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449b93:{NFSU2_TR(0x449b93);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449b97:{NFSU2_TR(0x449b97);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449b9b:{NFSU2_TR(0x449b9b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449b9d:{NFSU2_TR(0x449b9d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449ba1:{NFSU2_TR(0x449ba1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449ba5:{NFSU2_TR(0x449ba5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449ba7:{NFSU2_TR(0x449ba7);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449bab:{NFSU2_TR(0x449bab);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449baf:{NFSU2_TR(0x449baf);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B449bb3:{NFSU2_TR(0x449bb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B449bb7:{NFSU2_TR(0x449bb7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B449bb9:{NFSU2_TR(0x449bb9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B449bbb:{NFSU2_TR(0x449bbb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449bbf:{NFSU2_TR(0x449bbf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B449bc1:{NFSU2_TR(0x449bc1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B449bc4:{NFSU2_TR(0x449bc4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449bc8:{NFSU2_TR(0x449bc8);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B449bc9:{NFSU2_TR(0x449bc9);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B449bcb:{NFSU2_TR(0x449bcb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B449bcd:{NFSU2_TR(0x449bcd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L449bd3;}}
}
B449bcf:L449bcf:{c.instructions+=2;NFSU2_TR(0x449bcf);
__builtin_memmove((R+0),(R+4),4);
}
B449bd1:{NFSU2_TR(0x449bd1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B449bd3:L449bd3:{c.instructions+=1;NFSU2_TR(0x449bd3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L449be8;}}
}
B449bd5:L449bd5:{c.instructions+=4;NFSU2_TR(0x449bd5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B449bdb:{NFSU2_TR(0x449bdb);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449be2:{NFSU2_TR(0x449be2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449be6:{NFSU2_TR(0x449be6);
{goto L449bf0;}
}
B449be8:L449be8:{c.instructions+=1;NFSU2_TR(0x449be8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B449bf0:L449bf0:{c.instructions+=4;NFSU2_TR(0x449bf0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449bf4:{NFSU2_TR(0x449bf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449bf5:{NFSU2_TR(0x449bf5);
__builtin_memmove((R+4),(R+24),4);
}
B449bf7:{NFSU2_TR(0x449bf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449bfcull));
TAIL_STATIC(0x443270u,443);
}
B449bfc:L449bfc:{c.instructions+=8;NFSU2_TR(0x449bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B449c02:{NFSU2_TR(0x449c02);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B449c05:{NFSU2_TR(0x449c05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449c06:{NFSU2_TR(0x449c06);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x90ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B449c0c:{NFSU2_TR(0x449c0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B449c13:{NFSU2_TR(0x449c13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449c14:{NFSU2_TR(0x449c14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449c15:{NFSU2_TR(0x449c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449c1aull));
TAIL_STATIC(0x401340u,401);
}
B449c1a:L449c1a:{c.instructions+=5;NFSU2_TR(0x449c1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B449c21:{NFSU2_TR(0x449c21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449c22:{NFSU2_TR(0x449c22);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B449c26:{NFSU2_TR(0x449c26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449c27:{NFSU2_TR(0x449c27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449c2cull));
TAIL_STATIC(0x5baf90u,5ba);
}
B449c2c:L449c2c:{c.instructions+=8;NFSU2_TR(0x449c2c);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449c30:{NFSU2_TR(0x449c30);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449c34:{NFSU2_TR(0x449c34);
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
B449c37:{NFSU2_TR(0x449c37);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449c3b:{NFSU2_TR(0x449c3b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449c3f:{NFSU2_TR(0x449c3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449c41:{NFSU2_TR(0x449c41);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449c45:{NFSU2_TR(0x449c45);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449c49:L449c49:{c.instructions+=26;NFSU2_TR(0x449c49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449c4b:{NFSU2_TR(0x449c4b);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449c4f:{NFSU2_TR(0x449c4f);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449c53:{NFSU2_TR(0x449c53);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449c57:{NFSU2_TR(0x449c57);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449c5b:{NFSU2_TR(0x449c5b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449c5f:{NFSU2_TR(0x449c5f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449c61:{NFSU2_TR(0x449c61);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449c65:{NFSU2_TR(0x449c65);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449c69:{NFSU2_TR(0x449c69);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449c6b:{NFSU2_TR(0x449c6b);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449c6f:{NFSU2_TR(0x449c6f);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449c73:{NFSU2_TR(0x449c73);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449c77:{NFSU2_TR(0x449c77);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449c7b:{NFSU2_TR(0x449c7b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449c7f:{NFSU2_TR(0x449c7f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449c83:{NFSU2_TR(0x449c83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449c85:{NFSU2_TR(0x449c85);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449c89:{NFSU2_TR(0x449c89);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449c8d:{NFSU2_TR(0x449c8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449c8f:{NFSU2_TR(0x449c8f);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449c93:{NFSU2_TR(0x449c93);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449c97:{NFSU2_TR(0x449c97);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449c9b:{NFSU2_TR(0x449c9b);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449c9f:{NFSU2_TR(0x449c9f);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449ca3:{NFSU2_TR(0x449ca3);
{goto L449cad;}
}
B449ca5:L449ca5:{c.instructions+=2;NFSU2_TR(0x449ca5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449ca9:{NFSU2_TR(0x449ca9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449cad:L449cad:{c.instructions+=13;NFSU2_TR(0x449cad);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B449cb0:{NFSU2_TR(0x449cb0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B449cb2:{NFSU2_TR(0x449cb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449cb6:{NFSU2_TR(0x449cb6);
{u32 ea_=u32(r4(R+12)+u32(452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449cbc:{NFSU2_TR(0x449cbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B449cc0:{NFSU2_TR(0x449cc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B449cc6:{NFSU2_TR(0x449cc6);
{u32 ea_=u32(r4(R+12)+u32(456u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449ccc:{NFSU2_TR(0x449ccc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B449cd0:{NFSU2_TR(0x449cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B449cd6:{NFSU2_TR(0x449cd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449cda:{NFSU2_TR(0x449cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B449ce0:{NFSU2_TR(0x449ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B449ce6:{NFSU2_TR(0x449ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B449cec:L449cec:{c.instructions+=6;NFSU2_TR(0x449cec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B449ced:{NFSU2_TR(0x449ced);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B449cee:{NFSU2_TR(0x449cee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B449cef:{NFSU2_TR(0x449cef);
__builtin_memmove((R+16),(R+20),4);
}
B449cf1:{NFSU2_TR(0x449cf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B449cf2:{NFSU2_TR(0x449cf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B449d00:L449d00:{c.instructions+=15;NFSU2_TR(0x449d00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449d01:{NFSU2_TR(0x449d01);
__builtin_memmove((R+20),(R+16),4);
}
B449d03:{NFSU2_TR(0x449d03);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B449d06:{NFSU2_TR(0x449d06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb4ull))));
}
B449d0c:{NFSU2_TR(0x449d0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449d0d:{NFSU2_TR(0x449d0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449d0e:{NFSU2_TR(0x449d0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449d0f:{NFSU2_TR(0x449d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B449d12:{NFSU2_TR(0x449d12);
__builtin_memmove((R+0),(R+28),4);
}
B449d14:{NFSU2_TR(0x449d14);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B449d1a:{NFSU2_TR(0x449d1a);
__builtin_memmove((R+24),(R+4),4);
}
B449d1c:{NFSU2_TR(0x449d1c);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B449d24:{NFSU2_TR(0x449d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B449d27:{NFSU2_TR(0x449d27);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B449d2a:{NFSU2_TR(0x449d2a);
if(r1(R+518)){TAIL_STATIC(0x44a14cu,44a);}
}
B449d30:L449d30:{c.instructions+=6;NFSU2_TR(0x449d30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449d32:{NFSU2_TR(0x449d32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449d33:{NFSU2_TR(0x449d33);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B449d37:{NFSU2_TR(0x449d37);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449d38:{NFSU2_TR(0x449d38);
__builtin_memmove((R+4),(R+24),4);
}
B449d3a:{NFSU2_TR(0x449d3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449d3full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4491c0u);}goto L4491c0;}
}
B449d3f:L449d3f:{c.instructions+=6;NFSU2_TR(0x449d3f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449d41:{NFSU2_TR(0x449d41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449d42:{NFSU2_TR(0x449d42);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B449d46:{NFSU2_TR(0x449d46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449d47:{NFSU2_TR(0x449d47);
__builtin_memmove((R+4),(R+24),4);
}
B449d49:{NFSU2_TR(0x449d49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449d4eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4491c0u);}goto L4491c0;}
}
B449d4e:L449d4e:{c.instructions+=3;NFSU2_TR(0x449d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449d51:{NFSU2_TR(0x449d51);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B449d54:{NFSU2_TR(0x449d54);
if(r1(R+518)){{goto L449f2f;}}
}
B449d5a:L449d5a:{c.instructions+=2;NFSU2_TR(0x449d5a);
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B449d5d:{NFSU2_TR(0x449d5d);
if(r1(R+518)){{goto L449e4b;}}
}
B449d63:L449d63:{c.instructions+=2;NFSU2_TR(0x449d63);
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
B449d64:{NFSU2_TR(0x449d64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x44a105u,44a);}
}
B449d6a:L449d6a:{c.instructions+=4;NFSU2_TR(0x449d6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B449d6e:{NFSU2_TR(0x449d6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449d6f:{NFSU2_TR(0x449d6f);
__builtin_memmove((R+4),(R+24),4);
}
B449d71:{NFSU2_TR(0x449d71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449d76ull));
TAIL_STATIC(0x442700u,442);
}
B449d76:L449d76:{c.instructions+=6;NFSU2_TR(0x449d76);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B449d7a:{NFSU2_TR(0x449d7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B449d7e:{NFSU2_TR(0x449d7e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449d7f:{NFSU2_TR(0x449d7f);
__builtin_memmove((R+4),(R+24),4);
}
B449d81:{NFSU2_TR(0x449d81);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449d85:{NFSU2_TR(0x449d85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449d8aull));
TAIL_STATIC(0x442700u,442);
}
B449d8a:L449d8a:{c.instructions+=6;NFSU2_TR(0x449d8a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B449d8e:{NFSU2_TR(0x449d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449d94:{NFSU2_TR(0x449d94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449d95:{NFSU2_TR(0x449d95);
w4(R+4,u32(0x827b88ull));
}
B449d9a:{NFSU2_TR(0x449d9a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449d9e:{NFSU2_TR(0x449d9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449da3ull));
TAIL_STATIC(0x432490u,432);
}
B449da3:L449da3:{c.instructions+=5;NFSU2_TR(0x449da3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
}
B449da8:{NFSU2_TR(0x449da8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449da9:{NFSU2_TR(0x449da9);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B449dad:{NFSU2_TR(0x449dad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449dae:{NFSU2_TR(0x449dae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449db3ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B449db3:L449db3:{c.instructions+=42;NFSU2_TR(0x449db3);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449db7:{NFSU2_TR(0x449db7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449dbb:{NFSU2_TR(0x449dbb);
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
B449dbe:{NFSU2_TR(0x449dbe);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449dc2:{NFSU2_TR(0x449dc2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449dc6:{NFSU2_TR(0x449dc6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449dc8:{NFSU2_TR(0x449dc8);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449dcc:{NFSU2_TR(0x449dcc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449dd0:{NFSU2_TR(0x449dd0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449dd2:{NFSU2_TR(0x449dd2);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449dd6:{NFSU2_TR(0x449dd6);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449dda:{NFSU2_TR(0x449dda);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449dde:{NFSU2_TR(0x449dde);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449de2:{NFSU2_TR(0x449de2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449de6:{NFSU2_TR(0x449de6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449de8:{NFSU2_TR(0x449de8);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449dec:{NFSU2_TR(0x449dec);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449df0:{NFSU2_TR(0x449df0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449df2:{NFSU2_TR(0x449df2);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449df6:{NFSU2_TR(0x449df6);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449dfa:{NFSU2_TR(0x449dfa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449dfe:{NFSU2_TR(0x449dfe);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449e02:{NFSU2_TR(0x449e02);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449e06:{NFSU2_TR(0x449e06);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449e08:{NFSU2_TR(0x449e08);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449e0c:{NFSU2_TR(0x449e0c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449e10:{NFSU2_TR(0x449e10);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449e12:{NFSU2_TR(0x449e12);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449e16:{NFSU2_TR(0x449e16);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449e1a:{NFSU2_TR(0x449e1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B449e1e:{NFSU2_TR(0x449e1e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B449e20:{NFSU2_TR(0x449e20);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B449e24:{NFSU2_TR(0x449e24);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449e28:{NFSU2_TR(0x449e28);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449e2c:{NFSU2_TR(0x449e2c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449e30:{NFSU2_TR(0x449e30);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449e34:{NFSU2_TR(0x449e34);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449e38:{NFSU2_TR(0x449e38);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449e3c:{NFSU2_TR(0x449e3c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449e3e:{NFSU2_TR(0x449e3e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449e42:{NFSU2_TR(0x449e42);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449e46:{NFSU2_TR(0x449e46);
TAIL_STATIC(0x44a0a9u,44a);
}
B449e4b:L449e4b:{c.instructions+=8;NFSU2_TR(0x449e4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449e51:{NFSU2_TR(0x449e51);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B449e53:{NFSU2_TR(0x449e53);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B449e55:{NFSU2_TR(0x449e55);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B449e58:{NFSU2_TR(0x449e58);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B449e59:{NFSU2_TR(0x449e59);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B449e5b:{NFSU2_TR(0x449e5b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B449e5d:{NFSU2_TR(0x449e5d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L449e63;}}
}
B449e5f:L449e5f:{c.instructions+=2;NFSU2_TR(0x449e5f);
__builtin_memmove((R+4),(R+0),4);
}
B449e61:{NFSU2_TR(0x449e61);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B449e63:L449e63:{c.instructions+=1;NFSU2_TR(0x449e63);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L449e78;}}
}
B449e65:L449e65:{c.instructions+=4;NFSU2_TR(0x449e65);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B449e6b:{NFSU2_TR(0x449e6b);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449e72:{NFSU2_TR(0x449e72);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449e76:{NFSU2_TR(0x449e76);
{goto L449e80;}
}
B449e78:L449e78:{c.instructions+=1;NFSU2_TR(0x449e78);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B449e80:L449e80:{c.instructions+=4;NFSU2_TR(0x449e80);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449e84:{NFSU2_TR(0x449e84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449e85:{NFSU2_TR(0x449e85);
__builtin_memmove((R+4),(R+24),4);
}
B449e87:{NFSU2_TR(0x449e87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449e8cull));
TAIL_STATIC(0x443270u,443);
}
B449e8c:L449e8c:{c.instructions+=24;NFSU2_TR(0x449e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449e92:{NFSU2_TR(0x449e92);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449e95:{NFSU2_TR(0x449e95);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B449e98:{NFSU2_TR(0x449e98);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449e9b:{NFSU2_TR(0x449e9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B449ea1:{NFSU2_TR(0x449ea1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449ea5:{NFSU2_TR(0x449ea5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B449ea7:{NFSU2_TR(0x449ea7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B449ea9:{NFSU2_TR(0x449ea9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B449eac:{NFSU2_TR(0x449eac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B449eae:{NFSU2_TR(0x449eae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B449eb1:{NFSU2_TR(0x449eb1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449eb5:{NFSU2_TR(0x449eb5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449eb9:{NFSU2_TR(0x449eb9);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B449ebb:{NFSU2_TR(0x449ebb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449ebf:{NFSU2_TR(0x449ebf);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449ec3:{NFSU2_TR(0x449ec3);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B449ec4:{NFSU2_TR(0x449ec4);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B449ec6:{NFSU2_TR(0x449ec6);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B449ec8:{NFSU2_TR(0x449ec8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B449eca:{NFSU2_TR(0x449eca);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449ece:{NFSU2_TR(0x449ece);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B449ed0:{NFSU2_TR(0x449ed0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B449ed2:{NFSU2_TR(0x449ed2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L449ed8;}}
}
B449ed4:L449ed4:{c.instructions+=2;NFSU2_TR(0x449ed4);
__builtin_memmove((R+0),(R+4),4);
}
B449ed6:{NFSU2_TR(0x449ed6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B449ed8:L449ed8:{c.instructions+=1;NFSU2_TR(0x449ed8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L449eed;}}
}
B449eda:L449eda:{c.instructions+=4;NFSU2_TR(0x449eda);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B449ee0:{NFSU2_TR(0x449ee0);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449ee7:{NFSU2_TR(0x449ee7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449eeb:{NFSU2_TR(0x449eeb);
{goto L449ef5;}
}
B449eed:L449eed:{c.instructions+=1;NFSU2_TR(0x449eed);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B449ef5:L449ef5:{c.instructions+=4;NFSU2_TR(0x449ef5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449ef9:{NFSU2_TR(0x449ef9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449efa:{NFSU2_TR(0x449efa);
__builtin_memmove((R+4),(R+24),4);
}
B449efc:{NFSU2_TR(0x449efc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449f01ull));
TAIL_STATIC(0x443270u,443);
}
B449f01:L449f01:{c.instructions+=12;NFSU2_TR(0x449f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B449f07:{NFSU2_TR(0x449f07);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449f0a:{NFSU2_TR(0x449f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B449f0d:{NFSU2_TR(0x449f0d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449f11:{NFSU2_TR(0x449f11);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x60ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B449f14:{NFSU2_TR(0x449f14);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B449f16:{NFSU2_TR(0x449f16);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B449f1a:{NFSU2_TR(0x449f1a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449f1e:{NFSU2_TR(0x449f1e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B449f22:{NFSU2_TR(0x449f22);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449f26:{NFSU2_TR(0x449f26);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B449f2a:{NFSU2_TR(0x449f2a);
TAIL_STATIC(0x44a10du,44a);
}
B449f2f:L449f2f:{c.instructions+=8;NFSU2_TR(0x449f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449f35:{NFSU2_TR(0x449f35);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B449f37:{NFSU2_TR(0x449f37);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B449f39:{NFSU2_TR(0x449f39);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B449f3c:{NFSU2_TR(0x449f3c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B449f3d:{NFSU2_TR(0x449f3d);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B449f3f:{NFSU2_TR(0x449f3f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B449f41:{NFSU2_TR(0x449f41);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L449f47;}}
}
B449f43:L449f43:{c.instructions+=2;NFSU2_TR(0x449f43);
__builtin_memmove((R+4),(R+0),4);
}
B449f45:{NFSU2_TR(0x449f45);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B449f47:L449f47:{c.instructions+=1;NFSU2_TR(0x449f47);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L449f5c;}}
}
B449f49:L449f49:{c.instructions+=4;NFSU2_TR(0x449f49);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B449f4f:{NFSU2_TR(0x449f4f);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449f56:{NFSU2_TR(0x449f56);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B449f5a:{NFSU2_TR(0x449f5a);
{goto L449f64;}
}
B449f5c:L449f5c:{c.instructions+=1;NFSU2_TR(0x449f5c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B449f64:L449f64:{c.instructions+=4;NFSU2_TR(0x449f64);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B449f68:{NFSU2_TR(0x449f68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449f69:{NFSU2_TR(0x449f69);
__builtin_memmove((R+4),(R+24),4);
}
B449f6b:{NFSU2_TR(0x449f6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449f70ull));
TAIL_STATIC(0x443270u,443);
}
B449f70:L449f70:{c.instructions+=8;NFSU2_TR(0x449f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B449f76:{NFSU2_TR(0x449f76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B449f79:{NFSU2_TR(0x449f79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449f7a:{NFSU2_TR(0x449f7a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x90ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B449f7f:{NFSU2_TR(0x449f7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449f80:{NFSU2_TR(0x449f80);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B449f87:{NFSU2_TR(0x449f87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449f88:{NFSU2_TR(0x449f88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449f8dull));
TAIL_STATIC(0x401340u,401);
}
B449f8d:L449f8d:{c.instructions+=5;NFSU2_TR(0x449f8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B449f94:{NFSU2_TR(0x449f94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449f95:{NFSU2_TR(0x449f95);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B449f99:{NFSU2_TR(0x449f99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B449f9a:{NFSU2_TR(0x449f9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x449f9full));
TAIL_STATIC(0x5baf90u,5ba);
}
B449f9f:L449f9f:{c.instructions+=27;NFSU2_TR(0x449f9f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449fa3:{NFSU2_TR(0x449fa3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449fa7:{NFSU2_TR(0x449fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B449fad:{NFSU2_TR(0x449fad);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449fb1:{NFSU2_TR(0x449fb1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B449fb4:{NFSU2_TR(0x449fb4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449fb8:{NFSU2_TR(0x449fb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B449fbb:{NFSU2_TR(0x449fbb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449fbd:{NFSU2_TR(0x449fbd);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449fc1:{NFSU2_TR(0x449fc1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449fc5:{NFSU2_TR(0x449fc5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449fc7:{NFSU2_TR(0x449fc7);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449fcb:{NFSU2_TR(0x449fcb);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449fcf:{NFSU2_TR(0x449fcf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449fd3:{NFSU2_TR(0x449fd3);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449fd7:{NFSU2_TR(0x449fd7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449fdb:{NFSU2_TR(0x449fdb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449fdd:{NFSU2_TR(0x449fdd);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449fe1:{NFSU2_TR(0x449fe1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449fe5:{NFSU2_TR(0x449fe5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449fe7:{NFSU2_TR(0x449fe7);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B449feb:{NFSU2_TR(0x449feb);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449fef:{NFSU2_TR(0x449fef);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449ff3:{NFSU2_TR(0x449ff3);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B449ff7:{NFSU2_TR(0x449ff7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B449ffb:{NFSU2_TR(0x449ffb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B449ffd:{NFSU2_TR(0x449ffd);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x44a001u,44a);
}
XIT:NFSU2_TR_EXIT(0x449,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
