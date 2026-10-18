#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_762(u8* __restrict R,Cpu& c);
u32 body_763(u8* __restrict R,Cpu& c);
u32 body_767(u8* __restrict R,Cpu& c);
u32 body_769(u8* __restrict R,Cpu& c);
u32 body_76c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x766,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x766,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_766(u8* __restrict R,Cpu& c);
u32 page_766(Cpu& c){return body_766(c.regs.data(),c);}
__attribute__((noinline)) u32 body_766(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x766002:goto L766002;
case 0x766004:goto L766004;
case 0x766005:c.instructions+=3;goto B766005;
case 0x766009:c.instructions+=2;goto B766009;
case 0x76600d:c.instructions+=1;goto B76600d;
case 0x76600f:goto L76600f;
case 0x766010:c.instructions+=1;goto B766010;
case 0x766015:goto L766015;
case 0x766019:c.instructions+=4;goto B766019;
case 0x76601d:c.instructions+=3;goto B76601d;
case 0x766020:c.instructions+=2;goto B766020;
case 0x766024:c.instructions+=1;goto B766024;
case 0x766025:goto L766025;
case 0x766026:goto L766026;
case 0x766027:goto L766027;
case 0x766028:c.instructions+=4;goto B766028;
case 0x76602c:c.instructions+=3;goto B76602c;
case 0x76602f:c.instructions+=2;goto B76602f;
case 0x766031:c.instructions+=1;goto B766031;
case 0x766033:goto L766033;
case 0x766035:c.instructions+=1;goto B766035;
case 0x766037:goto L766037;
case 0x76603a:c.instructions+=1;goto B76603a;
case 0x76603f:goto L76603f;
case 0x766045:c.instructions+=5;goto B766045;
case 0x766047:c.instructions+=4;goto B766047;
case 0x766048:c.instructions+=3;goto B766048;
case 0x76604a:c.instructions+=2;goto B76604a;
case 0x76604d:c.instructions+=1;goto B76604d;
case 0x766050:goto L766050;
case 0x766051:c.instructions+=1;goto B766051;
case 0x766052:goto L766052;
case 0x766053:c.instructions+=14;goto B766053;
case 0x766055:c.instructions+=13;goto B766055;
case 0x766056:c.instructions+=12;goto B766056;
case 0x766057:c.instructions+=11;goto B766057;
case 0x766058:c.instructions+=10;goto B766058;
case 0x766059:c.instructions+=9;goto B766059;
case 0x76605f:c.instructions+=8;goto B76605f;
case 0x766060:c.instructions+=7;goto B766060;
case 0x766063:c.instructions+=6;goto B766063;
case 0x766065:c.instructions+=5;goto B766065;
case 0x766067:c.instructions+=4;goto B766067;
case 0x766069:c.instructions+=3;goto B766069;
case 0x76606c:c.instructions+=2;goto B76606c;
case 0x76606f:c.instructions+=1;goto B76606f;
case 0x766071:goto L766071;
case 0x766073:c.instructions+=1;goto B766073;
case 0x766075:goto L766075;
case 0x766077:c.instructions+=1;goto B766077;
case 0x76607d:goto L76607d;
case 0x766082:c.instructions+=1;goto B766082;
case 0x766084:goto L766084;
case 0x766086:c.instructions+=2;goto B766086;
case 0x766089:c.instructions+=1;goto B766089;
case 0x76608b:goto L76608b;
case 0x766090:goto L766090;
case 0x766093:goto L766093;
case 0x766095:c.instructions+=2;goto B766095;
case 0x766096:c.instructions+=1;goto B766096;
case 0x76609b:goto L76609b;
case 0x76609d:c.instructions+=1;goto B76609d;
case 0x7660a3:goto L7660a3;
case 0x7660a6:c.instructions+=2;goto B7660a6;
case 0x7660a9:c.instructions+=1;goto B7660a9;
case 0x7660ab:goto L7660ab;
case 0x7660ad:goto L7660ad;
case 0x7660b0:c.instructions+=1;goto B7660b0;
case 0x7660b2:goto L7660b2;
case 0x7660b5:c.instructions+=1;goto B7660b5;
case 0x7660b7:goto L7660b7;
case 0x7660ba:c.instructions+=1;goto B7660ba;
case 0x7660bc:goto L7660bc;
case 0x7660bd:c.instructions+=1;goto B7660bd;
case 0x7660c3:goto L7660c3;
case 0x7660c6:c.instructions+=1;goto B7660c6;
case 0x7660cc:goto L7660cc;
case 0x7660d3:c.instructions+=2;goto B7660d3;
case 0x7660d6:c.instructions+=1;goto B7660d6;
case 0x7660db:goto L7660db;
case 0x7660de:c.instructions+=1;goto B7660de;
case 0x7660e0:goto L7660e0;
case 0x7660e7:c.instructions+=2;goto B7660e7;
case 0x7660ea:c.instructions+=1;goto B7660ea;
case 0x7660ef:goto L7660ef;
case 0x7660f2:c.instructions+=1;goto B7660f2;
case 0x7660f4:goto L7660f4;
case 0x7660f7:c.instructions+=1;goto B7660f7;
case 0x7660f9:goto L7660f9;
case 0x7660fc:c.instructions+=1;goto B7660fc;
case 0x7660fe:goto L7660fe;
case 0x766101:c.instructions+=4;goto B766101;
case 0x766104:c.instructions+=3;goto B766104;
case 0x766107:c.instructions+=2;goto B766107;
case 0x76610d:c.instructions+=1;goto B76610d;
case 0x76610f:goto L76610f;
case 0x766114:c.instructions+=2;goto B766114;
case 0x766116:c.instructions+=1;goto B766116;
case 0x766118:goto L766118;
case 0x76611a:c.instructions+=1;goto B76611a;
case 0x76611c:goto L76611c;
case 0x76611f:c.instructions+=1;goto B76611f;
case 0x766121:goto L766121;
case 0x766122:c.instructions+=1;goto B766122;
case 0x766124:goto L766124;
case 0x766127:c.instructions+=1;goto B766127;
case 0x766129:goto L766129;
case 0x76612c:c.instructions+=1;goto B76612c;
case 0x76612e:goto L76612e;
case 0x766131:c.instructions+=1;goto B766131;
case 0x766133:goto L766133;
case 0x766139:c.instructions+=1;goto B766139;
case 0x76613b:goto L76613b;
case 0x76613e:c.instructions+=1;goto B76613e;
case 0x766140:goto L766140;
case 0x766147:c.instructions+=2;goto B766147;
case 0x76614d:c.instructions+=1;goto B76614d;
case 0x76614f:goto L76614f;
case 0x766152:c.instructions+=1;goto B766152;
case 0x766154:goto L766154;
case 0x766156:c.instructions+=1;goto B766156;
case 0x766158:goto L766158;
case 0x76615f:c.instructions+=2;goto B76615f;
case 0x766165:c.instructions+=1;goto B766165;
case 0x766167:goto L766167;
case 0x76616a:c.instructions+=1;goto B76616a;
case 0x76616c:goto L76616c;
case 0x766172:goto L766172;
case 0x766173:c.instructions+=3;goto B766173;
case 0x766175:c.instructions+=2;goto B766175;
case 0x766177:c.instructions+=1;goto B766177;
case 0x76617d:goto L76617d;
case 0x766182:c.instructions+=4;goto B766182;
case 0x766185:c.instructions+=3;goto B766185;
case 0x766186:c.instructions+=2;goto B766186;
case 0x766189:c.instructions+=1;goto B766189;
case 0x76618e:goto L76618e;
case 0x766190:c.instructions+=3;goto B766190;
case 0x766193:c.instructions+=2;goto B766193;
case 0x766195:c.instructions+=1;goto B766195;
case 0x766197:goto L766197;
case 0x766199:c.instructions+=1;goto B766199;
case 0x76619b:goto L76619b;
case 0x76619e:c.instructions+=7;goto B76619e;
case 0x7661a4:c.instructions+=6;goto B7661a4;
case 0x7661a7:c.instructions+=5;goto B7661a7;
case 0x7661aa:c.instructions+=4;goto B7661aa;
case 0x7661ac:c.instructions+=3;goto B7661ac;
case 0x7661af:c.instructions+=2;goto B7661af;
case 0x7661b2:c.instructions+=1;goto B7661b2;
case 0x7661b5:goto L7661b5;
case 0x7661b6:c.instructions+=4;goto B7661b6;
case 0x7661b7:c.instructions+=3;goto B7661b7;
case 0x7661b8:c.instructions+=2;goto B7661b8;
case 0x7661b9:c.instructions+=1;goto B7661b9;
case 0x7661ba:goto L7661ba;
case 0x7661bf:goto L7661bf;
case 0x7661c2:c.instructions+=1;goto B7661c2;
case 0x7661c3:goto L7661c3;
case 0x7661c8:goto L7661c8;
case 0x7661cb:c.instructions+=1;goto B7661cb;
case 0x7661cc:goto L7661cc;
case 0x7661cd:c.instructions+=1;goto B7661cd;
case 0x7661d2:goto L7661d2;
case 0x7661d6:c.instructions+=2;goto B7661d6;
case 0x7661d9:c.instructions+=1;goto B7661d9;
case 0x7661db:goto L7661db;
case 0x7661e2:c.instructions+=1;goto B7661e2;
case 0x7661e4:goto L7661e4;
case 0x7661e5:c.instructions+=2;goto B7661e5;
case 0x7661e8:c.instructions+=1;goto B7661e8;
case 0x7661ea:goto L7661ea;
case 0x7661ed:c.instructions+=1;goto B7661ed;
case 0x7661ef:goto L7661ef;
case 0x7661f2:c.instructions+=1;goto B7661f2;
case 0x7661f4:goto L7661f4;
case 0x7661f9:goto L7661f9;
case 0x766200:c.instructions+=2;goto B766200;
case 0x766201:c.instructions+=1;goto B766201;
case 0x766202:goto L766202;
case 0x766207:goto L766207;
case 0x76620e:c.instructions+=3;goto B76620e;
case 0x766211:c.instructions+=2;goto B766211;
case 0x766212:c.instructions+=1;goto B766212;
case 0x766213:goto L766213;
case 0x766219:c.instructions+=1;goto B766219;
case 0x76621b:goto L76621b;
case 0x766221:c.instructions+=1;goto B766221;
case 0x766223:goto L766223;
case 0x766228:goto L766228;
case 0x76622f:c.instructions+=2;goto B76622f;
case 0x766230:c.instructions+=1;goto B766230;
case 0x766231:goto L766231;
case 0x766236:goto L766236;
case 0x76623d:c.instructions+=2;goto B76623d;
case 0x76623e:c.instructions+=1;goto B76623e;
case 0x76623f:goto L76623f;
case 0x766241:c.instructions+=2;goto B766241;
case 0x766246:c.instructions+=1;goto B766246;
case 0x76624b:goto L76624b;
case 0x76624d:c.instructions+=4;goto B76624d;
case 0x76624f:c.instructions+=3;goto B76624f;
case 0x766252:c.instructions+=2;goto B766252;
case 0x766254:c.instructions+=1;goto B766254;
case 0x766259:goto L766259;
case 0x76625a:c.instructions+=2;goto B76625a;
case 0x76625d:c.instructions+=1;goto B76625d;
case 0x76625f:goto L76625f;
case 0x766262:c.instructions+=2;goto B766262;
case 0x766268:c.instructions+=1;goto B766268;
case 0x76626e:goto L76626e;
case 0x766273:c.instructions+=3;goto B766273;
case 0x766276:c.instructions+=2;goto B766276;
case 0x766278:c.instructions+=1;goto B766278;
case 0x76627a:goto L76627a;
case 0x76627e:c.instructions+=1;goto B76627e;
case 0x766280:goto L766280;
case 0x766283:c.instructions+=1;goto B766283;
case 0x766285:goto L766285;
case 0x766288:c.instructions+=1;goto B766288;
case 0x76628a:goto L76628a;
case 0x76628d:c.instructions+=2;goto B76628d;
case 0x76628e:c.instructions+=1;goto B76628e;
case 0x766293:goto L766293;
case 0x766294:c.instructions+=2;goto B766294;
case 0x766296:c.instructions+=1;goto B766296;
case 0x76629c:goto L76629c;
case 0x7662a1:c.instructions+=3;goto B7662a1;
case 0x7662a4:c.instructions+=2;goto B7662a4;
case 0x7662a5:c.instructions+=1;goto B7662a5;
case 0x7662aa:goto L7662aa;
case 0x7662ab:c.instructions+=5;goto B7662ab;
case 0x7662ac:c.instructions+=4;goto B7662ac;
case 0x7662b1:c.instructions+=3;goto B7662b1;
case 0x7662b4:c.instructions+=2;goto B7662b4;
case 0x7662b8:c.instructions+=1;goto B7662b8;
case 0x7662ba:goto L7662ba;
case 0x7662bb:c.instructions+=2;goto B7662bb;
case 0x7662bc:c.instructions+=1;goto B7662bc;
case 0x7662c1:goto L7662c1;
case 0x7662c2:c.instructions+=1;goto B7662c2;
case 0x7662c3:goto L7662c3;
case 0x7662c4:c.instructions+=1;goto B7662c4;
case 0x7662c6:goto L7662c6;
case 0x7662c8:c.instructions+=1;goto B7662c8;
case 0x7662ca:goto L7662ca;
case 0x7662cd:c.instructions+=2;goto B7662cd;
case 0x7662cf:c.instructions+=1;goto B7662cf;
case 0x7662d4:goto L7662d4;
case 0x7662d5:c.instructions+=6;goto B7662d5;
case 0x7662db:c.instructions+=5;goto B7662db;
case 0x7662de:c.instructions+=4;goto B7662de;
case 0x7662e3:c.instructions+=3;goto B7662e3;
case 0x7662e6:c.instructions+=2;goto B7662e6;
case 0x7662e8:c.instructions+=1;goto B7662e8;
case 0x7662ea:goto L7662ea;
case 0x7662ef:c.instructions+=3;goto B7662ef;
case 0x7662f2:c.instructions+=2;goto B7662f2;
case 0x7662f3:c.instructions+=1;goto B7662f3;
case 0x7662f8:goto L7662f8;
case 0x7662f9:c.instructions+=4;goto B7662f9;
case 0x7662fa:c.instructions+=3;goto B7662fa;
case 0x7662fc:c.instructions+=2;goto B7662fc;
case 0x766301:c.instructions+=1;goto B766301;
case 0x766303:goto L766303;
case 0x766306:c.instructions+=1;goto B766306;
case 0x76630b:goto L76630b;
case 0x76630c:c.instructions+=3;goto B76630c;
case 0x766311:c.instructions+=2;goto B766311;
case 0x766314:c.instructions+=1;goto B766314;
case 0x766316:goto L766316;
case 0x766319:c.instructions+=3;goto B766319;
case 0x76631c:c.instructions+=2;goto B76631c;
case 0x76631d:c.instructions+=1;goto B76631d;
case 0x766323:goto L766323;
case 0x766328:c.instructions+=1;goto B766328;
case 0x76632b:goto L76632b;
case 0x76632e:goto L76632e;
case 0x766330:c.instructions+=1;goto B766330;
case 0x766332:goto L766332;
case 0x766335:c.instructions+=5;goto B766335;
case 0x766338:c.instructions+=4;goto B766338;
case 0x76633b:c.instructions+=3;goto B76633b;
case 0x76633d:c.instructions+=2;goto B76633d;
case 0x766340:c.instructions+=1;goto B766340;
case 0x766344:goto L766344;
case 0x766348:c.instructions+=1;goto B766348;
case 0x76634d:goto L76634d;
case 0x76634f:c.instructions+=1;goto B76634f;
case 0x766354:goto L766354;
case 0x766358:goto L766358;
case 0x76635a:c.instructions+=1;goto B76635a;
case 0x76635f:goto L76635f;
case 0x766360:c.instructions+=1;goto B766360;
case 0x766361:goto L766361;
case 0x766362:c.instructions+=7;goto B766362;
case 0x766364:c.instructions+=6;goto B766364;
case 0x766365:c.instructions+=5;goto B766365;
case 0x766368:c.instructions+=4;goto B766368;
case 0x76636b:c.instructions+=3;goto B76636b;
case 0x766371:c.instructions+=2;goto B766371;
case 0x766374:c.instructions+=1;goto B766374;
case 0x766376:goto L766376;
case 0x766379:c.instructions+=2;goto B766379;
case 0x76637d:c.instructions+=1;goto B76637d;
case 0x76637f:goto L76637f;
case 0x766380:c.instructions+=9;goto B766380;
case 0x766382:c.instructions+=8;goto B766382;
case 0x766385:c.instructions+=7;goto B766385;
case 0x766386:c.instructions+=6;goto B766386;
case 0x766389:c.instructions+=5;goto B766389;
case 0x76638c:c.instructions+=4;goto B76638c;
case 0x766391:c.instructions+=3;goto B766391;
case 0x766392:c.instructions+=2;goto B766392;
case 0x766393:c.instructions+=1;goto B766393;
case 0x766395:goto L766395;
case 0x766399:c.instructions+=5;goto B766399;
case 0x76639b:c.instructions+=4;goto B76639b;
case 0x76639e:c.instructions+=3;goto B76639e;
case 0x7663a1:c.instructions+=2;goto B7663a1;
case 0x7663a2:c.instructions+=1;goto B7663a2;
case 0x7663a4:goto L7663a4;
case 0x7663a8:c.instructions+=3;goto B7663a8;
case 0x7663ab:c.instructions+=2;goto B7663ab;
case 0x7663ad:c.instructions+=1;goto B7663ad;
case 0x7663ae:goto L7663ae;
case 0x7663b0:c.instructions+=9;goto B7663b0;
case 0x7663b3:c.instructions+=8;goto B7663b3;
case 0x7663b6:c.instructions+=7;goto B7663b6;
case 0x7663b9:c.instructions+=6;goto B7663b9;
case 0x7663ba:c.instructions+=5;goto B7663ba;
case 0x7663bb:c.instructions+=4;goto B7663bb;
case 0x7663be:c.instructions+=3;goto B7663be;
case 0x7663bf:c.instructions+=2;goto B7663bf;
case 0x7663c1:c.instructions+=1;goto B7663c1;
case 0x7663c6:goto L7663c6;
case 0x7663c9:c.instructions+=2;goto B7663c9;
case 0x7663cb:c.instructions+=1;goto B7663cb;
case 0x7663cd:goto L7663cd;
case 0x7663ce:c.instructions+=1;goto B7663ce;
case 0x7663cf:goto L7663cf;
case 0x7663d3:goto L7663d3;
case 0x7663d6:c.instructions+=2;goto B7663d6;
case 0x7663d7:c.instructions+=1;goto B7663d7;
case 0x7663d8:goto L7663d8;
case 0x7663d9:c.instructions+=10;goto B7663d9;
case 0x7663db:c.instructions+=9;goto B7663db;
case 0x7663dc:c.instructions+=8;goto B7663dc;
case 0x7663dd:c.instructions+=7;goto B7663dd;
case 0x7663de:c.instructions+=6;goto B7663de;
case 0x7663df:c.instructions+=5;goto B7663df;
case 0x7663e0:c.instructions+=4;goto B7663e0;
case 0x7663e2:c.instructions+=3;goto B7663e2;
case 0x7663e4:c.instructions+=2;goto B7663e4;
case 0x7663e7:c.instructions+=1;goto B7663e7;
case 0x7663ec:goto L7663ec;
case 0x7663f2:c.instructions+=5;goto B7663f2;
case 0x7663f9:c.instructions+=4;goto B7663f9;
case 0x766400:c.instructions+=3;goto B766400;
case 0x766406:c.instructions+=2;goto B766406;
case 0x76640d:c.instructions+=1;goto B76640d;
case 0x766412:goto L766412;
case 0x766414:c.instructions+=3;goto B766414;
case 0x766416:c.instructions+=2;goto B766416;
case 0x766417:c.instructions+=1;goto B766417;
case 0x76641d:goto L76641d;
case 0x76641f:c.instructions+=1;goto B76641f;
case 0x766425:goto L766425;
case 0x76642a:c.instructions+=2;goto B76642a;
case 0x76642c:c.instructions+=1;goto B76642c;
case 0x76642e:goto L76642e;
case 0x76642f:c.instructions+=2;goto B76642f;
case 0x766430:c.instructions+=1;goto B766430;
case 0x766435:goto L766435;
case 0x766437:c.instructions+=3;goto B766437;
case 0x766438:c.instructions+=2;goto B766438;
case 0x766439:c.instructions+=1;goto B766439;
case 0x76643b:goto L76643b;
case 0x76643d:c.instructions+=1;goto B76643d;
case 0x766442:goto L766442;
case 0x766443:c.instructions+=1;goto B766443;
case 0x766448:goto L766448;
case 0x76644d:c.instructions+=2;goto B76644d;
case 0x76644f:c.instructions+=1;goto B76644f;
case 0x766451:goto L766451;
case 0x766452:c.instructions+=1;goto B766452;
case 0x766457:goto L766457;
case 0x766458:goto L766458;
case 0x766459:c.instructions+=1;goto B766459;
case 0x76645e:goto L76645e;
case 0x76645f:c.instructions+=2;goto B76645f;
case 0x766460:c.instructions+=1;goto B766460;
case 0x766465:goto L766465;
case 0x766467:c.instructions+=4;goto B766467;
case 0x766468:c.instructions+=3;goto B766468;
case 0x766469:c.instructions+=2;goto B766469;
case 0x76646e:c.instructions+=1;goto B76646e;
case 0x766470:goto L766470;
case 0x766471:c.instructions+=2;goto B766471;
case 0x766472:c.instructions+=1;goto B766472;
case 0x766477:goto L766477;
case 0x766479:c.instructions+=1;goto B766479;
case 0x76647e:goto L76647e;
case 0x766480:c.instructions+=3;goto B766480;
case 0x766481:c.instructions+=2;goto B766481;
case 0x766487:c.instructions+=1;goto B766487;
case 0x76648c:goto L76648c;
case 0x766491:c.instructions+=5;goto B766491;
case 0x766494:c.instructions+=4;goto B766494;
case 0x766497:c.instructions+=3;goto B766497;
case 0x76649a:c.instructions+=2;goto B76649a;
case 0x76649d:c.instructions+=1;goto B76649d;
case 0x76649f:goto L76649f;
case 0x7664a6:c.instructions+=1;goto B7664a6;
case 0x7664a7:goto L7664a7;
case 0x7664a8:c.instructions+=1;goto B7664a8;
case 0x7664ad:goto L7664ad;
case 0x7664b3:c.instructions+=2;goto B7664b3;
case 0x7664b4:c.instructions+=1;goto B7664b4;
case 0x7664b9:goto L7664b9;
case 0x7664bb:c.instructions+=2;goto B7664bb;
case 0x7664bd:c.instructions+=1;goto B7664bd;
case 0x7664bf:goto L7664bf;
case 0x7664c1:c.instructions+=1;goto B7664c1;
case 0x7664c3:goto L7664c3;
case 0x7664c5:c.instructions+=1;goto B7664c5;
case 0x7664c7:goto L7664c7;
case 0x7664c8:c.instructions+=1;goto B7664c8;
case 0x7664ca:goto L7664ca;
case 0x7664cd:c.instructions+=1;goto B7664cd;
case 0x7664cf:goto L7664cf;
case 0x7664d0:c.instructions+=2;goto B7664d0;
case 0x7664d1:c.instructions+=1;goto B7664d1;
case 0x7664d6:goto L7664d6;
case 0x7664d9:c.instructions+=3;goto B7664d9;
case 0x7664df:c.instructions+=2;goto B7664df;
case 0x7664e0:c.instructions+=1;goto B7664e0;
case 0x7664e2:goto L7664e2;
case 0x7664e4:c.instructions+=1;goto B7664e4;
case 0x7664e6:goto L7664e6;
case 0x7664e7:goto L7664e7;
case 0x7664e9:c.instructions+=2;goto B7664e9;
case 0x7664eb:c.instructions+=1;goto B7664eb;
case 0x7664ed:goto L7664ed;
case 0x7664f0:c.instructions+=1;goto B7664f0;
case 0x7664f2:goto L7664f2;
case 0x7664f3:c.instructions+=2;goto B7664f3;
case 0x7664f4:c.instructions+=1;goto B7664f4;
case 0x7664f9:goto L7664f9;
case 0x7664ff:c.instructions+=2;goto B7664ff;
case 0x766500:c.instructions+=1;goto B766500;
case 0x766502:goto L766502;
case 0x766504:c.instructions+=1;goto B766504;
case 0x766506:goto L766506;
case 0x766507:goto L766507;
case 0x766509:c.instructions+=2;goto B766509;
case 0x76650b:c.instructions+=1;goto B76650b;
case 0x76650d:goto L76650d;
case 0x766510:c.instructions+=1;goto B766510;
case 0x766512:goto L766512;
case 0x766518:goto L766518;
case 0x76651b:c.instructions+=3;goto B76651b;
case 0x76651d:c.instructions+=2;goto B76651d;
case 0x766522:c.instructions+=1;goto B766522;
case 0x766528:goto L766528;
case 0x76652a:c.instructions+=3;goto B76652a;
case 0x76652b:c.instructions+=2;goto B76652b;
case 0x766531:c.instructions+=1;goto B766531;
case 0x766536:goto L766536;
case 0x76653b:c.instructions+=3;goto B76653b;
case 0x76653e:c.instructions+=2;goto B76653e;
case 0x766541:c.instructions+=1;goto B766541;
case 0x766546:goto L766546;
case 0x76654b:c.instructions+=2;goto B76654b;
case 0x76654d:c.instructions+=1;goto B76654d;
case 0x76654f:goto L76654f;
case 0x766550:c.instructions+=1;goto B766550;
case 0x766555:goto L766555;
case 0x766556:c.instructions+=1;goto B766556;
case 0x76655c:goto L76655c;
case 0x76655e:c.instructions+=1;goto B76655e;
case 0x766563:goto L766563;
case 0x76656a:c.instructions+=1;goto B76656a;
case 0x766570:goto L766570;
case 0x766573:c.instructions+=1;goto B766573;
case 0x766579:goto L766579;
case 0x76657e:c.instructions+=8;goto B76657e;
case 0x766584:c.instructions+=7;goto B766584;
case 0x766587:c.instructions+=6;goto B766587;
case 0x766589:c.instructions+=5;goto B766589;
case 0x76658a:c.instructions+=4;goto B76658a;
case 0x766591:c.instructions+=3;goto B766591;
case 0x766597:c.instructions+=2;goto B766597;
case 0x76659c:c.instructions+=1;goto B76659c;
case 0x76659e:goto L76659e;
case 0x7665a0:c.instructions+=3;goto B7665a0;
case 0x7665a3:c.instructions+=2;goto B7665a3;
case 0x7665a5:c.instructions+=1;goto B7665a5;
case 0x7665aa:goto L7665aa;
case 0x7665b1:c.instructions+=1;goto B7665b1;
case 0x7665b3:goto L7665b3;
case 0x7665b8:c.instructions+=2;goto B7665b8;
case 0x7665ba:c.instructions+=1;goto B7665ba;
case 0x7665bc:goto L7665bc;
case 0x7665be:c.instructions+=4;goto B7665be;
case 0x7665c1:c.instructions+=3;goto B7665c1;
case 0x7665c7:c.instructions+=2;goto B7665c7;
case 0x7665cc:c.instructions+=1;goto B7665cc;
case 0x7665ce:goto L7665ce;
case 0x7665d4:c.instructions+=1;goto B7665d4;
case 0x7665da:goto L7665da;
case 0x7665e0:c.instructions+=10;goto B7665e0;
case 0x7665e3:c.instructions+=9;goto B7665e3;
case 0x7665e4:c.instructions+=8;goto B7665e4;
case 0x7665e5:c.instructions+=7;goto B7665e5;
case 0x7665e7:c.instructions+=6;goto B7665e7;
case 0x7665ed:c.instructions+=5;goto B7665ed;
case 0x7665ef:c.instructions+=4;goto B7665ef;
case 0x7665f4:c.instructions+=3;goto B7665f4;
case 0x7665f5:c.instructions+=2;goto B7665f5;
case 0x7665f6:c.instructions+=1;goto B7665f6;
case 0x7665f8:goto L7665f8;
case 0x7665fa:c.instructions+=1;goto B7665fa;
case 0x7665fc:goto L7665fc;
case 0x7665ff:c.instructions+=1;goto B7665ff;
case 0x766601:goto L766601;
case 0x766606:c.instructions+=2;goto B766606;
case 0x766609:c.instructions+=1;goto B766609;
case 0x76660b:goto L76660b;
case 0x766610:c.instructions+=1;goto B766610;
case 0x766612:goto L766612;
case 0x766615:c.instructions+=9;goto B766615;
case 0x766616:c.instructions+=8;goto B766616;
case 0x766617:c.instructions+=7;goto B766617;
case 0x766619:c.instructions+=6;goto B766619;
case 0x76661f:c.instructions+=5;goto B76661f;
case 0x766621:c.instructions+=4;goto B766621;
case 0x766626:c.instructions+=3;goto B766626;
case 0x766627:c.instructions+=2;goto B766627;
case 0x766628:c.instructions+=1;goto B766628;
case 0x76662a:goto L76662a;
case 0x76662c:c.instructions+=1;goto B76662c;
case 0x76662e:goto L76662e;
case 0x766631:c.instructions+=1;goto B766631;
case 0x766633:goto L766633;
case 0x766638:c.instructions+=2;goto B766638;
case 0x76663b:c.instructions+=1;goto B76663b;
case 0x76663d:goto L76663d;
case 0x766642:c.instructions+=1;goto B766642;
case 0x766644:goto L766644;
case 0x766645:c.instructions+=4;goto B766645;
case 0x766646:c.instructions+=3;goto B766646;
case 0x766647:c.instructions+=2;goto B766647;
case 0x766648:c.instructions+=1;goto B766648;
case 0x766649:goto L766649;
case 0x76664a:c.instructions+=15;goto B76664a;
case 0x76664c:c.instructions+=14;goto B76664c;
case 0x76664d:c.instructions+=13;goto B76664d;
case 0x76664e:c.instructions+=12;goto B76664e;
case 0x76664f:c.instructions+=11;goto B76664f;
case 0x766650:c.instructions+=10;goto B766650;
case 0x766651:c.instructions+=9;goto B766651;
case 0x766654:c.instructions+=8;goto B766654;
case 0x766656:c.instructions+=7;goto B766656;
case 0x766658:c.instructions+=6;goto B766658;
case 0x76665a:c.instructions+=5;goto B76665a;
case 0x76665b:c.instructions+=4;goto B76665b;
case 0x76665c:c.instructions+=3;goto B76665c;
case 0x76665e:c.instructions+=2;goto B76665e;
case 0x766662:c.instructions+=1;goto B766662;
case 0x766668:goto L766668;
case 0x76666a:c.instructions+=2;goto B76666a;
case 0x76666d:c.instructions+=1;goto B76666d;
case 0x76666f:goto L76666f;
case 0x766671:c.instructions+=6;goto B766671;
case 0x766673:c.instructions+=5;goto B766673;
case 0x766674:c.instructions+=4;goto B766674;
case 0x766675:c.instructions+=3;goto B766675;
case 0x766677:c.instructions+=2;goto B766677;
case 0x766679:c.instructions+=1;goto B766679;
case 0x76667b:goto L76667b;
case 0x766681:c.instructions+=5;goto B766681;
case 0x766682:c.instructions+=4;goto B766682;
case 0x766687:c.instructions+=3;goto B766687;
case 0x766689:c.instructions+=2;goto B766689;
case 0x76668b:c.instructions+=1;goto B76668b;
case 0x76668d:goto L76668d;
case 0x76668f:c.instructions+=3;goto B76668f;
case 0x766692:c.instructions+=2;goto B766692;
case 0x766698:c.instructions+=1;goto B766698;
case 0x76669a:goto L76669a;
case 0x76669c:c.instructions+=2;goto B76669c;
case 0x76669f:c.instructions+=1;goto B76669f;
case 0x7666a5:goto L7666a5;
case 0x7666a8:c.instructions+=37;goto B7666a8;
case 0x7666ae:c.instructions+=36;goto B7666ae;
case 0x7666af:c.instructions+=35;goto B7666af;
case 0x7666b2:c.instructions+=34;goto B7666b2;
case 0x7666b7:c.instructions+=33;goto B7666b7;
case 0x7666b9:c.instructions+=32;goto B7666b9;
case 0x7666bb:c.instructions+=31;goto B7666bb;
case 0x7666bc:c.instructions+=30;goto B7666bc;
case 0x7666bd:c.instructions+=29;goto B7666bd;
case 0x7666bf:c.instructions+=28;goto B7666bf;
case 0x7666c2:c.instructions+=27;goto B7666c2;
case 0x7666c4:c.instructions+=26;goto B7666c4;
case 0x7666c5:c.instructions+=25;goto B7666c5;
case 0x7666c7:c.instructions+=24;goto B7666c7;
case 0x7666ca:c.instructions+=23;goto B7666ca;
case 0x7666cb:c.instructions+=22;goto B7666cb;
case 0x7666cd:c.instructions+=21;goto B7666cd;
case 0x7666cf:c.instructions+=20;goto B7666cf;
case 0x7666d2:c.instructions+=19;goto B7666d2;
case 0x7666d3:c.instructions+=18;goto B7666d3;
case 0x7666d5:c.instructions+=17;goto B7666d5;
case 0x7666d6:c.instructions+=16;goto B7666d6;
case 0x7666d8:c.instructions+=15;goto B7666d8;
case 0x7666db:c.instructions+=14;goto B7666db;
case 0x7666dd:c.instructions+=13;goto B7666dd;
case 0x7666e3:c.instructions+=12;goto B7666e3;
case 0x7666e5:c.instructions+=11;goto B7666e5;
case 0x7666e7:c.instructions+=10;goto B7666e7;
case 0x7666ee:c.instructions+=9;goto B7666ee;
case 0x7666ef:c.instructions+=8;goto B7666ef;
case 0x7666f0:c.instructions+=7;goto B7666f0;
case 0x7666f2:c.instructions+=6;goto B7666f2;
case 0x7666f5:c.instructions+=5;goto B7666f5;
case 0x7666f8:c.instructions+=4;goto B7666f8;
case 0x7666fa:c.instructions+=3;goto B7666fa;
case 0x7666fd:c.instructions+=2;goto B7666fd;
case 0x766700:c.instructions+=1;goto B766700;
case 0x766702:goto L766702;
case 0x766706:c.instructions+=1;goto B766706;
case 0x766708:goto L766708;
case 0x76670a:goto L76670a;
case 0x76670e:c.instructions+=1;goto B76670e;
case 0x766710:goto L766710;
case 0x766714:c.instructions+=1;goto B766714;
case 0x766716:goto L766716;
case 0x766718:c.instructions+=6;goto B766718;
case 0x76671a:c.instructions+=5;goto B76671a;
case 0x76671b:c.instructions+=4;goto B76671b;
case 0x76671c:c.instructions+=3;goto B76671c;
case 0x76671e:c.instructions+=2;goto B76671e;
case 0x766720:c.instructions+=1;goto B766720;
case 0x766722:goto L766722;
case 0x766728:c.instructions+=5;goto B766728;
case 0x766729:c.instructions+=4;goto B766729;
case 0x76672e:c.instructions+=3;goto B76672e;
case 0x766730:c.instructions+=2;goto B766730;
case 0x766732:c.instructions+=1;goto B766732;
case 0x766734:goto L766734;
case 0x766737:c.instructions+=2;goto B766737;
case 0x76673d:c.instructions+=1;goto B76673d;
case 0x76673f:goto L76673f;
case 0x766742:c.instructions+=1;goto B766742;
case 0x766748:goto L766748;
case 0x76674a:c.instructions+=1;goto B76674a;
case 0x76674c:goto L76674c;
case 0x76674f:c.instructions+=1;goto B76674f;
case 0x766751:goto L766751;
case 0x766753:c.instructions+=1;goto B766753;
case 0x766755:goto L766755;
case 0x766757:c.instructions+=6;goto B766757;
case 0x766759:c.instructions+=5;goto B766759;
case 0x76675a:c.instructions+=4;goto B76675a;
case 0x76675b:c.instructions+=3;goto B76675b;
case 0x76675d:c.instructions+=2;goto B76675d;
case 0x76675f:c.instructions+=1;goto B76675f;
case 0x766761:goto L766761;
case 0x766767:c.instructions+=5;goto B766767;
case 0x766768:c.instructions+=4;goto B766768;
case 0x76676d:c.instructions+=3;goto B76676d;
case 0x76676f:c.instructions+=2;goto B76676f;
case 0x766771:c.instructions+=1;goto B766771;
case 0x766773:goto L766773;
case 0x76677a:c.instructions+=1;goto B76677a;
case 0x76677c:goto L76677c;
case 0x766783:goto L766783;
case 0x766786:goto L766786;
case 0x766789:c.instructions+=4;goto B766789;
case 0x76678c:c.instructions+=3;goto B76678c;
case 0x76678f:c.instructions+=2;goto B76678f;
case 0x766793:c.instructions+=1;goto B766793;
case 0x766795:goto L766795;
case 0x766798:c.instructions+=6;goto B766798;
case 0x76679e:c.instructions+=5;goto B76679e;
case 0x7667a4:c.instructions+=4;goto B7667a4;
case 0x7667a7:c.instructions+=3;goto B7667a7;
case 0x7667ad:c.instructions+=2;goto B7667ad;
case 0x7667b3:c.instructions+=1;goto B7667b3;
case 0x7667b5:goto L7667b5;
case 0x7667bb:c.instructions+=6;goto B7667bb;
case 0x7667c1:c.instructions+=5;goto B7667c1;
case 0x7667c4:c.instructions+=4;goto B7667c4;
case 0x7667ca:c.instructions+=3;goto B7667ca;
case 0x7667cd:c.instructions+=2;goto B7667cd;
case 0x7667d3:c.instructions+=1;goto B7667d3;
case 0x7667d5:goto L7667d5;
case 0x7667db:c.instructions+=2;goto B7667db;
case 0x7667dc:c.instructions+=1;goto B7667dc;
case 0x7667de:goto L7667de;
case 0x7667e3:c.instructions+=2;goto B7667e3;
case 0x7667e5:c.instructions+=1;goto B7667e5;
case 0x7667e7:goto L7667e7;
case 0x7667e9:c.instructions+=1;goto B7667e9;
case 0x7667ea:goto L7667ea;
case 0x7667f0:c.instructions+=1;goto B7667f0;
case 0x7667f6:goto L7667f6;
case 0x7667fc:goto L7667fc;
case 0x7667fd:c.instructions+=4;goto B7667fd;
case 0x7667fe:c.instructions+=3;goto B7667fe;
case 0x7667ff:c.instructions+=2;goto B7667ff;
case 0x766800:c.instructions+=1;goto B766800;
case 0x766801:goto L766801;
case 0x766802:c.instructions+=3;goto B766802;
case 0x766804:c.instructions+=2;goto B766804;
case 0x76680a:c.instructions+=1;goto B76680a;
case 0x76680c:goto L76680c;
case 0x76680e:c.instructions+=2;goto B76680e;
case 0x76680f:c.instructions+=1;goto B76680f;
case 0x766810:goto L766810;
case 0x766813:c.instructions+=5;goto B766813;
case 0x766814:c.instructions+=4;goto B766814;
case 0x766816:c.instructions+=3;goto B766816;
case 0x766817:c.instructions+=2;goto B766817;
case 0x76681d:c.instructions+=1;goto B76681d;
case 0x76681f:goto L76681f;
case 0x766825:c.instructions+=1;goto B766825;
case 0x76682b:goto L76682b;
case 0x766831:c.instructions+=1;goto B766831;
case 0x766837:goto L766837;
case 0x76683e:c.instructions+=8;goto B76683e;
case 0x766845:c.instructions+=7;goto B766845;
case 0x76684c:c.instructions+=6;goto B76684c;
case 0x76684d:c.instructions+=5;goto B76684d;
case 0x766854:c.instructions+=4;goto B766854;
case 0x766855:c.instructions+=3;goto B766855;
case 0x76685c:c.instructions+=2;goto B76685c;
case 0x76685d:c.instructions+=1;goto B76685d;
case 0x76685f:goto L76685f;
case 0x766866:c.instructions+=7;goto B766866;
case 0x766867:c.instructions+=6;goto B766867;
case 0x766868:c.instructions+=5;goto B766868;
case 0x76686f:c.instructions+=4;goto B76686f;
case 0x766870:c.instructions+=3;goto B766870;
case 0x766871:c.instructions+=2;goto B766871;
case 0x766872:c.instructions+=1;goto B766872;
case 0x766874:goto L766874;
case 0x76687b:c.instructions+=5;goto B76687b;
case 0x76687c:c.instructions+=4;goto B76687c;
case 0x76687d:c.instructions+=3;goto B76687d;
case 0x76687e:c.instructions+=2;goto B76687e;
case 0x76687f:c.instructions+=1;goto B76687f;
case 0x766880:goto L766880;
case 0x766887:c.instructions+=2;goto B766887;
case 0x766888:c.instructions+=1;goto B766888;
case 0x76688d:goto L76688d;
case 0x766894:c.instructions+=9;goto B766894;
case 0x76689b:c.instructions+=8;goto B76689b;
case 0x76689e:c.instructions+=7;goto B76689e;
case 0x7668a5:c.instructions+=6;goto B7668a5;
case 0x7668a6:c.instructions+=5;goto B7668a6;
case 0x7668ad:c.instructions+=4;goto B7668ad;
case 0x7668ae:c.instructions+=3;goto B7668ae;
case 0x7668b5:c.instructions+=2;goto B7668b5;
case 0x7668b6:c.instructions+=1;goto B7668b6;
case 0x7668b8:goto L7668b8;
case 0x7668bf:c.instructions+=6;goto B7668bf;
case 0x7668c0:c.instructions+=5;goto B7668c0;
case 0x7668c1:c.instructions+=4;goto B7668c1;
case 0x7668c8:c.instructions+=3;goto B7668c8;
case 0x7668c9:c.instructions+=2;goto B7668c9;
case 0x7668cc:c.instructions+=1;goto B7668cc;
case 0x7668cd:goto L7668cd;
case 0x7668d4:c.instructions+=2;goto B7668d4;
case 0x7668d5:c.instructions+=1;goto B7668d5;
case 0x7668da:goto L7668da;
case 0x7668dd:c.instructions+=1;goto B7668dd;
case 0x7668df:goto L7668df;
case 0x7668e6:c.instructions+=6;goto B7668e6;
case 0x7668e7:c.instructions+=5;goto B7668e7;
case 0x7668e8:c.instructions+=4;goto B7668e8;
case 0x7668e9:c.instructions+=3;goto B7668e9;
case 0x7668ec:c.instructions+=2;goto B7668ec;
case 0x7668ed:c.instructions+=1;goto B7668ed;
case 0x7668ef:goto L7668ef;
case 0x7668f0:c.instructions+=13;goto B7668f0;
case 0x7668f1:c.instructions+=12;goto B7668f1;
case 0x7668f2:c.instructions+=11;goto B7668f2;
case 0x7668f3:c.instructions+=10;goto B7668f3;
case 0x7668f4:c.instructions+=9;goto B7668f4;
case 0x7668f5:c.instructions+=8;goto B7668f5;
case 0x7668f6:c.instructions+=7;goto B7668f6;
case 0x7668f7:c.instructions+=6;goto B7668f7;
case 0x7668f8:c.instructions+=5;goto B7668f8;
case 0x7668fa:c.instructions+=4;goto B7668fa;
case 0x7668fb:c.instructions+=3;goto B7668fb;
case 0x7668fd:c.instructions+=2;goto B7668fd;
case 0x7668fe:c.instructions+=1;goto B7668fe;
case 0x766903:goto L766903;
case 0x766904:c.instructions+=13;goto B766904;
case 0x766905:c.instructions+=12;goto B766905;
case 0x766906:c.instructions+=11;goto B766906;
case 0x766907:c.instructions+=10;goto B766907;
case 0x766908:c.instructions+=9;goto B766908;
case 0x76690a:c.instructions+=8;goto B76690a;
case 0x76690d:c.instructions+=7;goto B76690d;
case 0x76690e:c.instructions+=6;goto B76690e;
case 0x76690f:c.instructions+=5;goto B76690f;
case 0x766911:c.instructions+=4;goto B766911;
case 0x766912:c.instructions+=3;goto B766912;
case 0x766914:c.instructions+=2;goto B766914;
case 0x766915:c.instructions+=1;goto B766915;
case 0x76691a:goto L76691a;
case 0x76691d:goto L76691d;
case 0x766923:c.instructions+=4;goto B766923;
case 0x766928:c.instructions+=3;goto B766928;
case 0x76692a:c.instructions+=2;goto B76692a;
case 0x76692d:c.instructions+=1;goto B76692d;
case 0x76692f:goto L76692f;
case 0x766931:c.instructions+=1;goto B766931;
case 0x766933:goto L766933;
case 0x766935:c.instructions+=1;goto B766935;
case 0x766937:goto L766937;
case 0x766939:c.instructions+=1;goto B766939;
case 0x76693b:goto L76693b;
case 0x76693d:c.instructions+=1;goto B76693d;
case 0x76693f:goto L76693f;
case 0x766941:goto L766941;
case 0x766942:c.instructions+=2;goto B766942;
case 0x766943:c.instructions+=1;goto B766943;
case 0x766944:goto L766944;
case 0x766946:c.instructions+=1;goto B766946;
case 0x766948:goto L766948;
case 0x76694a:c.instructions+=1;goto B76694a;
case 0x76694c:goto L76694c;
case 0x76694e:c.instructions+=1;goto B76694e;
case 0x766950:goto L766950;
case 0x766952:c.instructions+=1;goto B766952;
case 0x766954:goto L766954;
case 0x766956:c.instructions+=1;goto B766956;
case 0x766958:goto L766958;
case 0x76695b:c.instructions+=7;goto B76695b;
case 0x76695e:c.instructions+=6;goto B76695e;
case 0x766961:c.instructions+=5;goto B766961;
case 0x766964:c.instructions+=4;goto B766964;
case 0x766966:c.instructions+=3;goto B766966;
case 0x76696c:c.instructions+=2;goto B76696c;
case 0x76696e:c.instructions+=1;goto B76696e;
case 0x766970:goto L766970;
case 0x766972:c.instructions+=2;goto B766972;
case 0x766978:c.instructions+=1;goto B766978;
case 0x76697b:goto L76697b;
case 0x76697d:c.instructions+=1;goto B76697d;
case 0x76697f:goto L76697f;
case 0x766981:c.instructions+=3;goto B766981;
case 0x766987:c.instructions+=2;goto B766987;
case 0x76698a:c.instructions+=1;goto B76698a;
case 0x76698c:goto L76698c;
case 0x766993:c.instructions+=1;goto B766993;
case 0x766995:goto L766995;
case 0x766997:c.instructions+=1;goto B766997;
case 0x76699c:goto L76699c;
case 0x7669a3:c.instructions+=2;goto B7669a3;
case 0x7669a4:c.instructions+=1;goto B7669a4;
case 0x7669a6:goto L7669a6;
case 0x7669ab:goto L7669ab;
case 0x7669b1:goto L7669b1;
case 0x7669b3:c.instructions+=1;goto B7669b3;
case 0x7669b8:goto L7669b8;
case 0x7669b9:goto L7669b9;
case 0x7669ba:goto L7669ba;
case 0x7669bb:c.instructions+=2;goto B7669bb;
case 0x7669bd:c.instructions+=1;goto B7669bd;
case 0x7669c2:goto L7669c2;
case 0x7669c6:c.instructions+=1;goto B7669c6;
case 0x7669cb:goto L7669cb;
case 0x7669cd:c.instructions+=2;goto B7669cd;
case 0x7669cf:c.instructions+=1;goto B7669cf;
case 0x7669d4:goto L7669d4;
case 0x7669d5:c.instructions+=4;goto B7669d5;
case 0x7669d6:c.instructions+=3;goto B7669d6;
case 0x7669d8:c.instructions+=2;goto B7669d8;
case 0x7669d9:c.instructions+=1;goto B7669d9;
case 0x7669e0:goto L7669e0;
case 0x7669e1:c.instructions+=3;goto B7669e1;
case 0x7669e5:c.instructions+=2;goto B7669e5;
case 0x7669e7:c.instructions+=1;goto B7669e7;
case 0x7669e9:goto L7669e9;
case 0x7669ed:c.instructions+=8;goto B7669ed;
case 0x7669f1:c.instructions+=7;goto B7669f1;
case 0x7669f3:c.instructions+=6;goto B7669f3;
case 0x7669f5:c.instructions+=5;goto B7669f5;
case 0x7669f9:c.instructions+=4;goto B7669f9;
case 0x7669fb:c.instructions+=3;goto B7669fb;
case 0x7669fd:c.instructions+=2;goto B7669fd;
case 0x7669ff:c.instructions+=1;goto B7669ff;
case 0x766a01:goto L766a01;
case 0x766a03:c.instructions+=3;goto B766a03;
case 0x766a07:c.instructions+=2;goto B766a07;
case 0x766a0b:c.instructions+=1;goto B766a0b;
case 0x766a0f:goto L766a0f;
case 0x766a11:c.instructions+=5;goto B766a11;
case 0x766a13:c.instructions+=4;goto B766a13;
case 0x766a15:c.instructions+=3;goto B766a15;
case 0x766a17:c.instructions+=2;goto B766a17;
case 0x766a19:c.instructions+=1;goto B766a19;
case 0x766a1b:goto L766a1b;
case 0x766a1d:c.instructions+=6;goto B766a1d;
case 0x766a1f:c.instructions+=5;goto B766a1f;
case 0x766a23:c.instructions+=4;goto B766a23;
case 0x766a24:c.instructions+=3;goto B766a24;
case 0x766a28:c.instructions+=2;goto B766a28;
case 0x766a2a:c.instructions+=1;goto B766a2a;
case 0x766a2c:goto L766a2c;
case 0x766a30:c.instructions+=1;goto B766a30;
case 0x766a32:goto L766a32;
case 0x766a34:goto L766a34;
case 0x766a38:c.instructions+=1;goto B766a38;
case 0x766a3a:goto L766a3a;
case 0x766a3e:c.instructions+=1;goto B766a3e;
case 0x766a42:goto L766a42;
case 0x766a46:c.instructions+=4;goto B766a46;
case 0x766a4a:c.instructions+=3;goto B766a4a;
case 0x766a4c:c.instructions+=2;goto B766a4c;
case 0x766a4e:c.instructions+=1;goto B766a4e;
case 0x766a51:goto L766a51;
case 0x766a52:c.instructions+=1;goto B766a52;
case 0x766a55:goto L766a55;
case 0x766a56:c.instructions+=4;goto B766a56;
case 0x766a5a:c.instructions+=3;goto B766a5a;
case 0x766a5c:c.instructions+=2;goto B766a5c;
case 0x766a62:c.instructions+=1;goto B766a62;
case 0x766a64:goto L766a64;
case 0x766a68:c.instructions+=1;goto B766a68;
case 0x766a6a:goto L766a6a;
case 0x766a71:c.instructions+=1;goto B766a71;
case 0x766a73:goto L766a73;
case 0x766a78:goto L766a78;
case 0x766a7d:c.instructions+=2;goto B766a7d;
case 0x766a7f:c.instructions+=1;goto B766a7f;
case 0x766a81:goto L766a81;
case 0x766a82:c.instructions+=1;goto B766a82;
case 0x766a87:goto L766a87;
case 0x766a89:c.instructions+=2;goto B766a89;
case 0x766a8a:c.instructions+=1;goto B766a8a;
case 0x766a8c:goto L766a8c;
case 0x766a8d:c.instructions+=1;goto B766a8d;
case 0x766a93:goto L766a93;
case 0x766a95:goto L766a95;
case 0x766a97:goto L766a97;
case 0x766a98:c.instructions+=1;goto B766a98;
case 0x766a9b:goto L766a9b;
case 0x766aa0:c.instructions+=1;goto B766aa0;
case 0x766aa6:goto L766aa6;
case 0x766aab:c.instructions+=2;goto B766aab;
case 0x766aad:c.instructions+=1;goto B766aad;
case 0x766aae:goto L766aae;
case 0x766ab4:c.instructions+=1;goto B766ab4;
case 0x766aba:goto L766aba;
case 0x766ac0:goto L766ac0;
case 0x766ac1:c.instructions+=2;goto B766ac1;
case 0x766ac5:c.instructions+=1;goto B766ac5;
case 0x766ad0:goto L766ad0;
case 0x766ad4:c.instructions+=3;goto B766ad4;
case 0x766ad5:c.instructions+=2;goto B766ad5;
case 0x766adb:c.instructions+=1;goto B766adb;
case 0x766add:goto L766add;
case 0x766adf:c.instructions+=3;goto B766adf;
case 0x766ae2:c.instructions+=2;goto B766ae2;
case 0x766ae4:c.instructions+=1;goto B766ae4;
case 0x766ae6:goto L766ae6;
case 0x766aec:c.instructions+=1;goto B766aec;
case 0x766aee:goto L766aee;
case 0x766af0:goto L766af0;
case 0x766af2:c.instructions+=7;goto B766af2;
case 0x766af7:c.instructions+=6;goto B766af7;
case 0x766af9:c.instructions+=5;goto B766af9;
case 0x766afc:c.instructions+=4;goto B766afc;
case 0x766afe:c.instructions+=3;goto B766afe;
case 0x766b01:c.instructions+=2;goto B766b01;
case 0x766b06:c.instructions+=1;goto B766b06;
case 0x766b08:goto L766b08;
case 0x766b0b:c.instructions+=2;goto B766b0b;
case 0x766b0d:c.instructions+=1;goto B766b0d;
case 0x766b0f:goto L766b0f;
case 0x766b11:c.instructions+=1;goto B766b11;
case 0x766b13:goto L766b13;
case 0x766b18:c.instructions+=1;goto B766b18;
case 0x766b1a:goto L766b1a;
case 0x766b1f:c.instructions+=1;goto B766b1f;
case 0x766b21:goto L766b21;
case 0x766b23:goto L766b23;
case 0x766b26:c.instructions+=1;goto B766b26;
case 0x766b28:goto L766b28;
case 0x766b2b:c.instructions+=1;goto B766b2b;
case 0x766b2d:goto L766b2d;
case 0x766b30:c.instructions+=1;goto B766b30;
case 0x766b32:goto L766b32;
case 0x766b35:goto L766b35;
case 0x766b39:c.instructions+=2;goto B766b39;
case 0x766b3f:c.instructions+=1;goto B766b3f;
case 0x766b41:goto L766b41;
case 0x766b43:c.instructions+=3;goto B766b43;
case 0x766b46:c.instructions+=2;goto B766b46;
case 0x766b48:c.instructions+=1;goto B766b48;
case 0x766b4a:goto L766b4a;
case 0x766b4c:c.instructions+=3;goto B766b4c;
case 0x766b4f:c.instructions+=2;goto B766b4f;
case 0x766b55:c.instructions+=1;goto B766b55;
case 0x766b57:goto L766b57;
case 0x766b59:goto L766b59;
case 0x766b5b:c.instructions+=1;goto B766b5b;
case 0x766b5e:goto L766b5e;
case 0x766b63:c.instructions+=8;goto B766b63;
case 0x766b65:c.instructions+=7;goto B766b65;
case 0x766b67:c.instructions+=6;goto B766b67;
case 0x766b6a:c.instructions+=5;goto B766b6a;
case 0x766b6c:c.instructions+=4;goto B766b6c;
case 0x766b6e:c.instructions+=3;goto B766b6e;
case 0x766b71:c.instructions+=2;goto B766b71;
case 0x766b76:c.instructions+=1;goto B766b76;
case 0x766b78:goto L766b78;
case 0x766b7a:c.instructions+=1;goto B766b7a;
case 0x766b7c:goto L766b7c;
case 0x766b7e:c.instructions+=1;goto B766b7e;
case 0x766b80:goto L766b80;
case 0x766b86:c.instructions+=1;goto B766b86;
case 0x766b88:goto L766b88;
case 0x766b8e:c.instructions+=1;goto B766b8e;
case 0x766b90:goto L766b90;
case 0x766b92:goto L766b92;
case 0x766b94:c.instructions+=3;goto B766b94;
case 0x766b98:c.instructions+=2;goto B766b98;
case 0x766b99:c.instructions+=1;goto B766b99;
case 0x766b9a:goto L766b9a;
case 0x766b9d:c.instructions+=4;goto B766b9d;
case 0x766ba1:c.instructions+=3;goto B766ba1;
case 0x766ba5:c.instructions+=2;goto B766ba5;
case 0x766ba6:c.instructions+=1;goto B766ba6;
case 0x766ba7:goto L766ba7;
case 0x766baa:c.instructions+=3;goto B766baa;
case 0x766bae:c.instructions+=2;goto B766bae;
case 0x766baf:c.instructions+=1;goto B766baf;
case 0x766bb0:goto L766bb0;
case 0x766bb2:c.instructions+=3;goto B766bb2;
case 0x766bb6:c.instructions+=2;goto B766bb6;
case 0x766bb7:c.instructions+=1;goto B766bb7;
case 0x766bc0:goto L766bc0;
case 0x766bc4:c.instructions+=2;goto B766bc4;
case 0x766bca:c.instructions+=1;goto B766bca;
case 0x766bcc:goto L766bcc;
case 0x766bce:c.instructions+=3;goto B766bce;
case 0x766bd1:c.instructions+=2;goto B766bd1;
case 0x766bd3:c.instructions+=1;goto B766bd3;
case 0x766bd5:goto L766bd5;
case 0x766bdb:c.instructions+=1;goto B766bdb;
case 0x766bdd:goto L766bdd;
case 0x766be2:c.instructions+=2;goto B766be2;
case 0x766be9:c.instructions+=1;goto B766be9;
case 0x766bf0:goto L766bf0;
case 0x766bf2:c.instructions+=7;goto B766bf2;
case 0x766bf7:c.instructions+=6;goto B766bf7;
case 0x766bf9:c.instructions+=5;goto B766bf9;
case 0x766bfc:c.instructions+=4;goto B766bfc;
case 0x766bfe:c.instructions+=3;goto B766bfe;
case 0x766c01:c.instructions+=2;goto B766c01;
case 0x766c06:c.instructions+=1;goto B766c06;
case 0x766c08:goto L766c08;
case 0x766c0b:c.instructions+=2;goto B766c0b;
case 0x766c0d:c.instructions+=1;goto B766c0d;
case 0x766c0f:goto L766c0f;
case 0x766c11:c.instructions+=1;goto B766c11;
case 0x766c13:goto L766c13;
case 0x766c18:c.instructions+=1;goto B766c18;
case 0x766c1a:goto L766c1a;
case 0x766c1f:c.instructions+=1;goto B766c1f;
case 0x766c21:goto L766c21;
case 0x766c23:goto L766c23;
case 0x766c26:c.instructions+=3;goto B766c26;
case 0x766c2a:c.instructions+=2;goto B766c2a;
case 0x766c2c:c.instructions+=1;goto B766c2c;
case 0x766c2d:goto L766c2d;
case 0x766c30:c.instructions+=3;goto B766c30;
case 0x766c34:c.instructions+=2;goto B766c34;
case 0x766c36:c.instructions+=1;goto B766c36;
case 0x766c37:goto L766c37;
case 0x766c3a:c.instructions+=3;goto B766c3a;
case 0x766c3e:c.instructions+=2;goto B766c3e;
case 0x766c40:c.instructions+=1;goto B766c40;
case 0x766c41:goto L766c41;
case 0x766c44:c.instructions+=3;goto B766c44;
case 0x766c48:c.instructions+=2;goto B766c48;
case 0x766c4a:c.instructions+=1;goto B766c4a;
case 0x766c50:goto L766c50;
case 0x766c54:c.instructions+=3;goto B766c54;
case 0x766c58:c.instructions+=2;goto B766c58;
case 0x766c5e:c.instructions+=1;goto B766c5e;
case 0x766c60:goto L766c60;
case 0x766c62:c.instructions+=2;goto B766c62;
case 0x766c64:c.instructions+=1;goto B766c64;
case 0x766c66:goto L766c66;
case 0x766c68:c.instructions+=1;goto B766c68;
case 0x766c6a:goto L766c6a;
case 0x766c6d:c.instructions+=1;goto B766c6d;
case 0x766c6f:goto L766c6f;
case 0x766c71:c.instructions+=1;goto B766c71;
case 0x766c73:goto L766c73;
case 0x766c76:c.instructions+=2;goto B766c76;
case 0x766c79:c.instructions+=1;goto B766c79;
case 0x766c7b:goto L766c7b;
case 0x766c7d:c.instructions+=1;goto B766c7d;
case 0x766c7f:goto L766c7f;
case 0x766c82:c.instructions+=1;goto B766c82;
case 0x766c84:goto L766c84;
case 0x766c87:c.instructions+=3;goto B766c87;
case 0x766c8a:c.instructions+=2;goto B766c8a;
case 0x766c8c:c.instructions+=1;goto B766c8c;
case 0x766c8e:goto L766c8e;
case 0x766c90:goto L766c90;
case 0x766c92:c.instructions+=1;goto B766c92;
case 0x766c94:goto L766c94;
case 0x766c96:c.instructions+=3;goto B766c96;
case 0x766c98:c.instructions+=2;goto B766c98;
case 0x766c9b:c.instructions+=1;goto B766c9b;
case 0x766c9c:goto L766c9c;
case 0x766ca2:c.instructions+=1;goto B766ca2;
case 0x766ca4:goto L766ca4;
case 0x766ca6:c.instructions+=3;goto B766ca6;
case 0x766ca9:c.instructions+=2;goto B766ca9;
case 0x766cab:c.instructions+=1;goto B766cab;
case 0x766cad:goto L766cad;
case 0x766cb0:c.instructions+=2;goto B766cb0;
case 0x766cb2:c.instructions+=1;goto B766cb2;
case 0x766cb4:goto L766cb4;
case 0x766cba:c.instructions+=1;goto B766cba;
case 0x766cbc:goto L766cbc;
case 0x766cbf:c.instructions+=3;goto B766cbf;
case 0x766cc2:c.instructions+=2;goto B766cc2;
case 0x766cc4:c.instructions+=1;goto B766cc4;
case 0x766cc6:goto L766cc6;
case 0x766cc8:c.instructions+=1;goto B766cc8;
case 0x766cca:goto L766cca;
case 0x766ccd:c.instructions+=1;goto B766ccd;
case 0x766ccf:goto L766ccf;
case 0x766cd1:c.instructions+=1;goto B766cd1;
case 0x766cd3:goto L766cd3;
case 0x766cd6:c.instructions+=1;goto B766cd6;
case 0x766cd8:goto L766cd8;
case 0x766cde:c.instructions+=2;goto B766cde;
case 0x766ce0:c.instructions+=1;goto B766ce0;
case 0x766ce1:goto L766ce1;
case 0x766ce4:c.instructions+=1;goto B766ce4;
case 0x766ce6:goto L766ce6;
case 0x766ce9:c.instructions+=4;goto B766ce9;
case 0x766cec:c.instructions+=3;goto B766cec;
case 0x766cef:c.instructions+=2;goto B766cef;
case 0x766cf1:c.instructions+=1;goto B766cf1;
case 0x766cf3:goto L766cf3;
case 0x766cf6:c.instructions+=4;goto B766cf6;
case 0x766cf9:c.instructions+=3;goto B766cf9;
case 0x766cfb:c.instructions+=2;goto B766cfb;
case 0x766cfc:c.instructions+=1;goto B766cfc;
case 0x766cfe:goto L766cfe;
case 0x766d01:c.instructions+=1;goto B766d01;
case 0x766d03:goto L766d03;
case 0x766d05:goto L766d05;
case 0x766d06:goto L766d06;
case 0x766d08:c.instructions+=2;goto B766d08;
case 0x766d0d:c.instructions+=1;goto B766d0d;
case 0x766d12:goto L766d12;
case 0x766d14:c.instructions+=5;goto B766d14;
case 0x766d17:c.instructions+=4;goto B766d17;
case 0x766d1a:c.instructions+=3;goto B766d1a;
case 0x766d1b:c.instructions+=2;goto B766d1b;
case 0x766d1c:c.instructions+=1;goto B766d1c;
case 0x766d1e:goto L766d1e;
case 0x766d1f:c.instructions+=2;goto B766d1f;
case 0x766d20:c.instructions+=1;goto B766d20;
case 0x766d22:goto L766d22;
case 0x766d25:c.instructions+=1;goto B766d25;
case 0x766d27:goto L766d27;
case 0x766d2a:c.instructions+=1;goto B766d2a;
case 0x766d2c:goto L766d2c;
case 0x766d2f:c.instructions+=1;goto B766d2f;
case 0x766d31:goto L766d31;
case 0x766d34:c.instructions+=1;goto B766d34;
case 0x766d36:goto L766d36;
case 0x766d37:c.instructions+=1;goto B766d37;
case 0x766d39:goto L766d39;
case 0x766d3c:c.instructions+=1;goto B766d3c;
case 0x766d41:goto L766d41;
case 0x766d46:c.instructions+=2;goto B766d46;
case 0x766d4c:c.instructions+=1;goto B766d4c;
case 0x766d4e:goto L766d4e;
case 0x766d53:c.instructions+=2;goto B766d53;
case 0x766d59:c.instructions+=1;goto B766d59;
case 0x766d5b:goto L766d5b;
case 0x766d60:c.instructions+=2;goto B766d60;
case 0x766d66:c.instructions+=1;goto B766d66;
case 0x766d68:goto L766d68;
case 0x766d6d:goto L766d6d;
case 0x766d6f:c.instructions+=4;goto B766d6f;
case 0x766d72:c.instructions+=3;goto B766d72;
case 0x766d75:c.instructions+=2;goto B766d75;
case 0x766d78:c.instructions+=1;goto B766d78;
case 0x766d7d:goto L766d7d;
case 0x766d7f:c.instructions+=4;goto B766d7f;
case 0x766d82:c.instructions+=3;goto B766d82;
case 0x766d84:c.instructions+=2;goto B766d84;
case 0x766d86:c.instructions+=1;goto B766d86;
case 0x766d88:goto L766d88;
case 0x766d8d:c.instructions+=1;goto B766d8d;
case 0x766d93:goto L766d93;
case 0x766d9a:c.instructions+=1;goto B766d9a;
case 0x766d9d:goto L766d9d;
case 0x766da0:c.instructions+=2;goto B766da0;
case 0x766da3:c.instructions+=1;goto B766da3;
case 0x766da9:goto L766da9;
case 0x766dab:c.instructions+=1;goto B766dab;
case 0x766dad:goto L766dad;
case 0x766daf:c.instructions+=1;goto B766daf;
case 0x766db4:goto L766db4;
case 0x766db7:c.instructions+=1;goto B766db7;
case 0x766db9:goto L766db9;
case 0x766dba:c.instructions+=1;goto B766dba;
case 0x766dbf:goto L766dbf;
case 0x766dc0:c.instructions+=1;goto B766dc0;
case 0x766dc2:goto L766dc2;
case 0x766dc5:c.instructions+=3;goto B766dc5;
case 0x766dc8:c.instructions+=2;goto B766dc8;
case 0x766dcb:c.instructions+=1;goto B766dcb;
case 0x766dcd:goto L766dcd;
case 0x766dd0:c.instructions+=1;goto B766dd0;
case 0x766dd2:goto L766dd2;
case 0x766dd5:c.instructions+=1;goto B766dd5;
case 0x766dd7:goto L766dd7;
case 0x766dda:c.instructions+=4;goto B766dda;
case 0x766ddd:c.instructions+=3;goto B766ddd;
case 0x766de0:c.instructions+=2;goto B766de0;
case 0x766de3:c.instructions+=1;goto B766de3;
case 0x766de5:goto L766de5;
case 0x766de8:c.instructions+=2;goto B766de8;
case 0x766deb:c.instructions+=1;goto B766deb;
case 0x766df2:goto L766df2;
case 0x766df5:c.instructions+=1;goto B766df5;
case 0x766df7:goto L766df7;
case 0x766dfc:goto L766dfc;
case 0x766dff:c.instructions+=5;goto B766dff;
case 0x766e05:c.instructions+=4;goto B766e05;
case 0x766e0b:c.instructions+=3;goto B766e0b;
case 0x766e0d:c.instructions+=2;goto B766e0d;
case 0x766e0f:c.instructions+=1;goto B766e0f;
case 0x766e11:goto L766e11;
case 0x766e14:c.instructions+=4;goto B766e14;
case 0x766e17:c.instructions+=3;goto B766e17;
case 0x766e1b:c.instructions+=2;goto B766e1b;
case 0x766e1c:c.instructions+=1;goto B766e1c;
case 0x766e1e:goto L766e1e;
case 0x766e20:goto L766e20;
case 0x766e24:c.instructions+=1;goto B766e24;
case 0x766e29:goto L766e29;
case 0x766e2d:c.instructions+=1;goto B766e2d;
case 0x766e2f:goto L766e2f;
case 0x766e32:c.instructions+=2;goto B766e32;
case 0x766e34:c.instructions+=1;goto B766e34;
case 0x766e36:goto L766e36;
case 0x766e37:c.instructions+=1;goto B766e37;
case 0x766e39:goto L766e39;
case 0x766e3c:c.instructions+=2;goto B766e3c;
case 0x766e3f:c.instructions+=1;goto B766e3f;
case 0x766e41:goto L766e41;
case 0x766e44:c.instructions+=1;goto B766e44;
case 0x766e46:goto L766e46;
case 0x766e47:c.instructions+=1;goto B766e47;
case 0x766e4c:goto L766e4c;
case 0x766e4d:goto L766e4d;
case 0x766e4e:goto L766e4e;
case 0x766e51:c.instructions+=1;goto B766e51;
case 0x766e53:goto L766e53;
case 0x766e54:c.instructions+=3;goto B766e54;
case 0x766e57:c.instructions+=2;goto B766e57;
case 0x766e5a:c.instructions+=1;goto B766e5a;
case 0x766e5c:goto L766e5c;
case 0x766e5f:c.instructions+=1;goto B766e5f;
case 0x766e61:goto L766e61;
case 0x766e64:c.instructions+=1;goto B766e64;
case 0x766e66:goto L766e66;
case 0x766e69:c.instructions+=3;goto B766e69;
case 0x766e6c:c.instructions+=2;goto B766e6c;
case 0x766e6f:c.instructions+=1;goto B766e6f;
case 0x766e71:goto L766e71;
case 0x766e74:c.instructions+=1;goto B766e74;
case 0x766e77:goto L766e77;
case 0x766e79:goto L766e79;
case 0x766e7e:goto L766e7e;
case 0x766e7f:goto L766e7f;
case 0x766e80:c.instructions+=15;goto B766e80;
case 0x766e82:c.instructions+=14;goto B766e82;
case 0x766e83:c.instructions+=13;goto B766e83;
case 0x766e84:c.instructions+=12;goto B766e84;
case 0x766e87:c.instructions+=11;goto B766e87;
case 0x766e8a:c.instructions+=10;goto B766e8a;
case 0x766e8d:c.instructions+=9;goto B766e8d;
case 0x766e90:c.instructions+=8;goto B766e90;
case 0x766e95:c.instructions+=7;goto B766e95;
case 0x766e98:c.instructions+=6;goto B766e98;
case 0x766e9e:c.instructions+=5;goto B766e9e;
case 0x766ea0:c.instructions+=4;goto B766ea0;
case 0x766ea4:c.instructions+=3;goto B766ea4;
case 0x766ea7:c.instructions+=2;goto B766ea7;
case 0x766ea8:c.instructions+=1;goto B766ea8;
case 0x766ea9:goto L766ea9;
case 0x766eaa:c.instructions+=4;goto B766eaa;
case 0x766eac:c.instructions+=3;goto B766eac;
case 0x766eae:c.instructions+=2;goto B766eae;
case 0x766eb5:c.instructions+=1;goto B766eb5;
case 0x766eb7:goto L766eb7;
case 0x766eba:c.instructions+=1;goto B766eba;
case 0x766ebc:goto L766ebc;
case 0x766ebe:c.instructions+=3;goto B766ebe;
case 0x766ebf:c.instructions+=2;goto B766ebf;
case 0x766ec0:c.instructions+=1;goto B766ec0;
case 0x766ec1:goto L766ec1;
case 0x766ec8:c.instructions+=1;goto B766ec8;
case 0x766eca:goto L766eca;
case 0x766ecd:c.instructions+=1;goto B766ecd;
case 0x766ecf:goto L766ecf;
case 0x766ed1:c.instructions+=1;goto B766ed1;
case 0x766ed3:goto L766ed3;
case 0x766ed6:c.instructions+=4;goto B766ed6;
case 0x766edb:c.instructions+=3;goto B766edb;
case 0x766edd:c.instructions+=2;goto B766edd;
case 0x766ee0:c.instructions+=1;goto B766ee0;
case 0x766ee2:goto L766ee2;
case 0x766ee4:c.instructions+=1;goto B766ee4;
case 0x766ee6:goto L766ee6;
case 0x766eeb:c.instructions+=1;goto B766eeb;
case 0x766eed:goto L766eed;
case 0x766ef4:c.instructions+=1;goto B766ef4;
case 0x766ef6:goto L766ef6;
case 0x766ef9:c.instructions+=1;goto B766ef9;
case 0x766efb:goto L766efb;
case 0x766efd:goto L766efd;
case 0x766efe:c.instructions+=2;goto B766efe;
case 0x766eff:c.instructions+=1;goto B766eff;
case 0x766f00:goto L766f00;
case 0x766f02:c.instructions+=2;goto B766f02;
case 0x766f03:c.instructions+=1;goto B766f03;
case 0x766f04:goto L766f04;
case 0x766f05:c.instructions+=8;goto B766f05;
case 0x766f07:c.instructions+=7;goto B766f07;
case 0x766f08:c.instructions+=6;goto B766f08;
case 0x766f09:c.instructions+=5;goto B766f09;
case 0x766f0c:c.instructions+=4;goto B766f0c;
case 0x766f12:c.instructions+=3;goto B766f12;
case 0x766f14:c.instructions+=2;goto B766f14;
case 0x766f17:c.instructions+=1;goto B766f17;
case 0x766f19:goto L766f19;
case 0x766f1b:c.instructions+=2;goto B766f1b;
case 0x766f1d:c.instructions+=1;goto B766f1d;
case 0x766f22:goto L766f22;
case 0x766f24:c.instructions+=2;goto B766f24;
case 0x766f2a:c.instructions+=1;goto B766f2a;
case 0x766f2c:goto L766f2c;
case 0x766f33:c.instructions+=1;goto B766f33;
case 0x766f35:goto L766f35;
case 0x766f38:c.instructions+=1;goto B766f38;
case 0x766f3a:goto L766f3a;
case 0x766f3d:c.instructions+=5;goto B766f3d;
case 0x766f42:c.instructions+=4;goto B766f42;
case 0x766f48:c.instructions+=3;goto B766f48;
case 0x766f4a:c.instructions+=2;goto B766f4a;
case 0x766f4d:c.instructions+=1;goto B766f4d;
case 0x766f4f:goto L766f4f;
case 0x766f51:c.instructions+=2;goto B766f51;
case 0x766f52:c.instructions+=1;goto B766f52;
case 0x766f54:goto L766f54;
case 0x766f56:c.instructions+=1;goto B766f56;
case 0x766f58:goto L766f58;
case 0x766f5b:c.instructions+=2;goto B766f5b;
case 0x766f5f:c.instructions+=1;goto B766f5f;
case 0x766f61:goto L766f61;
case 0x766f65:goto L766f65;
case 0x766f68:c.instructions+=1;goto B766f68;
case 0x766f69:goto L766f69;
case 0x766f6d:c.instructions+=1;goto B766f6d;
case 0x766f6f:goto L766f6f;
case 0x766f73:c.instructions+=2;goto B766f73;
case 0x766f75:c.instructions+=1;goto B766f75;
case 0x766f77:goto L766f77;
case 0x766f7b:goto L766f7b;
case 0x766f7e:c.instructions+=5;goto B766f7e;
case 0x766f7f:c.instructions+=4;goto B766f7f;
case 0x766f80:c.instructions+=3;goto B766f80;
case 0x766f81:c.instructions+=2;goto B766f81;
case 0x766f84:c.instructions+=1;goto B766f84;
case 0x766f89:goto L766f89;
case 0x766f8c:c.instructions+=1;goto B766f8c;
case 0x766f8e:goto L766f8e;
case 0x766f91:c.instructions+=5;goto B766f91;
case 0x766f92:c.instructions+=4;goto B766f92;
case 0x766f93:c.instructions+=3;goto B766f93;
case 0x766f94:c.instructions+=2;goto B766f94;
case 0x766f97:c.instructions+=1;goto B766f97;
case 0x766f9c:goto L766f9c;
case 0x766f9f:c.instructions+=4;goto B766f9f;
case 0x766fa2:c.instructions+=3;goto B766fa2;
case 0x766fa8:c.instructions+=2;goto B766fa8;
case 0x766fab:c.instructions+=1;goto B766fab;
case 0x766fb1:goto L766fb1;
case 0x766fb4:c.instructions+=5;goto B766fb4;
case 0x766fb7:c.instructions+=4;goto B766fb7;
case 0x766fba:c.instructions+=3;goto B766fba;
case 0x766fbc:c.instructions+=2;goto B766fbc;
case 0x766fbd:c.instructions+=1;goto B766fbd;
case 0x766fbe:goto L766fbe;
case 0x766fbf:c.instructions+=16;goto B766fbf;
case 0x766fc1:c.instructions+=15;goto B766fc1;
case 0x766fc4:c.instructions+=14;goto B766fc4;
case 0x766fc6:c.instructions+=13;goto B766fc6;
case 0x766fc9:c.instructions+=12;goto B766fc9;
case 0x766fcc:c.instructions+=11;goto B766fcc;
case 0x766fcf:c.instructions+=10;goto B766fcf;
case 0x766fd2:c.instructions+=9;goto B766fd2;
case 0x766fd3:c.instructions+=8;goto B766fd3;
case 0x766fd5:c.instructions+=7;goto B766fd5;
case 0x766fd8:c.instructions+=6;goto B766fd8;
case 0x766fdb:c.instructions+=5;goto B766fdb;
case 0x766fdc:c.instructions+=4;goto B766fdc;
case 0x766fdd:c.instructions+=3;goto B766fdd;
case 0x766fe0:c.instructions+=2;goto B766fe0;
case 0x766fe1:c.instructions+=1;goto B766fe1;
case 0x766fe3:goto L766fe3;
case 0x766fe6:c.instructions+=2;goto B766fe6;
case 0x766fe9:c.instructions+=1;goto B766fe9;
case 0x766ff0:goto L766ff0;
case 0x766ff3:c.instructions+=1;goto B766ff3;
case 0x766ff5:goto L766ff5;
case 0x766ff8:c.instructions+=2;goto B766ff8;
case 0x766ffc:c.instructions+=1;goto B766ffc;
default:missing_instruction(c.pc);}
B766002:L766002:{c.instructions+=1;NFSU2_TR(0x766002);
if(r1(R+518)){{goto L766026;}}
}
B766004:L766004:{c.instructions+=4;NFSU2_TR(0x766004);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766005:{NFSU2_TR(0x766005);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B766009:{NFSU2_TR(0x766009);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B76600d:{NFSU2_TR(0x76600d);
if(r1(R+518)){{goto L766025;}}
}
B76600f:L76600f:{c.instructions+=2;NFSU2_TR(0x76600f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766010:{NFSU2_TR(0x766010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766015ull));
TAIL_STATIC(0x75f42du,75f);
}
B766015:L766015:{c.instructions+=5;NFSU2_TR(0x766015);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xeeull))));
s1(u32(r4(U+0)),r1(U+4));
}
B766019:{NFSU2_TR(0x766019);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76601d:{NFSU2_TR(0x76601d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B766020:{NFSU2_TR(0x766020);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B766024:{NFSU2_TR(0x766024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766025:L766025:{c.instructions+=1;NFSU2_TR(0x766025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B766026:L766026:{c.instructions+=1;NFSU2_TR(0x766026);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766027:L766027:{c.instructions+=5;NFSU2_TR(0x766027);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766028:{NFSU2_TR(0x766028);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76602c:{NFSU2_TR(0x76602c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76602f:{NFSU2_TR(0x76602f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x83ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B766031:{NFSU2_TR(0x766031);
if(r1(R+518)){{goto L766050;}}
}
B766033:L766033:{c.instructions+=2;NFSU2_TR(0x766033);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B766035:{NFSU2_TR(0x766035);
if(r1(R+518)){{goto L766050;}}
}
B766037:L766037:{c.instructions+=2;NFSU2_TR(0x766037);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76603a:{NFSU2_TR(0x76603a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76603full));
TAIL_STATIC(0x75c6dau,75c);
}
B76603f:L76603f:{c.instructions+=6;NFSU2_TR(0x76603f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0xfbf7ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B766045:{NFSU2_TR(0x766045);
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
B766047:{NFSU2_TR(0x766047);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766048:{NFSU2_TR(0x766048);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B76604a:{NFSU2_TR(0x76604a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76604d:{NFSU2_TR(0x76604d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766050:L766050:{c.instructions+=2;NFSU2_TR(0x766050);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B766051:{NFSU2_TR(0x766051);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766052:L766052:{c.instructions+=15;NFSU2_TR(0x766052);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766053:{NFSU2_TR(0x766053);
__builtin_memmove((R+20),(R+16),4);
}
B766055:{NFSU2_TR(0x766055);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766056:{NFSU2_TR(0x766056);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766057:{NFSU2_TR(0x766057);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766058:{NFSU2_TR(0x766058);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766059:{NFSU2_TR(0x766059);
__builtin_memmove((R+24),gp(0x8b8894),4);
}
B76605f:{NFSU2_TR(0x76605f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766060:{NFSU2_TR(0x766060);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B766063:{NFSU2_TR(0x766063);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B766065:{NFSU2_TR(0x766065);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B766067:{NFSU2_TR(0x766067);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B766069:{NFSU2_TR(0x766069);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76606c:{NFSU2_TR(0x76606c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76606f:{NFSU2_TR(0x76606f);
if(r1(R+518)){{goto L76608b;}}
}
B766071:L766071:{c.instructions+=2;NFSU2_TR(0x766071);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x72ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B766073:{NFSU2_TR(0x766073);
if(r1(R+518)){{goto L766084;}}
}
B766075:L766075:{c.instructions+=2;NFSU2_TR(0x766075);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x77ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B766077:{NFSU2_TR(0x766077);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766197;}}
}
B76607d:L76607d:{c.instructions+=2;NFSU2_TR(0x76607d);
w4(R+4,u32(0x301ull));
}
B766082:{NFSU2_TR(0x766082);
{goto L766090;}
}
B766084:L766084:{c.instructions+=3;NFSU2_TR(0x766084);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B766086:{NFSU2_TR(0x766086);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x1ull))));
}
B766089:{NFSU2_TR(0x766089);
{goto L766093;}
}
B76608b:L76608b:{c.instructions+=1;NFSU2_TR(0x76608b);
w4(R+4,u32(0x109ull));
}
B766090:L766090:{c.instructions+=1;NFSU2_TR(0x766090);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x2ull))));
}
B766093:L766093:{c.instructions+=3;NFSU2_TR(0x766093);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B766095:{NFSU2_TR(0x766095);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B766096:{NFSU2_TR(0x766096);
{goto L766172;}
}
B76609b:L76609b:{c.instructions+=2;NFSU2_TR(0x76609b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76609d:{NFSU2_TR(0x76609d);
if(r1(R+518)){{goto L76617d;}}
}
B7660a3:L7660a3:{c.instructions+=3;NFSU2_TR(0x7660a3);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B7660a6:{NFSU2_TR(0x7660a6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x54ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7660a9:{NFSU2_TR(0x7660a9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76611c;}}
}
B7660ab:L7660ab:{c.instructions+=1;NFSU2_TR(0x7660ab);
if(r1(R+518)){{goto L76610f;}}
}
B7660ad:L7660ad:{c.instructions+=2;NFSU2_TR(0x7660ad);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2bull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7660b0:{NFSU2_TR(0x7660b0);
if(r1(R+518)){{goto L7660f9;}}
}
B7660b2:L7660b2:{c.instructions+=2;NFSU2_TR(0x7660b2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7660b5:{NFSU2_TR(0x7660b5);
if(r1(R+518)){{goto L7660ef;}}
}
B7660b7:L7660b7:{c.instructions+=2;NFSU2_TR(0x7660b7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7660ba:{NFSU2_TR(0x7660ba);
if(r1(R+518)){{goto L7660db;}}
}
B7660bc:L7660bc:{c.instructions+=2;NFSU2_TR(0x7660bc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7660bd:{NFSU2_TR(0x7660bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766154;}}
}
B7660c3:L7660c3:{c.instructions+=2;NFSU2_TR(0x7660c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7660c6:{NFSU2_TR(0x7660c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766154;}}
}
B7660cc:L7660cc:{c.instructions+=3;NFSU2_TR(0x7660cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7660d3:{NFSU2_TR(0x7660d3);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x20ull))));
}
B7660d6:{NFSU2_TR(0x7660d6);
{goto L766172;}
}
B7660db:L7660db:{c.instructions+=2;NFSU2_TR(0x7660db);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7660de:{NFSU2_TR(0x7660de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766154;}}
}
B7660e0:L7660e0:{c.instructions+=3;NFSU2_TR(0x7660e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7660e7:{NFSU2_TR(0x7660e7);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x10ull))));
}
B7660ea:{NFSU2_TR(0x7660ea);
{goto L766172;}
}
B7660ef:L7660ef:{c.instructions+=2;NFSU2_TR(0x7660ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7660f2:{NFSU2_TR(0x7660f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766154;}}
}
B7660f4:L7660f4:{c.instructions+=2;NFSU2_TR(0x7660f4);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x40ull))));
}
B7660f7:{NFSU2_TR(0x7660f7);
{goto L766172;}
}
B7660f9:L7660f9:{c.instructions+=2;NFSU2_TR(0x7660f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7660fc:{NFSU2_TR(0x7660fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766154;}}
}
B7660fe:L7660fe:{c.instructions+=5;NFSU2_TR(0x7660fe);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B766101:{NFSU2_TR(0x766101);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B766104:{NFSU2_TR(0x766104);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x2ull))));
}
B766107:{NFSU2_TR(0x766107);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x80ull))));
}
B76610d:{NFSU2_TR(0x76610d);
{goto L766172;}
}
B76610f:L76610f:{c.instructions+=3;NFSU2_TR(0x76610f);
w4(R+0,u32(0x1000ull));
}
B766114:{NFSU2_TR(0x766114);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766116:{NFSU2_TR(0x766116);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766154;}}
}
B766118:L766118:{c.instructions+=2;NFSU2_TR(0x766118);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B76611a:{NFSU2_TR(0x76611a);
{goto L766172;}
}
B76611c:L76611c:{c.instructions+=2;NFSU2_TR(0x76611c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x62ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76611f:{NFSU2_TR(0x76611f);
if(r1(R+518)){{goto L766167;}}
}
B766121:L766121:{c.instructions+=2;NFSU2_TR(0x766121);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B766122:{NFSU2_TR(0x766122);
if(r1(R+518)){{goto L76614f;}}
}
B766124:L766124:{c.instructions+=2;NFSU2_TR(0x766124);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B766127:{NFSU2_TR(0x766127);
if(r1(R+518)){{goto L76613b;}}
}
B766129:L766129:{c.instructions+=2;NFSU2_TR(0x766129);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76612c:{NFSU2_TR(0x76612c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766154;}}
}
B76612e:L76612e:{c.instructions+=2;NFSU2_TR(0x76612e);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xc0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B766131:{NFSU2_TR(0x766131);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766154;}}
}
B766133:L766133:{c.instructions+=2;NFSU2_TR(0x766133);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x4000ull))));
}
B766139:{NFSU2_TR(0x766139);
{goto L766172;}
}
B76613b:L76613b:{c.instructions+=2;NFSU2_TR(0x76613b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76613e:{NFSU2_TR(0x76613e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766154;}}
}
B766140:L766140:{c.instructions+=3;NFSU2_TR(0x766140);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B766147:{NFSU2_TR(0x766147);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffbfffull))));
}
B76614d:{NFSU2_TR(0x76614d);
{goto L766172;}
}
B76614f:L76614f:{c.instructions+=2;NFSU2_TR(0x76614f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766152:{NFSU2_TR(0x766152);
if(r1(R+518)){{goto L766158;}}
}
B766154:L766154:{c.instructions+=2;NFSU2_TR(0x766154);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B766156:{NFSU2_TR(0x766156);
{goto L766172;}
}
B766158:L766158:{c.instructions+=3;NFSU2_TR(0x766158);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76615f:{NFSU2_TR(0x76615f);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x4000ull))));
}
B766165:{NFSU2_TR(0x766165);
{goto L766172;}
}
B766167:L766167:{c.instructions+=2;NFSU2_TR(0x766167);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xc0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76616a:{NFSU2_TR(0x76616a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766154u);}goto L766154;}}
}
B76616c:L76616c:{c.instructions+=1;NFSU2_TR(0x76616c);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x8000ull))));
}
B766172:L766172:{c.instructions+=4;NFSU2_TR(0x766172);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B766173:{NFSU2_TR(0x766173);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B766175:{NFSU2_TR(0x766175);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B766177:{NFSU2_TR(0x766177);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76609bu);}goto L76609b;}}
}
B76617d:L76617d:{c.instructions+=5;NFSU2_TR(0x76617d);
u8 U[4];
w4(U+0,u32(0x1a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766182:{NFSU2_TR(0x766182);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B766185:{NFSU2_TR(0x766185);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766186:{NFSU2_TR(0x766186);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B766189:{NFSU2_TR(0x766189);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76618eull));
TAIL_STATIC(0x76061eu,760);
}
B76618e:L76618e:{c.instructions+=4;NFSU2_TR(0x76618e);
__builtin_memmove((R+4),(R+0),4);
}
B766190:{NFSU2_TR(0x766190);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B766193:{NFSU2_TR(0x766193);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B766195:{NFSU2_TR(0x766195);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76619b;}}
}
B766197:L766197:{c.instructions+=2;NFSU2_TR(0x766197);
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
B766199:{NFSU2_TR(0x766199);
{goto L7661b5;}
}
B76619b:L76619b:{c.instructions+=8;NFSU2_TR(0x76619b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76619e:{NFSU2_TR(0x76619e);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8b8484),u32(0x1ull)));
s4(0x8b8484,u32(u32(m4(0x8b8484))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8b8484))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b8484))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b8484))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7661a4:{NFSU2_TR(0x7661a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7661a7:{NFSU2_TR(0x7661a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7661aa:{NFSU2_TR(0x7661aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7661ac:{NFSU2_TR(0x7661ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7661af:{NFSU2_TR(0x7661af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7661b2:{NFSU2_TR(0x7661b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7661b5:L7661b5:{c.instructions+=5;NFSU2_TR(0x7661b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7661b6:{NFSU2_TR(0x7661b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7661b7:{NFSU2_TR(0x7661b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7661b8:{NFSU2_TR(0x7661b8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7661b9:{NFSU2_TR(0x7661b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7661ba:L7661ba:{c.instructions+=1;NFSU2_TR(0x7661ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7661bfull));
TAIL_STATIC(0x761e3cu,761);
}
B7661bf:L7661bf:{c.instructions+=2;NFSU2_TR(0x7661bf);
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
B7661c2:{NFSU2_TR(0x7661c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7661c3:L7661c3:{c.instructions+=1;NFSU2_TR(0x7661c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7661c8ull));
TAIL_STATIC(0x761e3cu,761);
}
B7661c8:L7661c8:{c.instructions+=2;NFSU2_TR(0x7661c8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7661cb:{NFSU2_TR(0x7661cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7661cc:L7661cc:{c.instructions+=2;NFSU2_TR(0x7661cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7661cd:{NFSU2_TR(0x7661cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7661d2ull));
TAIL_STATIC(0x761e3cu,761);
}
B7661d2:L7661d2:{c.instructions+=3;NFSU2_TR(0x7661d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7661d6:{NFSU2_TR(0x7661d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7661d9:{NFSU2_TR(0x7661d9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7661db:L7661db:{c.instructions+=2;NFSU2_TR(0x7661db);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x81a5f8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+18)));
w4(U+22,u32(u32(r4(R+4))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B7661e2:{NFSU2_TR(0x7661e2);
if(r1(R+518)){{goto L766202;}}
}
B7661e4:L7661e4:{c.instructions+=3;NFSU2_TR(0x7661e4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7661e5:{NFSU2_TR(0x7661e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x2dull))));
}
B7661e8:{NFSU2_TR(0x7661e8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7661dbu);}goto L7661db;}}
}
B7661ea:L7661ea:{c.instructions+=2;NFSU2_TR(0x7661ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x13ull))));
}
B7661ed:{NFSU2_TR(0x7661ed);
if(r1(R+512)){{goto L766213;}}
}
B7661ef:L7661ef:{c.instructions+=2;NFSU2_TR(0x7661ef);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x24ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x24ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7661f2:{NFSU2_TR(0x7661f2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L766213;}}
}
B7661f4:L7661f4:{c.instructions+=1;NFSU2_TR(0x7661f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7661f9ull));
TAIL_STATIC(0x761e3cu,761);
}
B7661f9:L7661f9:{c.instructions+=3;NFSU2_TR(0x7661f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B766200:{NFSU2_TR(0x766200);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B766201:{NFSU2_TR(0x766201);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766202:L766202:{c.instructions+=1;NFSU2_TR(0x766202);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766207ull));
TAIL_STATIC(0x761e3cu,761);
}
B766207:L766207:{c.instructions+=4;NFSU2_TR(0x766207);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x81a5fcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B76620e:{NFSU2_TR(0x76620e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766211:{NFSU2_TR(0x766211);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B766212:{NFSU2_TR(0x766212);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766213:L766213:{c.instructions+=2;NFSU2_TR(0x766213);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xbcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B766219:{NFSU2_TR(0x766219);
if(r1(R+512)){{goto L766231;}}
}
B76621b:L76621b:{c.instructions+=2;NFSU2_TR(0x76621b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xcaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B766221:{NFSU2_TR(0x766221);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L766231;}}
}
B766223:L766223:{c.instructions+=1;NFSU2_TR(0x766223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766228ull));
TAIL_STATIC(0x761e3cu,761);
}
B766228:L766228:{c.instructions+=3;NFSU2_TR(0x766228);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76622f:{NFSU2_TR(0x76622f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B766230:{NFSU2_TR(0x766230);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766231:L766231:{c.instructions+=1;NFSU2_TR(0x766231);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766236ull));
TAIL_STATIC(0x761e3cu,761);
}
B766236:L766236:{c.instructions+=3;NFSU2_TR(0x766236);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76623d:{NFSU2_TR(0x76623d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76623e:{NFSU2_TR(0x76623e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76623f:L76623f:{c.instructions+=3;NFSU2_TR(0x76623f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766241:{NFSU2_TR(0x766241);
u8 U[4];
w4(U+0,u32(0x7d7ca8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766246:{NFSU2_TR(0x766246);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76624bull));
TAIL_STATIC(0x760da0u,760);
}
B76624b:L76624b:{c.instructions+=5;NFSU2_TR(0x76624b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76624d:{NFSU2_TR(0x76624d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76624f:{NFSU2_TR(0x76624f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766252:{NFSU2_TR(0x766252);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766254:{NFSU2_TR(0x766254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766259ull));
TAIL_STATIC(0x7631f1u,763);
}
B766259:L766259:{c.instructions+=3;NFSU2_TR(0x766259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76625a:{NFSU2_TR(0x76625a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76625d:{NFSU2_TR(0x76625d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76625f:L76625f:{c.instructions+=3;NFSU2_TR(0x76625f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766262:{NFSU2_TR(0x766262);
u8 U[8];
__builtin_memmove((U+0),gp(0x8bb5e0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B766268:{NFSU2_TR(0x766268);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76632e;}}
}
B76626e:L76626e:{c.instructions+=4;NFSU2_TR(0x76626e);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B766273:{NFSU2_TR(0x766273);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B766276:{NFSU2_TR(0x766276);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766278:{NFSU2_TR(0x766278);
if(r1(R+518)){{goto L7662ca;}}
}
B76627a:L76627a:{c.instructions+=2;NFSU2_TR(0x76627a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x83ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76627e:{NFSU2_TR(0x76627e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7662c3;}}
}
B766280:L766280:{c.instructions+=2;NFSU2_TR(0x766280);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766283:{NFSU2_TR(0x766283);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76629c;}}
}
B766285:L766285:{c.instructions+=2;NFSU2_TR(0x766285);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x14ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B766288:{NFSU2_TR(0x766288);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76629c;}}
}
B76628a:L76628a:{c.instructions+=3;NFSU2_TR(0x76628a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76628d:{NFSU2_TR(0x76628d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76628e:{NFSU2_TR(0x76628e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766293ull));
TAIL_STATIC(0x763172u,763);
}
B766293:L766293:{c.instructions+=3;NFSU2_TR(0x766293);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766294:{NFSU2_TR(0x766294);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766296:{NFSU2_TR(0x766296);
if(r1(R+518)){{goto L76632e;}}
}
B76629c:L76629c:{c.instructions+=4;NFSU2_TR(0x76629c);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B7662a1:{NFSU2_TR(0x7662a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B7662a4:{NFSU2_TR(0x7662a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7662a5:{NFSU2_TR(0x7662a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7662aaull));
TAIL_STATIC(0x75f352u,75f);
}
B7662aa:L7662aa:{c.instructions+=6;NFSU2_TR(0x7662aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7662ab:{NFSU2_TR(0x7662ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7662ac:{NFSU2_TR(0x7662ac);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B7662b1:{NFSU2_TR(0x7662b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B7662b4:{NFSU2_TR(0x7662b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x83ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B7662b8:{NFSU2_TR(0x7662b8);
if(r1(R+518)){{goto L7662c6;}}
}
B7662ba:L7662ba:{c.instructions+=3;NFSU2_TR(0x7662ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7662bb:{NFSU2_TR(0x7662bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7662bc:{NFSU2_TR(0x7662bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7662c1ull));
TAIL_STATIC(0x75f3a4u,75f);
}
B7662c1:L7662c1:{c.instructions+=2;NFSU2_TR(0x7662c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7662c2:{NFSU2_TR(0x7662c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7662c3:L7662c3:{c.instructions+=2;NFSU2_TR(0x7662c3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7662c4:{NFSU2_TR(0x7662c4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76625fu);}goto L76625f;}
}
B7662c6:L7662c6:{c.instructions+=2;NFSU2_TR(0x7662c6);
__builtin_memmove((R+28),(R+0),4);
}
B7662c8:{NFSU2_TR(0x7662c8);
{goto L76632b;}
}
B7662ca:L7662ca:{c.instructions+=3;NFSU2_TR(0x7662ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B7662cd:{NFSU2_TR(0x7662cd);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7662cf:{NFSU2_TR(0x7662cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7662d4ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B7662d4:L7662d4:{c.instructions+=7;NFSU2_TR(0x7662d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7662d5:{NFSU2_TR(0x7662d5);
__builtin_memmove((R+4),gp(0x8ba5c0),4);
}
B7662db:{NFSU2_TR(0x7662db);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B7662de:{NFSU2_TR(0x7662de);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B7662e3:{NFSU2_TR(0x7662e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B7662e6:{NFSU2_TR(0x7662e6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7662e8:{NFSU2_TR(0x7662e8);
if(r1(R+518)){{goto L76632e;}}
}
B7662ea:L7662ea:{c.instructions+=4;NFSU2_TR(0x7662ea);
u8 U[4];
w4(U+0,u32(0xfa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7662ef:{NFSU2_TR(0x7662ef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B7662f2:{NFSU2_TR(0x7662f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7662f3:{NFSU2_TR(0x7662f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7662f8ull));
TAIL_STATIC(0x76c3b6u,76c);
}
B7662f8:L7662f8:{c.instructions+=5;NFSU2_TR(0x7662f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7662f9:{NFSU2_TR(0x7662f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7662fa:{NFSU2_TR(0x7662fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7662fc:{NFSU2_TR(0x7662fc);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B766301:{NFSU2_TR(0x766301);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766316;}}
}
B766303:L766303:{c.instructions+=2;NFSU2_TR(0x766303);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B766306:{NFSU2_TR(0x766306);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76630bull));
TAIL_STATIC(0x75c6dau,75c);
}
B76630b:L76630b:{c.instructions+=4;NFSU2_TR(0x76630b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76630c:{NFSU2_TR(0x76630c);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B766311:{NFSU2_TR(0x766311);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B766314:{NFSU2_TR(0x766314);
{goto L76632e;}
}
B766316:L766316:{c.instructions+=4;NFSU2_TR(0x766316);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B766319:{NFSU2_TR(0x766319);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x20ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76631c:{NFSU2_TR(0x76631c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76631d:{NFSU2_TR(0x76631d);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766323ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B766323:L766323:{c.instructions+=2;NFSU2_TR(0x766323);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B766328:{NFSU2_TR(0x766328);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B76632b:L76632b:{c.instructions+=1;NFSU2_TR(0x76632b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76632e:L76632e:{c.instructions+=2;NFSU2_TR(0x76632e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766330:{NFSU2_TR(0x766330);
if(r1(R+518)){{goto L766344;}}
}
B766332:L766332:{c.instructions+=6;NFSU2_TR(0x766332);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766335:{NFSU2_TR(0x766335);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766338:{NFSU2_TR(0x766338);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76633b:{NFSU2_TR(0x76633b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B76633d:{NFSU2_TR(0x76633d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766340:{NFSU2_TR(0x766340);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B766344:L766344:{c.instructions+=2;NFSU2_TR(0x766344);
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
B766348:{NFSU2_TR(0x766348);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76634dull));
{goto L766358;}
}
B76634d:L76634d:{c.instructions+=2;NFSU2_TR(0x76634d);
__builtin_memmove((R+0),(R+28),4);
}
B76634f:{NFSU2_TR(0x76634f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766354ull));
TAIL_STATIC(0x760ddbu,760);
}
B766354:L766354:{c.instructions+=1;NFSU2_TR(0x766354);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766358:L766358:{c.instructions+=2;NFSU2_TR(0x766358);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76635a:{NFSU2_TR(0x76635a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76635full));
TAIL_STATIC(0x76315du,763);
}
B76635f:L76635f:{c.instructions+=2;NFSU2_TR(0x76635f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766360:{NFSU2_TR(0x766360);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766361:L766361:{c.instructions+=8;NFSU2_TR(0x766361);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766362:{NFSU2_TR(0x766362);
__builtin_memmove((R+20),(R+16),4);
}
B766364:{NFSU2_TR(0x766364);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766365:{NFSU2_TR(0x766365);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766368:{NFSU2_TR(0x766368);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76636b:{NFSU2_TR(0x76636b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x100ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766371:{NFSU2_TR(0x766371);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766374:{NFSU2_TR(0x766374);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76637f;}}
}
B766376:L766376:{c.instructions+=3;NFSU2_TR(0x766376);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766379:{NFSU2_TR(0x766379);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B76637d:{NFSU2_TR(0x76637d);
{goto L7663d3;}
}
B76637f:L76637f:{c.instructions+=10;NFSU2_TR(0x76637f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766380:{NFSU2_TR(0x766380);
__builtin_memmove((R+8),(R+0),4);
}
B766382:{NFSU2_TR(0x766382);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B766385:{NFSU2_TR(0x766385);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766386:{NFSU2_TR(0x766386);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B766389:{NFSU2_TR(0x766389);
w4(R+24,u32(r1(R+8)));
}
B76638c:{NFSU2_TR(0x76638c);
u8 U[14];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
}
B766391:{NFSU2_TR(0x766391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B766392:{NFSU2_TR(0x766392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B766393:{NFSU2_TR(0x766393);
if(r1(R+518)){{goto L7663a4;}}
}
B766395:L766395:{c.instructions+=6;NFSU2_TR(0x766395);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B766399:{NFSU2_TR(0x766399);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76639b:{NFSU2_TR(0x76639b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76639e:{NFSU2_TR(0x76639e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7663a1:{NFSU2_TR(0x7663a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7663a2:{NFSU2_TR(0x7663a2);
{goto L7663ae;}
}
B7663a4:L7663a4:{c.instructions+=4;NFSU2_TR(0x7663a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B7663a8:{NFSU2_TR(0x7663a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7663ab:{NFSU2_TR(0x7663ab);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7663ad:{NFSU2_TR(0x7663ad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7663ae:L7663ae:{c.instructions+=10;NFSU2_TR(0x7663ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7663b0:{NFSU2_TR(0x7663b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7663b3:{NFSU2_TR(0x7663b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7663b6:{NFSU2_TR(0x7663b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((R+4),(U+0),4);
}
B7663b9:{NFSU2_TR(0x7663b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7663ba:{NFSU2_TR(0x7663ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7663bb:{NFSU2_TR(0x7663bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B7663be:{NFSU2_TR(0x7663be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7663bf:{NFSU2_TR(0x7663bf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7663c1:{NFSU2_TR(0x7663c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7663c6ull));
TAIL_STATIC(0x7692c8u,769);
}
B7663c6:L7663c6:{c.instructions+=3;NFSU2_TR(0x7663c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B7663c9:{NFSU2_TR(0x7663c9);
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
B7663cb:{NFSU2_TR(0x7663cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7663cf;}}
}
B7663cd:L7663cd:{c.instructions+=2;NFSU2_TR(0x7663cd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7663ce:{NFSU2_TR(0x7663ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7663cf:L7663cf:{c.instructions+=1;NFSU2_TR(0x7663cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B7663d3:L7663d3:{c.instructions+=3;NFSU2_TR(0x7663d3);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7663d6:{NFSU2_TR(0x7663d6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7663d7:{NFSU2_TR(0x7663d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7663d8:L7663d8:{c.instructions+=11;NFSU2_TR(0x7663d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7663d9:{NFSU2_TR(0x7663d9);
__builtin_memmove((R+20),(R+16),4);
}
B7663db:{NFSU2_TR(0x7663db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7663dc:{NFSU2_TR(0x7663dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7663dd:{NFSU2_TR(0x7663dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7663de:{NFSU2_TR(0x7663de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7663df:{NFSU2_TR(0x7663df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7663e0:{NFSU2_TR(0x7663e0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7663e2:{NFSU2_TR(0x7663e2);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7663e4:{NFSU2_TR(0x7663e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7663e7:{NFSU2_TR(0x7663e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7663ecull));
TAIL_STATIC(0x7631f1u,763);
}
B7663ec:L7663ec:{c.instructions+=6;NFSU2_TR(0x7663ec);
__builtin_memmove((R+28),gp(0x8b8844),4);
}
B7663f2:{NFSU2_TR(0x7663f2);
s4(0x81a804,u32(u32(m4(0x81a804))|u32(u32(0xffffffffull))));
}
B7663f9:{NFSU2_TR(0x7663f9);
s4(0x81a7f8,u32(u32(m4(0x81a7f8))|u32(u32(0xffffffffull))));
}
B766400:{NFSU2_TR(0x766400);
__builtin_memmove(gp(0x8b87d4),(R+12),4);
}
B766406:{NFSU2_TR(0x766406);
u8 U[4];
w4(U+0,u32(0x7d7cf4ull));
s4(u32(r4(R+16)),r4(U+0));
}
B76640d:{NFSU2_TR(0x76640d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766412ull));
TAIL_STATIC(0x75f96eu,75f);
}
B766412:L766412:{c.instructions+=4;NFSU2_TR(0x766412);
__builtin_memmove((R+24),(R+0),4);
}
B766414:{NFSU2_TR(0x766414);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766416:{NFSU2_TR(0x766416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766417:{NFSU2_TR(0x766417);
if(r1(R+518)){{goto L766546;}}
}
B76641d:L76641d:{c.instructions+=2;NFSU2_TR(0x76641d);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76641f:{NFSU2_TR(0x76641f);
if(r1(R+518)){{goto L766546;}}
}
B766425:L766425:{c.instructions+=3;NFSU2_TR(0x766425);
__builtin_memmove((R+0),gp(0x8b87d8),4);
}
B76642a:{NFSU2_TR(0x76642a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76642c:{NFSU2_TR(0x76642c);
if(r1(R+518)){{goto L766458;}}
}
B76642e:L76642e:{c.instructions+=3;NFSU2_TR(0x76642e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76642f:{NFSU2_TR(0x76642f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766430:{NFSU2_TR(0x766430);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766435ull));
{goto L766c50;}
}
B766435:L766435:{c.instructions+=4;NFSU2_TR(0x766435);
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
B766437:{NFSU2_TR(0x766437);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766438:{NFSU2_TR(0x766438);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766439:{NFSU2_TR(0x766439);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766448;}}
}
B76643b:L76643b:{c.instructions+=2;NFSU2_TR(0x76643b);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76643d:{NFSU2_TR(0x76643d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766442ull));
TAIL_STATIC(0x76315du,763);
}
B766442:L766442:{c.instructions+=2;NFSU2_TR(0x766442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766443:{NFSU2_TR(0x766443);
{goto L766644;}
}
B766448:L766448:{c.instructions+=3;NFSU2_TR(0x766448);
__builtin_memmove((R+0),gp(0x8b87d8),4);
}
B76644d:{NFSU2_TR(0x76644d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76644f:{NFSU2_TR(0x76644f);
if(r1(R+518)){{goto L766458;}}
}
B766451:L766451:{c.instructions+=2;NFSU2_TR(0x766451);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766452:{NFSU2_TR(0x766452);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766457ull));
TAIL_STATIC(0x75c6dau,75c);
}
B766457:L766457:{c.instructions+=1;NFSU2_TR(0x766457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766458:L766458:{c.instructions+=2;NFSU2_TR(0x766458);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766459:{NFSU2_TR(0x766459);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76645eull));
{goto L766bc0;}
}
B76645e:L76645e:{c.instructions+=3;NFSU2_TR(0x76645e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76645f:{NFSU2_TR(0x76645f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766460:{NFSU2_TR(0x766460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766465ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B766465:L766465:{c.instructions+=5;NFSU2_TR(0x766465);
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
B766467:{NFSU2_TR(0x766467);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766468:{NFSU2_TR(0x766468);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766469:{NFSU2_TR(0x766469);
__builtin_memmove(gp(0x8b87d8),(R+0),4);
}
B76646e:{NFSU2_TR(0x76646e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76643bu);}goto L76643b;}}
}
B766470:L766470:{c.instructions+=3;NFSU2_TR(0x766470);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766471:{NFSU2_TR(0x766471);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766472:{NFSU2_TR(0x766472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766477ull));
{goto L766ac0;}
}
B766477:L766477:{c.instructions+=2;NFSU2_TR(0x766477);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766479:{NFSU2_TR(0x766479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76647eull));
TAIL_STATIC(0x76315du,763);
}
B76647e:L76647e:{c.instructions+=4;NFSU2_TR(0x76647e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766480:{NFSU2_TR(0x766480);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766481:{NFSU2_TR(0x766481);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a7f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766487:{NFSU2_TR(0x766487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76648cull));
TAIL_STATIC(0x75c840u,75c);
}
B76648c:L76648c:{c.instructions+=6;NFSU2_TR(0x76648c);
__builtin_memmove((R+0),gp(0x81a7f0),4);
}
B766491:{NFSU2_TR(0x766491);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B766494:{NFSU2_TR(0x766494);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B766497:{NFSU2_TR(0x766497);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76649a:{NFSU2_TR(0x76649a);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x2dull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x2dull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x2dull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B76649d:{NFSU2_TR(0x76649d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7664a7;}}
}
B76649f:L76649f:{c.instructions+=2;NFSU2_TR(0x76649f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7664a6:{NFSU2_TR(0x7664a6);
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
B7664a7:L7664a7:{c.instructions+=2;NFSU2_TR(0x7664a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7664a8:{NFSU2_TR(0x7664a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7664adull));
TAIL_STATIC(0x75d5d3u,75d);
}
B7664ad:L7664ad:{c.instructions+=3;NFSU2_TR(0x7664ad);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xe10ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7664b3:{NFSU2_TR(0x7664b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7664b4:{NFSU2_TR(0x7664b4);
__builtin_memmove(gp(0x81a760),(R+0),4);
}
B7664b9:L7664b9:{c.instructions+=3;NFSU2_TR(0x7664b9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7664bb:{NFSU2_TR(0x7664bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2bull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7664bd:{NFSU2_TR(0x7664bd);
if(r1(R+518)){{goto L7664c7;}}
}
B7664bf:L7664bf:{c.instructions+=2;NFSU2_TR(0x7664bf);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B7664c1:{NFSU2_TR(0x7664c1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7664ca;}}
}
B7664c3:L7664c3:{c.instructions+=2;NFSU2_TR(0x7664c3);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7664c5:{NFSU2_TR(0x7664c5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7664ca;}}
}
B7664c7:L7664c7:{c.instructions+=2;NFSU2_TR(0x7664c7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7664c8:{NFSU2_TR(0x7664c8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7664b9u);}goto L7664b9;}
}
B7664ca:L7664ca:{c.instructions+=2;NFSU2_TR(0x7664ca);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(U+1))<(u8(0x3aull))));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7664cd:{NFSU2_TR(0x7664cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76650d;}}
}
B7664cf:L7664cf:{c.instructions+=3;NFSU2_TR(0x7664cf);
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
B7664d0:{NFSU2_TR(0x7664d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7664d1:{NFSU2_TR(0x7664d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7664d6ull));
TAIL_STATIC(0x75d5d3u,75d);
}
B7664d6:L7664d6:{c.instructions+=4;NFSU2_TR(0x7664d6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7664d9:{NFSU2_TR(0x7664d9);
s4(0x81a760,u32(u32(m4(0x81a760))+u32(r4(R+0))));
}
B7664df:{NFSU2_TR(0x7664df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7664e0:{NFSU2_TR(0x7664e0);
{goto L7664e7;}
}
B7664e2:L7664e2:{c.instructions+=2;NFSU2_TR(0x7664e2);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7664e4:{NFSU2_TR(0x7664e4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7664ed;}}
}
B7664e6:L7664e6:{c.instructions+=1;NFSU2_TR(0x7664e6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7664e7:L7664e7:{c.instructions+=3;NFSU2_TR(0x7664e7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7664e9:{NFSU2_TR(0x7664e9);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B7664eb:{NFSU2_TR(0x7664eb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7664e2u);}goto L7664e2;}}
}
B7664ed:L7664ed:{c.instructions+=2;NFSU2_TR(0x7664ed);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(U+1))<(u8(0x3aull))));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7664f0:{NFSU2_TR(0x7664f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76650d;}}
}
B7664f2:L7664f2:{c.instructions+=3;NFSU2_TR(0x7664f2);
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
B7664f3:{NFSU2_TR(0x7664f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7664f4:{NFSU2_TR(0x7664f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7664f9ull));
TAIL_STATIC(0x75d5d3u,75d);
}
B7664f9:L7664f9:{c.instructions+=3;NFSU2_TR(0x7664f9);
s4(0x81a760,u32(u32(m4(0x81a760))+u32(r4(R+0))));
}
B7664ff:{NFSU2_TR(0x7664ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766500:{NFSU2_TR(0x766500);
{goto L766507;}
}
B766502:L766502:{c.instructions+=2;NFSU2_TR(0x766502);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B766504:{NFSU2_TR(0x766504);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76650d;}}
}
B766506:L766506:{c.instructions+=1;NFSU2_TR(0x766506);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B766507:L766507:{c.instructions+=3;NFSU2_TR(0x766507);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B766509:{NFSU2_TR(0x766509);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B76650b:{NFSU2_TR(0x76650b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766502u);}goto L766502;}}
}
B76650d:L76650d:{c.instructions+=2;NFSU2_TR(0x76650d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766510:{NFSU2_TR(0x766510);
if(r1(R+518)){{goto L766518;}}
}
B766512:L766512:{c.instructions+=1;NFSU2_TR(0x766512);
s4(0x81a760,u32(0-u32(m4(0x81a760))));
}
B766518:L766518:{c.instructions+=4;NFSU2_TR(0x766518);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B76651b:{NFSU2_TR(0x76651b);
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
B76651d:{NFSU2_TR(0x76651d);
__builtin_memmove(gp(0x81a764),(R+0),4);
}
B766522:{NFSU2_TR(0x766522);
if(r1(R+518)){{goto L76663d;}}
}
B766528:L766528:{c.instructions+=4;NFSU2_TR(0x766528);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76652a:{NFSU2_TR(0x76652a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76652b:{NFSU2_TR(0x76652b);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a7f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766531:{NFSU2_TR(0x766531);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766536ull));
TAIL_STATIC(0x75c840u,75c);
}
B766536:L766536:{c.instructions+=4;NFSU2_TR(0x766536);
__builtin_memmove((R+0),gp(0x81a7f4),4);
}
B76653b:{NFSU2_TR(0x76653b);
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
B76653e:{NFSU2_TR(0x76653e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B766541:{NFSU2_TR(0x766541);
{goto L766644;}
}
B766546:L766546:{c.instructions+=3;NFSU2_TR(0x766546);
__builtin_memmove((R+0),gp(0x8b87d8),4);
}
B76654b:{NFSU2_TR(0x76654b);
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
B76654d:{NFSU2_TR(0x76654d);
if(r1(R+518)){{goto L76655c;}}
}
B76654f:L76654f:{c.instructions+=2;NFSU2_TR(0x76654f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766550:{NFSU2_TR(0x766550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766555ull));
TAIL_STATIC(0x75c6dau,75c);
}
B766555:L766555:{c.instructions+=2;NFSU2_TR(0x766555);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766556:{NFSU2_TR(0x766556);
__builtin_memmove(gp(0x8b87d8),(R+12),4);
}
B76655c:L76655c:{c.instructions+=2;NFSU2_TR(0x76655c);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76655e:{NFSU2_TR(0x76655e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766563ull));
TAIL_STATIC(0x76315du,763);
}
B766563:L766563:{c.instructions+=2;NFSU2_TR(0x766563);
u8 U[4];
w4(U+0,u32(0x8b8728ull));
s4(u32(r4(R+16)),r4(U+0));
}
B76656a:{NFSU2_TR(0x76656a);
u8 U[4];
__builtin_memmove((U+0),gp(0x78329c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766570ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B766570:L766570:{c.instructions+=2;NFSU2_TR(0x766570);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B766573:{NFSU2_TR(0x766573);
if(r1(R+518)){{goto L766644;}}
}
B766579:L766579:{c.instructions+=9;NFSU2_TR(0x766579);
__builtin_memmove((R+0),gp(0x8b8728),4);
}
B76657e:{NFSU2_TR(0x76657e);
__builtin_memmove((R+4),gp(0x8b877c),4);
}
B766584:{NFSU2_TR(0x766584);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B766587:{NFSU2_TR(0x766587);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B766589:{NFSU2_TR(0x766589);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B76658a:{NFSU2_TR(0x76658a);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b876e),2);
w2(U+2,u16(u32(r2(U+0))-u32(r2(R+12))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B766591:{NFSU2_TR(0x766591);
__builtin_memmove(gp(0x8b87d4),(R+8),4);
}
B766597:{NFSU2_TR(0x766597);
__builtin_memmove(gp(0x81a760),(R+0),4);
}
B76659c:{NFSU2_TR(0x76659c);
if(r1(R+518)){{goto L7665aa;}}
}
B76659e:L76659e:{c.instructions+=4;NFSU2_TR(0x76659e);
__builtin_memmove((R+24),(R+4),4);
}
B7665a0:{NFSU2_TR(0x7665a0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B7665a3:{NFSU2_TR(0x7665a3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B7665a5:{NFSU2_TR(0x7665a5);
__builtin_memmove(gp(0x81a760),(R+0),4);
}
B7665aa:L7665aa:{c.instructions+=2;NFSU2_TR(0x7665aa);
u8 U[8];
__builtin_memmove((U+4),gp(0x8b87c2),2);
w1(R+512,u8((r2(U+4))<(r2(R+12))));
w1(R+523,sborrow<u16>(r2(U+4),r2(R+12)));
w2(U+6,u16(u32(r2(U+4))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B7665b1:{NFSU2_TR(0x7665b1);
if(r1(R+518)){{goto L7665ce;}}
}
B7665b3:L7665b3:{c.instructions+=3;NFSU2_TR(0x7665b3);
__builtin_memmove((R+0),gp(0x8b87d0),4);
}
B7665b8:{NFSU2_TR(0x7665b8);
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
B7665ba:{NFSU2_TR(0x7665ba);
if(r1(R+518)){{goto L7665ce;}}
}
B7665bc:L7665bc:{c.instructions+=5;NFSU2_TR(0x7665bc);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7665be:{NFSU2_TR(0x7665be);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x3cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B7665c1:{NFSU2_TR(0x7665c1);
__builtin_memmove(gp(0x81a764),(R+8),4);
}
B7665c7:{NFSU2_TR(0x7665c7);
__builtin_memmove(gp(0x81a768),(R+0),4);
}
B7665cc:{NFSU2_TR(0x7665cc);
{goto L7665da;}
}
B7665ce:L7665ce:{c.instructions+=2;NFSU2_TR(0x7665ce);
__builtin_memmove(gp(0x81a764),(R+12),4);
}
B7665d4:{NFSU2_TR(0x7665d4);
__builtin_memmove(gp(0x81a768),(R+12),4);
}
B7665da:L7665da:{c.instructions+=11;NFSU2_TR(0x7665da);
__builtin_memmove((R+24),gp(0x78319c),4);
}
B7665e0:{NFSU2_TR(0x7665e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B7665e3:{NFSU2_TR(0x7665e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7665e4:{NFSU2_TR(0x7665e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7665e5:{NFSU2_TR(0x7665e5);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7665e7:{NFSU2_TR(0x7665e7);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a7f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7665ed:{NFSU2_TR(0x7665ed);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7665ef:{NFSU2_TR(0x7665ef);
u8 U[4];
w4(U+0,u32(0x8b872cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7665f4:{NFSU2_TR(0x7665f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7665f5:{NFSU2_TR(0x7665f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7665f6:{NFSU2_TR(0x7665f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7665f8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7665f8:L7665f8:{c.instructions+=2;NFSU2_TR(0x7665f8);
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
B7665fa:{NFSU2_TR(0x7665fa);
if(r1(R+518)){{goto L76660b;}}
}
B7665fc:L7665fc:{c.instructions+=2;NFSU2_TR(0x7665fc);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B7665ff:{NFSU2_TR(0x7665ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76660b;}}
}
B766601:L766601:{c.instructions+=3;NFSU2_TR(0x766601);
__builtin_memmove((R+0),gp(0x81a7f0),4);
}
B766606:{NFSU2_TR(0x766606);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3full))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B766609:{NFSU2_TR(0x766609);
{goto L766612;}
}
B76660b:L76660b:{c.instructions+=2;NFSU2_TR(0x76660b);
__builtin_memmove((R+0),gp(0x81a7f0),4);
}
B766610:{NFSU2_TR(0x766610);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B766612:L766612:{c.instructions+=10;NFSU2_TR(0x766612);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B766615:{NFSU2_TR(0x766615);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766616:{NFSU2_TR(0x766616);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766617:{NFSU2_TR(0x766617);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766619:{NFSU2_TR(0x766619);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a7f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76661f:{NFSU2_TR(0x76661f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766621:{NFSU2_TR(0x766621);
u8 U[4];
w4(U+0,u32(0x8b8780ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766626:{NFSU2_TR(0x766626);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766627:{NFSU2_TR(0x766627);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766628:{NFSU2_TR(0x766628);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76662aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76662a:L76662a:{c.instructions+=2;NFSU2_TR(0x76662a);
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
B76662c:{NFSU2_TR(0x76662c);
if(r1(R+518)){{goto L76663d;}}
}
B76662e:L76662e:{c.instructions+=2;NFSU2_TR(0x76662e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B766631:{NFSU2_TR(0x766631);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76663d;}}
}
B766633:L766633:{c.instructions+=3;NFSU2_TR(0x766633);
__builtin_memmove((R+0),gp(0x81a7f4),4);
}
B766638:{NFSU2_TR(0x766638);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3full))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76663b:{NFSU2_TR(0x76663b);
{goto L766644;}
}
B76663d:L76663d:{c.instructions+=2;NFSU2_TR(0x76663d);
__builtin_memmove((R+0),gp(0x81a7f4),4);
}
B766642:{NFSU2_TR(0x766642);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B766644:L766644:{c.instructions+=5;NFSU2_TR(0x766644);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B766645:{NFSU2_TR(0x766645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B766646:{NFSU2_TR(0x766646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B766647:{NFSU2_TR(0x766647);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B766648:{NFSU2_TR(0x766648);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766649:L766649:{c.instructions+=16;NFSU2_TR(0x766649);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76664a:{NFSU2_TR(0x76664a);
__builtin_memmove((R+20),(R+16),4);
}
B76664c:{NFSU2_TR(0x76664c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76664d:{NFSU2_TR(0x76664d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76664e:{NFSU2_TR(0x76664e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76664f:{NFSU2_TR(0x76664f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766650:{NFSU2_TR(0x766650);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766651:{NFSU2_TR(0x766651);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B766654:{NFSU2_TR(0x766654);
__builtin_memmove((R+24),(R+0),4);
}
B766656:{NFSU2_TR(0x766656);
__builtin_memmove((R+0),(R+28),4);
}
B766658:{NFSU2_TR(0x766658);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76665a:{NFSU2_TR(0x76665a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76665b:{NFSU2_TR(0x76665b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76665c:{NFSU2_TR(0x76665c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76665c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76665c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76665e:{NFSU2_TR(0x76665e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766662:{NFSU2_TR(0x766662);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766751;}}
}
B766668:L766668:{c.instructions+=3;NFSU2_TR(0x766668);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76666a:{NFSU2_TR(0x76666a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76666d:{NFSU2_TR(0x76666d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76667b;}}
}
B76666f:L76666f:{c.instructions+=7;NFSU2_TR(0x76666f);
__builtin_memmove((R+0),(R+28),4);
}
B766671:{NFSU2_TR(0x766671);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766673:{NFSU2_TR(0x766673);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B766674:{NFSU2_TR(0x766674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B766675:{NFSU2_TR(0x766675);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x766675);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x766675);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B766677:{NFSU2_TR(0x766677);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766679:{NFSU2_TR(0x766679);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76669a;}}
}
B76667b:L76667b:{c.instructions+=6;NFSU2_TR(0x76667b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x76cull))));
__builtin_memmove((R+0),(U+0),4);
}
B766681:{NFSU2_TR(0x766681);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B766682:{NFSU2_TR(0x766682);
w4(R+12,u32(0x190ull));
}
B766687:{NFSU2_TR(0x766687);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x766687);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x766687);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B766689:{NFSU2_TR(0x766689);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76668b:{NFSU2_TR(0x76668b);
if(r1(R+518)){{goto L76669a;}}
}
B76668d:L76668d:{c.instructions+=4;NFSU2_TR(0x76668d);
__builtin_memmove((R+0),(R+24),4);
}
B76668f:{NFSU2_TR(0x76668f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B766692:{NFSU2_TR(0x766692);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x81ac70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B766698:{NFSU2_TR(0x766698);
{goto L7666a5;}
}
B76669a:L76669a:{c.instructions+=3;NFSU2_TR(0x76669a);
__builtin_memmove((R+0),(R+24),4);
}
B76669c:{NFSU2_TR(0x76669c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B76669f:{NFSU2_TR(0x76669f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x81ac3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7666a5:L7666a5:{c.instructions+=38;NFSU2_TR(0x7666a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7666a8:{NFSU2_TR(0x7666a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12bull))));
__builtin_memmove((R+0),(U+0),4);
}
B7666ae:{NFSU2_TR(0x7666ae);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7666af:{NFSU2_TR(0x7666af);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B7666b2:{NFSU2_TR(0x7666b2);
w4(R+28,u32(0x190ull));
}
B7666b7:{NFSU2_TR(0x7666b7);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7666b7);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7666b7);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7666b9:{NFSU2_TR(0x7666b9);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7666bb:{NFSU2_TR(0x7666bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7666bc:{NFSU2_TR(0x7666bc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7666bd:{NFSU2_TR(0x7666bd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7666bf:{NFSU2_TR(0x7666bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7666c2:{NFSU2_TR(0x7666c2);
__builtin_memmove((R+0),(R+12),4);
}
B7666c4:{NFSU2_TR(0x7666c4);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7666c5:{NFSU2_TR(0x7666c5);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7666c5);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7666c5);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7666c7:{NFSU2_TR(0x7666c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7666ca:{NFSU2_TR(0x7666ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7666cb:{NFSU2_TR(0x7666cb);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7666cd:{NFSU2_TR(0x7666cd);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B7666cf:{NFSU2_TR(0x7666cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7666d2:{NFSU2_TR(0x7666d2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B7666d3:{NFSU2_TR(0x7666d3);
__builtin_memmove((R+12),(R+8),4);
}
B7666d5:{NFSU2_TR(0x7666d5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7666d6:{NFSU2_TR(0x7666d6);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7666d6);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7666d6);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7666d8:{NFSU2_TR(0x7666d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7666db:{NFSU2_TR(0x7666db);
__builtin_memmove((R+8),(R+28),4);
}
B7666dd:{NFSU2_TR(0x7666dd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x16dull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B7666e3:{NFSU2_TR(0x7666e3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B7666e5:{NFSU2_TR(0x7666e5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B7666e7:{NFSU2_TR(0x7666e7);
u8 U[12];
w4(U+0,u32(u32(u32(0xffff9c25ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7666ee:{NFSU2_TR(0x7666ee);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7666ef:{NFSU2_TR(0x7666ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7666f0:{NFSU2_TR(0x7666f0);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7666f0);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7666f0);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7666f2:{NFSU2_TR(0x7666f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7666f5:{NFSU2_TR(0x7666f5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7666f8:{NFSU2_TR(0x7666f8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B7666fa:{NFSU2_TR(0x7666fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7666fd:{NFSU2_TR(0x7666fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766700:{NFSU2_TR(0x766700);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L766708;}}
}
B766702:L766702:{c.instructions+=2;NFSU2_TR(0x766702);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff9ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B766706:{NFSU2_TR(0x766706);
{goto L76670a;}
}
B766708:L766708:{c.instructions+=1;NFSU2_TR(0x766708);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B76670a:L76670a:{c.instructions+=2;NFSU2_TR(0x76670a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76670e:{NFSU2_TR(0x76670e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766786;}}
}
B766710:L766710:{c.instructions+=2;NFSU2_TR(0x766710);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766714:{NFSU2_TR(0x766714);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766722;}}
}
B766716:L766716:{c.instructions+=7;NFSU2_TR(0x766716);
__builtin_memmove((R+0),(R+28),4);
}
B766718:{NFSU2_TR(0x766718);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76671a:{NFSU2_TR(0x76671a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76671b:{NFSU2_TR(0x76671b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76671c:{NFSU2_TR(0x76671c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76671c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76671c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76671e:{NFSU2_TR(0x76671e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766720:{NFSU2_TR(0x766720);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76673f;}}
}
B766722:L766722:{c.instructions+=6;NFSU2_TR(0x766722);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x76cull))));
__builtin_memmove((R+0),(U+0),4);
}
B766728:{NFSU2_TR(0x766728);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B766729:{NFSU2_TR(0x766729);
w4(R+12,u32(0x190ull));
}
B76672e:{NFSU2_TR(0x76672e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76672e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76672e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B766730:{NFSU2_TR(0x766730);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766732:{NFSU2_TR(0x766732);
if(r1(R+518)){{goto L76673f;}}
}
B766734:L766734:{c.instructions+=3;NFSU2_TR(0x766734);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766737:{NFSU2_TR(0x766737);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x81ac74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76673d:{NFSU2_TR(0x76673d);
{goto L766748;}
}
B76673f:L76673f:{c.instructions+=2;NFSU2_TR(0x76673f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766742:{NFSU2_TR(0x766742);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x81ac40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766748:L766748:{c.instructions+=2;NFSU2_TR(0x766748);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76674a:{NFSU2_TR(0x76674a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L766786;}}
}
B76674c:L76674c:{c.instructions+=2;NFSU2_TR(0x76674c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x7ull))));
}
B76674f:{NFSU2_TR(0x76674f);
{goto L766786;}
}
B766751:L766751:{c.instructions+=2;NFSU2_TR(0x766751);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766753:{NFSU2_TR(0x766753);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766761;}}
}
B766755:L766755:{c.instructions+=7;NFSU2_TR(0x766755);
__builtin_memmove((R+0),(R+28),4);
}
B766757:{NFSU2_TR(0x766757);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766759:{NFSU2_TR(0x766759);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76675a:{NFSU2_TR(0x76675a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76675b:{NFSU2_TR(0x76675b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76675b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76675b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76675d:{NFSU2_TR(0x76675d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76675f:{NFSU2_TR(0x76675f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76677c;}}
}
B766761:L766761:{c.instructions+=6;NFSU2_TR(0x766761);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x76cull))));
__builtin_memmove((R+0),(U+0),4);
}
B766767:{NFSU2_TR(0x766767);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B766768:{NFSU2_TR(0x766768);
w4(R+12,u32(0x190ull));
}
B76676d:{NFSU2_TR(0x76676d);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76676d);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76676d);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76676f:{NFSU2_TR(0x76676f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766771:{NFSU2_TR(0x766771);
if(r1(R+518)){{goto L76677c;}}
}
B766773:L766773:{c.instructions+=2;NFSU2_TR(0x766773);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x81ac70ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B76677a:{NFSU2_TR(0x76677a);
{goto L766783;}
}
B76677c:L76677c:{c.instructions+=1;NFSU2_TR(0x76677c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x81ac3cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B766783:L766783:{c.instructions+=1;NFSU2_TR(0x766783);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B766786:L766786:{c.instructions+=5;NFSU2_TR(0x766786);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B766789:{NFSU2_TR(0x766789);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B76678c:{NFSU2_TR(0x76678c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B76678f:{NFSU2_TR(0x76678f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766793:{NFSU2_TR(0x766793);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7667b5;}}
}
B766795:L766795:{c.instructions+=7;NFSU2_TR(0x766795);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B766798:{NFSU2_TR(0x766798);
__builtin_memmove(gp(0x81a7fc),(R+24),4);
}
B76679e:{NFSU2_TR(0x76679e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B7667a4:{NFSU2_TR(0x7667a4);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
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
B7667a7:{NFSU2_TR(0x7667a7);
__builtin_memmove(gp(0x81a7f8),(R+28),4);
}
B7667ad:{NFSU2_TR(0x7667ad);
__builtin_memmove(gp(0x81a800),(R+4),4);
}
B7667b3:{NFSU2_TR(0x7667b3);
{goto L7667fc;}
}
B7667b5:L7667b5:{c.instructions+=7;NFSU2_TR(0x7667b5);
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x81a768))));
}
B7667bb:{NFSU2_TR(0x7667bb);
__builtin_memmove(gp(0x81a808),(R+24),4);
}
B7667c1:{NFSU2_TR(0x7667c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B7667c4:{NFSU2_TR(0x7667c4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B7667ca:{NFSU2_TR(0x7667ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B7667cd:{NFSU2_TR(0x7667cd);
__builtin_memmove(gp(0x81a80c),(R+4),4);
}
B7667d3:{NFSU2_TR(0x7667d3);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L7667de;}}
}
B7667d5:L7667d5:{c.instructions+=3;NFSU2_TR(0x7667d5);
w1(R+512,carry<u32>(r4(R+4),u32(0x5265c00ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5265c00ull))));
}
B7667db:{NFSU2_TR(0x7667db);
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
B7667dc:{NFSU2_TR(0x7667dc);
{goto L7667ea;}
}
B7667de:L7667de:{c.instructions+=3;NFSU2_TR(0x7667de);
w4(R+0,u32(0x5265c00ull));
}
B7667e3:{NFSU2_TR(0x7667e3);
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
B7667e5:{NFSU2_TR(0x7667e5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7667f6;}}
}
B7667e7:L7667e7:{c.instructions+=2;NFSU2_TR(0x7667e7);
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B7667e9:{NFSU2_TR(0x7667e9);
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
B7667ea:L7667ea:{c.instructions+=2;NFSU2_TR(0x7667ea);
__builtin_memmove(gp(0x81a80c),(R+4),4);
}
B7667f0:{NFSU2_TR(0x7667f0);
__builtin_memmove(gp(0x81a808),(R+24),4);
}
B7667f6:L7667f6:{c.instructions+=1;NFSU2_TR(0x7667f6);
__builtin_memmove(gp(0x81a804),(R+28),4);
}
B7667fc:L7667fc:{c.instructions+=5;NFSU2_TR(0x7667fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7667fd:{NFSU2_TR(0x7667fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7667fe:{NFSU2_TR(0x7667fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7667ff:{NFSU2_TR(0x7667ff);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B766800:{NFSU2_TR(0x766800);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766801:L766801:{c.instructions+=4;NFSU2_TR(0x766801);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766802:{NFSU2_TR(0x766802);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B766804:{NFSU2_TR(0x766804);
u8 U[8];
__builtin_memmove((U+0),gp(0x81a764),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76680a:{NFSU2_TR(0x76680a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766810;}}
}
B76680c:L76680c:{c.instructions+=3;NFSU2_TR(0x76680c);
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
B76680e:{NFSU2_TR(0x76680e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76680f:{NFSU2_TR(0x76680f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766810:L766810:{c.instructions+=6;NFSU2_TR(0x766810);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B766813:{NFSU2_TR(0x766813);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766814:{NFSU2_TR(0x766814);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B766816:{NFSU2_TR(0x766816);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B766817:{NFSU2_TR(0x766817);
u8 U[8];
__builtin_memmove((U+0),gp(0x81a7f8),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76681d:{NFSU2_TR(0x76681d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76682b;}}
}
B76681f:L76681f:{c.instructions+=2;NFSU2_TR(0x76681f);
u8 U[8];
__builtin_memmove((U+0),gp(0x81a804),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766825:{NFSU2_TR(0x766825);
if(r1(R+518)){{goto L76691d;}}
}
B76682b:L76682b:{c.instructions+=2;NFSU2_TR(0x76682b);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b87d4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766831:{NFSU2_TR(0x766831);
if(r1(R+518)){{goto L7668ef;}}
}
B766837:L766837:{c.instructions+=9;NFSU2_TR(0x766837);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b87c0),2);
w2(U+2,u16(u32(r2(U+0))-u32(r2(R+28))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B76683e:{NFSU2_TR(0x76683e);
w4(R+0,u32(m2(0x8b87ce)));
}
B766845:{NFSU2_TR(0x766845);
w4(R+4,u32(m2(0x8b87c8)));
}
B76684c:{NFSU2_TR(0x76684c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76684d:{NFSU2_TR(0x76684d);
w4(R+0,u32(m2(0x8b87cc)));
}
B766854:{NFSU2_TR(0x766854);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766855:{NFSU2_TR(0x766855);
w4(R+0,u32(m2(0x8b87ca)));
}
B76685c:{NFSU2_TR(0x76685c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76685d:{NFSU2_TR(0x76685d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766874;}}
}
B76685f:L76685f:{c.instructions+=8;NFSU2_TR(0x76685f);
w4(R+0,u32(m2(0x8b87c4)));
}
B766866:{NFSU2_TR(0x766866);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766867:{NFSU2_TR(0x766867);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766868:{NFSU2_TR(0x766868);
w4(R+0,u32(m2(0x8b87c6)));
}
B76686f:{NFSU2_TR(0x76686f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766870:{NFSU2_TR(0x766870);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766871:{NFSU2_TR(0x766871);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766872:{NFSU2_TR(0x766872);
{goto L766880;}
}
B766874:L766874:{c.instructions+=6;NFSU2_TR(0x766874);
w4(R+0,u32(m2(0x8b87c6)));
}
B76687b:{NFSU2_TR(0x76687b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76687c:{NFSU2_TR(0x76687c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76687d:{NFSU2_TR(0x76687d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76687e:{NFSU2_TR(0x76687e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76687f:{NFSU2_TR(0x76687f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766880:L766880:{c.instructions+=3;NFSU2_TR(0x766880);
w4(R+0,u32(m2(0x8b87c2)));
}
B766887:{NFSU2_TR(0x766887);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766888:{NFSU2_TR(0x766888);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76688dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766649u);}goto L766649;}
}
B76688d:L76688d:{c.instructions+=10;NFSU2_TR(0x76688d);
w4(R+0,u32(m2(0x8b877a)));
}
B766894:{NFSU2_TR(0x766894);
w4(R+4,u32(m2(0x8b8774)));
}
B76689b:{NFSU2_TR(0x76689b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B76689e:{NFSU2_TR(0x76689e);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b876c),2);
w2(U+2,u16(u32(r2(U+0))-u32(r2(R+28))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B7668a5:{NFSU2_TR(0x7668a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668a6:{NFSU2_TR(0x7668a6);
w4(R+0,u32(m2(0x8b8778)));
}
B7668ad:{NFSU2_TR(0x7668ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668ae:{NFSU2_TR(0x7668ae);
w4(R+0,u32(m2(0x8b8776)));
}
B7668b5:{NFSU2_TR(0x7668b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668b6:{NFSU2_TR(0x7668b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7668df;}}
}
B7668b8:L7668b8:{c.instructions+=7;NFSU2_TR(0x7668b8);
w4(R+0,u32(m2(0x8b8770)));
}
B7668bf:{NFSU2_TR(0x7668bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668c0:{NFSU2_TR(0x7668c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668c1:{NFSU2_TR(0x7668c1);
w4(R+0,u32(m2(0x8b8772)));
}
B7668c8:{NFSU2_TR(0x7668c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668c9:{NFSU2_TR(0x7668c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7668cc:{NFSU2_TR(0x7668cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668cd:L7668cd:{c.instructions+=3;NFSU2_TR(0x7668cd);
w4(R+0,u32(m2(0x8b876e)));
}
B7668d4:{NFSU2_TR(0x7668d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668d5:{NFSU2_TR(0x7668d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7668daull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766649u);}goto L766649;}
}
B7668da:L7668da:{c.instructions+=2;NFSU2_TR(0x7668da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B7668dd:{NFSU2_TR(0x7668dd);
{goto L76691d;}
}
B7668df:L7668df:{c.instructions+=7;NFSU2_TR(0x7668df);
w4(R+0,u32(m2(0x8b8772)));
}
B7668e6:{NFSU2_TR(0x7668e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668e7:{NFSU2_TR(0x7668e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668e8:{NFSU2_TR(0x7668e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668e9:{NFSU2_TR(0x7668e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7668ec:{NFSU2_TR(0x7668ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668ed:{NFSU2_TR(0x7668ed);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7668cdu);}goto L7668cd;}
}
B7668ef:L7668ef:{c.instructions+=14;NFSU2_TR(0x7668ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668f0:{NFSU2_TR(0x7668f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668f1:{NFSU2_TR(0x7668f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668f2:{NFSU2_TR(0x7668f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668f3:{NFSU2_TR(0x7668f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668f4:{NFSU2_TR(0x7668f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668f5:{NFSU2_TR(0x7668f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668f6:{NFSU2_TR(0x7668f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668f7:{NFSU2_TR(0x7668f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668f8:{NFSU2_TR(0x7668f8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668fa:{NFSU2_TR(0x7668fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7668fb:{NFSU2_TR(0x7668fb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7668fd:{NFSU2_TR(0x7668fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7668fe:{NFSU2_TR(0x7668fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766903ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766649u);}goto L766649;}
}
B766903:L766903:{c.instructions+=14;NFSU2_TR(0x766903);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766904:{NFSU2_TR(0x766904);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766905:{NFSU2_TR(0x766905);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766906:{NFSU2_TR(0x766906);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766907:{NFSU2_TR(0x766907);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766908:{NFSU2_TR(0x766908);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76690a:{NFSU2_TR(0x76690a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76690d:{NFSU2_TR(0x76690d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76690e:{NFSU2_TR(0x76690e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76690f:{NFSU2_TR(0x76690f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766911:{NFSU2_TR(0x766911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766912:{NFSU2_TR(0x766912);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766914:{NFSU2_TR(0x766914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B766915:{NFSU2_TR(0x766915);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76691aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766649u);}goto L766649;}
}
B76691a:L76691a:{c.instructions+=1;NFSU2_TR(0x76691a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B76691d:L76691d:{c.instructions+=5;NFSU2_TR(0x76691d);
__builtin_memmove((R+8),gp(0x81a7fc),4);
}
B766923:{NFSU2_TR(0x766923);
__builtin_memmove((R+0),gp(0x81a808),4);
}
B766928:{NFSU2_TR(0x766928);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76692a:{NFSU2_TR(0x76692a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76692d:{NFSU2_TR(0x76692d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L766948;}}
}
B76692f:L76692f:{c.instructions+=2;NFSU2_TR(0x76692f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B766931:{NFSU2_TR(0x766931);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L766944;}}
}
B766933:L766933:{c.instructions+=2;NFSU2_TR(0x766933);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766935:{NFSU2_TR(0x766935);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L766944;}}
}
B766937:L766937:{c.instructions+=2;NFSU2_TR(0x766937);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766939:{NFSU2_TR(0x766939);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L766958;}}
}
B76693b:L76693b:{c.instructions+=2;NFSU2_TR(0x76693b);
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
B76693d:{NFSU2_TR(0x76693d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L766958;}}
}
B76693f:L76693f:{c.instructions+=1;NFSU2_TR(0x76693f);
__builtin_memmove((R+0),(R+12),4);
}
B766941:L766941:{c.instructions+=3;NFSU2_TR(0x766941);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B766942:{NFSU2_TR(0x766942);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B766943:{NFSU2_TR(0x766943);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766944:L766944:{c.instructions+=2;NFSU2_TR(0x766944);
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
B766946:{NFSU2_TR(0x766946);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766941u);}goto L766941;}
}
B766948:L766948:{c.instructions+=2;NFSU2_TR(0x766948);
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
B76694a:{NFSU2_TR(0x76694a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76693fu);}goto L76693f;}}
}
B76694c:L76694c:{c.instructions+=2;NFSU2_TR(0x76694c);
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
B76694e:{NFSU2_TR(0x76694e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76693fu);}goto L76693f;}}
}
B766950:L766950:{c.instructions+=2;NFSU2_TR(0x766950);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766952:{NFSU2_TR(0x766952);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L766958;}}
}
B766954:L766954:{c.instructions+=2;NFSU2_TR(0x766954);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B766956:{NFSU2_TR(0x766956);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766944u);}goto L766944;}}
}
B766958:L766958:{c.instructions+=8;NFSU2_TR(0x766958);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76695b:{NFSU2_TR(0x76695b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B76695e:{NFSU2_TR(0x76695e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B766961:{NFSU2_TR(0x766961);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B766964:{NFSU2_TR(0x766964);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B766966:{NFSU2_TR(0x766966);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B76696c:{NFSU2_TR(0x76696c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76696e:{NFSU2_TR(0x76696e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76697f;}}
}
B766970:L766970:{c.instructions+=3;NFSU2_TR(0x766970);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B766972:{NFSU2_TR(0x766972);
u8 U[14];
__builtin_memmove((U+6),gp(0x81a800),4);
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
B766978:{NFSU2_TR(0x766978);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B76697b:L76697b:{c.instructions+=2;NFSU2_TR(0x76697b);
__builtin_memmove((R+0),(R+4),4);
}
B76697d:{NFSU2_TR(0x76697d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766941u);}goto L766941;}
}
B76697f:L76697f:{c.instructions+=4;NFSU2_TR(0x76697f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B766981:{NFSU2_TR(0x766981);
u8 U[14];
__builtin_memmove((U+6),gp(0x81a80c),4);
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
B766987:{NFSU2_TR(0x766987);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B76698a:{NFSU2_TR(0x76698a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76697bu);}goto L76697b;}
}
B76698c:L76698c:{c.instructions+=2;NFSU2_TR(0x76698c);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b87dc),4);
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
B766993:{NFSU2_TR(0x766993);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7669b9;}}
}
B766995:L766995:{c.instructions+=2;NFSU2_TR(0x766995);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766997:{NFSU2_TR(0x766997);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76699cull));
TAIL_STATIC(0x7631f1u,763);
}
B76699c:L76699c:{c.instructions+=3;NFSU2_TR(0x76699c);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b87dc),4);
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
B7669a3:{NFSU2_TR(0x7669a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7669a4:{NFSU2_TR(0x7669a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7669b1;}}
}
B7669a6:L7669a6:{c.instructions+=1;NFSU2_TR(0x7669a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7669abull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7663d8u);}goto L7663d8;}
}
B7669ab:L7669ab:{c.instructions+=1;NFSU2_TR(0x7669ab);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8b87dc),u32(0x1ull)));
s4(0x8b87dc,u32(u32(m4(0x8b87dc))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8b87dc))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b87dc))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b87dc))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7669b1:L7669b1:{c.instructions+=2;NFSU2_TR(0x7669b1);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7669b3:{NFSU2_TR(0x7669b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7669b8ull));
TAIL_STATIC(0x76315du,763);
}
B7669b8:L7669b8:{c.instructions+=1;NFSU2_TR(0x7669b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7669b9:L7669b9:{c.instructions+=1;NFSU2_TR(0x7669b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7669ba:L7669ba:{c.instructions+=3;NFSU2_TR(0x7669ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7669bb:{NFSU2_TR(0x7669bb);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7669bd:{NFSU2_TR(0x7669bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7669c2ull));
TAIL_STATIC(0x7631f1u,763);
}
B7669c2:L7669c2:{c.instructions+=2;NFSU2_TR(0x7669c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7669c6:{NFSU2_TR(0x7669c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7669cbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766801u);}goto L766801;}
}
B7669cb:L7669cb:{c.instructions+=3;NFSU2_TR(0x7669cb);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7669cd:{NFSU2_TR(0x7669cd);
__builtin_memmove((R+24),(R+0),4);
}
B7669cf:{NFSU2_TR(0x7669cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7669d4ull));
TAIL_STATIC(0x76315du,763);
}
B7669d4:L7669d4:{c.instructions+=5;NFSU2_TR(0x7669d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7669d5:{NFSU2_TR(0x7669d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7669d6:{NFSU2_TR(0x7669d6);
__builtin_memmove((R+0),(R+24),4);
}
B7669d8:{NFSU2_TR(0x7669d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7669d9:{NFSU2_TR(0x7669d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7669e0:L7669e0:{c.instructions+=4;NFSU2_TR(0x7669e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7669e1:{NFSU2_TR(0x7669e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7669e5:{NFSU2_TR(0x7669e5);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7669e7:{NFSU2_TR(0x7669e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766a01;}}
}
B7669e9:L7669e9:{c.instructions+=9;NFSU2_TR(0x7669e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7669ed:{NFSU2_TR(0x7669ed);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7669f1:{NFSU2_TR(0x7669f1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7669f3:{NFSU2_TR(0x7669f3);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7669f3);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7669f3);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7669f5:{NFSU2_TR(0x7669f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7669f9:{NFSU2_TR(0x7669f9);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7669f9);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7669f9);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7669fb:{NFSU2_TR(0x7669fb);
__builtin_memmove((R+0),(R+8),4);
}
B7669fd:{NFSU2_TR(0x7669fd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7669ff:{NFSU2_TR(0x7669ff);
{goto L766a51;}
}
B766a01:L766a01:{c.instructions+=4;NFSU2_TR(0x766a01);
__builtin_memmove((R+4),(R+0),4);
}
B766a03:{NFSU2_TR(0x766a03);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B766a07:{NFSU2_TR(0x766a07);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B766a0b:{NFSU2_TR(0x766a0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766a0f:L766a0f:{c.instructions+=6;NFSU2_TR(0x766a0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+0))!=(u32(0x0ull))));
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B766a11:{NFSU2_TR(0x766a11);
u8 U[50];
w1(U+0,u8(u32(u8(0x1ull))&u32(u8(0x1full))));
w8(U+1,u64(r1(R+512)));
w8(U+9,shl<u64>(r8(U+1),u64(u32(0x20ull))));
w8(U+17,u64(r4(R+12)));
w8(U+25,u64(u64(r8(U+9))|u64(r8(U+17))));
w8(U+33,shr<u64>(r8(U+25),u64(r1(U+0))));
w1(U+41,u8(u32(u8(0x21ull))-u32(r1(U+0))));
w8(U+42,shl<u64>(r8(U+25),u64(r1(U+41))));
w8(U+25,u64(u64(r8(U+33))|u64(r8(U+42))));
w4(R+12,u32(r8(U+25)));
}
B766a13:{NFSU2_TR(0x766a13);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+0))!=(u32(0x0ull))));
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B766a15:{NFSU2_TR(0x766a15);
u8 U[50];
w1(U+0,u8(u32(u8(0x1ull))&u32(u8(0x1full))));
w8(U+1,u64(r1(R+512)));
w8(U+9,shl<u64>(r8(U+1),u64(u32(0x20ull))));
w8(U+17,u64(r4(R+0)));
w8(U+25,u64(u64(r8(U+9))|u64(r8(U+17))));
w8(U+33,shr<u64>(r8(U+25),u64(r1(U+0))));
w1(U+41,u8(u32(u8(0x21ull))-u32(r1(U+0))));
w8(U+42,shl<u64>(r8(U+25),u64(r1(U+41))));
w8(U+25,u64(u64(r8(U+33))|u64(r8(U+42))));
w4(R+0,u32(r8(U+25)));
}
B766a17:{NFSU2_TR(0x766a17);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+4))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B766a19:{NFSU2_TR(0x766a19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766a0fu);}goto L766a0f;}}
}
B766a1b:L766a1b:{c.instructions+=7;NFSU2_TR(0x766a1b);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x766a1b);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x766a1b);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B766a1d:{NFSU2_TR(0x766a1d);
__builtin_memmove((R+4),(R+0),4);
}
B766a1f:{NFSU2_TR(0x766a1f);
u8 U[32];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B766a23:{NFSU2_TR(0x766a23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
__builtin_memmove((R+0),(R+4),4);
__builtin_memmove((R+4),(U+0),4);
}
B766a24:{NFSU2_TR(0x766a24);
u8 U[32];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B766a28:{NFSU2_TR(0x766a28);
w1(R+512,carry<u32>(r4(R+8),r4(R+4)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B766a2a:{NFSU2_TR(0x766a2a);
if(r1(R+512)){{goto L766a3a;}}
}
B766a2c:L766a2c:{c.instructions+=2;NFSU2_TR(0x766a2c);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766a30:{NFSU2_TR(0x766a30);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L766a3a;}}
}
B766a32:L766a32:{c.instructions+=1;NFSU2_TR(0x766a32);
if(r1(R+512)){{goto L766a42;}}
}
B766a34:L766a34:{c.instructions+=2;NFSU2_TR(0x766a34);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766a38:{NFSU2_TR(0x766a38);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L766a42;}}
}
B766a3a:L766a3a:{c.instructions+=2;NFSU2_TR(0x766a3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B766a3e:{NFSU2_TR(0x766a3e);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+4))));
w4(R+8,u32(u32(r4(U+12))-u32(r4(U+8))));
}
B766a42:L766a42:{c.instructions+=5;NFSU2_TR(0x766a42);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B766a46:{NFSU2_TR(0x766a46);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+4))));
w4(R+8,u32(u32(r4(U+12))-u32(r4(U+8))));
}
B766a4a:{NFSU2_TR(0x766a4a);
w4(R+8,u32(0-u32(r4(R+8))));
}
B766a4c:{NFSU2_TR(0x766a4c);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B766a4e:{NFSU2_TR(0x766a4e);
u8 U[16];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+8))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+8),u32(0x0ull)));
w4(U+4,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w1(U+9,sborrow<u32>(r4(U+4),r4(U+0)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+9))!=0)));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+10,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r4(U+10)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B766a51:L766a51:{c.instructions+=2;NFSU2_TR(0x766a51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B766a52:{NFSU2_TR(0x766a52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766a55:L766a55:{c.instructions+=5;NFSU2_TR(0x766a55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766a56:{NFSU2_TR(0x766a56);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B766a5a:{NFSU2_TR(0x766a5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B766a5c:{NFSU2_TR(0x766a5c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xe06d7363ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B766a62:{NFSU2_TR(0x766a62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766a78;}}
}
B766a64:L766a64:{c.instructions+=2;NFSU2_TR(0x766a64);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766a68:{NFSU2_TR(0x766a68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766a78;}}
}
B766a6a:L766a6a:{c.instructions+=2;NFSU2_TR(0x766a6a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x19930520ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766a71:{NFSU2_TR(0x766a71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766a78;}}
}
B766a73:L766a73:{c.instructions+=1;NFSU2_TR(0x766a73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766a78ull));
TAIL_STATIC(0x762debu,762);
}
B766a78:L766a78:{c.instructions+=3;NFSU2_TR(0x766a78);
__builtin_memmove((R+0),gp(0x8b87e0),4);
}
B766a7d:{NFSU2_TR(0x766a7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766a7f:{NFSU2_TR(0x766a7f);
if(r1(R+518)){{goto L766a95;}}
}
B766a81:L766a81:{c.instructions+=2;NFSU2_TR(0x766a81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766a82:{NFSU2_TR(0x766a82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766a87ull));
TAIL_STATIC(0x76c9cfu,76c);
}
B766a87:L766a87:{c.instructions+=3;NFSU2_TR(0x766a87);
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
B766a89:{NFSU2_TR(0x766a89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766a8a:{NFSU2_TR(0x766a8a);
if(r1(R+518)){{goto L766a95;}}
}
B766a8c:L766a8c:{c.instructions+=2;NFSU2_TR(0x766a8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766a8d:{NFSU2_TR(0x766a8d);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b87e0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766a93ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B766a93:L766a93:{c.instructions+=1;NFSU2_TR(0x766a93);
{goto L766a97;}
}
B766a95:L766a95:{c.instructions+=1;NFSU2_TR(0x766a95);
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
B766a97:L766a97:{c.instructions+=2;NFSU2_TR(0x766a97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B766a98:{NFSU2_TR(0x766a98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766a9b:L766a9b:{c.instructions+=2;NFSU2_TR(0x766a9b);
u8 U[4];
w4(U+0,u32(0x766a55ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766aa0:{NFSU2_TR(0x766aa0);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830c0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766aa6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B766aa6:L766aa6:{c.instructions+=3;NFSU2_TR(0x766aa6);
__builtin_memmove(gp(0x8b87e0),(R+0),4);
}
B766aab:{NFSU2_TR(0x766aab);
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
B766aad:{NFSU2_TR(0x766aad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766aae:L766aae:{c.instructions+=2;NFSU2_TR(0x766aae);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b87e0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766ab4:{NFSU2_TR(0x766ab4);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830c0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766abaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B766aba:L766aba:{c.instructions+=1;NFSU2_TR(0x766aba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766ac0:L766ac0:{c.instructions+=3;NFSU2_TR(0x766ac0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766ac1:{NFSU2_TR(0x766ac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B766ac5:{NFSU2_TR(0x766ac5);
{goto L766b35;}
}
B766ad0:L766ad0:{c.instructions+=4;NFSU2_TR(0x766ad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766ad4:{NFSU2_TR(0x766ad4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766ad5:{NFSU2_TR(0x766ad5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766adb:{NFSU2_TR(0x766adb);
if(r1(R+518)){{goto L766af0;}}
}
B766add:L766add:{c.instructions+=4;NFSU2_TR(0x766add);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B766adf:{NFSU2_TR(0x766adf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B766ae2:{NFSU2_TR(0x766ae2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B766ae4:{NFSU2_TR(0x766ae4);
if(r1(R+518)){{goto L766b23;}}
}
B766ae6:L766ae6:{c.instructions+=2;NFSU2_TR(0x766ae6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766aec:{NFSU2_TR(0x766aec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766addu);}goto L766add;}}
}
B766aee:L766aee:{c.instructions+=1;NFSU2_TR(0x766aee);
__builtin_memmove((R+28),(R+28),4);
}
B766af0:L766af0:{c.instructions+=8;NFSU2_TR(0x766af0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B766af2:{NFSU2_TR(0x766af2);
w4(R+8,u32(0x7efefeffull));
}
B766af7:{NFSU2_TR(0x766af7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B766af9:{NFSU2_TR(0x766af9);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0xffffffffull))));
}
B766afc:{NFSU2_TR(0x766afc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B766afe:{NFSU2_TR(0x766afe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B766b01:{NFSU2_TR(0x766b01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x81010100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766b06:{NFSU2_TR(0x766b06);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766af0u);}goto L766af0;}}
}
B766b08:L766b08:{c.instructions+=3;NFSU2_TR(0x766b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766b0b:{NFSU2_TR(0x766b0b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B766b0d:{NFSU2_TR(0x766b0d);
if(r1(R+518)){{goto L766b32;}}
}
B766b0f:L766b0f:{c.instructions+=2;NFSU2_TR(0x766b0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(r1(R+1))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B766b11:{NFSU2_TR(0x766b11);
if(r1(R+518)){{goto L766b2d;}}
}
B766b13:L766b13:{c.instructions+=2;NFSU2_TR(0x766b13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xff0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766b18:{NFSU2_TR(0x766b18);
if(r1(R+518)){{goto L766b28;}}
}
B766b1a:L766b1a:{c.instructions+=2;NFSU2_TR(0x766b1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xff000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766b1f:{NFSU2_TR(0x766b1f);
if(r1(R+518)){{goto L766b23;}}
}
B766b21:L766b21:{c.instructions+=1;NFSU2_TR(0x766b21);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766af0u);}goto L766af0;}
}
B766b23:L766b23:{c.instructions+=2;NFSU2_TR(0x766b23);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B766b26:{NFSU2_TR(0x766b26);
{goto L766b35;}
}
B766b28:L766b28:{c.instructions+=2;NFSU2_TR(0x766b28);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+28),(U+0),4);
}
B766b2b:{NFSU2_TR(0x766b2b);
{goto L766b35;}
}
B766b2d:L766b2d:{c.instructions+=2;NFSU2_TR(0x766b2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffdull))));
__builtin_memmove((R+28),(U+0),4);
}
B766b30:{NFSU2_TR(0x766b30);
{goto L766b35;}
}
B766b32:L766b32:{c.instructions+=1;NFSU2_TR(0x766b32);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B766b35:L766b35:{c.instructions+=3;NFSU2_TR(0x766b35);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766b39:{NFSU2_TR(0x766b39);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766b3f:{NFSU2_TR(0x766b3f);
if(r1(R+518)){{goto L766b5e;}}
}
B766b41:L766b41:{c.instructions+=4;NFSU2_TR(0x766b41);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B766b43:{NFSU2_TR(0x766b43);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B766b46:{NFSU2_TR(0x766b46);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B766b48:{NFSU2_TR(0x766b48);
if(r1(R+518)){{goto L766bb0;}}
}
B766b4a:L766b4a:{c.instructions+=4;NFSU2_TR(0x766b4a);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+28)),r1(U+0));
}
B766b4c:{NFSU2_TR(0x766b4c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B766b4f:{NFSU2_TR(0x766b4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766b55:{NFSU2_TR(0x766b55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766b41u);}goto L766b41;}}
}
B766b57:L766b57:{c.instructions+=1;NFSU2_TR(0x766b57);
{goto L766b5e;}
}
B766b59:L766b59:{c.instructions+=2;NFSU2_TR(0x766b59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B766b5b:{NFSU2_TR(0x766b5b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B766b5e:L766b5e:{c.instructions+=9;NFSU2_TR(0x766b5e);
w4(R+8,u32(0x7efefeffull));
}
B766b63:{NFSU2_TR(0x766b63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B766b65:{NFSU2_TR(0x766b65);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B766b67:{NFSU2_TR(0x766b67);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0xffffffffull))));
}
B766b6a:{NFSU2_TR(0x766b6a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B766b6c:{NFSU2_TR(0x766b6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B766b6e:{NFSU2_TR(0x766b6e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B766b71:{NFSU2_TR(0x766b71);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x81010100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766b76:{NFSU2_TR(0x766b76);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766b59u);}goto L766b59;}}
}
B766b78:L766b78:{c.instructions+=2;NFSU2_TR(0x766b78);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B766b7a:{NFSU2_TR(0x766b7a);
if(r1(R+518)){{goto L766bb0;}}
}
B766b7c:L766b7c:{c.instructions+=2;NFSU2_TR(0x766b7c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+9))&u32(r1(R+9))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B766b7e:{NFSU2_TR(0x766b7e);
if(r1(R+518)){{goto L766ba7;}}
}
B766b80:L766b80:{c.instructions+=2;NFSU2_TR(0x766b80);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(u32(0xff0000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B766b86:{NFSU2_TR(0x766b86);
if(r1(R+518)){{goto L766b9a;}}
}
B766b88:L766b88:{c.instructions+=2;NFSU2_TR(0x766b88);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(u32(0xff000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B766b8e:{NFSU2_TR(0x766b8e);
if(r1(R+518)){{goto L766b92;}}
}
B766b90:L766b90:{c.instructions+=1;NFSU2_TR(0x766b90);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766b59u);}goto L766b59;}
}
B766b92:L766b92:{c.instructions+=4;NFSU2_TR(0x766b92);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B766b94:{NFSU2_TR(0x766b94);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766b98:{NFSU2_TR(0x766b98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B766b99:{NFSU2_TR(0x766b99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766b9a:L766b9a:{c.instructions+=5;NFSU2_TR(0x766b9a);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+28)),r2(U+0));
}
B766b9d:{NFSU2_TR(0x766b9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766ba1:{NFSU2_TR(0x766ba1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B766ba5:{NFSU2_TR(0x766ba5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B766ba6:{NFSU2_TR(0x766ba6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766ba7:L766ba7:{c.instructions+=4;NFSU2_TR(0x766ba7);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+28)),r2(U+0));
}
B766baa:{NFSU2_TR(0x766baa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766bae:{NFSU2_TR(0x766bae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B766baf:{NFSU2_TR(0x766baf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766bb0:L766bb0:{c.instructions+=4;NFSU2_TR(0x766bb0);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+28)),r1(U+0));
}
B766bb2:{NFSU2_TR(0x766bb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766bb6:{NFSU2_TR(0x766bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B766bb7:{NFSU2_TR(0x766bb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766bc0:L766bc0:{c.instructions+=3;NFSU2_TR(0x766bc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766bc4:{NFSU2_TR(0x766bc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766bca:{NFSU2_TR(0x766bca);
if(r1(R+518)){{goto L766bf0;}}
}
B766bcc:L766bcc:{c.instructions+=4;NFSU2_TR(0x766bcc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B766bce:{NFSU2_TR(0x766bce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B766bd1:{NFSU2_TR(0x766bd1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B766bd3:{NFSU2_TR(0x766bd3);
if(r1(R+518)){{goto L766c23;}}
}
B766bd5:L766bd5:{c.instructions+=2;NFSU2_TR(0x766bd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766bdb:{NFSU2_TR(0x766bdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766bccu);}goto L766bcc;}}
}
B766bdd:L766bdd:{c.instructions+=3;NFSU2_TR(0x766bdd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x0ull))));
}
B766be2:{NFSU2_TR(0x766be2);
__builtin_memmove((R+16),(R+16),4);
}
B766be9:{NFSU2_TR(0x766be9);
__builtin_memmove((R+16),(R+16),4);
}
B766bf0:L766bf0:{c.instructions+=8;NFSU2_TR(0x766bf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B766bf2:{NFSU2_TR(0x766bf2);
w4(R+8,u32(0x7efefeffull));
}
B766bf7:{NFSU2_TR(0x766bf7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B766bf9:{NFSU2_TR(0x766bf9);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0xffffffffull))));
}
B766bfc:{NFSU2_TR(0x766bfc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B766bfe:{NFSU2_TR(0x766bfe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B766c01:{NFSU2_TR(0x766c01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x81010100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766c06:{NFSU2_TR(0x766c06);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766bf0u);}goto L766bf0;}}
}
B766c08:L766c08:{c.instructions+=3;NFSU2_TR(0x766c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766c0b:{NFSU2_TR(0x766c0b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B766c0d:{NFSU2_TR(0x766c0d);
if(r1(R+518)){{goto L766c41;}}
}
B766c0f:L766c0f:{c.instructions+=2;NFSU2_TR(0x766c0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(r1(R+1))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B766c11:{NFSU2_TR(0x766c11);
if(r1(R+518)){{goto L766c37;}}
}
B766c13:L766c13:{c.instructions+=2;NFSU2_TR(0x766c13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xff0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766c18:{NFSU2_TR(0x766c18);
if(r1(R+518)){{goto L766c2d;}}
}
B766c1a:L766c1a:{c.instructions+=2;NFSU2_TR(0x766c1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xff000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766c1f:{NFSU2_TR(0x766c1f);
if(r1(R+518)){{goto L766c23;}}
}
B766c21:L766c21:{c.instructions+=1;NFSU2_TR(0x766c21);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766bf0u);}goto L766bf0;}
}
B766c23:L766c23:{c.instructions+=4;NFSU2_TR(0x766c23);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B766c26:{NFSU2_TR(0x766c26);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766c2a:{NFSU2_TR(0x766c2a);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B766c2c:{NFSU2_TR(0x766c2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766c2d:L766c2d:{c.instructions+=4;NFSU2_TR(0x766c2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B766c30:{NFSU2_TR(0x766c30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766c34:{NFSU2_TR(0x766c34);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B766c36:{NFSU2_TR(0x766c36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766c37:L766c37:{c.instructions+=4;NFSU2_TR(0x766c37);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffdull))));
__builtin_memmove((R+0),(U+0),4);
}
B766c3a:{NFSU2_TR(0x766c3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766c3e:{NFSU2_TR(0x766c3e);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B766c40:{NFSU2_TR(0x766c40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766c41:L766c41:{c.instructions+=4;NFSU2_TR(0x766c41);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B766c44:{NFSU2_TR(0x766c44);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766c48:{NFSU2_TR(0x766c48);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B766c4a:{NFSU2_TR(0x766c4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766c50:L766c50:{c.instructions+=4;NFSU2_TR(0x766c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B766c54:{NFSU2_TR(0x766c54);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766c58:{NFSU2_TR(0x766c58);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766c5e:{NFSU2_TR(0x766c5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766c9c;}}
}
B766c60:L766c60:{c.instructions+=3;NFSU2_TR(0x766c60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B766c62:{NFSU2_TR(0x766c62);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+0))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B766c64:{NFSU2_TR(0x766c64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766c94;}}
}
B766c66:L766c66:{c.instructions+=2;NFSU2_TR(0x766c66);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+0))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B766c68:{NFSU2_TR(0x766c68);
if(r1(R+518)){{goto L766c90;}}
}
B766c6a:L766c6a:{c.instructions+=2;NFSU2_TR(0x766c6a);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+1))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+1))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B766c6d:{NFSU2_TR(0x766c6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766c94;}}
}
B766c6f:L766c6f:{c.instructions+=2;NFSU2_TR(0x766c6f);
w1(R+1,u8(u32(r1(R+1))|u32(r1(R+1))));
w1(R+518,u8((r1(R+1))==(u8(0x0ull))));
}
B766c71:{NFSU2_TR(0x766c71);
if(r1(R+518)){{goto L766c90;}}
}
B766c73:L766c73:{c.instructions+=3;NFSU2_TR(0x766c73);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B766c76:{NFSU2_TR(0x766c76);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B766c79:{NFSU2_TR(0x766c79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766c94;}}
}
B766c7b:L766c7b:{c.instructions+=2;NFSU2_TR(0x766c7b);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+0))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B766c7d:{NFSU2_TR(0x766c7d);
if(r1(R+518)){{goto L766c90;}}
}
B766c7f:L766c7f:{c.instructions+=2;NFSU2_TR(0x766c7f);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+1))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+1))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B766c82:{NFSU2_TR(0x766c82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766c94;}}
}
B766c84:L766c84:{c.instructions+=4;NFSU2_TR(0x766c84);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B766c87:{NFSU2_TR(0x766c87);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B766c8a:{NFSU2_TR(0x766c8a);
w1(R+1,u8(u32(r1(R+1))|u32(r1(R+1))));
w1(R+518,u8((r1(R+1))==(u8(0x0ull))));
}
B766c8c:{NFSU2_TR(0x766c8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766c60u);}goto L766c60;}}
}
B766c8e:L766c8e:{c.instructions+=1;NFSU2_TR(0x766c8e);
__builtin_memmove((R+28),(R+28),4);
}
B766c90:L766c90:{c.instructions+=2;NFSU2_TR(0x766c90);
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
B766c92:{NFSU2_TR(0x766c92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766c94:L766c94:{c.instructions+=4;NFSU2_TR(0x766c94);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B766c96:{NFSU2_TR(0x766c96);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B766c98:{NFSU2_TR(0x766c98);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B766c9b:{NFSU2_TR(0x766c9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766c9c:L766c9c:{c.instructions+=2;NFSU2_TR(0x766c9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766ca2:{NFSU2_TR(0x766ca2);
if(r1(R+518)){{goto L766cbc;}}
}
B766ca4:L766ca4:{c.instructions+=4;NFSU2_TR(0x766ca4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B766ca6:{NFSU2_TR(0x766ca6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B766ca9:{NFSU2_TR(0x766ca9);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+0))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B766cab:{NFSU2_TR(0x766cab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766c94u);}goto L766c94;}}
}
B766cad:L766cad:{c.instructions+=3;NFSU2_TR(0x766cad);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B766cb0:{NFSU2_TR(0x766cb0);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+0))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B766cb2:{NFSU2_TR(0x766cb2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766c90u);}goto L766c90;}}
}
B766cb4:L766cb4:{c.instructions+=2;NFSU2_TR(0x766cb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B766cba:{NFSU2_TR(0x766cba);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766c60u);}goto L766c60;}}
}
B766cbc:L766cbc:{c.instructions+=4;NFSU2_TR(0x766cbc);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+0),(U+0),2);
}
B766cbf:{NFSU2_TR(0x766cbf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B766cc2:{NFSU2_TR(0x766cc2);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+0))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B766cc4:{NFSU2_TR(0x766cc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766c94u);}goto L766c94;}}
}
B766cc6:L766cc6:{c.instructions+=2;NFSU2_TR(0x766cc6);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+0))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B766cc8:{NFSU2_TR(0x766cc8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766c90u);}goto L766c90;}}
}
B766cca:L766cca:{c.instructions+=2;NFSU2_TR(0x766cca);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+1))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+1))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B766ccd:{NFSU2_TR(0x766ccd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766c94u);}goto L766c94;}}
}
B766ccf:L766ccf:{c.instructions+=2;NFSU2_TR(0x766ccf);
w1(R+1,u8(u32(r1(R+1))|u32(r1(R+1))));
w1(R+518,u8((r1(R+1))==(u8(0x0ull))));
}
B766cd1:{NFSU2_TR(0x766cd1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766c90u);}goto L766c90;}}
}
B766cd3:L766cd3:{c.instructions+=2;NFSU2_TR(0x766cd3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B766cd6:{NFSU2_TR(0x766cd6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766c60u);}goto L766c60;}
}
B766cd8:L766cd8:{c.instructions+=3;NFSU2_TR(0x766cd8);
__builtin_memmove((R+4),gp(0x81a2ec),4);
}
B766cde:{NFSU2_TR(0x766cde);
__builtin_memmove((R+0),(R+8),4);
}
B766ce0:{NFSU2_TR(0x766ce0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766ce1:L766ce1:{c.instructions+=2;NFSU2_TR(0x766ce1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766ce4:{NFSU2_TR(0x766ce4);
if(r1(R+518)){{goto L766cf3;}}
}
B766ce6:L766ce6:{c.instructions+=5;NFSU2_TR(0x766ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B766ce9:{NFSU2_TR(0x766ce9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B766cec:{NFSU2_TR(0x766cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B766cef:{NFSU2_TR(0x766cef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B766cf1:{NFSU2_TR(0x766cf1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766ce1u);}goto L766ce1;}}
}
B766cf3:L766cf3:{c.instructions+=5;NFSU2_TR(0x766cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B766cf6:{NFSU2_TR(0x766cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B766cf9:{NFSU2_TR(0x766cf9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B766cfb:{NFSU2_TR(0x766cfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B766cfc:{NFSU2_TR(0x766cfc);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L766d03;}}
}
B766cfe:L766cfe:{c.instructions+=2;NFSU2_TR(0x766cfe);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B766d01:{NFSU2_TR(0x766d01);
if(r1(R+518)){{goto L766d05;}}
}
B766d03:L766d03:{c.instructions+=1;NFSU2_TR(0x766d03);
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
B766d05:L766d05:{c.instructions+=1;NFSU2_TR(0x766d05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766d06:L766d06:{c.instructions+=3;NFSU2_TR(0x766d06);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766d08:{NFSU2_TR(0x766d08);
u8 U[4];
w4(U+0,u32(0x7d7cf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766d0d:{NFSU2_TR(0x766d0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766d12ull));
TAIL_STATIC(0x760da0u,760);
}
B766d12:L766d12:{c.instructions+=6;NFSU2_TR(0x766d12);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B766d14:{NFSU2_TR(0x766d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766d17:{NFSU2_TR(0x766d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766d1a:{NFSU2_TR(0x766d1a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B766d1b:{NFSU2_TR(0x766d1b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B766d1c:{NFSU2_TR(0x766d1c);
if(r1(R+518)){{goto L766d88;}}
}
B766d1e:L766d1e:{c.instructions+=3;NFSU2_TR(0x766d1e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B766d1f:{NFSU2_TR(0x766d1f);
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
B766d20:{NFSU2_TR(0x766d20);
if(r1(R+518)){{goto L766d68;}}
}
B766d22:L766d22:{c.instructions+=2;NFSU2_TR(0x766d22);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B766d25:{NFSU2_TR(0x766d25);
if(r1(R+518)){{goto L766d68;}}
}
B766d27:L766d27:{c.instructions+=2;NFSU2_TR(0x766d27);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B766d2a:{NFSU2_TR(0x766d2a);
if(r1(R+518)){{goto L766d68;}}
}
B766d2c:L766d2c:{c.instructions+=2;NFSU2_TR(0x766d2c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B766d2f:{NFSU2_TR(0x766d2f);
if(r1(R+518)){{goto L766d5b;}}
}
B766d31:L766d31:{c.instructions+=2;NFSU2_TR(0x766d31);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B766d34:{NFSU2_TR(0x766d34);
if(r1(R+518)){{goto L766d4e;}}
}
B766d36:L766d36:{c.instructions+=2;NFSU2_TR(0x766d36);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B766d37:{NFSU2_TR(0x766d37);
if(r1(R+518)){{goto L766d41;}}
}
B766d39:L766d39:{c.instructions+=2;NFSU2_TR(0x766d39);
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
B766d3c:{NFSU2_TR(0x766d3c);
{goto L766e79;}
}
B766d41:L766d41:{c.instructions+=3;NFSU2_TR(0x766d41);
w4(R+24,u32(0x8b87ecull));
}
B766d46:{NFSU2_TR(0x766d46);
__builtin_memmove((R+28),gp(0x8b87ec),4);
}
B766d4c:{NFSU2_TR(0x766d4c);
{goto L766d93;}
}
B766d4e:L766d4e:{c.instructions+=3;NFSU2_TR(0x766d4e);
w4(R+24,u32(0x8b87e8ull));
}
B766d53:{NFSU2_TR(0x766d53);
__builtin_memmove((R+28),gp(0x8b87e8),4);
}
B766d59:{NFSU2_TR(0x766d59);
{goto L766d93;}
}
B766d5b:L766d5b:{c.instructions+=3;NFSU2_TR(0x766d5b);
w4(R+24,u32(0x8b87f0ull));
}
B766d60:{NFSU2_TR(0x766d60);
__builtin_memmove((R+28),gp(0x8b87f0),4);
}
B766d66:{NFSU2_TR(0x766d66);
{goto L766d93;}
}
B766d68:L766d68:{c.instructions+=1;NFSU2_TR(0x766d68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766d6dull));
TAIL_STATIC(0x761e3cu,761);
}
B766d6d:L766d6d:{c.instructions+=5;NFSU2_TR(0x766d6d);
__builtin_memmove((R+12),(R+0),4);
}
B766d6f:{NFSU2_TR(0x766d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766d72:{NFSU2_TR(0x766d72);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B766d75:{NFSU2_TR(0x766d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B766d78:{NFSU2_TR(0x766d78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766d7dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766cd8u);}goto L766cd8;}
}
B766d7d:L766d7d:{c.instructions+=5;NFSU2_TR(0x766d7d);
__builtin_memmove((R+24),(R+0),4);
}
B766d7f:{NFSU2_TR(0x766d7f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B766d82:{NFSU2_TR(0x766d82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B766d84:{NFSU2_TR(0x766d84);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B766d86:{NFSU2_TR(0x766d86);
{goto L766d9d;}
}
B766d88:L766d88:{c.instructions+=2;NFSU2_TR(0x766d88);
w4(R+24,u32(0x8b87e4ull));
}
B766d8d:{NFSU2_TR(0x766d8d);
__builtin_memmove((R+28),gp(0x8b87e4),4);
}
B766d93:L766d93:{c.instructions+=2;NFSU2_TR(0x766d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B766d9a:{NFSU2_TR(0x766d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B766d9d:L766d9d:{c.instructions+=3;NFSU2_TR(0x766d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766da0:{NFSU2_TR(0x766da0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766da3:{NFSU2_TR(0x766da3);
if(r1(R+518)){{goto L766e77;}}
}
B766da9:L766da9:{c.instructions+=2;NFSU2_TR(0x766da9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766dab:{NFSU2_TR(0x766dab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766db4;}}
}
B766dad:L766dad:{c.instructions+=2;NFSU2_TR(0x766dad);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766daf:{NFSU2_TR(0x766daf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766db4ull));
TAIL_STATIC(0x75d5a4u,75d);
}
B766db4:L766db4:{c.instructions+=2;NFSU2_TR(0x766db4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766db7:{NFSU2_TR(0x766db7);
if(r1(R+518)){{goto L766dc2;}}
}
B766db9:L766db9:{c.instructions+=2;NFSU2_TR(0x766db9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766dba:{NFSU2_TR(0x766dba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766dbfull));
TAIL_STATIC(0x7631f1u,763);
}
B766dbf:L766dbf:{c.instructions+=2;NFSU2_TR(0x766dbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766dc0:{NFSU2_TR(0x766dc0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B766dc2:L766dc2:{c.instructions+=4;NFSU2_TR(0x766dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766dc5:{NFSU2_TR(0x766dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766dc8:{NFSU2_TR(0x766dc8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766dcb:{NFSU2_TR(0x766dcb);
if(r1(R+518)){{goto L766dd7;}}
}
B766dcd:L766dcd:{c.instructions+=2;NFSU2_TR(0x766dcd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766dd0:{NFSU2_TR(0x766dd0);
if(r1(R+518)){{goto L766dd7;}}
}
B766dd2:L766dd2:{c.instructions+=2;NFSU2_TR(0x766dd2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766dd5:{NFSU2_TR(0x766dd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766df2;}}
}
B766dd7:L766dd7:{c.instructions+=5;NFSU2_TR(0x766dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B766dda:{NFSU2_TR(0x766dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766ddd:{NFSU2_TR(0x766ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766de0:{NFSU2_TR(0x766de0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766de3:{NFSU2_TR(0x766de3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766e1e;}}
}
B766de5:L766de5:{c.instructions+=3;NFSU2_TR(0x766de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B766de8:{NFSU2_TR(0x766de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766deb:{NFSU2_TR(0x766deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
w4(U+4,u32(0x8cull));
s4(u32(r4(U+0)),r4(U+4));
}
B766df2:L766df2:{c.instructions+=2;NFSU2_TR(0x766df2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766df5:{NFSU2_TR(0x766df5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766e1e;}}
}
B766df7:L766df7:{c.instructions+=1;NFSU2_TR(0x766df7);
__builtin_memmove((R+0),gp(0x81a2e0),4);
}
B766dfc:L766dfc:{c.instructions+=6;NFSU2_TR(0x766dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766dff:{NFSU2_TR(0x766dff);
__builtin_memmove((R+8),gp(0x81a2e4),4);
}
B766e05:{NFSU2_TR(0x766e05);
__builtin_memmove((R+24),gp(0x81a2e0),4);
}
B766e0b:{NFSU2_TR(0x766e0b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B766e0d:{NFSU2_TR(0x766e0d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B766e0f:{NFSU2_TR(0x766e0f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L766e20;}}
}
B766e11:L766e11:{c.instructions+=5;NFSU2_TR(0x766e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B766e14:{NFSU2_TR(0x766e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B766e17:{NFSU2_TR(0x766e17);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B766e1b:{NFSU2_TR(0x766e1b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B766e1c:{NFSU2_TR(0x766e1c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766dfcu);}goto L766dfc;}
}
B766e1e:L766e1e:{c.instructions+=1;NFSU2_TR(0x766e1e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B766e20:L766e20:{c.instructions+=2;NFSU2_TR(0x766e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B766e24:{NFSU2_TR(0x766e24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766e29ull));
{goto L766e41;}
}
B766e29:L766e29:{c.instructions+=2;NFSU2_TR(0x766e29);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x8ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B766e2d:{NFSU2_TR(0x766e2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766e4e;}}
}
B766e2f:L766e2f:{c.instructions+=3;NFSU2_TR(0x766e2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B766e32:{NFSU2_TR(0x766e32);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766e34:{NFSU2_TR(0x766e34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766e36ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B766e36:L766e36:{c.instructions+=2;NFSU2_TR(0x766e36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766e37:{NFSU2_TR(0x766e37);
{goto L766e53;}
}
B766e39:L766e39:{c.instructions+=3;NFSU2_TR(0x766e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B766e3c:{NFSU2_TR(0x766e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B766e3f:{NFSU2_TR(0x766e3f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B766e41:L766e41:{c.instructions+=2;NFSU2_TR(0x766e41);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
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
B766e44:{NFSU2_TR(0x766e44);
if(r1(R+518)){{goto L766e4d;}}
}
B766e46:L766e46:{c.instructions+=2;NFSU2_TR(0x766e46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766e47:{NFSU2_TR(0x766e47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766e4cull));
TAIL_STATIC(0x76315du,763);
}
B766e4c:L766e4c:{c.instructions+=1;NFSU2_TR(0x766e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766e4d:L766e4d:{c.instructions+=1;NFSU2_TR(0x766e4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766e4e:L766e4e:{c.instructions+=2;NFSU2_TR(0x766e4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B766e51:{NFSU2_TR(0x766e51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766e53ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B766e53:L766e53:{c.instructions+=4;NFSU2_TR(0x766e53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B766e54:{NFSU2_TR(0x766e54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766e57:{NFSU2_TR(0x766e57);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766e5a:{NFSU2_TR(0x766e5a);
if(r1(R+518)){{goto L766e66;}}
}
B766e5c:L766e5c:{c.instructions+=2;NFSU2_TR(0x766e5c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766e5f:{NFSU2_TR(0x766e5f);
if(r1(R+518)){{goto L766e66;}}
}
B766e61:L766e61:{c.instructions+=2;NFSU2_TR(0x766e61);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766e64:{NFSU2_TR(0x766e64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766e77;}}
}
B766e66:L766e66:{c.instructions+=4;NFSU2_TR(0x766e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766e69:{NFSU2_TR(0x766e69);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766e6c:{NFSU2_TR(0x766e6c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766e6f:{NFSU2_TR(0x766e6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766e77;}}
}
B766e71:L766e71:{c.instructions+=2;NFSU2_TR(0x766e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766e74:{NFSU2_TR(0x766e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766e77:L766e77:{c.instructions+=1;NFSU2_TR(0x766e77);
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
B766e79:L766e79:{c.instructions+=1;NFSU2_TR(0x766e79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766e7eull));
TAIL_STATIC(0x760ddbu,760);
}
B766e7e:L766e7e:{c.instructions+=1;NFSU2_TR(0x766e7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766e7f:L766e7f:{c.instructions+=16;NFSU2_TR(0x766e7f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766e80:{NFSU2_TR(0x766e80);
__builtin_memmove((R+20),(R+16),4);
}
B766e82:{NFSU2_TR(0x766e82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766e83:{NFSU2_TR(0x766e83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766e84:{NFSU2_TR(0x766e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766e87:{NFSU2_TR(0x766e87);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B766e8a:{NFSU2_TR(0x766e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766e8d:{NFSU2_TR(0x766e8d);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B766e90:{NFSU2_TR(0x766e90);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3feull))));
}
B766e95:{NFSU2_TR(0x766e95);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B766e98:{NFSU2_TR(0x766e98);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff800full))));
}
B766e9e:{NFSU2_TR(0x766e9e);
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
B766ea0:{NFSU2_TR(0x766ea0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B766ea4:{NFSU2_TR(0x766ea4);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B766ea7:{NFSU2_TR(0x766ea7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B766ea8:{NFSU2_TR(0x766ea8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766ea9:L766ea9:{c.instructions+=5;NFSU2_TR(0x766ea9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766eaa:{NFSU2_TR(0x766eaa);
__builtin_memmove((R+20),(R+16),4);
}
B766eac:{NFSU2_TR(0x766eac);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B766eae:{NFSU2_TR(0x766eae);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ff00000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766eb5:{NFSU2_TR(0x766eb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766ec1;}}
}
B766eb7:L766eb7:{c.instructions+=2;NFSU2_TR(0x766eb7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766eba:{NFSU2_TR(0x766eba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766ed3;}}
}
B766ebc:L766ebc:{c.instructions+=4;NFSU2_TR(0x766ebc);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B766ebe:{NFSU2_TR(0x766ebe);
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
B766ebf:{NFSU2_TR(0x766ebf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B766ec0:{NFSU2_TR(0x766ec0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766ec1:L766ec1:{c.instructions+=2;NFSU2_TR(0x766ec1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766ec8:{NFSU2_TR(0x766ec8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766ed3;}}
}
B766eca:L766eca:{c.instructions+=2;NFSU2_TR(0x766eca);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B766ecd:{NFSU2_TR(0x766ecd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766ed3;}}
}
B766ecf:L766ecf:{c.instructions+=2;NFSU2_TR(0x766ecf);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766ed1:{NFSU2_TR(0x766ed1);
{goto L766efd;}
}
B766ed3:L766ed3:{c.instructions+=5;NFSU2_TR(0x766ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766ed6:{NFSU2_TR(0x766ed6);
w4(R+0,u32(0x7ff8ull));
}
B766edb:{NFSU2_TR(0x766edb);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B766edd:{NFSU2_TR(0x766edd);
u8 U[8];
__builtin_memmove((U+4),(R+0),2);
w1(R+512,u8((r2(R+4))<(r2(U+4))));
w1(R+523,sborrow<u16>(r2(R+4),r2(U+4)));
w2(U+6,u16(u32(r2(R+4))-u32(r2(U+4))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B766ee0:{NFSU2_TR(0x766ee0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766ee6;}}
}
B766ee2:L766ee2:{c.instructions+=2;NFSU2_TR(0x766ee2);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766ee4:{NFSU2_TR(0x766ee4);
{goto L766efd;}
}
B766ee6:L766ee6:{c.instructions+=2;NFSU2_TR(0x766ee6);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x7ff0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B766eeb:{NFSU2_TR(0x766eeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766f00;}}
}
B766eed:L766eed:{c.instructions+=2;NFSU2_TR(0x766eed);
u8 U[18];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(u32(0x7ffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B766ef4:{NFSU2_TR(0x766ef4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766efb;}}
}
B766ef6:L766ef6:{c.instructions+=2;NFSU2_TR(0x766ef6);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B766ef9:{NFSU2_TR(0x766ef9);
if(r1(R+518)){{goto L766f00;}}
}
B766efb:L766efb:{c.instructions+=1;NFSU2_TR(0x766efb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766efd:L766efd:{c.instructions+=3;NFSU2_TR(0x766efd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B766efe:{NFSU2_TR(0x766efe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B766eff:{NFSU2_TR(0x766eff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766f00:L766f00:{c.instructions+=3;NFSU2_TR(0x766f00);
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
B766f02:{NFSU2_TR(0x766f02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B766f03:{NFSU2_TR(0x766f03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766f04:L766f04:{c.instructions+=9;NFSU2_TR(0x766f04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766f05:{NFSU2_TR(0x766f05);
__builtin_memmove((R+20),(R+16),4);
}
B766f07:{NFSU2_TR(0x766f07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766f08:{NFSU2_TR(0x766f08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766f09:{NFSU2_TR(0x766f09);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B766f0c:{NFSU2_TR(0x766f0c);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B766f12:{NFSU2_TR(0x766f12);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B766f14:{NFSU2_TR(0x766f14);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B766f17:{NFSU2_TR(0x766f17);
if(r1(R+514)){{goto L766f22;}}
}
B766f19:L766f19:{c.instructions+=3;NFSU2_TR(0x766f19);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B766f1b:{NFSU2_TR(0x766f1b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B766f1d:{NFSU2_TR(0x766f1d);
{goto L766fb1;}
}
B766f22:L766f22:{c.instructions+=3;NFSU2_TR(0x766f22);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B766f24:{NFSU2_TR(0x766f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x7ff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B766f2a:{NFSU2_TR(0x766f2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766f8e;}}
}
B766f2c:L766f2c:{c.instructions+=2;NFSU2_TR(0x766f2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B766f33:{NFSU2_TR(0x766f33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L766f3a;}}
}
B766f35:L766f35:{c.instructions+=2;NFSU2_TR(0x766f35);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B766f38:{NFSU2_TR(0x766f38);
if(r1(R+518)){{goto L766f8e;}}
}
B766f3a:L766f3a:{c.instructions+=6;NFSU2_TR(0x766f3a);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B766f3d:{NFSU2_TR(0x766f3d);
w4(R+8,u32(0xfffffc03ull));
}
B766f42:{NFSU2_TR(0x766f42);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B766f48:{NFSU2_TR(0x766f48);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B766f4a:{NFSU2_TR(0x766f4a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B766f4d:{NFSU2_TR(0x766f4d);
if(r1(R+514)){{goto L766f54;}}
}
B766f4f:L766f4f:{c.instructions+=3;NFSU2_TR(0x766f4f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B766f51:{NFSU2_TR(0x766f51);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B766f52:{NFSU2_TR(0x766f52);
{goto L766f69;}
}
B766f54:L766f54:{c.instructions+=2;NFSU2_TR(0x766f54);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B766f56:{NFSU2_TR(0x766f56);
{goto L766f69;}
}
B766f58:L766f58:{c.instructions+=3;NFSU2_TR(0x766f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shl<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B766f5b:{NFSU2_TR(0x766f5b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B766f5f:{NFSU2_TR(0x766f5f);
if(r1(R+518)){{goto L766f65;}}
}
B766f61:L766f61:{c.instructions+=1;NFSU2_TR(0x766f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B766f65:L766f65:{c.instructions+=2;NFSU2_TR(0x766f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shl<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B766f68:{NFSU2_TR(0x766f68);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B766f69:L766f69:{c.instructions+=2;NFSU2_TR(0x766f69);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B766f6d:{NFSU2_TR(0x766f6d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766f58u);}goto L766f58;}}
}
B766f6f:L766f6f:{c.instructions+=3;NFSU2_TR(0x766f6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xefull))));
s1(u32(r4(U+0)),r1(U+4));
}
B766f73:{NFSU2_TR(0x766f73);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B766f75:{NFSU2_TR(0x766f75);
if(r1(R+518)){{goto L766f7b;}}
}
B766f77:L766f77:{c.instructions+=1;NFSU2_TR(0x766f77);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x80ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B766f7b:L766f7b:{c.instructions+=6;NFSU2_TR(0x766f7b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B766f7e:{NFSU2_TR(0x766f7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766f7f:{NFSU2_TR(0x766f7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766f80:{NFSU2_TR(0x766f80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766f81:{NFSU2_TR(0x766f81);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B766f84:{NFSU2_TR(0x766f84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766f89ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766e7fu);}goto L766e7f;}
}
B766f89:L766f89:{c.instructions+=2;NFSU2_TR(0x766f89);
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
B766f8c:{NFSU2_TR(0x766f8c);
{goto L766fb1;}
}
B766f8e:L766f8e:{c.instructions+=6;NFSU2_TR(0x766f8e);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B766f91:{NFSU2_TR(0x766f91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766f92:{NFSU2_TR(0x766f92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766f93:{NFSU2_TR(0x766f93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766f94:{NFSU2_TR(0x766f94);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B766f97:{NFSU2_TR(0x766f97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x766f9cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x766e7fu);}goto L766e7f;}
}
B766f9c:L766f9c:{c.instructions+=5;NFSU2_TR(0x766f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B766f9f:{NFSU2_TR(0x766f9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B766fa2:{NFSU2_TR(0x766fa2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
}
B766fa8:{NFSU2_TR(0x766fa8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B766fab:{NFSU2_TR(0x766fab);
u8 U[6];
w1(R+512,u8((r4(R+8))<(u32(0x3feull))));
w1(R+523,sborrow<u32>(r4(R+8),u32(0x3feull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x3feull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B766fb1:L766fb1:{c.instructions+=6;NFSU2_TR(0x766fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766fb4:{NFSU2_TR(0x766fb4);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B766fb7:{NFSU2_TR(0x766fb7);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B766fba:{NFSU2_TR(0x766fba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B766fbc:{NFSU2_TR(0x766fbc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B766fbd:{NFSU2_TR(0x766fbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B766fbe:L766fbe:{c.instructions+=17;NFSU2_TR(0x766fbe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766fbf:{NFSU2_TR(0x766fbf);
__builtin_memmove((R+20),(R+16),4);
}
B766fc1:{NFSU2_TR(0x766fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766fc4:{NFSU2_TR(0x766fc4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B766fc6:{NFSU2_TR(0x766fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766fc9:{NFSU2_TR(0x766fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766fcc:{NFSU2_TR(0x766fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766fcf:{NFSU2_TR(0x766fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B766fd2:{NFSU2_TR(0x766fd2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766fd3:{NFSU2_TR(0x766fd3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B766fd5:{NFSU2_TR(0x766fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B766fd8:{NFSU2_TR(0x766fd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B766fdb:{NFSU2_TR(0x766fdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766fdc:{NFSU2_TR(0x766fdc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B766fdd:{NFSU2_TR(0x766fdd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B766fe0:{NFSU2_TR(0x766fe0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B766fe1:{NFSU2_TR(0x766fe1);
if(r1(R+518)){{goto L766ff0;}}
}
B766fe3:L766fe3:{c.instructions+=3;NFSU2_TR(0x766fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766fe6:{NFSU2_TR(0x766fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B766fe9:{NFSU2_TR(0x766fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0xc000008full));
s4(u32(r4(U+0)),r4(U+4));
}
B766ff0:L766ff0:{c.instructions+=2;NFSU2_TR(0x766ff0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B766ff3:{NFSU2_TR(0x766ff3);
if(r1(R+518)){TAIL_STATIC(0x767003u,767);}
}
B766ff5:L766ff5:{c.instructions+=3;NFSU2_TR(0x766ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B766ff8:{NFSU2_TR(0x766ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B766ffc:{NFSU2_TR(0x766ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0xc0000093ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x767003u,767);
}
XIT:NFSU2_TR_EXIT(0x766,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
