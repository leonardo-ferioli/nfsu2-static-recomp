#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_463(u8* __restrict R,Cpu& c);
u32 body_464(u8* __restrict R,Cpu& c);
u32 body_467(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x468,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x468,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_468(u8* __restrict R,Cpu& c);
u32 page_468(Cpu& c){return body_468(c.regs.data(),c);}
__attribute__((noinline)) u32 body_468(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x468000:goto L468000;
case 0x468005:c.instructions+=21;goto B468005;
case 0x468007:c.instructions+=20;goto B468007;
case 0x46800a:c.instructions+=19;goto B46800a;
case 0x46800c:c.instructions+=18;goto B46800c;
case 0x46800f:c.instructions+=17;goto B46800f;
case 0x468011:c.instructions+=16;goto B468011;
case 0x468013:c.instructions+=15;goto B468013;
case 0x468015:c.instructions+=14;goto B468015;
case 0x468016:c.instructions+=13;goto B468016;
case 0x46801b:c.instructions+=12;goto B46801b;
case 0x46801d:c.instructions+=11;goto B46801d;
case 0x468022:c.instructions+=10;goto B468022;
case 0x468028:c.instructions+=9;goto B468028;
case 0x46802a:c.instructions+=8;goto B46802a;
case 0x468030:c.instructions+=7;goto B468030;
case 0x468033:c.instructions+=6;goto B468033;
case 0x468035:c.instructions+=5;goto B468035;
case 0x468037:c.instructions+=4;goto B468037;
case 0x468039:c.instructions+=3;goto B468039;
case 0x46803c:c.instructions+=2;goto B46803c;
case 0x468041:c.instructions+=1;goto B468041;
case 0x468043:goto L468043;
case 0x468045:c.instructions+=1;goto B468045;
case 0x46804a:goto L46804a;
case 0x46804b:c.instructions+=1;goto B46804b;
case 0x468050:goto L468050;
case 0x468054:c.instructions+=5;goto B468054;
case 0x468057:c.instructions+=4;goto B468057;
case 0x468059:c.instructions+=3;goto B468059;
case 0x46805b:c.instructions+=2;goto B46805b;
case 0x468065:c.instructions+=1;goto B468065;
case 0x468067:goto L468067;
case 0x46806c:c.instructions+=2;goto B46806c;
case 0x46806f:c.instructions+=1;goto B46806f;
case 0x468070:goto L468070;
case 0x468073:c.instructions+=2;goto B468073;
case 0x468074:c.instructions+=1;goto B468074;
case 0x468076:goto L468076;
case 0x468079:c.instructions+=1;goto B468079;
case 0x46807f:goto L46807f;
case 0x468080:c.instructions+=5;goto B468080;
case 0x468085:c.instructions+=4;goto B468085;
case 0x468087:c.instructions+=3;goto B468087;
case 0x468089:c.instructions+=2;goto B468089;
case 0x46808b:c.instructions+=1;goto B46808b;
case 0x46808d:goto L46808d;
case 0x468092:c.instructions+=21;goto B468092;
case 0x468094:c.instructions+=20;goto B468094;
case 0x468096:c.instructions+=19;goto B468096;
case 0x46809e:c.instructions+=18;goto B46809e;
case 0x4680a6:c.instructions+=17;goto B4680a6;
case 0x4680ae:c.instructions+=16;goto B4680ae;
case 0x4680b0:c.instructions+=15;goto B4680b0;
case 0x4680b2:c.instructions+=14;goto B4680b2;
case 0x4680b5:c.instructions+=13;goto B4680b5;
case 0x4680b7:c.instructions+=12;goto B4680b7;
case 0x4680bd:c.instructions+=11;goto B4680bd;
case 0x4680c0:c.instructions+=10;goto B4680c0;
case 0x4680c8:c.instructions+=9;goto B4680c8;
case 0x4680d0:c.instructions+=8;goto B4680d0;
case 0x4680d8:c.instructions+=7;goto B4680d8;
case 0x4680e0:c.instructions+=6;goto B4680e0;
case 0x4680e8:c.instructions+=5;goto B4680e8;
case 0x4680f0:c.instructions+=4;goto B4680f0;
case 0x4680f8:c.instructions+=3;goto B4680f8;
case 0x468100:c.instructions+=2;goto B468100;
case 0x468108:c.instructions+=1;goto B468108;
case 0x46810a:goto L46810a;
case 0x46810d:c.instructions+=4;goto B46810d;
case 0x46810f:c.instructions+=3;goto B46810f;
case 0x468113:c.instructions+=2;goto B468113;
case 0x468115:c.instructions+=1;goto B468115;
case 0x468117:goto L468117;
case 0x46811c:c.instructions+=2;goto B46811c;
case 0x46811e:c.instructions+=1;goto B46811e;
case 0x468120:goto L468120;
case 0x468127:c.instructions+=2;goto B468127;
case 0x46812c:c.instructions+=1;goto B46812c;
case 0x46812e:goto L46812e;
case 0x468133:goto L468133;
case 0x468134:c.instructions+=2;goto B468134;
case 0x468137:c.instructions+=1;goto B468137;
case 0x468140:goto L468140;
case 0x468141:c.instructions+=3;goto B468141;
case 0x468145:c.instructions+=2;goto B468145;
case 0x468146:c.instructions+=1;goto B468146;
case 0x46814b:goto L46814b;
case 0x46814f:c.instructions+=4;goto B46814f;
case 0x468153:c.instructions+=3;goto B468153;
case 0x468159:c.instructions+=2;goto B468159;
case 0x46815c:c.instructions+=1;goto B46815c;
case 0x468160:goto L468160;
case 0x468164:c.instructions+=3;goto B468164;
case 0x468167:c.instructions+=2;goto B468167;
case 0x468168:c.instructions+=1;goto B468168;
case 0x46816e:goto L46816e;
case 0x468172:c.instructions+=1;goto B468172;
case 0x468176:goto L468176;
case 0x46817d:goto L46817d;
case 0x46817f:c.instructions+=1;goto B46817f;
case 0x468185:goto L468185;
case 0x46818a:c.instructions+=4;goto B46818a;
case 0x46818c:c.instructions+=3;goto B46818c;
case 0x46818e:c.instructions+=2;goto B46818e;
case 0x468193:c.instructions+=1;goto B468193;
case 0x468195:goto L468195;
case 0x468197:c.instructions+=1;goto B468197;
case 0x46819d:goto L46819d;
case 0x4681a2:c.instructions+=4;goto B4681a2;
case 0x4681a4:c.instructions+=3;goto B4681a4;
case 0x4681a6:c.instructions+=2;goto B4681a6;
case 0x4681a8:c.instructions+=1;goto B4681a8;
case 0x4681aa:goto L4681aa;
case 0x4681ac:c.instructions+=1;goto B4681ac;
case 0x4681b2:goto L4681b2;
case 0x4681b7:c.instructions+=4;goto B4681b7;
case 0x4681b9:c.instructions+=3;goto B4681b9;
case 0x4681bb:c.instructions+=2;goto B4681bb;
case 0x4681c0:c.instructions+=1;goto B4681c0;
case 0x4681c2:goto L4681c2;
case 0x4681c4:c.instructions+=1;goto B4681c4;
case 0x4681ca:goto L4681ca;
case 0x4681cf:c.instructions+=4;goto B4681cf;
case 0x4681d1:c.instructions+=3;goto B4681d1;
case 0x4681d3:c.instructions+=2;goto B4681d3;
case 0x4681d8:c.instructions+=1;goto B4681d8;
case 0x4681da:goto L4681da;
case 0x4681dc:c.instructions+=1;goto B4681dc;
case 0x4681e2:goto L4681e2;
case 0x4681e7:c.instructions+=3;goto B4681e7;
case 0x4681e9:c.instructions+=2;goto B4681e9;
case 0x4681eb:c.instructions+=1;goto B4681eb;
case 0x4681f0:goto L4681f0;
case 0x4681f3:c.instructions+=1;goto B4681f3;
case 0x4681f5:goto L4681f5;
case 0x4681f7:goto L4681f7;
case 0x4681f8:c.instructions+=1;goto B4681f8;
case 0x4681f9:goto L4681f9;
case 0x4681fb:c.instructions+=1;goto B4681fb;
case 0x4681fd:goto L4681fd;
case 0x468202:c.instructions+=3;goto B468202;
case 0x468204:c.instructions+=2;goto B468204;
case 0x468205:c.instructions+=1;goto B468205;
case 0x46820a:goto L46820a;
case 0x46820d:c.instructions+=2;goto B46820d;
case 0x46820e:c.instructions+=1;goto B46820e;
case 0x46820f:goto L46820f;
case 0x468214:c.instructions+=3;goto B468214;
case 0x468216:c.instructions+=2;goto B468216;
case 0x468217:c.instructions+=1;goto B468217;
case 0x468218:goto L468218;
case 0x46821a:c.instructions+=4;goto B46821a;
case 0x46821d:c.instructions+=3;goto B46821d;
case 0x468224:c.instructions+=2;goto B468224;
case 0x468226:c.instructions+=1;goto B468226;
case 0x46822c:goto L46822c;
case 0x468233:c.instructions+=8;goto B468233;
case 0x468236:c.instructions+=7;goto B468236;
case 0x468239:c.instructions+=6;goto B468239;
case 0x46823b:c.instructions+=5;goto B46823b;
case 0x468241:c.instructions+=4;goto B468241;
case 0x468244:c.instructions+=3;goto B468244;
case 0x468247:c.instructions+=2;goto B468247;
case 0x468249:c.instructions+=1;goto B468249;
case 0x46824b:goto L46824b;
case 0x46824d:c.instructions+=1;goto B46824d;
case 0x46824f:goto L46824f;
case 0x468251:c.instructions+=2;goto B468251;
case 0x468252:c.instructions+=1;goto B468252;
case 0x468254:goto L468254;
case 0x468259:goto L468259;
case 0x46825c:c.instructions+=1;goto B46825c;
case 0x46825e:goto L46825e;
case 0x468263:c.instructions+=1;goto B468263;
case 0x468265:goto L468265;
case 0x46826a:c.instructions+=2;goto B46826a;
case 0x46826b:c.instructions+=1;goto B46826b;
case 0x46826c:goto L46826c;
case 0x46826e:c.instructions+=3;goto B46826e;
case 0x46826f:c.instructions+=2;goto B46826f;
case 0x468271:c.instructions+=1;goto B468271;
case 0x468276:goto L468276;
case 0x468279:c.instructions+=4;goto B468279;
case 0x46827c:c.instructions+=3;goto B46827c;
case 0x46827f:c.instructions+=2;goto B46827f;
case 0x468280:c.instructions+=1;goto B468280;
case 0x468281:goto L468281;
case 0x468283:c.instructions+=20;goto B468283;
case 0x468286:c.instructions+=19;goto B468286;
case 0x468287:c.instructions+=18;goto B468287;
case 0x468288:c.instructions+=17;goto B468288;
case 0x46828d:c.instructions+=16;goto B46828d;
case 0x46828f:c.instructions+=15;goto B46828f;
case 0x468296:c.instructions+=14;goto B468296;
case 0x46829d:c.instructions+=13;goto B46829d;
case 0x4682a2:c.instructions+=12;goto B4682a2;
case 0x4682a4:c.instructions+=11;goto B4682a4;
case 0x4682a7:c.instructions+=10;goto B4682a7;
case 0x4682ac:c.instructions+=9;goto B4682ac;
case 0x4682ae:c.instructions+=8;goto B4682ae;
case 0x4682b0:c.instructions+=7;goto B4682b0;
case 0x4682b3:c.instructions+=6;goto B4682b3;
case 0x4682b9:c.instructions+=5;goto B4682b9;
case 0x4682bc:c.instructions+=4;goto B4682bc;
case 0x4682bf:c.instructions+=3;goto B4682bf;
case 0x4682c1:c.instructions+=2;goto B4682c1;
case 0x4682c2:c.instructions+=1;goto B4682c2;
case 0x4682c3:goto L4682c3;
case 0x4682c5:c.instructions+=1;goto B4682c5;
case 0x4682cb:goto L4682cb;
case 0x4682cc:c.instructions+=1;goto B4682cc;
case 0x4682d1:goto L4682d1;
case 0x4682d4:c.instructions+=1;goto B4682d4;
case 0x4682d6:goto L4682d6;
case 0x4682d8:c.instructions+=1;goto B4682d8;
case 0x4682da:goto L4682da;
case 0x4682dc:c.instructions+=3;goto B4682dc;
case 0x4682dd:c.instructions+=2;goto B4682dd;
case 0x4682df:c.instructions+=1;goto B4682df;
case 0x4682e4:goto L4682e4;
case 0x4682e6:c.instructions+=3;goto B4682e6;
case 0x4682e7:c.instructions+=2;goto B4682e7;
case 0x4682e9:c.instructions+=1;goto B4682e9;
case 0x4682ee:goto L4682ee;
case 0x4682f1:c.instructions+=4;goto B4682f1;
case 0x4682f4:c.instructions+=3;goto B4682f4;
case 0x4682f7:c.instructions+=2;goto B4682f7;
case 0x4682f8:c.instructions+=1;goto B4682f8;
case 0x4682f9:goto L4682f9;
case 0x4682fb:c.instructions+=3;goto B4682fb;
case 0x4682fc:c.instructions+=2;goto B4682fc;
case 0x4682fe:c.instructions+=1;goto B4682fe;
case 0x468303:goto L468303;
case 0x468306:c.instructions+=3;goto B468306;
case 0x468308:c.instructions+=2;goto B468308;
case 0x468309:c.instructions+=1;goto B468309;
case 0x46830a:goto L46830a;
case 0x46830c:c.instructions+=3;goto B46830c;
case 0x46830d:c.instructions+=2;goto B46830d;
case 0x46830f:c.instructions+=1;goto B46830f;
case 0x468314:goto L468314;
case 0x468317:c.instructions+=3;goto B468317;
case 0x468319:c.instructions+=2;goto B468319;
case 0x46831a:c.instructions+=1;goto B46831a;
case 0x46831b:goto L46831b;
case 0x46831d:c.instructions+=3;goto B46831d;
case 0x46831e:c.instructions+=2;goto B46831e;
case 0x468320:c.instructions+=1;goto B468320;
case 0x468325:goto L468325;
case 0x468328:c.instructions+=3;goto B468328;
case 0x46832a:c.instructions+=2;goto B46832a;
case 0x46832b:c.instructions+=1;goto B46832b;
case 0x46832c:goto L46832c;
case 0x46832e:c.instructions+=3;goto B46832e;
case 0x46832f:c.instructions+=2;goto B46832f;
case 0x468331:c.instructions+=1;goto B468331;
case 0x468336:goto L468336;
case 0x468339:c.instructions+=3;goto B468339;
case 0x46833b:c.instructions+=2;goto B46833b;
case 0x46833c:c.instructions+=1;goto B46833c;
case 0x46833d:goto L46833d;
case 0x46833f:c.instructions+=3;goto B46833f;
case 0x468340:c.instructions+=2;goto B468340;
case 0x468342:c.instructions+=1;goto B468342;
case 0x468347:goto L468347;
case 0x46834a:c.instructions+=3;goto B46834a;
case 0x46834c:c.instructions+=2;goto B46834c;
case 0x46834d:c.instructions+=1;goto B46834d;
case 0x468380:goto L468380;
case 0x468381:c.instructions+=10;goto B468381;
case 0x468382:c.instructions+=9;goto B468382;
case 0x468383:c.instructions+=8;goto B468383;
case 0x468387:c.instructions+=7;goto B468387;
case 0x468389:c.instructions+=6;goto B468389;
case 0x46838a:c.instructions+=5;goto B46838a;
case 0x46838e:c.instructions+=4;goto B46838e;
case 0x468390:c.instructions+=3;goto B468390;
case 0x468391:c.instructions+=2;goto B468391;
case 0x468392:c.instructions+=1;goto B468392;
case 0x468397:goto L468397;
case 0x46839b:c.instructions+=5;goto B46839b;
case 0x46839e:c.instructions+=4;goto B46839e;
case 0x4683a0:c.instructions+=3;goto B4683a0;
case 0x4683a2:c.instructions+=2;goto B4683a2;
case 0x4683a7:c.instructions+=1;goto B4683a7;
case 0x4683a9:goto L4683a9;
case 0x4683ac:c.instructions+=4;goto B4683ac;
case 0x4683ae:c.instructions+=3;goto B4683ae;
case 0x4683af:c.instructions+=2;goto B4683af;
case 0x4683b0:c.instructions+=1;goto B4683b0;
case 0x4683b5:goto L4683b5;
case 0x4683b8:goto L4683b8;
case 0x4683bc:c.instructions+=9;goto B4683bc;
case 0x4683c1:c.instructions+=8;goto B4683c1;
case 0x4683c3:c.instructions+=7;goto B4683c3;
case 0x4683c6:c.instructions+=6;goto B4683c6;
case 0x4683c9:c.instructions+=5;goto B4683c9;
case 0x4683cc:c.instructions+=4;goto B4683cc;
case 0x4683cf:c.instructions+=3;goto B4683cf;
case 0x4683d1:c.instructions+=2;goto B4683d1;
case 0x4683d2:c.instructions+=1;goto B4683d2;
case 0x4683d7:goto L4683d7;
case 0x4683da:c.instructions+=5;goto B4683da;
case 0x4683db:c.instructions+=4;goto B4683db;
case 0x4683dc:c.instructions+=3;goto B4683dc;
case 0x4683dd:c.instructions+=2;goto B4683dd;
case 0x4683de:c.instructions+=1;goto B4683de;
case 0x4683e0:goto L4683e0;
case 0x4683e4:c.instructions+=19;goto B4683e4;
case 0x4683e7:c.instructions+=18;goto B4683e7;
case 0x4683e9:c.instructions+=17;goto B4683e9;
case 0x4683ea:c.instructions+=16;goto B4683ea;
case 0x4683ee:c.instructions+=15;goto B4683ee;
case 0x4683f0:c.instructions+=14;goto B4683f0;
case 0x4683f3:c.instructions+=13;goto B4683f3;
case 0x4683f8:c.instructions+=12;goto B4683f8;
case 0x4683fa:c.instructions+=11;goto B4683fa;
case 0x4683fe:c.instructions+=10;goto B4683fe;
case 0x468403:c.instructions+=9;goto B468403;
case 0x468406:c.instructions+=8;goto B468406;
case 0x468409:c.instructions+=7;goto B468409;
case 0x46840b:c.instructions+=6;goto B46840b;
case 0x46840e:c.instructions+=5;goto B46840e;
case 0x468413:c.instructions+=4;goto B468413;
case 0x468418:c.instructions+=3;goto B468418;
case 0x46841f:c.instructions+=2;goto B46841f;
case 0x468420:c.instructions+=1;goto B468420;
case 0x468430:goto L468430;
case 0x468434:c.instructions+=13;goto B468434;
case 0x468437:c.instructions+=12;goto B468437;
case 0x46843a:c.instructions+=11;goto B46843a;
case 0x46843d:c.instructions+=10;goto B46843d;
case 0x46843f:c.instructions+=9;goto B46843f;
case 0x468445:c.instructions+=8;goto B468445;
case 0x468448:c.instructions+=7;goto B468448;
case 0x46844b:c.instructions+=6;goto B46844b;
case 0x46844c:c.instructions+=5;goto B46844c;
case 0x46844e:c.instructions+=4;goto B46844e;
case 0x468452:c.instructions+=3;goto B468452;
case 0x468454:c.instructions+=2;goto B468454;
case 0x46845a:c.instructions+=1;goto B46845a;
case 0x46845c:goto L46845c;
case 0x46845e:goto L46845e;
case 0x468460:c.instructions+=4;goto B468460;
case 0x468464:c.instructions+=3;goto B468464;
case 0x46846a:c.instructions+=2;goto B46846a;
case 0x46846c:c.instructions+=1;goto B46846c;
case 0x46846e:goto L46846e;
case 0x468470:goto L468470;
case 0x468472:c.instructions+=4;goto B468472;
case 0x468476:c.instructions+=3;goto B468476;
case 0x46847c:c.instructions+=2;goto B46847c;
case 0x46847e:c.instructions+=1;goto B46847e;
case 0x468480:goto L468480;
case 0x468482:goto L468482;
case 0x468486:c.instructions+=4;goto B468486;
case 0x46848c:c.instructions+=3;goto B46848c;
case 0x46848e:c.instructions+=2;goto B46848e;
case 0x46848f:c.instructions+=1;goto B46848f;
case 0x468491:goto L468491;
case 0x468494:c.instructions+=2;goto B468494;
case 0x468497:c.instructions+=1;goto B468497;
case 0x46849a:goto L46849a;
case 0x46849d:c.instructions+=2;goto B46849d;
case 0x4684a0:c.instructions+=1;goto B4684a0;
case 0x4684b0:goto L4684b0;
case 0x4684b1:c.instructions+=11;goto B4684b1;
case 0x4684b2:c.instructions+=10;goto B4684b2;
case 0x4684b4:c.instructions+=9;goto B4684b4;
case 0x4684b6:c.instructions+=8;goto B4684b6;
case 0x4684b9:c.instructions+=7;goto B4684b9;
case 0x4684ba:c.instructions+=6;goto B4684ba;
case 0x4684bf:c.instructions+=5;goto B4684bf;
case 0x4684c2:c.instructions+=4;goto B4684c2;
case 0x4684c4:c.instructions+=3;goto B4684c4;
case 0x4684c7:c.instructions+=2;goto B4684c7;
case 0x4684ca:c.instructions+=1;goto B4684ca;
case 0x4684cc:goto L4684cc;
case 0x4684d0:c.instructions+=2;goto B4684d0;
case 0x4684d2:c.instructions+=1;goto B4684d2;
case 0x4684d3:goto L4684d3;
case 0x4684d5:c.instructions+=5;goto B4684d5;
case 0x4684d8:c.instructions+=4;goto B4684d8;
case 0x4684db:c.instructions+=3;goto B4684db;
case 0x4684de:c.instructions+=2;goto B4684de;
case 0x4684e0:c.instructions+=1;goto B4684e0;
case 0x4684e2:goto L4684e2;
case 0x4684e3:c.instructions+=3;goto B4684e3;
case 0x4684e6:c.instructions+=2;goto B4684e6;
case 0x4684e8:c.instructions+=1;goto B4684e8;
case 0x4684ea:goto L4684ea;
case 0x4684ec:goto L4684ec;
case 0x4684f2:c.instructions+=4;goto B4684f2;
case 0x4684f8:c.instructions+=3;goto B4684f8;
case 0x4684fe:c.instructions+=2;goto B4684fe;
case 0x468501:c.instructions+=1;goto B468501;
case 0x468506:goto L468506;
case 0x468509:goto L468509;
case 0x46850a:goto L46850a;
case 0x46850d:c.instructions+=10;goto B46850d;
case 0x468510:c.instructions+=9;goto B468510;
case 0x468512:c.instructions+=8;goto B468512;
case 0x468517:c.instructions+=7;goto B468517;
case 0x46851a:c.instructions+=6;goto B46851a;
case 0x46851d:c.instructions+=5;goto B46851d;
case 0x46851f:c.instructions+=4;goto B46851f;
case 0x468523:c.instructions+=3;goto B468523;
case 0x468525:c.instructions+=2;goto B468525;
case 0x46852b:c.instructions+=1;goto B46852b;
case 0x46852d:goto L46852d;
case 0x46852f:goto L46852f;
case 0x468531:c.instructions+=4;goto B468531;
case 0x468535:c.instructions+=3;goto B468535;
case 0x46853b:c.instructions+=2;goto B46853b;
case 0x46853d:c.instructions+=1;goto B46853d;
case 0x46853f:goto L46853f;
case 0x468541:goto L468541;
case 0x468543:c.instructions+=4;goto B468543;
case 0x468547:c.instructions+=3;goto B468547;
case 0x46854d:c.instructions+=2;goto B46854d;
case 0x46854f:c.instructions+=1;goto B46854f;
case 0x468551:goto L468551;
case 0x468553:goto L468553;
case 0x468557:c.instructions+=3;goto B468557;
case 0x46855d:c.instructions+=2;goto B46855d;
case 0x46855f:c.instructions+=1;goto B46855f;
case 0x468561:goto L468561;
case 0x468564:c.instructions+=5;goto B468564;
case 0x468565:c.instructions+=4;goto B468565;
case 0x468566:c.instructions+=3;goto B468566;
case 0x468569:c.instructions+=2;goto B468569;
case 0x46856a:c.instructions+=1;goto B46856a;
case 0x46856d:goto L46856d;
case 0x468570:c.instructions+=5;goto B468570;
case 0x468571:c.instructions+=4;goto B468571;
case 0x468572:c.instructions+=3;goto B468572;
case 0x468575:c.instructions+=2;goto B468575;
case 0x468576:c.instructions+=1;goto B468576;
case 0x468580:goto L468580;
case 0x468583:c.instructions+=11;goto B468583;
case 0x468584:c.instructions+=10;goto B468584;
case 0x468585:c.instructions+=9;goto B468585;
case 0x468586:c.instructions+=8;goto B468586;
case 0x468588:c.instructions+=7;goto B468588;
case 0x46858b:c.instructions+=6;goto B46858b;
case 0x46858e:c.instructions+=5;goto B46858e;
case 0x468593:c.instructions+=4;goto B468593;
case 0x468595:c.instructions+=3;goto B468595;
case 0x468596:c.instructions+=2;goto B468596;
case 0x46859a:c.instructions+=1;goto B46859a;
case 0x46859c:goto L46859c;
case 0x4685a3:c.instructions+=2;goto B4685a3;
case 0x4685a5:c.instructions+=1;goto B4685a5;
case 0x4685a7:goto L4685a7;
case 0x4685ac:c.instructions+=2;goto B4685ac;
case 0x4685ae:c.instructions+=1;goto B4685ae;
case 0x4685b0:goto L4685b0;
case 0x4685b7:c.instructions+=2;goto B4685b7;
case 0x4685be:c.instructions+=1;goto B4685be;
case 0x4685c0:goto L4685c0;
case 0x4685c1:c.instructions+=2;goto B4685c1;
case 0x4685c3:c.instructions+=1;goto B4685c3;
case 0x4685c8:goto L4685c8;
case 0x4685cb:c.instructions+=13;goto B4685cb;
case 0x4685cd:c.instructions+=12;goto B4685cd;
case 0x4685d0:c.instructions+=11;goto B4685d0;
case 0x4685d2:c.instructions+=10;goto B4685d2;
case 0x4685d5:c.instructions+=9;goto B4685d5;
case 0x4685d8:c.instructions+=8;goto B4685d8;
case 0x4685da:c.instructions+=7;goto B4685da;
case 0x4685dd:c.instructions+=6;goto B4685dd;
case 0x4685e0:c.instructions+=5;goto B4685e0;
case 0x4685e5:c.instructions+=4;goto B4685e5;
case 0x4685e7:c.instructions+=3;goto B4685e7;
case 0x4685ec:c.instructions+=2;goto B4685ec;
case 0x4685ee:c.instructions+=1;goto B4685ee;
case 0x4685f0:goto L4685f0;
case 0x4685f1:c.instructions+=1;goto B4685f1;
case 0x4685f3:goto L4685f3;
case 0x4685f9:c.instructions+=1;goto B4685f9;
case 0x4685fb:goto L4685fb;
case 0x4685ff:c.instructions+=3;goto B4685ff;
case 0x468602:c.instructions+=2;goto B468602;
case 0x468604:c.instructions+=1;goto B468604;
case 0x468606:goto L468606;
case 0x46860a:c.instructions+=2;goto B46860a;
case 0x46860d:c.instructions+=1;goto B46860d;
case 0x468610:goto L468610;
case 0x468613:c.instructions+=2;goto B468613;
case 0x468617:c.instructions+=1;goto B468617;
case 0x468619:goto L468619;
case 0x46861a:c.instructions+=1;goto B46861a;
case 0x46861c:goto L46861c;
case 0x468620:c.instructions+=3;goto B468620;
case 0x468623:c.instructions+=2;goto B468623;
case 0x468626:c.instructions+=1;goto B468626;
case 0x468628:goto L468628;
case 0x46862c:c.instructions+=2;goto B46862c;
case 0x46862f:c.instructions+=1;goto B46862f;
case 0x468632:goto L468632;
case 0x468635:goto L468635;
case 0x468639:c.instructions+=6;goto B468639;
case 0x46863c:c.instructions+=5;goto B46863c;
case 0x46863e:c.instructions+=4;goto B46863e;
case 0x468641:c.instructions+=3;goto B468641;
case 0x468644:c.instructions+=2;goto B468644;
case 0x468647:c.instructions+=1;goto B468647;
case 0x46864d:goto L46864d;
case 0x468654:goto L468654;
case 0x468657:c.instructions+=25;goto B468657;
case 0x46865a:c.instructions+=24;goto B46865a;
case 0x46865c:c.instructions+=23;goto B46865c;
case 0x468662:c.instructions+=22;goto B468662;
case 0x468666:c.instructions+=21;goto B468666;
case 0x46866a:c.instructions+=20;goto B46866a;
case 0x46866d:c.instructions+=19;goto B46866d;
case 0x468673:c.instructions+=18;goto B468673;
case 0x468677:c.instructions+=17;goto B468677;
case 0x46867b:c.instructions+=16;goto B46867b;
case 0x46867d:c.instructions+=15;goto B46867d;
case 0x468681:c.instructions+=14;goto B468681;
case 0x468687:c.instructions+=13;goto B468687;
case 0x46868b:c.instructions+=12;goto B46868b;
case 0x46868e:c.instructions+=11;goto B46868e;
case 0x468692:c.instructions+=10;goto B468692;
case 0x468698:c.instructions+=9;goto B468698;
case 0x46869c:c.instructions+=8;goto B46869c;
case 0x46869e:c.instructions+=7;goto B46869e;
case 0x4686a2:c.instructions+=6;goto B4686a2;
case 0x4686a5:c.instructions+=5;goto B4686a5;
case 0x4686a9:c.instructions+=4;goto B4686a9;
case 0x4686ac:c.instructions+=3;goto B4686ac;
case 0x4686b0:c.instructions+=2;goto B4686b0;
case 0x4686b2:c.instructions+=1;goto B4686b2;
case 0x4686b7:goto L4686b7;
case 0x4686ba:c.instructions+=25;goto B4686ba;
case 0x4686bd:c.instructions+=24;goto B4686bd;
case 0x4686bf:c.instructions+=23;goto B4686bf;
case 0x4686c5:c.instructions+=22;goto B4686c5;
case 0x4686c9:c.instructions+=21;goto B4686c9;
case 0x4686cd:c.instructions+=20;goto B4686cd;
case 0x4686d0:c.instructions+=19;goto B4686d0;
case 0x4686d6:c.instructions+=18;goto B4686d6;
case 0x4686da:c.instructions+=17;goto B4686da;
case 0x4686de:c.instructions+=16;goto B4686de;
case 0x4686e0:c.instructions+=15;goto B4686e0;
case 0x4686e4:c.instructions+=14;goto B4686e4;
case 0x4686ea:c.instructions+=13;goto B4686ea;
case 0x4686ee:c.instructions+=12;goto B4686ee;
case 0x4686f1:c.instructions+=11;goto B4686f1;
case 0x4686f5:c.instructions+=10;goto B4686f5;
case 0x4686fb:c.instructions+=9;goto B4686fb;
case 0x4686ff:c.instructions+=8;goto B4686ff;
case 0x468701:c.instructions+=7;goto B468701;
case 0x468705:c.instructions+=6;goto B468705;
case 0x468708:c.instructions+=5;goto B468708;
case 0x46870c:c.instructions+=4;goto B46870c;
case 0x46870f:c.instructions+=3;goto B46870f;
case 0x468713:c.instructions+=2;goto B468713;
case 0x468719:c.instructions+=1;goto B468719;
case 0x46871e:goto L46871e;
case 0x468721:c.instructions+=25;goto B468721;
case 0x468724:c.instructions+=24;goto B468724;
case 0x468726:c.instructions+=23;goto B468726;
case 0x46872c:c.instructions+=22;goto B46872c;
case 0x468730:c.instructions+=21;goto B468730;
case 0x468734:c.instructions+=20;goto B468734;
case 0x468737:c.instructions+=19;goto B468737;
case 0x46873d:c.instructions+=18;goto B46873d;
case 0x468741:c.instructions+=17;goto B468741;
case 0x468745:c.instructions+=16;goto B468745;
case 0x468747:c.instructions+=15;goto B468747;
case 0x46874b:c.instructions+=14;goto B46874b;
case 0x468751:c.instructions+=13;goto B468751;
case 0x468755:c.instructions+=12;goto B468755;
case 0x468758:c.instructions+=11;goto B468758;
case 0x46875c:c.instructions+=10;goto B46875c;
case 0x468762:c.instructions+=9;goto B468762;
case 0x468766:c.instructions+=8;goto B468766;
case 0x468768:c.instructions+=7;goto B468768;
case 0x46876c:c.instructions+=6;goto B46876c;
case 0x46876f:c.instructions+=5;goto B46876f;
case 0x468773:c.instructions+=4;goto B468773;
case 0x468776:c.instructions+=3;goto B468776;
case 0x46877a:c.instructions+=2;goto B46877a;
case 0x468780:c.instructions+=1;goto B468780;
case 0x468782:goto L468782;
case 0x468785:c.instructions+=24;goto B468785;
case 0x468788:c.instructions+=23;goto B468788;
case 0x46878a:c.instructions+=22;goto B46878a;
case 0x468790:c.instructions+=21;goto B468790;
case 0x468794:c.instructions+=20;goto B468794;
case 0x468798:c.instructions+=19;goto B468798;
case 0x46879b:c.instructions+=18;goto B46879b;
case 0x4687a1:c.instructions+=17;goto B4687a1;
case 0x4687a5:c.instructions+=16;goto B4687a5;
case 0x4687a9:c.instructions+=15;goto B4687a9;
case 0x4687ab:c.instructions+=14;goto B4687ab;
case 0x4687af:c.instructions+=13;goto B4687af;
case 0x4687b5:c.instructions+=12;goto B4687b5;
case 0x4687b9:c.instructions+=11;goto B4687b9;
case 0x4687bc:c.instructions+=10;goto B4687bc;
case 0x4687c0:c.instructions+=9;goto B4687c0;
case 0x4687c6:c.instructions+=8;goto B4687c6;
case 0x4687ca:c.instructions+=7;goto B4687ca;
case 0x4687cc:c.instructions+=6;goto B4687cc;
case 0x4687d0:c.instructions+=5;goto B4687d0;
case 0x4687d3:c.instructions+=4;goto B4687d3;
case 0x4687d7:c.instructions+=3;goto B4687d7;
case 0x4687da:c.instructions+=2;goto B4687da;
case 0x4687de:c.instructions+=1;goto B4687de;
case 0x4687e4:goto L4687e4;
case 0x4687e7:c.instructions+=3;goto B4687e7;
case 0x4687eb:c.instructions+=2;goto B4687eb;
case 0x4687ee:c.instructions+=1;goto B4687ee;
case 0x4687f0:goto L4687f0;
case 0x4687f4:c.instructions+=3;goto B4687f4;
case 0x4687f6:c.instructions+=2;goto B4687f6;
case 0x4687f9:c.instructions+=1;goto B4687f9;
case 0x4687fb:goto L4687fb;
case 0x4687ff:c.instructions+=3;goto B4687ff;
case 0x468801:c.instructions+=2;goto B468801;
case 0x468804:c.instructions+=1;goto B468804;
case 0x468806:goto L468806;
case 0x46880a:c.instructions+=8;goto B46880a;
case 0x46880c:c.instructions+=7;goto B46880c;
case 0x46880d:c.instructions+=6;goto B46880d;
case 0x46880e:c.instructions+=5;goto B46880e;
case 0x46880f:c.instructions+=4;goto B46880f;
case 0x468816:c.instructions+=3;goto B468816;
case 0x468817:c.instructions+=2;goto B468817;
case 0x46881a:c.instructions+=1;goto B46881a;
case 0x46881b:goto L46881b;
case 0x46881f:c.instructions+=3;goto B46881f;
case 0x468821:c.instructions+=2;goto B468821;
case 0x468824:c.instructions+=1;goto B468824;
case 0x468826:goto L468826;
case 0x468828:c.instructions+=1;goto B468828;
case 0x46882c:goto L46882c;
case 0x468830:c.instructions+=4;goto B468830;
case 0x468834:c.instructions+=3;goto B468834;
case 0x468836:c.instructions+=2;goto B468836;
case 0x468839:c.instructions+=1;goto B468839;
case 0x46883b:goto L46883b;
case 0x46883f:c.instructions+=1;goto B46883f;
case 0x468843:goto L468843;
case 0x468847:c.instructions+=3;goto B468847;
case 0x468849:c.instructions+=2;goto B468849;
case 0x46884c:c.instructions+=1;goto B46884c;
case 0x46884e:goto L46884e;
case 0x468850:c.instructions+=1;goto B468850;
case 0x468854:goto L468854;
case 0x468858:c.instructions+=4;goto B468858;
case 0x46885c:c.instructions+=3;goto B46885c;
case 0x46885e:c.instructions+=2;goto B46885e;
case 0x468861:c.instructions+=1;goto B468861;
case 0x468863:goto L468863;
case 0x468867:c.instructions+=1;goto B468867;
case 0x46886b:goto L46886b;
case 0x46886f:c.instructions+=11;goto B46886f;
case 0x468873:c.instructions+=10;goto B468873;
case 0x468877:c.instructions+=9;goto B468877;
case 0x468879:c.instructions+=8;goto B468879;
case 0x46887d:c.instructions+=7;goto B46887d;
case 0x468881:c.instructions+=6;goto B468881;
case 0x468885:c.instructions+=5;goto B468885;
case 0x468889:c.instructions+=4;goto B468889;
case 0x46888b:c.instructions+=3;goto B46888b;
case 0x46888f:c.instructions+=2;goto B46888f;
case 0x468895:c.instructions+=1;goto B468895;
case 0x46889a:goto L46889a;
case 0x46889e:c.instructions+=3;goto B46889e;
case 0x4688a4:c.instructions+=2;goto B4688a4;
case 0x4688a9:c.instructions+=1;goto B4688a9;
case 0x4688ae:goto L4688ae;
case 0x4688af:c.instructions+=5;goto B4688af;
case 0x4688b4:c.instructions+=4;goto B4688b4;
case 0x4688b5:c.instructions+=3;goto B4688b5;
case 0x4688b6:c.instructions+=2;goto B4688b6;
case 0x4688bb:c.instructions+=1;goto B4688bb;
case 0x4688c0:goto L4688c0;
case 0x4688c4:c.instructions+=9;goto B4688c4;
case 0x4688c7:c.instructions+=8;goto B4688c7;
case 0x4688c8:c.instructions+=7;goto B4688c8;
case 0x4688c9:c.instructions+=6;goto B4688c9;
case 0x4688ca:c.instructions+=5;goto B4688ca;
case 0x4688cd:c.instructions+=4;goto B4688cd;
case 0x4688d0:c.instructions+=3;goto B4688d0;
case 0x4688d1:c.instructions+=2;goto B4688d1;
case 0x4688d4:c.instructions+=1;goto B4688d4;
case 0x4688f0:goto L4688f0;
case 0x4688f3:c.instructions+=1;goto B4688f3;
case 0x468900:goto L468900;
case 0x468904:c.instructions+=7;goto B468904;
case 0x468907:c.instructions+=6;goto B468907;
case 0x46890e:c.instructions+=5;goto B46890e;
case 0x468911:c.instructions+=4;goto B468911;
case 0x468916:c.instructions+=3;goto B468916;
case 0x46891b:c.instructions+=2;goto B46891b;
case 0x46891e:c.instructions+=1;goto B46891e;
case 0x468920:goto L468920;
case 0x468923:c.instructions+=2;goto B468923;
case 0x468928:c.instructions+=1;goto B468928;
case 0x46892b:goto L46892b;
case 0x468930:goto L468930;
case 0x468933:c.instructions+=2;goto B468933;
case 0x468935:c.instructions+=1;goto B468935;
case 0x468940:goto L468940;
case 0x468943:c.instructions+=2;goto B468943;
case 0x468946:c.instructions+=1;goto B468946;
case 0x468950:goto L468950;
case 0x468953:c.instructions+=2;goto B468953;
case 0x468956:c.instructions+=1;goto B468956;
case 0x468960:goto L468960;
case 0x468961:c.instructions+=28;goto B468961;
case 0x468962:c.instructions+=27;goto B468962;
case 0x468963:c.instructions+=26;goto B468963;
case 0x468965:c.instructions+=25;goto B468965;
case 0x468968:c.instructions+=24;goto B468968;
case 0x46896b:c.instructions+=23;goto B46896b;
case 0x46896d:c.instructions+=22;goto B46896d;
case 0x468970:c.instructions+=21;goto B468970;
case 0x468973:c.instructions+=20;goto B468973;
case 0x468974:c.instructions+=19;goto B468974;
case 0x468976:c.instructions+=18;goto B468976;
case 0x468979:c.instructions+=17;goto B468979;
case 0x46897f:c.instructions+=16;goto B46897f;
case 0x468981:c.instructions+=15;goto B468981;
case 0x468985:c.instructions+=14;goto B468985;
case 0x468989:c.instructions+=13;goto B468989;
case 0x46898f:c.instructions+=12;goto B46898f;
case 0x468993:c.instructions+=11;goto B468993;
case 0x468996:c.instructions+=10;goto B468996;
case 0x46899c:c.instructions+=9;goto B46899c;
case 0x46899f:c.instructions+=8;goto B46899f;
case 0x4689a3:c.instructions+=7;goto B4689a3;
case 0x4689a5:c.instructions+=6;goto B4689a5;
case 0x4689ab:c.instructions+=5;goto B4689ab;
case 0x4689af:c.instructions+=4;goto B4689af;
case 0x4689b2:c.instructions+=3;goto B4689b2;
case 0x4689b4:c.instructions+=2;goto B4689b4;
case 0x4689b7:c.instructions+=1;goto B4689b7;
case 0x4689b9:goto L4689b9;
case 0x4689bc:c.instructions+=3;goto B4689bc;
case 0x4689c2:c.instructions+=2;goto B4689c2;
case 0x4689c4:c.instructions+=1;goto B4689c4;
case 0x4689c9:goto L4689c9;
case 0x4689cb:c.instructions+=6;goto B4689cb;
case 0x4689ce:c.instructions+=5;goto B4689ce;
case 0x4689d0:c.instructions+=4;goto B4689d0;
case 0x4689d2:c.instructions+=3;goto B4689d2;
case 0x4689d3:c.instructions+=2;goto B4689d3;
case 0x4689d4:c.instructions+=1;goto B4689d4;
case 0x4689d6:goto L4689d6;
case 0x4689db:goto L4689db;
case 0x4689de:c.instructions+=8;goto B4689de;
case 0x4689e3:c.instructions+=7;goto B4689e3;
case 0x4689e5:c.instructions+=6;goto B4689e5;
case 0x4689e6:c.instructions+=5;goto B4689e6;
case 0x4689e9:c.instructions+=4;goto B4689e9;
case 0x4689ea:c.instructions+=3;goto B4689ea;
case 0x4689eb:c.instructions+=2;goto B4689eb;
case 0x4689ec:c.instructions+=1;goto B4689ec;
case 0x4689ed:goto L4689ed;
case 0x4689f0:c.instructions+=4;goto B4689f0;
case 0x4689f4:c.instructions+=3;goto B4689f4;
case 0x4689f6:c.instructions+=2;goto B4689f6;
case 0x4689f9:c.instructions+=1;goto B4689f9;
case 0x4689fb:goto L4689fb;
case 0x468a01:c.instructions+=3;goto B468a01;
case 0x468a05:c.instructions+=2;goto B468a05;
case 0x468a0b:c.instructions+=1;goto B468a0b;
case 0x468a10:goto L468a10;
case 0x468a12:c.instructions+=1;goto B468a12;
case 0x468a14:goto L468a14;
case 0x468a16:c.instructions+=1;goto B468a16;
case 0x468a18:goto L468a18;
case 0x468a1d:c.instructions+=1;goto B468a1d;
case 0x468a1f:goto L468a1f;
case 0x468a24:goto L468a24;
case 0x468a27:c.instructions+=5;goto B468a27;
case 0x468a29:c.instructions+=4;goto B468a29;
case 0x468a2b:c.instructions+=3;goto B468a2b;
case 0x468a2c:c.instructions+=2;goto B468a2c;
case 0x468a2d:c.instructions+=1;goto B468a2d;
case 0x468a2f:goto L468a2f;
case 0x468a34:goto L468a34;
case 0x468a37:c.instructions+=6;goto B468a37;
case 0x468a38:c.instructions+=5;goto B468a38;
case 0x468a3b:c.instructions+=4;goto B468a3b;
case 0x468a3c:c.instructions+=3;goto B468a3c;
case 0x468a3d:c.instructions+=2;goto B468a3d;
case 0x468a3e:c.instructions+=1;goto B468a3e;
case 0x468a3f:goto L468a3f;
case 0x468a44:goto L468a44;
case 0x468a47:c.instructions+=8;goto B468a47;
case 0x468a4c:c.instructions+=7;goto B468a4c;
case 0x468a4e:c.instructions+=6;goto B468a4e;
case 0x468a4f:c.instructions+=5;goto B468a4f;
case 0x468a52:c.instructions+=4;goto B468a52;
case 0x468a53:c.instructions+=3;goto B468a53;
case 0x468a54:c.instructions+=2;goto B468a54;
case 0x468a55:c.instructions+=1;goto B468a55;
case 0x468a56:goto L468a56;
case 0x468a57:c.instructions+=7;goto B468a57;
case 0x468a59:c.instructions+=6;goto B468a59;
case 0x468a60:c.instructions+=5;goto B468a60;
case 0x468a67:c.instructions+=4;goto B468a67;
case 0x468a68:c.instructions+=3;goto B468a68;
case 0x468a69:c.instructions+=2;goto B468a69;
case 0x468a6a:c.instructions+=1;goto B468a6a;
case 0x468a70:goto L468a70;
case 0x468a73:c.instructions+=35;goto B468a73;
case 0x468a74:c.instructions+=34;goto B468a74;
case 0x468a75:c.instructions+=33;goto B468a75;
case 0x468a77:c.instructions+=32;goto B468a77;
case 0x468a7a:c.instructions+=31;goto B468a7a;
case 0x468a7d:c.instructions+=30;goto B468a7d;
case 0x468a7f:c.instructions+=29;goto B468a7f;
case 0x468a82:c.instructions+=28;goto B468a82;
case 0x468a85:c.instructions+=27;goto B468a85;
case 0x468a8b:c.instructions+=26;goto B468a8b;
case 0x468a8c:c.instructions+=25;goto B468a8c;
case 0x468a8e:c.instructions+=24;goto B468a8e;
case 0x468a91:c.instructions+=23;goto B468a91;
case 0x468a96:c.instructions+=22;goto B468a96;
case 0x468a9a:c.instructions+=21;goto B468a9a;
case 0x468a9e:c.instructions+=20;goto B468a9e;
case 0x468aa2:c.instructions+=19;goto B468aa2;
case 0x468aa5:c.instructions+=18;goto B468aa5;
case 0x468aa7:c.instructions+=17;goto B468aa7;
case 0x468aad:c.instructions+=16;goto B468aad;
case 0x468ab3:c.instructions+=15;goto B468ab3;
case 0x468ab7:c.instructions+=14;goto B468ab7;
case 0x468abb:c.instructions+=13;goto B468abb;
case 0x468abe:c.instructions+=12;goto B468abe;
case 0x468ac1:c.instructions+=11;goto B468ac1;
case 0x468ac7:c.instructions+=10;goto B468ac7;
case 0x468ac9:c.instructions+=9;goto B468ac9;
case 0x468acd:c.instructions+=8;goto B468acd;
case 0x468ad1:c.instructions+=7;goto B468ad1;
case 0x468ad7:c.instructions+=6;goto B468ad7;
case 0x468adb:c.instructions+=5;goto B468adb;
case 0x468ade:c.instructions+=4;goto B468ade;
case 0x468ae1:c.instructions+=3;goto B468ae1;
case 0x468ae3:c.instructions+=2;goto B468ae3;
case 0x468ae6:c.instructions+=1;goto B468ae6;
case 0x468ae8:goto L468ae8;
case 0x468aee:c.instructions+=2;goto B468aee;
case 0x468af0:c.instructions+=1;goto B468af0;
case 0x468af5:goto L468af5;
case 0x468af7:c.instructions+=6;goto B468af7;
case 0x468afa:c.instructions+=5;goto B468afa;
case 0x468afc:c.instructions+=4;goto B468afc;
case 0x468afe:c.instructions+=3;goto B468afe;
case 0x468aff:c.instructions+=2;goto B468aff;
case 0x468b00:c.instructions+=1;goto B468b00;
case 0x468b02:goto L468b02;
case 0x468b07:goto L468b07;
case 0x468b0a:c.instructions+=8;goto B468b0a;
case 0x468b0f:c.instructions+=7;goto B468b0f;
case 0x468b11:c.instructions+=6;goto B468b11;
case 0x468b12:c.instructions+=5;goto B468b12;
case 0x468b15:c.instructions+=4;goto B468b15;
case 0x468b16:c.instructions+=3;goto B468b16;
case 0x468b17:c.instructions+=2;goto B468b17;
case 0x468b1a:c.instructions+=1;goto B468b1a;
case 0x468b1b:goto L468b1b;
case 0x468b1d:c.instructions+=4;goto B468b1d;
case 0x468b21:c.instructions+=3;goto B468b21;
case 0x468b23:c.instructions+=2;goto B468b23;
case 0x468b26:c.instructions+=1;goto B468b26;
case 0x468b2c:goto L468b2c;
case 0x468b30:c.instructions+=5;goto B468b30;
case 0x468b33:c.instructions+=4;goto B468b33;
case 0x468b37:c.instructions+=3;goto B468b37;
case 0x468b39:c.instructions+=2;goto B468b39;
case 0x468b3c:c.instructions+=1;goto B468b3c;
case 0x468b3e:goto L468b3e;
case 0x468b44:c.instructions+=3;goto B468b44;
case 0x468b48:c.instructions+=2;goto B468b48;
case 0x468b4e:c.instructions+=1;goto B468b4e;
case 0x468b53:goto L468b53;
case 0x468b55:c.instructions+=1;goto B468b55;
case 0x468b57:goto L468b57;
case 0x468b59:c.instructions+=1;goto B468b59;
case 0x468b5b:goto L468b5b;
case 0x468b60:c.instructions+=1;goto B468b60;
case 0x468b62:goto L468b62;
case 0x468b67:goto L468b67;
case 0x468b6a:c.instructions+=5;goto B468b6a;
case 0x468b6c:c.instructions+=4;goto B468b6c;
case 0x468b6e:c.instructions+=3;goto B468b6e;
case 0x468b6f:c.instructions+=2;goto B468b6f;
case 0x468b70:c.instructions+=1;goto B468b70;
case 0x468b72:goto L468b72;
case 0x468b77:goto L468b77;
case 0x468b7a:c.instructions+=6;goto B468b7a;
case 0x468b7b:c.instructions+=5;goto B468b7b;
case 0x468b7e:c.instructions+=4;goto B468b7e;
case 0x468b7f:c.instructions+=3;goto B468b7f;
case 0x468b80:c.instructions+=2;goto B468b80;
case 0x468b83:c.instructions+=1;goto B468b83;
case 0x468b84:goto L468b84;
case 0x468b89:goto L468b89;
case 0x468b8c:c.instructions+=8;goto B468b8c;
case 0x468b91:c.instructions+=7;goto B468b91;
case 0x468b93:c.instructions+=6;goto B468b93;
case 0x468b94:c.instructions+=5;goto B468b94;
case 0x468b97:c.instructions+=4;goto B468b97;
case 0x468b98:c.instructions+=3;goto B468b98;
case 0x468b99:c.instructions+=2;goto B468b99;
case 0x468b9c:c.instructions+=1;goto B468b9c;
case 0x468b9d:goto L468b9d;
case 0x468b9e:c.instructions+=7;goto B468b9e;
case 0x468ba0:c.instructions+=6;goto B468ba0;
case 0x468ba7:c.instructions+=5;goto B468ba7;
case 0x468bae:c.instructions+=4;goto B468bae;
case 0x468baf:c.instructions+=3;goto B468baf;
case 0x468bb0:c.instructions+=2;goto B468bb0;
case 0x468bb3:c.instructions+=1;goto B468bb3;
case 0x468bb4:goto L468bb4;
case 0x468bb5:c.instructions+=6;goto B468bb5;
case 0x468bb7:c.instructions+=5;goto B468bb7;
case 0x468bbe:c.instructions+=4;goto B468bbe;
case 0x468bbf:c.instructions+=3;goto B468bbf;
case 0x468bc0:c.instructions+=2;goto B468bc0;
case 0x468bc3:c.instructions+=1;goto B468bc3;
case 0x468bd0:goto L468bd0;
case 0x468bd1:c.instructions+=31;goto B468bd1;
case 0x468bd2:c.instructions+=30;goto B468bd2;
case 0x468bd3:c.instructions+=29;goto B468bd3;
case 0x468bd4:c.instructions+=28;goto B468bd4;
case 0x468bd6:c.instructions+=27;goto B468bd6;
case 0x468bd9:c.instructions+=26;goto B468bd9;
case 0x468bdc:c.instructions+=25;goto B468bdc;
case 0x468bde:c.instructions+=24;goto B468bde;
case 0x468be1:c.instructions+=23;goto B468be1;
case 0x468be4:c.instructions+=22;goto B468be4;
case 0x468bea:c.instructions+=21;goto B468bea;
case 0x468beb:c.instructions+=20;goto B468beb;
case 0x468bed:c.instructions+=19;goto B468bed;
case 0x468bf0:c.instructions+=18;goto B468bf0;
case 0x468bf4:c.instructions+=17;goto B468bf4;
case 0x468bf8:c.instructions+=16;goto B468bf8;
case 0x468bfb:c.instructions+=15;goto B468bfb;
case 0x468bfd:c.instructions+=14;goto B468bfd;
case 0x468c03:c.instructions+=13;goto B468c03;
case 0x468c09:c.instructions+=12;goto B468c09;
case 0x468c0d:c.instructions+=11;goto B468c0d;
case 0x468c11:c.instructions+=10;goto B468c11;
case 0x468c14:c.instructions+=9;goto B468c14;
case 0x468c17:c.instructions+=8;goto B468c17;
case 0x468c19:c.instructions+=7;goto B468c19;
case 0x468c1f:c.instructions+=6;goto B468c1f;
case 0x468c21:c.instructions+=5;goto B468c21;
case 0x468c25:c.instructions+=4;goto B468c25;
case 0x468c28:c.instructions+=3;goto B468c28;
case 0x468c2a:c.instructions+=2;goto B468c2a;
case 0x468c2d:c.instructions+=1;goto B468c2d;
case 0x468c2f:goto L468c2f;
case 0x468c31:c.instructions+=1;goto B468c31;
case 0x468c33:goto L468c33;
case 0x468c36:c.instructions+=10;goto B468c36;
case 0x468c39:c.instructions+=9;goto B468c39;
case 0x468c3a:c.instructions+=8;goto B468c3a;
case 0x468c3d:c.instructions+=7;goto B468c3d;
case 0x468c41:c.instructions+=6;goto B468c41;
case 0x468c44:c.instructions+=5;goto B468c44;
case 0x468c45:c.instructions+=4;goto B468c45;
case 0x468c46:c.instructions+=3;goto B468c46;
case 0x468c47:c.instructions+=2;goto B468c47;
case 0x468c48:c.instructions+=1;goto B468c48;
case 0x468c49:goto L468c49;
case 0x468c4c:c.instructions+=3;goto B468c4c;
case 0x468c52:c.instructions+=2;goto B468c52;
case 0x468c54:c.instructions+=1;goto B468c54;
case 0x468c59:goto L468c59;
case 0x468c5b:c.instructions+=5;goto B468c5b;
case 0x468c5e:c.instructions+=4;goto B468c5e;
case 0x468c5f:c.instructions+=3;goto B468c5f;
case 0x468c60:c.instructions+=2;goto B468c60;
case 0x468c61:c.instructions+=1;goto B468c61;
case 0x468c63:goto L468c63;
case 0x468c68:goto L468c68;
case 0x468c6b:c.instructions+=9;goto B468c6b;
case 0x468c70:c.instructions+=8;goto B468c70;
case 0x468c71:c.instructions+=7;goto B468c71;
case 0x468c73:c.instructions+=6;goto B468c73;
case 0x468c76:c.instructions+=5;goto B468c76;
case 0x468c77:c.instructions+=4;goto B468c77;
case 0x468c78:c.instructions+=3;goto B468c78;
case 0x468c79:c.instructions+=2;goto B468c79;
case 0x468c7a:c.instructions+=1;goto B468c7a;
case 0x468c7b:goto L468c7b;
case 0x468c7d:c.instructions+=2;goto B468c7d;
case 0x468c7f:c.instructions+=1;goto B468c7f;
case 0x468c81:goto L468c81;
case 0x468c83:c.instructions+=5;goto B468c83;
case 0x468c86:c.instructions+=4;goto B468c86;
case 0x468c8c:c.instructions+=3;goto B468c8c;
case 0x468c8e:c.instructions+=2;goto B468c8e;
case 0x468c91:c.instructions+=1;goto B468c91;
case 0x468c93:goto L468c93;
case 0x468c96:c.instructions+=1;goto B468c96;
case 0x468c99:goto L468c99;
case 0x468c9c:c.instructions+=5;goto B468c9c;
case 0x468c9f:c.instructions+=4;goto B468c9f;
case 0x468ca3:c.instructions+=3;goto B468ca3;
case 0x468ca5:c.instructions+=2;goto B468ca5;
case 0x468ca8:c.instructions+=1;goto B468ca8;
case 0x468caa:goto L468caa;
case 0x468cab:c.instructions+=11;goto B468cab;
case 0x468cad:c.instructions+=10;goto B468cad;
case 0x468cb0:c.instructions+=9;goto B468cb0;
case 0x468cb3:c.instructions+=8;goto B468cb3;
case 0x468cb6:c.instructions+=7;goto B468cb6;
case 0x468cb9:c.instructions+=6;goto B468cb9;
case 0x468cc0:c.instructions+=5;goto B468cc0;
case 0x468cc1:c.instructions+=4;goto B468cc1;
case 0x468cc2:c.instructions+=3;goto B468cc2;
case 0x468cc3:c.instructions+=2;goto B468cc3;
case 0x468cc4:c.instructions+=1;goto B468cc4;
case 0x468cc5:goto L468cc5;
case 0x468ccb:c.instructions+=3;goto B468ccb;
case 0x468ccf:c.instructions+=2;goto B468ccf;
case 0x468cd5:c.instructions+=1;goto B468cd5;
case 0x468cda:goto L468cda;
case 0x468cdd:c.instructions+=4;goto B468cdd;
case 0x468cde:c.instructions+=3;goto B468cde;
case 0x468cdf:c.instructions+=2;goto B468cdf;
case 0x468ce0:c.instructions+=1;goto B468ce0;
case 0x468ce2:goto L468ce2;
case 0x468ce7:goto L468ce7;
case 0x468cea:c.instructions+=7;goto B468cea;
case 0x468ceb:c.instructions+=6;goto B468ceb;
case 0x468cee:c.instructions+=5;goto B468cee;
case 0x468cef:c.instructions+=4;goto B468cef;
case 0x468cf0:c.instructions+=3;goto B468cf0;
case 0x468cf1:c.instructions+=2;goto B468cf1;
case 0x468cf2:c.instructions+=1;goto B468cf2;
case 0x468cf3:goto L468cf3;
case 0x468cf6:c.instructions+=1;goto B468cf6;
case 0x468cf8:goto L468cf8;
case 0x468cfb:c.instructions+=4;goto B468cfb;
case 0x468d01:c.instructions+=3;goto B468d01;
case 0x468d03:c.instructions+=2;goto B468d03;
case 0x468d06:c.instructions+=1;goto B468d06;
case 0x468d08:goto L468d08;
case 0x468d0b:c.instructions+=12;goto B468d0b;
case 0x468d0d:c.instructions+=11;goto B468d0d;
case 0x468d0e:c.instructions+=10;goto B468d0e;
case 0x468d11:c.instructions+=9;goto B468d11;
case 0x468d14:c.instructions+=8;goto B468d14;
case 0x468d18:c.instructions+=7;goto B468d18;
case 0x468d1b:c.instructions+=6;goto B468d1b;
case 0x468d22:c.instructions+=5;goto B468d22;
case 0x468d23:c.instructions+=4;goto B468d23;
case 0x468d24:c.instructions+=3;goto B468d24;
case 0x468d25:c.instructions+=2;goto B468d25;
case 0x468d26:c.instructions+=1;goto B468d26;
case 0x468d27:goto L468d27;
case 0x468d28:c.instructions+=10;goto B468d28;
case 0x468d2b:c.instructions+=9;goto B468d2b;
case 0x468d2e:c.instructions+=8;goto B468d2e;
case 0x468d31:c.instructions+=7;goto B468d31;
case 0x468d34:c.instructions+=6;goto B468d34;
case 0x468d37:c.instructions+=5;goto B468d37;
case 0x468d38:c.instructions+=4;goto B468d38;
case 0x468d39:c.instructions+=3;goto B468d39;
case 0x468d3a:c.instructions+=2;goto B468d3a;
case 0x468d3b:c.instructions+=1;goto B468d3b;
case 0x468d40:goto L468d40;
case 0x468d41:c.instructions+=8;goto B468d41;
case 0x468d42:c.instructions+=7;goto B468d42;
case 0x468d44:c.instructions+=6;goto B468d44;
case 0x468d47:c.instructions+=5;goto B468d47;
case 0x468d49:c.instructions+=4;goto B468d49;
case 0x468d4f:c.instructions+=3;goto B468d4f;
case 0x468d51:c.instructions+=2;goto B468d51;
case 0x468d54:c.instructions+=1;goto B468d54;
case 0x468d56:goto L468d56;
case 0x468d59:c.instructions+=2;goto B468d59;
case 0x468d5b:c.instructions+=1;goto B468d5b;
case 0x468d5d:goto L468d5d;
case 0x468d60:c.instructions+=5;goto B468d60;
case 0x468d63:c.instructions+=4;goto B468d63;
case 0x468d66:c.instructions+=3;goto B468d66;
case 0x468d67:c.instructions+=2;goto B468d67;
case 0x468d68:c.instructions+=1;goto B468d68;
case 0x468d6b:goto L468d6b;
case 0x468d6f:c.instructions+=9;goto B468d6f;
case 0x468d72:c.instructions+=8;goto B468d72;
case 0x468d78:c.instructions+=7;goto B468d78;
case 0x468d7a:c.instructions+=6;goto B468d7a;
case 0x468d7d:c.instructions+=5;goto B468d7d;
case 0x468d80:c.instructions+=4;goto B468d80;
case 0x468d83:c.instructions+=3;goto B468d83;
case 0x468d86:c.instructions+=2;goto B468d86;
case 0x468d88:c.instructions+=1;goto B468d88;
case 0x468d8a:goto L468d8a;
case 0x468d8b:c.instructions+=1;goto B468d8b;
case 0x468d8d:goto L468d8d;
case 0x468d8e:c.instructions+=1;goto B468d8e;
case 0x468d90:goto L468d90;
case 0x468d93:c.instructions+=1;goto B468d93;
case 0x468d95:goto L468d95;
case 0x468d97:c.instructions+=2;goto B468d97;
case 0x468d99:c.instructions+=1;goto B468d99;
case 0x468d9c:goto L468d9c;
case 0x468d9e:goto L468d9e;
case 0x468da0:c.instructions+=2;goto B468da0;
case 0x468da2:c.instructions+=1;goto B468da2;
case 0x468da5:goto L468da5;
case 0x468da7:goto L468da7;
case 0x468da9:c.instructions+=2;goto B468da9;
case 0x468dab:c.instructions+=1;goto B468dab;
case 0x468dae:goto L468dae;
case 0x468db1:c.instructions+=5;goto B468db1;
case 0x468db4:c.instructions+=4;goto B468db4;
case 0x468db6:c.instructions+=3;goto B468db6;
case 0x468dbc:c.instructions+=2;goto B468dbc;
case 0x468dc2:c.instructions+=1;goto B468dc2;
case 0x468dc4:goto L468dc4;
case 0x468dc7:c.instructions+=2;goto B468dc7;
case 0x468dc9:c.instructions+=1;goto B468dc9;
case 0x468dcb:goto L468dcb;
case 0x468dce:c.instructions+=1;goto B468dce;
case 0x468dd0:goto L468dd0;
case 0x468dd3:c.instructions+=6;goto B468dd3;
case 0x468dd4:c.instructions+=5;goto B468dd4;
case 0x468dd7:c.instructions+=4;goto B468dd7;
case 0x468dd9:c.instructions+=3;goto B468dd9;
case 0x468ddd:c.instructions+=2;goto B468ddd;
case 0x468de1:c.instructions+=1;goto B468de1;
case 0x468de6:goto L468de6;
case 0x468de8:c.instructions+=2;goto B468de8;
case 0x468de9:c.instructions+=1;goto B468de9;
case 0x468deb:goto L468deb;
case 0x468dee:goto L468dee;
case 0x468df3:goto L468df3;
case 0x468df6:c.instructions+=5;goto B468df6;
case 0x468df9:c.instructions+=4;goto B468df9;
case 0x468dfb:c.instructions+=3;goto B468dfb;
case 0x468e01:c.instructions+=2;goto B468e01;
case 0x468e04:c.instructions+=1;goto B468e04;
case 0x468e09:goto L468e09;
case 0x468e0c:c.instructions+=3;goto B468e0c;
case 0x468e0d:c.instructions+=2;goto B468e0d;
case 0x468e0e:c.instructions+=1;goto B468e0e;
case 0x468e20:goto L468e20;
case 0x468e22:c.instructions+=1;goto B468e22;
case 0x468e24:goto L468e24;
case 0x468e27:c.instructions+=1;goto B468e27;
case 0x468e28:goto L468e28;
case 0x468e2a:c.instructions+=1;goto B468e2a;
case 0x468e30:goto L468e30;
case 0x468e34:c.instructions+=6;goto B468e34;
case 0x468e38:c.instructions+=5;goto B468e38;
case 0x468e3c:c.instructions+=4;goto B468e3c;
case 0x468e3e:c.instructions+=3;goto B468e3e;
case 0x468e40:c.instructions+=2;goto B468e40;
case 0x468e43:c.instructions+=1;goto B468e43;
case 0x468e45:goto L468e45;
case 0x468e47:c.instructions+=7;goto B468e47;
case 0x468e4b:c.instructions+=6;goto B468e4b;
case 0x468e4f:c.instructions+=5;goto B468e4f;
case 0x468e53:c.instructions+=4;goto B468e53;
case 0x468e55:c.instructions+=3;goto B468e55;
case 0x468e57:c.instructions+=2;goto B468e57;
case 0x468e5a:c.instructions+=1;goto B468e5a;
case 0x468e5c:goto L468e5c;
case 0x468e5e:c.instructions+=1;goto B468e5e;
case 0x468e62:goto L468e62;
case 0x468e70:goto L468e70;
case 0x468e74:c.instructions+=6;goto B468e74;
case 0x468e78:c.instructions+=5;goto B468e78;
case 0x468e79:c.instructions+=4;goto B468e79;
case 0x468e7d:c.instructions+=3;goto B468e7d;
case 0x468e80:c.instructions+=2;goto B468e80;
case 0x468e82:c.instructions+=1;goto B468e82;
case 0x468e84:goto L468e84;
case 0x468e86:c.instructions+=3;goto B468e86;
case 0x468e88:c.instructions+=2;goto B468e88;
case 0x468e8a:c.instructions+=1;goto B468e8a;
case 0x468e8c:goto L468e8c;
case 0x468e8e:goto L468e8e;
case 0x468e8f:c.instructions+=1;goto B468e8f;
case 0x468e90:goto L468e90;
case 0x468e91:c.instructions+=8;goto B468e91;
case 0x468e93:c.instructions+=7;goto B468e93;
case 0x468e96:c.instructions+=6;goto B468e96;
case 0x468e99:c.instructions+=5;goto B468e99;
case 0x468e9c:c.instructions+=4;goto B468e9c;
case 0x468e9d:c.instructions+=3;goto B468e9d;
case 0x468ea1:c.instructions+=2;goto B468ea1;
case 0x468ea2:c.instructions+=1;goto B468ea2;
case 0x468ea7:goto L468ea7;
case 0x468eab:c.instructions+=10;goto B468eab;
case 0x468eae:c.instructions+=9;goto B468eae;
case 0x468eb2:c.instructions+=8;goto B468eb2;
case 0x468eb4:c.instructions+=7;goto B468eb4;
case 0x468eb8:c.instructions+=6;goto B468eb8;
case 0x468ebb:c.instructions+=5;goto B468ebb;
case 0x468ebe:c.instructions+=4;goto B468ebe;
case 0x468ec1:c.instructions+=3;goto B468ec1;
case 0x468ec3:c.instructions+=2;goto B468ec3;
case 0x468ec4:c.instructions+=1;goto B468ec4;
case 0x468ed0:goto L468ed0;
case 0x468ed2:c.instructions+=3;goto B468ed2;
case 0x468ed8:c.instructions+=2;goto B468ed8;
case 0x468edf:c.instructions+=1;goto B468edf;
case 0x468ee0:goto L468ee0;
case 0x468ee6:c.instructions+=3;goto B468ee6;
case 0x468eeb:c.instructions+=2;goto B468eeb;
case 0x468eec:c.instructions+=1;goto B468eec;
case 0x468ef1:goto L468ef1;
case 0x468ef4:c.instructions+=1;goto B468ef4;
case 0x468f00:goto L468f00;
case 0x468f06:c.instructions+=7;goto B468f06;
case 0x468f0a:c.instructions+=6;goto B468f0a;
case 0x468f10:c.instructions+=5;goto B468f10;
case 0x468f11:c.instructions+=4;goto B468f11;
case 0x468f12:c.instructions+=3;goto B468f12;
case 0x468f13:c.instructions+=2;goto B468f13;
case 0x468f19:c.instructions+=1;goto B468f19;
case 0x468f1e:goto L468f1e;
case 0x468f21:c.instructions+=1;goto B468f21;
case 0x468f30:goto L468f30;
case 0x468f34:c.instructions+=4;goto B468f34;
case 0x468f37:c.instructions+=3;goto B468f37;
case 0x468f3d:c.instructions+=2;goto B468f3d;
case 0x468f3f:c.instructions+=1;goto B468f3f;
case 0x468f41:goto L468f41;
case 0x468f45:c.instructions+=1;goto B468f45;
case 0x468f4a:goto L468f4a;
case 0x468f50:goto L468f50;
case 0x468f51:c.instructions+=2;goto B468f51;
case 0x468f53:c.instructions+=1;goto B468f53;
case 0x468f58:goto L468f58;
case 0x468f5d:c.instructions+=1;goto B468f5d;
case 0x468f5f:goto L468f5f;
case 0x468f60:c.instructions+=1;goto B468f60;
case 0x468f65:goto L468f65;
case 0x468f68:goto L468f68;
case 0x468f6a:c.instructions+=2;goto B468f6a;
case 0x468f6b:c.instructions+=1;goto B468f6b;
case 0x468f70:goto L468f70;
case 0x468f74:c.instructions+=9;goto B468f74;
case 0x468f77:c.instructions+=8;goto B468f77;
case 0x468f78:c.instructions+=7;goto B468f78;
case 0x468f7b:c.instructions+=6;goto B468f7b;
case 0x468f82:c.instructions+=5;goto B468f82;
case 0x468f83:c.instructions+=4;goto B468f83;
case 0x468f85:c.instructions+=3;goto B468f85;
case 0x468f87:c.instructions+=2;goto B468f87;
case 0x468f88:c.instructions+=1;goto B468f88;
case 0x468f8a:goto L468f8a;
case 0x468f8e:c.instructions+=9;goto B468f8e;
case 0x468f91:c.instructions+=8;goto B468f91;
case 0x468f93:c.instructions+=7;goto B468f93;
case 0x468f95:c.instructions+=6;goto B468f95;
case 0x468f98:c.instructions+=5;goto B468f98;
case 0x468f9b:c.instructions+=4;goto B468f9b;
case 0x468f9e:c.instructions+=3;goto B468f9e;
case 0x468fa1:c.instructions+=2;goto B468fa1;
case 0x468fa3:c.instructions+=1;goto B468fa3;
case 0x468fa5:goto L468fa5;
case 0x468fa8:c.instructions+=1;goto B468fa8;
case 0x468faa:goto L468faa;
case 0x468fad:c.instructions+=2;goto B468fad;
case 0x468faf:c.instructions+=1;goto B468faf;
case 0x468fb1:goto L468fb1;
case 0x468fb2:c.instructions+=4;goto B468fb2;
case 0x468fb3:c.instructions+=3;goto B468fb3;
case 0x468fb5:c.instructions+=2;goto B468fb5;
case 0x468fb6:c.instructions+=1;goto B468fb6;
case 0x468fb9:goto L468fb9;
case 0x468fbf:c.instructions+=2;goto B468fbf;
case 0x468fc5:c.instructions+=1;goto B468fc5;
case 0x468fc7:goto L468fc7;
case 0x468fc8:c.instructions+=2;goto B468fc8;
case 0x468fc9:c.instructions+=1;goto B468fc9;
case 0x468fce:goto L468fce;
case 0x468fd0:c.instructions+=1;goto B468fd0;
case 0x468fd5:goto L468fd5;
case 0x468fd6:c.instructions+=3;goto B468fd6;
case 0x468fd7:c.instructions+=2;goto B468fd7;
case 0x468fd8:c.instructions+=1;goto B468fd8;
case 0x468fe0:goto L468fe0;
case 0x468fe4:c.instructions+=7;goto B468fe4;
case 0x468fe7:c.instructions+=6;goto B468fe7;
case 0x468fea:c.instructions+=5;goto B468fea;
case 0x468ff1:c.instructions+=4;goto B468ff1;
case 0x468ff3:c.instructions+=3;goto B468ff3;
case 0x468ff4:c.instructions+=2;goto B468ff4;
case 0x468ff5:c.instructions+=1;goto B468ff5;
case 0x468ff7:goto L468ff7;
case 0x468ffb:c.instructions+=2;goto B468ffb;
case 0x468ffe:c.instructions+=1;goto B468ffe;
default:missing_instruction(c.pc);}
B468000:L468000:{c.instructions+=22;NFSU2_TR(0x468000);
w4(R+0,u32(0xe4c8b7b5ull));
}
B468005:{NFSU2_TR(0x468005);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B468007:{NFSU2_TR(0x468007);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B46800a:{NFSU2_TR(0x46800a);
__builtin_memmove((R+0),(R+8),4);
}
B46800c:{NFSU2_TR(0x46800c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B46800f:{NFSU2_TR(0x46800f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B468011:{NFSU2_TR(0x468011);
__builtin_memmove((R+4),(R+8),4);
}
B468013:{NFSU2_TR(0x468013);
__builtin_memmove((R+0),(R+24),4);
}
B468015:{NFSU2_TR(0x468015);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B468016:{NFSU2_TR(0x468016);
w4(R+24,u32(0x25aull));
}
B46801b:{NFSU2_TR(0x46801b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x46801b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x46801b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B46801d:{NFSU2_TR(0x46801d);
w4(R+0,u32(0x7ee7ecull));
}
B468022:{NFSU2_TR(0x468022);
__builtin_memmove(gp(0x82bc8c),(R+4),4);
}
B468028:{NFSU2_TR(0x468028);
w4(R+8,u32(0-u32(r4(R+8))));
}
B46802a:{NFSU2_TR(0x46802a);
__builtin_memmove(gp(0x82bc90),(R+8),4);
}
B468030:{NFSU2_TR(0x468030);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B468033:{NFSU2_TR(0x468033);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B468035:{NFSU2_TR(0x468035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B468037:{NFSU2_TR(0x468037);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+0))));
}
B468039:{NFSU2_TR(0x468039);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x32ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x32ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46803c:{NFSU2_TR(0x46803c);
__builtin_memmove(gp(0x82bc88),(R+0),4);
}
B468041:{NFSU2_TR(0x468041);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46804a;}}
}
B468043:L468043:{c.instructions+=2;NFSU2_TR(0x468043);
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
B468045:{NFSU2_TR(0x468045);
__builtin_memmove(gp(0x82bc88),(R+0),4);
}
B46804a:L46804a:{c.instructions+=2;NFSU2_TR(0x46804a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46804b:{NFSU2_TR(0x46804b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468050:L468050:{c.instructions+=6;NFSU2_TR(0x468050);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468054:{NFSU2_TR(0x468054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B468057:{NFSU2_TR(0x468057);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B468059:{NFSU2_TR(0x468059);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46805b:{NFSU2_TR(0x46805b);
s4(0x82bc88,u32(0xffffffffull));
}
B468065:{NFSU2_TR(0x468065);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L468070;}}
}
B468067:L468067:{c.instructions+=3;NFSU2_TR(0x468067);
w4(R+0,u32(0xffffd8f0ull));
}
B46806c:{NFSU2_TR(0x46806c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46806f:{NFSU2_TR(0x46806f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468070:L468070:{c.instructions+=3;NFSU2_TR(0x468070);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B468073:{NFSU2_TR(0x468073);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468074:{NFSU2_TR(0x468074);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46808d;}}
}
B468076:L468076:{c.instructions+=2;NFSU2_TR(0x468076);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B468079:{NFSU2_TR(0x468079);
if(r1(R+518)){{goto L46812e;}}
}
B46807f:L46807f:{c.instructions+=6;NFSU2_TR(0x46807f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B468080:{NFSU2_TR(0x468080);
w4(R+24,u32(0x4000ull));
}
B468085:{NFSU2_TR(0x468085);
__builtin_memmove((R+4),(R+8),4);
}
B468087:{NFSU2_TR(0x468087);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r1(U+0))));
}
B468089:{NFSU2_TR(0x468089);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46808b:{NFSU2_TR(0x46808b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468076u);}goto L468076;}}
}
B46808d:L46808d:{c.instructions+=22;NFSU2_TR(0x46808d);
w4(R+24,u32(0x4000ull));
}
B468092:{NFSU2_TR(0x468092);
__builtin_memmove((R+4),(R+8),4);
}
B468094:{NFSU2_TR(0x468094);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r1(U+0))));
}
B468096:{NFSU2_TR(0x468096);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46809e:{NFSU2_TR(0x46809e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4680a6:{NFSU2_TR(0x4680a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4680ae:{NFSU2_TR(0x4680ae);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B4680b0:{NFSU2_TR(0x4680b0);
__builtin_memmove((R+24),(R+0),4);
}
B4680b2:{NFSU2_TR(0x4680b2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4680b5:{NFSU2_TR(0x4680b5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4680b7:{NFSU2_TR(0x4680b7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x25aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4680bd:{NFSU2_TR(0x4680bd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4680c0:{NFSU2_TR(0x4680c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4680c8:{NFSU2_TR(0x4680c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B4680d0:{NFSU2_TR(0x4680d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1full));
s4(u32(r4(U+0)),r4(U+4));
}
B4680d8:{NFSU2_TR(0x4680d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3full));
s4(u32(r4(U+0)),r4(U+4));
}
B4680e0:{NFSU2_TR(0x4680e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x7full));
s4(u32(r4(U+0)),r4(U+4));
}
B4680e8:{NFSU2_TR(0x4680e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4680f0:{NFSU2_TR(0x4680f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4680f8:{NFSU2_TR(0x4680f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ffull));
s4(u32(r4(U+0)),r4(U+4));
}
B468100:{NFSU2_TR(0x468100);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ffull));
s4(u32(r4(U+0)),r4(U+4));
}
B468108:{NFSU2_TR(0x468108);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L468117;}}
}
B46810a:L46810a:{c.instructions+=5;NFSU2_TR(0x46810a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffbull))));
__builtin_memmove((R+4),(U+0),4);
}
B46810d:{NFSU2_TR(0x46810d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B46810f:{NFSU2_TR(0x46810f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B468113:{NFSU2_TR(0x468113);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+4))));
}
B468115:{NFSU2_TR(0x468115);
{goto L468120;}
}
B468117:L468117:{c.instructions+=3;NFSU2_TR(0x468117);
w4(R+4,u32(0x5ull));
}
B46811c:{NFSU2_TR(0x46811c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B46811e:{NFSU2_TR(0x46811e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r1(U+0))));
}
B468120:L468120:{c.instructions+=3;NFSU2_TR(0x468120);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ee7f0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+8))));
}
B468127:{NFSU2_TR(0x468127);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffd8f0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffd8f0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46812c:{NFSU2_TR(0x46812c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L468133;}}
}
B46812e:L46812e:{c.instructions+=1;NFSU2_TR(0x46812e);
w4(R+0,u32(0xffffd8f0ull));
}
B468133:L468133:{c.instructions+=3;NFSU2_TR(0x468133);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468134:{NFSU2_TR(0x468134);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B468137:{NFSU2_TR(0x468137);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468140:L468140:{c.instructions+=4;NFSU2_TR(0x468140);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468141:{NFSU2_TR(0x468141);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468145:{NFSU2_TR(0x468145);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468146:{NFSU2_TR(0x468146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46814bull));
TAIL_STATIC(0x467ff0u,467);
}
B46814b:L46814b:{c.instructions+=5;NFSU2_TR(0x46814b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46814f:{NFSU2_TR(0x46814f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468153:{NFSU2_TR(0x468153);
{u32 ea_=u32(u32(7907016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B468159:{NFSU2_TR(0x468159);
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
B46815c:{NFSU2_TR(0x46815c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468160:L468160:{c.instructions+=4;NFSU2_TR(0x468160);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468164:{NFSU2_TR(0x468164);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B468167:{NFSU2_TR(0x468167);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468168:{NFSU2_TR(0x468168);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4681f5;}}
}
B46816e:L46816e:{c.instructions+=2;NFSU2_TR(0x46816e);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B468172:{NFSU2_TR(0x468172);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B468176:L468176:{c.instructions+=1;NFSU2_TR(0x468176);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x468350ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46817d:L46817d:{c.instructions+=2;NFSU2_TR(0x46817d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46817f:{NFSU2_TR(0x46817f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4682f9;}}
}
B468185:L468185:{c.instructions+=5;NFSU2_TR(0x468185);
w4(R+0,u32(0x7fffull));
}
B46818a:{NFSU2_TR(0x46818a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B46818c:{NFSU2_TR(0x46818c);
__builtin_memmove((R+4),(R+0),4);
}
B46818e:{NFSU2_TR(0x46818e);
w4(R+0,u32(0x6ull));
}
B468193:{NFSU2_TR(0x468193);
{goto L4681f0;}
}
B468195:L468195:{c.instructions+=2;NFSU2_TR(0x468195);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B468197:{NFSU2_TR(0x468197);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46830a;}}
}
B46819d:L46819d:{c.instructions+=5;NFSU2_TR(0x46819d);
w4(R+0,u32(0x7fffull));
}
B4681a2:{NFSU2_TR(0x4681a2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B4681a4:{NFSU2_TR(0x4681a4);
__builtin_memmove((R+4),(R+0),4);
}
B4681a6:{NFSU2_TR(0x4681a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4681a8:{NFSU2_TR(0x4681a8);
{goto L4681f0;}
}
B4681aa:L4681aa:{c.instructions+=2;NFSU2_TR(0x4681aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4681ac:{NFSU2_TR(0x4681ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46831b;}}
}
B4681b2:L4681b2:{c.instructions+=5;NFSU2_TR(0x4681b2);
w4(R+0,u32(0x7fffull));
}
B4681b7:{NFSU2_TR(0x4681b7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B4681b9:{NFSU2_TR(0x4681b9);
__builtin_memmove((R+4),(R+0),4);
}
B4681bb:{NFSU2_TR(0x4681bb);
w4(R+0,u32(0x4ull));
}
B4681c0:{NFSU2_TR(0x4681c0);
{goto L4681f0;}
}
B4681c2:L4681c2:{c.instructions+=2;NFSU2_TR(0x4681c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4681c4:{NFSU2_TR(0x4681c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46832c;}}
}
B4681ca:L4681ca:{c.instructions+=5;NFSU2_TR(0x4681ca);
w4(R+0,u32(0x7fffull));
}
B4681cf:{NFSU2_TR(0x4681cf);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B4681d1:{NFSU2_TR(0x4681d1);
__builtin_memmove((R+4),(R+0),4);
}
B4681d3:{NFSU2_TR(0x4681d3);
w4(R+0,u32(0x2ull));
}
B4681d8:{NFSU2_TR(0x4681d8);
{goto L4681f0;}
}
B4681da:L4681da:{c.instructions+=2;NFSU2_TR(0x4681da);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4681dc:{NFSU2_TR(0x4681dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46833d;}}
}
B4681e2:L4681e2:{c.instructions+=4;NFSU2_TR(0x4681e2);
w4(R+0,u32(0x7fffull));
}
B4681e7:{NFSU2_TR(0x4681e7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B4681e9:{NFSU2_TR(0x4681e9);
__builtin_memmove((R+4),(R+0),4);
}
B4681eb:{NFSU2_TR(0x4681eb);
w4(R+0,u32(0x8ull));
}
B4681f0:L4681f0:{c.instructions+=2;NFSU2_TR(0x4681f0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4681f3:{NFSU2_TR(0x4681f3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468176u);}goto L468176;}}
}
B4681f5:L4681f5:{c.instructions+=1;NFSU2_TR(0x4681f5);
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
B4681f7:L4681f7:{c.instructions+=2;NFSU2_TR(0x4681f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4681f8:{NFSU2_TR(0x4681f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4681f9:L4681f9:{c.instructions+=2;NFSU2_TR(0x4681f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4681fb:{NFSU2_TR(0x4681fb);
if(r1(R+518)){{goto L46820f;}}
}
B4681fd:L4681fd:{c.instructions+=4;NFSU2_TR(0x4681fd);
w4(R+8,u32(0x7fffull));
}
B468202:{NFSU2_TR(0x468202);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B468204:{NFSU2_TR(0x468204);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468205:{NFSU2_TR(0x468205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46820aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468050u);}goto L468050;}
}
B46820a:L46820a:{c.instructions+=3;NFSU2_TR(0x46820a);
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
B46820d:{NFSU2_TR(0x46820d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46820e:{NFSU2_TR(0x46820e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46820f:L46820f:{c.instructions+=4;NFSU2_TR(0x46820f);
w4(R+0,u32(0x7fffull));
}
B468214:{NFSU2_TR(0x468214);
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
B468216:{NFSU2_TR(0x468216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468217:{NFSU2_TR(0x468217);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468218:L468218:{c.instructions+=5;NFSU2_TR(0x468218);
__builtin_memmove((R+24),(R+4),4);
}
B46821a:{NFSU2_TR(0x46821a);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B46821d:{NFSU2_TR(0x46821d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ef7f8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B468224:{NFSU2_TR(0x468224);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B468226:{NFSU2_TR(0x468226);
if(r1(R+518)){{goto L4682c3;}}
}
B46822c:L46822c:{c.instructions+=9;NFSU2_TR(0x46822c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ef7fcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B468233:{NFSU2_TR(0x468233);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1eull))));
}
B468236:{NFSU2_TR(0x468236);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B468239:{NFSU2_TR(0x468239);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B46823b:{NFSU2_TR(0x46823b);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x3ffull))));
}
B468241:{NFSU2_TR(0x468241);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B468244:{NFSU2_TR(0x468244);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B468247:{NFSU2_TR(0x468247);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B468249:{NFSU2_TR(0x468249);
{goto L4682c3;}
}
B46824b:L46824b:{c.instructions+=2;NFSU2_TR(0x46824b);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46824d:{NFSU2_TR(0x46824d);
if(r1(R+518)){{goto L46826c;}}
}
B46824f:L46824f:{c.instructions+=3;NFSU2_TR(0x46824f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468251:{NFSU2_TR(0x468251);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468252:{NFSU2_TR(0x468252);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468254:L468254:{c.instructions+=1;NFSU2_TR(0x468254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468259ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B468259:L468259:{c.instructions+=2;NFSU2_TR(0x468259);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46825c:{NFSU2_TR(0x46825c);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B46825e:L46825e:{c.instructions+=2;NFSU2_TR(0x46825e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xffffda80ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffda80ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xffffda80ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B468263:{NFSU2_TR(0x468263);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4681f7u);}goto L4681f7;}}
}
B468265:L468265:{c.instructions+=3;NFSU2_TR(0x468265);
w4(R+0,u32(0xffffd8f0ull));
}
B46826a:{NFSU2_TR(0x46826a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46826b:{NFSU2_TR(0x46826b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46826c:L46826c:{c.instructions+=4;NFSU2_TR(0x46826c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46826e:{NFSU2_TR(0x46826e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46826f:{NFSU2_TR(0x46826f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468271:{NFSU2_TR(0x468271);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468276ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B468276:L468276:{c.instructions+=5;NFSU2_TR(0x468276);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B468279:{NFSU2_TR(0x468279);
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
B46827c:{NFSU2_TR(0x46827c);
u8 U[47];
w4(U+39,u32(u32(u32(0xfull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B46827f:{NFSU2_TR(0x46827f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468280:{NFSU2_TR(0x468280);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468281:L468281:{c.instructions+=21;NFSU2_TR(0x468281);
__builtin_memmove((R+0),(R+4),4);
}
B468283:{NFSU2_TR(0x468283);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B468286:{NFSU2_TR(0x468286);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468287:{NFSU2_TR(0x468287);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468288:{NFSU2_TR(0x468288);
w4(R+24,u32(0x1ffull));
}
B46828d:{NFSU2_TR(0x46828d);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B46828f:{NFSU2_TR(0x46828f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ef7f8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B468296:{NFSU2_TR(0x468296);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ef7fcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B46829d:{NFSU2_TR(0x46829d);
w4(R+28,u32(0x7fffull));
}
B4682a2:{NFSU2_TR(0x4682a2);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B4682a4:{NFSU2_TR(0x4682a4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1eull))));
}
B4682a7:{NFSU2_TR(0x4682a7);
w4(R+0,u32(0x7fffull));
}
B4682ac:{NFSU2_TR(0x4682ac);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B4682ae:{NFSU2_TR(0x4682ae);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B4682b0:{NFSU2_TR(0x4682b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B4682b3:{NFSU2_TR(0x4682b3);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x3ffull))));
}
B4682b9:{NFSU2_TR(0x4682b9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4682bc:{NFSU2_TR(0x4682bc);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B4682bf:{NFSU2_TR(0x4682bf);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B4682c1:{NFSU2_TR(0x4682c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4682c2:{NFSU2_TR(0x4682c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4682c3:L4682c3:{c.instructions+=2;NFSU2_TR(0x4682c3);
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
B4682c5:{NFSU2_TR(0x4682c5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4681f7u);}goto L4681f7;}}
}
B4682cb:L4682cb:{c.instructions+=2;NFSU2_TR(0x4682cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4682cc:{NFSU2_TR(0x4682cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4682d1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468050u);}goto L468050;}
}
B4682d1:L4682d1:{c.instructions+=2;NFSU2_TR(0x4682d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4682d4:{NFSU2_TR(0x4682d4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46825eu);}goto L46825e;}
}
B4682d6:L4682d6:{c.instructions+=2;NFSU2_TR(0x4682d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4682d8:{NFSU2_TR(0x4682d8);
if(r1(R+518)){{goto L4682e4;}}
}
B4682da:L4682da:{c.instructions+=4;NFSU2_TR(0x4682da);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4682dc:{NFSU2_TR(0x4682dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4682dd:{NFSU2_TR(0x4682dd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4682df:{NFSU2_TR(0x4682df);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468254u);}goto L468254;}
}
B4682e4:L4682e4:{c.instructions+=4;NFSU2_TR(0x4682e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4682e6:{NFSU2_TR(0x4682e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4682e7:{NFSU2_TR(0x4682e7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4682e9:{NFSU2_TR(0x4682e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4682eeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B4682ee:L4682ee:{c.instructions+=5;NFSU2_TR(0x4682ee);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4682f1:{NFSU2_TR(0x4682f1);
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
B4682f4:{NFSU2_TR(0x4682f4);
u8 U[47];
w4(U+39,u32(u32(u32(0xfull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B4682f7:{NFSU2_TR(0x4682f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4682f8:{NFSU2_TR(0x4682f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4682f9:L4682f9:{c.instructions+=4;NFSU2_TR(0x4682f9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4682fb:{NFSU2_TR(0x4682fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4682fc:{NFSU2_TR(0x4682fc);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4682fe:{NFSU2_TR(0x4682fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468303ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B468303:L468303:{c.instructions+=4;NFSU2_TR(0x468303);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B468306:{NFSU2_TR(0x468306);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B468308:{NFSU2_TR(0x468308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468309:{NFSU2_TR(0x468309);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46830a:L46830a:{c.instructions+=4;NFSU2_TR(0x46830a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46830c:{NFSU2_TR(0x46830c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46830d:{NFSU2_TR(0x46830d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46830f:{NFSU2_TR(0x46830f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468314ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B468314:L468314:{c.instructions+=4;NFSU2_TR(0x468314);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B468317:{NFSU2_TR(0x468317);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B468319:{NFSU2_TR(0x468319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46831a:{NFSU2_TR(0x46831a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46831b:L46831b:{c.instructions+=4;NFSU2_TR(0x46831b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46831d:{NFSU2_TR(0x46831d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46831e:{NFSU2_TR(0x46831e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468320:{NFSU2_TR(0x468320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468325ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B468325:L468325:{c.instructions+=4;NFSU2_TR(0x468325);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B468328:{NFSU2_TR(0x468328);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46832a:{NFSU2_TR(0x46832a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46832b:{NFSU2_TR(0x46832b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46832c:L46832c:{c.instructions+=4;NFSU2_TR(0x46832c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46832e:{NFSU2_TR(0x46832e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46832f:{NFSU2_TR(0x46832f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468331:{NFSU2_TR(0x468331);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468336ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B468336:L468336:{c.instructions+=4;NFSU2_TR(0x468336);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B468339:{NFSU2_TR(0x468339);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46833b:{NFSU2_TR(0x46833b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46833c:{NFSU2_TR(0x46833c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46833d:L46833d:{c.instructions+=4;NFSU2_TR(0x46833d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46833f:{NFSU2_TR(0x46833f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468340:{NFSU2_TR(0x468340);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468342:{NFSU2_TR(0x468342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468347ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B468347:L468347:{c.instructions+=4;NFSU2_TR(0x468347);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46834a:{NFSU2_TR(0x46834a);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46834c:{NFSU2_TR(0x46834c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46834d:{NFSU2_TR(0x46834d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468380:L468380:{c.instructions+=11;NFSU2_TR(0x468380);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468381:{NFSU2_TR(0x468381);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468382:{NFSU2_TR(0x468382);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468383:{NFSU2_TR(0x468383);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B468387:{NFSU2_TR(0x468387);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B468389:{NFSU2_TR(0x468389);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46838a:{NFSU2_TR(0x46838a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46838e:{NFSU2_TR(0x46838e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468390:{NFSU2_TR(0x468390);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468391:{NFSU2_TR(0x468391);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468392:{NFSU2_TR(0x468392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468397ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B468397:L468397:{c.instructions+=6;NFSU2_TR(0x468397);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46839b:{NFSU2_TR(0x46839b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46839e:{NFSU2_TR(0x46839e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4683a0:{NFSU2_TR(0x4683a0);
__builtin_memmove((R+12),(R+0),4);
}
B4683a2:{NFSU2_TR(0x4683a2);
w4(R+0,u32(0x7fffull));
}
B4683a7:{NFSU2_TR(0x4683a7);
if(r1(R+518)){{goto L4683b8;}}
}
B4683a9:L4683a9:{c.instructions+=5;NFSU2_TR(0x4683a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4683ac:{NFSU2_TR(0x4683ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4683ae:{NFSU2_TR(0x4683ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4683af:{NFSU2_TR(0x4683af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4683b0:{NFSU2_TR(0x4683b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4683b5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B4683b5:L4683b5:{c.instructions+=1;NFSU2_TR(0x4683b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4683b8:L4683b8:{c.instructions+=10;NFSU2_TR(0x4683b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4683bc:{NFSU2_TR(0x4683bc);
w4(R+8,u32(0x7fffull));
}
B4683c1:{NFSU2_TR(0x4683c1);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B4683c3:{NFSU2_TR(0x4683c3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4683c6:{NFSU2_TR(0x4683c6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4683c9:{NFSU2_TR(0x4683c9);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4683cc:{NFSU2_TR(0x4683cc);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B4683cf:{NFSU2_TR(0x4683cf);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4683d1:{NFSU2_TR(0x4683d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4683d2:{NFSU2_TR(0x4683d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4683d7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468050u);}goto L468050;}
}
B4683d7:L4683d7:{c.instructions+=6;NFSU2_TR(0x4683d7);
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
B4683da:{NFSU2_TR(0x4683da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4683db:{NFSU2_TR(0x4683db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4683dc:{NFSU2_TR(0x4683dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4683dd:{NFSU2_TR(0x4683dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4683de:{NFSU2_TR(0x4683de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4683e0:L4683e0:{c.instructions+=20;NFSU2_TR(0x4683e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4683e4:{NFSU2_TR(0x4683e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4683e7:{NFSU2_TR(0x4683e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4683e9:{NFSU2_TR(0x4683e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4683ea:{NFSU2_TR(0x4683ea);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4683ee:{NFSU2_TR(0x4683ee);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
}
B4683f0:{NFSU2_TR(0x4683f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4683f3:{NFSU2_TR(0x4683f3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff0000ull))));
}
B4683f8:{NFSU2_TR(0x4683f8);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
}
B4683fa:{NFSU2_TR(0x4683fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B4683fe:{NFSU2_TR(0x4683fe);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x90000000ull))));
}
B468403:{NFSU2_TR(0x468403);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468406:{NFSU2_TR(0x468406);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B468409:{NFSU2_TR(0x468409);
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
B46840b:{NFSU2_TR(0x46840b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46840e:{NFSU2_TR(0x46840e);
__builtin_memmove(gp(0x82bca0),(R+0),4);
}
B468413:{NFSU2_TR(0x468413);
__builtin_memmove(gp(0x82bc9c),(R+0),4);
}
B468418:{NFSU2_TR(0x468418);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffd8f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46841f:{NFSU2_TR(0x46841f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468420:{NFSU2_TR(0x468420);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468430:L468430:{c.instructions+=14;NFSU2_TR(0x468430);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468434:{NFSU2_TR(0x468434);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468437:{NFSU2_TR(0x468437);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B46843a:{NFSU2_TR(0x46843a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46843d:{NFSU2_TR(0x46843d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46843f:{NFSU2_TR(0x46843f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xff00ull))));
}
B468445:{NFSU2_TR(0x468445);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468448:{NFSU2_TR(0x468448);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46844b:{NFSU2_TR(0x46844b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46844c:{NFSU2_TR(0x46844c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B46844e:{NFSU2_TR(0x46844e);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B468452:{NFSU2_TR(0x468452);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B468454:{NFSU2_TR(0x468454);
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B46845a:{NFSU2_TR(0x46845a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46845e;}}
}
B46845c:L46845c:{c.instructions+=1;NFSU2_TR(0x46845c);
__builtin_memmove((R+0),(R+24),4);
}
B46845e:L46845e:{c.instructions+=5;NFSU2_TR(0x46845e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B468460:{NFSU2_TR(0x468460);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B468464:{NFSU2_TR(0x468464);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B46846a:{NFSU2_TR(0x46846a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46846c:{NFSU2_TR(0x46846c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L468470;}}
}
B46846e:L46846e:{c.instructions+=1;NFSU2_TR(0x46846e);
__builtin_memmove((R+0),(R+24),4);
}
B468470:L468470:{c.instructions+=5;NFSU2_TR(0x468470);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B468472:{NFSU2_TR(0x468472);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B468476:{NFSU2_TR(0x468476);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B46847c:{NFSU2_TR(0x46847c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46847e:{NFSU2_TR(0x46847e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L468482;}}
}
B468480:L468480:{c.instructions+=1;NFSU2_TR(0x468480);
__builtin_memmove((R+0),(R+24),4);
}
B468482:L468482:{c.instructions+=5;NFSU2_TR(0x468482);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B468486:{NFSU2_TR(0x468486);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B46848c:{NFSU2_TR(0x46848c);
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
B46848e:{NFSU2_TR(0x46848e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46848f:{NFSU2_TR(0x46848f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46849a;}}
}
B468491:L468491:{c.instructions+=3;NFSU2_TR(0x468491);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468494:{NFSU2_TR(0x468494);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468497:{NFSU2_TR(0x468497);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46849a:L46849a:{c.instructions+=3;NFSU2_TR(0x46849a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46849d:{NFSU2_TR(0x46849d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4684a0:{NFSU2_TR(0x4684a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4684b0:L4684b0:{c.instructions+=12;NFSU2_TR(0x4684b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4684b1:{NFSU2_TR(0x4684b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4684b2:{NFSU2_TR(0x4684b2);
__builtin_memmove((R+24),(R+4),4);
}
B4684b4:{NFSU2_TR(0x4684b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4684b6:{NFSU2_TR(0x4684b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4684b9:{NFSU2_TR(0x4684b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4684ba:{NFSU2_TR(0x4684ba);
w4(R+4,u32(0x0ull));
}
B4684bf:{NFSU2_TR(0x4684bf);
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4684c2:{NFSU2_TR(0x4684c2);
__builtin_memmove((R+20),(R+0),4);
}
B4684c4:{NFSU2_TR(0x4684c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4684c7:{NFSU2_TR(0x4684c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4684ca:{NFSU2_TR(0x4684ca);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46850a;}}
}
B4684cc:L4684cc:{c.instructions+=3;NFSU2_TR(0x4684cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4684d0:{NFSU2_TR(0x4684d0);
__builtin_memmove((R+0),(R+28),4);
}
B4684d2:{NFSU2_TR(0x4684d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4684d3:L4684d3:{c.instructions+=6;NFSU2_TR(0x4684d3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4684d5:{NFSU2_TR(0x4684d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4684d8:{NFSU2_TR(0x4684d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4684db:{NFSU2_TR(0x4684db);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
}
B4684de:{NFSU2_TR(0x4684de);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4684e0:{NFSU2_TR(0x4684e0);
if(r1(R+518)){{goto L4684ec;}}
}
B4684e2:L4684e2:{c.instructions+=4;NFSU2_TR(0x4684e2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4684e3:{NFSU2_TR(0x4684e3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B4684e6:{NFSU2_TR(0x4684e6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4684e8:{NFSU2_TR(0x4684e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4684d3u);}goto L4684d3;}}
}
B4684ea:L4684ea:{c.instructions+=1;NFSU2_TR(0x4684ea);
{goto L468509;}
}
B4684ec:L4684ec:{c.instructions+=5;NFSU2_TR(0x4684ec);
__builtin_memmove((R+8),gp(0x82bca0),4);
}
B4684f2:{NFSU2_TR(0x4684f2);
__builtin_memmove(gp(0x82bc9c),(R+8),4);
}
B4684f8:{NFSU2_TR(0x4684f8);
__builtin_memmove(gp(0x82bca0),(R+4),4);
}
B4684fe:{NFSU2_TR(0x4684fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B468501:{NFSU2_TR(0x468501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468506ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B468506:L468506:{c.instructions+=1;NFSU2_TR(0x468506);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468509:L468509:{c.instructions+=1;NFSU2_TR(0x468509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46850a:L46850a:{c.instructions+=11;NFSU2_TR(0x46850a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46850d:{NFSU2_TR(0x46850d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468510:{NFSU2_TR(0x468510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B468512:{NFSU2_TR(0x468512);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff00ull))));
}
B468517:{NFSU2_TR(0x468517);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46851a:{NFSU2_TR(0x46851a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46851d:{NFSU2_TR(0x46851d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B46851f:{NFSU2_TR(0x46851f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B468523:{NFSU2_TR(0x468523);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B468525:{NFSU2_TR(0x468525);
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B46852b:{NFSU2_TR(0x46852b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46852f;}}
}
B46852d:L46852d:{c.instructions+=1;NFSU2_TR(0x46852d);
__builtin_memmove((R+0),(R+8),4);
}
B46852f:L46852f:{c.instructions+=5;NFSU2_TR(0x46852f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B468531:{NFSU2_TR(0x468531);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B468535:{NFSU2_TR(0x468535);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B46853b:{NFSU2_TR(0x46853b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46853d:{NFSU2_TR(0x46853d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L468541;}}
}
B46853f:L46853f:{c.instructions+=1;NFSU2_TR(0x46853f);
__builtin_memmove((R+0),(R+8),4);
}
B468541:L468541:{c.instructions+=5;NFSU2_TR(0x468541);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B468543:{NFSU2_TR(0x468543);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B468547:{NFSU2_TR(0x468547);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B46854d:{NFSU2_TR(0x46854d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46854f:{NFSU2_TR(0x46854f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L468553;}}
}
B468551:L468551:{c.instructions+=1;NFSU2_TR(0x468551);
__builtin_memmove((R+0),(R+8),4);
}
B468553:L468553:{c.instructions+=4;NFSU2_TR(0x468553);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B468557:{NFSU2_TR(0x468557);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B46855d:{NFSU2_TR(0x46855d);
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
B46855f:{NFSU2_TR(0x46855f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46856d;}}
}
B468561:L468561:{c.instructions+=6;NFSU2_TR(0x468561);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468564:{NFSU2_TR(0x468564);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468565:{NFSU2_TR(0x468565);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468566:{NFSU2_TR(0x468566);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468569:{NFSU2_TR(0x468569);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46856a:{NFSU2_TR(0x46856a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46856d:L46856d:{c.instructions+=6;NFSU2_TR(0x46856d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B468570:{NFSU2_TR(0x468570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468571:{NFSU2_TR(0x468571);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468572:{NFSU2_TR(0x468572);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468575:{NFSU2_TR(0x468575);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B468576:{NFSU2_TR(0x468576);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468580:L468580:{c.instructions+=12;NFSU2_TR(0x468580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B468583:{NFSU2_TR(0x468583);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468584:{NFSU2_TR(0x468584);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468585:{NFSU2_TR(0x468585);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468586:{NFSU2_TR(0x468586);
__builtin_memmove((R+24),(R+4),4);
}
B468588:{NFSU2_TR(0x468588);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46858b:{NFSU2_TR(0x46858b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46858e:{NFSU2_TR(0x46858e);
__builtin_memmove((R+0),gp(0x82bb3c),4);
}
B468593:{NFSU2_TR(0x468593);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B468595:{NFSU2_TR(0x468595);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468596:{NFSU2_TR(0x468596);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46859a:{NFSU2_TR(0x46859a);
if(r1(R+518)){{goto L4685c8;}}
}
B46859c:L46859c:{c.instructions+=3;NFSU2_TR(0x46859c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82bb40ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4685a3:{NFSU2_TR(0x4685a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4685a5:{NFSU2_TR(0x4685a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4685b0;}}
}
B4685a7:L4685a7:{c.instructions+=3;NFSU2_TR(0x4685a7);
__builtin_memmove((R+0),gp(0x82bb40),4);
}
B4685ac:{NFSU2_TR(0x4685ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4685ae:{NFSU2_TR(0x4685ae);
if(r1(R+518)){{goto L4685c8;}}
}
B4685b0:L4685b0:{c.instructions+=3;NFSU2_TR(0x4685b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82bb48ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4685b7:{NFSU2_TR(0x4685b7);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82bb50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+0))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B4685be:{NFSU2_TR(0x4685be);
if(r1(R+518)){{goto L4685c8;}}
}
B4685c0:L4685c0:{c.instructions+=3;NFSU2_TR(0x4685c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4685c1:{NFSU2_TR(0x4685c1);
__builtin_memmove((R+4),(R+24),4);
}
B4685c3:{NFSU2_TR(0x4685c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4685c8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4684b0u);}goto L4684b0;}
}
B4685c8:L4685c8:{c.instructions+=14;NFSU2_TR(0x4685c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4685cb:{NFSU2_TR(0x4685cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4685cd:{NFSU2_TR(0x4685cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4685d0:{NFSU2_TR(0x4685d0);
__builtin_memmove((R+20),(R+8),4);
}
B4685d2:{NFSU2_TR(0x4685d2);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4685d5:{NFSU2_TR(0x4685d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+20,sar<u32>(r4(R+20),u64(r4(U+0))));
}
B4685d8:{NFSU2_TR(0x4685d8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4685da:{NFSU2_TR(0x4685da);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B4685dd:{NFSU2_TR(0x4685dd);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfull))));
}
B4685e0:{NFSU2_TR(0x4685e0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffff0000ull))));
}
B4685e5:{NFSU2_TR(0x4685e5);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4685e7:{NFSU2_TR(0x4685e7);
w4(R+24,u32(0x8ull));
}
B4685ec:{NFSU2_TR(0x4685ec);
__builtin_memmove((R+28),(R+24),4);
}
B4685ee:{NFSU2_TR(0x4685ee);
if(r1(R+518)){{goto L468606;}}
}
B4685f0:L4685f0:{c.instructions+=2;NFSU2_TR(0x4685f0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4685f1:{NFSU2_TR(0x4685f1);
if(r1(R+518)){{goto L4685fb;}}
}
B4685f3:L4685f3:{c.instructions+=2;NFSU2_TR(0x4685f3);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4685f9:{NFSU2_TR(0x4685f9);
{goto L468610;}
}
B4685fb:L4685fb:{c.instructions+=4;NFSU2_TR(0x4685fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4685ff:{NFSU2_TR(0x4685ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468602:{NFSU2_TR(0x468602);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468604:{NFSU2_TR(0x468604);
{goto L468610;}
}
B468606:L468606:{c.instructions+=3;NFSU2_TR(0x468606);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46860a:{NFSU2_TR(0x46860a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46860d:{NFSU2_TR(0x46860d);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468610:L468610:{c.instructions+=3;NFSU2_TR(0x468610);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B468613:{NFSU2_TR(0x468613);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B468617:{NFSU2_TR(0x468617);
if(r1(R+518)){{goto L468628;}}
}
B468619:L468619:{c.instructions+=2;NFSU2_TR(0x468619);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B46861a:{NFSU2_TR(0x46861a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L468635;}}
}
B46861c:L46861c:{c.instructions+=4;NFSU2_TR(0x46861c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468620:{NFSU2_TR(0x468620);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B468623:{NFSU2_TR(0x468623);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B468626:{NFSU2_TR(0x468626);
{goto L468632;}
}
B468628:L468628:{c.instructions+=3;NFSU2_TR(0x468628);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46862c:{NFSU2_TR(0x46862c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46862f:{NFSU2_TR(0x46862f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B468632:L468632:{c.instructions+=1;NFSU2_TR(0x468632);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468635:L468635:{c.instructions+=7;NFSU2_TR(0x468635);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468639:{NFSU2_TR(0x468639);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46863c:{NFSU2_TR(0x46863c);
__builtin_memmove((R+8),(R+20),4);
}
B46863e:{NFSU2_TR(0x46863e);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B468641:{NFSU2_TR(0x468641);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B468644:{NFSU2_TR(0x468644);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B468647:{NFSU2_TR(0x468647);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4687f0;}}
}
B46864d:L46864d:{c.instructions+=1;NFSU2_TR(0x46864d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4688d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B468654:L468654:{c.instructions+=26;NFSU2_TR(0x468654);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468657:{NFSU2_TR(0x468657);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46865a:{NFSU2_TR(0x46865a);
__builtin_memmove((R+24),(R+8),4);
}
B46865c:{NFSU2_TR(0x46865c);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B468662:{NFSU2_TR(0x468662);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468666:{NFSU2_TR(0x468666);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46866a:{NFSU2_TR(0x46866a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B46866d:{NFSU2_TR(0x46866d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B468673:{NFSU2_TR(0x468673);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468677:{NFSU2_TR(0x468677);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46867b:{NFSU2_TR(0x46867b);
__builtin_memmove((R+8),(R+4),4);
}
B46867d:{NFSU2_TR(0x46867d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468681:{NFSU2_TR(0x468681);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B468687:{NFSU2_TR(0x468687);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46868b:{NFSU2_TR(0x46868b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B46868e:{NFSU2_TR(0x46868e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B468692:{NFSU2_TR(0x468692);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B468698:{NFSU2_TR(0x468698);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46869c:{NFSU2_TR(0x46869c);
__builtin_memmove((R+24),(R+0),4);
}
B46869e:{NFSU2_TR(0x46869e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4686a2:{NFSU2_TR(0x4686a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B4686a5:{NFSU2_TR(0x4686a5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4686a9:{NFSU2_TR(0x4686a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B4686ac:{NFSU2_TR(0x4686ac);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4686b0:{NFSU2_TR(0x4686b0);
__builtin_memmove((R+12),(R+20),4);
}
B4686b2:{NFSU2_TR(0x4686b2);
{goto L4687e4;}
}
B4686b7:L4686b7:{c.instructions+=26;NFSU2_TR(0x4686b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4686ba:{NFSU2_TR(0x4686ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4686bd:{NFSU2_TR(0x4686bd);
__builtin_memmove((R+24),(R+8),4);
}
B4686bf:{NFSU2_TR(0x4686bf);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B4686c5:{NFSU2_TR(0x4686c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4686c9:{NFSU2_TR(0x4686c9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4686cd:{NFSU2_TR(0x4686cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4686d0:{NFSU2_TR(0x4686d0);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B4686d6:{NFSU2_TR(0x4686d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4686da:{NFSU2_TR(0x4686da);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4686de:{NFSU2_TR(0x4686de);
__builtin_memmove((R+8),(R+4),4);
}
B4686e0:{NFSU2_TR(0x4686e0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4686e4:{NFSU2_TR(0x4686e4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B4686ea:{NFSU2_TR(0x4686ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4686ee:{NFSU2_TR(0x4686ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B4686f1:{NFSU2_TR(0x4686f1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4686f5:{NFSU2_TR(0x4686f5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B4686fb:{NFSU2_TR(0x4686fb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4686ff:{NFSU2_TR(0x4686ff);
__builtin_memmove((R+24),(R+0),4);
}
B468701:{NFSU2_TR(0x468701);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468705:{NFSU2_TR(0x468705);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B468708:{NFSU2_TR(0x468708);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46870c:{NFSU2_TR(0x46870c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B46870f:{NFSU2_TR(0x46870f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468713:{NFSU2_TR(0x468713);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffc000ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468719:{NFSU2_TR(0x468719);
{goto L4687e4;}
}
B46871e:L46871e:{c.instructions+=26;NFSU2_TR(0x46871e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468721:{NFSU2_TR(0x468721);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B468724:{NFSU2_TR(0x468724);
__builtin_memmove((R+24),(R+8),4);
}
B468726:{NFSU2_TR(0x468726);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B46872c:{NFSU2_TR(0x46872c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468730:{NFSU2_TR(0x468730);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468734:{NFSU2_TR(0x468734);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B468737:{NFSU2_TR(0x468737);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B46873d:{NFSU2_TR(0x46873d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468741:{NFSU2_TR(0x468741);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B468745:{NFSU2_TR(0x468745);
__builtin_memmove((R+8),(R+4),4);
}
B468747:{NFSU2_TR(0x468747);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46874b:{NFSU2_TR(0x46874b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B468751:{NFSU2_TR(0x468751);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468755:{NFSU2_TR(0x468755);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B468758:{NFSU2_TR(0x468758);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46875c:{NFSU2_TR(0x46875c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B468762:{NFSU2_TR(0x468762);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468766:{NFSU2_TR(0x468766);
__builtin_memmove((R+24),(R+0),4);
}
B468768:{NFSU2_TR(0x468768);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46876c:{NFSU2_TR(0x46876c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B46876f:{NFSU2_TR(0x46876f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B468773:{NFSU2_TR(0x468773);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B468776:{NFSU2_TR(0x468776);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46877a:{NFSU2_TR(0x46877a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffff8000ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468780:{NFSU2_TR(0x468780);
{goto L4687e4;}
}
B468782:L468782:{c.instructions+=25;NFSU2_TR(0x468782);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468785:{NFSU2_TR(0x468785);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B468788:{NFSU2_TR(0x468788);
__builtin_memmove((R+24),(R+8),4);
}
B46878a:{NFSU2_TR(0x46878a);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B468790:{NFSU2_TR(0x468790);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468794:{NFSU2_TR(0x468794);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468798:{NFSU2_TR(0x468798);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B46879b:{NFSU2_TR(0x46879b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B4687a1:{NFSU2_TR(0x4687a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4687a5:{NFSU2_TR(0x4687a5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4687a9:{NFSU2_TR(0x4687a9);
__builtin_memmove((R+8),(R+4),4);
}
B4687ab:{NFSU2_TR(0x4687ab);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4687af:{NFSU2_TR(0x4687af);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B4687b5:{NFSU2_TR(0x4687b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4687b9:{NFSU2_TR(0x4687b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B4687bc:{NFSU2_TR(0x4687bc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4687c0:{NFSU2_TR(0x4687c0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B4687c6:{NFSU2_TR(0x4687c6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4687ca:{NFSU2_TR(0x4687ca);
__builtin_memmove((R+24),(R+0),4);
}
B4687cc:{NFSU2_TR(0x4687cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4687d0:{NFSU2_TR(0x4687d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B4687d3:{NFSU2_TR(0x4687d3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4687d7:{NFSU2_TR(0x4687d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B4687da:{NFSU2_TR(0x4687da);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4687de:{NFSU2_TR(0x4687de);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffff4000ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4687e4:L4687e4:{c.instructions+=4;NFSU2_TR(0x4687e4);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfull))));
}
B4687e7:{NFSU2_TR(0x4687e7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4687eb:{NFSU2_TR(0x4687eb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B4687ee:{NFSU2_TR(0x4687ee);
__builtin_memmove((R+28),(R+0),4);
}
B4687f0:L4687f0:{c.instructions+=4;NFSU2_TR(0x4687f0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4687f4:{NFSU2_TR(0x4687f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4687f6:{NFSU2_TR(0x4687f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4687f9:{NFSU2_TR(0x4687f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46881b;}}
}
B4687fb:L4687fb:{c.instructions+=4;NFSU2_TR(0x4687fb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4687ff:{NFSU2_TR(0x4687ff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B468801:{NFSU2_TR(0x468801);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B468804:{NFSU2_TR(0x468804);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46881b;}}
}
B468806:L468806:{c.instructions+=9;NFSU2_TR(0x468806);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46880a:{NFSU2_TR(0x46880a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46880c:{NFSU2_TR(0x46880c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46880d:{NFSU2_TR(0x46880d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46880e:{NFSU2_TR(0x46880e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46880f:{NFSU2_TR(0x46880f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffd8f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B468816:{NFSU2_TR(0x468816);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468817:{NFSU2_TR(0x468817);
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
B46881a:{NFSU2_TR(0x46881a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46881b:L46881b:{c.instructions+=4;NFSU2_TR(0x46881b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B46881f:{NFSU2_TR(0x46881f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B468821:{NFSU2_TR(0x468821);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B468824:{NFSU2_TR(0x468824);
if(r1(R+514)){{goto L46882c;}}
}
B468826:L468826:{c.instructions+=2;NFSU2_TR(0x468826);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B468828:{NFSU2_TR(0x468828);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46882c:L46882c:{c.instructions+=5;NFSU2_TR(0x46882c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468830:{NFSU2_TR(0x468830);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B468834:{NFSU2_TR(0x468834);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B468836:{NFSU2_TR(0x468836);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B468839:{NFSU2_TR(0x468839);
if(r1(R+514)){{goto L468843;}}
}
B46883b:L46883b:{c.instructions+=2;NFSU2_TR(0x46883b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46883f:{NFSU2_TR(0x46883f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468843:L468843:{c.instructions+=4;NFSU2_TR(0x468843);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B468847:{NFSU2_TR(0x468847);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B468849:{NFSU2_TR(0x468849);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46884c:{NFSU2_TR(0x46884c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L468854;}}
}
B46884e:L46884e:{c.instructions+=2;NFSU2_TR(0x46884e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B468850:{NFSU2_TR(0x468850);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468854:L468854:{c.instructions+=5;NFSU2_TR(0x468854);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468858:{NFSU2_TR(0x468858);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46885c:{NFSU2_TR(0x46885c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46885e:{NFSU2_TR(0x46885e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B468861:{NFSU2_TR(0x468861);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46886b;}}
}
B468863:L468863:{c.instructions+=2;NFSU2_TR(0x468863);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468867:{NFSU2_TR(0x468867);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46886b:L46886b:{c.instructions+=12;NFSU2_TR(0x46886b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46886f:{NFSU2_TR(0x46886f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468873:{NFSU2_TR(0x468873);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B468877:{NFSU2_TR(0x468877);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B468879:{NFSU2_TR(0x468879);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46887d:{NFSU2_TR(0x46887d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B468881:{NFSU2_TR(0x468881);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468885:{NFSU2_TR(0x468885);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B468889:{NFSU2_TR(0x468889);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B46888b:{NFSU2_TR(0x46888b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46888f:{NFSU2_TR(0x46888f);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B468895:{NFSU2_TR(0x468895);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46889aull));
TAIL_STATIC(0x75bed4u,75b);
}
B46889a:L46889a:{c.instructions+=4;NFSU2_TR(0x46889a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46889e:{NFSU2_TR(0x46889e);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4688a4:{NFSU2_TR(0x4688a4);
__builtin_memmove(gp(0x82bc94),(R+0),4);
}
B4688a9:{NFSU2_TR(0x4688a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4688aeull));
TAIL_STATIC(0x75bed4u,75b);
}
B4688ae:L4688ae:{c.instructions+=6;NFSU2_TR(0x4688ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4688af:{NFSU2_TR(0x4688af);
u8 U[4];
w4(U+0,u32(0x82bc94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4688b4:{NFSU2_TR(0x4688b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4688b5:{NFSU2_TR(0x4688b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4688b6:{NFSU2_TR(0x4688b6);
__builtin_memmove(gp(0x82bc98),(R+0),4);
}
B4688bb:{NFSU2_TR(0x4688bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4688c0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468380u);}goto L468380;}
}
B4688c0:L4688c0:{c.instructions+=10;NFSU2_TR(0x4688c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4688c4:{NFSU2_TR(0x4688c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4688c7:{NFSU2_TR(0x4688c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4688c8:{NFSU2_TR(0x4688c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4688c9:{NFSU2_TR(0x4688c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4688ca:{NFSU2_TR(0x4688ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4688cd:{NFSU2_TR(0x4688cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4688d0:{NFSU2_TR(0x4688d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4688d1:{NFSU2_TR(0x4688d1);
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
B4688d4:{NFSU2_TR(0x4688d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4688f0:L4688f0:{c.instructions+=2;NFSU2_TR(0x4688f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4688f3:{NFSU2_TR(0x4688f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468900:L468900:{c.instructions+=8;NFSU2_TR(0x468900);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468904:{NFSU2_TR(0x468904);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468907:{NFSU2_TR(0x468907);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46890e:{NFSU2_TR(0x46890e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468911:{NFSU2_TR(0x468911);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B468916:{NFSU2_TR(0x468916);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2710ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2710ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2710ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46891b:{NFSU2_TR(0x46891b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46891e:{NFSU2_TR(0x46891e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46892b;}}
}
B468920:L468920:{c.instructions+=3;NFSU2_TR(0x468920);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468923:{NFSU2_TR(0x468923);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffff0000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B468928:{NFSU2_TR(0x468928);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46892b:L46892b:{c.instructions+=1;NFSU2_TR(0x46892b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468930:L468930:{c.instructions+=3;NFSU2_TR(0x468930);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468933:{NFSU2_TR(0x468933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B468935:{NFSU2_TR(0x468935);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468940:L468940:{c.instructions+=3;NFSU2_TR(0x468940);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468943:{NFSU2_TR(0x468943);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468946:{NFSU2_TR(0x468946);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468950:L468950:{c.instructions+=3;NFSU2_TR(0x468950);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468953:{NFSU2_TR(0x468953);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468956:{NFSU2_TR(0x468956);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468960:L468960:{c.instructions+=29;NFSU2_TR(0x468960);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468961:{NFSU2_TR(0x468961);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468962:{NFSU2_TR(0x468962);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468963:{NFSU2_TR(0x468963);
__builtin_memmove((R+24),(R+4),4);
}
B468965:{NFSU2_TR(0x468965);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B468968:{NFSU2_TR(0x468968);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46896b:{NFSU2_TR(0x46896b);
__builtin_memmove((R+8),(R+0),4);
}
B46896d:{NFSU2_TR(0x46896d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B468970:{NFSU2_TR(0x468970);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B468973:{NFSU2_TR(0x468973);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468974:{NFSU2_TR(0x468974);
__builtin_memmove((R+28),(R+0),4);
}
B468976:{NFSU2_TR(0x468976);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468979:{NFSU2_TR(0x468979);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffull))));
}
B46897f:{NFSU2_TR(0x46897f);
__builtin_memmove((R+4),(R+0),4);
}
B468981:{NFSU2_TR(0x468981);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468985:{NFSU2_TR(0x468985);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468989:{NFSU2_TR(0x468989);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffull))));
}
B46898f:{NFSU2_TR(0x46898f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468993:{NFSU2_TR(0x468993);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B468996:{NFSU2_TR(0x468996);
{u32 ea_=u32(u32(7907112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46899c:{NFSU2_TR(0x46899c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B46899f:{NFSU2_TR(0x46899f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4689a3:{NFSU2_TR(0x4689a3);
__builtin_memmove((R+12),(R+0),4);
}
B4689a5:{NFSU2_TR(0x4689a5);
{u32 ea_=u32(u32(7907112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4689ab:{NFSU2_TR(0x4689ab);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4689af:{NFSU2_TR(0x4689af);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4689b2:{NFSU2_TR(0x4689b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4689b4:{NFSU2_TR(0x4689b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4689b7:{NFSU2_TR(0x4689b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4689ed;}}
}
B4689b9:L4689b9:{c.instructions+=4;NFSU2_TR(0x4689b9);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4689bc:{NFSU2_TR(0x4689bc);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4689c2:{NFSU2_TR(0x4689c2);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B4689c4:{NFSU2_TR(0x4689c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4689c9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4689c9:L4689c9:{c.instructions+=7;NFSU2_TR(0x4689c9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4689cb:{NFSU2_TR(0x4689cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4689ce:{NFSU2_TR(0x4689ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4689d0:{NFSU2_TR(0x4689d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4689d2:{NFSU2_TR(0x4689d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4689d3:{NFSU2_TR(0x4689d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4689d4:{NFSU2_TR(0x4689d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L468a2f;}}
}
B4689d6:L4689d6:{c.instructions+=1;NFSU2_TR(0x4689d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4689dbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B4689db:L4689db:{c.instructions+=9;NFSU2_TR(0x4689db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4689de:{NFSU2_TR(0x4689de);
w4(R+8,u32(0x7fffull));
}
B4689e3:{NFSU2_TR(0x4689e3);
u8 U[6];
w1(R+512,u8((r4(R+8))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4689e5:{NFSU2_TR(0x4689e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4689e6:{NFSU2_TR(0x4689e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4689e9:{NFSU2_TR(0x4689e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4689ea:{NFSU2_TR(0x4689ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4689eb:{NFSU2_TR(0x4689eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4689ec:{NFSU2_TR(0x4689ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4689ed:L4689ed:{c.instructions+=5;NFSU2_TR(0x4689ed);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4689f0:{NFSU2_TR(0x4689f0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4689f4:{NFSU2_TR(0x4689f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4689f6:{NFSU2_TR(0x4689f6);
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
B4689f9:{NFSU2_TR(0x4689f9);
if(r1(R+514)){{goto L468a56;}}
}
B4689fb:L4689fb:{c.instructions+=4;NFSU2_TR(0x4689fb);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B468a01:{NFSU2_TR(0x468a01);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B468a05:{NFSU2_TR(0x468a05);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B468a0b:{NFSU2_TR(0x468a0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468a10ull));
TAIL_STATIC(0x75bed4u,75b);
}
B468a10:L468a10:{c.instructions+=2;NFSU2_TR(0x468a10);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B468a12:{NFSU2_TR(0x468a12);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L468a18;}}
}
B468a14:L468a14:{c.instructions+=2;NFSU2_TR(0x468a14);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B468a16:{NFSU2_TR(0x468a16);
{goto L468a24;}
}
B468a18:L468a18:{c.instructions+=2;NFSU2_TR(0x468a18);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B468a1d:{NFSU2_TR(0x468a1d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L468a24;}}
}
B468a1f:L468a1f:{c.instructions+=1;NFSU2_TR(0x468a1f);
w4(R+0,u32(0x7fffull));
}
B468a24:L468a24:{c.instructions+=6;NFSU2_TR(0x468a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B468a27:{NFSU2_TR(0x468a27);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B468a29:{NFSU2_TR(0x468a29);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468a2b:{NFSU2_TR(0x468a2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468a2c:{NFSU2_TR(0x468a2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468a2d:{NFSU2_TR(0x468a2d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L468a3f;}}
}
B468a2f:L468a2f:{c.instructions+=1;NFSU2_TR(0x468a2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468a34ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B468a34:L468a34:{c.instructions+=7;NFSU2_TR(0x468a34);
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
B468a37:{NFSU2_TR(0x468a37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468a38:{NFSU2_TR(0x468a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468a3b:{NFSU2_TR(0x468a3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468a3c:{NFSU2_TR(0x468a3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468a3d:{NFSU2_TR(0x468a3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B468a3e:{NFSU2_TR(0x468a3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468a3f:L468a3f:{c.instructions+=1;NFSU2_TR(0x468a3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468a44ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B468a44:L468a44:{c.instructions+=9;NFSU2_TR(0x468a44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B468a47:{NFSU2_TR(0x468a47);
w4(R+4,u32(0x7fffull));
}
B468a4c:{NFSU2_TR(0x468a4c);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B468a4e:{NFSU2_TR(0x468a4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468a4f:{NFSU2_TR(0x468a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468a52:{NFSU2_TR(0x468a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468a53:{NFSU2_TR(0x468a53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468a54:{NFSU2_TR(0x468a54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B468a55:{NFSU2_TR(0x468a55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468a56:L468a56:{c.instructions+=8;NFSU2_TR(0x468a56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468a57:{NFSU2_TR(0x468a57);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B468a59:{NFSU2_TR(0x468a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B468a60:{NFSU2_TR(0x468a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x7fffull));
s4(u32(r4(U+0)),r4(U+4));
}
B468a67:{NFSU2_TR(0x468a67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468a68:{NFSU2_TR(0x468a68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468a69:{NFSU2_TR(0x468a69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B468a6a:{NFSU2_TR(0x468a6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468a70:L468a70:{c.instructions+=36;NFSU2_TR(0x468a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B468a73:{NFSU2_TR(0x468a73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468a74:{NFSU2_TR(0x468a74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468a75:{NFSU2_TR(0x468a75);
__builtin_memmove((R+24),(R+4),4);
}
B468a77:{NFSU2_TR(0x468a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B468a7a:{NFSU2_TR(0x468a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468a7d:{NFSU2_TR(0x468a7d);
__builtin_memmove((R+8),(R+0),4);
}
B468a7f:{NFSU2_TR(0x468a7f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B468a82:{NFSU2_TR(0x468a82);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B468a85:{NFSU2_TR(0x468a85);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffull))));
}
B468a8b:{NFSU2_TR(0x468a8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468a8c:{NFSU2_TR(0x468a8c);
__builtin_memmove((R+28),(R+0),4);
}
B468a8e:{NFSU2_TR(0x468a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468a91:{NFSU2_TR(0x468a91);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B468a96:{NFSU2_TR(0x468a96);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468a9a:{NFSU2_TR(0x468a9a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468a9e:{NFSU2_TR(0x468a9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468aa2:{NFSU2_TR(0x468aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468aa5:{NFSU2_TR(0x468aa5);
__builtin_memmove((R+4),(R+0),4);
}
B468aa7:{NFSU2_TR(0x468aa7);
{u32 ea_=u32(u32(7907112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B468aad:{NFSU2_TR(0x468aad);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffull))));
}
B468ab3:{NFSU2_TR(0x468ab3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468ab7:{NFSU2_TR(0x468ab7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468abb:{NFSU2_TR(0x468abb);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B468abe:{NFSU2_TR(0x468abe);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B468ac1:{NFSU2_TR(0x468ac1);
{u32 ea_=u32(u32(7907112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B468ac7:{NFSU2_TR(0x468ac7);
__builtin_memmove((R+12),(R+0),4);
}
B468ac9:{NFSU2_TR(0x468ac9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B468acd:{NFSU2_TR(0x468acd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468ad1:{NFSU2_TR(0x468ad1);
{u32 ea_=u32(u32(7907112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B468ad7:{NFSU2_TR(0x468ad7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B468adb:{NFSU2_TR(0x468adb);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B468ade:{NFSU2_TR(0x468ade);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468ae1:{NFSU2_TR(0x468ae1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B468ae3:{NFSU2_TR(0x468ae3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B468ae6:{NFSU2_TR(0x468ae6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L468b1b;}}
}
B468ae8:L468ae8:{c.instructions+=3;NFSU2_TR(0x468ae8);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B468aee:{NFSU2_TR(0x468aee);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B468af0:{NFSU2_TR(0x468af0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468af5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B468af5:L468af5:{c.instructions+=7;NFSU2_TR(0x468af5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B468af7:{NFSU2_TR(0x468af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B468afa:{NFSU2_TR(0x468afa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B468afc:{NFSU2_TR(0x468afc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468afe:{NFSU2_TR(0x468afe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468aff:{NFSU2_TR(0x468aff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468b00:{NFSU2_TR(0x468b00);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L468b72;}}
}
B468b02:L468b02:{c.instructions+=1;NFSU2_TR(0x468b02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468b07ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B468b07:L468b07:{c.instructions+=9;NFSU2_TR(0x468b07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B468b0a:{NFSU2_TR(0x468b0a);
w4(R+8,u32(0x7fffull));
}
B468b0f:{NFSU2_TR(0x468b0f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B468b11:{NFSU2_TR(0x468b11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468b12:{NFSU2_TR(0x468b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468b15:{NFSU2_TR(0x468b15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468b16:{NFSU2_TR(0x468b16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468b17:{NFSU2_TR(0x468b17);
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
B468b1a:{NFSU2_TR(0x468b1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468b1b:L468b1b:{c.instructions+=5;NFSU2_TR(0x468b1b);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B468b1d:{NFSU2_TR(0x468b1d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B468b21:{NFSU2_TR(0x468b21);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B468b23:{NFSU2_TR(0x468b23);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B468b26:{NFSU2_TR(0x468b26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L468bb4;}}
}
B468b2c:L468b2c:{c.instructions+=6;NFSU2_TR(0x468b2c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B468b30:{NFSU2_TR(0x468b30);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B468b33:{NFSU2_TR(0x468b33);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B468b37:{NFSU2_TR(0x468b37);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B468b39:{NFSU2_TR(0x468b39);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B468b3c:{NFSU2_TR(0x468b3c);
if(r1(R+514)){{goto L468b9d;}}
}
B468b3e:L468b3e:{c.instructions+=4;NFSU2_TR(0x468b3e);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B468b44:{NFSU2_TR(0x468b44);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B468b48:{NFSU2_TR(0x468b48);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B468b4e:{NFSU2_TR(0x468b4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468b53ull));
TAIL_STATIC(0x75bed4u,75b);
}
B468b53:L468b53:{c.instructions+=2;NFSU2_TR(0x468b53);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B468b55:{NFSU2_TR(0x468b55);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L468b5b;}}
}
B468b57:L468b57:{c.instructions+=2;NFSU2_TR(0x468b57);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B468b59:{NFSU2_TR(0x468b59);
{goto L468b67;}
}
B468b5b:L468b5b:{c.instructions+=2;NFSU2_TR(0x468b5b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B468b60:{NFSU2_TR(0x468b60);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L468b67;}}
}
B468b62:L468b62:{c.instructions+=1;NFSU2_TR(0x468b62);
w4(R+0,u32(0x7fffull));
}
B468b67:L468b67:{c.instructions+=6;NFSU2_TR(0x468b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B468b6a:{NFSU2_TR(0x468b6a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B468b6c:{NFSU2_TR(0x468b6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468b6e:{NFSU2_TR(0x468b6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468b6f:{NFSU2_TR(0x468b6f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468b70:{NFSU2_TR(0x468b70);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L468b84;}}
}
B468b72:L468b72:{c.instructions+=1;NFSU2_TR(0x468b72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468b77ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B468b77:L468b77:{c.instructions+=7;NFSU2_TR(0x468b77);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B468b7a:{NFSU2_TR(0x468b7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468b7b:{NFSU2_TR(0x468b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468b7e:{NFSU2_TR(0x468b7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468b7f:{NFSU2_TR(0x468b7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468b80:{NFSU2_TR(0x468b80);
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
B468b83:{NFSU2_TR(0x468b83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468b84:L468b84:{c.instructions+=1;NFSU2_TR(0x468b84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468b89ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B468b89:L468b89:{c.instructions+=9;NFSU2_TR(0x468b89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B468b8c:{NFSU2_TR(0x468b8c);
w4(R+4,u32(0x7fffull));
}
B468b91:{NFSU2_TR(0x468b91);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B468b93:{NFSU2_TR(0x468b93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468b94:{NFSU2_TR(0x468b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468b97:{NFSU2_TR(0x468b97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468b98:{NFSU2_TR(0x468b98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468b99:{NFSU2_TR(0x468b99);
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
B468b9c:{NFSU2_TR(0x468b9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468b9d:L468b9d:{c.instructions+=8;NFSU2_TR(0x468b9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468b9e:{NFSU2_TR(0x468b9e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B468ba0:{NFSU2_TR(0x468ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B468ba7:{NFSU2_TR(0x468ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x7fffull));
s4(u32(r4(U+0)),r4(U+4));
}
B468bae:{NFSU2_TR(0x468bae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468baf:{NFSU2_TR(0x468baf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468bb0:{NFSU2_TR(0x468bb0);
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
B468bb3:{NFSU2_TR(0x468bb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468bb4:L468bb4:{c.instructions+=7;NFSU2_TR(0x468bb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468bb5:{NFSU2_TR(0x468bb5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B468bb7:{NFSU2_TR(0x468bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B468bbe:{NFSU2_TR(0x468bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468bbf:{NFSU2_TR(0x468bbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468bc0:{NFSU2_TR(0x468bc0);
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
B468bc3:{NFSU2_TR(0x468bc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468bd0:L468bd0:{c.instructions+=32;NFSU2_TR(0x468bd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468bd1:{NFSU2_TR(0x468bd1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468bd2:{NFSU2_TR(0x468bd2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468bd3:{NFSU2_TR(0x468bd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468bd4:{NFSU2_TR(0x468bd4);
__builtin_memmove((R+24),(R+4),4);
}
B468bd6:{NFSU2_TR(0x468bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B468bd9:{NFSU2_TR(0x468bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468bdc:{NFSU2_TR(0x468bdc);
__builtin_memmove((R+8),(R+0),4);
}
B468bde:{NFSU2_TR(0x468bde);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B468be1:{NFSU2_TR(0x468be1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B468be4:{NFSU2_TR(0x468be4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffull))));
}
B468bea:{NFSU2_TR(0x468bea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468beb:{NFSU2_TR(0x468beb);
__builtin_memmove((R+28),(R+0),4);
}
B468bed:{NFSU2_TR(0x468bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468bf0:{NFSU2_TR(0x468bf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468bf4:{NFSU2_TR(0x468bf4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468bf8:{NFSU2_TR(0x468bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468bfb:{NFSU2_TR(0x468bfb);
__builtin_memmove((R+4),(R+0),4);
}
B468bfd:{NFSU2_TR(0x468bfd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffull))));
}
B468c03:{NFSU2_TR(0x468c03);
{u32 ea_=u32(u32(7907112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B468c09:{NFSU2_TR(0x468c09);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468c0d:{NFSU2_TR(0x468c0d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468c11:{NFSU2_TR(0x468c11);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B468c14:{NFSU2_TR(0x468c14);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B468c17:{NFSU2_TR(0x468c17);
__builtin_memmove((R+20),(R+0),4);
}
B468c19:{NFSU2_TR(0x468c19);
{u32 ea_=u32(u32(7907112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B468c1f:{NFSU2_TR(0x468c1f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B468c21:{NFSU2_TR(0x468c21);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B468c25:{NFSU2_TR(0x468c25);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B468c28:{NFSU2_TR(0x468c28);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B468c2a:{NFSU2_TR(0x468c2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B468c2d:{NFSU2_TR(0x468c2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L468c7b;}}
}
B468c2f:L468c2f:{c.instructions+=2;NFSU2_TR(0x468c2f);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B468c31:{NFSU2_TR(0x468c31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L468c49;}}
}
B468c33:L468c33:{c.instructions+=11;NFSU2_TR(0x468c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468c36:{NFSU2_TR(0x468c36);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B468c39:{NFSU2_TR(0x468c39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468c3a:{NFSU2_TR(0x468c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468c3d:{NFSU2_TR(0x468c3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B468c41:{NFSU2_TR(0x468c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468c44:{NFSU2_TR(0x468c44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468c45:{NFSU2_TR(0x468c45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B468c46:{NFSU2_TR(0x468c46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468c47:{NFSU2_TR(0x468c47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B468c48:{NFSU2_TR(0x468c48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468c49:L468c49:{c.instructions+=4;NFSU2_TR(0x468c49);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468c4c:{NFSU2_TR(0x468c4c);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B468c52:{NFSU2_TR(0x468c52);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B468c54:{NFSU2_TR(0x468c54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468c59ull));
TAIL_STATIC(0x75bed4u,75b);
}
B468c59:L468c59:{c.instructions+=6;NFSU2_TR(0x468c59);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B468c5b:{NFSU2_TR(0x468c5b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B468c5e:{NFSU2_TR(0x468c5e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468c5f:{NFSU2_TR(0x468c5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468c60:{NFSU2_TR(0x468c60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468c61:{NFSU2_TR(0x468c61);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L468ce2;}}
}
B468c63:L468c63:{c.instructions+=1;NFSU2_TR(0x468c63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468c68ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B468c68:L468c68:{c.instructions+=10;NFSU2_TR(0x468c68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B468c6b:{NFSU2_TR(0x468c6b);
w4(R+4,u32(0x7fffull));
}
B468c70:{NFSU2_TR(0x468c70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468c71:{NFSU2_TR(0x468c71);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B468c73:{NFSU2_TR(0x468c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468c76:{NFSU2_TR(0x468c76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468c77:{NFSU2_TR(0x468c77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B468c78:{NFSU2_TR(0x468c78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468c79:{NFSU2_TR(0x468c79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B468c7a:{NFSU2_TR(0x468c7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468c7b:L468c7b:{c.instructions+=3;NFSU2_TR(0x468c7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B468c7d:{NFSU2_TR(0x468c7d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B468c7f:{NFSU2_TR(0x468c7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L468cf3;}}
}
B468c81:L468c81:{c.instructions+=6;NFSU2_TR(0x468c81);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B468c83:{NFSU2_TR(0x468c83);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468c86:{NFSU2_TR(0x468c86);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B468c8c:{NFSU2_TR(0x468c8c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B468c8e:{NFSU2_TR(0x468c8e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B468c91:{NFSU2_TR(0x468c91);
if(r1(R+514)){{goto L468c99;}}
}
B468c93:L468c93:{c.instructions+=2;NFSU2_TR(0x468c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468c96:{NFSU2_TR(0x468c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468c99:L468c99:{c.instructions+=6;NFSU2_TR(0x468c99);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468c9c:{NFSU2_TR(0x468c9c);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B468c9f:{NFSU2_TR(0x468c9f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B468ca3:{NFSU2_TR(0x468ca3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B468ca5:{NFSU2_TR(0x468ca5);
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
B468ca8:{NFSU2_TR(0x468ca8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L468cc5;}}
}
B468caa:L468caa:{c.instructions+=12;NFSU2_TR(0x468caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468cab:{NFSU2_TR(0x468cab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B468cad:{NFSU2_TR(0x468cad);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B468cb0:{NFSU2_TR(0x468cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468cb3:{NFSU2_TR(0x468cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468cb6:{NFSU2_TR(0x468cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468cb9:{NFSU2_TR(0x468cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x7fffull));
s4(u32(r4(U+0)),r4(U+4));
}
B468cc0:{NFSU2_TR(0x468cc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468cc1:{NFSU2_TR(0x468cc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B468cc2:{NFSU2_TR(0x468cc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468cc3:{NFSU2_TR(0x468cc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B468cc4:{NFSU2_TR(0x468cc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468cc5:L468cc5:{c.instructions+=4;NFSU2_TR(0x468cc5);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B468ccb:{NFSU2_TR(0x468ccb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B468ccf:{NFSU2_TR(0x468ccf);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B468cd5:{NFSU2_TR(0x468cd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468cdaull));
TAIL_STATIC(0x75bed4u,75b);
}
B468cda:L468cda:{c.instructions+=5;NFSU2_TR(0x468cda);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B468cdd:{NFSU2_TR(0x468cdd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468cde:{NFSU2_TR(0x468cde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468cdf:{NFSU2_TR(0x468cdf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468ce0:{NFSU2_TR(0x468ce0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468c63u);}goto L468c63;}}
}
B468ce2:L468ce2:{c.instructions+=1;NFSU2_TR(0x468ce2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468ce7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468160u);}goto L468160;}
}
B468ce7:L468ce7:{c.instructions+=8;NFSU2_TR(0x468ce7);
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
B468cea:{NFSU2_TR(0x468cea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468ceb:{NFSU2_TR(0x468ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468cee:{NFSU2_TR(0x468cee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468cef:{NFSU2_TR(0x468cef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B468cf0:{NFSU2_TR(0x468cf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468cf1:{NFSU2_TR(0x468cf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B468cf2:{NFSU2_TR(0x468cf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468cf3:L468cf3:{c.instructions+=2;NFSU2_TR(0x468cf3);
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
B468cf6:{NFSU2_TR(0x468cf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L468d27;}}
}
B468cf8:L468cf8:{c.instructions+=5;NFSU2_TR(0x468cf8);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468cfb:{NFSU2_TR(0x468cfb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B468d01:{NFSU2_TR(0x468d01);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B468d03:{NFSU2_TR(0x468d03);
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
B468d06:{NFSU2_TR(0x468d06);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L468d27;}}
}
B468d08:L468d08:{c.instructions+=13;NFSU2_TR(0x468d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468d0b:{NFSU2_TR(0x468d0b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B468d0d:{NFSU2_TR(0x468d0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468d0e:{NFSU2_TR(0x468d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468d11:{NFSU2_TR(0x468d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468d14:{NFSU2_TR(0x468d14);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B468d18:{NFSU2_TR(0x468d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468d1b:{NFSU2_TR(0x468d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x7fffull));
s4(u32(r4(U+0)),r4(U+4));
}
B468d22:{NFSU2_TR(0x468d22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468d23:{NFSU2_TR(0x468d23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B468d24:{NFSU2_TR(0x468d24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468d25:{NFSU2_TR(0x468d25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B468d26:{NFSU2_TR(0x468d26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468d27:L468d27:{c.instructions+=11;NFSU2_TR(0x468d27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468d28:{NFSU2_TR(0x468d28);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B468d2b:{NFSU2_TR(0x468d2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B468d2e:{NFSU2_TR(0x468d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468d31:{NFSU2_TR(0x468d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468d34:{NFSU2_TR(0x468d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468d37:{NFSU2_TR(0x468d37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468d38:{NFSU2_TR(0x468d38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B468d39:{NFSU2_TR(0x468d39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468d3a:{NFSU2_TR(0x468d3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B468d3b:{NFSU2_TR(0x468d3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468d40:L468d40:{c.instructions+=9;NFSU2_TR(0x468d40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468d41:{NFSU2_TR(0x468d41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468d42:{NFSU2_TR(0x468d42);
__builtin_memmove((R+24),(R+4),4);
}
B468d44:{NFSU2_TR(0x468d44);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468d47:{NFSU2_TR(0x468d47);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B468d49:{NFSU2_TR(0x468d49);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B468d4f:{NFSU2_TR(0x468d4f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B468d51:{NFSU2_TR(0x468d51);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B468d54:{NFSU2_TR(0x468d54);
if(r1(R+514)){{goto L468d6b;}}
}
B468d56:L468d56:{c.instructions+=3;NFSU2_TR(0x468d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468d59:{NFSU2_TR(0x468d59);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B468d5b:{NFSU2_TR(0x468d5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L468d6b;}}
}
B468d5d:L468d5d:{c.instructions+=6;NFSU2_TR(0x468d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468d60:{NFSU2_TR(0x468d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468d63:{NFSU2_TR(0x468d63);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B468d66:{NFSU2_TR(0x468d66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468d67:{NFSU2_TR(0x468d67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468d68:{NFSU2_TR(0x468d68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468d6b:L468d6b:{c.instructions+=10;NFSU2_TR(0x468d6b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468d6f:{NFSU2_TR(0x468d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B468d72:{NFSU2_TR(0x468d72);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B468d78:{NFSU2_TR(0x468d78);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B468d7a:{NFSU2_TR(0x468d7a);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B468d7d:{NFSU2_TR(0x468d7d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B468d80:{NFSU2_TR(0x468d80);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B468d83:{NFSU2_TR(0x468d83);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B468d86:{NFSU2_TR(0x468d86);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B468d88:{NFSU2_TR(0x468d88);
if(r1(R+518)){{goto L468da7;}}
}
B468d8a:L468d8a:{c.instructions+=2;NFSU2_TR(0x468d8a);
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
B468d8b:{NFSU2_TR(0x468d8b);
if(r1(R+518)){{goto L468d9e;}}
}
B468d8d:L468d8d:{c.instructions+=2;NFSU2_TR(0x468d8d);
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
B468d8e:{NFSU2_TR(0x468d8e);
if(r1(R+518)){{goto L468d95;}}
}
B468d90:L468d90:{c.instructions+=2;NFSU2_TR(0x468d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468d93:{NFSU2_TR(0x468d93);
{goto L468dae;}
}
B468d95:L468d95:{c.instructions+=3;NFSU2_TR(0x468d95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B468d97:{NFSU2_TR(0x468d97);
__builtin_memmove((R+4),(R+24),4);
}
B468d99:{NFSU2_TR(0x468d99);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468d9cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B468d9c:L468d9c:{c.instructions+=1;NFSU2_TR(0x468d9c);
{goto L468dae;}
}
B468d9e:L468d9e:{c.instructions+=3;NFSU2_TR(0x468d9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B468da0:{NFSU2_TR(0x468da0);
__builtin_memmove((R+4),(R+24),4);
}
B468da2:{NFSU2_TR(0x468da2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468da5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B468da5:L468da5:{c.instructions+=1;NFSU2_TR(0x468da5);
{goto L468dae;}
}
B468da7:L468da7:{c.instructions+=3;NFSU2_TR(0x468da7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B468da9:{NFSU2_TR(0x468da9);
__builtin_memmove((R+4),(R+24),4);
}
B468dab:{NFSU2_TR(0x468dab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468daeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B468dae:L468dae:{c.instructions+=6;NFSU2_TR(0x468dae);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468db1:{NFSU2_TR(0x468db1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B468db4:{NFSU2_TR(0x468db4);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B468db6:{NFSU2_TR(0x468db6);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B468dbc:{NFSU2_TR(0x468dbc);
{u32 ea_=u32(u32(7907116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B468dc2:{NFSU2_TR(0x468dc2);
if(r1(R+518)){{goto L468deb;}}
}
B468dc4:L468dc4:{c.instructions+=3;NFSU2_TR(0x468dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468dc7:{NFSU2_TR(0x468dc7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B468dc9:{NFSU2_TR(0x468dc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L468dd0;}}
}
B468dcb:L468dcb:{c.instructions+=2;NFSU2_TR(0x468dcb);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B468dce:{NFSU2_TR(0x468dce);
{goto L468dee;}
}
B468dd0:L468dd0:{c.instructions+=7;NFSU2_TR(0x468dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B468dd3:{NFSU2_TR(0x468dd3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468dd4:{NFSU2_TR(0x468dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B468dd7:{NFSU2_TR(0x468dd7);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B468dd9:{NFSU2_TR(0x468dd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468ddd:{NFSU2_TR(0x468ddd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B468de1:{NFSU2_TR(0x468de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468de6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B468de6:L468de6:{c.instructions+=3;NFSU2_TR(0x468de6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B468de8:{NFSU2_TR(0x468de8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468de9:{NFSU2_TR(0x468de9);
{goto L468df3;}
}
B468deb:L468deb:{c.instructions+=1;NFSU2_TR(0x468deb);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B468dee:L468dee:{c.instructions+=1;NFSU2_TR(0x468dee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468df3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B468df3:L468df3:{c.instructions+=6;NFSU2_TR(0x468df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468df6:{NFSU2_TR(0x468df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468df9:{NFSU2_TR(0x468df9);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B468dfb:{NFSU2_TR(0x468dfb);
{u32 ea_=u32(u32(7907016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B468e01:{NFSU2_TR(0x468e01);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B468e04:{NFSU2_TR(0x468e04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468e09ull));
TAIL_STATIC(0x75bed4u,75b);
}
B468e09:L468e09:{c.instructions+=4;NFSU2_TR(0x468e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468e0c:{NFSU2_TR(0x468e0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468e0d:{NFSU2_TR(0x468e0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468e0e:{NFSU2_TR(0x468e0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468e20:L468e20:{c.instructions+=2;NFSU2_TR(0x468e20);
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
B468e22:{NFSU2_TR(0x468e22);
if(r1(R+518)){{goto L468e28;}}
}
B468e24:L468e24:{c.instructions+=2;NFSU2_TR(0x468e24);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B468e27:{NFSU2_TR(0x468e27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468e28:L468e28:{c.instructions+=2;NFSU2_TR(0x468e28);
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
B468e2a:{NFSU2_TR(0x468e2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468e30:L468e30:{c.instructions+=7;NFSU2_TR(0x468e30);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468e34:{NFSU2_TR(0x468e34);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B468e38:{NFSU2_TR(0x468e38);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468e3c:{NFSU2_TR(0x468e3c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B468e3e:{NFSU2_TR(0x468e3e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B468e40:{NFSU2_TR(0x468e40);
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
B468e43:{NFSU2_TR(0x468e43);
if(r1(R+518)){{goto L468e62;}}
}
B468e45:L468e45:{c.instructions+=8;NFSU2_TR(0x468e45);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B468e47:{NFSU2_TR(0x468e47);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468e4b:{NFSU2_TR(0x468e4b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B468e4f:{NFSU2_TR(0x468e4f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468e53:{NFSU2_TR(0x468e53);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B468e55:{NFSU2_TR(0x468e55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B468e57:{NFSU2_TR(0x468e57);
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
B468e5a:{NFSU2_TR(0x468e5a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L468e62;}}
}
B468e5c:L468e5c:{c.instructions+=2;NFSU2_TR(0x468e5c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B468e5e:{NFSU2_TR(0x468e5e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468e62:L468e62:{c.instructions+=1;NFSU2_TR(0x468e62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468e70:L468e70:{c.instructions+=7;NFSU2_TR(0x468e70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468e74:{NFSU2_TR(0x468e74);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B468e78:{NFSU2_TR(0x468e78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468e79:{NFSU2_TR(0x468e79);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B468e7d:{NFSU2_TR(0x468e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B468e80:{NFSU2_TR(0x468e80);
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
B468e82:{NFSU2_TR(0x468e82);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L468e8e;}}
}
B468e84:L468e84:{c.instructions+=4;NFSU2_TR(0x468e84);
__builtin_memmove((R+0),(R+8),4);
}
B468e86:{NFSU2_TR(0x468e86);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B468e88:{NFSU2_TR(0x468e88);
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
B468e8a:{NFSU2_TR(0x468e8a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L468e8e;}}
}
B468e8c:L468e8c:{c.instructions+=1;NFSU2_TR(0x468e8c);
__builtin_memmove((R+0),(R+4),4);
}
B468e8e:L468e8e:{c.instructions+=2;NFSU2_TR(0x468e8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468e8f:{NFSU2_TR(0x468e8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468e90:L468e90:{c.instructions+=9;NFSU2_TR(0x468e90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468e91:{NFSU2_TR(0x468e91);
__builtin_memmove((R+20),(R+16),4);
}
B468e93:{NFSU2_TR(0x468e93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B468e96:{NFSU2_TR(0x468e96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B468e99:{NFSU2_TR(0x468e99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468e9c:{NFSU2_TR(0x468e9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468e9d:{NFSU2_TR(0x468e9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B468ea1:{NFSU2_TR(0x468ea1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468ea2:{NFSU2_TR(0x468ea2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468ea7ull));
TAIL_STATIC(0x43cf10u,43c);
}
B468ea7:L468ea7:{c.instructions+=11;NFSU2_TR(0x468ea7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B468eab:{NFSU2_TR(0x468eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468eae:{NFSU2_TR(0x468eae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468eb2:{NFSU2_TR(0x468eb2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B468eb4:{NFSU2_TR(0x468eb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B468eb8:{NFSU2_TR(0x468eb8);
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
B468ebb:{NFSU2_TR(0x468ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468ebe:{NFSU2_TR(0x468ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468ec1:{NFSU2_TR(0x468ec1);
__builtin_memmove((R+16),(R+20),4);
}
B468ec3:{NFSU2_TR(0x468ec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B468ec4:{NFSU2_TR(0x468ec4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468ed0:L468ed0:{c.instructions+=4;NFSU2_TR(0x468ed0);
__builtin_memmove((R+0),(R+4),4);
}
B468ed2:{NFSU2_TR(0x468ed2);
u8 U[4];
w4(U+0,u32(0x78a730ull));
s4(u32(r4(R+0)),r4(U+0));
}
B468ed8:{NFSU2_TR(0x468ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B468edf:{NFSU2_TR(0x468edf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468ee0:L468ee0:{c.instructions+=4;NFSU2_TR(0x468ee0);
s4(0x82b968,u32(u32(m4(0x82b968))+u32(u32(0x1ull))));
}
B468ee6:{NFSU2_TR(0x468ee6);
__builtin_memmove((R+0),gp(0x82afa8),4);
}
B468eeb:{NFSU2_TR(0x468eeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468eec:{NFSU2_TR(0x468eec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468ef1ull));
TAIL_STATIC(0x440e50u,440);
}
B468ef1:L468ef1:{c.instructions+=2;NFSU2_TR(0x468ef1);
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
B468ef4:{NFSU2_TR(0x468ef4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468f00:L468f00:{c.instructions+=8;NFSU2_TR(0x468f00);
__builtin_memmove((R+8),gp(0x82b968),4);
}
B468f06:{NFSU2_TR(0x468f06);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468f0a:{NFSU2_TR(0x468f0a);
__builtin_memmove((R+4),gp(0x82afa8),4);
}
B468f10:{NFSU2_TR(0x468f10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468f11:{NFSU2_TR(0x468f11);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B468f12:{NFSU2_TR(0x468f12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468f13:{NFSU2_TR(0x468f13);
__builtin_memmove(gp(0x82b968),(R+8),4);
}
B468f19:{NFSU2_TR(0x468f19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468f1eull));
TAIL_STATIC(0x43f920u,43f);
}
B468f1e:L468f1e:{c.instructions+=2;NFSU2_TR(0x468f1e);
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
B468f21:{NFSU2_TR(0x468f21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468f30:L468f30:{c.instructions+=5;NFSU2_TR(0x468f30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468f34:{NFSU2_TR(0x468f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468f37:{NFSU2_TR(0x468f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B468f3d:{NFSU2_TR(0x468f3d);
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
B468f3f:{NFSU2_TR(0x468f3f);
if(r1(R+518)){{goto L468f4a;}}
}
B468f41:L468f41:{c.instructions+=2;NFSU2_TR(0x468f41);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B468f45:{NFSU2_TR(0x468f45);
TAIL_STATIC(0x459d90u,459);
}
B468f4a:L468f4a:{c.instructions+=1;NFSU2_TR(0x468f4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468f50:L468f50:{c.instructions+=3;NFSU2_TR(0x468f50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468f51:{NFSU2_TR(0x468f51);
__builtin_memmove((R+24),(R+4),4);
}
B468f53:{NFSU2_TR(0x468f53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468f58ull));
TAIL_STATIC(0x458680u,458);
}
B468f58:L468f58:{c.instructions+=2;NFSU2_TR(0x468f58);
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
B468f5d:{NFSU2_TR(0x468f5d);
if(r1(R+518)){{goto L468f68;}}
}
B468f5f:L468f5f:{c.instructions+=2;NFSU2_TR(0x468f5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468f60:{NFSU2_TR(0x468f60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468f65ull));
TAIL_STATIC(0x440540u,440);
}
B468f65:L468f65:{c.instructions+=1;NFSU2_TR(0x468f65);
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
B468f68:L468f68:{c.instructions+=3;NFSU2_TR(0x468f68);
__builtin_memmove((R+0),(R+24),4);
}
B468f6a:{NFSU2_TR(0x468f6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468f6b:{NFSU2_TR(0x468f6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468f70:L468f70:{c.instructions+=10;NFSU2_TR(0x468f70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468f74:{NFSU2_TR(0x468f74);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B468f77:{NFSU2_TR(0x468f77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468f78:{NFSU2_TR(0x468f78);
w4(R+8,u32(r1(R+8)));
}
B468f7b:{NFSU2_TR(0x468f7b);
u8 U[16];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B468f82:{NFSU2_TR(0x468f82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468f83:{NFSU2_TR(0x468f83);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B468f85:{NFSU2_TR(0x468f85);
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
B468f87:{NFSU2_TR(0x468f87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468f88:{NFSU2_TR(0x468f88);
if(r1(R+518)){{goto L468fd5;}}
}
B468f8a:L468f8a:{c.instructions+=10;NFSU2_TR(0x468f8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B468f8e:{NFSU2_TR(0x468f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B468f91:{NFSU2_TR(0x468f91);
__builtin_memmove((R+8),(R+12),4);
}
B468f93:{NFSU2_TR(0x468f93);
__builtin_memmove((R+28),(R+12),4);
}
B468f95:{NFSU2_TR(0x468f95);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B468f98:{NFSU2_TR(0x468f98);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B468f9b:{NFSU2_TR(0x468f9b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1full))));
}
B468f9e:{NFSU2_TR(0x468f9e);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7full))));
}
B468fa1:{NFSU2_TR(0x468fa1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B468fa3:{NFSU2_TR(0x468fa3);
if(r1(R+518)){{goto L468fb1;}}
}
B468fa5:L468fa5:{c.instructions+=2;NFSU2_TR(0x468fa5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B468fa8:{NFSU2_TR(0x468fa8);
if(r1(R+518)){{goto L468fb9;}}
}
B468faa:L468faa:{c.instructions+=3;NFSU2_TR(0x468faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B468fad:{NFSU2_TR(0x468fad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B468faf:{NFSU2_TR(0x468faf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x468fa5u);}goto L468fa5;}}
}
B468fb1:L468fb1:{c.instructions+=5;NFSU2_TR(0x468fb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468fb2:{NFSU2_TR(0x468fb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468fb3:{NFSU2_TR(0x468fb3);
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
B468fb5:{NFSU2_TR(0x468fb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468fb6:{NFSU2_TR(0x468fb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468fb9:L468fb9:{c.instructions+=3;NFSU2_TR(0x468fb9);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xe0000000ull))));
}
B468fbf:{NFSU2_TR(0x468fbf);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x40000000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40000000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40000000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B468fc5:{NFSU2_TR(0x468fc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L468fd5;}}
}
B468fc7:L468fc7:{c.instructions+=3;NFSU2_TR(0x468fc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468fc8:{NFSU2_TR(0x468fc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468fc9:{NFSU2_TR(0x468fc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468fceull));
TAIL_STATIC(0x463c50u,463);
}
B468fce:L468fce:{c.instructions+=2;NFSU2_TR(0x468fce);
__builtin_memmove((R+4),(R+0),4);
}
B468fd0:{NFSU2_TR(0x468fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x468fd5ull));
TAIL_STATIC(0x464cd0u,464);
}
B468fd5:L468fd5:{c.instructions+=4;NFSU2_TR(0x468fd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B468fd6:{NFSU2_TR(0x468fd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B468fd7:{NFSU2_TR(0x468fd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B468fd8:{NFSU2_TR(0x468fd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B468fe0:L468fe0:{c.instructions+=8;NFSU2_TR(0x468fe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B468fe4:{NFSU2_TR(0x468fe4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B468fe7:{NFSU2_TR(0x468fe7);
w4(R+0,u32(r1(R+0)));
}
B468fea:{NFSU2_TR(0x468fea);
u8 U[16];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B468ff1:{NFSU2_TR(0x468ff1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B468ff3:{NFSU2_TR(0x468ff3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468ff4:{NFSU2_TR(0x468ff4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B468ff5:{NFSU2_TR(0x468ff5);
if(r1(R+518)){TAIL_STATIC(0x469045u,469);}
}
B468ff7:L468ff7:{c.instructions+=3;NFSU2_TR(0x468ff7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B468ffb:{NFSU2_TR(0x468ffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B468ffe:{NFSU2_TR(0x468ffe);
__builtin_memmove((R+0),(R+28),4);
TAIL_STATIC(0x469000u,469);
}
XIT:NFSU2_TR_EXIT(0x468,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
