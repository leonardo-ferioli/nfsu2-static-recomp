#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_589(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_745(u8* __restrict R,Cpu& c);
u32 body_748(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x588,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x588,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_588(u8* __restrict R,Cpu& c);
u32 page_588(Cpu& c){return body_588(c.regs.data(),c);}
__attribute__((noinline)) u32 body_588(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x588001:goto L588001;
case 0x588007:goto L588007;
case 0x588008:c.instructions+=5;goto B588008;
case 0x588009:c.instructions+=4;goto B588009;
case 0x58800a:c.instructions+=3;goto B58800a;
case 0x58800c:c.instructions+=2;goto B58800c;
case 0x58800d:c.instructions+=1;goto B58800d;
case 0x588010:goto L588010;
case 0x588011:c.instructions+=15;goto B588011;
case 0x588013:c.instructions+=14;goto B588013;
case 0x588016:c.instructions+=13;goto B588016;
case 0x588019:c.instructions+=12;goto B588019;
case 0x58801c:c.instructions+=11;goto B58801c;
case 0x58801d:c.instructions+=10;goto B58801d;
case 0x58801f:c.instructions+=9;goto B58801f;
case 0x588025:c.instructions+=8;goto B588025;
case 0x58802b:c.instructions+=7;goto B58802b;
case 0x58802e:c.instructions+=6;goto B58802e;
case 0x58802f:c.instructions+=5;goto B58802f;
case 0x588032:c.instructions+=4;goto B588032;
case 0x588039:c.instructions+=3;goto B588039;
case 0x58803b:c.instructions+=2;goto B58803b;
case 0x58803c:c.instructions+=1;goto B58803c;
case 0x588041:goto L588041;
case 0x588043:c.instructions+=2;goto B588043;
case 0x588047:c.instructions+=1;goto B588047;
case 0x58804d:goto L58804d;
case 0x588050:goto L588050;
case 0x588052:c.instructions+=3;goto B588052;
case 0x588057:c.instructions+=2;goto B588057;
case 0x58805c:c.instructions+=1;goto B58805c;
case 0x588060:goto L588060;
case 0x588062:goto L588062;
case 0x588064:c.instructions+=9;goto B588064;
case 0x588068:c.instructions+=8;goto B588068;
case 0x58806a:c.instructions+=7;goto B58806a;
case 0x58806b:c.instructions+=6;goto B58806b;
case 0x58806e:c.instructions+=5;goto B58806e;
case 0x588071:c.instructions+=4;goto B588071;
case 0x588073:c.instructions+=3;goto B588073;
case 0x588075:c.instructions+=2;goto B588075;
case 0x588079:c.instructions+=1;goto B588079;
case 0x58807b:goto L58807b;
case 0x588080:goto L588080;
case 0x588082:c.instructions+=5;goto B588082;
case 0x588086:c.instructions+=4;goto B588086;
case 0x588087:c.instructions+=3;goto B588087;
case 0x58808a:c.instructions+=2;goto B58808a;
case 0x588092:c.instructions+=1;goto B588092;
case 0x588097:goto L588097;
case 0x58809b:c.instructions+=4;goto B58809b;
case 0x58809f:c.instructions+=3;goto B58809f;
case 0x5880a0:c.instructions+=2;goto B5880a0;
case 0x5880a2:c.instructions+=1;goto B5880a2;
case 0x5880a4:goto L5880a4;
case 0x5880a8:goto L5880a8;
case 0x5880aa:c.instructions+=2;goto B5880aa;
case 0x5880ac:c.instructions+=1;goto B5880ac;
case 0x5880ae:goto L5880ae;
case 0x5880b0:goto L5880b0;
case 0x5880b5:c.instructions+=4;goto B5880b5;
case 0x5880b8:c.instructions+=3;goto B5880b8;
case 0x5880ba:c.instructions+=2;goto B5880ba;
case 0x5880bb:c.instructions+=1;goto B5880bb;
case 0x5880c0:goto L5880c0;
case 0x5880c1:c.instructions+=2;goto B5880c1;
case 0x5880c3:c.instructions+=1;goto B5880c3;
case 0x5880c5:goto L5880c5;
case 0x5880c9:goto L5880c9;
case 0x5880cc:c.instructions+=2;goto B5880cc;
case 0x5880cf:c.instructions+=1;goto B5880cf;
case 0x5880d1:goto L5880d1;
case 0x5880d4:c.instructions+=3;goto B5880d4;
case 0x5880d7:c.instructions+=2;goto B5880d7;
case 0x5880d9:c.instructions+=1;goto B5880d9;
case 0x5880db:goto L5880db;
case 0x5880de:c.instructions+=6;goto B5880de;
case 0x5880df:c.instructions+=5;goto B5880df;
case 0x5880e3:c.instructions+=4;goto B5880e3;
case 0x5880e4:c.instructions+=3;goto B5880e4;
case 0x5880e7:c.instructions+=2;goto B5880e7;
case 0x5880ef:c.instructions+=1;goto B5880ef;
case 0x5880f4:goto L5880f4;
case 0x5880f8:c.instructions+=4;goto B5880f8;
case 0x5880fb:c.instructions+=3;goto B5880fb;
case 0x5880fc:c.instructions+=2;goto B5880fc;
case 0x5880fd:c.instructions+=1;goto B5880fd;
case 0x588102:goto L588102;
case 0x588105:c.instructions+=7;goto B588105;
case 0x588107:c.instructions+=6;goto B588107;
case 0x588109:c.instructions+=5;goto B588109;
case 0x58810c:c.instructions+=4;goto B58810c;
case 0x58810e:c.instructions+=3;goto B58810e;
case 0x58810f:c.instructions+=2;goto B58810f;
case 0x588112:c.instructions+=1;goto B588112;
case 0x588117:goto L588117;
case 0x588119:c.instructions+=4;goto B588119;
case 0x58811d:c.instructions+=3;goto B58811d;
case 0x588120:c.instructions+=2;goto B588120;
case 0x588122:c.instructions+=1;goto B588122;
case 0x588128:goto L588128;
case 0x588129:c.instructions+=5;goto B588129;
case 0x58812a:c.instructions+=4;goto B58812a;
case 0x58812b:c.instructions+=3;goto B58812b;
case 0x58812d:c.instructions+=2;goto B58812d;
case 0x58812e:c.instructions+=1;goto B58812e;
case 0x588130:goto L588130;
case 0x588132:c.instructions+=13;goto B588132;
case 0x588134:c.instructions+=12;goto B588134;
case 0x588137:c.instructions+=11;goto B588137;
case 0x58813e:c.instructions+=10;goto B58813e;
case 0x588144:c.instructions+=9;goto B588144;
case 0x588147:c.instructions+=8;goto B588147;
case 0x58814b:c.instructions+=7;goto B58814b;
case 0x58814f:c.instructions+=6;goto B58814f;
case 0x588152:c.instructions+=5;goto B588152;
case 0x588155:c.instructions+=4;goto B588155;
case 0x58815c:c.instructions+=3;goto B58815c;
case 0x588162:c.instructions+=2;goto B588162;
case 0x588165:c.instructions+=1;goto B588165;
case 0x588170:goto L588170;
case 0x588176:c.instructions+=5;goto B588176;
case 0x588177:c.instructions+=4;goto B588177;
case 0x588178:c.instructions+=3;goto B588178;
case 0x58817f:c.instructions+=2;goto B58817f;
case 0x588181:c.instructions+=1;goto B588181;
case 0x588186:goto L588186;
case 0x588189:c.instructions+=1;goto B588189;
case 0x58818b:goto L58818b;
case 0x58818e:c.instructions+=2;goto B58818e;
case 0x588193:c.instructions+=1;goto B588193;
case 0x588195:goto L588195;
case 0x588197:goto L588197;
case 0x588199:goto L588199;
case 0x58819b:c.instructions+=7;goto B58819b;
case 0x58819d:c.instructions+=6;goto B58819d;
case 0x5881a1:c.instructions+=5;goto B5881a1;
case 0x5881a6:c.instructions+=4;goto B5881a6;
case 0x5881b1:c.instructions+=3;goto B5881b1;
case 0x5881bc:c.instructions+=2;goto B5881bc;
case 0x5881c4:c.instructions+=1;goto B5881c4;
case 0x5881c9:goto L5881c9;
case 0x5881cb:c.instructions+=3;goto B5881cb;
case 0x5881cc:c.instructions+=2;goto B5881cc;
case 0x5881d0:c.instructions+=1;goto B5881d0;
case 0x5881d5:goto L5881d5;
case 0x5881d7:c.instructions+=4;goto B5881d7;
case 0x5881d9:c.instructions+=3;goto B5881d9;
case 0x5881da:c.instructions+=2;goto B5881da;
case 0x5881de:c.instructions+=1;goto B5881de;
case 0x5881e3:goto L5881e3;
case 0x5881e9:c.instructions+=4;goto B5881e9;
case 0x5881eb:c.instructions+=3;goto B5881eb;
case 0x5881ec:c.instructions+=2;goto B5881ec;
case 0x5881f0:c.instructions+=1;goto B5881f0;
case 0x5881f5:goto L5881f5;
case 0x5881f9:c.instructions+=4;goto B5881f9;
case 0x5881fa:c.instructions+=3;goto B5881fa;
case 0x5881fb:c.instructions+=2;goto B5881fb;
case 0x588200:c.instructions+=1;goto B588200;
case 0x588205:goto L588205;
case 0x588207:c.instructions+=5;goto B588207;
case 0x58820b:c.instructions+=4;goto B58820b;
case 0x58820c:c.instructions+=3;goto B58820c;
case 0x58820e:c.instructions+=2;goto B58820e;
case 0x58820f:c.instructions+=1;goto B58820f;
case 0x588214:goto L588214;
case 0x588217:c.instructions+=4;goto B588217;
case 0x588218:c.instructions+=3;goto B588218;
case 0x588219:c.instructions+=2;goto B588219;
case 0x58821f:c.instructions+=1;goto B58821f;
case 0x588220:goto L588220;
case 0x588225:c.instructions+=3;goto B588225;
case 0x58822b:c.instructions+=2;goto B58822b;
case 0x58822d:c.instructions+=1;goto B58822d;
case 0x588233:goto L588233;
case 0x588234:c.instructions+=4;goto B588234;
case 0x58823a:c.instructions+=3;goto B58823a;
case 0x588241:c.instructions+=2;goto B588241;
case 0x588243:c.instructions+=1;goto B588243;
case 0x588249:goto L588249;
case 0x58824b:c.instructions+=7;goto B58824b;
case 0x58824d:c.instructions+=6;goto B58824d;
case 0x588251:c.instructions+=5;goto B588251;
case 0x588256:c.instructions+=4;goto B588256;
case 0x588261:c.instructions+=3;goto B588261;
case 0x58826c:c.instructions+=2;goto B58826c;
case 0x588274:c.instructions+=1;goto B588274;
case 0x588279:goto L588279;
case 0x588280:c.instructions+=6;goto B588280;
case 0x588282:c.instructions+=5;goto B588282;
case 0x588284:c.instructions+=4;goto B588284;
case 0x588285:c.instructions+=3;goto B588285;
case 0x588289:c.instructions+=2;goto B588289;
case 0x58828d:c.instructions+=1;goto B58828d;
case 0x588292:goto L588292;
case 0x588298:c.instructions+=7;goto B588298;
case 0x58829a:c.instructions+=6;goto B58829a;
case 0x58829e:c.instructions+=5;goto B58829e;
case 0x5882a4:c.instructions+=4;goto B5882a4;
case 0x5882a8:c.instructions+=3;goto B5882a8;
case 0x5882ac:c.instructions+=2;goto B5882ac;
case 0x5882ad:c.instructions+=1;goto B5882ad;
case 0x5882b2:goto L5882b2;
case 0x5882b8:c.instructions+=3;goto B5882b8;
case 0x5882ba:c.instructions+=2;goto B5882ba;
case 0x5882bc:c.instructions+=1;goto B5882bc;
case 0x5882be:goto L5882be;
case 0x5882c0:goto L5882c0;
case 0x5882c6:c.instructions+=2;goto B5882c6;
case 0x5882c8:c.instructions+=1;goto B5882c8;
case 0x5882ca:goto L5882ca;
case 0x5882cc:goto L5882cc;
case 0x5882d2:c.instructions+=6;goto B5882d2;
case 0x5882d3:c.instructions+=5;goto B5882d3;
case 0x5882d5:c.instructions+=4;goto B5882d5;
case 0x5882d6:c.instructions+=3;goto B5882d6;
case 0x5882d7:c.instructions+=2;goto B5882d7;
case 0x5882db:c.instructions+=1;goto B5882db;
case 0x5882e0:goto L5882e0;
case 0x5882e6:c.instructions+=7;goto B5882e6;
case 0x5882e8:c.instructions+=6;goto B5882e8;
case 0x5882ec:c.instructions+=5;goto B5882ec;
case 0x5882f2:c.instructions+=4;goto B5882f2;
case 0x5882f6:c.instructions+=3;goto B5882f6;
case 0x5882fa:c.instructions+=2;goto B5882fa;
case 0x5882fb:c.instructions+=1;goto B5882fb;
case 0x588300:goto L588300;
case 0x588307:c.instructions+=5;goto B588307;
case 0x58830a:c.instructions+=4;goto B58830a;
case 0x58830c:c.instructions+=3;goto B58830c;
case 0x58830d:c.instructions+=2;goto B58830d;
case 0x588311:c.instructions+=1;goto B588311;
case 0x588316:goto L588316;
case 0x588317:c.instructions+=5;goto B588317;
case 0x58831b:c.instructions+=4;goto B58831b;
case 0x58831c:c.instructions+=3;goto B58831c;
case 0x58831d:c.instructions+=2;goto B58831d;
case 0x588322:c.instructions+=1;goto B588322;
case 0x588327:goto L588327;
case 0x58832e:c.instructions+=6;goto B58832e;
case 0x588330:c.instructions+=5;goto B588330;
case 0x588334:c.instructions+=4;goto B588334;
case 0x588335:c.instructions+=3;goto B588335;
case 0x588337:c.instructions+=2;goto B588337;
case 0x588338:c.instructions+=1;goto B588338;
case 0x58833d:goto L58833d;
case 0x588340:c.instructions+=1;goto B588340;
case 0x588341:goto L588341;
case 0x588342:goto L588342;
case 0x588348:c.instructions+=1;goto B588348;
case 0x588350:goto L588350;
case 0x588351:c.instructions+=7;goto B588351;
case 0x588355:c.instructions+=6;goto B588355;
case 0x588356:c.instructions+=5;goto B588356;
case 0x58835a:c.instructions+=4;goto B58835a;
case 0x58835b:c.instructions+=3;goto B58835b;
case 0x58835c:c.instructions+=2;goto B58835c;
case 0x588360:c.instructions+=1;goto B588360;
case 0x588365:goto L588365;
case 0x588368:c.instructions+=2;goto B588368;
case 0x58836b:c.instructions+=1;goto B58836b;
case 0x58836d:goto L58836d;
case 0x58836f:c.instructions+=1;goto B58836f;
case 0x588371:goto L588371;
case 0x588375:c.instructions+=1;goto B588375;
case 0x588377:goto L588377;
case 0x588378:c.instructions+=4;goto B588378;
case 0x588379:c.instructions+=3;goto B588379;
case 0x58837a:c.instructions+=2;goto B58837a;
case 0x58837b:c.instructions+=1;goto B58837b;
case 0x588380:goto L588380;
case 0x588383:goto L588383;
case 0x588386:c.instructions+=2;goto B588386;
case 0x58838c:c.instructions+=1;goto B58838c;
case 0x58838e:goto L58838e;
case 0x58838f:c.instructions+=4;goto B58838f;
case 0x588390:c.instructions+=3;goto B588390;
case 0x588391:c.instructions+=2;goto B588391;
case 0x588392:c.instructions+=1;goto B588392;
case 0x5883a0:goto L5883a0;
case 0x5883a1:c.instructions+=7;goto B5883a1;
case 0x5883a5:c.instructions+=6;goto B5883a5;
case 0x5883a6:c.instructions+=5;goto B5883a6;
case 0x5883aa:c.instructions+=4;goto B5883aa;
case 0x5883ab:c.instructions+=3;goto B5883ab;
case 0x5883ac:c.instructions+=2;goto B5883ac;
case 0x5883b0:c.instructions+=1;goto B5883b0;
case 0x5883b5:goto L5883b5;
case 0x5883b8:c.instructions+=2;goto B5883b8;
case 0x5883bb:c.instructions+=1;goto B5883bb;
case 0x5883bd:goto L5883bd;
case 0x5883bf:c.instructions+=1;goto B5883bf;
case 0x5883c1:goto L5883c1;
case 0x5883c2:c.instructions+=4;goto B5883c2;
case 0x5883c3:c.instructions+=3;goto B5883c3;
case 0x5883c4:c.instructions+=2;goto B5883c4;
case 0x5883c5:c.instructions+=1;goto B5883c5;
case 0x5883ca:goto L5883ca;
case 0x5883cd:goto L5883cd;
case 0x5883d0:c.instructions+=2;goto B5883d0;
case 0x5883d6:c.instructions+=1;goto B5883d6;
case 0x5883d8:goto L5883d8;
case 0x5883d9:c.instructions+=4;goto B5883d9;
case 0x5883da:c.instructions+=3;goto B5883da;
case 0x5883db:c.instructions+=2;goto B5883db;
case 0x5883dc:c.instructions+=1;goto B5883dc;
case 0x5883e0:goto L5883e0;
case 0x5883e6:c.instructions+=12;goto B5883e6;
case 0x5883e8:c.instructions+=11;goto B5883e8;
case 0x5883e9:c.instructions+=10;goto B5883e9;
case 0x5883f0:c.instructions+=9;goto B5883f0;
case 0x5883f4:c.instructions+=8;goto B5883f4;
case 0x5883fb:c.instructions+=7;goto B5883fb;
case 0x588402:c.instructions+=6;goto B588402;
case 0x588405:c.instructions+=5;goto B588405;
case 0x588407:c.instructions+=4;goto B588407;
case 0x588408:c.instructions+=3;goto B588408;
case 0x58840c:c.instructions+=2;goto B58840c;
case 0x588414:c.instructions+=1;goto B588414;
case 0x588419:goto L588419;
case 0x58841b:c.instructions+=4;goto B58841b;
case 0x58841f:c.instructions+=3;goto B58841f;
case 0x588420:c.instructions+=2;goto B588420;
case 0x588421:c.instructions+=1;goto B588421;
case 0x588426:goto L588426;
case 0x588429:c.instructions+=3;goto B588429;
case 0x58842a:c.instructions+=2;goto B58842a;
case 0x588430:c.instructions+=1;goto B588430;
case 0x588440:goto L588440;
case 0x588441:c.instructions+=5;goto B588441;
case 0x588443:c.instructions+=4;goto B588443;
case 0x588446:c.instructions+=3;goto B588446;
case 0x588448:c.instructions+=2;goto B588448;
case 0x58844e:c.instructions+=1;goto B58844e;
case 0x588450:goto L588450;
case 0x588451:c.instructions+=1;goto B588451;
case 0x588456:goto L588456;
case 0x588459:c.instructions+=1;goto B588459;
case 0x588460:goto L588460;
case 0x588465:c.instructions+=1;goto B588465;
case 0x588467:goto L588467;
case 0x588468:c.instructions+=1;goto B588468;
case 0x58846d:goto L58846d;
case 0x588470:goto L588470;
case 0x588472:c.instructions+=2;goto B588472;
case 0x588473:c.instructions+=1;goto B588473;
case 0x588480:goto L588480;
case 0x588483:c.instructions+=2;goto B588483;
case 0x588485:c.instructions+=1;goto B588485;
case 0x588487:goto L588487;
case 0x58848d:c.instructions+=2;goto B58848d;
case 0x58848f:c.instructions+=1;goto B58848f;
case 0x588491:goto L588491;
case 0x588496:goto L588496;
case 0x58849b:goto L58849b;
case 0x5884a0:goto L5884a0;
case 0x5884a1:c.instructions+=5;goto B5884a1;
case 0x5884a2:c.instructions+=4;goto B5884a2;
case 0x5884a4:c.instructions+=3;goto B5884a4;
case 0x5884a6:c.instructions+=2;goto B5884a6;
case 0x5884a8:c.instructions+=1;goto B5884a8;
case 0x5884aa:goto L5884aa;
case 0x5884b0:goto L5884b0;
case 0x5884b3:c.instructions+=5;goto B5884b3;
case 0x5884b5:c.instructions+=4;goto B5884b5;
case 0x5884b7:c.instructions+=3;goto B5884b7;
case 0x5884ba:c.instructions+=2;goto B5884ba;
case 0x5884bc:c.instructions+=1;goto B5884bc;
case 0x5884c1:goto L5884c1;
case 0x5884c2:c.instructions+=1;goto B5884c2;
case 0x5884c7:goto L5884c7;
case 0x5884c9:c.instructions+=3;goto B5884c9;
case 0x5884cc:c.instructions+=2;goto B5884cc;
case 0x5884ce:c.instructions+=1;goto B5884ce;
case 0x5884d0:goto L5884d0;
case 0x5884d1:c.instructions+=2;goto B5884d1;
case 0x5884d2:c.instructions+=1;goto B5884d2;
case 0x5884e0:goto L5884e0;
case 0x5884e2:c.instructions+=12;goto B5884e2;
case 0x5884e7:c.instructions+=11;goto B5884e7;
case 0x5884ed:c.instructions+=10;goto B5884ed;
case 0x5884ee:c.instructions+=9;goto B5884ee;
case 0x5884f5:c.instructions+=8;goto B5884f5;
case 0x5884f6:c.instructions+=7;goto B5884f6;
case 0x5884f7:c.instructions+=6;goto B5884f7;
case 0x5884f8:c.instructions+=5;goto B5884f8;
case 0x5884fa:c.instructions+=4;goto B5884fa;
case 0x5884fe:c.instructions+=3;goto B5884fe;
case 0x588504:c.instructions+=2;goto B588504;
case 0x58850c:c.instructions+=1;goto B58850c;
case 0x588511:goto L588511;
case 0x588514:c.instructions+=2;goto B588514;
case 0x588519:c.instructions+=1;goto B588519;
case 0x58851e:goto L58851e;
case 0x588521:c.instructions+=4;goto B588521;
case 0x588524:c.instructions+=3;goto B588524;
case 0x588526:c.instructions+=2;goto B588526;
case 0x58852b:c.instructions+=1;goto B58852b;
case 0x58852d:goto L58852d;
case 0x588530:goto L588530;
case 0x588532:c.instructions+=5;goto B588532;
case 0x588535:c.instructions+=4;goto B588535;
case 0x588537:c.instructions+=3;goto B588537;
case 0x588538:c.instructions+=2;goto B588538;
case 0x58853b:c.instructions+=1;goto B58853b;
case 0x588540:goto L588540;
case 0x588542:c.instructions+=3;goto B588542;
case 0x588545:c.instructions+=2;goto B588545;
case 0x588547:c.instructions+=1;goto B588547;
case 0x588549:goto L588549;
case 0x58854e:c.instructions+=6;goto B58854e;
case 0x588550:c.instructions+=5;goto B588550;
case 0x588552:c.instructions+=4;goto B588552;
case 0x588555:c.instructions+=3;goto B588555;
case 0x588556:c.instructions+=2;goto B588556;
case 0x58855e:c.instructions+=1;goto B58855e;
case 0x588563:goto L588563;
case 0x588567:c.instructions+=5;goto B588567;
case 0x588568:c.instructions+=4;goto B588568;
case 0x588569:c.instructions+=3;goto B588569;
case 0x588570:c.instructions+=2;goto B588570;
case 0x588573:c.instructions+=1;goto B588573;
case 0x588580:goto L588580;
case 0x588582:c.instructions+=12;goto B588582;
case 0x588587:c.instructions+=11;goto B588587;
case 0x58858d:c.instructions+=10;goto B58858d;
case 0x58858e:c.instructions+=9;goto B58858e;
case 0x588595:c.instructions+=8;goto B588595;
case 0x588596:c.instructions+=7;goto B588596;
case 0x588597:c.instructions+=6;goto B588597;
case 0x588598:c.instructions+=5;goto B588598;
case 0x58859a:c.instructions+=4;goto B58859a;
case 0x58859b:c.instructions+=3;goto B58859b;
case 0x58859f:c.instructions+=2;goto B58859f;
case 0x5885a7:c.instructions+=1;goto B5885a7;
case 0x5885ac:goto L5885ac;
case 0x5885af:c.instructions+=5;goto B5885af;
case 0x5885b1:c.instructions+=4;goto B5885b1;
case 0x5885b4:c.instructions+=3;goto B5885b4;
case 0x5885b6:c.instructions+=2;goto B5885b6;
case 0x5885bc:c.instructions+=1;goto B5885bc;
case 0x5885c1:goto L5885c1;
case 0x5885c7:c.instructions+=1;goto B5885c7;
case 0x5885cc:goto L5885cc;
case 0x5885d2:c.instructions+=3;goto B5885d2;
case 0x5885d3:c.instructions+=2;goto B5885d3;
case 0x5885d9:c.instructions+=1;goto B5885d9;
case 0x5885de:goto L5885de;
case 0x5885e1:c.instructions+=4;goto B5885e1;
case 0x5885e3:c.instructions+=3;goto B5885e3;
case 0x5885e9:c.instructions+=2;goto B5885e9;
case 0x5885ed:c.instructions+=1;goto B5885ed;
case 0x5885f2:goto L5885f2;
case 0x5885f4:c.instructions+=2;goto B5885f4;
case 0x5885fc:c.instructions+=1;goto B5885fc;
case 0x5885fe:goto L5885fe;
case 0x588600:goto L588600;
case 0x588602:c.instructions+=6;goto B588602;
case 0x588604:c.instructions+=5;goto B588604;
case 0x588607:c.instructions+=4;goto B588607;
case 0x588609:c.instructions+=3;goto B588609;
case 0x58860a:c.instructions+=2;goto B58860a;
case 0x58860d:c.instructions+=1;goto B58860d;
case 0x588612:goto L588612;
case 0x588614:c.instructions+=3;goto B588614;
case 0x588617:c.instructions+=2;goto B588617;
case 0x588619:c.instructions+=1;goto B588619;
case 0x58861b:goto L58861b;
case 0x58861f:c.instructions+=6;goto B58861f;
case 0x588620:c.instructions+=5;goto B588620;
case 0x588621:c.instructions+=4;goto B588621;
case 0x588622:c.instructions+=3;goto B588622;
case 0x588629:c.instructions+=2;goto B588629;
case 0x58862c:c.instructions+=1;goto B58862c;
case 0x588630:goto L588630;
case 0x588636:c.instructions+=10;goto B588636;
case 0x588638:c.instructions+=9;goto B588638;
case 0x58863d:c.instructions+=8;goto B58863d;
case 0x58863e:c.instructions+=7;goto B58863e;
case 0x588645:c.instructions+=6;goto B588645;
case 0x588646:c.instructions+=5;goto B588646;
case 0x588648:c.instructions+=4;goto B588648;
case 0x58864b:c.instructions+=3;goto B58864b;
case 0x58864d:c.instructions+=2;goto B58864d;
case 0x58864e:c.instructions+=1;goto B58864e;
case 0x588654:goto L588654;
case 0x588657:c.instructions+=2;goto B588657;
case 0x588659:c.instructions+=1;goto B588659;
case 0x58865f:goto L58865f;
case 0x588662:c.instructions+=3;goto B588662;
case 0x588665:c.instructions+=2;goto B588665;
case 0x588667:c.instructions+=1;goto B588667;
case 0x58866d:goto L58866d;
case 0x58866f:c.instructions+=2;goto B58866f;
case 0x588670:c.instructions+=1;goto B588670;
case 0x588675:goto L588675;
case 0x588679:c.instructions+=7;goto B588679;
case 0x58867c:c.instructions+=6;goto B58867c;
case 0x58867e:c.instructions+=5;goto B58867e;
case 0x588683:c.instructions+=4;goto B588683;
case 0x588684:c.instructions+=3;goto B588684;
case 0x58868b:c.instructions+=2;goto B58868b;
case 0x588690:c.instructions+=1;goto B588690;
case 0x588692:goto L588692;
case 0x588699:c.instructions+=5;goto B588699;
case 0x58869c:c.instructions+=4;goto B58869c;
case 0x58869d:c.instructions+=3;goto B58869d;
case 0x5886a2:c.instructions+=2;goto B5886a2;
case 0x5886a3:c.instructions+=1;goto B5886a3;
case 0x5886a5:goto L5886a5;
case 0x5886ac:c.instructions+=4;goto B5886ac;
case 0x5886af:c.instructions+=3;goto B5886af;
case 0x5886b0:c.instructions+=2;goto B5886b0;
case 0x5886b5:c.instructions+=1;goto B5886b5;
case 0x5886b6:goto L5886b6;
case 0x5886bb:goto L5886bb;
case 0x5886bd:c.instructions+=3;goto B5886bd;
case 0x5886c0:c.instructions+=2;goto B5886c0;
case 0x5886c2:c.instructions+=1;goto B5886c2;
case 0x5886c4:goto L5886c4;
case 0x5886c8:c.instructions+=5;goto B5886c8;
case 0x5886cf:c.instructions+=4;goto B5886cf;
case 0x5886d0:c.instructions+=3;goto B5886d0;
case 0x5886d1:c.instructions+=2;goto B5886d1;
case 0x5886d4:c.instructions+=1;goto B5886d4;
case 0x5886d7:goto L5886d7;
case 0x5886d9:c.instructions+=2;goto B5886d9;
case 0x5886db:c.instructions+=1;goto B5886db;
case 0x5886e0:goto L5886e0;
case 0x5886e3:c.instructions+=4;goto B5886e3;
case 0x5886e7:c.instructions+=3;goto B5886e7;
case 0x5886e9:c.instructions+=2;goto B5886e9;
case 0x5886f1:c.instructions+=1;goto B5886f1;
case 0x5886f3:goto L5886f3;
case 0x5886f7:c.instructions+=12;goto B5886f7;
case 0x5886fb:c.instructions+=11;goto B5886fb;
case 0x5886fc:c.instructions+=10;goto B5886fc;
case 0x5886fe:c.instructions+=9;goto B5886fe;
case 0x588704:c.instructions+=8;goto B588704;
case 0x588705:c.instructions+=7;goto B588705;
case 0x588706:c.instructions+=6;goto B588706;
case 0x58870b:c.instructions+=5;goto B58870b;
case 0x58870c:c.instructions+=4;goto B58870c;
case 0x58870e:c.instructions+=3;goto B58870e;
case 0x588713:c.instructions+=2;goto B588713;
case 0x588715:c.instructions+=1;goto B588715;
case 0x58871a:goto L58871a;
case 0x58871d:c.instructions+=9;goto B58871d;
case 0x588720:c.instructions+=8;goto B588720;
case 0x588723:c.instructions+=7;goto B588723;
case 0x588726:c.instructions+=6;goto B588726;
case 0x58872a:c.instructions+=5;goto B58872a;
case 0x588731:c.instructions+=4;goto B588731;
case 0x588732:c.instructions+=3;goto B588732;
case 0x588733:c.instructions+=2;goto B588733;
case 0x588736:c.instructions+=1;goto B588736;
case 0x588739:goto L588739;
case 0x58873b:c.instructions+=10;goto B58873b;
case 0x58873e:c.instructions+=9;goto B58873e;
case 0x588741:c.instructions+=8;goto B588741;
case 0x588744:c.instructions+=7;goto B588744;
case 0x588747:c.instructions+=6;goto B588747;
case 0x58874b:c.instructions+=5;goto B58874b;
case 0x588752:c.instructions+=4;goto B588752;
case 0x588753:c.instructions+=3;goto B588753;
case 0x588754:c.instructions+=2;goto B588754;
case 0x588757:c.instructions+=1;goto B588757;
case 0x58875a:goto L58875a;
case 0x58875e:c.instructions+=6;goto B58875e;
case 0x58875f:c.instructions+=5;goto B58875f;
case 0x588762:c.instructions+=4;goto B588762;
case 0x588769:c.instructions+=3;goto B588769;
case 0x58876a:c.instructions+=2;goto B58876a;
case 0x58876d:c.instructions+=1;goto B58876d;
case 0x588770:goto L588770;
case 0x588776:c.instructions+=6;goto B588776;
case 0x588777:c.instructions+=5;goto B588777;
case 0x588779:c.instructions+=4;goto B588779;
case 0x58877c:c.instructions+=3;goto B58877c;
case 0x58877e:c.instructions+=2;goto B58877e;
case 0x588782:c.instructions+=1;goto B588782;
case 0x588784:goto L588784;
case 0x588789:c.instructions+=3;goto B588789;
case 0x58878a:c.instructions+=2;goto B58878a;
case 0x588790:c.instructions+=1;goto B588790;
case 0x588793:goto L588793;
case 0x58879a:c.instructions+=5;goto B58879a;
case 0x58879b:c.instructions+=4;goto B58879b;
case 0x58879d:c.instructions+=3;goto B58879d;
case 0x58879f:c.instructions+=2;goto B58879f;
case 0x5887a0:c.instructions+=1;goto B5887a0;
case 0x5887a6:goto L5887a6;
case 0x5887a9:c.instructions+=1;goto B5887a9;
case 0x5887af:goto L5887af;
case 0x5887b6:c.instructions+=2;goto B5887b6;
case 0x5887b8:c.instructions+=1;goto B5887b8;
case 0x5887be:goto L5887be;
case 0x5887bf:c.instructions+=4;goto B5887bf;
case 0x5887c1:c.instructions+=3;goto B5887c1;
case 0x5887c6:c.instructions+=2;goto B5887c6;
case 0x5887cb:c.instructions+=1;goto B5887cb;
case 0x5887cf:goto L5887cf;
case 0x5887d1:goto L5887d1;
case 0x5887d3:c.instructions+=7;goto B5887d3;
case 0x5887d4:c.instructions+=6;goto B5887d4;
case 0x5887d9:c.instructions+=5;goto B5887d9;
case 0x5887da:c.instructions+=4;goto B5887da;
case 0x5887de:c.instructions+=3;goto B5887de;
case 0x5887e3:c.instructions+=2;goto B5887e3;
case 0x5887e4:c.instructions+=1;goto B5887e4;
case 0x5887e9:goto L5887e9;
case 0x5887ea:c.instructions+=5;goto B5887ea;
case 0x5887ef:c.instructions+=4;goto B5887ef;
case 0x5887f3:c.instructions+=3;goto B5887f3;
case 0x5887f8:c.instructions+=2;goto B5887f8;
case 0x5887f9:c.instructions+=1;goto B5887f9;
case 0x5887fe:goto L5887fe;
case 0x588805:c.instructions+=3;goto B588805;
case 0x588808:c.instructions+=2;goto B588808;
case 0x58880a:c.instructions+=1;goto B58880a;
case 0x58880c:goto L58880c;
case 0x58880e:c.instructions+=5;goto B58880e;
case 0x588813:c.instructions+=4;goto B588813;
case 0x588817:c.instructions+=3;goto B588817;
case 0x58881c:c.instructions+=2;goto B58881c;
case 0x58881d:c.instructions+=1;goto B58881d;
case 0x588822:goto L588822;
case 0x588825:goto L588825;
case 0x58882a:goto L58882a;
case 0x58882c:c.instructions+=1;goto B58882c;
case 0x58882e:goto L58882e;
case 0x588833:goto L588833;
case 0x588834:c.instructions+=5;goto B588834;
case 0x588839:c.instructions+=4;goto B588839;
case 0x58883d:c.instructions+=3;goto B58883d;
case 0x588842:c.instructions+=2;goto B588842;
case 0x588843:c.instructions+=1;goto B588843;
case 0x588848:goto L588848;
case 0x58884b:goto L58884b;
case 0x588850:goto L588850;
case 0x588852:c.instructions+=1;goto B588852;
case 0x588854:goto L588854;
case 0x588859:goto L588859;
case 0x58885a:c.instructions+=5;goto B58885a;
case 0x58885f:c.instructions+=4;goto B58885f;
case 0x588863:c.instructions+=3;goto B588863;
case 0x588868:c.instructions+=2;goto B588868;
case 0x588869:c.instructions+=1;goto B588869;
case 0x58886e:goto L58886e;
case 0x588871:goto L588871;
case 0x588878:c.instructions+=1;goto B588878;
case 0x58887a:goto L58887a;
case 0x58887f:c.instructions+=5;goto B58887f;
case 0x588884:c.instructions+=4;goto B588884;
case 0x588888:c.instructions+=3;goto B588888;
case 0x58888d:c.instructions+=2;goto B58888d;
case 0x58888e:c.instructions+=1;goto B58888e;
case 0x588893:goto L588893;
case 0x588896:goto L588896;
case 0x58889d:c.instructions+=1;goto B58889d;
case 0x5888a3:goto L5888a3;
case 0x5888a8:c.instructions+=1;goto B5888a8;
case 0x5888ad:goto L5888ad;
case 0x5888b0:c.instructions+=6;goto B5888b0;
case 0x5888b2:c.instructions+=5;goto B5888b2;
case 0x5888b7:c.instructions+=4;goto B5888b7;
case 0x5888b8:c.instructions+=3;goto B5888b8;
case 0x5888b9:c.instructions+=2;goto B5888b9;
case 0x5888bc:c.instructions+=1;goto B5888bc;
case 0x5888c2:goto L5888c2;
case 0x5888c3:c.instructions+=1;goto B5888c3;
case 0x5888c9:goto L5888c9;
case 0x5888cb:c.instructions+=1;goto B5888cb;
case 0x5888d1:goto L5888d1;
case 0x5888d3:c.instructions+=1;goto B5888d3;
case 0x5888d8:goto L5888d8;
case 0x5888da:c.instructions+=4;goto B5888da;
case 0x5888dd:c.instructions+=3;goto B5888dd;
case 0x5888e0:c.instructions+=2;goto B5888e0;
case 0x5888e2:c.instructions+=1;goto B5888e2;
case 0x5888e6:goto L5888e6;
case 0x5888e9:c.instructions+=1;goto B5888e9;
case 0x5888eb:goto L5888eb;
case 0x5888f0:c.instructions+=3;goto B5888f0;
case 0x5888f1:c.instructions+=2;goto B5888f1;
case 0x5888f3:c.instructions+=1;goto B5888f3;
case 0x5888f9:goto L5888f9;
case 0x5888fa:c.instructions+=1;goto B5888fa;
case 0x588900:goto L588900;
case 0x588902:c.instructions+=2;goto B588902;
case 0x588904:c.instructions+=1;goto B588904;
case 0x588906:goto L588906;
case 0x588909:c.instructions+=1;goto B588909;
case 0x58890b:goto L58890b;
case 0x58890c:c.instructions+=2;goto B58890c;
case 0x58890e:c.instructions+=1;goto B58890e;
case 0x588910:goto L588910;
case 0x588915:c.instructions+=3;goto B588915;
case 0x588916:c.instructions+=2;goto B588916;
case 0x588919:c.instructions+=1;goto B588919;
case 0x58891e:goto L58891e;
case 0x588921:goto L588921;
case 0x588923:c.instructions+=3;goto B588923;
case 0x588925:c.instructions+=2;goto B588925;
case 0x588926:c.instructions+=1;goto B588926;
case 0x58892b:goto L58892b;
case 0x58892d:c.instructions+=3;goto B58892d;
case 0x588930:c.instructions+=2;goto B588930;
case 0x588932:c.instructions+=1;goto B588932;
case 0x588934:goto L588934;
case 0x588935:c.instructions+=1;goto B588935;
case 0x58893a:goto L58893a;
case 0x58893b:c.instructions+=2;goto B58893b;
case 0x58893d:c.instructions+=1;goto B58893d;
case 0x588942:goto L588942;
case 0x588944:c.instructions+=3;goto B588944;
case 0x588947:c.instructions+=2;goto B588947;
case 0x588949:c.instructions+=1;goto B588949;
case 0x58894b:goto L58894b;
case 0x588950:goto L588950;
case 0x588955:c.instructions+=2;goto B588955;
case 0x58895a:c.instructions+=1;goto B58895a;
case 0x58895c:goto L58895c;
case 0x58895e:goto L58895e;
case 0x58895f:c.instructions+=3;goto B58895f;
case 0x588960:c.instructions+=2;goto B588960;
case 0x588961:c.instructions+=1;goto B588961;
case 0x588966:goto L588966;
case 0x58896a:c.instructions+=5;goto B58896a;
case 0x58896d:c.instructions+=4;goto B58896d;
case 0x58896e:c.instructions+=3;goto B58896e;
case 0x58896f:c.instructions+=2;goto B58896f;
case 0x588970:c.instructions+=1;goto B588970;
case 0x588975:goto L588975;
case 0x588979:c.instructions+=3;goto B588979;
case 0x58897a:c.instructions+=2;goto B58897a;
case 0x58897d:c.instructions+=1;goto B58897d;
case 0x588982:goto L588982;
case 0x588983:c.instructions+=2;goto B588983;
case 0x588985:c.instructions+=1;goto B588985;
case 0x58898a:goto L58898a;
case 0x58898c:c.instructions+=3;goto B58898c;
case 0x58898f:c.instructions+=2;goto B58898f;
case 0x588991:c.instructions+=1;goto B588991;
case 0x588993:goto L588993;
case 0x588994:c.instructions+=1;goto B588994;
case 0x588999:goto L588999;
case 0x58899d:c.instructions+=1;goto B58899d;
case 0x5889a0:goto L5889a0;
case 0x5889a1:c.instructions+=3;goto B5889a1;
case 0x5889a4:c.instructions+=2;goto B5889a4;
case 0x5889a8:c.instructions+=1;goto B5889a8;
case 0x5889ae:goto L5889ae;
case 0x5889b1:c.instructions+=7;goto B5889b1;
case 0x5889b4:c.instructions+=6;goto B5889b4;
case 0x5889b6:c.instructions+=5;goto B5889b6;
case 0x5889b7:c.instructions+=4;goto B5889b7;
case 0x5889b8:c.instructions+=3;goto B5889b8;
case 0x5889bd:c.instructions+=2;goto B5889bd;
case 0x5889be:c.instructions+=1;goto B5889be;
case 0x5889c3:goto L5889c3;
case 0x5889c4:c.instructions+=5;goto B5889c4;
case 0x5889c9:c.instructions+=4;goto B5889c9;
case 0x5889cd:c.instructions+=3;goto B5889cd;
case 0x5889d2:c.instructions+=2;goto B5889d2;
case 0x5889d3:c.instructions+=1;goto B5889d3;
case 0x5889d8:goto L5889d8;
case 0x5889d9:c.instructions+=1;goto B5889d9;
case 0x5889de:goto L5889de;
case 0x5889e2:c.instructions+=1;goto B5889e2;
case 0x5889e5:goto L5889e5;
case 0x5889e6:c.instructions+=1;goto B5889e6;
case 0x5889eb:goto L5889eb;
case 0x5889ee:goto L5889ee;
case 0x5889f5:c.instructions+=11;goto B5889f5;
case 0x5889fc:c.instructions+=10;goto B5889fc;
case 0x5889fe:c.instructions+=9;goto B5889fe;
case 0x5889ff:c.instructions+=8;goto B5889ff;
case 0x588a00:c.instructions+=7;goto B588a00;
case 0x588a01:c.instructions+=6;goto B588a01;
case 0x588a06:c.instructions+=5;goto B588a06;
case 0x588a0a:c.instructions+=4;goto B588a0a;
case 0x588a0b:c.instructions+=3;goto B588a0b;
case 0x588a10:c.instructions+=2;goto B588a10;
case 0x588a12:c.instructions+=1;goto B588a12;
case 0x588a17:goto L588a17;
case 0x588a18:c.instructions+=5;goto B588a18;
case 0x588a19:c.instructions+=4;goto B588a19;
case 0x588a1a:c.instructions+=3;goto B588a1a;
case 0x588a1b:c.instructions+=2;goto B588a1b;
case 0x588a21:c.instructions+=1;goto B588a21;
case 0x588a24:goto L588a24;
case 0x588a25:c.instructions+=5;goto B588a25;
case 0x588a26:c.instructions+=4;goto B588a26;
case 0x588a29:c.instructions+=3;goto B588a29;
case 0x588a2a:c.instructions+=2;goto B588a2a;
case 0x588a30:c.instructions+=1;goto B588a30;
case 0x588a40:goto L588a40;
case 0x588a41:c.instructions+=10;goto B588a41;
case 0x588a43:c.instructions+=9;goto B588a43;
case 0x588a46:c.instructions+=8;goto B588a46;
case 0x588a4c:c.instructions+=7;goto B588a4c;
case 0x588a4d:c.instructions+=6;goto B588a4d;
case 0x588a4f:c.instructions+=5;goto B588a4f;
case 0x588a52:c.instructions+=4;goto B588a52;
case 0x588a54:c.instructions+=3;goto B588a54;
case 0x588a55:c.instructions+=2;goto B588a55;
case 0x588a56:c.instructions+=1;goto B588a56;
case 0x588a58:goto L588a58;
case 0x588a5b:c.instructions+=5;goto B588a5b;
case 0x588a5e:c.instructions+=4;goto B588a5e;
case 0x588a61:c.instructions+=3;goto B588a61;
case 0x588a64:c.instructions+=2;goto B588a64;
case 0x588a67:c.instructions+=1;goto B588a67;
case 0x588a69:goto L588a69;
case 0x588a6e:c.instructions+=6;goto B588a6e;
case 0x588a6f:c.instructions+=5;goto B588a6f;
case 0x588a70:c.instructions+=4;goto B588a70;
case 0x588a71:c.instructions+=3;goto B588a71;
case 0x588a73:c.instructions+=2;goto B588a73;
case 0x588a74:c.instructions+=1;goto B588a74;
case 0x588a77:goto L588a77;
case 0x588a78:c.instructions+=2;goto B588a78;
case 0x588a7d:c.instructions+=1;goto B588a7d;
case 0x588a82:goto L588a82;
case 0x588a87:c.instructions+=3;goto B588a87;
case 0x588a89:c.instructions+=2;goto B588a89;
case 0x588a8e:c.instructions+=1;goto B588a8e;
case 0x588a92:goto L588a92;
case 0x588a94:goto L588a94;
case 0x588a95:c.instructions+=7;goto B588a95;
case 0x588a9a:c.instructions+=6;goto B588a9a;
case 0x588a9c:c.instructions+=5;goto B588a9c;
case 0x588aa0:c.instructions+=4;goto B588aa0;
case 0x588aa5:c.instructions+=3;goto B588aa5;
case 0x588aa6:c.instructions+=2;goto B588aa6;
case 0x588aa7:c.instructions+=1;goto B588aa7;
case 0x588aac:goto L588aac;
case 0x588ab1:goto L588ab1;
case 0x588ab2:c.instructions+=5;goto B588ab2;
case 0x588ab7:c.instructions+=4;goto B588ab7;
case 0x588abb:c.instructions+=3;goto B588abb;
case 0x588ac0:c.instructions+=2;goto B588ac0;
case 0x588ac1:c.instructions+=1;goto B588ac1;
case 0x588ac6:goto L588ac6;
case 0x588ac9:c.instructions+=12;goto B588ac9;
case 0x588acc:c.instructions+=11;goto B588acc;
case 0x588acf:c.instructions+=10;goto B588acf;
case 0x588ad1:c.instructions+=9;goto B588ad1;
case 0x588ad2:c.instructions+=8;goto B588ad2;
case 0x588ad3:c.instructions+=7;goto B588ad3;
case 0x588ad4:c.instructions+=6;goto B588ad4;
case 0x588ad9:c.instructions+=5;goto B588ad9;
case 0x588add:c.instructions+=4;goto B588add;
case 0x588ade:c.instructions+=3;goto B588ade;
case 0x588ae3:c.instructions+=2;goto B588ae3;
case 0x588ae5:c.instructions+=1;goto B588ae5;
case 0x588aea:goto L588aea;
case 0x588aeb:c.instructions+=5;goto B588aeb;
case 0x588aec:c.instructions+=4;goto B588aec;
case 0x588aed:c.instructions+=3;goto B588aed;
case 0x588aef:c.instructions+=2;goto B588aef;
case 0x588af0:c.instructions+=1;goto B588af0;
case 0x588b00:goto L588b00;
case 0x588b01:c.instructions+=6;goto B588b01;
case 0x588b03:c.instructions+=5;goto B588b03;
case 0x588b06:c.instructions+=4;goto B588b06;
case 0x588b08:c.instructions+=3;goto B588b08;
case 0x588b09:c.instructions+=2;goto B588b09;
case 0x588b0a:c.instructions+=1;goto B588b0a;
case 0x588b0c:goto L588b0c;
case 0x588b0d:c.instructions+=4;goto B588b0d;
case 0x588b0e:c.instructions+=3;goto B588b0e;
case 0x588b13:c.instructions+=2;goto B588b13;
case 0x588b14:c.instructions+=1;goto B588b14;
case 0x588b17:goto L588b17;
case 0x588b18:c.instructions+=3;goto B588b18;
case 0x588b1c:c.instructions+=2;goto B588b1c;
case 0x588b1e:c.instructions+=1;goto B588b1e;
case 0x588b20:goto L588b20;
case 0x588b23:c.instructions+=1;goto B588b23;
case 0x588b25:goto L588b25;
case 0x588b27:c.instructions+=2;goto B588b27;
case 0x588b2a:c.instructions+=1;goto B588b2a;
case 0x588b30:goto L588b30;
case 0x588b31:c.instructions+=2;goto B588b31;
case 0x588b32:c.instructions+=1;goto B588b32;
case 0x588b37:goto L588b37;
case 0x588b3a:c.instructions+=2;goto B588b3a;
case 0x588b3c:c.instructions+=1;goto B588b3c;
case 0x588b3e:goto L588b3e;
case 0x588b3f:c.instructions+=3;goto B588b3f;
case 0x588b42:c.instructions+=2;goto B588b42;
case 0x588b45:c.instructions+=1;goto B588b45;
case 0x588b47:goto L588b47;
case 0x588b48:c.instructions+=5;goto B588b48;
case 0x588b49:c.instructions+=4;goto B588b49;
case 0x588b4a:c.instructions+=3;goto B588b4a;
case 0x588b4d:c.instructions+=2;goto B588b4d;
case 0x588b4e:c.instructions+=1;goto B588b4e;
case 0x588b51:goto L588b51;
case 0x588b55:c.instructions+=6;goto B588b55;
case 0x588b59:c.instructions+=5;goto B588b59;
case 0x588b5a:c.instructions+=4;goto B588b5a;
case 0x588b5b:c.instructions+=3;goto B588b5b;
case 0x588b5c:c.instructions+=2;goto B588b5c;
case 0x588b5e:c.instructions+=1;goto B588b5e;
case 0x588b63:goto L588b63;
case 0x588b64:c.instructions+=4;goto B588b64;
case 0x588b65:c.instructions+=3;goto B588b65;
case 0x588b66:c.instructions+=2;goto B588b66;
case 0x588b67:c.instructions+=1;goto B588b67;
case 0x588b70:goto L588b70;
case 0x588b71:c.instructions+=10;goto B588b71;
case 0x588b73:c.instructions+=9;goto B588b73;
case 0x588b76:c.instructions+=8;goto B588b76;
case 0x588b7c:c.instructions+=7;goto B588b7c;
case 0x588b7d:c.instructions+=6;goto B588b7d;
case 0x588b7f:c.instructions+=5;goto B588b7f;
case 0x588b82:c.instructions+=4;goto B588b82;
case 0x588b84:c.instructions+=3;goto B588b84;
case 0x588b85:c.instructions+=2;goto B588b85;
case 0x588b86:c.instructions+=1;goto B588b86;
case 0x588b88:goto L588b88;
case 0x588b8d:c.instructions+=6;goto B588b8d;
case 0x588b8e:c.instructions+=5;goto B588b8e;
case 0x588b8f:c.instructions+=4;goto B588b8f;
case 0x588b90:c.instructions+=3;goto B588b90;
case 0x588b92:c.instructions+=2;goto B588b92;
case 0x588b93:c.instructions+=1;goto B588b93;
case 0x588b96:goto L588b96;
case 0x588b9b:c.instructions+=1;goto B588b9b;
case 0x588ba0:goto L588ba0;
case 0x588ba3:c.instructions+=2;goto B588ba3;
case 0x588ba5:c.instructions+=1;goto B588ba5;
case 0x588bab:goto L588bab;
case 0x588bad:c.instructions+=3;goto B588bad;
case 0x588bb2:c.instructions+=2;goto B588bb2;
case 0x588bb7:c.instructions+=1;goto B588bb7;
case 0x588bbb:goto L588bbb;
case 0x588bbd:goto L588bbd;
case 0x588bbf:c.instructions+=7;goto B588bbf;
case 0x588bc4:c.instructions+=6;goto B588bc4;
case 0x588bc9:c.instructions+=5;goto B588bc9;
case 0x588bca:c.instructions+=4;goto B588bca;
case 0x588bce:c.instructions+=3;goto B588bce;
case 0x588bd3:c.instructions+=2;goto B588bd3;
case 0x588bd4:c.instructions+=1;goto B588bd4;
case 0x588bd9:goto L588bd9;
case 0x588bdf:c.instructions+=6;goto B588bdf;
case 0x588be0:c.instructions+=5;goto B588be0;
case 0x588be5:c.instructions+=4;goto B588be5;
case 0x588be9:c.instructions+=3;goto B588be9;
case 0x588bee:c.instructions+=2;goto B588bee;
case 0x588bef:c.instructions+=1;goto B588bef;
case 0x588bf4:goto L588bf4;
case 0x588bf9:c.instructions+=5;goto B588bf9;
case 0x588bfe:c.instructions+=4;goto B588bfe;
case 0x588c02:c.instructions+=3;goto B588c02;
case 0x588c07:c.instructions+=2;goto B588c07;
case 0x588c08:c.instructions+=1;goto B588c08;
case 0x588c0d:goto L588c0d;
case 0x588c12:c.instructions+=5;goto B588c12;
case 0x588c17:c.instructions+=4;goto B588c17;
case 0x588c1b:c.instructions+=3;goto B588c1b;
case 0x588c20:c.instructions+=2;goto B588c20;
case 0x588c21:c.instructions+=1;goto B588c21;
case 0x588c26:goto L588c26;
case 0x588c29:c.instructions+=6;goto B588c29;
case 0x588c2e:c.instructions+=5;goto B588c2e;
case 0x588c33:c.instructions+=4;goto B588c33;
case 0x588c37:c.instructions+=3;goto B588c37;
case 0x588c3c:c.instructions+=2;goto B588c3c;
case 0x588c3d:c.instructions+=1;goto B588c3d;
case 0x588c42:goto L588c42;
case 0x588c47:goto L588c47;
case 0x588c48:c.instructions+=5;goto B588c48;
case 0x588c4d:c.instructions+=4;goto B588c4d;
case 0x588c51:c.instructions+=3;goto B588c51;
case 0x588c56:c.instructions+=2;goto B588c56;
case 0x588c57:c.instructions+=1;goto B588c57;
case 0x588c5c:goto L588c5c;
case 0x588c5f:c.instructions+=2;goto B588c5f;
case 0x588c61:c.instructions+=1;goto B588c61;
case 0x588c66:goto L588c66;
case 0x588c67:c.instructions+=1;goto B588c67;
case 0x588c6c:goto L588c6c;
case 0x588c6f:c.instructions+=2;goto B588c6f;
case 0x588c71:c.instructions+=1;goto B588c71;
case 0x588c77:goto L588c77;
case 0x588c78:c.instructions+=4;goto B588c78;
case 0x588c7c:c.instructions+=3;goto B588c7c;
case 0x588c81:c.instructions+=2;goto B588c81;
case 0x588c82:c.instructions+=1;goto B588c82;
case 0x588c87:goto L588c87;
case 0x588c88:c.instructions+=6;goto B588c88;
case 0x588c8c:c.instructions+=5;goto B588c8c;
case 0x588c8d:c.instructions+=4;goto B588c8d;
case 0x588c91:c.instructions+=3;goto B588c91;
case 0x588c96:c.instructions+=2;goto B588c96;
case 0x588c97:c.instructions+=1;goto B588c97;
case 0x588c9c:goto L588c9c;
case 0x588c9d:c.instructions+=4;goto B588c9d;
case 0x588ca1:c.instructions+=3;goto B588ca1;
case 0x588ca6:c.instructions+=2;goto B588ca6;
case 0x588ca7:c.instructions+=1;goto B588ca7;
case 0x588cac:goto L588cac;
case 0x588cb1:c.instructions+=6;goto B588cb1;
case 0x588cb5:c.instructions+=5;goto B588cb5;
case 0x588cb6:c.instructions+=4;goto B588cb6;
case 0x588cba:c.instructions+=3;goto B588cba;
case 0x588cbf:c.instructions+=2;goto B588cbf;
case 0x588cc0:c.instructions+=1;goto B588cc0;
case 0x588cc5:goto L588cc5;
case 0x588cc6:c.instructions+=4;goto B588cc6;
case 0x588cca:c.instructions+=3;goto B588cca;
case 0x588ccf:c.instructions+=2;goto B588ccf;
case 0x588cd0:c.instructions+=1;goto B588cd0;
case 0x588cd5:goto L588cd5;
case 0x588cd8:c.instructions+=7;goto B588cd8;
case 0x588cdd:c.instructions+=6;goto B588cdd;
case 0x588ce1:c.instructions+=5;goto B588ce1;
case 0x588ce2:c.instructions+=4;goto B588ce2;
case 0x588ce6:c.instructions+=3;goto B588ce6;
case 0x588ceb:c.instructions+=2;goto B588ceb;
case 0x588cec:c.instructions+=1;goto B588cec;
case 0x588cf1:goto L588cf1;
case 0x588cf4:c.instructions+=4;goto B588cf4;
case 0x588cf7:c.instructions+=3;goto B588cf7;
case 0x588cf8:c.instructions+=2;goto B588cf8;
case 0x588cfe:c.instructions+=1;goto B588cfe;
case 0x588d04:goto L588d04;
case 0x588d07:c.instructions+=11;goto B588d07;
case 0x588d0a:c.instructions+=10;goto B588d0a;
case 0x588d0c:c.instructions+=9;goto B588d0c;
case 0x588d0d:c.instructions+=8;goto B588d0d;
case 0x588d0e:c.instructions+=7;goto B588d0e;
case 0x588d0f:c.instructions+=6;goto B588d0f;
case 0x588d14:c.instructions+=5;goto B588d14;
case 0x588d18:c.instructions+=4;goto B588d18;
case 0x588d19:c.instructions+=3;goto B588d19;
case 0x588d1e:c.instructions+=2;goto B588d1e;
case 0x588d20:c.instructions+=1;goto B588d20;
case 0x588d25:goto L588d25;
case 0x588d26:c.instructions+=5;goto B588d26;
case 0x588d27:c.instructions+=4;goto B588d27;
case 0x588d28:c.instructions+=3;goto B588d28;
case 0x588d2a:c.instructions+=2;goto B588d2a;
case 0x588d2b:c.instructions+=1;goto B588d2b;
case 0x588d2e:goto L588d2e;
case 0x588d2f:c.instructions+=6;goto B588d2f;
case 0x588d30:c.instructions+=5;goto B588d30;
case 0x588d32:c.instructions+=4;goto B588d32;
case 0x588d33:c.instructions+=3;goto B588d33;
case 0x588d35:c.instructions+=2;goto B588d35;
case 0x588d36:c.instructions+=1;goto B588d36;
case 0x588d40:goto L588d40;
case 0x588d41:c.instructions+=9;goto B588d41;
case 0x588d43:c.instructions+=8;goto B588d43;
case 0x588d46:c.instructions+=7;goto B588d46;
case 0x588d4c:c.instructions+=6;goto B588d4c;
case 0x588d4d:c.instructions+=5;goto B588d4d;
case 0x588d4f:c.instructions+=4;goto B588d4f;
case 0x588d52:c.instructions+=3;goto B588d52;
case 0x588d54:c.instructions+=2;goto B588d54;
case 0x588d55:c.instructions+=1;goto B588d55;
case 0x588d5b:goto L588d5b;
case 0x588d60:c.instructions+=1;goto B588d60;
case 0x588d65:goto L588d65;
case 0x588d68:c.instructions+=3;goto B588d68;
case 0x588d6a:c.instructions+=2;goto B588d6a;
case 0x588d70:c.instructions+=1;goto B588d70;
case 0x588d76:goto L588d76;
case 0x588d7b:c.instructions+=3;goto B588d7b;
case 0x588d7d:c.instructions+=2;goto B588d7d;
case 0x588d82:c.instructions+=1;goto B588d82;
case 0x588d86:goto L588d86;
case 0x588d88:goto L588d88;
case 0x588d8a:c.instructions+=2;goto B588d8a;
case 0x588d8b:c.instructions+=1;goto B588d8b;
case 0x588d90:goto L588d90;
case 0x588d93:c.instructions+=7;goto B588d93;
case 0x588d9a:c.instructions+=6;goto B588d9a;
case 0x588d9b:c.instructions+=5;goto B588d9b;
case 0x588da0:c.instructions+=4;goto B588da0;
case 0x588da4:c.instructions+=3;goto B588da4;
case 0x588da9:c.instructions+=2;goto B588da9;
case 0x588daa:c.instructions+=1;goto B588daa;
case 0x588daf:goto L588daf;
case 0x588db4:c.instructions+=6;goto B588db4;
case 0x588db5:c.instructions+=5;goto B588db5;
case 0x588dba:c.instructions+=4;goto B588dba;
case 0x588dbe:c.instructions+=3;goto B588dbe;
case 0x588dc3:c.instructions+=2;goto B588dc3;
case 0x588dc4:c.instructions+=1;goto B588dc4;
case 0x588dc9:goto L588dc9;
case 0x588dcb:c.instructions+=5;goto B588dcb;
case 0x588dd0:c.instructions+=4;goto B588dd0;
case 0x588dd7:c.instructions+=3;goto B588dd7;
case 0x588ddc:c.instructions+=2;goto B588ddc;
case 0x588ddd:c.instructions+=1;goto B588ddd;
case 0x588de2:goto L588de2;
case 0x588de5:c.instructions+=1;goto B588de5;
case 0x588dea:goto L588dea;
case 0x588dec:c.instructions+=1;goto B588dec;
case 0x588dee:goto L588dee;
case 0x588df3:goto L588df3;
case 0x588df4:c.instructions+=5;goto B588df4;
case 0x588df9:c.instructions+=4;goto B588df9;
case 0x588dfd:c.instructions+=3;goto B588dfd;
case 0x588e02:c.instructions+=2;goto B588e02;
case 0x588e03:c.instructions+=1;goto B588e03;
case 0x588e08:goto L588e08;
case 0x588e0b:goto L588e0b;
case 0x588e10:goto L588e10;
case 0x588e12:c.instructions+=1;goto B588e12;
case 0x588e14:goto L588e14;
case 0x588e19:goto L588e19;
case 0x588e1a:c.instructions+=5;goto B588e1a;
case 0x588e1f:c.instructions+=4;goto B588e1f;
case 0x588e23:c.instructions+=3;goto B588e23;
case 0x588e28:c.instructions+=2;goto B588e28;
case 0x588e29:c.instructions+=1;goto B588e29;
case 0x588e2e:goto L588e2e;
case 0x588e31:goto L588e31;
case 0x588e36:goto L588e36;
case 0x588e37:c.instructions+=5;goto B588e37;
case 0x588e3c:c.instructions+=4;goto B588e3c;
case 0x588e40:c.instructions+=3;goto B588e40;
case 0x588e45:c.instructions+=2;goto B588e45;
case 0x588e46:c.instructions+=1;goto B588e46;
case 0x588e4b:goto L588e4b;
case 0x588e4d:c.instructions+=3;goto B588e4d;
case 0x588e52:c.instructions+=2;goto B588e52;
case 0x588e57:c.instructions+=1;goto B588e57;
case 0x588e5b:goto L588e5b;
case 0x588e5d:goto L588e5d;
case 0x588e62:c.instructions+=8;goto B588e62;
case 0x588e64:c.instructions+=7;goto B588e64;
case 0x588e69:c.instructions+=6;goto B588e69;
case 0x588e6e:c.instructions+=5;goto B588e6e;
case 0x588e6f:c.instructions+=4;goto B588e6f;
case 0x588e73:c.instructions+=3;goto B588e73;
case 0x588e78:c.instructions+=2;goto B588e78;
case 0x588e79:c.instructions+=1;goto B588e79;
case 0x588e7e:goto L588e7e;
case 0x588e82:c.instructions+=6;goto B588e82;
case 0x588e83:c.instructions+=5;goto B588e83;
case 0x588e88:c.instructions+=4;goto B588e88;
case 0x588e8f:c.instructions+=3;goto B588e8f;
case 0x588e94:c.instructions+=2;goto B588e94;
case 0x588e95:c.instructions+=1;goto B588e95;
case 0x588e9a:goto L588e9a;
case 0x588e9c:c.instructions+=10;goto B588e9c;
case 0x588ea0:c.instructions+=9;goto B588ea0;
case 0x588ea4:c.instructions+=8;goto B588ea4;
case 0x588ea8:c.instructions+=7;goto B588ea8;
case 0x588eac:c.instructions+=6;goto B588eac;
case 0x588eb1:c.instructions+=5;goto B588eb1;
case 0x588eb3:c.instructions+=4;goto B588eb3;
case 0x588eb4:c.instructions+=3;goto B588eb4;
case 0x588eb9:c.instructions+=2;goto B588eb9;
case 0x588ebd:c.instructions+=1;goto B588ebd;
case 0x588ec2:goto L588ec2;
case 0x588ec7:c.instructions+=7;goto B588ec7;
case 0x588ecb:c.instructions+=6;goto B588ecb;
case 0x588ecc:c.instructions+=5;goto B588ecc;
case 0x588ed1:c.instructions+=4;goto B588ed1;
case 0x588ed5:c.instructions+=3;goto B588ed5;
case 0x588eda:c.instructions+=2;goto B588eda;
case 0x588edb:c.instructions+=1;goto B588edb;
case 0x588ee0:goto L588ee0;
case 0x588ee3:c.instructions+=7;goto B588ee3;
case 0x588ee7:c.instructions+=6;goto B588ee7;
case 0x588ee8:c.instructions+=5;goto B588ee8;
case 0x588eed:c.instructions+=4;goto B588eed;
case 0x588ef1:c.instructions+=3;goto B588ef1;
case 0x588ef6:c.instructions+=2;goto B588ef6;
case 0x588ef7:c.instructions+=1;goto B588ef7;
case 0x588efc:goto L588efc;
case 0x588f01:goto L588f01;
case 0x588f02:c.instructions+=1;goto B588f02;
case 0x588f07:goto L588f07;
case 0x588f08:c.instructions+=5;goto B588f08;
case 0x588f0d:c.instructions+=4;goto B588f0d;
case 0x588f11:c.instructions+=3;goto B588f11;
case 0x588f16:c.instructions+=2;goto B588f16;
case 0x588f17:c.instructions+=1;goto B588f17;
case 0x588f1c:goto L588f1c;
case 0x588f21:goto L588f21;
case 0x588f22:c.instructions+=5;goto B588f22;
case 0x588f27:c.instructions+=4;goto B588f27;
case 0x588f2e:c.instructions+=3;goto B588f2e;
case 0x588f33:c.instructions+=2;goto B588f33;
case 0x588f34:c.instructions+=1;goto B588f34;
case 0x588f39:goto L588f39;
case 0x588f3e:c.instructions+=4;goto B588f3e;
case 0x588f45:c.instructions+=3;goto B588f45;
case 0x588f47:c.instructions+=2;goto B588f47;
case 0x588f48:c.instructions+=1;goto B588f48;
case 0x588f4d:goto L588f4d;
case 0x588f50:c.instructions+=3;goto B588f50;
case 0x588f52:c.instructions+=2;goto B588f52;
case 0x588f55:c.instructions+=1;goto B588f55;
case 0x588f57:goto L588f57;
case 0x588f59:c.instructions+=1;goto B588f59;
case 0x588f5e:goto L588f5e;
case 0x588f61:c.instructions+=5;goto B588f61;
case 0x588f62:c.instructions+=4;goto B588f62;
case 0x588f63:c.instructions+=3;goto B588f63;
case 0x588f65:c.instructions+=2;goto B588f65;
case 0x588f66:c.instructions+=1;goto B588f66;
case 0x588f67:goto L588f67;
case 0x588f6c:c.instructions+=2;goto B588f6c;
case 0x588f6d:c.instructions+=1;goto B588f6d;
case 0x588f72:goto L588f72;
case 0x588f75:c.instructions+=5;goto B588f75;
case 0x588f76:c.instructions+=4;goto B588f76;
case 0x588f7b:c.instructions+=3;goto B588f7b;
case 0x588f7d:c.instructions+=2;goto B588f7d;
case 0x588f7e:c.instructions+=1;goto B588f7e;
case 0x588f83:goto L588f83;
case 0x588f86:c.instructions+=5;goto B588f86;
case 0x588f87:c.instructions+=4;goto B588f87;
case 0x588f8c:c.instructions+=3;goto B588f8c;
case 0x588f8e:c.instructions+=2;goto B588f8e;
case 0x588f8f:c.instructions+=1;goto B588f8f;
case 0x588f94:goto L588f94;
case 0x588f97:c.instructions+=5;goto B588f97;
case 0x588f98:c.instructions+=4;goto B588f98;
case 0x588f9d:c.instructions+=3;goto B588f9d;
case 0x588f9f:c.instructions+=2;goto B588f9f;
case 0x588fa0:c.instructions+=1;goto B588fa0;
case 0x588fa5:goto L588fa5;
case 0x588fa8:goto L588fa8;
case 0x588fa9:c.instructions+=5;goto B588fa9;
case 0x588fab:c.instructions+=4;goto B588fab;
case 0x588fac:c.instructions+=3;goto B588fac;
case 0x588fae:c.instructions+=2;goto B588fae;
case 0x588faf:c.instructions+=1;goto B588faf;
case 0x588fb0:goto L588fb0;
case 0x588fb5:c.instructions+=4;goto B588fb5;
case 0x588fb6:c.instructions+=3;goto B588fb6;
case 0x588fb8:c.instructions+=2;goto B588fb8;
case 0x588fba:c.instructions+=1;goto B588fba;
case 0x588fc0:goto L588fc0;
case 0x588fc6:c.instructions+=1;goto B588fc6;
case 0x588fc8:goto L588fc8;
case 0x588fca:c.instructions+=1;goto B588fca;
case 0x588fcf:goto L588fcf;
case 0x588fd4:c.instructions+=3;goto B588fd4;
case 0x588fd7:c.instructions+=2;goto B588fd7;
case 0x588fd9:c.instructions+=1;goto B588fd9;
case 0x588fdb:goto L588fdb;
case 0x588fe0:goto L588fe0;
case 0x588fe5:c.instructions+=2;goto B588fe5;
case 0x588fe7:c.instructions+=1;goto B588fe7;
case 0x588fe9:goto L588fe9;
case 0x588fea:c.instructions+=1;goto B588fea;
case 0x588fef:goto L588fef;
case 0x588ff2:goto L588ff2;
case 0x588ff7:c.instructions+=2;goto B588ff7;
case 0x588ff9:c.instructions+=1;goto B588ff9;
case 0x588ffb:goto L588ffb;
case 0x588ffc:c.instructions+=1;goto B588ffc;
default:missing_instruction(c.pc);}
B588001:L588001:{c.instructions+=1;NFSU2_TR(0x588001);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x587e31u,587);}
}
B588007:L588007:{c.instructions+=6;NFSU2_TR(0x588007);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588008:{NFSU2_TR(0x588008);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588009:{NFSU2_TR(0x588009);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58800a:{NFSU2_TR(0x58800a);
__builtin_memmove((R+16),(R+20),4);
}
B58800c:{NFSU2_TR(0x58800c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58800d:{NFSU2_TR(0x58800d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588010:L588010:{c.instructions+=16;NFSU2_TR(0x588010);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588011:{NFSU2_TR(0x588011);
__builtin_memmove((R+20),(R+16),4);
}
B588013:{NFSU2_TR(0x588013);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B588016:{NFSU2_TR(0x588016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B588019:{NFSU2_TR(0x588019);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58801c:{NFSU2_TR(0x58801c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58801d:{NFSU2_TR(0x58801d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58801f:{NFSU2_TR(0x58801f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x400ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588025:{NFSU2_TR(0x588025);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x404ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58802b:{NFSU2_TR(0x58802b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58802e:{NFSU2_TR(0x58802e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58802f:{NFSU2_TR(0x58802f);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B588032:{NFSU2_TR(0x588032);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x408ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B588039:{NFSU2_TR(0x588039);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B58803b:{NFSU2_TR(0x58803b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58803c:{NFSU2_TR(0x58803c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588041ull));
TAIL_STATIC(0x502fd0u,502);
}
B588041:L588041:{c.instructions+=3;NFSU2_TR(0x588041);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B588043:{NFSU2_TR(0x588043);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588047:{NFSU2_TR(0x588047);
if(r1(R+518)){{goto L588128;}}
}
B58804d:L58804d:{c.instructions+=1;NFSU2_TR(0x58804d);
__builtin_memmove((R+4),(R+4),4);
}
B588050:L588050:{c.instructions+=4;NFSU2_TR(0x588050);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B588052:{NFSU2_TR(0x588052);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B588057:{NFSU2_TR(0x588057);
w4(R+4,u32(0x18ull));
}
B58805c:{NFSU2_TR(0x58805c);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B588060:L588060:{c.instructions+=1;NFSU2_TR(0x588060);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L588062;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588060u);}goto L588060;}
}
B588062:L588062:{c.instructions+=10;NFSU2_TR(0x588062);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B588064:{NFSU2_TR(0x588064);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B588068:{NFSU2_TR(0x588068);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58806a:{NFSU2_TR(0x58806a);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58806b:{NFSU2_TR(0x58806b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B58806e:{NFSU2_TR(0x58806e);
w4(R+28,u32(r1(R+8)));
}
B588071:{NFSU2_TR(0x588071);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B588073:{NFSU2_TR(0x588073);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588075:{NFSU2_TR(0x588075);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B588079:{NFSU2_TR(0x588079);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5880a8;}}
}
B58807b:L58807b:{c.instructions+=1;NFSU2_TR(0x58807b);
{goto L588080;}
}
B588080:L588080:{c.instructions+=6;NFSU2_TR(0x588080);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588082:{NFSU2_TR(0x588082);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B588086:{NFSU2_TR(0x588086);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588087:{NFSU2_TR(0x588087);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B58808a:{NFSU2_TR(0x58808a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B588092:{NFSU2_TR(0x588092);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588097ull));
TAIL_STATIC(0x581d90u,581);
}
B588097:L588097:{c.instructions+=5;NFSU2_TR(0x588097);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58809b:{NFSU2_TR(0x58809b);
u8 U[13];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B58809f:{NFSU2_TR(0x58809f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5880a0:{NFSU2_TR(0x5880a0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5880a2:{NFSU2_TR(0x5880a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588080u);}goto L588080;}}
}
B5880a4:L5880a4:{c.instructions+=1;NFSU2_TR(0x5880a4);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5880a8:L5880a8:{c.instructions+=3;NFSU2_TR(0x5880a8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5880aa:{NFSU2_TR(0x5880aa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5880ac:{NFSU2_TR(0x5880ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5880c9;}}
}
B5880ae:L5880ae:{c.instructions+=1;NFSU2_TR(0x5880ae);
__builtin_memmove((R+28),(R+28),4);
}
B5880b0:L5880b0:{c.instructions+=5;NFSU2_TR(0x5880b0);
u8 U[13];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B5880b5:{NFSU2_TR(0x5880b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5880b8:{NFSU2_TR(0x5880b8);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5880ba:{NFSU2_TR(0x5880ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5880bb:{NFSU2_TR(0x5880bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5880c0ull));
TAIL_STATIC(0x581d00u,581);
}
B5880c0:L5880c0:{c.instructions+=3;NFSU2_TR(0x5880c0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5880c1:{NFSU2_TR(0x5880c1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5880c3:{NFSU2_TR(0x5880c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5880b0u);}goto L5880b0;}}
}
B5880c5:L5880c5:{c.instructions+=1;NFSU2_TR(0x5880c5);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5880c9:L5880c9:{c.instructions+=3;NFSU2_TR(0x5880c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5880cc:{NFSU2_TR(0x5880cc);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5880cf:{NFSU2_TR(0x5880cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L588102;}}
}
B5880d1:L5880d1:{c.instructions+=4;NFSU2_TR(0x5880d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5880d4:{NFSU2_TR(0x5880d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r4(U+0))));
}
B5880d7:{NFSU2_TR(0x5880d7);
w1(R+0,u8(u32(r1(R+0))-u32(r1(R+8))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B5880d9:{NFSU2_TR(0x5880d9);
if(r1(R+518)){{goto L588102;}}
}
B5880db:L5880db:{c.instructions+=7;NFSU2_TR(0x5880db);
w4(R+24,u32(r1(R+0)));
}
B5880de:{NFSU2_TR(0x5880de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5880df:{NFSU2_TR(0x5880df);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5880e3:{NFSU2_TR(0x5880e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5880e4:{NFSU2_TR(0x5880e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5880e7:{NFSU2_TR(0x5880e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5880ef:{NFSU2_TR(0x5880ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5880f4ull));
TAIL_STATIC(0x581d90u,581);
}
B5880f4:L5880f4:{c.instructions+=5;NFSU2_TR(0x5880f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5880f8:{NFSU2_TR(0x5880f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5880fb:{NFSU2_TR(0x5880fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5880fc:{NFSU2_TR(0x5880fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5880fd:{NFSU2_TR(0x5880fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588102ull));
TAIL_STATIC(0x581d00u,581);
}
B588102:L588102:{c.instructions+=8;NFSU2_TR(0x588102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B588105:{NFSU2_TR(0x588105);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B588107:{NFSU2_TR(0x588107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B588109:{NFSU2_TR(0x588109);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58810c:{NFSU2_TR(0x58810c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B58810e:{NFSU2_TR(0x58810e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58810f:{NFSU2_TR(0x58810f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588112:{NFSU2_TR(0x588112);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588117ull));
TAIL_STATIC(0x575630u,575);
}
B588117:L588117:{c.instructions+=5;NFSU2_TR(0x588117);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B588119:{NFSU2_TR(0x588119);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58811d:{NFSU2_TR(0x58811d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B588120:{NFSU2_TR(0x588120);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B588122:{NFSU2_TR(0x588122);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588050u);}goto L588050;}}
}
B588128:L588128:{c.instructions+=6;NFSU2_TR(0x588128);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588129:{NFSU2_TR(0x588129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58812a:{NFSU2_TR(0x58812a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58812b:{NFSU2_TR(0x58812b);
__builtin_memmove((R+16),(R+20),4);
}
B58812d:{NFSU2_TR(0x58812d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58812e:{NFSU2_TR(0x58812e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588130:L588130:{c.instructions+=14;NFSU2_TR(0x588130);
__builtin_memmove((R+0),(R+4),4);
}
B588132:{NFSU2_TR(0x588132);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B588134:{NFSU2_TR(0x588134);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588137:{NFSU2_TR(0x588137);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B58813e:{NFSU2_TR(0x58813e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+0)),r4(U+0));
}
B588144:{NFSU2_TR(0x588144);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588147:{NFSU2_TR(0x588147);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B58814b:{NFSU2_TR(0x58814b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B58814f:{NFSU2_TR(0x58814f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588152:{NFSU2_TR(0x588152);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588155:{NFSU2_TR(0x588155);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58815c:{NFSU2_TR(0x58815c);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B588162:{NFSU2_TR(0x588162);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588165:{NFSU2_TR(0x588165);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588170:L588170:{c.instructions+=6;NFSU2_TR(0x588170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B588176:{NFSU2_TR(0x588176);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588177:{NFSU2_TR(0x588177);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588178:{NFSU2_TR(0x588178);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58817f:{NFSU2_TR(0x58817f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B588181:{NFSU2_TR(0x588181);
w4(R+0,u32(0x8693c8ull));
}
B588186:L588186:{c.instructions+=2;NFSU2_TR(0x588186);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B588189:{NFSU2_TR(0x588189);
if(r1(R+518)){{goto L588197;}}
}
B58818b:L58818b:{c.instructions+=3;NFSU2_TR(0x58818b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B58818e:{NFSU2_TR(0x58818e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x869468ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x869468ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B588193:{NFSU2_TR(0x588193);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588186u);}goto L588186;}}
}
B588195:L588195:{c.instructions+=1;NFSU2_TR(0x588195);
{goto L588199;}
}
B588197:L588197:{c.instructions+=1;NFSU2_TR(0x588197);
__builtin_memmove((R+24),(R+0),4);
}
B588199:L588199:{c.instructions+=8;NFSU2_TR(0x588199);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58819b:{NFSU2_TR(0x58819b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58819d:{NFSU2_TR(0x58819d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5881a1:{NFSU2_TR(0x5881a1);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5881a6:{NFSU2_TR(0x5881a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5881b1:{NFSU2_TR(0x5881b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5881bc:{NFSU2_TR(0x5881bc);
u8 U[5];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5881c4:{NFSU2_TR(0x5881c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5881c9ull));
TAIL_STATIC(0x581d00u,581);
}
B5881c9:L5881c9:{c.instructions+=4;NFSU2_TR(0x5881c9);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5881cb:{NFSU2_TR(0x5881cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5881cc:{NFSU2_TR(0x5881cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5881d0:{NFSU2_TR(0x5881d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5881d5ull));
TAIL_STATIC(0x581d00u,581);
}
B5881d5:L5881d5:{c.instructions+=5;NFSU2_TR(0x5881d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5881d7:{NFSU2_TR(0x5881d7);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5881d9:{NFSU2_TR(0x5881d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5881da:{NFSU2_TR(0x5881da);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5881de:{NFSU2_TR(0x5881de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5881e3ull));
TAIL_STATIC(0x581d00u,581);
}
B5881e3:L5881e3:{c.instructions+=5;NFSU2_TR(0x5881e3);
__builtin_memmove((R+24),gp(0x7fbe80),4);
}
B5881e9:{NFSU2_TR(0x5881e9);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5881eb:{NFSU2_TR(0x5881eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5881ec:{NFSU2_TR(0x5881ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5881f0:{NFSU2_TR(0x5881f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5881f5ull));
TAIL_STATIC(0x581d00u,581);
}
B5881f5:L5881f5:{c.instructions+=5;NFSU2_TR(0x5881f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5881f9:{NFSU2_TR(0x5881f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5881fa:{NFSU2_TR(0x5881fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5881fb:{NFSU2_TR(0x5881fb);
w4(R+4,u32(0x89cf48ull));
}
B588200:{NFSU2_TR(0x588200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588205ull));
TAIL_STATIC(0x5f95e0u,5f9);
}
B588205:L588205:{c.instructions+=6;NFSU2_TR(0x588205);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588207:{NFSU2_TR(0x588207);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58820b:{NFSU2_TR(0x58820b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58820c:{NFSU2_TR(0x58820c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58820e:{NFSU2_TR(0x58820e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58820f:{NFSU2_TR(0x58820f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588214ull));
TAIL_STATIC(0x586120u,586);
}
B588214:L588214:{c.instructions+=5;NFSU2_TR(0x588214);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B588217:{NFSU2_TR(0x588217);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588218:{NFSU2_TR(0x588218);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588219:{NFSU2_TR(0x588219);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58821f:{NFSU2_TR(0x58821f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588220:L588220:{c.instructions+=4;NFSU2_TR(0x588220);
__builtin_memmove((R+0),gp(0x890080),4);
}
B588225:{NFSU2_TR(0x588225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x410ull))));
}
B58822b:{NFSU2_TR(0x58822b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58822d:{NFSU2_TR(0x58822d);
if(r1(R+518)){{goto L588342;}}
}
B588233:L588233:{c.instructions+=5;NFSU2_TR(0x588233);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588234:{NFSU2_TR(0x588234);
__builtin_memmove((R+24),gp(0x7fbe80),4);
}
B58823a:{NFSU2_TR(0x58823a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cf50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B588241:{NFSU2_TR(0x588241);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588243:{NFSU2_TR(0x588243);
if(r1(R+518)){{goto L588341;}}
}
B588249:L588249:{c.instructions+=8;NFSU2_TR(0x588249);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58824b:{NFSU2_TR(0x58824b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58824d:{NFSU2_TR(0x58824d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B588251:{NFSU2_TR(0x588251);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B588256:{NFSU2_TR(0x588256);
u8 U[8];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B588261:{NFSU2_TR(0x588261);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58826c:{NFSU2_TR(0x58826c);
u8 U[5];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B588274:{NFSU2_TR(0x588274);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588279ull));
TAIL_STATIC(0x581d00u,581);
}
B588279:L588279:{c.instructions+=7;NFSU2_TR(0x588279);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B588280:{NFSU2_TR(0x588280);
__builtin_memmove((R+4),(R+0),4);
}
B588282:{NFSU2_TR(0x588282);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588284:{NFSU2_TR(0x588284);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588285:{NFSU2_TR(0x588285);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B588289:{NFSU2_TR(0x588289);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58828d:{NFSU2_TR(0x58828d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588292ull));
TAIL_STATIC(0x581d00u,581);
}
B588292:L588292:{c.instructions+=8;NFSU2_TR(0x588292);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B588298:{NFSU2_TR(0x588298);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58829a:{NFSU2_TR(0x58829a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58829e:{NFSU2_TR(0x58829e);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5882a4:{NFSU2_TR(0x5882a4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5882a8:{NFSU2_TR(0x5882a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5882ac:{NFSU2_TR(0x5882ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5882ad:{NFSU2_TR(0x5882ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5882b2ull));
TAIL_STATIC(0x581d00u,581);
}
B5882b2:L5882b2:{c.instructions+=4;NFSU2_TR(0x5882b2);
__builtin_memmove((R+4),gp(0x8691b8),4);
}
B5882b8:{NFSU2_TR(0x5882b8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5882ba:{NFSU2_TR(0x5882ba);
__builtin_memmove((R+0),(R+24),4);
}
B5882bc:{NFSU2_TR(0x5882bc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5882c0;}}
}
B5882be:L5882be:{c.instructions+=1;NFSU2_TR(0x5882be);
__builtin_memmove((R+0),(R+4),4);
}
B5882c0:L5882c0:{c.instructions+=3;NFSU2_TR(0x5882c0);
__builtin_memmove((R+8),gp(0x8691bc),4);
}
B5882c6:{NFSU2_TR(0x5882c6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5882c8:{NFSU2_TR(0x5882c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5882cc;}}
}
B5882ca:L5882ca:{c.instructions+=1;NFSU2_TR(0x5882ca);
__builtin_memmove((R+0),(R+8),4);
}
B5882cc:L5882cc:{c.instructions+=7;NFSU2_TR(0x5882cc);
__builtin_memmove((R+8),gp(0x8691b4),4);
}
B5882d2:{NFSU2_TR(0x5882d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5882d3:{NFSU2_TR(0x5882d3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B5882d5:{NFSU2_TR(0x5882d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5882d6:{NFSU2_TR(0x5882d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5882d7:{NFSU2_TR(0x5882d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5882db:{NFSU2_TR(0x5882db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5882e0ull));
TAIL_STATIC(0x581d00u,581);
}
B5882e0:L5882e0:{c.instructions+=8;NFSU2_TR(0x5882e0);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5882e6:{NFSU2_TR(0x5882e6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5882e8:{NFSU2_TR(0x5882e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5882ec:{NFSU2_TR(0x5882ec);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5882f2:{NFSU2_TR(0x5882f2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5882f6:{NFSU2_TR(0x5882f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5882fa:{NFSU2_TR(0x5882fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5882fb:{NFSU2_TR(0x5882fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588300ull));
TAIL_STATIC(0x581d00u,581);
}
B588300:L588300:{c.instructions+=6;NFSU2_TR(0x588300);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B588307:{NFSU2_TR(0x588307);
w4(R+4,u32(r1(R+12)));
}
B58830a:{NFSU2_TR(0x58830a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58830c:{NFSU2_TR(0x58830c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58830d:{NFSU2_TR(0x58830d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B588311:{NFSU2_TR(0x588311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588316ull));
TAIL_STATIC(0x581d00u,581);
}
B588316:L588316:{c.instructions+=6;NFSU2_TR(0x588316);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588317:{NFSU2_TR(0x588317);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58831b:{NFSU2_TR(0x58831b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58831c:{NFSU2_TR(0x58831c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58831d:{NFSU2_TR(0x58831d);
w4(R+4,u32(0x89cf48ull));
}
B588322:{NFSU2_TR(0x588322);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588327ull));
TAIL_STATIC(0x5f9930u,5f9);
}
B588327:L588327:{c.instructions+=7;NFSU2_TR(0x588327);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58832e:{NFSU2_TR(0x58832e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588330:{NFSU2_TR(0x588330);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B588334:{NFSU2_TR(0x588334);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588335:{NFSU2_TR(0x588335);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588337:{NFSU2_TR(0x588337);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588338:{NFSU2_TR(0x588338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58833dull));
TAIL_STATIC(0x586120u,586);
}
B58833d:L58833d:{c.instructions+=2;NFSU2_TR(0x58833d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B588340:{NFSU2_TR(0x588340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B588341:L588341:{c.instructions+=1;NFSU2_TR(0x588341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588342:L588342:{c.instructions+=2;NFSU2_TR(0x588342);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x410ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x410ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x410ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B588348:{NFSU2_TR(0x588348);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588350:L588350:{c.instructions+=8;NFSU2_TR(0x588350);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588351:{NFSU2_TR(0x588351);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B588355:{NFSU2_TR(0x588355);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588356:{NFSU2_TR(0x588356);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B58835a:{NFSU2_TR(0x58835a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58835b:{NFSU2_TR(0x58835b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58835c:{NFSU2_TR(0x58835c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B588360:{NFSU2_TR(0x588360);
w4(R+24,u32(0x8693c8ull));
}
B588365:L588365:{c.instructions+=3;NFSU2_TR(0x588365);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B588368:{NFSU2_TR(0x588368);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58836b:{NFSU2_TR(0x58836b);
if(r1(R+518)){{goto L588383;}}
}
B58836d:L58836d:{c.instructions+=2;NFSU2_TR(0x58836d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58836f:{NFSU2_TR(0x58836f);
if(r1(R+518)){{goto L588383;}}
}
B588371:L588371:{c.instructions+=2;NFSU2_TR(0x588371);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B588375:{NFSU2_TR(0x588375);
if(r1(R+518)){{goto L588383;}}
}
B588377:L588377:{c.instructions+=5;NFSU2_TR(0x588377);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588378:{NFSU2_TR(0x588378);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588379:{NFSU2_TR(0x588379);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58837a:{NFSU2_TR(0x58837a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58837b:{NFSU2_TR(0x58837b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588380ull));
TAIL_STATIC(0x586120u,586);
}
B588380:L588380:{c.instructions+=1;NFSU2_TR(0x588380);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B588383:L588383:{c.instructions+=3;NFSU2_TR(0x588383);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B588386:{NFSU2_TR(0x588386);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x869468ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x869468ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x869468ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58838c:{NFSU2_TR(0x58838c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588365u);}goto L588365;}}
}
B58838e:L58838e:{c.instructions+=5;NFSU2_TR(0x58838e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58838f:{NFSU2_TR(0x58838f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588390:{NFSU2_TR(0x588390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B588391:{NFSU2_TR(0x588391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B588392:{NFSU2_TR(0x588392);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5883a0:L5883a0:{c.instructions+=8;NFSU2_TR(0x5883a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5883a1:{NFSU2_TR(0x5883a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5883a5:{NFSU2_TR(0x5883a5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5883a6:{NFSU2_TR(0x5883a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5883aa:{NFSU2_TR(0x5883aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5883ab:{NFSU2_TR(0x5883ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5883ac:{NFSU2_TR(0x5883ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5883b0:{NFSU2_TR(0x5883b0);
w4(R+24,u32(0x8693c8ull));
}
B5883b5:L5883b5:{c.instructions+=3;NFSU2_TR(0x5883b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5883b8:{NFSU2_TR(0x5883b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5883bb:{NFSU2_TR(0x5883bb);
if(r1(R+518)){{goto L5883cd;}}
}
B5883bd:L5883bd:{c.instructions+=2;NFSU2_TR(0x5883bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5883bf:{NFSU2_TR(0x5883bf);
if(r1(R+518)){{goto L5883cd;}}
}
B5883c1:L5883c1:{c.instructions+=5;NFSU2_TR(0x5883c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5883c2:{NFSU2_TR(0x5883c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5883c3:{NFSU2_TR(0x5883c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5883c4:{NFSU2_TR(0x5883c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5883c5:{NFSU2_TR(0x5883c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5883caull));
TAIL_STATIC(0x586120u,586);
}
B5883ca:L5883ca:{c.instructions+=1;NFSU2_TR(0x5883ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5883cd:L5883cd:{c.instructions+=3;NFSU2_TR(0x5883cd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B5883d0:{NFSU2_TR(0x5883d0);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x869468ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x869468ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x869468ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5883d6:{NFSU2_TR(0x5883d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5883b5u);}goto L5883b5;}}
}
B5883d8:L5883d8:{c.instructions+=5;NFSU2_TR(0x5883d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5883d9:{NFSU2_TR(0x5883d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5883da:{NFSU2_TR(0x5883da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5883db:{NFSU2_TR(0x5883db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5883dc:{NFSU2_TR(0x5883dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5883e0:L5883e0:{c.instructions+=13;NFSU2_TR(0x5883e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B5883e6:{NFSU2_TR(0x5883e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5883e8:{NFSU2_TR(0x5883e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5883e9:{NFSU2_TR(0x5883e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5883f0:{NFSU2_TR(0x5883f0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5883f4:{NFSU2_TR(0x5883f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x404ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5883fb:{NFSU2_TR(0x5883fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588402:{NFSU2_TR(0x588402);
w4(R+0,u32(r1(R+12)));
}
B588405:{NFSU2_TR(0x588405);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588407:{NFSU2_TR(0x588407);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588408:{NFSU2_TR(0x588408);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58840c:{NFSU2_TR(0x58840c);
u8 U[5];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B588414:{NFSU2_TR(0x588414);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588419ull));
TAIL_STATIC(0x581d00u,581);
}
B588419:L588419:{c.instructions+=5;NFSU2_TR(0x588419);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58841b:{NFSU2_TR(0x58841b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58841f:{NFSU2_TR(0x58841f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588420:{NFSU2_TR(0x588420);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588421:{NFSU2_TR(0x588421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588426ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5883a0u);}goto L5883a0;}
}
B588426:L588426:{c.instructions+=4;NFSU2_TR(0x588426);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B588429:{NFSU2_TR(0x588429);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58842a:{NFSU2_TR(0x58842a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B588430:{NFSU2_TR(0x588430);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588440:L588440:{c.instructions+=6;NFSU2_TR(0x588440);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588441:{NFSU2_TR(0x588441);
__builtin_memmove((R+24),(R+4),4);
}
B588443:{NFSU2_TR(0x588443);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B588446:{NFSU2_TR(0x588446);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588448:{NFSU2_TR(0x588448);
u8 U[4];
w4(U+0,u32(0x7a12a0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B58844e:{NFSU2_TR(0x58844e);
if(r1(R+518)){{goto L588460;}}
}
B588450:L588450:{c.instructions+=2;NFSU2_TR(0x588450);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588451:{NFSU2_TR(0x588451);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588456ull));
TAIL_STATIC(0x748b60u,748);
}
B588456:L588456:{c.instructions+=2;NFSU2_TR(0x588456);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B588459:{NFSU2_TR(0x588459);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B588460:L588460:{c.instructions+=2;NFSU2_TR(0x588460);
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
B588465:{NFSU2_TR(0x588465);
if(r1(R+518)){{goto L588470;}}
}
B588467:L588467:{c.instructions+=2;NFSU2_TR(0x588467);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588468:{NFSU2_TR(0x588468);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58846dull));
TAIL_STATIC(0x575630u,575);
}
B58846d:L58846d:{c.instructions+=1;NFSU2_TR(0x58846d);
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
B588470:L588470:{c.instructions+=3;NFSU2_TR(0x588470);
__builtin_memmove((R+0),(R+24),4);
}
B588472:{NFSU2_TR(0x588472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588473:{NFSU2_TR(0x588473);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588480:L588480:{c.instructions+=3;NFSU2_TR(0x588480);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B588483:{NFSU2_TR(0x588483);
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
B588485:{NFSU2_TR(0x588485);
if(r1(R+518)){{goto L58849b;}}
}
B588487:L588487:{c.instructions+=3;NFSU2_TR(0x588487);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B58848d:{NFSU2_TR(0x58848d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58848f:{NFSU2_TR(0x58848f);
if(r1(R+518)){{goto L588496;}}
}
B588491:L588491:{c.instructions+=1;NFSU2_TR(0x588491);
TAIL_STATIC(0x5865a0u,586);
}
B588496:L588496:{c.instructions+=1;NFSU2_TR(0x588496);
TAIL_STATIC(0x586520u,586);
}
B58849b:L58849b:{c.instructions+=1;NFSU2_TR(0x58849b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5884a0:L5884a0:{c.instructions+=6;NFSU2_TR(0x5884a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5884a1:{NFSU2_TR(0x5884a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5884a2:{NFSU2_TR(0x5884a2);
__builtin_memmove((R+28),(R+4),4);
}
B5884a4:{NFSU2_TR(0x5884a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5884a6:{NFSU2_TR(0x5884a6);
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
B5884a8:{NFSU2_TR(0x5884a8);
if(r1(R+518)){{goto L5884d0;}}
}
B5884aa:L5884aa:{c.instructions+=1;NFSU2_TR(0x5884aa);
__builtin_memmove((R+12),(R+12),4);
}
B5884b0:L5884b0:{c.instructions+=6;NFSU2_TR(0x5884b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5884b3:{NFSU2_TR(0x5884b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5884b5:{NFSU2_TR(0x5884b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5884b7:{NFSU2_TR(0x5884b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5884ba:{NFSU2_TR(0x5884ba);
__builtin_memmove((R+4),(R+24),4);
}
B5884bc:{NFSU2_TR(0x5884bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5884c1ull));
TAIL_STATIC(0x584b40u,584);
}
B5884c1:L5884c1:{c.instructions+=2;NFSU2_TR(0x5884c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5884c2:{NFSU2_TR(0x5884c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5884c7ull));
TAIL_STATIC(0x575630u,575);
}
B5884c7:L5884c7:{c.instructions+=4;NFSU2_TR(0x5884c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5884c9:{NFSU2_TR(0x5884c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5884cc:{NFSU2_TR(0x5884cc);
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
B5884ce:{NFSU2_TR(0x5884ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5884b0u);}goto L5884b0;}}
}
B5884d0:L5884d0:{c.instructions+=3;NFSU2_TR(0x5884d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5884d1:{NFSU2_TR(0x5884d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5884d2:{NFSU2_TR(0x5884d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5884e0:L5884e0:{c.instructions+=13;NFSU2_TR(0x5884e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5884e2:{NFSU2_TR(0x5884e2);
u8 U[4];
w4(U+0,u32(0x77898cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5884e7:{NFSU2_TR(0x5884e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5884ed:{NFSU2_TR(0x5884ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5884ee:{NFSU2_TR(0x5884ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5884f5:{NFSU2_TR(0x5884f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5884f6:{NFSU2_TR(0x5884f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5884f7:{NFSU2_TR(0x5884f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5884f8:{NFSU2_TR(0x5884f8);
__builtin_memmove((R+28),(R+4),4);
}
B5884fa:{NFSU2_TR(0x5884fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5884fe:{NFSU2_TR(0x5884fe);
u8 U[4];
w4(U+0,u32(0x7a1340ull));
s4(u32(r4(R+28)),r4(U+0));
}
B588504:{NFSU2_TR(0x588504);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58850c:{NFSU2_TR(0x58850c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588511ull));
TAIL_STATIC(0x586a80u,586);
}
B588511:L588511:{c.instructions+=3;NFSU2_TR(0x588511);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B588514:{NFSU2_TR(0x588514);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B588519:{NFSU2_TR(0x588519);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58851eull));
TAIL_STATIC(0x586620u,586);
}
B58851e:L58851e:{c.instructions+=5;NFSU2_TR(0x58851e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B588521:{NFSU2_TR(0x588521);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588524:{NFSU2_TR(0x588524);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B588526:{NFSU2_TR(0x588526);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58852b:{NFSU2_TR(0x58852b);
if(r1(R+518)){{goto L588549;}}
}
B58852d:L58852d:{c.instructions+=1;NFSU2_TR(0x58852d);
__builtin_memmove((R+4),(R+4),4);
}
B588530:L588530:{c.instructions+=6;NFSU2_TR(0x588530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B588532:{NFSU2_TR(0x588532);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B588535:{NFSU2_TR(0x588535);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B588537:{NFSU2_TR(0x588537);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588538:{NFSU2_TR(0x588538);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58853b:{NFSU2_TR(0x58853b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588540ull));
TAIL_STATIC(0x575630u,575);
}
B588540:L588540:{c.instructions+=4;NFSU2_TR(0x588540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B588542:{NFSU2_TR(0x588542);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B588545:{NFSU2_TR(0x588545);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B588547:{NFSU2_TR(0x588547);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588530u);}goto L588530;}}
}
B588549:L588549:{c.instructions+=7;NFSU2_TR(0x588549);
u8 U[4];
w4(U+0,u32(0x4def30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58854e:{NFSU2_TR(0x58854e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588550:{NFSU2_TR(0x588550);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588552:{NFSU2_TR(0x588552);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B588555:{NFSU2_TR(0x588555);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588556:{NFSU2_TR(0x588556);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B58855e:{NFSU2_TR(0x58855e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588563ull));
TAIL_STATIC(0x75c401u,75c);
}
B588563:L588563:{c.instructions+=6;NFSU2_TR(0x588563);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B588567:{NFSU2_TR(0x588567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588568:{NFSU2_TR(0x588568);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588569:{NFSU2_TR(0x588569);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588570:{NFSU2_TR(0x588570);
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
B588573:{NFSU2_TR(0x588573);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588580:L588580:{c.instructions+=13;NFSU2_TR(0x588580);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588582:{NFSU2_TR(0x588582);
u8 U[4];
w4(U+0,u32(0x7789b3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588587:{NFSU2_TR(0x588587);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58858d:{NFSU2_TR(0x58858d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58858e:{NFSU2_TR(0x58858e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588595:{NFSU2_TR(0x588595);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588596:{NFSU2_TR(0x588596);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588597:{NFSU2_TR(0x588597);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588598:{NFSU2_TR(0x588598);
__builtin_memmove((R+24),(R+4),4);
}
B58859a:{NFSU2_TR(0x58859a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58859b:{NFSU2_TR(0x58859b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58859f:{NFSU2_TR(0x58859f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5885a7:{NFSU2_TR(0x5885a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5885acull));
TAIL_STATIC(0x587790u,587);
}
B5885ac:L5885ac:{c.instructions+=6;NFSU2_TR(0x5885ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5885af:{NFSU2_TR(0x5885af);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5885b1:{NFSU2_TR(0x5885b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5885b4:{NFSU2_TR(0x5885b4);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+28)),r1(U+0));
}
B5885b6:{NFSU2_TR(0x5885b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5885bc:{NFSU2_TR(0x5885bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5885c1ull));
TAIL_STATIC(0x583220u,583);
}
B5885c1:L5885c1:{c.instructions+=2;NFSU2_TR(0x5885c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5885c7:{NFSU2_TR(0x5885c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5885ccull));
TAIL_STATIC(0x583220u,583);
}
B5885cc:L5885cc:{c.instructions+=4;NFSU2_TR(0x5885cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5885d2:{NFSU2_TR(0x5885d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5885d3:{NFSU2_TR(0x5885d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5885d9:{NFSU2_TR(0x5885d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5885deull));
TAIL_STATIC(0x575630u,575);
}
B5885de:L5885de:{c.instructions+=5;NFSU2_TR(0x5885de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5885e1:{NFSU2_TR(0x5885e1);
__builtin_memmove((R+4),(R+28),4);
}
B5885e3:{NFSU2_TR(0x5885e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5885e9:{NFSU2_TR(0x5885e9);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5885ed:{NFSU2_TR(0x5885ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5885f2ull));
TAIL_STATIC(0x4cbaf0u,4cb);
}
B5885f2:L5885f2:{c.instructions+=3;NFSU2_TR(0x5885f2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5885f4:{NFSU2_TR(0x5885f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5885fc:{NFSU2_TR(0x5885fc);
if(r1(R+518)){{goto L58861b;}}
}
B5885fe:L5885fe:{c.instructions+=1;NFSU2_TR(0x5885fe);
__builtin_memmove((R+28),(R+28),4);
}
B588600:L588600:{c.instructions+=7;NFSU2_TR(0x588600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B588602:{NFSU2_TR(0x588602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B588604:{NFSU2_TR(0x588604);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B588607:{NFSU2_TR(0x588607);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B588609:{NFSU2_TR(0x588609);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58860a:{NFSU2_TR(0x58860a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58860d:{NFSU2_TR(0x58860d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588612ull));
TAIL_STATIC(0x575630u,575);
}
B588612:L588612:{c.instructions+=4;NFSU2_TR(0x588612);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B588614:{NFSU2_TR(0x588614);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B588617:{NFSU2_TR(0x588617);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B588619:{NFSU2_TR(0x588619);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588600u);}goto L588600;}}
}
B58861b:L58861b:{c.instructions+=7;NFSU2_TR(0x58861b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58861f:{NFSU2_TR(0x58861f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588620:{NFSU2_TR(0x588620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588621:{NFSU2_TR(0x588621);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B588622:{NFSU2_TR(0x588622);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588629:{NFSU2_TR(0x588629);
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
B58862c:{NFSU2_TR(0x58862c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588630:L588630:{c.instructions+=11;NFSU2_TR(0x588630);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B588636:{NFSU2_TR(0x588636);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588638:{NFSU2_TR(0x588638);
u8 U[4];
w4(U+0,u32(0x7789d9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58863d:{NFSU2_TR(0x58863d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58863e:{NFSU2_TR(0x58863e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588645:{NFSU2_TR(0x588645);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588646:{NFSU2_TR(0x588646);
__builtin_memmove((R+24),(R+4),4);
}
B588648:{NFSU2_TR(0x588648);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58864b:{NFSU2_TR(0x58864b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58864d:{NFSU2_TR(0x58864d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58864e:{NFSU2_TR(0x58864e);
if(r1(R+518)){{goto L58875a;}}
}
B588654:L588654:{c.instructions+=3;NFSU2_TR(0x588654);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B588657:{NFSU2_TR(0x588657);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588659:{NFSU2_TR(0x588659);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58875a;}}
}
B58865f:L58865f:{c.instructions+=4;NFSU2_TR(0x58865f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B588662:{NFSU2_TR(0x588662);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B588665:{NFSU2_TR(0x588665);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B588667:{NFSU2_TR(0x588667);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58875a;}}
}
B58866d:L58866d:{c.instructions+=3;NFSU2_TR(0x58866d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58866f:{NFSU2_TR(0x58866f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588670:{NFSU2_TR(0x588670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588675ull));
TAIL_STATIC(0x744310u,744);
}
B588675:L588675:{c.instructions+=8;NFSU2_TR(0x588675);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B588679:{NFSU2_TR(0x588679);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58867c:{NFSU2_TR(0x58867c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58867e:{NFSU2_TR(0x58867e);
u8 U[4];
w4(U+0,u32(0xea60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588683:{NFSU2_TR(0x588683);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588684:{NFSU2_TR(0x588684);
s1(0x86679c,u8(0x0ull));
}
B58868b:{NFSU2_TR(0x58868b);
u8 U[4];
w4(U+0,u32(0x586b80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588690:{NFSU2_TR(0x588690);
if(r1(R+518)){{goto L5886a5;}}
}
B588692:L588692:{c.instructions+=6;NFSU2_TR(0x588692);
w4(R+0,u32(m2(0x7fbe04)));
}
B588699:{NFSU2_TR(0x588699);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58869c:{NFSU2_TR(0x58869c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58869d:{NFSU2_TR(0x58869d);
u8 U[4];
w4(U+0,u32(0x7fbddcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5886a2:{NFSU2_TR(0x5886a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5886a3:{NFSU2_TR(0x5886a3);
{goto L5886b6;}
}
B5886a5:L5886a5:{c.instructions+=5;NFSU2_TR(0x5886a5);
w4(R+8,u32(m2(0x7fbe00)));
}
B5886ac:{NFSU2_TR(0x5886ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5886af:{NFSU2_TR(0x5886af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5886b0:{NFSU2_TR(0x5886b0);
u8 U[4];
w4(U+0,u32(0x7fbdbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5886b5:{NFSU2_TR(0x5886b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5886b6:L5886b6:{c.instructions+=1;NFSU2_TR(0x5886b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5886bbull));
TAIL_STATIC(0x745160u,745);
}
B5886bb:L5886bb:{c.instructions+=4;NFSU2_TR(0x5886bb);
__builtin_memmove((R+28),(R+0),4);
}
B5886bd:{NFSU2_TR(0x5886bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5886c0:{NFSU2_TR(0x5886c0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5886c2:{NFSU2_TR(0x5886c2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5886d7;}}
}
B5886c4:L5886c4:{c.instructions+=6;NFSU2_TR(0x5886c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5886c8:{NFSU2_TR(0x5886c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5886cf:{NFSU2_TR(0x5886cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5886d0:{NFSU2_TR(0x5886d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5886d1:{NFSU2_TR(0x5886d1);
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
B5886d4:{NFSU2_TR(0x5886d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5886d7:L5886d7:{c.instructions+=3;NFSU2_TR(0x5886d7);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5886d9:{NFSU2_TR(0x5886d9);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5886db:{NFSU2_TR(0x5886db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5886e0ull));
TAIL_STATIC(0x6d7110u,6d7);
}
B5886e0:L5886e0:{c.instructions+=5;NFSU2_TR(0x5886e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5886e3:{NFSU2_TR(0x5886e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5886e7:{NFSU2_TR(0x5886e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5886e9:{NFSU2_TR(0x5886e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5886f1:{NFSU2_TR(0x5886f1);
if(r1(R+518)){{goto L588739;}}
}
B5886f3:L5886f3:{c.instructions+=13;NFSU2_TR(0x5886f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5886f7:{NFSU2_TR(0x5886f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5886fb:{NFSU2_TR(0x5886fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5886fc:{NFSU2_TR(0x5886fc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5886fe:{NFSU2_TR(0x5886fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B588704:{NFSU2_TR(0x588704);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588705:{NFSU2_TR(0x588705);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588706:{NFSU2_TR(0x588706);
u8 U[4];
w4(U+0,u32(0x586b80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58870b:{NFSU2_TR(0x58870b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58870c:{NFSU2_TR(0x58870c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58870e:{NFSU2_TR(0x58870e);
u8 U[4];
w4(U+0,u32(0x636f6e6eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588713:{NFSU2_TR(0x588713);
__builtin_memmove((R+4),(R+0),4);
}
B588715:{NFSU2_TR(0x588715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58871aull));
TAIL_STATIC(0x584680u,584);
}
B58871a:L58871a:{c.instructions+=10;NFSU2_TR(0x58871a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58871d:{NFSU2_TR(0x58871d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588720:{NFSU2_TR(0x588720);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B588723:{NFSU2_TR(0x588723);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B588726:{NFSU2_TR(0x588726);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58872a:{NFSU2_TR(0x58872a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588731:{NFSU2_TR(0x588731);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588732:{NFSU2_TR(0x588732);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588733:{NFSU2_TR(0x588733);
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
B588736:{NFSU2_TR(0x588736);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588739:L588739:{c.instructions+=11;NFSU2_TR(0x588739);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58873b:{NFSU2_TR(0x58873b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58873e:{NFSU2_TR(0x58873e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588741:{NFSU2_TR(0x588741);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B588744:{NFSU2_TR(0x588744);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B588747:{NFSU2_TR(0x588747);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58874b:{NFSU2_TR(0x58874b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588752:{NFSU2_TR(0x588752);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588753:{NFSU2_TR(0x588753);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588754:{NFSU2_TR(0x588754);
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
B588757:{NFSU2_TR(0x588757);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58875a:L58875a:{c.instructions+=7;NFSU2_TR(0x58875a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58875e:{NFSU2_TR(0x58875e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58875f:{NFSU2_TR(0x58875f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B588762:{NFSU2_TR(0x588762);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588769:{NFSU2_TR(0x588769);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58876a:{NFSU2_TR(0x58876a);
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
B58876d:{NFSU2_TR(0x58876d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588770:L588770:{c.instructions+=7;NFSU2_TR(0x588770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x208ull))));
}
B588776:{NFSU2_TR(0x588776);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588777:{NFSU2_TR(0x588777);
__builtin_memmove((R+12),(R+4),4);
}
B588779:{NFSU2_TR(0x588779);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B58877c:{NFSU2_TR(0x58877c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58877e:{NFSU2_TR(0x58877e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588782:{NFSU2_TR(0x588782);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L588793;}}
}
B588784:L588784:{c.instructions+=4;NFSU2_TR(0x588784);
w4(R+0,u32(0xffffffffull));
}
B588789:{NFSU2_TR(0x588789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58878a:{NFSU2_TR(0x58878a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x208ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x208ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x208ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B588790:{NFSU2_TR(0x588790);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588793:L588793:{c.instructions+=6;NFSU2_TR(0x588793);
u8 U[8];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58879a:{NFSU2_TR(0x58879a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58879b:{NFSU2_TR(0x58879b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B58879d:{NFSU2_TR(0x58879d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58879f:{NFSU2_TR(0x58879f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5887a0:{NFSU2_TR(0x5887a0);
if(r1(R+518)){{goto L588a24;}}
}
B5887a6:L5887a6:{c.instructions+=2;NFSU2_TR(0x5887a6);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5887a9:{NFSU2_TR(0x5887a9);
if(r1(R+518)){{goto L588a24;}}
}
B5887af:L5887af:{c.instructions+=3;NFSU2_TR(0x5887af);
u8 U[8];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5887b6:{NFSU2_TR(0x5887b6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5887b8:{NFSU2_TR(0x5887b8);
if(r1(R+518)){{goto L588a24;}}
}
B5887be:L5887be:{c.instructions+=5;NFSU2_TR(0x5887be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5887bf:{NFSU2_TR(0x5887bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5887c1:{NFSU2_TR(0x5887c1);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5887c6:{NFSU2_TR(0x5887c6);
w4(R+4,u32(0x7full));
}
B5887cb:{NFSU2_TR(0x5887cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5887cf:L5887cf:{c.instructions+=1;NFSU2_TR(0x5887cf);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5887d1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5887cfu);}goto L5887cf;}
}
B5887d1:L5887d1:{c.instructions+=8;NFSU2_TR(0x5887d1);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B5887d3:{NFSU2_TR(0x5887d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5887d4:{NFSU2_TR(0x5887d4);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5887d9:{NFSU2_TR(0x5887d9);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B5887da:{NFSU2_TR(0x5887da);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5887de:{NFSU2_TR(0x5887de);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5887e3:{NFSU2_TR(0x5887e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5887e4:{NFSU2_TR(0x5887e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5887e9ull));
TAIL_STATIC(0x741a50u,741);
}
B5887e9:L5887e9:{c.instructions+=6;NFSU2_TR(0x5887e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5887ea:{NFSU2_TR(0x5887ea);
u8 U[4];
w4(U+0,u32(0x7a13c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5887ef:{NFSU2_TR(0x5887ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5887f3:{NFSU2_TR(0x5887f3);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5887f8:{NFSU2_TR(0x5887f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5887f9:{NFSU2_TR(0x5887f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5887feull));
TAIL_STATIC(0x741a50u,741);
}
B5887fe:L5887fe:{c.instructions+=4;NFSU2_TR(0x5887fe);
u8 U[5];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B588805:{NFSU2_TR(0x588805);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B588808:{NFSU2_TR(0x588808);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58880a:{NFSU2_TR(0x58880a);
if(r1(R+518)){{goto L588825;}}
}
B58880c:L58880c:{c.instructions+=6;NFSU2_TR(0x58880c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58880e:{NFSU2_TR(0x58880e);
u8 U[4];
w4(U+0,u32(0x7a138cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588813:{NFSU2_TR(0x588813);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588817:{NFSU2_TR(0x588817);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58881c:{NFSU2_TR(0x58881c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58881d:{NFSU2_TR(0x58881d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588822ull));
TAIL_STATIC(0x741690u,741);
}
B588822:L588822:{c.instructions+=1;NFSU2_TR(0x588822);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B588825:L588825:{c.instructions+=1;NFSU2_TR(0x588825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58882aull));
TAIL_STATIC(0x571380u,571);
}
B58882a:L58882a:{c.instructions+=2;NFSU2_TR(0x58882a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58882c:{NFSU2_TR(0x58882c);
if(r1(R+518)){{goto L58884b;}}
}
B58882e:L58882e:{c.instructions+=1;NFSU2_TR(0x58882e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588833ull));
TAIL_STATIC(0x571380u,571);
}
B588833:L588833:{c.instructions+=6;NFSU2_TR(0x588833);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588834:{NFSU2_TR(0x588834);
u8 U[4];
w4(U+0,u32(0x7a13a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588839:{NFSU2_TR(0x588839);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58883d:{NFSU2_TR(0x58883d);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588842:{NFSU2_TR(0x588842);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588843:{NFSU2_TR(0x588843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588848ull));
TAIL_STATIC(0x741a50u,741);
}
B588848:L588848:{c.instructions+=1;NFSU2_TR(0x588848);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58884b:L58884b:{c.instructions+=1;NFSU2_TR(0x58884b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588850ull));
TAIL_STATIC(0x5712a0u,571);
}
B588850:L588850:{c.instructions+=2;NFSU2_TR(0x588850);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588852:{NFSU2_TR(0x588852);
if(r1(R+518)){{goto L588871;}}
}
B588854:L588854:{c.instructions+=1;NFSU2_TR(0x588854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588859ull));
TAIL_STATIC(0x5712a0u,571);
}
B588859:L588859:{c.instructions+=6;NFSU2_TR(0x588859);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58885a:{NFSU2_TR(0x58885a);
u8 U[4];
w4(U+0,u32(0x7a1398ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58885f:{NFSU2_TR(0x58885f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B588863:{NFSU2_TR(0x588863);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588868:{NFSU2_TR(0x588868);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588869:{NFSU2_TR(0x588869);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58886eull));
TAIL_STATIC(0x741a50u,741);
}
B58886e:L58886e:{c.instructions+=1;NFSU2_TR(0x58886e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B588871:L588871:{c.instructions+=2;NFSU2_TR(0x588871);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B588878:{NFSU2_TR(0x588878);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L588896;}}
}
B58887a:L58887a:{c.instructions+=6;NFSU2_TR(0x58887a);
u8 U[4];
w4(U+0,u32(0x86ff8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58887f:{NFSU2_TR(0x58887f);
u8 U[4];
w4(U+0,u32(0x7a143cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588884:{NFSU2_TR(0x588884);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588888:{NFSU2_TR(0x588888);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58888d:{NFSU2_TR(0x58888d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58888e:{NFSU2_TR(0x58888e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588893ull));
TAIL_STATIC(0x741a50u,741);
}
B588893:L588893:{c.instructions+=1;NFSU2_TR(0x588893);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B588896:L588896:{c.instructions+=2;NFSU2_TR(0x588896);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58889d:{NFSU2_TR(0x58889d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5889ee;}}
}
B5888a3:L5888a3:{c.instructions+=2;NFSU2_TR(0x5888a3);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5888a8:{NFSU2_TR(0x5888a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5888adull));
TAIL_STATIC(0x575620u,575);
}
B5888ad:L5888ad:{c.instructions+=7;NFSU2_TR(0x5888ad);
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
B5888b0:{NFSU2_TR(0x5888b0);
__builtin_memmove((R+24),(R+0),4);
}
B5888b2:{NFSU2_TR(0x5888b2);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5888b7:{NFSU2_TR(0x5888b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5888b8:{NFSU2_TR(0x5888b8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5888b9:{NFSU2_TR(0x5888b9);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B5888bc:{NFSU2_TR(0x5888bc);
u8 U[4];
__builtin_memmove((U+0),gp(0x783138),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5888c2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5888c2:L5888c2:{c.instructions+=2;NFSU2_TR(0x5888c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5888c3:{NFSU2_TR(0x5888c3);
u8 U[4];
__builtin_memmove((U+0),gp(0x783134),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5888c9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5888c9:L5888c9:{c.instructions+=2;NFSU2_TR(0x5888c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5888cb:{NFSU2_TR(0x5888cb);
if(r1(R+518)){{goto L5889e5;}}
}
B5888d1:L5888d1:{c.instructions+=2;NFSU2_TR(0x5888d1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5888d3:{NFSU2_TR(0x5888d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5888d8ull));
TAIL_STATIC(0x575620u,575);
}
B5888d8:L5888d8:{c.instructions+=5;NFSU2_TR(0x5888d8);
__builtin_memmove((R+12),(R+0),4);
}
B5888da:{NFSU2_TR(0x5888da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5888dd:{NFSU2_TR(0x5888dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5888e0:{NFSU2_TR(0x5888e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5888e2:{NFSU2_TR(0x5888e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5888e6:L5888e6:{c.instructions+=2;NFSU2_TR(0x5888e6);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5888e9:{NFSU2_TR(0x5888e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L588921;}}
}
B5888eb:L5888eb:{c.instructions+=4;NFSU2_TR(0x5888eb);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5888f0:{NFSU2_TR(0x5888f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5888f1:{NFSU2_TR(0x5888f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5888f3:{NFSU2_TR(0x5888f3);
u8 U[4];
__builtin_memmove((U+0),gp(0x783138),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5888f9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5888f9:L5888f9:{c.instructions+=2;NFSU2_TR(0x5888f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5888fa:{NFSU2_TR(0x5888fa);
u8 U[4];
__builtin_memmove((U+0),gp(0x783134),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588900ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B588900:L588900:{c.instructions+=3;NFSU2_TR(0x588900);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B588902:{NFSU2_TR(0x588902);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B588904:{NFSU2_TR(0x588904);
if(r1(R+518)){{goto L588910;}}
}
B588906:L588906:{c.instructions+=2;NFSU2_TR(0x588906);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B588909:{NFSU2_TR(0x588909);
if(r1(R+518)){{goto L588910;}}
}
B58890b:L58890b:{c.instructions+=3;NFSU2_TR(0x58890b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B58890c:{NFSU2_TR(0x58890c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58890e:{NFSU2_TR(0x58890e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588906u);}goto L588906;}}
}
B588910:L588910:{c.instructions+=4;NFSU2_TR(0x588910);
u8 U[4];
w4(U+0,u32(0x7a1428ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588915:{NFSU2_TR(0x588915);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588916:{NFSU2_TR(0x588916);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B588919:{NFSU2_TR(0x588919);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58891eull));
TAIL_STATIC(0x4400d0u,440);
}
B58891e:L58891e:{c.instructions+=1;NFSU2_TR(0x58891e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B588921:L588921:{c.instructions+=4;NFSU2_TR(0x588921);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588923:{NFSU2_TR(0x588923);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588925:{NFSU2_TR(0x588925);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588926:{NFSU2_TR(0x588926);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58892bull));
TAIL_STATIC(0x57ca10u,57c);
}
B58892b:L58892b:{c.instructions+=4;NFSU2_TR(0x58892b);
__builtin_memmove((R+28),(R+0),4);
}
B58892d:{NFSU2_TR(0x58892d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B588930:{NFSU2_TR(0x588930);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588932:{NFSU2_TR(0x588932);
if(r1(R+518)){{goto L5889a0;}}
}
B588934:L588934:{c.instructions+=2;NFSU2_TR(0x588934);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588935:{NFSU2_TR(0x588935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58893aull));
TAIL_STATIC(0x575600u,575);
}
B58893a:L58893a:{c.instructions+=3;NFSU2_TR(0x58893a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58893b:{NFSU2_TR(0x58893b);
__builtin_memmove((R+20),(R+0),4);
}
B58893d:{NFSU2_TR(0x58893d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588942ull));
TAIL_STATIC(0x5755e0u,575);
}
B588942:L588942:{c.instructions+=4;NFSU2_TR(0x588942);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B588944:{NFSU2_TR(0x588944);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B588947:{NFSU2_TR(0x588947);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588949:{NFSU2_TR(0x588949);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L588993;}}
}
B58894b:L58894b:{c.instructions+=1;NFSU2_TR(0x58894b);
{goto L588950;}
}
B588950:L588950:{c.instructions+=3;NFSU2_TR(0x588950);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588955:{NFSU2_TR(0x588955);
w4(R+20,u32(0x100000ull));
}
B58895a:{NFSU2_TR(0x58895a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58895e;}}
}
B58895c:L58895c:{c.instructions+=1;NFSU2_TR(0x58895c);
__builtin_memmove((R+20),(R+0),4);
}
B58895e:L58895e:{c.instructions+=4;NFSU2_TR(0x58895e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58895f:{NFSU2_TR(0x58895f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588960:{NFSU2_TR(0x588960);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588961:{NFSU2_TR(0x588961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588966ull));
TAIL_STATIC(0x57d9b0u,57d);
}
B588966:L588966:{c.instructions+=6;NFSU2_TR(0x588966);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58896a:{NFSU2_TR(0x58896a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B58896d:{NFSU2_TR(0x58896d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58896e:{NFSU2_TR(0x58896e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58896f:{NFSU2_TR(0x58896f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588970:{NFSU2_TR(0x588970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588975ull));
TAIL_STATIC(0x43bcd0u,43b);
}
B588975:L588975:{c.instructions+=4;NFSU2_TR(0x588975);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B588979:{NFSU2_TR(0x588979);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58897a:{NFSU2_TR(0x58897a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B58897d:{NFSU2_TR(0x58897d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588982ull));
TAIL_STATIC(0x575600u,575);
}
B588982:L588982:{c.instructions+=3;NFSU2_TR(0x588982);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588983:{NFSU2_TR(0x588983);
__builtin_memmove((R+20),(R+0),4);
}
B588985:{NFSU2_TR(0x588985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58898aull));
TAIL_STATIC(0x5755e0u,575);
}
B58898a:L58898a:{c.instructions+=4;NFSU2_TR(0x58898a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B58898c:{NFSU2_TR(0x58898c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B58898f:{NFSU2_TR(0x58898f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588991:{NFSU2_TR(0x588991);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588950u);}goto L588950;}}
}
B588993:L588993:{c.instructions+=2;NFSU2_TR(0x588993);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588994:{NFSU2_TR(0x588994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588999ull));
TAIL_STATIC(0x579bf0u,579);
}
B588999:L588999:{c.instructions+=2;NFSU2_TR(0x588999);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B58899d:{NFSU2_TR(0x58899d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5889a0:L5889a0:{c.instructions+=4;NFSU2_TR(0x5889a0);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5889a1:{NFSU2_TR(0x5889a1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5889a4:{NFSU2_TR(0x5889a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5889a8:{NFSU2_TR(0x5889a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5888e6u);}goto L5888e6;}}
}
B5889ae:L5889ae:{c.instructions+=8;NFSU2_TR(0x5889ae);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B5889b1:{NFSU2_TR(0x5889b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5889b4:{NFSU2_TR(0x5889b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5889b6:{NFSU2_TR(0x5889b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5889b7:{NFSU2_TR(0x5889b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5889b8:{NFSU2_TR(0x5889b8);
u8 U[4];
w4(U+0,u32(0x7a141cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5889bd:{NFSU2_TR(0x5889bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5889be:{NFSU2_TR(0x5889be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5889c3ull));
TAIL_STATIC(0x4400d0u,440);
}
B5889c3:L5889c3:{c.instructions+=6;NFSU2_TR(0x5889c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5889c4:{NFSU2_TR(0x5889c4);
u8 U[4];
w4(U+0,u32(0x7a1414ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5889c9:{NFSU2_TR(0x5889c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5889cd:{NFSU2_TR(0x5889cd);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5889d2:{NFSU2_TR(0x5889d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5889d3:{NFSU2_TR(0x5889d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5889d8ull));
TAIL_STATIC(0x741a50u,741);
}
B5889d8:L5889d8:{c.instructions+=2;NFSU2_TR(0x5889d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5889d9:{NFSU2_TR(0x5889d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5889deull));
TAIL_STATIC(0x575630u,575);
}
B5889de:L5889de:{c.instructions+=2;NFSU2_TR(0x5889de);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5889e2:{NFSU2_TR(0x5889e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B5889e5:L5889e5:{c.instructions+=2;NFSU2_TR(0x5889e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5889e6:{NFSU2_TR(0x5889e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5889ebull));
TAIL_STATIC(0x575630u,575);
}
B5889eb:L5889eb:{c.instructions+=1;NFSU2_TR(0x5889eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5889ee:L5889ee:{c.instructions+=12;NFSU2_TR(0x5889ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5889f5:{NFSU2_TR(0x5889f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5889fc:{NFSU2_TR(0x5889fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5889fe:{NFSU2_TR(0x5889fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5889ff:{NFSU2_TR(0x5889ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588a00:{NFSU2_TR(0x588a00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588a01:{NFSU2_TR(0x588a01);
u8 U[4];
w4(U+0,u32(0x584440ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588a06:{NFSU2_TR(0x588a06);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588a0a:{NFSU2_TR(0x588a0a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588a0b:{NFSU2_TR(0x588a0b);
u8 U[4];
w4(U+0,u32(0x61757468ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588a10:{NFSU2_TR(0x588a10);
__builtin_memmove((R+4),(R+12),4);
}
B588a12:{NFSU2_TR(0x588a12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588a17ull));
TAIL_STATIC(0x5869a0u,586);
}
B588a17:L588a17:{c.instructions+=6;NFSU2_TR(0x588a17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588a18:{NFSU2_TR(0x588a18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588a19:{NFSU2_TR(0x588a19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B588a1a:{NFSU2_TR(0x588a1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B588a1b:{NFSU2_TR(0x588a1b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x208ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x208ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x208ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B588a21:{NFSU2_TR(0x588a21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588a24:L588a24:{c.instructions+=6;NFSU2_TR(0x588a24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588a25:{NFSU2_TR(0x588a25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B588a26:{NFSU2_TR(0x588a26);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B588a29:{NFSU2_TR(0x588a29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B588a2a:{NFSU2_TR(0x588a2a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x208ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x208ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x208ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B588a30:{NFSU2_TR(0x588a30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588a40:L588a40:{c.instructions+=11;NFSU2_TR(0x588a40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588a41:{NFSU2_TR(0x588a41);
__builtin_memmove((R+20),(R+16),4);
}
B588a43:{NFSU2_TR(0x588a43);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B588a46:{NFSU2_TR(0x588a46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B588a4c:{NFSU2_TR(0x588a4c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588a4d:{NFSU2_TR(0x588a4d);
__builtin_memmove((R+12),(R+4),4);
}
B588a4f:{NFSU2_TR(0x588a4f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B588a52:{NFSU2_TR(0x588a52);
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
B588a54:{NFSU2_TR(0x588a54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588a55:{NFSU2_TR(0x588a55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588a56:{NFSU2_TR(0x588a56);
if(r1(R+518)){{goto L588a69;}}
}
B588a58:L588a58:{c.instructions+=6;NFSU2_TR(0x588a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B588a5b:{NFSU2_TR(0x588a5b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
}
B588a5e:{NFSU2_TR(0x588a5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B588a61:{NFSU2_TR(0x588a61);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B588a64:{NFSU2_TR(0x588a64);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B588a67:{NFSU2_TR(0x588a67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L588a77;}}
}
B588a69:L588a69:{c.instructions+=7;NFSU2_TR(0x588a69);
w4(R+0,u32(0xffffffffull));
}
B588a6e:{NFSU2_TR(0x588a6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588a6f:{NFSU2_TR(0x588a6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588a70:{NFSU2_TR(0x588a70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B588a71:{NFSU2_TR(0x588a71);
__builtin_memmove((R+16),(R+20),4);
}
B588a73:{NFSU2_TR(0x588a73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B588a74:{NFSU2_TR(0x588a74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588a77:L588a77:{c.instructions+=3;NFSU2_TR(0x588a77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588a78:{NFSU2_TR(0x588a78);
w4(R+4,u32(0x850080ull));
}
B588a7d:{NFSU2_TR(0x588a7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588a82ull));
TAIL_STATIC(0x503260u,503);
}
B588a82:L588a82:{c.instructions+=4;NFSU2_TR(0x588a82);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B588a87:{NFSU2_TR(0x588a87);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B588a89:{NFSU2_TR(0x588a89);
w4(R+4,u32(0x3full));
}
B588a8e:{NFSU2_TR(0x588a8e);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B588a92:L588a92:{c.instructions+=1;NFSU2_TR(0x588a92);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L588a94;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588a92u);}goto L588a92;}
}
B588a94:L588a94:{c.instructions+=8;NFSU2_TR(0x588a94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588a95:{NFSU2_TR(0x588a95);
u8 U[4];
w4(U+0,u32(0x7a13e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588a9a:{NFSU2_TR(0x588a9a);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B588a9c:{NFSU2_TR(0x588a9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B588aa0:{NFSU2_TR(0x588aa0);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588aa5:{NFSU2_TR(0x588aa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588aa6:{NFSU2_TR(0x588aa6);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B588aa7:{NFSU2_TR(0x588aa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588aacull));
TAIL_STATIC(0x741a50u,741);
}
B588aac:L588aac:{c.instructions+=1;NFSU2_TR(0x588aac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588ab1ull));
TAIL_STATIC(0x742c80u,742);
}
B588ab1:L588ab1:{c.instructions+=6;NFSU2_TR(0x588ab1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ab2:{NFSU2_TR(0x588ab2);
u8 U[4];
w4(U+0,u32(0x790b60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ab7:{NFSU2_TR(0x588ab7);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588abb:{NFSU2_TR(0x588abb);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ac0:{NFSU2_TR(0x588ac0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ac1:{NFSU2_TR(0x588ac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588ac6ull));
TAIL_STATIC(0x741a50u,741);
}
B588ac6:L588ac6:{c.instructions+=13;NFSU2_TR(0x588ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B588ac9:{NFSU2_TR(0x588ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B588acc:{NFSU2_TR(0x588acc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B588acf:{NFSU2_TR(0x588acf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ad1:{NFSU2_TR(0x588ad1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ad2:{NFSU2_TR(0x588ad2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ad3:{NFSU2_TR(0x588ad3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ad4:{NFSU2_TR(0x588ad4);
u8 U[4];
w4(U+0,u32(0x584520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ad9:{NFSU2_TR(0x588ad9);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588add:{NFSU2_TR(0x588add);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ade:{NFSU2_TR(0x588ade);
u8 U[4];
w4(U+0,u32(0x70657273ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ae3:{NFSU2_TR(0x588ae3);
__builtin_memmove((R+4),(R+12),4);
}
B588ae5:{NFSU2_TR(0x588ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588aeaull));
TAIL_STATIC(0x5869a0u,586);
}
B588aea:L588aea:{c.instructions+=6;NFSU2_TR(0x588aea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588aeb:{NFSU2_TR(0x588aeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588aec:{NFSU2_TR(0x588aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B588aed:{NFSU2_TR(0x588aed);
__builtin_memmove((R+16),(R+20),4);
}
B588aef:{NFSU2_TR(0x588aef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B588af0:{NFSU2_TR(0x588af0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588b00:L588b00:{c.instructions+=7;NFSU2_TR(0x588b00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588b01:{NFSU2_TR(0x588b01);
__builtin_memmove((R+20),(R+4),4);
}
B588b03:{NFSU2_TR(0x588b03);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B588b06:{NFSU2_TR(0x588b06);
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
B588b08:{NFSU2_TR(0x588b08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588b09:{NFSU2_TR(0x588b09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588b0a:{NFSU2_TR(0x588b0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L588b17;}}
}
B588b0c:L588b0c:{c.instructions+=5;NFSU2_TR(0x588b0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588b0d:{NFSU2_TR(0x588b0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588b0e:{NFSU2_TR(0x588b0e);
w4(R+0,u32(0xffffffffull));
}
B588b13:{NFSU2_TR(0x588b13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B588b14:{NFSU2_TR(0x588b14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588b17:L588b17:{c.instructions+=4;NFSU2_TR(0x588b17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588b18:{NFSU2_TR(0x588b18);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B588b1c:{NFSU2_TR(0x588b1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588b1e:{NFSU2_TR(0x588b1e);
if(r1(R+518)){{goto L588b47;}}
}
B588b20:L588b20:{c.instructions+=2;NFSU2_TR(0x588b20);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B588b23:{NFSU2_TR(0x588b23);
if(r1(R+518)){{goto L588b47;}}
}
B588b25:L588b25:{c.instructions+=3;NFSU2_TR(0x588b25);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B588b27:{NFSU2_TR(0x588b27);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588b2a:{NFSU2_TR(0x588b2a);
__builtin_memmove((R+12),(R+12),4);
}
B588b30:L588b30:{c.instructions+=3;NFSU2_TR(0x588b30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588b31:{NFSU2_TR(0x588b31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588b32:{NFSU2_TR(0x588b32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588b37ull));
TAIL_STATIC(0x43dc30u,43d);
}
B588b37:L588b37:{c.instructions+=3;NFSU2_TR(0x588b37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B588b3a:{NFSU2_TR(0x588b3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588b3c:{NFSU2_TR(0x588b3c);
if(r1(R+518)){{goto L588b51;}}
}
B588b3e:L588b3e:{c.instructions+=4;NFSU2_TR(0x588b3e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B588b3f:{NFSU2_TR(0x588b3f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B588b42:{NFSU2_TR(0x588b42);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B588b45:{NFSU2_TR(0x588b45);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588b30u);}goto L588b30;}}
}
B588b47:L588b47:{c.instructions+=6;NFSU2_TR(0x588b47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B588b48:{NFSU2_TR(0x588b48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588b49:{NFSU2_TR(0x588b49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588b4a:{NFSU2_TR(0x588b4a);
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
B588b4d:{NFSU2_TR(0x588b4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B588b4e:{NFSU2_TR(0x588b4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588b51:L588b51:{c.instructions+=7;NFSU2_TR(0x588b51);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B588b55:{NFSU2_TR(0x588b55);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B588b59:{NFSU2_TR(0x588b59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588b5a:{NFSU2_TR(0x588b5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588b5b:{NFSU2_TR(0x588b5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588b5c:{NFSU2_TR(0x588b5c);
__builtin_memmove((R+4),(R+20),4);
}
B588b5e:{NFSU2_TR(0x588b5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588b63ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588a40u);}goto L588a40;}
}
B588b63:L588b63:{c.instructions+=5;NFSU2_TR(0x588b63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B588b64:{NFSU2_TR(0x588b64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588b65:{NFSU2_TR(0x588b65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588b66:{NFSU2_TR(0x588b66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B588b67:{NFSU2_TR(0x588b67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588b70:L588b70:{c.instructions+=11;NFSU2_TR(0x588b70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588b71:{NFSU2_TR(0x588b71);
__builtin_memmove((R+20),(R+16),4);
}
B588b73:{NFSU2_TR(0x588b73);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B588b76:{NFSU2_TR(0x588b76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x974ull))));
}
B588b7c:{NFSU2_TR(0x588b7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588b7d:{NFSU2_TR(0x588b7d);
__builtin_memmove((R+12),(R+4),4);
}
B588b7f:{NFSU2_TR(0x588b7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B588b82:{NFSU2_TR(0x588b82);
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
B588b84:{NFSU2_TR(0x588b84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588b85:{NFSU2_TR(0x588b85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588b86:{NFSU2_TR(0x588b86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L588b96;}}
}
B588b88:L588b88:{c.instructions+=7;NFSU2_TR(0x588b88);
w4(R+0,u32(0xffffffffull));
}
B588b8d:{NFSU2_TR(0x588b8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588b8e:{NFSU2_TR(0x588b8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588b8f:{NFSU2_TR(0x588b8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B588b90:{NFSU2_TR(0x588b90);
__builtin_memmove((R+16),(R+20),4);
}
B588b92:{NFSU2_TR(0x588b92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B588b93:{NFSU2_TR(0x588b93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588b96:L588b96:{c.instructions+=2;NFSU2_TR(0x588b96);
u8 U[4];
w4(U+0,u32(0x86993cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588b9b:{NFSU2_TR(0x588b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588ba0ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B588ba0:L588ba0:{c.instructions+=3;NFSU2_TR(0x588ba0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B588ba3:{NFSU2_TR(0x588ba3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588ba5:{NFSU2_TR(0x588ba5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L588d2e;}}
}
B588bab:L588bab:{c.instructions+=4;NFSU2_TR(0x588bab);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B588bad:{NFSU2_TR(0x588bad);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B588bb2:{NFSU2_TR(0x588bb2);
w4(R+4,u32(0x259ull));
}
B588bb7:{NFSU2_TR(0x588bb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B588bbb:L588bbb:{c.instructions+=1;NFSU2_TR(0x588bbb);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L588bbd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588bbbu);}goto L588bbb;}
}
B588bbd:L588bbd:{c.instructions+=8;NFSU2_TR(0x588bbd);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B588bbf:{NFSU2_TR(0x588bbf);
u8 U[4];
w4(U+0,u32(0x869888ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588bc4:{NFSU2_TR(0x588bc4);
u8 U[4];
w4(U+0,u32(0x7a1488ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588bc9:{NFSU2_TR(0x588bc9);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B588bca:{NFSU2_TR(0x588bca);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B588bce:{NFSU2_TR(0x588bce);
u8 U[4];
w4(U+0,u32(0x968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588bd3:{NFSU2_TR(0x588bd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588bd4:{NFSU2_TR(0x588bd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588bd9ull));
TAIL_STATIC(0x741a50u,741);
}
B588bd9:L588bd9:{c.instructions+=7;NFSU2_TR(0x588bd9);
__builtin_memmove((R+4),gp(0x8698c8),4);
}
B588bdf:{NFSU2_TR(0x588bdf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588be0:{NFSU2_TR(0x588be0);
u8 U[4];
w4(U+0,u32(0x7a1480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588be5:{NFSU2_TR(0x588be5);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588be9:{NFSU2_TR(0x588be9);
u8 U[4];
w4(U+0,u32(0x968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588bee:{NFSU2_TR(0x588bee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588bef:{NFSU2_TR(0x588bef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588bf4ull));
TAIL_STATIC(0x741da0u,741);
}
B588bf4:L588bf4:{c.instructions+=6;NFSU2_TR(0x588bf4);
u8 U[4];
w4(U+0,u32(0x8698ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588bf9:{NFSU2_TR(0x588bf9);
u8 U[4];
w4(U+0,u32(0x7a1478ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588bfe:{NFSU2_TR(0x588bfe);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B588c02:{NFSU2_TR(0x588c02);
u8 U[4];
w4(U+0,u32(0x968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c07:{NFSU2_TR(0x588c07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c08:{NFSU2_TR(0x588c08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588c0dull));
TAIL_STATIC(0x741a50u,741);
}
B588c0d:L588c0d:{c.instructions+=6;NFSU2_TR(0x588c0d);
u8 U[4];
w4(U+0,u32(0x86993cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c12:{NFSU2_TR(0x588c12);
u8 U[4];
w4(U+0,u32(0x7a1470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c17:{NFSU2_TR(0x588c17);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B588c1b:{NFSU2_TR(0x588c1b);
u8 U[4];
w4(U+0,u32(0x968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c20:{NFSU2_TR(0x588c20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c21:{NFSU2_TR(0x588c21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588c26ull));
TAIL_STATIC(0x741a50u,741);
}
B588c26:L588c26:{c.instructions+=7;NFSU2_TR(0x588c26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B588c29:{NFSU2_TR(0x588c29);
u8 U[4];
w4(U+0,u32(0x7a1468ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c2e:{NFSU2_TR(0x588c2e);
u8 U[4];
w4(U+0,u32(0x7a1460ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c33:{NFSU2_TR(0x588c33);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588c37:{NFSU2_TR(0x588c37);
u8 U[4];
w4(U+0,u32(0x968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c3c:{NFSU2_TR(0x588c3c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c3d:{NFSU2_TR(0x588c3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588c42ull));
TAIL_STATIC(0x741a50u,741);
}
B588c42:L588c42:{c.instructions+=1;NFSU2_TR(0x588c42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588c47ull));
TAIL_STATIC(0x582190u,582);
}
B588c47:L588c47:{c.instructions+=6;NFSU2_TR(0x588c47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c48:{NFSU2_TR(0x588c48);
u8 U[4];
w4(U+0,u32(0x7a145cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c4d:{NFSU2_TR(0x588c4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B588c51:{NFSU2_TR(0x588c51);
u8 U[4];
w4(U+0,u32(0x968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c56:{NFSU2_TR(0x588c56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c57:{NFSU2_TR(0x588c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588c5cull));
TAIL_STATIC(0x741a50u,741);
}
B588c5c:L588c5c:{c.instructions+=3;NFSU2_TR(0x588c5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B588c5f:{NFSU2_TR(0x588c5f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B588c61:{NFSU2_TR(0x588c61);
w4(R+28,u32(0x8698dcull));
}
B588c66:L588c66:{c.instructions+=2;NFSU2_TR(0x588c66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c67:{NFSU2_TR(0x588c67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588c6cull));
TAIL_STATIC(0x43dbb0u,43d);
}
B588c6c:L588c6c:{c.instructions+=3;NFSU2_TR(0x588c6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B588c6f:{NFSU2_TR(0x588c6f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588c71:{NFSU2_TR(0x588c71);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L588d04;}}
}
B588c77:L588c77:{c.instructions+=5;NFSU2_TR(0x588c77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c78:{NFSU2_TR(0x588c78);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B588c7c:{NFSU2_TR(0x588c7c);
u8 U[4];
w4(U+0,u32(0x7a1454ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c81:{NFSU2_TR(0x588c81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c82:{NFSU2_TR(0x588c82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588c87ull));
TAIL_STATIC(0x4400d0u,440);
}
B588c87:L588c87:{c.instructions+=7;NFSU2_TR(0x588c87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c88:{NFSU2_TR(0x588c88);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588c8c:{NFSU2_TR(0x588c8c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c8d:{NFSU2_TR(0x588c8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B588c91:{NFSU2_TR(0x588c91);
u8 U[4];
w4(U+0,u32(0x968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c96:{NFSU2_TR(0x588c96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c97:{NFSU2_TR(0x588c97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588c9cull));
TAIL_STATIC(0x741a50u,741);
}
B588c9c:L588c9c:{c.instructions+=5;NFSU2_TR(0x588c9c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588c9d:{NFSU2_TR(0x588c9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B588ca1:{NFSU2_TR(0x588ca1);
u8 U[4];
w4(U+0,u32(0x7a144cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ca6:{NFSU2_TR(0x588ca6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ca7:{NFSU2_TR(0x588ca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588cacull));
TAIL_STATIC(0x4400d0u,440);
}
B588cac:L588cac:{c.instructions+=7;NFSU2_TR(0x588cac);
u8 U[4];
w4(U+0,u32(0x7a1468ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588cb1:{NFSU2_TR(0x588cb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588cb5:{NFSU2_TR(0x588cb5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588cb6:{NFSU2_TR(0x588cb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B588cba:{NFSU2_TR(0x588cba);
u8 U[4];
w4(U+0,u32(0x968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588cbf:{NFSU2_TR(0x588cbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588cc0:{NFSU2_TR(0x588cc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588cc5ull));
TAIL_STATIC(0x741a50u,741);
}
B588cc5:L588cc5:{c.instructions+=5;NFSU2_TR(0x588cc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588cc6:{NFSU2_TR(0x588cc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B588cca:{NFSU2_TR(0x588cca);
u8 U[4];
w4(U+0,u32(0x7a1444ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ccf:{NFSU2_TR(0x588ccf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588cd0:{NFSU2_TR(0x588cd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588cd5ull));
TAIL_STATIC(0x4400d0u,440);
}
B588cd5:L588cd5:{c.instructions+=8;NFSU2_TR(0x588cd5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B588cd8:{NFSU2_TR(0x588cd8);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588cdd:{NFSU2_TR(0x588cdd);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588ce1:{NFSU2_TR(0x588ce1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ce2:{NFSU2_TR(0x588ce2);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B588ce6:{NFSU2_TR(0x588ce6);
u8 U[4];
w4(U+0,u32(0x968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ceb:{NFSU2_TR(0x588ceb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588cec:{NFSU2_TR(0x588cec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588cf1ull));
TAIL_STATIC(0x741a50u,741);
}
B588cf1:L588cf1:{c.instructions+=5;NFSU2_TR(0x588cf1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B588cf4:{NFSU2_TR(0x588cf4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B588cf7:{NFSU2_TR(0x588cf7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B588cf8:{NFSU2_TR(0x588cf8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x86993cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x86993cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B588cfe:{NFSU2_TR(0x588cfe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588c66u);}goto L588c66;}}
}
B588d04:L588d04:{c.instructions+=12;NFSU2_TR(0x588d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B588d07:{NFSU2_TR(0x588d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B588d0a:{NFSU2_TR(0x588d0a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588d0c:{NFSU2_TR(0x588d0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588d0d:{NFSU2_TR(0x588d0d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588d0e:{NFSU2_TR(0x588d0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588d0f:{NFSU2_TR(0x588d0f);
u8 U[4];
w4(U+0,u32(0x5845a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588d14:{NFSU2_TR(0x588d14);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B588d18:{NFSU2_TR(0x588d18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588d19:{NFSU2_TR(0x588d19);
u8 U[4];
w4(U+0,u32(0x72616e6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588d1e:{NFSU2_TR(0x588d1e);
__builtin_memmove((R+4),(R+12),4);
}
B588d20:{NFSU2_TR(0x588d20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588d25ull));
TAIL_STATIC(0x5869a0u,586);
}
B588d25:L588d25:{c.instructions+=6;NFSU2_TR(0x588d25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588d26:{NFSU2_TR(0x588d26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588d27:{NFSU2_TR(0x588d27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B588d28:{NFSU2_TR(0x588d28);
__builtin_memmove((R+16),(R+20),4);
}
B588d2a:{NFSU2_TR(0x588d2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B588d2b:{NFSU2_TR(0x588d2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588d2e:L588d2e:{c.instructions+=7;NFSU2_TR(0x588d2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588d2f:{NFSU2_TR(0x588d2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588d30:{NFSU2_TR(0x588d30);
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
B588d32:{NFSU2_TR(0x588d32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B588d33:{NFSU2_TR(0x588d33);
__builtin_memmove((R+16),(R+20),4);
}
B588d35:{NFSU2_TR(0x588d35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B588d36:{NFSU2_TR(0x588d36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588d40:L588d40:{c.instructions+=10;NFSU2_TR(0x588d40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588d41:{NFSU2_TR(0x588d41);
__builtin_memmove((R+20),(R+16),4);
}
B588d43:{NFSU2_TR(0x588d43);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B588d46:{NFSU2_TR(0x588d46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x450ull))));
}
B588d4c:{NFSU2_TR(0x588d4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588d4d:{NFSU2_TR(0x588d4d);
__builtin_memmove((R+24),(R+4),4);
}
B588d4f:{NFSU2_TR(0x588d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B588d52:{NFSU2_TR(0x588d52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588d54:{NFSU2_TR(0x588d54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588d55:{NFSU2_TR(0x588d55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L588fa8;}}
}
B588d5b:L588d5b:{c.instructions+=2;NFSU2_TR(0x588d5b);
u8 U[4];
w4(U+0,u32(0x1f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588d60:{NFSU2_TR(0x588d60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588d65ull));
TAIL_STATIC(0x74ae50u,74a);
}
B588d65:L588d65:{c.instructions+=4;NFSU2_TR(0x588d65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B588d68:{NFSU2_TR(0x588d68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588d6a:{NFSU2_TR(0x588d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588d70:{NFSU2_TR(0x588d70);
if(r1(R+518)){{goto L588f5e;}}
}
B588d76:L588d76:{c.instructions+=4;NFSU2_TR(0x588d76);
u8 U[5];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B588d7b:{NFSU2_TR(0x588d7b);
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
B588d7d:{NFSU2_TR(0x588d7d);
w4(R+4,u32(0xffull));
}
B588d82:{NFSU2_TR(0x588d82);
u8 U[4];
w4(U+0,u32(u32(u32(0x59ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B588d86:L588d86:{c.instructions+=1;NFSU2_TR(0x588d86);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L588d88;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588d86u);}goto L588d86;}
}
B588d88:L588d88:{c.instructions+=3;NFSU2_TR(0x588d88);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B588d8a:{NFSU2_TR(0x588d8a);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B588d8b:{NFSU2_TR(0x588d8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588d90ull));
TAIL_STATIC(0x570a30u,570);
}
B588d90:L588d90:{c.instructions+=8;NFSU2_TR(0x588d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B588d93:{NFSU2_TR(0x588d93);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fa744ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B588d9a:{NFSU2_TR(0x588d9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588d9b:{NFSU2_TR(0x588d9b);
u8 U[4];
w4(U+0,u32(0x7a14dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588da0:{NFSU2_TR(0x588da0);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588da4:{NFSU2_TR(0x588da4);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588da9:{NFSU2_TR(0x588da9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588daa:{NFSU2_TR(0x588daa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588dafull));
TAIL_STATIC(0x741a50u,741);
}
B588daf:L588daf:{c.instructions+=7;NFSU2_TR(0x588daf);
__builtin_memmove((R+0),gp(0x7fa738),4);
}
B588db4:{NFSU2_TR(0x588db4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588db5:{NFSU2_TR(0x588db5);
u8 U[4];
w4(U+0,u32(0x7a14d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588dba:{NFSU2_TR(0x588dba);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B588dbe:{NFSU2_TR(0x588dbe);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588dc3:{NFSU2_TR(0x588dc3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588dc4:{NFSU2_TR(0x588dc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588dc9ull));
TAIL_STATIC(0x741690u,741);
}
B588dc9:L588dc9:{c.instructions+=6;NFSU2_TR(0x588dc9);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588dcb:{NFSU2_TR(0x588dcb);
u8 U[4];
w4(U+0,u32(0x7a14ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588dd0:{NFSU2_TR(0x588dd0);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588dd7:{NFSU2_TR(0x588dd7);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ddc:{NFSU2_TR(0x588ddc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ddd:{NFSU2_TR(0x588ddd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588de2ull));
TAIL_STATIC(0x741690u,741);
}
B588de2:L588de2:{c.instructions+=2;NFSU2_TR(0x588de2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B588de5:{NFSU2_TR(0x588de5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588deaull));
TAIL_STATIC(0x571380u,571);
}
B588dea:L588dea:{c.instructions+=2;NFSU2_TR(0x588dea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588dec:{NFSU2_TR(0x588dec);
if(r1(R+518)){{goto L588e0b;}}
}
B588dee:L588dee:{c.instructions+=1;NFSU2_TR(0x588dee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588df3ull));
TAIL_STATIC(0x571380u,571);
}
B588df3:L588df3:{c.instructions+=6;NFSU2_TR(0x588df3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588df4:{NFSU2_TR(0x588df4);
u8 U[4];
w4(U+0,u32(0x7a13a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588df9:{NFSU2_TR(0x588df9);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B588dfd:{NFSU2_TR(0x588dfd);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e02:{NFSU2_TR(0x588e02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e03:{NFSU2_TR(0x588e03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588e08ull));
TAIL_STATIC(0x741a50u,741);
}
B588e08:L588e08:{c.instructions+=1;NFSU2_TR(0x588e08);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B588e0b:L588e0b:{c.instructions+=1;NFSU2_TR(0x588e0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588e10ull));
TAIL_STATIC(0x5712a0u,571);
}
B588e10:L588e10:{c.instructions+=2;NFSU2_TR(0x588e10);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B588e12:{NFSU2_TR(0x588e12);
if(r1(R+518)){{goto L588e31;}}
}
B588e14:L588e14:{c.instructions+=1;NFSU2_TR(0x588e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588e19ull));
TAIL_STATIC(0x5712a0u,571);
}
B588e19:L588e19:{c.instructions+=6;NFSU2_TR(0x588e19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e1a:{NFSU2_TR(0x588e1a);
u8 U[4];
w4(U+0,u32(0x7a1398ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e1f:{NFSU2_TR(0x588e1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B588e23:{NFSU2_TR(0x588e23);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e28:{NFSU2_TR(0x588e28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e29:{NFSU2_TR(0x588e29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588e2eull));
TAIL_STATIC(0x741a50u,741);
}
B588e2e:L588e2e:{c.instructions+=1;NFSU2_TR(0x588e2e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B588e31:L588e31:{c.instructions+=1;NFSU2_TR(0x588e31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588e36ull));
TAIL_STATIC(0x742c80u,742);
}
B588e36:L588e36:{c.instructions+=6;NFSU2_TR(0x588e36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e37:{NFSU2_TR(0x588e37);
u8 U[4];
w4(U+0,u32(0x790b60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e3c:{NFSU2_TR(0x588e3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588e40:{NFSU2_TR(0x588e40);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e45:{NFSU2_TR(0x588e45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e46:{NFSU2_TR(0x588e46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588e4bull));
TAIL_STATIC(0x741a50u,741);
}
B588e4b:L588e4b:{c.instructions+=4;NFSU2_TR(0x588e4b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B588e4d:{NFSU2_TR(0x588e4d);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B588e52:{NFSU2_TR(0x588e52);
w4(R+4,u32(0xfull));
}
B588e57:{NFSU2_TR(0x588e57);
u8 U[4];
w4(U+0,u32(u32(u32(0x29ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B588e5b:L588e5b:{c.instructions+=1;NFSU2_TR(0x588e5b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L588e5d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x588e5bu);}goto L588e5b;}
}
B588e5d:L588e5d:{c.instructions+=9;NFSU2_TR(0x588e5d);
u8 U[4];
w4(U+0,u32(0x7a0fe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e62:{NFSU2_TR(0x588e62);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B588e64:{NFSU2_TR(0x588e64);
u8 U[4];
w4(U+0,u32(0x7a0fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e69:{NFSU2_TR(0x588e69);
u8 U[4];
w4(U+0,u32(0x7a0fe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e6e:{NFSU2_TR(0x588e6e);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B588e6f:{NFSU2_TR(0x588e6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B588e73:{NFSU2_TR(0x588e73);
u8 U[4];
w4(U+0,u32(0x7a14c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e78:{NFSU2_TR(0x588e78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e79:{NFSU2_TR(0x588e79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588e7eull));
TAIL_STATIC(0x4400d0u,440);
}
B588e7e:L588e7e:{c.instructions+=7;NFSU2_TR(0x588e7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B588e82:{NFSU2_TR(0x588e82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e83:{NFSU2_TR(0x588e83);
u8 U[4];
w4(U+0,u32(0x7a14b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e88:{NFSU2_TR(0x588e88);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588e8f:{NFSU2_TR(0x588e8f);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e94:{NFSU2_TR(0x588e94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588e95:{NFSU2_TR(0x588e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588e9aull));
TAIL_STATIC(0x741a50u,741);
}
B588e9a:L588e9a:{c.instructions+=11;NFSU2_TR(0x588e9a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B588e9c:{NFSU2_TR(0x588e9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588ea0:{NFSU2_TR(0x588ea0);
u8 U[8];
w4(U+0,u32(u32(u32(0x41ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588ea4:{NFSU2_TR(0x588ea4);
u8 U[8];
w4(U+0,u32(u32(u32(0x45ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588ea8:{NFSU2_TR(0x588ea8);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B588eac:{NFSU2_TR(0x588eac);
u8 U[6];
w4(U+0,u32(u32(u32(0x49ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B588eb1:{NFSU2_TR(0x588eb1);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588eb3:{NFSU2_TR(0x588eb3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588eb4:{NFSU2_TR(0x588eb4);
u8 U[5];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B588eb9:{NFSU2_TR(0x588eb9);
u8 U[5];
w4(U+0,u32(u32(u32(0x53ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B588ebd:{NFSU2_TR(0x588ebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588ec2ull));
TAIL_STATIC(0x571450u,571);
}
B588ec2:L588ec2:{c.instructions+=8;NFSU2_TR(0x588ec2);
u8 U[4];
w4(U+0,u32(0x7a14acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ec7:{NFSU2_TR(0x588ec7);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588ecb:{NFSU2_TR(0x588ecb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ecc:{NFSU2_TR(0x588ecc);
u8 U[4];
w4(U+0,u32(0x7a0fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ed1:{NFSU2_TR(0x588ed1);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B588ed5:{NFSU2_TR(0x588ed5);
u8 U[4];
w4(U+0,u32(0x7a14a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588eda:{NFSU2_TR(0x588eda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588edb:{NFSU2_TR(0x588edb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588ee0ull));
TAIL_STATIC(0x4400d0u,440);
}
B588ee0:L588ee0:{c.instructions+=8;NFSU2_TR(0x588ee0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
}
B588ee3:{NFSU2_TR(0x588ee3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B588ee7:{NFSU2_TR(0x588ee7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ee8:{NFSU2_TR(0x588ee8);
u8 U[4];
w4(U+0,u32(0x7a1498ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588eed:{NFSU2_TR(0x588eed);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588ef1:{NFSU2_TR(0x588ef1);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ef6:{NFSU2_TR(0x588ef6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ef7:{NFSU2_TR(0x588ef7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588efcull));
TAIL_STATIC(0x741a50u,741);
}
B588efc:L588efc:{c.instructions+=1;NFSU2_TR(0x588efc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588f01ull));
TAIL_STATIC(0x570a30u,570);
}
B588f01:L588f01:{c.instructions+=2;NFSU2_TR(0x588f01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f02:{NFSU2_TR(0x588f02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588f07ull));
TAIL_STATIC(0x57dbd0u,57d);
}
B588f07:L588f07:{c.instructions+=6;NFSU2_TR(0x588f07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f08:{NFSU2_TR(0x588f08);
u8 U[4];
w4(U+0,u32(0x7a1490ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f0d:{NFSU2_TR(0x588f0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B588f11:{NFSU2_TR(0x588f11);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f16:{NFSU2_TR(0x588f16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f17:{NFSU2_TR(0x588f17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588f1cull));
TAIL_STATIC(0x741a50u,741);
}
B588f1c:L588f1c:{c.instructions+=1;NFSU2_TR(0x588f1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588f21ull));
TAIL_STATIC(0x582190u,582);
}
B588f21:L588f21:{c.instructions+=6;NFSU2_TR(0x588f21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f22:{NFSU2_TR(0x588f22);
u8 U[4];
w4(U+0,u32(0x7a145cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f27:{NFSU2_TR(0x588f27);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B588f2e:{NFSU2_TR(0x588f2e);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f33:{NFSU2_TR(0x588f33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f34:{NFSU2_TR(0x588f34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588f39ull));
TAIL_STATIC(0x741a50u,741);
}
B588f39:L588f39:{c.instructions+=5;NFSU2_TR(0x588f39);
u8 U[4];
w4(U+0,u32(0x5823a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f3e:{NFSU2_TR(0x588f3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B588f45:{NFSU2_TR(0x588f45);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f47:{NFSU2_TR(0x588f47);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f48:{NFSU2_TR(0x588f48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588f4dull));
TAIL_STATIC(0x744ff0u,744);
}
B588f4d:L588f4d:{c.instructions+=4;NFSU2_TR(0x588f4d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B588f50:{NFSU2_TR(0x588f50);
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
B588f52:{NFSU2_TR(0x588f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B588f55:{NFSU2_TR(0x588f55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L588f67;}}
}
B588f57:L588f57:{c.instructions+=2;NFSU2_TR(0x588f57);
__builtin_memmove((R+4),(R+24),4);
}
B588f59:{NFSU2_TR(0x588f59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588f5eull));
TAIL_STATIC(0x586a80u,586);
}
B588f5e:L588f5e:{c.instructions+=6;NFSU2_TR(0x588f5e);
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
B588f61:{NFSU2_TR(0x588f61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588f62:{NFSU2_TR(0x588f62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588f63:{NFSU2_TR(0x588f63);
__builtin_memmove((R+16),(R+20),4);
}
B588f65:{NFSU2_TR(0x588f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B588f66:{NFSU2_TR(0x588f66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588f67:L588f67:{c.instructions+=3;NFSU2_TR(0x588f67);
u8 U[4];
w4(U+0,u32(0x9c40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f6c:{NFSU2_TR(0x588f6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f6d:{NFSU2_TR(0x588f6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588f72ull));
TAIL_STATIC(0x7444b0u,744);
}
B588f72:L588f72:{c.instructions+=6;NFSU2_TR(0x588f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B588f75:{NFSU2_TR(0x588f75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f76:{NFSU2_TR(0x588f76);
u8 U[4];
w4(U+0,u32(0x586c00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f7b:{NFSU2_TR(0x588f7b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f7d:{NFSU2_TR(0x588f7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f7e:{NFSU2_TR(0x588f7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588f83ull));
TAIL_STATIC(0x744410u,744);
}
B588f83:L588f83:{c.instructions+=6;NFSU2_TR(0x588f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B588f86:{NFSU2_TR(0x588f86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f87:{NFSU2_TR(0x588f87);
u8 U[4];
w4(U+0,u32(0x5843a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f8c:{NFSU2_TR(0x588f8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f8e:{NFSU2_TR(0x588f8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f8f:{NFSU2_TR(0x588f8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588f94ull));
TAIL_STATIC(0x744410u,744);
}
B588f94:L588f94:{c.instructions+=6;NFSU2_TR(0x588f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B588f97:{NFSU2_TR(0x588f97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f98:{NFSU2_TR(0x588f98);
u8 U[4];
w4(U+0,u32(0x5843f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f9d:{NFSU2_TR(0x588f9d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588f9f:{NFSU2_TR(0x588f9f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588fa0:{NFSU2_TR(0x588fa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588fa5ull));
TAIL_STATIC(0x744410u,744);
}
B588fa5:L588fa5:{c.instructions+=1;NFSU2_TR(0x588fa5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B588fa8:L588fa8:{c.instructions+=6;NFSU2_TR(0x588fa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B588fa9:{NFSU2_TR(0x588fa9);
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
B588fab:{NFSU2_TR(0x588fab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B588fac:{NFSU2_TR(0x588fac);
__builtin_memmove((R+16),(R+20),4);
}
B588fae:{NFSU2_TR(0x588fae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B588faf:{NFSU2_TR(0x588faf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B588fb0:L588fb0:{c.instructions+=5;NFSU2_TR(0x588fb0);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B588fb5:{NFSU2_TR(0x588fb5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588fb6:{NFSU2_TR(0x588fb6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B588fb8:{NFSU2_TR(0x588fb8);
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
B588fba:{NFSU2_TR(0x588fba);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x589067u,589);}
}
B588fc0:L588fc0:{c.instructions+=2;NFSU2_TR(0x588fc0);
u8 U[2];
__builtin_memmove((U+0),gp(0x8669f8),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B588fc6:{NFSU2_TR(0x588fc6);
if(r1(R+518)){{goto L588fe0;}}
}
B588fc8:L588fc8:{c.instructions+=2;NFSU2_TR(0x588fc8);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588fca:{NFSU2_TR(0x588fca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588fcfull));
TAIL_STATIC(0x587d50u,587);
}
B588fcf:L588fcf:{c.instructions+=4;NFSU2_TR(0x588fcf);
__builtin_memmove((R+0),gp(0x8669f8),1);
}
B588fd4:{NFSU2_TR(0x588fd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B588fd7:{NFSU2_TR(0x588fd7);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B588fd9:{NFSU2_TR(0x588fd9);
if(r1(R+518)){{goto L588fe0;}}
}
B588fdb:L588fdb:{c.instructions+=1;NFSU2_TR(0x588fdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588fe0ull));
TAIL_STATIC(0x583490u,583);
}
B588fe0:L588fe0:{c.instructions+=3;NFSU2_TR(0x588fe0);
__builtin_memmove((R+0),gp(0x8667ec),4);
}
B588fe5:{NFSU2_TR(0x588fe5);
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
B588fe7:{NFSU2_TR(0x588fe7);
if(r1(R+518)){{goto L588ff2;}}
}
B588fe9:L588fe9:{c.instructions+=2;NFSU2_TR(0x588fe9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588fea:{NFSU2_TR(0x588fea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x588fefull));
TAIL_STATIC(0x748650u,748);
}
B588fef:L588fef:{c.instructions+=1;NFSU2_TR(0x588fef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B588ff2:L588ff2:{c.instructions+=3;NFSU2_TR(0x588ff2);
__builtin_memmove((R+0),gp(0x8667e4),4);
}
B588ff7:{NFSU2_TR(0x588ff7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B588ff9:{NFSU2_TR(0x588ff9);
if(r1(R+518)){TAIL_STATIC(0x589004u,589);}
}
B588ffb:L588ffb:{c.instructions+=2;NFSU2_TR(0x588ffb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B588ffc:{NFSU2_TR(0x588ffc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x589001ull));
TAIL_STATIC(0x743b30u,743);
}
XIT:NFSU2_TR_EXIT(0x588,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
