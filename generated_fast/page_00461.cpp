#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_45d(u8* __restrict R,Cpu& c);
u32 body_45e(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x461,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x461,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_461(u8* __restrict R,Cpu& c);
u32 page_461(Cpu& c){return body_461(c.regs.data(),c);}
__attribute__((noinline)) u32 body_461(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x461000:goto L461000;
case 0x461001:c.instructions+=3;goto B461001;
case 0x461007:c.instructions+=2;goto B461007;
case 0x461009:c.instructions+=1;goto B461009;
case 0x46100b:goto L46100b;
case 0x46100d:c.instructions+=3;goto B46100d;
case 0x46100f:c.instructions+=2;goto B46100f;
case 0x461017:c.instructions+=1;goto B461017;
case 0x461019:goto L461019;
case 0x46101d:c.instructions+=3;goto B46101d;
case 0x46101e:c.instructions+=2;goto B46101e;
case 0x461020:c.instructions+=1;goto B461020;
case 0x461025:goto L461025;
case 0x46102a:c.instructions+=1;goto B46102a;
case 0x46102c:goto L46102c;
case 0x46102e:c.instructions+=2;goto B46102e;
case 0x46102f:c.instructions+=1;goto B46102f;
case 0x461030:goto L461030;
case 0x461032:c.instructions+=2;goto B461032;
case 0x461033:c.instructions+=1;goto B461033;
case 0x461040:goto L461040;
case 0x461045:c.instructions+=1;goto B461045;
case 0x461050:goto L461050;
case 0x461055:c.instructions+=1;goto B461055;
case 0x461060:goto L461060;
case 0x461065:c.instructions+=4;goto B461065;
case 0x461066:c.instructions+=3;goto B461066;
case 0x46106b:c.instructions+=2;goto B46106b;
case 0x461072:c.instructions+=1;goto B461072;
case 0x461080:goto L461080;
case 0x461084:c.instructions+=2;goto B461084;
case 0x461087:c.instructions+=1;goto B461087;
case 0x461089:goto L461089;
case 0x46108a:c.instructions+=1;goto B46108a;
case 0x46108c:goto L46108c;
case 0x46108f:c.instructions+=1;goto B46108f;
case 0x461092:goto L461092;
case 0x461097:c.instructions+=1;goto B461097;
case 0x46109a:goto L46109a;
case 0x46109f:c.instructions+=1;goto B46109f;
case 0x4610b0:goto L4610b0;
case 0x4610b1:c.instructions+=6;goto B4610b1;
case 0x4610b5:c.instructions+=5;goto B4610b5;
case 0x4610b7:c.instructions+=4;goto B4610b7;
case 0x4610b8:c.instructions+=3;goto B4610b8;
case 0x4610ba:c.instructions+=2;goto B4610ba;
case 0x4610bc:c.instructions+=1;goto B4610bc;
case 0x4610bf:goto L4610bf;
case 0x4610c1:c.instructions+=4;goto B4610c1;
case 0x4610c4:c.instructions+=3;goto B4610c4;
case 0x4610c9:c.instructions+=2;goto B4610c9;
case 0x4610cc:c.instructions+=1;goto B4610cc;
case 0x4610ce:goto L4610ce;
case 0x4610d1:c.instructions+=1;goto B4610d1;
case 0x4610d3:goto L4610d3;
case 0x4610d9:c.instructions+=3;goto B4610d9;
case 0x4610da:c.instructions+=2;goto B4610da;
case 0x4610db:c.instructions+=1;goto B4610db;
case 0x4610de:goto L4610de;
case 0x4610e4:goto L4610e4;
case 0x4610e5:c.instructions+=2;goto B4610e5;
case 0x4610e6:c.instructions+=1;goto B4610e6;
case 0x4610f0:goto L4610f0;
case 0x4610f1:c.instructions+=8;goto B4610f1;
case 0x4610f2:c.instructions+=7;goto B4610f2;
case 0x4610f4:c.instructions+=6;goto B4610f4;
case 0x4610fa:c.instructions+=5;goto B4610fa;
case 0x461100:c.instructions+=4;goto B461100;
case 0x461102:c.instructions+=3;goto B461102;
case 0x461103:c.instructions+=2;goto B461103;
case 0x461109:c.instructions+=1;goto B461109;
case 0x46110c:goto L46110c;
case 0x461112:c.instructions+=9;goto B461112;
case 0x461118:c.instructions+=8;goto B461118;
case 0x46111a:c.instructions+=7;goto B46111a;
case 0x461120:c.instructions+=6;goto B461120;
case 0x461123:c.instructions+=5;goto B461123;
case 0x461126:c.instructions+=4;goto B461126;
case 0x461128:c.instructions+=3;goto B461128;
case 0x46112b:c.instructions+=2;goto B46112b;
case 0x46112f:c.instructions+=1;goto B46112f;
case 0x461135:goto L461135;
case 0x461137:c.instructions+=3;goto B461137;
case 0x461139:c.instructions+=2;goto B461139;
case 0x46113b:c.instructions+=1;goto B46113b;
case 0x46113e:goto L46113e;
case 0x461144:c.instructions+=9;goto B461144;
case 0x46114a:c.instructions+=8;goto B46114a;
case 0x46114d:c.instructions+=7;goto B46114d;
case 0x461153:c.instructions+=6;goto B461153;
case 0x461156:c.instructions+=5;goto B461156;
case 0x461159:c.instructions+=4;goto B461159;
case 0x46115f:c.instructions+=3;goto B46115f;
case 0x461161:c.instructions+=2;goto B461161;
case 0x461166:c.instructions+=1;goto B461166;
case 0x461168:goto L461168;
case 0x46116d:c.instructions+=1;goto B46116d;
case 0x46116f:goto L46116f;
case 0x461171:c.instructions+=1;goto B461171;
case 0x461173:goto L461173;
case 0x461175:goto L461175;
case 0x461178:c.instructions+=4;goto B461178;
case 0x46117a:c.instructions+=3;goto B46117a;
case 0x46117f:c.instructions+=2;goto B46117f;
case 0x461185:c.instructions+=1;goto B461185;
case 0x461187:goto L461187;
case 0x46118c:c.instructions+=1;goto B46118c;
case 0x46118e:goto L46118e;
case 0x461190:c.instructions+=1;goto B461190;
case 0x461192:goto L461192;
case 0x461194:goto L461194;
case 0x461198:c.instructions+=2;goto B461198;
case 0x46119b:c.instructions+=1;goto B46119b;
case 0x4611a0:goto L4611a0;
case 0x4611a2:c.instructions+=2;goto B4611a2;
case 0x4611a8:c.instructions+=1;goto B4611a8;
case 0x4611aa:goto L4611aa;
case 0x4611ac:c.instructions+=1;goto B4611ac;
case 0x4611ae:goto L4611ae;
case 0x4611b3:c.instructions+=1;goto B4611b3;
case 0x4611b5:goto L4611b5;
case 0x4611ba:goto L4611ba;
case 0x4611bc:c.instructions+=4;goto B4611bc;
case 0x4611bf:c.instructions+=3;goto B4611bf;
case 0x4611c5:c.instructions+=2;goto B4611c5;
case 0x4611c7:c.instructions+=1;goto B4611c7;
case 0x4611cc:goto L4611cc;
case 0x4611d2:c.instructions+=5;goto B4611d2;
case 0x4611d8:c.instructions+=4;goto B4611d8;
case 0x4611dc:c.instructions+=3;goto B4611dc;
case 0x4611e0:c.instructions+=2;goto B4611e0;
case 0x4611e6:c.instructions+=1;goto B4611e6;
case 0x4611eb:goto L4611eb;
case 0x4611f0:c.instructions+=2;goto B4611f0;
case 0x4611f6:c.instructions+=1;goto B4611f6;
case 0x4611f8:goto L4611f8;
case 0x4611fd:c.instructions+=1;goto B4611fd;
case 0x4611ff:goto L4611ff;
case 0x461204:c.instructions+=1;goto B461204;
case 0x461206:goto L461206;
case 0x46120b:goto L46120b;
case 0x46120e:c.instructions+=3;goto B46120e;
case 0x461214:c.instructions+=2;goto B461214;
case 0x461216:c.instructions+=1;goto B461216;
case 0x461219:goto L461219;
case 0x46121f:c.instructions+=1;goto B46121f;
case 0x461224:goto L461224;
case 0x461226:c.instructions+=2;goto B461226;
case 0x46122c:c.instructions+=1;goto B46122c;
case 0x46122e:goto L46122e;
case 0x461230:c.instructions+=1;goto B461230;
case 0x461232:goto L461232;
case 0x461237:c.instructions+=1;goto B461237;
case 0x461239:goto L461239;
case 0x46123e:goto L46123e;
case 0x461241:c.instructions+=5;goto B461241;
case 0x461247:c.instructions+=4;goto B461247;
case 0x46124d:c.instructions+=3;goto B46124d;
case 0x46124f:c.instructions+=2;goto B46124f;
case 0x461255:c.instructions+=1;goto B461255;
case 0x461257:goto L461257;
case 0x461259:c.instructions+=1;goto B461259;
case 0x46125b:goto L46125b;
case 0x461260:c.instructions+=1;goto B461260;
case 0x461262:goto L461262;
case 0x461267:goto L461267;
case 0x46126a:c.instructions+=4;goto B46126a;
case 0x46126c:c.instructions+=3;goto B46126c;
case 0x46126e:c.instructions+=2;goto B46126e;
case 0x461270:c.instructions+=1;goto B461270;
case 0x461273:goto L461273;
case 0x461275:c.instructions+=2;goto B461275;
case 0x46127b:c.instructions+=1;goto B46127b;
case 0x46127d:goto L46127d;
case 0x46127f:c.instructions+=1;goto B46127f;
case 0x461281:goto L461281;
case 0x461286:c.instructions+=1;goto B461286;
case 0x461288:goto L461288;
case 0x46128d:goto L46128d;
case 0x461290:c.instructions+=5;goto B461290;
case 0x461296:c.instructions+=4;goto B461296;
case 0x46129c:c.instructions+=3;goto B46129c;
case 0x46129e:c.instructions+=2;goto B46129e;
case 0x4612a4:c.instructions+=1;goto B4612a4;
case 0x4612a6:goto L4612a6;
case 0x4612a8:c.instructions+=1;goto B4612a8;
case 0x4612aa:goto L4612aa;
case 0x4612af:c.instructions+=1;goto B4612af;
case 0x4612b1:goto L4612b1;
case 0x4612b6:goto L4612b6;
case 0x4612b9:c.instructions+=4;goto B4612b9;
case 0x4612bf:c.instructions+=3;goto B4612bf;
case 0x4612c1:c.instructions+=2;goto B4612c1;
case 0x4612c3:c.instructions+=1;goto B4612c3;
case 0x4612c5:goto L4612c5;
case 0x4612c8:c.instructions+=2;goto B4612c8;
case 0x4612c9:c.instructions+=1;goto B4612c9;
case 0x4612ce:goto L4612ce;
case 0x4612d4:c.instructions+=4;goto B4612d4;
case 0x4612d6:c.instructions+=3;goto B4612d6;
case 0x4612d8:c.instructions+=2;goto B4612d8;
case 0x4612e0:c.instructions+=1;goto B4612e0;
case 0x4612e2:goto L4612e2;
case 0x4612e6:c.instructions+=2;goto B4612e6;
case 0x4612e7:c.instructions+=1;goto B4612e7;
case 0x4612ec:goto L4612ec;
case 0x4612f1:c.instructions+=1;goto B4612f1;
case 0x4612f5:goto L4612f5;
case 0x4612f6:c.instructions+=3;goto B4612f6;
case 0x4612f7:c.instructions+=2;goto B4612f7;
case 0x4612f8:c.instructions+=1;goto B4612f8;
case 0x461300:goto L461300;
case 0x461302:c.instructions+=12;goto B461302;
case 0x461307:c.instructions+=11;goto B461307;
case 0x46130d:c.instructions+=10;goto B46130d;
case 0x46130e:c.instructions+=9;goto B46130e;
case 0x461315:c.instructions+=8;goto B461315;
case 0x461318:c.instructions+=7;goto B461318;
case 0x461319:c.instructions+=6;goto B461319;
case 0x46131a:c.instructions+=5;goto B46131a;
case 0x46131e:c.instructions+=4;goto B46131e;
case 0x46131f:c.instructions+=3;goto B46131f;
case 0x461320:c.instructions+=2;goto B461320;
case 0x461322:c.instructions+=1;goto B461322;
case 0x461327:goto L461327;
case 0x46132a:c.instructions+=1;goto B46132a;
case 0x46132f:goto L46132f;
case 0x461333:c.instructions+=9;goto B461333;
case 0x461335:c.instructions+=8;goto B461335;
case 0x461339:c.instructions+=7;goto B461339;
case 0x46133a:c.instructions+=6;goto B46133a;
case 0x46133e:c.instructions+=5;goto B46133e;
case 0x461342:c.instructions+=4;goto B461342;
case 0x461346:c.instructions+=3;goto B461346;
case 0x461348:c.instructions+=2;goto B461348;
case 0x46134a:c.instructions+=1;goto B46134a;
case 0x46134c:goto L46134c;
case 0x46134e:c.instructions+=1;goto B46134e;
case 0x461353:goto L461353;
case 0x461357:c.instructions+=3;goto B461357;
case 0x461359:c.instructions+=2;goto B461359;
case 0x46135d:c.instructions+=1;goto B46135d;
case 0x461363:goto L461363;
case 0x461369:c.instructions+=4;goto B461369;
case 0x46136f:c.instructions+=3;goto B46136f;
case 0x461372:c.instructions+=2;goto B461372;
case 0x461374:c.instructions+=1;goto B461374;
case 0x461376:goto L461376;
case 0x461378:c.instructions+=1;goto B461378;
case 0x46137a:goto L46137a;
case 0x46137d:c.instructions+=1;goto B46137d;
case 0x46137f:goto L46137f;
case 0x461384:goto L461384;
case 0x461385:c.instructions+=31;goto B461385;
case 0x461388:c.instructions+=30;goto B461388;
case 0x461389:c.instructions+=29;goto B461389;
case 0x46138a:c.instructions+=28;goto B46138a;
case 0x46138f:c.instructions+=27;goto B46138f;
case 0x461391:c.instructions+=26;goto B461391;
case 0x461394:c.instructions+=25;goto B461394;
case 0x461397:c.instructions+=24;goto B461397;
case 0x46139a:c.instructions+=23;goto B46139a;
case 0x46139d:c.instructions+=22;goto B46139d;
case 0x4613a0:c.instructions+=21;goto B4613a0;
case 0x4613a3:c.instructions+=20;goto B4613a3;
case 0x4613a6:c.instructions+=19;goto B4613a6;
case 0x4613a9:c.instructions+=18;goto B4613a9;
case 0x4613ac:c.instructions+=17;goto B4613ac;
case 0x4613af:c.instructions+=16;goto B4613af;
case 0x4613b2:c.instructions+=15;goto B4613b2;
case 0x4613b5:c.instructions+=14;goto B4613b5;
case 0x4613b8:c.instructions+=13;goto B4613b8;
case 0x4613bb:c.instructions+=12;goto B4613bb;
case 0x4613be:c.instructions+=11;goto B4613be;
case 0x4613c1:c.instructions+=10;goto B4613c1;
case 0x4613c4:c.instructions+=9;goto B4613c4;
case 0x4613c7:c.instructions+=8;goto B4613c7;
case 0x4613ca:c.instructions+=7;goto B4613ca;
case 0x4613cd:c.instructions+=6;goto B4613cd;
case 0x4613d0:c.instructions+=5;goto B4613d0;
case 0x4613d3:c.instructions+=4;goto B4613d3;
case 0x4613d6:c.instructions+=3;goto B4613d6;
case 0x4613d9:c.instructions+=2;goto B4613d9;
case 0x4613dc:c.instructions+=1;goto B4613dc;
case 0x4613e1:goto L4613e1;
case 0x4613e4:c.instructions+=2;goto B4613e4;
case 0x4613e6:c.instructions+=1;goto B4613e6;
case 0x4613e8:goto L4613e8;
case 0x4613ed:c.instructions+=2;goto B4613ed;
case 0x4613f2:c.instructions+=1;goto B4613f2;
case 0x4613f7:goto L4613f7;
case 0x4613f8:c.instructions+=3;goto B4613f8;
case 0x4613f9:c.instructions+=2;goto B4613f9;
case 0x4613fe:c.instructions+=1;goto B4613fe;
case 0x461403:goto L461403;
case 0x461406:goto L461406;
case 0x461407:c.instructions+=1;goto B461407;
case 0x461409:goto L461409;
case 0x46140b:goto L46140b;
case 0x461413:c.instructions+=2;goto B461413;
case 0x461419:c.instructions+=1;goto B461419;
case 0x46141e:goto L46141e;
case 0x461424:c.instructions+=5;goto B461424;
case 0x461426:c.instructions+=4;goto B461426;
case 0x461428:c.instructions+=3;goto B461428;
case 0x46142a:c.instructions+=2;goto B46142a;
case 0x46142e:c.instructions+=1;goto B46142e;
case 0x461430:goto L461430;
case 0x461434:c.instructions+=2;goto B461434;
case 0x461435:c.instructions+=1;goto B461435;
case 0x46143a:goto L46143a;
case 0x46143f:c.instructions+=8;goto B46143f;
case 0x461440:c.instructions+=7;goto B461440;
case 0x461441:c.instructions+=6;goto B461441;
case 0x461445:c.instructions+=5;goto B461445;
case 0x461446:c.instructions+=4;goto B461446;
case 0x46144a:c.instructions+=3;goto B46144a;
case 0x461451:c.instructions+=2;goto B461451;
case 0x461454:c.instructions+=1;goto B461454;
case 0x461455:goto L461455;
case 0x461459:c.instructions+=7;goto B461459;
case 0x46145a:c.instructions+=6;goto B46145a;
case 0x46145e:c.instructions+=5;goto B46145e;
case 0x46145f:c.instructions+=4;goto B46145f;
case 0x461460:c.instructions+=3;goto B461460;
case 0x461467:c.instructions+=2;goto B461467;
case 0x46146a:c.instructions+=1;goto B46146a;
case 0x461470:goto L461470;
case 0x461475:c.instructions+=1;goto B461475;
case 0x461480:goto L461480;
case 0x461485:c.instructions+=1;goto B461485;
case 0x461490:goto L461490;
case 0x461494:c.instructions+=2;goto B461494;
case 0x461497:c.instructions+=1;goto B461497;
case 0x461499:goto L461499;
case 0x4614a0:goto L4614a0;
case 0x4614a5:c.instructions+=1;goto B4614a5;
case 0x4614a8:goto L4614a8;
case 0x4614ad:c.instructions+=1;goto B4614ad;
case 0x4614b0:goto L4614b0;
case 0x4614b5:c.instructions+=1;goto B4614b5;
case 0x4614b8:goto L4614b8;
case 0x4614bd:c.instructions+=1;goto B4614bd;
case 0x4614c0:goto L4614c0;
case 0x4614c3:c.instructions+=1;goto B4614c3;
case 0x4614e0:goto L4614e0;
case 0x4614e1:c.instructions+=6;goto B4614e1;
case 0x4614e5:c.instructions+=5;goto B4614e5;
case 0x4614e7:c.instructions+=4;goto B4614e7;
case 0x4614e8:c.instructions+=3;goto B4614e8;
case 0x4614ea:c.instructions+=2;goto B4614ea;
case 0x4614ec:c.instructions+=1;goto B4614ec;
case 0x4614ef:goto L4614ef;
case 0x4614f1:c.instructions+=5;goto B4614f1;
case 0x4614f4:c.instructions+=4;goto B4614f4;
case 0x4614f9:c.instructions+=3;goto B4614f9;
case 0x4614fc:c.instructions+=2;goto B4614fc;
case 0x4614ff:c.instructions+=1;goto B4614ff;
case 0x461501:goto L461501;
case 0x461508:goto L461508;
case 0x46150e:c.instructions+=3;goto B46150e;
case 0x46150f:c.instructions+=2;goto B46150f;
case 0x461510:c.instructions+=1;goto B461510;
case 0x461513:goto L461513;
case 0x461519:c.instructions+=3;goto B461519;
case 0x46151a:c.instructions+=2;goto B46151a;
case 0x46151b:c.instructions+=1;goto B46151b;
case 0x46151e:goto L46151e;
case 0x461524:c.instructions+=3;goto B461524;
case 0x461525:c.instructions+=2;goto B461525;
case 0x461526:c.instructions+=1;goto B461526;
case 0x461529:goto L461529;
case 0x46152f:goto L46152f;
case 0x461530:c.instructions+=2;goto B461530;
case 0x461531:c.instructions+=1;goto B461531;
case 0x461550:goto L461550;
case 0x461554:c.instructions+=2;goto B461554;
case 0x46155b:c.instructions+=1;goto B46155b;
case 0x461560:goto L461560;
case 0x461564:c.instructions+=2;goto B461564;
case 0x46156b:c.instructions+=1;goto B46156b;
case 0x461570:goto L461570;
case 0x461575:c.instructions+=6;goto B461575;
case 0x461576:c.instructions+=5;goto B461576;
case 0x46157b:c.instructions+=4;goto B46157b;
case 0x461582:c.instructions+=3;goto B461582;
case 0x461588:c.instructions+=2;goto B461588;
case 0x46158f:c.instructions+=1;goto B46158f;
case 0x461590:goto L461590;
case 0x461595:c.instructions+=1;goto B461595;
case 0x4615a0:goto L4615a0;
case 0x4615a5:c.instructions+=1;goto B4615a5;
case 0x4615b0:goto L4615b0;
case 0x4615b4:c.instructions+=2;goto B4615b4;
case 0x4615b7:c.instructions+=1;goto B4615b7;
case 0x4615b9:goto L4615b9;
case 0x4615ba:c.instructions+=1;goto B4615ba;
case 0x4615bc:goto L4615bc;
case 0x4615bf:c.instructions+=1;goto B4615bf;
case 0x4615c2:goto L4615c2;
case 0x4615c7:c.instructions+=1;goto B4615c7;
case 0x4615ca:goto L4615ca;
case 0x4615cf:c.instructions+=1;goto B4615cf;
case 0x4615dd:goto L4615dd;
case 0x4615de:c.instructions+=8;goto B4615de;
case 0x4615df:c.instructions+=7;goto B4615df;
case 0x4615e0:c.instructions+=6;goto B4615e0;
case 0x4615e1:c.instructions+=5;goto B4615e1;
case 0x4615e2:c.instructions+=4;goto B4615e2;
case 0x4615e3:c.instructions+=3;goto B4615e3;
case 0x4615e5:c.instructions+=2;goto B4615e5;
case 0x4615eb:c.instructions+=1;goto B4615eb;
case 0x4615f0:goto L4615f0;
case 0x4615f3:c.instructions+=1;goto B4615f3;
case 0x4615f5:goto L4615f5;
case 0x4615f7:c.instructions+=3;goto B4615f7;
case 0x4615f9:c.instructions+=2;goto B4615f9;
case 0x4615fb:c.instructions+=1;goto B4615fb;
case 0x4615fe:goto L4615fe;
case 0x461600:c.instructions+=2;goto B461600;
case 0x461602:c.instructions+=1;goto B461602;
case 0x461604:goto L461604;
case 0x461606:c.instructions+=1;goto B461606;
case 0x461608:goto L461608;
case 0x46160d:c.instructions+=1;goto B46160d;
case 0x46160f:goto L46160f;
case 0x461614:goto L461614;
case 0x461617:c.instructions+=4;goto B461617;
case 0x461619:c.instructions+=3;goto B461619;
case 0x46161b:c.instructions+=2;goto B46161b;
case 0x46161d:c.instructions+=1;goto B46161d;
case 0x46161f:goto L46161f;
case 0x461622:c.instructions+=2;goto B461622;
case 0x461623:c.instructions+=1;goto B461623;
case 0x461628:goto L461628;
case 0x46162b:c.instructions+=2;goto B46162b;
case 0x46162c:c.instructions+=1;goto B46162c;
case 0x46162e:goto L46162e;
case 0x461634:c.instructions+=2;goto B461634;
case 0x461636:c.instructions+=1;goto B461636;
case 0x461638:goto L461638;
case 0x46163a:c.instructions+=3;goto B46163a;
case 0x46163c:c.instructions+=2;goto B46163c;
case 0x46163e:c.instructions+=1;goto B46163e;
case 0x461641:goto L461641;
case 0x461643:c.instructions+=2;goto B461643;
case 0x461649:c.instructions+=1;goto B461649;
case 0x46164b:goto L46164b;
case 0x46164d:c.instructions+=1;goto B46164d;
case 0x46164f:goto L46164f;
case 0x461654:c.instructions+=1;goto B461654;
case 0x461656:goto L461656;
case 0x46165b:goto L46165b;
case 0x46165e:c.instructions+=4;goto B46165e;
case 0x461664:c.instructions+=3;goto B461664;
case 0x461666:c.instructions+=2;goto B461666;
case 0x461668:c.instructions+=1;goto B461668;
case 0x46166a:goto L46166a;
case 0x46166d:c.instructions+=2;goto B46166d;
case 0x46166e:c.instructions+=1;goto B46166e;
case 0x461673:goto L461673;
case 0x461674:c.instructions+=3;goto B461674;
case 0x461675:c.instructions+=2;goto B461675;
case 0x461676:c.instructions+=1;goto B461676;
case 0x461680:goto L461680;
case 0x461685:c.instructions+=3;goto B461685;
case 0x46168a:c.instructions+=2;goto B46168a;
case 0x46168c:c.instructions+=1;goto B46168c;
case 0x461692:goto L461692;
case 0x461696:c.instructions+=37;goto B461696;
case 0x461698:c.instructions+=36;goto B461698;
case 0x46169b:c.instructions+=35;goto B46169b;
case 0x4616a1:c.instructions+=34;goto B4616a1;
case 0x4616a3:c.instructions+=33;goto B4616a3;
case 0x4616a6:c.instructions+=32;goto B4616a6;
case 0x4616b0:c.instructions+=31;goto B4616b0;
case 0x4616b2:c.instructions+=30;goto B4616b2;
case 0x4616b8:c.instructions+=29;goto B4616b8;
case 0x4616bb:c.instructions+=28;goto B4616bb;
case 0x4616c1:c.instructions+=27;goto B4616c1;
case 0x4616c3:c.instructions+=26;goto B4616c3;
case 0x4616c9:c.instructions+=25;goto B4616c9;
case 0x4616cc:c.instructions+=24;goto B4616cc;
case 0x4616d2:c.instructions+=23;goto B4616d2;
case 0x4616d4:c.instructions+=22;goto B4616d4;
case 0x4616d7:c.instructions+=21;goto B4616d7;
case 0x4616d9:c.instructions+=20;goto B4616d9;
case 0x4616df:c.instructions+=19;goto B4616df;
case 0x4616e1:c.instructions+=18;goto B4616e1;
case 0x4616e4:c.instructions+=17;goto B4616e4;
case 0x4616ea:c.instructions+=16;goto B4616ea;
case 0x4616ec:c.instructions+=15;goto B4616ec;
case 0x4616ef:c.instructions+=14;goto B4616ef;
case 0x4616f5:c.instructions+=13;goto B4616f5;
case 0x4616f7:c.instructions+=12;goto B4616f7;
case 0x4616fa:c.instructions+=11;goto B4616fa;
case 0x461700:c.instructions+=10;goto B461700;
case 0x461702:c.instructions+=9;goto B461702;
case 0x461705:c.instructions+=8;goto B461705;
case 0x46170b:c.instructions+=7;goto B46170b;
case 0x46170d:c.instructions+=6;goto B46170d;
case 0x461710:c.instructions+=5;goto B461710;
case 0x461716:c.instructions+=4;goto B461716;
case 0x461718:c.instructions+=3;goto B461718;
case 0x46171b:c.instructions+=2;goto B46171b;
case 0x461725:c.instructions+=1;goto B461725;
case 0x461727:goto L461727;
case 0x461730:goto L461730;
case 0x461735:c.instructions+=1;goto B461735;
case 0x461740:goto L461740;
case 0x461745:c.instructions+=1;goto B461745;
case 0x461750:goto L461750;
case 0x461756:c.instructions+=12;goto B461756;
case 0x461758:c.instructions+=11;goto B461758;
case 0x46175d:c.instructions+=10;goto B46175d;
case 0x46175e:c.instructions+=9;goto B46175e;
case 0x461765:c.instructions+=8;goto B461765;
case 0x461768:c.instructions+=7;goto B461768;
case 0x461769:c.instructions+=6;goto B461769;
case 0x46176a:c.instructions+=5;goto B46176a;
case 0x46176c:c.instructions+=4;goto B46176c;
case 0x461772:c.instructions+=3;goto B461772;
case 0x461774:c.instructions+=2;goto B461774;
case 0x461776:c.instructions+=1;goto B461776;
case 0x461778:goto L461778;
case 0x46177b:c.instructions+=1;goto B46177b;
case 0x46177e:goto L46177e;
case 0x461783:goto L461783;
case 0x461787:c.instructions+=4;goto B461787;
case 0x461788:c.instructions+=3;goto B461788;
case 0x461789:c.instructions+=2;goto B461789;
case 0x461793:c.instructions+=1;goto B461793;
case 0x461798:goto L461798;
case 0x46179b:c.instructions+=1;goto B46179b;
case 0x4617a0:goto L4617a0;
case 0x4617a4:c.instructions+=8;goto B4617a4;
case 0x4617a8:c.instructions+=7;goto B4617a8;
case 0x4617a9:c.instructions+=6;goto B4617a9;
case 0x4617ad:c.instructions+=5;goto B4617ad;
case 0x4617b1:c.instructions+=4;goto B4617b1;
case 0x4617b5:c.instructions+=3;goto B4617b5;
case 0x4617b7:c.instructions+=2;goto B4617b7;
case 0x4617b9:c.instructions+=1;goto B4617b9;
case 0x4617bb:goto L4617bb;
case 0x4617bd:c.instructions+=1;goto B4617bd;
case 0x4617c2:goto L4617c2;
case 0x4617c6:c.instructions+=3;goto B4617c6;
case 0x4617c8:c.instructions+=2;goto B4617c8;
case 0x4617cc:c.instructions+=1;goto B4617cc;
case 0x4617ce:goto L4617ce;
case 0x4617cf:c.instructions+=11;goto B4617cf;
case 0x4617d2:c.instructions+=10;goto B4617d2;
case 0x4617d3:c.instructions+=9;goto B4617d3;
case 0x4617d4:c.instructions+=8;goto B4617d4;
case 0x4617d9:c.instructions+=7;goto B4617d9;
case 0x4617db:c.instructions+=6;goto B4617db;
case 0x4617de:c.instructions+=5;goto B4617de;
case 0x4617e1:c.instructions+=4;goto B4617e1;
case 0x4617e4:c.instructions+=3;goto B4617e4;
case 0x4617e7:c.instructions+=2;goto B4617e7;
case 0x4617ea:c.instructions+=1;goto B4617ea;
case 0x4617ef:goto L4617ef;
case 0x4617f2:c.instructions+=2;goto B4617f2;
case 0x4617f4:c.instructions+=1;goto B4617f4;
case 0x4617f6:goto L4617f6;
case 0x4617fb:c.instructions+=2;goto B4617fb;
case 0x461800:c.instructions+=1;goto B461800;
case 0x461805:goto L461805;
case 0x461806:c.instructions+=3;goto B461806;
case 0x461807:c.instructions+=2;goto B461807;
case 0x46180c:c.instructions+=1;goto B46180c;
case 0x461811:goto L461811;
case 0x461814:goto L461814;
case 0x461815:c.instructions+=1;goto B461815;
case 0x461817:goto L461817;
case 0x461819:goto L461819;
case 0x46181f:c.instructions+=1;goto B46181f;
case 0x461820:goto L461820;
case 0x461824:c.instructions+=6;goto B461824;
case 0x46182a:c.instructions+=5;goto B46182a;
case 0x46182b:c.instructions+=4;goto B46182b;
case 0x46182c:c.instructions+=3;goto B46182c;
case 0x461833:c.instructions+=2;goto B461833;
case 0x461836:c.instructions+=1;goto B461836;
case 0x461840:goto L461840;
case 0x461846:c.instructions+=2;goto B461846;
case 0x461848:c.instructions+=1;goto B461848;
case 0x46184a:goto L46184a;
case 0x46184f:c.instructions+=7;goto B46184f;
case 0x461859:c.instructions+=6;goto B461859;
case 0x46185f:c.instructions+=5;goto B46185f;
case 0x461862:c.instructions+=4;goto B461862;
case 0x461868:c.instructions+=3;goto B461868;
case 0x46186a:c.instructions+=2;goto B46186a;
case 0x46186c:c.instructions+=1;goto B46186c;
case 0x46186e:goto L46186e;
case 0x461871:c.instructions+=2;goto B461871;
case 0x461872:c.instructions+=1;goto B461872;
case 0x461877:goto L461877;
case 0x461880:goto L461880;
case 0x461885:c.instructions+=3;goto B461885;
case 0x461888:c.instructions+=2;goto B461888;
case 0x46188a:c.instructions+=1;goto B46188a;
case 0x46188f:goto L46188f;
case 0x461890:goto L461890;
case 0x461896:c.instructions+=2;goto B461896;
case 0x461898:c.instructions+=1;goto B461898;
case 0x46189a:goto L46189a;
case 0x4618a0:c.instructions+=2;goto B4618a0;
case 0x4618a2:c.instructions+=1;goto B4618a2;
case 0x4618a4:goto L4618a4;
case 0x4618ab:c.instructions+=1;goto B4618ab;
case 0x4618ac:goto L4618ac;
case 0x4618b3:c.instructions+=1;goto B4618b3;
case 0x4618c0:goto L4618c0;
case 0x4618c1:c.instructions+=5;goto B4618c1;
case 0x4618c2:c.instructions+=4;goto B4618c2;
case 0x4618c4:c.instructions+=3;goto B4618c4;
case 0x4618ca:c.instructions+=2;goto B4618ca;
case 0x4618cc:c.instructions+=1;goto B4618cc;
case 0x4618d2:goto L4618d2;
case 0x4618d4:c.instructions+=3;goto B4618d4;
case 0x4618d6:c.instructions+=2;goto B4618d6;
case 0x4618de:c.instructions+=1;goto B4618de;
case 0x4618e0:goto L4618e0;
case 0x4618e4:c.instructions+=3;goto B4618e4;
case 0x4618e5:c.instructions+=2;goto B4618e5;
case 0x4618e7:c.instructions+=1;goto B4618e7;
case 0x4618ec:goto L4618ec;
case 0x4618f2:c.instructions+=4;goto B4618f2;
case 0x4618f8:c.instructions+=3;goto B4618f8;
case 0x4618fa:c.instructions+=2;goto B4618fa;
case 0x4618fb:c.instructions+=1;goto B4618fb;
case 0x4618fd:goto L4618fd;
case 0x461904:c.instructions+=1;goto B461904;
case 0x461906:goto L461906;
case 0x46190c:c.instructions+=2;goto B46190c;
case 0x46190e:c.instructions+=1;goto B46190e;
case 0x461910:goto L461910;
case 0x461917:c.instructions+=1;goto B461917;
case 0x461919:goto L461919;
case 0x46191b:c.instructions+=4;goto B46191b;
case 0x46191d:c.instructions+=3;goto B46191d;
case 0x46191f:c.instructions+=2;goto B46191f;
case 0x461921:c.instructions+=1;goto B461921;
case 0x461924:goto L461924;
case 0x461926:c.instructions+=2;goto B461926;
case 0x46192c:c.instructions+=1;goto B46192c;
case 0x46192e:goto L46192e;
case 0x461930:c.instructions+=1;goto B461930;
case 0x461932:goto L461932;
case 0x461934:c.instructions+=4;goto B461934;
case 0x461936:c.instructions+=3;goto B461936;
case 0x461938:c.instructions+=2;goto B461938;
case 0x46193a:c.instructions+=1;goto B46193a;
case 0x46193d:goto L46193d;
case 0x46193f:goto L46193f;
case 0x461944:c.instructions+=1;goto B461944;
case 0x461946:goto L461946;
case 0x46194b:goto L46194b;
case 0x46194e:c.instructions+=9;goto B46194e;
case 0x461954:c.instructions+=8;goto B461954;
case 0x46195b:c.instructions+=7;goto B46195b;
case 0x461961:c.instructions+=6;goto B461961;
case 0x461963:c.instructions+=5;goto B461963;
case 0x461965:c.instructions+=4;goto B461965;
case 0x461968:c.instructions+=3;goto B461968;
case 0x461969:c.instructions+=2;goto B461969;
case 0x46196b:c.instructions+=1;goto B46196b;
case 0x46196d:goto L46196d;
case 0x46196f:c.instructions+=1;goto B46196f;
case 0x461971:goto L461971;
case 0x461974:c.instructions+=1;goto B461974;
case 0x461976:goto L461976;
case 0x46197b:goto L46197b;
case 0x46197e:c.instructions+=8;goto B46197e;
case 0x461984:c.instructions+=7;goto B461984;
case 0x46198b:c.instructions+=6;goto B46198b;
case 0x461991:c.instructions+=5;goto B461991;
case 0x461998:c.instructions+=4;goto B461998;
case 0x46199e:c.instructions+=3;goto B46199e;
case 0x4619a0:c.instructions+=2;goto B4619a0;
case 0x4619a2:c.instructions+=1;goto B4619a2;
case 0x4619a4:goto L4619a4;
case 0x4619a7:c.instructions+=2;goto B4619a7;
case 0x4619a8:c.instructions+=1;goto B4619a8;
case 0x4619ad:goto L4619ad;
case 0x4619ae:c.instructions+=2;goto B4619ae;
case 0x4619af:c.instructions+=1;goto B4619af;
case 0x4619b0:goto L4619b0;
case 0x4619b1:c.instructions+=2;goto B4619b1;
case 0x4619b3:c.instructions+=1;goto B4619b3;
case 0x4619b8:goto L4619b8;
case 0x4619be:c.instructions+=3;goto B4619be;
case 0x4619c0:c.instructions+=2;goto B4619c0;
case 0x4619c1:c.instructions+=1;goto B4619c1;
case 0x4619d0:goto L4619d0;
case 0x4619d5:c.instructions+=1;goto B4619d5;
case 0x4619e0:goto L4619e0;
case 0x4619e5:c.instructions+=1;goto B4619e5;
case 0x4619f0:goto L4619f0;
case 0x4619f1:c.instructions+=6;goto B4619f1;
case 0x4619f5:c.instructions+=5;goto B4619f5;
case 0x4619f7:c.instructions+=4;goto B4619f7;
case 0x4619f8:c.instructions+=3;goto B4619f8;
case 0x4619fa:c.instructions+=2;goto B4619fa;
case 0x4619fc:c.instructions+=1;goto B4619fc;
case 0x4619ff:goto L4619ff;
case 0x461a01:c.instructions+=3;goto B461a01;
case 0x461a07:c.instructions+=2;goto B461a07;
case 0x461a0a:c.instructions+=1;goto B461a0a;
case 0x461a0c:goto L461a0c;
case 0x461a12:goto L461a12;
case 0x461a13:c.instructions+=2;goto B461a13;
case 0x461a14:c.instructions+=1;goto B461a14;
case 0x461a20:goto L461a20;
case 0x461a21:c.instructions+=4;goto B461a21;
case 0x461a22:c.instructions+=3;goto B461a22;
case 0x461a28:c.instructions+=2;goto B461a28;
case 0x461a2d:c.instructions+=1;goto B461a2d;
case 0x461a30:goto L461a30;
case 0x461a33:c.instructions+=2;goto B461a33;
case 0x461a35:c.instructions+=1;goto B461a35;
case 0x461a37:goto L461a37;
case 0x461a39:c.instructions+=2;goto B461a39;
case 0x461a3b:c.instructions+=1;goto B461a3b;
case 0x461a3d:goto L461a3d;
case 0x461a3f:c.instructions+=3;goto B461a3f;
case 0x461a41:c.instructions+=2;goto B461a41;
case 0x461a48:c.instructions+=1;goto B461a48;
case 0x461a4a:goto L461a4a;
case 0x461a4c:c.instructions+=2;goto B461a4c;
case 0x461a4e:c.instructions+=1;goto B461a4e;
case 0x461a50:goto L461a50;
case 0x461a56:c.instructions+=3;goto B461a56;
case 0x461a59:c.instructions+=2;goto B461a59;
case 0x461a5a:c.instructions+=1;goto B461a5a;
case 0x461a5c:goto L461a5c;
case 0x461a5d:c.instructions+=2;goto B461a5d;
case 0x461a5e:c.instructions+=1;goto B461a5e;
case 0x461a60:goto L461a60;
case 0x461a65:c.instructions+=1;goto B461a65;
case 0x461a70:goto L461a70;
case 0x461a75:c.instructions+=1;goto B461a75;
case 0x461a80:goto L461a80;
case 0x461a85:c.instructions+=2;goto B461a85;
case 0x461a86:c.instructions+=1;goto B461a86;
case 0x461a8b:goto L461a8b;
case 0x461a8e:c.instructions+=2;goto B461a8e;
case 0x461a93:c.instructions+=1;goto B461a93;
case 0x461a95:goto L461a95;
case 0x461a9b:c.instructions+=5;goto B461a9b;
case 0x461a9e:c.instructions+=4;goto B461a9e;
case 0x461aa4:c.instructions+=3;goto B461aa4;
case 0x461aa5:c.instructions+=2;goto B461aa5;
case 0x461aaa:c.instructions+=1;goto B461aaa;
case 0x461aaf:goto L461aaf;
case 0x461ab2:c.instructions+=2;goto B461ab2;
case 0x461ab4:c.instructions+=1;goto B461ab4;
case 0x461ab6:goto L461ab6;
case 0x461ab8:c.instructions+=1;goto B461ab8;
case 0x461abd:goto L461abd;
case 0x461abf:c.instructions+=1;goto B461abf;
case 0x461ac0:goto L461ac0;
case 0x461ac5:c.instructions+=1;goto B461ac5;
case 0x461ad0:goto L461ad0;
case 0x461ad5:c.instructions+=1;goto B461ad5;
case 0x461ae0:goto L461ae0;
case 0x461ae4:c.instructions+=3;goto B461ae4;
case 0x461ae7:c.instructions+=2;goto B461ae7;
case 0x461aea:c.instructions+=1;goto B461aea;
case 0x461aec:goto L461aec;
case 0x461aef:c.instructions+=1;goto B461aef;
case 0x461af1:goto L461af1;
case 0x461afb:c.instructions+=4;goto B461afb;
case 0x461afe:c.instructions+=3;goto B461afe;
case 0x461b05:c.instructions+=2;goto B461b05;
case 0x461b0b:c.instructions+=1;goto B461b0b;
case 0x461b0e:goto L461b0e;
case 0x461b14:c.instructions+=4;goto B461b14;
case 0x461b17:c.instructions+=3;goto B461b17;
case 0x461b1e:c.instructions+=2;goto B461b1e;
case 0x461b24:c.instructions+=1;goto B461b24;
case 0x461b30:goto L461b30;
case 0x461b31:c.instructions+=6;goto B461b31;
case 0x461b33:c.instructions+=5;goto B461b33;
case 0x461b39:c.instructions+=4;goto B461b39;
case 0x461b3b:c.instructions+=3;goto B461b3b;
case 0x461b41:c.instructions+=2;goto B461b41;
case 0x461b42:c.instructions+=1;goto B461b42;
case 0x461b45:goto L461b45;
case 0x461b4b:c.instructions+=4;goto B461b4b;
case 0x461b4d:c.instructions+=3;goto B461b4d;
case 0x461b53:c.instructions+=2;goto B461b53;
case 0x461b54:c.instructions+=1;goto B461b54;
case 0x461b57:goto L461b57;
case 0x461b58:c.instructions+=1;goto B461b58;
case 0x461b60:goto L461b60;
case 0x461b61:c.instructions+=8;goto B461b61;
case 0x461b63:c.instructions+=7;goto B461b63;
case 0x461b69:c.instructions+=6;goto B461b69;
case 0x461b70:c.instructions+=5;goto B461b70;
case 0x461b77:c.instructions+=4;goto B461b77;
case 0x461b7e:c.instructions+=3;goto B461b7e;
case 0x461b81:c.instructions+=2;goto B461b81;
case 0x461b83:c.instructions+=1;goto B461b83;
case 0x461b89:goto L461b89;
case 0x461b8a:c.instructions+=4;goto B461b8a;
case 0x461b8d:c.instructions+=3;goto B461b8d;
case 0x461b93:c.instructions+=2;goto B461b93;
case 0x461b95:c.instructions+=1;goto B461b95;
case 0x461b9b:goto L461b9b;
case 0x461b9e:c.instructions+=6;goto B461b9e;
case 0x461ba4:c.instructions+=5;goto B461ba4;
case 0x461ba5:c.instructions+=4;goto B461ba5;
case 0x461bab:c.instructions+=3;goto B461bab;
case 0x461bac:c.instructions+=2;goto B461bac;
case 0x461baf:c.instructions+=1;goto B461baf;
case 0x461bb4:goto L461bb4;
case 0x461bb7:c.instructions+=3;goto B461bb7;
case 0x461bb9:c.instructions+=2;goto B461bb9;
case 0x461bbb:c.instructions+=1;goto B461bbb;
case 0x461bbd:goto L461bbd;
case 0x461bc0:c.instructions+=3;goto B461bc0;
case 0x461bc1:c.instructions+=2;goto B461bc1;
case 0x461bc2:c.instructions+=1;goto B461bc2;
case 0x461bc7:goto L461bc7;
case 0x461bcd:c.instructions+=4;goto B461bcd;
case 0x461bd0:c.instructions+=3;goto B461bd0;
case 0x461bd2:c.instructions+=2;goto B461bd2;
case 0x461bd5:c.instructions+=1;goto B461bd5;
case 0x461bd7:goto L461bd7;
case 0x461bd9:c.instructions+=1;goto B461bd9;
case 0x461bdf:goto L461bdf;
case 0x461be5:c.instructions+=4;goto B461be5;
case 0x461be7:c.instructions+=3;goto B461be7;
case 0x461be9:c.instructions+=2;goto B461be9;
case 0x461bec:c.instructions+=1;goto B461bec;
case 0x461bee:goto L461bee;
case 0x461bf0:c.instructions+=1;goto B461bf0;
case 0x461bf6:goto L461bf6;
case 0x461bfc:c.instructions+=3;goto B461bfc;
case 0x461c02:c.instructions+=2;goto B461c02;
case 0x461c08:c.instructions+=1;goto B461c08;
case 0x461c0d:goto L461c0d;
case 0x461c0f:goto L461c0f;
case 0x461c12:c.instructions+=8;goto B461c12;
case 0x461c18:c.instructions+=7;goto B461c18;
case 0x461c1b:c.instructions+=6;goto B461c1b;
case 0x461c21:c.instructions+=5;goto B461c21;
case 0x461c27:c.instructions+=4;goto B461c27;
case 0x461c2a:c.instructions+=3;goto B461c2a;
case 0x461c2d:c.instructions+=2;goto B461c2d;
case 0x461c2f:c.instructions+=1;goto B461c2f;
case 0x461c31:goto L461c31;
case 0x461c33:c.instructions+=3;goto B461c33;
case 0x461c36:c.instructions+=2;goto B461c36;
case 0x461c38:c.instructions+=1;goto B461c38;
case 0x461c3e:goto L461c3e;
case 0x461c43:goto L461c43;
case 0x461c46:c.instructions+=5;goto B461c46;
case 0x461c4c:c.instructions+=4;goto B461c4c;
case 0x461c4f:c.instructions+=3;goto B461c4f;
case 0x461c51:c.instructions+=2;goto B461c51;
case 0x461c52:c.instructions+=1;goto B461c52;
case 0x461c54:goto L461c54;
case 0x461c5a:c.instructions+=2;goto B461c5a;
case 0x461c5d:c.instructions+=1;goto B461c5d;
case 0x461c5f:goto L461c5f;
case 0x461c66:c.instructions+=1;goto B461c66;
case 0x461c6d:goto L461c6d;
case 0x461c74:c.instructions+=2;goto B461c74;
case 0x461c77:c.instructions+=1;goto B461c77;
case 0x461c79:goto L461c79;
case 0x461c80:c.instructions+=2;goto B461c80;
case 0x461c83:c.instructions+=1;goto B461c83;
case 0x461c85:goto L461c85;
case 0x461c8c:goto L461c8c;
case 0x461c92:c.instructions+=7;goto B461c92;
case 0x461c98:c.instructions+=6;goto B461c98;
case 0x461c9e:c.instructions+=5;goto B461c9e;
case 0x461ca4:c.instructions+=4;goto B461ca4;
case 0x461ca6:c.instructions+=3;goto B461ca6;
case 0x461ca7:c.instructions+=2;goto B461ca7;
case 0x461cad:c.instructions+=1;goto B461cad;
case 0x461cb3:goto L461cb3;
case 0x461cb4:c.instructions+=1;goto B461cb4;
case 0x461ce0:goto L461ce0;
case 0x461ce1:c.instructions+=6;goto B461ce1;
case 0x461ce2:c.instructions+=5;goto B461ce2;
case 0x461ce4:c.instructions+=4;goto B461ce4;
case 0x461cea:c.instructions+=3;goto B461cea;
case 0x461ced:c.instructions+=2;goto B461ced;
case 0x461cef:c.instructions+=1;goto B461cef;
case 0x461cf5:goto L461cf5;
case 0x461cf6:c.instructions+=3;goto B461cf6;
case 0x461cf9:c.instructions+=2;goto B461cf9;
case 0x461cfb:c.instructions+=1;goto B461cfb;
case 0x461d01:goto L461d01;
case 0x461d07:c.instructions+=4;goto B461d07;
case 0x461d08:c.instructions+=3;goto B461d08;
case 0x461d0b:c.instructions+=2;goto B461d0b;
case 0x461d0c:c.instructions+=1;goto B461d0c;
case 0x461d0e:goto L461d0e;
case 0x461d15:goto L461d15;
case 0x461d1a:c.instructions+=1;goto B461d1a;
case 0x461d1c:goto L461d1c;
case 0x461d21:c.instructions+=1;goto B461d21;
case 0x461d23:goto L461d23;
case 0x461d28:c.instructions+=1;goto B461d28;
case 0x461d2a:goto L461d2a;
case 0x461d2f:c.instructions+=1;goto B461d2f;
case 0x461d31:goto L461d31;
case 0x461d36:c.instructions+=1;goto B461d36;
case 0x461d38:goto L461d38;
case 0x461d3d:c.instructions+=1;goto B461d3d;
case 0x461d3f:goto L461d3f;
case 0x461d44:c.instructions+=1;goto B461d44;
case 0x461d46:goto L461d46;
case 0x461d4b:c.instructions+=1;goto B461d4b;
case 0x461d4d:goto L461d4d;
case 0x461d4f:goto L461d4f;
case 0x461d55:c.instructions+=2;goto B461d55;
case 0x461d57:c.instructions+=1;goto B461d57;
case 0x461d59:goto L461d59;
case 0x461d5b:c.instructions+=3;goto B461d5b;
case 0x461d5c:c.instructions+=2;goto B461d5c;
case 0x461d5e:c.instructions+=1;goto B461d5e;
case 0x461d61:goto L461d61;
case 0x461d67:c.instructions+=4;goto B461d67;
case 0x461d69:c.instructions+=3;goto B461d69;
case 0x461d6b:c.instructions+=2;goto B461d6b;
case 0x461d6d:c.instructions+=1;goto B461d6d;
case 0x461d70:goto L461d70;
case 0x461d76:c.instructions+=1;goto B461d76;
case 0x461d7d:goto L461d7d;
case 0x461d7f:c.instructions+=3;goto B461d7f;
case 0x461d80:c.instructions+=2;goto B461d80;
case 0x461d82:c.instructions+=1;goto B461d82;
case 0x461d85:goto L461d85;
case 0x461d8b:c.instructions+=4;goto B461d8b;
case 0x461d8d:c.instructions+=3;goto B461d8d;
case 0x461d8f:c.instructions+=2;goto B461d8f;
case 0x461d91:c.instructions+=1;goto B461d91;
case 0x461d94:goto L461d94;
case 0x461d9a:c.instructions+=5;goto B461d9a;
case 0x461d9e:c.instructions+=4;goto B461d9e;
case 0x461d9f:c.instructions+=3;goto B461d9f;
case 0x461da1:c.instructions+=2;goto B461da1;
case 0x461da9:c.instructions+=1;goto B461da9;
case 0x461dae:goto L461dae;
case 0x461db2:c.instructions+=3;goto B461db2;
case 0x461db8:c.instructions+=2;goto B461db8;
case 0x461dbe:c.instructions+=1;goto B461dbe;
case 0x461dbf:goto L461dbf;
case 0x461dc0:goto L461dc0;
case 0x461dc1:c.instructions+=2;goto B461dc1;
case 0x461dc2:c.instructions+=1;goto B461dc2;
case 0x461df0:goto L461df0;
case 0x461df4:c.instructions+=2;goto B461df4;
case 0x461df7:c.instructions+=1;goto B461df7;
case 0x461df9:goto L461df9;
case 0x461dfa:c.instructions+=1;goto B461dfa;
case 0x461dfc:goto L461dfc;
case 0x461dff:c.instructions+=1;goto B461dff;
case 0x461e02:goto L461e02;
case 0x461e07:c.instructions+=1;goto B461e07;
case 0x461e0a:goto L461e0a;
case 0x461e0c:c.instructions+=1;goto B461e0c;
case 0x461e10:goto L461e10;
case 0x461e16:c.instructions+=17;goto B461e16;
case 0x461e1d:c.instructions+=16;goto B461e1d;
case 0x461e20:c.instructions+=15;goto B461e20;
case 0x461e26:c.instructions+=14;goto B461e26;
case 0x461e2c:c.instructions+=13;goto B461e2c;
case 0x461e32:c.instructions+=12;goto B461e32;
case 0x461e38:c.instructions+=11;goto B461e38;
case 0x461e3a:c.instructions+=10;goto B461e3a;
case 0x461e40:c.instructions+=9;goto B461e40;
case 0x461e46:c.instructions+=8;goto B461e46;
case 0x461e4c:c.instructions+=7;goto B461e4c;
case 0x461e52:c.instructions+=6;goto B461e52;
case 0x461e58:c.instructions+=5;goto B461e58;
case 0x461e5a:c.instructions+=4;goto B461e5a;
case 0x461e60:c.instructions+=3;goto B461e60;
case 0x461e66:c.instructions+=2;goto B461e66;
case 0x461e6c:c.instructions+=1;goto B461e6c;
case 0x461e70:goto L461e70;
case 0x461e75:c.instructions+=1;goto B461e75;
case 0x461e80:goto L461e80;
case 0x461e85:c.instructions+=1;goto B461e85;
case 0x461e90:goto L461e90;
case 0x461e94:c.instructions+=3;goto B461e94;
case 0x461e97:c.instructions+=2;goto B461e97;
case 0x461e9a:c.instructions+=1;goto B461e9a;
case 0x461e9c:goto L461e9c;
case 0x461e9f:c.instructions+=1;goto B461e9f;
case 0x461ea1:goto L461ea1;
case 0x461eab:c.instructions+=4;goto B461eab;
case 0x461eae:c.instructions+=3;goto B461eae;
case 0x461eb5:c.instructions+=2;goto B461eb5;
case 0x461ebb:c.instructions+=1;goto B461ebb;
case 0x461ebe:goto L461ebe;
case 0x461ec4:c.instructions+=4;goto B461ec4;
case 0x461ec7:c.instructions+=3;goto B461ec7;
case 0x461ece:c.instructions+=2;goto B461ece;
case 0x461ed4:c.instructions+=1;goto B461ed4;
case 0x461ee0:goto L461ee0;
case 0x461ee2:c.instructions+=6;goto B461ee2;
case 0x461ee8:c.instructions+=5;goto B461ee8;
case 0x461eee:c.instructions+=4;goto B461eee;
case 0x461ef0:c.instructions+=3;goto B461ef0;
case 0x461ef3:c.instructions+=2;goto B461ef3;
case 0x461ef4:c.instructions+=1;goto B461ef4;
case 0x461ef7:goto L461ef7;
case 0x461f00:goto L461f00;
case 0x461f01:c.instructions+=5;goto B461f01;
case 0x461f03:c.instructions+=4;goto B461f03;
case 0x461f09:c.instructions+=3;goto B461f09;
case 0x461f0c:c.instructions+=2;goto B461f0c;
case 0x461f0e:c.instructions+=1;goto B461f0e;
case 0x461f10:goto L461f10;
case 0x461f14:c.instructions+=1;goto B461f14;
case 0x461f16:goto L461f16;
case 0x461f19:c.instructions+=9;goto B461f19;
case 0x461f1c:c.instructions+=8;goto B461f1c;
case 0x461f1f:c.instructions+=7;goto B461f1f;
case 0x461f22:c.instructions+=6;goto B461f22;
case 0x461f25:c.instructions+=5;goto B461f25;
case 0x461f28:c.instructions+=4;goto B461f28;
case 0x461f2a:c.instructions+=3;goto B461f2a;
case 0x461f2d:c.instructions+=2;goto B461f2d;
case 0x461f30:c.instructions+=1;goto B461f30;
case 0x461f33:goto L461f33;
case 0x461f39:c.instructions+=2;goto B461f39;
case 0x461f3b:c.instructions+=1;goto B461f3b;
case 0x461f3d:goto L461f3d;
case 0x461f40:c.instructions+=2;goto B461f40;
case 0x461f42:c.instructions+=1;goto B461f42;
case 0x461f44:goto L461f44;
case 0x461f46:c.instructions+=2;goto B461f46;
case 0x461f48:c.instructions+=1;goto B461f48;
case 0x461f4a:goto L461f4a;
case 0x461f50:c.instructions+=3;goto B461f50;
case 0x461f5a:c.instructions+=2;goto B461f5a;
case 0x461f5c:c.instructions+=1;goto B461f5c;
case 0x461f5f:goto L461f5f;
case 0x461f60:c.instructions+=1;goto B461f60;
case 0x461f70:goto L461f70;
case 0x461f74:c.instructions+=3;goto B461f74;
case 0x461f76:c.instructions+=2;goto B461f76;
case 0x461f78:c.instructions+=1;goto B461f78;
case 0x461f80:goto L461f80;
case 0x461f85:c.instructions+=1;goto B461f85;
case 0x461f90:goto L461f90;
case 0x461f95:c.instructions+=1;goto B461f95;
case 0x461fa0:goto L461fa0;
case 0x461fa5:c.instructions+=1;goto B461fa5;
case 0x461fb0:goto L461fb0;
case 0x461fb5:c.instructions+=1;goto B461fb5;
case 0x461fc0:goto L461fc0;
case 0x461fc5:c.instructions+=1;goto B461fc5;
case 0x461fd0:goto L461fd0;
case 0x461fd5:c.instructions+=1;goto B461fd5;
case 0x461fe0:goto L461fe0;
case 0x461fe5:c.instructions+=1;goto B461fe5;
case 0x461ff0:goto L461ff0;
case 0x461ff5:c.instructions+=1;goto B461ff5;
default:missing_instruction(c.pc);}
B461000:L461000:{c.instructions+=4;NFSU2_TR(0x461000);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461001:{NFSU2_TR(0x461001);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461007:{NFSU2_TR(0x461007);
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
B461009:{NFSU2_TR(0x461009);
if(r1(R+518)){{goto L461030;}}
}
B46100b:L46100b:{c.instructions+=4;NFSU2_TR(0x46100b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46100d:{NFSU2_TR(0x46100d);
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
B46100f:{NFSU2_TR(0x46100f);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B461017:{NFSU2_TR(0x461017);
if(r1(R+518)){{goto L461030;}}
}
B461019:L461019:{c.instructions+=4;NFSU2_TR(0x461019);
__builtin_memmove((R+4),(R+16),4);
}
B46101d:{NFSU2_TR(0x46101d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46101e:{NFSU2_TR(0x46101e);
__builtin_memmove((R+4),(R+0),4);
}
B461020:{NFSU2_TR(0x461020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461025ull));
TAIL_STATIC(0x735070u,735);
}
B461025:L461025:{c.instructions+=2;NFSU2_TR(0x461025);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x3ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B46102a:{NFSU2_TR(0x46102a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L461030;}}
}
B46102c:L46102c:{c.instructions+=3;NFSU2_TR(0x46102c);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46102e:{NFSU2_TR(0x46102e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46102f:{NFSU2_TR(0x46102f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461030:L461030:{c.instructions+=3;NFSU2_TR(0x461030);
w1(R+0,u8(0x1ull));
}
B461032:{NFSU2_TR(0x461032);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B461033:{NFSU2_TR(0x461033);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461040:L461040:{c.instructions+=2;NFSU2_TR(0x461040);
w4(R+0,u32(0x7ed444ull));
}
B461045:{NFSU2_TR(0x461045);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461050:L461050:{c.instructions+=2;NFSU2_TR(0x461050);
__builtin_memmove((R+0),gp(0x7ed448),4);
}
B461055:{NFSU2_TR(0x461055);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461060:L461060:{c.instructions+=5;NFSU2_TR(0x461060);
__builtin_memmove((R+0),gp(0x7ed440),4);
}
B461065:{NFSU2_TR(0x461065);
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
B461066:{NFSU2_TR(0x461066);
__builtin_memmove(gp(0x7ed440),(R+0),4);
}
B46106b:{NFSU2_TR(0x46106b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82af90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B461072:{NFSU2_TR(0x461072);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461080:L461080:{c.instructions+=3;NFSU2_TR(0x461080);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461084:{NFSU2_TR(0x461084);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B461087:{NFSU2_TR(0x461087);
if(r1(R+518)){{goto L46109a;}}
}
B461089:L461089:{c.instructions+=2;NFSU2_TR(0x461089);
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
B46108a:{NFSU2_TR(0x46108a);
if(r1(R+518)){{goto L461092;}}
}
B46108c:L46108c:{c.instructions+=2;NFSU2_TR(0x46108c);
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
B46108f:{NFSU2_TR(0x46108f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461092:L461092:{c.instructions+=2;NFSU2_TR(0x461092);
w4(R+0,u32(0x8ull));
}
B461097:{NFSU2_TR(0x461097);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46109a:L46109a:{c.instructions+=2;NFSU2_TR(0x46109a);
w4(R+0,u32(0x5ull));
}
B46109f:{NFSU2_TR(0x46109f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4610b0:L4610b0:{c.instructions+=7;NFSU2_TR(0x4610b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4610b1:{NFSU2_TR(0x4610b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4610b5:{NFSU2_TR(0x4610b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4610b7:{NFSU2_TR(0x4610b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4610b8:{NFSU2_TR(0x4610b8);
__builtin_memmove((R+28),(R+4),4);
}
B4610ba:{NFSU2_TR(0x4610ba);
__builtin_memmove((R+4),(R+24),4);
}
B4610bc:{NFSU2_TR(0x4610bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4610bfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4610bf:L4610bf:{c.instructions+=5;NFSU2_TR(0x4610bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4610c1:{NFSU2_TR(0x4610c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B4610c4:{NFSU2_TR(0x4610c4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B4610c9:{NFSU2_TR(0x4610c9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4610cc:{NFSU2_TR(0x4610cc);
if(r1(R+518)){{goto L4610de;}}
}
B4610ce:L4610ce:{c.instructions+=2;NFSU2_TR(0x4610ce);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4610d1:{NFSU2_TR(0x4610d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4610e4;}}
}
B4610d3:L4610d3:{c.instructions+=4;NFSU2_TR(0x4610d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4610d9:{NFSU2_TR(0x4610d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4610da:{NFSU2_TR(0x4610da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4610db:{NFSU2_TR(0x4610db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4610de:L4610de:{c.instructions+=1;NFSU2_TR(0x4610de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4610e4:L4610e4:{c.instructions+=3;NFSU2_TR(0x4610e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4610e5:{NFSU2_TR(0x4610e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4610e6:{NFSU2_TR(0x4610e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4610f0:L4610f0:{c.instructions+=9;NFSU2_TR(0x4610f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4610f1:{NFSU2_TR(0x4610f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4610f2:{NFSU2_TR(0x4610f2);
__builtin_memmove((R+24),(R+4),4);
}
B4610f4:{NFSU2_TR(0x4610f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4610fa:{NFSU2_TR(0x4610fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461100:{NFSU2_TR(0x461100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B461102:{NFSU2_TR(0x461102);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461103:{NFSU2_TR(0x461103);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B461109:{NFSU2_TR(0x461109);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46110cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46110c:L46110c:{c.instructions+=10;NFSU2_TR(0x46110c);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B461112:{NFSU2_TR(0x461112);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461118:{NFSU2_TR(0x461118);
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
B46111a:{NFSU2_TR(0x46111a);
{u32 ea_=u32(u32(7905936u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B461120:{NFSU2_TR(0x461120);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B461123:{NFSU2_TR(0x461123);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B461126:{NFSU2_TR(0x461126);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B461128:{NFSU2_TR(0x461128);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46112b:{NFSU2_TR(0x46112b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46112f:{NFSU2_TR(0x46112f);
if(r1(R+518)){{goto L4612f5;}}
}
B461135:L461135:{c.instructions+=4;NFSU2_TR(0x461135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B461137:{NFSU2_TR(0x461137);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461139:{NFSU2_TR(0x461139);
__builtin_memmove((R+4),(R+24),4);
}
B46113b:{NFSU2_TR(0x46113b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46113eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46113e:L46113e:{c.instructions+=10;NFSU2_TR(0x46113e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461144:{NFSU2_TR(0x461144);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46114a:{NFSU2_TR(0x46114a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46114d:{NFSU2_TR(0x46114d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461153:{NFSU2_TR(0x461153);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B461156:{NFSU2_TR(0x461156);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B461159:{NFSU2_TR(0x461159);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffff8001ull))));
}
B46115f:{NFSU2_TR(0x46115f);
__builtin_memmove((R+0),(R+4),4);
}
B461161:{NFSU2_TR(0x461161);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffff8001ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff8001ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B461166:{NFSU2_TR(0x461166);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46116f;}}
}
B461168:L461168:{c.instructions+=2;NFSU2_TR(0x461168);
w4(R+0,u32(0xffff8001ull));
}
B46116d:{NFSU2_TR(0x46116d);
{goto L461175;}
}
B46116f:L46116f:{c.instructions+=2;NFSU2_TR(0x46116f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B461171:{NFSU2_TR(0x461171);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L461175;}}
}
B461173:L461173:{c.instructions+=1;NFSU2_TR(0x461173);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B461175:L461175:{c.instructions+=5;NFSU2_TR(0x461175);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461178:{NFSU2_TR(0x461178);
__builtin_memmove((R+0),(R+4),4);
}
B46117a:{NFSU2_TR(0x46117a);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffff8001ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff8001ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46117f:{NFSU2_TR(0x46117f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461185:{NFSU2_TR(0x461185);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46118e;}}
}
B461187:L461187:{c.instructions+=2;NFSU2_TR(0x461187);
w4(R+0,u32(0xffff8001ull));
}
B46118c:{NFSU2_TR(0x46118c);
{goto L461194;}
}
B46118e:L46118e:{c.instructions+=2;NFSU2_TR(0x46118e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B461190:{NFSU2_TR(0x461190);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L461194;}}
}
B461192:L461192:{c.instructions+=1;NFSU2_TR(0x461192);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B461194:L461194:{c.instructions+=3;NFSU2_TR(0x461194);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B461198:{NFSU2_TR(0x461198);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46119b:{NFSU2_TR(0x46119b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4611a0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4611a0:L4611a0:{c.instructions+=3;NFSU2_TR(0x4611a0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4611a2:{NFSU2_TR(0x4611a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4611a8:{NFSU2_TR(0x4611a8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4611ae;}}
}
B4611aa:L4611aa:{c.instructions+=2;NFSU2_TR(0x4611aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4611ac:{NFSU2_TR(0x4611ac);
{goto L4611ba;}
}
B4611ae:L4611ae:{c.instructions+=2;NFSU2_TR(0x4611ae);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2710ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2710ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4611b3:{NFSU2_TR(0x4611b3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4611ba;}}
}
B4611b5:L4611b5:{c.instructions+=1;NFSU2_TR(0x4611b5);
w4(R+0,u32(0x2710ull));
}
B4611ba:L4611ba:{c.instructions+=5;NFSU2_TR(0x4611ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4611bc:{NFSU2_TR(0x4611bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4611bf:{NFSU2_TR(0x4611bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4611c5:{NFSU2_TR(0x4611c5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4611c7:{NFSU2_TR(0x4611c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4611ccull));
TAIL_STATIC(0x45e290u,45e);
}
B4611cc:L4611cc:{c.instructions+=6;NFSU2_TR(0x4611cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4611d2:{NFSU2_TR(0x4611d2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3e80ull))));
}
B4611d8:{NFSU2_TR(0x4611d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4611dc:{NFSU2_TR(0x4611dc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B4611e0:{NFSU2_TR(0x4611e0);
{u32 ea_=u32(u32(7905932u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4611e6:{NFSU2_TR(0x4611e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4611ebull));
TAIL_STATIC(0x75bed4u,75b);
}
B4611eb:L4611eb:{c.instructions+=3;NFSU2_TR(0x4611eb);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xffffc001ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffc001ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xffffc001ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4611f0:{NFSU2_TR(0x4611f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4611f6:{NFSU2_TR(0x4611f6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4611ff;}}
}
B4611f8:L4611f8:{c.instructions+=2;NFSU2_TR(0x4611f8);
w4(R+0,u32(0xffffc001ull));
}
B4611fd:{NFSU2_TR(0x4611fd);
{goto L46120b;}
}
B4611ff:L4611ff:{c.instructions+=2;NFSU2_TR(0x4611ff);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x3fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x3fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B461204:{NFSU2_TR(0x461204);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46120b;}}
}
B461206:L461206:{c.instructions+=1;NFSU2_TR(0x461206);
w4(R+0,u32(0x3fffull));
}
B46120b:L46120b:{c.instructions+=4;NFSU2_TR(0x46120b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46120e:{NFSU2_TR(0x46120e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461214:{NFSU2_TR(0x461214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B461216:{NFSU2_TR(0x461216);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461219ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B461219:L461219:{c.instructions+=2;NFSU2_TR(0x461219);
{u32 ea_=u32(u32(7905736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46121f:{NFSU2_TR(0x46121f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461224ull));
TAIL_STATIC(0x75bed4u,75b);
}
B461224:L461224:{c.instructions+=3;NFSU2_TR(0x461224);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B461226:{NFSU2_TR(0x461226);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46122c:{NFSU2_TR(0x46122c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L461232;}}
}
B46122e:L46122e:{c.instructions+=2;NFSU2_TR(0x46122e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B461230:{NFSU2_TR(0x461230);
{goto L46123e;}
}
B461232:L461232:{c.instructions+=2;NFSU2_TR(0x461232);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B461237:{NFSU2_TR(0x461237);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46123e;}}
}
B461239:L461239:{c.instructions+=1;NFSU2_TR(0x461239);
w4(R+0,u32(0x400ull));
}
B46123e:L46123e:{c.instructions+=6;NFSU2_TR(0x46123e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461241:{NFSU2_TR(0x461241);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461247:{NFSU2_TR(0x461247);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46124d:{NFSU2_TR(0x46124d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46124f:{NFSU2_TR(0x46124f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461255:{NFSU2_TR(0x461255);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46125b;}}
}
B461257:L461257:{c.instructions+=2;NFSU2_TR(0x461257);
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
B461259:{NFSU2_TR(0x461259);
{goto L461267;}
}
B46125b:L46125b:{c.instructions+=2;NFSU2_TR(0x46125b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x400ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B461260:{NFSU2_TR(0x461260);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L461267;}}
}
B461262:L461262:{c.instructions+=1;NFSU2_TR(0x461262);
w4(R+0,u32(0x400ull));
}
B461267:L461267:{c.instructions+=5;NFSU2_TR(0x461267);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46126a:{NFSU2_TR(0x46126a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46126c:{NFSU2_TR(0x46126c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46126e:{NFSU2_TR(0x46126e);
__builtin_memmove((R+4),(R+24),4);
}
B461270:{NFSU2_TR(0x461270);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461273ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B461273:L461273:{c.instructions+=3;NFSU2_TR(0x461273);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B461275:{NFSU2_TR(0x461275);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46127b:{NFSU2_TR(0x46127b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L461281;}}
}
B46127d:L46127d:{c.instructions+=2;NFSU2_TR(0x46127d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46127f:{NFSU2_TR(0x46127f);
{goto L46128d;}
}
B461281:L461281:{c.instructions+=2;NFSU2_TR(0x461281);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B461286:{NFSU2_TR(0x461286);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46128d;}}
}
B461288:L461288:{c.instructions+=1;NFSU2_TR(0x461288);
w4(R+0,u32(0x10000ull));
}
B46128d:L46128d:{c.instructions+=6;NFSU2_TR(0x46128d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461290:{NFSU2_TR(0x461290);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461296:{NFSU2_TR(0x461296);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46129c:{NFSU2_TR(0x46129c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46129e:{NFSU2_TR(0x46129e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4612a4:{NFSU2_TR(0x4612a4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4612aa;}}
}
B4612a6:L4612a6:{c.instructions+=2;NFSU2_TR(0x4612a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4612a8:{NFSU2_TR(0x4612a8);
{goto L4612b6;}
}
B4612aa:L4612aa:{c.instructions+=2;NFSU2_TR(0x4612aa);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x61a8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61a8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4612af:{NFSU2_TR(0x4612af);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4612b6;}}
}
B4612b1:L4612b1:{c.instructions+=1;NFSU2_TR(0x4612b1);
w4(R+0,u32(0x61a8ull));
}
B4612b6:L4612b6:{c.instructions+=5;NFSU2_TR(0x4612b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4612b9:{NFSU2_TR(0x4612b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4612bf:{NFSU2_TR(0x4612bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4612c1:{NFSU2_TR(0x4612c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4612c3:{NFSU2_TR(0x4612c3);
if(r1(R+518)){{goto L4612ce;}}
}
B4612c5:L4612c5:{c.instructions+=3;NFSU2_TR(0x4612c5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4612c8:{NFSU2_TR(0x4612c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4612c9:{NFSU2_TR(0x4612c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4612ceull));
TAIL_STATIC(0x735580u,735);
}
B4612ce:L4612ce:{c.instructions+=5;NFSU2_TR(0x4612ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4612d4:{NFSU2_TR(0x4612d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4612d6:{NFSU2_TR(0x4612d6);
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
B4612d8:{NFSU2_TR(0x4612d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4612e0:{NFSU2_TR(0x4612e0);
if(r1(R+518)){{goto L4612ec;}}
}
B4612e2:L4612e2:{c.instructions+=3;NFSU2_TR(0x4612e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4612e6:{NFSU2_TR(0x4612e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4612e7:{NFSU2_TR(0x4612e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4612ecull));
TAIL_STATIC(0x735070u,735);
}
B4612ec:L4612ec:{c.instructions+=2;NFSU2_TR(0x4612ec);
u8 U[6];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4612f1:{NFSU2_TR(0x4612f1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4612f5:L4612f5:{c.instructions+=4;NFSU2_TR(0x4612f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4612f6:{NFSU2_TR(0x4612f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4612f7:{NFSU2_TR(0x4612f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4612f8:{NFSU2_TR(0x4612f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461300:L461300:{c.instructions+=13;NFSU2_TR(0x461300);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461302:{NFSU2_TR(0x461302);
u8 U[4];
w4(U+0,u32(0x77259bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461307:{NFSU2_TR(0x461307);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46130d:{NFSU2_TR(0x46130d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46130e:{NFSU2_TR(0x46130e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461315:{NFSU2_TR(0x461315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B461318:{NFSU2_TR(0x461318);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461319:{NFSU2_TR(0x461319);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46131a:{NFSU2_TR(0x46131a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46131e:{NFSU2_TR(0x46131e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46131f:{NFSU2_TR(0x46131f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461320:{NFSU2_TR(0x461320);
__builtin_memmove((R+20),(R+4),4);
}
B461322:{NFSU2_TR(0x461322);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461327ull));
TAIL_STATIC(0x734df0u,734);
}
B461327:L461327:{c.instructions+=2;NFSU2_TR(0x461327);
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
B46132a:{NFSU2_TR(0x46132a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46132full));
TAIL_STATIC(0x734e40u,734);
}
B46132f:L46132f:{c.instructions+=10;NFSU2_TR(0x46132f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461333:{NFSU2_TR(0x461333);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B461335:{NFSU2_TR(0x461335);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B461339:{NFSU2_TR(0x461339);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46133a:{NFSU2_TR(0x46133a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46133e:{NFSU2_TR(0x46133e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461342:{NFSU2_TR(0x461342);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461346:{NFSU2_TR(0x461346);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B461348:{NFSU2_TR(0x461348);
u8 U[4];
w4(U+0,u32(0x6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46134a:{NFSU2_TR(0x46134a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46134cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B46134c:L46134c:{c.instructions+=2;NFSU2_TR(0x46134c);
__builtin_memmove((R+24),(R+0),4);
}
B46134e:{NFSU2_TR(0x46134e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461353ull));
TAIL_STATIC(0x734e60u,734);
}
B461353:L461353:{c.instructions+=4;NFSU2_TR(0x461353);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461357:{NFSU2_TR(0x461357);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B461359:{NFSU2_TR(0x461359);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46135d:{NFSU2_TR(0x46135d);
if(r1(R+518)){{goto L461409;}}
}
B461363:L461363:{c.instructions+=5;NFSU2_TR(0x461363);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461369:{NFSU2_TR(0x461369);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46136f:{NFSU2_TR(0x46136f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461372:{NFSU2_TR(0x461372);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B461374:{NFSU2_TR(0x461374);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46137a;}}
}
B461376:L461376:{c.instructions+=2;NFSU2_TR(0x461376);
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
B461378:{NFSU2_TR(0x461378);
{goto L461384;}
}
B46137a:L46137a:{c.instructions+=2;NFSU2_TR(0x46137a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46137d:{NFSU2_TR(0x46137d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L461384;}}
}
B46137f:L46137f:{c.instructions+=1;NFSU2_TR(0x46137f);
w4(R+0,u32(0x3cull));
}
B461384:L461384:{c.instructions+=32;NFSU2_TR(0x461384);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461385:{NFSU2_TR(0x461385);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B461388:{NFSU2_TR(0x461388);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461389:{NFSU2_TR(0x461389);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46138a:{NFSU2_TR(0x46138a);
u8 U[4];
w4(U+0,u32(0x82c538ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46138f:{NFSU2_TR(0x46138f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B461391:{NFSU2_TR(0x461391);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461394:{NFSU2_TR(0x461394);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461397:{NFSU2_TR(0x461397);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46139a:{NFSU2_TR(0x46139a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46139d:{NFSU2_TR(0x46139d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613a0:{NFSU2_TR(0x4613a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613a3:{NFSU2_TR(0x4613a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613a6:{NFSU2_TR(0x4613a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613a9:{NFSU2_TR(0x4613a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613ac:{NFSU2_TR(0x4613ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613af:{NFSU2_TR(0x4613af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613b2:{NFSU2_TR(0x4613b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613b5:{NFSU2_TR(0x4613b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613b8:{NFSU2_TR(0x4613b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613bb:{NFSU2_TR(0x4613bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613be:{NFSU2_TR(0x4613be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613c1:{NFSU2_TR(0x4613c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613c4:{NFSU2_TR(0x4613c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613c7:{NFSU2_TR(0x4613c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613ca:{NFSU2_TR(0x4613ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613cd:{NFSU2_TR(0x4613cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613d0:{NFSU2_TR(0x4613d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613d3:{NFSU2_TR(0x4613d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613d6:{NFSU2_TR(0x4613d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613d9:{NFSU2_TR(0x4613d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4613dc:{NFSU2_TR(0x4613dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4613e1ull));
TAIL_STATIC(0x7358c0u,735);
}
B4613e1:L4613e1:{c.instructions+=3;NFSU2_TR(0x4613e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4613e4:{NFSU2_TR(0x4613e4);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4613e6:{NFSU2_TR(0x4613e6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L461406;}}
}
B4613e8:L4613e8:{c.instructions+=3;NFSU2_TR(0x4613e8);
u8 U[4];
w4(U+0,u32(0x7ede18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4613ed:{NFSU2_TR(0x4613ed);
w4(R+4,u32(0x82c538ull));
}
B4613f2:{NFSU2_TR(0x4613f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4613f7ull));
TAIL_STATIC(0x735840u,735);
}
B4613f7:L4613f7:{c.instructions+=4;NFSU2_TR(0x4613f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4613f8:{NFSU2_TR(0x4613f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4613f9:{NFSU2_TR(0x4613f9);
u8 U[4];
w4(U+0,u32(0x82c538ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4613fe:{NFSU2_TR(0x4613fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461403ull));
TAIL_STATIC(0x7358c0u,735);
}
B461403:L461403:{c.instructions+=1;NFSU2_TR(0x461403);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B461406:L461406:{c.instructions+=2;NFSU2_TR(0x461406);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B461407:{NFSU2_TR(0x461407);
{goto L46140b;}
}
B461409:L461409:{c.instructions+=1;NFSU2_TR(0x461409);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B46140b:L46140b:{c.instructions+=3;NFSU2_TR(0x46140b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B461413:{NFSU2_TR(0x461413);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461419:{NFSU2_TR(0x461419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46141eull));
TAIL_STATIC(0x721515u,721);
}
B46141e:L46141e:{c.instructions+=6;NFSU2_TR(0x46141e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461424:{NFSU2_TR(0x461424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B461426:{NFSU2_TR(0x461426);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B461428:{NFSU2_TR(0x461428);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46142a:{NFSU2_TR(0x46142a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46142e:{NFSU2_TR(0x46142e);
if(r1(R+518)){{goto L461455;}}
}
B461430:L461430:{c.instructions+=3;NFSU2_TR(0x461430);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B461434:{NFSU2_TR(0x461434);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461435:{NFSU2_TR(0x461435);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46143aull));
TAIL_STATIC(0x735070u,735);
}
B46143a:L46143a:{c.instructions+=9;NFSU2_TR(0x46143a);
u8 U[6];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B46143f:{NFSU2_TR(0x46143f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B461440:{NFSU2_TR(0x461440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B461441:{NFSU2_TR(0x461441);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B461445:{NFSU2_TR(0x461445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B461446:{NFSU2_TR(0x461446);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46144a:{NFSU2_TR(0x46144a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461451:{NFSU2_TR(0x461451);
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
B461454:{NFSU2_TR(0x461454);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461455:L461455:{c.instructions+=8;NFSU2_TR(0x461455);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461459:{NFSU2_TR(0x461459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46145a:{NFSU2_TR(0x46145a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B46145e:{NFSU2_TR(0x46145e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46145f:{NFSU2_TR(0x46145f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B461460:{NFSU2_TR(0x461460);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461467:{NFSU2_TR(0x461467);
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
B46146a:{NFSU2_TR(0x46146a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461470:L461470:{c.instructions+=2;NFSU2_TR(0x461470);
w4(R+0,u32(0x7ed454ull));
}
B461475:{NFSU2_TR(0x461475);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461480:L461480:{c.instructions+=2;NFSU2_TR(0x461480);
__builtin_memmove((R+0),gp(0x7ed458),4);
}
B461485:{NFSU2_TR(0x461485);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461490:L461490:{c.instructions+=3;NFSU2_TR(0x461490);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461494:{NFSU2_TR(0x461494);
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
B461497:{NFSU2_TR(0x461497);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4614c0;}}
}
B461499:L461499:{c.instructions+=1;NFSU2_TR(0x461499);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4614c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4614a0:L4614a0:{c.instructions+=2;NFSU2_TR(0x4614a0);
w4(R+0,u32(0x5ull));
}
B4614a5:{NFSU2_TR(0x4614a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4614a8:L4614a8:{c.instructions+=2;NFSU2_TR(0x4614a8);
w4(R+0,u32(0x6ull));
}
B4614ad:{NFSU2_TR(0x4614ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4614b0:L4614b0:{c.instructions+=2;NFSU2_TR(0x4614b0);
w4(R+0,u32(0x7ull));
}
B4614b5:{NFSU2_TR(0x4614b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4614b8:L4614b8:{c.instructions+=2;NFSU2_TR(0x4614b8);
w4(R+0,u32(0x8ull));
}
B4614bd:{NFSU2_TR(0x4614bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4614c0:L4614c0:{c.instructions+=2;NFSU2_TR(0x4614c0);
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
B4614c3:{NFSU2_TR(0x4614c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4614e0:L4614e0:{c.instructions+=7;NFSU2_TR(0x4614e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4614e1:{NFSU2_TR(0x4614e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4614e5:{NFSU2_TR(0x4614e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4614e7:{NFSU2_TR(0x4614e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4614e8:{NFSU2_TR(0x4614e8);
__builtin_memmove((R+28),(R+4),4);
}
B4614ea:{NFSU2_TR(0x4614ea);
__builtin_memmove((R+4),(R+24),4);
}
B4614ec:{NFSU2_TR(0x4614ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4614efull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4614ef:L4614ef:{c.instructions+=6;NFSU2_TR(0x4614ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4614f1:{NFSU2_TR(0x4614f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B4614f4:{NFSU2_TR(0x4614f4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B4614f9:{NFSU2_TR(0x4614f9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffbull))));
}
B4614fc:{NFSU2_TR(0x4614fc);
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
B4614ff:{NFSU2_TR(0x4614ff);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L46152f;}}
}
B461501:L461501:{c.instructions+=1;NFSU2_TR(0x461501);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x461534ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B461508:L461508:{c.instructions+=4;NFSU2_TR(0x461508);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46150e:{NFSU2_TR(0x46150e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46150f:{NFSU2_TR(0x46150f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B461510:{NFSU2_TR(0x461510);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461513:L461513:{c.instructions+=4;NFSU2_TR(0x461513);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461519:{NFSU2_TR(0x461519);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46151a:{NFSU2_TR(0x46151a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46151b:{NFSU2_TR(0x46151b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46151e:L46151e:{c.instructions+=4;NFSU2_TR(0x46151e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461524:{NFSU2_TR(0x461524);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B461525:{NFSU2_TR(0x461525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B461526:{NFSU2_TR(0x461526);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461529:L461529:{c.instructions+=1;NFSU2_TR(0x461529);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46152f:L46152f:{c.instructions+=3;NFSU2_TR(0x46152f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B461530:{NFSU2_TR(0x461530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B461531:{NFSU2_TR(0x461531);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461550:L461550:{c.instructions+=3;NFSU2_TR(0x461550);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461554:{NFSU2_TR(0x461554);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46155b:{NFSU2_TR(0x46155b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461560:L461560:{c.instructions+=3;NFSU2_TR(0x461560);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461564:{NFSU2_TR(0x461564);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46156b:{NFSU2_TR(0x46156b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461570:L461570:{c.instructions+=7;NFSU2_TR(0x461570);
__builtin_memmove((R+0),gp(0x7ed440),4);
}
B461575:{NFSU2_TR(0x461575);
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
B461576:{NFSU2_TR(0x461576);
__builtin_memmove(gp(0x7ed440),(R+0),4);
}
B46157b:{NFSU2_TR(0x46157b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82af90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B461582:{NFSU2_TR(0x461582);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461588:{NFSU2_TR(0x461588);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46158f:{NFSU2_TR(0x46158f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461590:L461590:{c.instructions+=2;NFSU2_TR(0x461590);
w4(R+0,u32(0x7ed464ull));
}
B461595:{NFSU2_TR(0x461595);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4615a0:L4615a0:{c.instructions+=2;NFSU2_TR(0x4615a0);
__builtin_memmove((R+0),gp(0x7ed468),4);
}
B4615a5:{NFSU2_TR(0x4615a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4615b0:L4615b0:{c.instructions+=3;NFSU2_TR(0x4615b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4615b4:{NFSU2_TR(0x4615b4);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4615b7:{NFSU2_TR(0x4615b7);
if(r1(R+518)){{goto L4615ca;}}
}
B4615b9:L4615b9:{c.instructions+=2;NFSU2_TR(0x4615b9);
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
B4615ba:{NFSU2_TR(0x4615ba);
if(r1(R+518)){{goto L4615c2;}}
}
B4615bc:L4615bc:{c.instructions+=2;NFSU2_TR(0x4615bc);
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
B4615bf:{NFSU2_TR(0x4615bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4615c2:L4615c2:{c.instructions+=2;NFSU2_TR(0x4615c2);
w4(R+0,u32(0x8ull));
}
B4615c7:{NFSU2_TR(0x4615c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4615ca:L4615ca:{c.instructions+=2;NFSU2_TR(0x4615ca);
w4(R+0,u32(0x1ull));
}
B4615cf:{NFSU2_TR(0x4615cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4615dd:L4615dd:{c.instructions+=9;NFSU2_TR(0x4615dd);
}
B4615de:{NFSU2_TR(0x4615de);
}
B4615df:{NFSU2_TR(0x4615df);
}
B4615e0:{NFSU2_TR(0x4615e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4615e1:{NFSU2_TR(0x4615e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4615e2:{NFSU2_TR(0x4615e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4615e3:{NFSU2_TR(0x4615e3);
__builtin_memmove((R+28),(R+4),4);
}
B4615e5:{NFSU2_TR(0x4615e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4615eb:{NFSU2_TR(0x4615eb);
w4(R+12,u32(0x4ull));
}
B4615f0:L4615f0:{c.instructions+=2;NFSU2_TR(0x4615f0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4615f3:{NFSU2_TR(0x4615f3);
if(r1(R+518)){{goto L461628;}}
}
B4615f5:L4615f5:{c.instructions+=4;NFSU2_TR(0x4615f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4615f7:{NFSU2_TR(0x4615f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4615f9:{NFSU2_TR(0x4615f9);
__builtin_memmove((R+4),(R+28),4);
}
B4615fb:{NFSU2_TR(0x4615fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4615feull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4615fe:L4615fe:{c.instructions+=3;NFSU2_TR(0x4615fe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B461600:{NFSU2_TR(0x461600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B461602:{NFSU2_TR(0x461602);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L461608;}}
}
B461604:L461604:{c.instructions+=2;NFSU2_TR(0x461604);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B461606:{NFSU2_TR(0x461606);
{goto L461614;}
}
B461608:L461608:{c.instructions+=2;NFSU2_TR(0x461608);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46160d:{NFSU2_TR(0x46160d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L461614;}}
}
B46160f:L46160f:{c.instructions+=1;NFSU2_TR(0x46160f);
w4(R+0,u32(0x7fffull));
}
B461614:L461614:{c.instructions+=5;NFSU2_TR(0x461614);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461617:{NFSU2_TR(0x461617);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B461619:{NFSU2_TR(0x461619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46161b:{NFSU2_TR(0x46161b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46161d:{NFSU2_TR(0x46161d);
if(r1(R+518)){{goto L461628;}}
}
B46161f:L46161f:{c.instructions+=3;NFSU2_TR(0x46161f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B461622:{NFSU2_TR(0x461622);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461623:{NFSU2_TR(0x461623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461628ull));
TAIL_STATIC(0x735580u,735);
}
B461628:L461628:{c.instructions+=3;NFSU2_TR(0x461628);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B46162b:{NFSU2_TR(0x46162b);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B46162c:{NFSU2_TR(0x46162c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4615f0u);}goto L4615f0;}}
}
B46162e:L46162e:{c.instructions+=3;NFSU2_TR(0x46162e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461634:{NFSU2_TR(0x461634);
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
B461636:{NFSU2_TR(0x461636);
if(r1(R+518)){{goto L461673;}}
}
B461638:L461638:{c.instructions+=4;NFSU2_TR(0x461638);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46163a:{NFSU2_TR(0x46163a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46163c:{NFSU2_TR(0x46163c);
__builtin_memmove((R+4),(R+28),4);
}
B46163e:{NFSU2_TR(0x46163e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461641ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B461641:L461641:{c.instructions+=3;NFSU2_TR(0x461641);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B461643:{NFSU2_TR(0x461643);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461649:{NFSU2_TR(0x461649);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46164f;}}
}
B46164b:L46164b:{c.instructions+=2;NFSU2_TR(0x46164b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46164d:{NFSU2_TR(0x46164d);
{goto L46165b;}
}
B46164f:L46164f:{c.instructions+=2;NFSU2_TR(0x46164f);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B461654:{NFSU2_TR(0x461654);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46165b;}}
}
B461656:L461656:{c.instructions+=1;NFSU2_TR(0x461656);
w4(R+0,u32(0x7fffull));
}
B46165b:L46165b:{c.instructions+=5;NFSU2_TR(0x46165b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46165e:{NFSU2_TR(0x46165e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B461664:{NFSU2_TR(0x461664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B461666:{NFSU2_TR(0x461666);
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
B461668:{NFSU2_TR(0x461668);
if(r1(R+518)){{goto L461673;}}
}
B46166a:L46166a:{c.instructions+=3;NFSU2_TR(0x46166a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46166d:{NFSU2_TR(0x46166d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46166e:{NFSU2_TR(0x46166e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461673ull));
TAIL_STATIC(0x735580u,735);
}
B461673:L461673:{c.instructions+=4;NFSU2_TR(0x461673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B461674:{NFSU2_TR(0x461674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B461675:{NFSU2_TR(0x461675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B461676:{NFSU2_TR(0x461676);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461680:L461680:{c.instructions+=4;NFSU2_TR(0x461680);
__builtin_memmove((R+0),gp(0x850078),4);
}
B461685:{NFSU2_TR(0x461685);
w4(R+4,u32(0x4ull));
}
B46168a:{NFSU2_TR(0x46168a);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B46168c:{NFSU2_TR(0x46168c);
if(r1(R+518)){{goto L461727;}}
}
B461692:L461692:{c.instructions+=38;NFSU2_TR(0x461692);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461696:{NFSU2_TR(0x461696);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B461698:{NFSU2_TR(0x461698);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46169b:{NFSU2_TR(0x46169b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b098ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4616a1:{NFSU2_TR(0x4616a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4616a3:{NFSU2_TR(0x4616a3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4616a6:{NFSU2_TR(0x4616a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b09cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4616b0:{NFSU2_TR(0x4616b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4616b2:{NFSU2_TR(0x4616b2);
__builtin_memmove((R+4),gp(0x7ed22c),4);
}
B4616b8:{NFSU2_TR(0x4616b8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4616bb:{NFSU2_TR(0x4616bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4616c1:{NFSU2_TR(0x4616c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4616c3:{NFSU2_TR(0x4616c3);
__builtin_memmove((R+4),gp(0x7ed178),4);
}
B4616c9:{NFSU2_TR(0x4616c9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4616cc:{NFSU2_TR(0x4616cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4616d2:{NFSU2_TR(0x4616d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4616d4:{NFSU2_TR(0x4616d4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4616d7:{NFSU2_TR(0x4616d7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4616d9:{NFSU2_TR(0x4616d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4616df:{NFSU2_TR(0x4616df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4616e1:{NFSU2_TR(0x4616e1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4616e4:{NFSU2_TR(0x4616e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4616ea:{NFSU2_TR(0x4616ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4616ec:{NFSU2_TR(0x4616ec);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4616ef:{NFSU2_TR(0x4616ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4616f5:{NFSU2_TR(0x4616f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4616f7:{NFSU2_TR(0x4616f7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4616fa:{NFSU2_TR(0x4616fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461700:{NFSU2_TR(0x461700);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B461702:{NFSU2_TR(0x461702);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B461705:{NFSU2_TR(0x461705);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46170b:{NFSU2_TR(0x46170b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46170d:{NFSU2_TR(0x46170d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B461710:{NFSU2_TR(0x461710);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461716:{NFSU2_TR(0x461716);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B461718:{NFSU2_TR(0x461718);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x2cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B46171b:{NFSU2_TR(0x46171b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0c0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B461725:{NFSU2_TR(0x461725);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B461727:L461727:{c.instructions+=1;NFSU2_TR(0x461727);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461730:L461730:{c.instructions+=2;NFSU2_TR(0x461730);
w4(R+0,u32(0x7ed474ull));
}
B461735:{NFSU2_TR(0x461735);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461740:L461740:{c.instructions+=2;NFSU2_TR(0x461740);
__builtin_memmove((R+0),gp(0x7ed478),4);
}
B461745:{NFSU2_TR(0x461745);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461750:L461750:{c.instructions+=13;NFSU2_TR(0x461750);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461756:{NFSU2_TR(0x461756);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461758:{NFSU2_TR(0x461758);
u8 U[4];
w4(U+0,u32(0x77265bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46175d:{NFSU2_TR(0x46175d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46175e:{NFSU2_TR(0x46175e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461765:{NFSU2_TR(0x461765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B461768:{NFSU2_TR(0x461768);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461769:{NFSU2_TR(0x461769);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46176a:{NFSU2_TR(0x46176a);
__builtin_memmove((R+20),(R+4),4);
}
B46176c:{NFSU2_TR(0x46176c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461772:{NFSU2_TR(0x461772);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B461774:{NFSU2_TR(0x461774);
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
B461776:{NFSU2_TR(0x461776);
if(r1(R+518)){{goto L461783;}}
}
B461778:L461778:{c.instructions+=2;NFSU2_TR(0x461778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46177b:{NFSU2_TR(0x46177b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46177eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46177e:L46177e:{c.instructions+=1;NFSU2_TR(0x46177e);
{goto L461820;}
}
B461783:L461783:{c.instructions+=5;NFSU2_TR(0x461783);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B461787:{NFSU2_TR(0x461787);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461788:{NFSU2_TR(0x461788);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461789:{NFSU2_TR(0x461789);
s4(0x7ec844,u32(0x78a294ull));
}
B461793:{NFSU2_TR(0x461793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461798ull));
TAIL_STATIC(0x734df0u,734);
}
B461798:L461798:{c.instructions+=2;NFSU2_TR(0x461798);
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
B46179b:{NFSU2_TR(0x46179b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4617a0ull));
TAIL_STATIC(0x734e40u,734);
}
B4617a0:L4617a0:{c.instructions+=9;NFSU2_TR(0x4617a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4617a4:{NFSU2_TR(0x4617a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4617a8:{NFSU2_TR(0x4617a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4617a9:{NFSU2_TR(0x4617a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4617ad:{NFSU2_TR(0x4617ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4617b1:{NFSU2_TR(0x4617b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4617b5:{NFSU2_TR(0x4617b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4617b7:{NFSU2_TR(0x4617b7);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4617b9:{NFSU2_TR(0x4617b9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4617bbull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4617bb:L4617bb:{c.instructions+=2;NFSU2_TR(0x4617bb);
__builtin_memmove((R+24),(R+0),4);
}
B4617bd:{NFSU2_TR(0x4617bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4617c2ull));
TAIL_STATIC(0x734e60u,734);
}
B4617c2:L4617c2:{c.instructions+=4;NFSU2_TR(0x4617c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4617c6:{NFSU2_TR(0x4617c6);
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
B4617c8:{NFSU2_TR(0x4617c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4617cc:{NFSU2_TR(0x4617cc);
if(r1(R+518)){{goto L461817;}}
}
B4617ce:L4617ce:{c.instructions+=12;NFSU2_TR(0x4617ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4617cf:{NFSU2_TR(0x4617cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4617d2:{NFSU2_TR(0x4617d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4617d3:{NFSU2_TR(0x4617d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4617d4:{NFSU2_TR(0x4617d4);
u8 U[4];
w4(U+0,u32(0x82c508ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4617d9:{NFSU2_TR(0x4617d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4617db:{NFSU2_TR(0x4617db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4617de:{NFSU2_TR(0x4617de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4617e1:{NFSU2_TR(0x4617e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4617e4:{NFSU2_TR(0x4617e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4617e7:{NFSU2_TR(0x4617e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4617ea:{NFSU2_TR(0x4617ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4617efull));
TAIL_STATIC(0x7358c0u,735);
}
B4617ef:L4617ef:{c.instructions+=3;NFSU2_TR(0x4617ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4617f2:{NFSU2_TR(0x4617f2);
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
B4617f4:{NFSU2_TR(0x4617f4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L461814;}}
}
B4617f6:L4617f6:{c.instructions+=3;NFSU2_TR(0x4617f6);
u8 U[4];
w4(U+0,u32(0x7edde0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4617fb:{NFSU2_TR(0x4617fb);
w4(R+4,u32(0x82c508ull));
}
B461800:{NFSU2_TR(0x461800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461805ull));
TAIL_STATIC(0x735840u,735);
}
B461805:L461805:{c.instructions+=4;NFSU2_TR(0x461805);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461806:{NFSU2_TR(0x461806);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461807:{NFSU2_TR(0x461807);
u8 U[4];
w4(U+0,u32(0x82c508ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46180c:{NFSU2_TR(0x46180c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461811ull));
TAIL_STATIC(0x7358c0u,735);
}
B461811:L461811:{c.instructions+=1;NFSU2_TR(0x461811);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B461814:L461814:{c.instructions+=2;NFSU2_TR(0x461814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B461815:{NFSU2_TR(0x461815);
{goto L461819;}
}
B461817:L461817:{c.instructions+=1;NFSU2_TR(0x461817);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B461819:L461819:{c.instructions+=2;NFSU2_TR(0x461819);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46181f:{NFSU2_TR(0x46181f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B461820:L461820:{c.instructions+=7;NFSU2_TR(0x461820);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461824:{NFSU2_TR(0x461824);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46182a:{NFSU2_TR(0x46182a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46182b:{NFSU2_TR(0x46182b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46182c:{NFSU2_TR(0x46182c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461833:{NFSU2_TR(0x461833);
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
B461836:{NFSU2_TR(0x461836);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461840:L461840:{c.instructions+=3;NFSU2_TR(0x461840);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461846:{NFSU2_TR(0x461846);
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
B461848:{NFSU2_TR(0x461848);
if(r1(R+518)){{goto L461877;}}
}
B46184a:L46184a:{c.instructions+=8;NFSU2_TR(0x46184a);
w4(R+8,u32(0x1ull));
}
B46184f:{NFSU2_TR(0x46184f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
w4(U+4,u32(0x41200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B461859:{NFSU2_TR(0x461859);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46185f:{NFSU2_TR(0x46185f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461862:{NFSU2_TR(0x461862);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461868:{NFSU2_TR(0x461868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46186a:{NFSU2_TR(0x46186a);
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
B46186c:{NFSU2_TR(0x46186c);
if(r1(R+518)){{goto L461877;}}
}
B46186e:L46186e:{c.instructions+=3;NFSU2_TR(0x46186e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B461871:{NFSU2_TR(0x461871);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461872:{NFSU2_TR(0x461872);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461877ull));
TAIL_STATIC(0x735580u,735);
}
B461877:L461877:{c.instructions+=1;NFSU2_TR(0x461877);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461880:L461880:{c.instructions+=4;NFSU2_TR(0x461880);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B461885:{NFSU2_TR(0x461885);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461888:{NFSU2_TR(0x461888);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46188a:{NFSU2_TR(0x46188a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46188full));
TAIL_STATIC(0x45ad40u,45a);
}
B46188f:L46188f:{c.instructions+=1;NFSU2_TR(0x46188f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461890:L461890:{c.instructions+=3;NFSU2_TR(0x461890);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461896:{NFSU2_TR(0x461896);
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
B461898:{NFSU2_TR(0x461898);
if(r1(R+518)){{goto L4618ac;}}
}
B46189a:L46189a:{c.instructions+=3;NFSU2_TR(0x46189a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4618a0:{NFSU2_TR(0x4618a0);
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
B4618a2:{NFSU2_TR(0x4618a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4618ac;}}
}
B4618a4:L4618a4:{c.instructions+=2;NFSU2_TR(0x4618a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4618ab:{NFSU2_TR(0x4618ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4618ac:L4618ac:{c.instructions+=2;NFSU2_TR(0x4618ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4618b3:{NFSU2_TR(0x4618b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4618c0:L4618c0:{c.instructions+=6;NFSU2_TR(0x4618c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4618c1:{NFSU2_TR(0x4618c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4618c2:{NFSU2_TR(0x4618c2);
__builtin_memmove((R+24),(R+4),4);
}
B4618c4:{NFSU2_TR(0x4618c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4618ca:{NFSU2_TR(0x4618ca);
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
B4618cc:{NFSU2_TR(0x4618cc);
if(r1(R+518)){{goto L4619ad;}}
}
B4618d2:L4618d2:{c.instructions+=4;NFSU2_TR(0x4618d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4618d4:{NFSU2_TR(0x4618d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4618d6:{NFSU2_TR(0x4618d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4618de:{NFSU2_TR(0x4618de);
if(r1(R+518)){{goto L4618ec;}}
}
B4618e0:L4618e0:{c.instructions+=4;NFSU2_TR(0x4618e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4618e4:{NFSU2_TR(0x4618e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4618e5:{NFSU2_TR(0x4618e5);
__builtin_memmove((R+4),(R+0),4);
}
B4618e7:{NFSU2_TR(0x4618e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4618ecull));
TAIL_STATIC(0x735070u,735);
}
B4618ec:L4618ec:{c.instructions+=5;NFSU2_TR(0x4618ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4618f2:{NFSU2_TR(0x4618f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4618f8:{NFSU2_TR(0x4618f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4618fa:{NFSU2_TR(0x4618fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4618fb:{NFSU2_TR(0x4618fb);
if(r1(R+518)){{goto L461919;}}
}
B4618fd:L4618fd:{c.instructions+=2;NFSU2_TR(0x4618fd);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B461904:{NFSU2_TR(0x461904);
if(r1(R+518)){{goto L461932;}}
}
B461906:L461906:{c.instructions+=3;NFSU2_TR(0x461906);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46190c:{NFSU2_TR(0x46190c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46190e:{NFSU2_TR(0x46190e);
if(r1(R+518)){{goto L461919;}}
}
B461910:L461910:{c.instructions+=2;NFSU2_TR(0x461910);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B461917:{NFSU2_TR(0x461917);
if(r1(R+518)){{goto L461932;}}
}
B461919:L461919:{c.instructions+=5;NFSU2_TR(0x461919);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46191b:{NFSU2_TR(0x46191b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46191d:{NFSU2_TR(0x46191d);
__builtin_memmove((R+4),(R+24),4);
}
B46191f:{NFSU2_TR(0x46191f);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B461921:{NFSU2_TR(0x461921);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461924ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B461924:L461924:{c.instructions+=3;NFSU2_TR(0x461924);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B461926:{NFSU2_TR(0x461926);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46192c:{NFSU2_TR(0x46192c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46193f;}}
}
B46192e:L46192e:{c.instructions+=2;NFSU2_TR(0x46192e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B461930:{NFSU2_TR(0x461930);
{goto L46194b;}
}
B461932:L461932:{c.instructions+=5;NFSU2_TR(0x461932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B461934:{NFSU2_TR(0x461934);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461936:{NFSU2_TR(0x461936);
__builtin_memmove((R+4),(R+24),4);
}
B461938:{NFSU2_TR(0x461938);
w1(R+12,u8(0x1ull));
}
B46193a:{NFSU2_TR(0x46193a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46193dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46193d:L46193d:{c.instructions+=1;NFSU2_TR(0x46193d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x461924u);}goto L461924;}
}
B46193f:L46193f:{c.instructions+=2;NFSU2_TR(0x46193f);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B461944:{NFSU2_TR(0x461944);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46194b;}}
}
B461946:L461946:{c.instructions+=1;NFSU2_TR(0x461946);
w4(R+0,u32(0x7fffull));
}
B46194b:L46194b:{c.instructions+=10;NFSU2_TR(0x46194b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46194e:{NFSU2_TR(0x46194e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461954:{NFSU2_TR(0x461954);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46195b:{NFSU2_TR(0x46195b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461961:{NFSU2_TR(0x461961);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B461963:{NFSU2_TR(0x461963);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B461965:{NFSU2_TR(0x461965);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B461968:{NFSU2_TR(0x461968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B461969:{NFSU2_TR(0x461969);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46196b:{NFSU2_TR(0x46196b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L461971;}}
}
B46196d:L46196d:{c.instructions+=2;NFSU2_TR(0x46196d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46196f:{NFSU2_TR(0x46196f);
{goto L46197b;}
}
B461971:L461971:{c.instructions+=2;NFSU2_TR(0x461971);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B461974:{NFSU2_TR(0x461974);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46197b;}}
}
B461976:L461976:{c.instructions+=1;NFSU2_TR(0x461976);
w4(R+0,u32(0x3ull));
}
B46197b:L46197b:{c.instructions+=9;NFSU2_TR(0x46197b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46197e:{NFSU2_TR(0x46197e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461984:{NFSU2_TR(0x461984);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46198b:{NFSU2_TR(0x46198b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461991:{NFSU2_TR(0x461991);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1b58ull));
s4(u32(r4(U+0)),r4(U+4));
}
B461998:{NFSU2_TR(0x461998);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46199e:{NFSU2_TR(0x46199e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4619a0:{NFSU2_TR(0x4619a0);
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
B4619a2:{NFSU2_TR(0x4619a2);
if(r1(R+518)){{goto L4619ad;}}
}
B4619a4:L4619a4:{c.instructions+=3;NFSU2_TR(0x4619a4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4619a7:{NFSU2_TR(0x4619a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4619a8:{NFSU2_TR(0x4619a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4619adull));
TAIL_STATIC(0x735580u,735);
}
B4619ad:L4619ad:{c.instructions+=3;NFSU2_TR(0x4619ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4619ae:{NFSU2_TR(0x4619ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4619af:{NFSU2_TR(0x4619af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4619b0:L4619b0:{c.instructions+=3;NFSU2_TR(0x4619b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4619b1:{NFSU2_TR(0x4619b1);
__builtin_memmove((R+24),(R+4),4);
}
B4619b3:{NFSU2_TR(0x4619b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4619b8ull));
TAIL_STATIC(0x45dd60u,45d);
}
B4619b8:L4619b8:{c.instructions+=4;NFSU2_TR(0x4619b8);
u8 U[4];
w4(U+0,u32(0x78a2a4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4619be:{NFSU2_TR(0x4619be);
__builtin_memmove((R+0),(R+24),4);
}
B4619c0:{NFSU2_TR(0x4619c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4619c1:{NFSU2_TR(0x4619c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4619d0:L4619d0:{c.instructions+=2;NFSU2_TR(0x4619d0);
w4(R+0,u32(0x7ed484ull));
}
B4619d5:{NFSU2_TR(0x4619d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4619e0:L4619e0:{c.instructions+=2;NFSU2_TR(0x4619e0);
__builtin_memmove((R+0),gp(0x7ed488),4);
}
B4619e5:{NFSU2_TR(0x4619e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4619f0:L4619f0:{c.instructions+=7;NFSU2_TR(0x4619f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4619f1:{NFSU2_TR(0x4619f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4619f5:{NFSU2_TR(0x4619f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4619f7:{NFSU2_TR(0x4619f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4619f8:{NFSU2_TR(0x4619f8);
__builtin_memmove((R+28),(R+4),4);
}
B4619fa:{NFSU2_TR(0x4619fa);
__builtin_memmove((R+4),(R+24),4);
}
B4619fc:{NFSU2_TR(0x4619fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4619ffull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4619ff:L4619ff:{c.instructions+=4;NFSU2_TR(0x4619ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B461a01:{NFSU2_TR(0x461a01);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff0ull))));
}
B461a07:{NFSU2_TR(0x461a07);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x70ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x70ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B461a0a:{NFSU2_TR(0x461a0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L461a12;}}
}
B461a0c:L461a0c:{c.instructions+=1;NFSU2_TR(0x461a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461a12:L461a12:{c.instructions+=3;NFSU2_TR(0x461a12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B461a13:{NFSU2_TR(0x461a13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B461a14:{NFSU2_TR(0x461a14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461a20:L461a20:{c.instructions+=5;NFSU2_TR(0x461a20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461a21:{NFSU2_TR(0x461a21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461a22:{NFSU2_TR(0x461a22);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B461a28:{NFSU2_TR(0x461a28);
w4(R+28,u32(0x2ull));
}
B461a2d:{NFSU2_TR(0x461a2d);
__builtin_memmove((R+4),(R+4),4);
}
B461a30:L461a30:{c.instructions+=3;NFSU2_TR(0x461a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461a33:{NFSU2_TR(0x461a33);
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
B461a35:{NFSU2_TR(0x461a35);
if(r1(R+518)){{goto L461a3d;}}
}
B461a37:L461a37:{c.instructions+=3;NFSU2_TR(0x461a37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B461a39:{NFSU2_TR(0x461a39);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461a3b:{NFSU2_TR(0x461a3b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461a3dull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B461a3d:L461a3d:{c.instructions+=4;NFSU2_TR(0x461a3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B461a3f:{NFSU2_TR(0x461a3f);
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
B461a41:{NFSU2_TR(0x461a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B461a48:{NFSU2_TR(0x461a48);
if(r1(R+518)){{goto L461a50;}}
}
B461a4a:L461a4a:{c.instructions+=3;NFSU2_TR(0x461a4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B461a4c:{NFSU2_TR(0x461a4c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461a4e:{NFSU2_TR(0x461a4e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461a50ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B461a50:L461a50:{c.instructions+=4;NFSU2_TR(0x461a50);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B461a56:{NFSU2_TR(0x461a56);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B461a59:{NFSU2_TR(0x461a59);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B461a5a:{NFSU2_TR(0x461a5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x461a30u);}goto L461a30;}}
}
B461a5c:L461a5c:{c.instructions+=3;NFSU2_TR(0x461a5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B461a5d:{NFSU2_TR(0x461a5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B461a5e:{NFSU2_TR(0x461a5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461a60:L461a60:{c.instructions+=2;NFSU2_TR(0x461a60);
w4(R+0,u32(0x7ed494ull));
}
B461a65:{NFSU2_TR(0x461a65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461a70:L461a70:{c.instructions+=2;NFSU2_TR(0x461a70);
__builtin_memmove((R+0),gp(0x7ed498),4);
}
B461a75:{NFSU2_TR(0x461a75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461a80:L461a80:{c.instructions+=3;NFSU2_TR(0x461a80);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B461a85:{NFSU2_TR(0x461a85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461a86:{NFSU2_TR(0x461a86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461a8bull));
TAIL_STATIC(0x43e910u,43e);
}
B461a8b:L461a8b:{c.instructions+=3;NFSU2_TR(0x461a8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B461a8e:{NFSU2_TR(0x461a8e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B461a93:{NFSU2_TR(0x461a93);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L461abd;}}
}
B461a95:L461a95:{c.instructions+=6;NFSU2_TR(0x461a95);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B461a9b:{NFSU2_TR(0x461a9b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B461a9e:{NFSU2_TR(0x461a9e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B461aa4:{NFSU2_TR(0x461aa4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461aa5:{NFSU2_TR(0x461aa5);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461aaa:{NFSU2_TR(0x461aaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461aafull));
TAIL_STATIC(0x440820u,440);
}
B461aaf:L461aaf:{c.instructions+=3;NFSU2_TR(0x461aaf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B461ab2:{NFSU2_TR(0x461ab2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B461ab4:{NFSU2_TR(0x461ab4);
if(r1(R+518)){{goto L461abd;}}
}
B461ab6:L461ab6:{c.instructions+=2;NFSU2_TR(0x461ab6);
__builtin_memmove((R+4),(R+0),4);
}
B461ab8:{NFSU2_TR(0x461ab8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4619b0u);}goto L4619b0;}
}
B461abd:L461abd:{c.instructions+=2;NFSU2_TR(0x461abd);
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
B461abf:{NFSU2_TR(0x461abf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461ac0:L461ac0:{c.instructions+=2;NFSU2_TR(0x461ac0);
w4(R+0,u32(0x7ed4a4ull));
}
B461ac5:{NFSU2_TR(0x461ac5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461ad0:L461ad0:{c.instructions+=2;NFSU2_TR(0x461ad0);
__builtin_memmove((R+0),gp(0x7ed4a8),4);
}
B461ad5:{NFSU2_TR(0x461ad5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461ae0:L461ae0:{c.instructions+=4;NFSU2_TR(0x461ae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461ae4:{NFSU2_TR(0x461ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B461ae7:{NFSU2_TR(0x461ae7);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B461aea:{NFSU2_TR(0x461aea);
if(r1(R+518)){{goto L461b0e;}}
}
B461aec:L461aec:{c.instructions+=2;NFSU2_TR(0x461aec);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B461aef:{NFSU2_TR(0x461aef);
if(r1(R+518)){{goto L461b0e;}}
}
B461af1:L461af1:{c.instructions+=5;NFSU2_TR(0x461af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B461afb:{NFSU2_TR(0x461afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461afe:{NFSU2_TR(0x461afe);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B461b05:{NFSU2_TR(0x461b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461b0b:{NFSU2_TR(0x461b0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461b0e:L461b0e:{c.instructions+=5;NFSU2_TR(0x461b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461b14:{NFSU2_TR(0x461b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461b17:{NFSU2_TR(0x461b17);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B461b1e:{NFSU2_TR(0x461b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461b24:{NFSU2_TR(0x461b24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461b30:L461b30:{c.instructions+=7;NFSU2_TR(0x461b30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461b31:{NFSU2_TR(0x461b31);
__builtin_memmove((R+24),(R+4),4);
}
B461b33:{NFSU2_TR(0x461b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461b39:{NFSU2_TR(0x461b39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B461b3b:{NFSU2_TR(0x461b3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B461b41:{NFSU2_TR(0x461b41);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461b42:{NFSU2_TR(0x461b42);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461b45ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B461b45:L461b45:{c.instructions+=5;NFSU2_TR(0x461b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461b4b:{NFSU2_TR(0x461b4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B461b4d:{NFSU2_TR(0x461b4d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xd0ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xd0ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B461b53:{NFSU2_TR(0x461b53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461b54:{NFSU2_TR(0x461b54);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461b57ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B461b57:L461b57:{c.instructions+=2;NFSU2_TR(0x461b57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B461b58:{NFSU2_TR(0x461b58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461b60:L461b60:{c.instructions+=9;NFSU2_TR(0x461b60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461b61:{NFSU2_TR(0x461b61);
__builtin_memmove((R+28),(R+4),4);
}
B461b63:{NFSU2_TR(0x461b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461b69:{NFSU2_TR(0x461b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B461b70:{NFSU2_TR(0x461b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B461b77:{NFSU2_TR(0x461b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B461b7e:{NFSU2_TR(0x461b7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B461b81:{NFSU2_TR(0x461b81);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B461b83:{NFSU2_TR(0x461b83);
if(r1(R+518)){{goto L461cb3;}}
}
B461b89:L461b89:{c.instructions+=5;NFSU2_TR(0x461b89);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461b8a:{NFSU2_TR(0x461b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B461b8d:{NFSU2_TR(0x461b8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B461b93:{NFSU2_TR(0x461b93);
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
B461b95:{NFSU2_TR(0x461b95);
if(r1(R+518)){{goto L461c8c;}}
}
B461b9b:L461b9b:{c.instructions+=7;NFSU2_TR(0x461b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461b9e:{NFSU2_TR(0x461b9e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xffull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B461ba4:{NFSU2_TR(0x461ba4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461ba5:{NFSU2_TR(0x461ba5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xf0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B461bab:{NFSU2_TR(0x461bab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461bac:{NFSU2_TR(0x461bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461baf:{NFSU2_TR(0x461baf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461bb4ull));
TAIL_STATIC(0x459a50u,459);
}
B461bb4:L461bb4:{c.instructions+=4;NFSU2_TR(0x461bb4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B461bb7:{NFSU2_TR(0x461bb7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B461bb9:{NFSU2_TR(0x461bb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B461bbb:{NFSU2_TR(0x461bbb);
if(r1(R+518)){{goto L461c0f;}}
}
B461bbd:L461bbd:{c.instructions+=4;NFSU2_TR(0x461bbd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B461bc0:{NFSU2_TR(0x461bc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461bc1:{NFSU2_TR(0x461bc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461bc2:{NFSU2_TR(0x461bc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461bc7ull));
TAIL_STATIC(0x43ce10u,43c);
}
B461bc7:L461bc7:{c.instructions+=5;NFSU2_TR(0x461bc7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B461bcd:{NFSU2_TR(0x461bcd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B461bd0:{NFSU2_TR(0x461bd0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B461bd2:{NFSU2_TR(0x461bd2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B461bd5:{NFSU2_TR(0x461bd5);
if(r1(R+518)){{goto L461bdf;}}
}
B461bd7:L461bd7:{c.instructions+=2;NFSU2_TR(0x461bd7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B461bd9:{NFSU2_TR(0x461bd9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B461bdf:L461bdf:{c.instructions+=5;NFSU2_TR(0x461bdf);
{u32 ea_=u32(u32(7899232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B461be5:{NFSU2_TR(0x461be5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B461be7:{NFSU2_TR(0x461be7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B461be9:{NFSU2_TR(0x461be9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B461bec:{NFSU2_TR(0x461bec);
if(r1(R+514)){{goto L461bf6;}}
}
B461bee:L461bee:{c.instructions+=2;NFSU2_TR(0x461bee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B461bf0:{NFSU2_TR(0x461bf0);
{u32 ea_=u32(u32(7899232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B461bf6:L461bf6:{c.instructions+=4;NFSU2_TR(0x461bf6);
{u32 ea_=u32(u32(7899232u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B461bfc:{NFSU2_TR(0x461bfc);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B461c02:{NFSU2_TR(0x461c02);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B461c08:{NFSU2_TR(0x461c08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461c0dull));
TAIL_STATIC(0x75bed4u,75b);
}
B461c0d:L461c0d:{c.instructions+=1;NFSU2_TR(0x461c0d);
__builtin_memmove((R+4),(R+0),4);
}
B461c0f:L461c0f:{c.instructions+=9;NFSU2_TR(0x461c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B461c12:{NFSU2_TR(0x461c12);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B461c18:{NFSU2_TR(0x461c18);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B461c1b:{NFSU2_TR(0x461c1b);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B461c21:{NFSU2_TR(0x461c21);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xffull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B461c27:{NFSU2_TR(0x461c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461c2a:{NFSU2_TR(0x461c2a);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B461c2d:{NFSU2_TR(0x461c2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B461c2f:{NFSU2_TR(0x461c2f);
if(r1(R+518)){{goto L461c3e;}}
}
B461c31:L461c31:{c.instructions+=4;NFSU2_TR(0x461c31);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B461c33:{NFSU2_TR(0x461c33);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B461c36:{NFSU2_TR(0x461c36);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B461c38:{NFSU2_TR(0x461c38);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B461c3e:L461c3e:{c.instructions+=1;NFSU2_TR(0x461c3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461c43ull));
TAIL_STATIC(0x75bed4u,75b);
}
B461c43:L461c43:{c.instructions+=6;NFSU2_TR(0x461c43);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B461c46:{NFSU2_TR(0x461c46);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x132ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B461c4c:{NFSU2_TR(0x461c4c);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B461c4f:{NFSU2_TR(0x461c4f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B461c51:{NFSU2_TR(0x461c51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B461c52:{NFSU2_TR(0x461c52);
if(r1(R+518)){{goto L461c8c;}}
}
B461c54:L461c54:{c.instructions+=3;NFSU2_TR(0x461c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461c5a:{NFSU2_TR(0x461c5a);
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
B461c5d:{NFSU2_TR(0x461c5d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L461c8c;}}
}
B461c5f:L461c5f:{c.instructions+=2;NFSU2_TR(0x461c5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x461cc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B461c66:{NFSU2_TR(0x461c66);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x461cb8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B461c6d:L461c6d:{c.instructions+=3;NFSU2_TR(0x461c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B461c74:{NFSU2_TR(0x461c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461c77:{NFSU2_TR(0x461c77);
{goto L461c8c;}
}
B461c79:L461c79:{c.instructions+=3;NFSU2_TR(0x461c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B461c80:{NFSU2_TR(0x461c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461c83:{NFSU2_TR(0x461c83);
{goto L461c8c;}
}
B461c85:L461c85:{c.instructions+=1;NFSU2_TR(0x461c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B461c8c:L461c8c:{c.instructions+=8;NFSU2_TR(0x461c8c);
{u32 ea_=u32(r4(R+20)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B461c92:{NFSU2_TR(0x461c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461c98:{NFSU2_TR(0x461c98);
{u32 ea_=u32(r4(R+20)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B461c9e:{NFSU2_TR(0x461c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461ca4:{NFSU2_TR(0x461ca4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B461ca6:{NFSU2_TR(0x461ca6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B461ca7:{NFSU2_TR(0x461ca7);
{u32 ea_=u32(r4(R+28)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B461cad:{NFSU2_TR(0x461cad);
{u32 ea_=u32(r4(R+28)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B461cb3:L461cb3:{c.instructions+=2;NFSU2_TR(0x461cb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B461cb4:{NFSU2_TR(0x461cb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461ce0:L461ce0:{c.instructions+=7;NFSU2_TR(0x461ce0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461ce1:{NFSU2_TR(0x461ce1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461ce2:{NFSU2_TR(0x461ce2);
__builtin_memmove((R+24),(R+4),4);
}
B461ce4:{NFSU2_TR(0x461ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461cea:{NFSU2_TR(0x461cea);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B461ced:{NFSU2_TR(0x461ced);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B461cef:{NFSU2_TR(0x461cef);
if(r1(R+518)){{goto L461dc0;}}
}
B461cf5:L461cf5:{c.instructions+=4;NFSU2_TR(0x461cf5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461cf6:{NFSU2_TR(0x461cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B461cf9:{NFSU2_TR(0x461cf9);
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
B461cfb:{NFSU2_TR(0x461cfb);
if(r1(R+518)){{goto L461dbf;}}
}
B461d01:L461d01:{c.instructions+=5;NFSU2_TR(0x461d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461d07:{NFSU2_TR(0x461d07);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B461d08:{NFSU2_TR(0x461d08);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B461d0b:{NFSU2_TR(0x461d0b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461d0c:{NFSU2_TR(0x461d0c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L461d4d;}}
}
B461d0e:L461d0e:{c.instructions+=1;NFSU2_TR(0x461d0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x461dc4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B461d15:L461d15:{c.instructions+=2;NFSU2_TR(0x461d15);
w4(R+12,u32(0x1ull));
}
B461d1a:{NFSU2_TR(0x461d1a);
{goto L461d4f;}
}
B461d1c:L461d1c:{c.instructions+=2;NFSU2_TR(0x461d1c);
w4(R+12,u32(0x2ull));
}
B461d21:{NFSU2_TR(0x461d21);
{goto L461d4f;}
}
B461d23:L461d23:{c.instructions+=2;NFSU2_TR(0x461d23);
w4(R+12,u32(0x3ull));
}
B461d28:{NFSU2_TR(0x461d28);
{goto L461d4f;}
}
B461d2a:L461d2a:{c.instructions+=2;NFSU2_TR(0x461d2a);
w4(R+12,u32(0x4ull));
}
B461d2f:{NFSU2_TR(0x461d2f);
{goto L461d4f;}
}
B461d31:L461d31:{c.instructions+=2;NFSU2_TR(0x461d31);
w4(R+12,u32(0x5ull));
}
B461d36:{NFSU2_TR(0x461d36);
{goto L461d4f;}
}
B461d38:L461d38:{c.instructions+=2;NFSU2_TR(0x461d38);
w4(R+12,u32(0x6ull));
}
B461d3d:{NFSU2_TR(0x461d3d);
{goto L461d4f;}
}
B461d3f:L461d3f:{c.instructions+=2;NFSU2_TR(0x461d3f);
w4(R+12,u32(0x7ull));
}
B461d44:{NFSU2_TR(0x461d44);
{goto L461d4f;}
}
B461d46:L461d46:{c.instructions+=2;NFSU2_TR(0x461d46);
w4(R+12,u32(0x8ull));
}
B461d4b:{NFSU2_TR(0x461d4b);
{goto L461d4f;}
}
B461d4d:L461d4d:{c.instructions+=1;NFSU2_TR(0x461d4d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B461d4f:L461d4f:{c.instructions+=3;NFSU2_TR(0x461d4f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B461d55:{NFSU2_TR(0x461d55);
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
B461d57:{NFSU2_TR(0x461d57);
if(r1(R+518)){{goto L461d7d;}}
}
B461d59:L461d59:{c.instructions+=4;NFSU2_TR(0x461d59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B461d5b:{NFSU2_TR(0x461d5b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461d5c:{NFSU2_TR(0x461d5c);
__builtin_memmove((R+4),(R+24),4);
}
B461d5e:{NFSU2_TR(0x461d5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461d61ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B461d61:L461d61:{c.instructions+=5;NFSU2_TR(0x461d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461d67:{NFSU2_TR(0x461d67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B461d69:{NFSU2_TR(0x461d69);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461d6b:{NFSU2_TR(0x461d6b);
__builtin_memmove((R+4),(R+24),4);
}
B461d6d:{NFSU2_TR(0x461d6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461d70ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B461d70:L461d70:{c.instructions+=2;NFSU2_TR(0x461d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461d76:{NFSU2_TR(0x461d76);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B461d7d:L461d7d:{c.instructions+=4;NFSU2_TR(0x461d7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B461d7f:{NFSU2_TR(0x461d7f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461d80:{NFSU2_TR(0x461d80);
__builtin_memmove((R+4),(R+24),4);
}
B461d82:{NFSU2_TR(0x461d82);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461d85ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B461d85:L461d85:{c.instructions+=5;NFSU2_TR(0x461d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461d8b:{NFSU2_TR(0x461d8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B461d8d:{NFSU2_TR(0x461d8d);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461d8f:{NFSU2_TR(0x461d8f);
__builtin_memmove((R+4),(R+24),4);
}
B461d91:{NFSU2_TR(0x461d91);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461d94ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B461d94:L461d94:{c.instructions+=6;NFSU2_TR(0x461d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461d9a:{NFSU2_TR(0x461d9a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B461d9e:{NFSU2_TR(0x461d9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461d9f:{NFSU2_TR(0x461d9f);
__builtin_memmove((R+4),(R+24),4);
}
B461da1:{NFSU2_TR(0x461da1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B461da9:{NFSU2_TR(0x461da9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461daeull));
TAIL_STATIC(0x45e3d0u,45e);
}
B461dae:L461dae:{c.instructions+=4;NFSU2_TR(0x461dae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461db2:{NFSU2_TR(0x461db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461db8:{NFSU2_TR(0x461db8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461dbe:{NFSU2_TR(0x461dbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B461dbf:L461dbf:{c.instructions+=1;NFSU2_TR(0x461dbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B461dc0:L461dc0:{c.instructions+=3;NFSU2_TR(0x461dc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B461dc1:{NFSU2_TR(0x461dc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B461dc2:{NFSU2_TR(0x461dc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461df0:L461df0:{c.instructions+=3;NFSU2_TR(0x461df0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461df4:{NFSU2_TR(0x461df4);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B461df7:{NFSU2_TR(0x461df7);
if(r1(R+518)){{goto L461e0a;}}
}
B461df9:L461df9:{c.instructions+=2;NFSU2_TR(0x461df9);
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
B461dfa:{NFSU2_TR(0x461dfa);
if(r1(R+518)){{goto L461e02;}}
}
B461dfc:L461dfc:{c.instructions+=2;NFSU2_TR(0x461dfc);
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
B461dff:{NFSU2_TR(0x461dff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461e02:L461e02:{c.instructions+=2;NFSU2_TR(0x461e02);
w4(R+0,u32(0x1ull));
}
B461e07:{NFSU2_TR(0x461e07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461e0a:L461e0a:{c.instructions+=2;NFSU2_TR(0x461e0a);
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
B461e0c:{NFSU2_TR(0x461e0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461e10:L461e10:{c.instructions+=18;NFSU2_TR(0x461e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461e16:{NFSU2_TR(0x461e16);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B461e1d:{NFSU2_TR(0x461e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461e20:{NFSU2_TR(0x461e20);
{u32 ea_=u32(r4(R+0)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B461e26:{NFSU2_TR(0x461e26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B461e2c:{NFSU2_TR(0x461e2c);
{u32 ea_=u32(r4(R+0)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B461e32:{NFSU2_TR(0x461e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461e38:{NFSU2_TR(0x461e38);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B461e3a:{NFSU2_TR(0x461e3a);
{u32 ea_=u32(r4(R+4)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B461e40:{NFSU2_TR(0x461e40);
{u32 ea_=u32(r4(R+4)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B461e46:{NFSU2_TR(0x461e46);
{u32 ea_=u32(r4(R+0)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B461e4c:{NFSU2_TR(0x461e4c);
{u32 ea_=u32(r4(R+0)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B461e52:{NFSU2_TR(0x461e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461e58:{NFSU2_TR(0x461e58);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B461e5a:{NFSU2_TR(0x461e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461e60:{NFSU2_TR(0x461e60);
{u32 ea_=u32(r4(R+4)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B461e66:{NFSU2_TR(0x461e66);
{u32 ea_=u32(r4(R+4)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B461e6c:{NFSU2_TR(0x461e6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461e70:L461e70:{c.instructions+=2;NFSU2_TR(0x461e70);
w4(R+0,u32(0x7ed4b4ull));
}
B461e75:{NFSU2_TR(0x461e75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461e80:L461e80:{c.instructions+=2;NFSU2_TR(0x461e80);
__builtin_memmove((R+0),gp(0x7ed4b8),4);
}
B461e85:{NFSU2_TR(0x461e85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461e90:L461e90:{c.instructions+=4;NFSU2_TR(0x461e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461e94:{NFSU2_TR(0x461e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B461e97:{NFSU2_TR(0x461e97);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B461e9a:{NFSU2_TR(0x461e9a);
if(r1(R+518)){{goto L461ebe;}}
}
B461e9c:L461e9c:{c.instructions+=2;NFSU2_TR(0x461e9c);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B461e9f:{NFSU2_TR(0x461e9f);
if(r1(R+518)){{goto L461ebe;}}
}
B461ea1:L461ea1:{c.instructions+=5;NFSU2_TR(0x461ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B461eab:{NFSU2_TR(0x461eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461eae:{NFSU2_TR(0x461eae);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B461eb5:{NFSU2_TR(0x461eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461ebb:{NFSU2_TR(0x461ebb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461ebe:L461ebe:{c.instructions+=5;NFSU2_TR(0x461ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461ec4:{NFSU2_TR(0x461ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461ec7:{NFSU2_TR(0x461ec7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B461ece:{NFSU2_TR(0x461ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461ed4:{NFSU2_TR(0x461ed4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461ee0:L461ee0:{c.instructions+=7;NFSU2_TR(0x461ee0);
__builtin_memmove((R+0),(R+4),4);
}
B461ee2:{NFSU2_TR(0x461ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461ee8:{NFSU2_TR(0x461ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461eee:{NFSU2_TR(0x461eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B461ef0:{NFSU2_TR(0x461ef0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B461ef3:{NFSU2_TR(0x461ef3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461ef4:{NFSU2_TR(0x461ef4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461ef7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B461ef7:L461ef7:{c.instructions+=1;NFSU2_TR(0x461ef7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461f00:L461f00:{c.instructions+=6;NFSU2_TR(0x461f00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461f01:{NFSU2_TR(0x461f01);
__builtin_memmove((R+24),(R+4),4);
}
B461f03:{NFSU2_TR(0x461f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461f09:{NFSU2_TR(0x461f09);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B461f0c:{NFSU2_TR(0x461f0c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B461f0e:{NFSU2_TR(0x461f0e);
if(r1(R+518)){{goto L461f5f;}}
}
B461f10:L461f10:{c.instructions+=2;NFSU2_TR(0x461f10);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B461f14:{NFSU2_TR(0x461f14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L461f33;}}
}
B461f16:L461f16:{c.instructions+=10;NFSU2_TR(0x461f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461f19:{NFSU2_TR(0x461f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461f1c:{NFSU2_TR(0x461f1c);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B461f1f:{NFSU2_TR(0x461f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B461f22:{NFSU2_TR(0x461f22);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B461f25:{NFSU2_TR(0x461f25);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B461f28:{NFSU2_TR(0x461f28);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B461f2a:{NFSU2_TR(0x461f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B461f2d:{NFSU2_TR(0x461f2d);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B461f30:{NFSU2_TR(0x461f30);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B461f33:L461f33:{c.instructions+=3;NFSU2_TR(0x461f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461f39:{NFSU2_TR(0x461f39);
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
B461f3b:{NFSU2_TR(0x461f3b);
if(r1(R+518)){{goto L461f5f;}}
}
B461f3d:L461f3d:{c.instructions+=3;NFSU2_TR(0x461f3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B461f40:{NFSU2_TR(0x461f40);
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
B461f42:{NFSU2_TR(0x461f42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L461f5f;}}
}
B461f44:L461f44:{c.instructions+=3;NFSU2_TR(0x461f44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B461f46:{NFSU2_TR(0x461f46);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B461f48:{NFSU2_TR(0x461f48);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461f4aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B461f4a:L461f4a:{c.instructions+=4;NFSU2_TR(0x461f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B461f50:{NFSU2_TR(0x461f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B461f5a:{NFSU2_TR(0x461f5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B461f5c:{NFSU2_TR(0x461f5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x461f5full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B461f5f:L461f5f:{c.instructions+=2;NFSU2_TR(0x461f5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B461f60:{NFSU2_TR(0x461f60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461f70:L461f70:{c.instructions+=4;NFSU2_TR(0x461f70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B461f74:{NFSU2_TR(0x461f74);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B461f76:{NFSU2_TR(0x461f76);
u8 U[16];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w1(U+9,sborrow<u32>(r4(U+4),r4(U+0)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+9))!=0)));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+10,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r4(U+10)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B461f78:{NFSU2_TR(0x461f78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461f80:L461f80:{c.instructions+=2;NFSU2_TR(0x461f80);
w4(R+0,u32(0x7ed4c4ull));
}
B461f85:{NFSU2_TR(0x461f85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461f90:L461f90:{c.instructions+=2;NFSU2_TR(0x461f90);
__builtin_memmove((R+0),gp(0x7ed4c8),4);
}
B461f95:{NFSU2_TR(0x461f95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461fa0:L461fa0:{c.instructions+=2;NFSU2_TR(0x461fa0);
w4(R+0,u32(0x7ed4d4ull));
}
B461fa5:{NFSU2_TR(0x461fa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461fb0:L461fb0:{c.instructions+=2;NFSU2_TR(0x461fb0);
__builtin_memmove((R+0),gp(0x7ed4d8),4);
}
B461fb5:{NFSU2_TR(0x461fb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461fc0:L461fc0:{c.instructions+=2;NFSU2_TR(0x461fc0);
w4(R+0,u32(0x7ed4e4ull));
}
B461fc5:{NFSU2_TR(0x461fc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461fd0:L461fd0:{c.instructions+=2;NFSU2_TR(0x461fd0);
__builtin_memmove((R+0),gp(0x7ed4e8),4);
}
B461fd5:{NFSU2_TR(0x461fd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461fe0:L461fe0:{c.instructions+=2;NFSU2_TR(0x461fe0);
w4(R+0,u32(0x7ed4f4ull));
}
B461fe5:{NFSU2_TR(0x461fe5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B461ff0:L461ff0:{c.instructions+=2;NFSU2_TR(0x461ff0);
__builtin_memmove((R+0),gp(0x7ed4f8),4);
}
B461ff5:{NFSU2_TR(0x461ff5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x461,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
