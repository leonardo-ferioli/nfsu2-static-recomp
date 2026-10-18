#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_522(u8* __restrict R,Cpu& c);
u32 body_529(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53b(u8* __restrict R,Cpu& c);
u32 body_53c(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_544(u8* __restrict R,Cpu& c);
u32 body_545(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x548,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x548,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_548(u8* __restrict R,Cpu& c);
u32 page_548(Cpu& c){return body_548(c.regs.data(),c);}
__attribute__((noinline)) u32 body_548(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x548000:goto L548000;
case 0x548005:goto L548005;
case 0x548008:c.instructions+=4;goto B548008;
case 0x548009:c.instructions+=3;goto B548009;
case 0x54800a:c.instructions+=2;goto B54800a;
case 0x54800b:c.instructions+=1;goto B54800b;
case 0x548010:goto L548010;
case 0x548011:c.instructions+=7;goto B548011;
case 0x548013:c.instructions+=6;goto B548013;
case 0x548018:c.instructions+=5;goto B548018;
case 0x54801d:c.instructions+=4;goto B54801d;
case 0x54801f:c.instructions+=3;goto B54801f;
case 0x548024:c.instructions+=2;goto B548024;
case 0x54802b:c.instructions+=1;goto B54802b;
case 0x548030:goto L548030;
case 0x548032:c.instructions+=5;goto B548032;
case 0x548037:c.instructions+=4;goto B548037;
case 0x54803c:c.instructions+=3;goto B54803c;
case 0x548041:c.instructions+=2;goto B548041;
case 0x548043:c.instructions+=1;goto B548043;
case 0x548048:goto L548048;
case 0x54804a:c.instructions+=5;goto B54804a;
case 0x54804f:c.instructions+=4;goto B54804f;
case 0x548054:c.instructions+=3;goto B548054;
case 0x548059:c.instructions+=2;goto B548059;
case 0x54805b:c.instructions+=1;goto B54805b;
case 0x548060:goto L548060;
case 0x548063:c.instructions+=2;goto B548063;
case 0x548064:c.instructions+=1;goto B548064;
case 0x548069:goto L548069;
case 0x54806a:c.instructions+=1;goto B54806a;
case 0x54806f:goto L54806f;
case 0x548072:c.instructions+=2;goto B548072;
case 0x548074:c.instructions+=1;goto B548074;
case 0x548076:goto L548076;
case 0x548079:c.instructions+=1;goto B548079;
case 0x54807b:goto L54807b;
case 0x54807d:goto L54807d;
case 0x548080:c.instructions+=3;goto B548080;
case 0x548083:c.instructions+=2;goto B548083;
case 0x548084:c.instructions+=1;goto B548084;
case 0x548087:goto L548087;
case 0x54808a:c.instructions+=3;goto B54808a;
case 0x54808f:c.instructions+=2;goto B54808f;
case 0x548090:c.instructions+=1;goto B548090;
case 0x548095:goto L548095;
case 0x548098:c.instructions+=4;goto B548098;
case 0x54809d:c.instructions+=3;goto B54809d;
case 0x5480a2:c.instructions+=2;goto B5480a2;
case 0x5480a3:c.instructions+=1;goto B5480a3;
case 0x5480a8:goto L5480a8;
case 0x5480ab:c.instructions+=2;goto B5480ab;
case 0x5480ac:c.instructions+=1;goto B5480ac;
case 0x5480b0:goto L5480b0;
case 0x5480b1:c.instructions+=4;goto B5480b1;
case 0x5480b2:c.instructions+=3;goto B5480b2;
case 0x5480b7:c.instructions+=2;goto B5480b7;
case 0x5480b9:c.instructions+=1;goto B5480b9;
case 0x5480be:goto L5480be;
case 0x5480c1:c.instructions+=2;goto B5480c1;
case 0x5480c3:c.instructions+=1;goto B5480c3;
case 0x5480c9:goto L5480c9;
case 0x5480cc:c.instructions+=5;goto B5480cc;
case 0x5480ce:c.instructions+=4;goto B5480ce;
case 0x5480d3:c.instructions+=3;goto B5480d3;
case 0x5480d8:c.instructions+=2;goto B5480d8;
case 0x5480d9:c.instructions+=1;goto B5480d9;
case 0x5480de:goto L5480de;
case 0x5480e1:c.instructions+=5;goto B5480e1;
case 0x5480e3:c.instructions+=4;goto B5480e3;
case 0x5480e8:c.instructions+=3;goto B5480e8;
case 0x5480ed:c.instructions+=2;goto B5480ed;
case 0x5480ee:c.instructions+=1;goto B5480ee;
case 0x5480f3:goto L5480f3;
case 0x5480f6:c.instructions+=5;goto B5480f6;
case 0x5480f8:c.instructions+=4;goto B5480f8;
case 0x5480fd:c.instructions+=3;goto B5480fd;
case 0x548102:c.instructions+=2;goto B548102;
case 0x548103:c.instructions+=1;goto B548103;
case 0x548108:goto L548108;
case 0x54810b:c.instructions+=3;goto B54810b;
case 0x54810e:c.instructions+=2;goto B54810e;
case 0x548110:c.instructions+=1;goto B548110;
case 0x548112:goto L548112;
case 0x548115:c.instructions+=1;goto B548115;
case 0x548117:goto L548117;
case 0x548119:goto L548119;
case 0x54811c:c.instructions+=1;goto B54811c;
case 0x54811e:goto L54811e;
case 0x548121:c.instructions+=3;goto B548121;
case 0x548126:c.instructions+=2;goto B548126;
case 0x548127:c.instructions+=1;goto B548127;
case 0x54812c:goto L54812c;
case 0x54812f:c.instructions+=3;goto B54812f;
case 0x548134:c.instructions+=2;goto B548134;
case 0x548135:c.instructions+=1;goto B548135;
case 0x548137:goto L548137;
case 0x54813a:c.instructions+=2;goto B54813a;
case 0x54813c:c.instructions+=1;goto B54813c;
case 0x54813e:goto L54813e;
case 0x548141:c.instructions+=1;goto B548141;
case 0x548143:goto L548143;
case 0x548145:goto L548145;
case 0x548148:c.instructions+=2;goto B548148;
case 0x54814d:c.instructions+=1;goto B54814d;
case 0x54814f:goto L54814f;
case 0x548152:c.instructions+=2;goto B548152;
case 0x548153:c.instructions+=1;goto B548153;
case 0x548158:goto L548158;
case 0x54815b:c.instructions+=3;goto B54815b;
case 0x548160:c.instructions+=2;goto B548160;
case 0x548161:c.instructions+=1;goto B548161;
case 0x548166:goto L548166;
case 0x548168:goto L548168;
case 0x54816b:c.instructions+=2;goto B54816b;
case 0x54816c:c.instructions+=1;goto B54816c;
case 0x548171:goto L548171;
case 0x548174:c.instructions+=2;goto B548174;
case 0x548179:c.instructions+=1;goto B548179;
case 0x54817a:goto L54817a;
case 0x54817f:goto L54817f;
case 0x548182:goto L548182;
case 0x548185:c.instructions+=2;goto B548185;
case 0x548187:c.instructions+=1;goto B548187;
case 0x548189:goto L548189;
case 0x54818c:c.instructions+=2;goto B54818c;
case 0x54818f:c.instructions+=1;goto B54818f;
case 0x548191:goto L548191;
case 0x548194:c.instructions+=1;goto B548194;
case 0x548196:goto L548196;
case 0x548199:c.instructions+=4;goto B548199;
case 0x54819b:c.instructions+=3;goto B54819b;
case 0x54819e:c.instructions+=2;goto B54819e;
case 0x54819f:c.instructions+=1;goto B54819f;
case 0x5481a1:goto L5481a1;
case 0x5481a2:c.instructions+=1;goto B5481a2;
case 0x5481a7:goto L5481a7;
case 0x5481a9:c.instructions+=1;goto B5481a9;
case 0x5481ab:goto L5481ab;
case 0x5481ad:goto L5481ad;
case 0x5481b0:c.instructions+=1;goto B5481b0;
case 0x5481b5:goto L5481b5;
case 0x5481b7:c.instructions+=1;goto B5481b7;
case 0x5481b9:goto L5481b9;
case 0x5481be:c.instructions+=1;goto B5481be;
case 0x5481c3:goto L5481c3;
case 0x5481c4:c.instructions+=5;goto B5481c4;
case 0x5481c5:c.instructions+=4;goto B5481c5;
case 0x5481c8:c.instructions+=3;goto B5481c8;
case 0x5481cd:c.instructions+=2;goto B5481cd;
case 0x5481ce:c.instructions+=1;goto B5481ce;
case 0x5481d3:goto L5481d3;
case 0x5481d6:c.instructions+=4;goto B5481d6;
case 0x5481d7:c.instructions+=3;goto B5481d7;
case 0x5481d8:c.instructions+=2;goto B5481d8;
case 0x5481d9:c.instructions+=1;goto B5481d9;
case 0x5481da:goto L5481da;
case 0x5481dd:c.instructions+=5;goto B5481dd;
case 0x5481e0:c.instructions+=4;goto B5481e0;
case 0x5481e1:c.instructions+=3;goto B5481e1;
case 0x5481e6:c.instructions+=2;goto B5481e6;
case 0x5481e7:c.instructions+=1;goto B5481e7;
case 0x5481ec:goto L5481ec;
case 0x5481ef:goto L5481ef;
case 0x5481f0:c.instructions+=2;goto B5481f0;
case 0x5481f1:c.instructions+=1;goto B5481f1;
case 0x548200:goto L548200;
case 0x548201:c.instructions+=6;goto B548201;
case 0x548202:c.instructions+=5;goto B548202;
case 0x548203:c.instructions+=4;goto B548203;
case 0x548204:c.instructions+=3;goto B548204;
case 0x548206:c.instructions+=2;goto B548206;
case 0x548208:c.instructions+=1;goto B548208;
case 0x54820d:goto L54820d;
case 0x54820f:c.instructions+=4;goto B54820f;
case 0x548212:c.instructions+=3;goto B548212;
case 0x548214:c.instructions+=2;goto B548214;
case 0x548219:c.instructions+=1;goto B548219;
case 0x54821b:goto L54821b;
case 0x548222:c.instructions+=19;goto B548222;
case 0x548225:c.instructions+=18;goto B548225;
case 0x548228:c.instructions+=17;goto B548228;
case 0x54822b:c.instructions+=16;goto B54822b;
case 0x54822e:c.instructions+=15;goto B54822e;
case 0x548232:c.instructions+=14;goto B548232;
case 0x548235:c.instructions+=13;goto B548235;
case 0x54823c:c.instructions+=12;goto B54823c;
case 0x54823f:c.instructions+=11;goto B54823f;
case 0x548242:c.instructions+=10;goto B548242;
case 0x548245:c.instructions+=9;goto B548245;
case 0x548248:c.instructions+=8;goto B548248;
case 0x54824b:c.instructions+=7;goto B54824b;
case 0x54824f:c.instructions+=6;goto B54824f;
case 0x548252:c.instructions+=5;goto B548252;
case 0x548258:c.instructions+=4;goto B548258;
case 0x54825f:c.instructions+=3;goto B54825f;
case 0x548262:c.instructions+=2;goto B548262;
case 0x548265:c.instructions+=1;goto B548265;
case 0x548267:goto L548267;
case 0x548269:goto L548269;
case 0x54826b:c.instructions+=3;goto B54826b;
case 0x54826c:c.instructions+=2;goto B54826c;
case 0x54826e:c.instructions+=1;goto B54826e;
case 0x548271:goto L548271;
case 0x548273:c.instructions+=1;goto B548273;
case 0x548278:goto L548278;
case 0x54827b:c.instructions+=2;goto B54827b;
case 0x54827d:c.instructions+=1;goto B54827d;
case 0x54827f:goto L54827f;
case 0x548286:c.instructions+=19;goto B548286;
case 0x548289:c.instructions+=18;goto B548289;
case 0x54828c:c.instructions+=17;goto B54828c;
case 0x54828f:c.instructions+=16;goto B54828f;
case 0x548292:c.instructions+=15;goto B548292;
case 0x548296:c.instructions+=14;goto B548296;
case 0x548299:c.instructions+=13;goto B548299;
case 0x5482a0:c.instructions+=12;goto B5482a0;
case 0x5482a3:c.instructions+=11;goto B5482a3;
case 0x5482a6:c.instructions+=10;goto B5482a6;
case 0x5482a9:c.instructions+=9;goto B5482a9;
case 0x5482ac:c.instructions+=8;goto B5482ac;
case 0x5482af:c.instructions+=7;goto B5482af;
case 0x5482b3:c.instructions+=6;goto B5482b3;
case 0x5482b6:c.instructions+=5;goto B5482b6;
case 0x5482bc:c.instructions+=4;goto B5482bc;
case 0x5482bf:c.instructions+=3;goto B5482bf;
case 0x5482c6:c.instructions+=2;goto B5482c6;
case 0x5482c9:c.instructions+=1;goto B5482c9;
case 0x5482cb:goto L5482cb;
case 0x5482cd:goto L5482cd;
case 0x5482cf:c.instructions+=3;goto B5482cf;
case 0x5482d0:c.instructions+=2;goto B5482d0;
case 0x5482d2:c.instructions+=1;goto B5482d2;
case 0x5482d5:goto L5482d5;
case 0x5482dc:c.instructions+=2;goto B5482dc;
case 0x5482e0:c.instructions+=1;goto B5482e0;
case 0x5482e2:goto L5482e2;
case 0x5482e8:c.instructions+=5;goto B5482e8;
case 0x5482ea:c.instructions+=4;goto B5482ea;
case 0x5482ec:c.instructions+=3;goto B5482ec;
case 0x5482ed:c.instructions+=2;goto B5482ed;
case 0x5482ef:c.instructions+=1;goto B5482ef;
case 0x5482f2:goto L5482f2;
case 0x5482f3:c.instructions+=2;goto B5482f3;
case 0x5482f8:c.instructions+=1;goto B5482f8;
case 0x5482fd:goto L5482fd;
case 0x548303:c.instructions+=1;goto B548303;
case 0x548305:goto L548305;
case 0x548307:c.instructions+=1;goto B548307;
case 0x54830c:goto L54830c;
case 0x54830f:c.instructions+=1;goto B54830f;
case 0x548311:goto L548311;
case 0x548313:goto L548313;
case 0x548315:c.instructions+=1;goto B548315;
case 0x54831a:goto L54831a;
case 0x54831c:c.instructions+=1;goto B54831c;
case 0x548321:goto L548321;
case 0x548324:c.instructions+=2;goto B548324;
case 0x548326:c.instructions+=1;goto B548326;
case 0x548328:goto L548328;
case 0x54832c:c.instructions+=21;goto B54832c;
case 0x54832f:c.instructions+=20;goto B54832f;
case 0x548332:c.instructions+=19;goto B548332;
case 0x548335:c.instructions+=18;goto B548335;
case 0x548338:c.instructions+=17;goto B548338;
case 0x54833d:c.instructions+=16;goto B54833d;
case 0x548344:c.instructions+=15;goto B548344;
case 0x548347:c.instructions+=14;goto B548347;
case 0x54834a:c.instructions+=13;goto B54834a;
case 0x54834d:c.instructions+=12;goto B54834d;
case 0x548350:c.instructions+=11;goto B548350;
case 0x548354:c.instructions+=10;goto B548354;
case 0x548357:c.instructions+=9;goto B548357;
case 0x54835e:c.instructions+=8;goto B54835e;
case 0x548361:c.instructions+=7;goto B548361;
case 0x548365:c.instructions+=6;goto B548365;
case 0x548368:c.instructions+=5;goto B548368;
case 0x54836e:c.instructions+=4;goto B54836e;
case 0x548371:c.instructions+=3;goto B548371;
case 0x548378:c.instructions+=2;goto B548378;
case 0x54837b:c.instructions+=1;goto B54837b;
case 0x54837d:goto L54837d;
case 0x54837f:c.instructions+=1;goto B54837f;
case 0x548384:goto L548384;
case 0x548386:c.instructions+=3;goto B548386;
case 0x548387:c.instructions+=2;goto B548387;
case 0x548389:c.instructions+=1;goto B548389;
case 0x54838c:goto L54838c;
case 0x548392:c.instructions+=2;goto B548392;
case 0x548394:c.instructions+=1;goto B548394;
case 0x548396:goto L548396;
case 0x54839b:goto L54839b;
case 0x54839e:c.instructions+=2;goto B54839e;
case 0x5483a0:c.instructions+=1;goto B5483a0;
case 0x5483a2:goto L5483a2;
case 0x5483a3:c.instructions+=4;goto B5483a3;
case 0x5483a8:c.instructions+=3;goto B5483a8;
case 0x5483ad:c.instructions+=2;goto B5483ad;
case 0x5483af:c.instructions+=1;goto B5483af;
case 0x5483b4:goto L5483b4;
case 0x5483b6:goto L5483b6;
case 0x5483bb:goto L5483bb;
case 0x5483be:c.instructions+=2;goto B5483be;
case 0x5483c0:c.instructions+=1;goto B5483c0;
case 0x5483c2:goto L5483c2;
case 0x5483c3:c.instructions+=4;goto B5483c3;
case 0x5483c8:c.instructions+=3;goto B5483c8;
case 0x5483cd:c.instructions+=2;goto B5483cd;
case 0x5483cf:c.instructions+=1;goto B5483cf;
case 0x5483d4:goto L5483d4;
case 0x5483d6:goto L5483d6;
case 0x5483d8:goto L5483d8;
case 0x5483da:c.instructions+=3;goto B5483da;
case 0x5483dc:c.instructions+=2;goto B5483dc;
case 0x5483dd:c.instructions+=1;goto B5483dd;
case 0x5483e0:goto L5483e0;
case 0x5483e3:c.instructions+=2;goto B5483e3;
case 0x5483e4:c.instructions+=1;goto B5483e4;
case 0x5483e9:goto L5483e9;
case 0x5483ea:c.instructions+=1;goto B5483ea;
case 0x5483ef:goto L5483ef;
case 0x5483f2:c.instructions+=2;goto B5483f2;
case 0x5483f4:c.instructions+=1;goto B5483f4;
case 0x5483f6:goto L5483f6;
case 0x5483f9:goto L5483f9;
case 0x5483fc:c.instructions+=3;goto B5483fc;
case 0x5483ff:c.instructions+=2;goto B5483ff;
case 0x548400:c.instructions+=1;goto B548400;
case 0x548403:goto L548403;
case 0x548405:c.instructions+=2;goto B548405;
case 0x548407:c.instructions+=1;goto B548407;
case 0x54840a:goto L54840a;
case 0x548410:c.instructions+=2;goto B548410;
case 0x548412:c.instructions+=1;goto B548412;
case 0x548414:goto L548414;
case 0x548419:goto L548419;
case 0x54841c:c.instructions+=2;goto B54841c;
case 0x548421:c.instructions+=1;goto B548421;
case 0x548426:goto L548426;
case 0x548427:c.instructions+=4;goto B548427;
case 0x54842c:c.instructions+=3;goto B54842c;
case 0x548431:c.instructions+=2;goto B548431;
case 0x548432:c.instructions+=1;goto B548432;
case 0x548437:goto L548437;
case 0x54843a:c.instructions+=5;goto B54843a;
case 0x54843b:c.instructions+=4;goto B54843b;
case 0x54843c:c.instructions+=3;goto B54843c;
case 0x54843d:c.instructions+=2;goto B54843d;
case 0x54843e:c.instructions+=1;goto B54843e;
case 0x54843f:goto L54843f;
case 0x548440:c.instructions+=4;goto B548440;
case 0x548441:c.instructions+=3;goto B548441;
case 0x548442:c.instructions+=2;goto B548442;
case 0x548445:c.instructions+=1;goto B548445;
case 0x548450:goto L548450;
case 0x548451:c.instructions+=5;goto B548451;
case 0x548456:c.instructions+=4;goto B548456;
case 0x54845b:c.instructions+=3;goto B54845b;
case 0x54845d:c.instructions+=2;goto B54845d;
case 0x54845f:c.instructions+=1;goto B54845f;
case 0x548464:goto L548464;
case 0x548469:c.instructions+=4;goto B548469;
case 0x54846e:c.instructions+=3;goto B54846e;
case 0x548470:c.instructions+=2;goto B548470;
case 0x548472:c.instructions+=1;goto B548472;
case 0x548477:goto L548477;
case 0x54847c:c.instructions+=4;goto B54847c;
case 0x548481:c.instructions+=3;goto B548481;
case 0x548483:c.instructions+=2;goto B548483;
case 0x548485:c.instructions+=1;goto B548485;
case 0x54848a:goto L54848a;
case 0x54848f:c.instructions+=4;goto B54848f;
case 0x548494:c.instructions+=3;goto B548494;
case 0x548496:c.instructions+=2;goto B548496;
case 0x548498:c.instructions+=1;goto B548498;
case 0x54849d:goto L54849d;
case 0x5484a4:c.instructions+=2;goto B5484a4;
case 0x5484a6:c.instructions+=1;goto B5484a6;
case 0x5484a8:goto L5484a8;
case 0x5484ad:goto L5484ad;
case 0x5484b0:c.instructions+=2;goto B5484b0;
case 0x5484b5:c.instructions+=1;goto B5484b5;
case 0x5484ba:goto L5484ba;
case 0x5484bb:c.instructions+=4;goto B5484bb;
case 0x5484c0:c.instructions+=3;goto B5484c0;
case 0x5484c5:c.instructions+=2;goto B5484c5;
case 0x5484c6:c.instructions+=1;goto B5484c6;
case 0x5484cb:goto L5484cb;
case 0x5484ce:c.instructions+=2;goto B5484ce;
case 0x5484cf:c.instructions+=1;goto B5484cf;
case 0x5484d0:goto L5484d0;
case 0x5484d1:c.instructions+=1;goto B5484d1;
case 0x5484e0:goto L5484e0;
case 0x5484e3:c.instructions+=5;goto B5484e3;
case 0x5484e4:c.instructions+=4;goto B5484e4;
case 0x5484e6:c.instructions+=3;goto B5484e6;
case 0x5484e9:c.instructions+=2;goto B5484e9;
case 0x5484eb:c.instructions+=1;goto B5484eb;
case 0x5484ed:goto L5484ed;
case 0x5484f0:c.instructions+=1;goto B5484f0;
case 0x5484f2:goto L5484f2;
case 0x5484f4:goto L5484f4;
case 0x5484f5:c.instructions+=3;goto B5484f5;
case 0x5484fb:c.instructions+=2;goto B5484fb;
case 0x5484fc:c.instructions+=1;goto B5484fc;
case 0x548501:goto L548501;
case 0x548504:c.instructions+=4;goto B548504;
case 0x548507:c.instructions+=3;goto B548507;
case 0x548509:c.instructions+=2;goto B548509;
case 0x54850e:c.instructions+=1;goto B54850e;
case 0x548510:goto L548510;
case 0x548513:goto L548513;
case 0x548516:c.instructions+=2;goto B548516;
case 0x548519:c.instructions+=1;goto B548519;
case 0x54851b:goto L54851b;
case 0x548522:c.instructions+=1;goto B548522;
case 0x548529:goto L548529;
case 0x54852c:c.instructions+=3;goto B54852c;
case 0x548531:c.instructions+=2;goto B548531;
case 0x548532:c.instructions+=1;goto B548532;
case 0x548537:goto L548537;
case 0x54853a:c.instructions+=3;goto B54853a;
case 0x54853f:c.instructions+=2;goto B54853f;
case 0x548540:c.instructions+=1;goto B548540;
case 0x548545:goto L548545;
case 0x548547:goto L548547;
case 0x54854a:c.instructions+=3;goto B54854a;
case 0x54854f:c.instructions+=2;goto B54854f;
case 0x548550:c.instructions+=1;goto B548550;
case 0x548555:goto L548555;
case 0x548558:c.instructions+=3;goto B548558;
case 0x54855d:c.instructions+=2;goto B54855d;
case 0x54855e:c.instructions+=1;goto B54855e;
case 0x548563:goto L548563;
case 0x548568:c.instructions+=3;goto B548568;
case 0x54856b:c.instructions+=2;goto B54856b;
case 0x54856e:c.instructions+=1;goto B54856e;
case 0x548570:goto L548570;
case 0x548573:c.instructions+=3;goto B548573;
case 0x548578:c.instructions+=2;goto B548578;
case 0x548579:c.instructions+=1;goto B548579;
case 0x54857e:goto L54857e;
case 0x548581:goto L548581;
case 0x548587:c.instructions+=3;goto B548587;
case 0x548588:c.instructions+=2;goto B548588;
case 0x54858d:c.instructions+=1;goto B54858d;
case 0x548592:goto L548592;
case 0x548598:c.instructions+=3;goto B548598;
case 0x548599:c.instructions+=2;goto B548599;
case 0x54859a:c.instructions+=1;goto B54859a;
case 0x54859f:goto L54859f;
case 0x5485a5:c.instructions+=3;goto B5485a5;
case 0x5485a8:c.instructions+=2;goto B5485a8;
case 0x5485aa:c.instructions+=1;goto B5485aa;
case 0x5485ac:goto L5485ac;
case 0x5485af:c.instructions+=6;goto B5485af;
case 0x5485b3:c.instructions+=5;goto B5485b3;
case 0x5485b4:c.instructions+=4;goto B5485b4;
case 0x5485b8:c.instructions+=3;goto B5485b8;
case 0x5485b9:c.instructions+=2;goto B5485b9;
case 0x5485ba:c.instructions+=1;goto B5485ba;
case 0x5485bf:goto L5485bf;
case 0x5485c5:c.instructions+=7;goto B5485c5;
case 0x5485c9:c.instructions+=6;goto B5485c9;
case 0x5485ca:c.instructions+=5;goto B5485ca;
case 0x5485cd:c.instructions+=4;goto B5485cd;
case 0x5485d1:c.instructions+=3;goto B5485d1;
case 0x5485d2:c.instructions+=2;goto B5485d2;
case 0x5485d3:c.instructions+=1;goto B5485d3;
case 0x5485d8:goto L5485d8;
case 0x5485dc:c.instructions+=9;goto B5485dc;
case 0x5485e2:c.instructions+=8;goto B5485e2;
case 0x5485e8:c.instructions+=7;goto B5485e8;
case 0x5485eb:c.instructions+=6;goto B5485eb;
case 0x5485ef:c.instructions+=5;goto B5485ef;
case 0x5485f3:c.instructions+=4;goto B5485f3;
case 0x5485f9:c.instructions+=3;goto B5485f9;
case 0x5485fc:c.instructions+=2;goto B5485fc;
case 0x5485fd:c.instructions+=1;goto B5485fd;
case 0x548602:goto L548602;
case 0x548605:goto L548605;
case 0x548606:c.instructions+=2;goto B548606;
case 0x548609:c.instructions+=1;goto B548609;
case 0x548630:goto L548630;
case 0x548632:c.instructions+=14;goto B548632;
case 0x548637:c.instructions+=13;goto B548637;
case 0x54863d:c.instructions+=12;goto B54863d;
case 0x54863e:c.instructions+=11;goto B54863e;
case 0x548645:c.instructions+=10;goto B548645;
case 0x548648:c.instructions+=9;goto B548648;
case 0x548649:c.instructions+=8;goto B548649;
case 0x54864a:c.instructions+=7;goto B54864a;
case 0x54864b:c.instructions+=6;goto B54864b;
case 0x54864d:c.instructions+=5;goto B54864d;
case 0x548653:c.instructions+=4;goto B548653;
case 0x548659:c.instructions+=3;goto B548659;
case 0x54865b:c.instructions+=2;goto B54865b;
case 0x54865f:c.instructions+=1;goto B54865f;
case 0x548661:goto L548661;
case 0x548663:c.instructions+=5;goto B548663;
case 0x548666:c.instructions+=4;goto B548666;
case 0x548668:c.instructions+=3;goto B548668;
case 0x548669:c.instructions+=2;goto B548669;
case 0x54866c:c.instructions+=1;goto B54866c;
case 0x548671:goto L548671;
case 0x548673:c.instructions+=3;goto B548673;
case 0x548676:c.instructions+=2;goto B548676;
case 0x548678:c.instructions+=1;goto B548678;
case 0x54867a:goto L54867a;
case 0x54867d:c.instructions+=8;goto B54867d;
case 0x54867f:c.instructions+=7;goto B54867f;
case 0x548685:c.instructions+=6;goto B548685;
case 0x54868b:c.instructions+=5;goto B54868b;
case 0x54868e:c.instructions+=4;goto B54868e;
case 0x548693:c.instructions+=3;goto B548693;
case 0x548698:c.instructions+=2;goto B548698;
case 0x54869c:c.instructions+=1;goto B54869c;
case 0x54869e:goto L54869e;
case 0x5486a0:goto L5486a0;
case 0x5486a3:c.instructions+=1;goto B5486a3;
case 0x5486a5:goto L5486a5;
case 0x5486a7:c.instructions+=2;goto B5486a7;
case 0x5486ac:c.instructions+=1;goto B5486ac;
case 0x5486ae:goto L5486ae;
case 0x5486b0:goto L5486b0;
case 0x5486b3:c.instructions+=3;goto B5486b3;
case 0x5486b5:c.instructions+=2;goto B5486b5;
case 0x5486b9:c.instructions+=1;goto B5486b9;
case 0x5486bb:goto L5486bb;
case 0x5486bc:c.instructions+=2;goto B5486bc;
case 0x5486c1:c.instructions+=1;goto B5486c1;
case 0x5486c6:goto L5486c6;
case 0x5486c8:c.instructions+=2;goto B5486c8;
case 0x5486cc:c.instructions+=1;goto B5486cc;
case 0x5486ce:goto L5486ce;
case 0x5486d4:c.instructions+=2;goto B5486d4;
case 0x5486d6:c.instructions+=1;goto B5486d6;
case 0x5486d8:goto L5486d8;
case 0x5486d9:c.instructions+=3;goto B5486d9;
case 0x5486de:c.instructions+=2;goto B5486de;
case 0x5486e0:c.instructions+=1;goto B5486e0;
case 0x5486e5:goto L5486e5;
case 0x5486eb:goto L5486eb;
case 0x5486ef:c.instructions+=7;goto B5486ef;
case 0x5486f3:c.instructions+=6;goto B5486f3;
case 0x5486fa:c.instructions+=5;goto B5486fa;
case 0x5486fe:c.instructions+=4;goto B5486fe;
case 0x548702:c.instructions+=3;goto B548702;
case 0x548705:c.instructions+=2;goto B548705;
case 0x548709:c.instructions+=1;goto B548709;
case 0x54870b:goto L54870b;
case 0x548711:c.instructions+=6;goto B548711;
case 0x548712:c.instructions+=5;goto B548712;
case 0x548713:c.instructions+=4;goto B548713;
case 0x548717:c.instructions+=3;goto B548717;
case 0x548718:c.instructions+=2;goto B548718;
case 0x548719:c.instructions+=1;goto B548719;
case 0x54871e:goto L54871e;
case 0x548722:c.instructions+=4;goto B548722;
case 0x548726:c.instructions+=3;goto B548726;
case 0x548729:c.instructions+=2;goto B548729;
case 0x54872b:c.instructions+=1;goto B54872b;
case 0x54872d:goto L54872d;
case 0x548731:c.instructions+=2;goto B548731;
case 0x548739:c.instructions+=1;goto B548739;
case 0x54873e:goto L54873e;
case 0x54873f:c.instructions+=6;goto B54873f;
case 0x548740:c.instructions+=5;goto B548740;
case 0x548741:c.instructions+=4;goto B548741;
case 0x548745:c.instructions+=3;goto B548745;
case 0x54874c:c.instructions+=2;goto B54874c;
case 0x54874f:c.instructions+=1;goto B54874f;
case 0x548750:goto L548750;
case 0x548754:c.instructions+=1;goto B548754;
case 0x548759:goto L548759;
case 0x54875b:c.instructions+=2;goto B54875b;
case 0x54875f:c.instructions+=1;goto B54875f;
case 0x548765:goto L548765;
case 0x548768:c.instructions+=3;goto B548768;
case 0x548769:c.instructions+=2;goto B548769;
case 0x54876b:c.instructions+=1;goto B54876b;
case 0x548770:goto L548770;
case 0x548772:c.instructions+=1;goto B548772;
case 0x548778:goto L548778;
case 0x54877c:c.instructions+=1;goto B54877c;
case 0x54877e:goto L54877e;
case 0x548784:c.instructions+=1;goto B548784;
case 0x548788:goto L548788;
case 0x54878e:c.instructions+=5;goto B54878e;
case 0x548791:c.instructions+=4;goto B548791;
case 0x548792:c.instructions+=3;goto B548792;
case 0x548793:c.instructions+=2;goto B548793;
case 0x548798:c.instructions+=1;goto B548798;
case 0x54879d:goto L54879d;
case 0x5487a0:c.instructions+=3;goto B5487a0;
case 0x5487a2:c.instructions+=2;goto B5487a2;
case 0x5487a6:c.instructions+=1;goto B5487a6;
case 0x5487a8:goto L5487a8;
case 0x5487a9:c.instructions+=1;goto B5487a9;
case 0x5487ae:goto L5487ae;
case 0x5487b1:c.instructions+=2;goto B5487b1;
case 0x5487b3:c.instructions+=1;goto B5487b3;
case 0x5487b5:goto L5487b5;
case 0x5487b9:c.instructions+=3;goto B5487b9;
case 0x5487ba:c.instructions+=2;goto B5487ba;
case 0x5487bc:c.instructions+=1;goto B5487bc;
case 0x5487c1:goto L5487c1;
case 0x5487c3:c.instructions+=1;goto B5487c3;
case 0x5487c5:goto L5487c5;
case 0x5487ca:c.instructions+=2;goto B5487ca;
case 0x5487cc:c.instructions+=1;goto B5487cc;
case 0x5487d2:goto L5487d2;
case 0x5487d6:c.instructions+=4;goto B5487d6;
case 0x5487d9:c.instructions+=3;goto B5487d9;
case 0x5487da:c.instructions+=2;goto B5487da;
case 0x5487db:c.instructions+=1;goto B5487db;
case 0x5487e0:goto L5487e0;
case 0x5487e2:c.instructions+=3;goto B5487e2;
case 0x5487e4:c.instructions+=2;goto B5487e4;
case 0x5487e8:c.instructions+=1;goto B5487e8;
case 0x5487ee:goto L5487ee;
case 0x5487f2:c.instructions+=1;goto B5487f2;
case 0x5487f8:goto L5487f8;
case 0x5487f9:c.instructions+=1;goto B5487f9;
case 0x5487fe:goto L5487fe;
case 0x548801:c.instructions+=3;goto B548801;
case 0x548804:c.instructions+=2;goto B548804;
case 0x548806:c.instructions+=1;goto B548806;
case 0x548808:goto L548808;
case 0x54880a:c.instructions+=1;goto B54880a;
case 0x54880f:goto L54880f;
case 0x548812:c.instructions+=2;goto B548812;
case 0x548814:c.instructions+=1;goto B548814;
case 0x548816:goto L548816;
case 0x548819:c.instructions+=6;goto B548819;
case 0x54881c:c.instructions+=5;goto B54881c;
case 0x54881f:c.instructions+=4;goto B54881f;
case 0x548822:c.instructions+=3;goto B548822;
case 0x548825:c.instructions+=2;goto B548825;
case 0x548828:c.instructions+=1;goto B548828;
case 0x54882a:goto L54882a;
case 0x54882c:goto L54882c;
case 0x548832:c.instructions+=5;goto B548832;
case 0x548838:c.instructions+=4;goto B548838;
case 0x54883a:c.instructions+=3;goto B54883a;
case 0x54883d:c.instructions+=2;goto B54883d;
case 0x548840:c.instructions+=1;goto B548840;
case 0x548842:goto L548842;
case 0x548845:c.instructions+=3;goto B548845;
case 0x548847:c.instructions+=2;goto B548847;
case 0x54884c:c.instructions+=1;goto B54884c;
case 0x548851:goto L548851;
case 0x548854:c.instructions+=3;goto B548854;
case 0x548855:c.instructions+=2;goto B548855;
case 0x548857:c.instructions+=1;goto B548857;
case 0x54885c:goto L54885c;
case 0x54885f:c.instructions+=4;goto B54885f;
case 0x548861:c.instructions+=3;goto B548861;
case 0x548866:c.instructions+=2;goto B548866;
case 0x54886a:c.instructions+=1;goto B54886a;
case 0x54886f:goto L54886f;
case 0x548872:c.instructions+=3;goto B548872;
case 0x548873:c.instructions+=2;goto B548873;
case 0x548875:c.instructions+=1;goto B548875;
case 0x54887a:goto L54887a;
case 0x54887d:c.instructions+=4;goto B54887d;
case 0x54887f:c.instructions+=3;goto B54887f;
case 0x548884:c.instructions+=2;goto B548884;
case 0x548886:c.instructions+=1;goto B548886;
case 0x54888b:goto L54888b;
case 0x54888e:c.instructions+=3;goto B54888e;
case 0x54888f:c.instructions+=2;goto B54888f;
case 0x548891:c.instructions+=1;goto B548891;
case 0x548896:goto L548896;
case 0x548899:c.instructions+=3;goto B548899;
case 0x54889e:c.instructions+=2;goto B54889e;
case 0x5488a2:c.instructions+=1;goto B5488a2;
case 0x5488a7:goto L5488a7;
case 0x5488aa:c.instructions+=3;goto B5488aa;
case 0x5488ab:c.instructions+=2;goto B5488ab;
case 0x5488ad:c.instructions+=1;goto B5488ad;
case 0x5488b2:goto L5488b2;
case 0x5488b4:c.instructions+=1;goto B5488b4;
case 0x5488b6:goto L5488b6;
case 0x5488b9:c.instructions+=3;goto B5488b9;
case 0x5488bb:c.instructions+=2;goto B5488bb;
case 0x5488c0:c.instructions+=1;goto B5488c0;
case 0x5488c5:goto L5488c5;
case 0x5488c8:c.instructions+=3;goto B5488c8;
case 0x5488c9:c.instructions+=2;goto B5488c9;
case 0x5488cb:c.instructions+=1;goto B5488cb;
case 0x5488d0:goto L5488d0;
case 0x5488d4:goto L5488d4;
case 0x5488d7:c.instructions+=2;goto B5488d7;
case 0x5488dc:c.instructions+=1;goto B5488dc;
case 0x5488e1:goto L5488e1;
case 0x5488e4:c.instructions+=3;goto B5488e4;
case 0x5488e5:c.instructions+=2;goto B5488e5;
case 0x5488e7:c.instructions+=1;goto B5488e7;
case 0x5488ec:goto L5488ec;
case 0x5488ee:c.instructions+=1;goto B5488ee;
case 0x5488f0:goto L5488f0;
case 0x5488f3:c.instructions+=3;goto B5488f3;
case 0x5488f5:c.instructions+=2;goto B5488f5;
case 0x5488fa:c.instructions+=1;goto B5488fa;
case 0x5488ff:goto L5488ff;
case 0x548902:c.instructions+=3;goto B548902;
case 0x548903:c.instructions+=2;goto B548903;
case 0x548905:c.instructions+=1;goto B548905;
case 0x54890a:goto L54890a;
case 0x54890e:goto L54890e;
case 0x548911:c.instructions+=2;goto B548911;
case 0x548916:c.instructions+=1;goto B548916;
case 0x54891b:goto L54891b;
case 0x54891e:c.instructions+=3;goto B54891e;
case 0x54891f:c.instructions+=2;goto B54891f;
case 0x548921:c.instructions+=1;goto B548921;
case 0x548926:goto L548926;
case 0x548928:c.instructions+=1;goto B548928;
case 0x54892a:goto L54892a;
case 0x54892d:c.instructions+=3;goto B54892d;
case 0x54892f:c.instructions+=2;goto B54892f;
case 0x548934:c.instructions+=1;goto B548934;
case 0x548939:goto L548939;
case 0x54893c:c.instructions+=3;goto B54893c;
case 0x54893d:c.instructions+=2;goto B54893d;
case 0x54893f:c.instructions+=1;goto B54893f;
case 0x548944:goto L548944;
case 0x548946:goto L548946;
case 0x54894a:c.instructions+=8;goto B54894a;
case 0x54894e:c.instructions+=7;goto B54894e;
case 0x548952:c.instructions+=6;goto B548952;
case 0x548956:c.instructions+=5;goto B548956;
case 0x54895d:c.instructions+=4;goto B54895d;
case 0x548965:c.instructions+=3;goto B548965;
case 0x548969:c.instructions+=2;goto B548969;
case 0x54896d:c.instructions+=1;goto B54896d;
case 0x54896f:goto L54896f;
case 0x548972:c.instructions+=4;goto B548972;
case 0x548973:c.instructions+=3;goto B548973;
case 0x548977:c.instructions+=2;goto B548977;
case 0x548978:c.instructions+=1;goto B548978;
case 0x54897d:goto L54897d;
case 0x548980:c.instructions+=2;goto B548980;
case 0x548982:c.instructions+=1;goto B548982;
case 0x548984:goto L548984;
case 0x54898b:goto L54898b;
case 0x54898d:c.instructions+=5;goto B54898d;
case 0x548991:c.instructions+=4;goto B548991;
case 0x548992:c.instructions+=3;goto B548992;
case 0x548994:c.instructions+=2;goto B548994;
case 0x548996:c.instructions+=1;goto B548996;
case 0x54899b:goto L54899b;
case 0x54899f:c.instructions+=2;goto B54899f;
case 0x5489a5:c.instructions+=1;goto B5489a5;
case 0x5489a7:goto L5489a7;
case 0x5489a9:c.instructions+=2;goto B5489a9;
case 0x5489ad:c.instructions+=1;goto B5489ad;
case 0x5489b3:goto L5489b3;
case 0x5489b7:goto L5489b7;
case 0x5489bd:c.instructions+=4;goto B5489bd;
case 0x5489be:c.instructions+=3;goto B5489be;
case 0x5489c1:c.instructions+=2;goto B5489c1;
case 0x5489c5:c.instructions+=1;goto B5489c5;
case 0x5489cb:goto L5489cb;
case 0x5489d0:goto L5489d0;
case 0x5489d4:c.instructions+=4;goto B5489d4;
case 0x5489d7:c.instructions+=3;goto B5489d7;
case 0x5489d8:c.instructions+=2;goto B5489d8;
case 0x5489dd:c.instructions+=1;goto B5489dd;
case 0x5489e2:goto L5489e2;
case 0x5489e5:c.instructions+=3;goto B5489e5;
case 0x5489e7:c.instructions+=2;goto B5489e7;
case 0x5489e9:c.instructions+=1;goto B5489e9;
case 0x5489eb:goto L5489eb;
case 0x5489ec:c.instructions+=1;goto B5489ec;
case 0x5489f1:goto L5489f1;
case 0x5489f4:c.instructions+=2;goto B5489f4;
case 0x5489f6:c.instructions+=1;goto B5489f6;
case 0x5489f8:goto L5489f8;
case 0x548a00:c.instructions+=7;goto B548a00;
case 0x548a04:c.instructions+=6;goto B548a04;
case 0x548a05:c.instructions+=5;goto B548a05;
case 0x548a07:c.instructions+=4;goto B548a07;
case 0x548a0c:c.instructions+=3;goto B548a0c;
case 0x548a10:c.instructions+=2;goto B548a10;
case 0x548a18:c.instructions+=1;goto B548a18;
case 0x548a1d:goto L548a1d;
case 0x548a21:c.instructions+=4;goto B548a21;
case 0x548a23:c.instructions+=3;goto B548a23;
case 0x548a28:c.instructions+=2;goto B548a28;
case 0x548a30:c.instructions+=1;goto B548a30;
case 0x548a32:goto L548a32;
case 0x548a37:c.instructions+=2;goto B548a37;
case 0x548a39:c.instructions+=1;goto B548a39;
case 0x548a3b:goto L548a3b;
case 0x548a3e:c.instructions+=3;goto B548a3e;
case 0x548a3f:c.instructions+=2;goto B548a3f;
case 0x548a40:c.instructions+=1;goto B548a40;
case 0x548a45:goto L548a45;
case 0x548a47:c.instructions+=1;goto B548a47;
case 0x548a49:goto L548a49;
case 0x548a4f:c.instructions+=2;goto B548a4f;
case 0x548a51:c.instructions+=1;goto B548a51;
case 0x548a53:goto L548a53;
case 0x548a57:c.instructions+=1;goto B548a57;
case 0x548a59:goto L548a59;
case 0x548a60:goto L548a60;
case 0x548a64:c.instructions+=1;goto B548a64;
case 0x548a66:goto L548a66;
case 0x548a69:c.instructions+=3;goto B548a69;
case 0x548a6c:c.instructions+=2;goto B548a6c;
case 0x548a6e:c.instructions+=1;goto B548a6e;
case 0x548a70:goto L548a70;
case 0x548a72:goto L548a72;
case 0x548a73:c.instructions+=1;goto B548a73;
case 0x548a78:goto L548a78;
case 0x548a7b:c.instructions+=3;goto B548a7b;
case 0x548a7e:c.instructions+=2;goto B548a7e;
case 0x548a7f:c.instructions+=1;goto B548a7f;
case 0x548a81:goto L548a81;
case 0x548a85:c.instructions+=4;goto B548a85;
case 0x548a86:c.instructions+=3;goto B548a86;
case 0x548a89:c.instructions+=2;goto B548a89;
case 0x548a8d:c.instructions+=1;goto B548a8d;
case 0x548a93:goto L548a93;
case 0x548a97:goto L548a97;
case 0x548a9d:c.instructions+=3;goto B548a9d;
case 0x548aa3:c.instructions+=2;goto B548aa3;
case 0x548aa5:c.instructions+=1;goto B548aa5;
case 0x548aab:goto L548aab;
case 0x548aae:c.instructions+=2;goto B548aae;
case 0x548ab0:c.instructions+=1;goto B548ab0;
case 0x548ab2:goto L548ab2;
case 0x548ab3:c.instructions+=1;goto B548ab3;
case 0x548ab8:goto L548ab8;
case 0x548abb:c.instructions+=2;goto B548abb;
case 0x548abd:c.instructions+=1;goto B548abd;
case 0x548abf:goto L548abf;
case 0x548ac7:c.instructions+=7;goto B548ac7;
case 0x548acb:c.instructions+=6;goto B548acb;
case 0x548acc:c.instructions+=5;goto B548acc;
case 0x548ace:c.instructions+=4;goto B548ace;
case 0x548ad3:c.instructions+=3;goto B548ad3;
case 0x548adb:c.instructions+=2;goto B548adb;
case 0x548ae3:c.instructions+=1;goto B548ae3;
case 0x548ae8:goto L548ae8;
case 0x548aec:c.instructions+=4;goto B548aec;
case 0x548aee:c.instructions+=3;goto B548aee;
case 0x548af3:c.instructions+=2;goto B548af3;
case 0x548afb:c.instructions+=1;goto B548afb;
case 0x548afd:goto L548afd;
case 0x548b02:c.instructions+=2;goto B548b02;
case 0x548b04:c.instructions+=1;goto B548b04;
case 0x548b06:goto L548b06;
case 0x548b09:c.instructions+=3;goto B548b09;
case 0x548b0a:c.instructions+=2;goto B548b0a;
case 0x548b0f:c.instructions+=1;goto B548b0f;
case 0x548b14:goto L548b14;
case 0x548b16:c.instructions+=2;goto B548b16;
case 0x548b18:c.instructions+=1;goto B548b18;
case 0x548b1a:goto L548b1a;
case 0x548b1f:c.instructions+=2;goto B548b1f;
case 0x548b22:c.instructions+=1;goto B548b22;
case 0x548b24:goto L548b24;
case 0x548b27:c.instructions+=2;goto B548b27;
case 0x548b29:c.instructions+=1;goto B548b29;
case 0x548b2b:goto L548b2b;
case 0x548b2d:c.instructions+=1;goto B548b2d;
case 0x548b2f:goto L548b2f;
case 0x548b31:goto L548b31;
case 0x548b34:c.instructions+=5;goto B548b34;
case 0x548b36:c.instructions+=4;goto B548b36;
case 0x548b39:c.instructions+=3;goto B548b39;
case 0x548b3a:c.instructions+=2;goto B548b3a;
case 0x548b3c:c.instructions+=1;goto B548b3c;
case 0x548b3e:goto L548b3e;
case 0x548b41:c.instructions+=2;goto B548b41;
case 0x548b43:c.instructions+=1;goto B548b43;
case 0x548b45:goto L548b45;
case 0x548b48:c.instructions+=1;goto B548b48;
case 0x548b4a:goto L548b4a;
case 0x548b4d:c.instructions+=2;goto B548b4d;
case 0x548b4f:c.instructions+=1;goto B548b4f;
case 0x548b51:goto L548b51;
case 0x548b53:goto L548b53;
case 0x548b55:c.instructions+=1;goto B548b55;
case 0x548b57:goto L548b57;
case 0x548b5a:c.instructions+=1;goto B548b5a;
case 0x548b5c:goto L548b5c;
case 0x548b5e:c.instructions+=2;goto B548b5e;
case 0x548b61:c.instructions+=1;goto B548b61;
case 0x548b66:goto L548b66;
case 0x548b69:c.instructions+=1;goto B548b69;
case 0x548b70:goto L548b70;
case 0x548b77:goto L548b77;
case 0x548b7b:c.instructions+=2;goto B548b7b;
case 0x548b7d:c.instructions+=1;goto B548b7d;
case 0x548b7f:goto L548b7f;
case 0x548b80:c.instructions+=2;goto B548b80;
case 0x548b86:c.instructions+=1;goto B548b86;
case 0x548b8b:goto L548b8b;
case 0x548b91:c.instructions+=1;goto B548b91;
case 0x548b93:goto L548b93;
case 0x548b99:c.instructions+=1;goto B548b99;
case 0x548b9f:goto L548b9f;
case 0x548ba5:c.instructions+=7;goto B548ba5;
case 0x548ba8:c.instructions+=6;goto B548ba8;
case 0x548bac:c.instructions+=5;goto B548bac;
case 0x548bad:c.instructions+=4;goto B548bad;
case 0x548bb1:c.instructions+=3;goto B548bb1;
case 0x548bb2:c.instructions+=2;goto B548bb2;
case 0x548bb3:c.instructions+=1;goto B548bb3;
case 0x548bb8:goto L548bb8;
case 0x548bbe:c.instructions+=7;goto B548bbe;
case 0x548bc1:c.instructions+=6;goto B548bc1;
case 0x548bc5:c.instructions+=5;goto B548bc5;
case 0x548bc6:c.instructions+=4;goto B548bc6;
case 0x548bca:c.instructions+=3;goto B548bca;
case 0x548bcb:c.instructions+=2;goto B548bcb;
case 0x548bcc:c.instructions+=1;goto B548bcc;
case 0x548bd1:goto L548bd1;
case 0x548bd5:c.instructions+=9;goto B548bd5;
case 0x548bdb:c.instructions+=8;goto B548bdb;
case 0x548be1:c.instructions+=7;goto B548be1;
case 0x548be4:c.instructions+=6;goto B548be4;
case 0x548be8:c.instructions+=5;goto B548be8;
case 0x548bec:c.instructions+=4;goto B548bec;
case 0x548bf2:c.instructions+=3;goto B548bf2;
case 0x548bf5:c.instructions+=2;goto B548bf5;
case 0x548bf6:c.instructions+=1;goto B548bf6;
case 0x548bfb:goto L548bfb;
case 0x548bfe:c.instructions+=1;goto B548bfe;
case 0x548c03:goto L548c03;
case 0x548c06:c.instructions+=3;goto B548c06;
case 0x548c08:c.instructions+=2;goto B548c08;
case 0x548c0a:c.instructions+=1;goto B548c0a;
case 0x548c0c:goto L548c0c;
case 0x548c0d:c.instructions+=1;goto B548c0d;
case 0x548c12:goto L548c12;
case 0x548c15:c.instructions+=2;goto B548c15;
case 0x548c17:c.instructions+=1;goto B548c17;
case 0x548c19:goto L548c19;
case 0x548c21:c.instructions+=7;goto B548c21;
case 0x548c25:c.instructions+=6;goto B548c25;
case 0x548c26:c.instructions+=5;goto B548c26;
case 0x548c28:c.instructions+=4;goto B548c28;
case 0x548c2d:c.instructions+=3;goto B548c2d;
case 0x548c35:c.instructions+=2;goto B548c35;
case 0x548c39:c.instructions+=1;goto B548c39;
case 0x548c3e:goto L548c3e;
case 0x548c42:c.instructions+=4;goto B548c42;
case 0x548c44:c.instructions+=3;goto B548c44;
case 0x548c48:c.instructions+=2;goto B548c48;
case 0x548c50:c.instructions+=1;goto B548c50;
case 0x548c52:goto L548c52;
case 0x548c56:goto L548c56;
case 0x548c5b:c.instructions+=2;goto B548c5b;
case 0x548c5d:c.instructions+=1;goto B548c5d;
case 0x548c5f:goto L548c5f;
case 0x548c62:c.instructions+=3;goto B548c62;
case 0x548c63:c.instructions+=2;goto B548c63;
case 0x548c68:c.instructions+=1;goto B548c68;
case 0x548c6d:goto L548c6d;
case 0x548c6f:c.instructions+=2;goto B548c6f;
case 0x548c71:c.instructions+=1;goto B548c71;
case 0x548c73:goto L548c73;
case 0x548c78:c.instructions+=3;goto B548c78;
case 0x548c7b:c.instructions+=2;goto B548c7b;
case 0x548c7d:c.instructions+=1;goto B548c7d;
case 0x548c80:goto L548c80;
case 0x548c83:c.instructions+=2;goto B548c83;
case 0x548c85:c.instructions+=1;goto B548c85;
case 0x548c87:goto L548c87;
case 0x548c89:c.instructions+=1;goto B548c89;
case 0x548c8b:goto L548c8b;
case 0x548c8d:goto L548c8d;
case 0x548c90:c.instructions+=5;goto B548c90;
case 0x548c92:c.instructions+=4;goto B548c92;
case 0x548c95:c.instructions+=3;goto B548c95;
case 0x548c96:c.instructions+=2;goto B548c96;
case 0x548c98:c.instructions+=1;goto B548c98;
case 0x548c9a:goto L548c9a;
case 0x548c9d:c.instructions+=2;goto B548c9d;
case 0x548c9f:c.instructions+=1;goto B548c9f;
case 0x548ca1:goto L548ca1;
case 0x548ca4:c.instructions+=1;goto B548ca4;
case 0x548ca6:goto L548ca6;
case 0x548ca9:c.instructions+=2;goto B548ca9;
case 0x548cab:c.instructions+=1;goto B548cab;
case 0x548cad:goto L548cad;
case 0x548caf:goto L548caf;
case 0x548cb1:c.instructions+=1;goto B548cb1;
case 0x548cb3:goto L548cb3;
case 0x548cb6:c.instructions+=1;goto B548cb6;
case 0x548cb8:goto L548cb8;
case 0x548cba:c.instructions+=2;goto B548cba;
case 0x548cbd:c.instructions+=1;goto B548cbd;
case 0x548cc2:goto L548cc2;
case 0x548cc5:c.instructions+=1;goto B548cc5;
case 0x548cc8:goto L548cc8;
case 0x548ccb:goto L548ccb;
case 0x548ccf:goto L548ccf;
case 0x548cd3:c.instructions+=3;goto B548cd3;
case 0x548cd5:c.instructions+=2;goto B548cd5;
case 0x548cdd:c.instructions+=1;goto B548cdd;
case 0x548cdf:goto L548cdf;
case 0x548ce0:goto L548ce0;
case 0x548ce2:c.instructions+=6;goto B548ce2;
case 0x548ce4:c.instructions+=5;goto B548ce4;
case 0x548ce7:c.instructions+=4;goto B548ce7;
case 0x548ce9:c.instructions+=3;goto B548ce9;
case 0x548cea:c.instructions+=2;goto B548cea;
case 0x548ced:c.instructions+=1;goto B548ced;
case 0x548cf2:goto L548cf2;
case 0x548cf6:c.instructions+=4;goto B548cf6;
case 0x548cfa:c.instructions+=3;goto B548cfa;
case 0x548cfd:c.instructions+=2;goto B548cfd;
case 0x548cff:c.instructions+=1;goto B548cff;
case 0x548d01:goto L548d01;
case 0x548d05:c.instructions+=6;goto B548d05;
case 0x548d06:c.instructions+=5;goto B548d06;
case 0x548d07:c.instructions+=4;goto B548d07;
case 0x548d08:c.instructions+=3;goto B548d08;
case 0x548d0f:c.instructions+=2;goto B548d0f;
case 0x548d12:c.instructions+=1;goto B548d12;
case 0x548d20:goto L548d20;
case 0x548d21:c.instructions+=5;goto B548d21;
case 0x548d23:c.instructions+=4;goto B548d23;
case 0x548d26:c.instructions+=3;goto B548d26;
case 0x548d29:c.instructions+=2;goto B548d29;
case 0x548d2b:c.instructions+=1;goto B548d2b;
case 0x548d31:goto L548d31;
case 0x548d32:c.instructions+=4;goto B548d32;
case 0x548d33:c.instructions+=3;goto B548d33;
case 0x548d36:c.instructions+=2;goto B548d36;
case 0x548d38:c.instructions+=1;goto B548d38;
case 0x548d3a:goto L548d3a;
case 0x548d3d:c.instructions+=2;goto B548d3d;
case 0x548d42:c.instructions+=1;goto B548d42;
case 0x548d47:goto L548d47;
case 0x548d49:c.instructions+=3;goto B548d49;
case 0x548d4c:c.instructions+=2;goto B548d4c;
case 0x548d4f:c.instructions+=1;goto B548d4f;
case 0x548d51:goto L548d51;
case 0x548d53:c.instructions+=2;goto B548d53;
case 0x548d58:c.instructions+=1;goto B548d58;
case 0x548d5d:goto L548d5d;
case 0x548d5e:c.instructions+=3;goto B548d5e;
case 0x548d63:c.instructions+=2;goto B548d63;
case 0x548d64:c.instructions+=1;goto B548d64;
case 0x548d69:goto L548d69;
case 0x548d6b:goto L548d6b;
case 0x548d70:goto L548d70;
case 0x548d71:c.instructions+=3;goto B548d71;
case 0x548d76:c.instructions+=2;goto B548d76;
case 0x548d77:c.instructions+=1;goto B548d77;
case 0x548d7c:goto L548d7c;
case 0x548d7f:goto L548d7f;
case 0x548d82:c.instructions+=1;goto B548d82;
case 0x548d87:goto L548d87;
case 0x548d88:c.instructions+=6;goto B548d88;
case 0x548d8e:c.instructions+=5;goto B548d8e;
case 0x548d8f:c.instructions+=4;goto B548d8f;
case 0x548d94:c.instructions+=3;goto B548d94;
case 0x548d95:c.instructions+=2;goto B548d95;
case 0x548d9b:c.instructions+=1;goto B548d9b;
case 0x548da0:goto L548da0;
case 0x548da3:c.instructions+=3;goto B548da3;
case 0x548da5:c.instructions+=2;goto B548da5;
case 0x548daa:c.instructions+=1;goto B548daa;
case 0x548daf:goto L548daf;
case 0x548db4:c.instructions+=2;goto B548db4;
case 0x548db7:c.instructions+=1;goto B548db7;
case 0x548dbc:goto L548dbc;
case 0x548dc2:c.instructions+=1;goto B548dc2;
case 0x548dc4:goto L548dc4;
case 0x548dca:c.instructions+=1;goto B548dca;
case 0x548dcc:goto L548dcc;
case 0x548dcf:c.instructions+=7;goto B548dcf;
case 0x548dd5:c.instructions+=6;goto B548dd5;
case 0x548dd8:c.instructions+=5;goto B548dd8;
case 0x548ddb:c.instructions+=4;goto B548ddb;
case 0x548ddc:c.instructions+=3;goto B548ddc;
case 0x548ddd:c.instructions+=2;goto B548ddd;
case 0x548de2:c.instructions+=1;goto B548de2;
case 0x548de7:goto L548de7;
case 0x548de8:c.instructions+=4;goto B548de8;
case 0x548ded:c.instructions+=3;goto B548ded;
case 0x548df2:c.instructions+=2;goto B548df2;
case 0x548df3:c.instructions+=1;goto B548df3;
case 0x548df8:goto L548df8;
case 0x548dfb:c.instructions+=4;goto B548dfb;
case 0x548dfc:c.instructions+=3;goto B548dfc;
case 0x548dfd:c.instructions+=2;goto B548dfd;
case 0x548dfe:c.instructions+=1;goto B548dfe;
case 0x548dff:goto L548dff;
case 0x548e02:c.instructions+=3;goto B548e02;
case 0x548e07:c.instructions+=2;goto B548e07;
case 0x548e08:c.instructions+=1;goto B548e08;
case 0x548e0d:goto L548e0d;
case 0x548e10:c.instructions+=2;goto B548e10;
case 0x548e11:c.instructions+=1;goto B548e11;
case 0x548e12:goto L548e12;
case 0x548e13:c.instructions+=1;goto B548e13;
case 0x548e20:goto L548e20;
case 0x548e21:c.instructions+=2;goto B548e21;
case 0x548e23:c.instructions+=1;goto B548e23;
case 0x548e28:goto L548e28;
case 0x548e2d:c.instructions+=1;goto B548e2d;
case 0x548e2f:goto L548e2f;
case 0x548e30:c.instructions+=1;goto B548e30;
case 0x548e35:goto L548e35;
case 0x548e38:goto L548e38;
case 0x548e3a:c.instructions+=2;goto B548e3a;
case 0x548e3b:c.instructions+=1;goto B548e3b;
case 0x548e40:goto L548e40;
case 0x548e45:c.instructions+=7;goto B548e45;
case 0x548e48:c.instructions+=6;goto B548e48;
case 0x548e4b:c.instructions+=5;goto B548e4b;
case 0x548e4c:c.instructions+=4;goto B548e4c;
case 0x548e4d:c.instructions+=3;goto B548e4d;
case 0x548e4e:c.instructions+=2;goto B548e4e;
case 0x548e50:c.instructions+=1;goto B548e50;
case 0x548e56:goto L548e56;
case 0x548e58:c.instructions+=2;goto B548e58;
case 0x548e5b:c.instructions+=1;goto B548e5b;
case 0x548e5d:goto L548e5d;
case 0x548e5e:c.instructions+=1;goto B548e5e;
case 0x548e60:goto L548e60;
case 0x548e61:c.instructions+=1;goto B548e61;
case 0x548e63:goto L548e63;
case 0x548e68:c.instructions+=1;goto B548e68;
case 0x548e6a:goto L548e6a;
case 0x548e6f:c.instructions+=1;goto B548e6f;
case 0x548e71:goto L548e71;
case 0x548e73:goto L548e73;
case 0x548e75:c.instructions+=3;goto B548e75;
case 0x548e7a:c.instructions+=2;goto B548e7a;
case 0x548e7f:c.instructions+=1;goto B548e7f;
case 0x548e83:goto L548e83;
case 0x548e85:goto L548e85;
case 0x548e87:c.instructions+=8;goto B548e87;
case 0x548e88:c.instructions+=7;goto B548e88;
case 0x548e8b:c.instructions+=6;goto B548e8b;
case 0x548e8c:c.instructions+=5;goto B548e8c;
case 0x548e91:c.instructions+=4;goto B548e91;
case 0x548e95:c.instructions+=3;goto B548e95;
case 0x548e97:c.instructions+=2;goto B548e97;
case 0x548e98:c.instructions+=1;goto B548e98;
case 0x548e9d:goto L548e9d;
case 0x548ea0:c.instructions+=6;goto B548ea0;
case 0x548ea2:c.instructions+=5;goto B548ea2;
case 0x548ea7:c.instructions+=4;goto B548ea7;
case 0x548eab:c.instructions+=3;goto B548eab;
case 0x548eac:c.instructions+=2;goto B548eac;
case 0x548ead:c.instructions+=1;goto B548ead;
case 0x548eb2:goto L548eb2;
case 0x548eb5:c.instructions+=7;goto B548eb5;
case 0x548eb9:c.instructions+=6;goto B548eb9;
case 0x548ebb:c.instructions+=5;goto B548ebb;
case 0x548ebd:c.instructions+=4;goto B548ebd;
case 0x548ec0:c.instructions+=3;goto B548ec0;
case 0x548ec3:c.instructions+=2;goto B548ec3;
case 0x548ec6:c.instructions+=1;goto B548ec6;
case 0x548ec8:goto L548ec8;
case 0x548ecf:c.instructions+=1;goto B548ecf;
case 0x548ed1:goto L548ed1;
case 0x548ed4:c.instructions+=3;goto B548ed4;
case 0x548ed8:c.instructions+=2;goto B548ed8;
case 0x548eda:c.instructions+=1;goto B548eda;
case 0x548edc:goto L548edc;
case 0x548edf:goto L548edf;
case 0x548ee2:c.instructions+=2;goto B548ee2;
case 0x548ee4:c.instructions+=1;goto B548ee4;
case 0x548ee6:goto L548ee6;
case 0x548eec:c.instructions+=4;goto B548eec;
case 0x548eee:c.instructions+=3;goto B548eee;
case 0x548ef3:c.instructions+=2;goto B548ef3;
case 0x548ef4:c.instructions+=1;goto B548ef4;
case 0x548ef6:goto L548ef6;
case 0x548ef8:goto L548ef8;
case 0x548efe:c.instructions+=3;goto B548efe;
case 0x548f00:c.instructions+=2;goto B548f00;
case 0x548f05:c.instructions+=1;goto B548f05;
case 0x548f06:goto L548f06;
case 0x548f0b:goto L548f0b;
case 0x548f0e:goto L548f0e;
case 0x548f11:c.instructions+=6;goto B548f11;
case 0x548f12:c.instructions+=5;goto B548f12;
case 0x548f17:c.instructions+=4;goto B548f17;
case 0x548f1b:c.instructions+=3;goto B548f1b;
case 0x548f1d:c.instructions+=2;goto B548f1d;
case 0x548f1e:c.instructions+=1;goto B548f1e;
case 0x548f23:goto L548f23;
case 0x548f26:c.instructions+=6;goto B548f26;
case 0x548f28:c.instructions+=5;goto B548f28;
case 0x548f2d:c.instructions+=4;goto B548f2d;
case 0x548f31:c.instructions+=3;goto B548f31;
case 0x548f32:c.instructions+=2;goto B548f32;
case 0x548f33:c.instructions+=1;goto B548f33;
case 0x548f38:goto L548f38;
case 0x548f3b:c.instructions+=6;goto B548f3b;
case 0x548f3e:c.instructions+=5;goto B548f3e;
case 0x548f3f:c.instructions+=4;goto B548f3f;
case 0x548f43:c.instructions+=3;goto B548f43;
case 0x548f44:c.instructions+=2;goto B548f44;
case 0x548f47:c.instructions+=1;goto B548f47;
case 0x548f4c:goto L548f4c;
case 0x548f4e:c.instructions+=12;goto B548f4e;
case 0x548f51:c.instructions+=11;goto B548f51;
case 0x548f54:c.instructions+=10;goto B548f54;
case 0x548f57:c.instructions+=9;goto B548f57;
case 0x548f5a:c.instructions+=8;goto B548f5a;
case 0x548f5e:c.instructions+=7;goto B548f5e;
case 0x548f5f:c.instructions+=6;goto B548f5f;
case 0x548f63:c.instructions+=5;goto B548f63;
case 0x548f66:c.instructions+=4;goto B548f66;
case 0x548f69:c.instructions+=3;goto B548f69;
case 0x548f6a:c.instructions+=2;goto B548f6a;
case 0x548f6b:c.instructions+=1;goto B548f6b;
case 0x548f70:goto L548f70;
case 0x548f73:c.instructions+=7;goto B548f73;
case 0x548f77:c.instructions+=6;goto B548f77;
case 0x548f78:c.instructions+=5;goto B548f78;
case 0x548f7b:c.instructions+=4;goto B548f7b;
case 0x548f7f:c.instructions+=3;goto B548f7f;
case 0x548f80:c.instructions+=2;goto B548f80;
case 0x548f81:c.instructions+=1;goto B548f81;
case 0x548f86:goto L548f86;
case 0x548f8a:c.instructions+=9;goto B548f8a;
case 0x548f90:c.instructions+=8;goto B548f90;
case 0x548f93:c.instructions+=7;goto B548f93;
case 0x548f96:c.instructions+=6;goto B548f96;
case 0x548f9a:c.instructions+=5;goto B548f9a;
case 0x548f9e:c.instructions+=4;goto B548f9e;
case 0x548fa4:c.instructions+=3;goto B548fa4;
case 0x548fa7:c.instructions+=2;goto B548fa7;
case 0x548fa8:c.instructions+=1;goto B548fa8;
case 0x548fad:goto L548fad;
case 0x548fb0:c.instructions+=5;goto B548fb0;
case 0x548fb1:c.instructions+=4;goto B548fb1;
case 0x548fb5:c.instructions+=3;goto B548fb5;
case 0x548fb6:c.instructions+=2;goto B548fb6;
case 0x548fb8:c.instructions+=1;goto B548fb8;
case 0x548fbd:goto L548fbd;
case 0x548fbf:c.instructions+=14;goto B548fbf;
case 0x548fc1:c.instructions+=13;goto B548fc1;
case 0x548fc4:c.instructions+=12;goto B548fc4;
case 0x548fc6:c.instructions+=11;goto B548fc6;
case 0x548fc8:c.instructions+=10;goto B548fc8;
case 0x548fcb:c.instructions+=9;goto B548fcb;
case 0x548fce:c.instructions+=8;goto B548fce;
case 0x548fd1:c.instructions+=7;goto B548fd1;
case 0x548fd4:c.instructions+=6;goto B548fd4;
case 0x548fd7:c.instructions+=5;goto B548fd7;
case 0x548fdd:c.instructions+=4;goto B548fdd;
case 0x548fde:c.instructions+=3;goto B548fde;
case 0x548fe0:c.instructions+=2;goto B548fe0;
case 0x548fe3:c.instructions+=1;goto B548fe3;
case 0x548fe8:goto L548fe8;
case 0x548fe9:c.instructions+=4;goto B548fe9;
case 0x548fea:c.instructions+=3;goto B548fea;
case 0x548feb:c.instructions+=2;goto B548feb;
case 0x548fee:c.instructions+=1;goto B548fee;
default:missing_instruction(c.pc);}
B548000:L548000:{c.instructions+=1;NFSU2_TR(0x548000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548005ull));
TAIL_STATIC(0x4954e0u,495);
}
B548005:L548005:{c.instructions+=5;NFSU2_TR(0x548005);
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
B548008:{NFSU2_TR(0x548008);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B548009:{NFSU2_TR(0x548009);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54800a:{NFSU2_TR(0x54800a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54800b:{NFSU2_TR(0x54800b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B548010:L548010:{c.instructions+=8;NFSU2_TR(0x548010);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548011:{NFSU2_TR(0x548011);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548013:{NFSU2_TR(0x548013);
u8 U[4];
w4(U+0,u32(0xd8ea6d2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548018:{NFSU2_TR(0x548018);
u8 U[4];
w4(U+0,u32(0x745ee753ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54801d:{NFSU2_TR(0x54801d);
__builtin_memmove((R+24),(R+4),4);
}
B54801f:{NFSU2_TR(0x54801f);
u8 U[4];
w4(U+0,u32(0x9aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548024:{NFSU2_TR(0x548024);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x71345941ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54802b:{NFSU2_TR(0x54802b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548030ull));
TAIL_STATIC(0x53bc90u,53b);
}
B548030:L548030:{c.instructions+=6;NFSU2_TR(0x548030);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548032:{NFSU2_TR(0x548032);
u8 U[4];
w4(U+0,u32(0x437e4111ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548037:{NFSU2_TR(0x548037);
u8 U[4];
w4(U+0,u32(0x5d41facull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54803c:{NFSU2_TR(0x54803c);
u8 U[4];
w4(U+0,u32(0x9bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548041:{NFSU2_TR(0x548041);
__builtin_memmove((R+4),(R+24),4);
}
B548043:{NFSU2_TR(0x548043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548048ull));
TAIL_STATIC(0x53bc90u,53b);
}
B548048:L548048:{c.instructions+=6;NFSU2_TR(0x548048);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54804a:{NFSU2_TR(0x54804a);
u8 U[4];
w4(U+0,u32(0x2225348full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54804f:{NFSU2_TR(0x54804f);
u8 U[4];
w4(U+0,u32(0x759c2bcaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548054:{NFSU2_TR(0x548054);
u8 U[4];
w4(U+0,u32(0x9dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548059:{NFSU2_TR(0x548059);
__builtin_memmove((R+4),(R+24),4);
}
B54805b:{NFSU2_TR(0x54805b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548060ull));
TAIL_STATIC(0x53bc90u,53b);
}
B548060:L548060:{c.instructions+=3;NFSU2_TR(0x548060);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548063:{NFSU2_TR(0x548063);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548064:{NFSU2_TR(0x548064);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548069ull));
TAIL_STATIC(0x505450u,505);
}
B548069:L548069:{c.instructions+=2;NFSU2_TR(0x548069);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54806a:{NFSU2_TR(0x54806a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54806full));
TAIL_STATIC(0x50b840u,50b);
}
B54806f:L54806f:{c.instructions+=3;NFSU2_TR(0x54806f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B548072:{NFSU2_TR(0x548072);
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
B548074:{NFSU2_TR(0x548074);
if(r1(R+518)){{goto L54807b;}}
}
B548076:L548076:{c.instructions+=2;NFSU2_TR(0x548076);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548079:{NFSU2_TR(0x548079);
{goto L54807d;}
}
B54807b:L54807b:{c.instructions+=1;NFSU2_TR(0x54807b);
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
B54807d:L54807d:{c.instructions+=4;NFSU2_TR(0x54807d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B548080:{NFSU2_TR(0x548080);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B548083:{NFSU2_TR(0x548083);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548084:{NFSU2_TR(0x548084);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548087ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B548087:L548087:{c.instructions+=4;NFSU2_TR(0x548087);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54808a:{NFSU2_TR(0x54808a);
u8 U[4];
w4(U+0,u32(0x5978fc5full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54808f:{NFSU2_TR(0x54808f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548090:{NFSU2_TR(0x548090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548095ull));
TAIL_STATIC(0x4954e0u,495);
}
B548095:L548095:{c.instructions+=5;NFSU2_TR(0x548095);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548098:{NFSU2_TR(0x548098);
u8 U[4];
w4(U+0,u32(0xdf86227aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54809d:{NFSU2_TR(0x54809d);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5480a2:{NFSU2_TR(0x5480a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5480a3:{NFSU2_TR(0x5480a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5480a8ull));
TAIL_STATIC(0x495460u,495);
}
B5480a8:L5480a8:{c.instructions+=3;NFSU2_TR(0x5480a8);
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
B5480ab:{NFSU2_TR(0x5480ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5480ac:{NFSU2_TR(0x5480ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5480b0:L5480b0:{c.instructions+=5;NFSU2_TR(0x5480b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5480b1:{NFSU2_TR(0x5480b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5480b2:{NFSU2_TR(0x5480b2);
u8 U[4];
w4(U+0,u32(0x790038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5480b7:{NFSU2_TR(0x5480b7);
__builtin_memmove((R+24),(R+4),4);
}
B5480b9:{NFSU2_TR(0x5480b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5480beull));
TAIL_STATIC(0x52cf60u,52c);
}
B5480be:L5480be:{c.instructions+=3;NFSU2_TR(0x5480be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5480c1:{NFSU2_TR(0x5480c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5480c3:{NFSU2_TR(0x5480c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L548182;}}
}
B5480c9:L5480c9:{c.instructions+=6;NFSU2_TR(0x5480c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5480cc:{NFSU2_TR(0x5480cc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5480ce:{NFSU2_TR(0x5480ce);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5480d3:{NFSU2_TR(0x5480d3);
u8 U[4];
w4(U+0,u32(0x26f1f64bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5480d8:{NFSU2_TR(0x5480d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5480d9:{NFSU2_TR(0x5480d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5480deull));
TAIL_STATIC(0x537c00u,537);
}
B5480de:L5480de:{c.instructions+=6;NFSU2_TR(0x5480de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5480e1:{NFSU2_TR(0x5480e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5480e3:{NFSU2_TR(0x5480e3);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5480e8:{NFSU2_TR(0x5480e8);
u8 U[4];
w4(U+0,u32(0x26f1f64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5480ed:{NFSU2_TR(0x5480ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5480ee:{NFSU2_TR(0x5480ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5480f3ull));
TAIL_STATIC(0x537c00u,537);
}
B5480f3:L5480f3:{c.instructions+=6;NFSU2_TR(0x5480f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5480f6:{NFSU2_TR(0x5480f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5480f8:{NFSU2_TR(0x5480f8);
u8 U[4];
w4(U+0,u32(0x790eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5480fd:{NFSU2_TR(0x5480fd);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548102:{NFSU2_TR(0x548102);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548103:{NFSU2_TR(0x548103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548108ull));
TAIL_STATIC(0x537c00u,537);
}
B548108:L548108:{c.instructions+=4;NFSU2_TR(0x548108);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54810b:{NFSU2_TR(0x54810b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B54810e:{NFSU2_TR(0x54810e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548110:{NFSU2_TR(0x548110);
if(r1(R+518)){{goto L548117;}}
}
B548112:L548112:{c.instructions+=2;NFSU2_TR(0x548112);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B548115:{NFSU2_TR(0x548115);
{goto L548119;}
}
B548117:L548117:{c.instructions+=1;NFSU2_TR(0x548117);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B548119:L548119:{c.instructions+=2;NFSU2_TR(0x548119);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54811c:{NFSU2_TR(0x54811c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L548137;}}
}
B54811e:L54811e:{c.instructions+=4;NFSU2_TR(0x54811e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548121:{NFSU2_TR(0x548121);
u8 U[4];
w4(U+0,u32(0x26f1f64bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548126:{NFSU2_TR(0x548126);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548127:{NFSU2_TR(0x548127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54812cull));
TAIL_STATIC(0x4954e0u,495);
}
B54812c:L54812c:{c.instructions+=4;NFSU2_TR(0x54812c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54812f:{NFSU2_TR(0x54812f);
u8 U[4];
w4(U+0,u32(0x26f1f64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548134:{NFSU2_TR(0x548134);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548135:{NFSU2_TR(0x548135);
{goto L54817a;}
}
B548137:L548137:{c.instructions+=3;NFSU2_TR(0x548137);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54813a:{NFSU2_TR(0x54813a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54813c:{NFSU2_TR(0x54813c);
if(r1(R+518)){{goto L548143;}}
}
B54813e:L54813e:{c.instructions+=2;NFSU2_TR(0x54813e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B548141:{NFSU2_TR(0x548141);
{goto L548145;}
}
B548143:L548143:{c.instructions+=1;NFSU2_TR(0x548143);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B548145:L548145:{c.instructions+=3;NFSU2_TR(0x548145);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B548148:{NFSU2_TR(0x548148);
u8 U[4];
w4(U+0,u32(0x26f1f64bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54814d:{NFSU2_TR(0x54814d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L548168;}}
}
B54814f:L54814f:{c.instructions+=3;NFSU2_TR(0x54814f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B548152:{NFSU2_TR(0x548152);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548153:{NFSU2_TR(0x548153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548158ull));
TAIL_STATIC(0x495520u,495);
}
B548158:L548158:{c.instructions+=4;NFSU2_TR(0x548158);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54815b:{NFSU2_TR(0x54815b);
u8 U[4];
w4(U+0,u32(0x26f1f64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548160:{NFSU2_TR(0x548160);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548161:{NFSU2_TR(0x548161);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548166ull));
TAIL_STATIC(0x4954e0u,495);
}
B548166:L548166:{c.instructions+=1;NFSU2_TR(0x548166);
{goto L54817f;}
}
B548168:L548168:{c.instructions+=3;NFSU2_TR(0x548168);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54816b:{NFSU2_TR(0x54816b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54816c:{NFSU2_TR(0x54816c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548171ull));
TAIL_STATIC(0x495520u,495);
}
B548171:L548171:{c.instructions+=3;NFSU2_TR(0x548171);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B548174:{NFSU2_TR(0x548174);
u8 U[4];
w4(U+0,u32(0x26f1f64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548179:{NFSU2_TR(0x548179);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54817a:L54817a:{c.instructions+=1;NFSU2_TR(0x54817a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54817full));
TAIL_STATIC(0x495520u,495);
}
B54817f:L54817f:{c.instructions+=1;NFSU2_TR(0x54817f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B548182:L548182:{c.instructions+=3;NFSU2_TR(0x548182);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B548185:{NFSU2_TR(0x548185);
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
B548187:{NFSU2_TR(0x548187);
if(r1(R+518)){{goto L5481ef;}}
}
B548189:L548189:{c.instructions+=3;NFSU2_TR(0x548189);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54818c:{NFSU2_TR(0x54818c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x23ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x23ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54818f:{NFSU2_TR(0x54818f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5481da;}}
}
B548191:L548191:{c.instructions+=2;NFSU2_TR(0x548191);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548194:{NFSU2_TR(0x548194);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5481da;}}
}
B548196:L548196:{c.instructions+=5;NFSU2_TR(0x548196);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548199:{NFSU2_TR(0x548199);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54819b:{NFSU2_TR(0x54819b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54819e:{NFSU2_TR(0x54819e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54819f:{NFSU2_TR(0x54819f);
if(r1(R+518)){{goto L5481ab;}}
}
B5481a1:L5481a1:{c.instructions+=2;NFSU2_TR(0x5481a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5481a2:{NFSU2_TR(0x5481a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5481a7ull));
TAIL_STATIC(0x51f820u,51f);
}
B5481a7:L5481a7:{c.instructions+=2;NFSU2_TR(0x5481a7);
__builtin_memmove((R+12),(R+0),4);
}
B5481a9:{NFSU2_TR(0x5481a9);
{goto L5481ad;}
}
B5481ab:L5481ab:{c.instructions+=1;NFSU2_TR(0x5481ab);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5481ad:L5481ad:{c.instructions+=2;NFSU2_TR(0x5481ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5481b0:{NFSU2_TR(0x5481b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5481b5ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5481b5:L5481b5:{c.instructions+=2;NFSU2_TR(0x5481b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5481b7:{NFSU2_TR(0x5481b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5481c3;}}
}
B5481b9:L5481b9:{c.instructions+=2;NFSU2_TR(0x5481b9);
w4(R+8,u32(0xc01a6f63ull));
}
B5481be:{NFSU2_TR(0x5481be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5481c3ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5481c3:L5481c3:{c.instructions+=6;NFSU2_TR(0x5481c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5481c4:{NFSU2_TR(0x5481c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5481c5:{NFSU2_TR(0x5481c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5481c8:{NFSU2_TR(0x5481c8);
u8 U[4];
w4(U+0,u32(0x5e7b09c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5481cd:{NFSU2_TR(0x5481cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5481ce:{NFSU2_TR(0x5481ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5481d3ull));
TAIL_STATIC(0x537b80u,537);
}
B5481d3:L5481d3:{c.instructions+=5;NFSU2_TR(0x5481d3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5481d6:{NFSU2_TR(0x5481d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5481d7:{NFSU2_TR(0x5481d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5481d8:{NFSU2_TR(0x5481d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5481d9:{NFSU2_TR(0x5481d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5481da:L5481da:{c.instructions+=6;NFSU2_TR(0x5481da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5481dd:{NFSU2_TR(0x5481dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5481e0:{NFSU2_TR(0x5481e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5481e1:{NFSU2_TR(0x5481e1);
u8 U[4];
w4(U+0,u32(0x5e7b09c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5481e6:{NFSU2_TR(0x5481e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5481e7:{NFSU2_TR(0x5481e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5481ecull));
TAIL_STATIC(0x495460u,495);
}
B5481ec:L5481ec:{c.instructions+=1;NFSU2_TR(0x5481ec);
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
B5481ef:L5481ef:{c.instructions+=3;NFSU2_TR(0x5481ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5481f0:{NFSU2_TR(0x5481f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5481f1:{NFSU2_TR(0x5481f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B548200:L548200:{c.instructions+=7;NFSU2_TR(0x548200);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548201:{NFSU2_TR(0x548201);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548202:{NFSU2_TR(0x548202);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548203:{NFSU2_TR(0x548203);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548204:{NFSU2_TR(0x548204);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548206:{NFSU2_TR(0x548206);
__builtin_memmove((R+24),(R+4),4);
}
B548208:{NFSU2_TR(0x548208);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54820dull));
TAIL_STATIC(0x575620u,575);
}
B54820d:L54820d:{c.instructions+=5;NFSU2_TR(0x54820d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B54820f:{NFSU2_TR(0x54820f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B548212:{NFSU2_TR(0x548212);
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
B548214:{NFSU2_TR(0x548214);
w4(R+28,u32(0x3f800000ull));
}
B548219:{NFSU2_TR(0x548219);
if(r1(R+518)){{goto L548267;}}
}
B54821b:L54821b:{c.instructions+=20;NFSU2_TR(0x54821b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x550681a4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B548222:{NFSU2_TR(0x548222);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548225:{NFSU2_TR(0x548225);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548228:{NFSU2_TR(0x548228);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54822b:{NFSU2_TR(0x54822b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54822e:{NFSU2_TR(0x54822e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B548232:{NFSU2_TR(0x548232);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B548235:{NFSU2_TR(0x548235);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x6a4c46a6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54823c:{NFSU2_TR(0x54823c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54823f:{NFSU2_TR(0x54823f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548242:{NFSU2_TR(0x548242);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548245:{NFSU2_TR(0x548245);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548248:{NFSU2_TR(0x548248);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54824b:{NFSU2_TR(0x54824b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54824f:{NFSU2_TR(0x54824f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B548252:{NFSU2_TR(0x548252);
u8 U[4];
w4(U+0,u32(0x79b6e4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B548258:{NFSU2_TR(0x548258);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54825f:{NFSU2_TR(0x54825f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548262:{NFSU2_TR(0x548262);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B548265:{NFSU2_TR(0x548265);
{goto L548269;}
}
B548267:L548267:{c.instructions+=1;NFSU2_TR(0x548267);
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
B548269:L548269:{c.instructions+=4;NFSU2_TR(0x548269);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54826b:{NFSU2_TR(0x54826b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54826c:{NFSU2_TR(0x54826c);
__builtin_memmove((R+4),(R+24),4);
}
B54826e:{NFSU2_TR(0x54826e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548271ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B548271:L548271:{c.instructions+=2;NFSU2_TR(0x548271);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548273:{NFSU2_TR(0x548273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548278ull));
TAIL_STATIC(0x575620u,575);
}
B548278:L548278:{c.instructions+=3;NFSU2_TR(0x548278);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54827b:{NFSU2_TR(0x54827b);
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
B54827d:{NFSU2_TR(0x54827d);
if(r1(R+518)){{goto L5482cb;}}
}
B54827f:L54827f:{c.instructions+=20;NFSU2_TR(0x54827f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x55778e5aull));
s4(u32(r4(U+0)),r4(U+4));
}
B548286:{NFSU2_TR(0x548286);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548289:{NFSU2_TR(0x548289);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54828c:{NFSU2_TR(0x54828c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54828f:{NFSU2_TR(0x54828f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B548292:{NFSU2_TR(0x548292);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B548296:{NFSU2_TR(0x548296);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B548299:{NFSU2_TR(0x548299);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78deea1cull));
s4(u32(r4(U+0)),r4(U+4));
}
B5482a0:{NFSU2_TR(0x5482a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5482a3:{NFSU2_TR(0x5482a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5482a6:{NFSU2_TR(0x5482a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5482a9:{NFSU2_TR(0x5482a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5482ac:{NFSU2_TR(0x5482ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5482af:{NFSU2_TR(0x5482af);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5482b3:{NFSU2_TR(0x5482b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5482b6:{NFSU2_TR(0x5482b6);
u8 U[4];
w4(U+0,u32(0x79b6e4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5482bc:{NFSU2_TR(0x5482bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5482bf:{NFSU2_TR(0x5482bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5482c6:{NFSU2_TR(0x5482c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5482c9:{NFSU2_TR(0x5482c9);
{goto L5482cd;}
}
B5482cb:L5482cb:{c.instructions+=1;NFSU2_TR(0x5482cb);
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
B5482cd:L5482cd:{c.instructions+=4;NFSU2_TR(0x5482cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5482cf:{NFSU2_TR(0x5482cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5482d0:{NFSU2_TR(0x5482d0);
__builtin_memmove((R+4),(R+24),4);
}
B5482d2:{NFSU2_TR(0x5482d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5482d5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5482d5:L5482d5:{c.instructions+=3;NFSU2_TR(0x5482d5);
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
B5482dc:{NFSU2_TR(0x5482dc);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5482e0:{NFSU2_TR(0x5482e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54831a;}}
}
B5482e2:L5482e2:{c.instructions+=6;NFSU2_TR(0x5482e2);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B5482e8:{NFSU2_TR(0x5482e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5482ea:{NFSU2_TR(0x5482ea);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5482ec:{NFSU2_TR(0x5482ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5482ed:{NFSU2_TR(0x5482ed);
u8 U[4];
w4(U+0,u32(0x35ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5482ef:{NFSU2_TR(0x5482ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5482f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5482f2:L5482f2:{c.instructions+=3;NFSU2_TR(0x5482f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5482f3:{NFSU2_TR(0x5482f3);
w4(R+4,u32(0x8a2b68ull));
}
B5482f8:{NFSU2_TR(0x5482f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5482fdull));
TAIL_STATIC(0x61ba30u,61b);
}
B5482fd:L5482fd:{c.instructions+=2;NFSU2_TR(0x5482fd);
u8 U[2];
__builtin_memmove((U+0),gp(0x838464),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B548303:{NFSU2_TR(0x548303);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L548311;}}
}
B548305:L548305:{c.instructions+=2;NFSU2_TR(0x548305);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548307:{NFSU2_TR(0x548307);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54830cull));
TAIL_STATIC(0x529f00u,529);
}
B54830c:L54830c:{c.instructions+=2;NFSU2_TR(0x54830c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54830f:{NFSU2_TR(0x54830f);
{goto L548313;}
}
B548311:L548311:{c.instructions+=1;NFSU2_TR(0x548311);
w1(R+0,u8(0x1ull));
}
B548313:L548313:{c.instructions+=2;NFSU2_TR(0x548313);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B548315:{NFSU2_TR(0x548315);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54831a:L54831a:{c.instructions+=2;NFSU2_TR(0x54831a);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54831c:{NFSU2_TR(0x54831c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548321ull));
TAIL_STATIC(0x575620u,575);
}
B548321:L548321:{c.instructions+=3;NFSU2_TR(0x548321);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B548324:{NFSU2_TR(0x548324);
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
B548326:{NFSU2_TR(0x548326);
if(r1(R+518)){{goto L54837d;}}
}
B548328:L548328:{c.instructions+=22;NFSU2_TR(0x548328);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B54832c:{NFSU2_TR(0x54832c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54832f:{NFSU2_TR(0x54832f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548332:{NFSU2_TR(0x548332);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548335:{NFSU2_TR(0x548335);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548338:{NFSU2_TR(0x548338);
w4(R+28,u32(0x1ull));
}
B54833d:{NFSU2_TR(0x54833d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xda1dae54ull));
s4(u32(r4(U+0)),r4(U+4));
}
B548344:{NFSU2_TR(0x548344);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548347:{NFSU2_TR(0x548347);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54834a:{NFSU2_TR(0x54834a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54834d:{NFSU2_TR(0x54834d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B548350:{NFSU2_TR(0x548350);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B548354:{NFSU2_TR(0x548354);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B548357:{NFSU2_TR(0x548357);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x4e933e83ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54835e:{NFSU2_TR(0x54835e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548361:{NFSU2_TR(0x548361);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B548365:{NFSU2_TR(0x548365);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B548368:{NFSU2_TR(0x548368);
u8 U[4];
w4(U+0,u32(0x79b6e4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B54836e:{NFSU2_TR(0x54836e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548371:{NFSU2_TR(0x548371);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B548378:{NFSU2_TR(0x548378);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54837b:{NFSU2_TR(0x54837b);
{goto L548384;}
}
B54837d:L54837d:{c.instructions+=2;NFSU2_TR(0x54837d);
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
B54837f:{NFSU2_TR(0x54837f);
w4(R+28,u32(0x1ull));
}
B548384:L548384:{c.instructions+=4;NFSU2_TR(0x548384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B548386:{NFSU2_TR(0x548386);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548387:{NFSU2_TR(0x548387);
__builtin_memmove((R+4),(R+24),4);
}
B548389:{NFSU2_TR(0x548389);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54838cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54838c:L54838c:{c.instructions+=3;NFSU2_TR(0x54838c);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548392:{NFSU2_TR(0x548392);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548394:{NFSU2_TR(0x548394);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5483b6;}}
}
B548396:L548396:{c.instructions+=1;NFSU2_TR(0x548396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54839bull));
TAIL_STATIC(0x575620u,575);
}
B54839b:L54839b:{c.instructions+=3;NFSU2_TR(0x54839b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54839e:{NFSU2_TR(0x54839e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5483a0:{NFSU2_TR(0x5483a0);
if(r1(R+518)){{goto L5483d6;}}
}
B5483a2:L5483a2:{c.instructions+=5;NFSU2_TR(0x5483a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5483a3:{NFSU2_TR(0x5483a3);
u8 U[4];
w4(U+0,u32(0x920dbb02ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5483a8:{NFSU2_TR(0x5483a8);
u8 U[4];
w4(U+0,u32(0x911a4edeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5483ad:{NFSU2_TR(0x5483ad);
__builtin_memmove((R+4),(R+0),4);
}
B5483af:{NFSU2_TR(0x5483af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5483b4ull));
TAIL_STATIC(0x522080u,522);
}
B5483b4:L5483b4:{c.instructions+=1;NFSU2_TR(0x5483b4);
{goto L5483d8;}
}
B5483b6:L5483b6:{c.instructions+=1;NFSU2_TR(0x5483b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5483bbull));
TAIL_STATIC(0x575620u,575);
}
B5483bb:L5483bb:{c.instructions+=3;NFSU2_TR(0x5483bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5483be:{NFSU2_TR(0x5483be);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5483c0:{NFSU2_TR(0x5483c0);
if(r1(R+518)){{goto L5483d6;}}
}
B5483c2:L5483c2:{c.instructions+=5;NFSU2_TR(0x5483c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5483c3:{NFSU2_TR(0x5483c3);
u8 U[4];
w4(U+0,u32(0xd132a6feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5483c8:{NFSU2_TR(0x5483c8);
u8 U[4];
w4(U+0,u32(0x911a4edeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5483cd:{NFSU2_TR(0x5483cd);
__builtin_memmove((R+4),(R+0),4);
}
B5483cf:{NFSU2_TR(0x5483cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5483d4ull));
TAIL_STATIC(0x522080u,522);
}
B5483d4:L5483d4:{c.instructions+=1;NFSU2_TR(0x5483d4);
{goto L5483d8;}
}
B5483d6:L5483d6:{c.instructions+=1;NFSU2_TR(0x5483d6);
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
B5483d8:L5483d8:{c.instructions+=4;NFSU2_TR(0x5483d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5483da:{NFSU2_TR(0x5483da);
__builtin_memmove((R+4),(R+24),4);
}
B5483dc:{NFSU2_TR(0x5483dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5483dd:{NFSU2_TR(0x5483dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5483e0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5483e0:L5483e0:{c.instructions+=3;NFSU2_TR(0x5483e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5483e3:{NFSU2_TR(0x5483e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5483e4:{NFSU2_TR(0x5483e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5483e9ull));
TAIL_STATIC(0x505450u,505);
}
B5483e9:L5483e9:{c.instructions+=2;NFSU2_TR(0x5483e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5483ea:{NFSU2_TR(0x5483ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5483efull));
TAIL_STATIC(0x50b840u,50b);
}
B5483ef:L5483ef:{c.instructions+=3;NFSU2_TR(0x5483ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5483f2:{NFSU2_TR(0x5483f2);
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
B5483f4:{NFSU2_TR(0x5483f4);
if(r1(R+518)){{goto L5483f9;}}
}
B5483f6:L5483f6:{c.instructions+=1;NFSU2_TR(0x5483f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5483f9:L5483f9:{c.instructions+=4;NFSU2_TR(0x5483f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5483fc:{NFSU2_TR(0x5483fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5483ff:{NFSU2_TR(0x5483ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548400:{NFSU2_TR(0x548400);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548403ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B548403:L548403:{c.instructions+=3;NFSU2_TR(0x548403);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B548405:{NFSU2_TR(0x548405);
__builtin_memmove((R+4),(R+24),4);
}
B548407:{NFSU2_TR(0x548407);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54840aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54840a:L54840a:{c.instructions+=3;NFSU2_TR(0x54840a);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548410:{NFSU2_TR(0x548410);
__builtin_memmove((R+4),(R+24),4);
}
B548412:{NFSU2_TR(0x548412);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54843f;}}
}
B548414:L548414:{c.instructions+=1;NFSU2_TR(0x548414);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548419ull));
TAIL_STATIC(0x5453b0u,545);
}
B548419:L548419:{c.instructions+=3;NFSU2_TR(0x548419);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54841c:{NFSU2_TR(0x54841c);
w4(R+4,u32(0x838980ull));
}
B548421:{NFSU2_TR(0x548421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548426ull));
TAIL_STATIC(0x521530u,521);
}
B548426:L548426:{c.instructions+=5;NFSU2_TR(0x548426);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548427:{NFSU2_TR(0x548427);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54842c:{NFSU2_TR(0x54842c);
u8 U[4];
w4(U+0,u32(0x2f5e7da3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548431:{NFSU2_TR(0x548431);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548432:{NFSU2_TR(0x548432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548437ull));
TAIL_STATIC(0x537b80u,537);
}
B548437:L548437:{c.instructions+=6;NFSU2_TR(0x548437);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54843a:{NFSU2_TR(0x54843a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54843b:{NFSU2_TR(0x54843b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54843c:{NFSU2_TR(0x54843c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54843d:{NFSU2_TR(0x54843d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54843e:{NFSU2_TR(0x54843e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54843f:L54843f:{c.instructions+=5;NFSU2_TR(0x54843f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B548440:{NFSU2_TR(0x548440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B548441:{NFSU2_TR(0x548441);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B548442:{NFSU2_TR(0x548442);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B548445:{NFSU2_TR(0x548445);
TAIL_STATIC(0x545460u,545);
}
B548450:L548450:{c.instructions+=6;NFSU2_TR(0x548450);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548451:{NFSU2_TR(0x548451);
u8 U[4];
w4(U+0,u32(0x27b8f0ddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548456:{NFSU2_TR(0x548456);
u8 U[4];
w4(U+0,u32(0x27b8f0ddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54845b:{NFSU2_TR(0x54845b);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54845d:{NFSU2_TR(0x54845d);
__builtin_memmove((R+24),(R+4),4);
}
B54845f:{NFSU2_TR(0x54845f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548464ull));
TAIL_STATIC(0x522130u,522);
}
B548464:L548464:{c.instructions+=5;NFSU2_TR(0x548464);
u8 U[4];
w4(U+0,u32(0x27b8f0deull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548469:{NFSU2_TR(0x548469);
u8 U[4];
w4(U+0,u32(0x27b8f0deull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54846e:{NFSU2_TR(0x54846e);
u8 U[4];
w4(U+0,u32(0x41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548470:{NFSU2_TR(0x548470);
__builtin_memmove((R+4),(R+24),4);
}
B548472:{NFSU2_TR(0x548472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548477ull));
TAIL_STATIC(0x522130u,522);
}
B548477:L548477:{c.instructions+=5;NFSU2_TR(0x548477);
u8 U[4];
w4(U+0,u32(0x27b8f0dfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54847c:{NFSU2_TR(0x54847c);
u8 U[4];
w4(U+0,u32(0x27b8f0dfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548481:{NFSU2_TR(0x548481);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548483:{NFSU2_TR(0x548483);
__builtin_memmove((R+4),(R+24),4);
}
B548485:{NFSU2_TR(0x548485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54848aull));
TAIL_STATIC(0x522130u,522);
}
B54848a:L54848a:{c.instructions+=5;NFSU2_TR(0x54848a);
u8 U[4];
w4(U+0,u32(0x27b8f0e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54848f:{NFSU2_TR(0x54848f);
u8 U[4];
w4(U+0,u32(0x27b8f0e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548494:{NFSU2_TR(0x548494);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548496:{NFSU2_TR(0x548496);
__builtin_memmove((R+4),(R+24),4);
}
B548498:{NFSU2_TR(0x548498);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54849dull));
TAIL_STATIC(0x522130u,522);
}
B54849d:L54849d:{c.instructions+=3;NFSU2_TR(0x54849d);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5484a4:{NFSU2_TR(0x5484a4);
__builtin_memmove((R+4),(R+24),4);
}
B5484a6:{NFSU2_TR(0x5484a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5484d0;}}
}
B5484a8:L5484a8:{c.instructions+=1;NFSU2_TR(0x5484a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5484adull));
TAIL_STATIC(0x5453b0u,545);
}
B5484ad:L5484ad:{c.instructions+=3;NFSU2_TR(0x5484ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5484b0:{NFSU2_TR(0x5484b0);
w4(R+4,u32(0x838980ull));
}
B5484b5:{NFSU2_TR(0x5484b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5484baull));
TAIL_STATIC(0x521530u,521);
}
B5484ba:L5484ba:{c.instructions+=5;NFSU2_TR(0x5484ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5484bb:{NFSU2_TR(0x5484bb);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5484c0:{NFSU2_TR(0x5484c0);
u8 U[4];
w4(U+0,u32(0x2f5e7da3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5484c5:{NFSU2_TR(0x5484c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5484c6:{NFSU2_TR(0x5484c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5484cbull));
TAIL_STATIC(0x537b80u,537);
}
B5484cb:L5484cb:{c.instructions+=3;NFSU2_TR(0x5484cb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5484ce:{NFSU2_TR(0x5484ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5484cf:{NFSU2_TR(0x5484cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5484d0:L5484d0:{c.instructions+=2;NFSU2_TR(0x5484d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5484d1:{NFSU2_TR(0x5484d1);
TAIL_STATIC(0x545460u,545);
}
B5484e0:L5484e0:{c.instructions+=6;NFSU2_TR(0x5484e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5484e3:{NFSU2_TR(0x5484e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5484e4:{NFSU2_TR(0x5484e4);
__builtin_memmove((R+24),(R+4),4);
}
B5484e6:{NFSU2_TR(0x5484e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5484e9:{NFSU2_TR(0x5484e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5484eb:{NFSU2_TR(0x5484eb);
if(r1(R+518)){{goto L5484f2;}}
}
B5484ed:L5484ed:{c.instructions+=2;NFSU2_TR(0x5484ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5484f0:{NFSU2_TR(0x5484f0);
{goto L5484f4;}
}
B5484f2:L5484f2:{c.instructions+=1;NFSU2_TR(0x5484f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5484f4:L5484f4:{c.instructions+=4;NFSU2_TR(0x5484f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5484f5:{NFSU2_TR(0x5484f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5484fb:{NFSU2_TR(0x5484fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5484fc:{NFSU2_TR(0x5484fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548501ull));
TAIL_STATIC(0x50c900u,50c);
}
B548501:L548501:{c.instructions+=5;NFSU2_TR(0x548501);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548504:{NFSU2_TR(0x548504);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B548507:{NFSU2_TR(0x548507);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548509:{NFSU2_TR(0x548509);
w4(R+4,u32(0xa9ull));
}
B54850e:{NFSU2_TR(0x54850e);
if(r1(R+518)){{goto L548513;}}
}
B548510:L548510:{c.instructions+=1;NFSU2_TR(0x548510);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548513:L548513:{c.instructions+=3;NFSU2_TR(0x548513);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffc1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B548516:{NFSU2_TR(0x548516);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B548519:{NFSU2_TR(0x548519);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L548547;}}
}
B54851b:L54851b:{c.instructions+=2;NFSU2_TR(0x54851b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x548614ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B548522:{NFSU2_TR(0x548522);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x54860cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B548529:L548529:{c.instructions+=4;NFSU2_TR(0x548529);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54852c:{NFSU2_TR(0x54852c);
u8 U[4];
w4(U+0,u32(0x9de5ba07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548531:{NFSU2_TR(0x548531);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548532:{NFSU2_TR(0x548532);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548537ull));
TAIL_STATIC(0x495520u,495);
}
B548537:L548537:{c.instructions+=4;NFSU2_TR(0x548537);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54853a:{NFSU2_TR(0x54853a);
u8 U[4];
w4(U+0,u32(0x7a1ff30dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54853f:{NFSU2_TR(0x54853f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548540:{NFSU2_TR(0x548540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548545ull));
TAIL_STATIC(0x495520u,495);
}
B548545:L548545:{c.instructions+=1;NFSU2_TR(0x548545);
{goto L548563;}
}
B548547:L548547:{c.instructions+=4;NFSU2_TR(0x548547);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54854a:{NFSU2_TR(0x54854a);
u8 U[4];
w4(U+0,u32(0x9de5ba07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54854f:{NFSU2_TR(0x54854f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548550:{NFSU2_TR(0x548550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548555ull));
TAIL_STATIC(0x4954e0u,495);
}
B548555:L548555:{c.instructions+=4;NFSU2_TR(0x548555);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B548558:{NFSU2_TR(0x548558);
u8 U[4];
w4(U+0,u32(0x7a1ff30dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54855d:{NFSU2_TR(0x54855d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54855e:{NFSU2_TR(0x54855e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548563ull));
TAIL_STATIC(0x4954e0u,495);
}
B548563:L548563:{c.instructions+=4;NFSU2_TR(0x548563);
__builtin_memmove((R+0),gp(0x8389a0),4);
}
B548568:{NFSU2_TR(0x548568);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54856b:{NFSU2_TR(0x54856b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54856e:{NFSU2_TR(0x54856e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L548581;}}
}
B548570:L548570:{c.instructions+=4;NFSU2_TR(0x548570);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548573:{NFSU2_TR(0x548573);
u8 U[4];
w4(U+0,u32(0x31a9c0aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548578:{NFSU2_TR(0x548578);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548579:{NFSU2_TR(0x548579);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54857eull));
TAIL_STATIC(0x4954e0u,495);
}
B54857e:L54857e:{c.instructions+=1;NFSU2_TR(0x54857e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B548581:L548581:{c.instructions+=4;NFSU2_TR(0x548581);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548587:{NFSU2_TR(0x548587);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548588:{NFSU2_TR(0x548588);
u8 U[4];
w4(U+0,u32(0x79c31cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54858d:{NFSU2_TR(0x54858d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548592ull));
TAIL_STATIC(0x43db80u,43d);
}
B548592:L548592:{c.instructions+=4;NFSU2_TR(0x548592);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B548598:{NFSU2_TR(0x548598);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548599:{NFSU2_TR(0x548599);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54859a:{NFSU2_TR(0x54859a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54859full));
TAIL_STATIC(0x50c900u,50c);
}
B54859f:L54859f:{c.instructions+=4;NFSU2_TR(0x54859f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5485a5:{NFSU2_TR(0x5485a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5485a8:{NFSU2_TR(0x5485a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5485aa:{NFSU2_TR(0x5485aa);
if(r1(R+518)){{goto L548605;}}
}
B5485ac:L5485ac:{c.instructions+=7;NFSU2_TR(0x5485ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5485af:{NFSU2_TR(0x5485af);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5485b3:{NFSU2_TR(0x5485b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5485b4:{NFSU2_TR(0x5485b4);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5485b8:{NFSU2_TR(0x5485b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5485b9:{NFSU2_TR(0x5485b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5485ba:{NFSU2_TR(0x5485ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5485bfull));
TAIL_STATIC(0x51d620u,51d);
}
B5485bf:L5485bf:{c.instructions+=8;NFSU2_TR(0x5485bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5485c5:{NFSU2_TR(0x5485c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5485c9:{NFSU2_TR(0x5485c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5485ca:{NFSU2_TR(0x5485ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5485cd:{NFSU2_TR(0x5485cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5485d1:{NFSU2_TR(0x5485d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5485d2:{NFSU2_TR(0x5485d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5485d3:{NFSU2_TR(0x5485d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5485d8ull));
TAIL_STATIC(0x51d620u,51d);
}
B5485d8:L5485d8:{c.instructions+=10;NFSU2_TR(0x5485d8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5485dc:{NFSU2_TR(0x5485dc);
{u32 ea_=u32(r4(R+24)+u32(388u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5485e2:{NFSU2_TR(0x5485e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5485e8:{NFSU2_TR(0x5485e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5485eb:{NFSU2_TR(0x5485eb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5485ef:{NFSU2_TR(0x5485ef);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5485f3:{NFSU2_TR(0x5485f3);
{u32 ea_=u32(r4(R+24)+u32(384u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5485f9:{NFSU2_TR(0x5485f9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5485fc:{NFSU2_TR(0x5485fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5485fd:{NFSU2_TR(0x5485fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548602ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B548602:L548602:{c.instructions+=1;NFSU2_TR(0x548602);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B548605:L548605:{c.instructions+=3;NFSU2_TR(0x548605);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B548606:{NFSU2_TR(0x548606);
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
B548609:{NFSU2_TR(0x548609);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B548630:L548630:{c.instructions+=15;NFSU2_TR(0x548630);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548632:{NFSU2_TR(0x548632);
u8 U[4];
w4(U+0,u32(0x777a70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548637:{NFSU2_TR(0x548637);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54863d:{NFSU2_TR(0x54863d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54863e:{NFSU2_TR(0x54863e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548645:{NFSU2_TR(0x548645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B548648:{NFSU2_TR(0x548648);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548649:{NFSU2_TR(0x548649);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54864a:{NFSU2_TR(0x54864a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54864b:{NFSU2_TR(0x54864b);
__builtin_memmove((R+28),(R+4),4);
}
B54864d:{NFSU2_TR(0x54864d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548653:{NFSU2_TR(0x548653);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x158ull))));
__builtin_memmove((R+24),(U+0),4);
}
B548659:{NFSU2_TR(0x548659);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54865b:{NFSU2_TR(0x54865b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54865f:{NFSU2_TR(0x54865f);
if(r1(R+518)){{goto L54867a;}}
}
B548661:L548661:{c.instructions+=6;NFSU2_TR(0x548661);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B548663:{NFSU2_TR(0x548663);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B548666:{NFSU2_TR(0x548666);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B548668:{NFSU2_TR(0x548668);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548669:{NFSU2_TR(0x548669);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54866c:{NFSU2_TR(0x54866c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548671ull));
TAIL_STATIC(0x575630u,575);
}
B548671:L548671:{c.instructions+=4;NFSU2_TR(0x548671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B548673:{NFSU2_TR(0x548673);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B548676:{NFSU2_TR(0x548676);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548678:{NFSU2_TR(0x548678);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x548661u);}goto L548661;}}
}
B54867a:L54867a:{c.instructions+=9;NFSU2_TR(0x54867a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54867d:{NFSU2_TR(0x54867d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B54867f:{NFSU2_TR(0x54867f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548685:{NFSU2_TR(0x548685);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54868b:{NFSU2_TR(0x54868b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54868e:{NFSU2_TR(0x54868e);
__builtin_memmove((R+0),gp(0x8389c8),4);
}
B548693:{NFSU2_TR(0x548693);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8389c8ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8389c8ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8389c8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B548698:{NFSU2_TR(0x548698);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54869c:{NFSU2_TR(0x54869c);
if(r1(R+518)){{goto L5486bb;}}
}
B54869e:L54869e:{c.instructions+=1;NFSU2_TR(0x54869e);
__builtin_memmove((R+28),(R+28),4);
}
B5486a0:L5486a0:{c.instructions+=2;NFSU2_TR(0x5486a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5486a3:{NFSU2_TR(0x5486a3);
if(r1(R+518)){{goto L5486b0;}}
}
B5486a5:L5486a5:{c.instructions+=3;NFSU2_TR(0x5486a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5486a7:{NFSU2_TR(0x5486a7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8389c8ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8389c8ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8389c8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5486ac:{NFSU2_TR(0x5486ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5486a0u);}goto L5486a0;}}
}
B5486ae:L5486ae:{c.instructions+=1;NFSU2_TR(0x5486ae);
{goto L5486bb;}
}
B5486b0:L5486b0:{c.instructions+=4;NFSU2_TR(0x5486b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5486b3:{NFSU2_TR(0x5486b3);
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
B5486b5:{NFSU2_TR(0x5486b5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5486b9:{NFSU2_TR(0x5486b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5486ce;}}
}
B5486bb:L5486bb:{c.instructions+=3;NFSU2_TR(0x5486bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5486bc:{NFSU2_TR(0x5486bc);
w4(R+4,u32(0x8392c0ull));
}
B5486c1:{NFSU2_TR(0x5486c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5486c6ull));
TAIL_STATIC(0x6102f0u,610);
}
B5486c6:L5486c6:{c.instructions+=3;NFSU2_TR(0x5486c6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5486c8:{NFSU2_TR(0x5486c8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5486cc:{NFSU2_TR(0x5486cc);
if(r1(R+518)){{goto L5486eb;}}
}
B5486ce:L5486ce:{c.instructions+=3;NFSU2_TR(0x5486ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5486d4:{NFSU2_TR(0x5486d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5486d6:{NFSU2_TR(0x5486d6);
if(r1(R+518)){{goto L5486eb;}}
}
B5486d8:L5486d8:{c.instructions+=4;NFSU2_TR(0x5486d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5486d9:{NFSU2_TR(0x5486d9);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5486de:{NFSU2_TR(0x5486de);
__builtin_memmove((R+4),(R+0),4);
}
B5486e0:{NFSU2_TR(0x5486e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5486e5ull));
TAIL_STATIC(0x61b500u,61b);
}
B5486e5:L5486e5:{c.instructions+=1;NFSU2_TR(0x5486e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5486eb:L5486eb:{c.instructions+=8;NFSU2_TR(0x5486eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5486ef:{NFSU2_TR(0x5486ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5486f3:{NFSU2_TR(0x5486f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5486fa:{NFSU2_TR(0x5486fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5486fe:{NFSU2_TR(0x5486fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548702:{NFSU2_TR(0x548702);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B548705:{NFSU2_TR(0x548705);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548709:{NFSU2_TR(0x548709);
if(r1(R+518)){{goto L54872d;}}
}
B54870b:L54870b:{c.instructions+=7;NFSU2_TR(0x54870b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B548711:{NFSU2_TR(0x548711);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548712:{NFSU2_TR(0x548712);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548713:{NFSU2_TR(0x548713);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B548717:{NFSU2_TR(0x548717);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548718:{NFSU2_TR(0x548718);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548719:{NFSU2_TR(0x548719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54871eull));
TAIL_STATIC(0x5449c0u,544);
}
B54871e:L54871e:{c.instructions+=5;NFSU2_TR(0x54871e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B548722:{NFSU2_TR(0x548722);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B548726:{NFSU2_TR(0x548726);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B548729:{NFSU2_TR(0x548729);
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
B54872b:{NFSU2_TR(0x54872b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L548750;}}
}
B54872d:L54872d:{c.instructions+=3;NFSU2_TR(0x54872d);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B548731:{NFSU2_TR(0x548731);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B548739:{NFSU2_TR(0x548739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54873eull));
TAIL_STATIC(0x4def30u,4de);
}
B54873e:L54873e:{c.instructions+=7;NFSU2_TR(0x54873e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54873f:{NFSU2_TR(0x54873f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B548740:{NFSU2_TR(0x548740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B548741:{NFSU2_TR(0x548741);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548745:{NFSU2_TR(0x548745);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54874c:{NFSU2_TR(0x54874c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54874f:{NFSU2_TR(0x54874f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B548750:L548750:{c.instructions+=2;NFSU2_TR(0x548750);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B548754:{NFSU2_TR(0x548754);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548759ull));
TAIL_STATIC(0x502fd0u,502);
}
B548759:L548759:{c.instructions+=3;NFSU2_TR(0x548759);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54875b:{NFSU2_TR(0x54875b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54875f:{NFSU2_TR(0x54875f);
if(r1(R+518)){{goto L5489b7;}}
}
B548765:L548765:{c.instructions+=4;NFSU2_TR(0x548765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B548768:{NFSU2_TR(0x548768);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548769:{NFSU2_TR(0x548769);
__builtin_memmove((R+4),(R+28),4);
}
B54876b:{NFSU2_TR(0x54876b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548770ull));
TAIL_STATIC(0x5306e0u,530);
}
B548770:L548770:{c.instructions+=2;NFSU2_TR(0x548770);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B548772:{NFSU2_TR(0x548772);
if(r1(R+518)){{goto L5489a7;}}
}
B548778:L548778:{c.instructions+=2;NFSU2_TR(0x548778);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54877c:{NFSU2_TR(0x54877c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L548788;}}
}
B54877e:L54877e:{c.instructions+=2;NFSU2_TR(0x54877e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B548784:{NFSU2_TR(0x548784);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548788:L548788:{c.instructions+=6;NFSU2_TR(0x548788);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54878e:{NFSU2_TR(0x54878e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B548791:{NFSU2_TR(0x548791);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B548792:{NFSU2_TR(0x548792);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548793:{NFSU2_TR(0x548793);
u8 U[4];
w4(U+0,u32(0x79c344ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548798:{NFSU2_TR(0x548798);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54879dull));
TAIL_STATIC(0x50b990u,50b);
}
B54879d:L54879d:{c.instructions+=4;NFSU2_TR(0x54879d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5487a0:{NFSU2_TR(0x5487a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5487a2:{NFSU2_TR(0x5487a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5487a6:{NFSU2_TR(0x5487a6);
if(r1(R+518)){{goto L5487c5;}}
}
B5487a8:L5487a8:{c.instructions+=2;NFSU2_TR(0x5487a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5487a9:{NFSU2_TR(0x5487a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5487aeull));
TAIL_STATIC(0x52cef0u,52c);
}
B5487ae:L5487ae:{c.instructions+=3;NFSU2_TR(0x5487ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5487b1:{NFSU2_TR(0x5487b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5487b3:{NFSU2_TR(0x5487b3);
if(r1(R+518)){{goto L5487c5;}}
}
B5487b5:L5487b5:{c.instructions+=4;NFSU2_TR(0x5487b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5487b9:{NFSU2_TR(0x5487b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5487ba:{NFSU2_TR(0x5487ba);
__builtin_memmove((R+4),(R+0),4);
}
B5487bc:{NFSU2_TR(0x5487bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5487c1ull));
TAIL_STATIC(0x517f80u,517);
}
B5487c1:L5487c1:{c.instructions+=2;NFSU2_TR(0x5487c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5487c3:{NFSU2_TR(0x5487c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5487e0;}}
}
B5487c5:L5487c5:{c.instructions+=3;NFSU2_TR(0x5487c5);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B5487ca:{NFSU2_TR(0x5487ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5487cc:{NFSU2_TR(0x5487cc);
if(r1(R+518)){{goto L5489a7;}}
}
B5487d2:L5487d2:{c.instructions+=5;NFSU2_TR(0x5487d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5487d6:{NFSU2_TR(0x5487d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5487d9:{NFSU2_TR(0x5487d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5487da:{NFSU2_TR(0x5487da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5487db:{NFSU2_TR(0x5487db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5487e0ull));
TAIL_STATIC(0x52c570u,52c);
}
B5487e0:L5487e0:{c.instructions+=4;NFSU2_TR(0x5487e0);
__builtin_memmove((R+12),(R+0),4);
}
B5487e2:{NFSU2_TR(0x5487e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5487e4:{NFSU2_TR(0x5487e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5487e8:{NFSU2_TR(0x5487e8);
if(r1(R+518)){{goto L5489a7;}}
}
B5487ee:L5487ee:{c.instructions+=2;NFSU2_TR(0x5487ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5487f2:{NFSU2_TR(0x5487f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5489a7;}}
}
B5487f8:L5487f8:{c.instructions+=2;NFSU2_TR(0x5487f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5487f9:{NFSU2_TR(0x5487f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5487feull));
TAIL_STATIC(0x50ca50u,50c);
}
B5487fe:L5487fe:{c.instructions+=4;NFSU2_TR(0x5487fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548801:{NFSU2_TR(0x548801);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B548804:{NFSU2_TR(0x548804);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548806:{NFSU2_TR(0x548806);
if(r1(R+518)){{goto L548842;}}
}
B548808:L548808:{c.instructions+=2;NFSU2_TR(0x548808);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54880a:{NFSU2_TR(0x54880a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54880full));
TAIL_STATIC(0x575620u,575);
}
B54880f:L54880f:{c.instructions+=3;NFSU2_TR(0x54880f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B548812:{NFSU2_TR(0x548812);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548814:{NFSU2_TR(0x548814);
if(r1(R+518)){{goto L54882a;}}
}
B548816:L548816:{c.instructions+=7;NFSU2_TR(0x548816);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548819:{NFSU2_TR(0x548819);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54881c:{NFSU2_TR(0x54881c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54881f:{NFSU2_TR(0x54881f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548822:{NFSU2_TR(0x548822);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548825:{NFSU2_TR(0x548825);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548828:{NFSU2_TR(0x548828);
{goto L54882c;}
}
B54882a:L54882a:{c.instructions+=1;NFSU2_TR(0x54882a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54882c:L54882c:{c.instructions+=6;NFSU2_TR(0x54882c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B548832:{NFSU2_TR(0x548832);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x158ull))));
__builtin_memmove((R+4),(U+0),4);
}
B548838:{NFSU2_TR(0x548838);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B54883a:{NFSU2_TR(0x54883a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54883d:{NFSU2_TR(0x54883d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548840:{NFSU2_TR(0x548840);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B548842:L548842:{c.instructions+=4;NFSU2_TR(0x548842);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B548845:{NFSU2_TR(0x548845);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548847:{NFSU2_TR(0x548847);
u8 U[4];
w4(U+0,u32(0x798534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54884c:{NFSU2_TR(0x54884c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548851ull));
TAIL_STATIC(0x43db50u,43d);
}
B548851:L548851:{c.instructions+=4;NFSU2_TR(0x548851);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B548854:{NFSU2_TR(0x548854);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548855:{NFSU2_TR(0x548855);
__builtin_memmove((R+4),(R+28),4);
}
B548857:{NFSU2_TR(0x548857);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54885cull));
TAIL_STATIC(0x61b500u,61b);
}
B54885c:L54885c:{c.instructions+=5;NFSU2_TR(0x54885c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54885f:{NFSU2_TR(0x54885f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548861:{NFSU2_TR(0x548861);
u8 U[4];
w4(U+0,u32(0x79852cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548866:{NFSU2_TR(0x548866);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54886a:{NFSU2_TR(0x54886a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54886full));
TAIL_STATIC(0x43db50u,43d);
}
B54886f:L54886f:{c.instructions+=4;NFSU2_TR(0x54886f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B548872:{NFSU2_TR(0x548872);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548873:{NFSU2_TR(0x548873);
__builtin_memmove((R+4),(R+28),4);
}
B548875:{NFSU2_TR(0x548875);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54887aull));
TAIL_STATIC(0x61b500u,61b);
}
B54887a:L54887a:{c.instructions+=5;NFSU2_TR(0x54887a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54887d:{NFSU2_TR(0x54887d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54887f:{NFSU2_TR(0x54887f);
u8 U[4];
w4(U+0,u32(0x798524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548884:{NFSU2_TR(0x548884);
__builtin_memmove((R+12),(R+0),4);
}
B548886:{NFSU2_TR(0x548886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54888bull));
TAIL_STATIC(0x43db50u,43d);
}
B54888b:L54888b:{c.instructions+=4;NFSU2_TR(0x54888b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54888e:{NFSU2_TR(0x54888e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54888f:{NFSU2_TR(0x54888f);
__builtin_memmove((R+4),(R+28),4);
}
B548891:{NFSU2_TR(0x548891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548896ull));
TAIL_STATIC(0x61b500u,61b);
}
B548896:L548896:{c.instructions+=4;NFSU2_TR(0x548896);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B548899:{NFSU2_TR(0x548899);
u8 U[4];
w4(U+0,u32(0x79c33cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54889e:{NFSU2_TR(0x54889e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5488a2:{NFSU2_TR(0x5488a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5488a7ull));
TAIL_STATIC(0x43db50u,43d);
}
B5488a7:L5488a7:{c.instructions+=4;NFSU2_TR(0x5488a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5488aa:{NFSU2_TR(0x5488aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5488ab:{NFSU2_TR(0x5488ab);
__builtin_memmove((R+4),(R+28),4);
}
B5488ad:{NFSU2_TR(0x5488ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5488b2ull));
TAIL_STATIC(0x61b4e0u,61b);
}
B5488b2:L5488b2:{c.instructions+=2;NFSU2_TR(0x5488b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5488b4:{NFSU2_TR(0x5488b4);
if(r1(R+518)){{goto L5488d4;}}
}
B5488b6:L5488b6:{c.instructions+=4;NFSU2_TR(0x5488b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5488b9:{NFSU2_TR(0x5488b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5488bb:{NFSU2_TR(0x5488bb);
u8 U[4];
w4(U+0,u32(0x79c33cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5488c0:{NFSU2_TR(0x5488c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5488c5ull));
TAIL_STATIC(0x43db50u,43d);
}
B5488c5:L5488c5:{c.instructions+=4;NFSU2_TR(0x5488c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5488c8:{NFSU2_TR(0x5488c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5488c9:{NFSU2_TR(0x5488c9);
__builtin_memmove((R+4),(R+28),4);
}
B5488cb:{NFSU2_TR(0x5488cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5488d0ull));
TAIL_STATIC(0x61b500u,61b);
}
B5488d0:L5488d0:{c.instructions+=1;NFSU2_TR(0x5488d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5488d4:L5488d4:{c.instructions+=3;NFSU2_TR(0x5488d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5488d7:{NFSU2_TR(0x5488d7);
u8 U[4];
w4(U+0,u32(0x79c330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5488dc:{NFSU2_TR(0x5488dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5488e1ull));
TAIL_STATIC(0x43db50u,43d);
}
B5488e1:L5488e1:{c.instructions+=4;NFSU2_TR(0x5488e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5488e4:{NFSU2_TR(0x5488e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5488e5:{NFSU2_TR(0x5488e5);
__builtin_memmove((R+4),(R+28),4);
}
B5488e7:{NFSU2_TR(0x5488e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5488ecull));
TAIL_STATIC(0x61b4e0u,61b);
}
B5488ec:L5488ec:{c.instructions+=2;NFSU2_TR(0x5488ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5488ee:{NFSU2_TR(0x5488ee);
if(r1(R+518)){{goto L54890e;}}
}
B5488f0:L5488f0:{c.instructions+=4;NFSU2_TR(0x5488f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5488f3:{NFSU2_TR(0x5488f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5488f5:{NFSU2_TR(0x5488f5);
u8 U[4];
w4(U+0,u32(0x79c330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5488fa:{NFSU2_TR(0x5488fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5488ffull));
TAIL_STATIC(0x43db50u,43d);
}
B5488ff:L5488ff:{c.instructions+=4;NFSU2_TR(0x5488ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B548902:{NFSU2_TR(0x548902);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548903:{NFSU2_TR(0x548903);
__builtin_memmove((R+4),(R+28),4);
}
B548905:{NFSU2_TR(0x548905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54890aull));
TAIL_STATIC(0x61b500u,61b);
}
B54890a:L54890a:{c.instructions+=1;NFSU2_TR(0x54890a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54890e:L54890e:{c.instructions+=3;NFSU2_TR(0x54890e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B548911:{NFSU2_TR(0x548911);
u8 U[4];
w4(U+0,u32(0x79c324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548916:{NFSU2_TR(0x548916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54891bull));
TAIL_STATIC(0x43db50u,43d);
}
B54891b:L54891b:{c.instructions+=4;NFSU2_TR(0x54891b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54891e:{NFSU2_TR(0x54891e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54891f:{NFSU2_TR(0x54891f);
__builtin_memmove((R+4),(R+28),4);
}
B548921:{NFSU2_TR(0x548921);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548926ull));
TAIL_STATIC(0x61b4e0u,61b);
}
B548926:L548926:{c.instructions+=2;NFSU2_TR(0x548926);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548928:{NFSU2_TR(0x548928);
if(r1(R+518)){{goto L548946;}}
}
B54892a:L54892a:{c.instructions+=4;NFSU2_TR(0x54892a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54892d:{NFSU2_TR(0x54892d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54892f:{NFSU2_TR(0x54892f);
u8 U[4];
w4(U+0,u32(0x79c324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548934:{NFSU2_TR(0x548934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548939ull));
TAIL_STATIC(0x43db50u,43d);
}
B548939:L548939:{c.instructions+=4;NFSU2_TR(0x548939);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54893c:{NFSU2_TR(0x54893c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54893d:{NFSU2_TR(0x54893d);
__builtin_memmove((R+4),(R+12),4);
}
B54893f:{NFSU2_TR(0x54893f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548944ull));
TAIL_STATIC(0x61b500u,61b);
}
B548944:L548944:{c.instructions+=1;NFSU2_TR(0x548944);
__builtin_memmove((R+12),(R+0),4);
}
B548946:L548946:{c.instructions+=9;NFSU2_TR(0x548946);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54894a:{NFSU2_TR(0x54894a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54894e:{NFSU2_TR(0x54894e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548952:{NFSU2_TR(0x548952);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548956:{NFSU2_TR(0x548956);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x100ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B54895d:{NFSU2_TR(0x54895d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B548965:{NFSU2_TR(0x548965);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548969:{NFSU2_TR(0x548969);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54896d:{NFSU2_TR(0x54896d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L54899b;}}
}
B54896f:L54896f:{c.instructions+=5;NFSU2_TR(0x54896f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548972:{NFSU2_TR(0x548972);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548973:{NFSU2_TR(0x548973);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B548977:{NFSU2_TR(0x548977);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548978:{NFSU2_TR(0x548978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54897dull));
TAIL_STATIC(0x504640u,504);
}
B54897d:L54897d:{c.instructions+=3;NFSU2_TR(0x54897d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B548980:{NFSU2_TR(0x548980);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B548982:{NFSU2_TR(0x548982);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54898b;}}
}
B548984:L548984:{c.instructions+=1;NFSU2_TR(0x548984);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B54898b:L54898b:{c.instructions+=6;NFSU2_TR(0x54898b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54898d:{NFSU2_TR(0x54898d);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B548991:{NFSU2_TR(0x548991);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548992:{NFSU2_TR(0x548992);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548994:{NFSU2_TR(0x548994);
__builtin_memmove((R+4),(R+28),4);
}
B548996:{NFSU2_TR(0x548996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54899bull));
TAIL_STATIC(0x517ad0u,517);
}
B54899b:L54899b:{c.instructions+=3;NFSU2_TR(0x54899b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54899f:{NFSU2_TR(0x54899f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5489a5:{NFSU2_TR(0x5489a5);
__builtin_memmove((R+28),(R+0),4);
}
B5489a7:L5489a7:{c.instructions+=3;NFSU2_TR(0x5489a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5489a9:{NFSU2_TR(0x5489a9);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5489ad:{NFSU2_TR(0x5489ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x548765u);}goto L548765;}}
}
B5489b3:L5489b3:{c.instructions+=1;NFSU2_TR(0x5489b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5489b7:L5489b7:{c.instructions+=5;NFSU2_TR(0x5489b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5489bd:{NFSU2_TR(0x5489bd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5489be:{NFSU2_TR(0x5489be);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5489c1:{NFSU2_TR(0x5489c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5489c5:{NFSU2_TR(0x5489c5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L548a97;}}
}
B5489cb:L5489cb:{c.instructions+=1;NFSU2_TR(0x5489cb);
{goto L5489d0;}
}
B5489d0:L5489d0:{c.instructions+=5;NFSU2_TR(0x5489d0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5489d4:{NFSU2_TR(0x5489d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5489d7:{NFSU2_TR(0x5489d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5489d8:{NFSU2_TR(0x5489d8);
u8 U[4];
w4(U+0,u32(0x79c344ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5489dd:{NFSU2_TR(0x5489dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5489e2ull));
TAIL_STATIC(0x50b990u,50b);
}
B5489e2:L5489e2:{c.instructions+=4;NFSU2_TR(0x5489e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5489e5:{NFSU2_TR(0x5489e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5489e7:{NFSU2_TR(0x5489e7);
__builtin_memmove((R+12),(R+0),4);
}
B5489e9:{NFSU2_TR(0x5489e9);
if(r1(R+518)){{goto L548a32;}}
}
B5489eb:L5489eb:{c.instructions+=2;NFSU2_TR(0x5489eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5489ec:{NFSU2_TR(0x5489ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5489f1ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5489f1:L5489f1:{c.instructions+=3;NFSU2_TR(0x5489f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5489f4:{NFSU2_TR(0x5489f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5489f6:{NFSU2_TR(0x5489f6);
if(r1(R+518)){{goto L548a32;}}
}
B5489f8:L5489f8:{c.instructions+=8;NFSU2_TR(0x5489f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B548a00:{NFSU2_TR(0x548a00);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B548a04:{NFSU2_TR(0x548a04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548a05:{NFSU2_TR(0x548a05);
__builtin_memmove((R+4),(R+0),4);
}
B548a07:{NFSU2_TR(0x548a07);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B548a0c:{NFSU2_TR(0x548a0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548a10:{NFSU2_TR(0x548a10);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B548a18:{NFSU2_TR(0x548a18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548a1dull));
TAIL_STATIC(0x504880u,504);
}
B548a1d:L548a1d:{c.instructions+=5;NFSU2_TR(0x548a1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548a21:{NFSU2_TR(0x548a21);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548a23:{NFSU2_TR(0x548a23);
u8 U[5];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B548a28:{NFSU2_TR(0x548a28);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B548a30:{NFSU2_TR(0x548a30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L548a49;}}
}
B548a32:L548a32:{c.instructions+=3;NFSU2_TR(0x548a32);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B548a37:{NFSU2_TR(0x548a37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548a39:{NFSU2_TR(0x548a39);
if(r1(R+518)){{goto L548a81;}}
}
B548a3b:L548a3b:{c.instructions+=4;NFSU2_TR(0x548a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548a3e:{NFSU2_TR(0x548a3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548a3f:{NFSU2_TR(0x548a3f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548a40:{NFSU2_TR(0x548a40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548a45ull));
TAIL_STATIC(0x52c570u,52c);
}
B548a45:L548a45:{c.instructions+=2;NFSU2_TR(0x548a45);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548a47:{NFSU2_TR(0x548a47);
if(r1(R+518)){{goto L548a81;}}
}
B548a49:L548a49:{c.instructions+=3;NFSU2_TR(0x548a49);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B548a4f:{NFSU2_TR(0x548a4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548a51:{NFSU2_TR(0x548a51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L548a59;}}
}
B548a53:L548a53:{c.instructions+=2;NFSU2_TR(0x548a53);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B548a57:{NFSU2_TR(0x548a57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L548a60;}}
}
B548a59:L548a59:{c.instructions+=1;NFSU2_TR(0x548a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B548a60:L548a60:{c.instructions+=2;NFSU2_TR(0x548a60);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B548a64:{NFSU2_TR(0x548a64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L548a81;}}
}
B548a66:L548a66:{c.instructions+=4;NFSU2_TR(0x548a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B548a69:{NFSU2_TR(0x548a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548a6c:{NFSU2_TR(0x548a6c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548a6e:{NFSU2_TR(0x548a6e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L548a81;}}
}
B548a70:L548a70:{c.instructions+=1;NFSU2_TR(0x548a70);
__builtin_memmove((R+24),(R+0),4);
}
B548a72:L548a72:{c.instructions+=2;NFSU2_TR(0x548a72);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548a73:{NFSU2_TR(0x548a73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548a78ull));
TAIL_STATIC(0x50ca00u,50c);
}
B548a78:L548a78:{c.instructions+=4;NFSU2_TR(0x548a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B548a7b:{NFSU2_TR(0x548a7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B548a7e:{NFSU2_TR(0x548a7e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B548a7f:{NFSU2_TR(0x548a7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x548a72u);}goto L548a72;}}
}
B548a81:L548a81:{c.instructions+=5;NFSU2_TR(0x548a81);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548a85:{NFSU2_TR(0x548a85);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B548a86:{NFSU2_TR(0x548a86);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548a89:{NFSU2_TR(0x548a89);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548a8d:{NFSU2_TR(0x548a8d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5489d0u);}goto L5489d0;}}
}
B548a93:L548a93:{c.instructions+=1;NFSU2_TR(0x548a93);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B548a97:L548a97:{c.instructions+=4;NFSU2_TR(0x548a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548a9d:{NFSU2_TR(0x548a9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x158ull))));
__builtin_memmove((R+0),(U+0),4);
}
B548aa3:{NFSU2_TR(0x548aa3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548aa5:{NFSU2_TR(0x548aa5);
if(r1(R+518)){{goto L548c03;}}
}
B548aab:L548aab:{c.instructions+=3;NFSU2_TR(0x548aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B548aae:{NFSU2_TR(0x548aae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548ab0:{NFSU2_TR(0x548ab0);
if(r1(R+518)){{goto L548afd;}}
}
B548ab2:L548ab2:{c.instructions+=2;NFSU2_TR(0x548ab2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548ab3:{NFSU2_TR(0x548ab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548ab8ull));
TAIL_STATIC(0x52cef0u,52c);
}
B548ab8:L548ab8:{c.instructions+=3;NFSU2_TR(0x548ab8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B548abb:{NFSU2_TR(0x548abb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548abd:{NFSU2_TR(0x548abd);
if(r1(R+518)){{goto L548afd;}}
}
B548abf:L548abf:{c.instructions+=8;NFSU2_TR(0x548abf);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B548ac7:{NFSU2_TR(0x548ac7);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B548acb:{NFSU2_TR(0x548acb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548acc:{NFSU2_TR(0x548acc);
__builtin_memmove((R+4),(R+0),4);
}
B548ace:{NFSU2_TR(0x548ace);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B548ad3:{NFSU2_TR(0x548ad3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x23a43844ull));
s4(u32(r4(U+0)),r4(U+4));
}
B548adb:{NFSU2_TR(0x548adb);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B548ae3:{NFSU2_TR(0x548ae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548ae8ull));
TAIL_STATIC(0x504880u,504);
}
B548ae8:L548ae8:{c.instructions+=5;NFSU2_TR(0x548ae8);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548aec:{NFSU2_TR(0x548aec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548aee:{NFSU2_TR(0x548aee);
u8 U[5];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B548af3:{NFSU2_TR(0x548af3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B548afb:{NFSU2_TR(0x548afb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L548b14;}}
}
B548afd:L548afd:{c.instructions+=3;NFSU2_TR(0x548afd);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B548b02:{NFSU2_TR(0x548b02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548b04:{NFSU2_TR(0x548b04);
if(r1(R+518)){{goto L548b77;}}
}
B548b06:L548b06:{c.instructions+=4;NFSU2_TR(0x548b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548b09:{NFSU2_TR(0x548b09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548b0a:{NFSU2_TR(0x548b0a);
u8 U[4];
w4(U+0,u32(0x23a43844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548b0f:{NFSU2_TR(0x548b0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548b14ull));
TAIL_STATIC(0x52c570u,52c);
}
B548b14:L548b14:{c.instructions+=3;NFSU2_TR(0x548b14);
__builtin_memmove((R+12),(R+0),4);
}
B548b16:{NFSU2_TR(0x548b16);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548b18:{NFSU2_TR(0x548b18);
if(r1(R+518)){{goto L548b77;}}
}
B548b1a:L548b1a:{c.instructions+=3;NFSU2_TR(0x548b1a);
w4(R+8,u32(0x79053cull));
}
B548b1f:{NFSU2_TR(0x548b1f);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B548b22:{NFSU2_TR(0x548b22);
w1(R+0,u8(0x48ull));
}
B548b24:L548b24:{c.instructions+=3;NFSU2_TR(0x548b24);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B548b27:{NFSU2_TR(0x548b27);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B548b29:{NFSU2_TR(0x548b29);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L548b31;}}
}
B548b2b:L548b2b:{c.instructions+=2;NFSU2_TR(0x548b2b);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B548b2d:{NFSU2_TR(0x548b2d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L548b31;}}
}
B548b2f:L548b2f:{c.instructions+=1;NFSU2_TR(0x548b2f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B548b31:L548b31:{c.instructions+=6;NFSU2_TR(0x548b31);
w4(R+0,u32(r1(R+0)));
}
B548b34:{NFSU2_TR(0x548b34);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B548b36:{NFSU2_TR(0x548b36);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B548b39:{NFSU2_TR(0x548b39);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B548b3a:{NFSU2_TR(0x548b3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B548b3c:{NFSU2_TR(0x548b3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x548b24u);}goto L548b24;}}
}
B548b3e:L548b3e:{c.instructions+=3;NFSU2_TR(0x548b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B548b41:{NFSU2_TR(0x548b41);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548b43:{NFSU2_TR(0x548b43);
if(r1(R+518)){{goto L548b77;}}
}
B548b45:L548b45:{c.instructions+=2;NFSU2_TR(0x548b45);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B548b48:{NFSU2_TR(0x548b48);
if(r1(R+518)){{goto L548b53;}}
}
B548b4a:L548b4a:{c.instructions+=3;NFSU2_TR(0x548b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B548b4d:{NFSU2_TR(0x548b4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548b4f:{NFSU2_TR(0x548b4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x548b45u);}goto L548b45;}}
}
B548b51:L548b51:{c.instructions+=1;NFSU2_TR(0x548b51);
{goto L548b77;}
}
B548b53:L548b53:{c.instructions+=2;NFSU2_TR(0x548b53);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548b55:{NFSU2_TR(0x548b55);
if(r1(R+518)){{goto L548b77;}}
}
B548b57:L548b57:{c.instructions+=2;NFSU2_TR(0x548b57);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B548b5a:{NFSU2_TR(0x548b5a);
if(r1(R+518)){{goto L548b70;}}
}
B548b5c:L548b5c:{c.instructions+=3;NFSU2_TR(0x548b5c);
__builtin_memmove((R+4),(R+12),4);
}
B548b5e:{NFSU2_TR(0x548b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548b61:{NFSU2_TR(0x548b61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548b66ull));
TAIL_STATIC(0x517720u,517);
}
B548b66:L548b66:{c.instructions+=2;NFSU2_TR(0x548b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548b69:{NFSU2_TR(0x548b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B548b70:L548b70:{c.instructions+=1;NFSU2_TR(0x548b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B548b77:L548b77:{c.instructions+=3;NFSU2_TR(0x548b77);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548b7b:{NFSU2_TR(0x548b7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548b7d:{NFSU2_TR(0x548b7d);
if(r1(R+518)){{goto L548b93;}}
}
B548b7f:L548b7f:{c.instructions+=3;NFSU2_TR(0x548b7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548b80:{NFSU2_TR(0x548b80);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x158ull))));
__builtin_memmove((R+4),(U+0),4);
}
B548b86:{NFSU2_TR(0x548b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548b8bull));
TAIL_STATIC(0x43be60u,43b);
}
B548b8b:L548b8b:{c.instructions+=2;NFSU2_TR(0x548b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548b91:{NFSU2_TR(0x548b91);
{goto L548b9f;}
}
B548b93:L548b93:{c.instructions+=2;NFSU2_TR(0x548b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B548b99:{NFSU2_TR(0x548b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548b9f:L548b9f:{c.instructions+=8;NFSU2_TR(0x548b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548ba5:{NFSU2_TR(0x548ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548ba8:{NFSU2_TR(0x548ba8);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B548bac:{NFSU2_TR(0x548bac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548bad:{NFSU2_TR(0x548bad);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B548bb1:{NFSU2_TR(0x548bb1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548bb2:{NFSU2_TR(0x548bb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548bb3:{NFSU2_TR(0x548bb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548bb8ull));
TAIL_STATIC(0x51d620u,51d);
}
B548bb8:L548bb8:{c.instructions+=8;NFSU2_TR(0x548bb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548bbe:{NFSU2_TR(0x548bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548bc1:{NFSU2_TR(0x548bc1);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B548bc5:{NFSU2_TR(0x548bc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548bc6:{NFSU2_TR(0x548bc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B548bca:{NFSU2_TR(0x548bca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548bcb:{NFSU2_TR(0x548bcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548bcc:{NFSU2_TR(0x548bcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548bd1ull));
TAIL_STATIC(0x51d620u,51d);
}
B548bd1:L548bd1:{c.instructions+=10;NFSU2_TR(0x548bd1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B548bd5:{NFSU2_TR(0x548bd5);
{u32 ea_=u32(r4(R+28)+u32(388u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B548bdb:{NFSU2_TR(0x548bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548be1:{NFSU2_TR(0x548be1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B548be4:{NFSU2_TR(0x548be4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B548be8:{NFSU2_TR(0x548be8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B548bec:{NFSU2_TR(0x548bec);
{u32 ea_=u32(r4(R+28)+u32(384u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B548bf2:{NFSU2_TR(0x548bf2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B548bf5:{NFSU2_TR(0x548bf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548bf6:{NFSU2_TR(0x548bf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548bfbull));
TAIL_STATIC(0x51d4d0u,51d);
}
B548bfb:L548bfb:{c.instructions+=2;NFSU2_TR(0x548bfb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B548bfe:{NFSU2_TR(0x548bfe);
{goto L548ccb;}
}
B548c03:L548c03:{c.instructions+=4;NFSU2_TR(0x548c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B548c06:{NFSU2_TR(0x548c06);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B548c08:{NFSU2_TR(0x548c08);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548c0a:{NFSU2_TR(0x548c0a);
if(r1(R+518)){{goto L548c56;}}
}
B548c0c:L548c0c:{c.instructions+=2;NFSU2_TR(0x548c0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548c0d:{NFSU2_TR(0x548c0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548c12ull));
TAIL_STATIC(0x52cef0u,52c);
}
B548c12:L548c12:{c.instructions+=3;NFSU2_TR(0x548c12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B548c15:{NFSU2_TR(0x548c15);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548c17:{NFSU2_TR(0x548c17);
if(r1(R+518)){{goto L548c52;}}
}
B548c19:L548c19:{c.instructions+=8;NFSU2_TR(0x548c19);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B548c21:{NFSU2_TR(0x548c21);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B548c25:{NFSU2_TR(0x548c25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548c26:{NFSU2_TR(0x548c26);
__builtin_memmove((R+4),(R+0),4);
}
B548c28:{NFSU2_TR(0x548c28);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B548c2d:{NFSU2_TR(0x548c2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x23a43844ull));
s4(u32(r4(U+0)),r4(U+4));
}
B548c35:{NFSU2_TR(0x548c35);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548c39:{NFSU2_TR(0x548c39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548c3eull));
TAIL_STATIC(0x504880u,504);
}
B548c3e:L548c3e:{c.instructions+=5;NFSU2_TR(0x548c3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548c42:{NFSU2_TR(0x548c42);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548c44:{NFSU2_TR(0x548c44);
u8 U[5];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B548c48:{NFSU2_TR(0x548c48);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B548c50:{NFSU2_TR(0x548c50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L548c6d;}}
}
B548c52:L548c52:{c.instructions+=1;NFSU2_TR(0x548c52);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B548c56:L548c56:{c.instructions+=3;NFSU2_TR(0x548c56);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B548c5b:{NFSU2_TR(0x548c5b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548c5d:{NFSU2_TR(0x548c5d);
if(r1(R+518)){{goto L548ccf;}}
}
B548c5f:L548c5f:{c.instructions+=4;NFSU2_TR(0x548c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548c62:{NFSU2_TR(0x548c62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548c63:{NFSU2_TR(0x548c63);
u8 U[4];
w4(U+0,u32(0x23a43844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548c68:{NFSU2_TR(0x548c68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548c6dull));
TAIL_STATIC(0x52c570u,52c);
}
B548c6d:L548c6d:{c.instructions+=3;NFSU2_TR(0x548c6d);
__builtin_memmove((R+28),(R+0),4);
}
B548c6f:{NFSU2_TR(0x548c6f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548c71:{NFSU2_TR(0x548c71);
if(r1(R+518)){{goto L548ccb;}}
}
B548c73:L548c73:{c.instructions+=4;NFSU2_TR(0x548c73);
w4(R+8,u32(0x78f614ull));
}
B548c78:{NFSU2_TR(0x548c78);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B548c7b:{NFSU2_TR(0x548c7b);
w1(R+0,u8(0x53ull));
}
B548c7d:{NFSU2_TR(0x548c7d);
__builtin_memmove((R+4),(R+4),4);
}
B548c80:L548c80:{c.instructions+=3;NFSU2_TR(0x548c80);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B548c83:{NFSU2_TR(0x548c83);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B548c85:{NFSU2_TR(0x548c85);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L548c8d;}}
}
B548c87:L548c87:{c.instructions+=2;NFSU2_TR(0x548c87);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B548c89:{NFSU2_TR(0x548c89);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L548c8d;}}
}
B548c8b:L548c8b:{c.instructions+=1;NFSU2_TR(0x548c8b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B548c8d:L548c8d:{c.instructions+=6;NFSU2_TR(0x548c8d);
w4(R+0,u32(r1(R+0)));
}
B548c90:{NFSU2_TR(0x548c90);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B548c92:{NFSU2_TR(0x548c92);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B548c95:{NFSU2_TR(0x548c95);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B548c96:{NFSU2_TR(0x548c96);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B548c98:{NFSU2_TR(0x548c98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x548c80u);}goto L548c80;}}
}
B548c9a:L548c9a:{c.instructions+=3;NFSU2_TR(0x548c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B548c9d:{NFSU2_TR(0x548c9d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548c9f:{NFSU2_TR(0x548c9f);
if(r1(R+518)){{goto L548ccb;}}
}
B548ca1:L548ca1:{c.instructions+=2;NFSU2_TR(0x548ca1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B548ca4:{NFSU2_TR(0x548ca4);
if(r1(R+518)){{goto L548caf;}}
}
B548ca6:L548ca6:{c.instructions+=3;NFSU2_TR(0x548ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B548ca9:{NFSU2_TR(0x548ca9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548cab:{NFSU2_TR(0x548cab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x548ca1u);}goto L548ca1;}}
}
B548cad:L548cad:{c.instructions+=1;NFSU2_TR(0x548cad);
{goto L548ccb;}
}
B548caf:L548caf:{c.instructions+=2;NFSU2_TR(0x548caf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548cb1:{NFSU2_TR(0x548cb1);
if(r1(R+518)){{goto L548ccb;}}
}
B548cb3:L548cb3:{c.instructions+=2;NFSU2_TR(0x548cb3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B548cb6:{NFSU2_TR(0x548cb6);
if(r1(R+518)){{goto L548cc8;}}
}
B548cb8:L548cb8:{c.instructions+=3;NFSU2_TR(0x548cb8);
__builtin_memmove((R+4),(R+28),4);
}
B548cba:{NFSU2_TR(0x548cba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548cbd:{NFSU2_TR(0x548cbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548cc2ull));
TAIL_STATIC(0x517720u,517);
}
B548cc2:L548cc2:{c.instructions+=2;NFSU2_TR(0x548cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548cc5:{NFSU2_TR(0x548cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548cc8:L548cc8:{c.instructions+=1;NFSU2_TR(0x548cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548ccb:L548ccb:{c.instructions+=1;NFSU2_TR(0x548ccb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B548ccf:L548ccf:{c.instructions+=4;NFSU2_TR(0x548ccf);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B548cd3:{NFSU2_TR(0x548cd3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548cd5:{NFSU2_TR(0x548cd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B548cdd:{NFSU2_TR(0x548cdd);
if(r1(R+518)){{goto L548d01;}}
}
B548cdf:L548cdf:{c.instructions+=1;NFSU2_TR(0x548cdf);
}
B548ce0:L548ce0:{c.instructions+=7;NFSU2_TR(0x548ce0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B548ce2:{NFSU2_TR(0x548ce2);
__builtin_memmove((R+4),(R+24),4);
}
B548ce4:{NFSU2_TR(0x548ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B548ce7:{NFSU2_TR(0x548ce7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B548ce9:{NFSU2_TR(0x548ce9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548cea:{NFSU2_TR(0x548cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548ced:{NFSU2_TR(0x548ced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548cf2ull));
TAIL_STATIC(0x575630u,575);
}
B548cf2:L548cf2:{c.instructions+=5;NFSU2_TR(0x548cf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B548cf6:{NFSU2_TR(0x548cf6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B548cfa:{NFSU2_TR(0x548cfa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B548cfd:{NFSU2_TR(0x548cfd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548cff:{NFSU2_TR(0x548cff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x548ce0u);}goto L548ce0;}}
}
B548d01:L548d01:{c.instructions+=7;NFSU2_TR(0x548d01);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548d05:{NFSU2_TR(0x548d05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B548d06:{NFSU2_TR(0x548d06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B548d07:{NFSU2_TR(0x548d07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B548d08:{NFSU2_TR(0x548d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548d0f:{NFSU2_TR(0x548d0f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B548d12:{NFSU2_TR(0x548d12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B548d20:L548d20:{c.instructions+=6;NFSU2_TR(0x548d20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548d21:{NFSU2_TR(0x548d21);
__builtin_memmove((R+24),(R+4),4);
}
B548d23:{NFSU2_TR(0x548d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548d26:{NFSU2_TR(0x548d26);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B548d29:{NFSU2_TR(0x548d29);
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
B548d2b:{NFSU2_TR(0x548d2b);
if(r1(R+518)){{goto L548e12;}}
}
B548d31:L548d31:{c.instructions+=5;NFSU2_TR(0x548d31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548d32:{NFSU2_TR(0x548d32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548d33:{NFSU2_TR(0x548d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B548d36:{NFSU2_TR(0x548d36);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B548d38:{NFSU2_TR(0x548d38);
if(r1(R+518)){{goto L548d7f;}}
}
B548d3a:L548d3a:{c.instructions+=3;NFSU2_TR(0x548d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548d3d:{NFSU2_TR(0x548d3d);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548d42:{NFSU2_TR(0x548d42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548d47ull));
TAIL_STATIC(0x61b4e0u,61b);
}
B548d47:L548d47:{c.instructions+=4;NFSU2_TR(0x548d47);
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
B548d49:{NFSU2_TR(0x548d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548d4c:{NFSU2_TR(0x548d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B548d4f:{NFSU2_TR(0x548d4f);
if(r1(R+518)){{goto L548d6b;}}
}
B548d51:L548d51:{c.instructions+=3;NFSU2_TR(0x548d51);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548d53:{NFSU2_TR(0x548d53);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548d58:{NFSU2_TR(0x548d58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548d5dull));
TAIL_STATIC(0x61b500u,61b);
}
B548d5d:L548d5d:{c.instructions+=4;NFSU2_TR(0x548d5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548d5e:{NFSU2_TR(0x548d5e);
u8 U[4];
w4(U+0,u32(0xd28b9316ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548d63:{NFSU2_TR(0x548d63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548d64:{NFSU2_TR(0x548d64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548d69ull));
TAIL_STATIC(0x495460u,495);
}
B548d69:L548d69:{c.instructions+=1;NFSU2_TR(0x548d69);
{goto L548d7c;}
}
B548d6b:L548d6b:{c.instructions+=1;NFSU2_TR(0x548d6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548d70ull));
TAIL_STATIC(0x610000u,610);
}
B548d70:L548d70:{c.instructions+=4;NFSU2_TR(0x548d70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548d71:{NFSU2_TR(0x548d71);
u8 U[4];
w4(U+0,u32(0xd28b9316ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548d76:{NFSU2_TR(0x548d76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548d77:{NFSU2_TR(0x548d77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548d7cull));
TAIL_STATIC(0x537b80u,537);
}
B548d7c:L548d7c:{c.instructions+=1;NFSU2_TR(0x548d7c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B548d7f:L548d7f:{c.instructions+=2;NFSU2_TR(0x548d7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B548d82:{NFSU2_TR(0x548d82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548d87ull));
TAIL_STATIC(0x51f7e0u,51f);
}
B548d87:L548d87:{c.instructions+=7;NFSU2_TR(0x548d87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548d88:{NFSU2_TR(0x548d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548d8e:{NFSU2_TR(0x548d8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548d8f:{NFSU2_TR(0x548d8f);
w4(R+12,u32(0x1ull));
}
B548d94:{NFSU2_TR(0x548d94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548d95:{NFSU2_TR(0x548d95);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B548d9b:{NFSU2_TR(0x548d9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548da0ull));
TAIL_STATIC(0x538080u,538);
}
B548da0:L548da0:{c.instructions+=4;NFSU2_TR(0x548da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548da3:{NFSU2_TR(0x548da3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548da5:{NFSU2_TR(0x548da5);
u8 U[4];
w4(U+0,u32(0x311151f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548daa:{NFSU2_TR(0x548daa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548dafull));
TAIL_STATIC(0x61b500u,61b);
}
B548daf:L548daf:{c.instructions+=3;NFSU2_TR(0x548daf);
__builtin_memmove(gp(0x839bf0),(R+0),4);
}
B548db4:{NFSU2_TR(0x548db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548db7:{NFSU2_TR(0x548db7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548dbcull));
TAIL_STATIC(0x6319a0u,631);
}
B548dbc:L548dbc:{c.instructions+=2;NFSU2_TR(0x548dbc);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548dc2:{NFSU2_TR(0x548dc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L548dff;}}
}
B548dc4:L548dc4:{c.instructions+=2;NFSU2_TR(0x548dc4);
u8 U[8];
__builtin_memmove((U+0),gp(0x83898c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548dca:{NFSU2_TR(0x548dca);
if(r1(R+518)){{goto L548dff;}}
}
B548dcc:L548dcc:{c.instructions+=8;NFSU2_TR(0x548dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548dcf:{NFSU2_TR(0x548dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B548dd5:{NFSU2_TR(0x548dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548dd8:{NFSU2_TR(0x548dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B548ddb:{NFSU2_TR(0x548ddb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548ddc:{NFSU2_TR(0x548ddc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548ddd:{NFSU2_TR(0x548ddd);
w4(R+4,u32(0x85ad40ull));
}
B548de2:{NFSU2_TR(0x548de2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548de7ull));
TAIL_STATIC(0x514280u,514);
}
B548de7:L548de7:{c.instructions+=5;NFSU2_TR(0x548de7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548de8:{NFSU2_TR(0x548de8);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548ded:{NFSU2_TR(0x548ded);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548df2:{NFSU2_TR(0x548df2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548df3:{NFSU2_TR(0x548df3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548df8ull));
TAIL_STATIC(0x537b80u,537);
}
B548df8:L548df8:{c.instructions+=5;NFSU2_TR(0x548df8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B548dfb:{NFSU2_TR(0x548dfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B548dfc:{NFSU2_TR(0x548dfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B548dfd:{NFSU2_TR(0x548dfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B548dfe:{NFSU2_TR(0x548dfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B548dff:L548dff:{c.instructions+=4;NFSU2_TR(0x548dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548e02:{NFSU2_TR(0x548e02);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548e07:{NFSU2_TR(0x548e07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548e08:{NFSU2_TR(0x548e08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548e0dull));
TAIL_STATIC(0x4954e0u,495);
}
B548e0d:L548e0d:{c.instructions+=3;NFSU2_TR(0x548e0d);
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
B548e10:{NFSU2_TR(0x548e10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B548e11:{NFSU2_TR(0x548e11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B548e12:L548e12:{c.instructions+=2;NFSU2_TR(0x548e12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B548e13:{NFSU2_TR(0x548e13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B548e20:L548e20:{c.instructions+=3;NFSU2_TR(0x548e20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548e21:{NFSU2_TR(0x548e21);
__builtin_memmove((R+24),(R+4),4);
}
B548e23:{NFSU2_TR(0x548e23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548e28ull));
TAIL_STATIC(0x53c430u,53c);
}
B548e28:L548e28:{c.instructions+=2;NFSU2_TR(0x548e28);
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
B548e2d:{NFSU2_TR(0x548e2d);
if(r1(R+518)){{goto L548e38;}}
}
B548e2f:L548e2f:{c.instructions+=2;NFSU2_TR(0x548e2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548e30:{NFSU2_TR(0x548e30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548e35ull));
TAIL_STATIC(0x575630u,575);
}
B548e35:L548e35:{c.instructions+=1;NFSU2_TR(0x548e35);
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
B548e38:L548e38:{c.instructions+=3;NFSU2_TR(0x548e38);
__builtin_memmove((R+0),(R+24),4);
}
B548e3a:{NFSU2_TR(0x548e3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B548e3b:{NFSU2_TR(0x548e3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B548e40:L548e40:{c.instructions+=8;NFSU2_TR(0x548e40);
__builtin_memmove((R+0),gp(0x838560),4);
}
B548e45:{NFSU2_TR(0x548e45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B548e48:{NFSU2_TR(0x548e48);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548e4b:{NFSU2_TR(0x548e4b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548e4c:{NFSU2_TR(0x548e4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548e4d:{NFSU2_TR(0x548e4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548e4e:{NFSU2_TR(0x548e4e);
__builtin_memmove((R+24),(R+4),4);
}
B548e50:{NFSU2_TR(0x548e50);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L548fe8;}}
}
B548e56:L548e56:{c.instructions+=3;NFSU2_TR(0x548e56);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B548e58:{NFSU2_TR(0x548e58);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B548e5b:{NFSU2_TR(0x548e5b);
if(r1(R+518)){{goto L548e71;}}
}
B548e5d:L548e5d:{c.instructions+=2;NFSU2_TR(0x548e5d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B548e5e:{NFSU2_TR(0x548e5e);
if(r1(R+518)){{goto L548e6a;}}
}
B548e60:L548e60:{c.instructions+=2;NFSU2_TR(0x548e60);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B548e61:{NFSU2_TR(0x548e61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L548e73;}}
}
B548e63:L548e63:{c.instructions+=2;NFSU2_TR(0x548e63);
w4(R+12,u32(0x2ull));
}
B548e68:{NFSU2_TR(0x548e68);
{goto L548e73;}
}
B548e6a:L548e6a:{c.instructions+=2;NFSU2_TR(0x548e6a);
w4(R+12,u32(0x1ull));
}
B548e6f:{NFSU2_TR(0x548e6f);
{goto L548e73;}
}
B548e71:L548e71:{c.instructions+=1;NFSU2_TR(0x548e71);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B548e73:L548e73:{c.instructions+=4;NFSU2_TR(0x548e73);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B548e75:{NFSU2_TR(0x548e75);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B548e7a:{NFSU2_TR(0x548e7a);
w4(R+4,u32(0x7ull));
}
B548e7f:{NFSU2_TR(0x548e7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B548e83:L548e83:{c.instructions+=1;NFSU2_TR(0x548e83);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L548e85;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x548e83u);}goto L548e83;}
}
B548e85:L548e85:{c.instructions+=9;NFSU2_TR(0x548e85);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B548e87:{NFSU2_TR(0x548e87);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B548e88:{NFSU2_TR(0x548e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548e8b:{NFSU2_TR(0x548e8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548e8c:{NFSU2_TR(0x548e8c);
u8 U[4];
w4(U+0,u32(0x79c354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548e91:{NFSU2_TR(0x548e91);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B548e95:{NFSU2_TR(0x548e95);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548e97:{NFSU2_TR(0x548e97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548e98:{NFSU2_TR(0x548e98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548e9dull));
TAIL_STATIC(0x50c960u,50c);
}
B548e9d:L548e9d:{c.instructions+=7;NFSU2_TR(0x548e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548ea0:{NFSU2_TR(0x548ea0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548ea2:{NFSU2_TR(0x548ea2);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548ea7:{NFSU2_TR(0x548ea7);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B548eab:{NFSU2_TR(0x548eab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548eac:{NFSU2_TR(0x548eac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548ead:{NFSU2_TR(0x548ead);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548eb2ull));
TAIL_STATIC(0x5426c0u,542);
}
B548eb2:L548eb2:{c.instructions+=8;NFSU2_TR(0x548eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548eb5:{NFSU2_TR(0x548eb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548eb9:{NFSU2_TR(0x548eb9);
__builtin_memmove((R+8),(R+0),4);
}
B548ebb:{NFSU2_TR(0x548ebb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B548ebd:{NFSU2_TR(0x548ebd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B548ec0:{NFSU2_TR(0x548ec0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B548ec3:{NFSU2_TR(0x548ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548ec6:{NFSU2_TR(0x548ec6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L548ed1;}}
}
B548ec8:L548ec8:{c.instructions+=2;NFSU2_TR(0x548ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B548ecf:{NFSU2_TR(0x548ecf);
{goto L548edf;}
}
B548ed1:L548ed1:{c.instructions+=4;NFSU2_TR(0x548ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B548ed4:{NFSU2_TR(0x548ed4);
u8 U[16];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B548ed8:{NFSU2_TR(0x548ed8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548eda:{NFSU2_TR(0x548eda);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L548edf;}}
}
B548edc:L548edc:{c.instructions+=1;NFSU2_TR(0x548edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548edf:L548edf:{c.instructions+=3;NFSU2_TR(0x548edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548ee2:{NFSU2_TR(0x548ee2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B548ee4:{NFSU2_TR(0x548ee4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L548ef6;}}
}
B548ee6:L548ee6:{c.instructions+=5;NFSU2_TR(0x548ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B548eec:{NFSU2_TR(0x548eec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548eee:{NFSU2_TR(0x548eee);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548ef3:{NFSU2_TR(0x548ef3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548ef4:{NFSU2_TR(0x548ef4);
{goto L548f06;}
}
B548ef6:L548ef6:{c.instructions+=1;NFSU2_TR(0x548ef6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L548f0e;}}
}
B548ef8:L548ef8:{c.instructions+=4;NFSU2_TR(0x548ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548efe:{NFSU2_TR(0x548efe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f00:{NFSU2_TR(0x548f00);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f05:{NFSU2_TR(0x548f05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f06:L548f06:{c.instructions+=1;NFSU2_TR(0x548f06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548f0bull));
TAIL_STATIC(0x51cf70u,51c);
}
B548f0b:L548f0b:{c.instructions+=1;NFSU2_TR(0x548f0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B548f0e:L548f0e:{c.instructions+=7;NFSU2_TR(0x548f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548f11:{NFSU2_TR(0x548f11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f12:{NFSU2_TR(0x548f12);
u8 U[4];
w4(U+0,u32(0x79c354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f17:{NFSU2_TR(0x548f17);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B548f1b:{NFSU2_TR(0x548f1b);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f1d:{NFSU2_TR(0x548f1d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f1e:{NFSU2_TR(0x548f1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548f23ull));
TAIL_STATIC(0x50c960u,50c);
}
B548f23:L548f23:{c.instructions+=7;NFSU2_TR(0x548f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548f26:{NFSU2_TR(0x548f26);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f28:{NFSU2_TR(0x548f28);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f2d:{NFSU2_TR(0x548f2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B548f31:{NFSU2_TR(0x548f31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f32:{NFSU2_TR(0x548f32);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f33:{NFSU2_TR(0x548f33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548f38ull));
TAIL_STATIC(0x5426c0u,542);
}
B548f38:L548f38:{c.instructions+=7;NFSU2_TR(0x548f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548f3b:{NFSU2_TR(0x548f3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B548f3e:{NFSU2_TR(0x548f3e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B548f3f:{NFSU2_TR(0x548f3f);
u8 U[12];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B548f43:{NFSU2_TR(0x548f43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f44:{NFSU2_TR(0x548f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B548f47:{NFSU2_TR(0x548f47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548f4cull));
TAIL_STATIC(0x43be60u,43b);
}
B548f4c:L548f4c:{c.instructions+=13;NFSU2_TR(0x548f4c);
__builtin_memmove((R+28),(R+0),4);
}
B548f4e:{NFSU2_TR(0x548f4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B548f51:{NFSU2_TR(0x548f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B548f54:{NFSU2_TR(0x548f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548f57:{NFSU2_TR(0x548f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548f5a:{NFSU2_TR(0x548f5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B548f5e:{NFSU2_TR(0x548f5e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f5f:{NFSU2_TR(0x548f5f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B548f63:{NFSU2_TR(0x548f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548f66:{NFSU2_TR(0x548f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548f69:{NFSU2_TR(0x548f69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f6a:{NFSU2_TR(0x548f6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f6b:{NFSU2_TR(0x548f6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548f70ull));
TAIL_STATIC(0x51d620u,51d);
}
B548f70:L548f70:{c.instructions+=8;NFSU2_TR(0x548f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548f73:{NFSU2_TR(0x548f73);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B548f77:{NFSU2_TR(0x548f77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f78:{NFSU2_TR(0x548f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B548f7b:{NFSU2_TR(0x548f7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B548f7f:{NFSU2_TR(0x548f7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f80:{NFSU2_TR(0x548f80);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548f81:{NFSU2_TR(0x548f81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548f86ull));
TAIL_STATIC(0x51d620u,51d);
}
B548f86:L548f86:{c.instructions+=10;NFSU2_TR(0x548f86);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B548f8a:{NFSU2_TR(0x548f8a);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B548f90:{NFSU2_TR(0x548f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548f93:{NFSU2_TR(0x548f93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B548f96:{NFSU2_TR(0x548f96);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B548f9a:{NFSU2_TR(0x548f9a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B548f9e:{NFSU2_TR(0x548f9e);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B548fa4:{NFSU2_TR(0x548fa4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B548fa7:{NFSU2_TR(0x548fa7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548fa8:{NFSU2_TR(0x548fa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548fadull));
TAIL_STATIC(0x51d4d0u,51d);
}
B548fad:L548fad:{c.instructions+=6;NFSU2_TR(0x548fad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B548fb0:{NFSU2_TR(0x548fb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548fb1:{NFSU2_TR(0x548fb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B548fb5:{NFSU2_TR(0x548fb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548fb6:{NFSU2_TR(0x548fb6);
__builtin_memmove((R+4),(R+24),4);
}
B548fb8:{NFSU2_TR(0x548fb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548fbdull));
TAIL_STATIC(0x50f770u,50f);
}
B548fbd:L548fbd:{c.instructions+=15;NFSU2_TR(0x548fbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B548fbf:{NFSU2_TR(0x548fbf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548fc1:{NFSU2_TR(0x548fc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B548fc4:{NFSU2_TR(0x548fc4);
__builtin_memmove((R+8),(R+16),4);
}
B548fc6:{NFSU2_TR(0x548fc6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B548fc8:{NFSU2_TR(0x548fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548fcb:{NFSU2_TR(0x548fcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548fce:{NFSU2_TR(0x548fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B548fd1:{NFSU2_TR(0x548fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B548fd4:{NFSU2_TR(0x548fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548fd7:{NFSU2_TR(0x548fd7);
__builtin_memmove((R+4),gp(0x838560),4);
}
B548fdd:{NFSU2_TR(0x548fdd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B548fde:{NFSU2_TR(0x548fde);
__builtin_memmove((R+4),(R+24),4);
}
B548fe0:{NFSU2_TR(0x548fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B548fe3:{NFSU2_TR(0x548fe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x548fe8ull));
TAIL_STATIC(0x53c620u,53c);
}
B548fe8:L548fe8:{c.instructions+=5;NFSU2_TR(0x548fe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B548fe9:{NFSU2_TR(0x548fe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B548fea:{NFSU2_TR(0x548fea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B548feb:{NFSU2_TR(0x548feb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B548fee:{NFSU2_TR(0x548fee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x548,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
