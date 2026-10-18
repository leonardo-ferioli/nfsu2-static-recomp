#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_491(u8* __restrict R,Cpu& c);
u32 body_493(u8* __restrict R,Cpu& c);
u32 body_4a6(u8* __restrict R,Cpu& c);
u32 body_4a8(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52f(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4a7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4a7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 page_4a7(Cpu& c){return body_4a7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4a7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4a7006:goto L4a7006;
case 0x4a700d:c.instructions+=16;goto B4a700d;
case 0x4a7010:c.instructions+=15;goto B4a7010;
case 0x4a7013:c.instructions+=14;goto B4a7013;
case 0x4a7015:c.instructions+=13;goto B4a7015;
case 0x4a701c:c.instructions+=12;goto B4a701c;
case 0x4a7020:c.instructions+=11;goto B4a7020;
case 0x4a7022:c.instructions+=10;goto B4a7022;
case 0x4a7029:c.instructions+=9;goto B4a7029;
case 0x4a7030:c.instructions+=8;goto B4a7030;
case 0x4a7037:c.instructions+=7;goto B4a7037;
case 0x4a7039:c.instructions+=6;goto B4a7039;
case 0x4a703f:c.instructions+=5;goto B4a703f;
case 0x4a7043:c.instructions+=4;goto B4a7043;
case 0x4a7045:c.instructions+=3;goto B4a7045;
case 0x4a7047:c.instructions+=2;goto B4a7047;
case 0x4a704a:c.instructions+=1;goto B4a704a;
case 0x4a704c:goto L4a704c;
case 0x4a704e:c.instructions+=1;goto B4a704e;
case 0x4a7052:goto L4a7052;
case 0x4a7059:c.instructions+=13;goto B4a7059;
case 0x4a705d:c.instructions+=12;goto B4a705d;
case 0x4a705f:c.instructions+=11;goto B4a705f;
case 0x4a7062:c.instructions+=10;goto B4a7062;
case 0x4a7065:c.instructions+=9;goto B4a7065;
case 0x4a7068:c.instructions+=8;goto B4a7068;
case 0x4a706e:c.instructions+=7;goto B4a706e;
case 0x4a7075:c.instructions+=6;goto B4a7075;
case 0x4a707c:c.instructions+=5;goto B4a707c;
case 0x4a7080:c.instructions+=4;goto B4a7080;
case 0x4a7082:c.instructions+=3;goto B4a7082;
case 0x4a7089:c.instructions+=2;goto B4a7089;
case 0x4a708b:c.instructions+=1;goto B4a708b;
case 0x4a7091:goto L4a7091;
case 0x4a7094:c.instructions+=4;goto B4a7094;
case 0x4a709b:c.instructions+=3;goto B4a709b;
case 0x4a70a1:c.instructions+=2;goto B4a70a1;
case 0x4a70a9:c.instructions+=1;goto B4a70a9;
case 0x4a70b0:goto L4a70b0;
case 0x4a70b1:c.instructions+=2;goto B4a70b1;
case 0x4a70b2:c.instructions+=1;goto B4a70b2;
case 0x4a70b7:goto L4a70b7;
case 0x4a70bb:c.instructions+=6;goto B4a70bb;
case 0x4a70be:c.instructions+=5;goto B4a70be;
case 0x4a70c1:c.instructions+=4;goto B4a70c1;
case 0x4a70c4:c.instructions+=3;goto B4a70c4;
case 0x4a70c5:c.instructions+=2;goto B4a70c5;
case 0x4a70c9:c.instructions+=1;goto B4a70c9;
case 0x4a70cb:goto L4a70cb;
case 0x4a70ce:c.instructions+=3;goto B4a70ce;
case 0x4a70d5:c.instructions+=2;goto B4a70d5;
case 0x4a70db:c.instructions+=1;goto B4a70db;
case 0x4a70e3:goto L4a70e3;
case 0x4a70e4:c.instructions+=2;goto B4a70e4;
case 0x4a70e5:c.instructions+=1;goto B4a70e5;
case 0x4a70ea:goto L4a70ea;
case 0x4a70ee:c.instructions+=6;goto B4a70ee;
case 0x4a70f1:c.instructions+=5;goto B4a70f1;
case 0x4a70f4:c.instructions+=4;goto B4a70f4;
case 0x4a70f7:c.instructions+=3;goto B4a70f7;
case 0x4a70f8:c.instructions+=2;goto B4a70f8;
case 0x4a70fc:c.instructions+=1;goto B4a70fc;
case 0x4a70fe:goto L4a70fe;
case 0x4a7103:c.instructions+=2;goto B4a7103;
case 0x4a7106:c.instructions+=1;goto B4a7106;
case 0x4a7108:goto L4a7108;
case 0x4a710c:c.instructions+=3;goto B4a710c;
case 0x4a7112:c.instructions+=2;goto B4a7112;
case 0x4a7118:c.instructions+=1;goto B4a7118;
case 0x4a711a:goto L4a711a;
case 0x4a711d:c.instructions+=2;goto B4a711d;
case 0x4a711f:c.instructions+=1;goto B4a711f;
case 0x4a7121:goto L4a7121;
case 0x4a7123:c.instructions+=4;goto B4a7123;
case 0x4a712e:c.instructions+=3;goto B4a712e;
case 0x4a7139:c.instructions+=2;goto B4a7139;
case 0x4a7144:c.instructions+=1;goto B4a7144;
case 0x4a7149:goto L4a7149;
case 0x4a714f:c.instructions+=11;goto B4a714f;
case 0x4a7152:c.instructions+=10;goto B4a7152;
case 0x4a7155:c.instructions+=9;goto B4a7155;
case 0x4a7156:c.instructions+=8;goto B4a7156;
case 0x4a7157:c.instructions+=7;goto B4a7157;
case 0x4a715d:c.instructions+=6;goto B4a715d;
case 0x4a7164:c.instructions+=5;goto B4a7164;
case 0x4a7165:c.instructions+=4;goto B4a7165;
case 0x4a7169:c.instructions+=3;goto B4a7169;
case 0x4a716a:c.instructions+=2;goto B4a716a;
case 0x4a716d:c.instructions+=1;goto B4a716d;
case 0x4a7172:goto L4a7172;
case 0x4a7173:c.instructions+=5;goto B4a7173;
case 0x4a7174:c.instructions+=4;goto B4a7174;
case 0x4a7175:c.instructions+=3;goto B4a7175;
case 0x4a7177:c.instructions+=2;goto B4a7177;
case 0x4a7178:c.instructions+=1;goto B4a7178;
case 0x4a7180:goto L4a7180;
case 0x4a7181:c.instructions+=7;goto B4a7181;
case 0x4a7183:c.instructions+=6;goto B4a7183;
case 0x4a7186:c.instructions+=5;goto B4a7186;
case 0x4a7187:c.instructions+=4;goto B4a7187;
case 0x4a7188:c.instructions+=3;goto B4a7188;
case 0x4a7189:c.instructions+=2;goto B4a7189;
case 0x4a718b:c.instructions+=1;goto B4a718b;
case 0x4a7190:goto L4a7190;
case 0x4a7193:c.instructions+=2;goto B4a7193;
case 0x4a7195:c.instructions+=1;goto B4a7195;
case 0x4a719a:goto L4a719a;
case 0x4a71a0:c.instructions+=2;goto B4a71a0;
case 0x4a71a2:c.instructions+=1;goto B4a71a2;
case 0x4a71a7:goto L4a71a7;
case 0x4a71ad:c.instructions+=2;goto B4a71ad;
case 0x4a71b0:c.instructions+=1;goto B4a71b0;
case 0x4a71b5:goto L4a71b5;
case 0x4a71bb:c.instructions+=2;goto B4a71bb;
case 0x4a71be:c.instructions+=1;goto B4a71be;
case 0x4a71c3:goto L4a71c3;
case 0x4a71c9:c.instructions+=2;goto B4a71c9;
case 0x4a71cc:c.instructions+=1;goto B4a71cc;
case 0x4a71d1:goto L4a71d1;
case 0x4a71d7:c.instructions+=2;goto B4a71d7;
case 0x4a71da:c.instructions+=1;goto B4a71da;
case 0x4a71df:goto L4a71df;
case 0x4a71e4:c.instructions+=1;goto B4a71e4;
case 0x4a71e9:goto L4a71e9;
case 0x4a71ee:goto L4a71ee;
case 0x4a71f1:c.instructions+=6;goto B4a71f1;
case 0x4a71f8:c.instructions+=5;goto B4a71f8;
case 0x4a71f9:c.instructions+=4;goto B4a71f9;
case 0x4a71fc:c.instructions+=3;goto B4a71fc;
case 0x4a7201:c.instructions+=2;goto B4a7201;
case 0x4a7202:c.instructions+=1;goto B4a7202;
case 0x4a7207:goto L4a7207;
case 0x4a720a:c.instructions+=2;goto B4a720a;
case 0x4a720b:c.instructions+=1;goto B4a720b;
case 0x4a7210:goto L4a7210;
case 0x4a7211:c.instructions+=1;goto B4a7211;
case 0x4a7216:goto L4a7216;
case 0x4a7219:c.instructions+=6;goto B4a7219;
case 0x4a7220:c.instructions+=5;goto B4a7220;
case 0x4a7221:c.instructions+=4;goto B4a7221;
case 0x4a7224:c.instructions+=3;goto B4a7224;
case 0x4a7229:c.instructions+=2;goto B4a7229;
case 0x4a722a:c.instructions+=1;goto B4a722a;
case 0x4a722f:goto L4a722f;
case 0x4a7231:c.instructions+=8;goto B4a7231;
case 0x4a7233:c.instructions+=7;goto B4a7233;
case 0x4a7235:c.instructions+=6;goto B4a7235;
case 0x4a7237:c.instructions+=5;goto B4a7237;
case 0x4a7239:c.instructions+=4;goto B4a7239;
case 0x4a723c:c.instructions+=3;goto B4a723c;
case 0x4a723e:c.instructions+=2;goto B4a723e;
case 0x4a723f:c.instructions+=1;goto B4a723f;
case 0x4a7244:goto L4a7244;
case 0x4a7247:c.instructions+=1;goto B4a7247;
case 0x4a724c:goto L4a724c;
case 0x4a724e:c.instructions+=1;goto B4a724e;
case 0x4a7250:goto L4a7250;
case 0x4a7255:goto L4a7255;
case 0x4a725a:goto L4a725a;
case 0x4a725c:c.instructions+=1;goto B4a725c;
case 0x4a725e:goto L4a725e;
case 0x4a7261:c.instructions+=3;goto B4a7261;
case 0x4a7268:c.instructions+=2;goto B4a7268;
case 0x4a7269:c.instructions+=1;goto B4a7269;
case 0x4a726e:goto L4a726e;
case 0x4a726f:c.instructions+=1;goto B4a726f;
case 0x4a7274:goto L4a7274;
case 0x4a7277:c.instructions+=3;goto B4a7277;
case 0x4a727a:c.instructions+=2;goto B4a727a;
case 0x4a727c:c.instructions+=1;goto B4a727c;
case 0x4a727e:goto L4a727e;
case 0x4a7284:goto L4a7284;
case 0x4a7287:c.instructions+=2;goto B4a7287;
case 0x4a7289:c.instructions+=1;goto B4a7289;
case 0x4a728b:goto L4a728b;
case 0x4a7291:goto L4a7291;
case 0x4a7296:c.instructions+=2;goto B4a7296;
case 0x4a7299:c.instructions+=1;goto B4a7299;
case 0x4a729e:goto L4a729e;
case 0x4a72a1:c.instructions+=3;goto B4a72a1;
case 0x4a72a2:c.instructions+=2;goto B4a72a2;
case 0x4a72a4:c.instructions+=1;goto B4a72a4;
case 0x4a72a9:goto L4a72a9;
case 0x4a72ae:c.instructions+=1;goto B4a72ae;
case 0x4a72b3:goto L4a72b3;
case 0x4a72b6:c.instructions+=3;goto B4a72b6;
case 0x4a72b7:c.instructions+=2;goto B4a72b7;
case 0x4a72b9:c.instructions+=1;goto B4a72b9;
case 0x4a72be:goto L4a72be;
case 0x4a72c3:c.instructions+=1;goto B4a72c3;
case 0x4a72c8:goto L4a72c8;
case 0x4a72cb:c.instructions+=3;goto B4a72cb;
case 0x4a72ce:c.instructions+=2;goto B4a72ce;
case 0x4a72cf:c.instructions+=1;goto B4a72cf;
case 0x4a72d4:goto L4a72d4;
case 0x4a72d9:c.instructions+=1;goto B4a72d9;
case 0x4a72de:goto L4a72de;
case 0x4a72e1:c.instructions+=3;goto B4a72e1;
case 0x4a72e4:c.instructions+=2;goto B4a72e4;
case 0x4a72e5:c.instructions+=1;goto B4a72e5;
case 0x4a72ea:goto L4a72ea;
case 0x4a72ef:c.instructions+=1;goto B4a72ef;
case 0x4a72f4:goto L4a72f4;
case 0x4a72f7:c.instructions+=3;goto B4a72f7;
case 0x4a72fa:c.instructions+=2;goto B4a72fa;
case 0x4a72fb:c.instructions+=1;goto B4a72fb;
case 0x4a7300:goto L4a7300;
case 0x4a7305:c.instructions+=1;goto B4a7305;
case 0x4a730a:goto L4a730a;
case 0x4a730d:c.instructions+=3;goto B4a730d;
case 0x4a7310:c.instructions+=2;goto B4a7310;
case 0x4a7311:c.instructions+=1;goto B4a7311;
case 0x4a7316:goto L4a7316;
case 0x4a731b:goto L4a731b;
case 0x4a731c:c.instructions+=5;goto B4a731c;
case 0x4a731d:c.instructions+=4;goto B4a731d;
case 0x4a731e:c.instructions+=3;goto B4a731e;
case 0x4a7320:c.instructions+=2;goto B4a7320;
case 0x4a7321:c.instructions+=1;goto B4a7321;
case 0x4a7330:goto L4a7330;
case 0x4a7331:c.instructions+=12;goto B4a7331;
case 0x4a7333:c.instructions+=11;goto B4a7333;
case 0x4a7336:c.instructions+=10;goto B4a7336;
case 0x4a7339:c.instructions+=9;goto B4a7339;
case 0x4a733a:c.instructions+=8;goto B4a733a;
case 0x4a733b:c.instructions+=7;goto B4a733b;
case 0x4a733d:c.instructions+=6;goto B4a733d;
case 0x4a7343:c.instructions+=5;goto B4a7343;
case 0x4a7344:c.instructions+=4;goto B4a7344;
case 0x4a7346:c.instructions+=3;goto B4a7346;
case 0x4a7348:c.instructions+=2;goto B4a7348;
case 0x4a734c:c.instructions+=1;goto B4a734c;
case 0x4a7352:goto L4a7352;
case 0x4a7355:c.instructions+=2;goto B4a7355;
case 0x4a7357:c.instructions+=1;goto B4a7357;
case 0x4a7359:goto L4a7359;
case 0x4a735b:c.instructions+=1;goto B4a735b;
case 0x4a735d:goto L4a735d;
case 0x4a7363:c.instructions+=1;goto B4a7363;
case 0x4a7364:goto L4a7364;
case 0x4a7369:goto L4a7369;
case 0x4a736b:c.instructions+=7;goto B4a736b;
case 0x4a736f:c.instructions+=6;goto B4a736f;
case 0x4a7372:c.instructions+=5;goto B4a7372;
case 0x4a7375:c.instructions+=4;goto B4a7375;
case 0x4a7378:c.instructions+=3;goto B4a7378;
case 0x4a737a:c.instructions+=2;goto B4a737a;
case 0x4a737e:c.instructions+=1;goto B4a737e;
case 0x4a7380:goto L4a7380;
case 0x4a7382:c.instructions+=1;goto B4a7382;
case 0x4a7387:goto L4a7387;
case 0x4a7389:c.instructions+=2;goto B4a7389;
case 0x4a738d:c.instructions+=1;goto B4a738d;
case 0x4a738f:goto L4a738f;
case 0x4a7391:c.instructions+=1;goto B4a7391;
case 0x4a7396:goto L4a7396;
case 0x4a739a:c.instructions+=1;goto B4a739a;
case 0x4a739c:goto L4a739c;
case 0x4a739f:c.instructions+=2;goto B4a739f;
case 0x4a73a1:c.instructions+=1;goto B4a73a1;
case 0x4a73a7:goto L4a73a7;
case 0x4a73ac:c.instructions+=1;goto B4a73ac;
case 0x4a73b1:goto L4a73b1;
case 0x4a73b7:c.instructions+=24;goto B4a73b7;
case 0x4a73bd:c.instructions+=23;goto B4a73bd;
case 0x4a73c1:c.instructions+=22;goto B4a73c1;
case 0x4a73c6:c.instructions+=21;goto B4a73c6;
case 0x4a73c8:c.instructions+=20;goto B4a73c8;
case 0x4a73cb:c.instructions+=19;goto B4a73cb;
case 0x4a73ce:c.instructions+=18;goto B4a73ce;
case 0x4a73d1:c.instructions+=17;goto B4a73d1;
case 0x4a73d6:c.instructions+=16;goto B4a73d6;
case 0x4a73d9:c.instructions+=15;goto B4a73d9;
case 0x4a73dc:c.instructions+=14;goto B4a73dc;
case 0x4a73df:c.instructions+=13;goto B4a73df;
case 0x4a73e1:c.instructions+=12;goto B4a73e1;
case 0x4a73e4:c.instructions+=11;goto B4a73e4;
case 0x4a73e7:c.instructions+=10;goto B4a73e7;
case 0x4a73ea:c.instructions+=9;goto B4a73ea;
case 0x4a73ed:c.instructions+=8;goto B4a73ed;
case 0x4a73f0:c.instructions+=7;goto B4a73f0;
case 0x4a73f3:c.instructions+=6;goto B4a73f3;
case 0x4a73f6:c.instructions+=5;goto B4a73f6;
case 0x4a73f9:c.instructions+=4;goto B4a73f9;
case 0x4a73fc:c.instructions+=3;goto B4a73fc;
case 0x4a73ff:c.instructions+=2;goto B4a73ff;
case 0x4a7402:c.instructions+=1;goto B4a7402;
case 0x4a7404:goto L4a7404;
case 0x4a740b:goto L4a740b;
case 0x4a740f:c.instructions+=7;goto B4a740f;
case 0x4a7410:c.instructions+=6;goto B4a7410;
case 0x4a7411:c.instructions+=5;goto B4a7411;
case 0x4a7412:c.instructions+=4;goto B4a7412;
case 0x4a7413:c.instructions+=3;goto B4a7413;
case 0x4a7419:c.instructions+=2;goto B4a7419;
case 0x4a741a:c.instructions+=1;goto B4a741a;
case 0x4a741f:goto L4a741f;
case 0x4a7422:c.instructions+=1;goto B4a7422;
case 0x4a7428:goto L4a7428;
case 0x4a742e:c.instructions+=31;goto B4a742e;
case 0x4a7431:c.instructions+=30;goto B4a7431;
case 0x4a7436:c.instructions+=29;goto B4a7436;
case 0x4a7438:c.instructions+=28;goto B4a7438;
case 0x4a743b:c.instructions+=27;goto B4a743b;
case 0x4a743e:c.instructions+=26;goto B4a743e;
case 0x4a7441:c.instructions+=25;goto B4a7441;
case 0x4a7447:c.instructions+=24;goto B4a7447;
case 0x4a7448:c.instructions+=23;goto B4a7448;
case 0x4a7449:c.instructions+=22;goto B4a7449;
case 0x4a744c:c.instructions+=21;goto B4a744c;
case 0x4a744f:c.instructions+=20;goto B4a744f;
case 0x4a7452:c.instructions+=19;goto B4a7452;
case 0x4a7455:c.instructions+=18;goto B4a7455;
case 0x4a7458:c.instructions+=17;goto B4a7458;
case 0x4a745b:c.instructions+=16;goto B4a745b;
case 0x4a745e:c.instructions+=15;goto B4a745e;
case 0x4a7461:c.instructions+=14;goto B4a7461;
case 0x4a7464:c.instructions+=13;goto B4a7464;
case 0x4a7467:c.instructions+=12;goto B4a7467;
case 0x4a746a:c.instructions+=11;goto B4a746a;
case 0x4a746d:c.instructions+=10;goto B4a746d;
case 0x4a7470:c.instructions+=9;goto B4a7470;
case 0x4a7476:c.instructions+=8;goto B4a7476;
case 0x4a7477:c.instructions+=7;goto B4a7477;
case 0x4a747a:c.instructions+=6;goto B4a747a;
case 0x4a747b:c.instructions+=5;goto B4a747b;
case 0x4a7481:c.instructions+=4;goto B4a7481;
case 0x4a7484:c.instructions+=3;goto B4a7484;
case 0x4a7488:c.instructions+=2;goto B4a7488;
case 0x4a7489:c.instructions+=1;goto B4a7489;
case 0x4a748e:goto L4a748e;
case 0x4a7494:c.instructions+=6;goto B4a7494;
case 0x4a7499:c.instructions+=5;goto B4a7499;
case 0x4a749d:c.instructions+=4;goto B4a749d;
case 0x4a74a1:c.instructions+=3;goto B4a74a1;
case 0x4a74a5:c.instructions+=2;goto B4a74a5;
case 0x4a74ab:c.instructions+=1;goto B4a74ab;
case 0x4a74ad:goto L4a74ad;
case 0x4a74b1:goto L4a74b1;
case 0x4a74b5:c.instructions+=21;goto B4a74b5;
case 0x4a74ba:c.instructions+=20;goto B4a74ba;
case 0x4a74bd:c.instructions+=19;goto B4a74bd;
case 0x4a74bf:c.instructions+=18;goto B4a74bf;
case 0x4a74c2:c.instructions+=17;goto B4a74c2;
case 0x4a74c5:c.instructions+=16;goto B4a74c5;
case 0x4a74c8:c.instructions+=15;goto B4a74c8;
case 0x4a74cc:c.instructions+=14;goto B4a74cc;
case 0x4a74cf:c.instructions+=13;goto B4a74cf;
case 0x4a74d1:c.instructions+=12;goto B4a74d1;
case 0x4a74d4:c.instructions+=11;goto B4a74d4;
case 0x4a74d7:c.instructions+=10;goto B4a74d7;
case 0x4a74da:c.instructions+=9;goto B4a74da;
case 0x4a74dd:c.instructions+=8;goto B4a74dd;
case 0x4a74e0:c.instructions+=7;goto B4a74e0;
case 0x4a74e3:c.instructions+=6;goto B4a74e3;
case 0x4a74e6:c.instructions+=5;goto B4a74e6;
case 0x4a74e9:c.instructions+=4;goto B4a74e9;
case 0x4a74ec:c.instructions+=3;goto B4a74ec;
case 0x4a74ef:c.instructions+=2;goto B4a74ef;
case 0x4a74f5:c.instructions+=1;goto B4a74f5;
case 0x4a74f7:goto L4a74f7;
case 0x4a74fd:c.instructions+=2;goto B4a74fd;
case 0x4a7503:c.instructions+=1;goto B4a7503;
case 0x4a7508:goto L4a7508;
case 0x4a750a:c.instructions+=11;goto B4a750a;
case 0x4a750f:c.instructions+=10;goto B4a750f;
case 0x4a7511:c.instructions+=9;goto B4a7511;
case 0x4a7513:c.instructions+=8;goto B4a7513;
case 0x4a7516:c.instructions+=7;goto B4a7516;
case 0x4a7518:c.instructions+=6;goto B4a7518;
case 0x4a751b:c.instructions+=5;goto B4a751b;
case 0x4a751d:c.instructions+=4;goto B4a751d;
case 0x4a751e:c.instructions+=3;goto B4a751e;
case 0x4a751f:c.instructions+=2;goto B4a751f;
case 0x4a7520:c.instructions+=1;goto B4a7520;
case 0x4a7525:goto L4a7525;
case 0x4a7529:c.instructions+=11;goto B4a7529;
case 0x4a752d:c.instructions+=10;goto B4a752d;
case 0x4a7531:c.instructions+=9;goto B4a7531;
case 0x4a7532:c.instructions+=8;goto B4a7532;
case 0x4a7535:c.instructions+=7;goto B4a7535;
case 0x4a7536:c.instructions+=6;goto B4a7536;
case 0x4a753a:c.instructions+=5;goto B4a753a;
case 0x4a753f:c.instructions+=4;goto B4a753f;
case 0x4a7540:c.instructions+=3;goto B4a7540;
case 0x4a7541:c.instructions+=2;goto B4a7541;
case 0x4a7542:c.instructions+=1;goto B4a7542;
case 0x4a7547:goto L4a7547;
case 0x4a754b:c.instructions+=1;goto B4a754b;
case 0x4a754e:goto L4a754e;
case 0x4a7551:c.instructions+=8;goto B4a7551;
case 0x4a7554:c.instructions+=7;goto B4a7554;
case 0x4a7556:c.instructions+=6;goto B4a7556;
case 0x4a7559:c.instructions+=5;goto B4a7559;
case 0x4a755c:c.instructions+=4;goto B4a755c;
case 0x4a755f:c.instructions+=3;goto B4a755f;
case 0x4a7565:c.instructions+=2;goto B4a7565;
case 0x4a756b:c.instructions+=1;goto B4a756b;
case 0x4a7570:goto L4a7570;
case 0x4a7572:c.instructions+=11;goto B4a7572;
case 0x4a7577:c.instructions+=10;goto B4a7577;
case 0x4a7579:c.instructions+=9;goto B4a7579;
case 0x4a757b:c.instructions+=8;goto B4a757b;
case 0x4a757e:c.instructions+=7;goto B4a757e;
case 0x4a7580:c.instructions+=6;goto B4a7580;
case 0x4a7583:c.instructions+=5;goto B4a7583;
case 0x4a7585:c.instructions+=4;goto B4a7585;
case 0x4a7586:c.instructions+=3;goto B4a7586;
case 0x4a7587:c.instructions+=2;goto B4a7587;
case 0x4a7588:c.instructions+=1;goto B4a7588;
case 0x4a758d:goto L4a758d;
case 0x4a7591:c.instructions+=9;goto B4a7591;
case 0x4a7595:c.instructions+=8;goto B4a7595;
case 0x4a7598:c.instructions+=7;goto B4a7598;
case 0x4a7599:c.instructions+=6;goto B4a7599;
case 0x4a759a:c.instructions+=5;goto B4a759a;
case 0x4a759b:c.instructions+=4;goto B4a759b;
case 0x4a759c:c.instructions+=3;goto B4a759c;
case 0x4a75a0:c.instructions+=2;goto B4a75a0;
case 0x4a75a1:c.instructions+=1;goto B4a75a1;
case 0x4a75a6:goto L4a75a6;
case 0x4a75aa:c.instructions+=8;goto B4a75aa;
case 0x4a75ae:c.instructions+=7;goto B4a75ae;
case 0x4a75b1:c.instructions+=6;goto B4a75b1;
case 0x4a75b4:c.instructions+=5;goto B4a75b4;
case 0x4a75b7:c.instructions+=4;goto B4a75b7;
case 0x4a75bc:c.instructions+=3;goto B4a75bc;
case 0x4a75c0:c.instructions+=2;goto B4a75c0;
case 0x4a75c4:c.instructions+=1;goto B4a75c4;
case 0x4a75ca:goto L4a75ca;
case 0x4a75ce:c.instructions+=6;goto B4a75ce;
case 0x4a75d2:c.instructions+=5;goto B4a75d2;
case 0x4a75d5:c.instructions+=4;goto B4a75d5;
case 0x4a75d9:c.instructions+=3;goto B4a75d9;
case 0x4a75df:c.instructions+=2;goto B4a75df;
case 0x4a75e7:c.instructions+=1;goto B4a75e7;
case 0x4a75f0:goto L4a75f0;
case 0x4a75f4:c.instructions+=2;goto B4a75f4;
case 0x4a75f7:c.instructions+=1;goto B4a75f7;
case 0x4a75fd:goto L4a75fd;
case 0x4a7601:c.instructions+=21;goto B4a7601;
case 0x4a7606:c.instructions+=20;goto B4a7606;
case 0x4a7609:c.instructions+=19;goto B4a7609;
case 0x4a760b:c.instructions+=18;goto B4a760b;
case 0x4a760e:c.instructions+=17;goto B4a760e;
case 0x4a7611:c.instructions+=16;goto B4a7611;
case 0x4a7614:c.instructions+=15;goto B4a7614;
case 0x4a7617:c.instructions+=14;goto B4a7617;
case 0x4a7619:c.instructions+=13;goto B4a7619;
case 0x4a761c:c.instructions+=12;goto B4a761c;
case 0x4a761f:c.instructions+=11;goto B4a761f;
case 0x4a7622:c.instructions+=10;goto B4a7622;
case 0x4a7625:c.instructions+=9;goto B4a7625;
case 0x4a7628:c.instructions+=8;goto B4a7628;
case 0x4a762b:c.instructions+=7;goto B4a762b;
case 0x4a762e:c.instructions+=6;goto B4a762e;
case 0x4a7631:c.instructions+=5;goto B4a7631;
case 0x4a7634:c.instructions+=4;goto B4a7634;
case 0x4a7637:c.instructions+=3;goto B4a7637;
case 0x4a763d:c.instructions+=2;goto B4a763d;
case 0x4a7643:c.instructions+=1;goto B4a7643;
case 0x4a7648:goto L4a7648;
case 0x4a764a:c.instructions+=11;goto B4a764a;
case 0x4a764f:c.instructions+=10;goto B4a764f;
case 0x4a7651:c.instructions+=9;goto B4a7651;
case 0x4a7653:c.instructions+=8;goto B4a7653;
case 0x4a7656:c.instructions+=7;goto B4a7656;
case 0x4a7658:c.instructions+=6;goto B4a7658;
case 0x4a765b:c.instructions+=5;goto B4a765b;
case 0x4a765d:c.instructions+=4;goto B4a765d;
case 0x4a765e:c.instructions+=3;goto B4a765e;
case 0x4a765f:c.instructions+=2;goto B4a765f;
case 0x4a7660:c.instructions+=1;goto B4a7660;
case 0x4a7665:goto L4a7665;
case 0x4a7669:c.instructions+=16;goto B4a7669;
case 0x4a766b:c.instructions+=15;goto B4a766b;
case 0x4a766e:c.instructions+=14;goto B4a766e;
case 0x4a7675:c.instructions+=13;goto B4a7675;
case 0x4a7678:c.instructions+=12;goto B4a7678;
case 0x4a767a:c.instructions+=11;goto B4a767a;
case 0x4a767d:c.instructions+=10;goto B4a767d;
case 0x4a7684:c.instructions+=9;goto B4a7684;
case 0x4a7687:c.instructions+=8;goto B4a7687;
case 0x4a7689:c.instructions+=7;goto B4a7689;
case 0x4a768f:c.instructions+=6;goto B4a768f;
case 0x4a7692:c.instructions+=5;goto B4a7692;
case 0x4a7699:c.instructions+=4;goto B4a7699;
case 0x4a769c:c.instructions+=3;goto B4a769c;
case 0x4a76a2:c.instructions+=2;goto B4a76a2;
case 0x4a76a8:c.instructions+=1;goto B4a76a8;
case 0x4a76ad:goto L4a76ad;
case 0x4a76af:c.instructions+=11;goto B4a76af;
case 0x4a76b4:c.instructions+=10;goto B4a76b4;
case 0x4a76b6:c.instructions+=9;goto B4a76b6;
case 0x4a76b8:c.instructions+=8;goto B4a76b8;
case 0x4a76bb:c.instructions+=7;goto B4a76bb;
case 0x4a76bd:c.instructions+=6;goto B4a76bd;
case 0x4a76c0:c.instructions+=5;goto B4a76c0;
case 0x4a76c2:c.instructions+=4;goto B4a76c2;
case 0x4a76c3:c.instructions+=3;goto B4a76c3;
case 0x4a76c4:c.instructions+=2;goto B4a76c4;
case 0x4a76c5:c.instructions+=1;goto B4a76c5;
case 0x4a76ca:goto L4a76ca;
case 0x4a76ce:c.instructions+=10;goto B4a76ce;
case 0x4a76d2:c.instructions+=9;goto B4a76d2;
case 0x4a76d5:c.instructions+=8;goto B4a76d5;
case 0x4a76d6:c.instructions+=7;goto B4a76d6;
case 0x4a76d7:c.instructions+=6;goto B4a76d7;
case 0x4a76d8:c.instructions+=5;goto B4a76d8;
case 0x4a76dc:c.instructions+=4;goto B4a76dc;
case 0x4a76dd:c.instructions+=3;goto B4a76dd;
case 0x4a76e3:c.instructions+=2;goto B4a76e3;
case 0x4a76e4:c.instructions+=1;goto B4a76e4;
case 0x4a76e9:goto L4a76e9;
case 0x4a76ed:c.instructions+=7;goto B4a76ed;
case 0x4a76f1:c.instructions+=6;goto B4a76f1;
case 0x4a76f4:c.instructions+=5;goto B4a76f4;
case 0x4a76f7:c.instructions+=4;goto B4a76f7;
case 0x4a76f8:c.instructions+=3;goto B4a76f8;
case 0x4a76fc:c.instructions+=2;goto B4a76fc;
case 0x4a7700:c.instructions+=1;goto B4a7700;
case 0x4a7706:goto L4a7706;
case 0x4a7707:c.instructions+=5;goto B4a7707;
case 0x4a7708:c.instructions+=4;goto B4a7708;
case 0x4a7709:c.instructions+=3;goto B4a7709;
case 0x4a770b:c.instructions+=2;goto B4a770b;
case 0x4a770c:c.instructions+=1;goto B4a770c;
case 0x4a770f:goto L4a770f;
case 0x4a7712:c.instructions+=23;goto B4a7712;
case 0x4a7717:c.instructions+=22;goto B4a7717;
case 0x4a7719:c.instructions+=21;goto B4a7719;
case 0x4a771c:c.instructions+=20;goto B4a771c;
case 0x4a771f:c.instructions+=19;goto B4a771f;
case 0x4a7722:c.instructions+=18;goto B4a7722;
case 0x4a7725:c.instructions+=17;goto B4a7725;
case 0x4a7728:c.instructions+=16;goto B4a7728;
case 0x4a772b:c.instructions+=15;goto B4a772b;
case 0x4a772e:c.instructions+=14;goto B4a772e;
case 0x4a7731:c.instructions+=13;goto B4a7731;
case 0x4a7734:c.instructions+=12;goto B4a7734;
case 0x4a7737:c.instructions+=11;goto B4a7737;
case 0x4a773a:c.instructions+=10;goto B4a773a;
case 0x4a773d:c.instructions+=9;goto B4a773d;
case 0x4a7740:c.instructions+=8;goto B4a7740;
case 0x4a7743:c.instructions+=7;goto B4a7743;
case 0x4a7746:c.instructions+=6;goto B4a7746;
case 0x4a7749:c.instructions+=5;goto B4a7749;
case 0x4a774b:c.instructions+=4;goto B4a774b;
case 0x4a774e:c.instructions+=3;goto B4a774e;
case 0x4a7753:c.instructions+=2;goto B4a7753;
case 0x4a7754:c.instructions+=1;goto B4a7754;
case 0x4a7759:goto L4a7759;
case 0x4a775a:c.instructions+=3;goto B4a775a;
case 0x4a775b:c.instructions+=2;goto B4a775b;
case 0x4a775c:c.instructions+=1;goto B4a775c;
case 0x4a7761:goto L4a7761;
case 0x4a7767:c.instructions+=15;goto B4a7767;
case 0x4a776d:c.instructions+=14;goto B4a776d;
case 0x4a7772:c.instructions+=13;goto B4a7772;
case 0x4a7775:c.instructions+=12;goto B4a7775;
case 0x4a7776:c.instructions+=11;goto B4a7776;
case 0x4a7777:c.instructions+=10;goto B4a7777;
case 0x4a777a:c.instructions+=9;goto B4a777a;
case 0x4a777e:c.instructions+=8;goto B4a777e;
case 0x4a777f:c.instructions+=7;goto B4a777f;
case 0x4a7782:c.instructions+=6;goto B4a7782;
case 0x4a7783:c.instructions+=5;goto B4a7783;
case 0x4a7784:c.instructions+=4;goto B4a7784;
case 0x4a7788:c.instructions+=3;goto B4a7788;
case 0x4a778b:c.instructions+=2;goto B4a778b;
case 0x4a778e:c.instructions+=1;goto B4a778e;
case 0x4a7793:goto L4a7793;
case 0x4a7794:c.instructions+=5;goto B4a7794;
case 0x4a7795:c.instructions+=4;goto B4a7795;
case 0x4a7796:c.instructions+=3;goto B4a7796;
case 0x4a7798:c.instructions+=2;goto B4a7798;
case 0x4a7799:c.instructions+=1;goto B4a7799;
case 0x4a77a0:goto L4a77a0;
case 0x4a77a3:c.instructions+=3;goto B4a77a3;
case 0x4a77a8:c.instructions+=2;goto B4a77a8;
case 0x4a77a9:c.instructions+=1;goto B4a77a9;
case 0x4a77ae:goto L4a77ae;
case 0x4a77af:c.instructions+=1;goto B4a77af;
case 0x4a77b4:goto L4a77b4;
case 0x4a77b7:c.instructions+=1;goto B4a77b7;
case 0x4a77c0:goto L4a77c0;
case 0x4a77c6:c.instructions+=2;goto B4a77c6;
case 0x4a77c8:c.instructions+=1;goto B4a77c8;
case 0x4a77ca:goto L4a77ca;
case 0x4a77cd:c.instructions+=3;goto B4a77cd;
case 0x4a77d2:c.instructions+=2;goto B4a77d2;
case 0x4a77d3:c.instructions+=1;goto B4a77d3;
case 0x4a77d8:goto L4a77d8;
case 0x4a77d9:c.instructions+=1;goto B4a77d9;
case 0x4a77de:goto L4a77de;
case 0x4a77e1:goto L4a77e1;
case 0x4a77f0:goto L4a77f0;
case 0x4a77f6:c.instructions+=5;goto B4a77f6;
case 0x4a77f8:c.instructions+=4;goto B4a77f8;
case 0x4a77fb:c.instructions+=3;goto B4a77fb;
case 0x4a7800:c.instructions+=2;goto B4a7800;
case 0x4a7801:c.instructions+=1;goto B4a7801;
case 0x4a7803:goto L4a7803;
case 0x4a7808:goto L4a7808;
case 0x4a7809:c.instructions+=1;goto B4a7809;
case 0x4a780e:goto L4a780e;
case 0x4a7811:c.instructions+=1;goto B4a7811;
case 0x4a7812:goto L4a7812;
case 0x4a7817:goto L4a7817;
case 0x4a7818:c.instructions+=1;goto B4a7818;
case 0x4a781d:goto L4a781d;
case 0x4a7820:c.instructions+=1;goto B4a7820;
case 0x4a7830:goto L4a7830;
case 0x4a7835:c.instructions+=1;goto B4a7835;
case 0x4a783a:goto L4a783a;
case 0x4a783d:c.instructions+=2;goto B4a783d;
case 0x4a783f:c.instructions+=1;goto B4a783f;
case 0x4a7841:goto L4a7841;
case 0x4a7849:c.instructions+=1;goto B4a7849;
case 0x4a784e:goto L4a784e;
case 0x4a7853:c.instructions+=1;goto B4a7853;
case 0x4a7858:goto L4a7858;
case 0x4a785b:c.instructions+=2;goto B4a785b;
case 0x4a785d:c.instructions+=1;goto B4a785d;
case 0x4a785f:goto L4a785f;
case 0x4a7864:c.instructions+=1;goto B4a7864;
case 0x4a7869:goto L4a7869;
case 0x4a786c:c.instructions+=2;goto B4a786c;
case 0x4a786e:c.instructions+=1;goto B4a786e;
case 0x4a7870:goto L4a7870;
case 0x4a7874:c.instructions+=2;goto B4a7874;
case 0x4a7876:c.instructions+=1;goto B4a7876;
case 0x4a7878:goto L4a7878;
case 0x4a787b:c.instructions+=1;goto B4a787b;
case 0x4a787c:goto L4a787c;
case 0x4a787f:c.instructions+=1;goto B4a787f;
case 0x4a7881:goto L4a7881;
case 0x4a7884:c.instructions+=1;goto B4a7884;
case 0x4a7885:goto L4a7885;
case 0x4a7887:c.instructions+=1;goto B4a7887;
case 0x4a7890:goto L4a7890;
case 0x4a7891:c.instructions+=4;goto B4a7891;
case 0x4a7893:c.instructions+=3;goto B4a7893;
case 0x4a7897:c.instructions+=2;goto B4a7897;
case 0x4a789c:c.instructions+=1;goto B4a789c;
case 0x4a789e:goto L4a789e;
case 0x4a78a3:goto L4a78a3;
case 0x4a78a4:c.instructions+=1;goto B4a78a4;
case 0x4a78b0:goto L4a78b0;
case 0x4a78b5:c.instructions+=1;goto B4a78b5;
case 0x4a78ba:goto L4a78ba;
case 0x4a78bd:c.instructions+=2;goto B4a78bd;
case 0x4a78bf:c.instructions+=1;goto B4a78bf;
case 0x4a78c1:goto L4a78c1;
case 0x4a78c3:c.instructions+=5;goto B4a78c3;
case 0x4a78c5:c.instructions+=4;goto B4a78c5;
case 0x4a78c7:c.instructions+=3;goto B4a78c7;
case 0x4a78cc:c.instructions+=2;goto B4a78cc;
case 0x4a78ce:c.instructions+=1;goto B4a78ce;
case 0x4a78d3:goto L4a78d3;
case 0x4a78d6:goto L4a78d6;
case 0x4a78e0:goto L4a78e0;
case 0x4a78e5:c.instructions+=1;goto B4a78e5;
case 0x4a78ea:goto L4a78ea;
case 0x4a78ed:c.instructions+=2;goto B4a78ed;
case 0x4a78ef:c.instructions+=1;goto B4a78ef;
case 0x4a78f1:goto L4a78f1;
case 0x4a78f6:c.instructions+=1;goto B4a78f6;
case 0x4a78fb:goto L4a78fb;
case 0x4a78fc:goto L4a78fc;
case 0x4a7900:goto L4a7900;
case 0x4a7904:c.instructions+=7;goto B4a7904;
case 0x4a7905:c.instructions+=6;goto B4a7905;
case 0x4a7907:c.instructions+=5;goto B4a7907;
case 0x4a790c:c.instructions+=4;goto B4a790c;
case 0x4a7910:c.instructions+=3;goto B4a7910;
case 0x4a7911:c.instructions+=2;goto B4a7911;
case 0x4a7914:c.instructions+=1;goto B4a7914;
case 0x4a7919:goto L4a7919;
case 0x4a791c:c.instructions+=3;goto B4a791c;
case 0x4a7922:c.instructions+=2;goto B4a7922;
case 0x4a7923:c.instructions+=1;goto B4a7923;
case 0x4a7930:goto L4a7930;
case 0x4a7932:c.instructions+=1;goto B4a7932;
case 0x4a7937:goto L4a7937;
case 0x4a793b:c.instructions+=7;goto B4a793b;
case 0x4a793d:c.instructions+=6;goto B4a793d;
case 0x4a7940:c.instructions+=5;goto B4a7940;
case 0x4a7946:c.instructions+=4;goto B4a7946;
case 0x4a7949:c.instructions+=3;goto B4a7949;
case 0x4a7950:c.instructions+=2;goto B4a7950;
case 0x4a7956:c.instructions+=1;goto B4a7956;
case 0x4a7960:goto L4a7960;
case 0x4a7961:c.instructions+=3;goto B4a7961;
case 0x4a7966:c.instructions+=2;goto B4a7966;
case 0x4a796b:c.instructions+=1;goto B4a796b;
case 0x4a7970:goto L4a7970;
case 0x4a7974:c.instructions+=5;goto B4a7974;
case 0x4a7976:c.instructions+=4;goto B4a7976;
case 0x4a797b:c.instructions+=3;goto B4a797b;
case 0x4a797d:c.instructions+=2;goto B4a797d;
case 0x4a7980:c.instructions+=1;goto B4a7980;
case 0x4a7985:goto L4a7985;
case 0x4a7988:c.instructions+=3;goto B4a7988;
case 0x4a798e:c.instructions+=2;goto B4a798e;
case 0x4a798f:c.instructions+=1;goto B4a798f;
case 0x4a7990:goto L4a7990;
case 0x4a7994:c.instructions+=3;goto B4a7994;
case 0x4a7995:c.instructions+=2;goto B4a7995;
case 0x4a7996:c.instructions+=1;goto B4a7996;
case 0x4a799b:goto L4a799b;
case 0x4a799d:c.instructions+=3;goto B4a799d;
case 0x4a79a0:c.instructions+=2;goto B4a79a0;
case 0x4a79a2:c.instructions+=1;goto B4a79a2;
case 0x4a79a4:goto L4a79a4;
case 0x4a79a8:c.instructions+=2;goto B4a79a8;
case 0x4a79a9:c.instructions+=1;goto B4a79a9;
case 0x4a79ae:goto L4a79ae;
case 0x4a79b1:c.instructions+=3;goto B4a79b1;
case 0x4a79b4:c.instructions+=2;goto B4a79b4;
case 0x4a79b6:c.instructions+=1;goto B4a79b6;
case 0x4a79b8:goto L4a79b8;
case 0x4a79be:goto L4a79be;
case 0x4a79c1:c.instructions+=2;goto B4a79c1;
case 0x4a79c3:c.instructions+=1;goto B4a79c3;
case 0x4a79c5:goto L4a79c5;
case 0x4a79cb:goto L4a79cb;
case 0x4a79ce:goto L4a79ce;
case 0x4a79cf:c.instructions+=1;goto B4a79cf;
case 0x4a79d0:goto L4a79d0;
case 0x4a79d5:c.instructions+=6;goto B4a79d5;
case 0x4a79d7:c.instructions+=5;goto B4a79d7;
case 0x4a79d8:c.instructions+=4;goto B4a79d8;
case 0x4a79dc:c.instructions+=3;goto B4a79dc;
case 0x4a79dd:c.instructions+=2;goto B4a79dd;
case 0x4a79e0:c.instructions+=1;goto B4a79e0;
case 0x4a79e2:goto L4a79e2;
case 0x4a79e4:c.instructions+=2;goto B4a79e4;
case 0x4a79e9:c.instructions+=1;goto B4a79e9;
case 0x4a79ee:goto L4a79ee;
case 0x4a79f5:goto L4a79f5;
case 0x4a79fa:c.instructions+=2;goto B4a79fa;
case 0x4a79fc:c.instructions+=1;goto B4a79fc;
case 0x4a79fe:goto L4a79fe;
case 0x4a79ff:c.instructions+=3;goto B4a79ff;
case 0x4a7a01:c.instructions+=2;goto B4a7a01;
case 0x4a7a03:c.instructions+=1;goto B4a7a03;
case 0x4a7a08:goto L4a7a08;
case 0x4a7a0a:c.instructions+=4;goto B4a7a0a;
case 0x4a7a0c:c.instructions+=3;goto B4a7a0c;
case 0x4a7a0e:c.instructions+=2;goto B4a7a0e;
case 0x4a7a10:c.instructions+=1;goto B4a7a10;
case 0x4a7a15:goto L4a7a15;
case 0x4a7a18:c.instructions+=5;goto B4a7a18;
case 0x4a7a19:c.instructions+=4;goto B4a7a19;
case 0x4a7a1b:c.instructions+=3;goto B4a7a1b;
case 0x4a7a1c:c.instructions+=2;goto B4a7a1c;
case 0x4a7a21:c.instructions+=1;goto B4a7a21;
case 0x4a7a26:goto L4a7a26;
case 0x4a7a27:c.instructions+=3;goto B4a7a27;
case 0x4a7a29:c.instructions+=2;goto B4a7a29;
case 0x4a7a2b:c.instructions+=1;goto B4a7a2b;
case 0x4a7a30:goto L4a7a30;
case 0x4a7a31:c.instructions+=2;goto B4a7a31;
case 0x4a7a33:c.instructions+=1;goto B4a7a33;
case 0x4a7a38:goto L4a7a38;
case 0x4a7a39:c.instructions+=4;goto B4a7a39;
case 0x4a7a3a:c.instructions+=3;goto B4a7a3a;
case 0x4a7a44:c.instructions+=2;goto B4a7a44;
case 0x4a7a45:c.instructions+=1;goto B4a7a45;
case 0x4a7a4a:goto L4a7a4a;
case 0x4a7a4b:c.instructions+=2;goto B4a7a4b;
case 0x4a7a4c:c.instructions+=1;goto B4a7a4c;
case 0x4a7a50:goto L4a7a50;
case 0x4a7a51:c.instructions+=6;goto B4a7a51;
case 0x4a7a53:c.instructions+=5;goto B4a7a53;
case 0x4a7a56:c.instructions+=4;goto B4a7a56;
case 0x4a7a5c:c.instructions+=3;goto B4a7a5c;
case 0x4a7a62:c.instructions+=2;goto B4a7a62;
case 0x4a7a63:c.instructions+=1;goto B4a7a63;
case 0x4a7a68:goto L4a7a68;
case 0x4a7a6b:c.instructions+=5;goto B4a7a6b;
case 0x4a7a6e:c.instructions+=4;goto B4a7a6e;
case 0x4a7a6f:c.instructions+=3;goto B4a7a6f;
case 0x4a7a74:c.instructions+=2;goto B4a7a74;
case 0x4a7a75:c.instructions+=1;goto B4a7a75;
case 0x4a7a7a:goto L4a7a7a;
case 0x4a7a7d:c.instructions+=2;goto B4a7a7d;
case 0x4a7a7e:c.instructions+=1;goto B4a7a7e;
case 0x4a7a83:goto L4a7a83;
case 0x4a7a86:c.instructions+=5;goto B4a7a86;
case 0x4a7a8c:c.instructions+=4;goto B4a7a8c;
case 0x4a7a92:c.instructions+=3;goto B4a7a92;
case 0x4a7a95:c.instructions+=2;goto B4a7a95;
case 0x4a7a96:c.instructions+=1;goto B4a7a96;
case 0x4a7a9b:goto L4a7a9b;
case 0x4a7a9e:c.instructions+=4;goto B4a7a9e;
case 0x4a7a9f:c.instructions+=3;goto B4a7a9f;
case 0x4a7aa4:c.instructions+=2;goto B4a7aa4;
case 0x4a7aa5:c.instructions+=1;goto B4a7aa5;
case 0x4a7aaa:goto L4a7aaa;
case 0x4a7aad:c.instructions+=2;goto B4a7aad;
case 0x4a7aae:c.instructions+=1;goto B4a7aae;
case 0x4a7ab3:goto L4a7ab3;
case 0x4a7ab6:c.instructions+=2;goto B4a7ab6;
case 0x4a7ab7:c.instructions+=1;goto B4a7ab7;
case 0x4a7ac0:goto L4a7ac0;
case 0x4a7ac4:c.instructions+=3;goto B4a7ac4;
case 0x4a7acb:c.instructions+=2;goto B4a7acb;
case 0x4a7acd:c.instructions+=1;goto B4a7acd;
case 0x4a7acf:goto L4a7acf;
case 0x4a7ad2:c.instructions+=1;goto B4a7ad2;
case 0x4a7ad3:goto L4a7ad3;
case 0x4a7ad6:c.instructions+=1;goto B4a7ad6;
case 0x4a7ae0:goto L4a7ae0;
case 0x4a7ae5:c.instructions+=4;goto B4a7ae5;
case 0x4a7ae8:c.instructions+=3;goto B4a7ae8;
case 0x4a7aed:c.instructions+=2;goto B4a7aed;
case 0x4a7aef:c.instructions+=1;goto B4a7aef;
case 0x4a7af1:goto L4a7af1;
case 0x4a7af4:c.instructions+=1;goto B4a7af4;
case 0x4a7af6:goto L4a7af6;
case 0x4a7af9:goto L4a7af9;
case 0x4a7afb:c.instructions+=1;goto B4a7afb;
case 0x4a7afd:goto L4a7afd;
case 0x4a7aff:c.instructions+=1;goto B4a7aff;
case 0x4a7b00:goto L4a7b00;
case 0x4a7b05:c.instructions+=2;goto B4a7b05;
case 0x4a7b07:c.instructions+=1;goto B4a7b07;
case 0x4a7b09:goto L4a7b09;
case 0x4a7b0c:c.instructions+=5;goto B4a7b0c;
case 0x4a7b0e:c.instructions+=4;goto B4a7b0e;
case 0x4a7b10:c.instructions+=3;goto B4a7b10;
case 0x4a7b13:c.instructions+=2;goto B4a7b13;
case 0x4a7b15:c.instructions+=1;goto B4a7b15;
case 0x4a7b16:goto L4a7b16;
case 0x4a7b19:c.instructions+=5;goto B4a7b19;
case 0x4a7b1b:c.instructions+=4;goto B4a7b1b;
case 0x4a7b1d:c.instructions+=3;goto B4a7b1d;
case 0x4a7b20:c.instructions+=2;goto B4a7b20;
case 0x4a7b22:c.instructions+=1;goto B4a7b22;
case 0x4a7b30:goto L4a7b30;
case 0x4a7b34:c.instructions+=6;goto B4a7b34;
case 0x4a7b37:c.instructions+=5;goto B4a7b37;
case 0x4a7b3e:c.instructions+=4;goto B4a7b3e;
case 0x4a7b3f:c.instructions+=3;goto B4a7b3f;
case 0x4a7b41:c.instructions+=2;goto B4a7b41;
case 0x4a7b43:c.instructions+=1;goto B4a7b43;
case 0x4a7b45:goto L4a7b45;
case 0x4a7b48:c.instructions+=6;goto B4a7b48;
case 0x4a7b4e:c.instructions+=5;goto B4a7b4e;
case 0x4a7b54:c.instructions+=4;goto B4a7b54;
case 0x4a7b5a:c.instructions+=3;goto B4a7b5a;
case 0x4a7b5f:c.instructions+=2;goto B4a7b5f;
case 0x4a7b60:c.instructions+=1;goto B4a7b60;
case 0x4a7b61:goto L4a7b61;
case 0x4a7b64:c.instructions+=1;goto B4a7b64;
case 0x4a7b66:goto L4a7b66;
case 0x4a7b69:c.instructions+=7;goto B4a7b69;
case 0x4a7b6c:c.instructions+=6;goto B4a7b6c;
case 0x4a7b6f:c.instructions+=5;goto B4a7b6f;
case 0x4a7b72:c.instructions+=4;goto B4a7b72;
case 0x4a7b75:c.instructions+=3;goto B4a7b75;
case 0x4a7b77:c.instructions+=2;goto B4a7b77;
case 0x4a7b78:c.instructions+=1;goto B4a7b78;
case 0x4a7b7b:goto L4a7b7b;
case 0x4a7b7d:c.instructions+=2;goto B4a7b7d;
case 0x4a7b7e:c.instructions+=1;goto B4a7b7e;
case 0x4a7b7f:goto L4a7b7f;
case 0x4a7b82:c.instructions+=1;goto B4a7b82;
case 0x4a7b84:goto L4a7b84;
case 0x4a7b87:c.instructions+=7;goto B4a7b87;
case 0x4a7b8a:c.instructions+=6;goto B4a7b8a;
case 0x4a7b8d:c.instructions+=5;goto B4a7b8d;
case 0x4a7b90:c.instructions+=4;goto B4a7b90;
case 0x4a7b96:c.instructions+=3;goto B4a7b96;
case 0x4a7b9b:c.instructions+=2;goto B4a7b9b;
case 0x4a7b9c:c.instructions+=1;goto B4a7b9c;
case 0x4a7b9d:goto L4a7b9d;
case 0x4a7ba0:c.instructions+=1;goto B4a7ba0;
case 0x4a7ba2:goto L4a7ba2;
case 0x4a7ba5:c.instructions+=4;goto B4a7ba5;
case 0x4a7baa:c.instructions+=3;goto B4a7baa;
case 0x4a7bab:c.instructions+=2;goto B4a7bab;
case 0x4a7bae:c.instructions+=1;goto B4a7bae;
case 0x4a7baf:goto L4a7baf;
case 0x4a7bb1:c.instructions+=2;goto B4a7bb1;
case 0x4a7bb2:c.instructions+=1;goto B4a7bb2;
case 0x4a7bc0:goto L4a7bc0;
case 0x4a7bc6:c.instructions+=2;goto B4a7bc6;
case 0x4a7bcc:c.instructions+=1;goto B4a7bcc;
case 0x4a7bce:goto L4a7bce;
case 0x4a7bd4:c.instructions+=3;goto B4a7bd4;
case 0x4a7bd7:c.instructions+=2;goto B4a7bd7;
case 0x4a7bd8:c.instructions+=1;goto B4a7bd8;
case 0x4a7bdd:goto L4a7bdd;
case 0x4a7be0:c.instructions+=2;goto B4a7be0;
case 0x4a7be2:c.instructions+=1;goto B4a7be2;
case 0x4a7be4:goto L4a7be4;
case 0x4a7be9:c.instructions+=1;goto B4a7be9;
case 0x4a7bea:goto L4a7bea;
case 0x4a7bec:c.instructions+=1;goto B4a7bec;
case 0x4a7bf0:goto L4a7bf0;
case 0x4a7bf1:c.instructions+=5;goto B4a7bf1;
case 0x4a7bf7:c.instructions+=4;goto B4a7bf7;
case 0x4a7bf8:c.instructions+=3;goto B4a7bf8;
case 0x4a7bfa:c.instructions+=2;goto B4a7bfa;
case 0x4a7bff:c.instructions+=1;goto B4a7bff;
case 0x4a7c00:goto L4a7c00;
case 0x4a7c02:c.instructions+=2;goto B4a7c02;
case 0x4a7c04:c.instructions+=1;goto B4a7c04;
case 0x4a7c06:goto L4a7c06;
case 0x4a7c09:c.instructions+=2;goto B4a7c09;
case 0x4a7c0c:c.instructions+=1;goto B4a7c0c;
case 0x4a7c0e:goto L4a7c0e;
case 0x4a7c11:c.instructions+=2;goto B4a7c11;
case 0x4a7c17:c.instructions+=1;goto B4a7c17;
case 0x4a7c19:goto L4a7c19;
case 0x4a7c1a:c.instructions+=2;goto B4a7c1a;
case 0x4a7c1b:c.instructions+=1;goto B4a7c1b;
case 0x4a7c1c:goto L4a7c1c;
case 0x4a7c1f:c.instructions+=2;goto B4a7c1f;
case 0x4a7c21:c.instructions+=1;goto B4a7c21;
case 0x4a7c23:goto L4a7c23;
case 0x4a7c29:c.instructions+=2;goto B4a7c29;
case 0x4a7c2b:c.instructions+=1;goto B4a7c2b;
case 0x4a7c2d:goto L4a7c2d;
case 0x4a7c2f:goto L4a7c2f;
case 0x4a7c30:c.instructions+=2;goto B4a7c30;
case 0x4a7c31:c.instructions+=1;goto B4a7c31;
case 0x4a7c40:goto L4a7c40;
case 0x4a7c46:c.instructions+=2;goto B4a7c46;
case 0x4a7c48:c.instructions+=1;goto B4a7c48;
case 0x4a7c4a:goto L4a7c4a;
case 0x4a7c4f:c.instructions+=1;goto B4a7c4f;
case 0x4a7c50:goto L4a7c50;
case 0x4a7c53:c.instructions+=2;goto B4a7c53;
case 0x4a7c58:c.instructions+=1;goto B4a7c58;
case 0x4a7c5a:goto L4a7c5a;
case 0x4a7c5f:goto L4a7c5f;
case 0x4a7c65:c.instructions+=2;goto B4a7c65;
case 0x4a7c66:c.instructions+=1;goto B4a7c66;
case 0x4a7c70:goto L4a7c70;
case 0x4a7c75:c.instructions+=1;goto B4a7c75;
case 0x4a7c7a:goto L4a7c7a;
case 0x4a7c7f:c.instructions+=1;goto B4a7c7f;
case 0x4a7c84:goto L4a7c84;
case 0x4a7c8a:c.instructions+=3;goto B4a7c8a;
case 0x4a7c8d:c.instructions+=2;goto B4a7c8d;
case 0x4a7c8f:c.instructions+=1;goto B4a7c8f;
case 0x4a7c94:goto L4a7c94;
case 0x4a7c99:goto L4a7c99;
case 0x4a7c9a:c.instructions+=1;goto B4a7c9a;
case 0x4a7c9f:goto L4a7c9f;
case 0x4a7ca2:c.instructions+=2;goto B4a7ca2;
case 0x4a7ca4:c.instructions+=1;goto B4a7ca4;
case 0x4a7ca6:goto L4a7ca6;
case 0x4a7cab:goto L4a7cab;
case 0x4a7cac:c.instructions+=1;goto B4a7cac;
case 0x4a7cb1:goto L4a7cb1;
case 0x4a7cb2:goto L4a7cb2;
case 0x4a7cc0:goto L4a7cc0;
case 0x4a7cc5:c.instructions+=1;goto B4a7cc5;
case 0x4a7cca:goto L4a7cca;
case 0x4a7ccf:c.instructions+=1;goto B4a7ccf;
case 0x4a7cd4:goto L4a7cd4;
case 0x4a7cda:c.instructions+=3;goto B4a7cda;
case 0x4a7cdd:c.instructions+=2;goto B4a7cdd;
case 0x4a7cdf:c.instructions+=1;goto B4a7cdf;
case 0x4a7ce4:goto L4a7ce4;
case 0x4a7cf0:goto L4a7cf0;
case 0x4a7cf1:c.instructions+=4;goto B4a7cf1;
case 0x4a7cf3:c.instructions+=3;goto B4a7cf3;
case 0x4a7cf5:c.instructions+=2;goto B4a7cf5;
case 0x4a7cfa:c.instructions+=1;goto B4a7cfa;
case 0x4a7cff:goto L4a7cff;
case 0x4a7d00:c.instructions+=1;goto B4a7d00;
case 0x4a7d05:goto L4a7d05;
case 0x4a7d08:c.instructions+=3;goto B4a7d08;
case 0x4a7d0a:c.instructions+=2;goto B4a7d0a;
case 0x4a7d0b:c.instructions+=1;goto B4a7d0b;
case 0x4a7d10:goto L4a7d10;
case 0x4a7d16:c.instructions+=3;goto B4a7d16;
case 0x4a7d19:c.instructions+=2;goto B4a7d19;
case 0x4a7d1b:c.instructions+=1;goto B4a7d1b;
case 0x4a7d20:goto L4a7d20;
case 0x4a7d27:c.instructions+=2;goto B4a7d27;
case 0x4a7d28:c.instructions+=1;goto B4a7d28;
case 0x4a7d2a:goto L4a7d2a;
case 0x4a7d2f:c.instructions+=1;goto B4a7d2f;
case 0x4a7d34:goto L4a7d34;
case 0x4a7d39:goto L4a7d39;
case 0x4a7d3a:c.instructions+=1;goto B4a7d3a;
case 0x4a7d3f:goto L4a7d3f;
case 0x4a7d42:c.instructions+=2;goto B4a7d42;
case 0x4a7d44:c.instructions+=1;goto B4a7d44;
case 0x4a7d46:goto L4a7d46;
case 0x4a7d4b:goto L4a7d4b;
case 0x4a7d4c:c.instructions+=1;goto B4a7d4c;
case 0x4a7d51:goto L4a7d51;
case 0x4a7d52:goto L4a7d52;
case 0x4a7d60:goto L4a7d60;
case 0x4a7d64:c.instructions+=13;goto B4a7d64;
case 0x4a7d65:c.instructions+=12;goto B4a7d65;
case 0x4a7d69:c.instructions+=11;goto B4a7d69;
case 0x4a7d6a:c.instructions+=10;goto B4a7d6a;
case 0x4a7d6e:c.instructions+=9;goto B4a7d6e;
case 0x4a7d6f:c.instructions+=8;goto B4a7d6f;
case 0x4a7d70:c.instructions+=7;goto B4a7d70;
case 0x4a7d74:c.instructions+=6;goto B4a7d74;
case 0x4a7d75:c.instructions+=5;goto B4a7d75;
case 0x4a7d76:c.instructions+=4;goto B4a7d76;
case 0x4a7d77:c.instructions+=3;goto B4a7d77;
case 0x4a7d78:c.instructions+=2;goto B4a7d78;
case 0x4a7d7a:c.instructions+=1;goto B4a7d7a;
case 0x4a7d7f:goto L4a7d7f;
case 0x4a7d85:c.instructions+=1;goto B4a7d85;
case 0x4a7d8b:goto L4a7d8b;
case 0x4a7d91:goto L4a7d91;
case 0x4a7d97:c.instructions+=1;goto B4a7d97;
case 0x4a7d9d:goto L4a7d9d;
case 0x4a7da3:c.instructions+=1;goto B4a7da3;
case 0x4a7da9:goto L4a7da9;
case 0x4a7daf:c.instructions+=3;goto B4a7daf;
case 0x4a7db2:c.instructions+=2;goto B4a7db2;
case 0x4a7db3:c.instructions+=1;goto B4a7db3;
case 0x4a7db8:goto L4a7db8;
case 0x4a7dbb:c.instructions+=2;goto B4a7dbb;
case 0x4a7dbd:c.instructions+=1;goto B4a7dbd;
case 0x4a7dc3:goto L4a7dc3;
case 0x4a7dc6:c.instructions+=4;goto B4a7dc6;
case 0x4a7dcb:c.instructions+=3;goto B4a7dcb;
case 0x4a7dd0:c.instructions+=2;goto B4a7dd0;
case 0x4a7dd1:c.instructions+=1;goto B4a7dd1;
case 0x4a7dd6:goto L4a7dd6;
case 0x4a7dd9:c.instructions+=2;goto B4a7dd9;
case 0x4a7ddb:c.instructions+=1;goto B4a7ddb;
case 0x4a7de1:goto L4a7de1;
case 0x4a7de6:goto L4a7de6;
case 0x4a7de7:c.instructions+=1;goto B4a7de7;
case 0x4a7dec:goto L4a7dec;
case 0x4a7def:c.instructions+=2;goto B4a7def;
case 0x4a7df1:c.instructions+=1;goto B4a7df1;
case 0x4a7df3:goto L4a7df3;
case 0x4a7df8:goto L4a7df8;
case 0x4a7df9:c.instructions+=1;goto B4a7df9;
case 0x4a7dfe:goto L4a7dfe;
case 0x4a7e01:goto L4a7e01;
case 0x4a7e03:c.instructions+=1;goto B4a7e03;
case 0x4a7e08:goto L4a7e08;
case 0x4a7e0c:c.instructions+=6;goto B4a7e0c;
case 0x4a7e0d:c.instructions+=5;goto B4a7e0d;
case 0x4a7e0e:c.instructions+=4;goto B4a7e0e;
case 0x4a7e0f:c.instructions+=3;goto B4a7e0f;
case 0x4a7e14:c.instructions+=2;goto B4a7e14;
case 0x4a7e16:c.instructions+=1;goto B4a7e16;
case 0x4a7e1b:goto L4a7e1b;
case 0x4a7e1e:c.instructions+=5;goto B4a7e1e;
case 0x4a7e20:c.instructions+=4;goto B4a7e20;
case 0x4a7e25:c.instructions+=3;goto B4a7e25;
case 0x4a7e2a:c.instructions+=2;goto B4a7e2a;
case 0x4a7e2b:c.instructions+=1;goto B4a7e2b;
case 0x4a7e30:goto L4a7e30;
case 0x4a7e33:c.instructions+=3;goto B4a7e33;
case 0x4a7e35:c.instructions+=2;goto B4a7e35;
case 0x4a7e36:c.instructions+=1;goto B4a7e36;
case 0x4a7e3b:goto L4a7e3b;
case 0x4a7e3d:c.instructions+=2;goto B4a7e3d;
case 0x4a7e42:c.instructions+=1;goto B4a7e42;
case 0x4a7e47:goto L4a7e47;
case 0x4a7e4a:c.instructions+=5;goto B4a7e4a;
case 0x4a7e4b:c.instructions+=4;goto B4a7e4b;
case 0x4a7e4c:c.instructions+=3;goto B4a7e4c;
case 0x4a7e4d:c.instructions+=2;goto B4a7e4d;
case 0x4a7e4e:c.instructions+=1;goto B4a7e4e;
case 0x4a7e51:goto L4a7e51;
case 0x4a7e54:c.instructions+=4;goto B4a7e54;
case 0x4a7e59:c.instructions+=3;goto B4a7e59;
case 0x4a7e5e:c.instructions+=2;goto B4a7e5e;
case 0x4a7e5f:c.instructions+=1;goto B4a7e5f;
case 0x4a7e64:goto L4a7e64;
case 0x4a7e67:c.instructions+=2;goto B4a7e67;
case 0x4a7e69:c.instructions+=1;goto B4a7e69;
case 0x4a7e6f:goto L4a7e6f;
case 0x4a7e72:c.instructions+=3;goto B4a7e72;
case 0x4a7e74:c.instructions+=2;goto B4a7e74;
case 0x4a7e75:c.instructions+=1;goto B4a7e75;
case 0x4a7e7a:goto L4a7e7a;
case 0x4a7e7d:c.instructions+=5;goto B4a7e7d;
case 0x4a7e7f:c.instructions+=4;goto B4a7e7f;
case 0x4a7e84:c.instructions+=3;goto B4a7e84;
case 0x4a7e89:c.instructions+=2;goto B4a7e89;
case 0x4a7e8a:c.instructions+=1;goto B4a7e8a;
case 0x4a7e8f:goto L4a7e8f;
case 0x4a7e94:goto L4a7e94;
case 0x4a7e95:c.instructions+=1;goto B4a7e95;
case 0x4a7e9a:goto L4a7e9a;
case 0x4a7e9d:c.instructions+=2;goto B4a7e9d;
case 0x4a7e9f:c.instructions+=1;goto B4a7e9f;
case 0x4a7ea5:goto L4a7ea5;
case 0x4a7eaa:goto L4a7eaa;
case 0x4a7eab:c.instructions+=1;goto B4a7eab;
case 0x4a7eb0:goto L4a7eb0;
case 0x4a7eb3:c.instructions+=5;goto B4a7eb3;
case 0x4a7eb4:c.instructions+=4;goto B4a7eb4;
case 0x4a7eb5:c.instructions+=3;goto B4a7eb5;
case 0x4a7eb6:c.instructions+=2;goto B4a7eb6;
case 0x4a7eb7:c.instructions+=1;goto B4a7eb7;
case 0x4a7eba:goto L4a7eba;
case 0x4a7ec0:c.instructions+=2;goto B4a7ec0;
case 0x4a7ec2:c.instructions+=1;goto B4a7ec2;
case 0x4a7ec8:goto L4a7ec8;
case 0x4a7ecb:c.instructions+=3;goto B4a7ecb;
case 0x4a7ecd:c.instructions+=2;goto B4a7ecd;
case 0x4a7ece:c.instructions+=1;goto B4a7ece;
case 0x4a7ed3:goto L4a7ed3;
case 0x4a7ed6:c.instructions+=2;goto B4a7ed6;
case 0x4a7ed7:c.instructions+=1;goto B4a7ed7;
case 0x4a7edc:goto L4a7edc;
case 0x4a7ee2:c.instructions+=3;goto B4a7ee2;
case 0x4a7ee5:c.instructions+=2;goto B4a7ee5;
case 0x4a7ee7:c.instructions+=1;goto B4a7ee7;
case 0x4a7eec:goto L4a7eec;
case 0x4a7eed:c.instructions+=4;goto B4a7eed;
case 0x4a7eee:c.instructions+=3;goto B4a7eee;
case 0x4a7eef:c.instructions+=2;goto B4a7eef;
case 0x4a7ef0:c.instructions+=1;goto B4a7ef0;
case 0x4a7ef3:goto L4a7ef3;
case 0x4a7ef9:c.instructions+=1;goto B4a7ef9;
case 0x4a7efb:goto L4a7efb;
case 0x4a7f01:c.instructions+=2;goto B4a7f01;
case 0x4a7f06:c.instructions+=1;goto B4a7f06;
case 0x4a7f08:goto L4a7f08;
case 0x4a7f0d:c.instructions+=1;goto B4a7f0d;
case 0x4a7f0f:goto L4a7f0f;
case 0x4a7f14:c.instructions+=1;goto B4a7f14;
case 0x4a7f16:goto L4a7f16;
case 0x4a7f17:c.instructions+=5;goto B4a7f17;
case 0x4a7f1e:c.instructions+=4;goto B4a7f1e;
case 0x4a7f1f:c.instructions+=3;goto B4a7f1f;
case 0x4a7f20:c.instructions+=2;goto B4a7f20;
case 0x4a7f21:c.instructions+=1;goto B4a7f21;
case 0x4a7f24:goto L4a7f24;
case 0x4a7f29:c.instructions+=3;goto B4a7f29;
case 0x4a7f2b:c.instructions+=2;goto B4a7f2b;
case 0x4a7f30:c.instructions+=1;goto B4a7f30;
case 0x4a7f32:goto L4a7f32;
case 0x4a7f37:goto L4a7f37;
case 0x4a7f39:c.instructions+=4;goto B4a7f39;
case 0x4a7f3a:c.instructions+=3;goto B4a7f3a;
case 0x4a7f3d:c.instructions+=2;goto B4a7f3d;
case 0x4a7f3e:c.instructions+=1;goto B4a7f3e;
case 0x4a7f43:goto L4a7f43;
case 0x4a7f46:c.instructions+=5;goto B4a7f46;
case 0x4a7f47:c.instructions+=4;goto B4a7f47;
case 0x4a7f48:c.instructions+=3;goto B4a7f48;
case 0x4a7f49:c.instructions+=2;goto B4a7f49;
case 0x4a7f4a:c.instructions+=1;goto B4a7f4a;
case 0x4a7f4d:goto L4a7f4d;
case 0x4a7f50:c.instructions+=4;goto B4a7f50;
case 0x4a7f52:c.instructions+=3;goto B4a7f52;
case 0x4a7f57:c.instructions+=2;goto B4a7f57;
case 0x4a7f58:c.instructions+=1;goto B4a7f58;
case 0x4a7f5d:goto L4a7f5d;
case 0x4a7f60:goto L4a7f60;
case 0x4a7f61:c.instructions+=4;goto B4a7f61;
case 0x4a7f62:c.instructions+=3;goto B4a7f62;
case 0x4a7f63:c.instructions+=2;goto B4a7f63;
case 0x4a7f64:c.instructions+=1;goto B4a7f64;
case 0x4a7f70:goto L4a7f70;
case 0x4a7f76:c.instructions+=3;goto B4a7f76;
case 0x4a7f78:c.instructions+=2;goto B4a7f78;
case 0x4a7f7d:c.instructions+=1;goto B4a7f7d;
case 0x4a7f7f:goto L4a7f7f;
case 0x4a7f85:c.instructions+=1;goto B4a7f85;
case 0x4a7f87:goto L4a7f87;
case 0x4a7f8c:c.instructions+=12;goto B4a7f8c;
case 0x4a7f8d:c.instructions+=11;goto B4a7f8d;
case 0x4a7f92:c.instructions+=10;goto B4a7f92;
case 0x4a7f97:c.instructions+=9;goto B4a7f97;
case 0x4a7f9d:c.instructions+=8;goto B4a7f9d;
case 0x4a7fa1:c.instructions+=7;goto B4a7fa1;
case 0x4a7fa4:c.instructions+=6;goto B4a7fa4;
case 0x4a7fa5:c.instructions+=5;goto B4a7fa5;
case 0x4a7faa:c.instructions+=4;goto B4a7faa;
case 0x4a7faf:c.instructions+=3;goto B4a7faf;
case 0x4a7fb4:c.instructions+=2;goto B4a7fb4;
case 0x4a7fb5:c.instructions+=1;goto B4a7fb5;
case 0x4a7fba:goto L4a7fba;
case 0x4a7fbd:c.instructions+=2;goto B4a7fbd;
case 0x4a7fbf:c.instructions+=1;goto B4a7fbf;
case 0x4a7fc2:goto L4a7fc2;
case 0x4a7fc8:c.instructions+=1;goto B4a7fc8;
case 0x4a7fca:goto L4a7fca;
case 0x4a7fd0:c.instructions+=2;goto B4a7fd0;
case 0x4a7fd2:c.instructions+=1;goto B4a7fd2;
case 0x4a7fd4:goto L4a7fd4;
case 0x4a7fd8:c.instructions+=10;goto B4a7fd8;
case 0x4a7fdd:c.instructions+=9;goto B4a7fdd;
case 0x4a7fde:c.instructions+=8;goto B4a7fde;
case 0x4a7fe3:c.instructions+=7;goto B4a7fe3;
case 0x4a7fe8:c.instructions+=6;goto B4a7fe8;
case 0x4a7fe9:c.instructions+=5;goto B4a7fe9;
case 0x4a7fee:c.instructions+=4;goto B4a7fee;
case 0x4a7ff3:c.instructions+=3;goto B4a7ff3;
case 0x4a7ff9:c.instructions+=2;goto B4a7ff9;
case 0x4a7ffc:c.instructions+=1;goto B4a7ffc;
default:missing_instruction(c.pc);}
B4a7006:L4a7006:{c.instructions+=17;NFSU2_TR(0x4a7006);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a700d:{NFSU2_TR(0x4a700d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7010:{NFSU2_TR(0x4a7010);
{u32 ea_=u32(r4(R+12)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a7013:{NFSU2_TR(0x4a7013);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a7015:{NFSU2_TR(0x4a7015);
u8 U[16];
w4(U+0,u32(u32(u32(0x2fcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a701c:{NFSU2_TR(0x4a701c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7020:{NFSU2_TR(0x4a7020);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a7022:{NFSU2_TR(0x4a7022);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(756u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a7029:{NFSU2_TR(0x4a7029);
u8 U[16];
w4(U+0,u32(u32(u32(0x2f0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a7030:{NFSU2_TR(0x4a7030);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(760u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a7037:{NFSU2_TR(0x4a7037);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a7039:{NFSU2_TR(0x4a7039);
{u32 ea_=u32(r4(R+8)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a703f:{NFSU2_TR(0x4a703f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a7043:{NFSU2_TR(0x4a7043);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4a7045:{NFSU2_TR(0x4a7045);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a7047:{NFSU2_TR(0x4a7047);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a704a:{NFSU2_TR(0x4a704a);
if(r1(R+514)){{goto L4a7052;}}
}
B4a704c:L4a704c:{c.instructions+=2;NFSU2_TR(0x4a704c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a704e:{NFSU2_TR(0x4a704e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a7052:L4a7052:{c.instructions+=14;NFSU2_TR(0x4a7052);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a7059:{NFSU2_TR(0x4a7059);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a705d:{NFSU2_TR(0x4a705d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4a705f:{NFSU2_TR(0x4a705f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4a7062:{NFSU2_TR(0x4a7062);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B4a7065:{NFSU2_TR(0x4a7065);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B4a7068:{NFSU2_TR(0x4a7068);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a706e:{NFSU2_TR(0x4a706e);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a7075:{NFSU2_TR(0x4a7075);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a707c:{NFSU2_TR(0x4a707c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7080:{NFSU2_TR(0x4a7080);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4a7082:{NFSU2_TR(0x4a7082);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a7089:{NFSU2_TR(0x4a7089);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a708b:{NFSU2_TR(0x4a708b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4a6ed0u,4a6);}
}
B4a7091:L4a7091:{c.instructions+=5;NFSU2_TR(0x4a7091);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a7094:{NFSU2_TR(0x4a7094);
u8 U[4];
w4(U+0,u32(u32(u32(0x1c0ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B4a709b:{NFSU2_TR(0x4a709b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x960ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x960ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x960ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a70a1:{NFSU2_TR(0x4a70a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a70a9:{NFSU2_TR(0x4a70a9);
__builtin_memmove((R+16),(R+16),4);
}
B4a70b0:L4a70b0:{c.instructions+=3;NFSU2_TR(0x4a70b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a70b1:{NFSU2_TR(0x4a70b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a70b2:{NFSU2_TR(0x4a70b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a70b7ull));
TAIL_STATIC(0x4012b0u,401);
}
B4a70b7:L4a70b7:{c.instructions+=7;NFSU2_TR(0x4a70b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a70bb:{NFSU2_TR(0x4a70bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a70be:{NFSU2_TR(0x4a70be);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B4a70c1:{NFSU2_TR(0x4a70c1);
w1(R+512,carry<u32>(r4(R+12),u32(0x40ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B4a70c4:{NFSU2_TR(0x4a70c4);
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
B4a70c5:{NFSU2_TR(0x4a70c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a70c9:{NFSU2_TR(0x4a70c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a70b0u);}goto L4a70b0;}}
}
B4a70cb:L4a70cb:{c.instructions+=4;NFSU2_TR(0x4a70cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a70ce:{NFSU2_TR(0x4a70ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x2c0ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B4a70d5:{NFSU2_TR(0x4a70d5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0xa60ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0xa60ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xa60ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a70db:{NFSU2_TR(0x4a70db);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a70e3:L4a70e3:{c.instructions+=3;NFSU2_TR(0x4a70e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a70e4:{NFSU2_TR(0x4a70e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a70e5:{NFSU2_TR(0x4a70e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a70eaull));
TAIL_STATIC(0x4012b0u,401);
}
B4a70ea:L4a70ea:{c.instructions+=7;NFSU2_TR(0x4a70ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a70ee:{NFSU2_TR(0x4a70ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a70f1:{NFSU2_TR(0x4a70f1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B4a70f4:{NFSU2_TR(0x4a70f4);
w1(R+512,carry<u32>(r4(R+12),u32(0x40ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B4a70f7:{NFSU2_TR(0x4a70f7);
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
B4a70f8:{NFSU2_TR(0x4a70f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a70fc:{NFSU2_TR(0x4a70fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a70e3u);}goto L4a70e3;}}
}
B4a70fe:L4a70fe:{c.instructions+=3;NFSU2_TR(0x4a70fe);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B4a7103:{NFSU2_TR(0x4a7103);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4a7106:{NFSU2_TR(0x4a7106);
if(r1(R+518)){{goto L4a7172;}}
}
B4a7108:L4a7108:{c.instructions+=4;NFSU2_TR(0x4a7108);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a710c:{NFSU2_TR(0x4a710c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7112:{NFSU2_TR(0x4a7112);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4a7118:{NFSU2_TR(0x4a7118);
if(r1(R+518)){{goto L4a7172;}}
}
B4a711a:L4a711a:{c.instructions+=3;NFSU2_TR(0x4a711a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B4a711d:{NFSU2_TR(0x4a711d);
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
B4a711f:{NFSU2_TR(0x4a711f);
if(r1(R+518)){{goto L4a7172;}}
}
B4a7121:L4a7121:{c.instructions+=5;NFSU2_TR(0x4a7121);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7123:{NFSU2_TR(0x4a7123);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a712e:{NFSU2_TR(0x4a712e);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a7139:{NFSU2_TR(0x4a7139);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a7144:{NFSU2_TR(0x4a7144);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7149ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B4a7149:L4a7149:{c.instructions+=12;NFSU2_TR(0x4a7149);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a714f:{NFSU2_TR(0x4a714f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a7152:{NFSU2_TR(0x4a7152);
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
B4a7155:{NFSU2_TR(0x4a7155);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7156:{NFSU2_TR(0x4a7156);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7157:{NFSU2_TR(0x4a7157);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B4a715d:{NFSU2_TR(0x4a715d);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a7164:{NFSU2_TR(0x4a7164);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7165:{NFSU2_TR(0x4a7165);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a7169:{NFSU2_TR(0x4a7169);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a716a:{NFSU2_TR(0x4a716a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a716d:{NFSU2_TR(0x4a716d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7172ull));
TAIL_STATIC(0x50d290u,50d);
}
B4a7172:L4a7172:{c.instructions+=6;NFSU2_TR(0x4a7172);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a7173:{NFSU2_TR(0x4a7173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7174:{NFSU2_TR(0x4a7174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a7175:{NFSU2_TR(0x4a7175);
__builtin_memmove((R+16),(R+20),4);
}
B4a7177:{NFSU2_TR(0x4a7177);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a7178:{NFSU2_TR(0x4a7178);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7180:L4a7180:{c.instructions+=8;NFSU2_TR(0x4a7180);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7181:{NFSU2_TR(0x4a7181);
__builtin_memmove((R+20),(R+16),4);
}
B4a7183:{NFSU2_TR(0x4a7183);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x38ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a7186:{NFSU2_TR(0x4a7186);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7187:{NFSU2_TR(0x4a7187);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7188:{NFSU2_TR(0x4a7188);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7189:{NFSU2_TR(0x4a7189);
__builtin_memmove((R+24),(R+4),4);
}
B4a718b:{NFSU2_TR(0x4a718b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7190ull));
TAIL_STATIC(0x4022c0u,402);
}
B4a7190:L4a7190:{c.instructions+=3;NFSU2_TR(0x4a7190);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a7193:{NFSU2_TR(0x4a7193);
__builtin_memmove((R+4),(R+28),4);
}
B4a7195:{NFSU2_TR(0x4a7195);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a719aull));
TAIL_STATIC(0x4903b0u,490);
}
B4a719a:L4a719a:{c.instructions+=3;NFSU2_TR(0x4a719a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a71a0:{NFSU2_TR(0x4a71a0);
__builtin_memmove((R+4),(R+12),4);
}
B4a71a2:{NFSU2_TR(0x4a71a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a71a7ull));
TAIL_STATIC(0x4903b0u,490);
}
B4a71a7:L4a71a7:{c.instructions+=3;NFSU2_TR(0x4a71a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a71ad:{NFSU2_TR(0x4a71ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a71b0:{NFSU2_TR(0x4a71b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a71b5ull));
TAIL_STATIC(0x4903b0u,490);
}
B4a71b5:L4a71b5:{c.instructions+=3;NFSU2_TR(0x4a71b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a71bb:{NFSU2_TR(0x4a71bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a71be:{NFSU2_TR(0x4a71be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a71c3ull));
TAIL_STATIC(0x4903b0u,490);
}
B4a71c3:L4a71c3:{c.instructions+=3;NFSU2_TR(0x4a71c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a71c9:{NFSU2_TR(0x4a71c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a71cc:{NFSU2_TR(0x4a71cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a71d1ull));
TAIL_STATIC(0x4903b0u,490);
}
B4a71d1:L4a71d1:{c.instructions+=3;NFSU2_TR(0x4a71d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a71d7:{NFSU2_TR(0x4a71d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a71da:{NFSU2_TR(0x4a71da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a71dfull));
TAIL_STATIC(0x4903b0u,490);
}
B4a71df:L4a71df:{c.instructions+=2;NFSU2_TR(0x4a71df);
w4(R+4,u32(0x8357e0ull));
}
B4a71e4:{NFSU2_TR(0x4a71e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a71e9ull));
TAIL_STATIC(0x491e10u,491);
}
B4a71e9:L4a71e9:{c.instructions+=1;NFSU2_TR(0x4a71e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a71eeull));
TAIL_STATIC(0x4022c0u,402);
}
B4a71ee:L4a71ee:{c.instructions+=7;NFSU2_TR(0x4a71ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a71f1:{NFSU2_TR(0x4a71f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f60e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4a71f8:{NFSU2_TR(0x4a71f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a71f9:{NFSU2_TR(0x4a71f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4a71fc:{NFSU2_TR(0x4a71fc);
u8 U[4];
w4(U+0,u32(0x7906c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7201:{NFSU2_TR(0x4a7201);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7202:{NFSU2_TR(0x4a7202);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7207ull));
TAIL_STATIC(0x4400d0u,440);
}
B4a7207:L4a7207:{c.instructions+=3;NFSU2_TR(0x4a7207);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4a720a:{NFSU2_TR(0x4a720a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a720b:{NFSU2_TR(0x4a720b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7210ull));
TAIL_STATIC(0x577eb0u,577);
}
B4a7210:L4a7210:{c.instructions+=2;NFSU2_TR(0x4a7210);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7211:{NFSU2_TR(0x4a7211);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7216ull));
TAIL_STATIC(0x580e90u,580);
}
B4a7216:L4a7216:{c.instructions+=7;NFSU2_TR(0x4a7216);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7219:{NFSU2_TR(0x4a7219);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f60e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4a7220:{NFSU2_TR(0x4a7220);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7221:{NFSU2_TR(0x4a7221);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4a7224:{NFSU2_TR(0x4a7224);
u8 U[4];
w4(U+0,u32(0x7906c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7229:{NFSU2_TR(0x4a7229);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a722a:{NFSU2_TR(0x4a722a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a722full));
TAIL_STATIC(0x4400d0u,440);
}
B4a722f:L4a722f:{c.instructions+=9;NFSU2_TR(0x4a722f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7231:{NFSU2_TR(0x4a7231);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7233:{NFSU2_TR(0x4a7233);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7235:{NFSU2_TR(0x4a7235);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7237:{NFSU2_TR(0x4a7237);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7239:{NFSU2_TR(0x4a7239);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a723c:{NFSU2_TR(0x4a723c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a723e:{NFSU2_TR(0x4a723e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a723f:{NFSU2_TR(0x4a723f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7244ull));
TAIL_STATIC(0x57cf70u,57c);
}
B4a7244:L4a7244:{c.instructions+=2;NFSU2_TR(0x4a7244);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B4a7247:{NFSU2_TR(0x4a7247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a724cull));
TAIL_STATIC(0x571060u,571);
}
B4a724c:L4a724c:{c.instructions+=2;NFSU2_TR(0x4a724c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a724e:{NFSU2_TR(0x4a724e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a725e;}}
}
B4a7250:L4a7250:{c.instructions+=1;NFSU2_TR(0x4a7250);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7255ull));
TAIL_STATIC(0x57ef60u,57e);
}
B4a7255:L4a7255:{c.instructions+=1;NFSU2_TR(0x4a7255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a725aull));
TAIL_STATIC(0x571060u,571);
}
B4a725a:L4a725a:{c.instructions+=2;NFSU2_TR(0x4a725a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a725c:{NFSU2_TR(0x4a725c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a7250u);}goto L4a7250;}}
}
B4a725e:L4a725e:{c.instructions+=4;NFSU2_TR(0x4a725e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a7261:{NFSU2_TR(0x4a7261);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f60e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4a7268:{NFSU2_TR(0x4a7268);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7269:{NFSU2_TR(0x4a7269);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a726eull));
TAIL_STATIC(0x43db50u,43d);
}
B4a726e:L4a726e:{c.instructions+=2;NFSU2_TR(0x4a726e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a726f:{NFSU2_TR(0x4a726f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7274ull));
TAIL_STATIC(0x48a2d0u,48a);
}
B4a7274:L4a7274:{c.instructions+=4;NFSU2_TR(0x4a7274);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7277:{NFSU2_TR(0x4a7277);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a727a:{NFSU2_TR(0x4a727a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a727c:{NFSU2_TR(0x4a727c);
if(r1(R+518)){{goto L4a7284;}}
}
B4a727e:L4a727e:{c.instructions+=1;NFSU2_TR(0x4a727e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7284:L4a7284:{c.instructions+=3;NFSU2_TR(0x4a7284);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7287:{NFSU2_TR(0x4a7287);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a7289:{NFSU2_TR(0x4a7289);
if(r1(R+518)){{goto L4a7291;}}
}
B4a728b:L4a728b:{c.instructions+=1;NFSU2_TR(0x4a728b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7291:L4a7291:{c.instructions+=3;NFSU2_TR(0x4a7291);
u8 U[4];
w4(U+0,u32(0x7906b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7296:{NFSU2_TR(0x4a7296);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7299:{NFSU2_TR(0x4a7299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a729eull));
TAIL_STATIC(0x43db50u,43d);
}
B4a729e:L4a729e:{c.instructions+=4;NFSU2_TR(0x4a729e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a72a1:{NFSU2_TR(0x4a72a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a72a2:{NFSU2_TR(0x4a72a2);
__builtin_memmove((R+4),(R+28),4);
}
B4a72a4:{NFSU2_TR(0x4a72a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a72a9ull));
TAIL_STATIC(0x493600u,493);
}
B4a72a9:L4a72a9:{c.instructions+=2;NFSU2_TR(0x4a72a9);
u8 U[4];
w4(U+0,u32(0x7906a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a72ae:{NFSU2_TR(0x4a72ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a72b3ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a72b3:L4a72b3:{c.instructions+=4;NFSU2_TR(0x4a72b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a72b6:{NFSU2_TR(0x4a72b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a72b7:{NFSU2_TR(0x4a72b7);
__builtin_memmove((R+4),(R+12),4);
}
B4a72b9:{NFSU2_TR(0x4a72b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a72beull));
TAIL_STATIC(0x493600u,493);
}
B4a72be:L4a72be:{c.instructions+=2;NFSU2_TR(0x4a72be);
u8 U[4];
w4(U+0,u32(0x79069cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a72c3:{NFSU2_TR(0x4a72c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a72c8ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a72c8:L4a72c8:{c.instructions+=4;NFSU2_TR(0x4a72c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a72cb:{NFSU2_TR(0x4a72cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a72ce:{NFSU2_TR(0x4a72ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a72cf:{NFSU2_TR(0x4a72cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a72d4ull));
TAIL_STATIC(0x493600u,493);
}
B4a72d4:L4a72d4:{c.instructions+=2;NFSU2_TR(0x4a72d4);
u8 U[4];
w4(U+0,u32(0x790694ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a72d9:{NFSU2_TR(0x4a72d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a72deull));
TAIL_STATIC(0x43db50u,43d);
}
B4a72de:L4a72de:{c.instructions+=4;NFSU2_TR(0x4a72de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a72e1:{NFSU2_TR(0x4a72e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a72e4:{NFSU2_TR(0x4a72e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a72e5:{NFSU2_TR(0x4a72e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a72eaull));
TAIL_STATIC(0x493600u,493);
}
B4a72ea:L4a72ea:{c.instructions+=2;NFSU2_TR(0x4a72ea);
u8 U[4];
w4(U+0,u32(0x79068cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a72ef:{NFSU2_TR(0x4a72ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a72f4ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a72f4:L4a72f4:{c.instructions+=4;NFSU2_TR(0x4a72f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a72f7:{NFSU2_TR(0x4a72f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a72fa:{NFSU2_TR(0x4a72fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a72fb:{NFSU2_TR(0x4a72fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7300ull));
TAIL_STATIC(0x493600u,493);
}
B4a7300:L4a7300:{c.instructions+=2;NFSU2_TR(0x4a7300);
u8 U[4];
w4(U+0,u32(0x79067cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7305:{NFSU2_TR(0x4a7305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a730aull));
TAIL_STATIC(0x43db50u,43d);
}
B4a730a:L4a730a:{c.instructions+=4;NFSU2_TR(0x4a730a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a730d:{NFSU2_TR(0x4a730d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a7310:{NFSU2_TR(0x4a7310);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7311:{NFSU2_TR(0x4a7311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7316ull));
TAIL_STATIC(0x493600u,493);
}
B4a7316:L4a7316:{c.instructions+=1;NFSU2_TR(0x4a7316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a731bull));
TAIL_STATIC(0x5b9910u,5b9);
}
B4a731b:L4a731b:{c.instructions+=6;NFSU2_TR(0x4a731b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a731c:{NFSU2_TR(0x4a731c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a731d:{NFSU2_TR(0x4a731d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a731e:{NFSU2_TR(0x4a731e);
__builtin_memmove((R+16),(R+20),4);
}
B4a7320:{NFSU2_TR(0x4a7320);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a7321:{NFSU2_TR(0x4a7321);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7330:L4a7330:{c.instructions+=13;NFSU2_TR(0x4a7330);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7331:{NFSU2_TR(0x4a7331);
__builtin_memmove((R+20),(R+16),4);
}
B4a7333:{NFSU2_TR(0x4a7333);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4a7336:{NFSU2_TR(0x4a7336);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4a7339:{NFSU2_TR(0x4a7339);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a733a:{NFSU2_TR(0x4a733a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a733b:{NFSU2_TR(0x4a733b);
__builtin_memmove((R+12),(R+4),4);
}
B4a733d:{NFSU2_TR(0x4a733d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7343:{NFSU2_TR(0x4a7343);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7344:{NFSU2_TR(0x4a7344);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4a7346:{NFSU2_TR(0x4a7346);
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
B4a7348:{NFSU2_TR(0x4a7348);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a734c:{NFSU2_TR(0x4a734c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7793;}}
}
B4a7352:L4a7352:{c.instructions+=3;NFSU2_TR(0x4a7352);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a7355:{NFSU2_TR(0x4a7355);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a7357:{NFSU2_TR(0x4a7357);
if(r1(R+518)){{goto L4a735d;}}
}
B4a7359:L4a7359:{c.instructions+=2;NFSU2_TR(0x4a7359);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a735b:{NFSU2_TR(0x4a735b);
{goto L4a7364;}
}
B4a735d:L4a735d:{c.instructions+=2;NFSU2_TR(0x4a735d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7363:{NFSU2_TR(0x4a7363);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7364:L4a7364:{c.instructions+=1;NFSU2_TR(0x4a7364);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7369ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B4a7369:L4a7369:{c.instructions+=8;NFSU2_TR(0x4a7369);
__builtin_memmove((R+4),(R+0),4);
}
B4a736b:{NFSU2_TR(0x4a736b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a736f:{NFSU2_TR(0x4a736f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7372:{NFSU2_TR(0x4a7372);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B4a7375:{NFSU2_TR(0x4a7375);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a7378:{NFSU2_TR(0x4a7378);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a737a:{NFSU2_TR(0x4a737a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a737e:{NFSU2_TR(0x4a737e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a738f;}}
}
B4a7380:L4a7380:{c.instructions+=2;NFSU2_TR(0x4a7380);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7382:{NFSU2_TR(0x4a7382);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7387ull));
TAIL_STATIC(0x401e80u,401);
}
B4a7387:L4a7387:{c.instructions+=3;NFSU2_TR(0x4a7387);
__builtin_memmove((R+24),(R+0),4);
}
B4a7389:{NFSU2_TR(0x4a7389);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a738d:{NFSU2_TR(0x4a738d);
{goto L4a739c;}
}
B4a738f:L4a738f:{c.instructions+=2;NFSU2_TR(0x4a738f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7391:{NFSU2_TR(0x4a7391);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7396ull));
TAIL_STATIC(0x401e80u,401);
}
B4a7396:L4a7396:{c.instructions+=2;NFSU2_TR(0x4a7396);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a739a:{NFSU2_TR(0x4a739a);
__builtin_memmove((R+24),(R+0),4);
}
B4a739c:L4a739c:{c.instructions+=3;NFSU2_TR(0x4a739c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a739f:{NFSU2_TR(0x4a739f);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4a73a1:{NFSU2_TR(0x4a73a1);
if(r1(R+518)){{goto L4a7793;}}
}
B4a73a7:L4a73a7:{c.instructions+=2;NFSU2_TR(0x4a73a7);
u8 U[4];
w4(U+0,u32(0x1c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a73ac:{NFSU2_TR(0x4a73ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a73b1ull));
TAIL_STATIC(0x401e30u,401);
}
B4a73b1:L4a73b1:{c.instructions+=25;NFSU2_TR(0x4a73b1);
__builtin_memmove((R+8),gp(0x78e004),4);
}
B4a73b7:{NFSU2_TR(0x4a73b7);
__builtin_memmove((R+4),gp(0x78e00c),4);
}
B4a73bd:{NFSU2_TR(0x4a73bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a73c1:{NFSU2_TR(0x4a73c1);
w4(R+0,u32(0x3f800000ull));
}
B4a73c6:{NFSU2_TR(0x4a73c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4a73c8:{NFSU2_TR(0x4a73c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a73cb:{NFSU2_TR(0x4a73cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a73ce:{NFSU2_TR(0x4a73ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a73d1:{NFSU2_TR(0x4a73d1);
__builtin_memmove((R+0),gp(0x78e008),4);
}
B4a73d6:{NFSU2_TR(0x4a73d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a73d9:{NFSU2_TR(0x4a73d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a73dc:{NFSU2_TR(0x4a73dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a73df:{NFSU2_TR(0x4a73df);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a73e1:{NFSU2_TR(0x4a73e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a73e4:{NFSU2_TR(0x4a73e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a73e7:{NFSU2_TR(0x4a73e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a73ea:{NFSU2_TR(0x4a73ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a73ed:{NFSU2_TR(0x4a73ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a73f0:{NFSU2_TR(0x4a73f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a73f3:{NFSU2_TR(0x4a73f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a73f6:{NFSU2_TR(0x4a73f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a73f9:{NFSU2_TR(0x4a73f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a73fc:{NFSU2_TR(0x4a73fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a73ff:{NFSU2_TR(0x4a73ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7402:{NFSU2_TR(0x4a7402);
if(r1(R+518)){{goto L4a740b;}}
}
B4a7404:L4a7404:{c.instructions+=1;NFSU2_TR(0x4a7404);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a740b:L4a740b:{c.instructions+=8;NFSU2_TR(0x4a740b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a740f:{NFSU2_TR(0x4a740f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7410:{NFSU2_TR(0x4a7410);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7411:{NFSU2_TR(0x4a7411);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7412:{NFSU2_TR(0x4a7412);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7413:{NFSU2_TR(0x4a7413);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4a7419:{NFSU2_TR(0x4a7419);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a741a:{NFSU2_TR(0x4a741a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a741full));
TAIL_STATIC(0x5c5930u,5c5);
}
B4a741f:L4a741f:{c.instructions+=2;NFSU2_TR(0x4a741f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4a7422:{NFSU2_TR(0x4a7422);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a770f;}}
}
B4a7428:L4a7428:{c.instructions+=32;NFSU2_TR(0x4a7428);
__builtin_memmove((R+8),gp(0x78e008),4);
}
B4a742e:{NFSU2_TR(0x4a742e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4a7431:{NFSU2_TR(0x4a7431);
w4(R+4,u32(0x3f800000ull));
}
B4a7436:{NFSU2_TR(0x4a7436);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a7438:{NFSU2_TR(0x4a7438);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a743b:{NFSU2_TR(0x4a743b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a743e:{NFSU2_TR(0x4a743e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7441:{NFSU2_TR(0x4a7441);
__builtin_memmove((R+4),gp(0x78e004),4);
}
B4a7447:{NFSU2_TR(0x4a7447);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7448:{NFSU2_TR(0x4a7448);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7449:{NFSU2_TR(0x4a7449);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a744c:{NFSU2_TR(0x4a744c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a744f:{NFSU2_TR(0x4a744f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7452:{NFSU2_TR(0x4a7452);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7455:{NFSU2_TR(0x4a7455);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7458:{NFSU2_TR(0x4a7458);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a745b:{NFSU2_TR(0x4a745b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a745e:{NFSU2_TR(0x4a745e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7461:{NFSU2_TR(0x4a7461);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7464:{NFSU2_TR(0x4a7464);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7467:{NFSU2_TR(0x4a7467);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a746a:{NFSU2_TR(0x4a746a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a746d:{NFSU2_TR(0x4a746d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7470:{NFSU2_TR(0x4a7470);
__builtin_memmove((R+4),gp(0x78e00c),4);
}
B4a7476:{NFSU2_TR(0x4a7476);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7477:{NFSU2_TR(0x4a7477);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a747a:{NFSU2_TR(0x4a747a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a747b:{NFSU2_TR(0x4a747b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4a7481:{NFSU2_TR(0x4a7481);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7484:{NFSU2_TR(0x4a7484);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7488:{NFSU2_TR(0x4a7488);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7489:{NFSU2_TR(0x4a7489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a748eull));
TAIL_STATIC(0x5c5930u,5c5);
}
B4a748e:L4a748e:{c.instructions+=7;NFSU2_TR(0x4a748e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
}
B4a7494:{NFSU2_TR(0x4a7494);
w4(R+0,u32(0x7f45b0ull));
}
B4a7499:{NFSU2_TR(0x4a7499);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a749d:{NFSU2_TR(0x4a749d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74a1:{NFSU2_TR(0x4a74a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74a5:{NFSU2_TR(0x4a74a5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x88ull))));
}
B4a74ab:{NFSU2_TR(0x4a74ab);
{goto L4a74b1;}
}
B4a74ad:L4a74ad:{c.instructions+=1;NFSU2_TR(0x4a74ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a74b1:L4a74b1:{c.instructions+=22;NFSU2_TR(0x4a74b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a74b5:{NFSU2_TR(0x4a74b5);
w4(R+4,u32(0x3f800000ull));
}
B4a74ba:{NFSU2_TR(0x4a74ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a74bd:{NFSU2_TR(0x4a74bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4a74bf:{NFSU2_TR(0x4a74bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74c2:{NFSU2_TR(0x4a74c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74c5:{NFSU2_TR(0x4a74c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74c8:{NFSU2_TR(0x4a74c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a74cc:{NFSU2_TR(0x4a74cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74cf:{NFSU2_TR(0x4a74cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4a74d1:{NFSU2_TR(0x4a74d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74d4:{NFSU2_TR(0x4a74d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74d7:{NFSU2_TR(0x4a74d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74da:{NFSU2_TR(0x4a74da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74dd:{NFSU2_TR(0x4a74dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74e0:{NFSU2_TR(0x4a74e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74e3:{NFSU2_TR(0x4a74e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74e6:{NFSU2_TR(0x4a74e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74e9:{NFSU2_TR(0x4a74e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74ec:{NFSU2_TR(0x4a74ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a74ef:{NFSU2_TR(0x4a74ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4a74f5:{NFSU2_TR(0x4a74f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a754e;}}
}
B4a74f7:L4a74f7:{c.instructions+=3;NFSU2_TR(0x4a74f7);
{u32 ea_=u32(r4(R+4)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a74fd:{NFSU2_TR(0x4a74fd);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a7503:{NFSU2_TR(0x4a7503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7508ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a7508:L4a7508:{c.instructions+=12;NFSU2_TR(0x4a7508);
__builtin_memmove((R+4),(R+0),4);
}
B4a750a:{NFSU2_TR(0x4a750a);
w4(R+0,u32(0xb60b60b7ull));
}
B4a750f:{NFSU2_TR(0x4a750f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B4a7511:{NFSU2_TR(0x4a7511);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4a7513:{NFSU2_TR(0x4a7513);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4a7516:{NFSU2_TR(0x4a7516);
__builtin_memmove((R+0),(R+8),4);
}
B4a7518:{NFSU2_TR(0x4a7518);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B4a751b:{NFSU2_TR(0x4a751b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4a751d:{NFSU2_TR(0x4a751d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a751e:{NFSU2_TR(0x4a751e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a751f:{NFSU2_TR(0x4a751f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7520:{NFSU2_TR(0x4a7520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7525ull));
TAIL_STATIC(0x5bae60u,5ba);
}
B4a7525:L4a7525:{c.instructions+=12;NFSU2_TR(0x4a7525);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7529:{NFSU2_TR(0x4a7529);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a752d:{NFSU2_TR(0x4a752d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7531:{NFSU2_TR(0x4a7531);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7532:{NFSU2_TR(0x4a7532);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7535:{NFSU2_TR(0x4a7535);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7536:{NFSU2_TR(0x4a7536);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a753a:{NFSU2_TR(0x4a753a);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a753f:{NFSU2_TR(0x4a753f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7540:{NFSU2_TR(0x4a7540);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7541:{NFSU2_TR(0x4a7541);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7542:{NFSU2_TR(0x4a7542);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7547ull));
TAIL_STATIC(0x48f600u,48f);
}
B4a7547:L4a7547:{c.instructions+=2;NFSU2_TR(0x4a7547);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a754b:{NFSU2_TR(0x4a754b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4a754e:L4a754e:{c.instructions+=9;NFSU2_TR(0x4a754e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7551:{NFSU2_TR(0x4a7551);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7554:{NFSU2_TR(0x4a7554);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a7556:{NFSU2_TR(0x4a7556);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7559:{NFSU2_TR(0x4a7559);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a755c:{NFSU2_TR(0x4a755c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a755f:{NFSU2_TR(0x4a755f);
{u32 ea_=u32(u32(8610800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a7565:{NFSU2_TR(0x4a7565);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a756b:{NFSU2_TR(0x4a756b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7570ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a7570:L4a7570:{c.instructions+=12;NFSU2_TR(0x4a7570);
__builtin_memmove((R+4),(R+0),4);
}
B4a7572:{NFSU2_TR(0x4a7572);
w4(R+0,u32(0xb60b60b7ull));
}
B4a7577:{NFSU2_TR(0x4a7577);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B4a7579:{NFSU2_TR(0x4a7579);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4a757b:{NFSU2_TR(0x4a757b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4a757e:{NFSU2_TR(0x4a757e);
__builtin_memmove((R+4),(R+8),4);
}
B4a7580:{NFSU2_TR(0x4a7580);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B4a7583:{NFSU2_TR(0x4a7583);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4a7585:{NFSU2_TR(0x4a7585);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7586:{NFSU2_TR(0x4a7586);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7587:{NFSU2_TR(0x4a7587);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7588:{NFSU2_TR(0x4a7588);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a758dull));
TAIL_STATIC(0x5bae60u,5ba);
}
B4a758d:L4a758d:{c.instructions+=10;NFSU2_TR(0x4a758d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a7591:{NFSU2_TR(0x4a7591);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7595:{NFSU2_TR(0x4a7595);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a7598:{NFSU2_TR(0x4a7598);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7599:{NFSU2_TR(0x4a7599);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a759a:{NFSU2_TR(0x4a759a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a759b:{NFSU2_TR(0x4a759b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a759c:{NFSU2_TR(0x4a759c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a75a0:{NFSU2_TR(0x4a75a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a75a1:{NFSU2_TR(0x4a75a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a75a6ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B4a75a6:L4a75a6:{c.instructions+=9;NFSU2_TR(0x4a75a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4a75aa:{NFSU2_TR(0x4a75aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a75ae:{NFSU2_TR(0x4a75ae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B4a75b1:{NFSU2_TR(0x4a75b1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B4a75b4:{NFSU2_TR(0x4a75b4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B4a75b7:{NFSU2_TR(0x4a75b7);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7f45d4ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7f45d4ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4a75bc:{NFSU2_TR(0x4a75bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a75c0:{NFSU2_TR(0x4a75c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a75c4:{NFSU2_TR(0x4a75c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a74adu);}goto L4a74ad;}}
}
B4a75ca:L4a75ca:{c.instructions+=7;NFSU2_TR(0x4a75ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a75ce:{NFSU2_TR(0x4a75ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a75d2:{NFSU2_TR(0x4a75d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
}
B4a75d5:{NFSU2_TR(0x4a75d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a75d9:{NFSU2_TR(0x4a75d9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x148ull))));
}
B4a75df:{NFSU2_TR(0x4a75df);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a75e7:{NFSU2_TR(0x4a75e7);
{goto L4a75f0;}
}
B4a75f0:L4a75f0:{c.instructions+=3;NFSU2_TR(0x4a75f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a75f4:{NFSU2_TR(0x4a75f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4a75f7:{NFSU2_TR(0x4a75f7);
if(r1(R+518)){{goto L4a76e9;}}
}
B4a75fd:L4a75fd:{c.instructions+=22;NFSU2_TR(0x4a75fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a7601:{NFSU2_TR(0x4a7601);
w4(R+0,u32(0x3f800000ull));
}
B4a7606:{NFSU2_TR(0x4a7606);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a7609:{NFSU2_TR(0x4a7609);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4a760b:{NFSU2_TR(0x4a760b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a760e:{NFSU2_TR(0x4a760e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7611:{NFSU2_TR(0x4a7611);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7614:{NFSU2_TR(0x4a7614);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7617:{NFSU2_TR(0x4a7617);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4a7619:{NFSU2_TR(0x4a7619);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a761c:{NFSU2_TR(0x4a761c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a761f:{NFSU2_TR(0x4a761f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7622:{NFSU2_TR(0x4a7622);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7625:{NFSU2_TR(0x4a7625);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7628:{NFSU2_TR(0x4a7628);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a762b:{NFSU2_TR(0x4a762b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a762e:{NFSU2_TR(0x4a762e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7631:{NFSU2_TR(0x4a7631);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7634:{NFSU2_TR(0x4a7634);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7637:{NFSU2_TR(0x4a7637);
{u32 ea_=u32(r4(R+8)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a763d:{NFSU2_TR(0x4a763d);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a7643:{NFSU2_TR(0x4a7643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7648ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a7648:L4a7648:{c.instructions+=12;NFSU2_TR(0x4a7648);
__builtin_memmove((R+4),(R+0),4);
}
B4a764a:{NFSU2_TR(0x4a764a);
w4(R+0,u32(0xb60b60b7ull));
}
B4a764f:{NFSU2_TR(0x4a764f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B4a7651:{NFSU2_TR(0x4a7651);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4a7653:{NFSU2_TR(0x4a7653);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4a7656:{NFSU2_TR(0x4a7656);
__builtin_memmove((R+0),(R+8),4);
}
B4a7658:{NFSU2_TR(0x4a7658);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B4a765b:{NFSU2_TR(0x4a765b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4a765d:{NFSU2_TR(0x4a765d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a765e:{NFSU2_TR(0x4a765e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a765f:{NFSU2_TR(0x4a765f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7660:{NFSU2_TR(0x4a7660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7665ull));
TAIL_STATIC(0x5bae60u,5ba);
}
B4a7665:L4a7665:{c.instructions+=17;NFSU2_TR(0x4a7665);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7669:{NFSU2_TR(0x4a7669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a766b:{NFSU2_TR(0x4a766b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4a766e:{NFSU2_TR(0x4a766e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f45acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4a7675:{NFSU2_TR(0x4a7675);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7678:{NFSU2_TR(0x4a7678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a767a:{NFSU2_TR(0x4a767a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4a767d:{NFSU2_TR(0x4a767d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f45b0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4a7684:{NFSU2_TR(0x4a7684);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7687:{NFSU2_TR(0x4a7687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a7689:{NFSU2_TR(0x4a7689);
{u32 ea_=u32(u32(8340904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a768f:{NFSU2_TR(0x4a768f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4a7692:{NFSU2_TR(0x4a7692);
{u32 ea_=u32((r4(R+4)*4u)+u32(8340916u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a7699:{NFSU2_TR(0x4a7699);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a769c:{NFSU2_TR(0x4a769c);
{u32 ea_=u32(u32(8610800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a76a2:{NFSU2_TR(0x4a76a2);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a76a8:{NFSU2_TR(0x4a76a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a76adull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a76ad:L4a76ad:{c.instructions+=12;NFSU2_TR(0x4a76ad);
__builtin_memmove((R+4),(R+0),4);
}
B4a76af:{NFSU2_TR(0x4a76af);
w4(R+0,u32(0xb60b60b7ull));
}
B4a76b4:{NFSU2_TR(0x4a76b4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B4a76b6:{NFSU2_TR(0x4a76b6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4a76b8:{NFSU2_TR(0x4a76b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4a76bb:{NFSU2_TR(0x4a76bb);
__builtin_memmove((R+0),(R+8),4);
}
B4a76bd:{NFSU2_TR(0x4a76bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B4a76c0:{NFSU2_TR(0x4a76c0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4a76c2:{NFSU2_TR(0x4a76c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a76c3:{NFSU2_TR(0x4a76c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a76c4:{NFSU2_TR(0x4a76c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a76c5:{NFSU2_TR(0x4a76c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a76caull));
TAIL_STATIC(0x5bae60u,5ba);
}
B4a76ca:L4a76ca:{c.instructions+=11;NFSU2_TR(0x4a76ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a76ce:{NFSU2_TR(0x4a76ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a76d2:{NFSU2_TR(0x4a76d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4a76d5:{NFSU2_TR(0x4a76d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a76d6:{NFSU2_TR(0x4a76d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a76d7:{NFSU2_TR(0x4a76d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a76d8:{NFSU2_TR(0x4a76d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a76dc:{NFSU2_TR(0x4a76dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a76dd:{NFSU2_TR(0x4a76dd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xe8ull))));
}
B4a76e3:{NFSU2_TR(0x4a76e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a76e4:{NFSU2_TR(0x4a76e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a76e9ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B4a76e9:L4a76e9:{c.instructions+=8;NFSU2_TR(0x4a76e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a76ed:{NFSU2_TR(0x4a76ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a76f1:{NFSU2_TR(0x4a76f1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B4a76f4:{NFSU2_TR(0x4a76f4);
w1(R+512,carry<u32>(r4(R+24),u32(0x40ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B4a76f7:{NFSU2_TR(0x4a76f7);
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
B4a76f8:{NFSU2_TR(0x4a76f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a76fc:{NFSU2_TR(0x4a76fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7700:{NFSU2_TR(0x4a7700);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a75f0u);}goto L4a75f0;}}
}
B4a7706:L4a7706:{c.instructions+=6;NFSU2_TR(0x4a7706);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a7707:{NFSU2_TR(0x4a7707);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7708:{NFSU2_TR(0x4a7708);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a7709:{NFSU2_TR(0x4a7709);
__builtin_memmove((R+16),(R+20),4);
}
B4a770b:{NFSU2_TR(0x4a770b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a770c:{NFSU2_TR(0x4a770c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a770f:L4a770f:{c.instructions+=24;NFSU2_TR(0x4a770f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a7712:{NFSU2_TR(0x4a7712);
w4(R+0,u32(0x3f800000ull));
}
B4a7717:{NFSU2_TR(0x4a7717);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4a7719:{NFSU2_TR(0x4a7719);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a771c:{NFSU2_TR(0x4a771c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a771f:{NFSU2_TR(0x4a771f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7722:{NFSU2_TR(0x4a7722);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7725:{NFSU2_TR(0x4a7725);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7728:{NFSU2_TR(0x4a7728);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a772b:{NFSU2_TR(0x4a772b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a772e:{NFSU2_TR(0x4a772e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7731:{NFSU2_TR(0x4a7731);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7734:{NFSU2_TR(0x4a7734);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7737:{NFSU2_TR(0x4a7737);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a773a:{NFSU2_TR(0x4a773a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a773d:{NFSU2_TR(0x4a773d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7740:{NFSU2_TR(0x4a7740);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7743:{NFSU2_TR(0x4a7743);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7746:{NFSU2_TR(0x4a7746);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a7749:{NFSU2_TR(0x4a7749);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4a774b:{NFSU2_TR(0x4a774b);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a774e:{NFSU2_TR(0x4a774e);
__builtin_memmove((R+0),gp(0x8363f0),4);
}
B4a7753:{NFSU2_TR(0x4a7753);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7754:{NFSU2_TR(0x4a7754);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7759ull));
TAIL_STATIC(0x401020u,401);
}
B4a7759:L4a7759:{c.instructions+=4;NFSU2_TR(0x4a7759);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a775a:{NFSU2_TR(0x4a775a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a775b:{NFSU2_TR(0x4a775b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a775c:{NFSU2_TR(0x4a775c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7761ull));
TAIL_STATIC(0x5bae60u,5ba);
}
B4a7761:L4a7761:{c.instructions+=16;NFSU2_TR(0x4a7761);
__builtin_memmove((R+4),gp(0x78e004),4);
}
B4a7767:{NFSU2_TR(0x4a7767);
__builtin_memmove((R+8),gp(0x78e008),4);
}
B4a776d:{NFSU2_TR(0x4a776d);
__builtin_memmove((R+0),gp(0x78e00c),4);
}
B4a7772:{NFSU2_TR(0x4a7772);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a7775:{NFSU2_TR(0x4a7775);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7776:{NFSU2_TR(0x4a7776);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7777:{NFSU2_TR(0x4a7777);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a777a:{NFSU2_TR(0x4a777a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a777e:{NFSU2_TR(0x4a777e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a777f:{NFSU2_TR(0x4a777f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B4a7782:{NFSU2_TR(0x4a7782);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7783:{NFSU2_TR(0x4a7783);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7784:{NFSU2_TR(0x4a7784);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7788:{NFSU2_TR(0x4a7788);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a778b:{NFSU2_TR(0x4a778b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a778e:{NFSU2_TR(0x4a778e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7793ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B4a7793:L4a7793:{c.instructions+=6;NFSU2_TR(0x4a7793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a7794:{NFSU2_TR(0x4a7794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7795:{NFSU2_TR(0x4a7795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a7796:{NFSU2_TR(0x4a7796);
__builtin_memmove((R+16),(R+20),4);
}
B4a7798:{NFSU2_TR(0x4a7798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a7799:{NFSU2_TR(0x4a7799);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a77a0:L4a77a0:{c.instructions+=4;NFSU2_TR(0x4a77a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a77a3:{NFSU2_TR(0x4a77a3);
u8 U[4];
w4(U+0,u32(0x3b7f8aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a77a8:{NFSU2_TR(0x4a77a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a77a9:{NFSU2_TR(0x4a77a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a77aeull));
TAIL_STATIC(0x5379c0u,537);
}
B4a77ae:L4a77ae:{c.instructions+=2;NFSU2_TR(0x4a77ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a77af:{NFSU2_TR(0x4a77af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a77b4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a77b4:L4a77b4:{c.instructions+=2;NFSU2_TR(0x4a77b4);
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
B4a77b7:{NFSU2_TR(0x4a77b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a77c0:L4a77c0:{c.instructions+=3;NFSU2_TR(0x4a77c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a77c6:{NFSU2_TR(0x4a77c6);
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
B4a77c8:{NFSU2_TR(0x4a77c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a77e1;}}
}
B4a77ca:L4a77ca:{c.instructions+=4;NFSU2_TR(0x4a77ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a77cd:{NFSU2_TR(0x4a77cd);
u8 U[4];
w4(U+0,u32(0x3b7f8aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a77d2:{NFSU2_TR(0x4a77d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a77d3:{NFSU2_TR(0x4a77d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a77d8ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a77d8:L4a77d8:{c.instructions+=2;NFSU2_TR(0x4a77d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a77d9:{NFSU2_TR(0x4a77d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a77deull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a77de:L4a77de:{c.instructions+=1;NFSU2_TR(0x4a77de);
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
B4a77e1:L4a77e1:{c.instructions+=1;NFSU2_TR(0x4a77e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a77f0:L4a77f0:{c.instructions+=6;NFSU2_TR(0x4a77f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a77f6:{NFSU2_TR(0x4a77f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a77f8:{NFSU2_TR(0x4a77f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a77fb:{NFSU2_TR(0x4a77fb);
u8 U[4];
w4(U+0,u32(0xf80dbcaeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7800:{NFSU2_TR(0x4a7800);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7801:{NFSU2_TR(0x4a7801);
if(r1(R+518)){{goto L4a7812;}}
}
B4a7803:L4a7803:{c.instructions+=1;NFSU2_TR(0x4a7803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7808ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a7808:L4a7808:{c.instructions+=2;NFSU2_TR(0x4a7808);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7809:{NFSU2_TR(0x4a7809);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a780eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a780e:L4a780e:{c.instructions+=2;NFSU2_TR(0x4a780e);
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
B4a7811:{NFSU2_TR(0x4a7811);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7812:L4a7812:{c.instructions+=1;NFSU2_TR(0x4a7812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7817ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a7817:L4a7817:{c.instructions+=2;NFSU2_TR(0x4a7817);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7818:{NFSU2_TR(0x4a7818);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a781dull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a781d:L4a781d:{c.instructions+=2;NFSU2_TR(0x4a781d);
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
B4a7820:{NFSU2_TR(0x4a7820);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7830:L4a7830:{c.instructions+=2;NFSU2_TR(0x4a7830);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7835:{NFSU2_TR(0x4a7835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a783aull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a783a:L4a783a:{c.instructions+=3;NFSU2_TR(0x4a783a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a783d:{NFSU2_TR(0x4a783d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a783f:{NFSU2_TR(0x4a783f);
if(r1(R+518)){{goto L4a784e;}}
}
B4a7841:L4a7841:{c.instructions+=2;NFSU2_TR(0x4a7841);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x78fcd8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a7849:{NFSU2_TR(0x4a7849);
TAIL_STATIC(0x51bd10u,51b);
}
B4a784e:L4a784e:{c.instructions+=2;NFSU2_TR(0x4a784e);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7853:{NFSU2_TR(0x4a7853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7858ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a7858:L4a7858:{c.instructions+=3;NFSU2_TR(0x4a7858);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a785b:{NFSU2_TR(0x4a785b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a785d:{NFSU2_TR(0x4a785d);
if(r1(R+518)){{goto L4a7885;}}
}
B4a785f:L4a785f:{c.instructions+=2;NFSU2_TR(0x4a785f);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7864:{NFSU2_TR(0x4a7864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7869ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4a7869:L4a7869:{c.instructions+=3;NFSU2_TR(0x4a7869);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a786c:{NFSU2_TR(0x4a786c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a786e:{NFSU2_TR(0x4a786e);
if(r1(R+518)){{goto L4a7885;}}
}
B4a7870:L4a7870:{c.instructions+=3;NFSU2_TR(0x4a7870);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7874:{NFSU2_TR(0x4a7874);
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
B4a7876:{NFSU2_TR(0x4a7876);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a787c;}}
}
B4a7878:L4a7878:{c.instructions+=2;NFSU2_TR(0x4a7878);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a787b:{NFSU2_TR(0x4a787b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a787c:L4a787c:{c.instructions+=2;NFSU2_TR(0x4a787c);
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
B4a787f:{NFSU2_TR(0x4a787f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7885;}}
}
B4a7881:L4a7881:{c.instructions+=2;NFSU2_TR(0x4a7881);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7884:{NFSU2_TR(0x4a7884);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7885:L4a7885:{c.instructions+=2;NFSU2_TR(0x4a7885);
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
B4a7887:{NFSU2_TR(0x4a7887);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7890:L4a7890:{c.instructions+=5;NFSU2_TR(0x4a7890);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7891:{NFSU2_TR(0x4a7891);
__builtin_memmove((R+20),(R+16),4);
}
B4a7893:{NFSU2_TR(0x4a7893);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B4a7897:{NFSU2_TR(0x4a7897);
w4(R+0,u32(0x836750ull));
}
B4a789c:{NFSU2_TR(0x4a789c);
if(r1(R+518)){{goto L4a78a3;}}
}
B4a789e:L4a789e:{c.instructions+=1;NFSU2_TR(0x4a789e);
w4(R+0,u32(0x8371b0ull));
}
B4a78a3:L4a78a3:{c.instructions+=2;NFSU2_TR(0x4a78a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a78a4:{NFSU2_TR(0x4a78a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a78b0:L4a78b0:{c.instructions+=2;NFSU2_TR(0x4a78b0);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a78b5:{NFSU2_TR(0x4a78b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a78baull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a78ba:L4a78ba:{c.instructions+=3;NFSU2_TR(0x4a78ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a78bd:{NFSU2_TR(0x4a78bd);
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
B4a78bf:{NFSU2_TR(0x4a78bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a78d6;}}
}
B4a78c1:L4a78c1:{c.instructions+=6;NFSU2_TR(0x4a78c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a78c3:{NFSU2_TR(0x4a78c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a78c5:{NFSU2_TR(0x4a78c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a78c7:{NFSU2_TR(0x4a78c7);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a78cc:{NFSU2_TR(0x4a78cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a78ce:{NFSU2_TR(0x4a78ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a78d3ull));
TAIL_STATIC(0x555f50u,555);
}
B4a78d3:L4a78d3:{c.instructions+=1;NFSU2_TR(0x4a78d3);
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
B4a78d6:L4a78d6:{c.instructions+=1;NFSU2_TR(0x4a78d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a78e0:L4a78e0:{c.instructions+=2;NFSU2_TR(0x4a78e0);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a78e5:{NFSU2_TR(0x4a78e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a78eaull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a78ea:L4a78ea:{c.instructions+=3;NFSU2_TR(0x4a78ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a78ed:{NFSU2_TR(0x4a78ed);
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
B4a78ef:{NFSU2_TR(0x4a78ef);
if(r1(R+518)){{goto L4a78fc;}}
}
B4a78f1:L4a78f1:{c.instructions+=2;NFSU2_TR(0x4a78f1);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a78f6:{NFSU2_TR(0x4a78f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a78fbull));
TAIL_STATIC(0x5379a0u,537);
}
B4a78fb:L4a78fb:{c.instructions+=1;NFSU2_TR(0x4a78fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a78fc:L4a78fc:{c.instructions+=1;NFSU2_TR(0x4a78fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7900:L4a7900:{c.instructions+=8;NFSU2_TR(0x4a7900);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7904:{NFSU2_TR(0x4a7904);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7905:{NFSU2_TR(0x4a7905);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4a7907:{NFSU2_TR(0x4a7907);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a790c:{NFSU2_TR(0x4a790c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7910:{NFSU2_TR(0x4a7910);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7911:{NFSU2_TR(0x4a7911);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B4a7914:{NFSU2_TR(0x4a7914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7919ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a7830u);}goto L4a7830;}
}
B4a7919:L4a7919:{c.instructions+=4;NFSU2_TR(0x4a7919);
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
B4a791c:{NFSU2_TR(0x4a791c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7922:{NFSU2_TR(0x4a7922);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a7923:{NFSU2_TR(0x4a7923);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7930:L4a7930:{c.instructions+=2;NFSU2_TR(0x4a7930);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7932:{NFSU2_TR(0x4a7932);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7937ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a7830u);}goto L4a7830;}
}
B4a7937:L4a7937:{c.instructions+=8;NFSU2_TR(0x4a7937);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a793b:{NFSU2_TR(0x4a793b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4a793d:{NFSU2_TR(0x4a793d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a7940:{NFSU2_TR(0x4a7940);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a7946:{NFSU2_TR(0x4a7946);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B4a7949:{NFSU2_TR(0x4a7949);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x161ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a7950:{NFSU2_TR(0x4a7950);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7956:{NFSU2_TR(0x4a7956);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7960:L4a7960:{c.instructions+=4;NFSU2_TR(0x4a7960);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7961:{NFSU2_TR(0x4a7961);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7966:{NFSU2_TR(0x4a7966);
u8 U[4];
w4(U+0,u32(0xe550f66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a796b:{NFSU2_TR(0x4a796b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7970ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a7970:L4a7970:{c.instructions+=6;NFSU2_TR(0x4a7970);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7974:{NFSU2_TR(0x4a7974);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4a7976:{NFSU2_TR(0x4a7976);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a797b:{NFSU2_TR(0x4a797b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a797d:{NFSU2_TR(0x4a797d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B4a7980:{NFSU2_TR(0x4a7980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7985ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a7830u);}goto L4a7830;}
}
B4a7985:L4a7985:{c.instructions+=4;NFSU2_TR(0x4a7985);
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
B4a7988:{NFSU2_TR(0x4a7988);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a798e:{NFSU2_TR(0x4a798e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a798f:{NFSU2_TR(0x4a798f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7990:L4a7990:{c.instructions+=4;NFSU2_TR(0x4a7990);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7994:{NFSU2_TR(0x4a7994);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7995:{NFSU2_TR(0x4a7995);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7996:{NFSU2_TR(0x4a7996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a799bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a7830u);}goto L4a7830;}
}
B4a799b:L4a799b:{c.instructions+=4;NFSU2_TR(0x4a799b);
__builtin_memmove((R+24),(R+0),4);
}
B4a799d:{NFSU2_TR(0x4a799d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a79a0:{NFSU2_TR(0x4a79a0);
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
B4a79a2:{NFSU2_TR(0x4a79a2);
if(r1(R+518)){{goto L4a79ce;}}
}
B4a79a4:L4a79a4:{c.instructions+=3;NFSU2_TR(0x4a79a4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a79a8:{NFSU2_TR(0x4a79a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a79a9:{NFSU2_TR(0x4a79a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a79aeull));
TAIL_STATIC(0x48a2d0u,48a);
}
B4a79ae:L4a79ae:{c.instructions+=4;NFSU2_TR(0x4a79ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a79b1:{NFSU2_TR(0x4a79b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a79b4:{NFSU2_TR(0x4a79b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a79b6:{NFSU2_TR(0x4a79b6);
if(r1(R+518)){{goto L4a79be;}}
}
B4a79b8:L4a79b8:{c.instructions+=1;NFSU2_TR(0x4a79b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a79be:L4a79be:{c.instructions+=3;NFSU2_TR(0x4a79be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a79c1:{NFSU2_TR(0x4a79c1);
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
B4a79c3:{NFSU2_TR(0x4a79c3);
if(r1(R+518)){{goto L4a79cb;}}
}
B4a79c5:L4a79c5:{c.instructions+=1;NFSU2_TR(0x4a79c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a79cb:L4a79cb:{c.instructions+=1;NFSU2_TR(0x4a79cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a79ce:L4a79ce:{c.instructions+=2;NFSU2_TR(0x4a79ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a79cf:{NFSU2_TR(0x4a79cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a79d0:L4a79d0:{c.instructions+=7;NFSU2_TR(0x4a79d0);
__builtin_memmove((R+0),gp(0x838470),1);
}
B4a79d5:{NFSU2_TR(0x4a79d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a79d7:{NFSU2_TR(0x4a79d7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a79d8:{NFSU2_TR(0x4a79d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a79dc:{NFSU2_TR(0x4a79dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a79dd:{NFSU2_TR(0x4a79dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a79e0:{NFSU2_TR(0x4a79e0);
if(r1(R+518)){{goto L4a79f5;}}
}
B4a79e2:L4a79e2:{c.instructions+=3;NFSU2_TR(0x4a79e2);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a79e4:{NFSU2_TR(0x4a79e4);
w4(R+4,u32(0x83ad90ull));
}
B4a79e9:{NFSU2_TR(0x4a79e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a79eeull));
TAIL_STATIC(0x52a8a0u,52a);
}
B4a79ee:L4a79ee:{c.instructions+=1;NFSU2_TR(0x4a79ee);
s1(0x838470,u8(0x0ull));
}
B4a79f5:L4a79f5:{c.instructions+=3;NFSU2_TR(0x4a79f5);
__builtin_memmove((R+0),gp(0x836410),4);
}
B4a79fa:{NFSU2_TR(0x4a79fa);
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
B4a79fc:{NFSU2_TR(0x4a79fc);
if(r1(R+518)){{goto L4a7a4a;}}
}
B4a79fe:L4a79fe:{c.instructions+=4;NFSU2_TR(0x4a79fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a79ff:{NFSU2_TR(0x4a79ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a01:{NFSU2_TR(0x4a7a01);
__builtin_memmove((R+4),(R+24),4);
}
B4a7a03:{NFSU2_TR(0x4a7a03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7a08ull));
TAIL_STATIC(0x6102f0u,610);
}
B4a7a08:L4a7a08:{c.instructions+=5;NFSU2_TR(0x4a7a08);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a0a:{NFSU2_TR(0x4a7a0a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a0c:{NFSU2_TR(0x4a7a0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a0e:{NFSU2_TR(0x4a7a0e);
__builtin_memmove((R+28),(R+0),4);
}
B4a7a10:{NFSU2_TR(0x4a7a10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7a15ull));
TAIL_STATIC(0x60fee0u,60f);
}
B4a7a15:L4a7a15:{c.instructions+=6;NFSU2_TR(0x4a7a15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a7a18:{NFSU2_TR(0x4a7a18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a19:{NFSU2_TR(0x4a7a19);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a1b:{NFSU2_TR(0x4a7a1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a1c:{NFSU2_TR(0x4a7a1c);
w4(R+4,u32(0x8a2b68ull));
}
B4a7a21:{NFSU2_TR(0x4a7a21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7a26ull));
TAIL_STATIC(0x61bbf0u,61b);
}
B4a7a26:L4a7a26:{c.instructions+=4;NFSU2_TR(0x4a7a26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a27:{NFSU2_TR(0x4a7a27);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a29:{NFSU2_TR(0x4a7a29);
__builtin_memmove((R+4),(R+24),4);
}
B4a7a2b:{NFSU2_TR(0x4a7a2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7a30ull));
TAIL_STATIC(0x631d20u,631);
}
B4a7a30:L4a7a30:{c.instructions+=3;NFSU2_TR(0x4a7a30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a31:{NFSU2_TR(0x4a7a31);
__builtin_memmove((R+4),(R+20),4);
}
B4a7a33:{NFSU2_TR(0x4a7a33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7a38ull));
TAIL_STATIC(0x63a650u,63a);
}
B4a7a38:L4a7a38:{c.instructions+=5;NFSU2_TR(0x4a7a38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a7a39:{NFSU2_TR(0x4a7a39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7a3a:{NFSU2_TR(0x4a7a3a);
s4(0x836410,u32(0x0ull));
}
B4a7a44:{NFSU2_TR(0x4a7a44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a7a45:{NFSU2_TR(0x4a7a45);
TAIL_STATIC(0x4022c0u,402);
}
B4a7a4a:L4a7a4a:{c.instructions+=3;NFSU2_TR(0x4a7a4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7a4b:{NFSU2_TR(0x4a7a4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a7a4c:{NFSU2_TR(0x4a7a4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7a50:L4a7a50:{c.instructions+=7;NFSU2_TR(0x4a7a50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a51:{NFSU2_TR(0x4a7a51);
__builtin_memmove((R+24),(R+4),4);
}
B4a7a53:{NFSU2_TR(0x4a7a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7a56:{NFSU2_TR(0x4a7a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7a5c:{NFSU2_TR(0x4a7a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7a62:{NFSU2_TR(0x4a7a62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a63:{NFSU2_TR(0x4a7a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7a68ull));
TAIL_STATIC(0x512050u,512);
}
B4a7a68:L4a7a68:{c.instructions+=6;NFSU2_TR(0x4a7a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7a6b:{NFSU2_TR(0x4a7a6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a7a6e:{NFSU2_TR(0x4a7a6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a6f:{NFSU2_TR(0x4a7a6f);
u8 U[4];
w4(U+0,u32(0xee360ed5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a74:{NFSU2_TR(0x4a7a74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a75:{NFSU2_TR(0x4a7a75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7a7aull));
TAIL_STATIC(0x537a10u,537);
}
B4a7a7a:L4a7a7a:{c.instructions+=3;NFSU2_TR(0x4a7a7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a7a7d:{NFSU2_TR(0x4a7a7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a7e:{NFSU2_TR(0x4a7a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7a83ull));
TAIL_STATIC(0x50c900u,50c);
}
B4a7a83:L4a7a83:{c.instructions+=6;NFSU2_TR(0x4a7a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a7a86:{NFSU2_TR(0x4a7a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7a8c:{NFSU2_TR(0x4a7a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7a92:{NFSU2_TR(0x4a7a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a7a95:{NFSU2_TR(0x4a7a95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a96:{NFSU2_TR(0x4a7a96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7a9bull));
TAIL_STATIC(0x5120f0u,512);
}
B4a7a9b:L4a7a9b:{c.instructions+=5;NFSU2_TR(0x4a7a9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a7a9e:{NFSU2_TR(0x4a7a9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7a9f:{NFSU2_TR(0x4a7a9f);
u8 U[4];
w4(U+0,u32(0xb05dd708ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7aa4:{NFSU2_TR(0x4a7aa4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7aa5:{NFSU2_TR(0x4a7aa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7aaaull));
TAIL_STATIC(0x537a60u,537);
}
B4a7aaa:L4a7aaa:{c.instructions+=3;NFSU2_TR(0x4a7aaa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a7aad:{NFSU2_TR(0x4a7aad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7aae:{NFSU2_TR(0x4a7aae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7ab3ull));
TAIL_STATIC(0x50c990u,50c);
}
B4a7ab3:L4a7ab3:{c.instructions+=3;NFSU2_TR(0x4a7ab3);
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
B4a7ab6:{NFSU2_TR(0x4a7ab6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7ab7:{NFSU2_TR(0x4a7ab7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7ac0:L4a7ac0:{c.instructions+=4;NFSU2_TR(0x4a7ac0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7ac4:{NFSU2_TR(0x4a7ac4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4a7acb:{NFSU2_TR(0x4a7acb);
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
B4a7acd:{NFSU2_TR(0x4a7acd);
if(r1(R+518)){{goto L4a7ad3;}}
}
B4a7acf:L4a7acf:{c.instructions+=2;NFSU2_TR(0x4a7acf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7ad2:{NFSU2_TR(0x4a7ad2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7ad3:L4a7ad3:{c.instructions+=2;NFSU2_TR(0x4a7ad3);
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
B4a7ad6:{NFSU2_TR(0x4a7ad6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7ae0:L4a7ae0:{c.instructions+=5;NFSU2_TR(0x4a7ae0);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B4a7ae5:{NFSU2_TR(0x4a7ae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7ae8:{NFSU2_TR(0x4a7ae8);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4a7aed:{NFSU2_TR(0x4a7aed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a7aef:{NFSU2_TR(0x4a7aef);
if(r1(R+518)){{goto L4a7af6;}}
}
B4a7af1:L4a7af1:{c.instructions+=2;NFSU2_TR(0x4a7af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7af4:{NFSU2_TR(0x4a7af4);
{goto L4a7af9;}
}
B4a7af6:L4a7af6:{c.instructions+=1;NFSU2_TR(0x4a7af6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4a7af9:L4a7af9:{c.instructions+=2;NFSU2_TR(0x4a7af9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a7afb:{NFSU2_TR(0x4a7afb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7b00;}}
}
B4a7afd:L4a7afd:{c.instructions+=2;NFSU2_TR(0x4a7afd);
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
B4a7aff:{NFSU2_TR(0x4a7aff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7b00:L4a7b00:{c.instructions+=3;NFSU2_TR(0x4a7b00);
__builtin_memmove((R+0),gp(0x8900b0),4);
}
B4a7b05:{NFSU2_TR(0x4a7b05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a7b07:{NFSU2_TR(0x4a7b07);
if(r1(R+518)){{goto L4a7b16;}}
}
B4a7b09:L4a7b09:{c.instructions+=6;NFSU2_TR(0x4a7b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7b0c:{NFSU2_TR(0x4a7b0c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4a7b0e:{NFSU2_TR(0x4a7b0e);
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
B4a7b10:{NFSU2_TR(0x4a7b10);
__builtin_memmove((R+8),(R+518),1);
}
B4a7b13:{NFSU2_TR(0x4a7b13);
__builtin_memmove((R+0),(R+8),4);
}
B4a7b15:{NFSU2_TR(0x4a7b15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7b16:L4a7b16:{c.instructions+=6;NFSU2_TR(0x4a7b16);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4a7b19:{NFSU2_TR(0x4a7b19);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4a7b1b:{NFSU2_TR(0x4a7b1b);
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
B4a7b1d:{NFSU2_TR(0x4a7b1d);
__builtin_memmove((R+8),(R+518),1);
}
B4a7b20:{NFSU2_TR(0x4a7b20);
__builtin_memmove((R+0),(R+8),4);
}
B4a7b22:{NFSU2_TR(0x4a7b22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7b30:L4a7b30:{c.instructions+=7;NFSU2_TR(0x4a7b30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7b34:{NFSU2_TR(0x4a7b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a7b37:{NFSU2_TR(0x4a7b37);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4a7b3e:{NFSU2_TR(0x4a7b3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7b3f:{NFSU2_TR(0x4a7b3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4a7b41:{NFSU2_TR(0x4a7b41);
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
B4a7b43:{NFSU2_TR(0x4a7b43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7b61;}}
}
B4a7b45:L4a7b45:{c.instructions+=7;NFSU2_TR(0x4a7b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7b48:{NFSU2_TR(0x4a7b48);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4a7b4e:{NFSU2_TR(0x4a7b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7b54:{NFSU2_TR(0x4a7b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbf0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7b5a:{NFSU2_TR(0x4a7b5a);
w4(R+0,u32(0x1ull));
}
B4a7b5f:{NFSU2_TR(0x4a7b5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7b60:{NFSU2_TR(0x4a7b60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7b61:L4a7b61:{c.instructions+=2;NFSU2_TR(0x4a7b61);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4a7b64:{NFSU2_TR(0x4a7b64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7b7f;}}
}
B4a7b66:L4a7b66:{c.instructions+=8;NFSU2_TR(0x4a7b66);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4a7b69:{NFSU2_TR(0x4a7b69);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a7b6c:{NFSU2_TR(0x4a7b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7b6f:{NFSU2_TR(0x4a7b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7b72:{NFSU2_TR(0x4a7b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7b75:{NFSU2_TR(0x4a7b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a7b77:{NFSU2_TR(0x4a7b77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7b78:{NFSU2_TR(0x4a7b78);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7b7bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a7b7b:L4a7b7b:{c.instructions+=3;NFSU2_TR(0x4a7b7b);
__builtin_memmove((R+0),(R+24),4);
}
B4a7b7d:{NFSU2_TR(0x4a7b7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7b7e:{NFSU2_TR(0x4a7b7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7b7f:L4a7b7f:{c.instructions+=2;NFSU2_TR(0x4a7b7f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4a7b82:{NFSU2_TR(0x4a7b82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7b9d;}}
}
B4a7b84:L4a7b84:{c.instructions+=8;NFSU2_TR(0x4a7b84);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4a7b87:{NFSU2_TR(0x4a7b87);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a7b8a:{NFSU2_TR(0x4a7b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a7b8d:{NFSU2_TR(0x4a7b8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7b90:{NFSU2_TR(0x4a7b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x464ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a7b96:{NFSU2_TR(0x4a7b96);
w4(R+0,u32(0x1ull));
}
B4a7b9b:{NFSU2_TR(0x4a7b9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7b9c:{NFSU2_TR(0x4a7b9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7b9d:L4a7b9d:{c.instructions+=2;NFSU2_TR(0x4a7b9d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4a7ba0:{NFSU2_TR(0x4a7ba0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7baf;}}
}
B4a7ba2:L4a7ba2:{c.instructions+=5;NFSU2_TR(0x4a7ba2);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a7ba5:{NFSU2_TR(0x4a7ba5);
w4(R+0,u32(0x1ull));
}
B4a7baa:{NFSU2_TR(0x4a7baa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7bab:{NFSU2_TR(0x4a7bab);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a7bae:{NFSU2_TR(0x4a7bae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7baf:L4a7baf:{c.instructions+=3;NFSU2_TR(0x4a7baf);
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
B4a7bb1:{NFSU2_TR(0x4a7bb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7bb2:{NFSU2_TR(0x4a7bb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7bc0:L4a7bc0:{c.instructions+=3;NFSU2_TR(0x4a7bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7bc6:{NFSU2_TR(0x4a7bc6);
u8 U[8];
__builtin_memmove((U+0),gp(0x8651ac),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a7bcc:{NFSU2_TR(0x4a7bcc);
if(r1(R+518)){{goto L4a7bea;}}
}
B4a7bce:L4a7bce:{c.instructions+=4;NFSU2_TR(0x4a7bce);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a7bd4:{NFSU2_TR(0x4a7bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7bd7:{NFSU2_TR(0x4a7bd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7bd8:{NFSU2_TR(0x4a7bd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7bddull));
TAIL_STATIC(0x571a60u,571);
}
B4a7bdd:L4a7bdd:{c.instructions+=3;NFSU2_TR(0x4a7bdd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a7be0:{NFSU2_TR(0x4a7be0);
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
B4a7be2:{NFSU2_TR(0x4a7be2);
if(r1(R+518)){{goto L4a7bea;}}
}
B4a7be4:L4a7be4:{c.instructions+=2;NFSU2_TR(0x4a7be4);
w4(R+0,u32(0x1ull));
}
B4a7be9:{NFSU2_TR(0x4a7be9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7bea:L4a7bea:{c.instructions+=2;NFSU2_TR(0x4a7bea);
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
B4a7bec:{NFSU2_TR(0x4a7bec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7bf0:L4a7bf0:{c.instructions+=6;NFSU2_TR(0x4a7bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7bf1:{NFSU2_TR(0x4a7bf1);
__builtin_memmove((R+24),gp(0x8900d8),4);
}
B4a7bf7:{NFSU2_TR(0x4a7bf7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7bf8:{NFSU2_TR(0x4a7bf8);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4a7bfa:{NFSU2_TR(0x4a7bfa);
w4(R+8,u32(0x8900acull));
}
B4a7bff:{NFSU2_TR(0x4a7bff);
}
B4a7c00:L4a7c00:{c.instructions+=3;NFSU2_TR(0x4a7c00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4a7c02:{NFSU2_TR(0x4a7c02);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a7c04:{NFSU2_TR(0x4a7c04);
if(r1(R+518)){{goto L4a7c0e;}}
}
B4a7c06:L4a7c06:{c.instructions+=3;NFSU2_TR(0x4a7c06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a7c09:{NFSU2_TR(0x4a7c09);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4a7c0c:{NFSU2_TR(0x4a7c0c);
if(r1(R+518)){{goto L4a7c1c;}}
}
B4a7c0e:L4a7c0e:{c.instructions+=3;NFSU2_TR(0x4a7c0e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4a7c11:{NFSU2_TR(0x4a7c11);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x8900b4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8900b4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8900b4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a7c17:{NFSU2_TR(0x4a7c17);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a7c00u);}goto L4a7c00;}}
}
B4a7c19:L4a7c19:{c.instructions+=3;NFSU2_TR(0x4a7c19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a7c1a:{NFSU2_TR(0x4a7c1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7c1b:{NFSU2_TR(0x4a7c1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7c1c:L4a7c1c:{c.instructions+=3;NFSU2_TR(0x4a7c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a7c1f:{NFSU2_TR(0x4a7c1f);
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
B4a7c21:{NFSU2_TR(0x4a7c21);
if(r1(R+518)){{goto L4a7c2d;}}
}
B4a7c23:L4a7c23:{c.instructions+=3;NFSU2_TR(0x4a7c23);
__builtin_memmove((R+4),gp(0x89e7b0),4);
}
B4a7c29:{NFSU2_TR(0x4a7c29);
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
B4a7c2b:{NFSU2_TR(0x4a7c2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7c2f;}}
}
B4a7c2d:L4a7c2d:{c.instructions+=1;NFSU2_TR(0x4a7c2d);
w1(R+0,u8(0x1ull));
}
B4a7c2f:L4a7c2f:{c.instructions+=3;NFSU2_TR(0x4a7c2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a7c30:{NFSU2_TR(0x4a7c30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7c31:{NFSU2_TR(0x4a7c31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7c40:L4a7c40:{c.instructions+=3;NFSU2_TR(0x4a7c40);
__builtin_memmove((R+4),gp(0x89e7b0),4);
}
B4a7c46:{NFSU2_TR(0x4a7c46);
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
B4a7c48:{NFSU2_TR(0x4a7c48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7c50;}}
}
B4a7c4a:L4a7c4a:{c.instructions+=2;NFSU2_TR(0x4a7c4a);
w4(R+0,u32(0x3ull));
}
B4a7c4f:{NFSU2_TR(0x4a7c4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7c50:L4a7c50:{c.instructions+=3;NFSU2_TR(0x4a7c50);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x7ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a7c53:{NFSU2_TR(0x4a7c53);
w4(R+0,u32(0x1ull));
}
B4a7c58:{NFSU2_TR(0x4a7c58);
if(r1(R+518)){{goto L4a7c5f;}}
}
B4a7c5a:L4a7c5a:{c.instructions+=1;NFSU2_TR(0x4a7c5a);
w4(R+0,u32(0x2ull));
}
B4a7c5f:L4a7c5f:{c.instructions+=3;NFSU2_TR(0x4a7c5f);
__builtin_memmove((R+4),gp(0x850078),4);
}
B4a7c65:{NFSU2_TR(0x4a7c65);
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
B4a7c66:{NFSU2_TR(0x4a7c66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7c70:L4a7c70:{c.instructions+=2;NFSU2_TR(0x4a7c70);
w4(R+4,u32(0x85ad40ull));
}
B4a7c75:{NFSU2_TR(0x4a7c75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7c7aull));
TAIL_STATIC(0x513b30u,513);
}
B4a7c7a:L4a7c7a:{c.instructions+=2;NFSU2_TR(0x4a7c7a);
u8 U[4];
w4(U+0,u32(0x78f5a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7c7f:{NFSU2_TR(0x4a7c7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7c84ull));
TAIL_STATIC(0x50c8d0u,50c);
}
B4a7c84:L4a7c84:{c.instructions+=4;NFSU2_TR(0x4a7c84);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a7c8a:{NFSU2_TR(0x4a7c8a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a7c8d:{NFSU2_TR(0x4a7c8d);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7c8f:{NFSU2_TR(0x4a7c8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7c94ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4a7c94:L4a7c94:{c.instructions+=1;NFSU2_TR(0x4a7c94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7c99ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a7c99:L4a7c99:{c.instructions+=2;NFSU2_TR(0x4a7c99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7c9a:{NFSU2_TR(0x4a7c9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7c9full));
TAIL_STATIC(0x52cf60u,52c);
}
B4a7c9f:L4a7c9f:{c.instructions+=3;NFSU2_TR(0x4a7c9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a7ca2:{NFSU2_TR(0x4a7ca2);
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
B4a7ca4:{NFSU2_TR(0x4a7ca4);
if(r1(R+518)){{goto L4a7cb2;}}
}
B4a7ca6:L4a7ca6:{c.instructions+=1;NFSU2_TR(0x4a7ca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7cabull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a7cab:L4a7cab:{c.instructions+=2;NFSU2_TR(0x4a7cab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7cac:{NFSU2_TR(0x4a7cac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7cb1ull));
TAIL_STATIC(0x5379a0u,537);
}
B4a7cb1:L4a7cb1:{c.instructions+=1;NFSU2_TR(0x4a7cb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a7cb2:L4a7cb2:{c.instructions+=1;NFSU2_TR(0x4a7cb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7cc0:L4a7cc0:{c.instructions+=2;NFSU2_TR(0x4a7cc0);
w4(R+4,u32(0x85ad40ull));
}
B4a7cc5:{NFSU2_TR(0x4a7cc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7ccaull));
TAIL_STATIC(0x513b30u,513);
}
B4a7cca:L4a7cca:{c.instructions+=2;NFSU2_TR(0x4a7cca);
u8 U[4];
w4(U+0,u32(0x78f5a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7ccf:{NFSU2_TR(0x4a7ccf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7cd4ull));
TAIL_STATIC(0x50c8d0u,50c);
}
B4a7cd4:L4a7cd4:{c.instructions+=4;NFSU2_TR(0x4a7cd4);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a7cda:{NFSU2_TR(0x4a7cda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a7cdd:{NFSU2_TR(0x4a7cdd);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7cdf:{NFSU2_TR(0x4a7cdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7ce4ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4a7ce4:L4a7ce4:{c.instructions+=1;NFSU2_TR(0x4a7ce4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7cf0:L4a7cf0:{c.instructions+=5;NFSU2_TR(0x4a7cf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7cf1:{NFSU2_TR(0x4a7cf1);
__builtin_memmove((R+24),(R+4),4);
}
B4a7cf3:{NFSU2_TR(0x4a7cf3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7cf5:{NFSU2_TR(0x4a7cf5);
w4(R+4,u32(0x83a9d0ull));
}
B4a7cfa:{NFSU2_TR(0x4a7cfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7cffull));
TAIL_STATIC(0x502ff0u,502);
}
B4a7cff:L4a7cff:{c.instructions+=2;NFSU2_TR(0x4a7cff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7d00:{NFSU2_TR(0x4a7d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7d05ull));
TAIL_STATIC(0x50c8d0u,50c);
}
B4a7d05:L4a7d05:{c.instructions+=4;NFSU2_TR(0x4a7d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7d08:{NFSU2_TR(0x4a7d08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7d0a:{NFSU2_TR(0x4a7d0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7d0b:{NFSU2_TR(0x4a7d0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7d10ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4a7d10:L4a7d10:{c.instructions+=4;NFSU2_TR(0x4a7d10);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a7d16:{NFSU2_TR(0x4a7d16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a7d19:{NFSU2_TR(0x4a7d19);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7d1b:{NFSU2_TR(0x4a7d1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7d20ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4a7d20:L4a7d20:{c.instructions+=3;NFSU2_TR(0x4a7d20);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
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
B4a7d27:{NFSU2_TR(0x4a7d27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7d28:{NFSU2_TR(0x4a7d28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7d34;}}
}
B4a7d2a:L4a7d2a:{c.instructions+=2;NFSU2_TR(0x4a7d2a);
w4(R+4,u32(0x85ad40ull));
}
B4a7d2f:{NFSU2_TR(0x4a7d2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7d34ull));
TAIL_STATIC(0x5139c0u,513);
}
B4a7d34:L4a7d34:{c.instructions+=1;NFSU2_TR(0x4a7d34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7d39ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a7d39:L4a7d39:{c.instructions+=2;NFSU2_TR(0x4a7d39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7d3a:{NFSU2_TR(0x4a7d3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7d3full));
TAIL_STATIC(0x52cf60u,52c);
}
B4a7d3f:L4a7d3f:{c.instructions+=3;NFSU2_TR(0x4a7d3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a7d42:{NFSU2_TR(0x4a7d42);
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
B4a7d44:{NFSU2_TR(0x4a7d44);
if(r1(R+518)){{goto L4a7d52;}}
}
B4a7d46:L4a7d46:{c.instructions+=1;NFSU2_TR(0x4a7d46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7d4bull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a7d4b:L4a7d4b:{c.instructions+=2;NFSU2_TR(0x4a7d4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7d4c:{NFSU2_TR(0x4a7d4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7d51ull));
TAIL_STATIC(0x5379a0u,537);
}
B4a7d51:L4a7d51:{c.instructions+=1;NFSU2_TR(0x4a7d51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a7d52:L4a7d52:{c.instructions+=1;NFSU2_TR(0x4a7d52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7d60:L4a7d60:{c.instructions+=14;NFSU2_TR(0x4a7d60);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7d64:{NFSU2_TR(0x4a7d64);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7d65:{NFSU2_TR(0x4a7d65);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a7d69:{NFSU2_TR(0x4a7d69);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7d6a:{NFSU2_TR(0x4a7d6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a7d6e:{NFSU2_TR(0x4a7d6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7d6f:{NFSU2_TR(0x4a7d6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7d70:{NFSU2_TR(0x4a7d70);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a7d74:{NFSU2_TR(0x4a7d74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7d75:{NFSU2_TR(0x4a7d75);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7d76:{NFSU2_TR(0x4a7d76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7d77:{NFSU2_TR(0x4a7d77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7d78:{NFSU2_TR(0x4a7d78);
__builtin_memmove((R+24),(R+4),4);
}
B4a7d7a:{NFSU2_TR(0x4a7d7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7d7full));
TAIL_STATIC(0x543d40u,543);
}
B4a7d7f:L4a7d7f:{c.instructions+=2;NFSU2_TR(0x4a7d7f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xc98356baull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a7d85:{NFSU2_TR(0x4a7d85);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4a7ef3;}}
}
B4a7d8b:L4a7d8b:{c.instructions+=1;NFSU2_TR(0x4a7d8b);
if(r1(R+518)){{goto L4a7eba;}}
}
B4a7d91:L4a7d91:{c.instructions+=2;NFSU2_TR(0x4a7d91);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a7d97:{NFSU2_TR(0x4a7d97);
if(r1(R+518)){{goto L4a7e51;}}
}
B4a7d9d:L4a7d9d:{c.instructions+=2;NFSU2_TR(0x4a7d9d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5af2461ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5af2461ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5af2461ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a7da3:{NFSU2_TR(0x4a7da3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7f60;}}
}
B4a7da9:L4a7da9:{c.instructions+=4;NFSU2_TR(0x4a7da9);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a7daf:{NFSU2_TR(0x4a7daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7db2:{NFSU2_TR(0x4a7db2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7db3:{NFSU2_TR(0x4a7db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7db8ull));
TAIL_STATIC(0x571a60u,571);
}
B4a7db8:L4a7db8:{c.instructions+=3;NFSU2_TR(0x4a7db8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a7dbb:{NFSU2_TR(0x4a7dbb);
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
B4a7dbd:{NFSU2_TR(0x4a7dbd);
if(r1(R+518)){{goto L4a7f60;}}
}
B4a7dc3:L4a7dc3:{c.instructions+=5;NFSU2_TR(0x4a7dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7dc6:{NFSU2_TR(0x4a7dc6);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7dcb:{NFSU2_TR(0x4a7dcb);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7dd0:{NFSU2_TR(0x4a7dd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7dd1:{NFSU2_TR(0x4a7dd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7dd6ull));
TAIL_STATIC(0x537cc0u,537);
}
B4a7dd6:L4a7dd6:{c.instructions+=3;NFSU2_TR(0x4a7dd6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a7dd9:{NFSU2_TR(0x4a7dd9);
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
B4a7ddb:{NFSU2_TR(0x4a7ddb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7f60;}}
}
B4a7de1:L4a7de1:{c.instructions+=1;NFSU2_TR(0x4a7de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7de6ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a7de6:L4a7de6:{c.instructions+=2;NFSU2_TR(0x4a7de6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7de7:{NFSU2_TR(0x4a7de7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7decull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a7dec:L4a7dec:{c.instructions+=3;NFSU2_TR(0x4a7dec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a7def:{NFSU2_TR(0x4a7def);
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
B4a7df1:{NFSU2_TR(0x4a7df1);
if(r1(R+518)){{goto L4a7e01;}}
}
B4a7df3:L4a7df3:{c.instructions+=1;NFSU2_TR(0x4a7df3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7df8ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a7df8:L4a7df8:{c.instructions+=2;NFSU2_TR(0x4a7df8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7df9:{NFSU2_TR(0x4a7df9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7dfeull));
TAIL_STATIC(0x5379a0u,537);
}
B4a7dfe:L4a7dfe:{c.instructions+=1;NFSU2_TR(0x4a7dfe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a7e01:L4a7e01:{c.instructions+=2;NFSU2_TR(0x4a7e01);
__builtin_memmove((R+4),(R+24),4);
}
B4a7e03:{NFSU2_TR(0x4a7e03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7e08ull));
TAIL_STATIC(0x52fbf0u,52f);
}
B4a7e08:L4a7e08:{c.instructions+=7;NFSU2_TR(0x4a7e08);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a7e0c:{NFSU2_TR(0x4a7e0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e0d:{NFSU2_TR(0x4a7e0d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e0e:{NFSU2_TR(0x4a7e0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e0f:{NFSU2_TR(0x4a7e0f);
u8 U[4];
w4(U+0,u32(0xb5af2461ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e14:{NFSU2_TR(0x4a7e14);
__builtin_memmove((R+4),(R+24),4);
}
B4a7e16:{NFSU2_TR(0x4a7e16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7e1bull));
TAIL_STATIC(0x50da20u,50d);
}
B4a7e1b:L4a7e1b:{c.instructions+=6;NFSU2_TR(0x4a7e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7e1e:{NFSU2_TR(0x4a7e1e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e20:{NFSU2_TR(0x4a7e20);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e25:{NFSU2_TR(0x4a7e25);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e2a:{NFSU2_TR(0x4a7e2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e2b:{NFSU2_TR(0x4a7e2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7e30ull));
TAIL_STATIC(0x537c00u,537);
}
B4a7e30:L4a7e30:{c.instructions+=4;NFSU2_TR(0x4a7e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7e33:{NFSU2_TR(0x4a7e33);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e35:{NFSU2_TR(0x4a7e35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e36:{NFSU2_TR(0x4a7e36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7e3bull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4a7e3b:L4a7e3b:{c.instructions+=3;NFSU2_TR(0x4a7e3b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e3d:{NFSU2_TR(0x4a7e3d);
u8 U[4];
w4(U+0,u32(0x79070cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e42:{NFSU2_TR(0x4a7e42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7e47ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4a7e47:L4a7e47:{c.instructions+=6;NFSU2_TR(0x4a7e47);
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
B4a7e4a:{NFSU2_TR(0x4a7e4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a7e4b:{NFSU2_TR(0x4a7e4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7e4c:{NFSU2_TR(0x4a7e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a7e4d:{NFSU2_TR(0x4a7e4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a7e4e:{NFSU2_TR(0x4a7e4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7e51:L4a7e51:{c.instructions+=5;NFSU2_TR(0x4a7e51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7e54:{NFSU2_TR(0x4a7e54);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e59:{NFSU2_TR(0x4a7e59);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e5e:{NFSU2_TR(0x4a7e5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e5f:{NFSU2_TR(0x4a7e5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7e64ull));
TAIL_STATIC(0x537cc0u,537);
}
B4a7e64:L4a7e64:{c.instructions+=3;NFSU2_TR(0x4a7e64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a7e67:{NFSU2_TR(0x4a7e67);
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
B4a7e69:{NFSU2_TR(0x4a7e69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7f60;}}
}
B4a7e6f:L4a7e6f:{c.instructions+=4;NFSU2_TR(0x4a7e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a7e72:{NFSU2_TR(0x4a7e72);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e74:{NFSU2_TR(0x4a7e74);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e75:{NFSU2_TR(0x4a7e75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7e7aull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4a7e7a:L4a7e7a:{c.instructions+=6;NFSU2_TR(0x4a7e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7e7d:{NFSU2_TR(0x4a7e7d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e7f:{NFSU2_TR(0x4a7e7f);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e84:{NFSU2_TR(0x4a7e84);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e89:{NFSU2_TR(0x4a7e89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e8a:{NFSU2_TR(0x4a7e8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7e8full));
TAIL_STATIC(0x537c00u,537);
}
B4a7e8f:L4a7e8f:{c.instructions+=1;NFSU2_TR(0x4a7e8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7e94ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a7e94:L4a7e94:{c.instructions+=2;NFSU2_TR(0x4a7e94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7e95:{NFSU2_TR(0x4a7e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7e9aull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a7e9a:L4a7e9a:{c.instructions+=3;NFSU2_TR(0x4a7e9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4a7e9d:{NFSU2_TR(0x4a7e9d);
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
B4a7e9f:{NFSU2_TR(0x4a7e9f);
if(r1(R+518)){{goto L4a7f60;}}
}
B4a7ea5:L4a7ea5:{c.instructions+=1;NFSU2_TR(0x4a7ea5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7eaaull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a7eaa:L4a7eaa:{c.instructions+=2;NFSU2_TR(0x4a7eaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7eab:{NFSU2_TR(0x4a7eab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7eb0ull));
TAIL_STATIC(0x5379a0u,537);
}
B4a7eb0:L4a7eb0:{c.instructions+=6;NFSU2_TR(0x4a7eb0);
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
B4a7eb3:{NFSU2_TR(0x4a7eb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a7eb4:{NFSU2_TR(0x4a7eb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7eb5:{NFSU2_TR(0x4a7eb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a7eb6:{NFSU2_TR(0x4a7eb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a7eb7:{NFSU2_TR(0x4a7eb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7eba:L4a7eba:{c.instructions+=3;NFSU2_TR(0x4a7eba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a7ec0:{NFSU2_TR(0x4a7ec0);
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
B4a7ec2:{NFSU2_TR(0x4a7ec2);
if(r1(R+518)){{goto L4a7f60;}}
}
B4a7ec8:L4a7ec8:{c.instructions+=4;NFSU2_TR(0x4a7ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7ecb:{NFSU2_TR(0x4a7ecb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7ecd:{NFSU2_TR(0x4a7ecd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7ece:{NFSU2_TR(0x4a7ece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7ed3ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4a7ed3:L4a7ed3:{c.instructions+=3;NFSU2_TR(0x4a7ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a7ed6:{NFSU2_TR(0x4a7ed6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7ed7:{NFSU2_TR(0x4a7ed7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7edcull));
TAIL_STATIC(0x5379a0u,537);
}
B4a7edc:L4a7edc:{c.instructions+=4;NFSU2_TR(0x4a7edc);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a7ee2:{NFSU2_TR(0x4a7ee2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a7ee5:{NFSU2_TR(0x4a7ee5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7ee7:{NFSU2_TR(0x4a7ee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7eecull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4a7eec:L4a7eec:{c.instructions+=5;NFSU2_TR(0x4a7eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a7eed:{NFSU2_TR(0x4a7eed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7eee:{NFSU2_TR(0x4a7eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a7eef:{NFSU2_TR(0x4a7eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a7ef0:{NFSU2_TR(0x4a7ef0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7ef3:L4a7ef3:{c.instructions+=2;NFSU2_TR(0x4a7ef3);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a7ef9:{NFSU2_TR(0x4a7ef9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7f60;}}
}
B4a7efb:L4a7efb:{c.instructions+=3;NFSU2_TR(0x4a7efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7f01:{NFSU2_TR(0x4a7f01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a7f06:{NFSU2_TR(0x4a7f06);
if(r1(R+518)){{goto L4a7f4d;}}
}
B4a7f08:L4a7f08:{c.instructions+=2;NFSU2_TR(0x4a7f08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a7f0d:{NFSU2_TR(0x4a7f0d);
if(r1(R+518)){{goto L4a7f24;}}
}
B4a7f0f:L4a7f0f:{c.instructions+=2;NFSU2_TR(0x4a7f0f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5af2461ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5af2461ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5af2461ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a7f14:{NFSU2_TR(0x4a7f14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7f60;}}
}
B4a7f16:L4a7f16:{c.instructions+=6;NFSU2_TR(0x4a7f16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a7f17:{NFSU2_TR(0x4a7f17);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a7f1e:{NFSU2_TR(0x4a7f1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7f1f:{NFSU2_TR(0x4a7f1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a7f20:{NFSU2_TR(0x4a7f20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a7f21:{NFSU2_TR(0x4a7f21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7f24:L4a7f24:{c.instructions+=4;NFSU2_TR(0x4a7f24);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B4a7f29:{NFSU2_TR(0x4a7f29);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a7f2b:{NFSU2_TR(0x4a7f2b);
w4(R+0,u32(0x7906f0ull));
}
B4a7f30:{NFSU2_TR(0x4a7f30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7f37;}}
}
B4a7f32:L4a7f32:{c.instructions+=1;NFSU2_TR(0x4a7f32);
w4(R+0,u32(0x79070cull));
}
B4a7f37:L4a7f37:{c.instructions+=5;NFSU2_TR(0x4a7f37);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7f39:{NFSU2_TR(0x4a7f39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7f3a:{NFSU2_TR(0x4a7f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7f3d:{NFSU2_TR(0x4a7f3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7f3e:{NFSU2_TR(0x4a7f3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7f43ull));
TAIL_STATIC(0x537980u,537);
}
B4a7f43:L4a7f43:{c.instructions+=6;NFSU2_TR(0x4a7f43);
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
B4a7f46:{NFSU2_TR(0x4a7f46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a7f47:{NFSU2_TR(0x4a7f47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7f48:{NFSU2_TR(0x4a7f48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a7f49:{NFSU2_TR(0x4a7f49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a7f4a:{NFSU2_TR(0x4a7f4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7f4d:L4a7f4d:{c.instructions+=5;NFSU2_TR(0x4a7f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7f50:{NFSU2_TR(0x4a7f50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7f52:{NFSU2_TR(0x4a7f52);
u8 U[4];
w4(U+0,u32(0x78fa60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7f57:{NFSU2_TR(0x4a7f57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7f58:{NFSU2_TR(0x4a7f58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7f5dull));
TAIL_STATIC(0x537980u,537);
}
B4a7f5d:L4a7f5d:{c.instructions+=1;NFSU2_TR(0x4a7f5d);
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
B4a7f60:L4a7f60:{c.instructions+=5;NFSU2_TR(0x4a7f60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a7f61:{NFSU2_TR(0x4a7f61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a7f62:{NFSU2_TR(0x4a7f62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a7f63:{NFSU2_TR(0x4a7f63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a7f64:{NFSU2_TR(0x4a7f64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7f70:L4a7f70:{c.instructions+=4;NFSU2_TR(0x4a7f70);
__builtin_memmove((R+8),gp(0x844ad8),1);
}
B4a7f76:{NFSU2_TR(0x4a7f76);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a7f78:{NFSU2_TR(0x4a7f78);
w4(R+0,u32(0x1ull));
}
B4a7f7d:{NFSU2_TR(0x4a7f7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7fc2;}}
}
B4a7f7f:L4a7f7f:{c.instructions+=2;NFSU2_TR(0x4a7f7f);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x159ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+0))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4a7f85:{NFSU2_TR(0x4a7f85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a7fc2;}}
}
B4a7f87:L4a7f87:{c.instructions+=13;NFSU2_TR(0x4a7f87);
u8 U[4];
w4(U+0,u32(0x22bc94afull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7f8c:{NFSU2_TR(0x4a7f8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7f8d:{NFSU2_TR(0x4a7f8d);
u8 U[4];
w4(U+0,u32(0x22222222ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7f92:{NFSU2_TR(0x4a7f92);
u8 U[4];
w4(U+0,u32(0x22222222ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7f97:{NFSU2_TR(0x4a7f97);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a7f9d:{NFSU2_TR(0x4a7f9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7fa1:{NFSU2_TR(0x4a7fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a7fa4:{NFSU2_TR(0x4a7fa4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7fa5:{NFSU2_TR(0x4a7fa5);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7faa:{NFSU2_TR(0x4a7faa);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7faf:{NFSU2_TR(0x4a7faf);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7fb4:{NFSU2_TR(0x4a7fb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7fb5:{NFSU2_TR(0x4a7fb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a7fbaull));
TAIL_STATIC(0x558790u,558);
}
B4a7fba:L4a7fba:{c.instructions+=3;NFSU2_TR(0x4a7fba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4a7fbd:{NFSU2_TR(0x4a7fbd);
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
B4a7fbf:{NFSU2_TR(0x4a7fbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a7fc2:L4a7fc2:{c.instructions+=2;NFSU2_TR(0x4a7fc2);
u8 U[5];
__builtin_memmove((U+3),gp(0x844ad9),1);
w1(R+512,u8((r1(U+3))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+0)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a7fc8:{NFSU2_TR(0x4a7fc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4a800cu,4a8);}
}
B4a7fca:L4a7fca:{c.instructions+=3;NFSU2_TR(0x4a7fca);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4a7fd0:{NFSU2_TR(0x4a7fd0);
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
B4a7fd2:{NFSU2_TR(0x4a7fd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4a800cu,4a8);}
}
B4a7fd4:L4a7fd4:{c.instructions+=11;NFSU2_TR(0x4a7fd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a7fd8:{NFSU2_TR(0x4a7fd8);
u8 U[4];
w4(U+0,u32(0xf3568b86ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7fdd:{NFSU2_TR(0x4a7fdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7fde:{NFSU2_TR(0x4a7fde);
u8 U[4];
w4(U+0,u32(0x22222222ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7fe3:{NFSU2_TR(0x4a7fe3);
u8 U[4];
w4(U+0,u32(0x22222222ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7fe8:{NFSU2_TR(0x4a7fe8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7fe9:{NFSU2_TR(0x4a7fe9);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7fee:{NFSU2_TR(0x4a7fee);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a7ff3:{NFSU2_TR(0x4a7ff3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a7ff9:{NFSU2_TR(0x4a7ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a7ffc:{NFSU2_TR(0x4a7ffc);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x4a8001u,4a8);
}
XIT:NFSU2_TR_EXIT(0x4a7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
