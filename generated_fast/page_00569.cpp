#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_438(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53b(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_547(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_559(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55c(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_55f(u8* __restrict R,Cpu& c);
u32 body_560(u8* __restrict R,Cpu& c);
u32 body_561(u8* __restrict R,Cpu& c);
u32 body_562(u8* __restrict R,Cpu& c);
u32 body_56a(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x569,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x569,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_569(u8* __restrict R,Cpu& c);
u32 page_569(Cpu& c){return body_569(c.regs.data(),c);}
__attribute__((noinline)) u32 body_569(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x569000:goto L569000;
case 0x569005:goto L569005;
case 0x569006:c.instructions+=2;goto B569006;
case 0x56900b:c.instructions+=1;goto B56900b;
case 0x569010:goto L569010;
case 0x569012:c.instructions+=1;goto B569012;
case 0x569017:goto L569017;
case 0x569019:c.instructions+=1;goto B569019;
case 0x56901e:goto L56901e;
case 0x56901f:c.instructions+=6;goto B56901f;
case 0x569026:c.instructions+=5;goto B569026;
case 0x56902d:c.instructions+=4;goto B56902d;
case 0x56902e:c.instructions+=3;goto B56902e;
case 0x56902f:c.instructions+=2;goto B56902f;
case 0x569030:c.instructions+=1;goto B569030;
case 0x569033:goto L569033;
case 0x569038:goto L569038;
case 0x56903b:c.instructions+=4;goto B56903b;
case 0x569040:c.instructions+=3;goto B569040;
case 0x569045:c.instructions+=2;goto B569045;
case 0x569046:c.instructions+=1;goto B569046;
case 0x56904b:goto L56904b;
case 0x56904e:c.instructions+=2;goto B56904e;
case 0x569050:c.instructions+=1;goto B569050;
case 0x569056:goto L569056;
case 0x569059:c.instructions+=5;goto B569059;
case 0x56905b:c.instructions+=4;goto B56905b;
case 0x569060:c.instructions+=3;goto B569060;
case 0x569065:c.instructions+=2;goto B569065;
case 0x569066:c.instructions+=1;goto B569066;
case 0x56906b:goto L56906b;
case 0x56906e:c.instructions+=5;goto B56906e;
case 0x56906f:c.instructions+=4;goto B56906f;
case 0x569070:c.instructions+=3;goto B569070;
case 0x569071:c.instructions+=2;goto B569071;
case 0x569072:c.instructions+=1;goto B569072;
case 0x569075:goto L569075;
case 0x56907a:c.instructions+=1;goto B56907a;
case 0x569080:goto L569080;
case 0x569085:c.instructions+=2;goto B569085;
case 0x569087:c.instructions+=1;goto B569087;
case 0x56908d:goto L56908d;
case 0x569092:c.instructions+=2;goto B569092;
case 0x569097:c.instructions+=1;goto B569097;
case 0x56909c:goto L56909c;
case 0x56909f:c.instructions+=5;goto B56909f;
case 0x5690a0:c.instructions+=4;goto B5690a0;
case 0x5690a1:c.instructions+=3;goto B5690a1;
case 0x5690a2:c.instructions+=2;goto B5690a2;
case 0x5690a3:c.instructions+=1;goto B5690a3;
case 0x5690a6:goto L5690a6;
case 0x5690a8:c.instructions+=2;goto B5690a8;
case 0x5690aa:c.instructions+=1;goto B5690aa;
case 0x5690af:goto L5690af;
case 0x5690b0:c.instructions+=4;goto B5690b0;
case 0x5690b1:c.instructions+=3;goto B5690b1;
case 0x5690b2:c.instructions+=2;goto B5690b2;
case 0x5690b3:c.instructions+=1;goto B5690b3;
case 0x5690b6:goto L5690b6;
case 0x5690bb:c.instructions+=1;goto B5690bb;
case 0x5690c1:goto L5690c1;
case 0x5690c7:goto L5690c7;
case 0x5690cc:c.instructions+=1;goto B5690cc;
case 0x5690d2:goto L5690d2;
case 0x5690d8:goto L5690d8;
case 0x5690dd:c.instructions+=1;goto B5690dd;
case 0x5690e3:goto L5690e3;
case 0x5690e8:c.instructions+=1;goto B5690e8;
case 0x5690ee:goto L5690ee;
case 0x5690f4:c.instructions+=1;goto B5690f4;
case 0x5690f9:goto L5690f9;
case 0x5690ff:c.instructions+=5;goto B5690ff;
case 0x569105:c.instructions+=4;goto B569105;
case 0x56910b:c.instructions+=3;goto B56910b;
case 0x56910d:c.instructions+=2;goto B56910d;
case 0x569110:c.instructions+=1;goto B569110;
case 0x569112:goto L569112;
case 0x569114:c.instructions+=2;goto B569114;
case 0x569119:c.instructions+=1;goto B569119;
case 0x56911b:goto L56911b;
case 0x569121:c.instructions+=3;goto B569121;
case 0x569123:c.instructions+=2;goto B569123;
case 0x569126:c.instructions+=1;goto B569126;
case 0x569128:goto L569128;
case 0x56912b:goto L56912b;
case 0x56912e:c.instructions+=2;goto B56912e;
case 0x569131:c.instructions+=1;goto B569131;
case 0x569133:goto L569133;
case 0x56913a:c.instructions+=1;goto B56913a;
case 0x569141:goto L569141;
case 0x569142:c.instructions+=2;goto B569142;
case 0x569144:c.instructions+=1;goto B569144;
case 0x569149:goto L569149;
case 0x56914b:goto L56914b;
case 0x569150:c.instructions+=3;goto B569150;
case 0x569152:c.instructions+=2;goto B569152;
case 0x569154:c.instructions+=1;goto B569154;
case 0x569156:goto L569156;
case 0x569158:c.instructions+=2;goto B569158;
case 0x56915a:c.instructions+=1;goto B56915a;
case 0x56915f:goto L56915f;
case 0x569164:c.instructions+=3;goto B569164;
case 0x569165:c.instructions+=2;goto B569165;
case 0x569167:c.instructions+=1;goto B569167;
case 0x569169:goto L569169;
case 0x56916b:goto L56916b;
case 0x569170:c.instructions+=3;goto B569170;
case 0x569172:c.instructions+=2;goto B569172;
case 0x569174:c.instructions+=1;goto B569174;
case 0x569176:goto L569176;
case 0x569178:c.instructions+=2;goto B569178;
case 0x56917a:c.instructions+=1;goto B56917a;
case 0x56917f:goto L56917f;
case 0x569184:c.instructions+=3;goto B569184;
case 0x569185:c.instructions+=2;goto B569185;
case 0x569187:c.instructions+=1;goto B569187;
case 0x569189:goto L569189;
case 0x56918f:c.instructions+=2;goto B56918f;
case 0x569190:c.instructions+=1;goto B569190;
case 0x569195:goto L569195;
case 0x569198:c.instructions+=2;goto B569198;
case 0x56919a:c.instructions+=1;goto B56919a;
case 0x5691a0:goto L5691a0;
case 0x5691a3:c.instructions+=3;goto B5691a3;
case 0x5691a4:c.instructions+=2;goto B5691a4;
case 0x5691a9:c.instructions+=1;goto B5691a9;
case 0x5691ae:goto L5691ae;
case 0x5691b1:c.instructions+=5;goto B5691b1;
case 0x5691b2:c.instructions+=4;goto B5691b2;
case 0x5691b3:c.instructions+=3;goto B5691b3;
case 0x5691b4:c.instructions+=2;goto B5691b4;
case 0x5691b5:c.instructions+=1;goto B5691b5;
case 0x5691b8:goto L5691b8;
case 0x5691bd:c.instructions+=1;goto B5691bd;
case 0x5691c3:goto L5691c3;
case 0x5691c5:c.instructions+=1;goto B5691c5;
case 0x5691ca:goto L5691ca;
case 0x5691cb:c.instructions+=4;goto B5691cb;
case 0x5691cc:c.instructions+=3;goto B5691cc;
case 0x5691cd:c.instructions+=2;goto B5691cd;
case 0x5691ce:c.instructions+=1;goto B5691ce;
case 0x5691d1:goto L5691d1;
case 0x5691d6:c.instructions+=2;goto B5691d6;
case 0x5691db:c.instructions+=1;goto B5691db;
case 0x5691e0:goto L5691e0;
case 0x5691e2:c.instructions+=3;goto B5691e2;
case 0x5691e4:c.instructions+=2;goto B5691e4;
case 0x5691e9:c.instructions+=1;goto B5691e9;
case 0x5691ee:goto L5691ee;
case 0x5691f1:c.instructions+=5;goto B5691f1;
case 0x5691f2:c.instructions+=4;goto B5691f2;
case 0x5691f3:c.instructions+=3;goto B5691f3;
case 0x5691f4:c.instructions+=2;goto B5691f4;
case 0x5691f5:c.instructions+=1;goto B5691f5;
case 0x5691f8:goto L5691f8;
case 0x5691fd:c.instructions+=1;goto B5691fd;
case 0x569203:goto L569203;
case 0x569209:goto L569209;
case 0x56920e:c.instructions+=1;goto B56920e;
case 0x569214:goto L569214;
case 0x569219:c.instructions+=1;goto B569219;
case 0x56921f:goto L56921f;
case 0x569224:c.instructions+=2;goto B569224;
case 0x569226:c.instructions+=1;goto B569226;
case 0x569228:goto L569228;
case 0x56922d:c.instructions+=2;goto B56922d;
case 0x569230:c.instructions+=1;goto B569230;
case 0x569232:goto L569232;
case 0x569233:c.instructions+=1;goto B569233;
case 0x569238:goto L569238;
case 0x56923b:c.instructions+=2;goto B56923b;
case 0x56923e:c.instructions+=1;goto B56923e;
case 0x569240:goto L569240;
case 0x569246:c.instructions+=5;goto B569246;
case 0x56924b:c.instructions+=4;goto B56924b;
case 0x56924c:c.instructions+=3;goto B56924c;
case 0x56924d:c.instructions+=2;goto B56924d;
case 0x569252:c.instructions+=1;goto B569252;
case 0x569257:goto L569257;
case 0x56925d:c.instructions+=3;goto B56925d;
case 0x56925e:c.instructions+=2;goto B56925e;
case 0x569263:c.instructions+=1;goto B569263;
case 0x569268:goto L569268;
case 0x56926f:goto L56926f;
case 0x569275:c.instructions+=2;goto B569275;
case 0x569277:c.instructions+=1;goto B569277;
case 0x569279:goto L569279;
case 0x56927e:goto L56927e;
case 0x569284:c.instructions+=2;goto B569284;
case 0x569286:c.instructions+=1;goto B569286;
case 0x569288:goto L569288;
case 0x56928e:c.instructions+=2;goto B56928e;
case 0x569291:c.instructions+=1;goto B569291;
case 0x569296:goto L569296;
case 0x56929d:goto L56929d;
case 0x5692a3:c.instructions+=2;goto B5692a3;
case 0x5692a5:c.instructions+=1;goto B5692a5;
case 0x5692a7:goto L5692a7;
case 0x5692ac:c.instructions+=3;goto B5692ac;
case 0x5692ad:c.instructions+=2;goto B5692ad;
case 0x5692b2:c.instructions+=1;goto B5692b2;
case 0x5692b4:goto L5692b4;
case 0x5692ba:c.instructions+=2;goto B5692ba;
case 0x5692bb:c.instructions+=1;goto B5692bb;
case 0x5692c0:goto L5692c0;
case 0x5692c5:goto L5692c5;
case 0x5692c8:c.instructions+=3;goto B5692c8;
case 0x5692cb:c.instructions+=2;goto B5692cb;
case 0x5692cc:c.instructions+=1;goto B5692cc;
case 0x5692d1:goto L5692d1;
case 0x5692d4:c.instructions+=5;goto B5692d4;
case 0x5692d5:c.instructions+=4;goto B5692d5;
case 0x5692d6:c.instructions+=3;goto B5692d6;
case 0x5692d7:c.instructions+=2;goto B5692d7;
case 0x5692d8:c.instructions+=1;goto B5692d8;
case 0x5692db:goto L5692db;
case 0x5692e1:c.instructions+=2;goto B5692e1;
case 0x5692e3:c.instructions+=1;goto B5692e3;
case 0x5692e5:goto L5692e5;
case 0x5692e7:c.instructions+=3;goto B5692e7;
case 0x5692ec:c.instructions+=2;goto B5692ec;
case 0x5692ee:c.instructions+=1;goto B5692ee;
case 0x5692f3:goto L5692f3;
case 0x5692f6:goto L5692f6;
case 0x5692f9:c.instructions+=1;goto B5692f9;
case 0x5692fe:goto L5692fe;
case 0x5692ff:c.instructions+=4;goto B5692ff;
case 0x569300:c.instructions+=3;goto B569300;
case 0x569301:c.instructions+=2;goto B569301;
case 0x569302:c.instructions+=1;goto B569302;
case 0x569305:goto L569305;
case 0x56930b:c.instructions+=3;goto B56930b;
case 0x56930e:c.instructions+=2;goto B56930e;
case 0x569311:c.instructions+=1;goto B569311;
case 0x569317:goto L569317;
case 0x56931c:c.instructions+=1;goto B56931c;
case 0x56931e:goto L56931e;
case 0x569321:c.instructions+=1;goto B569321;
case 0x569327:goto L569327;
case 0x56932d:c.instructions+=5;goto B56932d;
case 0x56932f:c.instructions+=4;goto B56932f;
case 0x569332:c.instructions+=3;goto B569332;
case 0x569334:c.instructions+=2;goto B569334;
case 0x56933a:c.instructions+=1;goto B56933a;
case 0x56933c:goto L56933c;
case 0x569342:c.instructions+=2;goto B569342;
case 0x569345:c.instructions+=1;goto B569345;
case 0x56934a:goto L56934a;
case 0x56934b:c.instructions+=4;goto B56934b;
case 0x56934c:c.instructions+=3;goto B56934c;
case 0x56934d:c.instructions+=2;goto B56934d;
case 0x56934e:c.instructions+=1;goto B56934e;
case 0x569351:goto L569351;
case 0x569357:c.instructions+=2;goto B569357;
case 0x56935a:c.instructions+=1;goto B56935a;
case 0x56935f:goto L56935f;
case 0x569360:c.instructions+=4;goto B569360;
case 0x569361:c.instructions+=3;goto B569361;
case 0x569362:c.instructions+=2;goto B569362;
case 0x569363:c.instructions+=1;goto B569363;
case 0x569366:goto L569366;
case 0x56936b:goto L56936b;
case 0x56936d:c.instructions+=2;goto B56936d;
case 0x569374:c.instructions+=1;goto B569374;
case 0x569376:goto L569376;
case 0x56937c:c.instructions+=4;goto B56937c;
case 0x56937f:c.instructions+=3;goto B56937f;
case 0x569380:c.instructions+=2;goto B569380;
case 0x569387:c.instructions+=1;goto B569387;
case 0x56938c:goto L56938c;
case 0x56938f:c.instructions+=2;goto B56938f;
case 0x569391:c.instructions+=1;goto B569391;
case 0x569393:goto L569393;
case 0x569394:c.instructions+=5;goto B569394;
case 0x569395:c.instructions+=4;goto B569395;
case 0x56939a:c.instructions+=3;goto B56939a;
case 0x56939b:c.instructions+=2;goto B56939b;
case 0x56939c:c.instructions+=1;goto B56939c;
case 0x56939f:goto L56939f;
case 0x5693a5:c.instructions+=3;goto B5693a5;
case 0x5693a8:c.instructions+=2;goto B5693a8;
case 0x5693a9:c.instructions+=1;goto B5693a9;
case 0x5693ae:goto L5693ae;
case 0x5693b1:c.instructions+=2;goto B5693b1;
case 0x5693b4:c.instructions+=1;goto B5693b4;
case 0x5693b6:goto L5693b6;
case 0x5693b7:c.instructions+=5;goto B5693b7;
case 0x5693b8:c.instructions+=4;goto B5693b8;
case 0x5693bd:c.instructions+=3;goto B5693bd;
case 0x5693be:c.instructions+=2;goto B5693be;
case 0x5693bf:c.instructions+=1;goto B5693bf;
case 0x5693c2:goto L5693c2;
case 0x5693c3:c.instructions+=5;goto B5693c3;
case 0x5693c4:c.instructions+=4;goto B5693c4;
case 0x5693cb:c.instructions+=3;goto B5693cb;
case 0x5693cc:c.instructions+=2;goto B5693cc;
case 0x5693cd:c.instructions+=1;goto B5693cd;
case 0x5693d0:goto L5693d0;
case 0x5693d6:c.instructions+=4;goto B5693d6;
case 0x5693d9:c.instructions+=3;goto B5693d9;
case 0x5693da:c.instructions+=2;goto B5693da;
case 0x5693df:c.instructions+=1;goto B5693df;
case 0x5693e4:goto L5693e4;
case 0x5693ea:c.instructions+=3;goto B5693ea;
case 0x5693ed:c.instructions+=2;goto B5693ed;
case 0x5693f0:c.instructions+=1;goto B5693f0;
case 0x5693f2:goto L5693f2;
case 0x5693f3:c.instructions+=1;goto B5693f3;
case 0x5693f8:goto L5693f8;
case 0x5693fb:c.instructions+=2;goto B5693fb;
case 0x5693fd:c.instructions+=1;goto B5693fd;
case 0x5693ff:goto L5693ff;
case 0x569405:c.instructions+=3;goto B569405;
case 0x569408:c.instructions+=2;goto B569408;
case 0x56940b:c.instructions+=1;goto B56940b;
case 0x569411:goto L569411;
case 0x569412:c.instructions+=1;goto B569412;
case 0x569417:goto L569417;
case 0x56941a:c.instructions+=2;goto B56941a;
case 0x56941d:c.instructions+=1;goto B56941d;
case 0x569423:goto L569423;
case 0x569424:c.instructions+=1;goto B569424;
case 0x569426:goto L569426;
case 0x569428:c.instructions+=2;goto B569428;
case 0x56942d:c.instructions+=1;goto B56942d;
case 0x569432:goto L569432;
case 0x569438:c.instructions+=3;goto B569438;
case 0x56943b:c.instructions+=2;goto B56943b;
case 0x56943e:c.instructions+=1;goto B56943e;
case 0x569440:goto L569440;
case 0x569441:c.instructions+=1;goto B569441;
case 0x569446:goto L569446;
case 0x569449:c.instructions+=2;goto B569449;
case 0x56944b:c.instructions+=1;goto B56944b;
case 0x56944d:goto L56944d;
case 0x56944f:goto L56944f;
case 0x569455:c.instructions+=4;goto B569455;
case 0x569458:c.instructions+=3;goto B569458;
case 0x569459:c.instructions+=2;goto B569459;
case 0x56945b:c.instructions+=1;goto B56945b;
case 0x569460:goto L569460;
case 0x569461:c.instructions+=4;goto B569461;
case 0x569462:c.instructions+=3;goto B569462;
case 0x569463:c.instructions+=2;goto B569463;
case 0x569464:c.instructions+=1;goto B569464;
case 0x569467:goto L569467;
case 0x56946d:c.instructions+=3;goto B56946d;
case 0x569470:c.instructions+=2;goto B569470;
case 0x569473:c.instructions+=1;goto B569473;
case 0x569475:goto L569475;
case 0x569476:c.instructions+=1;goto B569476;
case 0x56947b:goto L56947b;
case 0x56947e:c.instructions+=2;goto B56947e;
case 0x569481:c.instructions+=1;goto B569481;
case 0x569483:goto L569483;
case 0x569484:c.instructions+=1;goto B569484;
case 0x569486:goto L569486;
case 0x56948c:c.instructions+=2;goto B56948c;
case 0x569493:c.instructions+=1;goto B569493;
case 0x569495:goto L569495;
case 0x56949c:c.instructions+=3;goto B56949c;
case 0x5694a2:c.instructions+=2;goto B5694a2;
case 0x5694a5:c.instructions+=1;goto B5694a5;
case 0x5694aa:goto L5694aa;
case 0x5694ab:c.instructions+=4;goto B5694ab;
case 0x5694ac:c.instructions+=3;goto B5694ac;
case 0x5694ad:c.instructions+=2;goto B5694ad;
case 0x5694ae:c.instructions+=1;goto B5694ae;
case 0x5694b1:goto L5694b1;
case 0x5694b6:c.instructions+=1;goto B5694b6;
case 0x5694b8:goto L5694b8;
case 0x5694bd:c.instructions+=2;goto B5694bd;
case 0x5694c4:c.instructions+=1;goto B5694c4;
case 0x5694c9:goto L5694c9;
case 0x5694ca:c.instructions+=4;goto B5694ca;
case 0x5694cb:c.instructions+=3;goto B5694cb;
case 0x5694cc:c.instructions+=2;goto B5694cc;
case 0x5694cd:c.instructions+=1;goto B5694cd;
case 0x569500:goto L569500;
case 0x569502:c.instructions+=13;goto B569502;
case 0x569507:c.instructions+=12;goto B569507;
case 0x56950d:c.instructions+=11;goto B56950d;
case 0x56950e:c.instructions+=10;goto B56950e;
case 0x569515:c.instructions+=9;goto B569515;
case 0x569516:c.instructions+=8;goto B569516;
case 0x569517:c.instructions+=7;goto B569517;
case 0x569518:c.instructions+=6;goto B569518;
case 0x569519:c.instructions+=5;goto B569519;
case 0x56951d:c.instructions+=4;goto B56951d;
case 0x56951f:c.instructions+=3;goto B56951f;
case 0x569520:c.instructions+=2;goto B569520;
case 0x569524:c.instructions+=1;goto B569524;
case 0x569529:goto L569529;
case 0x56952c:c.instructions+=11;goto B56952c;
case 0x569531:c.instructions+=10;goto B569531;
case 0x569536:c.instructions+=9;goto B569536;
case 0x569538:c.instructions+=8;goto B569538;
case 0x56953d:c.instructions+=7;goto B56953d;
case 0x569542:c.instructions+=6;goto B569542;
case 0x569544:c.instructions+=5;goto B569544;
case 0x569545:c.instructions+=4;goto B569545;
case 0x56954b:c.instructions+=3;goto B56954b;
case 0x56954f:c.instructions+=2;goto B56954f;
case 0x569555:c.instructions+=1;goto B569555;
case 0x56955a:goto L56955a;
case 0x56955d:c.instructions+=8;goto B56955d;
case 0x56955e:c.instructions+=7;goto B56955e;
case 0x56955f:c.instructions+=6;goto B56955f;
case 0x569561:c.instructions+=5;goto B569561;
case 0x569566:c.instructions+=4;goto B569566;
case 0x569567:c.instructions+=3;goto B569567;
case 0x56956d:c.instructions+=2;goto B56956d;
case 0x569572:c.instructions+=1;goto B569572;
case 0x569577:goto L569577;
case 0x56957d:c.instructions+=10;goto B56957d;
case 0x569583:c.instructions+=9;goto B569583;
case 0x569589:c.instructions+=8;goto B569589;
case 0x56958c:c.instructions+=7;goto B56958c;
case 0x569592:c.instructions+=6;goto B569592;
case 0x569594:c.instructions+=5;goto B569594;
case 0x56959b:c.instructions+=4;goto B56959b;
case 0x5695a1:c.instructions+=3;goto B5695a1;
case 0x5695ab:c.instructions+=2;goto B5695ab;
case 0x5695b5:c.instructions+=1;goto B5695b5;
case 0x5695ba:goto L5695ba;
case 0x5695bd:c.instructions+=3;goto B5695bd;
case 0x5695c2:c.instructions+=2;goto B5695c2;
case 0x5695c3:c.instructions+=1;goto B5695c3;
case 0x5695c8:goto L5695c8;
case 0x5695cb:c.instructions+=3;goto B5695cb;
case 0x5695d0:c.instructions+=2;goto B5695d0;
case 0x5695d1:c.instructions+=1;goto B5695d1;
case 0x5695d6:goto L5695d6;
case 0x5695da:c.instructions+=8;goto B5695da;
case 0x5695dd:c.instructions+=7;goto B5695dd;
case 0x5695de:c.instructions+=6;goto B5695de;
case 0x5695e0:c.instructions+=5;goto B5695e0;
case 0x5695e1:c.instructions+=4;goto B5695e1;
case 0x5695e2:c.instructions+=3;goto B5695e2;
case 0x5695e9:c.instructions+=2;goto B5695e9;
case 0x5695ec:c.instructions+=1;goto B5695ec;
case 0x5695f0:goto L5695f0;
case 0x5695f1:c.instructions+=2;goto B5695f1;
case 0x5695f3:c.instructions+=1;goto B5695f3;
case 0x5695f8:goto L5695f8;
case 0x5695fd:c.instructions+=1;goto B5695fd;
case 0x5695ff:goto L5695ff;
case 0x569600:c.instructions+=1;goto B569600;
case 0x569605:goto L569605;
case 0x569608:goto L569608;
case 0x56960a:c.instructions+=2;goto B56960a;
case 0x56960b:c.instructions+=1;goto B56960b;
case 0x569610:goto L569610;
case 0x569612:c.instructions+=12;goto B569612;
case 0x569617:c.instructions+=11;goto B569617;
case 0x56961d:c.instructions+=10;goto B56961d;
case 0x56961e:c.instructions+=9;goto B56961e;
case 0x569625:c.instructions+=8;goto B569625;
case 0x569626:c.instructions+=7;goto B569626;
case 0x569627:c.instructions+=6;goto B569627;
case 0x569629:c.instructions+=5;goto B569629;
case 0x56962d:c.instructions+=4;goto B56962d;
case 0x569633:c.instructions+=3;goto B569633;
case 0x569639:c.instructions+=2;goto B569639;
case 0x569641:c.instructions+=1;goto B569641;
case 0x569646:goto L569646;
case 0x569648:c.instructions+=2;goto B569648;
case 0x569650:c.instructions+=1;goto B569650;
case 0x569655:goto L569655;
case 0x569659:c.instructions+=4;goto B569659;
case 0x56965a:c.instructions+=3;goto B56965a;
case 0x569661:c.instructions+=2;goto B569661;
case 0x569664:c.instructions+=1;goto B569664;
case 0x569670:goto L569670;
case 0x569671:c.instructions+=9;goto B569671;
case 0x569673:c.instructions+=8;goto B569673;
case 0x569674:c.instructions+=7;goto B569674;
case 0x569675:c.instructions+=6;goto B569675;
case 0x569677:c.instructions+=5;goto B569677;
case 0x56967d:c.instructions+=4;goto B56967d;
case 0x56967f:c.instructions+=3;goto B56967f;
case 0x569680:c.instructions+=2;goto B569680;
case 0x569683:c.instructions+=1;goto B569683;
case 0x569685:goto L569685;
case 0x569688:c.instructions+=8;goto B569688;
case 0x56968b:c.instructions+=7;goto B56968b;
case 0x56968e:c.instructions+=6;goto B56968e;
case 0x56968f:c.instructions+=5;goto B56968f;
case 0x569690:c.instructions+=4;goto B569690;
case 0x569691:c.instructions+=3;goto B569691;
case 0x569692:c.instructions+=2;goto B569692;
case 0x569694:c.instructions+=1;goto B569694;
case 0x569699:goto L569699;
case 0x56969f:c.instructions+=1;goto B56969f;
case 0x5696a5:goto L5696a5;
case 0x5696ab:goto L5696ab;
case 0x5696b1:c.instructions+=1;goto B5696b1;
case 0x5696b7:goto L5696b7;
case 0x5696bd:goto L5696bd;
case 0x5696c3:c.instructions+=1;goto B5696c3;
case 0x5696c5:goto L5696c5;
case 0x5696cb:c.instructions+=1;goto B5696cb;
case 0x5696cd:goto L5696cd;
case 0x5696d3:c.instructions+=1;goto B5696d3;
case 0x5696d9:goto L5696d9;
case 0x5696df:c.instructions+=2;goto B5696df;
case 0x5696e1:c.instructions+=1;goto B5696e1;
case 0x5696e7:goto L5696e7;
case 0x5696ea:c.instructions+=1;goto B5696ea;
case 0x5696ef:goto L5696ef;
case 0x5696f2:c.instructions+=5;goto B5696f2;
case 0x5696f4:c.instructions+=4;goto B5696f4;
case 0x5696f9:c.instructions+=3;goto B5696f9;
case 0x5696fe:c.instructions+=2;goto B5696fe;
case 0x5696ff:c.instructions+=1;goto B5696ff;
case 0x569704:goto L569704;
case 0x569707:c.instructions+=6;goto B569707;
case 0x569708:c.instructions+=5;goto B569708;
case 0x56970c:c.instructions+=4;goto B56970c;
case 0x56970d:c.instructions+=3;goto B56970d;
case 0x56970e:c.instructions+=2;goto B56970e;
case 0x56970f:c.instructions+=1;goto B56970f;
case 0x569712:goto L569712;
case 0x569718:c.instructions+=5;goto B569718;
case 0x56971b:c.instructions+=4;goto B56971b;
case 0x56971c:c.instructions+=3;goto B56971c;
case 0x56971e:c.instructions+=2;goto B56971e;
case 0x569723:c.instructions+=1;goto B569723;
case 0x569728:goto L569728;
case 0x569729:c.instructions+=3;goto B569729;
case 0x56972b:c.instructions+=2;goto B56972b;
case 0x569730:c.instructions+=1;goto B569730;
case 0x569735:goto L569735;
case 0x569736:c.instructions+=3;goto B569736;
case 0x569738:c.instructions+=2;goto B569738;
case 0x56973d:c.instructions+=1;goto B56973d;
case 0x569742:goto L569742;
case 0x569747:c.instructions+=2;goto B569747;
case 0x56974c:c.instructions+=1;goto B56974c;
case 0x569751:goto L569751;
case 0x569753:c.instructions+=3;goto B569753;
case 0x569755:c.instructions+=2;goto B569755;
case 0x56975a:c.instructions+=1;goto B56975a;
case 0x56975f:goto L56975f;
case 0x569765:c.instructions+=4;goto B569765;
case 0x569768:c.instructions+=3;goto B569768;
case 0x56976d:c.instructions+=2;goto B56976d;
case 0x569770:c.instructions+=1;goto B569770;
case 0x569775:goto L569775;
case 0x56977a:c.instructions+=3;goto B56977a;
case 0x56977f:c.instructions+=2;goto B56977f;
case 0x569784:c.instructions+=1;goto B569784;
case 0x569789:goto L569789;
case 0x56978c:c.instructions+=7;goto B56978c;
case 0x569792:c.instructions+=6;goto B569792;
case 0x569798:c.instructions+=5;goto B569798;
case 0x569799:c.instructions+=4;goto B569799;
case 0x56979e:c.instructions+=3;goto B56979e;
case 0x5697a3:c.instructions+=2;goto B5697a3;
case 0x5697a4:c.instructions+=1;goto B5697a4;
case 0x5697a9:goto L5697a9;
case 0x5697ac:c.instructions+=3;goto B5697ac;
case 0x5697ae:c.instructions+=2;goto B5697ae;
case 0x5697b0:c.instructions+=1;goto B5697b0;
case 0x5697b5:goto L5697b5;
case 0x5697b6:c.instructions+=4;goto B5697b6;
case 0x5697b7:c.instructions+=3;goto B5697b7;
case 0x5697b8:c.instructions+=2;goto B5697b8;
case 0x5697b9:c.instructions+=1;goto B5697b9;
case 0x5697bc:goto L5697bc;
case 0x5697bd:c.instructions+=5;goto B5697bd;
case 0x5697c1:c.instructions+=4;goto B5697c1;
case 0x5697c2:c.instructions+=3;goto B5697c2;
case 0x5697c3:c.instructions+=2;goto B5697c3;
case 0x5697c4:c.instructions+=1;goto B5697c4;
case 0x5697c7:goto L5697c7;
case 0x5697cd:c.instructions+=1;goto B5697cd;
case 0x5697d3:goto L5697d3;
case 0x5697d9:c.instructions+=1;goto B5697d9;
case 0x5697db:goto L5697db;
case 0x5697e1:c.instructions+=1;goto B5697e1;
case 0x5697e7:goto L5697e7;
case 0x5697e9:c.instructions+=2;goto B5697e9;
case 0x5697eb:c.instructions+=1;goto B5697eb;
case 0x5697f0:goto L5697f0;
case 0x5697f1:c.instructions+=4;goto B5697f1;
case 0x5697f2:c.instructions+=3;goto B5697f2;
case 0x5697f3:c.instructions+=2;goto B5697f3;
case 0x5697f4:c.instructions+=1;goto B5697f4;
case 0x5697f7:goto L5697f7;
case 0x5697fd:c.instructions+=5;goto B5697fd;
case 0x569800:c.instructions+=4;goto B569800;
case 0x569801:c.instructions+=3;goto B569801;
case 0x569803:c.instructions+=2;goto B569803;
case 0x569808:c.instructions+=1;goto B569808;
case 0x56980d:goto L56980d;
case 0x56980e:c.instructions+=3;goto B56980e;
case 0x569810:c.instructions+=2;goto B569810;
case 0x569815:c.instructions+=1;goto B569815;
case 0x56981a:goto L56981a;
case 0x56981f:c.instructions+=2;goto B56981f;
case 0x569824:c.instructions+=1;goto B569824;
case 0x569829:goto L569829;
case 0x56982b:c.instructions+=3;goto B56982b;
case 0x56982d:c.instructions+=2;goto B56982d;
case 0x569832:c.instructions+=1;goto B569832;
case 0x569837:goto L569837;
case 0x56983d:c.instructions+=4;goto B56983d;
case 0x569840:c.instructions+=3;goto B569840;
case 0x569845:c.instructions+=2;goto B569845;
case 0x569848:c.instructions+=1;goto B569848;
case 0x56984d:goto L56984d;
case 0x569852:c.instructions+=3;goto B569852;
case 0x569857:c.instructions+=2;goto B569857;
case 0x56985c:c.instructions+=1;goto B56985c;
case 0x569861:goto L569861;
case 0x569863:c.instructions+=3;goto B569863;
case 0x569865:c.instructions+=2;goto B569865;
case 0x56986b:c.instructions+=1;goto B56986b;
case 0x569870:goto L569870;
case 0x569871:c.instructions+=4;goto B569871;
case 0x569872:c.instructions+=3;goto B569872;
case 0x569873:c.instructions+=2;goto B569873;
case 0x569874:c.instructions+=1;goto B569874;
case 0x569877:goto L569877;
case 0x56987a:c.instructions+=3;goto B56987a;
case 0x56987d:c.instructions+=2;goto B56987d;
case 0x56987f:c.instructions+=1;goto B56987f;
case 0x569885:goto L569885;
case 0x56988b:c.instructions+=3;goto B56988b;
case 0x56988d:c.instructions+=2;goto B56988d;
case 0x56988f:c.instructions+=1;goto B56988f;
case 0x569895:goto L569895;
case 0x56989a:goto L56989a;
case 0x56989b:c.instructions+=4;goto B56989b;
case 0x56989c:c.instructions+=3;goto B56989c;
case 0x56989d:c.instructions+=2;goto B56989d;
case 0x56989e:c.instructions+=1;goto B56989e;
case 0x5698a1:goto L5698a1;
case 0x5698a7:c.instructions+=2;goto B5698a7;
case 0x5698a9:c.instructions+=1;goto B5698a9;
case 0x5698ab:goto L5698ab;
case 0x5698ad:c.instructions+=2;goto B5698ad;
case 0x5698af:c.instructions+=1;goto B5698af;
case 0x5698b4:goto L5698b4;
case 0x5698b5:c.instructions+=4;goto B5698b5;
case 0x5698b6:c.instructions+=3;goto B5698b6;
case 0x5698b7:c.instructions+=2;goto B5698b7;
case 0x5698b8:c.instructions+=1;goto B5698b8;
case 0x5698bb:goto L5698bb;
case 0x5698be:c.instructions+=4;goto B5698be;
case 0x5698c3:c.instructions+=3;goto B5698c3;
case 0x5698c8:c.instructions+=2;goto B5698c8;
case 0x5698c9:c.instructions+=1;goto B5698c9;
case 0x5698ce:goto L5698ce;
case 0x5698d1:c.instructions+=2;goto B5698d1;
case 0x5698d3:c.instructions+=1;goto B5698d3;
case 0x5698d9:goto L5698d9;
case 0x5698dc:c.instructions+=5;goto B5698dc;
case 0x5698de:c.instructions+=4;goto B5698de;
case 0x5698e3:c.instructions+=3;goto B5698e3;
case 0x5698e8:c.instructions+=2;goto B5698e8;
case 0x5698e9:c.instructions+=1;goto B5698e9;
case 0x5698ee:goto L5698ee;
case 0x5698f1:c.instructions+=5;goto B5698f1;
case 0x5698f2:c.instructions+=4;goto B5698f2;
case 0x5698f3:c.instructions+=3;goto B5698f3;
case 0x5698f4:c.instructions+=2;goto B5698f4;
case 0x5698f5:c.instructions+=1;goto B5698f5;
case 0x5698f8:goto L5698f8;
case 0x5698fe:c.instructions+=1;goto B5698fe;
case 0x569904:goto L569904;
case 0x56990a:goto L56990a;
case 0x569910:c.instructions+=1;goto B569910;
case 0x569916:goto L569916;
case 0x56991c:c.instructions+=1;goto B56991c;
case 0x569922:goto L569922;
case 0x569928:c.instructions+=1;goto B569928;
case 0x56992e:goto L56992e;
case 0x569931:c.instructions+=5;goto B569931;
case 0x569937:c.instructions+=4;goto B569937;
case 0x569939:c.instructions+=3;goto B569939;
case 0x56993c:c.instructions+=2;goto B56993c;
case 0x56993f:c.instructions+=1;goto B56993f;
case 0x569945:goto L569945;
case 0x569948:c.instructions+=2;goto B569948;
case 0x56994a:c.instructions+=1;goto B56994a;
case 0x569950:goto L569950;
case 0x569956:c.instructions+=1;goto B569956;
case 0x56995b:goto L56995b;
case 0x56995c:c.instructions+=1;goto B56995c;
case 0x569961:goto L569961;
case 0x569964:c.instructions+=5;goto B569964;
case 0x569967:c.instructions+=4;goto B569967;
case 0x569969:c.instructions+=3;goto B569969;
case 0x56996e:c.instructions+=2;goto B56996e;
case 0x569973:c.instructions+=1;goto B569973;
case 0x569975:goto L569975;
case 0x569978:c.instructions+=2;goto B569978;
case 0x56997b:c.instructions+=1;goto B56997b;
case 0x569980:goto L569980;
case 0x569981:c.instructions+=3;goto B569981;
case 0x569983:c.instructions+=2;goto B569983;
case 0x569988:c.instructions+=1;goto B569988;
case 0x56998d:goto L56998d;
case 0x56998e:c.instructions+=3;goto B56998e;
case 0x569990:c.instructions+=2;goto B569990;
case 0x569995:c.instructions+=1;goto B569995;
case 0x56999a:goto L56999a;
case 0x56999c:c.instructions+=3;goto B56999c;
case 0x56999e:c.instructions+=2;goto B56999e;
case 0x5699a3:c.instructions+=1;goto B5699a3;
case 0x5699a8:goto L5699a8;
case 0x5699ab:c.instructions+=4;goto B5699ab;
case 0x5699b0:c.instructions+=3;goto B5699b0;
case 0x5699b5:c.instructions+=2;goto B5699b5;
case 0x5699ba:c.instructions+=1;goto B5699ba;
case 0x5699bf:goto L5699bf;
case 0x5699c2:c.instructions+=6;goto B5699c2;
case 0x5699c5:c.instructions+=5;goto B5699c5;
case 0x5699c7:c.instructions+=4;goto B5699c7;
case 0x5699c9:c.instructions+=3;goto B5699c9;
case 0x5699ca:c.instructions+=2;goto B5699ca;
case 0x5699cc:c.instructions+=1;goto B5699cc;
case 0x5699d1:goto L5699d1;
case 0x5699d4:c.instructions+=1;goto B5699d4;
case 0x5699d6:goto L5699d6;
case 0x5699dc:c.instructions+=1;goto B5699dc;
case 0x5699e1:goto L5699e1;
case 0x5699e2:c.instructions+=3;goto B5699e2;
case 0x5699e4:c.instructions+=2;goto B5699e4;
case 0x5699e9:c.instructions+=1;goto B5699e9;
case 0x5699ee:goto L5699ee;
case 0x5699ef:c.instructions+=3;goto B5699ef;
case 0x5699f1:c.instructions+=2;goto B5699f1;
case 0x5699f6:c.instructions+=1;goto B5699f6;
case 0x5699fb:goto L5699fb;
case 0x5699fd:c.instructions+=3;goto B5699fd;
case 0x5699ff:c.instructions+=2;goto B5699ff;
case 0x569a04:c.instructions+=1;goto B569a04;
case 0x569a09:goto L569a09;
case 0x569a0c:c.instructions+=4;goto B569a0c;
case 0x569a11:c.instructions+=3;goto B569a11;
case 0x569a16:c.instructions+=2;goto B569a16;
case 0x569a1b:c.instructions+=1;goto B569a1b;
case 0x569a20:goto L569a20;
case 0x569a26:c.instructions+=5;goto B569a26;
case 0x569a28:c.instructions+=4;goto B569a28;
case 0x569a2a:c.instructions+=3;goto B569a2a;
case 0x569a2b:c.instructions+=2;goto B569a2b;
case 0x569a2d:c.instructions+=1;goto B569a2d;
case 0x569a32:goto L569a32;
case 0x569a35:goto L569a35;
case 0x569a36:c.instructions+=1;goto B569a36;
case 0x569a3b:goto L569a3b;
case 0x569a3e:c.instructions+=2;goto B569a3e;
case 0x569a40:c.instructions+=1;goto B569a40;
case 0x569a42:goto L569a42;
case 0x569a45:c.instructions+=3;goto B569a45;
case 0x569a48:c.instructions+=2;goto B569a48;
case 0x569a4a:c.instructions+=1;goto B569a4a;
case 0x569a50:goto L569a50;
case 0x569a52:c.instructions+=1;goto B569a52;
case 0x569a57:goto L569a57;
case 0x569a58:c.instructions+=4;goto B569a58;
case 0x569a59:c.instructions+=3;goto B569a59;
case 0x569a5a:c.instructions+=2;goto B569a5a;
case 0x569a5b:c.instructions+=1;goto B569a5b;
case 0x569a5e:goto L569a5e;
case 0x569a61:c.instructions+=3;goto B569a61;
case 0x569a66:c.instructions+=2;goto B569a66;
case 0x569a67:c.instructions+=1;goto B569a67;
case 0x569a6c:goto L569a6c;
case 0x569a6d:c.instructions+=2;goto B569a6d;
case 0x569a6f:c.instructions+=1;goto B569a6f;
case 0x569a74:goto L569a74;
case 0x569a77:c.instructions+=2;goto B569a77;
case 0x569a79:c.instructions+=1;goto B569a79;
case 0x569a7b:goto L569a7b;
case 0x569a7e:c.instructions+=3;goto B569a7e;
case 0x569a81:c.instructions+=2;goto B569a81;
case 0x569a83:c.instructions+=1;goto B569a83;
case 0x569a89:goto L569a89;
case 0x569a8b:c.instructions+=1;goto B569a8b;
case 0x569a90:goto L569a90;
case 0x569a91:c.instructions+=4;goto B569a91;
case 0x569a92:c.instructions+=3;goto B569a92;
case 0x569a93:c.instructions+=2;goto B569a93;
case 0x569a94:c.instructions+=1;goto B569a94;
case 0x569a97:goto L569a97;
case 0x569a98:c.instructions+=1;goto B569a98;
case 0x569a9d:goto L569a9d;
case 0x569aa0:c.instructions+=2;goto B569aa0;
case 0x569aa2:c.instructions+=1;goto B569aa2;
case 0x569aa4:goto L569aa4;
case 0x569aa7:c.instructions+=3;goto B569aa7;
case 0x569aaa:c.instructions+=2;goto B569aaa;
case 0x569aac:c.instructions+=1;goto B569aac;
case 0x569ab2:goto L569ab2;
case 0x569ab4:goto L569ab4;
case 0x569ab9:goto L569ab9;
case 0x569aba:c.instructions+=4;goto B569aba;
case 0x569abb:c.instructions+=3;goto B569abb;
case 0x569abc:c.instructions+=2;goto B569abc;
case 0x569abd:c.instructions+=1;goto B569abd;
case 0x569ac0:goto L569ac0;
case 0x569ac6:c.instructions+=1;goto B569ac6;
case 0x569acb:goto L569acb;
case 0x569ad1:c.instructions+=2;goto B569ad1;
case 0x569ad4:c.instructions+=1;goto B569ad4;
case 0x569ad6:goto L569ad6;
case 0x569ad9:c.instructions+=1;goto B569ad9;
case 0x569adb:goto L569adb;
case 0x569ae1:c.instructions+=4;goto B569ae1;
case 0x569ae7:c.instructions+=3;goto B569ae7;
case 0x569ae9:c.instructions+=2;goto B569ae9;
case 0x569aec:c.instructions+=1;goto B569aec;
case 0x569aee:goto L569aee;
case 0x569af3:c.instructions+=4;goto B569af3;
case 0x569af5:c.instructions+=3;goto B569af5;
case 0x569af6:c.instructions+=2;goto B569af6;
case 0x569af8:c.instructions+=1;goto B569af8;
case 0x569afd:goto L569afd;
case 0x569afe:c.instructions+=4;goto B569afe;
case 0x569aff:c.instructions+=3;goto B569aff;
case 0x569b00:c.instructions+=2;goto B569b00;
case 0x569b01:c.instructions+=1;goto B569b01;
case 0x569b04:goto L569b04;
case 0x569b0a:c.instructions+=3;goto B569b0a;
case 0x569b0c:c.instructions+=2;goto B569b0c;
case 0x569b0f:c.instructions+=1;goto B569b0f;
case 0x569b15:goto L569b15;
case 0x569b1a:goto L569b1a;
case 0x569b1b:c.instructions+=2;goto B569b1b;
case 0x569b1d:c.instructions+=1;goto B569b1d;
case 0x569b22:goto L569b22;
case 0x569b23:c.instructions+=4;goto B569b23;
case 0x569b24:c.instructions+=3;goto B569b24;
case 0x569b25:c.instructions+=2;goto B569b25;
case 0x569b26:c.instructions+=1;goto B569b26;
case 0x569b29:goto L569b29;
case 0x569b2b:c.instructions+=2;goto B569b2b;
case 0x569b2d:c.instructions+=1;goto B569b2d;
case 0x569b32:goto L569b32;
case 0x569b33:c.instructions+=4;goto B569b33;
case 0x569b34:c.instructions+=3;goto B569b34;
case 0x569b35:c.instructions+=2;goto B569b35;
case 0x569b36:c.instructions+=1;goto B569b36;
case 0x569b39:goto L569b39;
case 0x569b3f:c.instructions+=3;goto B569b3f;
case 0x569b41:c.instructions+=2;goto B569b41;
case 0x569b45:c.instructions+=1;goto B569b45;
case 0x569b4a:goto L569b4a;
case 0x569b4c:c.instructions+=1;goto B569b4c;
case 0x569b51:goto L569b51;
case 0x569b52:c.instructions+=5;goto B569b52;
case 0x569b56:c.instructions+=4;goto B569b56;
case 0x569b57:c.instructions+=3;goto B569b57;
case 0x569b58:c.instructions+=2;goto B569b58;
case 0x569b59:c.instructions+=1;goto B569b59;
case 0x569b5c:goto L569b5c;
case 0x569b62:c.instructions+=1;goto B569b62;
case 0x569b64:goto L569b64;
case 0x569b6a:c.instructions+=1;goto B569b6a;
case 0x569b6c:goto L569b6c;
case 0x569b72:c.instructions+=1;goto B569b72;
case 0x569b78:goto L569b78;
case 0x569b82:c.instructions+=1;goto B569b82;
case 0x569b88:goto L569b88;
case 0x569b8d:c.instructions+=1;goto B569b8d;
case 0x569b92:goto L569b92;
case 0x569b97:goto L569b97;
case 0x569b99:c.instructions+=1;goto B569b99;
case 0x569b9e:goto L569b9e;
case 0x569b9f:c.instructions+=4;goto B569b9f;
case 0x569ba0:c.instructions+=3;goto B569ba0;
case 0x569ba1:c.instructions+=2;goto B569ba1;
case 0x569ba2:c.instructions+=1;goto B569ba2;
case 0x569ba5:goto L569ba5;
case 0x569bab:c.instructions+=1;goto B569bab;
case 0x569bb0:goto L569bb0;
case 0x569bb1:c.instructions+=4;goto B569bb1;
case 0x569bb2:c.instructions+=3;goto B569bb2;
case 0x569bb3:c.instructions+=2;goto B569bb3;
case 0x569bb4:c.instructions+=1;goto B569bb4;
case 0x569bb7:goto L569bb7;
case 0x569bbd:c.instructions+=2;goto B569bbd;
case 0x569bbf:c.instructions+=1;goto B569bbf;
case 0x569bc5:goto L569bc5;
case 0x569bcb:c.instructions+=2;goto B569bcb;
case 0x569bce:c.instructions+=1;goto B569bce;
case 0x569bd3:goto L569bd3;
case 0x569bd4:c.instructions+=1;goto B569bd4;
case 0x569bd9:goto L569bd9;
case 0x569bdc:c.instructions+=5;goto B569bdc;
case 0x569bdf:c.instructions+=4;goto B569bdf;
case 0x569be1:c.instructions+=3;goto B569be1;
case 0x569be6:c.instructions+=2;goto B569be6;
case 0x569beb:c.instructions+=1;goto B569beb;
case 0x569bed:goto L569bed;
case 0x569bf0:c.instructions+=2;goto B569bf0;
case 0x569bf3:c.instructions+=1;goto B569bf3;
case 0x569bf8:goto L569bf8;
case 0x569bf9:c.instructions+=3;goto B569bf9;
case 0x569bfb:c.instructions+=2;goto B569bfb;
case 0x569c00:c.instructions+=1;goto B569c00;
case 0x569c05:goto L569c05;
case 0x569c06:c.instructions+=3;goto B569c06;
case 0x569c08:c.instructions+=2;goto B569c08;
case 0x569c0d:c.instructions+=1;goto B569c0d;
case 0x569c12:goto L569c12;
case 0x569c14:c.instructions+=3;goto B569c14;
case 0x569c16:c.instructions+=2;goto B569c16;
case 0x569c1b:c.instructions+=1;goto B569c1b;
case 0x569c20:goto L569c20;
case 0x569c23:c.instructions+=4;goto B569c23;
case 0x569c28:c.instructions+=3;goto B569c28;
case 0x569c2d:c.instructions+=2;goto B569c2d;
case 0x569c32:c.instructions+=1;goto B569c32;
case 0x569c37:goto L569c37;
case 0x569c3a:c.instructions+=6;goto B569c3a;
case 0x569c3d:c.instructions+=5;goto B569c3d;
case 0x569c3f:c.instructions+=4;goto B569c3f;
case 0x569c41:c.instructions+=3;goto B569c41;
case 0x569c42:c.instructions+=2;goto B569c42;
case 0x569c44:c.instructions+=1;goto B569c44;
case 0x569c49:goto L569c49;
case 0x569c4c:c.instructions+=5;goto B569c4c;
case 0x569c4d:c.instructions+=4;goto B569c4d;
case 0x569c4e:c.instructions+=3;goto B569c4e;
case 0x569c4f:c.instructions+=2;goto B569c4f;
case 0x569c50:c.instructions+=1;goto B569c50;
case 0x569c53:goto L569c53;
case 0x569c59:c.instructions+=1;goto B569c59;
case 0x569c5e:goto L569c5e;
case 0x569c5f:c.instructions+=3;goto B569c5f;
case 0x569c61:c.instructions+=2;goto B569c61;
case 0x569c66:c.instructions+=1;goto B569c66;
case 0x569c6b:goto L569c6b;
case 0x569c6c:c.instructions+=3;goto B569c6c;
case 0x569c6e:c.instructions+=2;goto B569c6e;
case 0x569c73:c.instructions+=1;goto B569c73;
case 0x569c78:goto L569c78;
case 0x569c7a:c.instructions+=3;goto B569c7a;
case 0x569c7c:c.instructions+=2;goto B569c7c;
case 0x569c81:c.instructions+=1;goto B569c81;
case 0x569c86:goto L569c86;
case 0x569c89:c.instructions+=4;goto B569c89;
case 0x569c8e:c.instructions+=3;goto B569c8e;
case 0x569c93:c.instructions+=2;goto B569c93;
case 0x569c98:c.instructions+=1;goto B569c98;
case 0x569c9d:goto L569c9d;
case 0x569ca3:c.instructions+=5;goto B569ca3;
case 0x569ca5:c.instructions+=4;goto B569ca5;
case 0x569ca7:c.instructions+=3;goto B569ca7;
case 0x569ca8:c.instructions+=2;goto B569ca8;
case 0x569caa:c.instructions+=1;goto B569caa;
case 0x569caf:goto L569caf;
case 0x569cb2:goto L569cb2;
case 0x569cb3:c.instructions+=4;goto B569cb3;
case 0x569cb4:c.instructions+=3;goto B569cb4;
case 0x569cb5:c.instructions+=2;goto B569cb5;
case 0x569cb6:c.instructions+=1;goto B569cb6;
case 0x569cc0:goto L569cc0;
case 0x569cc2:c.instructions+=12;goto B569cc2;
case 0x569cc7:c.instructions+=11;goto B569cc7;
case 0x569ccd:c.instructions+=10;goto B569ccd;
case 0x569cce:c.instructions+=9;goto B569cce;
case 0x569cd5:c.instructions+=8;goto B569cd5;
case 0x569cd6:c.instructions+=7;goto B569cd6;
case 0x569cda:c.instructions+=6;goto B569cda;
case 0x569cdb:c.instructions+=5;goto B569cdb;
case 0x569cdc:c.instructions+=4;goto B569cdc;
case 0x569cde:c.instructions+=3;goto B569cde;
case 0x569cdf:c.instructions+=2;goto B569cdf;
case 0x569ce3:c.instructions+=1;goto B569ce3;
case 0x569ce8:goto L569ce8;
case 0x569cee:c.instructions+=52;goto B569cee;
case 0x569cf0:c.instructions+=51;goto B569cf0;
case 0x569cf5:c.instructions+=50;goto B569cf5;
case 0x569cfa:c.instructions+=49;goto B569cfa;
case 0x569cff:c.instructions+=48;goto B569cff;
case 0x569d03:c.instructions+=47;goto B569d03;
case 0x569d09:c.instructions+=46;goto B569d09;
case 0x569d0f:c.instructions+=45;goto B569d0f;
case 0x569d15:c.instructions+=44;goto B569d15;
case 0x569d1b:c.instructions+=43;goto B569d1b;
case 0x569d21:c.instructions+=42;goto B569d21;
case 0x569d27:c.instructions+=41;goto B569d27;
case 0x569d2d:c.instructions+=40;goto B569d2d;
case 0x569d33:c.instructions+=39;goto B569d33;
case 0x569d39:c.instructions+=38;goto B569d39;
case 0x569d3f:c.instructions+=37;goto B569d3f;
case 0x569d45:c.instructions+=36;goto B569d45;
case 0x569d4b:c.instructions+=35;goto B569d4b;
case 0x569d51:c.instructions+=34;goto B569d51;
case 0x569d57:c.instructions+=33;goto B569d57;
case 0x569d5d:c.instructions+=32;goto B569d5d;
case 0x569d63:c.instructions+=31;goto B569d63;
case 0x569d69:c.instructions+=30;goto B569d69;
case 0x569d6f:c.instructions+=29;goto B569d6f;
case 0x569d75:c.instructions+=28;goto B569d75;
case 0x569d7b:c.instructions+=27;goto B569d7b;
case 0x569d81:c.instructions+=26;goto B569d81;
case 0x569d87:c.instructions+=25;goto B569d87;
case 0x569d8d:c.instructions+=24;goto B569d8d;
case 0x569d93:c.instructions+=23;goto B569d93;
case 0x569d99:c.instructions+=22;goto B569d99;
case 0x569d9f:c.instructions+=21;goto B569d9f;
case 0x569da5:c.instructions+=20;goto B569da5;
case 0x569dab:c.instructions+=19;goto B569dab;
case 0x569db1:c.instructions+=18;goto B569db1;
case 0x569db7:c.instructions+=17;goto B569db7;
case 0x569dbd:c.instructions+=16;goto B569dbd;
case 0x569dc3:c.instructions+=15;goto B569dc3;
case 0x569dc9:c.instructions+=14;goto B569dc9;
case 0x569dcf:c.instructions+=13;goto B569dcf;
case 0x569dd5:c.instructions+=12;goto B569dd5;
case 0x569ddb:c.instructions+=11;goto B569ddb;
case 0x569de1:c.instructions+=10;goto B569de1;
case 0x569de7:c.instructions+=9;goto B569de7;
case 0x569dee:c.instructions+=8;goto B569dee;
case 0x569df4:c.instructions+=7;goto B569df4;
case 0x569dfa:c.instructions+=6;goto B569dfa;
case 0x569dfc:c.instructions+=5;goto B569dfc;
case 0x569e01:c.instructions+=4;goto B569e01;
case 0x569e07:c.instructions+=3;goto B569e07;
case 0x569e0d:c.instructions+=2;goto B569e0d;
case 0x569e17:c.instructions+=1;goto B569e17;
case 0x569e1c:goto L569e1c;
case 0x569e1e:c.instructions+=1;goto B569e1e;
case 0x569e23:goto L569e23;
case 0x569e29:c.instructions+=2;goto B569e29;
case 0x569e2a:c.instructions+=1;goto B569e2a;
case 0x569e2f:goto L569e2f;
case 0x569e32:c.instructions+=2;goto B569e32;
case 0x569e34:c.instructions+=1;goto B569e34;
case 0x569e36:goto L569e36;
case 0x569e39:c.instructions+=3;goto B569e39;
case 0x569e3c:c.instructions+=2;goto B569e3c;
case 0x569e3f:c.instructions+=1;goto B569e3f;
case 0x569e42:goto L569e42;
case 0x569e46:c.instructions+=6;goto B569e46;
case 0x569e48:c.instructions+=5;goto B569e48;
case 0x569e49:c.instructions+=4;goto B569e49;
case 0x569e4a:c.instructions+=3;goto B569e4a;
case 0x569e51:c.instructions+=2;goto B569e51;
case 0x569e54:c.instructions+=1;goto B569e54;
case 0x569e60:goto L569e60;
case 0x569e61:c.instructions+=2;goto B569e61;
case 0x569e63:c.instructions+=1;goto B569e63;
case 0x569e68:goto L569e68;
case 0x569e6d:c.instructions+=1;goto B569e6d;
case 0x569e6f:goto L569e6f;
case 0x569e70:c.instructions+=1;goto B569e70;
case 0x569e75:goto L569e75;
case 0x569e78:goto L569e78;
case 0x569e7a:c.instructions+=2;goto B569e7a;
case 0x569e7b:c.instructions+=1;goto B569e7b;
case 0x569e80:goto L569e80;
case 0x569e82:c.instructions+=15;goto B569e82;
case 0x569e87:c.instructions+=14;goto B569e87;
case 0x569e8d:c.instructions+=13;goto B569e8d;
case 0x569e8e:c.instructions+=12;goto B569e8e;
case 0x569e95:c.instructions+=11;goto B569e95;
case 0x569e96:c.instructions+=10;goto B569e96;
case 0x569e97:c.instructions+=9;goto B569e97;
case 0x569e99:c.instructions+=8;goto B569e99;
case 0x569e9e:c.instructions+=7;goto B569e9e;
case 0x569ea4:c.instructions+=6;goto B569ea4;
case 0x569eaa:c.instructions+=5;goto B569eaa;
case 0x569eae:c.instructions+=4;goto B569eae;
case 0x569eb4:c.instructions+=3;goto B569eb4;
case 0x569eb7:c.instructions+=2;goto B569eb7;
case 0x569ebf:c.instructions+=1;goto B569ebf;
case 0x569ec4:goto L569ec4;
case 0x569ec8:c.instructions+=5;goto B569ec8;
case 0x569ece:c.instructions+=4;goto B569ece;
case 0x569ecf:c.instructions+=3;goto B569ecf;
case 0x569ed6:c.instructions+=2;goto B569ed6;
case 0x569ed9:c.instructions+=1;goto B569ed9;
case 0x569ee0:goto L569ee0;
case 0x569ee1:c.instructions+=10;goto B569ee1;
case 0x569ee3:c.instructions+=9;goto B569ee3;
case 0x569ee8:c.instructions+=8;goto B569ee8;
case 0x569eea:c.instructions+=7;goto B569eea;
case 0x569eeb:c.instructions+=6;goto B569eeb;
case 0x569eee:c.instructions+=5;goto B569eee;
case 0x569eef:c.instructions+=4;goto B569eef;
case 0x569ef0:c.instructions+=3;goto B569ef0;
case 0x569ef3:c.instructions+=2;goto B569ef3;
case 0x569ef5:c.instructions+=1;goto B569ef5;
case 0x569ef7:goto L569ef7;
case 0x569efd:c.instructions+=2;goto B569efd;
case 0x569eff:c.instructions+=1;goto B569eff;
case 0x569f01:goto L569f01;
case 0x569f04:c.instructions+=7;goto B569f04;
case 0x569f07:c.instructions+=6;goto B569f07;
case 0x569f08:c.instructions+=5;goto B569f08;
case 0x569f09:c.instructions+=4;goto B569f09;
case 0x569f0a:c.instructions+=3;goto B569f0a;
case 0x569f0b:c.instructions+=2;goto B569f0b;
case 0x569f0d:c.instructions+=1;goto B569f0d;
case 0x569f12:goto L569f12;
case 0x569f18:c.instructions+=1;goto B569f18;
case 0x569f1e:goto L569f1e;
case 0x569f24:goto L569f24;
case 0x569f2a:c.instructions+=1;goto B569f2a;
case 0x569f30:goto L569f30;
case 0x569f36:goto L569f36;
case 0x569f3c:c.instructions+=1;goto B569f3c;
case 0x569f42:goto L569f42;
case 0x569f48:c.instructions+=1;goto B569f48;
case 0x569f4a:goto L569f4a;
case 0x569f50:c.instructions+=1;goto B569f50;
case 0x569f56:goto L569f56;
case 0x569f59:c.instructions+=5;goto B569f59;
case 0x569f5c:c.instructions+=4;goto B569f5c;
case 0x569f5e:c.instructions+=3;goto B569f5e;
case 0x569f5f:c.instructions+=2;goto B569f5f;
case 0x569f60:c.instructions+=1;goto B569f60;
case 0x569f63:goto L569f63;
case 0x569f64:c.instructions+=4;goto B569f64;
case 0x569f65:c.instructions+=3;goto B569f65;
case 0x569f66:c.instructions+=2;goto B569f66;
case 0x569f67:c.instructions+=1;goto B569f67;
case 0x569f6a:goto L569f6a;
case 0x569f6f:goto L569f6f;
case 0x569f74:goto L569f74;
case 0x569f76:c.instructions+=1;goto B569f76;
case 0x569f7b:goto L569f7b;
case 0x569f80:c.instructions+=3;goto B569f80;
case 0x569f83:c.instructions+=2;goto B569f83;
case 0x569f85:c.instructions+=1;goto B569f85;
case 0x569f87:goto L569f87;
case 0x569f8d:c.instructions+=3;goto B569f8d;
case 0x569f8e:c.instructions+=2;goto B569f8e;
case 0x569f93:c.instructions+=1;goto B569f93;
case 0x569f98:goto L569f98;
case 0x569f9b:c.instructions+=3;goto B569f9b;
case 0x569f9d:c.instructions+=2;goto B569f9d;
case 0x569fa4:c.instructions+=1;goto B569fa4;
case 0x569fa9:goto L569fa9;
case 0x569faa:c.instructions+=4;goto B569faa;
case 0x569fab:c.instructions+=3;goto B569fab;
case 0x569fac:c.instructions+=2;goto B569fac;
case 0x569fad:c.instructions+=1;goto B569fad;
case 0x569fb0:goto L569fb0;
case 0x569fb2:c.instructions+=1;goto B569fb2;
case 0x569fb7:goto L569fb7;
case 0x569fb8:c.instructions+=2;goto B569fb8;
case 0x569fbd:c.instructions+=1;goto B569fbd;
case 0x569fc2:goto L569fc2;
case 0x569fc4:c.instructions+=2;goto B569fc4;
case 0x569fc6:c.instructions+=1;goto B569fc6;
case 0x569fcb:goto L569fcb;
case 0x569fcc:c.instructions+=2;goto B569fcc;
case 0x569fd1:c.instructions+=1;goto B569fd1;
case 0x569fd6:goto L569fd6;
case 0x569fdc:c.instructions+=6;goto B569fdc;
case 0x569fdf:c.instructions+=5;goto B569fdf;
case 0x569fe0:c.instructions+=4;goto B569fe0;
case 0x569fe5:c.instructions+=3;goto B569fe5;
case 0x569fea:c.instructions+=2;goto B569fea;
case 0x569feb:c.instructions+=1;goto B569feb;
case 0x569ff0:goto L569ff0;
case 0x569ff6:c.instructions+=2;goto B569ff6;
case 0x569ff7:c.instructions+=1;goto B569ff7;
case 0x569ffc:goto L569ffc;
case 0x569fff:c.instructions+=1;goto B569fff;
default:missing_instruction(c.pc);}
B569000:L569000:{c.instructions+=1;NFSU2_TR(0x569000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569005ull));
TAIL_STATIC(0x55c230u,55c);
}
B569005:L569005:{c.instructions+=3;NFSU2_TR(0x569005);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569006:{NFSU2_TR(0x569006);
w4(R+4,u32(0x838980ull));
}
B56900b:{NFSU2_TR(0x56900b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569010ull));
TAIL_STATIC(0x521280u,521);
}
B569010:L569010:{c.instructions+=2;NFSU2_TR(0x569010);
__builtin_memmove((R+4),(R+24),4);
}
B569012:{NFSU2_TR(0x569012);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569017ull));
TAIL_STATIC(0x560c40u,560);
}
B569017:L569017:{c.instructions+=2;NFSU2_TR(0x569017);
__builtin_memmove((R+4),(R+24),4);
}
B569019:{NFSU2_TR(0x569019);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56901eull));
TAIL_STATIC(0x560ae0u,560);
}
B56901e:L56901e:{c.instructions+=7;NFSU2_TR(0x56901e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56901f:{NFSU2_TR(0x56901f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x115ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B569026:{NFSU2_TR(0x569026);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56902d:{NFSU2_TR(0x56902d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56902e:{NFSU2_TR(0x56902e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56902f:{NFSU2_TR(0x56902f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569030:{NFSU2_TR(0x569030);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569033:L569033:{c.instructions+=1;NFSU2_TR(0x569033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569038ull));
TAIL_STATIC(0x438030u,438);
}
B569038:L569038:{c.instructions+=5;NFSU2_TR(0x569038);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56903b:{NFSU2_TR(0x56903b);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569040:{NFSU2_TR(0x569040);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569045:{NFSU2_TR(0x569045);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569046:{NFSU2_TR(0x569046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56904bull));
TAIL_STATIC(0x537d40u,537);
}
B56904b:L56904b:{c.instructions+=3;NFSU2_TR(0x56904b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56904e:{NFSU2_TR(0x56904e);
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
B569050:{NFSU2_TR(0x569050);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5694c9;}}
}
B569056:L569056:{c.instructions+=6;NFSU2_TR(0x569056);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569059:{NFSU2_TR(0x569059);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56905b:{NFSU2_TR(0x56905b);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569060:{NFSU2_TR(0x569060);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569065:{NFSU2_TR(0x569065);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569066:{NFSU2_TR(0x569066);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56906bull));
TAIL_STATIC(0x537c60u,537);
}
B56906b:L56906b:{c.instructions+=6;NFSU2_TR(0x56906b);
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
B56906e:{NFSU2_TR(0x56906e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56906f:{NFSU2_TR(0x56906f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569070:{NFSU2_TR(0x569070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569071:{NFSU2_TR(0x569071);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569072:{NFSU2_TR(0x569072);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569075:L569075:{c.instructions+=2;NFSU2_TR(0x569075);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56907a:{NFSU2_TR(0x56907a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5694c9;}}
}
B569080:L569080:{c.instructions+=3;NFSU2_TR(0x569080);
__builtin_memmove((R+0),gp(0x83854c),1);
}
B569085:{NFSU2_TR(0x569085);
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
B569087:{NFSU2_TR(0x569087);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5694c9;}}
}
B56908d:L56908d:{c.instructions+=3;NFSU2_TR(0x56908d);
u8 U[4];
w4(U+0,u32(0x799ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569092:{NFSU2_TR(0x569092);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569097:{NFSU2_TR(0x569097);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56909cull));
TAIL_STATIC(0x55dda0u,55d);
}
B56909c:L56909c:{c.instructions+=6;NFSU2_TR(0x56909c);
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
B56909f:{NFSU2_TR(0x56909f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5690a0:{NFSU2_TR(0x5690a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5690a1:{NFSU2_TR(0x5690a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5690a2:{NFSU2_TR(0x5690a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5690a3:{NFSU2_TR(0x5690a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5690a6:L5690a6:{c.instructions+=3;NFSU2_TR(0x5690a6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5690a8:{NFSU2_TR(0x5690a8);
__builtin_memmove((R+4),(R+24),4);
}
B5690aa:{NFSU2_TR(0x5690aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5690afull));
TAIL_STATIC(0x560920u,560);
}
B5690af:L5690af:{c.instructions+=5;NFSU2_TR(0x5690af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5690b0:{NFSU2_TR(0x5690b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5690b1:{NFSU2_TR(0x5690b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5690b2:{NFSU2_TR(0x5690b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5690b3:{NFSU2_TR(0x5690b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5690b6:L5690b6:{c.instructions+=2;NFSU2_TR(0x5690b6);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5690bb:{NFSU2_TR(0x5690bb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5691f8;}}
}
B5690c1:L5690c1:{c.instructions+=1;NFSU2_TR(0x5690c1);
if(r1(R+518)){{goto L5691d1;}}
}
B5690c7:L5690c7:{c.instructions+=2;NFSU2_TR(0x5690c7);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xb4623f67ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb4623f67ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5690cc:{NFSU2_TR(0x5690cc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5691b8;}}
}
B5690d2:L5690d2:{c.instructions+=1;NFSU2_TR(0x5690d2);
if(r1(R+518)){{goto L5691c3;}}
}
B5690d8:L5690d8:{c.instructions+=2;NFSU2_TR(0x5690d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5690dd:{NFSU2_TR(0x5690dd);
if(r1(R+518)){{goto L5691d1;}}
}
B5690e3:L5690e3:{c.instructions+=2;NFSU2_TR(0x5690e3);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9803f6e2ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5690e8:{NFSU2_TR(0x5690e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5694c9;}}
}
B5690ee:L5690ee:{c.instructions+=2;NFSU2_TR(0x5690ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5690f4:{NFSU2_TR(0x5690f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5690f9ull));
TAIL_STATIC(0x538130u,538);
}
B5690f9:L5690f9:{c.instructions+=6;NFSU2_TR(0x5690f9);
{u32 ea_=u32(u32(8872940u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5690ff:{NFSU2_TR(0x5690ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569105:{NFSU2_TR(0x569105);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B56910b:{NFSU2_TR(0x56910b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56910d:{NFSU2_TR(0x56910d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B569110:{NFSU2_TR(0x569110);
if(r1(R+514)){{goto L56911b;}}
}
B569112:L569112:{c.instructions+=3;NFSU2_TR(0x569112);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B569114:{NFSU2_TR(0x569114);
w4(R+4,u32(0x1ull));
}
B569119:{NFSU2_TR(0x569119);
{goto L56912b;}
}
B56911b:L56911b:{c.instructions+=4;NFSU2_TR(0x56911b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B569121:{NFSU2_TR(0x569121);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B569123:{NFSU2_TR(0x569123);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B569126:{NFSU2_TR(0x569126);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56912b;}}
}
B569128:L569128:{c.instructions+=1;NFSU2_TR(0x569128);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B56912b:L56912b:{c.instructions+=3;NFSU2_TR(0x56912b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((R+0),(U+0),4);
}
B56912e:{NFSU2_TR(0x56912e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B569131:{NFSU2_TR(0x569131);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L569189;}}
}
B569133:L569133:{c.instructions+=2;NFSU2_TR(0x569133);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5694e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B56913a:{NFSU2_TR(0x56913a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5694d0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B569141:L569141:{c.instructions+=3;NFSU2_TR(0x569141);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569142:{NFSU2_TR(0x569142);
__builtin_memmove((R+4),(R+24),4);
}
B569144:{NFSU2_TR(0x569144);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569149ull));
TAIL_STATIC(0x560920u,560);
}
B569149:L569149:{c.instructions+=1;NFSU2_TR(0x569149);
{goto L569189;}
}
B56914b:L56914b:{c.instructions+=4;NFSU2_TR(0x56914b);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B569150:{NFSU2_TR(0x569150);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B569152:{NFSU2_TR(0x569152);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B569154:{NFSU2_TR(0x569154);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L569189;}}
}
B569156:L569156:{c.instructions+=3;NFSU2_TR(0x569156);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569158:{NFSU2_TR(0x569158);
__builtin_memmove((R+4),(R+24),4);
}
B56915a:{NFSU2_TR(0x56915a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56915full));
TAIL_STATIC(0x560920u,560);
}
B56915f:L56915f:{c.instructions+=4;NFSU2_TR(0x56915f);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B569164:{NFSU2_TR(0x569164);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B569165:{NFSU2_TR(0x569165);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B569167:{NFSU2_TR(0x569167);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x569156u);}goto L569156;}}
}
B569169:L569169:{c.instructions+=1;NFSU2_TR(0x569169);
{goto L569189;}
}
B56916b:L56916b:{c.instructions+=4;NFSU2_TR(0x56916b);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B569170:{NFSU2_TR(0x569170);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B569172:{NFSU2_TR(0x569172);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B569174:{NFSU2_TR(0x569174);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L569189;}}
}
B569176:L569176:{c.instructions+=3;NFSU2_TR(0x569176);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569178:{NFSU2_TR(0x569178);
__builtin_memmove((R+4),(R+24),4);
}
B56917a:{NFSU2_TR(0x56917a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56917full));
TAIL_STATIC(0x560920u,560);
}
B56917f:L56917f:{c.instructions+=4;NFSU2_TR(0x56917f);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B569184:{NFSU2_TR(0x569184);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B569185:{NFSU2_TR(0x569185);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B569187:{NFSU2_TR(0x569187);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x569176u);}goto L569176;}}
}
B569189:L569189:{c.instructions+=3;NFSU2_TR(0x569189);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56918f:{NFSU2_TR(0x56918f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569190:{NFSU2_TR(0x569190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569195ull));
TAIL_STATIC(0x52d090u,52d);
}
B569195:L569195:{c.instructions+=3;NFSU2_TR(0x569195);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B569198:{NFSU2_TR(0x569198);
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
B56919a:{NFSU2_TR(0x56919a);
if(r1(R+518)){{goto L5694c9;}}
}
B5691a0:L5691a0:{c.instructions+=4;NFSU2_TR(0x5691a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5691a3:{NFSU2_TR(0x5691a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5691a4:{NFSU2_TR(0x5691a4);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5691a9:{NFSU2_TR(0x5691a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5691aeull));
TAIL_STATIC(0x55dda0u,55d);
}
B5691ae:L5691ae:{c.instructions+=6;NFSU2_TR(0x5691ae);
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
B5691b1:{NFSU2_TR(0x5691b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5691b2:{NFSU2_TR(0x5691b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5691b3:{NFSU2_TR(0x5691b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5691b4:{NFSU2_TR(0x5691b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5691b5:{NFSU2_TR(0x5691b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5691b8:L5691b8:{c.instructions+=2;NFSU2_TR(0x5691b8);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb4edeb6dull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb4edeb6dull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb4edeb6dull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5691bd:{NFSU2_TR(0x5691bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5694c9;}}
}
B5691c3:L5691c3:{c.instructions+=2;NFSU2_TR(0x5691c3);
__builtin_memmove((R+4),(R+24),4);
}
B5691c5:{NFSU2_TR(0x5691c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5691caull));
TAIL_STATIC(0x560c40u,560);
}
B5691ca:L5691ca:{c.instructions+=5;NFSU2_TR(0x5691ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5691cb:{NFSU2_TR(0x5691cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5691cc:{NFSU2_TR(0x5691cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5691cd:{NFSU2_TR(0x5691cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5691ce:{NFSU2_TR(0x5691ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5691d1:L5691d1:{c.instructions+=3;NFSU2_TR(0x5691d1);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5691d6:{NFSU2_TR(0x5691d6);
w4(R+4,u32(0x8389d0ull));
}
B5691db:{NFSU2_TR(0x5691db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5691e0ull));
TAIL_STATIC(0x413440u,413);
}
B5691e0:L5691e0:{c.instructions+=4;NFSU2_TR(0x5691e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5691e2:{NFSU2_TR(0x5691e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5691e4:{NFSU2_TR(0x5691e4);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5691e9:{NFSU2_TR(0x5691e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5691eeull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B5691ee:L5691ee:{c.instructions+=6;NFSU2_TR(0x5691ee);
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
B5691f1:{NFSU2_TR(0x5691f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5691f2:{NFSU2_TR(0x5691f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5691f3:{NFSU2_TR(0x5691f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5691f4:{NFSU2_TR(0x5691f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5691f5:{NFSU2_TR(0x5691f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5691f8:L5691f8:{c.instructions+=2;NFSU2_TR(0x5691f8);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xd871b0a4ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd871b0a4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5691fd:{NFSU2_TR(0x5691fd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5694b1;}}
}
B569203:L569203:{c.instructions+=1;NFSU2_TR(0x569203);
if(r1(R+518)){{goto L569486;}}
}
B569209:L569209:{c.instructions+=2;NFSU2_TR(0x569209);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc519bfc0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56920e:{NFSU2_TR(0x56920e);
if(r1(R+518)){{goto L569305;}}
}
B569214:L569214:{c.instructions+=2;NFSU2_TR(0x569214);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B569219:{NFSU2_TR(0x569219);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5694c9;}}
}
B56921f:L56921f:{c.instructions+=3;NFSU2_TR(0x56921f);
__builtin_memmove((R+0),gp(0x838558),1);
}
B569224:{NFSU2_TR(0x569224);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B569226:{NFSU2_TR(0x569226);
if(r1(R+518)){{goto L56926f;}}
}
B569228:L569228:{c.instructions+=3;NFSU2_TR(0x569228);
__builtin_memmove((R+0),gp(0x7fa208),4);
}
B56922d:{NFSU2_TR(0x56922d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B569230:{NFSU2_TR(0x569230);
if(r1(R+518)){{goto L56926f;}}
}
B569232:L569232:{c.instructions+=2;NFSU2_TR(0x569232);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569233:{NFSU2_TR(0x569233);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569238ull));
TAIL_STATIC(0x4c1810u,4c1);
}
B569238:L569238:{c.instructions+=3;NFSU2_TR(0x569238);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56923b:{NFSU2_TR(0x56923b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56923e:{NFSU2_TR(0x56923e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56926f;}}
}
B569240:L569240:{c.instructions+=6;NFSU2_TR(0x569240);
__builtin_memmove((R+8),gp(0x838554),4);
}
B569246:{NFSU2_TR(0x569246);
__builtin_memmove((R+0),gp(0x838550),4);
}
B56924b:{NFSU2_TR(0x56924b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56924c:{NFSU2_TR(0x56924c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56924d:{NFSU2_TR(0x56924d);
w4(R+4,u32(0x838980ull));
}
B569252:{NFSU2_TR(0x569252);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569257ull));
TAIL_STATIC(0x55c170u,55c);
}
B569257:L569257:{c.instructions+=4;NFSU2_TR(0x569257);
__builtin_memmove((R+4),gp(0x838550),4);
}
B56925d:{NFSU2_TR(0x56925d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56925e:{NFSU2_TR(0x56925e);
w4(R+4,u32(0x8389d0ull));
}
B569263:{NFSU2_TR(0x569263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569268ull));
TAIL_STATIC(0x6102f0u,610);
}
B569268:L569268:{c.instructions+=1;NFSU2_TR(0x569268);
s1(0x838558,u8(0x0ull));
}
B56926f:L56926f:{c.instructions+=3;NFSU2_TR(0x56926f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B569275:{NFSU2_TR(0x569275);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B569277:{NFSU2_TR(0x569277);
if(r1(R+518)){{goto L5692db;}}
}
B569279:L569279:{c.instructions+=1;NFSU2_TR(0x569279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56927eull));
TAIL_STATIC(0x438030u,438);
}
B56927e:L56927e:{c.instructions+=3;NFSU2_TR(0x56927e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x116ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B569284:{NFSU2_TR(0x569284);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B569286:{NFSU2_TR(0x569286);
if(r1(R+518)){{goto L56929d;}}
}
B569288:L569288:{c.instructions+=3;NFSU2_TR(0x569288);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B56928e:{NFSU2_TR(0x56928e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569291:{NFSU2_TR(0x569291);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569296ull));
TAIL_STATIC(0x458c40u,458);
}
B569296:L569296:{c.instructions+=1;NFSU2_TR(0x569296);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x116ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56929d:L56929d:{c.instructions+=3;NFSU2_TR(0x56929d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x115ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5692a3:{NFSU2_TR(0x5692a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5692a5:{NFSU2_TR(0x5692a5);
if(r1(R+518)){{goto L5692b4;}}
}
B5692a7:L5692a7:{c.instructions+=4;NFSU2_TR(0x5692a7);
__builtin_memmove((R+0),gp(0x7fa1c0),4);
}
B5692ac:{NFSU2_TR(0x5692ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5692ad:{NFSU2_TR(0x5692ad);
u8 U[4];
w4(U+0,u32(0x8acaa8dfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5692b2:{NFSU2_TR(0x5692b2);
{goto L5692c0;}
}
B5692b4:L5692b4:{c.instructions+=3;NFSU2_TR(0x5692b4);
__builtin_memmove((R+4),gp(0x7fa1c0),4);
}
B5692ba:{NFSU2_TR(0x5692ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5692bb:{NFSU2_TR(0x5692bb);
u8 U[4];
w4(U+0,u32(0x9fbbd1d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5692c0:L5692c0:{c.instructions+=1;NFSU2_TR(0x5692c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5692c5ull));
TAIL_STATIC(0x55dda0u,55d);
}
B5692c5:L5692c5:{c.instructions+=4;NFSU2_TR(0x5692c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5692c8:{NFSU2_TR(0x5692c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5692cb:{NFSU2_TR(0x5692cb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5692cc:{NFSU2_TR(0x5692cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5692d1ull));
TAIL_STATIC(0x5379a0u,537);
}
B5692d1:L5692d1:{c.instructions+=6;NFSU2_TR(0x5692d1);
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
B5692d4:{NFSU2_TR(0x5692d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5692d5:{NFSU2_TR(0x5692d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5692d6:{NFSU2_TR(0x5692d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5692d7:{NFSU2_TR(0x5692d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5692d8:{NFSU2_TR(0x5692d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5692db:L5692db:{c.instructions+=3;NFSU2_TR(0x5692db);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x116ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5692e1:{NFSU2_TR(0x5692e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5692e3:{NFSU2_TR(0x5692e3);
if(r1(R+518)){{goto L5692f6;}}
}
B5692e5:L5692e5:{c.instructions+=4;NFSU2_TR(0x5692e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5692e7:{NFSU2_TR(0x5692e7);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5692ec:{NFSU2_TR(0x5692ec);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5692ee:{NFSU2_TR(0x5692ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5692f3ull));
TAIL_STATIC(0x4c1920u,4c1);
}
B5692f3:L5692f3:{c.instructions+=1;NFSU2_TR(0x5692f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5692f6:L5692f6:{c.instructions+=2;NFSU2_TR(0x5692f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5692f9:{NFSU2_TR(0x5692f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5692feull));
TAIL_STATIC(0x538760u,538);
}
B5692fe:L5692fe:{c.instructions+=5;NFSU2_TR(0x5692fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5692ff:{NFSU2_TR(0x5692ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569300:{NFSU2_TR(0x569300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569301:{NFSU2_TR(0x569301);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569302:{NFSU2_TR(0x569302);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569305:L569305:{c.instructions+=4;NFSU2_TR(0x569305);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56930b:{NFSU2_TR(0x56930b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56930e:{NFSU2_TR(0x56930e);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B569311:{NFSU2_TR(0x569311);
if(r1(R+518)){{goto L569426;}}
}
B569317:L569317:{c.instructions+=2;NFSU2_TR(0x569317);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x97ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B56931c:{NFSU2_TR(0x56931c);
if(r1(R+518)){{goto L569366;}}
}
B56931e:L56931e:{c.instructions+=2;NFSU2_TR(0x56931e);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B569321:{NFSU2_TR(0x569321);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5694c9;}}
}
B569327:L569327:{c.instructions+=6;NFSU2_TR(0x569327);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x116ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B56932d:{NFSU2_TR(0x56932d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56932f:{NFSU2_TR(0x56932f);
__builtin_memmove((R+0),(R+518),1);
}
B569332:{NFSU2_TR(0x569332);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B569334:{NFSU2_TR(0x569334);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x116ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56933a:{NFSU2_TR(0x56933a);
if(r1(R+518)){{goto L569351;}}
}
B56933c:L56933c:{c.instructions+=3;NFSU2_TR(0x56933c);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B569342:{NFSU2_TR(0x569342);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569345:{NFSU2_TR(0x569345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56934aull));
TAIL_STATIC(0x458b30u,458);
}
B56934a:L56934a:{c.instructions+=5;NFSU2_TR(0x56934a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56934b:{NFSU2_TR(0x56934b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56934c:{NFSU2_TR(0x56934c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56934d:{NFSU2_TR(0x56934d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56934e:{NFSU2_TR(0x56934e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569351:L569351:{c.instructions+=3;NFSU2_TR(0x569351);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B569357:{NFSU2_TR(0x569357);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56935a:{NFSU2_TR(0x56935a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56935full));
TAIL_STATIC(0x458c40u,458);
}
B56935f:L56935f:{c.instructions+=5;NFSU2_TR(0x56935f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569360:{NFSU2_TR(0x569360);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569361:{NFSU2_TR(0x569361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569362:{NFSU2_TR(0x569362);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569363:{NFSU2_TR(0x569363);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569366:L569366:{c.instructions+=1;NFSU2_TR(0x569366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56936bull));
TAIL_STATIC(0x4c2030u,4c2);
}
B56936b:L56936b:{c.instructions+=3;NFSU2_TR(0x56936b);
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
B56936d:{NFSU2_TR(0x56936d);
s1(0x838559,u8(0x0ull));
}
B569374:{NFSU2_TR(0x569374);
if(r1(R+518)){{goto L5693d0;}}
}
B569376:L569376:{c.instructions+=5;NFSU2_TR(0x569376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56937c:{NFSU2_TR(0x56937c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56937f:{NFSU2_TR(0x56937f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569380:{NFSU2_TR(0x569380);
s1(0x838559,u8(0x1ull));
}
B569387:{NFSU2_TR(0x569387);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56938cull));
TAIL_STATIC(0x4c18b0u,4c1);
}
B56938c:L56938c:{c.instructions+=3;NFSU2_TR(0x56938c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56938f:{NFSU2_TR(0x56938f);
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
B569391:{NFSU2_TR(0x569391);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56939f;}}
}
B569393:L569393:{c.instructions+=6;NFSU2_TR(0x569393);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569394:{NFSU2_TR(0x569394);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569395:{NFSU2_TR(0x569395);
__builtin_memmove(gp(0x83855a),(R+0),1);
}
B56939a:{NFSU2_TR(0x56939a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56939b:{NFSU2_TR(0x56939b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56939c:{NFSU2_TR(0x56939c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56939f:L56939f:{c.instructions+=4;NFSU2_TR(0x56939f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5693a5:{NFSU2_TR(0x5693a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5693a8:{NFSU2_TR(0x5693a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5693a9:{NFSU2_TR(0x5693a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5693aeull));
TAIL_STATIC(0x4c18b0u,4c1);
}
B5693ae:L5693ae:{c.instructions+=3;NFSU2_TR(0x5693ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5693b1:{NFSU2_TR(0x5693b1);
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
B5693b4:{NFSU2_TR(0x5693b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5693c2;}}
}
B5693b6:L5693b6:{c.instructions+=6;NFSU2_TR(0x5693b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5693b7:{NFSU2_TR(0x5693b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5693b8:{NFSU2_TR(0x5693b8);
__builtin_memmove(gp(0x83855a),(R+0),1);
}
B5693bd:{NFSU2_TR(0x5693bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5693be:{NFSU2_TR(0x5693be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5693bf:{NFSU2_TR(0x5693bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5693c2:L5693c2:{c.instructions+=6;NFSU2_TR(0x5693c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5693c3:{NFSU2_TR(0x5693c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5693c4:{NFSU2_TR(0x5693c4);
s1(0x838559,u8(0x0ull));
}
B5693cb:{NFSU2_TR(0x5693cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5693cc:{NFSU2_TR(0x5693cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5693cd:{NFSU2_TR(0x5693cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5693d0:L5693d0:{c.instructions+=5;NFSU2_TR(0x5693d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5693d6:{NFSU2_TR(0x5693d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5693d9:{NFSU2_TR(0x5693d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5693da:{NFSU2_TR(0x5693da);
w4(R+4,u32(0x8389d0ull));
}
B5693df:{NFSU2_TR(0x5693df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5693e4ull));
TAIL_STATIC(0x6102f0u,610);
}
B5693e4:L5693e4:{c.instructions+=4;NFSU2_TR(0x5693e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5693ea:{NFSU2_TR(0x5693ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5693ed:{NFSU2_TR(0x5693ed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5693f0:{NFSU2_TR(0x5693f0);
if(r1(R+518)){{goto L5693ff;}}
}
B5693f2:L5693f2:{c.instructions+=2;NFSU2_TR(0x5693f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5693f3:{NFSU2_TR(0x5693f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5693f8ull));
TAIL_STATIC(0x4c18b0u,4c1);
}
B5693f8:L5693f8:{c.instructions+=3;NFSU2_TR(0x5693f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5693fb:{NFSU2_TR(0x5693fb);
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
B5693fd:{NFSU2_TR(0x5693fd);
if(r1(R+518)){{goto L56944d;}}
}
B5693ff:L5693ff:{c.instructions+=4;NFSU2_TR(0x5693ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569405:{NFSU2_TR(0x569405);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569408:{NFSU2_TR(0x569408);
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
B56940b:{NFSU2_TR(0x56940b);
if(r1(R+518)){{goto L5694c9;}}
}
B569411:L569411:{c.instructions+=2;NFSU2_TR(0x569411);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569412:{NFSU2_TR(0x569412);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569417ull));
TAIL_STATIC(0x4c18b0u,4c1);
}
B569417:L569417:{c.instructions+=3;NFSU2_TR(0x569417);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56941a:{NFSU2_TR(0x56941a);
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
B56941d:{NFSU2_TR(0x56941d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5694c9;}}
}
B569423:L569423:{c.instructions+=2;NFSU2_TR(0x569423);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569424:{NFSU2_TR(0x569424);
{goto L56944f;}
}
B569426:L569426:{c.instructions+=3;NFSU2_TR(0x569426);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569428:{NFSU2_TR(0x569428);
w4(R+4,u32(0x8389d0ull));
}
B56942d:{NFSU2_TR(0x56942d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569432ull));
TAIL_STATIC(0x6102f0u,610);
}
B569432:L569432:{c.instructions+=4;NFSU2_TR(0x569432);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569438:{NFSU2_TR(0x569438);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56943b:{NFSU2_TR(0x56943b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56943e:{NFSU2_TR(0x56943e);
if(r1(R+518)){{goto L569467;}}
}
B569440:L569440:{c.instructions+=2;NFSU2_TR(0x569440);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569441:{NFSU2_TR(0x569441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569446ull));
TAIL_STATIC(0x4c18b0u,4c1);
}
B569446:L569446:{c.instructions+=3;NFSU2_TR(0x569446);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B569449:{NFSU2_TR(0x569449);
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
B56944b:{NFSU2_TR(0x56944b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569467;}}
}
B56944d:L56944d:{c.instructions+=1;NFSU2_TR(0x56944d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56944f:L56944f:{c.instructions+=5;NFSU2_TR(0x56944f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569455:{NFSU2_TR(0x569455);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B569458:{NFSU2_TR(0x569458);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569459:{NFSU2_TR(0x569459);
__builtin_memmove((R+4),(R+24),4);
}
B56945b:{NFSU2_TR(0x56945b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569460ull));
TAIL_STATIC(0x521040u,521);
}
B569460:L569460:{c.instructions+=5;NFSU2_TR(0x569460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569461:{NFSU2_TR(0x569461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569462:{NFSU2_TR(0x569462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569463:{NFSU2_TR(0x569463);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569464:{NFSU2_TR(0x569464);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569467:L569467:{c.instructions+=4;NFSU2_TR(0x569467);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56946d:{NFSU2_TR(0x56946d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569470:{NFSU2_TR(0x569470);
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
B569473:{NFSU2_TR(0x569473);
if(r1(R+518)){{goto L5694c9;}}
}
B569475:L569475:{c.instructions+=2;NFSU2_TR(0x569475);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569476:{NFSU2_TR(0x569476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56947bull));
TAIL_STATIC(0x4c18b0u,4c1);
}
B56947b:L56947b:{c.instructions+=3;NFSU2_TR(0x56947b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56947e:{NFSU2_TR(0x56947e);
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
B569481:{NFSU2_TR(0x569481);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5694c9;}}
}
B569483:L569483:{c.instructions+=2;NFSU2_TR(0x569483);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569484:{NFSU2_TR(0x569484);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56944fu);}goto L56944f;}
}
B569486:L569486:{c.instructions+=3;NFSU2_TR(0x569486);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56948c:{NFSU2_TR(0x56948c);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xa2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xa2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xa2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B569493:{NFSU2_TR(0x569493);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5694c9;}}
}
B569495:L569495:{c.instructions+=4;NFSU2_TR(0x569495);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x116ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56949c:{NFSU2_TR(0x56949c);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5694a2:{NFSU2_TR(0x5694a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5694a5:{NFSU2_TR(0x5694a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5694aaull));
TAIL_STATIC(0x458c40u,458);
}
B5694aa:L5694aa:{c.instructions+=5;NFSU2_TR(0x5694aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5694ab:{NFSU2_TR(0x5694ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5694ac:{NFSU2_TR(0x5694ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5694ad:{NFSU2_TR(0x5694ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5694ae:{NFSU2_TR(0x5694ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5694b1:L5694b1:{c.instructions+=2;NFSU2_TR(0x5694b1);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe1fde1d1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5694b6:{NFSU2_TR(0x5694b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5694c9;}}
}
B5694b8:L5694b8:{c.instructions+=3;NFSU2_TR(0x5694b8);
w4(R+4,u32(0x838980ull));
}
B5694bd:{NFSU2_TR(0x5694bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5694c4:{NFSU2_TR(0x5694c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5694c9ull));
TAIL_STATIC(0x530140u,530);
}
B5694c9:L5694c9:{c.instructions+=5;NFSU2_TR(0x5694c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5694ca:{NFSU2_TR(0x5694ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5694cb:{NFSU2_TR(0x5694cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5694cc:{NFSU2_TR(0x5694cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5694cd:{NFSU2_TR(0x5694cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569500:L569500:{c.instructions+=14;NFSU2_TR(0x569500);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569502:{NFSU2_TR(0x569502);
u8 U[4];
w4(U+0,u32(0x778576ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569507:{NFSU2_TR(0x569507);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56950d:{NFSU2_TR(0x56950d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56950e:{NFSU2_TR(0x56950e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569515:{NFSU2_TR(0x569515);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569516:{NFSU2_TR(0x569516);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569517:{NFSU2_TR(0x569517);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569518:{NFSU2_TR(0x569518);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569519:{NFSU2_TR(0x569519);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56951d:{NFSU2_TR(0x56951d);
__builtin_memmove((R+24),(R+4),4);
}
B56951f:{NFSU2_TR(0x56951f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569520:{NFSU2_TR(0x569520);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569524:{NFSU2_TR(0x569524);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569529ull));
TAIL_STATIC(0x552330u,552);
}
B569529:L569529:{c.instructions+=12;NFSU2_TR(0x569529);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56952c:{NFSU2_TR(0x56952c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569531:{NFSU2_TR(0x569531);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569536:{NFSU2_TR(0x569536);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569538:{NFSU2_TR(0x569538);
u8 U[4];
w4(U+0,u32(0x79caf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56953d:{NFSU2_TR(0x56953d);
u8 U[4];
w4(U+0,u32(0x797f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569542:{NFSU2_TR(0x569542);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B569544:{NFSU2_TR(0x569544);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569545:{NFSU2_TR(0x569545);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56954b:{NFSU2_TR(0x56954b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56954f:{NFSU2_TR(0x56954f);
u8 U[4];
w4(U+0,u32(0x79d8a0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B569555:{NFSU2_TR(0x569555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56955aull));
TAIL_STATIC(0x5435d0u,543);
}
B56955a:L56955a:{c.instructions+=9;NFSU2_TR(0x56955a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56955d:{NFSU2_TR(0x56955d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56955e:{NFSU2_TR(0x56955e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56955f:{NFSU2_TR(0x56955f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569561:{NFSU2_TR(0x569561);
u8 U[4];
w4(U+0,u32(0x78f814ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569566:{NFSU2_TR(0x569566);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569567:{NFSU2_TR(0x569567);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56956d:{NFSU2_TR(0x56956d);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B569572:{NFSU2_TR(0x569572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569577ull));
TAIL_STATIC(0x542ac0u,542);
}
B569577:L569577:{c.instructions+=11;NFSU2_TR(0x569577);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56957d:{NFSU2_TR(0x56957d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569583:{NFSU2_TR(0x569583);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B569589:{NFSU2_TR(0x569589);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56958c:{NFSU2_TR(0x56958c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B569592:{NFSU2_TR(0x569592);
__builtin_memmove((R+4),(R+24),4);
}
B569594:{NFSU2_TR(0x569594);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56959b:{NFSU2_TR(0x56959b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5695a1:{NFSU2_TR(0x5695a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
w4(U+4,u32(0x43480000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5695ab:{NFSU2_TR(0x5695ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
w4(U+4,u32(0x41a00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5695b5:{NFSU2_TR(0x5695b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5695baull));
TAIL_STATIC(0x560d30u,560);
}
B5695ba:L5695ba:{c.instructions+=4;NFSU2_TR(0x5695ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5695bd:{NFSU2_TR(0x5695bd);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5695c2:{NFSU2_TR(0x5695c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5695c3:{NFSU2_TR(0x5695c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5695c8ull));
TAIL_STATIC(0x4954e0u,495);
}
B5695c8:L5695c8:{c.instructions+=4;NFSU2_TR(0x5695c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5695cb:{NFSU2_TR(0x5695cb);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5695d0:{NFSU2_TR(0x5695d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5695d1:{NFSU2_TR(0x5695d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5695d6ull));
TAIL_STATIC(0x4954e0u,495);
}
B5695d6:L5695d6:{c.instructions+=9;NFSU2_TR(0x5695d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5695da:{NFSU2_TR(0x5695da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5695dd:{NFSU2_TR(0x5695dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5695de:{NFSU2_TR(0x5695de);
__builtin_memmove((R+0),(R+24),4);
}
B5695e0:{NFSU2_TR(0x5695e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5695e1:{NFSU2_TR(0x5695e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5695e2:{NFSU2_TR(0x5695e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5695e9:{NFSU2_TR(0x5695e9);
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
B5695ec:{NFSU2_TR(0x5695ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5695f0:L5695f0:{c.instructions+=3;NFSU2_TR(0x5695f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5695f1:{NFSU2_TR(0x5695f1);
__builtin_memmove((R+24),(R+4),4);
}
B5695f3:{NFSU2_TR(0x5695f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5695f8ull));
{goto L569610;}
}
B5695f8:L5695f8:{c.instructions+=2;NFSU2_TR(0x5695f8);
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
B5695fd:{NFSU2_TR(0x5695fd);
if(r1(R+518)){{goto L569608;}}
}
B5695ff:L5695ff:{c.instructions+=2;NFSU2_TR(0x5695ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569600:{NFSU2_TR(0x569600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569605ull));
TAIL_STATIC(0x575630u,575);
}
B569605:L569605:{c.instructions+=1;NFSU2_TR(0x569605);
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
B569608:L569608:{c.instructions+=3;NFSU2_TR(0x569608);
__builtin_memmove((R+0),(R+24),4);
}
B56960a:{NFSU2_TR(0x56960a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56960b:{NFSU2_TR(0x56960b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569610:L569610:{c.instructions+=13;NFSU2_TR(0x569610);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569612:{NFSU2_TR(0x569612);
u8 U[4];
w4(U+0,u32(0x777d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569617:{NFSU2_TR(0x569617);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56961d:{NFSU2_TR(0x56961d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56961e:{NFSU2_TR(0x56961e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569625:{NFSU2_TR(0x569625);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569626:{NFSU2_TR(0x569626);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569627:{NFSU2_TR(0x569627);
__builtin_memmove((R+24),(R+4),4);
}
B569629:{NFSU2_TR(0x569629);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56962d:{NFSU2_TR(0x56962d);
u8 U[4];
w4(U+0,u32(0x79d8a0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B569633:{NFSU2_TR(0x569633);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B569639:{NFSU2_TR(0x569639);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B569641:{NFSU2_TR(0x569641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569646ull));
TAIL_STATIC(0x52ea90u,52e);
}
B569646:L569646:{c.instructions+=3;NFSU2_TR(0x569646);
__builtin_memmove((R+4),(R+24),4);
}
B569648:{NFSU2_TR(0x569648);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B569650:{NFSU2_TR(0x569650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569655ull));
TAIL_STATIC(0x4defb0u,4de);
}
B569655:L569655:{c.instructions+=5;NFSU2_TR(0x569655);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569659:{NFSU2_TR(0x569659);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56965a:{NFSU2_TR(0x56965a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569661:{NFSU2_TR(0x569661);
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
B569664:{NFSU2_TR(0x569664);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569670:L569670:{c.instructions+=10;NFSU2_TR(0x569670);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569671:{NFSU2_TR(0x569671);
__builtin_memmove((R+20),(R+16),4);
}
B569673:{NFSU2_TR(0x569673);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569674:{NFSU2_TR(0x569674);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569675:{NFSU2_TR(0x569675);
__builtin_memmove((R+24),(R+4),4);
}
B569677:{NFSU2_TR(0x569677);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56967d:{NFSU2_TR(0x56967d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56967f:{NFSU2_TR(0x56967f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569680:{NFSU2_TR(0x569680);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B569683:{NFSU2_TR(0x569683);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569699;}}
}
B569685:L569685:{c.instructions+=9;NFSU2_TR(0x569685);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569688:{NFSU2_TR(0x569688);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56968b:{NFSU2_TR(0x56968b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56968e:{NFSU2_TR(0x56968e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56968f:{NFSU2_TR(0x56968f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569690:{NFSU2_TR(0x569690);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569691:{NFSU2_TR(0x569691);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569692:{NFSU2_TR(0x569692);
__builtin_memmove((R+4),(R+24),4);
}
B569694:{NFSU2_TR(0x569694);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569699ull));
TAIL_STATIC(0x543d40u,543);
}
B569699:L569699:{c.instructions+=2;NFSU2_TR(0x569699);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56969f:{NFSU2_TR(0x56969f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5698f8;}}
}
B5696a5:L5696a5:{c.instructions+=1;NFSU2_TR(0x5696a5);
if(r1(R+518)){{goto L5698a1;}}
}
B5696ab:L5696ab:{c.instructions+=2;NFSU2_TR(0x5696ab);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x34f8a1deull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34f8a1deull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34f8a1deull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5696b1:{NFSU2_TR(0x5696b1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5697c7;}}
}
B5696b7:L5696b7:{c.instructions+=1;NFSU2_TR(0x5696b7);
if(r1(R+518)){{goto L5697bc;}}
}
B5696bd:L5696bd:{c.instructions+=2;NFSU2_TR(0x5696bd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9f00f07ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5696c3:{NFSU2_TR(0x5696c3);
if(r1(R+518)){{goto L569712;}}
}
B5696c5:L5696c5:{c.instructions+=2;NFSU2_TR(0x5696c5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1fab5998ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5696cb:{NFSU2_TR(0x5696cb);
if(r1(R+518)){{goto L5696d9;}}
}
B5696cd:L5696cd:{c.instructions+=2;NFSU2_TR(0x5696cd);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x34dc1becull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34dc1becull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34dc1becull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5696d3:{NFSU2_TR(0x5696d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569cb2;}}
}
B5696d9:L5696d9:{c.instructions+=3;NFSU2_TR(0x5696d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5696df:{NFSU2_TR(0x5696df);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5696e1:{NFSU2_TR(0x5696e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569b39;}}
}
B5696e7:L5696e7:{c.instructions+=2;NFSU2_TR(0x5696e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5696ea:{NFSU2_TR(0x5696ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5696efull));
TAIL_STATIC(0x538b30u,538);
}
B5696ef:L5696ef:{c.instructions+=6;NFSU2_TR(0x5696ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5696f2:{NFSU2_TR(0x5696f2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5696f4:{NFSU2_TR(0x5696f4);
u8 U[4];
w4(U+0,u32(0x79d790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5696f9:{NFSU2_TR(0x5696f9);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5696fe:{NFSU2_TR(0x5696fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5696ff:{NFSU2_TR(0x5696ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569704ull));
TAIL_STATIC(0x537c00u,537);
}
B569704:L569704:{c.instructions+=7;NFSU2_TR(0x569704);
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
B569707:{NFSU2_TR(0x569707);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569708:{NFSU2_TR(0x569708);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56970c:{NFSU2_TR(0x56970c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56970d:{NFSU2_TR(0x56970d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56970e:{NFSU2_TR(0x56970e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56970f:{NFSU2_TR(0x56970f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569712:L569712:{c.instructions+=6;NFSU2_TR(0x569712);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569718:{NFSU2_TR(0x569718);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56971b:{NFSU2_TR(0x56971b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56971c:{NFSU2_TR(0x56971c);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56971e:{NFSU2_TR(0x56971e);
w4(R+4,u32(0x85ad40ull));
}
B569723:{NFSU2_TR(0x569723);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569728ull));
TAIL_STATIC(0x5289f0u,528);
}
B569728:L569728:{c.instructions+=4;NFSU2_TR(0x569728);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569729:{NFSU2_TR(0x569729);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56972b:{NFSU2_TR(0x56972b);
w4(R+4,u32(0x8392c0ull));
}
B569730:{NFSU2_TR(0x569730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569735ull));
TAIL_STATIC(0x631d20u,631);
}
B569735:L569735:{c.instructions+=4;NFSU2_TR(0x569735);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569736:{NFSU2_TR(0x569736);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569738:{NFSU2_TR(0x569738);
w4(R+4,u32(0x8392c0ull));
}
B56973d:{NFSU2_TR(0x56973d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569742ull));
TAIL_STATIC(0x631d20u,631);
}
B569742:L569742:{c.instructions+=3;NFSU2_TR(0x569742);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569747:{NFSU2_TR(0x569747);
w4(R+4,u32(0x8389d0ull));
}
B56974c:{NFSU2_TR(0x56974c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569751ull));
TAIL_STATIC(0x413440u,413);
}
B569751:L569751:{c.instructions+=4;NFSU2_TR(0x569751);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569753:{NFSU2_TR(0x569753);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569755:{NFSU2_TR(0x569755);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56975a:{NFSU2_TR(0x56975a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56975full));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B56975f:L56975f:{c.instructions+=5;NFSU2_TR(0x56975f);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B569765:{NFSU2_TR(0x569765);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B569768:{NFSU2_TR(0x569768);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56976d:{NFSU2_TR(0x56976d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B569770:{NFSU2_TR(0x569770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569775ull));
TAIL_STATIC(0x503950u,503);
}
B569775:L569775:{c.instructions+=4;NFSU2_TR(0x569775);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56977a:{NFSU2_TR(0x56977a);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56977f:{NFSU2_TR(0x56977f);
w4(R+4,u32(0x8637d0ull));
}
B569784:{NFSU2_TR(0x569784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569789ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B569789:L569789:{c.instructions+=8;NFSU2_TR(0x569789);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56978c:{NFSU2_TR(0x56978c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569792:{NFSU2_TR(0x569792);
__builtin_memmove((R+4),gp(0x861e74),4);
}
B569798:{NFSU2_TR(0x569798);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569799:{NFSU2_TR(0x569799);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56979e:{NFSU2_TR(0x56979e);
u8 U[4];
w4(U+0,u32(0xeb3a688aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5697a3:{NFSU2_TR(0x5697a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5697a4:{NFSU2_TR(0x5697a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5697a9ull));
TAIL_STATIC(0x537b80u,537);
}
B5697a9:L5697a9:{c.instructions+=4;NFSU2_TR(0x5697a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5697ac:{NFSU2_TR(0x5697ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5697ae:{NFSU2_TR(0x5697ae);
__builtin_memmove((R+4),(R+24),4);
}
B5697b0:{NFSU2_TR(0x5697b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5697b5ull));
TAIL_STATIC(0x55fce0u,55f);
}
B5697b5:L5697b5:{c.instructions+=5;NFSU2_TR(0x5697b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5697b6:{NFSU2_TR(0x5697b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5697b7:{NFSU2_TR(0x5697b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5697b8:{NFSU2_TR(0x5697b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5697b9:{NFSU2_TR(0x5697b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5697bc:L5697bc:{c.instructions+=6;NFSU2_TR(0x5697bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5697bd:{NFSU2_TR(0x5697bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5697c1:{NFSU2_TR(0x5697c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5697c2:{NFSU2_TR(0x5697c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5697c3:{NFSU2_TR(0x5697c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5697c4:{NFSU2_TR(0x5697c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5697c7:L5697c7:{c.instructions+=2;NFSU2_TR(0x5697c7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5697cd:{NFSU2_TR(0x5697cd);
if(r1(R+518)){{goto L569877;}}
}
B5697d3:L5697d3:{c.instructions+=2;NFSU2_TR(0x5697d3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x51123592ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5697d9:{NFSU2_TR(0x5697d9);
if(r1(R+518)){{goto L5697f7;}}
}
B5697db:L5697db:{c.instructions+=2;NFSU2_TR(0x5697db);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x72619778ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5697e1:{NFSU2_TR(0x5697e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569cb2;}}
}
B5697e7:L5697e7:{c.instructions+=3;NFSU2_TR(0x5697e7);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5697e9:{NFSU2_TR(0x5697e9);
__builtin_memmove((R+4),(R+24),4);
}
B5697eb:{NFSU2_TR(0x5697eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5697f0ull));
TAIL_STATIC(0x561140u,561);
}
B5697f0:L5697f0:{c.instructions+=5;NFSU2_TR(0x5697f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5697f1:{NFSU2_TR(0x5697f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5697f2:{NFSU2_TR(0x5697f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5697f3:{NFSU2_TR(0x5697f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5697f4:{NFSU2_TR(0x5697f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5697f7:L5697f7:{c.instructions+=6;NFSU2_TR(0x5697f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5697fd:{NFSU2_TR(0x5697fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B569800:{NFSU2_TR(0x569800);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569801:{NFSU2_TR(0x569801);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569803:{NFSU2_TR(0x569803);
w4(R+4,u32(0x8392c0ull));
}
B569808:{NFSU2_TR(0x569808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56980dull));
TAIL_STATIC(0x631d20u,631);
}
B56980d:L56980d:{c.instructions+=4;NFSU2_TR(0x56980d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56980e:{NFSU2_TR(0x56980e);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569810:{NFSU2_TR(0x569810);
w4(R+4,u32(0x8392c0ull));
}
B569815:{NFSU2_TR(0x569815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56981aull));
TAIL_STATIC(0x631d20u,631);
}
B56981a:L56981a:{c.instructions+=3;NFSU2_TR(0x56981a);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56981f:{NFSU2_TR(0x56981f);
w4(R+4,u32(0x8389d0ull));
}
B569824:{NFSU2_TR(0x569824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569829ull));
TAIL_STATIC(0x413440u,413);
}
B569829:L569829:{c.instructions+=4;NFSU2_TR(0x569829);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56982b:{NFSU2_TR(0x56982b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56982d:{NFSU2_TR(0x56982d);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569832:{NFSU2_TR(0x569832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569837ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B569837:L569837:{c.instructions+=5;NFSU2_TR(0x569837);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B56983d:{NFSU2_TR(0x56983d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B569840:{NFSU2_TR(0x569840);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569845:{NFSU2_TR(0x569845);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B569848:{NFSU2_TR(0x569848);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56984dull));
TAIL_STATIC(0x503950u,503);
}
B56984d:L56984d:{c.instructions+=4;NFSU2_TR(0x56984d);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569852:{NFSU2_TR(0x569852);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569857:{NFSU2_TR(0x569857);
w4(R+4,u32(0x8637d0ull));
}
B56985c:{NFSU2_TR(0x56985c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569861ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B569861:L569861:{c.instructions+=4;NFSU2_TR(0x569861);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569863:{NFSU2_TR(0x569863);
__builtin_memmove((R+4),(R+24),4);
}
B569865:{NFSU2_TR(0x569865);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56986b:{NFSU2_TR(0x56986b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569870ull));
TAIL_STATIC(0x55fce0u,55f);
}
B569870:L569870:{c.instructions+=5;NFSU2_TR(0x569870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569871:{NFSU2_TR(0x569871);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569872:{NFSU2_TR(0x569872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569873:{NFSU2_TR(0x569873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569874:{NFSU2_TR(0x569874);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569877:L569877:{c.instructions+=4;NFSU2_TR(0x569877);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56987a:{NFSU2_TR(0x56987a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56987d:{NFSU2_TR(0x56987d);
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
B56987f:{NFSU2_TR(0x56987f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569cb2;}}
}
B569885:L569885:{c.instructions+=4;NFSU2_TR(0x569885);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56988b:{NFSU2_TR(0x56988b);
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
B56988d:{NFSU2_TR(0x56988d);
__builtin_memmove((R+4),(R+24),4);
}
B56988f:{NFSU2_TR(0x56988f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569ab4;}}
}
B569895:L569895:{c.instructions+=1;NFSU2_TR(0x569895);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56989aull));
TAIL_STATIC(0x5614b0u,561);
}
B56989a:L56989a:{c.instructions+=5;NFSU2_TR(0x56989a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56989b:{NFSU2_TR(0x56989b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56989c:{NFSU2_TR(0x56989c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56989d:{NFSU2_TR(0x56989d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56989e:{NFSU2_TR(0x56989e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5698a1:L5698a1:{c.instructions+=3;NFSU2_TR(0x5698a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5698a7:{NFSU2_TR(0x5698a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5698a9:{NFSU2_TR(0x5698a9);
if(r1(R+518)){{goto L5698bb;}}
}
B5698ab:L5698ab:{c.instructions+=3;NFSU2_TR(0x5698ab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5698ad:{NFSU2_TR(0x5698ad);
__builtin_memmove((R+4),(R+24),4);
}
B5698af:{NFSU2_TR(0x5698af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5698b4ull));
TAIL_STATIC(0x55fce0u,55f);
}
B5698b4:L5698b4:{c.instructions+=5;NFSU2_TR(0x5698b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5698b5:{NFSU2_TR(0x5698b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5698b6:{NFSU2_TR(0x5698b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5698b7:{NFSU2_TR(0x5698b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5698b8:{NFSU2_TR(0x5698b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5698bb:L5698bb:{c.instructions+=5;NFSU2_TR(0x5698bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5698be:{NFSU2_TR(0x5698be);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5698c3:{NFSU2_TR(0x5698c3);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5698c8:{NFSU2_TR(0x5698c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5698c9:{NFSU2_TR(0x5698c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5698ceull));
TAIL_STATIC(0x537d40u,537);
}
B5698ce:L5698ce:{c.instructions+=3;NFSU2_TR(0x5698ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5698d1:{NFSU2_TR(0x5698d1);
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
B5698d3:{NFSU2_TR(0x5698d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569cb2;}}
}
B5698d9:L5698d9:{c.instructions+=6;NFSU2_TR(0x5698d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5698dc:{NFSU2_TR(0x5698dc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5698de:{NFSU2_TR(0x5698de);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5698e3:{NFSU2_TR(0x5698e3);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5698e8:{NFSU2_TR(0x5698e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5698e9:{NFSU2_TR(0x5698e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5698eeull));
TAIL_STATIC(0x537c60u,537);
}
B5698ee:L5698ee:{c.instructions+=6;NFSU2_TR(0x5698ee);
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
B5698f1:{NFSU2_TR(0x5698f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5698f2:{NFSU2_TR(0x5698f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5698f3:{NFSU2_TR(0x5698f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5698f4:{NFSU2_TR(0x5698f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5698f5:{NFSU2_TR(0x5698f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5698f8:L5698f8:{c.instructions+=2;NFSU2_TR(0x5698f8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xb4edeb6dull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb4edeb6dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5698fe:{NFSU2_TR(0x5698fe);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L569b5c;}}
}
B569904:L569904:{c.instructions+=1;NFSU2_TR(0x569904);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5696d9u);}goto L5696d9;}}
}
B56990a:L56990a:{c.instructions+=2;NFSU2_TR(0x56990a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B569910:{NFSU2_TR(0x569910);
if(r1(R+518)){{goto L569b29;}}
}
B569916:L569916:{c.instructions+=2;NFSU2_TR(0x569916);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56991c:{NFSU2_TR(0x56991c);
if(r1(R+518)){{goto L569bb7;}}
}
B569922:L569922:{c.instructions+=2;NFSU2_TR(0x569922);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x9803f6e2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9803f6e2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9803f6e2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B569928:{NFSU2_TR(0x569928);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569cb2;}}
}
B56992e:L56992e:{c.instructions+=6;NFSU2_TR(0x56992e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B569931:{NFSU2_TR(0x569931);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B569937:{NFSU2_TR(0x569937);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B569939:{NFSU2_TR(0x569939);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56993c:{NFSU2_TR(0x56993c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56993f:{NFSU2_TR(0x56993f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569a5e;}}
}
B569945:L569945:{c.instructions+=3;NFSU2_TR(0x569945);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B569948:{NFSU2_TR(0x569948);
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
B56994a:{NFSU2_TR(0x56994a);
if(r1(R+518)){{goto L569a35;}}
}
B569950:L569950:{c.instructions+=2;NFSU2_TR(0x569950);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569956:{NFSU2_TR(0x569956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56995bull));
TAIL_STATIC(0x610000u,610);
}
B56995b:L56995b:{c.instructions+=2;NFSU2_TR(0x56995b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56995c:{NFSU2_TR(0x56995c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569961ull));
TAIL_STATIC(0x43db50u,43d);
}
B569961:L569961:{c.instructions+=6;NFSU2_TR(0x569961);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569964:{NFSU2_TR(0x569964);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B569967:{NFSU2_TR(0x569967);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B569969:{NFSU2_TR(0x569969);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56996e:{NFSU2_TR(0x56996e);
w4(R+4,u32(0x8389d0ull));
}
B569973:{NFSU2_TR(0x569973);
if(r1(R+518)){{goto L5699d6;}}
}
B569975:L569975:{c.instructions+=3;NFSU2_TR(0x569975);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569978:{NFSU2_TR(0x569978);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56997b:{NFSU2_TR(0x56997b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569980ull));
TAIL_STATIC(0x413440u,413);
}
B569980:L569980:{c.instructions+=4;NFSU2_TR(0x569980);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569981:{NFSU2_TR(0x569981);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569983:{NFSU2_TR(0x569983);
w4(R+4,u32(0x8389d0ull));
}
B569988:{NFSU2_TR(0x569988);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56998dull));
TAIL_STATIC(0x631d20u,631);
}
B56998d:L56998d:{c.instructions+=4;NFSU2_TR(0x56998d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56998e:{NFSU2_TR(0x56998e);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569990:{NFSU2_TR(0x569990);
w4(R+4,u32(0x8389d0ull));
}
B569995:{NFSU2_TR(0x569995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56999aull));
TAIL_STATIC(0x631d20u,631);
}
B56999a:L56999a:{c.instructions+=4;NFSU2_TR(0x56999a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56999c:{NFSU2_TR(0x56999c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56999e:{NFSU2_TR(0x56999e);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5699a3:{NFSU2_TR(0x5699a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5699a8ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B5699a8:L5699a8:{c.instructions+=5;NFSU2_TR(0x5699a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5699ab:{NFSU2_TR(0x5699ab);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5699b0:{NFSU2_TR(0x5699b0);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5699b5:{NFSU2_TR(0x5699b5);
w4(R+4,u32(0x8637d0ull));
}
B5699ba:{NFSU2_TR(0x5699ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5699bfull));
TAIL_STATIC(0x55b1a0u,55b);
}
B5699bf:L5699bf:{c.instructions+=7;NFSU2_TR(0x5699bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5699c2:{NFSU2_TR(0x5699c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5699c5:{NFSU2_TR(0x5699c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5699c7:{NFSU2_TR(0x5699c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5699c9:{NFSU2_TR(0x5699c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5699ca:{NFSU2_TR(0x5699ca);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5699cc:{NFSU2_TR(0x5699cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5699d1ull));
TAIL_STATIC(0x4c2100u,4c2);
}
B5699d1:L5699d1:{c.instructions+=2;NFSU2_TR(0x5699d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5699d4:{NFSU2_TR(0x5699d4);
{goto L569a32;}
}
B5699d6:L5699d6:{c.instructions+=2;NFSU2_TR(0x5699d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5699dc:{NFSU2_TR(0x5699dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5699e1ull));
TAIL_STATIC(0x413440u,413);
}
B5699e1:L5699e1:{c.instructions+=4;NFSU2_TR(0x5699e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5699e2:{NFSU2_TR(0x5699e2);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5699e4:{NFSU2_TR(0x5699e4);
w4(R+4,u32(0x8389d0ull));
}
B5699e9:{NFSU2_TR(0x5699e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5699eeull));
TAIL_STATIC(0x631d20u,631);
}
B5699ee:L5699ee:{c.instructions+=4;NFSU2_TR(0x5699ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5699ef:{NFSU2_TR(0x5699ef);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5699f1:{NFSU2_TR(0x5699f1);
w4(R+4,u32(0x8389d0ull));
}
B5699f6:{NFSU2_TR(0x5699f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5699fbull));
TAIL_STATIC(0x631d20u,631);
}
B5699fb:L5699fb:{c.instructions+=4;NFSU2_TR(0x5699fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5699fd:{NFSU2_TR(0x5699fd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5699ff:{NFSU2_TR(0x5699ff);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569a04:{NFSU2_TR(0x569a04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569a09ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B569a09:L569a09:{c.instructions+=5;NFSU2_TR(0x569a09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B569a0c:{NFSU2_TR(0x569a0c);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569a11:{NFSU2_TR(0x569a11);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569a16:{NFSU2_TR(0x569a16);
w4(R+4,u32(0x8637d0ull));
}
B569a1b:{NFSU2_TR(0x569a1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569a20ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B569a20:L569a20:{c.instructions+=6;NFSU2_TR(0x569a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569a26:{NFSU2_TR(0x569a26);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569a28:{NFSU2_TR(0x569a28);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569a2a:{NFSU2_TR(0x569a2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569a2b:{NFSU2_TR(0x569a2b);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569a2d:{NFSU2_TR(0x569a2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569a32ull));
TAIL_STATIC(0x4c2100u,4c2);
}
B569a32:L569a32:{c.instructions+=1;NFSU2_TR(0x569a32);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B569a35:L569a35:{c.instructions+=2;NFSU2_TR(0x569a35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569a36:{NFSU2_TR(0x569a36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569a3bull));
TAIL_STATIC(0x52d100u,52d);
}
B569a3b:L569a3b:{c.instructions+=3;NFSU2_TR(0x569a3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B569a3e:{NFSU2_TR(0x569a3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B569a40:{NFSU2_TR(0x569a40);
if(r1(R+518)){{goto L569ac0;}}
}
B569a42:L569a42:{c.instructions+=4;NFSU2_TR(0x569a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569a45:{NFSU2_TR(0x569a45);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B569a48:{NFSU2_TR(0x569a48);
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
B569a4a:{NFSU2_TR(0x569a4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569cb2;}}
}
B569a50:L569a50:{c.instructions+=2;NFSU2_TR(0x569a50);
__builtin_memmove((R+4),(R+24),4);
}
B569a52:{NFSU2_TR(0x569a52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569a57ull));
TAIL_STATIC(0x5614b0u,561);
}
B569a57:L569a57:{c.instructions+=5;NFSU2_TR(0x569a57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569a58:{NFSU2_TR(0x569a58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569a59:{NFSU2_TR(0x569a59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569a5a:{NFSU2_TR(0x569a5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569a5b:{NFSU2_TR(0x569a5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569a5e:L569a5e:{c.instructions+=4;NFSU2_TR(0x569a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569a61:{NFSU2_TR(0x569a61);
u8 U[4];
w4(U+0,u32(0x38e39ad7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569a66:{NFSU2_TR(0x569a66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569a67:{NFSU2_TR(0x569a67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569a6cull));
TAIL_STATIC(0x537a60u,537);
}
B569a6c:L569a6c:{c.instructions+=3;NFSU2_TR(0x569a6c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569a6d:{NFSU2_TR(0x569a6d);
__builtin_memmove((R+28),(R+0),4);
}
B569a6f:{NFSU2_TR(0x569a6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569a74ull));
TAIL_STATIC(0x52d100u,52d);
}
B569a74:L569a74:{c.instructions+=3;NFSU2_TR(0x569a74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B569a77:{NFSU2_TR(0x569a77);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B569a79:{NFSU2_TR(0x569a79);
if(r1(R+518)){{goto L569a97;}}
}
B569a7b:L569a7b:{c.instructions+=4;NFSU2_TR(0x569a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B569a7e:{NFSU2_TR(0x569a7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B569a81:{NFSU2_TR(0x569a81);
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
B569a83:{NFSU2_TR(0x569a83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569cb2;}}
}
B569a89:L569a89:{c.instructions+=2;NFSU2_TR(0x569a89);
__builtin_memmove((R+4),(R+24),4);
}
B569a8b:{NFSU2_TR(0x569a8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569a90ull));
TAIL_STATIC(0x559ab0u,559);
}
B569a90:L569a90:{c.instructions+=5;NFSU2_TR(0x569a90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569a91:{NFSU2_TR(0x569a91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569a92:{NFSU2_TR(0x569a92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569a93:{NFSU2_TR(0x569a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569a94:{NFSU2_TR(0x569a94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569a97:L569a97:{c.instructions+=2;NFSU2_TR(0x569a97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569a98:{NFSU2_TR(0x569a98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569a9dull));
TAIL_STATIC(0x52d100u,52d);
}
B569a9d:L569a9d:{c.instructions+=3;NFSU2_TR(0x569a9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B569aa0:{NFSU2_TR(0x569aa0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B569aa2:{NFSU2_TR(0x569aa2);
if(r1(R+518)){{goto L569ac0;}}
}
B569aa4:L569aa4:{c.instructions+=4;NFSU2_TR(0x569aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569aa7:{NFSU2_TR(0x569aa7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B569aaa:{NFSU2_TR(0x569aaa);
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
B569aac:{NFSU2_TR(0x569aac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569cb2;}}
}
B569ab2:L569ab2:{c.instructions+=1;NFSU2_TR(0x569ab2);
__builtin_memmove((R+4),(R+24),4);
}
B569ab4:L569ab4:{c.instructions+=1;NFSU2_TR(0x569ab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569ab9ull));
TAIL_STATIC(0x559ab0u,559);
}
B569ab9:L569ab9:{c.instructions+=5;NFSU2_TR(0x569ab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569aba:{NFSU2_TR(0x569aba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569abb:{NFSU2_TR(0x569abb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569abc:{NFSU2_TR(0x569abc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569abd:{NFSU2_TR(0x569abd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569ac0:L569ac0:{c.instructions+=2;NFSU2_TR(0x569ac0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B569ac6:{NFSU2_TR(0x569ac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569acbull));
TAIL_STATIC(0x538130u,538);
}
B569acb:L569acb:{c.instructions+=3;NFSU2_TR(0x569acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569ad1:{NFSU2_TR(0x569ad1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B569ad4:{NFSU2_TR(0x569ad4);
if(r1(R+518)){{goto L569b1a;}}
}
B569ad6:L569ad6:{c.instructions+=2;NFSU2_TR(0x569ad6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B569ad9:{NFSU2_TR(0x569ad9);
if(r1(R+518)){{goto L569b1a;}}
}
B569adb:L569adb:{c.instructions+=5;NFSU2_TR(0x569adb);
{u32 ea_=u32(u32(8872940u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B569ae1:{NFSU2_TR(0x569ae1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B569ae7:{NFSU2_TR(0x569ae7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B569ae9:{NFSU2_TR(0x569ae9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B569aec:{NFSU2_TR(0x569aec);
if(r1(R+514)){{goto L569b04;}}
}
B569aee:L569aee:{c.instructions+=5;NFSU2_TR(0x569aee);
w4(R+0,u32(0x1ull));
}
B569af3:{NFSU2_TR(0x569af3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B569af5:{NFSU2_TR(0x569af5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569af6:{NFSU2_TR(0x569af6);
__builtin_memmove((R+4),(R+24),4);
}
B569af8:{NFSU2_TR(0x569af8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569afdull));
TAIL_STATIC(0x561140u,561);
}
B569afd:L569afd:{c.instructions+=5;NFSU2_TR(0x569afd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569afe:{NFSU2_TR(0x569afe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569aff:{NFSU2_TR(0x569aff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569b00:{NFSU2_TR(0x569b00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569b01:{NFSU2_TR(0x569b01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569b04:L569b04:{c.instructions+=4;NFSU2_TR(0x569b04);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B569b0a:{NFSU2_TR(0x569b0a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B569b0c:{NFSU2_TR(0x569b0c);
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
B569b0f:{NFSU2_TR(0x569b0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569cb2;}}
}
B569b15:L569b15:{c.instructions+=1;NFSU2_TR(0x569b15);
w4(R+0,u32(0xffffffffull));
}
B569b1a:L569b1a:{c.instructions+=3;NFSU2_TR(0x569b1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569b1b:{NFSU2_TR(0x569b1b);
__builtin_memmove((R+4),(R+24),4);
}
B569b1d:{NFSU2_TR(0x569b1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569b22ull));
TAIL_STATIC(0x561140u,561);
}
B569b22:L569b22:{c.instructions+=5;NFSU2_TR(0x569b22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569b23:{NFSU2_TR(0x569b23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569b24:{NFSU2_TR(0x569b24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569b25:{NFSU2_TR(0x569b25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569b26:{NFSU2_TR(0x569b26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569b29:L569b29:{c.instructions+=3;NFSU2_TR(0x569b29);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569b2b:{NFSU2_TR(0x569b2b);
__builtin_memmove((R+4),(R+24),4);
}
B569b2d:{NFSU2_TR(0x569b2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569b32ull));
TAIL_STATIC(0x561140u,561);
}
B569b32:L569b32:{c.instructions+=5;NFSU2_TR(0x569b32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569b33:{NFSU2_TR(0x569b33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569b34:{NFSU2_TR(0x569b34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569b35:{NFSU2_TR(0x569b35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569b36:{NFSU2_TR(0x569b36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569b39:L569b39:{c.instructions+=4;NFSU2_TR(0x569b39);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B569b3f:{NFSU2_TR(0x569b3f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569b41:{NFSU2_TR(0x569b41);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B569b45:{NFSU2_TR(0x569b45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569b4aull));
TAIL_STATIC(0x52eb90u,52e);
}
B569b4a:L569b4a:{c.instructions+=2;NFSU2_TR(0x569b4a);
__builtin_memmove((R+4),(R+24),4);
}
B569b4c:{NFSU2_TR(0x569b4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569b51ull));
TAIL_STATIC(0x538ca0u,538);
}
B569b51:L569b51:{c.instructions+=6;NFSU2_TR(0x569b51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569b52:{NFSU2_TR(0x569b52);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B569b56:{NFSU2_TR(0x569b56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569b57:{NFSU2_TR(0x569b57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569b58:{NFSU2_TR(0x569b58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569b59:{NFSU2_TR(0x569b59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569b5c:L569b5c:{c.instructions+=2;NFSU2_TR(0x569b5c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B569b62:{NFSU2_TR(0x569b62);
if(r1(R+518)){{goto L569bb7;}}
}
B569b64:L569b64:{c.instructions+=2;NFSU2_TR(0x569b64);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B569b6a:{NFSU2_TR(0x569b6a);
if(r1(R+518)){{goto L569ba5;}}
}
B569b6c:L569b6c:{c.instructions+=2;NFSU2_TR(0x569b6c);
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
B569b72:{NFSU2_TR(0x569b72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569cb2;}}
}
B569b78:L569b78:{c.instructions+=2;NFSU2_TR(0x569b78);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x911ab364ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B569b82:{NFSU2_TR(0x569b82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569cb2;}}
}
B569b88:L569b88:{c.instructions+=2;NFSU2_TR(0x569b88);
w4(R+4,u32(0x838980ull));
}
B569b8d:{NFSU2_TR(0x569b8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569b92ull));
TAIL_STATIC(0x530140u,530);
}
B569b92:L569b92:{c.instructions+=1;NFSU2_TR(0x569b92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569b97ull));
TAIL_STATIC(0x54f980u,54f);
}
B569b97:L569b97:{c.instructions+=2;NFSU2_TR(0x569b97);
__builtin_memmove((R+4),(R+0),4);
}
B569b99:{NFSU2_TR(0x569b99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569b9eull));
TAIL_STATIC(0x55bdf0u,55b);
}
B569b9e:L569b9e:{c.instructions+=5;NFSU2_TR(0x569b9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569b9f:{NFSU2_TR(0x569b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569ba0:{NFSU2_TR(0x569ba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569ba1:{NFSU2_TR(0x569ba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569ba2:{NFSU2_TR(0x569ba2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569ba5:L569ba5:{c.instructions+=2;NFSU2_TR(0x569ba5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B569bab:{NFSU2_TR(0x569bab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569bb0ull));
TAIL_STATIC(0x538760u,538);
}
B569bb0:L569bb0:{c.instructions+=5;NFSU2_TR(0x569bb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569bb1:{NFSU2_TR(0x569bb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569bb2:{NFSU2_TR(0x569bb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569bb3:{NFSU2_TR(0x569bb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569bb4:{NFSU2_TR(0x569bb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569bb7:L569bb7:{c.instructions+=3;NFSU2_TR(0x569bb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B569bbd:{NFSU2_TR(0x569bbd);
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
B569bbf:{NFSU2_TR(0x569bbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569cb2;}}
}
B569bc5:L569bc5:{c.instructions+=3;NFSU2_TR(0x569bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569bcb:{NFSU2_TR(0x569bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B569bce:{NFSU2_TR(0x569bce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569bd3ull));
TAIL_STATIC(0x610000u,610);
}
B569bd3:L569bd3:{c.instructions+=2;NFSU2_TR(0x569bd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569bd4:{NFSU2_TR(0x569bd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569bd9ull));
TAIL_STATIC(0x43db50u,43d);
}
B569bd9:L569bd9:{c.instructions+=6;NFSU2_TR(0x569bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569bdc:{NFSU2_TR(0x569bdc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B569bdf:{NFSU2_TR(0x569bdf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B569be1:{NFSU2_TR(0x569be1);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569be6:{NFSU2_TR(0x569be6);
w4(R+4,u32(0x8389d0ull));
}
B569beb:{NFSU2_TR(0x569beb);
if(r1(R+518)){{goto L569c53;}}
}
B569bed:L569bed:{c.instructions+=3;NFSU2_TR(0x569bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B569bf0:{NFSU2_TR(0x569bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B569bf3:{NFSU2_TR(0x569bf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569bf8ull));
TAIL_STATIC(0x413440u,413);
}
B569bf8:L569bf8:{c.instructions+=4;NFSU2_TR(0x569bf8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569bf9:{NFSU2_TR(0x569bf9);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569bfb:{NFSU2_TR(0x569bfb);
w4(R+4,u32(0x8389d0ull));
}
B569c00:{NFSU2_TR(0x569c00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569c05ull));
TAIL_STATIC(0x631d20u,631);
}
B569c05:L569c05:{c.instructions+=4;NFSU2_TR(0x569c05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c06:{NFSU2_TR(0x569c06);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c08:{NFSU2_TR(0x569c08);
w4(R+4,u32(0x8389d0ull));
}
B569c0d:{NFSU2_TR(0x569c0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569c12ull));
TAIL_STATIC(0x631d20u,631);
}
B569c12:L569c12:{c.instructions+=4;NFSU2_TR(0x569c12);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c14:{NFSU2_TR(0x569c14);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c16:{NFSU2_TR(0x569c16);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c1b:{NFSU2_TR(0x569c1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569c20ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B569c20:L569c20:{c.instructions+=5;NFSU2_TR(0x569c20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B569c23:{NFSU2_TR(0x569c23);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c28:{NFSU2_TR(0x569c28);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c2d:{NFSU2_TR(0x569c2d);
w4(R+4,u32(0x8637d0ull));
}
B569c32:{NFSU2_TR(0x569c32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569c37ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B569c37:L569c37:{c.instructions+=7;NFSU2_TR(0x569c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569c3a:{NFSU2_TR(0x569c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569c3d:{NFSU2_TR(0x569c3d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c3f:{NFSU2_TR(0x569c3f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c41:{NFSU2_TR(0x569c41);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c42:{NFSU2_TR(0x569c42);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c44:{NFSU2_TR(0x569c44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569c49ull));
TAIL_STATIC(0x4c2100u,4c2);
}
B569c49:L569c49:{c.instructions+=6;NFSU2_TR(0x569c49);
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
B569c4c:{NFSU2_TR(0x569c4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569c4d:{NFSU2_TR(0x569c4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569c4e:{NFSU2_TR(0x569c4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569c4f:{NFSU2_TR(0x569c4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569c50:{NFSU2_TR(0x569c50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569c53:L569c53:{c.instructions+=2;NFSU2_TR(0x569c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B569c59:{NFSU2_TR(0x569c59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569c5eull));
TAIL_STATIC(0x413440u,413);
}
B569c5e:L569c5e:{c.instructions+=4;NFSU2_TR(0x569c5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c5f:{NFSU2_TR(0x569c5f);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c61:{NFSU2_TR(0x569c61);
w4(R+4,u32(0x8389d0ull));
}
B569c66:{NFSU2_TR(0x569c66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569c6bull));
TAIL_STATIC(0x631d20u,631);
}
B569c6b:L569c6b:{c.instructions+=4;NFSU2_TR(0x569c6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c6c:{NFSU2_TR(0x569c6c);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c6e:{NFSU2_TR(0x569c6e);
w4(R+4,u32(0x8389d0ull));
}
B569c73:{NFSU2_TR(0x569c73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569c78ull));
TAIL_STATIC(0x631d20u,631);
}
B569c78:L569c78:{c.instructions+=4;NFSU2_TR(0x569c78);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c7a:{NFSU2_TR(0x569c7a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c7c:{NFSU2_TR(0x569c7c);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c81:{NFSU2_TR(0x569c81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569c86ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B569c86:L569c86:{c.instructions+=5;NFSU2_TR(0x569c86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B569c89:{NFSU2_TR(0x569c89);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c8e:{NFSU2_TR(0x569c8e);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569c93:{NFSU2_TR(0x569c93);
w4(R+4,u32(0x8637d0ull));
}
B569c98:{NFSU2_TR(0x569c98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569c9dull));
TAIL_STATIC(0x55b1a0u,55b);
}
B569c9d:L569c9d:{c.instructions+=6;NFSU2_TR(0x569c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B569ca3:{NFSU2_TR(0x569ca3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569ca5:{NFSU2_TR(0x569ca5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569ca7:{NFSU2_TR(0x569ca7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569ca8:{NFSU2_TR(0x569ca8);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569caa:{NFSU2_TR(0x569caa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569cafull));
TAIL_STATIC(0x4c2100u,4c2);
}
B569caf:L569caf:{c.instructions+=1;NFSU2_TR(0x569caf);
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
B569cb2:L569cb2:{c.instructions+=5;NFSU2_TR(0x569cb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569cb3:{NFSU2_TR(0x569cb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569cb4:{NFSU2_TR(0x569cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569cb5:{NFSU2_TR(0x569cb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569cb6:{NFSU2_TR(0x569cb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569cc0:L569cc0:{c.instructions+=13;NFSU2_TR(0x569cc0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569cc2:{NFSU2_TR(0x569cc2);
u8 U[4];
w4(U+0,u32(0x7785a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569cc7:{NFSU2_TR(0x569cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569ccd:{NFSU2_TR(0x569ccd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569cce:{NFSU2_TR(0x569cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569cd5:{NFSU2_TR(0x569cd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569cd6:{NFSU2_TR(0x569cd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569cda:{NFSU2_TR(0x569cda);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569cdb:{NFSU2_TR(0x569cdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569cdc:{NFSU2_TR(0x569cdc);
__builtin_memmove((R+24),(R+4),4);
}
B569cde:{NFSU2_TR(0x569cde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569cdf:{NFSU2_TR(0x569cdf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569ce3:{NFSU2_TR(0x569ce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569ce8ull));
TAIL_STATIC(0x552780u,552);
}
B569ce8:L569ce8:{c.instructions+=53;NFSU2_TR(0x569ce8);
u8 U[4];
w4(U+0,u32(0x79d8bcull));
s4(u32(r4(R+24)),r4(U+0));
}
B569cee:{NFSU2_TR(0x569cee);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B569cf0:{NFSU2_TR(0x569cf0);
w4(R+8,u32(0x783fe5ull));
}
B569cf5:{NFSU2_TR(0x569cf5);
w4(R+4,u32(0x42380000ull));
}
B569cfa:{NFSU2_TR(0x569cfa);
w4(R+0,u32(0x79ae30ull));
}
B569cff:{NFSU2_TR(0x569cff);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d03:{NFSU2_TR(0x569d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d09:{NFSU2_TR(0x569d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d0f:{NFSU2_TR(0x569d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d15:{NFSU2_TR(0x569d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d1b:{NFSU2_TR(0x569d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d21:{NFSU2_TR(0x569d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d27:{NFSU2_TR(0x569d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d2d:{NFSU2_TR(0x569d2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d33:{NFSU2_TR(0x569d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d39:{NFSU2_TR(0x569d39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d3f:{NFSU2_TR(0x569d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d45:{NFSU2_TR(0x569d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d4b:{NFSU2_TR(0x569d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d51:{NFSU2_TR(0x569d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d57:{NFSU2_TR(0x569d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d5d:{NFSU2_TR(0x569d5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B569d63:{NFSU2_TR(0x569d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d69:{NFSU2_TR(0x569d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d6f:{NFSU2_TR(0x569d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d75:{NFSU2_TR(0x569d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d7b:{NFSU2_TR(0x569d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d81:{NFSU2_TR(0x569d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d87:{NFSU2_TR(0x569d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d8d:{NFSU2_TR(0x569d8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d93:{NFSU2_TR(0x569d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d99:{NFSU2_TR(0x569d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569d9f:{NFSU2_TR(0x569d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569da5:{NFSU2_TR(0x569da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569dab:{NFSU2_TR(0x569dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569db1:{NFSU2_TR(0x569db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569db7:{NFSU2_TR(0x569db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569dbd:{NFSU2_TR(0x569dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569dc3:{NFSU2_TR(0x569dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569dc9:{NFSU2_TR(0x569dc9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B569dcf:{NFSU2_TR(0x569dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569dd5:{NFSU2_TR(0x569dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569ddb:{NFSU2_TR(0x569ddb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B569de1:{NFSU2_TR(0x569de1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B569de7:{NFSU2_TR(0x569de7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B569dee:{NFSU2_TR(0x569dee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x149ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B569df4:{NFSU2_TR(0x569df4);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B569dfa:{NFSU2_TR(0x569dfa);
__builtin_memmove((R+4),(R+24),4);
}
B569dfc:{NFSU2_TR(0x569dfc);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B569e01:{NFSU2_TR(0x569e01);
__builtin_memmove(gp(0x83855c),(R+12),1);
}
B569e07:{NFSU2_TR(0x569e07);
__builtin_memmove(gp(0x83855b),(R+12),1);
}
B569e0d:{NFSU2_TR(0x569e0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B569e17:{NFSU2_TR(0x569e17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569e1cull));
TAIL_STATIC(0x547e30u,547);
}
B569e1c:L569e1c:{c.instructions+=2;NFSU2_TR(0x569e1c);
__builtin_memmove((R+4),(R+24),4);
}
B569e1e:{NFSU2_TR(0x569e1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569e23ull));
TAIL_STATIC(0x562790u,562);
}
B569e23:L569e23:{c.instructions+=3;NFSU2_TR(0x569e23);
__builtin_memmove((R+4),gp(0x7fa1cc),4);
}
B569e29:{NFSU2_TR(0x569e29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569e2a:{NFSU2_TR(0x569e2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569e2full));
TAIL_STATIC(0x52cef0u,52c);
}
B569e2f:L569e2f:{c.instructions+=3;NFSU2_TR(0x569e2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B569e32:{NFSU2_TR(0x569e32);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B569e34:{NFSU2_TR(0x569e34);
if(r1(R+518)){{goto L569e42;}}
}
B569e36:L569e36:{c.instructions+=4;NFSU2_TR(0x569e36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569e39:{NFSU2_TR(0x569e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569e3c:{NFSU2_TR(0x569e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569e3f:{NFSU2_TR(0x569e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569e42:L569e42:{c.instructions+=7;NFSU2_TR(0x569e42);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569e46:{NFSU2_TR(0x569e46);
__builtin_memmove((R+0),(R+24),4);
}
B569e48:{NFSU2_TR(0x569e48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569e49:{NFSU2_TR(0x569e49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569e4a:{NFSU2_TR(0x569e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569e51:{NFSU2_TR(0x569e51);
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
B569e54:{NFSU2_TR(0x569e54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569e60:L569e60:{c.instructions+=3;NFSU2_TR(0x569e60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569e61:{NFSU2_TR(0x569e61);
__builtin_memmove((R+24),(R+4),4);
}
B569e63:{NFSU2_TR(0x569e63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569e68ull));
{goto L569e80;}
}
B569e68:L569e68:{c.instructions+=2;NFSU2_TR(0x569e68);
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
B569e6d:{NFSU2_TR(0x569e6d);
if(r1(R+518)){{goto L569e78;}}
}
B569e6f:L569e6f:{c.instructions+=2;NFSU2_TR(0x569e6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569e70:{NFSU2_TR(0x569e70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569e75ull));
TAIL_STATIC(0x575630u,575);
}
B569e75:L569e75:{c.instructions+=1;NFSU2_TR(0x569e75);
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
B569e78:L569e78:{c.instructions+=3;NFSU2_TR(0x569e78);
__builtin_memmove((R+0),(R+24),4);
}
B569e7a:{NFSU2_TR(0x569e7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569e7b:{NFSU2_TR(0x569e7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569e80:L569e80:{c.instructions+=16;NFSU2_TR(0x569e80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569e82:{NFSU2_TR(0x569e82);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569e87:{NFSU2_TR(0x569e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569e8d:{NFSU2_TR(0x569e8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569e8e:{NFSU2_TR(0x569e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569e95:{NFSU2_TR(0x569e95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569e96:{NFSU2_TR(0x569e96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569e97:{NFSU2_TR(0x569e97);
__builtin_memmove((R+24),(R+4),4);
}
B569e99:{NFSU2_TR(0x569e99);
w4(R+0,u32(0x78f544ull));
}
B569e9e:{NFSU2_TR(0x569e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569ea4:{NFSU2_TR(0x569ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569eaa:{NFSU2_TR(0x569eaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569eae:{NFSU2_TR(0x569eae);
u8 U[4];
w4(U+0,u32(0x795cdcull));
s4(u32(r4(R+24)),r4(U+0));
}
B569eb4:{NFSU2_TR(0x569eb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B569eb7:{NFSU2_TR(0x569eb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B569ebf:{NFSU2_TR(0x569ebf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569ec4ull));
TAIL_STATIC(0x4358e0u,435);
}
B569ec4:L569ec4:{c.instructions+=6;NFSU2_TR(0x569ec4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569ec8:{NFSU2_TR(0x569ec8);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B569ece:{NFSU2_TR(0x569ece);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569ecf:{NFSU2_TR(0x569ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B569ed6:{NFSU2_TR(0x569ed6);
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
B569ed9:{NFSU2_TR(0x569ed9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569ee0:L569ee0:{c.instructions+=11;NFSU2_TR(0x569ee0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569ee1:{NFSU2_TR(0x569ee1);
__builtin_memmove((R+20),(R+16),4);
}
B569ee3:{NFSU2_TR(0x569ee3);
__builtin_memmove((R+0),gp(0x83855b),1);
}
B569ee8:{NFSU2_TR(0x569ee8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B569eea:{NFSU2_TR(0x569eea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569eeb:{NFSU2_TR(0x569eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B569eee:{NFSU2_TR(0x569eee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569eef:{NFSU2_TR(0x569eef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569ef0:{NFSU2_TR(0x569ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B569ef3:{NFSU2_TR(0x569ef3);
__builtin_memmove((R+24),(R+4),4);
}
B569ef5:{NFSU2_TR(0x569ef5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569f12;}}
}
B569ef7:L569ef7:{c.instructions+=3;NFSU2_TR(0x569ef7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B569efd:{NFSU2_TR(0x569efd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B569eff:{NFSU2_TR(0x569eff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L569f12;}}
}
B569f01:L569f01:{c.instructions+=8;NFSU2_TR(0x569f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569f04:{NFSU2_TR(0x569f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569f07:{NFSU2_TR(0x569f07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569f08:{NFSU2_TR(0x569f08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569f09:{NFSU2_TR(0x569f09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569f0a:{NFSU2_TR(0x569f0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569f0b:{NFSU2_TR(0x569f0b);
__builtin_memmove((R+4),(R+24),4);
}
B569f0d:{NFSU2_TR(0x569f0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569f12ull));
TAIL_STATIC(0x556020u,556);
}
B569f12:L569f12:{c.instructions+=2;NFSU2_TR(0x569f12);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x72619778ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B569f18:{NFSU2_TR(0x569f18);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x56a14bu,56a);}
}
B569f1e:L569f1e:{c.instructions+=1;NFSU2_TR(0x569f1e);
if(r1(R+518)){TAIL_STATIC(0x56a113u,56a);}
}
B569f24:L569f24:{c.instructions+=2;NFSU2_TR(0x569f24);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x34dc1becull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34dc1becull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B569f2a:{NFSU2_TR(0x569f2a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x56a047u,56a);}
}
B569f30:L569f30:{c.instructions+=1;NFSU2_TR(0x569f30);
if(r1(R+518)){TAIL_STATIC(0x56a179u,56a);}
}
B569f36:L569f36:{c.instructions+=2;NFSU2_TR(0x569f36);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x153e234ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B569f3c:{NFSU2_TR(0x569f3c);
if(r1(R+518)){TAIL_STATIC(0x56a0f9u,56a);}
}
B569f42:L569f42:{c.instructions+=2;NFSU2_TR(0x569f42);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9f00f07ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B569f48:{NFSU2_TR(0x569f48);
if(r1(R+518)){{goto L569f6a;}}
}
B569f4a:L569f4a:{c.instructions+=2;NFSU2_TR(0x569f4a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc407210ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B569f50:{NFSU2_TR(0x569f50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x56a2f7u,56a);}
}
B569f56:L569f56:{c.instructions+=6;NFSU2_TR(0x569f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569f59:{NFSU2_TR(0x569f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569f5c:{NFSU2_TR(0x569f5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B569f5e:{NFSU2_TR(0x569f5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569f5f:{NFSU2_TR(0x569f5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569f60:{NFSU2_TR(0x569f60);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569f63ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B569f63:L569f63:{c.instructions+=5;NFSU2_TR(0x569f63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569f64:{NFSU2_TR(0x569f64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569f65:{NFSU2_TR(0x569f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569f66:{NFSU2_TR(0x569f66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569f67:{NFSU2_TR(0x569f67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569f6a:L569f6a:{c.instructions+=1;NFSU2_TR(0x569f6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569f6full));
TAIL_STATIC(0x53b740u,53b);
}
B569f6f:L569f6f:{c.instructions+=1;NFSU2_TR(0x569f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569f74ull));
TAIL_STATIC(0x53b6c0u,53b);
}
B569f74:L569f74:{c.instructions+=2;NFSU2_TR(0x569f74);
__builtin_memmove((R+4),(R+24),4);
}
B569f76:{NFSU2_TR(0x569f76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569f7bull));
TAIL_STATIC(0x50f270u,50f);
}
B569f7b:L569f7b:{c.instructions+=4;NFSU2_TR(0x569f7b);
__builtin_memmove(gp(0x839bb0),(R+0),4);
}
B569f80:{NFSU2_TR(0x569f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B569f83:{NFSU2_TR(0x569f83);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B569f85:{NFSU2_TR(0x569f85);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L569fb0;}}
}
B569f87:L569f87:{c.instructions+=4;NFSU2_TR(0x569f87);
__builtin_memmove((R+4),gp(0x7fa1c8),4);
}
B569f8d:{NFSU2_TR(0x569f8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569f8e:{NFSU2_TR(0x569f8e);
u8 U[4];
w4(U+0,u32(0x422f7587ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569f93:{NFSU2_TR(0x569f93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569f98ull));
TAIL_STATIC(0x55dda0u,55d);
}
B569f98:L569f98:{c.instructions+=4;NFSU2_TR(0x569f98);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B569f9b:{NFSU2_TR(0x569f9b);
__builtin_memmove((R+4),(R+24),4);
}
B569f9d:{NFSU2_TR(0x569f9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B569fa4:{NFSU2_TR(0x569fa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569fa9ull));
TAIL_STATIC(0x562530u,562);
}
B569fa9:L569fa9:{c.instructions+=5;NFSU2_TR(0x569fa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B569faa:{NFSU2_TR(0x569faa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B569fab:{NFSU2_TR(0x569fab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B569fac:{NFSU2_TR(0x569fac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B569fad:{NFSU2_TR(0x569fad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B569fb0:L569fb0:{c.instructions+=2;NFSU2_TR(0x569fb0);
__builtin_memmove((R+4),(R+24),4);
}
B569fb2:{NFSU2_TR(0x569fb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569fb7ull));
TAIL_STATIC(0x50f270u,50f);
}
B569fb7:L569fb7:{c.instructions+=3;NFSU2_TR(0x569fb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569fb8:{NFSU2_TR(0x569fb8);
w4(R+4,u32(0x838980ull));
}
B569fbd:{NFSU2_TR(0x569fbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569fc2ull));
TAIL_STATIC(0x521b00u,521);
}
B569fc2:L569fc2:{c.instructions+=3;NFSU2_TR(0x569fc2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569fc4:{NFSU2_TR(0x569fc4);
__builtin_memmove((R+4),(R+24),4);
}
B569fc6:{NFSU2_TR(0x569fc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569fcbull));
TAIL_STATIC(0x50f270u,50f);
}
B569fcb:L569fcb:{c.instructions+=3;NFSU2_TR(0x569fcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569fcc:{NFSU2_TR(0x569fcc);
w4(R+4,u32(0x838980ull));
}
B569fd1:{NFSU2_TR(0x569fd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569fd6ull));
TAIL_STATIC(0x5213d0u,521);
}
B569fd6:L569fd6:{c.instructions+=7;NFSU2_TR(0x569fd6);
__builtin_memmove((R+8),gp(0x861e74),4);
}
B569fdc:{NFSU2_TR(0x569fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B569fdf:{NFSU2_TR(0x569fdf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569fe0:{NFSU2_TR(0x569fe0);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569fe5:{NFSU2_TR(0x569fe5);
u8 U[4];
w4(U+0,u32(0xeb3a688aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569fea:{NFSU2_TR(0x569fea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569feb:{NFSU2_TR(0x569feb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569ff0ull));
TAIL_STATIC(0x537b80u,537);
}
B569ff0:L569ff0:{c.instructions+=3;NFSU2_TR(0x569ff0);
__builtin_memmove((R+4),gp(0x7fa1c8),4);
}
B569ff6:{NFSU2_TR(0x569ff6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B569ff7:{NFSU2_TR(0x569ff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x569ffcull));
TAIL_STATIC(0x51bd10u,51b);
}
B569ffc:L569ffc:{c.instructions+=2;NFSU2_TR(0x569ffc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B569fff:{NFSU2_TR(0x569fff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
TAIL_STATIC(0x56a001u,56a);
}
XIT:NFSU2_TR_EXIT(0x569,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
