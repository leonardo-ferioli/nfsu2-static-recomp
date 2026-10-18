#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_595(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x594,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x594,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_594(u8* __restrict R,Cpu& c);
u32 page_594(Cpu& c){return body_594(c.regs.data(),c);}
__attribute__((noinline)) u32 body_594(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x594000:goto L594000;
case 0x594001:c.instructions+=40;goto B594001;
case 0x594003:c.instructions+=39;goto B594003;
case 0x594006:c.instructions+=38;goto B594006;
case 0x594009:c.instructions+=37;goto B594009;
case 0x59400a:c.instructions+=36;goto B59400a;
case 0x59400b:c.instructions+=35;goto B59400b;
case 0x59400d:c.instructions+=34;goto B59400d;
case 0x594010:c.instructions+=33;goto B594010;
case 0x594016:c.instructions+=32;goto B594016;
case 0x59401c:c.instructions+=31;goto B59401c;
case 0x594022:c.instructions+=30;goto B594022;
case 0x594026:c.instructions+=29;goto B594026;
case 0x59402c:c.instructions+=28;goto B59402c;
case 0x594030:c.instructions+=27;goto B594030;
case 0x594034:c.instructions+=26;goto B594034;
case 0x59403a:c.instructions+=25;goto B59403a;
case 0x59403e:c.instructions+=24;goto B59403e;
case 0x594042:c.instructions+=23;goto B594042;
case 0x594048:c.instructions+=22;goto B594048;
case 0x59404b:c.instructions+=21;goto B59404b;
case 0x59404f:c.instructions+=20;goto B59404f;
case 0x594053:c.instructions+=19;goto B594053;
case 0x594054:c.instructions+=18;goto B594054;
case 0x594058:c.instructions+=17;goto B594058;
case 0x59405c:c.instructions+=16;goto B59405c;
case 0x594060:c.instructions+=15;goto B594060;
case 0x594064:c.instructions+=14;goto B594064;
case 0x594068:c.instructions+=13;goto B594068;
case 0x59406c:c.instructions+=12;goto B59406c;
case 0x59406e:c.instructions+=11;goto B59406e;
case 0x594074:c.instructions+=10;goto B594074;
case 0x594076:c.instructions+=9;goto B594076;
case 0x59407c:c.instructions+=8;goto B59407c;
case 0x59407f:c.instructions+=7;goto B59407f;
case 0x594083:c.instructions+=6;goto B594083;
case 0x594089:c.instructions+=5;goto B594089;
case 0x59408c:c.instructions+=4;goto B59408c;
case 0x59408f:c.instructions+=3;goto B59408f;
case 0x594092:c.instructions+=2;goto B594092;
case 0x594094:c.instructions+=1;goto B594094;
case 0x594096:goto L594096;
case 0x594099:c.instructions+=8;goto B594099;
case 0x59409d:c.instructions+=7;goto B59409d;
case 0x59409e:c.instructions+=6;goto B59409e;
case 0x59409f:c.instructions+=5;goto B59409f;
case 0x5940a0:c.instructions+=4;goto B5940a0;
case 0x5940a3:c.instructions+=3;goto B5940a3;
case 0x5940a4:c.instructions+=2;goto B5940a4;
case 0x5940a6:c.instructions+=1;goto B5940a6;
case 0x5940ab:goto L5940ab;
case 0x5940ac:c.instructions+=5;goto B5940ac;
case 0x5940ad:c.instructions+=4;goto B5940ad;
case 0x5940ae:c.instructions+=3;goto B5940ae;
case 0x5940b0:c.instructions+=2;goto B5940b0;
case 0x5940b1:c.instructions+=1;goto B5940b1;
case 0x5940b4:goto L5940b4;
case 0x5940b7:c.instructions+=4;goto B5940b7;
case 0x5940ba:c.instructions+=3;goto B5940ba;
case 0x5940bc:c.instructions+=2;goto B5940bc;
case 0x5940bf:c.instructions+=1;goto B5940bf;
case 0x5940c1:goto L5940c1;
case 0x5940c5:c.instructions+=6;goto B5940c5;
case 0x5940c6:c.instructions+=5;goto B5940c6;
case 0x5940c7:c.instructions+=4;goto B5940c7;
case 0x5940c8:c.instructions+=3;goto B5940c8;
case 0x5940c9:c.instructions+=2;goto B5940c9;
case 0x5940cb:c.instructions+=1;goto B5940cb;
case 0x5940d0:goto L5940d0;
case 0x5940d2:c.instructions+=17;goto B5940d2;
case 0x5940d4:c.instructions+=16;goto B5940d4;
case 0x5940d7:c.instructions+=15;goto B5940d7;
case 0x5940d9:c.instructions+=14;goto B5940d9;
case 0x5940dc:c.instructions+=13;goto B5940dc;
case 0x5940de:c.instructions+=12;goto B5940de;
case 0x5940e2:c.instructions+=11;goto B5940e2;
case 0x5940e6:c.instructions+=10;goto B5940e6;
case 0x5940e8:c.instructions+=9;goto B5940e8;
case 0x5940eb:c.instructions+=8;goto B5940eb;
case 0x5940ed:c.instructions+=7;goto B5940ed;
case 0x5940f0:c.instructions+=6;goto B5940f0;
case 0x5940f1:c.instructions+=5;goto B5940f1;
case 0x5940f2:c.instructions+=4;goto B5940f2;
case 0x5940f3:c.instructions+=3;goto B5940f3;
case 0x5940f5:c.instructions+=2;goto B5940f5;
case 0x5940f6:c.instructions+=1;goto B5940f6;
case 0x5940f9:goto L5940f9;
case 0x5940fd:c.instructions+=25;goto B5940fd;
case 0x594101:c.instructions+=24;goto B594101;
case 0x594105:c.instructions+=23;goto B594105;
case 0x594109:c.instructions+=22;goto B594109;
case 0x59410d:c.instructions+=21;goto B59410d;
case 0x594111:c.instructions+=20;goto B594111;
case 0x594115:c.instructions+=19;goto B594115;
case 0x594117:c.instructions+=18;goto B594117;
case 0x59411b:c.instructions+=17;goto B59411b;
case 0x59411d:c.instructions+=16;goto B59411d;
case 0x594120:c.instructions+=15;goto B594120;
case 0x594124:c.instructions+=14;goto B594124;
case 0x594127:c.instructions+=13;goto B594127;
case 0x594129:c.instructions+=12;goto B594129;
case 0x59412b:c.instructions+=11;goto B59412b;
case 0x59412d:c.instructions+=10;goto B59412d;
case 0x59412f:c.instructions+=9;goto B59412f;
case 0x594131:c.instructions+=8;goto B594131;
case 0x594135:c.instructions+=7;goto B594135;
case 0x594139:c.instructions+=6;goto B594139;
case 0x59413b:c.instructions+=5;goto B59413b;
case 0x59413d:c.instructions+=4;goto B59413d;
case 0x594143:c.instructions+=3;goto B594143;
case 0x594145:c.instructions+=2;goto B594145;
case 0x594148:c.instructions+=1;goto B594148;
case 0x59414a:goto L59414a;
case 0x59414d:c.instructions+=5;goto B59414d;
case 0x59414f:c.instructions+=4;goto B59414f;
case 0x594151:c.instructions+=3;goto B594151;
case 0x594153:c.instructions+=2;goto B594153;
case 0x594155:c.instructions+=1;goto B594155;
case 0x594158:goto L594158;
case 0x59415b:c.instructions+=3;goto B59415b;
case 0x59415d:c.instructions+=2;goto B59415d;
case 0x59415f:c.instructions+=1;goto B59415f;
case 0x594162:goto L594162;
case 0x594164:c.instructions+=14;goto B594164;
case 0x594166:c.instructions+=13;goto B594166;
case 0x594167:c.instructions+=12;goto B594167;
case 0x59416a:c.instructions+=11;goto B59416a;
case 0x59416b:c.instructions+=10;goto B59416b;
case 0x59416e:c.instructions+=9;goto B59416e;
case 0x594171:c.instructions+=8;goto B594171;
case 0x594174:c.instructions+=7;goto B594174;
case 0x594178:c.instructions+=6;goto B594178;
case 0x59417c:c.instructions+=5;goto B59417c;
case 0x59417e:c.instructions+=4;goto B59417e;
case 0x594180:c.instructions+=3;goto B594180;
case 0x594183:c.instructions+=2;goto B594183;
case 0x594186:c.instructions+=1;goto B594186;
case 0x59418b:goto L59418b;
case 0x59418e:c.instructions+=6;goto B59418e;
case 0x59418f:c.instructions+=5;goto B59418f;
case 0x594190:c.instructions+=4;goto B594190;
case 0x594191:c.instructions+=3;goto B594191;
case 0x594193:c.instructions+=2;goto B594193;
case 0x594194:c.instructions+=1;goto B594194;
case 0x594197:goto L594197;
case 0x59419d:c.instructions+=15;goto B59419d;
case 0x5941a1:c.instructions+=14;goto B5941a1;
case 0x5941a3:c.instructions+=13;goto B5941a3;
case 0x5941a5:c.instructions+=12;goto B5941a5;
case 0x5941a7:c.instructions+=11;goto B5941a7;
case 0x5941a9:c.instructions+=10;goto B5941a9;
case 0x5941ac:c.instructions+=9;goto B5941ac;
case 0x5941ae:c.instructions+=8;goto B5941ae;
case 0x5941b1:c.instructions+=7;goto B5941b1;
case 0x5941b2:c.instructions+=6;goto B5941b2;
case 0x5941b3:c.instructions+=5;goto B5941b3;
case 0x5941b5:c.instructions+=4;goto B5941b5;
case 0x5941b6:c.instructions+=3;goto B5941b6;
case 0x5941b8:c.instructions+=2;goto B5941b8;
case 0x5941b9:c.instructions+=1;goto B5941b9;
case 0x5941c0:goto L5941c0;
case 0x5941c1:c.instructions+=7;goto B5941c1;
case 0x5941c5:c.instructions+=6;goto B5941c5;
case 0x5941c7:c.instructions+=5;goto B5941c7;
case 0x5941c8:c.instructions+=4;goto B5941c8;
case 0x5941cc:c.instructions+=3;goto B5941cc;
case 0x5941cd:c.instructions+=2;goto B5941cd;
case 0x5941cf:c.instructions+=1;goto B5941cf;
case 0x5941d2:goto L5941d2;
case 0x5941d6:c.instructions+=4;goto B5941d6;
case 0x5941d8:c.instructions+=3;goto B5941d8;
case 0x5941d9:c.instructions+=2;goto B5941d9;
case 0x5941db:c.instructions+=1;goto B5941db;
case 0x5941de:goto L5941de;
case 0x5941e1:c.instructions+=2;goto B5941e1;
case 0x5941e3:c.instructions+=1;goto B5941e3;
case 0x5941e5:goto L5941e5;
case 0x5941e9:c.instructions+=1;goto B5941e9;
case 0x5941eb:goto L5941eb;
case 0x5941ec:c.instructions+=4;goto B5941ec;
case 0x5941ee:c.instructions+=3;goto B5941ee;
case 0x5941f2:c.instructions+=2;goto B5941f2;
case 0x5941f3:c.instructions+=1;goto B5941f3;
case 0x5941f6:goto L5941f6;
case 0x5941f9:c.instructions+=2;goto B5941f9;
case 0x5941fb:c.instructions+=1;goto B5941fb;
case 0x5941fd:goto L5941fd;
case 0x5941ff:c.instructions+=1;goto B5941ff;
case 0x594201:goto L594201;
case 0x594205:c.instructions+=4;goto B594205;
case 0x594207:c.instructions+=3;goto B594207;
case 0x594209:c.instructions+=2;goto B594209;
case 0x59420c:c.instructions+=1;goto B59420c;
case 0x59420e:goto L59420e;
case 0x594210:c.instructions+=1;goto B594210;
case 0x594214:goto L594214;
case 0x594215:c.instructions+=2;goto B594215;
case 0x594216:c.instructions+=1;goto B594216;
case 0x594220:goto L594220;
case 0x594221:c.instructions+=6;goto B594221;
case 0x594225:c.instructions+=5;goto B594225;
case 0x594228:c.instructions+=4;goto B594228;
case 0x594229:c.instructions+=3;goto B594229;
case 0x59422b:c.instructions+=2;goto B59422b;
case 0x59422e:c.instructions+=1;goto B59422e;
case 0x594230:goto L594230;
case 0x59423a:goto L59423a;
case 0x59423f:c.instructions+=3;goto B59423f;
case 0x594241:c.instructions+=2;goto B594241;
case 0x594243:c.instructions+=1;goto B594243;
case 0x594248:goto L594248;
case 0x59424b:c.instructions+=3;goto B59424b;
case 0x59424c:c.instructions+=2;goto B59424c;
case 0x59424e:c.instructions+=1;goto B59424e;
case 0x594253:goto L594253;
case 0x594256:c.instructions+=3;goto B594256;
case 0x594257:c.instructions+=2;goto B594257;
case 0x594259:c.instructions+=1;goto B594259;
case 0x59425e:goto L59425e;
case 0x594261:c.instructions+=3;goto B594261;
case 0x594262:c.instructions+=2;goto B594262;
case 0x594264:c.instructions+=1;goto B594264;
case 0x594269:goto L594269;
case 0x59426f:c.instructions+=3;goto B59426f;
case 0x594270:c.instructions+=2;goto B594270;
case 0x594272:c.instructions+=1;goto B594272;
case 0x594277:goto L594277;
case 0x594279:c.instructions+=6;goto B594279;
case 0x59427b:c.instructions+=5;goto B59427b;
case 0x59427d:c.instructions+=4;goto B59427d;
case 0x594283:c.instructions+=3;goto B594283;
case 0x594284:c.instructions+=2;goto B594284;
case 0x594286:c.instructions+=1;goto B594286;
case 0x59428b:goto L59428b;
case 0x59428d:c.instructions+=6;goto B59428d;
case 0x59428f:c.instructions+=5;goto B59428f;
case 0x594291:c.instructions+=4;goto B594291;
case 0x594297:c.instructions+=3;goto B594297;
case 0x594298:c.instructions+=2;goto B594298;
case 0x59429a:c.instructions+=1;goto B59429a;
case 0x59429f:goto L59429f;
case 0x5942a5:c.instructions+=3;goto B5942a5;
case 0x5942a6:c.instructions+=2;goto B5942a6;
case 0x5942a8:c.instructions+=1;goto B5942a8;
case 0x5942ad:goto L5942ad;
case 0x5942af:c.instructions+=1;goto B5942af;
case 0x5942b4:goto L5942b4;
case 0x5942b5:c.instructions+=2;goto B5942b5;
case 0x5942b6:c.instructions+=1;goto B5942b6;
case 0x5942c0:goto L5942c0;
case 0x5942c6:c.instructions+=4;goto B5942c6;
case 0x5942cc:c.instructions+=3;goto B5942cc;
case 0x5942ce:c.instructions+=2;goto B5942ce;
case 0x5942d1:c.instructions+=1;goto B5942d1;
case 0x5942d3:goto L5942d3;
case 0x5942d8:c.instructions+=1;goto B5942d8;
case 0x5942d9:goto L5942d9;
case 0x5942db:c.instructions+=1;goto B5942db;
case 0x5942e0:goto L5942e0;
case 0x5942e6:c.instructions+=2;goto B5942e6;
case 0x5942e8:c.instructions+=1;goto B5942e8;
case 0x5942ea:goto L5942ea;
case 0x5942f0:c.instructions+=2;goto B5942f0;
case 0x5942f3:c.instructions+=1;goto B5942f3;
case 0x5942f4:goto L5942f4;
case 0x5942fa:c.instructions+=1;goto B5942fa;
case 0x594300:goto L594300;
case 0x594303:c.instructions+=9;goto B594303;
case 0x594304:c.instructions+=8;goto B594304;
case 0x594306:c.instructions+=7;goto B594306;
case 0x594309:c.instructions+=6;goto B594309;
case 0x59430c:c.instructions+=5;goto B59430c;
case 0x594312:c.instructions+=4;goto B594312;
case 0x594316:c.instructions+=3;goto B594316;
case 0x59431a:c.instructions+=2;goto B59431a;
case 0x59431b:c.instructions+=1;goto B59431b;
case 0x594320:goto L594320;
case 0x594326:c.instructions+=3;goto B594326;
case 0x594329:c.instructions+=2;goto B594329;
case 0x59432b:c.instructions+=1;goto B59432b;
case 0x59432d:goto L59432d;
case 0x594333:goto L594333;
case 0x594339:c.instructions+=2;goto B594339;
case 0x59433b:c.instructions+=1;goto B59433b;
case 0x59433d:goto L59433d;
case 0x594343:c.instructions+=2;goto B594343;
case 0x594346:c.instructions+=1;goto B594346;
case 0x594348:goto L594348;
case 0x59434e:goto L59434e;
case 0x594354:c.instructions+=6;goto B594354;
case 0x594356:c.instructions+=5;goto B594356;
case 0x594358:c.instructions+=4;goto B594358;
case 0x59435a:c.instructions+=3;goto B59435a;
case 0x59435e:c.instructions+=2;goto B59435e;
case 0x594360:c.instructions+=1;goto B594360;
case 0x594362:goto L594362;
case 0x594369:c.instructions+=10;goto B594369;
case 0x59436c:c.instructions+=9;goto B59436c;
case 0x594370:c.instructions+=8;goto B594370;
case 0x594371:c.instructions+=7;goto B594371;
case 0x594374:c.instructions+=6;goto B594374;
case 0x594376:c.instructions+=5;goto B594376;
case 0x59437c:c.instructions+=4;goto B59437c;
case 0x59437d:c.instructions+=3;goto B59437d;
case 0x594380:c.instructions+=2;goto B594380;
case 0x594383:c.instructions+=1;goto B594383;
case 0x594388:goto L594388;
case 0x59438e:c.instructions+=5;goto B59438e;
case 0x594394:c.instructions+=4;goto B594394;
case 0x594396:c.instructions+=3;goto B594396;
case 0x59439a:c.instructions+=2;goto B59439a;
case 0x59439b:c.instructions+=1;goto B59439b;
case 0x59439d:goto L59439d;
case 0x5943a3:c.instructions+=2;goto B5943a3;
case 0x5943a6:c.instructions+=1;goto B5943a6;
case 0x5943a8:goto L5943a8;
case 0x5943ae:goto L5943ae;
case 0x5943b0:c.instructions+=3;goto B5943b0;
case 0x5943b4:c.instructions+=2;goto B5943b4;
case 0x5943b8:c.instructions+=1;goto B5943b8;
case 0x5943ba:goto L5943ba;
case 0x5943c0:c.instructions+=4;goto B5943c0;
case 0x5943c6:c.instructions+=3;goto B5943c6;
case 0x5943c8:c.instructions+=2;goto B5943c8;
case 0x5943cb:c.instructions+=1;goto B5943cb;
case 0x5943cd:goto L5943cd;
case 0x5943d3:c.instructions+=7;goto B5943d3;
case 0x5943d9:c.instructions+=6;goto B5943d9;
case 0x5943df:c.instructions+=5;goto B5943df;
case 0x5943e5:c.instructions+=4;goto B5943e5;
case 0x5943e7:c.instructions+=3;goto B5943e7;
case 0x5943e9:c.instructions+=2;goto B5943e9;
case 0x5943ec:c.instructions+=1;goto B5943ec;
case 0x5943ee:goto L5943ee;
case 0x5943f0:c.instructions+=1;goto B5943f0;
case 0x5943f6:goto L5943f6;
case 0x5943fc:c.instructions+=6;goto B5943fc;
case 0x5943fe:c.instructions+=5;goto B5943fe;
case 0x594404:c.instructions+=4;goto B594404;
case 0x59440a:c.instructions+=3;goto B59440a;
case 0x59440e:c.instructions+=2;goto B59440e;
case 0x594412:c.instructions+=1;goto B594412;
case 0x594414:goto L594414;
case 0x594416:c.instructions+=1;goto B594416;
case 0x594418:goto L594418;
case 0x59441e:c.instructions+=3;goto B59441e;
case 0x594421:c.instructions+=2;goto B594421;
case 0x594425:c.instructions+=1;goto B594425;
case 0x594427:goto L594427;
case 0x59442f:goto L59442f;
case 0x594432:c.instructions+=5;goto B594432;
case 0x594433:c.instructions+=4;goto B594433;
case 0x594439:c.instructions+=3;goto B594439;
case 0x59443c:c.instructions+=2;goto B59443c;
case 0x59443f:c.instructions+=1;goto B59443f;
case 0x594444:goto L594444;
case 0x59444a:c.instructions+=6;goto B59444a;
case 0x59444e:c.instructions+=5;goto B59444e;
case 0x594454:c.instructions+=4;goto B594454;
case 0x594456:c.instructions+=3;goto B594456;
case 0x594458:c.instructions+=2;goto B594458;
case 0x59445a:c.instructions+=1;goto B59445a;
case 0x59445c:goto L59445c;
case 0x594462:goto L594462;
case 0x594466:c.instructions+=4;goto B594466;
case 0x59446c:c.instructions+=3;goto B59446c;
case 0x59446e:c.instructions+=2;goto B59446e;
case 0x594471:c.instructions+=1;goto B594471;
case 0x594473:goto L594473;
case 0x594475:c.instructions+=1;goto B594475;
case 0x594477:goto L594477;
case 0x59447a:c.instructions+=2;goto B59447a;
case 0x59447e:c.instructions+=1;goto B59447e;
case 0x594480:goto L594480;
case 0x594486:c.instructions+=3;goto B594486;
case 0x594487:c.instructions+=2;goto B594487;
case 0x59448a:c.instructions+=1;goto B59448a;
case 0x59448b:goto L59448b;
case 0x594491:goto L594491;
case 0x594492:c.instructions+=2;goto B594492;
case 0x594495:c.instructions+=1;goto B594495;
case 0x5944a0:goto L5944a0;
case 0x5944a1:c.instructions+=7;goto B5944a1;
case 0x5944a5:c.instructions+=6;goto B5944a5;
case 0x5944a6:c.instructions+=5;goto B5944a6;
case 0x5944ab:c.instructions+=4;goto B5944ab;
case 0x5944ad:c.instructions+=3;goto B5944ad;
case 0x5944af:c.instructions+=2;goto B5944af;
case 0x5944b1:c.instructions+=1;goto B5944b1;
case 0x5944b6:goto L5944b6;
case 0x5944b9:c.instructions+=3;goto B5944b9;
case 0x5944ba:c.instructions+=2;goto B5944ba;
case 0x5944bc:c.instructions+=1;goto B5944bc;
case 0x5944c1:goto L5944c1;
case 0x5944c3:c.instructions+=6;goto B5944c3;
case 0x5944c5:c.instructions+=5;goto B5944c5;
case 0x5944c7:c.instructions+=4;goto B5944c7;
case 0x5944ca:c.instructions+=3;goto B5944ca;
case 0x5944cb:c.instructions+=2;goto B5944cb;
case 0x5944cd:c.instructions+=1;goto B5944cd;
case 0x5944d2:goto L5944d2;
case 0x5944d4:c.instructions+=6;goto B5944d4;
case 0x5944d6:c.instructions+=5;goto B5944d6;
case 0x5944d8:c.instructions+=4;goto B5944d8;
case 0x5944db:c.instructions+=3;goto B5944db;
case 0x5944dc:c.instructions+=2;goto B5944dc;
case 0x5944de:c.instructions+=1;goto B5944de;
case 0x5944e3:goto L5944e3;
case 0x5944e5:c.instructions+=6;goto B5944e5;
case 0x5944e7:c.instructions+=5;goto B5944e7;
case 0x5944e9:c.instructions+=4;goto B5944e9;
case 0x5944ec:c.instructions+=3;goto B5944ec;
case 0x5944ed:c.instructions+=2;goto B5944ed;
case 0x5944ef:c.instructions+=1;goto B5944ef;
case 0x5944f4:goto L5944f4;
case 0x5944f6:c.instructions+=6;goto B5944f6;
case 0x5944f8:c.instructions+=5;goto B5944f8;
case 0x5944fa:c.instructions+=4;goto B5944fa;
case 0x5944fd:c.instructions+=3;goto B5944fd;
case 0x5944fe:c.instructions+=2;goto B5944fe;
case 0x594500:c.instructions+=1;goto B594500;
case 0x594505:goto L594505;
case 0x594507:c.instructions+=6;goto B594507;
case 0x594509:c.instructions+=5;goto B594509;
case 0x59450b:c.instructions+=4;goto B59450b;
case 0x59450e:c.instructions+=3;goto B59450e;
case 0x59450f:c.instructions+=2;goto B59450f;
case 0x594511:c.instructions+=1;goto B594511;
case 0x594516:goto L594516;
case 0x594518:c.instructions+=6;goto B594518;
case 0x59451a:c.instructions+=5;goto B59451a;
case 0x59451c:c.instructions+=4;goto B59451c;
case 0x59451f:c.instructions+=3;goto B59451f;
case 0x594520:c.instructions+=2;goto B594520;
case 0x594522:c.instructions+=1;goto B594522;
case 0x594527:goto L594527;
case 0x59452a:c.instructions+=3;goto B59452a;
case 0x59452b:c.instructions+=2;goto B59452b;
case 0x59452d:c.instructions+=1;goto B59452d;
case 0x594532:goto L594532;
case 0x594535:c.instructions+=3;goto B594535;
case 0x594536:c.instructions+=2;goto B594536;
case 0x594538:c.instructions+=1;goto B594538;
case 0x59453d:goto L59453d;
case 0x594540:c.instructions+=3;goto B594540;
case 0x594541:c.instructions+=2;goto B594541;
case 0x594543:c.instructions+=1;goto B594543;
case 0x594548:goto L594548;
case 0x59454b:c.instructions+=3;goto B59454b;
case 0x59454c:c.instructions+=2;goto B59454c;
case 0x59454e:c.instructions+=1;goto B59454e;
case 0x594553:goto L594553;
case 0x594555:c.instructions+=6;goto B594555;
case 0x594557:c.instructions+=5;goto B594557;
case 0x594559:c.instructions+=4;goto B594559;
case 0x59455c:c.instructions+=3;goto B59455c;
case 0x59455d:c.instructions+=2;goto B59455d;
case 0x59455f:c.instructions+=1;goto B59455f;
case 0x594564:goto L594564;
case 0x594567:c.instructions+=3;goto B594567;
case 0x594568:c.instructions+=2;goto B594568;
case 0x59456a:c.instructions+=1;goto B59456a;
case 0x59456f:goto L59456f;
case 0x594572:c.instructions+=3;goto B594572;
case 0x594573:c.instructions+=2;goto B594573;
case 0x594575:c.instructions+=1;goto B594575;
case 0x59457a:goto L59457a;
case 0x59457d:c.instructions+=3;goto B59457d;
case 0x59457e:c.instructions+=2;goto B59457e;
case 0x594580:c.instructions+=1;goto B594580;
case 0x594585:goto L594585;
case 0x594588:c.instructions+=3;goto B594588;
case 0x594589:c.instructions+=2;goto B594589;
case 0x59458b:c.instructions+=1;goto B59458b;
case 0x594590:goto L594590;
case 0x594592:c.instructions+=6;goto B594592;
case 0x594594:c.instructions+=5;goto B594594;
case 0x594596:c.instructions+=4;goto B594596;
case 0x594599:c.instructions+=3;goto B594599;
case 0x59459a:c.instructions+=2;goto B59459a;
case 0x59459c:c.instructions+=1;goto B59459c;
case 0x5945a1:goto L5945a1;
case 0x5945a4:c.instructions+=3;goto B5945a4;
case 0x5945a5:c.instructions+=2;goto B5945a5;
case 0x5945a7:c.instructions+=1;goto B5945a7;
case 0x5945ac:goto L5945ac;
case 0x5945af:c.instructions+=3;goto B5945af;
case 0x5945b0:c.instructions+=2;goto B5945b0;
case 0x5945b2:c.instructions+=1;goto B5945b2;
case 0x5945b7:goto L5945b7;
case 0x5945bd:c.instructions+=3;goto B5945bd;
case 0x5945be:c.instructions+=2;goto B5945be;
case 0x5945c0:c.instructions+=1;goto B5945c0;
case 0x5945c5:goto L5945c5;
case 0x5945c8:c.instructions+=2;goto B5945c8;
case 0x5945ca:c.instructions+=1;goto B5945ca;
case 0x5945cc:goto L5945cc;
case 0x5945cf:c.instructions+=2;goto B5945cf;
case 0x5945d2:c.instructions+=1;goto B5945d2;
case 0x5945d8:goto L5945d8;
case 0x5945da:c.instructions+=1;goto B5945da;
case 0x5945df:goto L5945df;
case 0x5945e0:c.instructions+=2;goto B5945e0;
case 0x5945e1:c.instructions+=1;goto B5945e1;
case 0x5945f0:goto L5945f0;
case 0x5945f3:c.instructions+=6;goto B5945f3;
case 0x5945f9:c.instructions+=5;goto B5945f9;
case 0x5945fc:c.instructions+=4;goto B5945fc;
case 0x594602:c.instructions+=3;goto B594602;
case 0x594604:c.instructions+=2;goto B594604;
case 0x594607:c.instructions+=1;goto B594607;
case 0x594609:goto L594609;
case 0x59460c:c.instructions+=6;goto B59460c;
case 0x59460e:c.instructions+=5;goto B59460e;
case 0x594611:c.instructions+=4;goto B594611;
case 0x594614:c.instructions+=3;goto B594614;
case 0x594617:c.instructions+=2;goto B594617;
case 0x59461d:c.instructions+=1;goto B59461d;
case 0x594620:goto L594620;
case 0x594623:c.instructions+=4;goto B594623;
case 0x594629:c.instructions+=3;goto B594629;
case 0x59462b:c.instructions+=2;goto B59462b;
case 0x59462e:c.instructions+=1;goto B59462e;
case 0x594630:goto L594630;
case 0x594633:c.instructions+=11;goto B594633;
case 0x594636:c.instructions+=10;goto B594636;
case 0x594639:c.instructions+=9;goto B594639;
case 0x59463c:c.instructions+=8;goto B59463c;
case 0x594642:c.instructions+=7;goto B594642;
case 0x594645:c.instructions+=6;goto B594645;
case 0x594647:c.instructions+=5;goto B594647;
case 0x59464a:c.instructions+=4;goto B59464a;
case 0x594650:c.instructions+=3;goto B594650;
case 0x594652:c.instructions+=2;goto B594652;
case 0x594655:c.instructions+=1;goto B594655;
case 0x594657:goto L594657;
case 0x59465d:goto L59465d;
case 0x594660:c.instructions+=2;goto B594660;
case 0x594664:c.instructions+=1;goto B594664;
case 0x594670:goto L594670;
case 0x594674:c.instructions+=2;goto B594674;
case 0x594677:c.instructions+=1;goto B594677;
case 0x594679:goto L594679;
case 0x59467f:c.instructions+=1;goto B59467f;
case 0x594681:goto L594681;
case 0x594684:goto L594684;
case 0x594688:c.instructions+=2;goto B594688;
case 0x59468a:c.instructions+=1;goto B59468a;
case 0x59468c:goto L59468c;
case 0x59468e:c.instructions+=1;goto B59468e;
case 0x594694:goto L594694;
case 0x59469b:c.instructions+=4;goto B59469b;
case 0x5946a0:c.instructions+=3;goto B5946a0;
case 0x5946a2:c.instructions+=2;goto B5946a2;
case 0x5946a6:c.instructions+=1;goto B5946a6;
case 0x5946a8:goto L5946a8;
case 0x5946ad:c.instructions+=2;goto B5946ad;
case 0x5946af:c.instructions+=1;goto B5946af;
case 0x5946b1:goto L5946b1;
case 0x5946b4:c.instructions+=3;goto B5946b4;
case 0x5946b7:c.instructions+=2;goto B5946b7;
case 0x5946ba:c.instructions+=1;goto B5946ba;
case 0x5946bc:goto L5946bc;
case 0x5946bf:c.instructions+=2;goto B5946bf;
case 0x5946c2:c.instructions+=1;goto B5946c2;
case 0x5946c5:goto L5946c5;
case 0x5946c9:c.instructions+=3;goto B5946c9;
case 0x5946cb:c.instructions+=2;goto B5946cb;
case 0x5946ce:c.instructions+=1;goto B5946ce;
case 0x5946d0:goto L5946d0;
case 0x5946d2:c.instructions+=1;goto B5946d2;
case 0x5946d6:goto L5946d6;
case 0x5946e0:goto L5946e0;
case 0x5946e4:c.instructions+=2;goto B5946e4;
case 0x5946e6:c.instructions+=1;goto B5946e6;
case 0x5946e8:goto L5946e8;
case 0x5946ee:c.instructions+=3;goto B5946ee;
case 0x5946f2:c.instructions+=2;goto B5946f2;
case 0x5946f9:c.instructions+=1;goto B5946f9;
case 0x5946fc:goto L5946fc;
case 0x5946ff:c.instructions+=3;goto B5946ff;
case 0x594703:c.instructions+=2;goto B594703;
case 0x59470a:c.instructions+=1;goto B59470a;
case 0x594710:goto L594710;
case 0x594711:c.instructions+=9;goto B594711;
case 0x594713:c.instructions+=8;goto B594713;
case 0x594715:c.instructions+=7;goto B594715;
case 0x594718:c.instructions+=6;goto B594718;
case 0x59471b:c.instructions+=5;goto B59471b;
case 0x594721:c.instructions+=4;goto B594721;
case 0x594726:c.instructions+=3;goto B594726;
case 0x59472c:c.instructions+=2;goto B59472c;
case 0x59472e:c.instructions+=1;goto B59472e;
case 0x594730:goto L594730;
case 0x594733:c.instructions+=1;goto B594733;
case 0x594735:goto L594735;
case 0x59473b:c.instructions+=5;goto B59473b;
case 0x59473c:c.instructions+=4;goto B59473c;
case 0x594742:c.instructions+=3;goto B594742;
case 0x594748:c.instructions+=2;goto B594748;
case 0x59474b:c.instructions+=1;goto B59474b;
case 0x594750:goto L594750;
case 0x594756:c.instructions+=7;goto B594756;
case 0x594757:c.instructions+=6;goto B594757;
case 0x59475a:c.instructions+=5;goto B59475a;
case 0x594760:c.instructions+=4;goto B594760;
case 0x594766:c.instructions+=3;goto B594766;
case 0x59476c:c.instructions+=2;goto B59476c;
case 0x59476f:c.instructions+=1;goto B59476f;
case 0x594774:goto L594774;
case 0x59477a:c.instructions+=7;goto B59477a;
case 0x59477b:c.instructions+=6;goto B59477b;
case 0x59477e:c.instructions+=5;goto B59477e;
case 0x594784:c.instructions+=4;goto B594784;
case 0x59478a:c.instructions+=3;goto B59478a;
case 0x594790:c.instructions+=2;goto B594790;
case 0x594793:c.instructions+=1;goto B594793;
case 0x594798:goto L594798;
case 0x59479e:c.instructions+=1;goto B59479e;
case 0x5947a4:goto L5947a4;
case 0x5947a5:c.instructions+=1;goto B5947a5;
case 0x5947b0:goto L5947b0;
case 0x5947b4:c.instructions+=2;goto B5947b4;
case 0x5947bb:c.instructions+=1;goto B5947bb;
case 0x5947c0:goto L5947c0;
case 0x5947c1:c.instructions+=8;goto B5947c1;
case 0x5947c4:c.instructions+=7;goto B5947c4;
case 0x5947ca:c.instructions+=6;goto B5947ca;
case 0x5947cd:c.instructions+=5;goto B5947cd;
case 0x5947d5:c.instructions+=4;goto B5947d5;
case 0x5947db:c.instructions+=3;goto B5947db;
case 0x5947dd:c.instructions+=2;goto B5947dd;
case 0x5947e0:c.instructions+=1;goto B5947e0;
case 0x5947e2:goto L5947e2;
case 0x5947e5:c.instructions+=5;goto B5947e5;
case 0x5947e7:c.instructions+=4;goto B5947e7;
case 0x5947ed:c.instructions+=3;goto B5947ed;
case 0x5947f0:c.instructions+=2;goto B5947f0;
case 0x5947f6:c.instructions+=1;goto B5947f6;
case 0x5947fe:goto L5947fe;
case 0x594801:c.instructions+=4;goto B594801;
case 0x594807:c.instructions+=3;goto B594807;
case 0x594809:c.instructions+=2;goto B594809;
case 0x59480c:c.instructions+=1;goto B59480c;
case 0x59480e:goto L59480e;
case 0x594812:c.instructions+=7;goto B594812;
case 0x594815:c.instructions+=6;goto B594815;
case 0x59481b:c.instructions+=5;goto B59481b;
case 0x59481e:c.instructions+=4;goto B59481e;
case 0x594822:c.instructions+=3;goto B594822;
case 0x594825:c.instructions+=2;goto B594825;
case 0x59482b:c.instructions+=1;goto B59482b;
case 0x59482d:goto L59482d;
case 0x594831:c.instructions+=2;goto B594831;
case 0x594832:c.instructions+=1;goto B594832;
case 0x594840:goto L594840;
case 0x594846:c.instructions+=8;goto B594846;
case 0x594847:c.instructions+=7;goto B594847;
case 0x59484a:c.instructions+=6;goto B59484a;
case 0x59484d:c.instructions+=5;goto B59484d;
case 0x59484e:c.instructions+=4;goto B59484e;
case 0x594854:c.instructions+=3;goto B594854;
case 0x594856:c.instructions+=2;goto B594856;
case 0x594859:c.instructions+=1;goto B594859;
case 0x59485b:goto L59485b;
case 0x59485e:c.instructions+=15;goto B59485e;
case 0x594860:c.instructions+=14;goto B594860;
case 0x594863:c.instructions+=13;goto B594863;
case 0x594866:c.instructions+=12;goto B594866;
case 0x594869:c.instructions+=11;goto B594869;
case 0x59486f:c.instructions+=10;goto B59486f;
case 0x594875:c.instructions+=9;goto B594875;
case 0x594878:c.instructions+=8;goto B594878;
case 0x59487b:c.instructions+=7;goto B59487b;
case 0x59487e:c.instructions+=6;goto B59487e;
case 0x594884:c.instructions+=5;goto B594884;
case 0x59488a:c.instructions+=4;goto B59488a;
case 0x59488d:c.instructions+=3;goto B59488d;
case 0x59488f:c.instructions+=2;goto B59488f;
case 0x594895:c.instructions+=1;goto B594895;
case 0x594898:goto L594898;
case 0x59489b:c.instructions+=4;goto B59489b;
case 0x5948a1:c.instructions+=3;goto B5948a1;
case 0x5948a3:c.instructions+=2;goto B5948a3;
case 0x5948a6:c.instructions+=1;goto B5948a6;
case 0x5948a8:goto L5948a8;
case 0x5948ab:c.instructions+=20;goto B5948ab;
case 0x5948ae:c.instructions+=19;goto B5948ae;
case 0x5948b1:c.instructions+=18;goto B5948b1;
case 0x5948b4:c.instructions+=17;goto B5948b4;
case 0x5948ba:c.instructions+=16;goto B5948ba;
case 0x5948c0:c.instructions+=15;goto B5948c0;
case 0x5948c3:c.instructions+=14;goto B5948c3;
case 0x5948c6:c.instructions+=13;goto B5948c6;
case 0x5948c9:c.instructions+=12;goto B5948c9;
case 0x5948cf:c.instructions+=11;goto B5948cf;
case 0x5948d5:c.instructions+=10;goto B5948d5;
case 0x5948d8:c.instructions+=9;goto B5948d8;
case 0x5948da:c.instructions+=8;goto B5948da;
case 0x5948e0:c.instructions+=7;goto B5948e0;
case 0x5948e3:c.instructions+=6;goto B5948e3;
case 0x5948e5:c.instructions+=5;goto B5948e5;
case 0x5948e8:c.instructions+=4;goto B5948e8;
case 0x5948ee:c.instructions+=3;goto B5948ee;
case 0x5948f0:c.instructions+=2;goto B5948f0;
case 0x5948f3:c.instructions+=1;goto B5948f3;
case 0x5948f5:goto L5948f5;
case 0x5948fb:goto L5948fb;
case 0x5948fe:c.instructions+=4;goto B5948fe;
case 0x594902:c.instructions+=3;goto B594902;
case 0x594903:c.instructions+=2;goto B594903;
case 0x594904:c.instructions+=1;goto B594904;
case 0x594910:goto L594910;
case 0x594914:c.instructions+=6;goto B594914;
case 0x594919:c.instructions+=5;goto B594919;
case 0x59491f:c.instructions+=4;goto B59491f;
case 0x594922:c.instructions+=3;goto B594922;
case 0x594924:c.instructions+=2;goto B594924;
case 0x594927:c.instructions+=1;goto B594927;
case 0x594929:goto L594929;
case 0x59492b:c.instructions+=4;goto B59492b;
case 0x59492e:c.instructions+=3;goto B59492e;
case 0x594934:c.instructions+=2;goto B594934;
case 0x594937:c.instructions+=1;goto B594937;
case 0x59493a:goto L59493a;
case 0x594940:c.instructions+=3;goto B594940;
case 0x594942:c.instructions+=2;goto B594942;
case 0x594945:c.instructions+=1;goto B594945;
case 0x594947:goto L594947;
case 0x594949:c.instructions+=4;goto B594949;
case 0x594950:c.instructions+=3;goto B594950;
case 0x594956:c.instructions+=2;goto B594956;
case 0x594959:c.instructions+=1;goto B594959;
case 0x59495c:goto L59495c;
case 0x594962:c.instructions+=3;goto B594962;
case 0x594964:c.instructions+=2;goto B594964;
case 0x594967:c.instructions+=1;goto B594967;
case 0x594969:goto L594969;
case 0x59496c:c.instructions+=2;goto B59496c;
case 0x59496f:c.instructions+=1;goto B59496f;
case 0x594972:goto L594972;
case 0x594978:c.instructions+=3;goto B594978;
case 0x59497a:c.instructions+=2;goto B59497a;
case 0x59497d:c.instructions+=1;goto B59497d;
case 0x59497f:goto L59497f;
case 0x594986:c.instructions+=2;goto B594986;
case 0x594989:c.instructions+=1;goto B594989;
case 0x59498c:goto L59498c;
case 0x59498f:c.instructions+=3;goto B59498f;
case 0x594991:c.instructions+=2;goto B594991;
case 0x594994:c.instructions+=1;goto B594994;
case 0x594996:goto L594996;
case 0x59499d:c.instructions+=2;goto B59499d;
case 0x5949a0:c.instructions+=1;goto B5949a0;
case 0x5949a3:goto L5949a3;
case 0x5949a6:c.instructions+=2;goto B5949a6;
case 0x5949ad:c.instructions+=1;goto B5949ad;
case 0x5949b0:goto L5949b0;
case 0x5949b3:c.instructions+=3;goto B5949b3;
case 0x5949b8:c.instructions+=2;goto B5949b8;
case 0x5949ba:c.instructions+=1;goto B5949ba;
case 0x5949bc:goto L5949bc;
case 0x5949bf:c.instructions+=8;goto B5949bf;
case 0x5949c2:c.instructions+=7;goto B5949c2;
case 0x5949c8:c.instructions+=6;goto B5949c8;
case 0x5949cb:c.instructions+=5;goto B5949cb;
case 0x5949d1:c.instructions+=4;goto B5949d1;
case 0x5949d4:c.instructions+=3;goto B5949d4;
case 0x5949d6:c.instructions+=2;goto B5949d6;
case 0x5949d9:c.instructions+=1;goto B5949d9;
case 0x5949db:goto L5949db;
case 0x5949e1:c.instructions+=2;goto B5949e1;
case 0x5949e3:c.instructions+=1;goto B5949e3;
case 0x5949e5:goto L5949e5;
case 0x5949eb:c.instructions+=3;goto B5949eb;
case 0x5949ed:c.instructions+=2;goto B5949ed;
case 0x5949f0:c.instructions+=1;goto B5949f0;
case 0x5949f2:goto L5949f2;
case 0x5949f5:c.instructions+=1;goto B5949f5;
case 0x5949f7:goto L5949f7;
case 0x5949fd:goto L5949fd;
case 0x594a00:c.instructions+=5;goto B594a00;
case 0x594a07:c.instructions+=4;goto B594a07;
case 0x594a0b:c.instructions+=3;goto B594a0b;
case 0x594a0d:c.instructions+=2;goto B594a0d;
case 0x594a0f:c.instructions+=1;goto B594a0f;
case 0x594a12:goto L594a12;
case 0x594a16:c.instructions+=3;goto B594a16;
case 0x594a1c:c.instructions+=2;goto B594a1c;
case 0x594a1e:c.instructions+=1;goto B594a1e;
case 0x594a30:goto L594a30;
case 0x594a31:c.instructions+=2;goto B594a31;
case 0x594a35:c.instructions+=1;goto B594a35;
case 0x594a3b:goto L594a3b;
case 0x594a3f:c.instructions+=10;goto B594a3f;
case 0x594a42:c.instructions+=9;goto B594a42;
case 0x594a45:c.instructions+=8;goto B594a45;
case 0x594a48:c.instructions+=7;goto B594a48;
case 0x594a4e:c.instructions+=6;goto B594a4e;
case 0x594a54:c.instructions+=5;goto B594a54;
case 0x594a5a:c.instructions+=4;goto B594a5a;
case 0x594a5c:c.instructions+=3;goto B594a5c;
case 0x594a5e:c.instructions+=2;goto B594a5e;
case 0x594a61:c.instructions+=1;goto B594a61;
case 0x594a63:goto L594a63;
case 0x594a65:c.instructions+=1;goto B594a65;
case 0x594a6b:goto L594a6b;
case 0x594a6f:c.instructions+=20;goto B594a6f;
case 0x594a72:c.instructions+=19;goto B594a72;
case 0x594a73:c.instructions+=18;goto B594a73;
case 0x594a76:c.instructions+=17;goto B594a76;
case 0x594a79:c.instructions+=16;goto B594a79;
case 0x594a7c:c.instructions+=15;goto B594a7c;
case 0x594a7f:c.instructions+=14;goto B594a7f;
case 0x594a83:c.instructions+=13;goto B594a83;
case 0x594a87:c.instructions+=12;goto B594a87;
case 0x594a8a:c.instructions+=11;goto B594a8a;
case 0x594a90:c.instructions+=10;goto B594a90;
case 0x594a96:c.instructions+=9;goto B594a96;
case 0x594a99:c.instructions+=8;goto B594a99;
case 0x594a9b:c.instructions+=7;goto B594a9b;
case 0x594a9f:c.instructions+=6;goto B594a9f;
case 0x594aa2:c.instructions+=5;goto B594aa2;
case 0x594aa8:c.instructions+=4;goto B594aa8;
case 0x594aaa:c.instructions+=3;goto B594aaa;
case 0x594ab0:c.instructions+=2;goto B594ab0;
case 0x594ab2:c.instructions+=1;goto B594ab2;
case 0x594ab4:goto L594ab4;
case 0x594ab7:c.instructions+=3;goto B594ab7;
case 0x594abd:c.instructions+=2;goto B594abd;
case 0x594abf:c.instructions+=1;goto B594abf;
case 0x594ac1:goto L594ac1;
case 0x594ac6:c.instructions+=2;goto B594ac6;
case 0x594aca:c.instructions+=1;goto B594aca;
case 0x594acc:goto L594acc;
case 0x594ad4:goto L594ad4;
case 0x594ad7:c.instructions+=3;goto B594ad7;
case 0x594add:c.instructions+=2;goto B594add;
case 0x594ae0:c.instructions+=1;goto B594ae0;
case 0x594ae2:goto L594ae2;
case 0x594ae8:c.instructions+=2;goto B594ae8;
case 0x594aec:c.instructions+=1;goto B594aec;
case 0x594aee:goto L594aee;
case 0x594af1:c.instructions+=1;goto B594af1;
case 0x594af3:goto L594af3;
case 0x594af7:c.instructions+=1;goto B594af7;
case 0x594af9:goto L594af9;
case 0x594afc:c.instructions+=9;goto B594afc;
case 0x594afd:c.instructions+=8;goto B594afd;
case 0x594b00:c.instructions+=7;goto B594b00;
case 0x594b03:c.instructions+=6;goto B594b03;
case 0x594b05:c.instructions+=5;goto B594b05;
case 0x594b07:c.instructions+=4;goto B594b07;
case 0x594b0d:c.instructions+=3;goto B594b0d;
case 0x594b0f:c.instructions+=2;goto B594b0f;
case 0x594b12:c.instructions+=1;goto B594b12;
case 0x594b14:goto L594b14;
case 0x594b17:c.instructions+=4;goto B594b17;
case 0x594b1b:c.instructions+=3;goto B594b1b;
case 0x594b1d:c.instructions+=2;goto B594b1d;
case 0x594b20:c.instructions+=1;goto B594b20;
case 0x594b22:goto L594b22;
case 0x594b24:c.instructions+=4;goto B594b24;
case 0x594b2a:c.instructions+=3;goto B594b2a;
case 0x594b30:c.instructions+=2;goto B594b30;
case 0x594b36:c.instructions+=1;goto B594b36;
case 0x594b38:goto L594b38;
case 0x594b3e:c.instructions+=6;goto B594b3e;
case 0x594b42:c.instructions+=5;goto B594b42;
case 0x594b44:c.instructions+=4;goto B594b44;
case 0x594b46:c.instructions+=3;goto B594b46;
case 0x594b48:c.instructions+=2;goto B594b48;
case 0x594b4b:c.instructions+=1;goto B594b4b;
case 0x594b4d:goto L594b4d;
case 0x594b4f:c.instructions+=3;goto B594b4f;
case 0x594b55:c.instructions+=2;goto B594b55;
case 0x594b5b:c.instructions+=1;goto B594b5b;
case 0x594b5d:goto L594b5d;
case 0x594b5f:c.instructions+=1;goto B594b5f;
case 0x594b65:goto L594b65;
case 0x594b66:goto L594b66;
case 0x594b6c:c.instructions+=2;goto B594b6c;
case 0x594b6e:c.instructions+=1;goto B594b6e;
case 0x594b70:goto L594b70;
case 0x594b76:c.instructions+=4;goto B594b76;
case 0x594b78:c.instructions+=3;goto B594b78;
case 0x594b7c:c.instructions+=2;goto B594b7c;
case 0x594b82:c.instructions+=1;goto B594b82;
case 0x594b88:goto L594b88;
case 0x594b8b:c.instructions+=3;goto B594b8b;
case 0x594b91:c.instructions+=2;goto B594b91;
case 0x594b93:c.instructions+=1;goto B594b93;
case 0x594b95:goto L594b95;
case 0x594b99:c.instructions+=3;goto B594b99;
case 0x594b9f:c.instructions+=2;goto B594b9f;
case 0x594ba5:c.instructions+=1;goto B594ba5;
case 0x594ba7:goto L594ba7;
case 0x594ba9:goto L594ba9;
case 0x594bac:c.instructions+=3;goto B594bac;
case 0x594bb2:c.instructions+=2;goto B594bb2;
case 0x594bb4:c.instructions+=1;goto B594bb4;
case 0x594bb6:goto L594bb6;
case 0x594bb9:c.instructions+=3;goto B594bb9;
case 0x594bbf:c.instructions+=2;goto B594bbf;
case 0x594bc1:c.instructions+=1;goto B594bc1;
case 0x594bc3:goto L594bc3;
case 0x594bc8:c.instructions+=2;goto B594bc8;
case 0x594bcc:c.instructions+=1;goto B594bcc;
case 0x594bce:goto L594bce;
case 0x594bd6:goto L594bd6;
case 0x594bd9:c.instructions+=4;goto B594bd9;
case 0x594bdf:c.instructions+=3;goto B594bdf;
case 0x594be2:c.instructions+=2;goto B594be2;
case 0x594be3:c.instructions+=1;goto B594be3;
case 0x594be5:goto L594be5;
case 0x594beb:c.instructions+=2;goto B594beb;
case 0x594bef:c.instructions+=1;goto B594bef;
case 0x594bf1:goto L594bf1;
case 0x594bf4:c.instructions+=1;goto B594bf4;
case 0x594bf6:goto L594bf6;
case 0x594bfa:c.instructions+=1;goto B594bfa;
case 0x594bfc:goto L594bfc;
case 0x594bff:c.instructions+=8;goto B594bff;
case 0x594c02:c.instructions+=7;goto B594c02;
case 0x594c05:c.instructions+=6;goto B594c05;
case 0x594c07:c.instructions+=5;goto B594c07;
case 0x594c09:c.instructions+=4;goto B594c09;
case 0x594c0f:c.instructions+=3;goto B594c0f;
case 0x594c11:c.instructions+=2;goto B594c11;
case 0x594c14:c.instructions+=1;goto B594c14;
case 0x594c16:goto L594c16;
case 0x594c19:c.instructions+=4;goto B594c19;
case 0x594c1d:c.instructions+=3;goto B594c1d;
case 0x594c1f:c.instructions+=2;goto B594c1f;
case 0x594c22:c.instructions+=1;goto B594c22;
case 0x594c24:goto L594c24;
case 0x594c26:c.instructions+=4;goto B594c26;
case 0x594c2c:c.instructions+=3;goto B594c2c;
case 0x594c32:c.instructions+=2;goto B594c32;
case 0x594c38:c.instructions+=1;goto B594c38;
case 0x594c3a:goto L594c3a;
case 0x594c40:c.instructions+=6;goto B594c40;
case 0x594c44:c.instructions+=5;goto B594c44;
case 0x594c46:c.instructions+=4;goto B594c46;
case 0x594c48:c.instructions+=3;goto B594c48;
case 0x594c4a:c.instructions+=2;goto B594c4a;
case 0x594c4d:c.instructions+=1;goto B594c4d;
case 0x594c4f:goto L594c4f;
case 0x594c51:c.instructions+=3;goto B594c51;
case 0x594c57:c.instructions+=2;goto B594c57;
case 0x594c5d:c.instructions+=1;goto B594c5d;
case 0x594c5f:goto L594c5f;
case 0x594c61:c.instructions+=1;goto B594c61;
case 0x594c67:goto L594c67;
case 0x594c6d:c.instructions+=2;goto B594c6d;
case 0x594c6f:c.instructions+=1;goto B594c6f;
case 0x594c71:goto L594c71;
case 0x594c73:c.instructions+=3;goto B594c73;
case 0x594c75:c.instructions+=2;goto B594c75;
case 0x594c7b:c.instructions+=1;goto B594c7b;
case 0x594c81:goto L594c81;
case 0x594c84:c.instructions+=3;goto B594c84;
case 0x594c8a:c.instructions+=2;goto B594c8a;
case 0x594c8c:c.instructions+=1;goto B594c8c;
case 0x594c8e:goto L594c8e;
case 0x594c94:c.instructions+=4;goto B594c94;
case 0x594c96:c.instructions+=3;goto B594c96;
case 0x594c98:c.instructions+=2;goto B594c98;
case 0x594c9e:c.instructions+=1;goto B594c9e;
case 0x594ca4:goto L594ca4;
case 0x594ca6:c.instructions+=1;goto B594ca6;
case 0x594ca8:goto L594ca8;
case 0x594ca9:c.instructions+=1;goto B594ca9;
case 0x594cb0:goto L594cb0;
case 0x594cb1:c.instructions+=6;goto B594cb1;
case 0x594cb2:c.instructions+=5;goto B594cb2;
case 0x594cb4:c.instructions+=4;goto B594cb4;
case 0x594cb7:c.instructions+=3;goto B594cb7;
case 0x594cba:c.instructions+=2;goto B594cba;
case 0x594cc1:c.instructions+=1;goto B594cc1;
case 0x594cc3:goto L594cc3;
case 0x594cc6:c.instructions+=1;goto B594cc6;
case 0x594cc8:goto L594cc8;
case 0x594cc9:c.instructions+=1;goto B594cc9;
case 0x594ccf:goto L594ccf;
case 0x594cd2:c.instructions+=1;goto B594cd2;
case 0x594cd7:goto L594cd7;
case 0x594cd8:c.instructions+=3;goto B594cd8;
case 0x594cda:c.instructions+=2;goto B594cda;
case 0x594cdd:c.instructions+=1;goto B594cdd;
case 0x594ce2:goto L594ce2;
case 0x594ce3:c.instructions+=2;goto B594ce3;
case 0x594ce4:c.instructions+=1;goto B594ce4;
case 0x594ce5:goto L594ce5;
case 0x594ce8:c.instructions+=6;goto B594ce8;
case 0x594ceb:c.instructions+=5;goto B594ceb;
case 0x594cee:c.instructions+=4;goto B594cee;
case 0x594cf4:c.instructions+=3;goto B594cf4;
case 0x594cf6:c.instructions+=2;goto B594cf6;
case 0x594cf9:c.instructions+=1;goto B594cf9;
case 0x594cfb:goto L594cfb;
case 0x594cfd:c.instructions+=2;goto B594cfd;
case 0x594d03:c.instructions+=1;goto B594d03;
case 0x594d05:goto L594d05;
case 0x594d0b:c.instructions+=6;goto B594d0b;
case 0x594d0d:c.instructions+=5;goto B594d0d;
case 0x594d11:c.instructions+=4;goto B594d11;
case 0x594d15:c.instructions+=3;goto B594d15;
case 0x594d17:c.instructions+=2;goto B594d17;
case 0x594d1a:c.instructions+=1;goto B594d1a;
case 0x594d1c:goto L594d1c;
case 0x594d1e:c.instructions+=1;goto B594d1e;
case 0x594d22:goto L594d22;
case 0x594d25:c.instructions+=9;goto B594d25;
case 0x594d28:c.instructions+=8;goto B594d28;
case 0x594d2b:c.instructions+=7;goto B594d2b;
case 0x594d2e:c.instructions+=6;goto B594d2e;
case 0x594d34:c.instructions+=5;goto B594d34;
case 0x594d37:c.instructions+=4;goto B594d37;
case 0x594d3d:c.instructions+=3;goto B594d3d;
case 0x594d3f:c.instructions+=2;goto B594d3f;
case 0x594d42:c.instructions+=1;goto B594d42;
case 0x594d44:goto L594d44;
case 0x594d46:c.instructions+=5;goto B594d46;
case 0x594d49:c.instructions+=4;goto B594d49;
case 0x594d4f:c.instructions+=3;goto B594d4f;
case 0x594d51:c.instructions+=2;goto B594d51;
case 0x594d54:c.instructions+=1;goto B594d54;
case 0x594d56:goto L594d56;
case 0x594d58:c.instructions+=5;goto B594d58;
case 0x594d5a:c.instructions+=4;goto B594d5a;
case 0x594d60:c.instructions+=3;goto B594d60;
case 0x594d62:c.instructions+=2;goto B594d62;
case 0x594d65:c.instructions+=1;goto B594d65;
case 0x594d67:goto L594d67;
case 0x594d6a:c.instructions+=5;goto B594d6a;
case 0x594d6c:c.instructions+=4;goto B594d6c;
case 0x594d72:c.instructions+=3;goto B594d72;
case 0x594d74:c.instructions+=2;goto B594d74;
case 0x594d77:c.instructions+=1;goto B594d77;
case 0x594d79:goto L594d79;
case 0x594d7f:c.instructions+=1;goto B594d7f;
case 0x594d81:goto L594d81;
case 0x594d84:c.instructions+=7;goto B594d84;
case 0x594d85:c.instructions+=6;goto B594d85;
case 0x594d87:c.instructions+=5;goto B594d87;
case 0x594d8a:c.instructions+=4;goto B594d8a;
case 0x594d8c:c.instructions+=3;goto B594d8c;
case 0x594d8f:c.instructions+=2;goto B594d8f;
case 0x594d91:c.instructions+=1;goto B594d91;
case 0x594d96:goto L594d96;
case 0x594d97:c.instructions+=2;goto B594d97;
case 0x594d98:c.instructions+=1;goto B594d98;
case 0x594da0:goto L594da0;
case 0x594da1:c.instructions+=4;goto B594da1;
case 0x594da2:c.instructions+=3;goto B594da2;
case 0x594da4:c.instructions+=2;goto B594da4;
case 0x594da8:c.instructions+=1;goto B594da8;
case 0x594dae:goto L594dae;
case 0x594daf:c.instructions+=3;goto B594daf;
case 0x594db2:c.instructions+=2;goto B594db2;
case 0x594db4:c.instructions+=1;goto B594db4;
case 0x594db9:goto L594db9;
case 0x594dbc:c.instructions+=7;goto B594dbc;
case 0x594dbf:c.instructions+=6;goto B594dbf;
case 0x594dc2:c.instructions+=5;goto B594dc2;
case 0x594dc5:c.instructions+=4;goto B594dc5;
case 0x594dc8:c.instructions+=3;goto B594dc8;
case 0x594dcb:c.instructions+=2;goto B594dcb;
case 0x594dcc:c.instructions+=1;goto B594dcc;
case 0x594dce:goto L594dce;
case 0x594dd0:c.instructions+=1;goto B594dd0;
case 0x594dd2:goto L594dd2;
case 0x594dd8:goto L594dd8;
case 0x594dda:c.instructions+=5;goto B594dda;
case 0x594ddc:c.instructions+=4;goto B594ddc;
case 0x594dde:c.instructions+=3;goto B594dde;
case 0x594de2:c.instructions+=2;goto B594de2;
case 0x594de4:c.instructions+=1;goto B594de4;
case 0x594de9:goto L594de9;
case 0x594ded:c.instructions+=10;goto B594ded;
case 0x594df0:c.instructions+=9;goto B594df0;
case 0x594df3:c.instructions+=8;goto B594df3;
case 0x594df9:c.instructions+=7;goto B594df9;
case 0x594dfc:c.instructions+=6;goto B594dfc;
case 0x594dff:c.instructions+=5;goto B594dff;
case 0x594e02:c.instructions+=4;goto B594e02;
case 0x594e08:c.instructions+=3;goto B594e08;
case 0x594e0a:c.instructions+=2;goto B594e0a;
case 0x594e0d:c.instructions+=1;goto B594e0d;
case 0x594e0f:goto L594e0f;
case 0x594e12:c.instructions+=11;goto B594e12;
case 0x594e16:c.instructions+=10;goto B594e16;
case 0x594e19:c.instructions+=9;goto B594e19;
case 0x594e1c:c.instructions+=8;goto B594e1c;
case 0x594e22:c.instructions+=7;goto B594e22;
case 0x594e28:c.instructions+=6;goto B594e28;
case 0x594e2b:c.instructions+=5;goto B594e2b;
case 0x594e2d:c.instructions+=4;goto B594e2d;
case 0x594e2f:c.instructions+=3;goto B594e2f;
case 0x594e35:c.instructions+=2;goto B594e35;
case 0x594e37:c.instructions+=1;goto B594e37;
case 0x594e39:goto L594e39;
case 0x594e3c:c.instructions+=4;goto B594e3c;
case 0x594e42:c.instructions+=3;goto B594e42;
case 0x594e44:c.instructions+=2;goto B594e44;
case 0x594e47:c.instructions+=1;goto B594e47;
case 0x594e49:goto L594e49;
case 0x594e4c:c.instructions+=10;goto B594e4c;
case 0x594e50:c.instructions+=9;goto B594e50;
case 0x594e53:c.instructions+=8;goto B594e53;
case 0x594e56:c.instructions+=7;goto B594e56;
case 0x594e5c:c.instructions+=6;goto B594e5c;
case 0x594e5f:c.instructions+=5;goto B594e5f;
case 0x594e61:c.instructions+=4;goto B594e61;
case 0x594e63:c.instructions+=3;goto B594e63;
case 0x594e69:c.instructions+=2;goto B594e69;
case 0x594e6b:c.instructions+=1;goto B594e6b;
case 0x594e6d:goto L594e6d;
case 0x594e6f:c.instructions+=6;goto B594e6f;
case 0x594e70:c.instructions+=5;goto B594e70;
case 0x594e72:c.instructions+=4;goto B594e72;
case 0x594e74:c.instructions+=3;goto B594e74;
case 0x594e77:c.instructions+=2;goto B594e77;
case 0x594e79:c.instructions+=1;goto B594e79;
case 0x594e7e:goto L594e7e;
case 0x594e7f:c.instructions+=2;goto B594e7f;
case 0x594e80:c.instructions+=1;goto B594e80;
case 0x594e90:goto L594e90;
case 0x594e93:c.instructions+=5;goto B594e93;
case 0x594e96:c.instructions+=4;goto B594e96;
case 0x594e9c:c.instructions+=3;goto B594e9c;
case 0x594e9e:c.instructions+=2;goto B594e9e;
case 0x594ea1:c.instructions+=1;goto B594ea1;
case 0x594ea3:goto L594ea3;
case 0x594ea6:c.instructions+=7;goto B594ea6;
case 0x594ea8:c.instructions+=6;goto B594ea8;
case 0x594eae:c.instructions+=5;goto B594eae;
case 0x594eb4:c.instructions+=4;goto B594eb4;
case 0x594eb7:c.instructions+=3;goto B594eb7;
case 0x594eb9:c.instructions+=2;goto B594eb9;
case 0x594ebc:c.instructions+=1;goto B594ebc;
case 0x594ebe:goto L594ebe;
case 0x594ec3:c.instructions+=1;goto B594ec3;
case 0x594ec4:goto L594ec4;
case 0x594ec6:c.instructions+=1;goto B594ec6;
case 0x594ed0:goto L594ed0;
case 0x594ed3:c.instructions+=7;goto B594ed3;
case 0x594ed6:c.instructions+=6;goto B594ed6;
case 0x594ed9:c.instructions+=5;goto B594ed9;
case 0x594edb:c.instructions+=4;goto B594edb;
case 0x594ee1:c.instructions+=3;goto B594ee1;
case 0x594ee3:c.instructions+=2;goto B594ee3;
case 0x594ee6:c.instructions+=1;goto B594ee6;
case 0x594ee8:goto L594ee8;
case 0x594eed:c.instructions+=1;goto B594eed;
case 0x594eee:goto L594eee;
case 0x594ef0:c.instructions+=1;goto B594ef0;
case 0x594f00:goto L594f00;
case 0x594f06:c.instructions+=6;goto B594f06;
case 0x594f0a:c.instructions+=5;goto B594f0a;
case 0x594f0d:c.instructions+=4;goto B594f0d;
case 0x594f0f:c.instructions+=3;goto B594f0f;
case 0x594f16:c.instructions+=2;goto B594f16;
case 0x594f1c:c.instructions+=1;goto B594f1c;
case 0x594f20:goto L594f20;
case 0x594f24:c.instructions+=14;goto B594f24;
case 0x594f2a:c.instructions+=13;goto B594f2a;
case 0x594f31:c.instructions+=12;goto B594f31;
case 0x594f37:c.instructions+=11;goto B594f37;
case 0x594f3b:c.instructions+=10;goto B594f3b;
case 0x594f3e:c.instructions+=9;goto B594f3e;
case 0x594f40:c.instructions+=8;goto B594f40;
case 0x594f44:c.instructions+=7;goto B594f44;
case 0x594f4b:c.instructions+=6;goto B594f4b;
case 0x594f51:c.instructions+=5;goto B594f51;
case 0x594f55:c.instructions+=4;goto B594f55;
case 0x594f5b:c.instructions+=3;goto B594f5b;
case 0x594f5d:c.instructions+=2;goto B594f5d;
case 0x594f60:c.instructions+=1;goto B594f60;
case 0x594f66:goto L594f66;
case 0x594f68:c.instructions+=5;goto B594f68;
case 0x594f6c:c.instructions+=4;goto B594f6c;
case 0x594f72:c.instructions+=3;goto B594f72;
case 0x594f74:c.instructions+=2;goto B594f74;
case 0x594f77:c.instructions+=1;goto B594f77;
case 0x594f79:goto L594f79;
case 0x594f7f:c.instructions+=9;goto B594f7f;
case 0x594f83:c.instructions+=8;goto B594f83;
case 0x594f87:c.instructions+=7;goto B594f87;
case 0x594f8d:c.instructions+=6;goto B594f8d;
case 0x594f91:c.instructions+=5;goto B594f91;
case 0x594f97:c.instructions+=4;goto B594f97;
case 0x594f9b:c.instructions+=3;goto B594f9b;
case 0x594f9d:c.instructions+=2;goto B594f9d;
case 0x594fa0:c.instructions+=1;goto B594fa0;
case 0x594fa2:goto L594fa2;
case 0x594fa8:c.instructions+=1;goto B594fa8;
case 0x594fab:goto L594fab;
case 0x594faf:c.instructions+=5;goto B594faf;
case 0x594fb3:c.instructions+=4;goto B594fb3;
case 0x594fb9:c.instructions+=3;goto B594fb9;
case 0x594fbb:c.instructions+=2;goto B594fbb;
case 0x594fbe:c.instructions+=1;goto B594fbe;
case 0x594fc0:goto L594fc0;
case 0x594fc4:c.instructions+=2;goto B594fc4;
case 0x594fc6:c.instructions+=1;goto B594fc6;
case 0x594fc8:goto L594fc8;
case 0x594fca:c.instructions+=5;goto B594fca;
case 0x594fce:c.instructions+=4;goto B594fce;
case 0x594fd4:c.instructions+=3;goto B594fd4;
case 0x594fd6:c.instructions+=2;goto B594fd6;
case 0x594fd9:c.instructions+=1;goto B594fd9;
case 0x594fdb:goto L594fdb;
case 0x594fe1:c.instructions+=1;goto B594fe1;
case 0x594fe4:goto L594fe4;
case 0x594fea:c.instructions+=1;goto B594fea;
case 0x594fed:goto L594fed;
case 0x594ff1:c.instructions+=4;goto B594ff1;
case 0x594ff3:c.instructions+=3;goto B594ff3;
case 0x594ff9:c.instructions+=2;goto B594ff9;
case 0x594fff:c.instructions+=1;goto B594fff;
default:missing_instruction(c.pc);}
B594000:L594000:{c.instructions+=41;NFSU2_TR(0x594000);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594001:{NFSU2_TR(0x594001);
__builtin_memmove((R+20),(R+16),4);
}
B594003:{NFSU2_TR(0x594003);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B594006:{NFSU2_TR(0x594006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B594009:{NFSU2_TR(0x594009);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59400a:{NFSU2_TR(0x59400a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59400b:{NFSU2_TR(0x59400b);
__builtin_memmove((R+24),(R+4),4);
}
B59400d:{NFSU2_TR(0x59400d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594010:{NFSU2_TR(0x594010);
{u32 ea_=u32(r4(R+0)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594016:{NFSU2_TR(0x594016);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59401c:{NFSU2_TR(0x59401c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B594022:{NFSU2_TR(0x594022);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594026:{NFSU2_TR(0x594026);
{u32 ea_=u32(r4(R+0)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59402c:{NFSU2_TR(0x59402c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B594030:{NFSU2_TR(0x594030);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594034:{NFSU2_TR(0x594034);
{u32 ea_=u32(r4(R+0)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59403a:{NFSU2_TR(0x59403a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59403e:{NFSU2_TR(0x59403e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594042:{NFSU2_TR(0x594042);
{u32 ea_=u32(r4(R+0)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594048:{NFSU2_TR(0x594048);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59404b:{NFSU2_TR(0x59404b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59404f:{NFSU2_TR(0x59404f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594053:{NFSU2_TR(0x594053);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594054:{NFSU2_TR(0x594054);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B594058:{NFSU2_TR(0x594058);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59405c:{NFSU2_TR(0x59405c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B594060:{NFSU2_TR(0x594060);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594064:{NFSU2_TR(0x594064);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B594068:{NFSU2_TR(0x594068);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59406c:{NFSU2_TR(0x59406c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59406e:{NFSU2_TR(0x59406e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594074:{NFSU2_TR(0x594074);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594076:{NFSU2_TR(0x594076);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59407c:{NFSU2_TR(0x59407c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59407f:{NFSU2_TR(0x59407f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594083:{NFSU2_TR(0x594083);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594089:{NFSU2_TR(0x594089);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59408c:{NFSU2_TR(0x59408c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59408f:{NFSU2_TR(0x59408f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B594092:{NFSU2_TR(0x594092);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594094:{NFSU2_TR(0x594094);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5940b4;}}
}
B594096:L594096:{c.instructions+=9;NFSU2_TR(0x594096);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B594099:{NFSU2_TR(0x594099);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59409d:{NFSU2_TR(0x59409d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59409e:{NFSU2_TR(0x59409e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59409f:{NFSU2_TR(0x59409f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5940a0:{NFSU2_TR(0x5940a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5940a3:{NFSU2_TR(0x5940a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5940a4:{NFSU2_TR(0x5940a4);
__builtin_memmove((R+4),(R+24),4);
}
B5940a6:{NFSU2_TR(0x5940a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5940abull));
TAIL_STATIC(0x593df0u,593);
}
B5940ab:L5940ab:{c.instructions+=6;NFSU2_TR(0x5940ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5940ac:{NFSU2_TR(0x5940ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5940ad:{NFSU2_TR(0x5940ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5940ae:{NFSU2_TR(0x5940ae);
__builtin_memmove((R+16),(R+20),4);
}
B5940b0:{NFSU2_TR(0x5940b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5940b1:{NFSU2_TR(0x5940b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5940b4:L5940b4:{c.instructions+=5;NFSU2_TR(0x5940b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5940b7:{NFSU2_TR(0x5940b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5940ba:{NFSU2_TR(0x5940ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5940bc:{NFSU2_TR(0x5940bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5940bf:{NFSU2_TR(0x5940bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5940f9;}}
}
B5940c1:L5940c1:{c.instructions+=7;NFSU2_TR(0x5940c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5940c5:{NFSU2_TR(0x5940c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5940c6:{NFSU2_TR(0x5940c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5940c7:{NFSU2_TR(0x5940c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5940c8:{NFSU2_TR(0x5940c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5940c9:{NFSU2_TR(0x5940c9);
__builtin_memmove((R+4),(R+24),4);
}
B5940cb:{NFSU2_TR(0x5940cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5940d0ull));
TAIL_STATIC(0x593df0u,593);
}
B5940d0:L5940d0:{c.instructions+=18;NFSU2_TR(0x5940d0);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5940d2:{NFSU2_TR(0x5940d2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5940d4:{NFSU2_TR(0x5940d4);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5940d7:{NFSU2_TR(0x5940d7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5940d9:{NFSU2_TR(0x5940d9);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5940dc:{NFSU2_TR(0x5940dc);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5940de:{NFSU2_TR(0x5940de);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5940e2:{NFSU2_TR(0x5940e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5940e6:{NFSU2_TR(0x5940e6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5940e8:{NFSU2_TR(0x5940e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5940eb:{NFSU2_TR(0x5940eb);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5940ed:{NFSU2_TR(0x5940ed);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5940f0:{NFSU2_TR(0x5940f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5940f1:{NFSU2_TR(0x5940f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5940f2:{NFSU2_TR(0x5940f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5940f3:{NFSU2_TR(0x5940f3);
__builtin_memmove((R+16),(R+20),4);
}
B5940f5:{NFSU2_TR(0x5940f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5940f6:{NFSU2_TR(0x5940f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5940f9:L5940f9:{c.instructions+=26;NFSU2_TR(0x5940f9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5940fd:{NFSU2_TR(0x5940fd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594101:{NFSU2_TR(0x594101);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594105:{NFSU2_TR(0x594105);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594109:{NFSU2_TR(0x594109);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59410d:{NFSU2_TR(0x59410d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594111:{NFSU2_TR(0x594111);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594115:{NFSU2_TR(0x594115);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B594117:{NFSU2_TR(0x594117);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59411b:{NFSU2_TR(0x59411b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59411d:{NFSU2_TR(0x59411d);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B594120:{NFSU2_TR(0x594120);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594124:{NFSU2_TR(0x594124);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B594127:{NFSU2_TR(0x594127);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B594129:{NFSU2_TR(0x594129);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59412b:{NFSU2_TR(0x59412b);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59412d:{NFSU2_TR(0x59412d);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59412f:{NFSU2_TR(0x59412f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B594131:{NFSU2_TR(0x594131);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594135:{NFSU2_TR(0x594135);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594139:{NFSU2_TR(0x594139);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59413b:{NFSU2_TR(0x59413b);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59413d:{NFSU2_TR(0x59413d);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B594143:{NFSU2_TR(0x594143);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594145:{NFSU2_TR(0x594145);
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
B594148:{NFSU2_TR(0x594148);
if(r1(R+514)){{goto L594197;}}
}
B59414a:L59414a:{c.instructions+=6;NFSU2_TR(0x59414a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59414d:{NFSU2_TR(0x59414d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59414f:{NFSU2_TR(0x59414f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B594151:{NFSU2_TR(0x594151);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594153:{NFSU2_TR(0x594153);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594155:{NFSU2_TR(0x594155);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594158ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B594158:L594158:{c.instructions+=4;NFSU2_TR(0x594158);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59415b:{NFSU2_TR(0x59415b);
__builtin_memmove((R+12),(R+0),4);
}
B59415d:{NFSU2_TR(0x59415d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59415f:{NFSU2_TR(0x59415f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594162ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B594162:L594162:{c.instructions+=15;NFSU2_TR(0x594162);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594164:{NFSU2_TR(0x594164);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594166:{NFSU2_TR(0x594166);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594167:{NFSU2_TR(0x594167);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59416a:{NFSU2_TR(0x59416a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59416b:{NFSU2_TR(0x59416b);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59416e:{NFSU2_TR(0x59416e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594171:{NFSU2_TR(0x594171);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594174:{NFSU2_TR(0x594174);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594178:{NFSU2_TR(0x594178);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59417c:{NFSU2_TR(0x59417c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59417e:{NFSU2_TR(0x59417e);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594180:{NFSU2_TR(0x594180);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B594183:{NFSU2_TR(0x594183);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594186:{NFSU2_TR(0x594186);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59418bull));
TAIL_STATIC(0x43cf10u,43c);
}
B59418b:L59418b:{c.instructions+=7;NFSU2_TR(0x59418b);
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
B59418e:{NFSU2_TR(0x59418e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59418f:{NFSU2_TR(0x59418f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B594190:{NFSU2_TR(0x594190);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B594191:{NFSU2_TR(0x594191);
__builtin_memmove((R+16),(R+20),4);
}
B594193:{NFSU2_TR(0x594193);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B594194:{NFSU2_TR(0x594194);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594197:L594197:{c.instructions+=16;NFSU2_TR(0x594197);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B59419d:{NFSU2_TR(0x59419d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5941a1:{NFSU2_TR(0x5941a1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5941a3:{NFSU2_TR(0x5941a3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5941a5:{NFSU2_TR(0x5941a5);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5941a7:{NFSU2_TR(0x5941a7);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5941a9:{NFSU2_TR(0x5941a9);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5941ac:{NFSU2_TR(0x5941ac);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5941ae:{NFSU2_TR(0x5941ae);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5941b1:{NFSU2_TR(0x5941b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5941b2:{NFSU2_TR(0x5941b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5941b3:{NFSU2_TR(0x5941b3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5941b5:{NFSU2_TR(0x5941b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5941b6:{NFSU2_TR(0x5941b6);
__builtin_memmove((R+16),(R+20),4);
}
B5941b8:{NFSU2_TR(0x5941b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5941b9:{NFSU2_TR(0x5941b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5941c0:L5941c0:{c.instructions+=8;NFSU2_TR(0x5941c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5941c1:{NFSU2_TR(0x5941c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5941c5:{NFSU2_TR(0x5941c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5941c7:{NFSU2_TR(0x5941c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5941c8:{NFSU2_TR(0x5941c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5941cc:{NFSU2_TR(0x5941cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5941cd:{NFSU2_TR(0x5941cd);
__builtin_memmove((R+4),(R+24),4);
}
B5941cf:{NFSU2_TR(0x5941cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5941d2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5941d2:L5941d2:{c.instructions+=5;NFSU2_TR(0x5941d2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5941d6:{NFSU2_TR(0x5941d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5941d8:{NFSU2_TR(0x5941d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5941d9:{NFSU2_TR(0x5941d9);
__builtin_memmove((R+4),(R+28),4);
}
B5941db:{NFSU2_TR(0x5941db);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5941deull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5941de:L5941de:{c.instructions+=3;NFSU2_TR(0x5941de);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5941e1:{NFSU2_TR(0x5941e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5941e3:{NFSU2_TR(0x5941e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5941f6;}}
}
B5941e5:L5941e5:{c.instructions+=2;NFSU2_TR(0x5941e5);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x3ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5941e9:{NFSU2_TR(0x5941e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5941f6;}}
}
B5941eb:L5941eb:{c.instructions+=5;NFSU2_TR(0x5941eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5941ec:{NFSU2_TR(0x5941ec);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5941ee:{NFSU2_TR(0x5941ee);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5941f2:{NFSU2_TR(0x5941f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5941f3:{NFSU2_TR(0x5941f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5941f6:L5941f6:{c.instructions+=3;NFSU2_TR(0x5941f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5941f9:{NFSU2_TR(0x5941f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5941fb:{NFSU2_TR(0x5941fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594201;}}
}
B5941fd:L5941fd:{c.instructions+=2;NFSU2_TR(0x5941fd);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x3ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5941ff:{NFSU2_TR(0x5941ff);
if(r1(R+518)){{goto L594214;}}
}
B594201:L594201:{c.instructions+=5;NFSU2_TR(0x594201);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594205:{NFSU2_TR(0x594205);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B594207:{NFSU2_TR(0x594207);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594209:{NFSU2_TR(0x594209);
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
B59420c:{NFSU2_TR(0x59420c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594214;}}
}
B59420e:L59420e:{c.instructions+=2;NFSU2_TR(0x59420e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594210:{NFSU2_TR(0x594210);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594214:L594214:{c.instructions+=3;NFSU2_TR(0x594214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B594215:{NFSU2_TR(0x594215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B594216:{NFSU2_TR(0x594216);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594220:L594220:{c.instructions+=7;NFSU2_TR(0x594220);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594221:{NFSU2_TR(0x594221);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B594225:{NFSU2_TR(0x594225);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B594228:{NFSU2_TR(0x594228);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594229:{NFSU2_TR(0x594229);
__builtin_memmove((R+28),(R+4),4);
}
B59422b:{NFSU2_TR(0x59422b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))|u32(r1(U+4))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B59422e:{NFSU2_TR(0x59422e);
if(r1(R+518)){{goto L59423a;}}
}
B594230:L594230:{c.instructions+=1;NFSU2_TR(0x594230);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59423a:L59423a:{c.instructions+=4;NFSU2_TR(0x59423a);
u8 U[4];
w4(U+0,u32(0x7a1d20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59423f:{NFSU2_TR(0x59423f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594241:{NFSU2_TR(0x594241);
__builtin_memmove((R+4),(R+24),4);
}
B594243:{NFSU2_TR(0x594243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594248ull));
TAIL_STATIC(0x578ce0u,578);
}
B594248:L594248:{c.instructions+=4;NFSU2_TR(0x594248);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59424b:{NFSU2_TR(0x59424b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59424c:{NFSU2_TR(0x59424c);
__builtin_memmove((R+4),(R+24),4);
}
B59424e:{NFSU2_TR(0x59424e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594253ull));
TAIL_STATIC(0x571770u,571);
}
B594253:L594253:{c.instructions+=4;NFSU2_TR(0x594253);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((R+8),(U+0),4);
}
B594256:{NFSU2_TR(0x594256);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594257:{NFSU2_TR(0x594257);
__builtin_memmove((R+4),(R+24),4);
}
B594259:{NFSU2_TR(0x594259);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59425eull));
TAIL_STATIC(0x571770u,571);
}
B59425e:L59425e:{c.instructions+=4;NFSU2_TR(0x59425e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B594261:{NFSU2_TR(0x594261);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594262:{NFSU2_TR(0x594262);
__builtin_memmove((R+4),(R+24),4);
}
B594264:{NFSU2_TR(0x594264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594269ull));
TAIL_STATIC(0x571770u,571);
}
B594269:L594269:{c.instructions+=4;NFSU2_TR(0x594269);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59426f:{NFSU2_TR(0x59426f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594270:{NFSU2_TR(0x594270);
__builtin_memmove((R+4),(R+24),4);
}
B594272:{NFSU2_TR(0x594272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594277ull));
TAIL_STATIC(0x571770u,571);
}
B594277:L594277:{c.instructions+=7;NFSU2_TR(0x594277);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594279:{NFSU2_TR(0x594279);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59427b:{NFSU2_TR(0x59427b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59427d:{NFSU2_TR(0x59427d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((R+8),(U+0),4);
}
B594283:{NFSU2_TR(0x594283);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594284:{NFSU2_TR(0x594284);
__builtin_memmove((R+4),(R+24),4);
}
B594286:{NFSU2_TR(0x594286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59428bull));
TAIL_STATIC(0x571640u,571);
}
B59428b:L59428b:{c.instructions+=7;NFSU2_TR(0x59428b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59428d:{NFSU2_TR(0x59428d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59428f:{NFSU2_TR(0x59428f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594291:{NFSU2_TR(0x594291);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B594297:{NFSU2_TR(0x594297);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594298:{NFSU2_TR(0x594298);
__builtin_memmove((R+4),(R+24),4);
}
B59429a:{NFSU2_TR(0x59429a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59429full));
TAIL_STATIC(0x571640u,571);
}
B59429f:L59429f:{c.instructions+=4;NFSU2_TR(0x59429f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8cull))));
}
B5942a5:{NFSU2_TR(0x5942a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5942a6:{NFSU2_TR(0x5942a6);
__builtin_memmove((R+4),(R+24),4);
}
B5942a8:{NFSU2_TR(0x5942a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5942adull));
TAIL_STATIC(0x571770u,571);
}
B5942ad:L5942ad:{c.instructions+=2;NFSU2_TR(0x5942ad);
__builtin_memmove((R+4),(R+24),4);
}
B5942af:{NFSU2_TR(0x5942af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5942b4ull));
TAIL_STATIC(0x578d90u,578);
}
B5942b4:L5942b4:{c.instructions+=3;NFSU2_TR(0x5942b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5942b5:{NFSU2_TR(0x5942b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5942b6:{NFSU2_TR(0x5942b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5942c0:L5942c0:{c.instructions+=5;NFSU2_TR(0x5942c0);
{u32 ea_=u32(r4(R+4)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5942c6:{NFSU2_TR(0x5942c6);
{u32 ea_=u32(u32(8001808u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5942cc:{NFSU2_TR(0x5942cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5942ce:{NFSU2_TR(0x5942ce);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5942d1:{NFSU2_TR(0x5942d1);
if(r1(R+514)){{goto L5942d9;}}
}
B5942d3:L5942d3:{c.instructions+=2;NFSU2_TR(0x5942d3);
w4(R+0,u32(0x1ull));
}
B5942d8:{NFSU2_TR(0x5942d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5942d9:L5942d9:{c.instructions+=2;NFSU2_TR(0x5942d9);
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
B5942db:{NFSU2_TR(0x5942db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5942e0:L5942e0:{c.instructions+=3;NFSU2_TR(0x5942e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5942e6:{NFSU2_TR(0x5942e6);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5942e8:{NFSU2_TR(0x5942e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5942f4;}}
}
B5942ea:L5942ea:{c.instructions+=3;NFSU2_TR(0x5942ea);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5942f0:{NFSU2_TR(0x5942f0);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5942f3:{NFSU2_TR(0x5942f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5942f4:L5942f4:{c.instructions+=2;NFSU2_TR(0x5942f4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5942fa:{NFSU2_TR(0x5942fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594300:L594300:{c.instructions+=10;NFSU2_TR(0x594300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B594303:{NFSU2_TR(0x594303);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594304:{NFSU2_TR(0x594304);
__builtin_memmove((R+24),(R+4),4);
}
B594306:{NFSU2_TR(0x594306);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594309:{NFSU2_TR(0x594309);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59430c:{NFSU2_TR(0x59430c);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594312:{NFSU2_TR(0x594312);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594316:{NFSU2_TR(0x594316);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59431a:{NFSU2_TR(0x59431a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59431b:{NFSU2_TR(0x59431b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594320ull));
TAIL_STATIC(0x5764d0u,576);
}
B594320:L594320:{c.instructions+=4;NFSU2_TR(0x594320);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594326:{NFSU2_TR(0x594326);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594329:{NFSU2_TR(0x594329);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59432b:{NFSU2_TR(0x59432b);
if(r1(R+518)){{goto L594333;}}
}
B59432d:L59432d:{c.instructions+=1;NFSU2_TR(0x59432d);
{u32 ea_=u32(u32(8372212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594333:L594333:{c.instructions+=3;NFSU2_TR(0x594333);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B594339:{NFSU2_TR(0x594339);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59433b:{NFSU2_TR(0x59433b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594348;}}
}
B59433d:L59433d:{c.instructions+=3;NFSU2_TR(0x59433d);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594343:{NFSU2_TR(0x594343);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594346:{NFSU2_TR(0x594346);
{goto L59434e;}
}
B594348:L594348:{c.instructions+=1;NFSU2_TR(0x594348);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59434e:L59434e:{c.instructions+=7;NFSU2_TR(0x59434e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594354:{NFSU2_TR(0x594354);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B594356:{NFSU2_TR(0x594356);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B594358:{NFSU2_TR(0x594358);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59435a:{NFSU2_TR(0x59435a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59435e:{NFSU2_TR(0x59435e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594360:{NFSU2_TR(0x594360);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5943ba;}}
}
B594362:L594362:{c.instructions+=11;NFSU2_TR(0x594362);
{u32 ea_=u32((r4(R+0)*4u)+u32(8001432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594369:{NFSU2_TR(0x594369);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59436c:{NFSU2_TR(0x59436c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594370:{NFSU2_TR(0x594370);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594371:{NFSU2_TR(0x594371);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594374:{NFSU2_TR(0x594374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B594376:{NFSU2_TR(0x594376);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59437c:{NFSU2_TR(0x59437c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59437d:{NFSU2_TR(0x59437d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B594380:{NFSU2_TR(0x594380);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594383:{NFSU2_TR(0x594383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594388ull));
TAIL_STATIC(0x5764d0u,576);
}
B594388:L594388:{c.instructions+=6;NFSU2_TR(0x594388);
{u32 ea_=u32(r4(R+28)+u32(684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59438e:{NFSU2_TR(0x59438e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B594394:{NFSU2_TR(0x594394);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594396:{NFSU2_TR(0x594396);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59439a:{NFSU2_TR(0x59439a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59439b:{NFSU2_TR(0x59439b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5943a8;}}
}
B59439d:L59439d:{c.instructions+=3;NFSU2_TR(0x59439d);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5943a3:{NFSU2_TR(0x5943a3);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5943a6:{NFSU2_TR(0x5943a6);
{goto L5943ae;}
}
B5943a8:L5943a8:{c.instructions+=1;NFSU2_TR(0x5943a8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5943ae:L5943ae:{c.instructions+=4;NFSU2_TR(0x5943ae);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5943b0:{NFSU2_TR(0x5943b0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5943b4:{NFSU2_TR(0x5943b4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5943b8:{NFSU2_TR(0x5943b8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5943ba:L5943ba:{c.instructions+=5;NFSU2_TR(0x5943ba);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5943c0:{NFSU2_TR(0x5943c0);
{u32 ea_=u32(u32(8372208u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5943c6:{NFSU2_TR(0x5943c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5943c8:{NFSU2_TR(0x5943c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5943cb:{NFSU2_TR(0x5943cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594414;}}
}
B5943cd:L5943cd:{c.instructions+=8;NFSU2_TR(0x5943cd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5943d3:{NFSU2_TR(0x5943d3);
{u32 ea_=u32(u32(8372208u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5943d9:{NFSU2_TR(0x5943d9);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5943df:{NFSU2_TR(0x5943df);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5943e5:{NFSU2_TR(0x5943e5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5943e7:{NFSU2_TR(0x5943e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5943e9:{NFSU2_TR(0x5943e9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5943ec:{NFSU2_TR(0x5943ec);
if(r1(R+514)){{goto L5943f6;}}
}
B5943ee:L5943ee:{c.instructions+=2;NFSU2_TR(0x5943ee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5943f0:{NFSU2_TR(0x5943f0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5943f6:L5943f6:{c.instructions+=7;NFSU2_TR(0x5943f6);
{u32 ea_=u32(u32(8372208u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5943fc:{NFSU2_TR(0x5943fc);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5943fe:{NFSU2_TR(0x5943fe);
{u32 ea_=u32(u32(8001812u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594404:{NFSU2_TR(0x594404);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59440a:{NFSU2_TR(0x59440a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59440e:{NFSU2_TR(0x59440e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594412:{NFSU2_TR(0x594412);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594414:L594414:{c.instructions+=2;NFSU2_TR(0x594414);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594416:{NFSU2_TR(0x594416);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594427;}}
}
B594418:L594418:{c.instructions+=4;NFSU2_TR(0x594418);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59441e:{NFSU2_TR(0x59441e);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594421:{NFSU2_TR(0x594421);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594425:{NFSU2_TR(0x594425);
{goto L59442f;}
}
B594427:L594427:{c.instructions+=1;NFSU2_TR(0x594427);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59442f:L59442f:{c.instructions+=6;NFSU2_TR(0x59442f);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594432:{NFSU2_TR(0x594432);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594433:{NFSU2_TR(0x594433);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594439:{NFSU2_TR(0x594439);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59443c:{NFSU2_TR(0x59443c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59443f:{NFSU2_TR(0x59443f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594444ull));
TAIL_STATIC(0x5764d0u,576);
}
B594444:L594444:{c.instructions+=7;NFSU2_TR(0x594444);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59444a:{NFSU2_TR(0x59444a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59444e:{NFSU2_TR(0x59444e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B594454:{NFSU2_TR(0x594454);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594456:{NFSU2_TR(0x594456);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B594458:{NFSU2_TR(0x594458);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59445a:{NFSU2_TR(0x59445a);
if(r1(R+518)){{goto L594462;}}
}
B59445c:L59445c:{c.instructions+=1;NFSU2_TR(0x59445c);
{u32 ea_=u32(u32(8001752u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594462:L594462:{c.instructions+=5;NFSU2_TR(0x594462);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B594466:{NFSU2_TR(0x594466);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59446c:{NFSU2_TR(0x59446c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59446e:{NFSU2_TR(0x59446e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B594471:{NFSU2_TR(0x594471);
if(r1(R+514)){{goto L594491;}}
}
B594473:L594473:{c.instructions+=2;NFSU2_TR(0x594473);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594475:{NFSU2_TR(0x594475);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594491;}}
}
B594477:L594477:{c.instructions+=3;NFSU2_TR(0x594477);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59447a:{NFSU2_TR(0x59447a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B59447e:{NFSU2_TR(0x59447e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59448b;}}
}
B594480:L594480:{c.instructions+=4;NFSU2_TR(0x594480);
{u32 ea_=u32(u32(8001816u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594486:{NFSU2_TR(0x594486);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B594487:{NFSU2_TR(0x594487);
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
B59448a:{NFSU2_TR(0x59448a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59448b:L59448b:{c.instructions+=1;NFSU2_TR(0x59448b);
{u32 ea_=u32(u32(8001820u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594491:L594491:{c.instructions+=3;NFSU2_TR(0x594491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B594492:{NFSU2_TR(0x594492);
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
B594495:{NFSU2_TR(0x594495);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5944a0:L5944a0:{c.instructions+=8;NFSU2_TR(0x5944a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944a1:{NFSU2_TR(0x5944a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5944a5:{NFSU2_TR(0x5944a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944a6:{NFSU2_TR(0x5944a6);
u8 U[4];
w4(U+0,u32(0x7a1d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944ab:{NFSU2_TR(0x5944ab);
__builtin_memmove((R+28),(R+4),4);
}
B5944ad:{NFSU2_TR(0x5944ad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944af:{NFSU2_TR(0x5944af);
__builtin_memmove((R+4),(R+24),4);
}
B5944b1:{NFSU2_TR(0x5944b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5944b6ull));
TAIL_STATIC(0x578ce0u,578);
}
B5944b6:L5944b6:{c.instructions+=4;NFSU2_TR(0x5944b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5944b9:{NFSU2_TR(0x5944b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944ba:{NFSU2_TR(0x5944ba);
__builtin_memmove((R+4),(R+24),4);
}
B5944bc:{NFSU2_TR(0x5944bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5944c1ull));
TAIL_STATIC(0x571770u,571);
}
B5944c1:L5944c1:{c.instructions+=7;NFSU2_TR(0x5944c1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944c3:{NFSU2_TR(0x5944c3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944c5:{NFSU2_TR(0x5944c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944c7:{NFSU2_TR(0x5944c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5944ca:{NFSU2_TR(0x5944ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944cb:{NFSU2_TR(0x5944cb);
__builtin_memmove((R+4),(R+24),4);
}
B5944cd:{NFSU2_TR(0x5944cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5944d2ull));
TAIL_STATIC(0x571640u,571);
}
B5944d2:L5944d2:{c.instructions+=7;NFSU2_TR(0x5944d2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944d4:{NFSU2_TR(0x5944d4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944d6:{NFSU2_TR(0x5944d6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944d8:{NFSU2_TR(0x5944d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5944db:{NFSU2_TR(0x5944db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944dc:{NFSU2_TR(0x5944dc);
__builtin_memmove((R+4),(R+24),4);
}
B5944de:{NFSU2_TR(0x5944de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5944e3ull));
TAIL_STATIC(0x571640u,571);
}
B5944e3:L5944e3:{c.instructions+=7;NFSU2_TR(0x5944e3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944e5:{NFSU2_TR(0x5944e5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944e7:{NFSU2_TR(0x5944e7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944e9:{NFSU2_TR(0x5944e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5944ec:{NFSU2_TR(0x5944ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944ed:{NFSU2_TR(0x5944ed);
__builtin_memmove((R+4),(R+24),4);
}
B5944ef:{NFSU2_TR(0x5944ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5944f4ull));
TAIL_STATIC(0x571640u,571);
}
B5944f4:L5944f4:{c.instructions+=7;NFSU2_TR(0x5944f4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944f6:{NFSU2_TR(0x5944f6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944f8:{NFSU2_TR(0x5944f8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944fa:{NFSU2_TR(0x5944fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5944fd:{NFSU2_TR(0x5944fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5944fe:{NFSU2_TR(0x5944fe);
__builtin_memmove((R+4),(R+24),4);
}
B594500:{NFSU2_TR(0x594500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594505ull));
TAIL_STATIC(0x571640u,571);
}
B594505:L594505:{c.instructions+=7;NFSU2_TR(0x594505);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594507:{NFSU2_TR(0x594507);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594509:{NFSU2_TR(0x594509);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59450b:{NFSU2_TR(0x59450b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59450e:{NFSU2_TR(0x59450e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59450f:{NFSU2_TR(0x59450f);
__builtin_memmove((R+4),(R+24),4);
}
B594511:{NFSU2_TR(0x594511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594516ull));
TAIL_STATIC(0x571640u,571);
}
B594516:L594516:{c.instructions+=7;NFSU2_TR(0x594516);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594518:{NFSU2_TR(0x594518);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59451a:{NFSU2_TR(0x59451a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59451c:{NFSU2_TR(0x59451c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59451f:{NFSU2_TR(0x59451f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594520:{NFSU2_TR(0x594520);
__builtin_memmove((R+4),(R+24),4);
}
B594522:{NFSU2_TR(0x594522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594527ull));
TAIL_STATIC(0x571640u,571);
}
B594527:L594527:{c.instructions+=4;NFSU2_TR(0x594527);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B59452a:{NFSU2_TR(0x59452a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59452b:{NFSU2_TR(0x59452b);
__builtin_memmove((R+4),(R+24),4);
}
B59452d:{NFSU2_TR(0x59452d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594532ull));
TAIL_STATIC(0x571770u,571);
}
B594532:L594532:{c.instructions+=4;NFSU2_TR(0x594532);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+8),(U+0),4);
}
B594535:{NFSU2_TR(0x594535);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594536:{NFSU2_TR(0x594536);
__builtin_memmove((R+4),(R+24),4);
}
B594538:{NFSU2_TR(0x594538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59453dull));
TAIL_STATIC(0x571770u,571);
}
B59453d:L59453d:{c.instructions+=4;NFSU2_TR(0x59453d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B594540:{NFSU2_TR(0x594540);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594541:{NFSU2_TR(0x594541);
__builtin_memmove((R+4),(R+24),4);
}
B594543:{NFSU2_TR(0x594543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594548ull));
TAIL_STATIC(0x571770u,571);
}
B594548:L594548:{c.instructions+=4;NFSU2_TR(0x594548);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B59454b:{NFSU2_TR(0x59454b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59454c:{NFSU2_TR(0x59454c);
__builtin_memmove((R+4),(R+24),4);
}
B59454e:{NFSU2_TR(0x59454e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594553ull));
TAIL_STATIC(0x571770u,571);
}
B594553:L594553:{c.instructions+=7;NFSU2_TR(0x594553);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594555:{NFSU2_TR(0x594555);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594557:{NFSU2_TR(0x594557);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594559:{NFSU2_TR(0x594559);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59455c:{NFSU2_TR(0x59455c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59455d:{NFSU2_TR(0x59455d);
__builtin_memmove((R+4),(R+24),4);
}
B59455f:{NFSU2_TR(0x59455f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594564ull));
TAIL_STATIC(0x571640u,571);
}
B594564:L594564:{c.instructions+=4;NFSU2_TR(0x594564);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B594567:{NFSU2_TR(0x594567);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594568:{NFSU2_TR(0x594568);
__builtin_memmove((R+4),(R+24),4);
}
B59456a:{NFSU2_TR(0x59456a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59456full));
TAIL_STATIC(0x571770u,571);
}
B59456f:L59456f:{c.instructions+=4;NFSU2_TR(0x59456f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B594572:{NFSU2_TR(0x594572);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594573:{NFSU2_TR(0x594573);
__builtin_memmove((R+4),(R+24),4);
}
B594575:{NFSU2_TR(0x594575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59457aull));
TAIL_STATIC(0x571770u,571);
}
B59457a:L59457a:{c.instructions+=4;NFSU2_TR(0x59457a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((R+8),(U+0),4);
}
B59457d:{NFSU2_TR(0x59457d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59457e:{NFSU2_TR(0x59457e);
__builtin_memmove((R+4),(R+24),4);
}
B594580:{NFSU2_TR(0x594580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594585ull));
TAIL_STATIC(0x571770u,571);
}
B594585:L594585:{c.instructions+=4;NFSU2_TR(0x594585);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B594588:{NFSU2_TR(0x594588);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594589:{NFSU2_TR(0x594589);
__builtin_memmove((R+4),(R+24),4);
}
B59458b:{NFSU2_TR(0x59458b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594590ull));
TAIL_STATIC(0x571770u,571);
}
B594590:L594590:{c.instructions+=7;NFSU2_TR(0x594590);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594592:{NFSU2_TR(0x594592);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594594:{NFSU2_TR(0x594594);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594596:{NFSU2_TR(0x594596);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B594599:{NFSU2_TR(0x594599);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59459a:{NFSU2_TR(0x59459a);
__builtin_memmove((R+4),(R+24),4);
}
B59459c:{NFSU2_TR(0x59459c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5945a1ull));
TAIL_STATIC(0x571640u,571);
}
B5945a1:L5945a1:{c.instructions+=4;NFSU2_TR(0x5945a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5945a4:{NFSU2_TR(0x5945a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5945a5:{NFSU2_TR(0x5945a5);
__builtin_memmove((R+4),(R+24),4);
}
B5945a7:{NFSU2_TR(0x5945a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5945acull));
TAIL_STATIC(0x571770u,571);
}
B5945ac:L5945ac:{c.instructions+=4;NFSU2_TR(0x5945ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5945af:{NFSU2_TR(0x5945af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5945b0:{NFSU2_TR(0x5945b0);
__builtin_memmove((R+4),(R+24),4);
}
B5945b2:{NFSU2_TR(0x5945b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5945b7ull));
TAIL_STATIC(0x571770u,571);
}
B5945b7:L5945b7:{c.instructions+=4;NFSU2_TR(0x5945b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5945bd:{NFSU2_TR(0x5945bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5945be:{NFSU2_TR(0x5945be);
__builtin_memmove((R+4),(R+24),4);
}
B5945c0:{NFSU2_TR(0x5945c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5945c5ull));
TAIL_STATIC(0x571770u,571);
}
B5945c5:L5945c5:{c.instructions+=3;NFSU2_TR(0x5945c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5945c8:{NFSU2_TR(0x5945c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5945ca:{NFSU2_TR(0x5945ca);
if(r1(R+518)){{goto L5945d8;}}
}
B5945cc:L5945cc:{c.instructions+=3;NFSU2_TR(0x5945cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5945cf:{NFSU2_TR(0x5945cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5945d2:{NFSU2_TR(0x5945d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5945d8:L5945d8:{c.instructions+=2;NFSU2_TR(0x5945d8);
__builtin_memmove((R+4),(R+24),4);
}
B5945da:{NFSU2_TR(0x5945da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5945dfull));
TAIL_STATIC(0x578d90u,578);
}
B5945df:L5945df:{c.instructions+=3;NFSU2_TR(0x5945df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5945e0:{NFSU2_TR(0x5945e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5945e1:{NFSU2_TR(0x5945e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5945f0:L5945f0:{c.instructions+=7;NFSU2_TR(0x5945f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5945f3:{NFSU2_TR(0x5945f3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5945f9:{NFSU2_TR(0x5945f9);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5945fc:{NFSU2_TR(0x5945fc);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594602:{NFSU2_TR(0x594602);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594604:{NFSU2_TR(0x594604);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594607:{NFSU2_TR(0x594607);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594620;}}
}
B594609:L594609:{c.instructions+=7;NFSU2_TR(0x594609);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59460c:{NFSU2_TR(0x59460c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59460e:{NFSU2_TR(0x59460e);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594611:{NFSU2_TR(0x594611);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594614:{NFSU2_TR(0x594614);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B594617:{NFSU2_TR(0x594617);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59461d:{NFSU2_TR(0x59461d);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594620:L594620:{c.instructions+=5;NFSU2_TR(0x594620);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594623:{NFSU2_TR(0x594623);
{u32 ea_=u32(u32(7975256u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594629:{NFSU2_TR(0x594629);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59462b:{NFSU2_TR(0x59462b);
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
B59462e:{NFSU2_TR(0x59462e);
if(r1(R+514)){{goto L59465d;}}
}
B594630:L594630:{c.instructions+=12;NFSU2_TR(0x594630);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594633:{NFSU2_TR(0x594633);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594636:{NFSU2_TR(0x594636);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594639:{NFSU2_TR(0x594639);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59463c:{NFSU2_TR(0x59463c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594642:{NFSU2_TR(0x594642);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594645:{NFSU2_TR(0x594645);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B594647:{NFSU2_TR(0x594647);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59464a:{NFSU2_TR(0x59464a);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594650:{NFSU2_TR(0x594650);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594652:{NFSU2_TR(0x594652);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B594655:{NFSU2_TR(0x594655);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59465d;}}
}
B594657:L594657:{c.instructions+=1;NFSU2_TR(0x594657);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59465d:L59465d:{c.instructions+=3;NFSU2_TR(0x59465d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B594660:{NFSU2_TR(0x594660);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594664:{NFSU2_TR(0x594664);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594670:L594670:{c.instructions+=3;NFSU2_TR(0x594670);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594674:{NFSU2_TR(0x594674);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B594677:{NFSU2_TR(0x594677);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594681;}}
}
B594679:L594679:{c.instructions+=2;NFSU2_TR(0x594679);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59467f:{NFSU2_TR(0x59467f);
{goto L594684;}
}
B594681:L594681:{c.instructions+=1;NFSU2_TR(0x594681);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594684:L594684:{c.instructions+=3;NFSU2_TR(0x594684);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B594688:{NFSU2_TR(0x594688);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59468a:{NFSU2_TR(0x59468a);
if(r1(R+518)){{goto L594694;}}
}
B59468c:L59468c:{c.instructions+=2;NFSU2_TR(0x59468c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59468e:{NFSU2_TR(0x59468e);
{u32 ea_=u32(r4(R+4)+u32(204u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594694:L594694:{c.instructions+=5;NFSU2_TR(0x594694);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59469b:{NFSU2_TR(0x59469b);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5946a0:{NFSU2_TR(0x5946a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5946a2:{NFSU2_TR(0x5946a2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5946a6:{NFSU2_TR(0x5946a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5946b1;}}
}
B5946a8:L5946a8:{c.instructions+=3;NFSU2_TR(0x5946a8);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5946ad:{NFSU2_TR(0x5946ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5946af:{NFSU2_TR(0x5946af);
if(r1(R+518)){{goto L5946bc;}}
}
B5946b1:L5946b1:{c.instructions+=4;NFSU2_TR(0x5946b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5946b4:{NFSU2_TR(0x5946b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5946b7:{NFSU2_TR(0x5946b7);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5946ba:{NFSU2_TR(0x5946ba);
{goto L5946c5;}
}
B5946bc:L5946bc:{c.instructions+=3;NFSU2_TR(0x5946bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5946bf:{NFSU2_TR(0x5946bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5946c2:{NFSU2_TR(0x5946c2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5946c5:L5946c5:{c.instructions+=4;NFSU2_TR(0x5946c5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5946c9:{NFSU2_TR(0x5946c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5946cb:{NFSU2_TR(0x5946cb);
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
B5946ce:{NFSU2_TR(0x5946ce);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5946d6;}}
}
B5946d0:L5946d0:{c.instructions+=2;NFSU2_TR(0x5946d0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5946d2:{NFSU2_TR(0x5946d2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5946d6:L5946d6:{c.instructions+=1;NFSU2_TR(0x5946d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5946e0:L5946e0:{c.instructions+=3;NFSU2_TR(0x5946e0);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5946e4:{NFSU2_TR(0x5946e4);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5946e6:{NFSU2_TR(0x5946e6);
if(r1(R+518)){{goto L5946fc;}}
}
B5946e8:L5946e8:{c.instructions+=4;NFSU2_TR(0x5946e8);
{u32 ea_=u32(r4(R+4)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5946ee:{NFSU2_TR(0x5946ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5946f2:{NFSU2_TR(0x5946f2);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5946f9:{NFSU2_TR(0x5946f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5946fc:L5946fc:{c.instructions+=4;NFSU2_TR(0x5946fc);
{u32 ea_=u32(r4(R+4)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5946ff:{NFSU2_TR(0x5946ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B594703:{NFSU2_TR(0x594703);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59470a:{NFSU2_TR(0x59470a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594710:L594710:{c.instructions+=10;NFSU2_TR(0x594710);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594711:{NFSU2_TR(0x594711);
__builtin_memmove((R+24),(R+4),4);
}
B594713:{NFSU2_TR(0x594713);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B594715:{NFSU2_TR(0x594715);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B594718:{NFSU2_TR(0x594718);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59471b:{NFSU2_TR(0x59471b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B594721:{NFSU2_TR(0x594721);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B594726:{NFSU2_TR(0x594726);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59472c:{NFSU2_TR(0x59472c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59472e:{NFSU2_TR(0x59472e);
if(r1(R+518)){{goto L594735;}}
}
B594730:L594730:{c.instructions+=2;NFSU2_TR(0x594730);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+4))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+4)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B594733:{NFSU2_TR(0x594733);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5947a4;}}
}
B594735:L594735:{c.instructions+=6;NFSU2_TR(0x594735);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59473b:{NFSU2_TR(0x59473b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59473c:{NFSU2_TR(0x59473c);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594742:{NFSU2_TR(0x594742);
__builtin_memmove((R+4),gp(0x890080),4);
}
B594748:{NFSU2_TR(0x594748);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59474b:{NFSU2_TR(0x59474b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594750ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B594750:L594750:{c.instructions+=8;NFSU2_TR(0x594750);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B594756:{NFSU2_TR(0x594756);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594757:{NFSU2_TR(0x594757);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59475a:{NFSU2_TR(0x59475a);
__builtin_memmove((R+4),gp(0x890080),4);
}
B594760:{NFSU2_TR(0x594760);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594766:{NFSU2_TR(0x594766);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59476c:{NFSU2_TR(0x59476c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59476f:{NFSU2_TR(0x59476f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594774ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B594774:L594774:{c.instructions+=8;NFSU2_TR(0x594774);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59477a:{NFSU2_TR(0x59477a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59477b:{NFSU2_TR(0x59477b);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59477e:{NFSU2_TR(0x59477e);
__builtin_memmove((R+4),gp(0x890080),4);
}
B594784:{NFSU2_TR(0x594784);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59478a:{NFSU2_TR(0x59478a);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594790:{NFSU2_TR(0x594790);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594793:{NFSU2_TR(0x594793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594798ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B594798:L594798:{c.instructions+=2;NFSU2_TR(0x594798);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59479e:{NFSU2_TR(0x59479e);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5947a4:L5947a4:{c.instructions+=2;NFSU2_TR(0x5947a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5947a5:{NFSU2_TR(0x5947a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5947b0:L5947b0:{c.instructions+=3;NFSU2_TR(0x5947b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5947b4:{NFSU2_TR(0x5947b4);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5947bb:{NFSU2_TR(0x5947bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5947c0:L5947c0:{c.instructions+=9;NFSU2_TR(0x5947c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5947c1:{NFSU2_TR(0x5947c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5947c4:{NFSU2_TR(0x5947c4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5947ca:{NFSU2_TR(0x5947ca);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5947cd:{NFSU2_TR(0x5947cd);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5947d5:{NFSU2_TR(0x5947d5);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5947db:{NFSU2_TR(0x5947db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5947dd:{NFSU2_TR(0x5947dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5947e0:{NFSU2_TR(0x5947e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5947fe;}}
}
B5947e2:L5947e2:{c.instructions+=6;NFSU2_TR(0x5947e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5947e5:{NFSU2_TR(0x5947e5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5947e7:{NFSU2_TR(0x5947e7);
{u32 ea_=u32(r4(R+0)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5947ed:{NFSU2_TR(0x5947ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5947f0:{NFSU2_TR(0x5947f0);
{u32 ea_=u32(r4(R+0)+u32(364u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5947f6:{NFSU2_TR(0x5947f6);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5947fe:L5947fe:{c.instructions+=5;NFSU2_TR(0x5947fe);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594801:{NFSU2_TR(0x594801);
{u32 ea_=u32(u32(7975256u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594807:{NFSU2_TR(0x594807);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594809:{NFSU2_TR(0x594809);
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
B59480c:{NFSU2_TR(0x59480c);
if(r1(R+514)){{goto L59482d;}}
}
B59480e:L59480e:{c.instructions+=8;NFSU2_TR(0x59480e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B594812:{NFSU2_TR(0x594812);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B594815:{NFSU2_TR(0x594815);
{u32 ea_=u32(r4(R+8)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59481b:{NFSU2_TR(0x59481b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x2ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59481e:{NFSU2_TR(0x59481e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B594822:{NFSU2_TR(0x594822);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594825:{NFSU2_TR(0x594825);
{u32 ea_=u32(r4(R+0)+u32(364u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59482b:{NFSU2_TR(0x59482b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59482d:L59482d:{c.instructions+=3;NFSU2_TR(0x59482d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B594831:{NFSU2_TR(0x594831);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B594832:{NFSU2_TR(0x594832);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594840:L594840:{c.instructions+=9;NFSU2_TR(0x594840);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594846:{NFSU2_TR(0x594846);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594847:{NFSU2_TR(0x594847);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B59484a:{NFSU2_TR(0x59484a);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59484d:{NFSU2_TR(0x59484d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59484e:{NFSU2_TR(0x59484e);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594854:{NFSU2_TR(0x594854);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594856:{NFSU2_TR(0x594856);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594859:{NFSU2_TR(0x594859);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594898;}}
}
B59485b:L59485b:{c.instructions+=16;NFSU2_TR(0x59485b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59485e:{NFSU2_TR(0x59485e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594860:{NFSU2_TR(0x594860);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B594863:{NFSU2_TR(0x594863);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594866:{NFSU2_TR(0x594866);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594869:{NFSU2_TR(0x594869);
{u32 ea_=u32(r4(R+8)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59486f:{NFSU2_TR(0x59486f);
{u32 ea_=u32(r4(R+8)+u32(264u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B594875:{NFSU2_TR(0x594875);
{u32 ea_=u32(r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B594878:{NFSU2_TR(0x594878);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59487b:{NFSU2_TR(0x59487b);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59487e:{NFSU2_TR(0x59487e);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594884:{NFSU2_TR(0x594884);
{u32 ea_=u32(r4(R+0)+u32(264u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59488a:{NFSU2_TR(0x59488a);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59488d:{NFSU2_TR(0x59488d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59488f:{NFSU2_TR(0x59488f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594895:{NFSU2_TR(0x594895);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594898:L594898:{c.instructions+=5;NFSU2_TR(0x594898);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59489b:{NFSU2_TR(0x59489b);
{u32 ea_=u32(u32(7975256u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5948a1:{NFSU2_TR(0x5948a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5948a3:{NFSU2_TR(0x5948a3);
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
B5948a6:{NFSU2_TR(0x5948a6);
if(r1(R+514)){{goto L5948fb;}}
}
B5948a8:L5948a8:{c.instructions+=21;NFSU2_TR(0x5948a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5948ab:{NFSU2_TR(0x5948ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5948ae:{NFSU2_TR(0x5948ae);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5948b1:{NFSU2_TR(0x5948b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5948b4:{NFSU2_TR(0x5948b4);
{u32 ea_=u32(r4(R+8)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5948ba:{NFSU2_TR(0x5948ba);
{u32 ea_=u32(r4(R+8)+u32(264u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5948c0:{NFSU2_TR(0x5948c0);
{u32 ea_=u32(r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5948c3:{NFSU2_TR(0x5948c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5948c6:{NFSU2_TR(0x5948c6);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5948c9:{NFSU2_TR(0x5948c9);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5948cf:{NFSU2_TR(0x5948cf);
{u32 ea_=u32(r4(R+0)+u32(264u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5948d5:{NFSU2_TR(0x5948d5);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5948d8:{NFSU2_TR(0x5948d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5948da:{NFSU2_TR(0x5948da);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5948e0:{NFSU2_TR(0x5948e0);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5948e3:{NFSU2_TR(0x5948e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5948e5:{NFSU2_TR(0x5948e5);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5948e8:{NFSU2_TR(0x5948e8);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5948ee:{NFSU2_TR(0x5948ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5948f0:{NFSU2_TR(0x5948f0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5948f3:{NFSU2_TR(0x5948f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5948fb;}}
}
B5948f5:L5948f5:{c.instructions+=1;NFSU2_TR(0x5948f5);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5948fb:L5948fb:{c.instructions+=5;NFSU2_TR(0x5948fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5948fe:{NFSU2_TR(0x5948fe);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594902:{NFSU2_TR(0x594902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B594903:{NFSU2_TR(0x594903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B594904:{NFSU2_TR(0x594904);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594910:L594910:{c.instructions+=7;NFSU2_TR(0x594910);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594914:{NFSU2_TR(0x594914);
w4(R+8,u32(0x3ull));
}
B594919:{NFSU2_TR(0x594919);
{u32 ea_=u32(u32(7907292u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59491f:{NFSU2_TR(0x59491f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B594922:{NFSU2_TR(0x594922);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594924:{NFSU2_TR(0x594924);
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
B594927:{NFSU2_TR(0x594927);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59493a;}}
}
B594929:L594929:{c.instructions+=5;NFSU2_TR(0x594929);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59492b:{NFSU2_TR(0x59492b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59492e:{NFSU2_TR(0x59492e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594934:{NFSU2_TR(0x594934);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594937:{NFSU2_TR(0x594937);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59493a:L59493a:{c.instructions+=4;NFSU2_TR(0x59493a);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B594940:{NFSU2_TR(0x594940);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594942:{NFSU2_TR(0x594942);
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
B594945:{NFSU2_TR(0x594945);
if(r1(R+514)){{goto L59495c;}}
}
B594947:L594947:{c.instructions+=5;NFSU2_TR(0x594947);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594949:{NFSU2_TR(0x594949);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B594950:{NFSU2_TR(0x594950);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594956:{NFSU2_TR(0x594956);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594959:{NFSU2_TR(0x594959);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59495c:L59495c:{c.instructions+=4;NFSU2_TR(0x59495c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B594962:{NFSU2_TR(0x594962);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594964:{NFSU2_TR(0x594964);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B594967:{NFSU2_TR(0x594967);
if(r1(R+514)){{goto L594972;}}
}
B594969:L594969:{c.instructions+=3;NFSU2_TR(0x594969);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59496c:{NFSU2_TR(0x59496c);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59496f:{NFSU2_TR(0x59496f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594972:L594972:{c.instructions+=4;NFSU2_TR(0x594972);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B594978:{NFSU2_TR(0x594978);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59497a:{NFSU2_TR(0x59497a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59497d:{NFSU2_TR(0x59497d);
if(r1(R+514)){{goto L59498c;}}
}
B59497f:L59497f:{c.instructions+=3;NFSU2_TR(0x59497f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B594986:{NFSU2_TR(0x594986);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594989:{NFSU2_TR(0x594989);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59498c:L59498c:{c.instructions+=4;NFSU2_TR(0x59498c);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59498f:{NFSU2_TR(0x59498f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594991:{NFSU2_TR(0x594991);
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
B594994:{NFSU2_TR(0x594994);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5949a3;}}
}
B594996:L594996:{c.instructions+=3;NFSU2_TR(0x594996);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59499d:{NFSU2_TR(0x59499d);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5949a0:{NFSU2_TR(0x5949a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5949a3:L5949a3:{c.instructions+=3;NFSU2_TR(0x5949a3);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5949a6:{NFSU2_TR(0x5949a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5949ad:{NFSU2_TR(0x5949ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5949b0:L5949b0:{c.instructions+=4;NFSU2_TR(0x5949b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5949b3:{NFSU2_TR(0x5949b3);
w4(R+8,u32(0x3ull));
}
B5949b8:{NFSU2_TR(0x5949b8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5949ba:{NFSU2_TR(0x5949ba);
if(r1(R+518)){{goto L594a12;}}
}
B5949bc:L5949bc:{c.instructions+=9;NFSU2_TR(0x5949bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5949bf:{NFSU2_TR(0x5949bf);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5949c2:{NFSU2_TR(0x5949c2);
{u32 ea_=u32(r4(R+4)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5949c8:{NFSU2_TR(0x5949c8);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5949cb:{NFSU2_TR(0x5949cb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5949d1:{NFSU2_TR(0x5949d1);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5949d4:{NFSU2_TR(0x5949d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5949d6:{NFSU2_TR(0x5949d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5949d9:{NFSU2_TR(0x5949d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5949e5;}}
}
B5949db:L5949db:{c.instructions+=3;NFSU2_TR(0x5949db);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5949e1:{NFSU2_TR(0x5949e1);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5949e3:{NFSU2_TR(0x5949e3);
{goto L5949fd;}
}
B5949e5:L5949e5:{c.instructions+=4;NFSU2_TR(0x5949e5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5949eb:{NFSU2_TR(0x5949eb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5949ed:{NFSU2_TR(0x5949ed);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5949f0:{NFSU2_TR(0x5949f0);
if(r1(R+514)){{goto L5949fd;}}
}
B5949f2:L5949f2:{c.instructions+=2;NFSU2_TR(0x5949f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5949f5:{NFSU2_TR(0x5949f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5949fd;}}
}
B5949f7:L5949f7:{c.instructions+=1;NFSU2_TR(0x5949f7);
{u32 ea_=u32(u32(8001748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5949fd:L5949fd:{c.instructions+=6;NFSU2_TR(0x5949fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B594a00:{NFSU2_TR(0x594a00);
{u32 ea_=u32((r4(R+4)*4u)+u32(8372888u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594a07:{NFSU2_TR(0x594a07);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B594a0b:{NFSU2_TR(0x594a0b);
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
B594a0d:{NFSU2_TR(0x594a0d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594a0f:{NFSU2_TR(0x594a0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594a12:L594a12:{c.instructions+=4;NFSU2_TR(0x594a12);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594a16:{NFSU2_TR(0x594a16);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B594a1c:{NFSU2_TR(0x594a1c);
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
B594a1e:{NFSU2_TR(0x594a1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594a30:L594a30:{c.instructions+=3;NFSU2_TR(0x594a30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594a31:{NFSU2_TR(0x594a31);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B594a35:{NFSU2_TR(0x594a35);
if(r1(R+518)){{goto L594ca8;}}
}
B594a3b:L594a3b:{c.instructions+=11;NFSU2_TR(0x594a3b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594a3f:{NFSU2_TR(0x594a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594a42:{NFSU2_TR(0x594a42);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B594a45:{NFSU2_TR(0x594a45);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594a48:{NFSU2_TR(0x594a48);
{u32 ea_=u32(r4(R+0)+u32(996u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B594a4e:{NFSU2_TR(0x594a4e);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594a54:{NFSU2_TR(0x594a54);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594a5a:{NFSU2_TR(0x594a5a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B594a5c:{NFSU2_TR(0x594a5c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594a5e:{NFSU2_TR(0x594a5e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594a61:{NFSU2_TR(0x594a61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594a6b;}}
}
B594a63:L594a63:{c.instructions+=2;NFSU2_TR(0x594a63);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594a65:{NFSU2_TR(0x594a65);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594a6b:L594a6b:{c.instructions+=21;NFSU2_TR(0x594a6b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594a6f:{NFSU2_TR(0x594a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594a72:{NFSU2_TR(0x594a72);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594a73:{NFSU2_TR(0x594a73);
{u32 ea_=u32(r4(R+0)+u32(124u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B594a76:{NFSU2_TR(0x594a76);
{u32 ea_=u32(r4(R+0)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594a79:{NFSU2_TR(0x594a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594a7c:{NFSU2_TR(0x594a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B594a7f:{NFSU2_TR(0x594a7f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594a83:{NFSU2_TR(0x594a83);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594a87:{NFSU2_TR(0x594a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B594a8a:{NFSU2_TR(0x594a8a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594a90:{NFSU2_TR(0x594a90);
{u32 ea_=u32(r4(R+4)+u32(236u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594a96:{NFSU2_TR(0x594a96);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594a99:{NFSU2_TR(0x594a99);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B594a9b:{NFSU2_TR(0x594a9b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594a9f:{NFSU2_TR(0x594a9f);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594aa2:{NFSU2_TR(0x594aa2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B594aa8:{NFSU2_TR(0x594aa8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594aaa:{NFSU2_TR(0x594aaa);
{u32 ea_=u32(r4(R+4)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594ab0:{NFSU2_TR(0x594ab0);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B594ab2:{NFSU2_TR(0x594ab2);
if(r1(R+518)){{goto L594acc;}}
}
B594ab4:L594ab4:{c.instructions+=4;NFSU2_TR(0x594ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594ab7:{NFSU2_TR(0x594ab7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B594abd:{NFSU2_TR(0x594abd);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594abf:{NFSU2_TR(0x594abf);
if(r1(R+518)){{goto L594acc;}}
}
B594ac1:L594ac1:{c.instructions+=3;NFSU2_TR(0x594ac1);
__builtin_memmove((R+0),gp(0x7fbffc),4);
}
B594ac6:{NFSU2_TR(0x594ac6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B594aca:{NFSU2_TR(0x594aca);
{goto L594ad4;}
}
B594acc:L594acc:{c.instructions+=1;NFSU2_TR(0x594acc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B594ad4:L594ad4:{c.instructions+=4;NFSU2_TR(0x594ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594ad7:{NFSU2_TR(0x594ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594add:{NFSU2_TR(0x594add);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B594ae0:{NFSU2_TR(0x594ae0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594aee;}}
}
B594ae2:L594ae2:{c.instructions+=3;NFSU2_TR(0x594ae2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594ae8:{NFSU2_TR(0x594ae8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594aec:{NFSU2_TR(0x594aec);
{goto L594b66;}
}
B594aee:L594aee:{c.instructions+=2;NFSU2_TR(0x594aee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B594af1:{NFSU2_TR(0x594af1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594af9;}}
}
B594af3:L594af3:{c.instructions+=2;NFSU2_TR(0x594af3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594af7:{NFSU2_TR(0x594af7);
{goto L594b66;}
}
B594af9:L594af9:{c.instructions+=10;NFSU2_TR(0x594af9);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594afc:{NFSU2_TR(0x594afc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594afd:{NFSU2_TR(0x594afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B594b00:{NFSU2_TR(0x594b00);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B594b03:{NFSU2_TR(0x594b03);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B594b05:{NFSU2_TR(0x594b05);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B594b07:{NFSU2_TR(0x594b07);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594b0d:{NFSU2_TR(0x594b0d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594b0f:{NFSU2_TR(0x594b0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594b12:{NFSU2_TR(0x594b12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594b5d;}}
}
B594b14:L594b14:{c.instructions+=5;NFSU2_TR(0x594b14);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B594b17:{NFSU2_TR(0x594b17);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B594b1b:{NFSU2_TR(0x594b1b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594b1d:{NFSU2_TR(0x594b1d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B594b20:{NFSU2_TR(0x594b20);
if(r1(R+514)){{goto L594b38;}}
}
B594b22:L594b22:{c.instructions+=5;NFSU2_TR(0x594b22);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594b24:{NFSU2_TR(0x594b24);
{u32 ea_=u32(u32(8372220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594b2a:{NFSU2_TR(0x594b2a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594b30:{NFSU2_TR(0x594b30);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B594b36:{NFSU2_TR(0x594b36);
{goto L594b65;}
}
B594b38:L594b38:{c.instructions+=7;NFSU2_TR(0x594b38);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594b3e:{NFSU2_TR(0x594b3e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594b42:{NFSU2_TR(0x594b42);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B594b44:{NFSU2_TR(0x594b44);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B594b46:{NFSU2_TR(0x594b46);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594b48:{NFSU2_TR(0x594b48);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594b4b:{NFSU2_TR(0x594b4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594b65;}}
}
B594b4d:L594b4d:{c.instructions+=4;NFSU2_TR(0x594b4d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594b4f:{NFSU2_TR(0x594b4f);
{u32 ea_=u32(u32(8372220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594b55:{NFSU2_TR(0x594b55);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594b5b:{NFSU2_TR(0x594b5b);
{goto L594b65;}
}
B594b5d:L594b5d:{c.instructions+=2;NFSU2_TR(0x594b5d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594b5f:{NFSU2_TR(0x594b5f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594b65:L594b65:{c.instructions+=1;NFSU2_TR(0x594b65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B594b66:L594b66:{c.instructions+=3;NFSU2_TR(0x594b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594b6c:{NFSU2_TR(0x594b6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B594b6e:{NFSU2_TR(0x594b6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594b88;}}
}
B594b70:L594b70:{c.instructions+=5;NFSU2_TR(0x594b70);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594b76:{NFSU2_TR(0x594b76);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B594b78:{NFSU2_TR(0x594b78);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594b7c:{NFSU2_TR(0x594b7c);
{u32 ea_=u32(r4(R+8)+u32(264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B594b82:{NFSU2_TR(0x594b82);
{u32 ea_=u32(r4(R+8)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594b88:L594b88:{c.instructions+=4;NFSU2_TR(0x594b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594b8b:{NFSU2_TR(0x594b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B594b91:{NFSU2_TR(0x594b91);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B594b93:{NFSU2_TR(0x594b93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594ba7;}}
}
B594b95:L594b95:{c.instructions+=4;NFSU2_TR(0x594b95);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594b99:{NFSU2_TR(0x594b99);
{u32 ea_=u32(r4(R+0)+u32(264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B594b9f:{NFSU2_TR(0x594b9f);
{u32 ea_=u32(r4(R+0)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594ba5:{NFSU2_TR(0x594ba5);
{goto L594ba9;}
}
B594ba7:L594ba7:{c.instructions+=1;NFSU2_TR(0x594ba7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594ba9:L594ba9:{c.instructions+=4;NFSU2_TR(0x594ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B594bac:{NFSU2_TR(0x594bac);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B594bb2:{NFSU2_TR(0x594bb2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594bb4:{NFSU2_TR(0x594bb4);
if(r1(R+518)){{goto L594bce;}}
}
B594bb6:L594bb6:{c.instructions+=4;NFSU2_TR(0x594bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594bb9:{NFSU2_TR(0x594bb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B594bbf:{NFSU2_TR(0x594bbf);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594bc1:{NFSU2_TR(0x594bc1);
if(r1(R+518)){{goto L594bce;}}
}
B594bc3:L594bc3:{c.instructions+=3;NFSU2_TR(0x594bc3);
__builtin_memmove((R+0),gp(0x7fbffc),4);
}
B594bc8:{NFSU2_TR(0x594bc8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B594bcc:{NFSU2_TR(0x594bcc);
{goto L594bd6;}
}
B594bce:L594bce:{c.instructions+=1;NFSU2_TR(0x594bce);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B594bd6:L594bd6:{c.instructions+=5;NFSU2_TR(0x594bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594bd9:{NFSU2_TR(0x594bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594bdf:{NFSU2_TR(0x594bdf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B594be2:{NFSU2_TR(0x594be2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B594be3:{NFSU2_TR(0x594be3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594bf1;}}
}
B594be5:L594be5:{c.instructions+=3;NFSU2_TR(0x594be5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594beb:{NFSU2_TR(0x594beb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594bef:{NFSU2_TR(0x594bef);
{goto L594c67;}
}
B594bf1:L594bf1:{c.instructions+=2;NFSU2_TR(0x594bf1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B594bf4:{NFSU2_TR(0x594bf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594bfc;}}
}
B594bf6:L594bf6:{c.instructions+=2;NFSU2_TR(0x594bf6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594bfa:{NFSU2_TR(0x594bfa);
{goto L594c67;}
}
B594bfc:L594bfc:{c.instructions+=9;NFSU2_TR(0x594bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594bff:{NFSU2_TR(0x594bff);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594c02:{NFSU2_TR(0x594c02);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B594c05:{NFSU2_TR(0x594c05);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B594c07:{NFSU2_TR(0x594c07);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B594c09:{NFSU2_TR(0x594c09);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594c0f:{NFSU2_TR(0x594c0f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594c11:{NFSU2_TR(0x594c11);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594c14:{NFSU2_TR(0x594c14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594c5f;}}
}
B594c16:L594c16:{c.instructions+=5;NFSU2_TR(0x594c16);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B594c19:{NFSU2_TR(0x594c19);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B594c1d:{NFSU2_TR(0x594c1d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594c1f:{NFSU2_TR(0x594c1f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B594c22:{NFSU2_TR(0x594c22);
if(r1(R+514)){{goto L594c3a;}}
}
B594c24:L594c24:{c.instructions+=5;NFSU2_TR(0x594c24);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594c26:{NFSU2_TR(0x594c26);
{u32 ea_=u32(u32(8372220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594c2c:{NFSU2_TR(0x594c2c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594c32:{NFSU2_TR(0x594c32);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B594c38:{NFSU2_TR(0x594c38);
{goto L594c67;}
}
B594c3a:L594c3a:{c.instructions+=7;NFSU2_TR(0x594c3a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594c40:{NFSU2_TR(0x594c40);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594c44:{NFSU2_TR(0x594c44);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B594c46:{NFSU2_TR(0x594c46);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B594c48:{NFSU2_TR(0x594c48);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594c4a:{NFSU2_TR(0x594c4a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594c4d:{NFSU2_TR(0x594c4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594c67;}}
}
B594c4f:L594c4f:{c.instructions+=4;NFSU2_TR(0x594c4f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594c51:{NFSU2_TR(0x594c51);
{u32 ea_=u32(u32(8372220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594c57:{NFSU2_TR(0x594c57);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594c5d:{NFSU2_TR(0x594c5d);
{goto L594c67;}
}
B594c5f:L594c5f:{c.instructions+=2;NFSU2_TR(0x594c5f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594c61:{NFSU2_TR(0x594c61);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594c67:L594c67:{c.instructions+=3;NFSU2_TR(0x594c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594c6d:{NFSU2_TR(0x594c6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B594c6f:{NFSU2_TR(0x594c6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594c81;}}
}
B594c71:L594c71:{c.instructions+=4;NFSU2_TR(0x594c71);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B594c73:{NFSU2_TR(0x594c73);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B594c75:{NFSU2_TR(0x594c75);
{u32 ea_=u32(r4(R+8)+u32(264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B594c7b:{NFSU2_TR(0x594c7b);
{u32 ea_=u32(r4(R+8)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594c81:L594c81:{c.instructions+=4;NFSU2_TR(0x594c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B594c84:{NFSU2_TR(0x594c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594c8a:{NFSU2_TR(0x594c8a);
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
B594c8c:{NFSU2_TR(0x594c8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594ca4;}}
}
B594c8e:L594c8e:{c.instructions+=5;NFSU2_TR(0x594c8e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594c94:{NFSU2_TR(0x594c94);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B594c96:{NFSU2_TR(0x594c96);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B594c98:{NFSU2_TR(0x594c98);
{u32 ea_=u32(r4(R+4)+u32(264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B594c9e:{NFSU2_TR(0x594c9e);
{u32 ea_=u32(r4(R+4)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594ca4:L594ca4:{c.instructions+=2;NFSU2_TR(0x594ca4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594ca6:{NFSU2_TR(0x594ca6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594ca8:L594ca8:{c.instructions+=2;NFSU2_TR(0x594ca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B594ca9:{NFSU2_TR(0x594ca9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594cb0:L594cb0:{c.instructions+=7;NFSU2_TR(0x594cb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594cb1:{NFSU2_TR(0x594cb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594cb2:{NFSU2_TR(0x594cb2);
__builtin_memmove((R+24),(R+4),4);
}
B594cb4:{NFSU2_TR(0x594cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594cb7:{NFSU2_TR(0x594cb7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B594cba:{NFSU2_TR(0x594cba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B594cc1:{NFSU2_TR(0x594cc1);
if(r1(R+518)){{goto L594ce5;}}
}
B594cc3:L594cc3:{c.instructions+=2;NFSU2_TR(0x594cc3);
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B594cc6:{NFSU2_TR(0x594cc6);
if(r1(R+518)){{goto L594ce5;}}
}
B594cc8:L594cc8:{c.instructions+=2;NFSU2_TR(0x594cc8);
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
B594cc9:{NFSU2_TR(0x594cc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594d96;}}
}
B594ccf:L594ccf:{c.instructions+=2;NFSU2_TR(0x594ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B594cd2:{NFSU2_TR(0x594cd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594cd7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x594300u);}goto L594300;}
}
B594cd7:L594cd7:{c.instructions+=4;NFSU2_TR(0x594cd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594cd8:{NFSU2_TR(0x594cd8);
__builtin_memmove((R+4),(R+24),4);
}
B594cda:{NFSU2_TR(0x594cda);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594cdd:{NFSU2_TR(0x594cdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594ce2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x594a30u);}goto L594a30;}
}
B594ce2:L594ce2:{c.instructions+=3;NFSU2_TR(0x594ce2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B594ce3:{NFSU2_TR(0x594ce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B594ce4:{NFSU2_TR(0x594ce4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594ce5:L594ce5:{c.instructions+=7;NFSU2_TR(0x594ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B594ce8:{NFSU2_TR(0x594ce8);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594ceb:{NFSU2_TR(0x594ceb);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594cee:{NFSU2_TR(0x594cee);
{u32 ea_=u32(u32(8372020u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B594cf4:{NFSU2_TR(0x594cf4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594cf6:{NFSU2_TR(0x594cf6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594cf9:{NFSU2_TR(0x594cf9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594d05;}}
}
B594cfb:L594cfb:{c.instructions+=3;NFSU2_TR(0x594cfb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594cfd:{NFSU2_TR(0x594cfd);
{u32 ea_=u32(u32(8372020u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594d03:{NFSU2_TR(0x594d03);
{goto L594d22;}
}
B594d05:L594d05:{c.instructions+=7;NFSU2_TR(0x594d05);
{u32 ea_=u32(u32(8372020u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594d0b:{NFSU2_TR(0x594d0b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B594d0d:{NFSU2_TR(0x594d0d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594d11:{NFSU2_TR(0x594d11);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B594d15:{NFSU2_TR(0x594d15);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594d17:{NFSU2_TR(0x594d17);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B594d1a:{NFSU2_TR(0x594d1a);
if(r1(R+514)){{goto L594d22;}}
}
B594d1c:L594d1c:{c.instructions+=2;NFSU2_TR(0x594d1c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594d1e:{NFSU2_TR(0x594d1e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594d22:L594d22:{c.instructions+=10;NFSU2_TR(0x594d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594d25:{NFSU2_TR(0x594d25);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594d28:{NFSU2_TR(0x594d28);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594d2b:{NFSU2_TR(0x594d2b);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594d2e:{NFSU2_TR(0x594d2e);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594d34:{NFSU2_TR(0x594d34);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594d37:{NFSU2_TR(0x594d37);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594d3d:{NFSU2_TR(0x594d3d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594d3f:{NFSU2_TR(0x594d3f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B594d42:{NFSU2_TR(0x594d42);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L594d81;}}
}
B594d44:L594d44:{c.instructions+=6;NFSU2_TR(0x594d44);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B594d46:{NFSU2_TR(0x594d46);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594d49:{NFSU2_TR(0x594d49);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594d4f:{NFSU2_TR(0x594d4f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594d51:{NFSU2_TR(0x594d51);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B594d54:{NFSU2_TR(0x594d54);
if(r1(R+514)){{goto L594d81;}}
}
B594d56:L594d56:{c.instructions+=6;NFSU2_TR(0x594d56);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B594d58:{NFSU2_TR(0x594d58);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B594d5a:{NFSU2_TR(0x594d5a);
{u32 ea_=u32(u32(7906580u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594d60:{NFSU2_TR(0x594d60);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594d62:{NFSU2_TR(0x594d62);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594d65:{NFSU2_TR(0x594d65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594d81;}}
}
B594d67:L594d67:{c.instructions+=6;NFSU2_TR(0x594d67);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594d6a:{NFSU2_TR(0x594d6a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B594d6c:{NFSU2_TR(0x594d6c);
{u32 ea_=u32(u32(7906580u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594d72:{NFSU2_TR(0x594d72);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594d74:{NFSU2_TR(0x594d74);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594d77:{NFSU2_TR(0x594d77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594d81;}}
}
B594d79:L594d79:{c.instructions+=2;NFSU2_TR(0x594d79);
{u32 ea_=u32(u32(8001828u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594d7f:{NFSU2_TR(0x594d7f);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B594d81:L594d81:{c.instructions+=8;NFSU2_TR(0x594d81);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594d84:{NFSU2_TR(0x594d84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594d85:{NFSU2_TR(0x594d85);
__builtin_memmove((R+4),(R+24),4);
}
B594d87:{NFSU2_TR(0x594d87);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594d8a:{NFSU2_TR(0x594d8a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B594d8c:{NFSU2_TR(0x594d8c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594d8f:{NFSU2_TR(0x594d8f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594d91:{NFSU2_TR(0x594d91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594d96ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x594a30u);}goto L594a30;}
}
B594d96:L594d96:{c.instructions+=3;NFSU2_TR(0x594d96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B594d97:{NFSU2_TR(0x594d97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B594d98:{NFSU2_TR(0x594d98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594da0:L594da0:{c.instructions+=5;NFSU2_TR(0x594da0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594da1:{NFSU2_TR(0x594da1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594da2:{NFSU2_TR(0x594da2);
__builtin_memmove((R+24),(R+4),4);
}
B594da4:{NFSU2_TR(0x594da4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B594da8:{NFSU2_TR(0x594da8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594e7e;}}
}
B594dae:L594dae:{c.instructions+=4;NFSU2_TR(0x594dae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594daf:{NFSU2_TR(0x594daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B594db2:{NFSU2_TR(0x594db2);
__builtin_memmove((R+4),(R+28),4);
}
B594db4:{NFSU2_TR(0x594db4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594db9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x594300u);}goto L594300;}
}
B594db9:L594db9:{c.instructions+=8;NFSU2_TR(0x594db9);
{u32 ea_=u32(r4(R+28)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B594dbc:{NFSU2_TR(0x594dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594dbf:{NFSU2_TR(0x594dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B594dc2:{NFSU2_TR(0x594dc2);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594dc5:{NFSU2_TR(0x594dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594dc8:{NFSU2_TR(0x594dc8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B594dcb:{NFSU2_TR(0x594dcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B594dcc:{NFSU2_TR(0x594dcc);
if(r1(R+518)){{goto L594dd2;}}
}
B594dce:L594dce:{c.instructions+=2;NFSU2_TR(0x594dce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B594dd0:{NFSU2_TR(0x594dd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594dd8;}}
}
B594dd2:L594dd2:{c.instructions+=1;NFSU2_TR(0x594dd2);
{u32 ea_=u32(u32(8001824u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594dd8:L594dd8:{c.instructions+=6;NFSU2_TR(0x594dd8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B594dda:{NFSU2_TR(0x594dda);
__builtin_memmove((R+4),(R+24),4);
}
B594ddc:{NFSU2_TR(0x594ddc);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B594dde:{NFSU2_TR(0x594dde);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594de2:{NFSU2_TR(0x594de2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594de4:{NFSU2_TR(0x594de4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594de9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x594840u);}goto L594840;}
}
B594de9:L594de9:{c.instructions+=11;NFSU2_TR(0x594de9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B594ded:{NFSU2_TR(0x594ded);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B594df0:{NFSU2_TR(0x594df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594df3:{NFSU2_TR(0x594df3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594df9:{NFSU2_TR(0x594df9);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B594dfc:{NFSU2_TR(0x594dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B594dff:{NFSU2_TR(0x594dff);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594e02:{NFSU2_TR(0x594e02);
{u32 ea_=u32(u32(7975256u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594e08:{NFSU2_TR(0x594e08);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594e0a:{NFSU2_TR(0x594e0a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B594e0d:{NFSU2_TR(0x594e0d);
if(r1(R+514)){{goto L594e39;}}
}
B594e0f:L594e0f:{c.instructions+=12;NFSU2_TR(0x594e0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B594e12:{NFSU2_TR(0x594e12);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594e16:{NFSU2_TR(0x594e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594e19:{NFSU2_TR(0x594e19);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594e1c:{NFSU2_TR(0x594e1c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594e22:{NFSU2_TR(0x594e22);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594e28:{NFSU2_TR(0x594e28);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B594e2b:{NFSU2_TR(0x594e2b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B594e2d:{NFSU2_TR(0x594e2d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B594e2f:{NFSU2_TR(0x594e2f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594e35:{NFSU2_TR(0x594e35);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B594e37:{NFSU2_TR(0x594e37);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594e39:L594e39:{c.instructions+=5;NFSU2_TR(0x594e39);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594e3c:{NFSU2_TR(0x594e3c);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594e42:{NFSU2_TR(0x594e42);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594e44:{NFSU2_TR(0x594e44);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594e47:{NFSU2_TR(0x594e47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594e6d;}}
}
B594e49:L594e49:{c.instructions+=11;NFSU2_TR(0x594e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B594e4c:{NFSU2_TR(0x594e4c);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594e50:{NFSU2_TR(0x594e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594e53:{NFSU2_TR(0x594e53);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594e56:{NFSU2_TR(0x594e56);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594e5c:{NFSU2_TR(0x594e5c);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B594e5f:{NFSU2_TR(0x594e5f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B594e61:{NFSU2_TR(0x594e61);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B594e63:{NFSU2_TR(0x594e63);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594e69:{NFSU2_TR(0x594e69);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B594e6b:{NFSU2_TR(0x594e6b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594e6d:L594e6d:{c.instructions+=7;NFSU2_TR(0x594e6d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B594e6f:{NFSU2_TR(0x594e6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B594e70:{NFSU2_TR(0x594e70);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B594e72:{NFSU2_TR(0x594e72);
__builtin_memmove((R+4),(R+24),4);
}
B594e74:{NFSU2_TR(0x594e74);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594e77:{NFSU2_TR(0x594e77);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594e79:{NFSU2_TR(0x594e79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x594e7eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x594a30u);}goto L594a30;}
}
B594e7e:L594e7e:{c.instructions+=3;NFSU2_TR(0x594e7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B594e7f:{NFSU2_TR(0x594e7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B594e80:{NFSU2_TR(0x594e80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594e90:L594e90:{c.instructions+=6;NFSU2_TR(0x594e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B594e93:{NFSU2_TR(0x594e93);
{u32 ea_=u32(r4(R+8)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594e96:{NFSU2_TR(0x594e96);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594e9c:{NFSU2_TR(0x594e9c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594e9e:{NFSU2_TR(0x594e9e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B594ea1:{NFSU2_TR(0x594ea1);
if(r1(R+514)){{goto L594ec4;}}
}
B594ea3:L594ea3:{c.instructions+=8;NFSU2_TR(0x594ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594ea6:{NFSU2_TR(0x594ea6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594ea8:{NFSU2_TR(0x594ea8);
{u32 ea_=u32(u32(8002872u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594eae:{NFSU2_TR(0x594eae);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B594eb4:{NFSU2_TR(0x594eb4);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594eb7:{NFSU2_TR(0x594eb7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594eb9:{NFSU2_TR(0x594eb9);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B594ebc:{NFSU2_TR(0x594ebc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594ec4;}}
}
B594ebe:L594ebe:{c.instructions+=2;NFSU2_TR(0x594ebe);
w4(R+0,u32(0x1ull));
}
B594ec3:{NFSU2_TR(0x594ec3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594ec4:L594ec4:{c.instructions+=2;NFSU2_TR(0x594ec4);
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
B594ec6:{NFSU2_TR(0x594ec6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594ed0:L594ed0:{c.instructions+=8;NFSU2_TR(0x594ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594ed3:{NFSU2_TR(0x594ed3);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594ed6:{NFSU2_TR(0x594ed6);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594ed9:{NFSU2_TR(0x594ed9);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B594edb:{NFSU2_TR(0x594edb);
{u32 ea_=u32(u32(8372264u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594ee1:{NFSU2_TR(0x594ee1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594ee3:{NFSU2_TR(0x594ee3);
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
B594ee6:{NFSU2_TR(0x594ee6);
if(r1(R+514)){{goto L594eee;}}
}
B594ee8:L594ee8:{c.instructions+=2;NFSU2_TR(0x594ee8);
w4(R+0,u32(0x1ull));
}
B594eed:{NFSU2_TR(0x594eed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594eee:L594eee:{c.instructions+=2;NFSU2_TR(0x594eee);
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
B594ef0:{NFSU2_TR(0x594ef0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594f00:L594f00:{c.instructions+=7;NFSU2_TR(0x594f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594f06:{NFSU2_TR(0x594f06);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B594f0a:{NFSU2_TR(0x594f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B594f0d:{NFSU2_TR(0x594f0d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B594f0f:{NFSU2_TR(0x594f0f);
{u32 ea_=u32((r4(R+0)*4u)+u32(8372064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594f16:{NFSU2_TR(0x594f16);
{u32 ea_=u32(r4(R+4)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594f1c:{NFSU2_TR(0x594f1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594f20:L594f20:{c.instructions+=15;NFSU2_TR(0x594f20);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B594f24:{NFSU2_TR(0x594f24);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594f2a:{NFSU2_TR(0x594f2a);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594f31:{NFSU2_TR(0x594f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B594f37:{NFSU2_TR(0x594f37);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594f3b:{NFSU2_TR(0x594f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B594f3e:{NFSU2_TR(0x594f3e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B594f40:{NFSU2_TR(0x594f40);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594f44:{NFSU2_TR(0x594f44);
{u32 ea_=u32((r4(R+0)*4u)+u32(8372064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594f4b:{NFSU2_TR(0x594f4b);
{u32 ea_=u32(r4(R+4)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594f51:{NFSU2_TR(0x594f51);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B594f55:{NFSU2_TR(0x594f55);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594f5b:{NFSU2_TR(0x594f5b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594f5d:{NFSU2_TR(0x594f5d);
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
B594f60:{NFSU2_TR(0x594f60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x59501bu,595);}
}
B594f66:L594f66:{c.instructions+=6;NFSU2_TR(0x594f66);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594f68:{NFSU2_TR(0x594f68);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594f6c:{NFSU2_TR(0x594f6c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594f72:{NFSU2_TR(0x594f72);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594f74:{NFSU2_TR(0x594f74);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B594f77:{NFSU2_TR(0x594f77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594fed;}}
}
B594f79:L594f79:{c.instructions+=10;NFSU2_TR(0x594f79);
{u32 ea_=u32(u32(8372060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594f7f:{NFSU2_TR(0x594f7f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B594f83:{NFSU2_TR(0x594f83);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B594f87:{NFSU2_TR(0x594f87);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B594f8d:{NFSU2_TR(0x594f8d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B594f91:{NFSU2_TR(0x594f91);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594f97:{NFSU2_TR(0x594f97);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594f9b:{NFSU2_TR(0x594f9b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594f9d:{NFSU2_TR(0x594f9d);
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
B594fa0:{NFSU2_TR(0x594fa0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L594fab;}}
}
B594fa2:L594fa2:{c.instructions+=2;NFSU2_TR(0x594fa2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594fa8:{NFSU2_TR(0x594fa8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594fab:L594fab:{c.instructions+=6;NFSU2_TR(0x594fab);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594faf:{NFSU2_TR(0x594faf);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594fb3:{NFSU2_TR(0x594fb3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594fb9:{NFSU2_TR(0x594fb9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594fbb:{NFSU2_TR(0x594fbb);
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
B594fbe:{NFSU2_TR(0x594fbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x59501bu,595);}
}
B594fc0:L594fc0:{c.instructions+=3;NFSU2_TR(0x594fc0);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B594fc4:{NFSU2_TR(0x594fc4);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B594fc6:{NFSU2_TR(0x594fc6);
if(r1(R+518)){TAIL_STATIC(0x59501bu,595);}
}
B594fc8:L594fc8:{c.instructions+=6;NFSU2_TR(0x594fc8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B594fca:{NFSU2_TR(0x594fca);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594fce:{NFSU2_TR(0x594fce);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B594fd4:{NFSU2_TR(0x594fd4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B594fd6:{NFSU2_TR(0x594fd6);
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
B594fd9:{NFSU2_TR(0x594fd9);
if(r1(R+514)){{goto L594fe4;}}
}
B594fdb:L594fdb:{c.instructions+=2;NFSU2_TR(0x594fdb);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594fe1:{NFSU2_TR(0x594fe1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594fe4:L594fe4:{c.instructions+=2;NFSU2_TR(0x594fe4);
{u32 ea_=u32(u32(8002876u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594fea:{NFSU2_TR(0x594fea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B594fed:L594fed:{c.instructions+=5;NFSU2_TR(0x594fed);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594ff1:{NFSU2_TR(0x594ff1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B594ff3:{NFSU2_TR(0x594ff3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B594ff9:{NFSU2_TR(0x594ff9);
{u32 ea_=u32(u32(8372060u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B594fff:{NFSU2_TR(0x594fff);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x595003u,595);
}
XIT:NFSU2_TR_EXIT(0x594,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
