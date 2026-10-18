#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x674,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x674,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_674(u8* __restrict R,Cpu& c);
u32 page_674(Cpu& c){return body_674(c.regs.data(),c);}
__attribute__((noinline)) u32 body_674(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x674000:goto L674000;
case 0x674006:goto L674006;
case 0x67400b:c.instructions+=1;goto B67400b;
case 0x674011:goto L674011;
case 0x674014:c.instructions+=5;goto B674014;
case 0x674017:c.instructions+=4;goto B674017;
case 0x674018:c.instructions+=3;goto B674018;
case 0x67401b:c.instructions+=2;goto B67401b;
case 0x67401e:c.instructions+=1;goto B67401e;
case 0x674023:goto L674023;
case 0x674025:c.instructions+=1;goto B674025;
case 0x67402b:goto L67402b;
case 0x67402d:c.instructions+=4;goto B67402d;
case 0x674033:c.instructions+=3;goto B674033;
case 0x674038:c.instructions+=2;goto B674038;
case 0x67403a:c.instructions+=1;goto B67403a;
case 0x674040:goto L674040;
case 0x674046:goto L674046;
case 0x67404c:c.instructions+=1;goto B67404c;
case 0x674052:goto L674052;
case 0x674058:c.instructions+=1;goto B674058;
case 0x67405e:goto L67405e;
case 0x674064:c.instructions+=1;goto B674064;
case 0x67406a:goto L67406a;
case 0x674070:c.instructions+=1;goto B674070;
case 0x674076:goto L674076;
case 0x67407c:c.instructions+=1;goto B67407c;
case 0x674082:goto L674082;
case 0x674088:c.instructions+=1;goto B674088;
case 0x67408a:goto L67408a;
case 0x674090:c.instructions+=1;goto B674090;
case 0x674096:goto L674096;
case 0x674099:c.instructions+=4;goto B674099;
case 0x67409f:c.instructions+=3;goto B67409f;
case 0x6740a1:c.instructions+=2;goto B6740a1;
case 0x6740a4:c.instructions+=1;goto B6740a4;
case 0x6740a6:goto L6740a6;
case 0x6740a9:c.instructions+=9;goto B6740a9;
case 0x6740ab:c.instructions+=8;goto B6740ab;
case 0x6740ad:c.instructions+=7;goto B6740ad;
case 0x6740af:c.instructions+=6;goto B6740af;
case 0x6740b5:c.instructions+=5;goto B6740b5;
case 0x6740b7:c.instructions+=4;goto B6740b7;
case 0x6740b9:c.instructions+=3;goto B6740b9;
case 0x6740bb:c.instructions+=2;goto B6740bb;
case 0x6740bd:c.instructions+=1;goto B6740bd;
case 0x6740bf:goto L6740bf;
case 0x6740c2:c.instructions+=1;goto B6740c2;
case 0x6740c8:goto L6740c8;
case 0x6740cb:c.instructions+=5;goto B6740cb;
case 0x6740ce:c.instructions+=4;goto B6740ce;
case 0x6740d4:c.instructions+=3;goto B6740d4;
case 0x6740d6:c.instructions+=2;goto B6740d6;
case 0x6740d9:c.instructions+=1;goto B6740d9;
case 0x6740db:goto L6740db;
case 0x6740de:c.instructions+=9;goto B6740de;
case 0x6740e0:c.instructions+=8;goto B6740e0;
case 0x6740e2:c.instructions+=7;goto B6740e2;
case 0x6740e4:c.instructions+=6;goto B6740e4;
case 0x6740ea:c.instructions+=5;goto B6740ea;
case 0x6740ec:c.instructions+=4;goto B6740ec;
case 0x6740ee:c.instructions+=3;goto B6740ee;
case 0x6740f0:c.instructions+=2;goto B6740f0;
case 0x6740f2:c.instructions+=1;goto B6740f2;
case 0x6740f7:goto L6740f7;
case 0x6740fa:c.instructions+=2;goto B6740fa;
case 0x674100:c.instructions+=1;goto B674100;
case 0x674105:goto L674105;
case 0x67410b:c.instructions+=2;goto B67410b;
case 0x67410e:c.instructions+=1;goto B67410e;
case 0x674113:goto L674113;
case 0x674116:c.instructions+=3;goto B674116;
case 0x67411c:c.instructions+=2;goto B67411c;
case 0x67411f:c.instructions+=1;goto B67411f;
case 0x674124:goto L674124;
case 0x674127:c.instructions+=5;goto B674127;
case 0x67412a:c.instructions+=4;goto B67412a;
case 0x67412c:c.instructions+=3;goto B67412c;
case 0x67412e:c.instructions+=2;goto B67412e;
case 0x674131:c.instructions+=1;goto B674131;
case 0x674137:goto L674137;
case 0x67413a:c.instructions+=4;goto B67413a;
case 0x67413b:c.instructions+=3;goto B67413b;
case 0x67413c:c.instructions+=2;goto B67413c;
case 0x67413f:c.instructions+=1;goto B67413f;
case 0x674144:goto L674144;
case 0x674146:c.instructions+=3;goto B674146;
case 0x674147:c.instructions+=2;goto B674147;
case 0x674148:c.instructions+=1;goto B674148;
case 0x67414e:goto L67414e;
case 0x674151:c.instructions+=4;goto B674151;
case 0x674152:c.instructions+=3;goto B674152;
case 0x674153:c.instructions+=2;goto B674153;
case 0x674156:c.instructions+=1;goto B674156;
case 0x67415b:goto L67415b;
case 0x67415e:c.instructions+=3;goto B67415e;
case 0x67415f:c.instructions+=2;goto B67415f;
case 0x674160:c.instructions+=1;goto B674160;
case 0x674165:goto L674165;
case 0x674168:c.instructions+=4;goto B674168;
case 0x67416e:c.instructions+=3;goto B67416e;
case 0x674170:c.instructions+=2;goto B674170;
case 0x674173:c.instructions+=1;goto B674173;
case 0x674175:goto L674175;
case 0x674178:c.instructions+=4;goto B674178;
case 0x67417e:c.instructions+=3;goto B67417e;
case 0x674180:c.instructions+=2;goto B674180;
case 0x674183:c.instructions+=1;goto B674183;
case 0x674189:goto L674189;
case 0x67418b:c.instructions+=5;goto B67418b;
case 0x67418e:c.instructions+=4;goto B67418e;
case 0x674191:c.instructions+=3;goto B674191;
case 0x674193:c.instructions+=2;goto B674193;
case 0x674196:c.instructions+=1;goto B674196;
case 0x67419b:goto L67419b;
case 0x67419e:c.instructions+=5;goto B67419e;
case 0x6741a1:c.instructions+=4;goto B6741a1;
case 0x6741a7:c.instructions+=3;goto B6741a7;
case 0x6741a9:c.instructions+=2;goto B6741a9;
case 0x6741ac:c.instructions+=1;goto B6741ac;
case 0x6741ae:goto L6741ae;
case 0x6741b1:c.instructions+=2;goto B6741b1;
case 0x6741b7:c.instructions+=1;goto B6741b7;
case 0x6741b9:goto L6741b9;
case 0x6741bf:c.instructions+=5;goto B6741bf;
case 0x6741c2:c.instructions+=4;goto B6741c2;
case 0x6741c4:c.instructions+=3;goto B6741c4;
case 0x6741c6:c.instructions+=2;goto B6741c6;
case 0x6741c9:c.instructions+=1;goto B6741c9;
case 0x6741cb:goto L6741cb;
case 0x6741cd:c.instructions+=1;goto B6741cd;
case 0x6741cf:goto L6741cf;
case 0x6741d2:c.instructions+=1;goto B6741d2;
case 0x6741d8:goto L6741d8;
case 0x6741db:c.instructions+=5;goto B6741db;
case 0x6741de:c.instructions+=4;goto B6741de;
case 0x6741e4:c.instructions+=3;goto B6741e4;
case 0x6741e6:c.instructions+=2;goto B6741e6;
case 0x6741e9:c.instructions+=1;goto B6741e9;
case 0x6741eb:goto L6741eb;
case 0x6741ee:c.instructions+=2;goto B6741ee;
case 0x6741f4:c.instructions+=1;goto B6741f4;
case 0x6741f6:goto L6741f6;
case 0x6741fc:c.instructions+=5;goto B6741fc;
case 0x6741ff:c.instructions+=4;goto B6741ff;
case 0x674201:c.instructions+=3;goto B674201;
case 0x674203:c.instructions+=2;goto B674203;
case 0x674206:c.instructions+=1;goto B674206;
case 0x67420c:goto L67420c;
case 0x67420f:c.instructions+=1;goto B67420f;
case 0x674215:goto L674215;
case 0x67421a:goto L67421a;
case 0x67421d:c.instructions+=5;goto B67421d;
case 0x67421f:c.instructions+=4;goto B67421f;
case 0x674222:c.instructions+=3;goto B674222;
case 0x674225:c.instructions+=2;goto B674225;
case 0x674227:c.instructions+=1;goto B674227;
case 0x67422c:goto L67422c;
case 0x67422f:c.instructions+=4;goto B67422f;
case 0x674235:c.instructions+=3;goto B674235;
case 0x674237:c.instructions+=2;goto B674237;
case 0x67423a:c.instructions+=1;goto B67423a;
case 0x674240:goto L674240;
case 0x674243:c.instructions+=7;goto B674243;
case 0x674245:c.instructions+=6;goto B674245;
case 0x67424b:c.instructions+=5;goto B67424b;
case 0x67424e:c.instructions+=4;goto B67424e;
case 0x674251:c.instructions+=3;goto B674251;
case 0x674253:c.instructions+=2;goto B674253;
case 0x674259:c.instructions+=1;goto B674259;
case 0x67425e:goto L67425e;
case 0x674264:c.instructions+=1;goto B674264;
case 0x67426a:goto L67426a;
case 0x674270:c.instructions+=1;goto B674270;
case 0x674276:goto L674276;
case 0x67427c:c.instructions+=1;goto B67427c;
case 0x674282:goto L674282;
case 0x674288:c.instructions+=1;goto B674288;
case 0x67428e:goto L67428e;
case 0x674294:c.instructions+=1;goto B674294;
case 0x674296:goto L674296;
case 0x67429c:c.instructions+=1;goto B67429c;
case 0x67429e:goto L67429e;
case 0x6742a4:c.instructions+=1;goto B6742a4;
case 0x6742aa:goto L6742aa;
case 0x6742ad:c.instructions+=5;goto B6742ad;
case 0x6742b0:c.instructions+=4;goto B6742b0;
case 0x6742b2:c.instructions+=3;goto B6742b2;
case 0x6742b4:c.instructions+=2;goto B6742b4;
case 0x6742b7:c.instructions+=1;goto B6742b7;
case 0x6742bd:goto L6742bd;
case 0x6742c0:c.instructions+=4;goto B6742c0;
case 0x6742c1:c.instructions+=3;goto B6742c1;
case 0x6742c2:c.instructions+=2;goto B6742c2;
case 0x6742c5:c.instructions+=1;goto B6742c5;
case 0x6742ca:goto L6742ca;
case 0x6742cc:c.instructions+=3;goto B6742cc;
case 0x6742cd:c.instructions+=2;goto B6742cd;
case 0x6742ce:c.instructions+=1;goto B6742ce;
case 0x6742d4:goto L6742d4;
case 0x6742d6:c.instructions+=2;goto B6742d6;
case 0x6742d9:c.instructions+=1;goto B6742d9;
case 0x6742de:goto L6742de;
case 0x6742e1:c.instructions+=5;goto B6742e1;
case 0x6742e4:c.instructions+=4;goto B6742e4;
case 0x6742e6:c.instructions+=3;goto B6742e6;
case 0x6742e8:c.instructions+=2;goto B6742e8;
case 0x6742eb:c.instructions+=1;goto B6742eb;
case 0x6742f1:goto L6742f1;
case 0x6742f4:c.instructions+=4;goto B6742f4;
case 0x6742f5:c.instructions+=3;goto B6742f5;
case 0x6742f6:c.instructions+=2;goto B6742f6;
case 0x6742f9:c.instructions+=1;goto B6742f9;
case 0x6742fe:goto L6742fe;
case 0x674300:c.instructions+=3;goto B674300;
case 0x674301:c.instructions+=2;goto B674301;
case 0x674302:c.instructions+=1;goto B674302;
case 0x674308:goto L674308;
case 0x67430b:c.instructions+=1;goto B67430b;
case 0x67430d:goto L67430d;
case 0x67430f:c.instructions+=1;goto B67430f;
case 0x674314:goto L674314;
case 0x674317:c.instructions+=4;goto B674317;
case 0x67431d:c.instructions+=3;goto B67431d;
case 0x67431f:c.instructions+=2;goto B67431f;
case 0x674322:c.instructions+=1;goto B674322;
case 0x674324:goto L674324;
case 0x674327:c.instructions+=4;goto B674327;
case 0x67432d:c.instructions+=3;goto B67432d;
case 0x67432f:c.instructions+=2;goto B67432f;
case 0x674332:c.instructions+=1;goto B674332;
case 0x674334:goto L674334;
case 0x674337:c.instructions+=1;goto B674337;
case 0x67433c:goto L67433c;
case 0x67433f:c.instructions+=2;goto B67433f;
case 0x674342:c.instructions+=1;goto B674342;
case 0x674347:goto L674347;
case 0x67434c:goto L67434c;
case 0x67434e:c.instructions+=1;goto B67434e;
case 0x674353:goto L674353;
case 0x674356:c.instructions+=4;goto B674356;
case 0x67435c:c.instructions+=3;goto B67435c;
case 0x67435e:c.instructions+=2;goto B67435e;
case 0x674361:c.instructions+=1;goto B674361;
case 0x674363:goto L674363;
case 0x674366:c.instructions+=4;goto B674366;
case 0x67436c:c.instructions+=3;goto B67436c;
case 0x67436e:c.instructions+=2;goto B67436e;
case 0x674371:c.instructions+=1;goto B674371;
case 0x674373:goto L674373;
case 0x674376:c.instructions+=1;goto B674376;
case 0x67437b:goto L67437b;
case 0x67437e:c.instructions+=2;goto B67437e;
case 0x674381:c.instructions+=1;goto B674381;
case 0x674386:goto L674386;
case 0x67438b:goto L67438b;
case 0x674391:c.instructions+=3;goto B674391;
case 0x674394:c.instructions+=2;goto B674394;
case 0x67439a:c.instructions+=1;goto B67439a;
case 0x67439f:goto L67439f;
case 0x6743a2:c.instructions+=5;goto B6743a2;
case 0x6743a5:c.instructions+=4;goto B6743a5;
case 0x6743a7:c.instructions+=3;goto B6743a7;
case 0x6743a9:c.instructions+=2;goto B6743a9;
case 0x6743ac:c.instructions+=1;goto B6743ac;
case 0x6743b2:goto L6743b2;
case 0x6743b5:c.instructions+=4;goto B6743b5;
case 0x6743b6:c.instructions+=3;goto B6743b6;
case 0x6743b7:c.instructions+=2;goto B6743b7;
case 0x6743ba:c.instructions+=1;goto B6743ba;
case 0x6743bf:goto L6743bf;
case 0x6743c1:c.instructions+=3;goto B6743c1;
case 0x6743c2:c.instructions+=2;goto B6743c2;
case 0x6743c3:c.instructions+=1;goto B6743c3;
case 0x6743c9:goto L6743c9;
case 0x6743cc:c.instructions+=1;goto B6743cc;
case 0x6743d1:goto L6743d1;
case 0x6743d4:c.instructions+=5;goto B6743d4;
case 0x6743d7:c.instructions+=4;goto B6743d7;
case 0x6743d9:c.instructions+=3;goto B6743d9;
case 0x6743db:c.instructions+=2;goto B6743db;
case 0x6743de:c.instructions+=1;goto B6743de;
case 0x6743e4:goto L6743e4;
case 0x6743e7:c.instructions+=4;goto B6743e7;
case 0x6743e8:c.instructions+=3;goto B6743e8;
case 0x6743e9:c.instructions+=2;goto B6743e9;
case 0x6743ec:c.instructions+=1;goto B6743ec;
case 0x6743f1:goto L6743f1;
case 0x6743f3:c.instructions+=3;goto B6743f3;
case 0x6743f4:c.instructions+=2;goto B6743f4;
case 0x6743f5:c.instructions+=1;goto B6743f5;
case 0x6743fb:goto L6743fb;
case 0x6743fe:c.instructions+=1;goto B6743fe;
case 0x674403:goto L674403;
case 0x674409:c.instructions+=1;goto B674409;
case 0x67440f:goto L67440f;
case 0x674414:c.instructions+=2;goto B674414;
case 0x674419:c.instructions+=1;goto B674419;
case 0x67441f:goto L67441f;
case 0x674422:c.instructions+=5;goto B674422;
case 0x674425:c.instructions+=4;goto B674425;
case 0x674426:c.instructions+=3;goto B674426;
case 0x674429:c.instructions+=2;goto B674429;
case 0x67442c:c.instructions+=1;goto B67442c;
case 0x674431:goto L674431;
case 0x674433:c.instructions+=1;goto B674433;
case 0x674439:goto L674439;
case 0x67443c:c.instructions+=7;goto B67443c;
case 0x67443f:c.instructions+=6;goto B67443f;
case 0x674440:c.instructions+=5;goto B674440;
case 0x674443:c.instructions+=4;goto B674443;
case 0x674445:c.instructions+=3;goto B674445;
case 0x674448:c.instructions+=2;goto B674448;
case 0x67444b:c.instructions+=1;goto B67444b;
case 0x674450:goto L674450;
case 0x674452:c.instructions+=1;goto B674452;
case 0x674458:goto L674458;
case 0x67445a:c.instructions+=4;goto B67445a;
case 0x674460:c.instructions+=3;goto B674460;
case 0x674465:c.instructions+=2;goto B674465;
case 0x674467:c.instructions+=1;goto B674467;
case 0x67446d:goto L67446d;
case 0x674473:goto L674473;
case 0x674479:c.instructions+=1;goto B674479;
case 0x67447b:goto L67447b;
case 0x674481:c.instructions+=1;goto B674481;
case 0x674483:goto L674483;
case 0x674489:c.instructions+=1;goto B674489;
case 0x67448b:goto L67448b;
case 0x674491:c.instructions+=1;goto B674491;
case 0x674497:goto L674497;
case 0x67449a:c.instructions+=4;goto B67449a;
case 0x67449d:c.instructions+=3;goto B67449d;
case 0x67449f:c.instructions+=2;goto B67449f;
case 0x6744a2:c.instructions+=1;goto B6744a2;
case 0x6744a8:goto L6744a8;
case 0x6744ab:c.instructions+=4;goto B6744ab;
case 0x6744ae:c.instructions+=3;goto B6744ae;
case 0x6744b0:c.instructions+=2;goto B6744b0;
case 0x6744b3:c.instructions+=1;goto B6744b3;
case 0x6744b5:goto L6744b5;
case 0x6744b7:c.instructions+=1;goto B6744b7;
case 0x6744bc:goto L6744bc;
case 0x6744bf:c.instructions+=4;goto B6744bf;
case 0x6744c2:c.instructions+=3;goto B6744c2;
case 0x6744c4:c.instructions+=2;goto B6744c4;
case 0x6744c7:c.instructions+=1;goto B6744c7;
case 0x6744cd:goto L6744cd;
case 0x6744d0:c.instructions+=4;goto B6744d0;
case 0x6744d3:c.instructions+=3;goto B6744d3;
case 0x6744d5:c.instructions+=2;goto B6744d5;
case 0x6744d8:c.instructions+=1;goto B6744d8;
case 0x6744da:goto L6744da;
case 0x6744dc:c.instructions+=1;goto B6744dc;
case 0x6744e1:goto L6744e1;
case 0x6744e4:c.instructions+=4;goto B6744e4;
case 0x6744e7:c.instructions+=3;goto B6744e7;
case 0x6744e9:c.instructions+=2;goto B6744e9;
case 0x6744ec:c.instructions+=1;goto B6744ec;
case 0x6744ee:goto L6744ee;
case 0x6744f1:c.instructions+=1;goto B6744f1;
case 0x6744f3:goto L6744f3;
case 0x6744f6:c.instructions+=4;goto B6744f6;
case 0x6744f9:c.instructions+=3;goto B6744f9;
case 0x6744fb:c.instructions+=2;goto B6744fb;
case 0x6744fe:c.instructions+=1;goto B6744fe;
case 0x674500:goto L674500;
case 0x674503:c.instructions+=1;goto B674503;
case 0x674505:goto L674505;
case 0x674508:goto L674508;
case 0x67450b:c.instructions+=5;goto B67450b;
case 0x67450e:c.instructions+=4;goto B67450e;
case 0x674511:c.instructions+=3;goto B674511;
case 0x674513:c.instructions+=2;goto B674513;
case 0x674516:c.instructions+=1;goto B674516;
case 0x67451c:goto L67451c;
case 0x67451e:goto L67451e;
case 0x674521:c.instructions+=5;goto B674521;
case 0x674524:c.instructions+=4;goto B674524;
case 0x674527:c.instructions+=3;goto B674527;
case 0x67452a:c.instructions+=2;goto B67452a;
case 0x67452d:c.instructions+=1;goto B67452d;
case 0x674532:goto L674532;
case 0x674538:c.instructions+=1;goto B674538;
case 0x67453e:goto L67453e;
case 0x674544:c.instructions+=1;goto B674544;
case 0x674546:goto L674546;
case 0x67454c:c.instructions+=1;goto B67454c;
case 0x67454e:goto L67454e;
case 0x674554:c.instructions+=1;goto B674554;
case 0x67455a:goto L67455a;
case 0x67455d:c.instructions+=4;goto B67455d;
case 0x674560:c.instructions+=3;goto B674560;
case 0x674562:c.instructions+=2;goto B674562;
case 0x674565:c.instructions+=1;goto B674565;
case 0x674567:goto L674567;
case 0x67456a:goto L67456a;
case 0x67456d:c.instructions+=5;goto B67456d;
case 0x674570:c.instructions+=4;goto B674570;
case 0x674573:c.instructions+=3;goto B674573;
case 0x674575:c.instructions+=2;goto B674575;
case 0x674578:c.instructions+=1;goto B674578;
case 0x67457e:goto L67457e;
case 0x674581:c.instructions+=1;goto B674581;
case 0x674586:goto L674586;
case 0x674589:c.instructions+=5;goto B674589;
case 0x67458c:c.instructions+=4;goto B67458c;
case 0x67458e:c.instructions+=3;goto B67458e;
case 0x674590:c.instructions+=2;goto B674590;
case 0x674593:c.instructions+=1;goto B674593;
case 0x674595:goto L674595;
case 0x674598:c.instructions+=4;goto B674598;
case 0x674599:c.instructions+=3;goto B674599;
case 0x67459a:c.instructions+=2;goto B67459a;
case 0x67459d:c.instructions+=1;goto B67459d;
case 0x6745a2:goto L6745a2;
case 0x6745a4:c.instructions+=3;goto B6745a4;
case 0x6745a5:c.instructions+=2;goto B6745a5;
case 0x6745a6:c.instructions+=1;goto B6745a6;
case 0x6745a8:goto L6745a8;
case 0x6745ab:c.instructions+=5;goto B6745ab;
case 0x6745ae:c.instructions+=4;goto B6745ae;
case 0x6745b0:c.instructions+=3;goto B6745b0;
case 0x6745b2:c.instructions+=2;goto B6745b2;
case 0x6745b5:c.instructions+=1;goto B6745b5;
case 0x6745b7:goto L6745b7;
case 0x6745ba:c.instructions+=4;goto B6745ba;
case 0x6745bb:c.instructions+=3;goto B6745bb;
case 0x6745bc:c.instructions+=2;goto B6745bc;
case 0x6745bf:c.instructions+=1;goto B6745bf;
case 0x6745c4:goto L6745c4;
case 0x6745c6:c.instructions+=3;goto B6745c6;
case 0x6745c7:c.instructions+=2;goto B6745c7;
case 0x6745c8:c.instructions+=1;goto B6745c8;
case 0x6745ca:goto L6745ca;
case 0x6745cd:c.instructions+=2;goto B6745cd;
case 0x6745d0:c.instructions+=1;goto B6745d0;
case 0x6745d5:goto L6745d5;
case 0x6745db:goto L6745db;
case 0x6745de:c.instructions+=2;goto B6745de;
case 0x6745e4:c.instructions+=1;goto B6745e4;
case 0x6745e9:goto L6745e9;
case 0x6745eb:c.instructions+=8;goto B6745eb;
case 0x6745ee:c.instructions+=7;goto B6745ee;
case 0x6745f1:c.instructions+=6;goto B6745f1;
case 0x6745f2:c.instructions+=5;goto B6745f2;
case 0x6745f5:c.instructions+=4;goto B6745f5;
case 0x6745f6:c.instructions+=3;goto B6745f6;
case 0x6745f9:c.instructions+=2;goto B6745f9;
case 0x6745fa:c.instructions+=1;goto B6745fa;
case 0x6745ff:goto L6745ff;
case 0x674604:goto L674604;
case 0x674606:c.instructions+=3;goto B674606;
case 0x67460c:c.instructions+=2;goto B67460c;
case 0x674612:c.instructions+=1;goto B674612;
case 0x674618:goto L674618;
case 0x67461a:c.instructions+=8;goto B67461a;
case 0x67461f:c.instructions+=7;goto B67461f;
case 0x674622:c.instructions+=6;goto B674622;
case 0x674624:c.instructions+=5;goto B674624;
case 0x674626:c.instructions+=4;goto B674626;
case 0x674629:c.instructions+=3;goto B674629;
case 0x67462c:c.instructions+=2;goto B67462c;
case 0x67462d:c.instructions+=1;goto B67462d;
case 0x674633:goto L674633;
case 0x674636:c.instructions+=1;goto B674636;
case 0x674639:goto L674639;
case 0x67463c:c.instructions+=5;goto B67463c;
case 0x67463f:c.instructions+=4;goto B67463f;
case 0x674640:c.instructions+=3;goto B674640;
case 0x674643:c.instructions+=2;goto B674643;
case 0x674646:c.instructions+=1;goto B674646;
case 0x67464b:goto L67464b;
case 0x67464d:c.instructions+=1;goto B67464d;
case 0x674653:goto L674653;
case 0x674656:c.instructions+=6;goto B674656;
case 0x674659:c.instructions+=5;goto B674659;
case 0x67465a:c.instructions+=4;goto B67465a;
case 0x67465d:c.instructions+=3;goto B67465d;
case 0x674660:c.instructions+=2;goto B674660;
case 0x674663:c.instructions+=1;goto B674663;
case 0x674668:goto L674668;
case 0x67466a:c.instructions+=1;goto B67466a;
case 0x674670:goto L674670;
case 0x674672:c.instructions+=8;goto B674672;
case 0x674675:c.instructions+=7;goto B674675;
case 0x674678:c.instructions+=6;goto B674678;
case 0x674679:c.instructions+=5;goto B674679;
case 0x67467c:c.instructions+=4;goto B67467c;
case 0x67467d:c.instructions+=3;goto B67467d;
case 0x674680:c.instructions+=2;goto B674680;
case 0x674681:c.instructions+=1;goto B674681;
case 0x674686:goto L674686;
case 0x674689:c.instructions+=9;goto B674689;
case 0x67468c:c.instructions+=8;goto B67468c;
case 0x674690:c.instructions+=7;goto B674690;
case 0x674691:c.instructions+=6;goto B674691;
case 0x674694:c.instructions+=5;goto B674694;
case 0x674697:c.instructions+=4;goto B674697;
case 0x67469a:c.instructions+=3;goto B67469a;
case 0x67469d:c.instructions+=2;goto B67469d;
case 0x6746a0:c.instructions+=1;goto B6746a0;
case 0x6746a2:goto L6746a2;
case 0x6746a7:goto L6746a7;
case 0x6746ad:c.instructions+=1;goto B6746ad;
case 0x6746b3:goto L6746b3;
case 0x6746b6:c.instructions+=13;goto B6746b6;
case 0x6746b9:c.instructions+=12;goto B6746b9;
case 0x6746bc:c.instructions+=11;goto B6746bc;
case 0x6746bf:c.instructions+=10;goto B6746bf;
case 0x6746c2:c.instructions+=9;goto B6746c2;
case 0x6746c5:c.instructions+=8;goto B6746c5;
case 0x6746c8:c.instructions+=7;goto B6746c8;
case 0x6746cb:c.instructions+=6;goto B6746cb;
case 0x6746ce:c.instructions+=5;goto B6746ce;
case 0x6746d1:c.instructions+=4;goto B6746d1;
case 0x6746d2:c.instructions+=3;goto B6746d2;
case 0x6746d5:c.instructions+=2;goto B6746d5;
case 0x6746d8:c.instructions+=1;goto B6746d8;
case 0x6746dd:goto L6746dd;
case 0x6746df:c.instructions+=1;goto B6746df;
case 0x6746e5:goto L6746e5;
case 0x6746e8:c.instructions+=4;goto B6746e8;
case 0x6746eb:c.instructions+=3;goto B6746eb;
case 0x6746ec:c.instructions+=2;goto B6746ec;
case 0x6746ef:c.instructions+=1;goto B6746ef;
case 0x6746f4:goto L6746f4;
case 0x6746f6:c.instructions+=1;goto B6746f6;
case 0x6746fc:goto L6746fc;
case 0x6746ff:c.instructions+=4;goto B6746ff;
case 0x674702:c.instructions+=3;goto B674702;
case 0x674703:c.instructions+=2;goto B674703;
case 0x674704:c.instructions+=1;goto B674704;
case 0x674709:goto L674709;
case 0x67470b:c.instructions+=1;goto B67470b;
case 0x674711:goto L674711;
case 0x674713:c.instructions+=3;goto B674713;
case 0x674718:c.instructions+=2;goto B674718;
case 0x67471d:c.instructions+=1;goto B67471d;
case 0x674723:goto L674723;
case 0x674726:c.instructions+=2;goto B674726;
case 0x674729:c.instructions+=1;goto B674729;
case 0x67472b:goto L67472b;
case 0x67472e:c.instructions+=4;goto B67472e;
case 0x674734:c.instructions+=3;goto B674734;
case 0x674736:c.instructions+=2;goto B674736;
case 0x674739:c.instructions+=1;goto B674739;
case 0x67473b:goto L67473b;
case 0x67473d:c.instructions+=1;goto B67473d;
case 0x674740:goto L674740;
case 0x674743:c.instructions+=4;goto B674743;
case 0x674749:c.instructions+=3;goto B674749;
case 0x67474b:c.instructions+=2;goto B67474b;
case 0x67474e:c.instructions+=1;goto B67474e;
case 0x674750:goto L674750;
case 0x674752:c.instructions+=1;goto B674752;
case 0x674755:goto L674755;
case 0x674757:c.instructions+=1;goto B674757;
case 0x674759:goto L674759;
case 0x67475c:c.instructions+=4;goto B67475c;
case 0x674762:c.instructions+=3;goto B674762;
case 0x674764:c.instructions+=2;goto B674764;
case 0x674767:c.instructions+=1;goto B674767;
case 0x674769:goto L674769;
case 0x67476b:c.instructions+=1;goto B67476b;
case 0x67476e:goto L67476e;
case 0x674771:c.instructions+=4;goto B674771;
case 0x674777:c.instructions+=3;goto B674777;
case 0x674779:c.instructions+=2;goto B674779;
case 0x67477c:c.instructions+=1;goto B67477c;
case 0x67477e:goto L67477e;
case 0x674780:c.instructions+=2;goto B674780;
case 0x674782:c.instructions+=1;goto B674782;
case 0x674784:goto L674784;
case 0x674787:goto L674787;
case 0x67478a:c.instructions+=4;goto B67478a;
case 0x674790:c.instructions+=3;goto B674790;
case 0x674792:c.instructions+=2;goto B674792;
case 0x674795:c.instructions+=1;goto B674795;
case 0x674797:goto L674797;
case 0x674799:goto L674799;
case 0x67479c:c.instructions+=2;goto B67479c;
case 0x67479f:c.instructions+=1;goto B67479f;
case 0x6747a1:goto L6747a1;
case 0x6747a4:c.instructions+=4;goto B6747a4;
case 0x6747aa:c.instructions+=3;goto B6747aa;
case 0x6747ac:c.instructions+=2;goto B6747ac;
case 0x6747af:c.instructions+=1;goto B6747af;
case 0x6747b1:goto L6747b1;
case 0x6747b4:c.instructions+=2;goto B6747b4;
case 0x6747b7:c.instructions+=1;goto B6747b7;
case 0x6747bc:goto L6747bc;
case 0x6747bf:c.instructions+=4;goto B6747bf;
case 0x6747c2:c.instructions+=3;goto B6747c2;
case 0x6747c4:c.instructions+=2;goto B6747c4;
case 0x6747c7:c.instructions+=1;goto B6747c7;
case 0x6747c9:goto L6747c9;
case 0x6747cc:c.instructions+=1;goto B6747cc;
case 0x6747ce:goto L6747ce;
case 0x6747d1:goto L6747d1;
case 0x6747d4:c.instructions+=5;goto B6747d4;
case 0x6747d7:c.instructions+=4;goto B6747d7;
case 0x6747d9:c.instructions+=3;goto B6747d9;
case 0x6747db:c.instructions+=2;goto B6747db;
case 0x6747de:c.instructions+=1;goto B6747de;
case 0x6747e4:goto L6747e4;
case 0x6747e6:goto L6747e6;
case 0x6747e9:c.instructions+=1;goto B6747e9;
case 0x6747ee:goto L6747ee;
case 0x6747f4:c.instructions+=1;goto B6747f4;
case 0x6747fa:goto L6747fa;
case 0x6747fd:c.instructions+=1;goto B6747fd;
case 0x674803:goto L674803;
case 0x674804:c.instructions+=1;goto B674804;
case 0x67480a:goto L67480a;
case 0x67480b:c.instructions+=1;goto B67480b;
case 0x67480d:goto L67480d;
case 0x67480e:c.instructions+=1;goto B67480e;
case 0x674814:goto L674814;
case 0x674819:goto L674819;
case 0x67481c:c.instructions+=5;goto B67481c;
case 0x67481f:c.instructions+=4;goto B67481f;
case 0x674820:c.instructions+=3;goto B674820;
case 0x674823:c.instructions+=2;goto B674823;
case 0x674825:c.instructions+=1;goto B674825;
case 0x67482a:goto L67482a;
case 0x67482c:c.instructions+=1;goto B67482c;
case 0x674832:goto L674832;
case 0x674835:c.instructions+=4;goto B674835;
case 0x67483b:c.instructions+=3;goto B67483b;
case 0x67483d:c.instructions+=2;goto B67483d;
case 0x674840:c.instructions+=1;goto B674840;
case 0x674846:goto L674846;
case 0x674849:c.instructions+=5;goto B674849;
case 0x67484c:c.instructions+=4;goto B67484c;
case 0x67484d:c.instructions+=3;goto B67484d;
case 0x674850:c.instructions+=2;goto B674850;
case 0x674853:c.instructions+=1;goto B674853;
case 0x674858:goto L674858;
case 0x67485a:c.instructions+=1;goto B67485a;
case 0x674860:goto L674860;
case 0x674863:c.instructions+=4;goto B674863;
case 0x674869:c.instructions+=3;goto B674869;
case 0x67486b:c.instructions+=2;goto B67486b;
case 0x67486e:c.instructions+=1;goto B67486e;
case 0x674874:goto L674874;
case 0x674877:c.instructions+=5;goto B674877;
case 0x67487a:c.instructions+=4;goto B67487a;
case 0x67487b:c.instructions+=3;goto B67487b;
case 0x67487e:c.instructions+=2;goto B67487e;
case 0x674881:c.instructions+=1;goto B674881;
case 0x674886:goto L674886;
case 0x674888:c.instructions+=1;goto B674888;
case 0x67488e:goto L67488e;
case 0x674891:c.instructions+=4;goto B674891;
case 0x674897:c.instructions+=3;goto B674897;
case 0x674899:c.instructions+=2;goto B674899;
case 0x67489c:c.instructions+=1;goto B67489c;
case 0x67489e:goto L67489e;
case 0x6748a1:c.instructions+=1;goto B6748a1;
case 0x6748a3:goto L6748a3;
case 0x6748a6:goto L6748a6;
case 0x6748a9:c.instructions+=3;goto B6748a9;
case 0x6748ac:c.instructions+=2;goto B6748ac;
case 0x6748af:c.instructions+=1;goto B6748af;
case 0x6748b4:goto L6748b4;
case 0x6748b7:c.instructions+=5;goto B6748b7;
case 0x6748ba:c.instructions+=4;goto B6748ba;
case 0x6748c0:c.instructions+=3;goto B6748c0;
case 0x6748c2:c.instructions+=2;goto B6748c2;
case 0x6748c5:c.instructions+=1;goto B6748c5;
case 0x6748c7:goto L6748c7;
case 0x6748ca:c.instructions+=1;goto B6748ca;
case 0x6748cc:goto L6748cc;
case 0x6748cf:goto L6748cf;
case 0x6748d2:c.instructions+=2;goto B6748d2;
case 0x6748d5:c.instructions+=1;goto B6748d5;
case 0x6748d8:goto L6748d8;
case 0x6748dd:goto L6748dd;
case 0x6748e2:goto L6748e2;
case 0x6748e5:c.instructions+=5;goto B6748e5;
case 0x6748e8:c.instructions+=4;goto B6748e8;
case 0x6748e9:c.instructions+=3;goto B6748e9;
case 0x6748ec:c.instructions+=2;goto B6748ec;
case 0x6748ee:c.instructions+=1;goto B6748ee;
case 0x6748f3:goto L6748f3;
case 0x6748f5:c.instructions+=1;goto B6748f5;
case 0x6748f7:goto L6748f7;
case 0x6748fa:c.instructions+=4;goto B6748fa;
case 0x674900:c.instructions+=3;goto B674900;
case 0x674902:c.instructions+=2;goto B674902;
case 0x674905:c.instructions+=1;goto B674905;
case 0x674907:goto L674907;
case 0x67490a:c.instructions+=1;goto B67490a;
case 0x67490d:goto L67490d;
case 0x674910:c.instructions+=1;goto B674910;
case 0x674915:goto L674915;
case 0x674918:c.instructions+=6;goto B674918;
case 0x67491e:c.instructions+=5;goto B67491e;
case 0x674920:c.instructions+=4;goto B674920;
case 0x674923:c.instructions+=3;goto B674923;
case 0x674925:c.instructions+=2;goto B674925;
case 0x674928:c.instructions+=1;goto B674928;
case 0x67492a:goto L67492a;
case 0x67492c:c.instructions+=1;goto B67492c;
case 0x674931:goto L674931;
case 0x674937:c.instructions+=1;goto B674937;
case 0x674939:goto L674939;
case 0x67493c:c.instructions+=5;goto B67493c;
case 0x67493f:c.instructions+=4;goto B67493f;
case 0x674940:c.instructions+=3;goto B674940;
case 0x674943:c.instructions+=2;goto B674943;
case 0x674945:c.instructions+=1;goto B674945;
case 0x67494a:goto L67494a;
case 0x67494c:c.instructions+=1;goto B67494c;
case 0x67494e:goto L67494e;
case 0x674951:c.instructions+=6;goto B674951;
case 0x674957:c.instructions+=5;goto B674957;
case 0x67495c:c.instructions+=4;goto B67495c;
case 0x67495f:c.instructions+=3;goto B67495f;
case 0x674965:c.instructions+=2;goto B674965;
case 0x674968:c.instructions+=1;goto B674968;
case 0x67496a:goto L67496a;
case 0x67496d:c.instructions+=5;goto B67496d;
case 0x674970:c.instructions+=4;goto B674970;
case 0x674972:c.instructions+=3;goto B674972;
case 0x674974:c.instructions+=2;goto B674974;
case 0x674977:c.instructions+=1;goto B674977;
case 0x674979:goto L674979;
case 0x67497c:c.instructions+=4;goto B67497c;
case 0x67497d:c.instructions+=3;goto B67497d;
case 0x67497e:c.instructions+=2;goto B67497e;
case 0x674981:c.instructions+=1;goto B674981;
case 0x674986:goto L674986;
case 0x674988:c.instructions+=3;goto B674988;
case 0x674989:c.instructions+=2;goto B674989;
case 0x67498a:c.instructions+=1;goto B67498a;
case 0x67498c:goto L67498c;
case 0x67498f:c.instructions+=1;goto B67498f;
case 0x674991:goto L674991;
case 0x674992:c.instructions+=1;goto B674992;
case 0x674994:goto L674994;
case 0x674997:goto L674997;
case 0x674999:goto L674999;
case 0x67499c:c.instructions+=2;goto B67499c;
case 0x67499f:c.instructions+=1;goto B67499f;
case 0x6749a1:goto L6749a1;
case 0x6749a4:goto L6749a4;
case 0x6749a6:c.instructions+=1;goto B6749a6;
case 0x6749a8:goto L6749a8;
case 0x6749ae:goto L6749ae;
case 0x6749b1:c.instructions+=1;goto B6749b1;
case 0x6749b3:goto L6749b3;
case 0x6749b6:goto L6749b6;
case 0x6749b8:goto L6749b8;
case 0x6749bb:c.instructions+=6;goto B6749bb;
case 0x6749bd:c.instructions+=5;goto B6749bd;
case 0x6749c0:c.instructions+=4;goto B6749c0;
case 0x6749c6:c.instructions+=3;goto B6749c6;
case 0x6749c7:c.instructions+=2;goto B6749c7;
case 0x6749c9:c.instructions+=1;goto B6749c9;
case 0x6749cb:goto L6749cb;
case 0x6749ce:c.instructions+=1;goto B6749ce;
case 0x6749d0:goto L6749d0;
case 0x6749d2:c.instructions+=1;goto B6749d2;
case 0x6749d5:goto L6749d5;
case 0x6749d8:c.instructions+=4;goto B6749d8;
case 0x6749de:c.instructions+=3;goto B6749de;
case 0x6749e0:c.instructions+=2;goto B6749e0;
case 0x6749e3:c.instructions+=1;goto B6749e3;
case 0x6749e5:goto L6749e5;
case 0x6749e7:c.instructions+=2;goto B6749e7;
case 0x6749ea:c.instructions+=1;goto B6749ea;
case 0x6749ec:goto L6749ec;
case 0x6749ef:c.instructions+=1;goto B6749ef;
case 0x6749f1:goto L6749f1;
case 0x6749f4:c.instructions+=1;goto B6749f4;
case 0x6749f6:goto L6749f6;
case 0x6749f8:c.instructions+=2;goto B6749f8;
case 0x6749fb:c.instructions+=1;goto B6749fb;
case 0x6749fd:goto L6749fd;
case 0x674a00:c.instructions+=4;goto B674a00;
case 0x674a06:c.instructions+=3;goto B674a06;
case 0x674a08:c.instructions+=2;goto B674a08;
case 0x674a0b:c.instructions+=1;goto B674a0b;
case 0x674a0d:goto L674a0d;
case 0x674a0f:c.instructions+=1;goto B674a0f;
case 0x674a12:goto L674a12;
case 0x674a15:c.instructions+=4;goto B674a15;
case 0x674a1b:c.instructions+=3;goto B674a1b;
case 0x674a1d:c.instructions+=2;goto B674a1d;
case 0x674a20:c.instructions+=1;goto B674a20;
case 0x674a22:goto L674a22;
case 0x674a24:c.instructions+=2;goto B674a24;
case 0x674a27:c.instructions+=1;goto B674a27;
case 0x674a29:goto L674a29;
case 0x674a2c:c.instructions+=4;goto B674a2c;
case 0x674a32:c.instructions+=3;goto B674a32;
case 0x674a34:c.instructions+=2;goto B674a34;
case 0x674a37:c.instructions+=1;goto B674a37;
case 0x674a39:goto L674a39;
case 0x674a3c:c.instructions+=1;goto B674a3c;
case 0x674a3e:goto L674a3e;
case 0x674a41:c.instructions+=5;goto B674a41;
case 0x674a43:c.instructions+=4;goto B674a43;
case 0x674a46:c.instructions+=3;goto B674a46;
case 0x674a4c:c.instructions+=2;goto B674a4c;
case 0x674a4e:c.instructions+=1;goto B674a4e;
case 0x674a50:goto L674a50;
case 0x674a53:c.instructions+=1;goto B674a53;
case 0x674a55:goto L674a55;
case 0x674a5b:c.instructions+=1;goto B674a5b;
case 0x674a5e:goto L674a5e;
case 0x674a61:c.instructions+=4;goto B674a61;
case 0x674a67:c.instructions+=3;goto B674a67;
case 0x674a69:c.instructions+=2;goto B674a69;
case 0x674a6c:c.instructions+=1;goto B674a6c;
case 0x674a6e:goto L674a6e;
case 0x674a74:c.instructions+=1;goto B674a74;
case 0x674a77:goto L674a77;
case 0x674a7a:c.instructions+=4;goto B674a7a;
case 0x674a80:c.instructions+=3;goto B674a80;
case 0x674a82:c.instructions+=2;goto B674a82;
case 0x674a85:c.instructions+=1;goto B674a85;
case 0x674a87:goto L674a87;
case 0x674a89:c.instructions+=1;goto B674a89;
case 0x674a8c:goto L674a8c;
case 0x674a8f:c.instructions+=4;goto B674a8f;
case 0x674a95:c.instructions+=3;goto B674a95;
case 0x674a97:c.instructions+=2;goto B674a97;
case 0x674a9a:c.instructions+=1;goto B674a9a;
case 0x674a9c:goto L674a9c;
case 0x674a9e:c.instructions+=2;goto B674a9e;
case 0x674aa1:c.instructions+=1;goto B674aa1;
case 0x674aa3:goto L674aa3;
case 0x674aa6:c.instructions+=1;goto B674aa6;
case 0x674aa8:goto L674aa8;
case 0x674aab:c.instructions+=4;goto B674aab;
case 0x674ab1:c.instructions+=3;goto B674ab1;
case 0x674ab3:c.instructions+=2;goto B674ab3;
case 0x674ab6:c.instructions+=1;goto B674ab6;
case 0x674ab8:goto L674ab8;
case 0x674abb:c.instructions+=1;goto B674abb;
case 0x674abd:goto L674abd;
case 0x674ac0:c.instructions+=5;goto B674ac0;
case 0x674ac3:c.instructions+=4;goto B674ac3;
case 0x674ac5:c.instructions+=3;goto B674ac5;
case 0x674ac7:c.instructions+=2;goto B674ac7;
case 0x674aca:c.instructions+=1;goto B674aca;
case 0x674acc:goto L674acc;
case 0x674acf:c.instructions+=4;goto B674acf;
case 0x674ad0:c.instructions+=3;goto B674ad0;
case 0x674ad1:c.instructions+=2;goto B674ad1;
case 0x674ad4:c.instructions+=1;goto B674ad4;
case 0x674ad9:goto L674ad9;
case 0x674adb:c.instructions+=3;goto B674adb;
case 0x674adc:c.instructions+=2;goto B674adc;
case 0x674add:c.instructions+=1;goto B674add;
case 0x674adf:goto L674adf;
case 0x674ae2:c.instructions+=7;goto B674ae2;
case 0x674ae5:c.instructions+=6;goto B674ae5;
case 0x674aeb:c.instructions+=5;goto B674aeb;
case 0x674aed:c.instructions+=4;goto B674aed;
case 0x674aef:c.instructions+=3;goto B674aef;
case 0x674af1:c.instructions+=2;goto B674af1;
case 0x674af4:c.instructions+=1;goto B674af4;
case 0x674af6:goto L674af6;
case 0x674af9:c.instructions+=5;goto B674af9;
case 0x674aff:c.instructions+=4;goto B674aff;
case 0x674b01:c.instructions+=3;goto B674b01;
case 0x674b03:c.instructions+=2;goto B674b03;
case 0x674b06:c.instructions+=1;goto B674b06;
case 0x674b08:goto L674b08;
case 0x674b0b:c.instructions+=1;goto B674b0b;
case 0x674b0d:goto L674b0d;
case 0x674b10:c.instructions+=1;goto B674b10;
case 0x674b15:goto L674b15;
case 0x674b18:c.instructions+=7;goto B674b18;
case 0x674b1b:c.instructions+=6;goto B674b1b;
case 0x674b1e:c.instructions+=5;goto B674b1e;
case 0x674b20:c.instructions+=4;goto B674b20;
case 0x674b26:c.instructions+=3;goto B674b26;
case 0x674b28:c.instructions+=2;goto B674b28;
case 0x674b2b:c.instructions+=1;goto B674b2b;
case 0x674b2d:goto L674b2d;
case 0x674b30:goto L674b30;
case 0x674b33:c.instructions+=7;goto B674b33;
case 0x674b36:c.instructions+=6;goto B674b36;
case 0x674b39:c.instructions+=5;goto B674b39;
case 0x674b3c:c.instructions+=4;goto B674b3c;
case 0x674b40:c.instructions+=3;goto B674b40;
case 0x674b42:c.instructions+=2;goto B674b42;
case 0x674b45:c.instructions+=1;goto B674b45;
case 0x674b47:goto L674b47;
case 0x674b4a:c.instructions+=3;goto B674b4a;
case 0x674b4c:c.instructions+=2;goto B674b4c;
case 0x674b4f:c.instructions+=1;goto B674b4f;
case 0x674b52:goto L674b52;
case 0x674b54:c.instructions+=4;goto B674b54;
case 0x674b55:c.instructions+=3;goto B674b55;
case 0x674b56:c.instructions+=2;goto B674b56;
case 0x674b57:c.instructions+=1;goto B674b57;
case 0x674b5a:goto L674b5a;
case 0x674b5c:c.instructions+=7;goto B674b5c;
case 0x674b5d:c.instructions+=6;goto B674b5d;
case 0x674b5f:c.instructions+=5;goto B674b5f;
case 0x674b61:c.instructions+=4;goto B674b61;
case 0x674b64:c.instructions+=3;goto B674b64;
case 0x674b65:c.instructions+=2;goto B674b65;
case 0x674b66:c.instructions+=1;goto B674b66;
case 0x674b68:goto L674b68;
case 0x674b6b:c.instructions+=1;goto B674b6b;
case 0x674b6e:goto L674b6e;
case 0x674b71:c.instructions+=3;goto B674b71;
case 0x674b74:c.instructions+=2;goto B674b74;
case 0x674b76:c.instructions+=1;goto B674b76;
case 0x674b78:goto L674b78;
case 0x674b7b:c.instructions+=2;goto B674b7b;
case 0x674b7e:c.instructions+=1;goto B674b7e;
case 0x674b80:goto L674b80;
case 0x674b82:goto L674b82;
case 0x674b84:c.instructions+=1;goto B674b84;
case 0x674b86:goto L674b86;
case 0x674b8a:c.instructions+=1;goto B674b8a;
case 0x674b8c:goto L674b8c;
case 0x674b8d:c.instructions+=2;goto B674b8d;
case 0x674b90:c.instructions+=1;goto B674b90;
case 0x674b92:goto L674b92;
case 0x674b94:c.instructions+=1;goto B674b94;
case 0x674b95:goto L674b95;
case 0x674b96:c.instructions+=3;goto B674b96;
case 0x674b97:c.instructions+=2;goto B674b97;
case 0x674b98:c.instructions+=1;goto B674b98;
case 0x674b9b:goto L674b9b;
case 0x674b9d:c.instructions+=1;goto B674b9d;
case 0x674b9f:goto L674b9f;
case 0x674ba1:c.instructions+=6;goto B674ba1;
case 0x674ba2:c.instructions+=5;goto B674ba2;
case 0x674ba4:c.instructions+=4;goto B674ba4;
case 0x674ba7:c.instructions+=3;goto B674ba7;
case 0x674bab:c.instructions+=2;goto B674bab;
case 0x674bae:c.instructions+=1;goto B674bae;
case 0x674bb0:goto L674bb0;
case 0x674bb2:c.instructions+=3;goto B674bb2;
case 0x674bb6:c.instructions+=2;goto B674bb6;
case 0x674bb9:c.instructions+=1;goto B674bb9;
case 0x674bbe:goto L674bbe;
case 0x674bc1:c.instructions+=3;goto B674bc1;
case 0x674bc5:c.instructions+=2;goto B674bc5;
case 0x674bc7:c.instructions+=1;goto B674bc7;
case 0x674bcd:goto L674bcd;
case 0x674bce:c.instructions+=6;goto B674bce;
case 0x674bd0:c.instructions+=5;goto B674bd0;
case 0x674bd3:c.instructions+=4;goto B674bd3;
case 0x674bd4:c.instructions+=3;goto B674bd4;
case 0x674bd5:c.instructions+=2;goto B674bd5;
case 0x674bd8:c.instructions+=1;goto B674bd8;
case 0x674bde:goto L674bde;
case 0x674be1:c.instructions+=5;goto B674be1;
case 0x674be4:c.instructions+=4;goto B674be4;
case 0x674be7:c.instructions+=3;goto B674be7;
case 0x674bea:c.instructions+=2;goto B674bea;
case 0x674bed:c.instructions+=1;goto B674bed;
case 0x674bf0:goto L674bf0;
case 0x674bf3:c.instructions+=6;goto B674bf3;
case 0x674bf6:c.instructions+=5;goto B674bf6;
case 0x674bf8:c.instructions+=4;goto B674bf8;
case 0x674bfb:c.instructions+=3;goto B674bfb;
case 0x674bfe:c.instructions+=2;goto B674bfe;
case 0x674c01:c.instructions+=1;goto B674c01;
case 0x674c03:goto L674c03;
case 0x674c06:c.instructions+=3;goto B674c06;
case 0x674c09:c.instructions+=2;goto B674c09;
case 0x674c0c:c.instructions+=1;goto B674c0c;
case 0x674c0f:goto L674c0f;
case 0x674c12:c.instructions+=5;goto B674c12;
case 0x674c14:c.instructions+=4;goto B674c14;
case 0x674c17:c.instructions+=3;goto B674c17;
case 0x674c1a:c.instructions+=2;goto B674c1a;
case 0x674c1d:c.instructions+=1;goto B674c1d;
case 0x674c23:goto L674c23;
case 0x674c26:c.instructions+=3;goto B674c26;
case 0x674c29:c.instructions+=2;goto B674c29;
case 0x674c2d:c.instructions+=1;goto B674c2d;
case 0x674c2f:goto L674c2f;
case 0x674c32:c.instructions+=4;goto B674c32;
case 0x674c35:c.instructions+=3;goto B674c35;
case 0x674c38:c.instructions+=2;goto B674c38;
case 0x674c3b:c.instructions+=1;goto B674c3b;
case 0x674c41:goto L674c41;
case 0x674c44:c.instructions+=4;goto B674c44;
case 0x674c47:c.instructions+=3;goto B674c47;
case 0x674c4a:c.instructions+=2;goto B674c4a;
case 0x674c4d:c.instructions+=1;goto B674c4d;
case 0x674c4f:goto L674c4f;
case 0x674c52:c.instructions+=1;goto B674c52;
case 0x674c55:goto L674c55;
case 0x674c5b:goto L674c5b;
case 0x674c5e:c.instructions+=6;goto B674c5e;
case 0x674c61:c.instructions+=5;goto B674c61;
case 0x674c64:c.instructions+=4;goto B674c64;
case 0x674c67:c.instructions+=3;goto B674c67;
case 0x674c6a:c.instructions+=2;goto B674c6a;
case 0x674c6d:c.instructions+=1;goto B674c6d;
case 0x674c6f:goto L674c6f;
case 0x674c71:goto L674c71;
case 0x674c74:c.instructions+=4;goto B674c74;
case 0x674c77:c.instructions+=3;goto B674c77;
case 0x674c7a:c.instructions+=2;goto B674c7a;
case 0x674c7d:c.instructions+=1;goto B674c7d;
case 0x674c83:goto L674c83;
case 0x674c86:c.instructions+=2;goto B674c86;
case 0x674c89:c.instructions+=1;goto B674c89;
case 0x674c8f:goto L674c8f;
case 0x674c92:c.instructions+=4;goto B674c92;
case 0x674c95:c.instructions+=3;goto B674c95;
case 0x674c98:c.instructions+=2;goto B674c98;
case 0x674c9b:c.instructions+=1;goto B674c9b;
case 0x674c9e:goto L674c9e;
case 0x674ca0:c.instructions+=5;goto B674ca0;
case 0x674ca3:c.instructions+=4;goto B674ca3;
case 0x674ca7:c.instructions+=3;goto B674ca7;
case 0x674cab:c.instructions+=2;goto B674cab;
case 0x674cae:c.instructions+=1;goto B674cae;
case 0x674cb0:goto L674cb0;
case 0x674cb3:c.instructions+=4;goto B674cb3;
case 0x674cb6:c.instructions+=3;goto B674cb6;
case 0x674cb9:c.instructions+=2;goto B674cb9;
case 0x674cbc:c.instructions+=1;goto B674cbc;
case 0x674cbf:goto L674cbf;
case 0x674cc2:c.instructions+=5;goto B674cc2;
case 0x674cc4:c.instructions+=4;goto B674cc4;
case 0x674cc7:c.instructions+=3;goto B674cc7;
case 0x674cca:c.instructions+=2;goto B674cca;
case 0x674ccd:c.instructions+=1;goto B674ccd;
case 0x674ccf:goto L674ccf;
case 0x674cd2:c.instructions+=3;goto B674cd2;
case 0x674cd5:c.instructions+=2;goto B674cd5;
case 0x674cd9:c.instructions+=1;goto B674cd9;
case 0x674cdb:goto L674cdb;
case 0x674cde:c.instructions+=4;goto B674cde;
case 0x674ce1:c.instructions+=3;goto B674ce1;
case 0x674ce4:c.instructions+=2;goto B674ce4;
case 0x674ce7:c.instructions+=1;goto B674ce7;
case 0x674ce9:goto L674ce9;
case 0x674cec:c.instructions+=4;goto B674cec;
case 0x674cef:c.instructions+=3;goto B674cef;
case 0x674cf2:c.instructions+=2;goto B674cf2;
case 0x674cf5:c.instructions+=1;goto B674cf5;
case 0x674cf7:goto L674cf7;
case 0x674cfa:c.instructions+=1;goto B674cfa;
case 0x674cfd:goto L674cfd;
case 0x674cff:goto L674cff;
case 0x674d02:c.instructions+=4;goto B674d02;
case 0x674d05:c.instructions+=3;goto B674d05;
case 0x674d09:c.instructions+=2;goto B674d09;
case 0x674d0c:c.instructions+=1;goto B674d0c;
case 0x674d0e:goto L674d0e;
case 0x674d11:c.instructions+=6;goto B674d11;
case 0x674d14:c.instructions+=5;goto B674d14;
case 0x674d17:c.instructions+=4;goto B674d17;
case 0x674d19:c.instructions+=3;goto B674d19;
case 0x674d1c:c.instructions+=2;goto B674d1c;
case 0x674d1f:c.instructions+=1;goto B674d1f;
case 0x674d25:goto L674d25;
case 0x674d27:c.instructions+=1;goto B674d27;
case 0x674d28:goto L674d28;
case 0x674d29:c.instructions+=2;goto B674d29;
case 0x674d2a:c.instructions+=1;goto B674d2a;
case 0x674d2b:goto L674d2b;
case 0x674d2c:c.instructions+=1;goto B674d2c;
case 0x674d2f:goto L674d2f;
case 0x674d31:c.instructions+=1;goto B674d31;
case 0x674d33:goto L674d33;
case 0x674d35:c.instructions+=8;goto B674d35;
case 0x674d36:c.instructions+=7;goto B674d36;
case 0x674d38:c.instructions+=6;goto B674d38;
case 0x674d3b:c.instructions+=5;goto B674d3b;
case 0x674d3f:c.instructions+=4;goto B674d3f;
case 0x674d40:c.instructions+=3;goto B674d40;
case 0x674d42:c.instructions+=2;goto B674d42;
case 0x674d45:c.instructions+=1;goto B674d45;
case 0x674d47:goto L674d47;
case 0x674d49:c.instructions+=5;goto B674d49;
case 0x674d4a:c.instructions+=4;goto B674d4a;
case 0x674d4d:c.instructions+=3;goto B674d4d;
case 0x674d4f:c.instructions+=2;goto B674d4f;
case 0x674d51:c.instructions+=1;goto B674d51;
case 0x674d56:goto L674d56;
case 0x674d59:c.instructions+=3;goto B674d59;
case 0x674d5d:c.instructions+=2;goto B674d5d;
case 0x674d5f:c.instructions+=1;goto B674d5f;
case 0x674d65:goto L674d65;
case 0x674d69:c.instructions+=4;goto B674d69;
case 0x674d6d:c.instructions+=3;goto B674d6d;
case 0x674d6e:c.instructions+=2;goto B674d6e;
case 0x674d6f:c.instructions+=1;goto B674d6f;
case 0x674d75:goto L674d75;
case 0x674d78:c.instructions+=4;goto B674d78;
case 0x674d7b:c.instructions+=3;goto B674d7b;
case 0x674d7e:c.instructions+=2;goto B674d7e;
case 0x674d81:c.instructions+=1;goto B674d81;
case 0x674d84:goto L674d84;
case 0x674d86:c.instructions+=5;goto B674d86;
case 0x674d89:c.instructions+=4;goto B674d89;
case 0x674d8d:c.instructions+=3;goto B674d8d;
case 0x674d91:c.instructions+=2;goto B674d91;
case 0x674d94:c.instructions+=1;goto B674d94;
case 0x674d96:goto L674d96;
case 0x674d99:c.instructions+=3;goto B674d99;
case 0x674d9c:c.instructions+=2;goto B674d9c;
case 0x674d9f:c.instructions+=1;goto B674d9f;
case 0x674da2:goto L674da2;
case 0x674da5:c.instructions+=5;goto B674da5;
case 0x674da7:c.instructions+=4;goto B674da7;
case 0x674daa:c.instructions+=3;goto B674daa;
case 0x674dad:c.instructions+=2;goto B674dad;
case 0x674db0:c.instructions+=1;goto B674db0;
case 0x674db6:goto L674db6;
case 0x674db9:c.instructions+=3;goto B674db9;
case 0x674dbc:c.instructions+=2;goto B674dbc;
case 0x674dc0:c.instructions+=1;goto B674dc0;
case 0x674dc2:goto L674dc2;
case 0x674dc5:c.instructions+=4;goto B674dc5;
case 0x674dc8:c.instructions+=3;goto B674dc8;
case 0x674dcb:c.instructions+=2;goto B674dcb;
case 0x674dce:c.instructions+=1;goto B674dce;
case 0x674dd4:goto L674dd4;
case 0x674dd7:c.instructions+=4;goto B674dd7;
case 0x674dda:c.instructions+=3;goto B674dda;
case 0x674ddd:c.instructions+=2;goto B674ddd;
case 0x674de0:c.instructions+=1;goto B674de0;
case 0x674de2:goto L674de2;
case 0x674de5:c.instructions+=1;goto B674de5;
case 0x674de8:goto L674de8;
case 0x674dee:goto L674dee;
case 0x674df1:c.instructions+=4;goto B674df1;
case 0x674df4:c.instructions+=3;goto B674df4;
case 0x674df8:c.instructions+=2;goto B674df8;
case 0x674dfb:c.instructions+=1;goto B674dfb;
case 0x674dfd:goto L674dfd;
case 0x674e00:goto L674e00;
case 0x674e03:c.instructions+=6;goto B674e03;
case 0x674e06:c.instructions+=5;goto B674e06;
case 0x674e09:c.instructions+=4;goto B674e09;
case 0x674e0b:c.instructions+=3;goto B674e0b;
case 0x674e0e:c.instructions+=2;goto B674e0e;
case 0x674e11:c.instructions+=1;goto B674e11;
case 0x674e17:goto L674e17;
case 0x674e1b:c.instructions+=2;goto B674e1b;
case 0x674e1f:c.instructions+=1;goto B674e1f;
case 0x674e25:goto L674e25;
case 0x674e28:c.instructions+=4;goto B674e28;
case 0x674e2b:c.instructions+=3;goto B674e2b;
case 0x674e2e:c.instructions+=2;goto B674e2e;
case 0x674e31:c.instructions+=1;goto B674e31;
case 0x674e34:goto L674e34;
case 0x674e36:c.instructions+=5;goto B674e36;
case 0x674e39:c.instructions+=4;goto B674e39;
case 0x674e3d:c.instructions+=3;goto B674e3d;
case 0x674e41:c.instructions+=2;goto B674e41;
case 0x674e44:c.instructions+=1;goto B674e44;
case 0x674e46:goto L674e46;
case 0x674e49:c.instructions+=4;goto B674e49;
case 0x674e4c:c.instructions+=3;goto B674e4c;
case 0x674e4f:c.instructions+=2;goto B674e4f;
case 0x674e52:c.instructions+=1;goto B674e52;
case 0x674e55:goto L674e55;
case 0x674e58:c.instructions+=5;goto B674e58;
case 0x674e5a:c.instructions+=4;goto B674e5a;
case 0x674e5d:c.instructions+=3;goto B674e5d;
case 0x674e60:c.instructions+=2;goto B674e60;
case 0x674e63:c.instructions+=1;goto B674e63;
case 0x674e65:goto L674e65;
case 0x674e68:c.instructions+=3;goto B674e68;
case 0x674e6b:c.instructions+=2;goto B674e6b;
case 0x674e6f:c.instructions+=1;goto B674e6f;
case 0x674e71:goto L674e71;
case 0x674e74:c.instructions+=4;goto B674e74;
case 0x674e77:c.instructions+=3;goto B674e77;
case 0x674e7a:c.instructions+=2;goto B674e7a;
case 0x674e7d:c.instructions+=1;goto B674e7d;
case 0x674e7f:goto L674e7f;
case 0x674e82:c.instructions+=4;goto B674e82;
case 0x674e85:c.instructions+=3;goto B674e85;
case 0x674e88:c.instructions+=2;goto B674e88;
case 0x674e8b:c.instructions+=1;goto B674e8b;
case 0x674e8d:goto L674e8d;
case 0x674e90:c.instructions+=1;goto B674e90;
case 0x674e93:goto L674e93;
case 0x674e95:goto L674e95;
case 0x674e98:c.instructions+=6;goto B674e98;
case 0x674e9b:c.instructions+=5;goto B674e9b;
case 0x674e9e:c.instructions+=4;goto B674e9e;
case 0x674ea1:c.instructions+=3;goto B674ea1;
case 0x674ea4:c.instructions+=2;goto B674ea4;
case 0x674ea7:c.instructions+=1;goto B674ea7;
case 0x674ea9:goto L674ea9;
case 0x674eac:c.instructions+=4;goto B674eac;
case 0x674eaf:c.instructions+=3;goto B674eaf;
case 0x674eb2:c.instructions+=2;goto B674eb2;
case 0x674eb5:c.instructions+=1;goto B674eb5;
case 0x674ebb:goto L674ebb;
case 0x674ebd:c.instructions+=1;goto B674ebd;
case 0x674ebe:goto L674ebe;
case 0x674ebf:c.instructions+=1;goto B674ebf;
case 0x674ec0:goto L674ec0;
case 0x674ec1:c.instructions+=2;goto B674ec1;
case 0x674ec2:c.instructions+=1;goto B674ec2;
case 0x674ec5:goto L674ec5;
case 0x674ec7:c.instructions+=1;goto B674ec7;
case 0x674ec9:goto L674ec9;
case 0x674ecb:c.instructions+=10;goto B674ecb;
case 0x674ecc:c.instructions+=9;goto B674ecc;
case 0x674ece:c.instructions+=8;goto B674ece;
case 0x674ed1:c.instructions+=7;goto B674ed1;
case 0x674ed5:c.instructions+=6;goto B674ed5;
case 0x674ed9:c.instructions+=5;goto B674ed9;
case 0x674eda:c.instructions+=4;goto B674eda;
case 0x674edc:c.instructions+=3;goto B674edc;
case 0x674edf:c.instructions+=2;goto B674edf;
case 0x674ee1:c.instructions+=1;goto B674ee1;
case 0x674ee7:goto L674ee7;
case 0x674eeb:c.instructions+=1;goto B674eeb;
case 0x674ef1:goto L674ef1;
case 0x674ef4:c.instructions+=3;goto B674ef4;
case 0x674ef6:c.instructions+=2;goto B674ef6;
case 0x674ef9:c.instructions+=1;goto B674ef9;
case 0x674eff:goto L674eff;
case 0x674f00:c.instructions+=1;goto B674f00;
case 0x674f01:goto L674f01;
case 0x674f04:c.instructions+=3;goto B674f04;
case 0x674f07:c.instructions+=2;goto B674f07;
case 0x674f09:c.instructions+=1;goto B674f09;
case 0x674f0f:goto L674f0f;
case 0x674f13:c.instructions+=1;goto B674f13;
case 0x674f19:goto L674f19;
case 0x674f1d:c.instructions+=1;goto B674f1d;
case 0x674f23:goto L674f23;
case 0x674f26:c.instructions+=2;goto B674f26;
case 0x674f29:c.instructions+=1;goto B674f29;
case 0x674f2c:goto L674f2c;
case 0x674f2e:c.instructions+=3;goto B674f2e;
case 0x674f30:c.instructions+=2;goto B674f30;
case 0x674f32:c.instructions+=1;goto B674f32;
case 0x674f34:goto L674f34;
case 0x674f36:c.instructions+=1;goto B674f36;
case 0x674f38:goto L674f38;
case 0x674f3b:c.instructions+=3;goto B674f3b;
case 0x674f3d:c.instructions+=2;goto B674f3d;
case 0x674f40:c.instructions+=1;goto B674f40;
case 0x674f42:goto L674f42;
case 0x674f43:c.instructions+=5;goto B674f43;
case 0x674f44:c.instructions+=4;goto B674f44;
case 0x674f45:c.instructions+=3;goto B674f45;
case 0x674f46:c.instructions+=2;goto B674f46;
case 0x674f48:c.instructions+=1;goto B674f48;
case 0x674f4a:goto L674f4a;
case 0x674f4c:c.instructions+=1;goto B674f4c;
case 0x674f4e:goto L674f4e;
case 0x674f50:c.instructions+=1;goto B674f50;
case 0x674f53:goto L674f53;
case 0x674f55:c.instructions+=1;goto B674f55;
case 0x674f57:goto L674f57;
case 0x674f5a:c.instructions+=2;goto B674f5a;
case 0x674f5d:c.instructions+=1;goto B674f5d;
case 0x674f5f:goto L674f5f;
case 0x674f63:c.instructions+=1;goto B674f63;
case 0x674f65:goto L674f65;
case 0x674f68:c.instructions+=3;goto B674f68;
case 0x674f6a:c.instructions+=2;goto B674f6a;
case 0x674f6c:c.instructions+=1;goto B674f6c;
case 0x674f6e:goto L674f6e;
case 0x674f71:c.instructions+=4;goto B674f71;
case 0x674f72:c.instructions+=3;goto B674f72;
case 0x674f73:c.instructions+=2;goto B674f73;
case 0x674f76:c.instructions+=1;goto B674f76;
case 0x674f7b:goto L674f7b;
case 0x674f7d:c.instructions+=1;goto B674f7d;
case 0x674f7f:goto L674f7f;
case 0x674f82:c.instructions+=1;goto B674f82;
case 0x674f84:goto L674f84;
case 0x674f87:goto L674f87;
case 0x674f89:c.instructions+=3;goto B674f89;
case 0x674f8e:c.instructions+=2;goto B674f8e;
case 0x674f90:c.instructions+=1;goto B674f90;
case 0x674f92:goto L674f92;
case 0x674f95:c.instructions+=3;goto B674f95;
case 0x674f97:c.instructions+=2;goto B674f97;
case 0x674f99:c.instructions+=1;goto B674f99;
case 0x674f9b:goto L674f9b;
case 0x674f9d:c.instructions+=3;goto B674f9d;
case 0x674fa2:c.instructions+=2;goto B674fa2;
case 0x674fa4:c.instructions+=1;goto B674fa4;
case 0x674fa6:goto L674fa6;
case 0x674fa9:c.instructions+=3;goto B674fa9;
case 0x674fab:c.instructions+=2;goto B674fab;
case 0x674fad:c.instructions+=1;goto B674fad;
case 0x674faf:goto L674faf;
case 0x674fb3:c.instructions+=1;goto B674fb3;
case 0x674fb5:goto L674fb5;
case 0x674fb8:c.instructions+=1;goto B674fb8;
case 0x674fba:goto L674fba;
case 0x674fbd:c.instructions+=1;goto B674fbd;
case 0x674fc0:goto L674fc0;
case 0x674fc3:c.instructions+=4;goto B674fc3;
case 0x674fc6:c.instructions+=3;goto B674fc6;
case 0x674fc8:c.instructions+=2;goto B674fc8;
case 0x674fcb:c.instructions+=1;goto B674fcb;
case 0x674fd1:goto L674fd1;
case 0x674fd2:c.instructions+=1;goto B674fd2;
case 0x674fd3:goto L674fd3;
case 0x674fd6:c.instructions+=1;goto B674fd6;
case 0x674fd8:goto L674fd8;
case 0x674fda:goto L674fda;
case 0x674fdb:c.instructions+=2;goto B674fdb;
case 0x674fdc:c.instructions+=1;goto B674fdc;
case 0x674fdf:goto L674fdf;
case 0x674fe1:c.instructions+=11;goto B674fe1;
case 0x674fe2:c.instructions+=10;goto B674fe2;
case 0x674fe4:c.instructions+=9;goto B674fe4;
case 0x674fe7:c.instructions+=8;goto B674fe7;
case 0x674feb:c.instructions+=7;goto B674feb;
case 0x674fef:c.instructions+=6;goto B674fef;
case 0x674ff3:c.instructions+=5;goto B674ff3;
case 0x674ff4:c.instructions+=4;goto B674ff4;
case 0x674ff6:c.instructions+=3;goto B674ff6;
case 0x674ff9:c.instructions+=2;goto B674ff9;
case 0x674ffb:c.instructions+=1;goto B674ffb;
default:missing_instruction(c.pc);}
B674000:L674000:{c.instructions+=1;NFSU2_TR(0x674000);
if(r1(R+518)){{goto L6749b6;}}
}
B674006:L674006:{c.instructions+=2;NFSU2_TR(0x674006);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67400b:{NFSU2_TR(0x67400b);
if(r1(R+518)){{goto L6749b6;}}
}
B674011:L674011:{c.instructions+=6;NFSU2_TR(0x674011);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B674014:{NFSU2_TR(0x674014);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B674017:{NFSU2_TR(0x674017);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674018:{NFSU2_TR(0x674018);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67401b:{NFSU2_TR(0x67401b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B67401e:{NFSU2_TR(0x67401e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674023ull));
TAIL_STATIC(0x673e90u,673);
}
B674023:L674023:{c.instructions+=2;NFSU2_TR(0x674023);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B674025:{NFSU2_TR(0x674025);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67494e;}}
}
B67402b:L67402b:{c.instructions+=5;NFSU2_TR(0x67402b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B67402d:{NFSU2_TR(0x67402d);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfff00000ull))));
}
B674033:{NFSU2_TR(0x674033);
w4(R+0,u32(0x10700000ull));
}
B674038:{NFSU2_TR(0x674038);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67403a:{NFSU2_TR(0x67403a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L67425e;}}
}
B674040:L674040:{c.instructions+=1;NFSU2_TR(0x674040);
if(r1(R+518)){{goto L67422c;}}
}
B674046:L674046:{c.instructions+=2;NFSU2_TR(0x674046);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67404c:{NFSU2_TR(0x67404c);
if(r1(R+518)){{goto L674799;}}
}
B674052:L674052:{c.instructions+=2;NFSU2_TR(0x674052);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674058:{NFSU2_TR(0x674058);
if(r1(R+518)){{goto L67421a;}}
}
B67405e:L67405e:{c.instructions+=2;NFSU2_TR(0x67405e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674064:{NFSU2_TR(0x674064);
if(r1(R+518)){{goto L67419b;}}
}
B67406a:L67406a:{c.instructions+=2;NFSU2_TR(0x67406a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674070:{NFSU2_TR(0x674070);
if(r1(R+518)){{goto L674165;}}
}
B674076:L674076:{c.instructions+=2;NFSU2_TR(0x674076);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67407c:{NFSU2_TR(0x67407c);
if(r1(R+518)){{goto L674124;}}
}
B674082:L674082:{c.instructions+=2;NFSU2_TR(0x674082);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674088:{NFSU2_TR(0x674088);
if(r1(R+518)){{goto L674105;}}
}
B67408a:L67408a:{c.instructions+=2;NFSU2_TR(0x67408a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674090:{NFSU2_TR(0x674090);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6749b6;}}
}
B674096:L674096:{c.instructions+=5;NFSU2_TR(0x674096);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674099:{NFSU2_TR(0x674099);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67409f:{NFSU2_TR(0x67409f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6740a1:{NFSU2_TR(0x6740a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6740a4:{NFSU2_TR(0x6740a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6740bf;}}
}
B6740a6:L6740a6:{c.instructions+=10;NFSU2_TR(0x6740a6);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6740a9:{NFSU2_TR(0x6740a9);
__asm__ volatile(".byte 0xd9,0xed":::"memory");
}
B6740ab:{NFSU2_TR(0x6740ab);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6740ad:{NFSU2_TR(0x6740ad);
__asm__ volatile(".byte 0xd9,0xf1":::"memory");
}
B6740af:{NFSU2_TR(0x6740af);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6740b5:{NFSU2_TR(0x6740b5);
__asm__ volatile(".byte 0xd9,0xed":::"memory");
}
B6740b7:{NFSU2_TR(0x6740b7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6740b9:{NFSU2_TR(0x6740b9);
__asm__ volatile(".byte 0xd9,0xf1":::"memory");
}
B6740bb:{NFSU2_TR(0x6740bb);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6740bd:{NFSU2_TR(0x6740bd);
{goto L6740c8;}
}
B6740bf:L6740bf:{c.instructions+=2;NFSU2_TR(0x6740bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6740c2:{NFSU2_TR(0x6740c2);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6740c8:L6740c8:{c.instructions+=6;NFSU2_TR(0x6740c8);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6740cb:{NFSU2_TR(0x6740cb);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6740ce:{NFSU2_TR(0x6740ce);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6740d4:{NFSU2_TR(0x6740d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6740d6:{NFSU2_TR(0x6740d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6740d9:{NFSU2_TR(0x6740d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6740f7;}}
}
B6740db:L6740db:{c.instructions+=10;NFSU2_TR(0x6740db);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6740de:{NFSU2_TR(0x6740de);
__asm__ volatile(".byte 0xd9,0xed":::"memory");
}
B6740e0:{NFSU2_TR(0x6740e0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6740e2:{NFSU2_TR(0x6740e2);
__asm__ volatile(".byte 0xd9,0xf1":::"memory");
}
B6740e4:{NFSU2_TR(0x6740e4);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6740ea:{NFSU2_TR(0x6740ea);
__asm__ volatile(".byte 0xd9,0xed":::"memory");
}
B6740ec:{NFSU2_TR(0x6740ec);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6740ee:{NFSU2_TR(0x6740ee);
__asm__ volatile(".byte 0xd9,0xf1":::"memory");
}
B6740f0:{NFSU2_TR(0x6740f0);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6740f2:{NFSU2_TR(0x6740f2);
{goto L674215;}
}
B6740f7:L6740f7:{c.instructions+=3;NFSU2_TR(0x6740f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6740fa:{NFSU2_TR(0x6740fa);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674100:{NFSU2_TR(0x674100);
{goto L6749b3;}
}
B674105:L674105:{c.instructions+=3;NFSU2_TR(0x674105);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67410b:{NFSU2_TR(0x67410b);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67410e:{NFSU2_TR(0x67410e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674113ull));
TAIL_STATIC(0x75c9b0u,75c);
}
B674113:L674113:{c.instructions+=4;NFSU2_TR(0x674113);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674116:{NFSU2_TR(0x674116);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67411c:{NFSU2_TR(0x67411c);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67411f:{NFSU2_TR(0x67411f);
{goto L6748d8;}
}
B674124:L674124:{c.instructions+=6;NFSU2_TR(0x674124);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674127:{NFSU2_TR(0x674127);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67412a:{NFSU2_TR(0x67412a);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B67412c:{NFSU2_TR(0x67412c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67412e:{NFSU2_TR(0x67412e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674131:{NFSU2_TR(0x674131);
if(r1(R+514)){{goto L6744da;}}
}
B674137:L674137:{c.instructions+=5;NFSU2_TR(0x674137);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67413a:{NFSU2_TR(0x67413a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67413b:{NFSU2_TR(0x67413b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67413c:{NFSU2_TR(0x67413c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67413f:{NFSU2_TR(0x67413f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674144ull));
TAIL_STATIC(0x75dc4bu,75d);
}
B674144:L674144:{c.instructions+=4;NFSU2_TR(0x674144);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B674146:{NFSU2_TR(0x674146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B674147:{NFSU2_TR(0x674147);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B674148:{NFSU2_TR(0x674148);
if(r1(R+518)){{goto L6742d4;}}
}
B67414e:L67414e:{c.instructions+=5;NFSU2_TR(0x67414e);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674151:{NFSU2_TR(0x674151);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674152:{NFSU2_TR(0x674152);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674153:{NFSU2_TR(0x674153);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674156:{NFSU2_TR(0x674156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67415bull));
TAIL_STATIC(0x75eb50u,75e);
}
B67415b:L67415b:{c.instructions+=4;NFSU2_TR(0x67415b);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdc,0x28"::"a"(ea_):"memory");}
}
B67415e:{NFSU2_TR(0x67415e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67415f:{NFSU2_TR(0x67415f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B674160:{NFSU2_TR(0x674160);
{goto L674999;}
}
B674165:L674165:{c.instructions+=5;NFSU2_TR(0x674165);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674168:{NFSU2_TR(0x674168);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67416e:{NFSU2_TR(0x67416e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674170:{NFSU2_TR(0x674170);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B674173:{NFSU2_TR(0x674173);
if(r1(R+518)){{goto L674189;}}
}
B674175:L674175:{c.instructions+=5;NFSU2_TR(0x674175);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674178:{NFSU2_TR(0x674178);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67417e:{NFSU2_TR(0x67417e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674180:{NFSU2_TR(0x674180);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674183:{NFSU2_TR(0x674183);
if(r1(R+514)){{goto L6749b6;}}
}
B674189:L674189:{c.instructions+=6;NFSU2_TR(0x674189);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B67418b:{NFSU2_TR(0x67418b);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdc,0x30"::"a"(ea_):"memory");}
}
B67418e:{NFSU2_TR(0x67418e);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674191:{NFSU2_TR(0x674191);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B674193:{NFSU2_TR(0x674193);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdc,0x30"::"a"(ea_):"memory");}
}
B674196:{NFSU2_TR(0x674196);
{goto L6749b3;}
}
B67419b:L67419b:{c.instructions+=6;NFSU2_TR(0x67419b);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67419e:{NFSU2_TR(0x67419e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6741a1:{NFSU2_TR(0x6741a1);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6741a7:{NFSU2_TR(0x6741a7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6741a9:{NFSU2_TR(0x6741a9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6741ac:{NFSU2_TR(0x6741ac);
if(r1(R+514)){{goto L6741b9;}}
}
B6741ae:L6741ae:{c.instructions+=3;NFSU2_TR(0x6741ae);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6741b1:{NFSU2_TR(0x6741b1);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xdc,0x20"::"a"(ea_):"memory");}
}
B6741b7:{NFSU2_TR(0x6741b7);
{goto L6741d8;}
}
B6741b9:L6741b9:{c.instructions+=6;NFSU2_TR(0x6741b9);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6741bf:{NFSU2_TR(0x6741bf);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6741c2:{NFSU2_TR(0x6741c2);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6741c4:{NFSU2_TR(0x6741c4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6741c6:{NFSU2_TR(0x6741c6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6741c9:{NFSU2_TR(0x6741c9);
if(r1(R+514)){{goto L6741cf;}}
}
B6741cb:L6741cb:{c.instructions+=2;NFSU2_TR(0x6741cb);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6741cd:{NFSU2_TR(0x6741cd);
{goto L6741d8;}
}
B6741cf:L6741cf:{c.instructions+=2;NFSU2_TR(0x6741cf);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6741d2:{NFSU2_TR(0x6741d2);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6741d8:L6741d8:{c.instructions+=6;NFSU2_TR(0x6741d8);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6741db:{NFSU2_TR(0x6741db);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6741de:{NFSU2_TR(0x6741de);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6741e4:{NFSU2_TR(0x6741e4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6741e6:{NFSU2_TR(0x6741e6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6741e9:{NFSU2_TR(0x6741e9);
if(r1(R+514)){{goto L6741f6;}}
}
B6741eb:L6741eb:{c.instructions+=3;NFSU2_TR(0x6741eb);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6741ee:{NFSU2_TR(0x6741ee);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xdc,0x20"::"a"(ea_):"memory");}
}
B6741f4:{NFSU2_TR(0x6741f4);
{goto L674215;}
}
B6741f6:L6741f6:{c.instructions+=6;NFSU2_TR(0x6741f6);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6741fc:{NFSU2_TR(0x6741fc);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6741ff:{NFSU2_TR(0x6741ff);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B674201:{NFSU2_TR(0x674201);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674203:{NFSU2_TR(0x674203);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674206:{NFSU2_TR(0x674206);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L67492a;}}
}
B67420c:L67420c:{c.instructions+=2;NFSU2_TR(0x67420c);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67420f:{NFSU2_TR(0x67420f);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B674215:L674215:{c.instructions+=1;NFSU2_TR(0x674215);
{goto L6749b3;}
}
B67421a:L67421a:{c.instructions+=6;NFSU2_TR(0x67421a);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67421d:{NFSU2_TR(0x67421d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B67421f:{NFSU2_TR(0x67421f);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674222:{NFSU2_TR(0x674222);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674225:{NFSU2_TR(0x674225);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B674227:{NFSU2_TR(0x674227);
{goto L6749b3;}
}
B67422c:L67422c:{c.instructions+=5;NFSU2_TR(0x67422c);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67422f:{NFSU2_TR(0x67422f);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674235:{NFSU2_TR(0x674235);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674237:{NFSU2_TR(0x674237);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67423a:{NFSU2_TR(0x67423a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6749b6;}}
}
B674240:L674240:{c.instructions+=8;NFSU2_TR(0x674240);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674243:{NFSU2_TR(0x674243);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B674245:{NFSU2_TR(0x674245);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x38"::"a"(ea_):"memory");}
}
B67424b:{NFSU2_TR(0x67424b);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67424e:{NFSU2_TR(0x67424e);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674251:{NFSU2_TR(0x674251);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B674253:{NFSU2_TR(0x674253);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x38"::"a"(ea_):"memory");}
}
B674259:{NFSU2_TR(0x674259);
{goto L6749b3;}
}
B67425e:L67425e:{c.instructions+=2;NFSU2_TR(0x67425e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10800000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674264:{NFSU2_TR(0x674264);
if(r1(R+518)){{goto L6743d1;}}
}
B67426a:L67426a:{c.instructions+=2;NFSU2_TR(0x67426a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10900000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674270:{NFSU2_TR(0x674270);
if(r1(R+518)){{goto L67439f;}}
}
B674276:L674276:{c.instructions+=2;NFSU2_TR(0x674276);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10a00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67427c:{NFSU2_TR(0x67427c);
if(r1(R+518)){{goto L674353;}}
}
B674282:L674282:{c.instructions+=2;NFSU2_TR(0x674282);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10b00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674288:{NFSU2_TR(0x674288);
if(r1(R+518)){{goto L674314;}}
}
B67428e:L67428e:{c.instructions+=2;NFSU2_TR(0x67428e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10c00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674294:{NFSU2_TR(0x674294);
if(r1(R+518)){{goto L6742de;}}
}
B674296:L674296:{c.instructions+=2;NFSU2_TR(0x674296);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10d00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67429c:{NFSU2_TR(0x67429c);
if(r1(R+518)){{goto L6742aa;}}
}
B67429e:L67429e:{c.instructions+=2;NFSU2_TR(0x67429e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10e00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6742a4:{NFSU2_TR(0x6742a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6749b6;}}
}
B6742aa:L6742aa:{c.instructions+=6;NFSU2_TR(0x6742aa);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6742ad:{NFSU2_TR(0x6742ad);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6742b0:{NFSU2_TR(0x6742b0);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6742b2:{NFSU2_TR(0x6742b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6742b4:{NFSU2_TR(0x6742b4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6742b7:{NFSU2_TR(0x6742b7);
if(r1(R+514)){{goto L6749b6;}}
}
B6742bd:L6742bd:{c.instructions+=5;NFSU2_TR(0x6742bd);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6742c0:{NFSU2_TR(0x6742c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6742c1:{NFSU2_TR(0x6742c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6742c2:{NFSU2_TR(0x6742c2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6742c5:{NFSU2_TR(0x6742c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6742caull));
TAIL_STATIC(0x75dc4bu,75d);
}
B6742ca:L6742ca:{c.instructions+=4;NFSU2_TR(0x6742ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6742cc:{NFSU2_TR(0x6742cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6742cd:{NFSU2_TR(0x6742cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6742ce:{NFSU2_TR(0x6742ce);
if(r1(R+518)){{goto L6749b6;}}
}
B6742d4:L6742d4:{c.instructions+=3;NFSU2_TR(0x6742d4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6742d6:{NFSU2_TR(0x6742d6);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6742d9:{NFSU2_TR(0x6742d9);
{goto L67492a;}
}
B6742de:L6742de:{c.instructions+=6;NFSU2_TR(0x6742de);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6742e1:{NFSU2_TR(0x6742e1);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6742e4:{NFSU2_TR(0x6742e4);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6742e6:{NFSU2_TR(0x6742e6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6742e8:{NFSU2_TR(0x6742e8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6742eb:{NFSU2_TR(0x6742eb);
if(r1(R+514)){{goto L67438b;}}
}
B6742f1:L6742f1:{c.instructions+=5;NFSU2_TR(0x6742f1);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6742f4:{NFSU2_TR(0x6742f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6742f5:{NFSU2_TR(0x6742f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6742f6:{NFSU2_TR(0x6742f6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6742f9:{NFSU2_TR(0x6742f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6742feull));
TAIL_STATIC(0x75dc4bu,75d);
}
B6742fe:L6742fe:{c.instructions+=4;NFSU2_TR(0x6742fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B674300:{NFSU2_TR(0x674300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B674301:{NFSU2_TR(0x674301);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B674302:{NFSU2_TR(0x674302);
if(r1(R+518)){{goto L67438b;}}
}
B674308:L674308:{c.instructions+=2;NFSU2_TR(0x674308);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67430b:{NFSU2_TR(0x67430b);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B67430d:L67430d:{c.instructions+=2;NFSU2_TR(0x67430d);
__asm__ volatile(".byte 0xd9,0xf3":::"memory");
}
B67430f:{NFSU2_TR(0x67430f);
{goto L674999;}
}
B674314:L674314:{c.instructions+=5;NFSU2_TR(0x674314);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674317:{NFSU2_TR(0x674317);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67431d:{NFSU2_TR(0x67431d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67431f:{NFSU2_TR(0x67431f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B674322:{NFSU2_TR(0x674322);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67434c;}}
}
B674324:L674324:{c.instructions+=5;NFSU2_TR(0x674324);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674327:{NFSU2_TR(0x674327);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67432d:{NFSU2_TR(0x67432d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67432f:{NFSU2_TR(0x67432f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674332:{NFSU2_TR(0x674332);
if(r1(R+514)){{goto L67434c;}}
}
B674334:L674334:{c.instructions+=2;NFSU2_TR(0x674334);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674337:{NFSU2_TR(0x674337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67433cull));
TAIL_STATIC(0x75db80u,75d);
}
B67433c:L67433c:{c.instructions+=3;NFSU2_TR(0x67433c);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67433f:{NFSU2_TR(0x67433f);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674342:{NFSU2_TR(0x674342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674347ull));
TAIL_STATIC(0x75db80u,75d);
}
B674347:L674347:{c.instructions+=1;NFSU2_TR(0x674347);
{goto L6749b3;}
}
B67434c:L67434c:{c.instructions+=2;NFSU2_TR(0x67434c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B67434e:{NFSU2_TR(0x67434e);
{goto L6745db;}
}
B674353:L674353:{c.instructions+=5;NFSU2_TR(0x674353);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674356:{NFSU2_TR(0x674356);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67435c:{NFSU2_TR(0x67435c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67435e:{NFSU2_TR(0x67435e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B674361:{NFSU2_TR(0x674361);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67438b;}}
}
B674363:L674363:{c.instructions+=5;NFSU2_TR(0x674363);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674366:{NFSU2_TR(0x674366);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67436c:{NFSU2_TR(0x67436c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67436e:{NFSU2_TR(0x67436e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674371:{NFSU2_TR(0x674371);
if(r1(R+514)){{goto L67438b;}}
}
B674373:L674373:{c.instructions+=2;NFSU2_TR(0x674373);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674376:{NFSU2_TR(0x674376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67437bull));
TAIL_STATIC(0x75eea0u,75e);
}
B67437b:L67437b:{c.instructions+=3;NFSU2_TR(0x67437b);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67437e:{NFSU2_TR(0x67437e);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674381:{NFSU2_TR(0x674381);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674386ull));
TAIL_STATIC(0x75eea0u,75e);
}
B674386:L674386:{c.instructions+=1;NFSU2_TR(0x674386);
{goto L6749b3;}
}
B67438b:L67438b:{c.instructions+=4;NFSU2_TR(0x67438b);
{u32 ea_=u32(u32(8091800u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674391:{NFSU2_TR(0x674391);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674394:{NFSU2_TR(0x674394);
{u32 ea_=u32(u32(8091792u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67439a:{NFSU2_TR(0x67439a);
{goto L6749b3;}
}
B67439f:L67439f:{c.instructions+=6;NFSU2_TR(0x67439f);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6743a2:{NFSU2_TR(0x6743a2);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6743a5:{NFSU2_TR(0x6743a5);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6743a7:{NFSU2_TR(0x6743a7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6743a9:{NFSU2_TR(0x6743a9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6743ac:{NFSU2_TR(0x6743ac);
if(r1(R+514)){{goto L6749a8;}}
}
B6743b2:L6743b2:{c.instructions+=5;NFSU2_TR(0x6743b2);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6743b5:{NFSU2_TR(0x6743b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6743b6:{NFSU2_TR(0x6743b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6743b7:{NFSU2_TR(0x6743b7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6743ba:{NFSU2_TR(0x6743ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6743bfull));
TAIL_STATIC(0x75dc4bu,75d);
}
B6743bf:L6743bf:{c.instructions+=4;NFSU2_TR(0x6743bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6743c1:{NFSU2_TR(0x6743c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6743c2:{NFSU2_TR(0x6743c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6743c3:{NFSU2_TR(0x6743c3);
if(r1(R+518)){{goto L6749a8;}}
}
B6743c9:L6743c9:{c.instructions+=2;NFSU2_TR(0x6743c9);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6743cc:{NFSU2_TR(0x6743cc);
{goto L6749a4;}
}
B6743d1:L6743d1:{c.instructions+=6;NFSU2_TR(0x6743d1);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6743d4:{NFSU2_TR(0x6743d4);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6743d7:{NFSU2_TR(0x6743d7);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6743d9:{NFSU2_TR(0x6743d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6743db:{NFSU2_TR(0x6743db);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6743de:{NFSU2_TR(0x6743de);
if(r1(R+514)){{goto L6749a8;}}
}
B6743e4:L6743e4:{c.instructions+=5;NFSU2_TR(0x6743e4);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6743e7:{NFSU2_TR(0x6743e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6743e8:{NFSU2_TR(0x6743e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6743e9:{NFSU2_TR(0x6743e9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6743ec:{NFSU2_TR(0x6743ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6743f1ull));
TAIL_STATIC(0x75dc4bu,75d);
}
B6743f1:L6743f1:{c.instructions+=4;NFSU2_TR(0x6743f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6743f3:{NFSU2_TR(0x6743f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6743f4:{NFSU2_TR(0x6743f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6743f5:{NFSU2_TR(0x6743f5);
if(r1(R+518)){{goto L6749a8;}}
}
B6743fb:L6743fb:{c.instructions+=2;NFSU2_TR(0x6743fb);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6743fe:{NFSU2_TR(0x6743fe);
{goto L674997;}
}
B674403:L674403:{c.instructions+=2;NFSU2_TR(0x674403);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674409:{NFSU2_TR(0x674409);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674604;}}
}
B67440f:L67440f:{c.instructions+=3;NFSU2_TR(0x67440f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B674414:{NFSU2_TR(0x674414);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B674419:{NFSU2_TR(0x674419);
if(r1(R+518)){{goto L6749b6;}}
}
B67441f:L67441f:{c.instructions+=6;NFSU2_TR(0x67441f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B674422:{NFSU2_TR(0x674422);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B674425:{NFSU2_TR(0x674425);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674426:{NFSU2_TR(0x674426);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674429:{NFSU2_TR(0x674429);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B67442c:{NFSU2_TR(0x67442c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674431ull));
TAIL_STATIC(0x673e90u,673);
}
B674431:L674431:{c.instructions+=2;NFSU2_TR(0x674431);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B674433:{NFSU2_TR(0x674433);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67494e;}}
}
B674439:L674439:{c.instructions+=8;NFSU2_TR(0x674439);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67443c:{NFSU2_TR(0x67443c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67443f:{NFSU2_TR(0x67443f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674440:{NFSU2_TR(0x674440);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674443:{NFSU2_TR(0x674443);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B674445:{NFSU2_TR(0x674445);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B674448:{NFSU2_TR(0x674448);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67444b:{NFSU2_TR(0x67444b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674450ull));
TAIL_STATIC(0x673e90u,673);
}
B674450:L674450:{c.instructions+=2;NFSU2_TR(0x674450);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B674452:{NFSU2_TR(0x674452);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67494e;}}
}
B674458:L674458:{c.instructions+=5;NFSU2_TR(0x674458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B67445a:{NFSU2_TR(0x67445a);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfff00000ull))));
}
B674460:{NFSU2_TR(0x674460);
w4(R+0,u32(0x20400000ull));
}
B674465:{NFSU2_TR(0x674465);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674467:{NFSU2_TR(0x674467);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L674532;}}
}
B67446d:L67446d:{c.instructions+=1;NFSU2_TR(0x67446d);
if(r1(R+518)){{goto L67451e;}}
}
B674473:L674473:{c.instructions+=2;NFSU2_TR(0x674473);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674479:{NFSU2_TR(0x674479);
if(r1(R+518)){{goto L6744f3;}}
}
B67447b:L67447b:{c.instructions+=2;NFSU2_TR(0x67447b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674481:{NFSU2_TR(0x674481);
if(r1(R+518)){{goto L6744e1;}}
}
B674483:L674483:{c.instructions+=2;NFSU2_TR(0x674483);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674489:{NFSU2_TR(0x674489);
if(r1(R+518)){{goto L6744bc;}}
}
B67448b:L67448b:{c.instructions+=2;NFSU2_TR(0x67448b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674491:{NFSU2_TR(0x674491);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6749b6;}}
}
B674497:L674497:{c.instructions+=5;NFSU2_TR(0x674497);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67449a:{NFSU2_TR(0x67449a);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67449d:{NFSU2_TR(0x67449d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67449f:{NFSU2_TR(0x67449f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6744a2:{NFSU2_TR(0x6744a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6742d4u);}goto L6742d4;}}
}
B6744a8:L6744a8:{c.instructions+=5;NFSU2_TR(0x6744a8);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6744ab:{NFSU2_TR(0x6744ab);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6744ae:{NFSU2_TR(0x6744ae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6744b0:{NFSU2_TR(0x6744b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6744b3:{NFSU2_TR(0x6744b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6744da;}}
}
B6744b5:L6744b5:{c.instructions+=2;NFSU2_TR(0x6744b5);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6744b7:{NFSU2_TR(0x6744b7);
{goto L6749ae;}
}
B6744bc:L6744bc:{c.instructions+=5;NFSU2_TR(0x6744bc);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6744bf:{NFSU2_TR(0x6744bf);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6744c2:{NFSU2_TR(0x6744c2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6744c4:{NFSU2_TR(0x6744c4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6744c7:{NFSU2_TR(0x6744c7);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6742d4u);}goto L6742d4;}}
}
B6744cd:L6744cd:{c.instructions+=5;NFSU2_TR(0x6744cd);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6744d0:{NFSU2_TR(0x6744d0);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6744d3:{NFSU2_TR(0x6744d3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6744d5:{NFSU2_TR(0x6744d5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6744d8:{NFSU2_TR(0x6744d8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6744b5u);}goto L6744b5;}}
}
B6744da:L6744da:{c.instructions+=2;NFSU2_TR(0x6744da);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6744dc:{NFSU2_TR(0x6744dc);
{goto L6749ae;}
}
B6744e1:L6744e1:{c.instructions+=5;NFSU2_TR(0x6744e1);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6744e4:{NFSU2_TR(0x6744e4);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6744e7:{NFSU2_TR(0x6744e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6744e9:{NFSU2_TR(0x6744e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6744ec:{NFSU2_TR(0x6744ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674567;}}
}
B6744ee:L6744ee:{c.instructions+=2;NFSU2_TR(0x6744ee);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6744f1:{NFSU2_TR(0x6744f1);
{goto L67456a;}
}
B6744f3:L6744f3:{c.instructions+=5;NFSU2_TR(0x6744f3);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6744f6:{NFSU2_TR(0x6744f6);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6744f9:{NFSU2_TR(0x6744f9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6744fb:{NFSU2_TR(0x6744fb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6744fe:{NFSU2_TR(0x6744fe);
if(r1(R+514)){{goto L674505;}}
}
B674500:L674500:{c.instructions+=2;NFSU2_TR(0x674500);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674503:{NFSU2_TR(0x674503);
{goto L674508;}
}
B674505:L674505:{c.instructions+=1;NFSU2_TR(0x674505);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674508:L674508:{c.instructions+=6;NFSU2_TR(0x674508);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67450b:{NFSU2_TR(0x67450b);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67450e:{NFSU2_TR(0x67450e);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674511:{NFSU2_TR(0x674511);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674513:{NFSU2_TR(0x674513);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674516:{NFSU2_TR(0x674516);
if(r1(R+514)){{goto L6747e6;}}
}
B67451c:L67451c:{c.instructions+=1;NFSU2_TR(0x67451c);
{goto L67457e;}
}
B67451e:L67451e:{c.instructions+=6;NFSU2_TR(0x67451e);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674521:{NFSU2_TR(0x674521);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B674524:{NFSU2_TR(0x674524);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674527:{NFSU2_TR(0x674527);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67452a:{NFSU2_TR(0x67452a);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B67452d:{NFSU2_TR(0x67452d);
{goto L6749b3;}
}
B674532:L674532:{c.instructions+=2;NFSU2_TR(0x674532);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674538:{NFSU2_TR(0x674538);
if(r1(R+518)){{goto L6745e9;}}
}
B67453e:L67453e:{c.instructions+=2;NFSU2_TR(0x67453e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674544:{NFSU2_TR(0x674544);
if(r1(R+518)){{goto L674586;}}
}
B674546:L674546:{c.instructions+=2;NFSU2_TR(0x674546);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67454c:{NFSU2_TR(0x67454c);
if(r1(R+518)){{goto L67455a;}}
}
B67454e:L67454e:{c.instructions+=2;NFSU2_TR(0x67454e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674554:{NFSU2_TR(0x674554);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6749b6;}}
}
B67455a:L67455a:{c.instructions+=5;NFSU2_TR(0x67455a);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67455d:{NFSU2_TR(0x67455d);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674560:{NFSU2_TR(0x674560);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674562:{NFSU2_TR(0x674562);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674565:{NFSU2_TR(0x674565);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6744eeu);}goto L6744ee;}}
}
B674567:L674567:{c.instructions+=1;NFSU2_TR(0x674567);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67456a:L67456a:{c.instructions+=6;NFSU2_TR(0x67456a);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67456d:{NFSU2_TR(0x67456d);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674570:{NFSU2_TR(0x674570);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674573:{NFSU2_TR(0x674573);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674575:{NFSU2_TR(0x674575);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B674578:{NFSU2_TR(0x674578);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6747e6;}}
}
B67457e:L67457e:{c.instructions+=2;NFSU2_TR(0x67457e);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674581:{NFSU2_TR(0x674581);
{goto L6749b3;}
}
B674586:L674586:{c.instructions+=6;NFSU2_TR(0x674586);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674589:{NFSU2_TR(0x674589);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67458c:{NFSU2_TR(0x67458c);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B67458e:{NFSU2_TR(0x67458e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674590:{NFSU2_TR(0x674590);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674593:{NFSU2_TR(0x674593);
if(r1(R+514)){{goto L6745d5;}}
}
B674595:L674595:{c.instructions+=5;NFSU2_TR(0x674595);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674598:{NFSU2_TR(0x674598);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674599:{NFSU2_TR(0x674599);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67459a:{NFSU2_TR(0x67459a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67459d:{NFSU2_TR(0x67459d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6745a2ull));
TAIL_STATIC(0x75dc4bu,75d);
}
B6745a2:L6745a2:{c.instructions+=4;NFSU2_TR(0x6745a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6745a4:{NFSU2_TR(0x6745a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6745a5:{NFSU2_TR(0x6745a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6745a6:{NFSU2_TR(0x6745a6);
if(r1(R+518)){{goto L6745d5;}}
}
B6745a8:L6745a8:{c.instructions+=6;NFSU2_TR(0x6745a8);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6745ab:{NFSU2_TR(0x6745ab);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6745ae:{NFSU2_TR(0x6745ae);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6745b0:{NFSU2_TR(0x6745b0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6745b2:{NFSU2_TR(0x6745b2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6745b5:{NFSU2_TR(0x6745b5);
if(r1(R+514)){{goto L6745d5;}}
}
B6745b7:L6745b7:{c.instructions+=5;NFSU2_TR(0x6745b7);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6745ba:{NFSU2_TR(0x6745ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6745bb:{NFSU2_TR(0x6745bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6745bc:{NFSU2_TR(0x6745bc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6745bf:{NFSU2_TR(0x6745bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6745c4ull));
TAIL_STATIC(0x75dc4bu,75d);
}
B6745c4:L6745c4:{c.instructions+=4;NFSU2_TR(0x6745c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6745c6:{NFSU2_TR(0x6745c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6745c7:{NFSU2_TR(0x6745c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6745c8:{NFSU2_TR(0x6745c8);
if(r1(R+518)){{goto L6745d5;}}
}
B6745ca:L6745ca:{c.instructions+=3;NFSU2_TR(0x6745ca);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6745cd:{NFSU2_TR(0x6745cd);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6745d0:{NFSU2_TR(0x6745d0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67430du);}goto L67430d;}
}
B6745d5:L6745d5:{c.instructions+=1;NFSU2_TR(0x6745d5);
{u32 ea_=u32(u32(8091784u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6745db:L6745db:{c.instructions+=3;NFSU2_TR(0x6745db);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6745de:{NFSU2_TR(0x6745de);
{u32 ea_=u32(u32(8091776u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6745e4:{NFSU2_TR(0x6745e4);
{goto L6749b3;}
}
B6745e9:L6745e9:{c.instructions+=9;NFSU2_TR(0x6745e9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6745eb:{NFSU2_TR(0x6745eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6745ee:{NFSU2_TR(0x6745ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6745f1:{NFSU2_TR(0x6745f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6745f2:{NFSU2_TR(0x6745f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6745f5:{NFSU2_TR(0x6745f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6745f6:{NFSU2_TR(0x6745f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6745f9:{NFSU2_TR(0x6745f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6745fa:{NFSU2_TR(0x6745fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6745ffull));
TAIL_STATIC(0x673dedu,673);
}
B6745ff:L6745ff:{c.instructions+=1;NFSU2_TR(0x6745ff);
{goto L6749b6;}
}
B674604:L674604:{c.instructions+=4;NFSU2_TR(0x674604);
__builtin_memmove((R+4),(R+0),4);
}
B674606:{NFSU2_TR(0x674606);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B67460c:{NFSU2_TR(0x67460c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674612:{NFSU2_TR(0x674612);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6746a7;}}
}
B674618:L674618:{c.instructions+=9;NFSU2_TR(0x674618);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B67461a:{NFSU2_TR(0x67461a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B67461f:{NFSU2_TR(0x67461f);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674622:{NFSU2_TR(0x674622);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674624:{NFSU2_TR(0x674624);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B674626:{NFSU2_TR(0x674626);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674629:{NFSU2_TR(0x674629);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67462c:{NFSU2_TR(0x67462c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B67462d:{NFSU2_TR(0x67462d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6749b6;}}
}
B674633:L674633:{c.instructions+=2;NFSU2_TR(0x674633);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B674636:{NFSU2_TR(0x674636);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674639:L674639:{c.instructions+=6;NFSU2_TR(0x674639);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67463c:{NFSU2_TR(0x67463c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67463f:{NFSU2_TR(0x67463f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674640:{NFSU2_TR(0x674640);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674643:{NFSU2_TR(0x674643);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B674646:{NFSU2_TR(0x674646);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67464bull));
TAIL_STATIC(0x673e90u,673);
}
B67464b:L67464b:{c.instructions+=2;NFSU2_TR(0x67464b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67464d:{NFSU2_TR(0x67464d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67494e;}}
}
B674653:L674653:{c.instructions+=7;NFSU2_TR(0x674653);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B674656:{NFSU2_TR(0x674656);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B674659:{NFSU2_TR(0x674659);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67465a:{NFSU2_TR(0x67465a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67465d:{NFSU2_TR(0x67465d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B674660:{NFSU2_TR(0x674660);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B674663:{NFSU2_TR(0x674663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674668ull));
TAIL_STATIC(0x673e90u,673);
}
B674668:L674668:{c.instructions+=2;NFSU2_TR(0x674668);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67466a:{NFSU2_TR(0x67466a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67494e;}}
}
B674670:L674670:{c.instructions+=9;NFSU2_TR(0x674670);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B674672:{NFSU2_TR(0x674672);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B674675:{NFSU2_TR(0x674675);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B674678:{NFSU2_TR(0x674678);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674679:{NFSU2_TR(0x674679);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67467c:{NFSU2_TR(0x67467c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67467d:{NFSU2_TR(0x67467d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B674680:{NFSU2_TR(0x674680);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674681:{NFSU2_TR(0x674681);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674686ull));
TAIL_STATIC(0x673dedu,673);
}
B674686:L674686:{c.instructions+=10;NFSU2_TR(0x674686);
{u32 ea_=u32(r4(R+20)+u32(4294967212u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674689:{NFSU2_TR(0x674689);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B67468c:{NFSU2_TR(0x67468c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674690:{NFSU2_TR(0x674690);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B674691:{NFSU2_TR(0x674691);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B674694:{NFSU2_TR(0x674694);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674697:{NFSU2_TR(0x674697);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67469a:{NFSU2_TR(0x67469a);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B67469d:{NFSU2_TR(0x67469d);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6746a0:{NFSU2_TR(0x6746a0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674639u);}goto L674639;}}
}
B6746a2:L6746a2:{c.instructions+=1;NFSU2_TR(0x6746a2);
{goto L6749b6;}
}
B6746a7:L6746a7:{c.instructions+=2;NFSU2_TR(0x6746a7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6746ad:{NFSU2_TR(0x6746ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6747ee;}}
}
B6746b3:L6746b3:{c.instructions+=14;NFSU2_TR(0x6746b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6746b6:{NFSU2_TR(0x6746b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6746b9:{NFSU2_TR(0x6746b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6746bc:{NFSU2_TR(0x6746bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6746bf:{NFSU2_TR(0x6746bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6746c2:{NFSU2_TR(0x6746c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6746c5:{NFSU2_TR(0x6746c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6746c8:{NFSU2_TR(0x6746c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6746cb:{NFSU2_TR(0x6746cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6746ce:{NFSU2_TR(0x6746ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B6746d1:{NFSU2_TR(0x6746d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6746d2:{NFSU2_TR(0x6746d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6746d5:{NFSU2_TR(0x6746d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6746d8:{NFSU2_TR(0x6746d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6746ddull));
TAIL_STATIC(0x673e90u,673);
}
B6746dd:L6746dd:{c.instructions+=2;NFSU2_TR(0x6746dd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6746df:{NFSU2_TR(0x6746df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67494e;}}
}
B6746e5:L6746e5:{c.instructions+=5;NFSU2_TR(0x6746e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6746e8:{NFSU2_TR(0x6746e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6746eb:{NFSU2_TR(0x6746eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6746ec:{NFSU2_TR(0x6746ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6746ef:{NFSU2_TR(0x6746ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6746f4ull));
TAIL_STATIC(0x673e90u,673);
}
B6746f4:L6746f4:{c.instructions+=2;NFSU2_TR(0x6746f4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6746f6:{NFSU2_TR(0x6746f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67494e;}}
}
B6746fc:L6746fc:{c.instructions+=5;NFSU2_TR(0x6746fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6746ff:{NFSU2_TR(0x6746ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B674702:{NFSU2_TR(0x674702);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674703:{NFSU2_TR(0x674703);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674704:{NFSU2_TR(0x674704);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674709ull));
TAIL_STATIC(0x673e90u,673);
}
B674709:L674709:{c.instructions+=2;NFSU2_TR(0x674709);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67470b:{NFSU2_TR(0x67470b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67494e;}}
}
B674711:L674711:{c.instructions+=4;NFSU2_TR(0x674711);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B674713:{NFSU2_TR(0x674713);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B674718:{NFSU2_TR(0x674718);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67471d:{NFSU2_TR(0x67471d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6749b6;}}
}
B674723:L674723:{c.instructions+=3;NFSU2_TR(0x674723);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B674726:{NFSU2_TR(0x674726);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674729:{NFSU2_TR(0x674729);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674755;}}
}
B67472b:L67472b:{c.instructions+=5;NFSU2_TR(0x67472b);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67472e:{NFSU2_TR(0x67472e);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674734:{NFSU2_TR(0x674734);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674736:{NFSU2_TR(0x674736);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674739:{NFSU2_TR(0x674739);
if(r1(R+514)){{goto L674740;}}
}
B67473b:L67473b:{c.instructions+=2;NFSU2_TR(0x67473b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B67473d:{NFSU2_TR(0x67473d);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674740:L674740:{c.instructions+=5;NFSU2_TR(0x674740);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674743:{NFSU2_TR(0x674743);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674749:{NFSU2_TR(0x674749);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67474b:{NFSU2_TR(0x67474b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67474e:{NFSU2_TR(0x67474e);
if(r1(R+514)){{goto L674755;}}
}
B674750:L674750:{c.instructions+=2;NFSU2_TR(0x674750);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B674752:{NFSU2_TR(0x674752);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674755:L674755:{c.instructions+=2;NFSU2_TR(0x674755);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674757:{NFSU2_TR(0x674757);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674784;}}
}
B674759:L674759:{c.instructions+=5;NFSU2_TR(0x674759);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67475c:{NFSU2_TR(0x67475c);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674762:{NFSU2_TR(0x674762);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674764:{NFSU2_TR(0x674764);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B674767:{NFSU2_TR(0x674767);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67476e;}}
}
B674769:L674769:{c.instructions+=2;NFSU2_TR(0x674769);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B67476b:{NFSU2_TR(0x67476b);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67476e:L67476e:{c.instructions+=5;NFSU2_TR(0x67476e);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674771:{NFSU2_TR(0x674771);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B674777:{NFSU2_TR(0x674777);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674779:{NFSU2_TR(0x674779);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67477c:{NFSU2_TR(0x67477c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674787;}}
}
B67477e:L67477e:{c.instructions+=3;NFSU2_TR(0x67477e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B674780:{NFSU2_TR(0x674780);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B674782:{NFSU2_TR(0x674782);
{goto L674787;}
}
B674784:L674784:{c.instructions+=1;NFSU2_TR(0x674784);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674787:L674787:{c.instructions+=5;NFSU2_TR(0x674787);
{u32 ea_=u32(r4(R+20)+u32(4294967212u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67478a:{NFSU2_TR(0x67478a);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674790:{NFSU2_TR(0x674790);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674792:{NFSU2_TR(0x674792);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B674795:{NFSU2_TR(0x674795);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6747a1;}}
}
B674797:L674797:{c.instructions+=1;NFSU2_TR(0x674797);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B674799:L674799:{c.instructions+=3;NFSU2_TR(0x674799);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67479c:{NFSU2_TR(0x67479c);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67479f:{NFSU2_TR(0x67479f);
{goto L6747e6;}
}
B6747a1:L6747a1:{c.instructions+=5;NFSU2_TR(0x6747a1);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6747a4:{NFSU2_TR(0x6747a4);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6747aa:{NFSU2_TR(0x6747aa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6747ac:{NFSU2_TR(0x6747ac);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6747af:{NFSU2_TR(0x6747af);
if(r1(R+514)){{goto L6747bc;}}
}
B6747b1:L6747b1:{c.instructions+=3;NFSU2_TR(0x6747b1);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6747b4:{NFSU2_TR(0x6747b4);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6747b7:{NFSU2_TR(0x6747b7);
{goto L6749b3;}
}
B6747bc:L6747bc:{c.instructions+=5;NFSU2_TR(0x6747bc);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6747bf:{NFSU2_TR(0x6747bf);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6747c2:{NFSU2_TR(0x6747c2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6747c4:{NFSU2_TR(0x6747c4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6747c7:{NFSU2_TR(0x6747c7);
if(r1(R+514)){{goto L6747ce;}}
}
B6747c9:L6747c9:{c.instructions+=2;NFSU2_TR(0x6747c9);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6747cc:{NFSU2_TR(0x6747cc);
{goto L6747d1;}
}
B6747ce:L6747ce:{c.instructions+=1;NFSU2_TR(0x6747ce);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6747d1:L6747d1:{c.instructions+=6;NFSU2_TR(0x6747d1);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6747d4:{NFSU2_TR(0x6747d4);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6747d7:{NFSU2_TR(0x6747d7);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6747d9:{NFSU2_TR(0x6747d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6747db:{NFSU2_TR(0x6747db);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6747de:{NFSU2_TR(0x6747de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6749b3;}}
}
B6747e4:L6747e4:{c.instructions+=1;NFSU2_TR(0x6747e4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6747e6:L6747e6:{c.instructions+=2;NFSU2_TR(0x6747e6);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6747e9:{NFSU2_TR(0x6747e9);
{goto L6749b3;}
}
B6747ee:L6747ee:{c.instructions+=2;NFSU2_TR(0x6747ee);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6747f4:{NFSU2_TR(0x6747f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674931;}}
}
B6747fa:L6747fa:{c.instructions+=2;NFSU2_TR(0x6747fa);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6747fd:{NFSU2_TR(0x6747fd);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6744b5u);}goto L6744b5;}}
}
B674803:L674803:{c.instructions+=2;NFSU2_TR(0x674803);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B674804:{NFSU2_TR(0x674804);
if(r1(R+518)){{goto L6748e2;}}
}
B67480a:L67480a:{c.instructions+=2;NFSU2_TR(0x67480a);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B67480b:{NFSU2_TR(0x67480b);
if(r1(R+518)){{goto L674819;}}
}
B67480d:L67480d:{c.instructions+=2;NFSU2_TR(0x67480d);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B67480e:{NFSU2_TR(0x67480e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6749b6;}}
}
B674814:L674814:{c.instructions+=1;NFSU2_TR(0x674814);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6744b5u);}goto L6744b5;}
}
B674819:L674819:{c.instructions+=6;NFSU2_TR(0x674819);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67481c:{NFSU2_TR(0x67481c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67481f:{NFSU2_TR(0x67481f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674820:{NFSU2_TR(0x674820);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674823:{NFSU2_TR(0x674823);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B674825:{NFSU2_TR(0x674825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67482aull));
TAIL_STATIC(0x673e90u,673);
}
B67482a:L67482a:{c.instructions+=2;NFSU2_TR(0x67482a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67482c:{NFSU2_TR(0x67482c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67494e;}}
}
B674832:L674832:{c.instructions+=5;NFSU2_TR(0x674832);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674835:{NFSU2_TR(0x674835);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67483b:{NFSU2_TR(0x67483b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67483d:{NFSU2_TR(0x67483d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674840:{NFSU2_TR(0x674840);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6742d4u);}goto L6742d4;}}
}
B674846:L674846:{c.instructions+=6;NFSU2_TR(0x674846);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B674849:{NFSU2_TR(0x674849);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67484c:{NFSU2_TR(0x67484c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67484d:{NFSU2_TR(0x67484d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674850:{NFSU2_TR(0x674850);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B674853:{NFSU2_TR(0x674853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674858ull));
TAIL_STATIC(0x673e90u,673);
}
B674858:L674858:{c.instructions+=2;NFSU2_TR(0x674858);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67485a:{NFSU2_TR(0x67485a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67494e;}}
}
B674860:L674860:{c.instructions+=5;NFSU2_TR(0x674860);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674863:{NFSU2_TR(0x674863);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674869:{NFSU2_TR(0x674869);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67486b:{NFSU2_TR(0x67486b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67486e:{NFSU2_TR(0x67486e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6742d4u);}goto L6742d4;}}
}
B674874:L674874:{c.instructions+=6;NFSU2_TR(0x674874);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B674877:{NFSU2_TR(0x674877);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B67487a:{NFSU2_TR(0x67487a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67487b:{NFSU2_TR(0x67487b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67487e:{NFSU2_TR(0x67487e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B674881:{NFSU2_TR(0x674881);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674886ull));
TAIL_STATIC(0x673e90u,673);
}
B674886:L674886:{c.instructions+=2;NFSU2_TR(0x674886);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B674888:{NFSU2_TR(0x674888);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67494e;}}
}
B67488e:L67488e:{c.instructions+=5;NFSU2_TR(0x67488e);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674891:{NFSU2_TR(0x674891);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674897:{NFSU2_TR(0x674897);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674899:{NFSU2_TR(0x674899);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67489c:{NFSU2_TR(0x67489c);
if(r1(R+514)){{goto L6748a3;}}
}
B67489e:L67489e:{c.instructions+=2;NFSU2_TR(0x67489e);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6748a1:{NFSU2_TR(0x6748a1);
{goto L6748a6;}
}
B6748a3:L6748a3:{c.instructions+=1;NFSU2_TR(0x6748a3);
{u32 ea_=u32(r4(R+20)+u32(4294967212u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6748a6:L6748a6:{c.instructions+=4;NFSU2_TR(0x6748a6);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6748a9:{NFSU2_TR(0x6748a9);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6748ac:{NFSU2_TR(0x6748ac);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6748af:{NFSU2_TR(0x6748af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6748b4ull));
TAIL_STATIC(0x75c9b0u,75c);
}
B6748b4:L6748b4:{c.instructions+=6;NFSU2_TR(0x6748b4);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6748b7:{NFSU2_TR(0x6748b7);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6748ba:{NFSU2_TR(0x6748ba);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6748c0:{NFSU2_TR(0x6748c0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6748c2:{NFSU2_TR(0x6748c2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6748c5:{NFSU2_TR(0x6748c5);
if(r1(R+514)){{goto L6748cc;}}
}
B6748c7:L6748c7:{c.instructions+=2;NFSU2_TR(0x6748c7);
{u32 ea_=u32(r4(R+20)+u32(4294967212u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6748ca:{NFSU2_TR(0x6748ca);
{goto L6748cf;}
}
B6748cc:L6748cc:{c.instructions+=1;NFSU2_TR(0x6748cc);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6748cf:L6748cf:{c.instructions+=3;NFSU2_TR(0x6748cf);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6748d2:{NFSU2_TR(0x6748d2);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6748d5:{NFSU2_TR(0x6748d5);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6748d8:L6748d8:{c.instructions+=1;NFSU2_TR(0x6748d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6748ddull));
TAIL_STATIC(0x75c9b0u,75c);
}
B6748dd:L6748dd:{c.instructions+=1;NFSU2_TR(0x6748dd);
{goto L6749b3;}
}
B6748e2:L6748e2:{c.instructions+=6;NFSU2_TR(0x6748e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6748e5:{NFSU2_TR(0x6748e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6748e8:{NFSU2_TR(0x6748e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6748e9:{NFSU2_TR(0x6748e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6748ec:{NFSU2_TR(0x6748ec);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6748ee:{NFSU2_TR(0x6748ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6748f3ull));
TAIL_STATIC(0x673e90u,673);
}
B6748f3:L6748f3:{c.instructions+=2;NFSU2_TR(0x6748f3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6748f5:{NFSU2_TR(0x6748f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67494e;}}
}
B6748f7:L6748f7:{c.instructions+=5;NFSU2_TR(0x6748f7);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6748fa:{NFSU2_TR(0x6748fa);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674900:{NFSU2_TR(0x674900);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674902:{NFSU2_TR(0x674902);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B674905:{NFSU2_TR(0x674905);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674915;}}
}
B674907:L674907:{c.instructions+=2;NFSU2_TR(0x674907);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67490a:{NFSU2_TR(0x67490a);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67490d:L67490d:{c.instructions+=2;NFSU2_TR(0x67490d);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674910:{NFSU2_TR(0x674910);
{goto L6749b3;}
}
B674915:L674915:{c.instructions+=7;NFSU2_TR(0x674915);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674918:{NFSU2_TR(0x674918);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67491e:{NFSU2_TR(0x67491e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B674920:{NFSU2_TR(0x674920);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674923:{NFSU2_TR(0x674923);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674925:{NFSU2_TR(0x674925);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674928:{NFSU2_TR(0x674928);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67490du);}goto L67490d;}}
}
B67492a:L67492a:{c.instructions+=2;NFSU2_TR(0x67492a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B67492c:{NFSU2_TR(0x67492c);
{goto L6749b3;}
}
B674931:L674931:{c.instructions+=2;NFSU2_TR(0x674931);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674937:{NFSU2_TR(0x674937);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6749b6;}}
}
B674939:L674939:{c.instructions+=6;NFSU2_TR(0x674939);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67493c:{NFSU2_TR(0x67493c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67493f:{NFSU2_TR(0x67493f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674940:{NFSU2_TR(0x674940);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674943:{NFSU2_TR(0x674943);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B674945:{NFSU2_TR(0x674945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67494aull));
TAIL_STATIC(0x673e90u,673);
}
B67494a:L67494a:{c.instructions+=2;NFSU2_TR(0x67494a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67494c:{NFSU2_TR(0x67494c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L67496a;}}
}
B67494e:L67494e:{c.instructions+=7;NFSU2_TR(0x67494e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674951:{NFSU2_TR(0x674951);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674957:{NFSU2_TR(0x674957);
w4(R+24,u32(0x80004005ull));
}
B67495c:{NFSU2_TR(0x67495c);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67495f:{NFSU2_TR(0x67495f);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674965:{NFSU2_TR(0x674965);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674968:{NFSU2_TR(0x674968);
{goto L6749b8;}
}
B67496a:L67496a:{c.instructions+=6;NFSU2_TR(0x67496a);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67496d:{NFSU2_TR(0x67496d);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674970:{NFSU2_TR(0x674970);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B674972:{NFSU2_TR(0x674972);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674974:{NFSU2_TR(0x674974);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674977:{NFSU2_TR(0x674977);
if(r1(R+514)){{goto L6749a8;}}
}
B674979:L674979:{c.instructions+=5;NFSU2_TR(0x674979);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67497c:{NFSU2_TR(0x67497c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67497d:{NFSU2_TR(0x67497d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67497e:{NFSU2_TR(0x67497e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674981:{NFSU2_TR(0x674981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674986ull));
TAIL_STATIC(0x75dc4bu,75d);
}
B674986:L674986:{c.instructions+=4;NFSU2_TR(0x674986);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B674988:{NFSU2_TR(0x674988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B674989:{NFSU2_TR(0x674989);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67498a:{NFSU2_TR(0x67498a);
if(r1(R+518)){{goto L6749a8;}}
}
B67498c:L67498c:{c.instructions+=2;NFSU2_TR(0x67498c);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B67498f:{NFSU2_TR(0x67498f);
if(r1(R+518)){{goto L6749a1;}}
}
B674991:L674991:{c.instructions+=2;NFSU2_TR(0x674991);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B674992:{NFSU2_TR(0x674992);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6749b6;}}
}
B674994:L674994:{c.instructions+=1;NFSU2_TR(0x674994);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674997:L674997:{c.instructions+=1;NFSU2_TR(0x674997);
__asm__ volatile(".byte 0xd9,0xfe":::"memory");
}
B674999:L674999:{c.instructions+=3;NFSU2_TR(0x674999);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B67499c:{NFSU2_TR(0x67499c);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67499f:{NFSU2_TR(0x67499f);
{goto L6749b6;}
}
B6749a1:L6749a1:{c.instructions+=1;NFSU2_TR(0x6749a1);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6749a4:L6749a4:{c.instructions+=2;NFSU2_TR(0x6749a4);
__asm__ volatile(".byte 0xd9,0xff":::"memory");
}
B6749a6:{NFSU2_TR(0x6749a6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674999u);}goto L674999;}
}
B6749a8:L6749a8:{c.instructions+=1;NFSU2_TR(0x6749a8);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6749ae:L6749ae:{c.instructions+=2;NFSU2_TR(0x6749ae);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6749b1:{NFSU2_TR(0x6749b1);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6749b3:L6749b3:{c.instructions+=1;NFSU2_TR(0x6749b3);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6749b6:L6749b6:{c.instructions+=1;NFSU2_TR(0x6749b6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6749b8:L6749b8:{c.instructions+=7;NFSU2_TR(0x6749b8);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6749bb:{NFSU2_TR(0x6749bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6749bd:{NFSU2_TR(0x6749bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6749c0:{NFSU2_TR(0x6749c0);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6749c6:{NFSU2_TR(0x6749c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6749c7:{NFSU2_TR(0x6749c7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6749c9:{NFSU2_TR(0x6749c9);
if(r1(R+518)){{goto L6749ec;}}
}
B6749cb:L6749cb:{c.instructions+=2;NFSU2_TR(0x6749cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6749ce:{NFSU2_TR(0x6749ce);
if(r1(R+518)){{goto L6749d5;}}
}
B6749d0:L6749d0:{c.instructions+=2;NFSU2_TR(0x6749d0);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6749d2:{NFSU2_TR(0x6749d2);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6749d5:L6749d5:{c.instructions+=5;NFSU2_TR(0x6749d5);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6749d8:{NFSU2_TR(0x6749d8);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6749de:{NFSU2_TR(0x6749de);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6749e0:{NFSU2_TR(0x6749e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6749e3:{NFSU2_TR(0x6749e3);
if(r1(R+518)){{goto L6749f6;}}
}
B6749e5:L6749e5:{c.instructions+=3;NFSU2_TR(0x6749e5);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6749e7:{NFSU2_TR(0x6749e7);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6749ea:{NFSU2_TR(0x6749ea);
{goto L6749f6;}
}
B6749ec:L6749ec:{c.instructions+=2;NFSU2_TR(0x6749ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6749ef:{NFSU2_TR(0x6749ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6749f6;}}
}
B6749f1:L6749f1:{c.instructions+=2;NFSU2_TR(0x6749f1);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x4ull))));
}
B6749f4:{NFSU2_TR(0x6749f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6749f6:L6749f6:{c.instructions+=3;NFSU2_TR(0x6749f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6749f8:{NFSU2_TR(0x6749f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6749fb:{NFSU2_TR(0x6749fb);
if(r1(R+518)){{goto L674a29;}}
}
B6749fd:L6749fd:{c.instructions+=5;NFSU2_TR(0x6749fd);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674a00:{NFSU2_TR(0x674a00);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674a06:{NFSU2_TR(0x674a06);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674a08:{NFSU2_TR(0x674a08);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674a0b:{NFSU2_TR(0x674a0b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L674a12;}}
}
B674a0d:L674a0d:{c.instructions+=2;NFSU2_TR(0x674a0d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B674a0f:{NFSU2_TR(0x674a0f);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674a12:L674a12:{c.instructions+=5;NFSU2_TR(0x674a12);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674a15:{NFSU2_TR(0x674a15);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674a1b:{NFSU2_TR(0x674a1b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674a1d:{NFSU2_TR(0x674a1d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674a20:{NFSU2_TR(0x674a20);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L674a3e;}}
}
B674a22:L674a22:{c.instructions+=3;NFSU2_TR(0x674a22);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B674a24:{NFSU2_TR(0x674a24);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674a27:{NFSU2_TR(0x674a27);
{goto L674a3e;}
}
B674a29:L674a29:{c.instructions+=5;NFSU2_TR(0x674a29);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674a2c:{NFSU2_TR(0x674a2c);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674a32:{NFSU2_TR(0x674a32);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674a34:{NFSU2_TR(0x674a34);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674a37:{NFSU2_TR(0x674a37);
if(r1(R+514)){{goto L674a3e;}}
}
B674a39:L674a39:{c.instructions+=2;NFSU2_TR(0x674a39);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x8ull))));
}
B674a3c:{NFSU2_TR(0x674a3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B674a3e:L674a3e:{c.instructions+=6;NFSU2_TR(0x674a3e);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674a41:{NFSU2_TR(0x674a41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B674a43:{NFSU2_TR(0x674a43);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B674a46:{NFSU2_TR(0x674a46);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674a4c:{NFSU2_TR(0x674a4c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674a4e:{NFSU2_TR(0x674a4e);
if(r1(R+518)){{goto L674aa3;}}
}
B674a50:L674a50:{c.instructions+=2;NFSU2_TR(0x674a50);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B674a53:{NFSU2_TR(0x674a53);
if(r1(R+518)){{goto L674a5e;}}
}
B674a55:L674a55:{c.instructions+=2;NFSU2_TR(0x674a55);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674a5b:{NFSU2_TR(0x674a5b);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674a5e:L674a5e:{c.instructions+=5;NFSU2_TR(0x674a5e);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674a61:{NFSU2_TR(0x674a61);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674a67:{NFSU2_TR(0x674a67);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674a69:{NFSU2_TR(0x674a69);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B674a6c:{NFSU2_TR(0x674a6c);
if(r1(R+518)){{goto L674a77;}}
}
B674a6e:L674a6e:{c.instructions+=2;NFSU2_TR(0x674a6e);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674a74:{NFSU2_TR(0x674a74);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674a77:L674a77:{c.instructions+=5;NFSU2_TR(0x674a77);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674a7a:{NFSU2_TR(0x674a7a);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674a80:{NFSU2_TR(0x674a80);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674a82:{NFSU2_TR(0x674a82);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674a85:{NFSU2_TR(0x674a85);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L674a8c;}}
}
B674a87:L674a87:{c.instructions+=2;NFSU2_TR(0x674a87);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B674a89:{NFSU2_TR(0x674a89);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674a8c:L674a8c:{c.instructions+=5;NFSU2_TR(0x674a8c);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674a8f:{NFSU2_TR(0x674a8f);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674a95:{NFSU2_TR(0x674a95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674a97:{NFSU2_TR(0x674a97);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674a9a:{NFSU2_TR(0x674a9a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L674abd;}}
}
B674a9c:L674a9c:{c.instructions+=3;NFSU2_TR(0x674a9c);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B674a9e:{NFSU2_TR(0x674a9e);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674aa1:{NFSU2_TR(0x674aa1);
{goto L674abd;}
}
B674aa3:L674aa3:{c.instructions+=2;NFSU2_TR(0x674aa3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B674aa6:{NFSU2_TR(0x674aa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674abd;}}
}
B674aa8:L674aa8:{c.instructions+=5;NFSU2_TR(0x674aa8);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674aab:{NFSU2_TR(0x674aab);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674ab1:{NFSU2_TR(0x674ab1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674ab3:{NFSU2_TR(0x674ab3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674ab6:{NFSU2_TR(0x674ab6);
if(r1(R+514)){{goto L674abd;}}
}
B674ab8:L674ab8:{c.instructions+=2;NFSU2_TR(0x674ab8);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x10ull))));
}
B674abb:{NFSU2_TR(0x674abb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B674abd:L674abd:{c.instructions+=6;NFSU2_TR(0x674abd);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674ac0:{NFSU2_TR(0x674ac0);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674ac3:{NFSU2_TR(0x674ac3);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B674ac5:{NFSU2_TR(0x674ac5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674ac7:{NFSU2_TR(0x674ac7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674aca:{NFSU2_TR(0x674aca);
if(r1(R+514)){{goto L674b30;}}
}
B674acc:L674acc:{c.instructions+=5;NFSU2_TR(0x674acc);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674acf:{NFSU2_TR(0x674acf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674ad0:{NFSU2_TR(0x674ad0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674ad1:{NFSU2_TR(0x674ad1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674ad4:{NFSU2_TR(0x674ad4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674ad9ull));
TAIL_STATIC(0x75dc4bu,75d);
}
B674ad9:L674ad9:{c.instructions+=4;NFSU2_TR(0x674ad9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B674adb:{NFSU2_TR(0x674adb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B674adc:{NFSU2_TR(0x674adc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B674add:{NFSU2_TR(0x674add);
if(r1(R+518)){{goto L674b30;}}
}
B674adf:L674adf:{c.instructions+=8;NFSU2_TR(0x674adf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+0,u8(u32(r1(U+0))|u32(u8(0x80ull))));
s1(u32(r4(R+28)),r1(U+0));
}
B674ae2:{NFSU2_TR(0x674ae2);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674ae5:{NFSU2_TR(0x674ae5);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674aeb:{NFSU2_TR(0x674aeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B674aed:{NFSU2_TR(0x674aed);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B674aef:{NFSU2_TR(0x674aef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674af1:{NFSU2_TR(0x674af1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674af4:{NFSU2_TR(0x674af4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L674b08;}}
}
B674af6:L674af6:{c.instructions+=6;NFSU2_TR(0x674af6);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674af9:{NFSU2_TR(0x674af9);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674aff:{NFSU2_TR(0x674aff);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B674b01:{NFSU2_TR(0x674b01);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674b03:{NFSU2_TR(0x674b03);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674b06:{NFSU2_TR(0x674b06);
if(r1(R+514)){{goto L674b0d;}}
}
B674b08:L674b08:{c.instructions+=2;NFSU2_TR(0x674b08);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1ull))));
}
B674b0b:{NFSU2_TR(0x674b0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B674b0d:L674b0d:{c.instructions+=2;NFSU2_TR(0x674b0d);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674b10:{NFSU2_TR(0x674b10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674b15ull));
TAIL_STATIC(0x75dd28u,75d);
}
B674b15:L674b15:{c.instructions+=8;NFSU2_TR(0x674b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674b18:{NFSU2_TR(0x674b18);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B674b1b:{NFSU2_TR(0x674b1b);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdc,0x28"::"a"(ea_):"memory");}
}
B674b1e:{NFSU2_TR(0x674b1e);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B674b20:{NFSU2_TR(0x674b20);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B674b26:{NFSU2_TR(0x674b26);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B674b28:{NFSU2_TR(0x674b28);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B674b2b:{NFSU2_TR(0x674b2b);
if(r1(R+514)){{goto L674b30;}}
}
B674b2d:L674b2d:{c.instructions+=1;NFSU2_TR(0x674b2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x2ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B674b30:L674b30:{c.instructions+=8;NFSU2_TR(0x674b30);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674b33:{NFSU2_TR(0x674b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674b36:{NFSU2_TR(0x674b36);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674b39:{NFSU2_TR(0x674b39);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674b3c:{NFSU2_TR(0x674b3c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B674b40:{NFSU2_TR(0x674b40);
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
B674b42:{NFSU2_TR(0x674b42);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674b45:{NFSU2_TR(0x674b45);
if(r1(R+518)){{goto L674b52;}}
}
B674b47:L674b47:{c.instructions+=4;NFSU2_TR(0x674b47);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674b4a:{NFSU2_TR(0x674b4a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674b4c:{NFSU2_TR(0x674b4c);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B674b4f:{NFSU2_TR(0x674b4f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B674b52:L674b52:{c.instructions+=5;NFSU2_TR(0x674b52);
__builtin_memmove((R+0),(R+24),4);
}
B674b54:{NFSU2_TR(0x674b54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B674b55:{NFSU2_TR(0x674b55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B674b56:{NFSU2_TR(0x674b56);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B674b57:{NFSU2_TR(0x674b57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B674b5a:L674b5a:{c.instructions+=8;NFSU2_TR(0x674b5a);
__builtin_memmove((R+28),(R+28),4);
}
B674b5c:{NFSU2_TR(0x674b5c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674b5d:{NFSU2_TR(0x674b5d);
__builtin_memmove((R+20),(R+16),4);
}
B674b5f:{NFSU2_TR(0x674b5f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B674b61:{NFSU2_TR(0x674b61);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674b64:{NFSU2_TR(0x674b64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674b65:{NFSU2_TR(0x674b65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674b66:{NFSU2_TR(0x674b66);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L674b92;}}
}
B674b68:L674b68:{c.instructions+=2;NFSU2_TR(0x674b68);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B674b6b:{NFSU2_TR(0x674b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B674b6e:L674b6e:{c.instructions+=4;NFSU2_TR(0x674b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674b71:{NFSU2_TR(0x674b71);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B674b74:{NFSU2_TR(0x674b74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B674b76:{NFSU2_TR(0x674b76);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L674b80;}}
}
B674b78:L674b78:{c.instructions+=3;NFSU2_TR(0x674b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B674b7b:{NFSU2_TR(0x674b7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B674b7e:{NFSU2_TR(0x674b7e);
{goto L674b82;}
}
B674b80:L674b80:{c.instructions+=1;NFSU2_TR(0x674b80);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B674b82:L674b82:{c.instructions+=2;NFSU2_TR(0x674b82);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B674b84:{NFSU2_TR(0x674b84);
if(r1(R+518)){{goto L674b9b;}}
}
B674b86:L674b86:{c.instructions+=2;NFSU2_TR(0x674b86);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674b8a:{NFSU2_TR(0x674b8a);
if(r1(R+518)){{goto L674b9b;}}
}
B674b8c:L674b8c:{c.instructions+=3;NFSU2_TR(0x674b8c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B674b8d:{NFSU2_TR(0x674b8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B674b90:{NFSU2_TR(0x674b90);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674b6eu);}goto L674b6e;}}
}
B674b92:L674b92:{c.instructions+=2;NFSU2_TR(0x674b92);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B674b94:{NFSU2_TR(0x674b94);
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
B674b95:L674b95:{c.instructions+=4;NFSU2_TR(0x674b95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B674b96:{NFSU2_TR(0x674b96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B674b97:{NFSU2_TR(0x674b97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B674b98:{NFSU2_TR(0x674b98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B674b9b:L674b9b:{c.instructions+=2;NFSU2_TR(0x674b9b);
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
B674b9d:{NFSU2_TR(0x674b9d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674b95u);}goto L674b95;}
}
B674b9f:L674b9f:{c.instructions+=7;NFSU2_TR(0x674b9f);
__builtin_memmove((R+28),(R+28),4);
}
B674ba1:{NFSU2_TR(0x674ba1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674ba2:{NFSU2_TR(0x674ba2);
__builtin_memmove((R+20),(R+16),4);
}
B674ba4:{NFSU2_TR(0x674ba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B674ba7:{NFSU2_TR(0x674ba7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674bab:{NFSU2_TR(0x674bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674bae:{NFSU2_TR(0x674bae);
if(r1(R+518)){{goto L674bbe;}}
}
B674bb0:L674bb0:{c.instructions+=4;NFSU2_TR(0x674bb0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B674bb2:{NFSU2_TR(0x674bb2);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B674bb6:{NFSU2_TR(0x674bb6);
__builtin_memmove((R+0),(R+518),1);
}
B674bb9:{NFSU2_TR(0x674bb9);
{goto L674d2b;}
}
B674bbe:L674bbe:{c.instructions+=4;NFSU2_TR(0x674bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674bc1:{NFSU2_TR(0x674bc1);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B674bc5:{NFSU2_TR(0x674bc5);
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
B674bc7:{NFSU2_TR(0x674bc7);
if(r1(R+518)){{goto L674d2b;}}
}
B674bcd:L674bcd:{c.instructions+=7;NFSU2_TR(0x674bcd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674bce:{NFSU2_TR(0x674bce);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B674bd0:{NFSU2_TR(0x674bd0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674bd3:{NFSU2_TR(0x674bd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674bd4:{NFSU2_TR(0x674bd4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674bd5:{NFSU2_TR(0x674bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674bd8:{NFSU2_TR(0x674bd8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L674c83;}}
}
B674bde:L674bde:{c.instructions+=6;NFSU2_TR(0x674bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674be1:{NFSU2_TR(0x674be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B674be4:{NFSU2_TR(0x674be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674be7:{NFSU2_TR(0x674be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B674bea:{NFSU2_TR(0x674bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674bed:{NFSU2_TR(0x674bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674bf0:L674bf0:{c.instructions+=7;NFSU2_TR(0x674bf0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674bf3:{NFSU2_TR(0x674bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B674bf6:{NFSU2_TR(0x674bf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B674bf8:{NFSU2_TR(0x674bf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B674bfb:{NFSU2_TR(0x674bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B674bfe:{NFSU2_TR(0x674bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674c01:{NFSU2_TR(0x674c01);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L674c71;}}
}
B674c03:L674c03:{c.instructions+=4;NFSU2_TR(0x674c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B674c06:{NFSU2_TR(0x674c06);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B674c09:{NFSU2_TR(0x674c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674c0c:{NFSU2_TR(0x674c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674c0f:L674c0f:{c.instructions+=6;NFSU2_TR(0x674c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B674c12:{NFSU2_TR(0x674c12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B674c14:{NFSU2_TR(0x674c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B674c17:{NFSU2_TR(0x674c17);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B674c1a:{NFSU2_TR(0x674c1a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674c1d:{NFSU2_TR(0x674c1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674d25;}}
}
B674c23:L674c23:{c.instructions+=4;NFSU2_TR(0x674c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B674c26:{NFSU2_TR(0x674c26);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B674c29:{NFSU2_TR(0x674c29);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B674c2d:{NFSU2_TR(0x674c2d);
if(r1(R+518)){{goto L674c4f;}}
}
B674c2f:L674c2f:{c.instructions+=5;NFSU2_TR(0x674c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B674c32:{NFSU2_TR(0x674c32);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B674c35:{NFSU2_TR(0x674c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B674c38:{NFSU2_TR(0x674c38);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674c3b:{NFSU2_TR(0x674c3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674d25;}}
}
B674c41:L674c41:{c.instructions+=5;NFSU2_TR(0x674c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B674c44:{NFSU2_TR(0x674c44);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x3ull))));
}
B674c47:{NFSU2_TR(0x674c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B674c4a:{NFSU2_TR(0x674c4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674c4d:{NFSU2_TR(0x674c4d);
{goto L674c55;}
}
B674c4f:L674c4f:{c.instructions+=2;NFSU2_TR(0x674c4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B674c52:{NFSU2_TR(0x674c52);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674c55:L674c55:{c.instructions+=1;NFSU2_TR(0x674c55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674d25;}}
}
B674c5b:L674c5b:{c.instructions+=7;NFSU2_TR(0x674c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B674c5e:{NFSU2_TR(0x674c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674c61:{NFSU2_TR(0x674c61);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B674c64:{NFSU2_TR(0x674c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B674c67:{NFSU2_TR(0x674c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B674c6a:{NFSU2_TR(0x674c6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B674c6d:{NFSU2_TR(0x674c6d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674c0fu);}goto L674c0f;}}
}
B674c6f:L674c6f:{c.instructions+=1;NFSU2_TR(0x674c6f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B674c71:L674c71:{c.instructions+=5;NFSU2_TR(0x674c71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674c74:{NFSU2_TR(0x674c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674c77:{NFSU2_TR(0x674c77);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B674c7a:{NFSU2_TR(0x674c7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B674c7d:{NFSU2_TR(0x674c7d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674bf0u);}goto L674bf0;}}
}
B674c83:L674c83:{c.instructions+=3;NFSU2_TR(0x674c83);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674c86:{NFSU2_TR(0x674c86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674c89:{NFSU2_TR(0x674c89);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L674d25;}}
}
B674c8f:L674c8f:{c.instructions+=5;NFSU2_TR(0x674c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674c92:{NFSU2_TR(0x674c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B674c95:{NFSU2_TR(0x674c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674c98:{NFSU2_TR(0x674c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B674c9b:{NFSU2_TR(0x674c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674c9e:L674c9e:{c.instructions+=6;NFSU2_TR(0x674c9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B674ca0:{NFSU2_TR(0x674ca0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B674ca3:{NFSU2_TR(0x674ca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674ca7:{NFSU2_TR(0x674ca7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674cab:{NFSU2_TR(0x674cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B674cae:{NFSU2_TR(0x674cae);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L674d0e;}}
}
B674cb0:L674cb0:{c.instructions+=5;NFSU2_TR(0x674cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674cb3:{NFSU2_TR(0x674cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674cb6:{NFSU2_TR(0x674cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674cb9:{NFSU2_TR(0x674cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674cbc:{NFSU2_TR(0x674cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674cbf:L674cbf:{c.instructions+=6;NFSU2_TR(0x674cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674cc2:{NFSU2_TR(0x674cc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B674cc4:{NFSU2_TR(0x674cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B674cc7:{NFSU2_TR(0x674cc7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B674cca:{NFSU2_TR(0x674cca);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674ccd:{NFSU2_TR(0x674ccd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674d2f;}}
}
B674ccf:L674ccf:{c.instructions+=4;NFSU2_TR(0x674ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674cd2:{NFSU2_TR(0x674cd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B674cd5:{NFSU2_TR(0x674cd5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B674cd9:{NFSU2_TR(0x674cd9);
if(r1(R+518)){{goto L674cf7;}}
}
B674cdb:L674cdb:{c.instructions+=5;NFSU2_TR(0x674cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674cde:{NFSU2_TR(0x674cde);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B674ce1:{NFSU2_TR(0x674ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B674ce4:{NFSU2_TR(0x674ce4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674ce7:{NFSU2_TR(0x674ce7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674d2f;}}
}
B674ce9:L674ce9:{c.instructions+=5;NFSU2_TR(0x674ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674cec:{NFSU2_TR(0x674cec);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B674cef:{NFSU2_TR(0x674cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B674cf2:{NFSU2_TR(0x674cf2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674cf5:{NFSU2_TR(0x674cf5);
{goto L674cfd;}
}
B674cf7:L674cf7:{c.instructions+=2;NFSU2_TR(0x674cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674cfa:{NFSU2_TR(0x674cfa);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674cfd:L674cfd:{c.instructions+=1;NFSU2_TR(0x674cfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674d2f;}}
}
B674cff:L674cff:{c.instructions+=5;NFSU2_TR(0x674cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674d02:{NFSU2_TR(0x674d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674d05:{NFSU2_TR(0x674d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674d09:{NFSU2_TR(0x674d09);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B674d0c:{NFSU2_TR(0x674d0c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674cbfu);}goto L674cbf;}}
}
B674d0e:L674d0e:{c.instructions+=7;NFSU2_TR(0x674d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674d11:{NFSU2_TR(0x674d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674d14:{NFSU2_TR(0x674d14);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B674d17:{NFSU2_TR(0x674d17);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B674d19:{NFSU2_TR(0x674d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674d1c:{NFSU2_TR(0x674d1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B674d1f:{NFSU2_TR(0x674d1f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674c9eu);}goto L674c9e;}}
}
B674d25:L674d25:{c.instructions+=2;NFSU2_TR(0x674d25);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B674d27:{NFSU2_TR(0x674d27);
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
B674d28:L674d28:{c.instructions+=3;NFSU2_TR(0x674d28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B674d29:{NFSU2_TR(0x674d29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B674d2a:{NFSU2_TR(0x674d2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B674d2b:L674d2b:{c.instructions+=2;NFSU2_TR(0x674d2b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B674d2c:{NFSU2_TR(0x674d2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B674d2f:L674d2f:{c.instructions+=2;NFSU2_TR(0x674d2f);
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
B674d31:{NFSU2_TR(0x674d31);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674d28u);}goto L674d28;}
}
B674d33:L674d33:{c.instructions+=9;NFSU2_TR(0x674d33);
__builtin_memmove((R+28),(R+28),4);
}
B674d35:{NFSU2_TR(0x674d35);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674d36:{NFSU2_TR(0x674d36);
__builtin_memmove((R+20),(R+16),4);
}
B674d38:{NFSU2_TR(0x674d38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B674d3b:{NFSU2_TR(0x674d3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674d3f:{NFSU2_TR(0x674d3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674d40:{NFSU2_TR(0x674d40);
__builtin_memmove((R+24),(R+4),4);
}
B674d42:{NFSU2_TR(0x674d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674d45:{NFSU2_TR(0x674d45);
if(r1(R+518)){{goto L674d56;}}
}
B674d47:L674d47:{c.instructions+=6;NFSU2_TR(0x674d47);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B674d49:{NFSU2_TR(0x674d49);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B674d4a:{NFSU2_TR(0x674d4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B674d4d:{NFSU2_TR(0x674d4d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B674d4f:{NFSU2_TR(0x674d4f);
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
B674d51:{NFSU2_TR(0x674d51);
{goto L674ec0;}
}
B674d56:L674d56:{c.instructions+=4;NFSU2_TR(0x674d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674d59:{NFSU2_TR(0x674d59);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B674d5d:{NFSU2_TR(0x674d5d);
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
B674d5f:{NFSU2_TR(0x674d5f);
if(r1(R+518)){{goto L674ec0;}}
}
B674d65:L674d65:{c.instructions+=5;NFSU2_TR(0x674d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674d69:{NFSU2_TR(0x674d69);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674d6d:{NFSU2_TR(0x674d6d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674d6e:{NFSU2_TR(0x674d6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674d6f:{NFSU2_TR(0x674d6f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L674e17;}}
}
B674d75:L674d75:{c.instructions+=5;NFSU2_TR(0x674d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674d78:{NFSU2_TR(0x674d78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B674d7b:{NFSU2_TR(0x674d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674d7e:{NFSU2_TR(0x674d7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B674d81:{NFSU2_TR(0x674d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674d84:L674d84:{c.instructions+=6;NFSU2_TR(0x674d84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B674d86:{NFSU2_TR(0x674d86);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B674d89:{NFSU2_TR(0x674d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674d8d:{NFSU2_TR(0x674d8d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674d91:{NFSU2_TR(0x674d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B674d94:{NFSU2_TR(0x674d94);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L674e00;}}
}
B674d96:L674d96:{c.instructions+=4;NFSU2_TR(0x674d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674d99:{NFSU2_TR(0x674d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674d9c:{NFSU2_TR(0x674d9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674d9f:{NFSU2_TR(0x674d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674da2:L674da2:{c.instructions+=6;NFSU2_TR(0x674da2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674da5:{NFSU2_TR(0x674da5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B674da7:{NFSU2_TR(0x674da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B674daa:{NFSU2_TR(0x674daa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B674dad:{NFSU2_TR(0x674dad);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674db0:{NFSU2_TR(0x674db0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674ebb;}}
}
B674db6:L674db6:{c.instructions+=4;NFSU2_TR(0x674db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674db9:{NFSU2_TR(0x674db9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B674dbc:{NFSU2_TR(0x674dbc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B674dc0:{NFSU2_TR(0x674dc0);
if(r1(R+518)){{goto L674de2;}}
}
B674dc2:L674dc2:{c.instructions+=5;NFSU2_TR(0x674dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674dc5:{NFSU2_TR(0x674dc5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B674dc8:{NFSU2_TR(0x674dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B674dcb:{NFSU2_TR(0x674dcb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674dce:{NFSU2_TR(0x674dce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674ebb;}}
}
B674dd4:L674dd4:{c.instructions+=5;NFSU2_TR(0x674dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674dd7:{NFSU2_TR(0x674dd7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B674dda:{NFSU2_TR(0x674dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B674ddd:{NFSU2_TR(0x674ddd);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674de0:{NFSU2_TR(0x674de0);
{goto L674de8;}
}
B674de2:L674de2:{c.instructions+=2;NFSU2_TR(0x674de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674de5:{NFSU2_TR(0x674de5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674de8:L674de8:{c.instructions+=1;NFSU2_TR(0x674de8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674ebb;}}
}
B674dee:L674dee:{c.instructions+=5;NFSU2_TR(0x674dee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674df1:{NFSU2_TR(0x674df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674df4:{NFSU2_TR(0x674df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674df8:{NFSU2_TR(0x674df8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B674dfb:{NFSU2_TR(0x674dfb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674da2u);}goto L674da2;}}
}
B674dfd:L674dfd:{c.instructions+=1;NFSU2_TR(0x674dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B674e00:L674e00:{c.instructions+=7;NFSU2_TR(0x674e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674e03:{NFSU2_TR(0x674e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674e06:{NFSU2_TR(0x674e06);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B674e09:{NFSU2_TR(0x674e09);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B674e0b:{NFSU2_TR(0x674e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674e0e:{NFSU2_TR(0x674e0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B674e11:{NFSU2_TR(0x674e11);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674d84u);}goto L674d84;}}
}
B674e17:L674e17:{c.instructions+=3;NFSU2_TR(0x674e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674e1b:{NFSU2_TR(0x674e1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674e1f:{NFSU2_TR(0x674e1f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L674ebb;}}
}
B674e25:L674e25:{c.instructions+=5;NFSU2_TR(0x674e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674e28:{NFSU2_TR(0x674e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B674e2b:{NFSU2_TR(0x674e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674e2e:{NFSU2_TR(0x674e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B674e31:{NFSU2_TR(0x674e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674e34:L674e34:{c.instructions+=6;NFSU2_TR(0x674e34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B674e36:{NFSU2_TR(0x674e36);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B674e39:{NFSU2_TR(0x674e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674e3d:{NFSU2_TR(0x674e3d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674e41:{NFSU2_TR(0x674e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B674e44:{NFSU2_TR(0x674e44);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L674ea9;}}
}
B674e46:L674e46:{c.instructions+=5;NFSU2_TR(0x674e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B674e49:{NFSU2_TR(0x674e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B674e4c:{NFSU2_TR(0x674e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B674e4f:{NFSU2_TR(0x674e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674e52:{NFSU2_TR(0x674e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674e55:L674e55:{c.instructions+=6;NFSU2_TR(0x674e55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B674e58:{NFSU2_TR(0x674e58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B674e5a:{NFSU2_TR(0x674e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B674e5d:{NFSU2_TR(0x674e5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B674e60:{NFSU2_TR(0x674e60);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674e63:{NFSU2_TR(0x674e63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674ec5;}}
}
B674e65:L674e65:{c.instructions+=4;NFSU2_TR(0x674e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B674e68:{NFSU2_TR(0x674e68);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B674e6b:{NFSU2_TR(0x674e6b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B674e6f:{NFSU2_TR(0x674e6f);
if(r1(R+518)){{goto L674e8d;}}
}
B674e71:L674e71:{c.instructions+=5;NFSU2_TR(0x674e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B674e74:{NFSU2_TR(0x674e74);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B674e77:{NFSU2_TR(0x674e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B674e7a:{NFSU2_TR(0x674e7a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674e7d:{NFSU2_TR(0x674e7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674ec5;}}
}
B674e7f:L674e7f:{c.instructions+=5;NFSU2_TR(0x674e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B674e82:{NFSU2_TR(0x674e82);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x3ull))));
}
B674e85:{NFSU2_TR(0x674e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B674e88:{NFSU2_TR(0x674e88);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674e8b:{NFSU2_TR(0x674e8b);
{goto L674e93;}
}
B674e8d:L674e8d:{c.instructions+=2;NFSU2_TR(0x674e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B674e90:{NFSU2_TR(0x674e90);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674e93:L674e93:{c.instructions+=1;NFSU2_TR(0x674e93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674ec5;}}
}
B674e95:L674e95:{c.instructions+=7;NFSU2_TR(0x674e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B674e98:{NFSU2_TR(0x674e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674e9b:{NFSU2_TR(0x674e9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B674e9e:{NFSU2_TR(0x674e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B674ea1:{NFSU2_TR(0x674ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B674ea4:{NFSU2_TR(0x674ea4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B674ea7:{NFSU2_TR(0x674ea7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674e55u);}goto L674e55;}}
}
B674ea9:L674ea9:{c.instructions+=5;NFSU2_TR(0x674ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674eac:{NFSU2_TR(0x674eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674eaf:{NFSU2_TR(0x674eaf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B674eb2:{NFSU2_TR(0x674eb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B674eb5:{NFSU2_TR(0x674eb5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674e34u);}goto L674e34;}}
}
B674ebb:L674ebb:{c.instructions+=2;NFSU2_TR(0x674ebb);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B674ebd:{NFSU2_TR(0x674ebd);
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
B674ebe:L674ebe:{c.instructions+=2;NFSU2_TR(0x674ebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B674ebf:{NFSU2_TR(0x674ebf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B674ec0:L674ec0:{c.instructions+=3;NFSU2_TR(0x674ec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B674ec1:{NFSU2_TR(0x674ec1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B674ec2:{NFSU2_TR(0x674ec2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B674ec5:L674ec5:{c.instructions+=2;NFSU2_TR(0x674ec5);
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
B674ec7:{NFSU2_TR(0x674ec7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674ebeu);}goto L674ebe;}
}
B674ec9:L674ec9:{c.instructions+=11;NFSU2_TR(0x674ec9);
__builtin_memmove((R+28),(R+28),4);
}
B674ecb:{NFSU2_TR(0x674ecb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674ecc:{NFSU2_TR(0x674ecc);
__builtin_memmove((R+20),(R+16),4);
}
B674ece:{NFSU2_TR(0x674ece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B674ed1:{NFSU2_TR(0x674ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674ed5:{NFSU2_TR(0x674ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674ed9:{NFSU2_TR(0x674ed9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674eda:{NFSU2_TR(0x674eda);
__builtin_memmove((R+12),(R+4),4);
}
B674edc:{NFSU2_TR(0x674edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674edf:{NFSU2_TR(0x674edf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B674ee1:{NFSU2_TR(0x674ee1);
if(r1(R+518)){{goto L674fd8;}}
}
B674ee7:L674ee7:{c.instructions+=2;NFSU2_TR(0x674ee7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674eeb:{NFSU2_TR(0x674eeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674fd8;}}
}
B674ef1:L674ef1:{c.instructions+=4;NFSU2_TR(0x674ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674ef4:{NFSU2_TR(0x674ef4);
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
B674ef6:{NFSU2_TR(0x674ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674ef9:{NFSU2_TR(0x674ef9);
if(r1(R+518)){{goto L674fd3;}}
}
B674eff:L674eff:{c.instructions+=2;NFSU2_TR(0x674eff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674f00:{NFSU2_TR(0x674f00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674f01:L674f01:{c.instructions+=4;NFSU2_TR(0x674f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674f04:{NFSU2_TR(0x674f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B674f07:{NFSU2_TR(0x674f07);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B674f09:{NFSU2_TR(0x674f09);
if(r1(R+518)){{goto L674fc0;}}
}
B674f0f:L674f0f:{c.instructions+=2;NFSU2_TR(0x674f0f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674f13:{NFSU2_TR(0x674f13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674fc0;}}
}
B674f19:L674f19:{c.instructions+=2;NFSU2_TR(0x674f19);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674f1d:{NFSU2_TR(0x674f1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674fc0;}}
}
B674f23:L674f23:{c.instructions+=3;NFSU2_TR(0x674f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674f26:{NFSU2_TR(0x674f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B674f29:{NFSU2_TR(0x674f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674f2c:L674f2c:{c.instructions+=4;NFSU2_TR(0x674f2c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B674f2e:{NFSU2_TR(0x674f2e);
__builtin_memmove((R+4),(R+8),1);
}
B674f30:{NFSU2_TR(0x674f30);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B674f32:{NFSU2_TR(0x674f32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674f4e;}}
}
B674f34:L674f34:{c.instructions+=2;NFSU2_TR(0x674f34);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B674f36:{NFSU2_TR(0x674f36);
if(r1(R+518)){{goto L674f4a;}}
}
B674f38:L674f38:{c.instructions+=4;NFSU2_TR(0x674f38);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B674f3b:{NFSU2_TR(0x674f3b);
__builtin_memmove((R+4),(R+8),1);
}
B674f3d:{NFSU2_TR(0x674f3d);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B674f40:{NFSU2_TR(0x674f40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674f4e;}}
}
B674f42:L674f42:{c.instructions+=6;NFSU2_TR(0x674f42);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B674f43:{NFSU2_TR(0x674f43);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B674f44:{NFSU2_TR(0x674f44);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B674f45:{NFSU2_TR(0x674f45);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B674f46:{NFSU2_TR(0x674f46);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B674f48:{NFSU2_TR(0x674f48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674f2cu);}goto L674f2c;}}
}
B674f4a:L674f4a:{c.instructions+=2;NFSU2_TR(0x674f4a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B674f4c:{NFSU2_TR(0x674f4c);
{goto L674f53;}
}
B674f4e:L674f4e:{c.instructions+=2;NFSU2_TR(0x674f4e);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B674f50:{NFSU2_TR(0x674f50);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B674f53:L674f53:{c.instructions+=2;NFSU2_TR(0x674f53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B674f55:{NFSU2_TR(0x674f55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674fc0;}}
}
B674f57:L674f57:{c.instructions+=3;NFSU2_TR(0x674f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B674f5a:{NFSU2_TR(0x674f5a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674f5d:{NFSU2_TR(0x674f5d);
if(r1(R+518)){{goto L674fc0;}}
}
B674f5f:L674f5f:{c.instructions+=2;NFSU2_TR(0x674f5f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B674f63:{NFSU2_TR(0x674f63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674fc0;}}
}
B674f65:L674f65:{c.instructions+=4;NFSU2_TR(0x674f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674f68:{NFSU2_TR(0x674f68);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B674f6a:{NFSU2_TR(0x674f6a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674f6c:{NFSU2_TR(0x674f6c);
if(r1(R+518)){{goto L674f87;}}
}
B674f6e:L674f6e:{c.instructions+=5;NFSU2_TR(0x674f6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B674f71:{NFSU2_TR(0x674f71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674f72:{NFSU2_TR(0x674f72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674f73:{NFSU2_TR(0x674f73);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B674f76:{NFSU2_TR(0x674f76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x674f7bull));
TAIL_STATIC(0x672277u,672);
}
B674f7b:L674f7b:{c.instructions+=2;NFSU2_TR(0x674f7b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B674f7d:{NFSU2_TR(0x674f7d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L674f84;}}
}
B674f7f:L674f7f:{c.instructions+=2;NFSU2_TR(0x674f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B674f82:{NFSU2_TR(0x674f82);
{goto L674f87;}
}
B674f84:L674f84:{c.instructions+=1;NFSU2_TR(0x674f84);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B674f87:L674f87:{c.instructions+=4;NFSU2_TR(0x674f87);
__builtin_memmove((R+0),(R+4),4);
}
B674f89:{NFSU2_TR(0x674f89);
w4(R+8,u32(0xffff0000ull));
}
B674f8e:{NFSU2_TR(0x674f8e);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B674f90:{NFSU2_TR(0x674f90);
if(r1(R+518)){{goto L674f9b;}}
}
B674f92:L674f92:{c.instructions+=4;NFSU2_TR(0x674f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B674f95:{NFSU2_TR(0x674f95);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B674f97:{NFSU2_TR(0x674f97);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674f99:{NFSU2_TR(0x674f99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674fc0;}}
}
B674f9b:L674f9b:{c.instructions+=4;NFSU2_TR(0x674f9b);
__builtin_memmove((R+0),(R+4),4);
}
B674f9d:{NFSU2_TR(0x674f9d);
w4(R+8,u32(0xffffull));
}
B674fa2:{NFSU2_TR(0x674fa2);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B674fa4:{NFSU2_TR(0x674fa4);
if(r1(R+518)){{goto L674faf;}}
}
B674fa6:L674fa6:{c.instructions+=4;NFSU2_TR(0x674fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B674fa9:{NFSU2_TR(0x674fa9);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B674fab:{NFSU2_TR(0x674fab);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B674fad:{NFSU2_TR(0x674fad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L674fc0;}}
}
B674faf:L674faf:{c.instructions+=2;NFSU2_TR(0x674faf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674fb3:{NFSU2_TR(0x674fb3);
if(r1(R+518)){{goto L674fba;}}
}
B674fb5:L674fb5:{c.instructions+=2;NFSU2_TR(0x674fb5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B674fb8:{NFSU2_TR(0x674fb8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L674fc0;}}
}
B674fba:L674fba:{c.instructions+=2;NFSU2_TR(0x674fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674fbd:{NFSU2_TR(0x674fbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674fc0:L674fc0:{c.instructions+=5;NFSU2_TR(0x674fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674fc3:{NFSU2_TR(0x674fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674fc6:{NFSU2_TR(0x674fc6);
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
B674fc8:{NFSU2_TR(0x674fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B674fcb:{NFSU2_TR(0x674fcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x674f01u);}goto L674f01;}}
}
B674fd1:L674fd1:{c.instructions+=2;NFSU2_TR(0x674fd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B674fd2:{NFSU2_TR(0x674fd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B674fd3:L674fd3:{c.instructions+=2;NFSU2_TR(0x674fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674fd6:{NFSU2_TR(0x674fd6);
{goto L674fda;}
}
B674fd8:L674fd8:{c.instructions+=1;NFSU2_TR(0x674fd8);
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
B674fda:L674fda:{c.instructions+=3;NFSU2_TR(0x674fda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B674fdb:{NFSU2_TR(0x674fdb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B674fdc:{NFSU2_TR(0x674fdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B674fdf:L674fdf:{c.instructions+=12;NFSU2_TR(0x674fdf);
__builtin_memmove((R+28),(R+28),4);
}
B674fe1:{NFSU2_TR(0x674fe1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674fe2:{NFSU2_TR(0x674fe2);
__builtin_memmove((R+20),(R+16),4);
}
B674fe4:{NFSU2_TR(0x674fe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B674fe7:{NFSU2_TR(0x674fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674feb:{NFSU2_TR(0x674feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674fef:{NFSU2_TR(0x674fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B674ff3:{NFSU2_TR(0x674ff3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B674ff4:{NFSU2_TR(0x674ff4);
__builtin_memmove((R+12),(R+4),4);
}
B674ff6:{NFSU2_TR(0x674ff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B674ff9:{NFSU2_TR(0x674ff9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B674ffb:{NFSU2_TR(0x674ffb);
if(r1(R+518)){TAIL_STATIC(0x6750f4u,675);}
TAIL_STATIC(0x675001u,675);
}
XIT:NFSU2_TR_EXIT(0x674,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
