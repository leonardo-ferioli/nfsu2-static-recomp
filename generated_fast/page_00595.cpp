#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_596(u8* __restrict R,Cpu& c);
u32 body_597(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x595,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x595,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_595(u8* __restrict R,Cpu& c);
u32 page_595(Cpu& c){return body_595(c.regs.data(),c);}
__attribute__((noinline)) u32 body_595(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x595003:goto L595003;
case 0x595005:c.instructions+=3;goto B595005;
case 0x595007:c.instructions+=2;goto B595007;
case 0x59500a:c.instructions+=1;goto B59500a;
case 0x59500c:goto L59500c;
case 0x595012:c.instructions+=1;goto B595012;
case 0x595015:goto L595015;
case 0x59501b:c.instructions+=1;goto B59501b;
case 0x595020:goto L595020;
case 0x595024:c.instructions+=4;goto B595024;
case 0x595026:c.instructions+=3;goto B595026;
case 0x595029:c.instructions+=2;goto B595029;
case 0x595030:c.instructions+=1;goto B595030;
case 0x595040:goto L595040;
case 0x595041:c.instructions+=17;goto B595041;
case 0x595043:c.instructions+=16;goto B595043;
case 0x595046:c.instructions+=15;goto B595046;
case 0x59504c:c.instructions+=14;goto B59504c;
case 0x59504d:c.instructions+=13;goto B59504d;
case 0x59504e:c.instructions+=12;goto B59504e;
case 0x595051:c.instructions+=11;goto B595051;
case 0x595052:c.instructions+=10;goto B595052;
case 0x595054:c.instructions+=9;goto B595054;
case 0x59505a:c.instructions+=8;goto B59505a;
case 0x595060:c.instructions+=7;goto B595060;
case 0x595062:c.instructions+=6;goto B595062;
case 0x595065:c.instructions+=5;goto B595065;
case 0x59506c:c.instructions+=4;goto B59506c;
case 0x595074:c.instructions+=3;goto B595074;
case 0x595078:c.instructions+=2;goto B595078;
case 0x59507c:c.instructions+=1;goto B59507c;
case 0x595082:goto L595082;
case 0x595085:c.instructions+=1;goto B595085;
case 0x59508b:goto L59508b;
case 0x59508e:c.instructions+=43;goto B59508e;
case 0x595090:c.instructions+=42;goto B595090;
case 0x595093:c.instructions+=41;goto B595093;
case 0x595099:c.instructions+=40;goto B595099;
case 0x59509b:c.instructions+=39;goto B59509b;
case 0x59509d:c.instructions+=38;goto B59509d;
case 0x5950a3:c.instructions+=37;goto B5950a3;
case 0x5950a9:c.instructions+=36;goto B5950a9;
case 0x5950ac:c.instructions+=35;goto B5950ac;
case 0x5950af:c.instructions+=34;goto B5950af;
case 0x5950b2:c.instructions+=33;goto B5950b2;
case 0x5950b8:c.instructions+=32;goto B5950b8;
case 0x5950ba:c.instructions+=31;goto B5950ba;
case 0x5950c0:c.instructions+=30;goto B5950c0;
case 0x5950c6:c.instructions+=29;goto B5950c6;
case 0x5950cc:c.instructions+=28;goto B5950cc;
case 0x5950d2:c.instructions+=27;goto B5950d2;
case 0x5950d8:c.instructions+=26;goto B5950d8;
case 0x5950de:c.instructions+=25;goto B5950de;
case 0x5950e4:c.instructions+=24;goto B5950e4;
case 0x5950ea:c.instructions+=23;goto B5950ea;
case 0x5950f1:c.instructions+=22;goto B5950f1;
case 0x5950f3:c.instructions+=21;goto B5950f3;
case 0x5950f7:c.instructions+=20;goto B5950f7;
case 0x5950f9:c.instructions+=19;goto B5950f9;
case 0x5950fc:c.instructions+=18;goto B5950fc;
case 0x595103:c.instructions+=17;goto B595103;
case 0x595106:c.instructions+=16;goto B595106;
case 0x595108:c.instructions+=15;goto B595108;
case 0x59510a:c.instructions+=14;goto B59510a;
case 0x59510c:c.instructions+=13;goto B59510c;
case 0x59510e:c.instructions+=12;goto B59510e;
case 0x595110:c.instructions+=11;goto B595110;
case 0x595114:c.instructions+=10;goto B595114;
case 0x595118:c.instructions+=9;goto B595118;
case 0x59511a:c.instructions+=8;goto B59511a;
case 0x59511c:c.instructions+=7;goto B59511c;
case 0x59511e:c.instructions+=6;goto B59511e;
case 0x59511f:c.instructions+=5;goto B59511f;
case 0x595120:c.instructions+=4;goto B595120;
case 0x595121:c.instructions+=3;goto B595121;
case 0x595123:c.instructions+=2;goto B595123;
case 0x595124:c.instructions+=1;goto B595124;
case 0x595127:goto L595127;
case 0x595128:c.instructions+=4;goto B595128;
case 0x59512a:c.instructions+=3;goto B59512a;
case 0x59512e:c.instructions+=2;goto B59512e;
case 0x595132:c.instructions+=1;goto B595132;
case 0x595138:goto L595138;
case 0x59513b:c.instructions+=2;goto B59513b;
case 0x59513f:c.instructions+=1;goto B59513f;
case 0x595140:goto L595140;
case 0x595144:c.instructions+=19;goto B595144;
case 0x595147:c.instructions+=18;goto B595147;
case 0x59514b:c.instructions+=17;goto B59514b;
case 0x59514d:c.instructions+=16;goto B59514d;
case 0x595150:c.instructions+=15;goto B595150;
case 0x595153:c.instructions+=14;goto B595153;
case 0x595155:c.instructions+=13;goto B595155;
case 0x595158:c.instructions+=12;goto B595158;
case 0x59515f:c.instructions+=11;goto B59515f;
case 0x595166:c.instructions+=10;goto B595166;
case 0x595168:c.instructions+=9;goto B595168;
case 0x59516f:c.instructions+=8;goto B59516f;
case 0x595176:c.instructions+=7;goto B595176;
case 0x59517a:c.instructions+=6;goto B59517a;
case 0x59517b:c.instructions+=5;goto B59517b;
case 0x595182:c.instructions+=4;goto B595182;
case 0x595184:c.instructions+=3;goto B595184;
case 0x595188:c.instructions+=2;goto B595188;
case 0x59518c:c.instructions+=1;goto B59518c;
case 0x595192:goto L595192;
case 0x595196:c.instructions+=3;goto B595196;
case 0x595199:c.instructions+=2;goto B595199;
case 0x59519d:c.instructions+=1;goto B59519d;
case 0x5951a0:goto L5951a0;
case 0x5951a4:c.instructions+=36;goto B5951a4;
case 0x5951a8:c.instructions+=35;goto B5951a8;
case 0x5951ab:c.instructions+=34;goto B5951ab;
case 0x5951ae:c.instructions+=33;goto B5951ae;
case 0x5951b1:c.instructions+=32;goto B5951b1;
case 0x5951b4:c.instructions+=31;goto B5951b4;
case 0x5951b6:c.instructions+=30;goto B5951b6;
case 0x5951b8:c.instructions+=29;goto B5951b8;
case 0x5951bf:c.instructions+=28;goto B5951bf;
case 0x5951c6:c.instructions+=27;goto B5951c6;
case 0x5951c8:c.instructions+=26;goto B5951c8;
case 0x5951cf:c.instructions+=25;goto B5951cf;
case 0x5951d6:c.instructions+=24;goto B5951d6;
case 0x5951dd:c.instructions+=23;goto B5951dd;
case 0x5951e4:c.instructions+=22;goto B5951e4;
case 0x5951eb:c.instructions+=21;goto B5951eb;
case 0x5951f2:c.instructions+=20;goto B5951f2;
case 0x5951f9:c.instructions+=19;goto B5951f9;
case 0x5951fb:c.instructions+=18;goto B5951fb;
case 0x595202:c.instructions+=17;goto B595202;
case 0x595209:c.instructions+=16;goto B595209;
case 0x59520b:c.instructions+=15;goto B59520b;
case 0x59520d:c.instructions+=14;goto B59520d;
case 0x595214:c.instructions+=13;goto B595214;
case 0x59521b:c.instructions+=12;goto B59521b;
case 0x595222:c.instructions+=11;goto B595222;
case 0x595229:c.instructions+=10;goto B595229;
case 0x59522b:c.instructions+=9;goto B59522b;
case 0x595232:c.instructions+=8;goto B595232;
case 0x595239:c.instructions+=7;goto B595239;
case 0x59523b:c.instructions+=6;goto B59523b;
case 0x59523d:c.instructions+=5;goto B59523d;
case 0x595241:c.instructions+=4;goto B595241;
case 0x595247:c.instructions+=3;goto B595247;
case 0x595249:c.instructions+=2;goto B595249;
case 0x59524c:c.instructions+=1;goto B59524c;
case 0x59524e:goto L59524e;
case 0x595251:c.instructions+=13;goto B595251;
case 0x595259:c.instructions+=12;goto B595259;
case 0x59525b:c.instructions+=11;goto B59525b;
case 0x59525e:c.instructions+=10;goto B59525e;
case 0x595261:c.instructions+=9;goto B595261;
case 0x595263:c.instructions+=8;goto B595263;
case 0x595266:c.instructions+=7;goto B595266;
case 0x59526d:c.instructions+=6;goto B59526d;
case 0x595274:c.instructions+=5;goto B595274;
case 0x595276:c.instructions+=4;goto B595276;
case 0x595278:c.instructions+=3;goto B595278;
case 0x59527b:c.instructions+=2;goto B59527b;
case 0x59527e:c.instructions+=1;goto B59527e;
case 0x595280:goto L595280;
case 0x595284:c.instructions+=4;goto B595284;
case 0x59528a:c.instructions+=3;goto B59528a;
case 0x59528c:c.instructions+=2;goto B59528c;
case 0x59528f:c.instructions+=1;goto B59528f;
case 0x595291:goto L595291;
case 0x595294:c.instructions+=13;goto B595294;
case 0x59529c:c.instructions+=12;goto B59529c;
case 0x59529e:c.instructions+=11;goto B59529e;
case 0x5952a1:c.instructions+=10;goto B5952a1;
case 0x5952a4:c.instructions+=9;goto B5952a4;
case 0x5952a6:c.instructions+=8;goto B5952a6;
case 0x5952a9:c.instructions+=7;goto B5952a9;
case 0x5952b0:c.instructions+=6;goto B5952b0;
case 0x5952b7:c.instructions+=5;goto B5952b7;
case 0x5952b9:c.instructions+=4;goto B5952b9;
case 0x5952bb:c.instructions+=3;goto B5952bb;
case 0x5952be:c.instructions+=2;goto B5952be;
case 0x5952c1:c.instructions+=1;goto B5952c1;
case 0x5952c3:goto L5952c3;
case 0x5952ca:c.instructions+=5;goto B5952ca;
case 0x5952cb:c.instructions+=4;goto B5952cb;
case 0x5952d2:c.instructions+=3;goto B5952d2;
case 0x5952d3:c.instructions+=2;goto B5952d3;
case 0x5952d4:c.instructions+=1;goto B5952d4;
case 0x5952d9:goto L5952d9;
case 0x5952da:c.instructions+=4;goto B5952da;
case 0x5952e1:c.instructions+=3;goto B5952e1;
case 0x5952e2:c.instructions+=2;goto B5952e2;
case 0x5952e3:c.instructions+=1;goto B5952e3;
case 0x5952e8:goto L5952e8;
case 0x5952eb:goto L5952eb;
case 0x5952ed:c.instructions+=20;goto B5952ed;
case 0x5952f1:c.instructions+=19;goto B5952f1;
case 0x5952f4:c.instructions+=18;goto B5952f4;
case 0x5952f6:c.instructions+=17;goto B5952f6;
case 0x5952f9:c.instructions+=16;goto B5952f9;
case 0x595301:c.instructions+=15;goto B595301;
case 0x595304:c.instructions+=14;goto B595304;
case 0x595309:c.instructions+=13;goto B595309;
case 0x59530b:c.instructions+=12;goto B59530b;
case 0x59530e:c.instructions+=11;goto B59530e;
case 0x595311:c.instructions+=10;goto B595311;
case 0x595313:c.instructions+=9;goto B595313;
case 0x595316:c.instructions+=8;goto B595316;
case 0x595318:c.instructions+=7;goto B595318;
case 0x59531b:c.instructions+=6;goto B59531b;
case 0x59531e:c.instructions+=5;goto B59531e;
case 0x595320:c.instructions+=4;goto B595320;
case 0x595323:c.instructions+=3;goto B595323;
case 0x595326:c.instructions+=2;goto B595326;
case 0x595328:c.instructions+=1;goto B595328;
case 0x59532e:goto L59532e;
case 0x595333:c.instructions+=1;goto B595333;
case 0x595336:goto L595336;
case 0x595339:c.instructions+=12;goto B595339;
case 0x59533b:c.instructions+=11;goto B59533b;
case 0x59533e:c.instructions+=10;goto B59533e;
case 0x595341:c.instructions+=9;goto B595341;
case 0x595343:c.instructions+=8;goto B595343;
case 0x595346:c.instructions+=7;goto B595346;
case 0x595348:c.instructions+=6;goto B595348;
case 0x59534a:c.instructions+=5;goto B59534a;
case 0x59534e:c.instructions+=4;goto B59534e;
case 0x595350:c.instructions+=3;goto B595350;
case 0x595352:c.instructions+=2;goto B595352;
case 0x595355:c.instructions+=1;goto B595355;
case 0x595357:goto L595357;
case 0x595359:c.instructions+=2;goto B595359;
case 0x59535d:c.instructions+=1;goto B59535d;
case 0x595361:goto L595361;
case 0x595364:c.instructions+=12;goto B595364;
case 0x595367:c.instructions+=11;goto B595367;
case 0x59536a:c.instructions+=10;goto B59536a;
case 0x59536c:c.instructions+=9;goto B59536c;
case 0x59536e:c.instructions+=8;goto B59536e;
case 0x595371:c.instructions+=7;goto B595371;
case 0x595374:c.instructions+=6;goto B595374;
case 0x595376:c.instructions+=5;goto B595376;
case 0x59537a:c.instructions+=4;goto B59537a;
case 0x59537c:c.instructions+=3;goto B59537c;
case 0x59537e:c.instructions+=2;goto B59537e;
case 0x595381:c.instructions+=1;goto B595381;
case 0x595383:goto L595383;
case 0x595386:c.instructions+=3;goto B595386;
case 0x595388:c.instructions+=2;goto B595388;
case 0x59538c:c.instructions+=1;goto B59538c;
case 0x595390:goto L595390;
case 0x595393:c.instructions+=12;goto B595393;
case 0x595396:c.instructions+=11;goto B595396;
case 0x595399:c.instructions+=10;goto B595399;
case 0x59539b:c.instructions+=9;goto B59539b;
case 0x59539d:c.instructions+=8;goto B59539d;
case 0x5953a0:c.instructions+=7;goto B5953a0;
case 0x5953a3:c.instructions+=6;goto B5953a3;
case 0x5953a5:c.instructions+=5;goto B5953a5;
case 0x5953a9:c.instructions+=4;goto B5953a9;
case 0x5953ab:c.instructions+=3;goto B5953ab;
case 0x5953ad:c.instructions+=2;goto B5953ad;
case 0x5953b0:c.instructions+=1;goto B5953b0;
case 0x5953b2:goto L5953b2;
case 0x5953b5:c.instructions+=3;goto B5953b5;
case 0x5953b7:c.instructions+=2;goto B5953b7;
case 0x5953bb:c.instructions+=1;goto B5953bb;
case 0x5953bf:goto L5953bf;
case 0x5953c2:c.instructions+=12;goto B5953c2;
case 0x5953c5:c.instructions+=11;goto B5953c5;
case 0x5953c8:c.instructions+=10;goto B5953c8;
case 0x5953ca:c.instructions+=9;goto B5953ca;
case 0x5953cc:c.instructions+=8;goto B5953cc;
case 0x5953cf:c.instructions+=7;goto B5953cf;
case 0x5953d2:c.instructions+=6;goto B5953d2;
case 0x5953d4:c.instructions+=5;goto B5953d4;
case 0x5953d8:c.instructions+=4;goto B5953d8;
case 0x5953da:c.instructions+=3;goto B5953da;
case 0x5953dc:c.instructions+=2;goto B5953dc;
case 0x5953df:c.instructions+=1;goto B5953df;
case 0x5953e1:goto L5953e1;
case 0x5953e3:c.instructions+=2;goto B5953e3;
case 0x5953e7:c.instructions+=1;goto B5953e7;
case 0x5953eb:goto L5953eb;
case 0x5953ef:c.instructions+=5;goto B5953ef;
case 0x5953f2:c.instructions+=4;goto B5953f2;
case 0x5953f5:c.instructions+=3;goto B5953f5;
case 0x5953f8:c.instructions+=2;goto B5953f8;
case 0x5953fa:c.instructions+=1;goto B5953fa;
case 0x595400:goto L595400;
case 0x595404:c.instructions+=2;goto B595404;
case 0x595406:c.instructions+=1;goto B595406;
case 0x595408:goto L595408;
case 0x59540a:c.instructions+=2;goto B59540a;
case 0x59540d:c.instructions+=1;goto B59540d;
case 0x595411:goto L595411;
case 0x595414:c.instructions+=12;goto B595414;
case 0x595416:c.instructions+=11;goto B595416;
case 0x595419:c.instructions+=10;goto B595419;
case 0x59541c:c.instructions+=9;goto B59541c;
case 0x59541e:c.instructions+=8;goto B59541e;
case 0x595421:c.instructions+=7;goto B595421;
case 0x595423:c.instructions+=6;goto B595423;
case 0x595425:c.instructions+=5;goto B595425;
case 0x595429:c.instructions+=4;goto B595429;
case 0x59542b:c.instructions+=3;goto B59542b;
case 0x59542d:c.instructions+=2;goto B59542d;
case 0x595430:c.instructions+=1;goto B595430;
case 0x595432:goto L595432;
case 0x595434:c.instructions+=2;goto B595434;
case 0x595438:c.instructions+=1;goto B595438;
case 0x59543c:goto L59543c;
case 0x59543d:c.instructions+=3;goto B59543d;
case 0x595440:c.instructions+=2;goto B595440;
case 0x595442:c.instructions+=1;goto B595442;
case 0x595444:goto L595444;
case 0x595446:c.instructions+=4;goto B595446;
case 0x595448:c.instructions+=3;goto B595448;
case 0x59544a:c.instructions+=2;goto B59544a;
case 0x59544d:c.instructions+=1;goto B59544d;
case 0x595453:goto L595453;
case 0x595456:c.instructions+=53;goto B595456;
case 0x595458:c.instructions+=52;goto B595458;
case 0x59545b:c.instructions+=51;goto B59545b;
case 0x59545f:c.instructions+=50;goto B59545f;
case 0x595461:c.instructions+=49;goto B595461;
case 0x595467:c.instructions+=48;goto B595467;
case 0x59546d:c.instructions+=47;goto B59546d;
case 0x595471:c.instructions+=46;goto B595471;
case 0x595475:c.instructions+=45;goto B595475;
case 0x59547b:c.instructions+=44;goto B59547b;
case 0x595482:c.instructions+=43;goto B595482;
case 0x595486:c.instructions+=42;goto B595486;
case 0x59548d:c.instructions+=41;goto B59548d;
case 0x595491:c.instructions+=40;goto B595491;
case 0x595498:c.instructions+=39;goto B595498;
case 0x59549c:c.instructions+=38;goto B59549c;
case 0x5954a0:c.instructions+=37;goto B5954a0;
case 0x5954a2:c.instructions+=36;goto B5954a2;
case 0x5954a9:c.instructions+=35;goto B5954a9;
case 0x5954b0:c.instructions+=34;goto B5954b0;
case 0x5954b4:c.instructions+=33;goto B5954b4;
case 0x5954bb:c.instructions+=32;goto B5954bb;
case 0x5954be:c.instructions+=31;goto B5954be;
case 0x5954c1:c.instructions+=30;goto B5954c1;
case 0x5954c8:c.instructions+=29;goto B5954c8;
case 0x5954ca:c.instructions+=28;goto B5954ca;
case 0x5954cc:c.instructions+=27;goto B5954cc;
case 0x5954d3:c.instructions+=26;goto B5954d3;
case 0x5954da:c.instructions+=25;goto B5954da;
case 0x5954dc:c.instructions+=24;goto B5954dc;
case 0x5954e2:c.instructions+=23;goto B5954e2;
case 0x5954e8:c.instructions+=22;goto B5954e8;
case 0x5954ec:c.instructions+=21;goto B5954ec;
case 0x5954ee:c.instructions+=20;goto B5954ee;
case 0x5954f4:c.instructions+=19;goto B5954f4;
case 0x5954f6:c.instructions+=18;goto B5954f6;
case 0x5954fc:c.instructions+=17;goto B5954fc;
case 0x595502:c.instructions+=16;goto B595502;
case 0x595508:c.instructions+=15;goto B595508;
case 0x59550e:c.instructions+=14;goto B59550e;
case 0x595514:c.instructions+=13;goto B595514;
case 0x59551a:c.instructions+=12;goto B59551a;
case 0x59551c:c.instructions+=11;goto B59551c;
case 0x59551e:c.instructions+=10;goto B59551e;
case 0x595520:c.instructions+=9;goto B595520;
case 0x595522:c.instructions+=8;goto B595522;
case 0x595524:c.instructions+=7;goto B595524;
case 0x595526:c.instructions+=6;goto B595526;
case 0x595528:c.instructions+=5;goto B595528;
case 0x59552a:c.instructions+=4;goto B59552a;
case 0x59552c:c.instructions+=3;goto B59552c;
case 0x59552e:c.instructions+=2;goto B59552e;
case 0x595530:c.instructions+=1;goto B595530;
case 0x595536:goto L595536;
case 0x595538:c.instructions+=1;goto B595538;
case 0x59553e:goto L59553e;
case 0x595542:c.instructions+=3;goto B595542;
case 0x595544:c.instructions+=2;goto B595544;
case 0x595547:c.instructions+=1;goto B595547;
case 0x59554d:goto L59554d;
case 0x595553:c.instructions+=26;goto B595553;
case 0x595555:c.instructions+=25;goto B595555;
case 0x59555c:c.instructions+=24;goto B59555c;
case 0x595562:c.instructions+=23;goto B595562;
case 0x595569:c.instructions+=22;goto B595569;
case 0x59556c:c.instructions+=21;goto B59556c;
case 0x595573:c.instructions+=20;goto B595573;
case 0x595579:c.instructions+=19;goto B595579;
case 0x595580:c.instructions+=18;goto B595580;
case 0x595583:c.instructions+=17;goto B595583;
case 0x59558a:c.instructions+=16;goto B59558a;
case 0x595590:c.instructions+=15;goto B595590;
case 0x595597:c.instructions+=14;goto B595597;
case 0x59559d:c.instructions+=13;goto B59559d;
case 0x5955a4:c.instructions+=12;goto B5955a4;
case 0x5955ab:c.instructions+=11;goto B5955ab;
case 0x5955b1:c.instructions+=10;goto B5955b1;
case 0x5955b5:c.instructions+=9;goto B5955b5;
case 0x5955b9:c.instructions+=8;goto B5955b9;
case 0x5955c0:c.instructions+=7;goto B5955c0;
case 0x5955c6:c.instructions+=6;goto B5955c6;
case 0x5955d1:c.instructions+=5;goto B5955d1;
case 0x5955dc:c.instructions+=4;goto B5955dc;
case 0x5955e7:c.instructions+=3;goto B5955e7;
case 0x5955e9:c.instructions+=2;goto B5955e9;
case 0x5955ec:c.instructions+=1;goto B5955ec;
case 0x5955ee:goto L5955ee;
case 0x5955f9:c.instructions+=2;goto B5955f9;
case 0x595600:c.instructions+=1;goto B595600;
case 0x595602:goto L595602;
case 0x595606:c.instructions+=4;goto B595606;
case 0x59560c:c.instructions+=3;goto B59560c;
case 0x59560e:c.instructions+=2;goto B59560e;
case 0x595611:c.instructions+=1;goto B595611;
case 0x595613:goto L595613;
case 0x59561e:c.instructions+=2;goto B59561e;
case 0x595625:c.instructions+=1;goto B595625;
case 0x595627:goto L595627;
case 0x595632:c.instructions+=3;goto B595632;
case 0x595639:c.instructions+=2;goto B595639;
case 0x595640:c.instructions+=1;goto B595640;
case 0x595642:goto L595642;
case 0x595644:c.instructions+=1;goto B595644;
case 0x595646:goto L595646;
case 0x59564a:goto L59564a;
case 0x59564e:c.instructions+=6;goto B59564e;
case 0x59564f:c.instructions+=5;goto B59564f;
case 0x595652:c.instructions+=4;goto B595652;
case 0x595654:c.instructions+=3;goto B595654;
case 0x595658:c.instructions+=2;goto B595658;
case 0x59565c:c.instructions+=1;goto B59565c;
case 0x595662:goto L595662;
case 0x595666:c.instructions+=7;goto B595666;
case 0x59566a:c.instructions+=6;goto B59566a;
case 0x59566e:c.instructions+=5;goto B59566e;
case 0x595671:c.instructions+=4;goto B595671;
case 0x595673:c.instructions+=3;goto B595673;
case 0x595677:c.instructions+=2;goto B595677;
case 0x59567b:c.instructions+=1;goto B59567b;
case 0x595681:goto L595681;
case 0x595685:goto L595685;
case 0x595688:c.instructions+=3;goto B595688;
case 0x59568a:c.instructions+=2;goto B59568a;
case 0x595692:c.instructions+=1;goto B595692;
case 0x595698:goto L595698;
case 0x595699:c.instructions+=8;goto B595699;
case 0x59569d:c.instructions+=7;goto B59569d;
case 0x5956a8:c.instructions+=6;goto B5956a8;
case 0x5956ac:c.instructions+=5;goto B5956ac;
case 0x5956ad:c.instructions+=4;goto B5956ad;
case 0x5956af:c.instructions+=3;goto B5956af;
case 0x5956b3:c.instructions+=2;goto B5956b3;
case 0x5956b7:c.instructions+=1;goto B5956b7;
case 0x5956bd:goto L5956bd;
case 0x5956c1:c.instructions+=12;goto B5956c1;
case 0x5956c8:c.instructions+=11;goto B5956c8;
case 0x5956c9:c.instructions+=10;goto B5956c9;
case 0x5956cd:c.instructions+=9;goto B5956cd;
case 0x5956d1:c.instructions+=8;goto B5956d1;
case 0x5956d4:c.instructions+=7;goto B5956d4;
case 0x5956d6:c.instructions+=6;goto B5956d6;
case 0x5956da:c.instructions+=5;goto B5956da;
case 0x5956e1:c.instructions+=4;goto B5956e1;
case 0x5956e5:c.instructions+=3;goto B5956e5;
case 0x5956e9:c.instructions+=2;goto B5956e9;
case 0x5956ed:c.instructions+=1;goto B5956ed;
case 0x5956f3:goto L5956f3;
case 0x5956f7:c.instructions+=15;goto B5956f7;
case 0x5956fe:c.instructions+=14;goto B5956fe;
case 0x595702:c.instructions+=13;goto B595702;
case 0x595704:c.instructions+=12;goto B595704;
case 0x595708:c.instructions+=11;goto B595708;
case 0x59570c:c.instructions+=10;goto B59570c;
case 0x59570f:c.instructions+=9;goto B59570f;
case 0x595713:c.instructions+=8;goto B595713;
case 0x595717:c.instructions+=7;goto B595717;
case 0x59571a:c.instructions+=6;goto B59571a;
case 0x59571c:c.instructions+=5;goto B59571c;
case 0x59571e:c.instructions+=4;goto B59571e;
case 0x595720:c.instructions+=3;goto B595720;
case 0x595723:c.instructions+=2;goto B595723;
case 0x595727:c.instructions+=1;goto B595727;
case 0x595730:goto L595730;
case 0x595734:c.instructions+=33;goto B595734;
case 0x595738:c.instructions+=32;goto B595738;
case 0x59573a:c.instructions+=31;goto B59573a;
case 0x59573c:c.instructions+=30;goto B59573c;
case 0x595743:c.instructions+=29;goto B595743;
case 0x595746:c.instructions+=28;goto B595746;
case 0x595747:c.instructions+=27;goto B595747;
case 0x59574a:c.instructions+=26;goto B59574a;
case 0x59574d:c.instructions+=25;goto B59574d;
case 0x595750:c.instructions+=24;goto B595750;
case 0x595754:c.instructions+=23;goto B595754;
case 0x59575b:c.instructions+=22;goto B59575b;
case 0x595762:c.instructions+=21;goto B595762;
case 0x595764:c.instructions+=20;goto B595764;
case 0x59576b:c.instructions+=19;goto B59576b;
case 0x595772:c.instructions+=18;goto B595772;
case 0x595779:c.instructions+=17;goto B595779;
case 0x595780:c.instructions+=16;goto B595780;
case 0x595781:c.instructions+=15;goto B595781;
case 0x595784:c.instructions+=14;goto B595784;
case 0x595786:c.instructions+=13;goto B595786;
case 0x595789:c.instructions+=12;goto B595789;
case 0x59578c:c.instructions+=11;goto B59578c;
case 0x59578f:c.instructions+=10;goto B59578f;
case 0x595791:c.instructions+=9;goto B595791;
case 0x595798:c.instructions+=8;goto B595798;
case 0x59579f:c.instructions+=7;goto B59579f;
case 0x5957a1:c.instructions+=6;goto B5957a1;
case 0x5957a8:c.instructions+=5;goto B5957a8;
case 0x5957af:c.instructions+=4;goto B5957af;
case 0x5957b6:c.instructions+=3;goto B5957b6;
case 0x5957b7:c.instructions+=2;goto B5957b7;
case 0x5957be:c.instructions+=1;goto B5957be;
case 0x5957c3:goto L5957c3;
case 0x5957ca:c.instructions+=4;goto B5957ca;
case 0x5957cb:c.instructions+=3;goto B5957cb;
case 0x5957d2:c.instructions+=2;goto B5957d2;
case 0x5957d3:c.instructions+=1;goto B5957d3;
case 0x5957d8:goto L5957d8;
case 0x5957db:c.instructions+=21;goto B5957db;
case 0x5957dd:c.instructions+=20;goto B5957dd;
case 0x5957e0:c.instructions+=19;goto B5957e0;
case 0x5957e3:c.instructions+=18;goto B5957e3;
case 0x5957e6:c.instructions+=17;goto B5957e6;
case 0x5957e9:c.instructions+=16;goto B5957e9;
case 0x5957ec:c.instructions+=15;goto B5957ec;
case 0x5957f3:c.instructions+=14;goto B5957f3;
case 0x5957f5:c.instructions+=13;goto B5957f5;
case 0x5957fc:c.instructions+=12;goto B5957fc;
case 0x5957fe:c.instructions+=11;goto B5957fe;
case 0x595800:c.instructions+=10;goto B595800;
case 0x595802:c.instructions+=9;goto B595802;
case 0x595809:c.instructions+=8;goto B595809;
case 0x59580b:c.instructions+=7;goto B59580b;
case 0x59580d:c.instructions+=6;goto B59580d;
case 0x595813:c.instructions+=5;goto B595813;
case 0x595815:c.instructions+=4;goto B595815;
case 0x595817:c.instructions+=3;goto B595817;
case 0x59581a:c.instructions+=2;goto B59581a;
case 0x59581c:c.instructions+=1;goto B59581c;
case 0x595822:goto L595822;
case 0x595829:c.instructions+=11;goto B595829;
case 0x59582b:c.instructions+=10;goto B59582b;
case 0x595832:c.instructions+=9;goto B595832;
case 0x595834:c.instructions+=8;goto B595834;
case 0x59583b:c.instructions+=7;goto B59583b;
case 0x59583d:c.instructions+=6;goto B59583d;
case 0x595844:c.instructions+=5;goto B595844;
case 0x59584b:c.instructions+=4;goto B59584b;
case 0x59584d:c.instructions+=3;goto B59584d;
case 0x59584f:c.instructions+=2;goto B59584f;
case 0x595852:c.instructions+=1;goto B595852;
case 0x595857:goto L595857;
case 0x59585b:c.instructions+=4;goto B59585b;
case 0x595861:c.instructions+=3;goto B595861;
case 0x595863:c.instructions+=2;goto B595863;
case 0x595866:c.instructions+=1;goto B595866;
case 0x595868:goto L595868;
case 0x595872:c.instructions+=3;goto B595872;
case 0x595879:c.instructions+=2;goto B595879;
case 0x59587c:c.instructions+=1;goto B59587c;
case 0x595881:goto L595881;
case 0x595885:c.instructions+=4;goto B595885;
case 0x59588b:c.instructions+=3;goto B59588b;
case 0x59588d:c.instructions+=2;goto B59588d;
case 0x595890:c.instructions+=1;goto B595890;
case 0x595892:goto L595892;
case 0x59589c:c.instructions+=18;goto B59589c;
case 0x5958a3:c.instructions+=17;goto B5958a3;
case 0x5958a9:c.instructions+=16;goto B5958a9;
case 0x5958ac:c.instructions+=15;goto B5958ac;
case 0x5958af:c.instructions+=14;goto B5958af;
case 0x5958b3:c.instructions+=13;goto B5958b3;
case 0x5958b6:c.instructions+=12;goto B5958b6;
case 0x5958ba:c.instructions+=11;goto B5958ba;
case 0x5958bc:c.instructions+=10;goto B5958bc;
case 0x5958be:c.instructions+=9;goto B5958be;
case 0x5958c1:c.instructions+=8;goto B5958c1;
case 0x5958c4:c.instructions+=7;goto B5958c4;
case 0x5958c7:c.instructions+=6;goto B5958c7;
case 0x5958c8:c.instructions+=5;goto B5958c8;
case 0x5958c9:c.instructions+=4;goto B5958c9;
case 0x5958ca:c.instructions+=3;goto B5958ca;
case 0x5958cc:c.instructions+=2;goto B5958cc;
case 0x5958cd:c.instructions+=1;goto B5958cd;
case 0x5958d0:goto L5958d0;
case 0x5958da:c.instructions+=30;goto B5958da;
case 0x5958e1:c.instructions+=29;goto B5958e1;
case 0x5958e7:c.instructions+=28;goto B5958e7;
case 0x5958ee:c.instructions+=27;goto B5958ee;
case 0x5958f4:c.instructions+=26;goto B5958f4;
case 0x5958f7:c.instructions+=25;goto B5958f7;
case 0x5958fa:c.instructions+=24;goto B5958fa;
case 0x5958fe:c.instructions+=23;goto B5958fe;
case 0x595901:c.instructions+=22;goto B595901;
case 0x595905:c.instructions+=21;goto B595905;
case 0x595907:c.instructions+=20;goto B595907;
case 0x59590a:c.instructions+=19;goto B59590a;
case 0x59590c:c.instructions+=18;goto B59590c;
case 0x59590f:c.instructions+=17;goto B59590f;
case 0x595912:c.instructions+=16;goto B595912;
case 0x595915:c.instructions+=15;goto B595915;
case 0x595917:c.instructions+=14;goto B595917;
case 0x59591a:c.instructions+=13;goto B59591a;
case 0x59591d:c.instructions+=12;goto B59591d;
case 0x595920:c.instructions+=11;goto B595920;
case 0x595922:c.instructions+=10;goto B595922;
case 0x595925:c.instructions+=9;goto B595925;
case 0x595927:c.instructions+=8;goto B595927;
case 0x59592a:c.instructions+=7;goto B59592a;
case 0x59592d:c.instructions+=6;goto B59592d;
case 0x59592e:c.instructions+=5;goto B59592e;
case 0x59592f:c.instructions+=4;goto B59592f;
case 0x595930:c.instructions+=3;goto B595930;
case 0x595932:c.instructions+=2;goto B595932;
case 0x595933:c.instructions+=1;goto B595933;
case 0x595936:goto L595936;
case 0x595939:c.instructions+=1;goto B595939;
case 0x59593f:goto L59593f;
case 0x595942:c.instructions+=5;goto B595942;
case 0x595944:c.instructions+=4;goto B595944;
case 0x595946:c.instructions+=3;goto B595946;
case 0x59594a:c.instructions+=2;goto B59594a;
case 0x59594e:c.instructions+=1;goto B59594e;
case 0x595954:goto L595954;
case 0x595957:c.instructions+=2;goto B595957;
case 0x59595b:c.instructions+=1;goto B59595b;
case 0x595960:goto L595960;
case 0x595963:c.instructions+=17;goto B595963;
case 0x595966:c.instructions+=16;goto B595966;
case 0x595969:c.instructions+=15;goto B595969;
case 0x59596b:c.instructions+=14;goto B59596b;
case 0x59596e:c.instructions+=13;goto B59596e;
case 0x595971:c.instructions+=12;goto B595971;
case 0x595978:c.instructions+=11;goto B595978;
case 0x59597f:c.instructions+=10;goto B59597f;
case 0x595981:c.instructions+=9;goto B595981;
case 0x595988:c.instructions+=8;goto B595988;
case 0x59598f:c.instructions+=7;goto B59598f;
case 0x595992:c.instructions+=6;goto B595992;
case 0x595996:c.instructions+=5;goto B595996;
case 0x59599d:c.instructions+=4;goto B59599d;
case 0x59599f:c.instructions+=3;goto B59599f;
case 0x5959a3:c.instructions+=2;goto B5959a3;
case 0x5959a7:c.instructions+=1;goto B5959a7;
case 0x5959ad:goto L5959ad;
case 0x5959b0:c.instructions+=2;goto B5959b0;
case 0x5959b4:c.instructions+=1;goto B5959b4;
case 0x5959b6:goto L5959b6;
case 0x5959ba:c.instructions+=1;goto B5959ba;
case 0x5959c0:goto L5959c0;
case 0x5959c3:c.instructions+=33;goto B5959c3;
case 0x5959c6:c.instructions+=32;goto B5959c6;
case 0x5959c8:c.instructions+=31;goto B5959c8;
case 0x5959cb:c.instructions+=30;goto B5959cb;
case 0x5959ce:c.instructions+=29;goto B5959ce;
case 0x5959d0:c.instructions+=28;goto B5959d0;
case 0x5959d7:c.instructions+=27;goto B5959d7;
case 0x5959de:c.instructions+=26;goto B5959de;
case 0x5959e0:c.instructions+=25;goto B5959e0;
case 0x5959e4:c.instructions+=24;goto B5959e4;
case 0x5959e8:c.instructions+=23;goto B5959e8;
case 0x5959ec:c.instructions+=22;goto B5959ec;
case 0x5959f0:c.instructions+=21;goto B5959f0;
case 0x5959f7:c.instructions+=20;goto B5959f7;
case 0x5959fb:c.instructions+=19;goto B5959fb;
case 0x595a02:c.instructions+=18;goto B595a02;
case 0x595a04:c.instructions+=17;goto B595a04;
case 0x595a08:c.instructions+=16;goto B595a08;
case 0x595a0f:c.instructions+=15;goto B595a0f;
case 0x595a11:c.instructions+=14;goto B595a11;
case 0x595a15:c.instructions+=13;goto B595a15;
case 0x595a19:c.instructions+=12;goto B595a19;
case 0x595a1d:c.instructions+=11;goto B595a1d;
case 0x595a21:c.instructions+=10;goto B595a21;
case 0x595a23:c.instructions+=9;goto B595a23;
case 0x595a27:c.instructions+=8;goto B595a27;
case 0x595a2b:c.instructions+=7;goto B595a2b;
case 0x595a2d:c.instructions+=6;goto B595a2d;
case 0x595a2f:c.instructions+=5;goto B595a2f;
case 0x595a33:c.instructions+=4;goto B595a33;
case 0x595a39:c.instructions+=3;goto B595a39;
case 0x595a3b:c.instructions+=2;goto B595a3b;
case 0x595a3e:c.instructions+=1;goto B595a3e;
case 0x595a40:goto L595a40;
case 0x595a43:c.instructions+=13;goto B595a43;
case 0x595a4b:c.instructions+=12;goto B595a4b;
case 0x595a4e:c.instructions+=11;goto B595a4e;
case 0x595a51:c.instructions+=10;goto B595a51;
case 0x595a53:c.instructions+=9;goto B595a53;
case 0x595a56:c.instructions+=8;goto B595a56;
case 0x595a59:c.instructions+=7;goto B595a59;
case 0x595a60:c.instructions+=6;goto B595a60;
case 0x595a67:c.instructions+=5;goto B595a67;
case 0x595a69:c.instructions+=4;goto B595a69;
case 0x595a6b:c.instructions+=3;goto B595a6b;
case 0x595a6e:c.instructions+=2;goto B595a6e;
case 0x595a71:c.instructions+=1;goto B595a71;
case 0x595a73:goto L595a73;
case 0x595a77:c.instructions+=4;goto B595a77;
case 0x595a7d:c.instructions+=3;goto B595a7d;
case 0x595a7f:c.instructions+=2;goto B595a7f;
case 0x595a82:c.instructions+=1;goto B595a82;
case 0x595a84:goto L595a84;
case 0x595a87:c.instructions+=13;goto B595a87;
case 0x595a8f:c.instructions+=12;goto B595a8f;
case 0x595a92:c.instructions+=11;goto B595a92;
case 0x595a95:c.instructions+=10;goto B595a95;
case 0x595a98:c.instructions+=9;goto B595a98;
case 0x595a9b:c.instructions+=8;goto B595a9b;
case 0x595a9d:c.instructions+=7;goto B595a9d;
case 0x595aa4:c.instructions+=6;goto B595aa4;
case 0x595aab:c.instructions+=5;goto B595aab;
case 0x595aad:c.instructions+=4;goto B595aad;
case 0x595aaf:c.instructions+=3;goto B595aaf;
case 0x595ab2:c.instructions+=2;goto B595ab2;
case 0x595ab5:c.instructions+=1;goto B595ab5;
case 0x595ab7:goto L595ab7;
case 0x595abb:c.instructions+=5;goto B595abb;
case 0x595abc:c.instructions+=4;goto B595abc;
case 0x595ac3:c.instructions+=3;goto B595ac3;
case 0x595ac4:c.instructions+=2;goto B595ac4;
case 0x595ac5:c.instructions+=1;goto B595ac5;
case 0x595aca:goto L595aca;
case 0x595acb:c.instructions+=4;goto B595acb;
case 0x595ad2:c.instructions+=3;goto B595ad2;
case 0x595ad3:c.instructions+=2;goto B595ad3;
case 0x595ad4:c.instructions+=1;goto B595ad4;
case 0x595ad9:goto L595ad9;
case 0x595adc:goto L595adc;
case 0x595adf:c.instructions+=11;goto B595adf;
case 0x595ae1:c.instructions+=10;goto B595ae1;
case 0x595ae3:c.instructions+=9;goto B595ae3;
case 0x595aeb:c.instructions+=8;goto B595aeb;
case 0x595aee:c.instructions+=7;goto B595aee;
case 0x595af3:c.instructions+=6;goto B595af3;
case 0x595af6:c.instructions+=5;goto B595af6;
case 0x595af8:c.instructions+=4;goto B595af8;
case 0x595afb:c.instructions+=3;goto B595afb;
case 0x595afe:c.instructions+=2;goto B595afe;
case 0x595b00:c.instructions+=1;goto B595b00;
case 0x595b06:goto L595b06;
case 0x595b0b:c.instructions+=1;goto B595b0b;
case 0x595b0e:goto L595b0e;
case 0x595b11:c.instructions+=12;goto B595b11;
case 0x595b14:c.instructions+=11;goto B595b14;
case 0x595b17:c.instructions+=10;goto B595b17;
case 0x595b19:c.instructions+=9;goto B595b19;
case 0x595b1b:c.instructions+=8;goto B595b1b;
case 0x595b1e:c.instructions+=7;goto B595b1e;
case 0x595b21:c.instructions+=6;goto B595b21;
case 0x595b23:c.instructions+=5;goto B595b23;
case 0x595b27:c.instructions+=4;goto B595b27;
case 0x595b29:c.instructions+=3;goto B595b29;
case 0x595b2b:c.instructions+=2;goto B595b2b;
case 0x595b2e:c.instructions+=1;goto B595b2e;
case 0x595b30:goto L595b30;
case 0x595b32:c.instructions+=2;goto B595b32;
case 0x595b36:c.instructions+=1;goto B595b36;
case 0x595b3a:goto L595b3a;
case 0x595b3d:c.instructions+=12;goto B595b3d;
case 0x595b3f:c.instructions+=11;goto B595b3f;
case 0x595b42:c.instructions+=10;goto B595b42;
case 0x595b45:c.instructions+=9;goto B595b45;
case 0x595b47:c.instructions+=8;goto B595b47;
case 0x595b49:c.instructions+=7;goto B595b49;
case 0x595b4c:c.instructions+=6;goto B595b4c;
case 0x595b4e:c.instructions+=5;goto B595b4e;
case 0x595b52:c.instructions+=4;goto B595b52;
case 0x595b54:c.instructions+=3;goto B595b54;
case 0x595b56:c.instructions+=2;goto B595b56;
case 0x595b59:c.instructions+=1;goto B595b59;
case 0x595b5b:goto L595b5b;
case 0x595b5e:c.instructions+=3;goto B595b5e;
case 0x595b60:c.instructions+=2;goto B595b60;
case 0x595b64:c.instructions+=1;goto B595b64;
case 0x595b68:goto L595b68;
case 0x595b6b:c.instructions+=12;goto B595b6b;
case 0x595b6e:c.instructions+=11;goto B595b6e;
case 0x595b71:c.instructions+=10;goto B595b71;
case 0x595b74:c.instructions+=9;goto B595b74;
case 0x595b76:c.instructions+=8;goto B595b76;
case 0x595b79:c.instructions+=7;goto B595b79;
case 0x595b7b:c.instructions+=6;goto B595b7b;
case 0x595b7d:c.instructions+=5;goto B595b7d;
case 0x595b81:c.instructions+=4;goto B595b81;
case 0x595b83:c.instructions+=3;goto B595b83;
case 0x595b85:c.instructions+=2;goto B595b85;
case 0x595b88:c.instructions+=1;goto B595b88;
case 0x595b8a:goto L595b8a;
case 0x595b8d:c.instructions+=3;goto B595b8d;
case 0x595b8f:c.instructions+=2;goto B595b8f;
case 0x595b93:c.instructions+=1;goto B595b93;
case 0x595b97:goto L595b97;
case 0x595b9a:c.instructions+=12;goto B595b9a;
case 0x595b9d:c.instructions+=11;goto B595b9d;
case 0x595ba0:c.instructions+=10;goto B595ba0;
case 0x595ba3:c.instructions+=9;goto B595ba3;
case 0x595ba5:c.instructions+=8;goto B595ba5;
case 0x595ba8:c.instructions+=7;goto B595ba8;
case 0x595baa:c.instructions+=6;goto B595baa;
case 0x595bac:c.instructions+=5;goto B595bac;
case 0x595bb0:c.instructions+=4;goto B595bb0;
case 0x595bb2:c.instructions+=3;goto B595bb2;
case 0x595bb4:c.instructions+=2;goto B595bb4;
case 0x595bb7:c.instructions+=1;goto B595bb7;
case 0x595bb9:goto L595bb9;
case 0x595bbb:c.instructions+=2;goto B595bbb;
case 0x595bbf:c.instructions+=1;goto B595bbf;
case 0x595bc3:goto L595bc3;
case 0x595bc7:c.instructions+=5;goto B595bc7;
case 0x595bca:c.instructions+=4;goto B595bca;
case 0x595bcd:c.instructions+=3;goto B595bcd;
case 0x595bd0:c.instructions+=2;goto B595bd0;
case 0x595bd2:c.instructions+=1;goto B595bd2;
case 0x595bd8:goto L595bd8;
case 0x595bdc:c.instructions+=2;goto B595bdc;
case 0x595bde:c.instructions+=1;goto B595bde;
case 0x595be0:goto L595be0;
case 0x595be2:c.instructions+=3;goto B595be2;
case 0x595be5:c.instructions+=2;goto B595be5;
case 0x595be9:c.instructions+=1;goto B595be9;
case 0x595bf0:goto L595bf0;
case 0x595bf3:c.instructions+=12;goto B595bf3;
case 0x595bf5:c.instructions+=11;goto B595bf5;
case 0x595bf8:c.instructions+=10;goto B595bf8;
case 0x595bfb:c.instructions+=9;goto B595bfb;
case 0x595bfd:c.instructions+=8;goto B595bfd;
case 0x595bff:c.instructions+=7;goto B595bff;
case 0x595c02:c.instructions+=6;goto B595c02;
case 0x595c04:c.instructions+=5;goto B595c04;
case 0x595c08:c.instructions+=4;goto B595c08;
case 0x595c0a:c.instructions+=3;goto B595c0a;
case 0x595c0c:c.instructions+=2;goto B595c0c;
case 0x595c0f:c.instructions+=1;goto B595c0f;
case 0x595c11:goto L595c11;
case 0x595c13:c.instructions+=2;goto B595c13;
case 0x595c17:c.instructions+=1;goto B595c17;
case 0x595c1b:goto L595c1b;
case 0x595c1c:c.instructions+=3;goto B595c1c;
case 0x595c1f:c.instructions+=2;goto B595c1f;
case 0x595c21:c.instructions+=1;goto B595c21;
case 0x595c23:goto L595c23;
case 0x595c26:c.instructions+=12;goto B595c26;
case 0x595c29:c.instructions+=11;goto B595c29;
case 0x595c2c:c.instructions+=10;goto B595c2c;
case 0x595c2f:c.instructions+=9;goto B595c2f;
case 0x595c31:c.instructions+=8;goto B595c31;
case 0x595c34:c.instructions+=7;goto B595c34;
case 0x595c36:c.instructions+=6;goto B595c36;
case 0x595c38:c.instructions+=5;goto B595c38;
case 0x595c3a:c.instructions+=4;goto B595c3a;
case 0x595c3c:c.instructions+=3;goto B595c3c;
case 0x595c3e:c.instructions+=2;goto B595c3e;
case 0x595c41:c.instructions+=1;goto B595c41;
case 0x595c47:goto L595c47;
case 0x595c4b:c.instructions+=53;goto B595c4b;
case 0x595c4f:c.instructions+=52;goto B595c4f;
case 0x595c53:c.instructions+=51;goto B595c53;
case 0x595c57:c.instructions+=50;goto B595c57;
case 0x595c5b:c.instructions+=49;goto B595c5b;
case 0x595c5f:c.instructions+=48;goto B595c5f;
case 0x595c63:c.instructions+=47;goto B595c63;
case 0x595c67:c.instructions+=46;goto B595c67;
case 0x595c6e:c.instructions+=45;goto B595c6e;
case 0x595c70:c.instructions+=44;goto B595c70;
case 0x595c77:c.instructions+=43;goto B595c77;
case 0x595c7e:c.instructions+=42;goto B595c7e;
case 0x595c85:c.instructions+=41;goto B595c85;
case 0x595c8c:c.instructions+=40;goto B595c8c;
case 0x595c8f:c.instructions+=39;goto B595c8f;
case 0x595c91:c.instructions+=38;goto B595c91;
case 0x595c98:c.instructions+=37;goto B595c98;
case 0x595c9b:c.instructions+=36;goto B595c9b;
case 0x595c9d:c.instructions+=35;goto B595c9d;
case 0x595ca1:c.instructions+=34;goto B595ca1;
case 0x595ca5:c.instructions+=33;goto B595ca5;
case 0x595ca7:c.instructions+=32;goto B595ca7;
case 0x595cad:c.instructions+=31;goto B595cad;
case 0x595cb3:c.instructions+=30;goto B595cb3;
case 0x595cb7:c.instructions+=29;goto B595cb7;
case 0x595cbd:c.instructions+=28;goto B595cbd;
case 0x595cc0:c.instructions+=27;goto B595cc0;
case 0x595cc2:c.instructions+=26;goto B595cc2;
case 0x595cc5:c.instructions+=25;goto B595cc5;
case 0x595cc8:c.instructions+=24;goto B595cc8;
case 0x595cce:c.instructions+=23;goto B595cce;
case 0x595cd0:c.instructions+=22;goto B595cd0;
case 0x595cd4:c.instructions+=21;goto B595cd4;
case 0x595cd6:c.instructions+=20;goto B595cd6;
case 0x595cdc:c.instructions+=19;goto B595cdc;
case 0x595ce2:c.instructions+=18;goto B595ce2;
case 0x595ce8:c.instructions+=17;goto B595ce8;
case 0x595cee:c.instructions+=16;goto B595cee;
case 0x595cf4:c.instructions+=15;goto B595cf4;
case 0x595cfa:c.instructions+=14;goto B595cfa;
case 0x595d00:c.instructions+=13;goto B595d00;
case 0x595d06:c.instructions+=12;goto B595d06;
case 0x595d08:c.instructions+=11;goto B595d08;
case 0x595d0a:c.instructions+=10;goto B595d0a;
case 0x595d0c:c.instructions+=9;goto B595d0c;
case 0x595d0e:c.instructions+=8;goto B595d0e;
case 0x595d10:c.instructions+=7;goto B595d10;
case 0x595d12:c.instructions+=6;goto B595d12;
case 0x595d14:c.instructions+=5;goto B595d14;
case 0x595d16:c.instructions+=4;goto B595d16;
case 0x595d18:c.instructions+=3;goto B595d18;
case 0x595d1a:c.instructions+=2;goto B595d1a;
case 0x595d1c:c.instructions+=1;goto B595d1c;
case 0x595d22:goto L595d22;
case 0x595d24:c.instructions+=1;goto B595d24;
case 0x595d2a:goto L595d2a;
case 0x595d2e:c.instructions+=3;goto B595d2e;
case 0x595d30:c.instructions+=2;goto B595d30;
case 0x595d33:c.instructions+=1;goto B595d33;
case 0x595d39:goto L595d39;
case 0x595d3f:c.instructions+=25;goto B595d3f;
case 0x595d41:c.instructions+=24;goto B595d41;
case 0x595d48:c.instructions+=23;goto B595d48;
case 0x595d4e:c.instructions+=22;goto B595d4e;
case 0x595d55:c.instructions+=21;goto B595d55;
case 0x595d58:c.instructions+=20;goto B595d58;
case 0x595d5f:c.instructions+=19;goto B595d5f;
case 0x595d65:c.instructions+=18;goto B595d65;
case 0x595d6c:c.instructions+=17;goto B595d6c;
case 0x595d6f:c.instructions+=16;goto B595d6f;
case 0x595d76:c.instructions+=15;goto B595d76;
case 0x595d7c:c.instructions+=14;goto B595d7c;
case 0x595d83:c.instructions+=13;goto B595d83;
case 0x595d89:c.instructions+=12;goto B595d89;
case 0x595d90:c.instructions+=11;goto B595d90;
case 0x595d97:c.instructions+=10;goto B595d97;
case 0x595d9d:c.instructions+=9;goto B595d9d;
case 0x595da1:c.instructions+=8;goto B595da1;
case 0x595da5:c.instructions+=7;goto B595da5;
case 0x595dac:c.instructions+=6;goto B595dac;
case 0x595db2:c.instructions+=5;goto B595db2;
case 0x595db7:c.instructions+=4;goto B595db7;
case 0x595dbe:c.instructions+=3;goto B595dbe;
case 0x595dc0:c.instructions+=2;goto B595dc0;
case 0x595dc3:c.instructions+=1;goto B595dc3;
case 0x595dc5:goto L595dc5;
case 0x595dcc:c.instructions+=1;goto B595dcc;
case 0x595dce:goto L595dce;
case 0x595dd2:c.instructions+=4;goto B595dd2;
case 0x595dd8:c.instructions+=3;goto B595dd8;
case 0x595dda:c.instructions+=2;goto B595dda;
case 0x595ddd:c.instructions+=1;goto B595ddd;
case 0x595ddf:goto L595ddf;
case 0x595de6:c.instructions+=2;goto B595de6;
case 0x595ded:c.instructions+=1;goto B595ded;
case 0x595def:goto L595def;
case 0x595dfa:c.instructions+=1;goto B595dfa;
case 0x595e01:goto L595e01;
case 0x595e08:goto L595e08;
case 0x595e0f:c.instructions+=3;goto B595e0f;
case 0x595e13:c.instructions+=2;goto B595e13;
case 0x595e1e:c.instructions+=1;goto B595e1e;
case 0x595e20:goto L595e20;
case 0x595e22:c.instructions+=1;goto B595e22;
case 0x595e24:goto L595e24;
case 0x595e28:goto L595e28;
case 0x595e2c:c.instructions+=8;goto B595e2c;
case 0x595e2d:c.instructions+=7;goto B595e2d;
case 0x595e30:c.instructions+=6;goto B595e30;
case 0x595e32:c.instructions+=5;goto B595e32;
case 0x595e36:c.instructions+=4;goto B595e36;
case 0x595e3a:c.instructions+=3;goto B595e3a;
case 0x595e3e:c.instructions+=2;goto B595e3e;
case 0x595e42:c.instructions+=1;goto B595e42;
case 0x595e48:goto L595e48;
case 0x595e4c:goto L595e4c;
case 0x595e4e:c.instructions+=5;goto B595e4e;
case 0x595e51:c.instructions+=4;goto B595e51;
case 0x595e53:c.instructions+=3;goto B595e53;
case 0x595e57:c.instructions+=2;goto B595e57;
case 0x595e5b:c.instructions+=1;goto B595e5b;
case 0x595e61:goto L595e61;
case 0x595e66:goto L595e66;
case 0x595e6a:c.instructions+=4;goto B595e6a;
case 0x595e70:c.instructions+=3;goto B595e70;
case 0x595e72:c.instructions+=2;goto B595e72;
case 0x595e75:c.instructions+=1;goto B595e75;
case 0x595e77:goto L595e77;
case 0x595e81:c.instructions+=17;goto B595e81;
case 0x595e88:c.instructions+=16;goto B595e88;
case 0x595e8b:c.instructions+=15;goto B595e8b;
case 0x595e8d:c.instructions+=14;goto B595e8d;
case 0x595e93:c.instructions+=13;goto B595e93;
case 0x595e96:c.instructions+=12;goto B595e96;
case 0x595e99:c.instructions+=11;goto B595e99;
case 0x595e9b:c.instructions+=10;goto B595e9b;
case 0x595e9d:c.instructions+=9;goto B595e9d;
case 0x595e9f:c.instructions+=8;goto B595e9f;
case 0x595ea2:c.instructions+=7;goto B595ea2;
case 0x595ea5:c.instructions+=6;goto B595ea5;
case 0x595ea6:c.instructions+=5;goto B595ea6;
case 0x595ea7:c.instructions+=4;goto B595ea7;
case 0x595ea8:c.instructions+=3;goto B595ea8;
case 0x595eaa:c.instructions+=2;goto B595eaa;
case 0x595eab:c.instructions+=1;goto B595eab;
case 0x595eae:goto L595eae;
case 0x595eb2:c.instructions+=4;goto B595eb2;
case 0x595eb8:c.instructions+=3;goto B595eb8;
case 0x595eba:c.instructions+=2;goto B595eba;
case 0x595ebd:c.instructions+=1;goto B595ebd;
case 0x595ebf:goto L595ebf;
case 0x595ec9:c.instructions+=17;goto B595ec9;
case 0x595ed0:c.instructions+=16;goto B595ed0;
case 0x595ed3:c.instructions+=15;goto B595ed3;
case 0x595ed5:c.instructions+=14;goto B595ed5;
case 0x595edb:c.instructions+=13;goto B595edb;
case 0x595ede:c.instructions+=12;goto B595ede;
case 0x595ee1:c.instructions+=11;goto B595ee1;
case 0x595ee3:c.instructions+=10;goto B595ee3;
case 0x595ee5:c.instructions+=9;goto B595ee5;
case 0x595ee7:c.instructions+=8;goto B595ee7;
case 0x595eea:c.instructions+=7;goto B595eea;
case 0x595eed:c.instructions+=6;goto B595eed;
case 0x595eee:c.instructions+=5;goto B595eee;
case 0x595eef:c.instructions+=4;goto B595eef;
case 0x595ef0:c.instructions+=3;goto B595ef0;
case 0x595ef2:c.instructions+=2;goto B595ef2;
case 0x595ef3:c.instructions+=1;goto B595ef3;
case 0x595ef6:goto L595ef6;
case 0x595f00:c.instructions+=28;goto B595f00;
case 0x595f07:c.instructions+=27;goto B595f07;
case 0x595f0d:c.instructions+=26;goto B595f0d;
case 0x595f10:c.instructions+=25;goto B595f10;
case 0x595f14:c.instructions+=24;goto B595f14;
case 0x595f16:c.instructions+=23;goto B595f16;
case 0x595f19:c.instructions+=22;goto B595f19;
case 0x595f1b:c.instructions+=21;goto B595f1b;
case 0x595f1d:c.instructions+=20;goto B595f1d;
case 0x595f1f:c.instructions+=19;goto B595f1f;
case 0x595f22:c.instructions+=18;goto B595f22;
case 0x595f25:c.instructions+=17;goto B595f25;
case 0x595f2c:c.instructions+=16;goto B595f2c;
case 0x595f32:c.instructions+=15;goto B595f32;
case 0x595f35:c.instructions+=14;goto B595f35;
case 0x595f39:c.instructions+=13;goto B595f39;
case 0x595f3b:c.instructions+=12;goto B595f3b;
case 0x595f3e:c.instructions+=11;goto B595f3e;
case 0x595f40:c.instructions+=10;goto B595f40;
case 0x595f42:c.instructions+=9;goto B595f42;
case 0x595f45:c.instructions+=8;goto B595f45;
case 0x595f48:c.instructions+=7;goto B595f48;
case 0x595f4b:c.instructions+=6;goto B595f4b;
case 0x595f4c:c.instructions+=5;goto B595f4c;
case 0x595f4d:c.instructions+=4;goto B595f4d;
case 0x595f4e:c.instructions+=3;goto B595f4e;
case 0x595f50:c.instructions+=2;goto B595f50;
case 0x595f51:c.instructions+=1;goto B595f51;
case 0x595f54:goto L595f54;
case 0x595f57:c.instructions+=4;goto B595f57;
case 0x595f59:c.instructions+=3;goto B595f59;
case 0x595f5d:c.instructions+=2;goto B595f5d;
case 0x595f61:c.instructions+=1;goto B595f61;
case 0x595f67:goto L595f67;
case 0x595f6b:c.instructions+=6;goto B595f6b;
case 0x595f6f:c.instructions+=5;goto B595f6f;
case 0x595f70:c.instructions+=4;goto B595f70;
case 0x595f72:c.instructions+=3;goto B595f72;
case 0x595f76:c.instructions+=2;goto B595f76;
case 0x595f7a:c.instructions+=1;goto B595f7a;
case 0x595f80:goto L595f80;
case 0x595f84:c.instructions+=33;goto B595f84;
case 0x595f88:c.instructions+=32;goto B595f88;
case 0x595f8b:c.instructions+=31;goto B595f8b;
case 0x595f8d:c.instructions+=30;goto B595f8d;
case 0x595f8e:c.instructions+=29;goto B595f8e;
case 0x595f92:c.instructions+=28;goto B595f92;
case 0x595f96:c.instructions+=27;goto B595f96;
case 0x595f9a:c.instructions+=26;goto B595f9a;
case 0x595f9d:c.instructions+=25;goto B595f9d;
case 0x595fa0:c.instructions+=24;goto B595fa0;
case 0x595fa3:c.instructions+=23;goto B595fa3;
case 0x595fa7:c.instructions+=22;goto B595fa7;
case 0x595fa9:c.instructions+=21;goto B595fa9;
case 0x595fb0:c.instructions+=20;goto B595fb0;
case 0x595fb3:c.instructions+=19;goto B595fb3;
case 0x595fb6:c.instructions+=18;goto B595fb6;
case 0x595fb9:c.instructions+=17;goto B595fb9;
case 0x595fbd:c.instructions+=16;goto B595fbd;
case 0x595fbf:c.instructions+=15;goto B595fbf;
case 0x595fc2:c.instructions+=14;goto B595fc2;
case 0x595fc9:c.instructions+=13;goto B595fc9;
case 0x595fd0:c.instructions+=12;goto B595fd0;
case 0x595fd2:c.instructions+=11;goto B595fd2;
case 0x595fd6:c.instructions+=10;goto B595fd6;
case 0x595fda:c.instructions+=9;goto B595fda;
case 0x595fde:c.instructions+=8;goto B595fde;
case 0x595fe6:c.instructions+=7;goto B595fe6;
case 0x595fea:c.instructions+=6;goto B595fea;
case 0x595fee:c.instructions+=5;goto B595fee;
case 0x595ff2:c.instructions+=4;goto B595ff2;
case 0x595ff6:c.instructions+=3;goto B595ff6;
case 0x595ff8:c.instructions+=2;goto B595ff8;
case 0x595ffc:c.instructions+=1;goto B595ffc;
default:missing_instruction(c.pc);}
B595003:L595003:{c.instructions+=4;NFSU2_TR(0x595003);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B595005:{NFSU2_TR(0x595005);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595007:{NFSU2_TR(0x595007);
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
B59500a:{NFSU2_TR(0x59500a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L595015;}}
}
B59500c:L59500c:{c.instructions+=2;NFSU2_TR(0x59500c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595012:{NFSU2_TR(0x595012);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B595015:L595015:{c.instructions+=2;NFSU2_TR(0x595015);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59501b:{NFSU2_TR(0x59501b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B595020:L595020:{c.instructions+=5;NFSU2_TR(0x595020);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595024:{NFSU2_TR(0x595024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B595026:{NFSU2_TR(0x595026);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595029:{NFSU2_TR(0x595029);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B595030:{NFSU2_TR(0x595030);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B595040:L595040:{c.instructions+=18;NFSU2_TR(0x595040);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B595041:{NFSU2_TR(0x595041);
__builtin_memmove((R+20),(R+16),4);
}
B595043:{NFSU2_TR(0x595043);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B595046:{NFSU2_TR(0x595046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2b4ull))));
}
B59504c:{NFSU2_TR(0x59504c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59504d:{NFSU2_TR(0x59504d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59504e:{NFSU2_TR(0x59504e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B595051:{NFSU2_TR(0x595051);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B595052:{NFSU2_TR(0x595052);
__builtin_memmove((R+28),(R+4),4);
}
B595054:{NFSU2_TR(0x595054);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59505a:{NFSU2_TR(0x59505a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B595060:{NFSU2_TR(0x595060);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B595062:{NFSU2_TR(0x595062);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B595065:{NFSU2_TR(0x595065);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59506c:{NFSU2_TR(0x59506c);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x7f7fffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B595074:{NFSU2_TR(0x595074);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595078:{NFSU2_TR(0x595078);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59507c:{NFSU2_TR(0x59507c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L595936;}}
}
B595082:L595082:{c.instructions+=2;NFSU2_TR(0x595082);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B595085:{NFSU2_TR(0x595085);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L595127;}}
}
B59508b:L59508b:{c.instructions+=44;NFSU2_TR(0x59508b);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59508e:{NFSU2_TR(0x59508e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B595090:{NFSU2_TR(0x595090);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595093:{NFSU2_TR(0x595093);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595099:{NFSU2_TR(0x595099);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59509b:{NFSU2_TR(0x59509b);
__builtin_memmove((R+0),(R+24),4);
}
B59509d:{NFSU2_TR(0x59509d);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5950a3:{NFSU2_TR(0x5950a3);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5950a9:{NFSU2_TR(0x5950a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5950ac:{NFSU2_TR(0x5950ac);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5950af:{NFSU2_TR(0x5950af);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5950b2:{NFSU2_TR(0x5950b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5950b8:{NFSU2_TR(0x5950b8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5950ba:{NFSU2_TR(0x5950ba);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5950c0:{NFSU2_TR(0x5950c0);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5950c6:{NFSU2_TR(0x5950c6);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5950cc:{NFSU2_TR(0x5950cc);
{u32 ea_=u32(r4(R+28)+u32(128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5950d2:{NFSU2_TR(0x5950d2);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5950d8:{NFSU2_TR(0x5950d8);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5950de:{NFSU2_TR(0x5950de);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5950e4:{NFSU2_TR(0x5950e4);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5950ea:{NFSU2_TR(0x5950ea);
{u32 ea_=u32(r4(R+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5950f1:{NFSU2_TR(0x5950f1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5950f3:{NFSU2_TR(0x5950f3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5950f7:{NFSU2_TR(0x5950f7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5950f9:{NFSU2_TR(0x5950f9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5950fc:{NFSU2_TR(0x5950fc);
{u32 ea_=u32(r4(R+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595103:{NFSU2_TR(0x595103);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B595106:{NFSU2_TR(0x595106);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B595108:{NFSU2_TR(0x595108);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59510a:{NFSU2_TR(0x59510a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59510c:{NFSU2_TR(0x59510c);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59510e:{NFSU2_TR(0x59510e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595110:{NFSU2_TR(0x595110);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595114:{NFSU2_TR(0x595114);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595118:{NFSU2_TR(0x595118);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59511a:{NFSU2_TR(0x59511a);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B59511c:{NFSU2_TR(0x59511c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59511e:{NFSU2_TR(0x59511e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59511f:{NFSU2_TR(0x59511f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B595120:{NFSU2_TR(0x595120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B595121:{NFSU2_TR(0x595121);
__builtin_memmove((R+16),(R+20),4);
}
B595123:{NFSU2_TR(0x595123);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B595124:{NFSU2_TR(0x595124);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B595127:L595127:{c.instructions+=5;NFSU2_TR(0x595127);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B595128:{NFSU2_TR(0x595128);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59512a:{NFSU2_TR(0x59512a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59512e:{NFSU2_TR(0x59512e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595132:{NFSU2_TR(0x595132);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L595685;}}
}
B595138:L595138:{c.instructions+=3;NFSU2_TR(0x595138);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59513b:{NFSU2_TR(0x59513b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59513f:{NFSU2_TR(0x59513f);
}
B595140:L595140:{c.instructions+=20;NFSU2_TR(0x595140);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595144:{NFSU2_TR(0x595144);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595147:{NFSU2_TR(0x595147);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59514b:{NFSU2_TR(0x59514b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59514d:{NFSU2_TR(0x59514d);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595150:{NFSU2_TR(0x595150);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595153:{NFSU2_TR(0x595153);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595155:{NFSU2_TR(0x595155);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595158:{NFSU2_TR(0x595158);
{u32 ea_=u32(r4(R+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59515f:{NFSU2_TR(0x59515f);
u8 U[8];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595166:{NFSU2_TR(0x595166);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595168:{NFSU2_TR(0x595168);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59516f:{NFSU2_TR(0x59516f);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595176:{NFSU2_TR(0x595176);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59517a:{NFSU2_TR(0x59517a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B59517b:{NFSU2_TR(0x59517b);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595182:{NFSU2_TR(0x595182);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B595184:{NFSU2_TR(0x595184);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595188:{NFSU2_TR(0x595188);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59518c:{NFSU2_TR(0x59518c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L595662;}}
}
B595192:L595192:{c.instructions+=4;NFSU2_TR(0x595192);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B595196:{NFSU2_TR(0x595196);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B595199:{NFSU2_TR(0x595199);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59519d:{NFSU2_TR(0x59519d);
__builtin_memmove((R+4),(R+4),4);
}
B5951a0:L5951a0:{c.instructions+=37;NFSU2_TR(0x5951a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5951a4:{NFSU2_TR(0x5951a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5951a8:{NFSU2_TR(0x5951a8);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5951ab:{NFSU2_TR(0x5951ab);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5951ae:{NFSU2_TR(0x5951ae);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5951b1:{NFSU2_TR(0x5951b1);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5951b4:{NFSU2_TR(0x5951b4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5951b6:{NFSU2_TR(0x5951b6);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5951b8:{NFSU2_TR(0x5951b8);
{u32 ea_=u32(r4(R+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5951bf:{NFSU2_TR(0x5951bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5951c6:{NFSU2_TR(0x5951c6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5951c8:{NFSU2_TR(0x5951c8);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5951cf:{NFSU2_TR(0x5951cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5951d6:{NFSU2_TR(0x5951d6);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5951dd:{NFSU2_TR(0x5951dd);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5951e4:{NFSU2_TR(0x5951e4);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5951eb:{NFSU2_TR(0x5951eb);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5951f2:{NFSU2_TR(0x5951f2);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5951f9:{NFSU2_TR(0x5951f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5951fb:{NFSU2_TR(0x5951fb);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595202:{NFSU2_TR(0x595202);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595209:{NFSU2_TR(0x595209);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59520b:{NFSU2_TR(0x59520b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59520d:{NFSU2_TR(0x59520d);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595214:{NFSU2_TR(0x595214);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59521b:{NFSU2_TR(0x59521b);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595222:{NFSU2_TR(0x595222);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595229:{NFSU2_TR(0x595229);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59522b:{NFSU2_TR(0x59522b);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595232:{NFSU2_TR(0x595232);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595239:{NFSU2_TR(0x595239);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59523b:{NFSU2_TR(0x59523b);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B59523d:{NFSU2_TR(0x59523d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B595241:{NFSU2_TR(0x595241);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B595247:{NFSU2_TR(0x595247);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595249:{NFSU2_TR(0x595249);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59524c:{NFSU2_TR(0x59524c);
if(r1(R+514)){{goto L595280;}}
}
B59524e:L59524e:{c.instructions+=14;NFSU2_TR(0x59524e);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595251:{NFSU2_TR(0x595251);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B595259:{NFSU2_TR(0x595259);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59525b:{NFSU2_TR(0x59525b);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59525e:{NFSU2_TR(0x59525e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595261:{NFSU2_TR(0x595261);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595263:{NFSU2_TR(0x595263);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595266:{NFSU2_TR(0x595266);
{u32 ea_=u32(r4(R+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59526d:{NFSU2_TR(0x59526d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B595274:{NFSU2_TR(0x595274);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595276:{NFSU2_TR(0x595276);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595278:{NFSU2_TR(0x595278);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59527b:{NFSU2_TR(0x59527b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59527e:{NFSU2_TR(0x59527e);
{goto L5952eb;}
}
B595280:L595280:{c.instructions+=5;NFSU2_TR(0x595280);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595284:{NFSU2_TR(0x595284);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59528a:{NFSU2_TR(0x59528a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59528c:{NFSU2_TR(0x59528c);
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
B59528f:{NFSU2_TR(0x59528f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5952c3;}}
}
B595291:L595291:{c.instructions+=14;NFSU2_TR(0x595291);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595294:{NFSU2_TR(0x595294);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59529c:{NFSU2_TR(0x59529c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59529e:{NFSU2_TR(0x59529e);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5952a1:{NFSU2_TR(0x5952a1);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5952a4:{NFSU2_TR(0x5952a4);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5952a6:{NFSU2_TR(0x5952a6);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5952a9:{NFSU2_TR(0x5952a9);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5952b0:{NFSU2_TR(0x5952b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5952b7:{NFSU2_TR(0x5952b7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5952b9:{NFSU2_TR(0x5952b9);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5952bb:{NFSU2_TR(0x5952bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5952be:{NFSU2_TR(0x5952be);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5952c1:{NFSU2_TR(0x5952c1);
{goto L5952eb;}
}
B5952c3:L5952c3:{c.instructions+=6;NFSU2_TR(0x5952c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5952ca:{NFSU2_TR(0x5952ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5952cb:{NFSU2_TR(0x5952cb);
u8 U[4];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5952d2:{NFSU2_TR(0x5952d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5952d3:{NFSU2_TR(0x5952d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5952d4:{NFSU2_TR(0x5952d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5952d9ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5952d9:L5952d9:{c.instructions+=5;NFSU2_TR(0x5952d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5952da:{NFSU2_TR(0x5952da);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5952e1:{NFSU2_TR(0x5952e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5952e2:{NFSU2_TR(0x5952e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5952e3:{NFSU2_TR(0x5952e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5952e8ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5952e8:L5952e8:{c.instructions+=1;NFSU2_TR(0x5952e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5952eb:L5952eb:{c.instructions+=21;NFSU2_TR(0x5952eb);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5952ed:{NFSU2_TR(0x5952ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5952f1:{NFSU2_TR(0x5952f1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5952f4:{NFSU2_TR(0x5952f4);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5952f6:{NFSU2_TR(0x5952f6);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5952f9:{NFSU2_TR(0x5952f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B595301:{NFSU2_TR(0x595301);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595304:{NFSU2_TR(0x595304);
w4(R+8,u32(0x1ull));
}
B595309:{NFSU2_TR(0x595309);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59530b:{NFSU2_TR(0x59530b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59530e:{NFSU2_TR(0x59530e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595311:{NFSU2_TR(0x595311);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595313:{NFSU2_TR(0x595313);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595316:{NFSU2_TR(0x595316);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595318:{NFSU2_TR(0x595318);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59531b:{NFSU2_TR(0x59531b);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59531e:{NFSU2_TR(0x59531e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595320:{NFSU2_TR(0x595320);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595323:{NFSU2_TR(0x595323);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595326:{NFSU2_TR(0x595326);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595328:{NFSU2_TR(0x595328);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L595400;}}
}
B59532e:L59532e:{c.instructions+=2;NFSU2_TR(0x59532e);
w4(R+12,u32(0x4ull));
}
B595333:{NFSU2_TR(0x595333);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B595336:L595336:{c.instructions+=13;NFSU2_TR(0x595336);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595339:{NFSU2_TR(0x595339);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59533b:{NFSU2_TR(0x59533b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59533e:{NFSU2_TR(0x59533e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595341:{NFSU2_TR(0x595341);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595343:{NFSU2_TR(0x595343);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595346:{NFSU2_TR(0x595346);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595348:{NFSU2_TR(0x595348);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59534a:{NFSU2_TR(0x59534a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59534e:{NFSU2_TR(0x59534e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B595350:{NFSU2_TR(0x595350);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595352:{NFSU2_TR(0x595352);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B595355:{NFSU2_TR(0x595355);
if(r1(R+514)){{goto L595361;}}
}
B595357:L595357:{c.instructions+=3;NFSU2_TR(0x595357);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B595359:{NFSU2_TR(0x595359);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59535d:{NFSU2_TR(0x59535d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595361:L595361:{c.instructions+=13;NFSU2_TR(0x595361);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595364:{NFSU2_TR(0x595364);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595367:{NFSU2_TR(0x595367);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59536a:{NFSU2_TR(0x59536a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59536c:{NFSU2_TR(0x59536c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59536e:{NFSU2_TR(0x59536e);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595371:{NFSU2_TR(0x595371);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595374:{NFSU2_TR(0x595374);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595376:{NFSU2_TR(0x595376);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59537a:{NFSU2_TR(0x59537a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B59537c:{NFSU2_TR(0x59537c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59537e:{NFSU2_TR(0x59537e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B595381:{NFSU2_TR(0x595381);
if(r1(R+514)){{goto L595390;}}
}
B595383:L595383:{c.instructions+=4;NFSU2_TR(0x595383);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B595386:{NFSU2_TR(0x595386);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B595388:{NFSU2_TR(0x595388);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59538c:{NFSU2_TR(0x59538c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595390:L595390:{c.instructions+=13;NFSU2_TR(0x595390);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595393:{NFSU2_TR(0x595393);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595396:{NFSU2_TR(0x595396);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595399:{NFSU2_TR(0x595399);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59539b:{NFSU2_TR(0x59539b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59539d:{NFSU2_TR(0x59539d);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5953a0:{NFSU2_TR(0x5953a0);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5953a3:{NFSU2_TR(0x5953a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5953a5:{NFSU2_TR(0x5953a5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5953a9:{NFSU2_TR(0x5953a9);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5953ab:{NFSU2_TR(0x5953ab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5953ad:{NFSU2_TR(0x5953ad);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5953b0:{NFSU2_TR(0x5953b0);
if(r1(R+514)){{goto L5953bf;}}
}
B5953b2:L5953b2:{c.instructions+=4;NFSU2_TR(0x5953b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B5953b5:{NFSU2_TR(0x5953b5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5953b7:{NFSU2_TR(0x5953b7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5953bb:{NFSU2_TR(0x5953bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5953bf:L5953bf:{c.instructions+=13;NFSU2_TR(0x5953bf);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5953c2:{NFSU2_TR(0x5953c2);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5953c5:{NFSU2_TR(0x5953c5);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5953c8:{NFSU2_TR(0x5953c8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5953ca:{NFSU2_TR(0x5953ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5953cc:{NFSU2_TR(0x5953cc);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5953cf:{NFSU2_TR(0x5953cf);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5953d2:{NFSU2_TR(0x5953d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5953d4:{NFSU2_TR(0x5953d4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5953d8:{NFSU2_TR(0x5953d8);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5953da:{NFSU2_TR(0x5953da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5953dc:{NFSU2_TR(0x5953dc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5953df:{NFSU2_TR(0x5953df);
if(r1(R+514)){{goto L5953eb;}}
}
B5953e1:L5953e1:{c.instructions+=3;NFSU2_TR(0x5953e1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5953e3:{NFSU2_TR(0x5953e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5953e7:{NFSU2_TR(0x5953e7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5953eb:L5953eb:{c.instructions+=6;NFSU2_TR(0x5953eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5953ef:{NFSU2_TR(0x5953ef);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5953f2:{NFSU2_TR(0x5953f2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5953f5:{NFSU2_TR(0x5953f5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5953f8:{NFSU2_TR(0x5953f8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5953fa:{NFSU2_TR(0x5953fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x595336u);}goto L595336;}}
}
B595400:L595400:{c.instructions+=3;NFSU2_TR(0x595400);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B595404:{NFSU2_TR(0x595404);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B595406:{NFSU2_TR(0x595406);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L595444;}}
}
B595408:L595408:{c.instructions+=3;NFSU2_TR(0x595408);
__builtin_memmove((R+4),(R+8),4);
}
B59540a:{NFSU2_TR(0x59540a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B59540d:{NFSU2_TR(0x59540d);
u8 U[12];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B595411:L595411:{c.instructions+=13;NFSU2_TR(0x595411);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595414:{NFSU2_TR(0x595414);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595416:{NFSU2_TR(0x595416);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595419:{NFSU2_TR(0x595419);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59541c:{NFSU2_TR(0x59541c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59541e:{NFSU2_TR(0x59541e);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595421:{NFSU2_TR(0x595421);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595423:{NFSU2_TR(0x595423);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595425:{NFSU2_TR(0x595425);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B595429:{NFSU2_TR(0x595429);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B59542b:{NFSU2_TR(0x59542b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59542d:{NFSU2_TR(0x59542d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B595430:{NFSU2_TR(0x595430);
if(r1(R+514)){{goto L59543c;}}
}
B595432:L595432:{c.instructions+=3;NFSU2_TR(0x595432);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B595434:{NFSU2_TR(0x595434);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595438:{NFSU2_TR(0x595438);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59543c:L59543c:{c.instructions+=4;NFSU2_TR(0x59543c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B59543d:{NFSU2_TR(0x59543d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B595440:{NFSU2_TR(0x595440);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B595442:{NFSU2_TR(0x595442);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x595411u);}goto L595411;}}
}
B595444:L595444:{c.instructions+=5;NFSU2_TR(0x595444);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B595446:{NFSU2_TR(0x595446);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595448:{NFSU2_TR(0x595448);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59544a:{NFSU2_TR(0x59544a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59544d:{NFSU2_TR(0x59544d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L595646;}}
}
B595453:L595453:{c.instructions+=54;NFSU2_TR(0x595453);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595456:{NFSU2_TR(0x595456);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B595458:{NFSU2_TR(0x595458);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59545b:{NFSU2_TR(0x59545b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59545f:{NFSU2_TR(0x59545f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595461:{NFSU2_TR(0x595461);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595467:{NFSU2_TR(0x595467);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59546d:{NFSU2_TR(0x59546d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B595471:{NFSU2_TR(0x595471);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B595475:{NFSU2_TR(0x595475);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59547b:{NFSU2_TR(0x59547b);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595482:{NFSU2_TR(0x595482);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595486:{NFSU2_TR(0x595486);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59548d:{NFSU2_TR(0x59548d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595491:{NFSU2_TR(0x595491);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595498:{NFSU2_TR(0x595498);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59549c:{NFSU2_TR(0x59549c);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5954a0:{NFSU2_TR(0x5954a0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5954a2:{NFSU2_TR(0x5954a2);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5954a9:{NFSU2_TR(0x5954a9);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5954b0:{NFSU2_TR(0x5954b0);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5954b4:{NFSU2_TR(0x5954b4);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5954bb:{NFSU2_TR(0x5954bb);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5954be:{NFSU2_TR(0x5954be);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5954c1:{NFSU2_TR(0x5954c1);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5954c8:{NFSU2_TR(0x5954c8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5954ca:{NFSU2_TR(0x5954ca);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B5954cc:{NFSU2_TR(0x5954cc);
{u32 ea_=u32(r4(R+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5954d3:{NFSU2_TR(0x5954d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5954da:{NFSU2_TR(0x5954da);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5954dc:{NFSU2_TR(0x5954dc);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5954e2:{NFSU2_TR(0x5954e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5954e8:{NFSU2_TR(0x5954e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5954ec:{NFSU2_TR(0x5954ec);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5954ee:{NFSU2_TR(0x5954ee);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5954f4:{NFSU2_TR(0x5954f4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5954f6:{NFSU2_TR(0x5954f6);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5954fc:{NFSU2_TR(0x5954fc);
{u32 ea_=u32(r4(R+28)+u32(128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595502:{NFSU2_TR(0x595502);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595508:{NFSU2_TR(0x595508);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59550e:{NFSU2_TR(0x59550e);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595514:{NFSU2_TR(0x595514);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59551a:{NFSU2_TR(0x59551a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59551c:{NFSU2_TR(0x59551c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59551e:{NFSU2_TR(0x59551e);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B595520:{NFSU2_TR(0x595520);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B595522:{NFSU2_TR(0x595522);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595524:{NFSU2_TR(0x595524);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B595526:{NFSU2_TR(0x595526);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B595528:{NFSU2_TR(0x595528);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59552a:{NFSU2_TR(0x59552a);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B59552c:{NFSU2_TR(0x59552c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59552e:{NFSU2_TR(0x59552e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B595530:{NFSU2_TR(0x595530);
if(r1(R+518)){{goto L595857;}}
}
B595536:L595536:{c.instructions+=2;NFSU2_TR(0x595536);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B595538:{NFSU2_TR(0x595538);
if(r1(R+518)){{goto L595857;}}
}
B59553e:L59553e:{c.instructions+=4;NFSU2_TR(0x59553e);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B595542:{NFSU2_TR(0x595542);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595544:{NFSU2_TR(0x595544);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B595547:{NFSU2_TR(0x595547);
if(r1(R+514)){{goto L595642;}}
}
B59554d:L59554d:{c.instructions+=27;NFSU2_TR(0x59554d);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595553:{NFSU2_TR(0x595553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B595555:{NFSU2_TR(0x595555);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59555c:{NFSU2_TR(0x59555c);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595562:{NFSU2_TR(0x595562);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595569:{NFSU2_TR(0x595569);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59556c:{NFSU2_TR(0x59556c);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595573:{NFSU2_TR(0x595573);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595579:{NFSU2_TR(0x595579);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595580:{NFSU2_TR(0x595580);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595583:{NFSU2_TR(0x595583);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59558a:{NFSU2_TR(0x59558a);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595590:{NFSU2_TR(0x595590);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595597:{NFSU2_TR(0x595597);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59559d:{NFSU2_TR(0x59559d);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5955a4:{NFSU2_TR(0x5955a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5955ab:{NFSU2_TR(0x5955ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5955b1:{NFSU2_TR(0x5955b1);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5955b5:{NFSU2_TR(0x5955b5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5955b9:{NFSU2_TR(0x5955b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5955c0:{NFSU2_TR(0x5955c0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5955c6:{NFSU2_TR(0x5955c6);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5955d1:{NFSU2_TR(0x5955d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5955dc:{NFSU2_TR(0x5955dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5955e7:{NFSU2_TR(0x5955e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5955e9:{NFSU2_TR(0x5955e9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5955ec:{NFSU2_TR(0x5955ec);
if(r1(R+514)){{goto L595602;}}
}
B5955ee:L5955ee:{c.instructions+=3;NFSU2_TR(0x5955ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5955f9:{NFSU2_TR(0x5955f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595600:{NFSU2_TR(0x595600);
{goto L59564a;}
}
B595602:L595602:{c.instructions+=5;NFSU2_TR(0x595602);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595606:{NFSU2_TR(0x595606);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59560c:{NFSU2_TR(0x59560c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59560e:{NFSU2_TR(0x59560e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B595611:{NFSU2_TR(0x595611);
if(r1(R+514)){{goto L595627;}}
}
B595613:L595613:{c.instructions+=3;NFSU2_TR(0x595613);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59561e:{NFSU2_TR(0x59561e);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595625:{NFSU2_TR(0x595625);
{goto L59564a;}
}
B595627:L595627:{c.instructions+=4;NFSU2_TR(0x595627);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B595632:{NFSU2_TR(0x595632);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595639:{NFSU2_TR(0x595639);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595640:{NFSU2_TR(0x595640);
{goto L59564a;}
}
B595642:L595642:{c.instructions+=2;NFSU2_TR(0x595642);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B595644:{NFSU2_TR(0x595644);
{goto L59564a;}
}
B595646:L595646:{c.instructions+=1;NFSU2_TR(0x595646);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59564a:L59564a:{c.instructions+=7;NFSU2_TR(0x59564a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59564e:{NFSU2_TR(0x59564e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B59564f:{NFSU2_TR(0x59564f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B595652:{NFSU2_TR(0x595652);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B595654:{NFSU2_TR(0x595654);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595658:{NFSU2_TR(0x595658);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59565c:{NFSU2_TR(0x59565c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5951a0u);}goto L5951a0;}}
}
B595662:L595662:{c.instructions+=8;NFSU2_TR(0x595662);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B595666:{NFSU2_TR(0x595666);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59566a:{NFSU2_TR(0x59566a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59566e:{NFSU2_TR(0x59566e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B595671:{NFSU2_TR(0x595671);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B595673:{NFSU2_TR(0x595673);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595677:{NFSU2_TR(0x595677);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59567b:{NFSU2_TR(0x59567b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x595140u);}goto L595140;}}
}
B595681:L595681:{c.instructions+=1;NFSU2_TR(0x595681);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595685:L595685:{c.instructions+=4;NFSU2_TR(0x595685);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B595688:{NFSU2_TR(0x595688);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59568a:{NFSU2_TR(0x59568a);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B595692:{NFSU2_TR(0x595692);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x597626u,597);}
}
B595698:L595698:{c.instructions+=9;NFSU2_TR(0x595698);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B595699:{NFSU2_TR(0x595699);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59569d:{NFSU2_TR(0x59569d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5956a8:{NFSU2_TR(0x5956a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5956ac:{NFSU2_TR(0x5956ac);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5956ad:{NFSU2_TR(0x5956ad);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5956af:{NFSU2_TR(0x5956af);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5956b3:{NFSU2_TR(0x5956b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5956b7:{NFSU2_TR(0x5956b7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5975f5u,597);}
}
B5956bd:L5956bd:{c.instructions+=13;NFSU2_TR(0x5956bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5956c1:{NFSU2_TR(0x5956c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5956c8:{NFSU2_TR(0x5956c8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5956c9:{NFSU2_TR(0x5956c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5956cd:{NFSU2_TR(0x5956cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5956d1:{NFSU2_TR(0x5956d1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B5956d4:{NFSU2_TR(0x5956d4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B5956d6:{NFSU2_TR(0x5956d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5956da:{NFSU2_TR(0x5956da);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5956e1:{NFSU2_TR(0x5956e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5956e5:{NFSU2_TR(0x5956e5);
u8 U[16];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5956e9:{NFSU2_TR(0x5956e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5956ed:{NFSU2_TR(0x5956ed);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5975bcu,597);}
}
B5956f3:L5956f3:{c.instructions+=16;NFSU2_TR(0x5956f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5956f7:{NFSU2_TR(0x5956f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5956fe:{NFSU2_TR(0x5956fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B595702:{NFSU2_TR(0x595702);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B595704:{NFSU2_TR(0x595704);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595708:{NFSU2_TR(0x595708);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59570c:{NFSU2_TR(0x59570c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B59570f:{NFSU2_TR(0x59570f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595713:{NFSU2_TR(0x595713);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B595717:{NFSU2_TR(0x595717);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B59571a:{NFSU2_TR(0x59571a);
__builtin_memmove((R+4),(R+0),4);
}
B59571c:{NFSU2_TR(0x59571c);
__builtin_memmove((R+0),(R+28),4);
}
B59571e:{NFSU2_TR(0x59571e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B595720:{NFSU2_TR(0x595720);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x64ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B595723:{NFSU2_TR(0x595723);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595727:{NFSU2_TR(0x595727);
{goto L595730;}
}
B595730:L595730:{c.instructions+=34;NFSU2_TR(0x595730);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595734:{NFSU2_TR(0x595734);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B595738:{NFSU2_TR(0x595738);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59573a:{NFSU2_TR(0x59573a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59573c:{NFSU2_TR(0x59573c);
u8 U[4];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B595743:{NFSU2_TR(0x595743);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595746:{NFSU2_TR(0x595746);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B595747:{NFSU2_TR(0x595747);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59574a:{NFSU2_TR(0x59574a);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59574d:{NFSU2_TR(0x59574d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B595750:{NFSU2_TR(0x595750);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595754:{NFSU2_TR(0x595754);
{u32 ea_=u32(r4(R+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59575b:{NFSU2_TR(0x59575b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B595762:{NFSU2_TR(0x595762);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595764:{NFSU2_TR(0x595764);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59576b:{NFSU2_TR(0x59576b);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595772:{NFSU2_TR(0x595772);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B595779:{NFSU2_TR(0x595779);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595780:{NFSU2_TR(0x595780);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B595781:{NFSU2_TR(0x595781);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595784:{NFSU2_TR(0x595784);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595786:{NFSU2_TR(0x595786);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595789:{NFSU2_TR(0x595789);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59578c:{NFSU2_TR(0x59578c);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59578f:{NFSU2_TR(0x59578f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B595791:{NFSU2_TR(0x595791);
{u32 ea_=u32(r4(R+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595798:{NFSU2_TR(0x595798);
u8 U[8];
w4(U+0,u32(u32(u32(0x270ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59579f:{NFSU2_TR(0x59579f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5957a1:{NFSU2_TR(0x5957a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5957a8:{NFSU2_TR(0x5957a8);
{u32 ea_=u32(r4(R+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5957af:{NFSU2_TR(0x5957af);
u8 U[4];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5957b6:{NFSU2_TR(0x5957b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5957b7:{NFSU2_TR(0x5957b7);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5957be:{NFSU2_TR(0x5957be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5957c3ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5957c3:L5957c3:{c.instructions+=5;NFSU2_TR(0x5957c3);
u8 U[4];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5957ca:{NFSU2_TR(0x5957ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5957cb:{NFSU2_TR(0x5957cb);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5957d2:{NFSU2_TR(0x5957d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5957d3:{NFSU2_TR(0x5957d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5957d8ull));
TAIL_STATIC(0x43cf10u,43c);
}
B5957d8:L5957d8:{c.instructions+=22;NFSU2_TR(0x5957d8);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5957db:{NFSU2_TR(0x5957db);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5957dd:{NFSU2_TR(0x5957dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5957e0:{NFSU2_TR(0x5957e0);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5957e3:{NFSU2_TR(0x5957e3);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5957e6:{NFSU2_TR(0x5957e6);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5957e9:{NFSU2_TR(0x5957e9);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5957ec:{NFSU2_TR(0x5957ec);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5957f3:{NFSU2_TR(0x5957f3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5957f5:{NFSU2_TR(0x5957f5);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5957fc:{NFSU2_TR(0x5957fc);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5957fe:{NFSU2_TR(0x5957fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595800:{NFSU2_TR(0x595800);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B595802:{NFSU2_TR(0x595802);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595809:{NFSU2_TR(0x595809);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B59580b:{NFSU2_TR(0x59580b);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59580d:{NFSU2_TR(0x59580d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B595813:{NFSU2_TR(0x595813);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595815:{NFSU2_TR(0x595815);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B595817:{NFSU2_TR(0x595817);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59581a:{NFSU2_TR(0x59581a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59581c:{NFSU2_TR(0x59581c);
if(r1(R+514)){TAIL_STATIC(0x596fc9u,596);}
}
B595822:L595822:{c.instructions+=12;NFSU2_TR(0x595822);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595829:{NFSU2_TR(0x595829);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59582b:{NFSU2_TR(0x59582b);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595832:{NFSU2_TR(0x595832);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B595834:{NFSU2_TR(0x595834);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59583b:{NFSU2_TR(0x59583b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59583d:{NFSU2_TR(0x59583d);
{u32 ea_=u32(r4(R+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595844:{NFSU2_TR(0x595844);
u8 U[8];
w4(U+0,u32(u32(u32(0x248ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59584b:{NFSU2_TR(0x59584b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59584d:{NFSU2_TR(0x59584d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59584f:{NFSU2_TR(0x59584f);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595852:{NFSU2_TR(0x595852);
TAIL_STATIC(0x596fe3u,596);
}
B595857:L595857:{c.instructions+=5;NFSU2_TR(0x595857);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59585b:{NFSU2_TR(0x59585b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B595861:{NFSU2_TR(0x595861);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595863:{NFSU2_TR(0x595863);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B595866:{NFSU2_TR(0x595866);
if(r1(R+514)){{goto L595881;}}
}
B595868:L595868:{c.instructions+=4;NFSU2_TR(0x595868);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B595872:{NFSU2_TR(0x595872);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B595879:{NFSU2_TR(0x595879);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59587c:{NFSU2_TR(0x59587c);
TAIL_STATIC(0x596f5fu,596);
}
B595881:L595881:{c.instructions+=5;NFSU2_TR(0x595881);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595885:{NFSU2_TR(0x595885);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59588b:{NFSU2_TR(0x59588b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59588d:{NFSU2_TR(0x59588d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B595890:{NFSU2_TR(0x595890);
if(r1(R+514)){{goto L5958d0;}}
}
B595892:L595892:{c.instructions+=19;NFSU2_TR(0x595892);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59589c:{NFSU2_TR(0x59589c);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5958a3:{NFSU2_TR(0x5958a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5958a9:{NFSU2_TR(0x5958a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5958ac:{NFSU2_TR(0x5958ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5958af:{NFSU2_TR(0x5958af);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5958b3:{NFSU2_TR(0x5958b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5958b6:{NFSU2_TR(0x5958b6);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5958ba:{NFSU2_TR(0x5958ba);
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
B5958bc:{NFSU2_TR(0x5958bc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5958be:{NFSU2_TR(0x5958be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5958c1:{NFSU2_TR(0x5958c1);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5958c4:{NFSU2_TR(0x5958c4);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5958c7:{NFSU2_TR(0x5958c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5958c8:{NFSU2_TR(0x5958c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5958c9:{NFSU2_TR(0x5958c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5958ca:{NFSU2_TR(0x5958ca);
__builtin_memmove((R+16),(R+20),4);
}
B5958cc:{NFSU2_TR(0x5958cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5958cd:{NFSU2_TR(0x5958cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5958d0:L5958d0:{c.instructions+=31;NFSU2_TR(0x5958d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5958da:{NFSU2_TR(0x5958da);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5958e1:{NFSU2_TR(0x5958e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5958e7:{NFSU2_TR(0x5958e7);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5958ee:{NFSU2_TR(0x5958ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5958f4:{NFSU2_TR(0x5958f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5958f7:{NFSU2_TR(0x5958f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5958fa:{NFSU2_TR(0x5958fa);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5958fe:{NFSU2_TR(0x5958fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B595901:{NFSU2_TR(0x595901);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595905:{NFSU2_TR(0x595905);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B595907:{NFSU2_TR(0x595907);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59590a:{NFSU2_TR(0x59590a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59590c:{NFSU2_TR(0x59590c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B59590f:{NFSU2_TR(0x59590f);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595912:{NFSU2_TR(0x595912);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595915:{NFSU2_TR(0x595915);
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
B595917:{NFSU2_TR(0x595917);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59591a:{NFSU2_TR(0x59591a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59591d:{NFSU2_TR(0x59591d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595920:{NFSU2_TR(0x595920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B595922:{NFSU2_TR(0x595922);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595925:{NFSU2_TR(0x595925);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595927:{NFSU2_TR(0x595927);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59592a:{NFSU2_TR(0x59592a);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59592d:{NFSU2_TR(0x59592d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59592e:{NFSU2_TR(0x59592e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59592f:{NFSU2_TR(0x59592f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B595930:{NFSU2_TR(0x595930);
__builtin_memmove((R+16),(R+20),4);
}
B595932:{NFSU2_TR(0x595932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B595933:{NFSU2_TR(0x595933);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B595936:L595936:{c.instructions+=2;NFSU2_TR(0x595936);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B595939:{NFSU2_TR(0x595939);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L595f54;}}
}
B59593f:L59593f:{c.instructions+=6;NFSU2_TR(0x59593f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B595942:{NFSU2_TR(0x595942);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B595944:{NFSU2_TR(0x595944);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B595946:{NFSU2_TR(0x595946);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59594a:{NFSU2_TR(0x59594a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59594e:{NFSU2_TR(0x59594e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x595685u);}goto L595685;}}
}
B595954:L595954:{c.instructions+=3;NFSU2_TR(0x595954);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B595957:{NFSU2_TR(0x595957);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59595b:{NFSU2_TR(0x59595b);
{goto L595960;}
}
B595960:L595960:{c.instructions+=18;NFSU2_TR(0x595960);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595963:{NFSU2_TR(0x595963);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595966:{NFSU2_TR(0x595966);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595969:{NFSU2_TR(0x595969);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59596b:{NFSU2_TR(0x59596b);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59596e:{NFSU2_TR(0x59596e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595971:{NFSU2_TR(0x595971);
{u32 ea_=u32(r4(R+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595978:{NFSU2_TR(0x595978);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59597f:{NFSU2_TR(0x59597f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595981:{NFSU2_TR(0x595981);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595988:{NFSU2_TR(0x595988);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59598f:{NFSU2_TR(0x59598f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B595992:{NFSU2_TR(0x595992);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B595996:{NFSU2_TR(0x595996);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59599d:{NFSU2_TR(0x59599d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B59599f:{NFSU2_TR(0x59599f);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5959a3:{NFSU2_TR(0x5959a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5959a7:{NFSU2_TR(0x5959a7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L595e4c;}}
}
B5959ad:L5959ad:{c.instructions+=3;NFSU2_TR(0x5959ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5959b0:{NFSU2_TR(0x5959b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5959b4:{NFSU2_TR(0x5959b4);
{goto L5959c0;}
}
B5959b6:L5959b6:{c.instructions+=2;NFSU2_TR(0x5959b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5959ba:{NFSU2_TR(0x5959ba);
__builtin_memmove((R+12),(R+12),4);
}
B5959c0:L5959c0:{c.instructions+=34;NFSU2_TR(0x5959c0);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5959c3:{NFSU2_TR(0x5959c3);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5959c6:{NFSU2_TR(0x5959c6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5959c8:{NFSU2_TR(0x5959c8);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5959cb:{NFSU2_TR(0x5959cb);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5959ce:{NFSU2_TR(0x5959ce);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5959d0:{NFSU2_TR(0x5959d0);
{u32 ea_=u32(r4(R+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5959d7:{NFSU2_TR(0x5959d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5959de:{NFSU2_TR(0x5959de);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5959e0:{NFSU2_TR(0x5959e0);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5959e4:{NFSU2_TR(0x5959e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5959e8:{NFSU2_TR(0x5959e8);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5959ec:{NFSU2_TR(0x5959ec);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5959f0:{NFSU2_TR(0x5959f0);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5959f7:{NFSU2_TR(0x5959f7);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5959fb:{NFSU2_TR(0x5959fb);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595a02:{NFSU2_TR(0x595a02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595a04:{NFSU2_TR(0x595a04);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595a08:{NFSU2_TR(0x595a08);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595a0f:{NFSU2_TR(0x595a0f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595a11:{NFSU2_TR(0x595a11);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595a15:{NFSU2_TR(0x595a15);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595a19:{NFSU2_TR(0x595a19);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595a1d:{NFSU2_TR(0x595a1d);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595a21:{NFSU2_TR(0x595a21);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595a23:{NFSU2_TR(0x595a23);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595a27:{NFSU2_TR(0x595a27);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595a2b:{NFSU2_TR(0x595a2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595a2d:{NFSU2_TR(0x595a2d);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B595a2f:{NFSU2_TR(0x595a2f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B595a33:{NFSU2_TR(0x595a33);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B595a39:{NFSU2_TR(0x595a39);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595a3b:{NFSU2_TR(0x595a3b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B595a3e:{NFSU2_TR(0x595a3e);
if(r1(R+514)){{goto L595a73;}}
}
B595a40:L595a40:{c.instructions+=14;NFSU2_TR(0x595a40);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595a43:{NFSU2_TR(0x595a43);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B595a4b:{NFSU2_TR(0x595a4b);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595a4e:{NFSU2_TR(0x595a4e);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595a51:{NFSU2_TR(0x595a51);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595a53:{NFSU2_TR(0x595a53);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595a56:{NFSU2_TR(0x595a56);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595a59:{NFSU2_TR(0x595a59);
{u32 ea_=u32(r4(R+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595a60:{NFSU2_TR(0x595a60);
u8 U[8];
w4(U+0,u32(u32(u32(0x1d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B595a67:{NFSU2_TR(0x595a67);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595a69:{NFSU2_TR(0x595a69);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595a6b:{NFSU2_TR(0x595a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595a6e:{NFSU2_TR(0x595a6e);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595a71:{NFSU2_TR(0x595a71);
{goto L595adc;}
}
B595a73:L595a73:{c.instructions+=5;NFSU2_TR(0x595a73);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595a77:{NFSU2_TR(0x595a77);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B595a7d:{NFSU2_TR(0x595a7d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595a7f:{NFSU2_TR(0x595a7f);
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
B595a82:{NFSU2_TR(0x595a82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L595ab7;}}
}
B595a84:L595a84:{c.instructions+=14;NFSU2_TR(0x595a84);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595a87:{NFSU2_TR(0x595a87);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B595a8f:{NFSU2_TR(0x595a8f);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595a92:{NFSU2_TR(0x595a92);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595a95:{NFSU2_TR(0x595a95);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595a98:{NFSU2_TR(0x595a98);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595a9b:{NFSU2_TR(0x595a9b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595a9d:{NFSU2_TR(0x595a9d);
{u32 ea_=u32(r4(R+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595aa4:{NFSU2_TR(0x595aa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B595aab:{NFSU2_TR(0x595aab);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595aad:{NFSU2_TR(0x595aad);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595aaf:{NFSU2_TR(0x595aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595ab2:{NFSU2_TR(0x595ab2);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595ab5:{NFSU2_TR(0x595ab5);
{goto L595adc;}
}
B595ab7:L595ab7:{c.instructions+=6;NFSU2_TR(0x595ab7);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B595abb:{NFSU2_TR(0x595abb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B595abc:{NFSU2_TR(0x595abc);
u8 U[4];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B595ac3:{NFSU2_TR(0x595ac3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B595ac4:{NFSU2_TR(0x595ac4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B595ac5:{NFSU2_TR(0x595ac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x595acaull));
TAIL_STATIC(0x43d1e0u,43d);
}
B595aca:L595aca:{c.instructions+=5;NFSU2_TR(0x595aca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B595acb:{NFSU2_TR(0x595acb);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B595ad2:{NFSU2_TR(0x595ad2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B595ad3:{NFSU2_TR(0x595ad3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B595ad4:{NFSU2_TR(0x595ad4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x595ad9ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B595ad9:L595ad9:{c.instructions+=1;NFSU2_TR(0x595ad9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B595adc:L595adc:{c.instructions+=12;NFSU2_TR(0x595adc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B595adf:{NFSU2_TR(0x595adf);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595ae1:{NFSU2_TR(0x595ae1);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595ae3:{NFSU2_TR(0x595ae3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B595aeb:{NFSU2_TR(0x595aeb);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595aee:{NFSU2_TR(0x595aee);
w4(R+8,u32(0x1ull));
}
B595af3:{NFSU2_TR(0x595af3);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595af6:{NFSU2_TR(0x595af6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595af8:{NFSU2_TR(0x595af8);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595afb:{NFSU2_TR(0x595afb);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595afe:{NFSU2_TR(0x595afe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595b00:{NFSU2_TR(0x595b00);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L595bd8;}}
}
B595b06:L595b06:{c.instructions+=2;NFSU2_TR(0x595b06);
w4(R+12,u32(0x4ull));
}
B595b0b:{NFSU2_TR(0x595b0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B595b0e:L595b0e:{c.instructions+=13;NFSU2_TR(0x595b0e);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595b11:{NFSU2_TR(0x595b11);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595b14:{NFSU2_TR(0x595b14);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595b17:{NFSU2_TR(0x595b17);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595b19:{NFSU2_TR(0x595b19);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595b1b:{NFSU2_TR(0x595b1b);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595b1e:{NFSU2_TR(0x595b1e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595b21:{NFSU2_TR(0x595b21);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595b23:{NFSU2_TR(0x595b23);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B595b27:{NFSU2_TR(0x595b27);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B595b29:{NFSU2_TR(0x595b29);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595b2b:{NFSU2_TR(0x595b2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B595b2e:{NFSU2_TR(0x595b2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L595b3a;}}
}
B595b30:L595b30:{c.instructions+=3;NFSU2_TR(0x595b30);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B595b32:{NFSU2_TR(0x595b32);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595b36:{NFSU2_TR(0x595b36);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595b3a:L595b3a:{c.instructions+=13;NFSU2_TR(0x595b3a);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595b3d:{NFSU2_TR(0x595b3d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595b3f:{NFSU2_TR(0x595b3f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595b42:{NFSU2_TR(0x595b42);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595b45:{NFSU2_TR(0x595b45);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595b47:{NFSU2_TR(0x595b47);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595b49:{NFSU2_TR(0x595b49);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595b4c:{NFSU2_TR(0x595b4c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595b4e:{NFSU2_TR(0x595b4e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B595b52:{NFSU2_TR(0x595b52);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B595b54:{NFSU2_TR(0x595b54);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595b56:{NFSU2_TR(0x595b56);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B595b59:{NFSU2_TR(0x595b59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L595b68;}}
}
B595b5b:L595b5b:{c.instructions+=4;NFSU2_TR(0x595b5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B595b5e:{NFSU2_TR(0x595b5e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B595b60:{NFSU2_TR(0x595b60);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595b64:{NFSU2_TR(0x595b64);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595b68:L595b68:{c.instructions+=13;NFSU2_TR(0x595b68);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595b6b:{NFSU2_TR(0x595b6b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595b6e:{NFSU2_TR(0x595b6e);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595b71:{NFSU2_TR(0x595b71);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595b74:{NFSU2_TR(0x595b74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595b76:{NFSU2_TR(0x595b76);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595b79:{NFSU2_TR(0x595b79);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595b7b:{NFSU2_TR(0x595b7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595b7d:{NFSU2_TR(0x595b7d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B595b81:{NFSU2_TR(0x595b81);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B595b83:{NFSU2_TR(0x595b83);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595b85:{NFSU2_TR(0x595b85);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B595b88:{NFSU2_TR(0x595b88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L595b97;}}
}
B595b8a:L595b8a:{c.instructions+=4;NFSU2_TR(0x595b8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B595b8d:{NFSU2_TR(0x595b8d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B595b8f:{NFSU2_TR(0x595b8f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595b93:{NFSU2_TR(0x595b93);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595b97:L595b97:{c.instructions+=13;NFSU2_TR(0x595b97);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595b9a:{NFSU2_TR(0x595b9a);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595b9d:{NFSU2_TR(0x595b9d);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595ba0:{NFSU2_TR(0x595ba0);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595ba3:{NFSU2_TR(0x595ba3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595ba5:{NFSU2_TR(0x595ba5);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595ba8:{NFSU2_TR(0x595ba8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595baa:{NFSU2_TR(0x595baa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595bac:{NFSU2_TR(0x595bac);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B595bb0:{NFSU2_TR(0x595bb0);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B595bb2:{NFSU2_TR(0x595bb2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595bb4:{NFSU2_TR(0x595bb4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B595bb7:{NFSU2_TR(0x595bb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L595bc3;}}
}
B595bb9:L595bb9:{c.instructions+=3;NFSU2_TR(0x595bb9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B595bbb:{NFSU2_TR(0x595bbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595bbf:{NFSU2_TR(0x595bbf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595bc3:L595bc3:{c.instructions+=6;NFSU2_TR(0x595bc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595bc7:{NFSU2_TR(0x595bc7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B595bca:{NFSU2_TR(0x595bca);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B595bcd:{NFSU2_TR(0x595bcd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B595bd0:{NFSU2_TR(0x595bd0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B595bd2:{NFSU2_TR(0x595bd2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x595b0eu);}goto L595b0e;}}
}
B595bd8:L595bd8:{c.instructions+=3;NFSU2_TR(0x595bd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B595bdc:{NFSU2_TR(0x595bdc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B595bde:{NFSU2_TR(0x595bde);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L595c23;}}
}
B595be0:L595be0:{c.instructions+=4;NFSU2_TR(0x595be0);
__builtin_memmove((R+4),(R+8),4);
}
B595be2:{NFSU2_TR(0x595be2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B595be5:{NFSU2_TR(0x595be5);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B595be9:{NFSU2_TR(0x595be9);
__builtin_memmove((R+16),(R+16),4);
}
B595bf0:L595bf0:{c.instructions+=13;NFSU2_TR(0x595bf0);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595bf3:{NFSU2_TR(0x595bf3);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595bf5:{NFSU2_TR(0x595bf5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595bf8:{NFSU2_TR(0x595bf8);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595bfb:{NFSU2_TR(0x595bfb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595bfd:{NFSU2_TR(0x595bfd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595bff:{NFSU2_TR(0x595bff);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595c02:{NFSU2_TR(0x595c02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595c04:{NFSU2_TR(0x595c04);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B595c08:{NFSU2_TR(0x595c08);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B595c0a:{NFSU2_TR(0x595c0a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595c0c:{NFSU2_TR(0x595c0c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B595c0f:{NFSU2_TR(0x595c0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L595c1b;}}
}
B595c11:L595c11:{c.instructions+=3;NFSU2_TR(0x595c11);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B595c13:{NFSU2_TR(0x595c13);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595c17:{NFSU2_TR(0x595c17);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595c1b:L595c1b:{c.instructions+=4;NFSU2_TR(0x595c1b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B595c1c:{NFSU2_TR(0x595c1c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B595c1f:{NFSU2_TR(0x595c1f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B595c21:{NFSU2_TR(0x595c21);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x595bf0u);}goto L595bf0;}}
}
B595c23:L595c23:{c.instructions+=13;NFSU2_TR(0x595c23);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595c26:{NFSU2_TR(0x595c26);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595c29:{NFSU2_TR(0x595c29);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595c2c:{NFSU2_TR(0x595c2c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595c2f:{NFSU2_TR(0x595c2f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595c31:{NFSU2_TR(0x595c31);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595c34:{NFSU2_TR(0x595c34);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595c36:{NFSU2_TR(0x595c36);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595c38:{NFSU2_TR(0x595c38);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B595c3a:{NFSU2_TR(0x595c3a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595c3c:{NFSU2_TR(0x595c3c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B595c3e:{NFSU2_TR(0x595c3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B595c41:{NFSU2_TR(0x595c41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L595e24;}}
}
B595c47:L595c47:{c.instructions+=54;NFSU2_TR(0x595c47);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595c4b:{NFSU2_TR(0x595c4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595c4f:{NFSU2_TR(0x595c4f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595c53:{NFSU2_TR(0x595c53);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B595c57:{NFSU2_TR(0x595c57);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595c5b:{NFSU2_TR(0x595c5b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595c5f:{NFSU2_TR(0x595c5f);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595c63:{NFSU2_TR(0x595c63);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595c67:{NFSU2_TR(0x595c67);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595c6e:{NFSU2_TR(0x595c6e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595c70:{NFSU2_TR(0x595c70);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595c77:{NFSU2_TR(0x595c77);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595c7e:{NFSU2_TR(0x595c7e);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595c85:{NFSU2_TR(0x595c85);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595c8c:{NFSU2_TR(0x595c8c);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B595c8f:{NFSU2_TR(0x595c8f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595c91:{NFSU2_TR(0x595c91);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B595c98:{NFSU2_TR(0x595c98);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595c9b:{NFSU2_TR(0x595c9b);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B595c9d:{NFSU2_TR(0x595c9d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595ca1:{NFSU2_TR(0x595ca1);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B595ca5:{NFSU2_TR(0x595ca5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595ca7:{NFSU2_TR(0x595ca7);
{u32 ea_=u32(r4(R+28)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595cad:{NFSU2_TR(0x595cad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595cb3:{NFSU2_TR(0x595cb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B595cb7:{NFSU2_TR(0x595cb7);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595cbd:{NFSU2_TR(0x595cbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595cc0:{NFSU2_TR(0x595cc0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B595cc2:{NFSU2_TR(0x595cc2);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595cc5:{NFSU2_TR(0x595cc5);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595cc8:{NFSU2_TR(0x595cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595cce:{NFSU2_TR(0x595cce);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595cd0:{NFSU2_TR(0x595cd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595cd4:{NFSU2_TR(0x595cd4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B595cd6:{NFSU2_TR(0x595cd6);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595cdc:{NFSU2_TR(0x595cdc);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595ce2:{NFSU2_TR(0x595ce2);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595ce8:{NFSU2_TR(0x595ce8);
{u32 ea_=u32(r4(R+28)+u32(128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595cee:{NFSU2_TR(0x595cee);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595cf4:{NFSU2_TR(0x595cf4);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595cfa:{NFSU2_TR(0x595cfa);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595d00:{NFSU2_TR(0x595d00);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595d06:{NFSU2_TR(0x595d06);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B595d08:{NFSU2_TR(0x595d08);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B595d0a:{NFSU2_TR(0x595d0a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B595d0c:{NFSU2_TR(0x595d0c);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B595d0e:{NFSU2_TR(0x595d0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595d10:{NFSU2_TR(0x595d10);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B595d12:{NFSU2_TR(0x595d12);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B595d14:{NFSU2_TR(0x595d14);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595d16:{NFSU2_TR(0x595d16);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B595d18:{NFSU2_TR(0x595d18);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B595d1a:{NFSU2_TR(0x595d1a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B595d1c:{NFSU2_TR(0x595d1c);
if(r1(R+518)){{goto L595e66;}}
}
B595d22:L595d22:{c.instructions+=2;NFSU2_TR(0x595d22);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B595d24:{NFSU2_TR(0x595d24);
if(r1(R+518)){{goto L595e66;}}
}
B595d2a:L595d2a:{c.instructions+=4;NFSU2_TR(0x595d2a);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B595d2e:{NFSU2_TR(0x595d2e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595d30:{NFSU2_TR(0x595d30);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B595d33:{NFSU2_TR(0x595d33);
if(r1(R+514)){{goto L595e20;}}
}
B595d39:L595d39:{c.instructions+=26;NFSU2_TR(0x595d39);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595d3f:{NFSU2_TR(0x595d3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B595d41:{NFSU2_TR(0x595d41);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595d48:{NFSU2_TR(0x595d48);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595d4e:{NFSU2_TR(0x595d4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595d55:{NFSU2_TR(0x595d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595d58:{NFSU2_TR(0x595d58);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595d5f:{NFSU2_TR(0x595d5f);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595d65:{NFSU2_TR(0x595d65);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595d6c:{NFSU2_TR(0x595d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595d6f:{NFSU2_TR(0x595d6f);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595d76:{NFSU2_TR(0x595d76);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595d7c:{NFSU2_TR(0x595d7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595d83:{NFSU2_TR(0x595d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595d89:{NFSU2_TR(0x595d89);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595d90:{NFSU2_TR(0x595d90);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595d97:{NFSU2_TR(0x595d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595d9d:{NFSU2_TR(0x595d9d);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595da1:{NFSU2_TR(0x595da1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595da5:{NFSU2_TR(0x595da5);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595dac:{NFSU2_TR(0x595dac);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B595db2:{NFSU2_TR(0x595db2);
w4(R+12,u32(0x1ull));
}
B595db7:{NFSU2_TR(0x595db7);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595dbe:{NFSU2_TR(0x595dbe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595dc0:{NFSU2_TR(0x595dc0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B595dc3:{NFSU2_TR(0x595dc3);
if(r1(R+514)){{goto L595dce;}}
}
B595dc5:L595dc5:{c.instructions+=2;NFSU2_TR(0x595dc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595dcc:{NFSU2_TR(0x595dcc);
{goto L595e01;}
}
B595dce:L595dce:{c.instructions+=5;NFSU2_TR(0x595dce);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595dd2:{NFSU2_TR(0x595dd2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B595dd8:{NFSU2_TR(0x595dd8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595dda:{NFSU2_TR(0x595dda);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B595ddd:{NFSU2_TR(0x595ddd);
if(r1(R+514)){{goto L595def;}}
}
B595ddf:L595ddf:{c.instructions+=3;NFSU2_TR(0x595ddf);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595de6:{NFSU2_TR(0x595de6);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595ded:{NFSU2_TR(0x595ded);
{goto L595e08;}
}
B595def:L595def:{c.instructions+=2;NFSU2_TR(0x595def);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B595dfa:{NFSU2_TR(0x595dfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595e01:L595e01:{c.instructions+=1;NFSU2_TR(0x595e01);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595e08:L595e08:{c.instructions+=4;NFSU2_TR(0x595e08);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595e0f:{NFSU2_TR(0x595e0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B595e13:{NFSU2_TR(0x595e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B595e1e:{NFSU2_TR(0x595e1e);
{goto L595e28;}
}
B595e20:L595e20:{c.instructions+=2;NFSU2_TR(0x595e20);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B595e22:{NFSU2_TR(0x595e22);
{goto L595e28;}
}
B595e24:L595e24:{c.instructions+=1;NFSU2_TR(0x595e24);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B595e28:L595e28:{c.instructions+=9;NFSU2_TR(0x595e28);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B595e2c:{NFSU2_TR(0x595e2c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B595e2d:{NFSU2_TR(0x595e2d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B595e30:{NFSU2_TR(0x595e30);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B595e32:{NFSU2_TR(0x595e32);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B595e36:{NFSU2_TR(0x595e36);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595e3a:{NFSU2_TR(0x595e3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B595e3e:{NFSU2_TR(0x595e3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595e42:{NFSU2_TR(0x595e42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5959b6u);}goto L5959b6;}}
}
B595e48:L595e48:{c.instructions+=1;NFSU2_TR(0x595e48);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595e4c:L595e4c:{c.instructions+=6;NFSU2_TR(0x595e4c);
__builtin_memmove((R+8),(R+0),4);
}
B595e4e:{NFSU2_TR(0x595e4e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B595e51:{NFSU2_TR(0x595e51);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B595e53:{NFSU2_TR(0x595e53);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595e57:{NFSU2_TR(0x595e57);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595e5b:{NFSU2_TR(0x595e5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x595960u);}goto L595960;}}
}
B595e61:L595e61:{c.instructions+=1;NFSU2_TR(0x595e61);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x595681u);}goto L595681;}
}
B595e66:L595e66:{c.instructions+=5;NFSU2_TR(0x595e66);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595e6a:{NFSU2_TR(0x595e6a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B595e70:{NFSU2_TR(0x595e70);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595e72:{NFSU2_TR(0x595e72);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B595e75:{NFSU2_TR(0x595e75);
if(r1(R+514)){{goto L595eae;}}
}
B595e77:L595e77:{c.instructions+=18;NFSU2_TR(0x595e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B595e81:{NFSU2_TR(0x595e81);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B595e88:{NFSU2_TR(0x595e88);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B595e8b:{NFSU2_TR(0x595e8b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+28)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B595e8d:{NFSU2_TR(0x595e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595e93:{NFSU2_TR(0x595e93);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595e96:{NFSU2_TR(0x595e96);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595e99:{NFSU2_TR(0x595e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B595e9b:{NFSU2_TR(0x595e9b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595e9d:{NFSU2_TR(0x595e9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B595e9f:{NFSU2_TR(0x595e9f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595ea2:{NFSU2_TR(0x595ea2);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595ea5:{NFSU2_TR(0x595ea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B595ea6:{NFSU2_TR(0x595ea6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B595ea7:{NFSU2_TR(0x595ea7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B595ea8:{NFSU2_TR(0x595ea8);
__builtin_memmove((R+16),(R+20),4);
}
B595eaa:{NFSU2_TR(0x595eaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B595eab:{NFSU2_TR(0x595eab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B595eae:L595eae:{c.instructions+=5;NFSU2_TR(0x595eae);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595eb2:{NFSU2_TR(0x595eb2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B595eb8:{NFSU2_TR(0x595eb8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B595eba:{NFSU2_TR(0x595eba);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B595ebd:{NFSU2_TR(0x595ebd);
if(r1(R+514)){{goto L595ef6;}}
}
B595ebf:L595ebf:{c.instructions+=18;NFSU2_TR(0x595ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B595ec9:{NFSU2_TR(0x595ec9);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B595ed0:{NFSU2_TR(0x595ed0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B595ed3:{NFSU2_TR(0x595ed3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B595ed5:{NFSU2_TR(0x595ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595edb:{NFSU2_TR(0x595edb);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595ede:{NFSU2_TR(0x595ede);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595ee1:{NFSU2_TR(0x595ee1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B595ee3:{NFSU2_TR(0x595ee3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595ee5:{NFSU2_TR(0x595ee5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B595ee7:{NFSU2_TR(0x595ee7);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595eea:{NFSU2_TR(0x595eea);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595eed:{NFSU2_TR(0x595eed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B595eee:{NFSU2_TR(0x595eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B595eef:{NFSU2_TR(0x595eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B595ef0:{NFSU2_TR(0x595ef0);
__builtin_memmove((R+16),(R+20),4);
}
B595ef2:{NFSU2_TR(0x595ef2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B595ef3:{NFSU2_TR(0x595ef3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B595ef6:L595ef6:{c.instructions+=29;NFSU2_TR(0x595ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B595f00:{NFSU2_TR(0x595f00);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B595f07:{NFSU2_TR(0x595f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595f0d:{NFSU2_TR(0x595f0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B595f10:{NFSU2_TR(0x595f10);
{u32 ea_=u32(r4(R+28)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595f14:{NFSU2_TR(0x595f14);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B595f16:{NFSU2_TR(0x595f16);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595f19:{NFSU2_TR(0x595f19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B595f1b:{NFSU2_TR(0x595f1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B595f1d:{NFSU2_TR(0x595f1d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595f1f:{NFSU2_TR(0x595f1f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595f22:{NFSU2_TR(0x595f22);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595f25:{NFSU2_TR(0x595f25);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B595f2c:{NFSU2_TR(0x595f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595f32:{NFSU2_TR(0x595f32);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B595f35:{NFSU2_TR(0x595f35);
{u32 ea_=u32(r4(R+28)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595f39:{NFSU2_TR(0x595f39);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B595f3b:{NFSU2_TR(0x595f3b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595f3e:{NFSU2_TR(0x595f3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B595f40:{NFSU2_TR(0x595f40);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595f42:{NFSU2_TR(0x595f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595f45:{NFSU2_TR(0x595f45);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595f48:{NFSU2_TR(0x595f48);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595f4b:{NFSU2_TR(0x595f4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B595f4c:{NFSU2_TR(0x595f4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B595f4d:{NFSU2_TR(0x595f4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B595f4e:{NFSU2_TR(0x595f4e);
__builtin_memmove((R+16),(R+20),4);
}
B595f50:{NFSU2_TR(0x595f50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B595f51:{NFSU2_TR(0x595f51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B595f54:L595f54:{c.instructions+=5;NFSU2_TR(0x595f54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B595f57:{NFSU2_TR(0x595f57);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B595f59:{NFSU2_TR(0x595f59);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595f5d:{NFSU2_TR(0x595f5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595f61:{NFSU2_TR(0x595f61);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x595685u);}goto L595685;}}
}
B595f67:L595f67:{c.instructions+=7;NFSU2_TR(0x595f67);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595f6b:{NFSU2_TR(0x595f6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B595f6f:{NFSU2_TR(0x595f6f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B595f70:{NFSU2_TR(0x595f70);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B595f72:{NFSU2_TR(0x595f72);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595f76:{NFSU2_TR(0x595f76);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595f7a:{NFSU2_TR(0x595f7a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x596dfdu,596);}
}
B595f80:L595f80:{c.instructions+=34;NFSU2_TR(0x595f80);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B595f84:{NFSU2_TR(0x595f84);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595f88:{NFSU2_TR(0x595f88);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B595f8b:{NFSU2_TR(0x595f8b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B595f8d:{NFSU2_TR(0x595f8d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B595f8e:{NFSU2_TR(0x595f8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595f92:{NFSU2_TR(0x595f92);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595f96:{NFSU2_TR(0x595f96);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B595f9a:{NFSU2_TR(0x595f9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B595f9d:{NFSU2_TR(0x595f9d);
{u32 ea_=u32(r4(R+28)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595fa0:{NFSU2_TR(0x595fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B595fa3:{NFSU2_TR(0x595fa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B595fa7:{NFSU2_TR(0x595fa7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595fa9:{NFSU2_TR(0x595fa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595fb0:{NFSU2_TR(0x595fb0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595fb3:{NFSU2_TR(0x595fb3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595fb6:{NFSU2_TR(0x595fb6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595fb9:{NFSU2_TR(0x595fb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B595fbd:{NFSU2_TR(0x595fbd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B595fbf:{NFSU2_TR(0x595fbf);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B595fc2:{NFSU2_TR(0x595fc2);
{u32 ea_=u32(r4(R+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595fc9:{NFSU2_TR(0x595fc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B595fd0:{NFSU2_TR(0x595fd0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B595fd2:{NFSU2_TR(0x595fd2);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595fd6:{NFSU2_TR(0x595fd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B595fda:{NFSU2_TR(0x595fda);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B595fde:{NFSU2_TR(0x595fde);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B595fe6:{NFSU2_TR(0x595fe6);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595fea:{NFSU2_TR(0x595fea);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595fee:{NFSU2_TR(0x595fee);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595ff2:{NFSU2_TR(0x595ff2);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B595ff6:{NFSU2_TR(0x595ff6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B595ff8:{NFSU2_TR(0x595ff8);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B595ffc:{NFSU2_TR(0x595ffc);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x596000u,596);
}
XIT:NFSU2_TR_EXIT(0x595,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
