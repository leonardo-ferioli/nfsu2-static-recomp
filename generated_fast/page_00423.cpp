#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40e(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_41a(u8* __restrict R,Cpu& c);
u32 body_41d(u8* __restrict R,Cpu& c);
u32 body_420(u8* __restrict R,Cpu& c);
u32 body_422(u8* __restrict R,Cpu& c);
u32 body_424(u8* __restrict R,Cpu& c);
u32 body_425(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x423,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x423,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_423(u8* __restrict R,Cpu& c);
u32 page_423(Cpu& c){return body_423(c.regs.data(),c);}
__attribute__((noinline)) u32 body_423(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x423003:goto L423003;
case 0x423009:c.instructions+=3;goto B423009;
case 0x42300f:c.instructions+=2;goto B42300f;
case 0x423011:c.instructions+=1;goto B423011;
case 0x423013:goto L423013;
case 0x423015:goto L423015;
case 0x423019:c.instructions+=7;goto B423019;
case 0x42301a:c.instructions+=6;goto B42301a;
case 0x423020:c.instructions+=5;goto B423020;
case 0x423026:c.instructions+=4;goto B423026;
case 0x423028:c.instructions+=3;goto B423028;
case 0x42302e:c.instructions+=2;goto B42302e;
case 0x423032:c.instructions+=1;goto B423032;
case 0x423034:goto L423034;
case 0x42303a:c.instructions+=2;goto B42303a;
case 0x42303c:c.instructions+=1;goto B42303c;
case 0x423042:goto L423042;
case 0x423043:c.instructions+=2;goto B423043;
case 0x423049:c.instructions+=1;goto B423049;
case 0x42304e:goto L42304e;
case 0x423055:c.instructions+=1;goto B423055;
case 0x42305a:goto L42305a;
case 0x423060:c.instructions+=4;goto B423060;
case 0x423062:c.instructions+=3;goto B423062;
case 0x423064:c.instructions+=2;goto B423064;
case 0x423068:c.instructions+=1;goto B423068;
case 0x42306e:goto L42306e;
case 0x423070:goto L423070;
case 0x423076:c.instructions+=2;goto B423076;
case 0x423077:c.instructions+=1;goto B423077;
case 0x42307c:goto L42307c;
case 0x42307e:c.instructions+=3;goto B42307e;
case 0x423081:c.instructions+=2;goto B423081;
case 0x423083:c.instructions+=1;goto B423083;
case 0x423085:goto L423085;
case 0x423087:c.instructions+=7;goto B423087;
case 0x42308a:c.instructions+=6;goto B42308a;
case 0x423091:c.instructions+=5;goto B423091;
case 0x423098:c.instructions+=4;goto B423098;
case 0x42309f:c.instructions+=3;goto B42309f;
case 0x4230a6:c.instructions+=2;goto B4230a6;
case 0x4230ad:c.instructions+=1;goto B4230ad;
case 0x4230af:goto L4230af;
case 0x4230b0:c.instructions+=3;goto B4230b0;
case 0x4230b1:c.instructions+=2;goto B4230b1;
case 0x4230b3:c.instructions+=1;goto B4230b3;
case 0x4230b8:goto L4230b8;
case 0x4230be:c.instructions+=3;goto B4230be;
case 0x4230bf:c.instructions+=2;goto B4230bf;
case 0x4230c1:c.instructions+=1;goto B4230c1;
case 0x4230c6:goto L4230c6;
case 0x4230c9:c.instructions+=7;goto B4230c9;
case 0x4230cd:c.instructions+=6;goto B4230cd;
case 0x4230d1:c.instructions+=5;goto B4230d1;
case 0x4230d7:c.instructions+=4;goto B4230d7;
case 0x4230d9:c.instructions+=3;goto B4230d9;
case 0x4230db:c.instructions+=2;goto B4230db;
case 0x4230dd:c.instructions+=1;goto B4230dd;
case 0x4230df:goto L4230df;
case 0x4230e2:goto L4230e2;
case 0x4230e4:c.instructions+=1;goto B4230e4;
case 0x4230e6:goto L4230e6;
case 0x4230e9:c.instructions+=3;goto B4230e9;
case 0x4230ec:c.instructions+=2;goto B4230ec;
case 0x4230ef:c.instructions+=1;goto B4230ef;
case 0x4230f1:goto L4230f1;
case 0x4230f7:c.instructions+=2;goto B4230f7;
case 0x4230fd:c.instructions+=1;goto B4230fd;
case 0x4230ff:goto L4230ff;
case 0x423102:c.instructions+=6;goto B423102;
case 0x423106:c.instructions+=5;goto B423106;
case 0x423109:c.instructions+=4;goto B423109;
case 0x42310b:c.instructions+=3;goto B42310b;
case 0x42310d:c.instructions+=2;goto B42310d;
case 0x423110:c.instructions+=1;goto B423110;
case 0x423112:goto L423112;
case 0x423114:c.instructions+=1;goto B423114;
case 0x423116:goto L423116;
case 0x423118:goto L423118;
case 0x42311e:c.instructions+=4;goto B42311e;
case 0x42311f:c.instructions+=3;goto B42311f;
case 0x423122:c.instructions+=2;goto B423122;
case 0x423124:c.instructions+=1;goto B423124;
case 0x423126:goto L423126;
case 0x42312c:c.instructions+=3;goto B42312c;
case 0x42312e:c.instructions+=2;goto B42312e;
case 0x423130:c.instructions+=1;goto B423130;
case 0x423132:goto L423132;
case 0x423138:c.instructions+=2;goto B423138;
case 0x42313c:c.instructions+=1;goto B42313c;
case 0x423140:goto L423140;
case 0x423142:c.instructions+=1;goto B423142;
case 0x423148:goto L423148;
case 0x42314c:c.instructions+=4;goto B42314c;
case 0x42314e:c.instructions+=3;goto B42314e;
case 0x423151:c.instructions+=2;goto B423151;
case 0x423153:c.instructions+=1;goto B423153;
case 0x423155:goto L423155;
case 0x423159:c.instructions+=3;goto B423159;
case 0x423160:c.instructions+=2;goto B423160;
case 0x423162:c.instructions+=1;goto B423162;
case 0x423164:goto L423164;
case 0x423167:c.instructions+=6;goto B423167;
case 0x42316b:c.instructions+=5;goto B42316b;
case 0x42316e:c.instructions+=4;goto B42316e;
case 0x423170:c.instructions+=3;goto B423170;
case 0x423172:c.instructions+=2;goto B423172;
case 0x423175:c.instructions+=1;goto B423175;
case 0x423177:goto L423177;
case 0x423179:c.instructions+=1;goto B423179;
case 0x42317b:goto L42317b;
case 0x42317d:goto L42317d;
case 0x423181:c.instructions+=6;goto B423181;
case 0x423187:c.instructions+=5;goto B423187;
case 0x423188:c.instructions+=4;goto B423188;
case 0x42318b:c.instructions+=3;goto B42318b;
case 0x42318d:c.instructions+=2;goto B42318d;
case 0x423191:c.instructions+=1;goto B423191;
case 0x423193:goto L423193;
case 0x423195:c.instructions+=1;goto B423195;
case 0x42319b:goto L42319b;
case 0x42319f:c.instructions+=2;goto B42319f;
case 0x4231a1:c.instructions+=1;goto B4231a1;
case 0x4231a3:goto L4231a3;
case 0x4231aa:c.instructions+=4;goto B4231aa;
case 0x4231b0:c.instructions+=3;goto B4231b0;
case 0x4231b1:c.instructions+=2;goto B4231b1;
case 0x4231b2:c.instructions+=1;goto B4231b2;
case 0x4231b7:goto L4231b7;
case 0x4231bd:c.instructions+=4;goto B4231bd;
case 0x4231c0:c.instructions+=3;goto B4231c0;
case 0x4231c3:c.instructions+=2;goto B4231c3;
case 0x4231c5:c.instructions+=1;goto B4231c5;
case 0x4231c7:goto L4231c7;
case 0x4231ce:c.instructions+=1;goto B4231ce;
case 0x4231d0:goto L4231d0;
case 0x4231d3:c.instructions+=6;goto B4231d3;
case 0x4231d5:c.instructions+=5;goto B4231d5;
case 0x4231db:c.instructions+=4;goto B4231db;
case 0x4231dc:c.instructions+=3;goto B4231dc;
case 0x4231df:c.instructions+=2;goto B4231df;
case 0x4231e1:c.instructions+=1;goto B4231e1;
case 0x4231e3:goto L4231e3;
case 0x4231e9:goto L4231e9;
case 0x4231ed:c.instructions+=2;goto B4231ed;
case 0x4231ef:c.instructions+=1;goto B4231ef;
case 0x4231f1:goto L4231f1;
case 0x4231f5:c.instructions+=2;goto B4231f5;
case 0x4231f6:c.instructions+=1;goto B4231f6;
case 0x4231fb:goto L4231fb;
case 0x4231fd:c.instructions+=1;goto B4231fd;
case 0x4231ff:goto L4231ff;
case 0x423204:c.instructions+=3;goto B423204;
case 0x423205:c.instructions+=2;goto B423205;
case 0x423206:c.instructions+=1;goto B423206;
case 0x42320b:goto L42320b;
case 0x42320e:c.instructions+=2;goto B42320e;
case 0x423210:c.instructions+=1;goto B423210;
case 0x423215:goto L423215;
case 0x423217:goto L423217;
case 0x42321d:c.instructions+=2;goto B42321d;
case 0x423222:c.instructions+=1;goto B423222;
case 0x423224:goto L423224;
case 0x423228:c.instructions+=1;goto B423228;
case 0x42322e:goto L42322e;
case 0x423230:c.instructions+=1;goto B423230;
case 0x423235:goto L423235;
case 0x423237:goto L423237;
case 0x423239:c.instructions+=1;goto B423239;
case 0x42323b:goto L42323b;
case 0x423241:c.instructions+=3;goto B423241;
case 0x423242:c.instructions+=2;goto B423242;
case 0x423243:c.instructions+=1;goto B423243;
case 0x423248:goto L423248;
case 0x42324b:goto L42324b;
case 0x42324f:c.instructions+=6;goto B42324f;
case 0x423253:c.instructions+=5;goto B423253;
case 0x42325a:c.instructions+=4;goto B42325a;
case 0x42325b:c.instructions+=3;goto B42325b;
case 0x42325d:c.instructions+=2;goto B42325d;
case 0x423261:c.instructions+=1;goto B423261;
case 0x423267:goto L423267;
case 0x423271:c.instructions+=1;goto B423271;
case 0x423273:goto L423273;
case 0x423278:c.instructions+=2;goto B423278;
case 0x423279:c.instructions+=1;goto B423279;
case 0x42327e:goto L42327e;
case 0x423281:c.instructions+=11;goto B423281;
case 0x423283:c.instructions+=10;goto B423283;
case 0x423289:c.instructions+=9;goto B423289;
case 0x42328c:c.instructions+=8;goto B42328c;
case 0x42328e:c.instructions+=7;goto B42328e;
case 0x423291:c.instructions+=6;goto B423291;
case 0x423294:c.instructions+=5;goto B423294;
case 0x423297:c.instructions+=4;goto B423297;
case 0x42329a:c.instructions+=3;goto B42329a;
case 0x4232a0:c.instructions+=2;goto B4232a0;
case 0x4232a7:c.instructions+=1;goto B4232a7;
case 0x4232ad:goto L4232ad;
case 0x4232b2:c.instructions+=3;goto B4232b2;
case 0x4232b3:c.instructions+=2;goto B4232b3;
case 0x4232b4:c.instructions+=1;goto B4232b4;
case 0x4232b9:goto L4232b9;
case 0x4232bd:c.instructions+=2;goto B4232bd;
case 0x4232be:c.instructions+=1;goto B4232be;
case 0x4232c3:goto L4232c3;
case 0x4232c9:c.instructions+=5;goto B4232c9;
case 0x4232cb:c.instructions+=4;goto B4232cb;
case 0x4232ce:c.instructions+=3;goto B4232ce;
case 0x4232d0:c.instructions+=2;goto B4232d0;
case 0x4232d3:c.instructions+=1;goto B4232d3;
case 0x4232d5:goto L4232d5;
case 0x4232d7:c.instructions+=1;goto B4232d7;
case 0x4232dd:goto L4232dd;
case 0x4232e3:c.instructions+=3;goto B4232e3;
case 0x4232e9:c.instructions+=2;goto B4232e9;
case 0x4232eb:c.instructions+=1;goto B4232eb;
case 0x4232f1:goto L4232f1;
case 0x4232f2:c.instructions+=5;goto B4232f2;
case 0x4232f3:c.instructions+=4;goto B4232f3;
case 0x4232f4:c.instructions+=3;goto B4232f4;
case 0x4232fa:c.instructions+=2;goto B4232fa;
case 0x4232fc:c.instructions+=1;goto B4232fc;
case 0x4232fe:goto L4232fe;
case 0x423304:c.instructions+=2;goto B423304;
case 0x423306:c.instructions+=1;goto B423306;
case 0x423308:goto L423308;
case 0x42330a:c.instructions+=1;goto B42330a;
case 0x42330f:goto L42330f;
case 0x423315:c.instructions+=2;goto B423315;
case 0x42331b:c.instructions+=1;goto B42331b;
case 0x423321:goto L423321;
case 0x423322:c.instructions+=2;goto B423322;
case 0x423325:c.instructions+=1;goto B423325;
case 0x423330:goto L423330;
case 0x423331:c.instructions+=14;goto B423331;
case 0x423332:c.instructions+=13;goto B423332;
case 0x423333:c.instructions+=12;goto B423333;
case 0x423335:c.instructions+=11;goto B423335;
case 0x423338:c.instructions+=10;goto B423338;
case 0x42333a:c.instructions+=9;goto B42333a;
case 0x423340:c.instructions+=8;goto B423340;
case 0x423341:c.instructions+=7;goto B423341;
case 0x423347:c.instructions+=6;goto B423347;
case 0x42334d:c.instructions+=5;goto B42334d;
case 0x42334f:c.instructions+=4;goto B42334f;
case 0x423355:c.instructions+=3;goto B423355;
case 0x42335a:c.instructions+=2;goto B42335a;
case 0x42335c:c.instructions+=1;goto B42335c;
case 0x42335d:goto L42335d;
case 0x42335f:goto L42335f;
case 0x423360:c.instructions+=2;goto B423360;
case 0x423362:c.instructions+=1;goto B423362;
case 0x423367:goto L423367;
case 0x42336c:c.instructions+=10;goto B42336c;
case 0x42336d:c.instructions+=9;goto B42336d;
case 0x42336e:c.instructions+=8;goto B42336e;
case 0x423370:c.instructions+=7;goto B423370;
case 0x423377:c.instructions+=6;goto B423377;
case 0x42337d:c.instructions+=5;goto B42337d;
case 0x423383:c.instructions+=4;goto B423383;
case 0x423389:c.instructions+=3;goto B423389;
case 0x42338f:c.instructions+=2;goto B42338f;
case 0x423395:c.instructions+=1;goto B423395;
case 0x42339a:goto L42339a;
case 0x4233a0:c.instructions+=1;goto B4233a0;
case 0x4233a5:goto L4233a5;
case 0x4233a8:c.instructions+=4;goto B4233a8;
case 0x4233aa:c.instructions+=3;goto B4233aa;
case 0x4233ad:c.instructions+=2;goto B4233ad;
case 0x4233ae:c.instructions+=1;goto B4233ae;
case 0x4233b0:goto L4233b0;
case 0x4233b1:c.instructions+=5;goto B4233b1;
case 0x4233b3:c.instructions+=4;goto B4233b3;
case 0x4233b4:c.instructions+=3;goto B4233b4;
case 0x4233b5:c.instructions+=2;goto B4233b5;
case 0x4233b6:c.instructions+=1;goto B4233b6;
case 0x4233c0:goto L4233c0;
case 0x4233c5:c.instructions+=1;goto B4233c5;
case 0x4233d0:goto L4233d0;
case 0x4233d6:c.instructions+=1;goto B4233d6;
case 0x4233e0:goto L4233e0;
case 0x4233e1:c.instructions+=12;goto B4233e1;
case 0x4233e3:c.instructions+=11;goto B4233e3;
case 0x4233e6:c.instructions+=10;goto B4233e6;
case 0x4233ec:c.instructions+=9;goto B4233ec;
case 0x4233ed:c.instructions+=8;goto B4233ed;
case 0x4233ee:c.instructions+=7;goto B4233ee;
case 0x4233f0:c.instructions+=6;goto B4233f0;
case 0x4233f6:c.instructions+=5;goto B4233f6;
case 0x4233f9:c.instructions+=4;goto B4233f9;
case 0x4233fb:c.instructions+=3;goto B4233fb;
case 0x4233fd:c.instructions+=2;goto B4233fd;
case 0x4233fe:c.instructions+=1;goto B4233fe;
case 0x423400:goto L423400;
case 0x423406:c.instructions+=2;goto B423406;
case 0x423409:c.instructions+=1;goto B423409;
case 0x42340b:goto L42340b;
case 0x42340d:c.instructions+=6;goto B42340d;
case 0x423414:c.instructions+=5;goto B423414;
case 0x42341b:c.instructions+=4;goto B42341b;
case 0x423422:c.instructions+=3;goto B423422;
case 0x423427:c.instructions+=2;goto B423427;
case 0x42342b:c.instructions+=1;goto B42342b;
case 0x42342c:goto L42342c;
case 0x42342e:goto L42342e;
case 0x42342f:c.instructions+=2;goto B42342f;
case 0x423433:c.instructions+=1;goto B423433;
case 0x423438:goto L423438;
case 0x42343e:c.instructions+=5;goto B42343e;
case 0x423441:c.instructions+=4;goto B423441;
case 0x423442:c.instructions+=3;goto B423442;
case 0x423446:c.instructions+=2;goto B423446;
case 0x423447:c.instructions+=1;goto B423447;
case 0x42344c:goto L42344c;
case 0x42344d:c.instructions+=5;goto B42344d;
case 0x42344e:c.instructions+=4;goto B42344e;
case 0x42344f:c.instructions+=3;goto B42344f;
case 0x423451:c.instructions+=2;goto B423451;
case 0x423452:c.instructions+=1;goto B423452;
case 0x423453:goto L423453;
case 0x423456:c.instructions+=13;goto B423456;
case 0x423459:c.instructions+=12;goto B423459;
case 0x42345b:c.instructions+=11;goto B42345b;
case 0x42345d:c.instructions+=10;goto B42345d;
case 0x423460:c.instructions+=9;goto B423460;
case 0x423463:c.instructions+=8;goto B423463;
case 0x423468:c.instructions+=7;goto B423468;
case 0x42346d:c.instructions+=6;goto B42346d;
case 0x42346e:c.instructions+=5;goto B42346e;
case 0x42346f:c.instructions+=4;goto B42346f;
case 0x423472:c.instructions+=3;goto B423472;
case 0x423473:c.instructions+=2;goto B423473;
case 0x423474:c.instructions+=1;goto B423474;
case 0x423479:goto L423479;
case 0x42347c:c.instructions+=2;goto B42347c;
case 0x42347f:c.instructions+=1;goto B42347f;
case 0x423481:goto L423481;
case 0x423487:c.instructions+=2;goto B423487;
case 0x423488:c.instructions+=1;goto B423488;
case 0x42348d:goto L42348d;
case 0x42348f:c.instructions+=6;goto B42348f;
case 0x423490:c.instructions+=5;goto B423490;
case 0x423491:c.instructions+=4;goto B423491;
case 0x423492:c.instructions+=3;goto B423492;
case 0x423494:c.instructions+=2;goto B423494;
case 0x423495:c.instructions+=1;goto B423495;
case 0x423496:goto L423496;
case 0x423497:c.instructions+=6;goto B423497;
case 0x423498:c.instructions+=5;goto B423498;
case 0x42349a:c.instructions+=4;goto B42349a;
case 0x42349b:c.instructions+=3;goto B42349b;
case 0x42349d:c.instructions+=2;goto B42349d;
case 0x42349e:c.instructions+=1;goto B42349e;
case 0x4234a0:goto L4234a0;
case 0x4234a2:c.instructions+=13;goto B4234a2;
case 0x4234a7:c.instructions+=12;goto B4234a7;
case 0x4234ad:c.instructions+=11;goto B4234ad;
case 0x4234ae:c.instructions+=10;goto B4234ae;
case 0x4234b5:c.instructions+=9;goto B4234b5;
case 0x4234b6:c.instructions+=8;goto B4234b6;
case 0x4234ba:c.instructions+=7;goto B4234ba;
case 0x4234bb:c.instructions+=6;goto B4234bb;
case 0x4234bc:c.instructions+=5;goto B4234bc;
case 0x4234bd:c.instructions+=4;goto B4234bd;
case 0x4234bf:c.instructions+=3;goto B4234bf;
case 0x4234c0:c.instructions+=2;goto B4234c0;
case 0x4234c4:c.instructions+=1;goto B4234c4;
case 0x4234c9:goto L4234c9;
case 0x4234cb:c.instructions+=9;goto B4234cb;
case 0x4234ce:c.instructions+=8;goto B4234ce;
case 0x4234d4:c.instructions+=7;goto B4234d4;
case 0x4234da:c.instructions+=6;goto B4234da;
case 0x4234e0:c.instructions+=5;goto B4234e0;
case 0x4234e2:c.instructions+=4;goto B4234e2;
case 0x4234e4:c.instructions+=3;goto B4234e4;
case 0x4234ea:c.instructions+=2;goto B4234ea;
case 0x4234ef:c.instructions+=1;goto B4234ef;
case 0x4234f0:goto L4234f0;
case 0x4234f2:goto L4234f2;
case 0x4234f3:c.instructions+=3;goto B4234f3;
case 0x4234f5:c.instructions+=2;goto B4234f5;
case 0x4234f9:c.instructions+=1;goto B4234f9;
case 0x4234fe:goto L4234fe;
case 0x423502:c.instructions+=20;goto B423502;
case 0x423506:c.instructions+=19;goto B423506;
case 0x423508:c.instructions+=18;goto B423508;
case 0x42350e:c.instructions+=17;goto B42350e;
case 0x423514:c.instructions+=16;goto B423514;
case 0x42351a:c.instructions+=15;goto B42351a;
case 0x423520:c.instructions+=14;goto B423520;
case 0x423524:c.instructions+=13;goto B423524;
case 0x423527:c.instructions+=12;goto B423527;
case 0x42352d:c.instructions+=11;goto B42352d;
case 0x423533:c.instructions+=10;goto B423533;
case 0x423539:c.instructions+=9;goto B423539;
case 0x42353f:c.instructions+=8;goto B42353f;
case 0x423540:c.instructions+=7;goto B423540;
case 0x423546:c.instructions+=6;goto B423546;
case 0x423548:c.instructions+=5;goto B423548;
case 0x423549:c.instructions+=4;goto B423549;
case 0x42354a:c.instructions+=3;goto B42354a;
case 0x423551:c.instructions+=2;goto B423551;
case 0x423554:c.instructions+=1;goto B423554;
case 0x423560:goto L423560;
case 0x423565:c.instructions+=1;goto B423565;
case 0x423570:goto L423570;
case 0x423571:c.instructions+=2;goto B423571;
case 0x423573:c.instructions+=1;goto B423573;
case 0x423578:goto L423578;
case 0x42357d:c.instructions+=1;goto B42357d;
case 0x42357f:goto L42357f;
case 0x423584:c.instructions+=3;goto B423584;
case 0x423585:c.instructions+=2;goto B423585;
case 0x423586:c.instructions+=1;goto B423586;
case 0x42358b:goto L42358b;
case 0x42358e:goto L42358e;
case 0x423590:c.instructions+=2;goto B423590;
case 0x423591:c.instructions+=1;goto B423591;
case 0x4235a0:goto L4235a0;
case 0x4235a4:c.instructions+=8;goto B4235a4;
case 0x4235a5:c.instructions+=7;goto B4235a5;
case 0x4235a7:c.instructions+=6;goto B4235a7;
case 0x4235ab:c.instructions+=5;goto B4235ab;
case 0x4235ac:c.instructions+=4;goto B4235ac;
case 0x4235ad:c.instructions+=3;goto B4235ad;
case 0x4235af:c.instructions+=2;goto B4235af;
case 0x4235b1:c.instructions+=1;goto B4235b1;
case 0x4235b6:goto L4235b6;
case 0x4235b8:c.instructions+=6;goto B4235b8;
case 0x4235be:c.instructions+=5;goto B4235be;
case 0x4235c4:c.instructions+=4;goto B4235c4;
case 0x4235ca:c.instructions+=3;goto B4235ca;
case 0x4235cc:c.instructions+=2;goto B4235cc;
case 0x4235cd:c.instructions+=1;goto B4235cd;
case 0x4235d0:goto L4235d0;
case 0x4235d5:c.instructions+=1;goto B4235d5;
case 0x4235e0:goto L4235e0;
case 0x4235e4:c.instructions+=8;goto B4235e4;
case 0x4235e5:c.instructions+=7;goto B4235e5;
case 0x4235e7:c.instructions+=6;goto B4235e7;
case 0x4235eb:c.instructions+=5;goto B4235eb;
case 0x4235ec:c.instructions+=4;goto B4235ec;
case 0x4235ed:c.instructions+=3;goto B4235ed;
case 0x4235ef:c.instructions+=2;goto B4235ef;
case 0x4235f1:c.instructions+=1;goto B4235f1;
case 0x4235f6:goto L4235f6;
case 0x4235fc:c.instructions+=3;goto B4235fc;
case 0x4235fe:c.instructions+=2;goto B4235fe;
case 0x4235ff:c.instructions+=1;goto B4235ff;
case 0x423610:goto L423610;
case 0x423612:c.instructions+=16;goto B423612;
case 0x423617:c.instructions+=15;goto B423617;
case 0x42361d:c.instructions+=14;goto B42361d;
case 0x42361e:c.instructions+=13;goto B42361e;
case 0x423625:c.instructions+=12;goto B423625;
case 0x423626:c.instructions+=11;goto B423626;
case 0x42362a:c.instructions+=10;goto B42362a;
case 0x42362b:c.instructions+=9;goto B42362b;
case 0x42362c:c.instructions+=8;goto B42362c;
case 0x42362e:c.instructions+=7;goto B42362e;
case 0x423632:c.instructions+=6;goto B423632;
case 0x423633:c.instructions+=5;goto B423633;
case 0x423634:c.instructions+=4;goto B423634;
case 0x423636:c.instructions+=3;goto B423636;
case 0x423638:c.instructions+=2;goto B423638;
case 0x42363c:c.instructions+=1;goto B42363c;
case 0x423641:goto L423641;
case 0x423647:c.instructions+=10;goto B423647;
case 0x42364d:c.instructions+=9;goto B42364d;
case 0x423655:c.instructions+=8;goto B423655;
case 0x42365c:c.instructions+=7;goto B42365c;
case 0x423666:c.instructions+=6;goto B423666;
case 0x42366c:c.instructions+=5;goto B42366c;
case 0x423672:c.instructions+=4;goto B423672;
case 0x423675:c.instructions+=3;goto B423675;
case 0x423677:c.instructions+=2;goto B423677;
case 0x42367c:c.instructions+=1;goto B42367c;
case 0x42367e:goto L42367e;
case 0x423680:c.instructions+=1;goto B423680;
case 0x423685:goto L423685;
case 0x423687:c.instructions+=3;goto B423687;
case 0x42368a:c.instructions+=2;goto B42368a;
case 0x42368c:c.instructions+=1;goto B42368c;
case 0x42368f:goto L42368f;
case 0x423693:c.instructions+=3;goto B423693;
case 0x423695:c.instructions+=2;goto B423695;
case 0x423698:c.instructions+=1;goto B423698;
case 0x42369a:goto L42369a;
case 0x42369c:c.instructions+=1;goto B42369c;
case 0x4236a1:goto L4236a1;
case 0x4236a4:c.instructions+=4;goto B4236a4;
case 0x4236a6:c.instructions+=3;goto B4236a6;
case 0x4236a9:c.instructions+=2;goto B4236a9;
case 0x4236ac:c.instructions+=1;goto B4236ac;
case 0x4236ae:goto L4236ae;
case 0x4236b2:c.instructions+=6;goto B4236b2;
case 0x4236b4:c.instructions+=5;goto B4236b4;
case 0x4236b5:c.instructions+=4;goto B4236b5;
case 0x4236b6:c.instructions+=3;goto B4236b6;
case 0x4236bd:c.instructions+=2;goto B4236bd;
case 0x4236c0:c.instructions+=1;goto B4236c0;
case 0x4236d0:goto L4236d0;
case 0x4236d5:c.instructions+=1;goto B4236d5;
case 0x4236e0:goto L4236e0;
case 0x4236e1:c.instructions+=2;goto B4236e1;
case 0x4236e3:c.instructions+=1;goto B4236e3;
case 0x4236e8:goto L4236e8;
case 0x4236ed:c.instructions+=1;goto B4236ed;
case 0x4236ef:goto L4236ef;
case 0x4236f4:c.instructions+=3;goto B4236f4;
case 0x4236f5:c.instructions+=2;goto B4236f5;
case 0x4236f6:c.instructions+=1;goto B4236f6;
case 0x4236fb:goto L4236fb;
case 0x4236fe:goto L4236fe;
case 0x423700:c.instructions+=2;goto B423700;
case 0x423701:c.instructions+=1;goto B423701;
case 0x423710:goto L423710;
case 0x423712:c.instructions+=15;goto B423712;
case 0x423717:c.instructions+=14;goto B423717;
case 0x42371d:c.instructions+=13;goto B42371d;
case 0x42371e:c.instructions+=12;goto B42371e;
case 0x423725:c.instructions+=11;goto B423725;
case 0x423726:c.instructions+=10;goto B423726;
case 0x423727:c.instructions+=9;goto B423727;
case 0x423728:c.instructions+=8;goto B423728;
case 0x42372a:c.instructions+=7;goto B42372a;
case 0x42372e:c.instructions+=6;goto B42372e;
case 0x423734:c.instructions+=5;goto B423734;
case 0x42373a:c.instructions+=4;goto B42373a;
case 0x42373c:c.instructions+=3;goto B42373c;
case 0x423742:c.instructions+=2;goto B423742;
case 0x42374a:c.instructions+=1;goto B42374a;
case 0x42374c:goto L42374c;
case 0x42374e:c.instructions+=1;goto B42374e;
case 0x423753:goto L423753;
case 0x423755:c.instructions+=3;goto B423755;
case 0x423758:c.instructions+=2;goto B423758;
case 0x42375a:c.instructions+=1;goto B42375a;
case 0x42375d:goto L42375d;
case 0x423761:c.instructions+=7;goto B423761;
case 0x423768:c.instructions+=6;goto B423768;
case 0x42376e:c.instructions+=5;goto B42376e;
case 0x42376f:c.instructions+=4;goto B42376f;
case 0x423770:c.instructions+=3;goto B423770;
case 0x423777:c.instructions+=2;goto B423777;
case 0x42377a:c.instructions+=1;goto B42377a;
case 0x423780:goto L423780;
case 0x423782:c.instructions+=16;goto B423782;
case 0x423787:c.instructions+=15;goto B423787;
case 0x42378d:c.instructions+=14;goto B42378d;
case 0x42378e:c.instructions+=13;goto B42378e;
case 0x423795:c.instructions+=12;goto B423795;
case 0x423796:c.instructions+=11;goto B423796;
case 0x42379a:c.instructions+=10;goto B42379a;
case 0x42379b:c.instructions+=9;goto B42379b;
case 0x42379c:c.instructions+=8;goto B42379c;
case 0x42379e:c.instructions+=7;goto B42379e;
case 0x4237a2:c.instructions+=6;goto B4237a2;
case 0x4237a3:c.instructions+=5;goto B4237a3;
case 0x4237a4:c.instructions+=4;goto B4237a4;
case 0x4237a6:c.instructions+=3;goto B4237a6;
case 0x4237a8:c.instructions+=2;goto B4237a8;
case 0x4237ac:c.instructions+=1;goto B4237ac;
case 0x4237b1:goto L4237b1;
case 0x4237b7:c.instructions+=7;goto B4237b7;
case 0x4237bd:c.instructions+=6;goto B4237bd;
case 0x4237c5:c.instructions+=5;goto B4237c5;
case 0x4237cc:c.instructions+=4;goto B4237cc;
case 0x4237cf:c.instructions+=3;goto B4237cf;
case 0x4237d1:c.instructions+=2;goto B4237d1;
case 0x4237d6:c.instructions+=1;goto B4237d6;
case 0x4237d8:goto L4237d8;
case 0x4237da:c.instructions+=1;goto B4237da;
case 0x4237df:goto L4237df;
case 0x4237e1:c.instructions+=3;goto B4237e1;
case 0x4237e4:c.instructions+=2;goto B4237e4;
case 0x4237e6:c.instructions+=1;goto B4237e6;
case 0x4237e9:goto L4237e9;
case 0x4237ed:c.instructions+=3;goto B4237ed;
case 0x4237ef:c.instructions+=2;goto B4237ef;
case 0x4237f2:c.instructions+=1;goto B4237f2;
case 0x4237f4:goto L4237f4;
case 0x4237f6:c.instructions+=1;goto B4237f6;
case 0x4237fb:goto L4237fb;
case 0x4237fe:c.instructions+=4;goto B4237fe;
case 0x423800:c.instructions+=3;goto B423800;
case 0x423803:c.instructions+=2;goto B423803;
case 0x423806:c.instructions+=1;goto B423806;
case 0x423808:goto L423808;
case 0x42380c:c.instructions+=6;goto B42380c;
case 0x42380e:c.instructions+=5;goto B42380e;
case 0x42380f:c.instructions+=4;goto B42380f;
case 0x423810:c.instructions+=3;goto B423810;
case 0x423817:c.instructions+=2;goto B423817;
case 0x42381a:c.instructions+=1;goto B42381a;
case 0x423820:goto L423820;
case 0x423821:c.instructions+=2;goto B423821;
case 0x423823:c.instructions+=1;goto B423823;
case 0x423828:goto L423828;
case 0x42382d:c.instructions+=1;goto B42382d;
case 0x42382f:goto L42382f;
case 0x423834:c.instructions+=3;goto B423834;
case 0x423835:c.instructions+=2;goto B423835;
case 0x423836:c.instructions+=1;goto B423836;
case 0x42383b:goto L42383b;
case 0x42383e:goto L42383e;
case 0x423840:c.instructions+=2;goto B423840;
case 0x423841:c.instructions+=1;goto B423841;
case 0x423850:goto L423850;
case 0x423852:c.instructions+=15;goto B423852;
case 0x423857:c.instructions+=14;goto B423857;
case 0x42385d:c.instructions+=13;goto B42385d;
case 0x42385e:c.instructions+=12;goto B42385e;
case 0x423865:c.instructions+=11;goto B423865;
case 0x423866:c.instructions+=10;goto B423866;
case 0x423867:c.instructions+=9;goto B423867;
case 0x423868:c.instructions+=8;goto B423868;
case 0x42386a:c.instructions+=7;goto B42386a;
case 0x42386e:c.instructions+=6;goto B42386e;
case 0x423874:c.instructions+=5;goto B423874;
case 0x42387a:c.instructions+=4;goto B42387a;
case 0x42387c:c.instructions+=3;goto B42387c;
case 0x423882:c.instructions+=2;goto B423882;
case 0x42388a:c.instructions+=1;goto B42388a;
case 0x42388c:goto L42388c;
case 0x42388e:c.instructions+=1;goto B42388e;
case 0x423893:goto L423893;
case 0x423895:c.instructions+=3;goto B423895;
case 0x423898:c.instructions+=2;goto B423898;
case 0x42389a:c.instructions+=1;goto B42389a;
case 0x42389d:goto L42389d;
case 0x4238a1:c.instructions+=7;goto B4238a1;
case 0x4238a8:c.instructions+=6;goto B4238a8;
case 0x4238ae:c.instructions+=5;goto B4238ae;
case 0x4238af:c.instructions+=4;goto B4238af;
case 0x4238b0:c.instructions+=3;goto B4238b0;
case 0x4238b7:c.instructions+=2;goto B4238b7;
case 0x4238ba:c.instructions+=1;goto B4238ba;
case 0x4238c0:goto L4238c0;
case 0x4238c2:c.instructions+=16;goto B4238c2;
case 0x4238c7:c.instructions+=15;goto B4238c7;
case 0x4238cd:c.instructions+=14;goto B4238cd;
case 0x4238ce:c.instructions+=13;goto B4238ce;
case 0x4238d5:c.instructions+=12;goto B4238d5;
case 0x4238d6:c.instructions+=11;goto B4238d6;
case 0x4238da:c.instructions+=10;goto B4238da;
case 0x4238db:c.instructions+=9;goto B4238db;
case 0x4238dc:c.instructions+=8;goto B4238dc;
case 0x4238de:c.instructions+=7;goto B4238de;
case 0x4238e2:c.instructions+=6;goto B4238e2;
case 0x4238e3:c.instructions+=5;goto B4238e3;
case 0x4238e4:c.instructions+=4;goto B4238e4;
case 0x4238e6:c.instructions+=3;goto B4238e6;
case 0x4238e8:c.instructions+=2;goto B4238e8;
case 0x4238ec:c.instructions+=1;goto B4238ec;
case 0x4238f1:goto L4238f1;
case 0x4238f7:c.instructions+=7;goto B4238f7;
case 0x4238fd:c.instructions+=6;goto B4238fd;
case 0x423905:c.instructions+=5;goto B423905;
case 0x42390c:c.instructions+=4;goto B42390c;
case 0x42390f:c.instructions+=3;goto B42390f;
case 0x423911:c.instructions+=2;goto B423911;
case 0x423916:c.instructions+=1;goto B423916;
case 0x423918:goto L423918;
case 0x42391a:c.instructions+=1;goto B42391a;
case 0x42391f:goto L42391f;
case 0x423921:c.instructions+=3;goto B423921;
case 0x423924:c.instructions+=2;goto B423924;
case 0x423926:c.instructions+=1;goto B423926;
case 0x423929:goto L423929;
case 0x42392d:c.instructions+=3;goto B42392d;
case 0x42392f:c.instructions+=2;goto B42392f;
case 0x423932:c.instructions+=1;goto B423932;
case 0x423934:goto L423934;
case 0x423936:c.instructions+=1;goto B423936;
case 0x42393b:goto L42393b;
case 0x42393e:c.instructions+=4;goto B42393e;
case 0x423940:c.instructions+=3;goto B423940;
case 0x423943:c.instructions+=2;goto B423943;
case 0x423946:c.instructions+=1;goto B423946;
case 0x423948:goto L423948;
case 0x42394c:c.instructions+=6;goto B42394c;
case 0x42394e:c.instructions+=5;goto B42394e;
case 0x42394f:c.instructions+=4;goto B42394f;
case 0x423950:c.instructions+=3;goto B423950;
case 0x423957:c.instructions+=2;goto B423957;
case 0x42395a:c.instructions+=1;goto B42395a;
case 0x423960:goto L423960;
case 0x423965:c.instructions+=1;goto B423965;
case 0x423970:goto L423970;
case 0x423971:c.instructions+=2;goto B423971;
case 0x423973:c.instructions+=1;goto B423973;
case 0x423978:goto L423978;
case 0x42397d:c.instructions+=1;goto B42397d;
case 0x42397f:goto L42397f;
case 0x423984:c.instructions+=3;goto B423984;
case 0x423985:c.instructions+=2;goto B423985;
case 0x423986:c.instructions+=1;goto B423986;
case 0x42398b:goto L42398b;
case 0x42398e:goto L42398e;
case 0x423990:c.instructions+=2;goto B423990;
case 0x423991:c.instructions+=1;goto B423991;
case 0x4239a0:goto L4239a0;
case 0x4239a2:c.instructions+=15;goto B4239a2;
case 0x4239a7:c.instructions+=14;goto B4239a7;
case 0x4239ad:c.instructions+=13;goto B4239ad;
case 0x4239ae:c.instructions+=12;goto B4239ae;
case 0x4239b5:c.instructions+=11;goto B4239b5;
case 0x4239b6:c.instructions+=10;goto B4239b6;
case 0x4239b7:c.instructions+=9;goto B4239b7;
case 0x4239b8:c.instructions+=8;goto B4239b8;
case 0x4239ba:c.instructions+=7;goto B4239ba;
case 0x4239be:c.instructions+=6;goto B4239be;
case 0x4239c4:c.instructions+=5;goto B4239c4;
case 0x4239ca:c.instructions+=4;goto B4239ca;
case 0x4239cc:c.instructions+=3;goto B4239cc;
case 0x4239d2:c.instructions+=2;goto B4239d2;
case 0x4239da:c.instructions+=1;goto B4239da;
case 0x4239dc:goto L4239dc;
case 0x4239de:c.instructions+=1;goto B4239de;
case 0x4239e3:goto L4239e3;
case 0x4239e5:c.instructions+=3;goto B4239e5;
case 0x4239e8:c.instructions+=2;goto B4239e8;
case 0x4239ea:c.instructions+=1;goto B4239ea;
case 0x4239ed:goto L4239ed;
case 0x4239f1:c.instructions+=7;goto B4239f1;
case 0x4239f8:c.instructions+=6;goto B4239f8;
case 0x4239fe:c.instructions+=5;goto B4239fe;
case 0x4239ff:c.instructions+=4;goto B4239ff;
case 0x423a00:c.instructions+=3;goto B423a00;
case 0x423a07:c.instructions+=2;goto B423a07;
case 0x423a0a:c.instructions+=1;goto B423a0a;
case 0x423a10:goto L423a10;
case 0x423a11:c.instructions+=22;goto B423a11;
case 0x423a13:c.instructions+=21;goto B423a13;
case 0x423a16:c.instructions+=20;goto B423a16;
case 0x423a19:c.instructions+=19;goto B423a19;
case 0x423a1f:c.instructions+=18;goto B423a1f;
case 0x423a20:c.instructions+=17;goto B423a20;
case 0x423a21:c.instructions+=16;goto B423a21;
case 0x423a22:c.instructions+=15;goto B423a22;
case 0x423a25:c.instructions+=14;goto B423a25;
case 0x423a27:c.instructions+=13;goto B423a27;
case 0x423a29:c.instructions+=12;goto B423a29;
case 0x423a2c:c.instructions+=11;goto B423a2c;
case 0x423a30:c.instructions+=10;goto B423a30;
case 0x423a32:c.instructions+=9;goto B423a32;
case 0x423a36:c.instructions+=8;goto B423a36;
case 0x423a37:c.instructions+=7;goto B423a37;
case 0x423a3f:c.instructions+=6;goto B423a3f;
case 0x423a43:c.instructions+=5;goto B423a43;
case 0x423a4b:c.instructions+=4;goto B423a4b;
case 0x423a53:c.instructions+=3;goto B423a53;
case 0x423a5b:c.instructions+=2;goto B423a5b;
case 0x423a63:c.instructions+=1;goto B423a63;
case 0x423a68:goto L423a68;
case 0x423a6e:c.instructions+=3;goto B423a6e;
case 0x423a6f:c.instructions+=2;goto B423a6f;
case 0x423a71:c.instructions+=1;goto B423a71;
case 0x423a76:goto L423a76;
case 0x423a78:c.instructions+=2;goto B423a78;
case 0x423a7a:c.instructions+=1;goto B423a7a;
case 0x423a7c:goto L423a7c;
case 0x423a82:c.instructions+=2;goto B423a82;
case 0x423a84:c.instructions+=1;goto B423a84;
case 0x423a86:goto L423a86;
case 0x423a8c:c.instructions+=3;goto B423a8c;
case 0x423a8d:c.instructions+=2;goto B423a8d;
case 0x423a8f:c.instructions+=1;goto B423a8f;
case 0x423a94:goto L423a94;
case 0x423a98:c.instructions+=3;goto B423a98;
case 0x423a99:c.instructions+=2;goto B423a99;
case 0x423a9b:c.instructions+=1;goto B423a9b;
case 0x423aa0:goto L423aa0;
case 0x423aa4:c.instructions+=7;goto B423aa4;
case 0x423aa8:c.instructions+=6;goto B423aa8;
case 0x423aab:c.instructions+=5;goto B423aab;
case 0x423ab1:c.instructions+=4;goto B423ab1;
case 0x423ab5:c.instructions+=3;goto B423ab5;
case 0x423ab7:c.instructions+=2;goto B423ab7;
case 0x423aba:c.instructions+=1;goto B423aba;
case 0x423abc:goto L423abc;
case 0x423ac2:c.instructions+=1;goto B423ac2;
case 0x423ac4:goto L423ac4;
case 0x423ac8:c.instructions+=5;goto B423ac8;
case 0x423aca:c.instructions+=4;goto B423aca;
case 0x423ad0:c.instructions+=3;goto B423ad0;
case 0x423ad2:c.instructions+=2;goto B423ad2;
case 0x423ad5:c.instructions+=1;goto B423ad5;
case 0x423ad7:goto L423ad7;
case 0x423adb:c.instructions+=5;goto B423adb;
case 0x423adc:c.instructions+=4;goto B423adc;
case 0x423ae0:c.instructions+=3;goto B423ae0;
case 0x423ae5:c.instructions+=2;goto B423ae5;
case 0x423ae8:c.instructions+=1;goto B423ae8;
case 0x423aed:goto L423aed;
case 0x423aef:goto L423aef;
case 0x423af3:goto L423af3;
case 0x423af9:c.instructions+=3;goto B423af9;
case 0x423afc:c.instructions+=2;goto B423afc;
case 0x423b02:c.instructions+=1;goto B423b02;
case 0x423b04:goto L423b04;
case 0x423b08:c.instructions+=3;goto B423b08;
case 0x423b0b:c.instructions+=2;goto B423b0b;
case 0x423b0e:c.instructions+=1;goto B423b0e;
case 0x423b10:goto L423b10;
case 0x423b12:goto L423b12;
case 0x423b13:c.instructions+=3;goto B423b13;
case 0x423b16:c.instructions+=2;goto B423b16;
case 0x423b17:c.instructions+=1;goto B423b17;
case 0x423b1c:goto L423b1c;
case 0x423b20:c.instructions+=2;goto B423b20;
case 0x423b22:c.instructions+=1;goto B423b22;
case 0x423b25:goto L423b25;
case 0x423b2b:c.instructions+=11;goto B423b2b;
case 0x423b2c:c.instructions+=10;goto B423b2c;
case 0x423b33:c.instructions+=9;goto B423b33;
case 0x423b3d:c.instructions+=8;goto B423b3d;
case 0x423b47:c.instructions+=7;goto B423b47;
case 0x423b4e:c.instructions+=6;goto B423b4e;
case 0x423b55:c.instructions+=5;goto B423b55;
case 0x423b56:c.instructions+=4;goto B423b56;
case 0x423b57:c.instructions+=3;goto B423b57;
case 0x423b59:c.instructions+=2;goto B423b59;
case 0x423b5a:c.instructions+=1;goto B423b5a;
case 0x423b60:goto L423b60;
case 0x423b62:c.instructions+=17;goto B423b62;
case 0x423b67:c.instructions+=16;goto B423b67;
case 0x423b6d:c.instructions+=15;goto B423b6d;
case 0x423b6e:c.instructions+=14;goto B423b6e;
case 0x423b75:c.instructions+=13;goto B423b75;
case 0x423b76:c.instructions+=12;goto B423b76;
case 0x423b7a:c.instructions+=11;goto B423b7a;
case 0x423b7b:c.instructions+=10;goto B423b7b;
case 0x423b7c:c.instructions+=9;goto B423b7c;
case 0x423b7d:c.instructions+=8;goto B423b7d;
case 0x423b7f:c.instructions+=7;goto B423b7f;
case 0x423b83:c.instructions+=6;goto B423b83;
case 0x423b84:c.instructions+=5;goto B423b84;
case 0x423b85:c.instructions+=4;goto B423b85;
case 0x423b87:c.instructions+=3;goto B423b87;
case 0x423b89:c.instructions+=2;goto B423b89;
case 0x423b8d:c.instructions+=1;goto B423b8d;
case 0x423b92:goto L423b92;
case 0x423b96:c.instructions+=12;goto B423b96;
case 0x423b9a:c.instructions+=11;goto B423b9a;
case 0x423ba0:c.instructions+=10;goto B423ba0;
case 0x423ba2:c.instructions+=9;goto B423ba2;
case 0x423ba8:c.instructions+=8;goto B423ba8;
case 0x423bae:c.instructions+=7;goto B423bae;
case 0x423bb4:c.instructions+=6;goto B423bb4;
case 0x423bb6:c.instructions+=5;goto B423bb6;
case 0x423bbc:c.instructions+=4;goto B423bbc;
case 0x423bc0:c.instructions+=3;goto B423bc0;
case 0x423bc7:c.instructions+=2;goto B423bc7;
case 0x423bcd:c.instructions+=1;goto B423bcd;
case 0x423bd2:goto L423bd2;
case 0x423bd3:c.instructions+=3;goto B423bd3;
case 0x423bd4:c.instructions+=2;goto B423bd4;
case 0x423bd6:c.instructions+=1;goto B423bd6;
case 0x423bdb:goto L423bdb;
case 0x423be1:c.instructions+=3;goto B423be1;
case 0x423be3:c.instructions+=2;goto B423be3;
case 0x423be6:c.instructions+=1;goto B423be6;
case 0x423be8:goto L423be8;
case 0x423bed:c.instructions+=1;goto B423bed;
case 0x423bef:goto L423bef;
case 0x423bf1:goto L423bf1;
case 0x423bf2:c.instructions+=5;goto B423bf2;
case 0x423bf3:c.instructions+=4;goto B423bf3;
case 0x423bf6:c.instructions+=3;goto B423bf6;
case 0x423bfc:c.instructions+=2;goto B423bfc;
case 0x423c02:c.instructions+=1;goto B423c02;
case 0x423c07:goto L423c07;
case 0x423c0b:c.instructions+=7;goto B423c0b;
case 0x423c0c:c.instructions+=6;goto B423c0c;
case 0x423c0e:c.instructions+=5;goto B423c0e;
case 0x423c0f:c.instructions+=4;goto B423c0f;
case 0x423c10:c.instructions+=3;goto B423c10;
case 0x423c17:c.instructions+=2;goto B423c17;
case 0x423c1a:c.instructions+=1;goto B423c1a;
case 0x423c20:goto L423c20;
case 0x423c25:c.instructions+=1;goto B423c25;
case 0x423c30:goto L423c30;
case 0x423c34:c.instructions+=8;goto B423c34;
case 0x423c35:c.instructions+=7;goto B423c35;
case 0x423c37:c.instructions+=6;goto B423c37;
case 0x423c3b:c.instructions+=5;goto B423c3b;
case 0x423c3c:c.instructions+=4;goto B423c3c;
case 0x423c3d:c.instructions+=3;goto B423c3d;
case 0x423c3f:c.instructions+=2;goto B423c3f;
case 0x423c41:c.instructions+=1;goto B423c41;
case 0x423c46:goto L423c46;
case 0x423c4a:c.instructions+=12;goto B423c4a;
case 0x423c50:c.instructions+=11;goto B423c50;
case 0x423c54:c.instructions+=10;goto B423c54;
case 0x423c5a:c.instructions+=9;goto B423c5a;
case 0x423c64:c.instructions+=8;goto B423c64;
case 0x423c6a:c.instructions+=7;goto B423c6a;
case 0x423c6c:c.instructions+=6;goto B423c6c;
case 0x423c72:c.instructions+=5;goto B423c72;
case 0x423c78:c.instructions+=4;goto B423c78;
case 0x423c7e:c.instructions+=3;goto B423c7e;
case 0x423c80:c.instructions+=2;goto B423c80;
case 0x423c83:c.instructions+=1;goto B423c83;
case 0x423c85:goto L423c85;
case 0x423c8a:c.instructions+=6;goto B423c8a;
case 0x423c8c:c.instructions+=5;goto B423c8c;
case 0x423c8f:c.instructions+=4;goto B423c8f;
case 0x423c95:c.instructions+=3;goto B423c95;
case 0x423c97:c.instructions+=2;goto B423c97;
case 0x423c98:c.instructions+=1;goto B423c98;
case 0x423c9b:goto L423c9b;
case 0x423c9d:c.instructions+=6;goto B423c9d;
case 0x423c9f:c.instructions+=5;goto B423c9f;
case 0x423ca2:c.instructions+=4;goto B423ca2;
case 0x423ca8:c.instructions+=3;goto B423ca8;
case 0x423caa:c.instructions+=2;goto B423caa;
case 0x423cab:c.instructions+=1;goto B423cab;
case 0x423cb0:goto L423cb0;
case 0x423cb5:c.instructions+=1;goto B423cb5;
case 0x423cc0:goto L423cc0;
case 0x423cc2:c.instructions+=17;goto B423cc2;
case 0x423cc7:c.instructions+=16;goto B423cc7;
case 0x423ccd:c.instructions+=15;goto B423ccd;
case 0x423cce:c.instructions+=14;goto B423cce;
case 0x423cd5:c.instructions+=13;goto B423cd5;
case 0x423cd6:c.instructions+=12;goto B423cd6;
case 0x423cda:c.instructions+=11;goto B423cda;
case 0x423cdb:c.instructions+=10;goto B423cdb;
case 0x423cdc:c.instructions+=9;goto B423cdc;
case 0x423cdd:c.instructions+=8;goto B423cdd;
case 0x423cdf:c.instructions+=7;goto B423cdf;
case 0x423ce3:c.instructions+=6;goto B423ce3;
case 0x423ce4:c.instructions+=5;goto B423ce4;
case 0x423ce5:c.instructions+=4;goto B423ce5;
case 0x423ce7:c.instructions+=3;goto B423ce7;
case 0x423ce9:c.instructions+=2;goto B423ce9;
case 0x423ced:c.instructions+=1;goto B423ced;
case 0x423cf2:goto L423cf2;
case 0x423cf4:c.instructions+=8;goto B423cf4;
case 0x423cfa:c.instructions+=7;goto B423cfa;
case 0x423d00:c.instructions+=6;goto B423d00;
case 0x423d04:c.instructions+=5;goto B423d04;
case 0x423d07:c.instructions+=4;goto B423d07;
case 0x423d0d:c.instructions+=3;goto B423d0d;
case 0x423d10:c.instructions+=2;goto B423d10;
case 0x423d15:c.instructions+=1;goto B423d15;
case 0x423d17:goto L423d17;
case 0x423d19:c.instructions+=1;goto B423d19;
case 0x423d1e:goto L423d1e;
case 0x423d20:c.instructions+=3;goto B423d20;
case 0x423d23:c.instructions+=2;goto B423d23;
case 0x423d25:c.instructions+=1;goto B423d25;
case 0x423d28:goto L423d28;
case 0x423d2c:c.instructions+=3;goto B423d2c;
case 0x423d2e:c.instructions+=2;goto B423d2e;
case 0x423d31:c.instructions+=1;goto B423d31;
case 0x423d33:goto L423d33;
case 0x423d35:c.instructions+=1;goto B423d35;
case 0x423d3a:goto L423d3a;
case 0x423d3d:c.instructions+=4;goto B423d3d;
case 0x423d3f:c.instructions+=3;goto B423d3f;
case 0x423d42:c.instructions+=2;goto B423d42;
case 0x423d45:c.instructions+=1;goto B423d45;
case 0x423d47:goto L423d47;
case 0x423d4b:c.instructions+=8;goto B423d4b;
case 0x423d51:c.instructions+=7;goto B423d51;
case 0x423d53:c.instructions+=6;goto B423d53;
case 0x423d54:c.instructions+=5;goto B423d54;
case 0x423d55:c.instructions+=4;goto B423d55;
case 0x423d56:c.instructions+=3;goto B423d56;
case 0x423d5d:c.instructions+=2;goto B423d5d;
case 0x423d60:c.instructions+=1;goto B423d60;
case 0x423d70:goto L423d70;
case 0x423d75:c.instructions+=1;goto B423d75;
case 0x423d80:goto L423d80;
case 0x423d81:c.instructions+=2;goto B423d81;
case 0x423d83:c.instructions+=1;goto B423d83;
case 0x423d88:goto L423d88;
case 0x423d8d:c.instructions+=1;goto B423d8d;
case 0x423d8f:goto L423d8f;
case 0x423d94:c.instructions+=3;goto B423d94;
case 0x423d95:c.instructions+=2;goto B423d95;
case 0x423d96:c.instructions+=1;goto B423d96;
case 0x423d9b:goto L423d9b;
case 0x423d9e:goto L423d9e;
case 0x423da0:c.instructions+=2;goto B423da0;
case 0x423da1:c.instructions+=1;goto B423da1;
case 0x423db0:goto L423db0;
case 0x423db2:c.instructions+=15;goto B423db2;
case 0x423db7:c.instructions+=14;goto B423db7;
case 0x423dbd:c.instructions+=13;goto B423dbd;
case 0x423dbe:c.instructions+=12;goto B423dbe;
case 0x423dc5:c.instructions+=11;goto B423dc5;
case 0x423dc6:c.instructions+=10;goto B423dc6;
case 0x423dc7:c.instructions+=9;goto B423dc7;
case 0x423dc8:c.instructions+=8;goto B423dc8;
case 0x423dca:c.instructions+=7;goto B423dca;
case 0x423dce:c.instructions+=6;goto B423dce;
case 0x423dd4:c.instructions+=5;goto B423dd4;
case 0x423dda:c.instructions+=4;goto B423dda;
case 0x423ddc:c.instructions+=3;goto B423ddc;
case 0x423de2:c.instructions+=2;goto B423de2;
case 0x423dea:c.instructions+=1;goto B423dea;
case 0x423dec:goto L423dec;
case 0x423dee:c.instructions+=1;goto B423dee;
case 0x423df3:goto L423df3;
case 0x423df5:c.instructions+=3;goto B423df5;
case 0x423df8:c.instructions+=2;goto B423df8;
case 0x423dfa:c.instructions+=1;goto B423dfa;
case 0x423dfd:goto L423dfd;
case 0x423e01:c.instructions+=7;goto B423e01;
case 0x423e08:c.instructions+=6;goto B423e08;
case 0x423e0e:c.instructions+=5;goto B423e0e;
case 0x423e0f:c.instructions+=4;goto B423e0f;
case 0x423e10:c.instructions+=3;goto B423e10;
case 0x423e17:c.instructions+=2;goto B423e17;
case 0x423e1a:c.instructions+=1;goto B423e1a;
case 0x423e20:goto L423e20;
case 0x423e23:c.instructions+=19;goto B423e23;
case 0x423e24:c.instructions+=18;goto B423e24;
case 0x423e25:c.instructions+=17;goto B423e25;
case 0x423e26:c.instructions+=16;goto B423e26;
case 0x423e2a:c.instructions+=15;goto B423e2a;
case 0x423e31:c.instructions+=14;goto B423e31;
case 0x423e33:c.instructions+=13;goto B423e33;
case 0x423e36:c.instructions+=12;goto B423e36;
case 0x423e39:c.instructions+=11;goto B423e39;
case 0x423e3a:c.instructions+=10;goto B423e3a;
case 0x423e3c:c.instructions+=9;goto B423e3c;
case 0x423e40:c.instructions+=8;goto B423e40;
case 0x423e43:c.instructions+=7;goto B423e43;
case 0x423e47:c.instructions+=6;goto B423e47;
case 0x423e4d:c.instructions+=5;goto B423e4d;
case 0x423e51:c.instructions+=4;goto B423e51;
case 0x423e52:c.instructions+=3;goto B423e52;
case 0x423e54:c.instructions+=2;goto B423e54;
case 0x423e5a:c.instructions+=1;goto B423e5a;
case 0x423e5f:goto L423e5f;
case 0x423e65:c.instructions+=10;goto B423e65;
case 0x423e6b:c.instructions+=9;goto B423e6b;
case 0x423e6d:c.instructions+=8;goto B423e6d;
case 0x423e6f:c.instructions+=7;goto B423e6f;
case 0x423e79:c.instructions+=6;goto B423e79;
case 0x423e80:c.instructions+=5;goto B423e80;
case 0x423e87:c.instructions+=4;goto B423e87;
case 0x423e8c:c.instructions+=3;goto B423e8c;
case 0x423e91:c.instructions+=2;goto B423e91;
case 0x423e95:c.instructions+=1;goto B423e95;
case 0x423e9b:goto L423e9b;
case 0x423ea1:c.instructions+=2;goto B423ea1;
case 0x423ea3:c.instructions+=1;goto B423ea3;
case 0x423ea9:goto L423ea9;
case 0x423eab:c.instructions+=5;goto B423eab;
case 0x423ead:c.instructions+=4;goto B423ead;
case 0x423eae:c.instructions+=3;goto B423eae;
case 0x423eb0:c.instructions+=2;goto B423eb0;
case 0x423eb4:c.instructions+=1;goto B423eb4;
case 0x423eb9:goto L423eb9;
case 0x423ebd:c.instructions+=14;goto B423ebd;
case 0x423ec4:c.instructions+=13;goto B423ec4;
case 0x423ec7:c.instructions+=12;goto B423ec7;
case 0x423eca:c.instructions+=11;goto B423eca;
case 0x423ece:c.instructions+=10;goto B423ece;
case 0x423ed2:c.instructions+=9;goto B423ed2;
case 0x423ed5:c.instructions+=8;goto B423ed5;
case 0x423ed8:c.instructions+=7;goto B423ed8;
case 0x423ed9:c.instructions+=6;goto B423ed9;
case 0x423edd:c.instructions+=5;goto B423edd;
case 0x423ee1:c.instructions+=4;goto B423ee1;
case 0x423ee2:c.instructions+=3;goto B423ee2;
case 0x423ee4:c.instructions+=2;goto B423ee4;
case 0x423ee8:c.instructions+=1;goto B423ee8;
case 0x423eed:goto L423eed;
case 0x423ef3:c.instructions+=3;goto B423ef3;
case 0x423ef5:c.instructions+=2;goto B423ef5;
case 0x423ef8:c.instructions+=1;goto B423ef8;
case 0x423efa:goto L423efa;
case 0x423f00:c.instructions+=8;goto B423f00;
case 0x423f04:c.instructions+=7;goto B423f04;
case 0x423f08:c.instructions+=6;goto B423f08;
case 0x423f0c:c.instructions+=5;goto B423f0c;
case 0x423f10:c.instructions+=4;goto B423f10;
case 0x423f12:c.instructions+=3;goto B423f12;
case 0x423f14:c.instructions+=2;goto B423f14;
case 0x423f17:c.instructions+=1;goto B423f17;
case 0x423f19:goto L423f19;
case 0x423f1d:c.instructions+=3;goto B423f1d;
case 0x423f1f:c.instructions+=2;goto B423f1f;
case 0x423f23:c.instructions+=1;goto B423f23;
case 0x423f25:goto L423f25;
case 0x423f29:c.instructions+=8;goto B423f29;
case 0x423f2d:c.instructions+=7;goto B423f2d;
case 0x423f31:c.instructions+=6;goto B423f31;
case 0x423f37:c.instructions+=5;goto B423f37;
case 0x423f3b:c.instructions+=4;goto B423f3b;
case 0x423f3d:c.instructions+=3;goto B423f3d;
case 0x423f3f:c.instructions+=2;goto B423f3f;
case 0x423f42:c.instructions+=1;goto B423f42;
case 0x423f44:goto L423f44;
case 0x423f48:c.instructions+=3;goto B423f48;
case 0x423f4a:c.instructions+=2;goto B423f4a;
case 0x423f4e:c.instructions+=1;goto B423f4e;
case 0x423f50:goto L423f50;
case 0x423f54:goto L423f54;
case 0x423f57:c.instructions+=7;goto B423f57;
case 0x423f5b:c.instructions+=6;goto B423f5b;
case 0x423f5e:c.instructions+=5;goto B423f5e;
case 0x423f62:c.instructions+=4;goto B423f62;
case 0x423f63:c.instructions+=3;goto B423f63;
case 0x423f65:c.instructions+=2;goto B423f65;
case 0x423f69:c.instructions+=1;goto B423f69;
case 0x423f6e:goto L423f6e;
case 0x423f72:c.instructions+=7;goto B423f72;
case 0x423f76:c.instructions+=6;goto B423f76;
case 0x423f7b:c.instructions+=5;goto B423f7b;
case 0x423f81:c.instructions+=4;goto B423f81;
case 0x423f83:c.instructions+=3;goto B423f83;
case 0x423f85:c.instructions+=2;goto B423f85;
case 0x423f88:c.instructions+=1;goto B423f88;
case 0x423f8a:goto L423f8a;
case 0x423f8f:goto L423f8f;
case 0x423f93:c.instructions+=7;goto B423f93;
case 0x423f96:c.instructions+=6;goto B423f96;
case 0x423f99:c.instructions+=5;goto B423f99;
case 0x423f9d:c.instructions+=4;goto B423f9d;
case 0x423f9e:c.instructions+=3;goto B423f9e;
case 0x423fa0:c.instructions+=2;goto B423fa0;
case 0x423fa4:c.instructions+=1;goto B423fa4;
case 0x423fa9:goto L423fa9;
case 0x423fad:c.instructions+=6;goto B423fad;
case 0x423fb1:c.instructions+=5;goto B423fb1;
case 0x423fb7:c.instructions+=4;goto B423fb7;
case 0x423fb9:c.instructions+=3;goto B423fb9;
case 0x423fbb:c.instructions+=2;goto B423fbb;
case 0x423fbe:c.instructions+=1;goto B423fbe;
case 0x423fc0:goto L423fc0;
case 0x423fc6:c.instructions+=3;goto B423fc6;
case 0x423fc9:c.instructions+=2;goto B423fc9;
case 0x423fce:c.instructions+=1;goto B423fce;
case 0x423fd2:goto L423fd2;
case 0x423fd5:c.instructions+=1;goto B423fd5;
case 0x423fd7:goto L423fd7;
case 0x423fdb:c.instructions+=3;goto B423fdb;
case 0x423fde:c.instructions+=2;goto B423fde;
case 0x423fe1:c.instructions+=1;goto B423fe1;
case 0x423fe3:goto L423fe3;
case 0x423fe7:c.instructions+=2;goto B423fe7;
case 0x423fec:c.instructions+=1;goto B423fec;
case 0x423fee:goto L423fee;
case 0x423ff0:goto L423ff0;
case 0x423ff1:c.instructions+=4;goto B423ff1;
case 0x423ff4:c.instructions+=3;goto B423ff4;
case 0x423ff5:c.instructions+=2;goto B423ff5;
case 0x423ff7:c.instructions+=1;goto B423ff7;
case 0x423ffc:goto L423ffc;
default:missing_instruction(c.pc);}
B423003:L423003:{c.instructions+=4;NFSU2_TR(0x423003);
__builtin_memmove(gp(0x827ac8),(R+4),4);
}
B423009:{NFSU2_TR(0x423009);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42300f:{NFSU2_TR(0x42300f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B423011:{NFSU2_TR(0x423011);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L423015;}}
}
B423013:L423013:{c.instructions+=1;NFSU2_TR(0x423013);
__builtin_memmove((R+4),(R+8),4);
}
B423015:L423015:{c.instructions+=8;NFSU2_TR(0x423015);
u8 U[16];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B423019:{NFSU2_TR(0x423019);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B42301a:{NFSU2_TR(0x42301a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423020:{NFSU2_TR(0x423020);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B423026:{NFSU2_TR(0x423026);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B423028:{NFSU2_TR(0x423028);
__builtin_memmove(gp(0x827ac4),(R+4),4);
}
B42302e:{NFSU2_TR(0x42302e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423032:{NFSU2_TR(0x423032);
if(r1(R+518)){{goto L42305a;}}
}
B423034:L423034:{c.instructions+=3;NFSU2_TR(0x423034);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42303a:{NFSU2_TR(0x42303a);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42303c:{NFSU2_TR(0x42303c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4232ad;}}
}
B423042:L423042:{c.instructions+=3;NFSU2_TR(0x423042);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423043:{NFSU2_TR(0x423043);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16e0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B423049:{NFSU2_TR(0x423049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42304eull));
TAIL_STATIC(0x40a2d0u,40a);
}
B42304e:L42304e:{c.instructions+=2;NFSU2_TR(0x42304e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17a0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423055:{NFSU2_TR(0x423055);
{goto L4232ad;}
}
B42305a:L42305a:{c.instructions+=5;NFSU2_TR(0x42305a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B423060:{NFSU2_TR(0x423060);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B423062:{NFSU2_TR(0x423062);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B423064:{NFSU2_TR(0x423064);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423068:{NFSU2_TR(0x423068);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L423267;}}
}
B42306e:L42306e:{c.instructions+=1;NFSU2_TR(0x42306e);
__builtin_memmove((R+28),(R+28),4);
}
B423070:L423070:{c.instructions+=3;NFSU2_TR(0x423070);
__builtin_memmove((R+4),gp(0x81cbb8),4);
}
B423076:{NFSU2_TR(0x423076);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423077:{NFSU2_TR(0x423077);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42307cull));
TAIL_STATIC(0x440e50u,440);
}
B42307c:L42307c:{c.instructions+=4;NFSU2_TR(0x42307c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42307e:{NFSU2_TR(0x42307e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B423081:{NFSU2_TR(0x423081);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B423083:{NFSU2_TR(0x423083);
if(r1(R+518)){{goto L4230af;}}
}
B423085:L423085:{c.instructions+=8;NFSU2_TR(0x423085);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B423087:{NFSU2_TR(0x423087);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42308a:{NFSU2_TR(0x42308a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423091:{NFSU2_TR(0x423091);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423098:{NFSU2_TR(0x423098);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbaull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42309f:{NFSU2_TR(0x42309f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4230a6:{NFSU2_TR(0x4230a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4230ad:{NFSU2_TR(0x4230ad);
__builtin_memmove((R+28),(R+0),4);
}
B4230af:L4230af:{c.instructions+=4;NFSU2_TR(0x4230af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4230b0:{NFSU2_TR(0x4230b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4230b1:{NFSU2_TR(0x4230b1);
__builtin_memmove((R+4),(R+12),4);
}
B4230b3:{NFSU2_TR(0x4230b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4230b8ull));
TAIL_STATIC(0x41ad40u,41a);
}
B4230b8:L4230b8:{c.instructions+=4;NFSU2_TR(0x4230b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4230be:{NFSU2_TR(0x4230be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4230bf:{NFSU2_TR(0x4230bf);
__builtin_memmove((R+4),(R+28),4);
}
B4230c1:{NFSU2_TR(0x4230c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4230c6ull));
TAIL_STATIC(0x420270u,420);
}
B4230c6:L4230c6:{c.instructions+=8;NFSU2_TR(0x4230c6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4230c9:{NFSU2_TR(0x4230c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4230cd:{NFSU2_TR(0x4230cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4230d1:{NFSU2_TR(0x4230d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4230d7:{NFSU2_TR(0x4230d7);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B4230d9:{NFSU2_TR(0x4230d9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4230db:{NFSU2_TR(0x4230db);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4230dd:{NFSU2_TR(0x4230dd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L423126;}}
}
B4230df:L4230df:{c.instructions+=1;NFSU2_TR(0x4230df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4230e2:L4230e2:{c.instructions+=2;NFSU2_TR(0x4230e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4230e4:{NFSU2_TR(0x4230e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L423126;}}
}
B4230e6:L4230e6:{c.instructions+=4;NFSU2_TR(0x4230e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4230e9:{NFSU2_TR(0x4230e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4230ec:{NFSU2_TR(0x4230ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4230ef:{NFSU2_TR(0x4230ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L423118;}}
}
B4230f1:L4230f1:{c.instructions+=3;NFSU2_TR(0x4230f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4230f7:{NFSU2_TR(0x4230f7);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4230fd:{NFSU2_TR(0x4230fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L423118;}}
}
B4230ff:L4230ff:{c.instructions+=7;NFSU2_TR(0x4230ff);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423102:{NFSU2_TR(0x423102);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423106:{NFSU2_TR(0x423106);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423109:{NFSU2_TR(0x423109);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B42310b:{NFSU2_TR(0x42310b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42310d:{NFSU2_TR(0x42310d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B423110:{NFSU2_TR(0x423110);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L423116;}}
}
B423112:L423112:{c.instructions+=2;NFSU2_TR(0x423112);
w1(R+8,u8(0x1ull));
}
B423114:{NFSU2_TR(0x423114);
{goto L423118;}
}
B423116:L423116:{c.instructions+=1;NFSU2_TR(0x423116);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B423118:L423118:{c.instructions+=5;NFSU2_TR(0x423118);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42311e:{NFSU2_TR(0x42311e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B42311f:{NFSU2_TR(0x42311f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B423122:{NFSU2_TR(0x423122);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B423124:{NFSU2_TR(0x423124);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4230e2u);}goto L4230e2;}}
}
B423126:L423126:{c.instructions+=4;NFSU2_TR(0x423126);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42312c:{NFSU2_TR(0x42312c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B42312e:{NFSU2_TR(0x42312e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B423130:{NFSU2_TR(0x423130);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L423193;}}
}
B423132:L423132:{c.instructions+=3;NFSU2_TR(0x423132);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B423138:{NFSU2_TR(0x423138);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42313c:{NFSU2_TR(0x42313c);
__builtin_memmove((R+16),(R+16),4);
}
B423140:L423140:{c.instructions+=2;NFSU2_TR(0x423140);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B423142:{NFSU2_TR(0x423142);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L423237;}}
}
B423148:L423148:{c.instructions+=5;NFSU2_TR(0x423148);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42314c:{NFSU2_TR(0x42314c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42314e:{NFSU2_TR(0x42314e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B423151:{NFSU2_TR(0x423151);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+12))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B423153:{NFSU2_TR(0x423153);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42317d;}}
}
B423155:L423155:{c.instructions+=4;NFSU2_TR(0x423155);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B423159:{NFSU2_TR(0x423159);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(s32(s8(r1(U+4)))));
}
B423160:{NFSU2_TR(0x423160);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B423162:{NFSU2_TR(0x423162);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42317d;}}
}
B423164:L423164:{c.instructions+=7;NFSU2_TR(0x423164);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423167:{NFSU2_TR(0x423167);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42316b:{NFSU2_TR(0x42316b);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42316e:{NFSU2_TR(0x42316e);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B423170:{NFSU2_TR(0x423170);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B423172:{NFSU2_TR(0x423172);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B423175:{NFSU2_TR(0x423175);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42317b;}}
}
B423177:L423177:{c.instructions+=2;NFSU2_TR(0x423177);
w1(R+8,u8(0x1ull));
}
B423179:{NFSU2_TR(0x423179);
{goto L42317d;}
}
B42317b:L42317b:{c.instructions+=1;NFSU2_TR(0x42317b);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B42317d:L42317d:{c.instructions+=7;NFSU2_TR(0x42317d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B423181:{NFSU2_TR(0x423181);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423187:{NFSU2_TR(0x423187);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B423188:{NFSU2_TR(0x423188);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B42318b:{NFSU2_TR(0x42318b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42318d:{NFSU2_TR(0x42318d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423191:{NFSU2_TR(0x423191);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x423140u);}goto L423140;}}
}
B423193:L423193:{c.instructions+=2;NFSU2_TR(0x423193);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B423195:{NFSU2_TR(0x423195);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L423237;}}
}
B42319b:L42319b:{c.instructions+=3;NFSU2_TR(0x42319b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42319f:{NFSU2_TR(0x42319f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4231a1:{NFSU2_TR(0x4231a1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4231e9;}}
}
B4231a3:L4231a3:{c.instructions+=5;NFSU2_TR(0x4231a3);
u8 U[16];
w4(U+0,u32(u32(u32(0x2c4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4231aa:{NFSU2_TR(0x4231aa);
__builtin_memmove((R+8),gp(0x81cbbc),4);
}
B4231b0:{NFSU2_TR(0x4231b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4231b1:{NFSU2_TR(0x4231b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4231b2:{NFSU2_TR(0x4231b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4231b7ull));
TAIL_STATIC(0x43f920u,43f);
}
B4231b7:L4231b7:{c.instructions+=5;NFSU2_TR(0x4231b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4231bd:{NFSU2_TR(0x4231bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4231c0:{NFSU2_TR(0x4231c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4231c3:{NFSU2_TR(0x4231c3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4231c5:{NFSU2_TR(0x4231c5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4231e3;}}
}
B4231c7:L4231c7:{c.instructions+=2;NFSU2_TR(0x4231c7);
u8 U[12];
w4(U+0,u32(u32(u32(0x2c0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4231ce:{NFSU2_TR(0x4231ce);
__builtin_memmove((R+28),(R+28),4);
}
B4231d0:L4231d0:{c.instructions+=7;NFSU2_TR(0x4231d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4231d3:{NFSU2_TR(0x4231d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4231d5:{NFSU2_TR(0x4231d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4231db:{NFSU2_TR(0x4231db);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4231dc:{NFSU2_TR(0x4231dc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4231df:{NFSU2_TR(0x4231df);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4231e1:{NFSU2_TR(0x4231e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4231d0u);}goto L4231d0;}}
}
B4231e3:L4231e3:{c.instructions+=1;NFSU2_TR(0x4231e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4231e9:L4231e9:{c.instructions+=3;NFSU2_TR(0x4231e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4231ed:{NFSU2_TR(0x4231ed);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4231ef:{NFSU2_TR(0x4231ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L423217;}}
}
B4231f1:L4231f1:{c.instructions+=3;NFSU2_TR(0x4231f1);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4231f5:{NFSU2_TR(0x4231f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4231f6:{NFSU2_TR(0x4231f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4231fbull));
TAIL_STATIC(0x40a2d0u,40a);
}
B4231fb:L4231fb:{c.instructions+=2;NFSU2_TR(0x4231fb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4231fd:{NFSU2_TR(0x4231fd);
if(r1(R+518)){{goto L42322e;}}
}
B4231ff:L4231ff:{c.instructions+=4;NFSU2_TR(0x4231ff);
__builtin_memmove((R+0),gp(0x81cbb8),4);
}
B423204:{NFSU2_TR(0x423204);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423205:{NFSU2_TR(0x423205);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423206:{NFSU2_TR(0x423206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42320bull));
TAIL_STATIC(0x43f920u,43f);
}
B42320b:L42320b:{c.instructions+=3;NFSU2_TR(0x42320b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42320e:{NFSU2_TR(0x42320e);
__builtin_memmove((R+4),(R+24),4);
}
B423210:{NFSU2_TR(0x423210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423215ull));
TAIL_STATIC(0x40c4d0u,40c);
}
B423215:L423215:{c.instructions+=1;NFSU2_TR(0x423215);
{goto L42324b;}
}
B423217:L423217:{c.instructions+=3;NFSU2_TR(0x423217);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42321d:{NFSU2_TR(0x42321d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9full)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9full))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B423222:{NFSU2_TR(0x423222);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42322e;}}
}
B423224:L423224:{c.instructions+=2;NFSU2_TR(0x423224);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B423228:{NFSU2_TR(0x423228);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B42322e:L42322e:{c.instructions+=2;NFSU2_TR(0x42322e);
__builtin_memmove((R+4),(R+24),4);
}
B423230:{NFSU2_TR(0x423230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423235ull));
TAIL_STATIC(0x40c4d0u,40c);
}
B423235:L423235:{c.instructions+=1;NFSU2_TR(0x423235);
{goto L42324b;}
}
B423237:L423237:{c.instructions+=2;NFSU2_TR(0x423237);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B423239:{NFSU2_TR(0x423239);
if(r1(R+518)){{goto L42324b;}}
}
B42323b:L42323b:{c.instructions+=4;NFSU2_TR(0x42323b);
__builtin_memmove((R+4),gp(0x81cbb8),4);
}
B423241:{NFSU2_TR(0x423241);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423242:{NFSU2_TR(0x423242);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423243:{NFSU2_TR(0x423243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423248ull));
TAIL_STATIC(0x43f920u,43f);
}
B423248:L423248:{c.instructions+=1;NFSU2_TR(0x423248);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42324b:L42324b:{c.instructions+=7;NFSU2_TR(0x42324b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42324f:{NFSU2_TR(0x42324f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B423253:{NFSU2_TR(0x423253);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B42325a:{NFSU2_TR(0x42325a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B42325b:{NFSU2_TR(0x42325b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42325d:{NFSU2_TR(0x42325d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423261:{NFSU2_TR(0x423261);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x423070u);}goto L423070;}}
}
B423267:L423267:{c.instructions+=2;NFSU2_TR(0x423267);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ffull))));
w1(R+523,sborrow<u32>(r4(U+8),u32(0x4ffull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ffull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B423271:{NFSU2_TR(0x423271);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4232ad;}}
}
B423273:L423273:{c.instructions+=3;NFSU2_TR(0x423273);
__builtin_memmove((R+0),gp(0x81cbbc),4);
}
B423278:{NFSU2_TR(0x423278);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423279:{NFSU2_TR(0x423279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42327eull));
TAIL_STATIC(0x440e50u,440);
}
B42327e:L42327e:{c.instructions+=12;NFSU2_TR(0x42327e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423281:{NFSU2_TR(0x423281);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B423283:{NFSU2_TR(0x423283);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B423289:{NFSU2_TR(0x423289);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42328c:{NFSU2_TR(0x42328c);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42328e:{NFSU2_TR(0x42328e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B423291:{NFSU2_TR(0x423291);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B423294:{NFSU2_TR(0x423294);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423297:{NFSU2_TR(0x423297);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42329a:{NFSU2_TR(0x42329a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4232a0:{NFSU2_TR(0x4232a0);
u8 U[16];
w4(U+0,u32(u32(u32(0x2c4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4232a7:{NFSU2_TR(0x4232a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4232ad:L4232ad:{c.instructions+=4;NFSU2_TR(0x4232ad);
__builtin_memmove((R+0),gp(0x81cbb8),4);
}
B4232b2:{NFSU2_TR(0x4232b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4232b3:{NFSU2_TR(0x4232b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4232b4:{NFSU2_TR(0x4232b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4232b9ull));
TAIL_STATIC(0x43f920u,43f);
}
B4232b9:L4232b9:{c.instructions+=3;NFSU2_TR(0x4232b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4232bd:{NFSU2_TR(0x4232bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4232be:{NFSU2_TR(0x4232be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4232c3ull));
TAIL_STATIC(0x43e5c0u,43e);
}
B4232c3:L4232c3:{c.instructions+=6;NFSU2_TR(0x4232c3);
{u32 ea_=u32(u32(8551104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4232c9:{NFSU2_TR(0x4232c9);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4232cb:{NFSU2_TR(0x4232cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4232ce:{NFSU2_TR(0x4232ce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4232d0:{NFSU2_TR(0x4232d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4232d3:{NFSU2_TR(0x4232d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4232dd;}}
}
B4232d5:L4232d5:{c.instructions+=2;NFSU2_TR(0x4232d5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4232d7:{NFSU2_TR(0x4232d7);
{u32 ea_=u32(u32(8551104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4232dd:L4232dd:{c.instructions+=4;NFSU2_TR(0x4232dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4232e3:{NFSU2_TR(0x4232e3);
{u32 ea_=u32(u32(8551104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4232e9:{NFSU2_TR(0x4232e9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4232eb:{NFSU2_TR(0x4232eb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x422fb0u,422);}
}
B4232f1:L4232f1:{c.instructions+=6;NFSU2_TR(0x4232f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4232f2:{NFSU2_TR(0x4232f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4232f3:{NFSU2_TR(0x4232f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4232f4:{NFSU2_TR(0x4232f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4232fa:{NFSU2_TR(0x4232fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4232fc:{NFSU2_TR(0x4232fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L423308;}}
}
B4232fe:L4232fe:{c.instructions+=3;NFSU2_TR(0x4232fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423304:{NFSU2_TR(0x423304);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B423306:{NFSU2_TR(0x423306);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L423321;}}
}
B423308:L423308:{c.instructions+=2;NFSU2_TR(0x423308);
__builtin_memmove((R+4),(R+24),4);
}
B42330a:{NFSU2_TR(0x42330a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42330full));
TAIL_STATIC(0x413160u,413);
}
B42330f:L42330f:{c.instructions+=3;NFSU2_TR(0x42330f);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B423315:{NFSU2_TR(0x423315);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17acull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42331b:{NFSU2_TR(0x42331b);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+24)),r4(U+0));
}
B423321:L423321:{c.instructions+=3;NFSU2_TR(0x423321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423322:{NFSU2_TR(0x423322);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B423325:{NFSU2_TR(0x423325);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423330:L423330:{c.instructions+=15;NFSU2_TR(0x423330);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423331:{NFSU2_TR(0x423331);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423332:{NFSU2_TR(0x423332);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423333:{NFSU2_TR(0x423333);
__builtin_memmove((R+24),(R+4),4);
}
B423335:{NFSU2_TR(0x423335);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B423338:{NFSU2_TR(0x423338);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B42333a:{NFSU2_TR(0x42333a);
u8 U[4];
w4(U+0,u32(0x7849c0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B423340:{NFSU2_TR(0x423340);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423341:{NFSU2_TR(0x423341);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423347:{NFSU2_TR(0x423347);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42334d:{NFSU2_TR(0x42334d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42334f:{NFSU2_TR(0x42334f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423355:{NFSU2_TR(0x423355);
w4(R+4,u32(0x74ull));
}
B42335a:{NFSU2_TR(0x42335a);
__builtin_memmove((R+28),(R+12),4);
}
B42335c:{NFSU2_TR(0x42335c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42335d:L42335d:{c.instructions+=1;NFSU2_TR(0x42335d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L42335f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42335du);}goto L42335d;}
}
B42335f:L42335f:{c.instructions+=3;NFSU2_TR(0x42335f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423360:{NFSU2_TR(0x423360);
__builtin_memmove((R+4),(R+12),4);
}
B423362:{NFSU2_TR(0x423362);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423367ull));
TAIL_STATIC(0x41d160u,41d);
}
B423367:L423367:{c.instructions+=11;NFSU2_TR(0x423367);
w4(R+0,u32(0x1ull));
}
B42336c:{NFSU2_TR(0x42336c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42336d:{NFSU2_TR(0x42336d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42336e:{NFSU2_TR(0x42336e);
__builtin_memmove((R+4),(R+12),4);
}
B423370:{NFSU2_TR(0x423370);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B423377:{NFSU2_TR(0x423377);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42337d:{NFSU2_TR(0x42337d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423383:{NFSU2_TR(0x423383);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423389:{NFSU2_TR(0x423389);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42338f:{NFSU2_TR(0x42338f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423395:{NFSU2_TR(0x423395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42339aull));
TAIL_STATIC(0x41d160u,41d);
}
B42339a:L42339a:{c.instructions+=2;NFSU2_TR(0x42339a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((R+0),(U+0),4);
}
B4233a0:{NFSU2_TR(0x4233a0);
w4(R+4,u32(0x4ull));
}
B4233a5:L4233a5:{c.instructions+=5;NFSU2_TR(0x4233a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4233a8:{NFSU2_TR(0x4233a8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4233aa:{NFSU2_TR(0x4233aa);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4233ad:{NFSU2_TR(0x4233ad);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4233ae:{NFSU2_TR(0x4233ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4233a5u);}goto L4233a5;}}
}
B4233b0:L4233b0:{c.instructions+=6;NFSU2_TR(0x4233b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4233b1:{NFSU2_TR(0x4233b1);
__builtin_memmove((R+0),(R+24),4);
}
B4233b3:{NFSU2_TR(0x4233b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4233b4:{NFSU2_TR(0x4233b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4233b5:{NFSU2_TR(0x4233b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4233b6:{NFSU2_TR(0x4233b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4233c0:L4233c0:{c.instructions+=2;NFSU2_TR(0x4233c0);
w4(R+0,u32(0xfffe7961ull));
}
B4233c5:{NFSU2_TR(0x4233c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4233d0:L4233d0:{c.instructions+=2;NFSU2_TR(0x4233d0);
u8 U[4];
w4(U+0,u32(0x7849c0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4233d6:{NFSU2_TR(0x4233d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4233e0:L4233e0:{c.instructions+=13;NFSU2_TR(0x4233e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4233e1:{NFSU2_TR(0x4233e1);
__builtin_memmove((R+20),(R+16),4);
}
B4233e3:{NFSU2_TR(0x4233e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4233e6:{NFSU2_TR(0x4233e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1d4ull))));
}
B4233ec:{NFSU2_TR(0x4233ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4233ed:{NFSU2_TR(0x4233ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4233ee:{NFSU2_TR(0x4233ee);
__builtin_memmove((R+24),(R+4),4);
}
B4233f0:{NFSU2_TR(0x4233f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4233f6:{NFSU2_TR(0x4233f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4233f9:{NFSU2_TR(0x4233f9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4233fb:{NFSU2_TR(0x4233fb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4233fd:{NFSU2_TR(0x4233fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4233fe:{NFSU2_TR(0x4233fe);
if(r1(R+518)){{goto L423453;}}
}
B423400:L423400:{c.instructions+=3;NFSU2_TR(0x423400);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423406:{NFSU2_TR(0x423406);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B423409:{NFSU2_TR(0x423409);
if(r1(R+518)){{goto L423453;}}
}
B42340b:L42340b:{c.instructions+=7;NFSU2_TR(0x42340b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42340d:{NFSU2_TR(0x42340d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423414:{NFSU2_TR(0x423414);
u8 U[8];
w4(U+0,u32(u32(u32(0x1ccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42341b:{NFSU2_TR(0x42341b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1d0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423422:{NFSU2_TR(0x423422);
w4(R+4,u32(0x74ull));
}
B423427:{NFSU2_TR(0x423427);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B42342b:{NFSU2_TR(0x42342b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42342c:L42342c:{c.instructions+=1;NFSU2_TR(0x42342c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L42342e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42342cu);}goto L42342c;}
}
B42342e:L42342e:{c.instructions+=3;NFSU2_TR(0x42342e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42342f:{NFSU2_TR(0x42342f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B423433:{NFSU2_TR(0x423433);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423438ull));
TAIL_STATIC(0x41d160u,41d);
}
B423438:L423438:{c.instructions+=6;NFSU2_TR(0x423438);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42343e:{NFSU2_TR(0x42343e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+8),(U+0),4);
}
B423441:{NFSU2_TR(0x423441);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423442:{NFSU2_TR(0x423442);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B423446:{NFSU2_TR(0x423446);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423447:{NFSU2_TR(0x423447);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42344cull));
TAIL_STATIC(0x420ed0u,420);
}
B42344c:L42344c:{c.instructions+=6;NFSU2_TR(0x42344c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42344d:{NFSU2_TR(0x42344d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42344e:{NFSU2_TR(0x42344e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42344f:{NFSU2_TR(0x42344f);
__builtin_memmove((R+16),(R+20),4);
}
B423451:{NFSU2_TR(0x423451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B423452:{NFSU2_TR(0x423452);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423453:L423453:{c.instructions+=14;NFSU2_TR(0x423453);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B423456:{NFSU2_TR(0x423456);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423459:{NFSU2_TR(0x423459);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B42345b:{NFSU2_TR(0x42345b);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B42345d:{NFSU2_TR(0x42345d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B423460:{NFSU2_TR(0x423460);
__builtin_memmove((R+4),(R+518),1);
}
B423463:{NFSU2_TR(0x423463);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423468:{NFSU2_TR(0x423468);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42346d:{NFSU2_TR(0x42346d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42346e:{NFSU2_TR(0x42346e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42346f:{NFSU2_TR(0x42346f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B423472:{NFSU2_TR(0x423472);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423473:{NFSU2_TR(0x423473);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423474:{NFSU2_TR(0x423474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423479ull));
TAIL_STATIC(0x40f4a0u,40f);
}
B423479:L423479:{c.instructions+=3;NFSU2_TR(0x423479);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B42347c:{NFSU2_TR(0x42347c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42347f:{NFSU2_TR(0x42347f);
if(r1(R+518)){{goto L423496;}}
}
B423481:L423481:{c.instructions+=3;NFSU2_TR(0x423481);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423487:{NFSU2_TR(0x423487);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423488:{NFSU2_TR(0x423488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42348dull));
TAIL_STATIC(0x405410u,405);
}
B42348d:L42348d:{c.instructions+=7;NFSU2_TR(0x42348d);
w1(R+0,u8(0x1ull));
}
B42348f:{NFSU2_TR(0x42348f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B423490:{NFSU2_TR(0x423490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423491:{NFSU2_TR(0x423491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B423492:{NFSU2_TR(0x423492);
__builtin_memmove((R+16),(R+20),4);
}
B423494:{NFSU2_TR(0x423494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B423495:{NFSU2_TR(0x423495);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423496:L423496:{c.instructions+=7;NFSU2_TR(0x423496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B423497:{NFSU2_TR(0x423497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423498:{NFSU2_TR(0x423498);
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
B42349a:{NFSU2_TR(0x42349a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42349b:{NFSU2_TR(0x42349b);
__builtin_memmove((R+16),(R+20),4);
}
B42349d:{NFSU2_TR(0x42349d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42349e:{NFSU2_TR(0x42349e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4234a0:L4234a0:{c.instructions+=14;NFSU2_TR(0x4234a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4234a2:{NFSU2_TR(0x4234a2);
u8 U[4];
w4(U+0,u32(0x7716c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4234a7:{NFSU2_TR(0x4234a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4234ad:{NFSU2_TR(0x4234ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4234ae:{NFSU2_TR(0x4234ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4234b5:{NFSU2_TR(0x4234b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4234b6:{NFSU2_TR(0x4234b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4234ba:{NFSU2_TR(0x4234ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4234bb:{NFSU2_TR(0x4234bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4234bc:{NFSU2_TR(0x4234bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4234bd:{NFSU2_TR(0x4234bd);
__builtin_memmove((R+24),(R+4),4);
}
B4234bf:{NFSU2_TR(0x4234bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4234c0:{NFSU2_TR(0x4234c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4234c4:{NFSU2_TR(0x4234c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4234c9ull));
TAIL_STATIC(0x40c960u,40c);
}
B4234c9:L4234c9:{c.instructions+=10;NFSU2_TR(0x4234c9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4234cb:{NFSU2_TR(0x4234cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4234ce:{NFSU2_TR(0x4234ce);
u8 U[4];
w4(U+0,u32(0x785660ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4234d4:{NFSU2_TR(0x4234d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4234da:{NFSU2_TR(0x4234da);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4234e0:{NFSU2_TR(0x4234e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4234e2:{NFSU2_TR(0x4234e2);
__builtin_memmove((R+28),(R+8),4);
}
B4234e4:{NFSU2_TR(0x4234e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4234ea:{NFSU2_TR(0x4234ea);
w4(R+4,u32(0x74ull));
}
B4234ef:{NFSU2_TR(0x4234ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4234f0:L4234f0:{c.instructions+=1;NFSU2_TR(0x4234f0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4234f2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4234f0u);}goto L4234f0;}
}
B4234f2:L4234f2:{c.instructions+=4;NFSU2_TR(0x4234f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4234f3:{NFSU2_TR(0x4234f3);
__builtin_memmove((R+4),(R+8),4);
}
B4234f5:{NFSU2_TR(0x4234f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4234f9:{NFSU2_TR(0x4234f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4234feull));
TAIL_STATIC(0x41d160u,41d);
}
B4234fe:L4234fe:{c.instructions+=21;NFSU2_TR(0x4234fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423502:{NFSU2_TR(0x423502);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B423506:{NFSU2_TR(0x423506);
w1(R+0,u8(0x1ull));
}
B423508:{NFSU2_TR(0x423508);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42350e:{NFSU2_TR(0x42350e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1feull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B423514:{NFSU2_TR(0x423514);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42351a:{NFSU2_TR(0x42351a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x204ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423520:{NFSU2_TR(0x423520);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423524:{NFSU2_TR(0x423524);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423527:{NFSU2_TR(0x423527);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42352d:{NFSU2_TR(0x42352d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423533:{NFSU2_TR(0x423533);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423539:{NFSU2_TR(0x423539);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ffull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42353f:{NFSU2_TR(0x42353f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B423540:{NFSU2_TR(0x423540);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423546:{NFSU2_TR(0x423546);
__builtin_memmove((R+0),(R+24),4);
}
B423548:{NFSU2_TR(0x423548);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423549:{NFSU2_TR(0x423549);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42354a:{NFSU2_TR(0x42354a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423551:{NFSU2_TR(0x423551);
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
B423554:{NFSU2_TR(0x423554);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423560:L423560:{c.instructions+=2;NFSU2_TR(0x423560);
w4(R+0,u32(0x783fe5ull));
}
B423565:{NFSU2_TR(0x423565);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423570:L423570:{c.instructions+=3;NFSU2_TR(0x423570);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423571:{NFSU2_TR(0x423571);
__builtin_memmove((R+24),(R+4),4);
}
B423573:{NFSU2_TR(0x423573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423578ull));
TAIL_STATIC(0x425860u,425);
}
B423578:L423578:{c.instructions+=2;NFSU2_TR(0x423578);
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
B42357d:{NFSU2_TR(0x42357d);
if(r1(R+518)){{goto L42358e;}}
}
B42357f:L42357f:{c.instructions+=4;NFSU2_TR(0x42357f);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B423584:{NFSU2_TR(0x423584);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423585:{NFSU2_TR(0x423585);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423586:{NFSU2_TR(0x423586);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42358bull));
TAIL_STATIC(0x43f920u,43f);
}
B42358b:L42358b:{c.instructions+=1;NFSU2_TR(0x42358b);
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
B42358e:L42358e:{c.instructions+=3;NFSU2_TR(0x42358e);
__builtin_memmove((R+0),(R+24),4);
}
B423590:{NFSU2_TR(0x423590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423591:{NFSU2_TR(0x423591);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4235a0:L4235a0:{c.instructions+=9;NFSU2_TR(0x4235a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4235a4:{NFSU2_TR(0x4235a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4235a5:{NFSU2_TR(0x4235a5);
__builtin_memmove((R+24),(R+4),4);
}
B4235a7:{NFSU2_TR(0x4235a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4235ab:{NFSU2_TR(0x4235ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4235ac:{NFSU2_TR(0x4235ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4235ad:{NFSU2_TR(0x4235ad);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4235af:{NFSU2_TR(0x4235af);
__builtin_memmove((R+4),(R+24),4);
}
B4235b1:{NFSU2_TR(0x4235b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4235b6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4234a0u);}goto L4234a0;}
}
B4235b6:L4235b6:{c.instructions+=7;NFSU2_TR(0x4235b6);
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
B4235b8:{NFSU2_TR(0x4235b8);
u8 U[4];
w4(U+0,u32(0x785684ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4235be:{NFSU2_TR(0x4235be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4235c4:{NFSU2_TR(0x4235c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4235ca:{NFSU2_TR(0x4235ca);
__builtin_memmove((R+0),(R+24),4);
}
B4235cc:{NFSU2_TR(0x4235cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4235cd:{NFSU2_TR(0x4235cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4235d0:L4235d0:{c.instructions+=2;NFSU2_TR(0x4235d0);
w4(R+0,u32(0x7856a8ull));
}
B4235d5:{NFSU2_TR(0x4235d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4235e0:L4235e0:{c.instructions+=9;NFSU2_TR(0x4235e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4235e4:{NFSU2_TR(0x4235e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4235e5:{NFSU2_TR(0x4235e5);
__builtin_memmove((R+24),(R+4),4);
}
B4235e7:{NFSU2_TR(0x4235e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4235eb:{NFSU2_TR(0x4235eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4235ec:{NFSU2_TR(0x4235ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4235ed:{NFSU2_TR(0x4235ed);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4235ef:{NFSU2_TR(0x4235ef);
__builtin_memmove((R+4),(R+24),4);
}
B4235f1:{NFSU2_TR(0x4235f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4235f6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4234a0u);}goto L4234a0;}
}
B4235f6:L4235f6:{c.instructions+=4;NFSU2_TR(0x4235f6);
u8 U[4];
w4(U+0,u32(0x7856b4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4235fc:{NFSU2_TR(0x4235fc);
__builtin_memmove((R+0),(R+24),4);
}
B4235fe:{NFSU2_TR(0x4235fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4235ff:{NFSU2_TR(0x4235ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423610:L423610:{c.instructions+=17;NFSU2_TR(0x423610);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423612:{NFSU2_TR(0x423612);
u8 U[4];
w4(U+0,u32(0x7716f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423617:{NFSU2_TR(0x423617);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42361d:{NFSU2_TR(0x42361d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42361e:{NFSU2_TR(0x42361e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423625:{NFSU2_TR(0x423625);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423626:{NFSU2_TR(0x423626);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42362a:{NFSU2_TR(0x42362a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42362b:{NFSU2_TR(0x42362b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42362c:{NFSU2_TR(0x42362c);
__builtin_memmove((R+28),(R+4),4);
}
B42362e:{NFSU2_TR(0x42362e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423632:{NFSU2_TR(0x423632);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423633:{NFSU2_TR(0x423633);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423634:{NFSU2_TR(0x423634);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423636:{NFSU2_TR(0x423636);
__builtin_memmove((R+4),(R+28),4);
}
B423638:{NFSU2_TR(0x423638);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42363c:{NFSU2_TR(0x42363c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423641ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4234a0u);}goto L4234a0;}
}
B423641:L423641:{c.instructions+=11;NFSU2_TR(0x423641);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423647:{NFSU2_TR(0x423647);
u8 U[4];
w4(U+0,u32(0x7856d8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B42364d:{NFSU2_TR(0x42364d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B423655:{NFSU2_TR(0x423655);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42365c:{NFSU2_TR(0x42365c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B423666:{NFSU2_TR(0x423666);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B42366c:{NFSU2_TR(0x42366c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423672:{NFSU2_TR(0x423672);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423675:{NFSU2_TR(0x423675);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B423677:{NFSU2_TR(0x423677);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42367c:{NFSU2_TR(0x42367c);
if(r1(R+518)){{goto L42368f;}}
}
B42367e:L42367e:{c.instructions+=2;NFSU2_TR(0x42367e);
__builtin_memmove((R+4),(R+24),4);
}
B423680:{NFSU2_TR(0x423680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423685ull));
TAIL_STATIC(0x614810u,614);
}
B423685:L423685:{c.instructions+=4;NFSU2_TR(0x423685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B423687:{NFSU2_TR(0x423687);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42368a:{NFSU2_TR(0x42368a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B42368c:{NFSU2_TR(0x42368c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42368f:L42368f:{c.instructions+=4;NFSU2_TR(0x42368f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423693:{NFSU2_TR(0x423693);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B423695:{NFSU2_TR(0x423695);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423698:{NFSU2_TR(0x423698);
if(r1(R+518)){{goto L4236ae;}}
}
B42369a:L42369a:{c.instructions+=2;NFSU2_TR(0x42369a);
__builtin_memmove((R+4),(R+24),4);
}
B42369c:{NFSU2_TR(0x42369c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4236a1ull));
TAIL_STATIC(0x614810u,614);
}
B4236a1:L4236a1:{c.instructions+=5;NFSU2_TR(0x4236a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4236a4:{NFSU2_TR(0x4236a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4236a6:{NFSU2_TR(0x4236a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4236a9:{NFSU2_TR(0x4236a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4236ac:{NFSU2_TR(0x4236ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4236ae:L4236ae:{c.instructions+=7;NFSU2_TR(0x4236ae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4236b2:{NFSU2_TR(0x4236b2);
__builtin_memmove((R+0),(R+28),4);
}
B4236b4:{NFSU2_TR(0x4236b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4236b5:{NFSU2_TR(0x4236b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4236b6:{NFSU2_TR(0x4236b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4236bd:{NFSU2_TR(0x4236bd);
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
B4236c0:{NFSU2_TR(0x4236c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4236d0:L4236d0:{c.instructions+=2;NFSU2_TR(0x4236d0);
w4(R+0,u32(0x7856fcull));
}
B4236d5:{NFSU2_TR(0x4236d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4236e0:L4236e0:{c.instructions+=3;NFSU2_TR(0x4236e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4236e1:{NFSU2_TR(0x4236e1);
__builtin_memmove((R+24),(R+4),4);
}
B4236e3:{NFSU2_TR(0x4236e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4236e8ull));
{goto L423710;}
}
B4236e8:L4236e8:{c.instructions+=2;NFSU2_TR(0x4236e8);
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
B4236ed:{NFSU2_TR(0x4236ed);
if(r1(R+518)){{goto L4236fe;}}
}
B4236ef:L4236ef:{c.instructions+=4;NFSU2_TR(0x4236ef);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B4236f4:{NFSU2_TR(0x4236f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4236f5:{NFSU2_TR(0x4236f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4236f6:{NFSU2_TR(0x4236f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4236fbull));
TAIL_STATIC(0x43f920u,43f);
}
B4236fb:L4236fb:{c.instructions+=1;NFSU2_TR(0x4236fb);
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
B4236fe:L4236fe:{c.instructions+=3;NFSU2_TR(0x4236fe);
__builtin_memmove((R+0),(R+24),4);
}
B423700:{NFSU2_TR(0x423700);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423701:{NFSU2_TR(0x423701);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423710:L423710:{c.instructions+=16;NFSU2_TR(0x423710);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423712:{NFSU2_TR(0x423712);
u8 U[4];
w4(U+0,u32(0x7716c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423717:{NFSU2_TR(0x423717);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42371d:{NFSU2_TR(0x42371d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42371e:{NFSU2_TR(0x42371e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423725:{NFSU2_TR(0x423725);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423726:{NFSU2_TR(0x423726);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423727:{NFSU2_TR(0x423727);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423728:{NFSU2_TR(0x423728);
__builtin_memmove((R+28),(R+4),4);
}
B42372a:{NFSU2_TR(0x42372a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42372e:{NFSU2_TR(0x42372e);
u8 U[4];
w4(U+0,u32(0x7856d8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B423734:{NFSU2_TR(0x423734);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42373a:{NFSU2_TR(0x42373a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42373c:{NFSU2_TR(0x42373c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423742:{NFSU2_TR(0x423742);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42374a:{NFSU2_TR(0x42374a);
if(r1(R+518)){{goto L42375d;}}
}
B42374c:L42374c:{c.instructions+=2;NFSU2_TR(0x42374c);
__builtin_memmove((R+4),(R+24),4);
}
B42374e:{NFSU2_TR(0x42374e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423753ull));
TAIL_STATIC(0x614810u,614);
}
B423753:L423753:{c.instructions+=4;NFSU2_TR(0x423753);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B423755:{NFSU2_TR(0x423755);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423758:{NFSU2_TR(0x423758);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B42375a:{NFSU2_TR(0x42375a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42375d:L42375d:{c.instructions+=8;NFSU2_TR(0x42375d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423761:{NFSU2_TR(0x423761);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B423768:{NFSU2_TR(0x423768);
u8 U[4];
w4(U+0,u32(0x784270ull));
s4(u32(r4(R+28)),r4(U+0));
}
B42376e:{NFSU2_TR(0x42376e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42376f:{NFSU2_TR(0x42376f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423770:{NFSU2_TR(0x423770);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423777:{NFSU2_TR(0x423777);
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
B42377a:{NFSU2_TR(0x42377a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423780:L423780:{c.instructions+=17;NFSU2_TR(0x423780);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423782:{NFSU2_TR(0x423782);
u8 U[4];
w4(U+0,u32(0x7716f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423787:{NFSU2_TR(0x423787);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42378d:{NFSU2_TR(0x42378d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42378e:{NFSU2_TR(0x42378e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423795:{NFSU2_TR(0x423795);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423796:{NFSU2_TR(0x423796);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42379a:{NFSU2_TR(0x42379a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42379b:{NFSU2_TR(0x42379b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42379c:{NFSU2_TR(0x42379c);
__builtin_memmove((R+28),(R+4),4);
}
B42379e:{NFSU2_TR(0x42379e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4237a2:{NFSU2_TR(0x4237a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4237a3:{NFSU2_TR(0x4237a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4237a4:{NFSU2_TR(0x4237a4);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4237a6:{NFSU2_TR(0x4237a6);
__builtin_memmove((R+4),(R+28),4);
}
B4237a8:{NFSU2_TR(0x4237a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4237ac:{NFSU2_TR(0x4237ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4237b1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4234a0u);}goto L4234a0;}
}
B4237b1:L4237b1:{c.instructions+=8;NFSU2_TR(0x4237b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4237b7:{NFSU2_TR(0x4237b7);
u8 U[4];
w4(U+0,u32(0x785704ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4237bd:{NFSU2_TR(0x4237bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4237c5:{NFSU2_TR(0x4237c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4237cc:{NFSU2_TR(0x4237cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4237cf:{NFSU2_TR(0x4237cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4237d1:{NFSU2_TR(0x4237d1);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4237d6:{NFSU2_TR(0x4237d6);
if(r1(R+518)){{goto L4237e9;}}
}
B4237d8:L4237d8:{c.instructions+=2;NFSU2_TR(0x4237d8);
__builtin_memmove((R+4),(R+24),4);
}
B4237da:{NFSU2_TR(0x4237da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4237dfull));
TAIL_STATIC(0x614810u,614);
}
B4237df:L4237df:{c.instructions+=4;NFSU2_TR(0x4237df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4237e1:{NFSU2_TR(0x4237e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4237e4:{NFSU2_TR(0x4237e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4237e6:{NFSU2_TR(0x4237e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4237e9:L4237e9:{c.instructions+=4;NFSU2_TR(0x4237e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4237ed:{NFSU2_TR(0x4237ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4237ef:{NFSU2_TR(0x4237ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4237f2:{NFSU2_TR(0x4237f2);
if(r1(R+518)){{goto L423808;}}
}
B4237f4:L4237f4:{c.instructions+=2;NFSU2_TR(0x4237f4);
__builtin_memmove((R+4),(R+24),4);
}
B4237f6:{NFSU2_TR(0x4237f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4237fbull));
TAIL_STATIC(0x614810u,614);
}
B4237fb:L4237fb:{c.instructions+=5;NFSU2_TR(0x4237fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4237fe:{NFSU2_TR(0x4237fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B423800:{NFSU2_TR(0x423800);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423803:{NFSU2_TR(0x423803);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423806:{NFSU2_TR(0x423806);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B423808:L423808:{c.instructions+=7;NFSU2_TR(0x423808);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42380c:{NFSU2_TR(0x42380c);
__builtin_memmove((R+0),(R+28),4);
}
B42380e:{NFSU2_TR(0x42380e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42380f:{NFSU2_TR(0x42380f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423810:{NFSU2_TR(0x423810);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423817:{NFSU2_TR(0x423817);
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
B42381a:{NFSU2_TR(0x42381a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423820:L423820:{c.instructions+=3;NFSU2_TR(0x423820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423821:{NFSU2_TR(0x423821);
__builtin_memmove((R+24),(R+4),4);
}
B423823:{NFSU2_TR(0x423823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423828ull));
{goto L423850;}
}
B423828:L423828:{c.instructions+=2;NFSU2_TR(0x423828);
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
B42382d:{NFSU2_TR(0x42382d);
if(r1(R+518)){{goto L42383e;}}
}
B42382f:L42382f:{c.instructions+=4;NFSU2_TR(0x42382f);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B423834:{NFSU2_TR(0x423834);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423835:{NFSU2_TR(0x423835);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423836:{NFSU2_TR(0x423836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42383bull));
TAIL_STATIC(0x43f920u,43f);
}
B42383b:L42383b:{c.instructions+=1;NFSU2_TR(0x42383b);
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
B42383e:L42383e:{c.instructions+=3;NFSU2_TR(0x42383e);
__builtin_memmove((R+0),(R+24),4);
}
B423840:{NFSU2_TR(0x423840);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423841:{NFSU2_TR(0x423841);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423850:L423850:{c.instructions+=16;NFSU2_TR(0x423850);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423852:{NFSU2_TR(0x423852);
u8 U[4];
w4(U+0,u32(0x7716c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423857:{NFSU2_TR(0x423857);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42385d:{NFSU2_TR(0x42385d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42385e:{NFSU2_TR(0x42385e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423865:{NFSU2_TR(0x423865);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423866:{NFSU2_TR(0x423866);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423867:{NFSU2_TR(0x423867);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423868:{NFSU2_TR(0x423868);
__builtin_memmove((R+28),(R+4),4);
}
B42386a:{NFSU2_TR(0x42386a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42386e:{NFSU2_TR(0x42386e);
u8 U[4];
w4(U+0,u32(0x785704ull));
s4(u32(r4(R+28)),r4(U+0));
}
B423874:{NFSU2_TR(0x423874);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42387a:{NFSU2_TR(0x42387a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42387c:{NFSU2_TR(0x42387c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423882:{NFSU2_TR(0x423882);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42388a:{NFSU2_TR(0x42388a);
if(r1(R+518)){{goto L42389d;}}
}
B42388c:L42388c:{c.instructions+=2;NFSU2_TR(0x42388c);
__builtin_memmove((R+4),(R+24),4);
}
B42388e:{NFSU2_TR(0x42388e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423893ull));
TAIL_STATIC(0x614810u,614);
}
B423893:L423893:{c.instructions+=4;NFSU2_TR(0x423893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B423895:{NFSU2_TR(0x423895);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423898:{NFSU2_TR(0x423898);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B42389a:{NFSU2_TR(0x42389a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42389d:L42389d:{c.instructions+=8;NFSU2_TR(0x42389d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4238a1:{NFSU2_TR(0x4238a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4238a8:{NFSU2_TR(0x4238a8);
u8 U[4];
w4(U+0,u32(0x784270ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4238ae:{NFSU2_TR(0x4238ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4238af:{NFSU2_TR(0x4238af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4238b0:{NFSU2_TR(0x4238b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4238b7:{NFSU2_TR(0x4238b7);
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
B4238ba:{NFSU2_TR(0x4238ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4238c0:L4238c0:{c.instructions+=17;NFSU2_TR(0x4238c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4238c2:{NFSU2_TR(0x4238c2);
u8 U[4];
w4(U+0,u32(0x7716f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4238c7:{NFSU2_TR(0x4238c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4238cd:{NFSU2_TR(0x4238cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4238ce:{NFSU2_TR(0x4238ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4238d5:{NFSU2_TR(0x4238d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4238d6:{NFSU2_TR(0x4238d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4238da:{NFSU2_TR(0x4238da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4238db:{NFSU2_TR(0x4238db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4238dc:{NFSU2_TR(0x4238dc);
__builtin_memmove((R+28),(R+4),4);
}
B4238de:{NFSU2_TR(0x4238de);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4238e2:{NFSU2_TR(0x4238e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4238e3:{NFSU2_TR(0x4238e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4238e4:{NFSU2_TR(0x4238e4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4238e6:{NFSU2_TR(0x4238e6);
__builtin_memmove((R+4),(R+28),4);
}
B4238e8:{NFSU2_TR(0x4238e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4238ec:{NFSU2_TR(0x4238ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4238f1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4234a0u);}goto L4234a0;}
}
B4238f1:L4238f1:{c.instructions+=8;NFSU2_TR(0x4238f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4238f7:{NFSU2_TR(0x4238f7);
u8 U[4];
w4(U+0,u32(0x785728ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4238fd:{NFSU2_TR(0x4238fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B423905:{NFSU2_TR(0x423905);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42390c:{NFSU2_TR(0x42390c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42390f:{NFSU2_TR(0x42390f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B423911:{NFSU2_TR(0x423911);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423916:{NFSU2_TR(0x423916);
if(r1(R+518)){{goto L423929;}}
}
B423918:L423918:{c.instructions+=2;NFSU2_TR(0x423918);
__builtin_memmove((R+4),(R+24),4);
}
B42391a:{NFSU2_TR(0x42391a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42391full));
TAIL_STATIC(0x614810u,614);
}
B42391f:L42391f:{c.instructions+=4;NFSU2_TR(0x42391f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B423921:{NFSU2_TR(0x423921);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423924:{NFSU2_TR(0x423924);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B423926:{NFSU2_TR(0x423926);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423929:L423929:{c.instructions+=4;NFSU2_TR(0x423929);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42392d:{NFSU2_TR(0x42392d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42392f:{NFSU2_TR(0x42392f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423932:{NFSU2_TR(0x423932);
if(r1(R+518)){{goto L423948;}}
}
B423934:L423934:{c.instructions+=2;NFSU2_TR(0x423934);
__builtin_memmove((R+4),(R+24),4);
}
B423936:{NFSU2_TR(0x423936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42393bull));
TAIL_STATIC(0x614810u,614);
}
B42393b:L42393b:{c.instructions+=5;NFSU2_TR(0x42393b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42393e:{NFSU2_TR(0x42393e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B423940:{NFSU2_TR(0x423940);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423943:{NFSU2_TR(0x423943);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423946:{NFSU2_TR(0x423946);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B423948:L423948:{c.instructions+=7;NFSU2_TR(0x423948);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42394c:{NFSU2_TR(0x42394c);
__builtin_memmove((R+0),(R+28),4);
}
B42394e:{NFSU2_TR(0x42394e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42394f:{NFSU2_TR(0x42394f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423950:{NFSU2_TR(0x423950);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423957:{NFSU2_TR(0x423957);
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
B42395a:{NFSU2_TR(0x42395a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423960:L423960:{c.instructions+=2;NFSU2_TR(0x423960);
w4(R+0,u32(0x78574cull));
}
B423965:{NFSU2_TR(0x423965);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423970:L423970:{c.instructions+=3;NFSU2_TR(0x423970);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423971:{NFSU2_TR(0x423971);
__builtin_memmove((R+24),(R+4),4);
}
B423973:{NFSU2_TR(0x423973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423978ull));
{goto L4239a0;}
}
B423978:L423978:{c.instructions+=2;NFSU2_TR(0x423978);
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
B42397d:{NFSU2_TR(0x42397d);
if(r1(R+518)){{goto L42398e;}}
}
B42397f:L42397f:{c.instructions+=4;NFSU2_TR(0x42397f);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B423984:{NFSU2_TR(0x423984);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423985:{NFSU2_TR(0x423985);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423986:{NFSU2_TR(0x423986);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42398bull));
TAIL_STATIC(0x43f920u,43f);
}
B42398b:L42398b:{c.instructions+=1;NFSU2_TR(0x42398b);
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
B42398e:L42398e:{c.instructions+=3;NFSU2_TR(0x42398e);
__builtin_memmove((R+0),(R+24),4);
}
B423990:{NFSU2_TR(0x423990);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423991:{NFSU2_TR(0x423991);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4239a0:L4239a0:{c.instructions+=16;NFSU2_TR(0x4239a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4239a2:{NFSU2_TR(0x4239a2);
u8 U[4];
w4(U+0,u32(0x7716c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4239a7:{NFSU2_TR(0x4239a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4239ad:{NFSU2_TR(0x4239ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4239ae:{NFSU2_TR(0x4239ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4239b5:{NFSU2_TR(0x4239b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4239b6:{NFSU2_TR(0x4239b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4239b7:{NFSU2_TR(0x4239b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4239b8:{NFSU2_TR(0x4239b8);
__builtin_memmove((R+28),(R+4),4);
}
B4239ba:{NFSU2_TR(0x4239ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4239be:{NFSU2_TR(0x4239be);
u8 U[4];
w4(U+0,u32(0x785728ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4239c4:{NFSU2_TR(0x4239c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4239ca:{NFSU2_TR(0x4239ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4239cc:{NFSU2_TR(0x4239cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4239d2:{NFSU2_TR(0x4239d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4239da:{NFSU2_TR(0x4239da);
if(r1(R+518)){{goto L4239ed;}}
}
B4239dc:L4239dc:{c.instructions+=2;NFSU2_TR(0x4239dc);
__builtin_memmove((R+4),(R+24),4);
}
B4239de:{NFSU2_TR(0x4239de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4239e3ull));
TAIL_STATIC(0x614810u,614);
}
B4239e3:L4239e3:{c.instructions+=4;NFSU2_TR(0x4239e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4239e5:{NFSU2_TR(0x4239e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4239e8:{NFSU2_TR(0x4239e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4239ea:{NFSU2_TR(0x4239ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4239ed:L4239ed:{c.instructions+=8;NFSU2_TR(0x4239ed);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4239f1:{NFSU2_TR(0x4239f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4239f8:{NFSU2_TR(0x4239f8);
u8 U[4];
w4(U+0,u32(0x784270ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4239fe:{NFSU2_TR(0x4239fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4239ff:{NFSU2_TR(0x4239ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423a00:{NFSU2_TR(0x423a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423a07:{NFSU2_TR(0x423a07);
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
B423a0a:{NFSU2_TR(0x423a0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423a10:L423a10:{c.instructions+=23;NFSU2_TR(0x423a10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423a11:{NFSU2_TR(0x423a11);
__builtin_memmove((R+20),(R+16),4);
}
B423a13:{NFSU2_TR(0x423a13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B423a16:{NFSU2_TR(0x423a16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B423a19:{NFSU2_TR(0x423a19);
__builtin_memmove((R+8),gp(0x7e9bf4),4);
}
B423a1f:{NFSU2_TR(0x423a1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423a20:{NFSU2_TR(0x423a20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423a21:{NFSU2_TR(0x423a21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423a22:{NFSU2_TR(0x423a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B423a25:{NFSU2_TR(0x423a25);
__builtin_memmove((R+24),(R+4),4);
}
B423a27:{NFSU2_TR(0x423a27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B423a29:{NFSU2_TR(0x423a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423a2c:{NFSU2_TR(0x423a2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423a30:{NFSU2_TR(0x423a30);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423a32:{NFSU2_TR(0x423a32);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B423a36:{NFSU2_TR(0x423a36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423a37:{NFSU2_TR(0x423a37);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B423a3f:{NFSU2_TR(0x423a3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423a43:{NFSU2_TR(0x423a43);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x437f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B423a4b:{NFSU2_TR(0x423a4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B423a53:{NFSU2_TR(0x423a53);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B423a5b:{NFSU2_TR(0x423a5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B423a63:{NFSU2_TR(0x423a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423a68ull));
TAIL_STATIC(0x5ecf20u,5ec);
}
B423a68:L423a68:{c.instructions+=4;NFSU2_TR(0x423a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423a6e:{NFSU2_TR(0x423a6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423a6f:{NFSU2_TR(0x423a6f);
__builtin_memmove((R+4),(R+28),4);
}
B423a71:{NFSU2_TR(0x423a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423a76ull));
TAIL_STATIC(0x60c120u,60c);
}
B423a76:L423a76:{c.instructions+=3;NFSU2_TR(0x423a76);
__builtin_memmove((R+12),(R+0),4);
}
B423a78:{NFSU2_TR(0x423a78);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B423a7a:{NFSU2_TR(0x423a7a);
if(r1(R+518)){{goto L423aef;}}
}
B423a7c:L423a7c:{c.instructions+=3;NFSU2_TR(0x423a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423a82:{NFSU2_TR(0x423a82);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B423a84:{NFSU2_TR(0x423a84);
if(r1(R+518)){{goto L423aef;}}
}
B423a86:L423a86:{c.instructions+=4;NFSU2_TR(0x423a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423a8c:{NFSU2_TR(0x423a8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423a8d:{NFSU2_TR(0x423a8d);
__builtin_memmove((R+4),(R+12),4);
}
B423a8f:{NFSU2_TR(0x423a8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423a94ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B423a94:L423a94:{c.instructions+=4;NFSU2_TR(0x423a94);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B423a98:{NFSU2_TR(0x423a98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423a99:{NFSU2_TR(0x423a99);
__builtin_memmove((R+4),(R+28),4);
}
B423a9b:{NFSU2_TR(0x423a9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423aa0ull));
TAIL_STATIC(0x60bff0u,60b);
}
B423aa0:L423aa0:{c.instructions+=8;NFSU2_TR(0x423aa0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B423aa4:{NFSU2_TR(0x423aa4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423aa8:{NFSU2_TR(0x423aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423aab:{NFSU2_TR(0x423aab);
{u32 ea_=u32(u32(7878312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B423ab1:{NFSU2_TR(0x423ab1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423ab5:{NFSU2_TR(0x423ab5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B423ab7:{NFSU2_TR(0x423ab7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B423aba:{NFSU2_TR(0x423aba);
if(r1(R+514)){{goto L423ac4;}}
}
B423abc:L423abc:{c.instructions+=2;NFSU2_TR(0x423abc);
{u32 ea_=u32(u32(8297460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423ac2:{NFSU2_TR(0x423ac2);
{goto L423af3;}
}
B423ac4:L423ac4:{c.instructions+=6;NFSU2_TR(0x423ac4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423ac8:{NFSU2_TR(0x423ac8);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B423aca:{NFSU2_TR(0x423aca);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B423ad0:{NFSU2_TR(0x423ad0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B423ad2:{NFSU2_TR(0x423ad2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B423ad5:{NFSU2_TR(0x423ad5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L423aef;}}
}
B423ad7:L423ad7:{c.instructions+=6;NFSU2_TR(0x423ad7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423adb:{NFSU2_TR(0x423adb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423adc:{NFSU2_TR(0x423adc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B423ae0:{NFSU2_TR(0x423ae0);
w4(R+4,u32(0x81e7dcull));
}
B423ae5:{NFSU2_TR(0x423ae5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B423ae8:{NFSU2_TR(0x423ae8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423aedull));
TAIL_STATIC(0x576790u,576);
}
B423aed:L423aed:{c.instructions+=1;NFSU2_TR(0x423aed);
{goto L423af3;}
}
B423aef:L423aef:{c.instructions+=1;NFSU2_TR(0x423aef);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423af3:L423af3:{c.instructions+=4;NFSU2_TR(0x423af3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423af9:{NFSU2_TR(0x423af9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B423afc:{NFSU2_TR(0x423afc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((R+4),(U+0),4);
}
B423b02:{NFSU2_TR(0x423b02);
if(r1(R+518)){{goto L423b10;}}
}
B423b04:L423b04:{c.instructions+=4;NFSU2_TR(0x423b04);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B423b08:{NFSU2_TR(0x423b08);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B423b0b:{NFSU2_TR(0x423b0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423b0e:{NFSU2_TR(0x423b0e);
{goto L423b12;}
}
B423b10:L423b10:{c.instructions+=1;NFSU2_TR(0x423b10);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B423b12:L423b12:{c.instructions+=4;NFSU2_TR(0x423b12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423b13:{NFSU2_TR(0x423b13);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B423b16:{NFSU2_TR(0x423b16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423b17:{NFSU2_TR(0x423b17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423b1cull));
TAIL_STATIC(0x420d40u,420);
}
B423b1c:L423b1c:{c.instructions+=3;NFSU2_TR(0x423b1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423b20:{NFSU2_TR(0x423b20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B423b22:{NFSU2_TR(0x423b22);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423b25ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B423b25:L423b25:{c.instructions+=12;NFSU2_TR(0x423b25);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B423b2b:{NFSU2_TR(0x423b2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B423b2c:{NFSU2_TR(0x423b2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423b33:{NFSU2_TR(0x423b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B423b3d:{NFSU2_TR(0x423b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
w4(U+4,u32(0x40000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B423b47:{NFSU2_TR(0x423b47);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423b4e:{NFSU2_TR(0x423b4e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1feull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423b55:{NFSU2_TR(0x423b55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423b56:{NFSU2_TR(0x423b56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B423b57:{NFSU2_TR(0x423b57);
__builtin_memmove((R+16),(R+20),4);
}
B423b59:{NFSU2_TR(0x423b59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B423b5a:{NFSU2_TR(0x423b5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423b60:L423b60:{c.instructions+=18;NFSU2_TR(0x423b60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423b62:{NFSU2_TR(0x423b62);
u8 U[4];
w4(U+0,u32(0x7716c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423b67:{NFSU2_TR(0x423b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423b6d:{NFSU2_TR(0x423b6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423b6e:{NFSU2_TR(0x423b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423b75:{NFSU2_TR(0x423b75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423b76:{NFSU2_TR(0x423b76);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423b7a:{NFSU2_TR(0x423b7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423b7b:{NFSU2_TR(0x423b7b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423b7c:{NFSU2_TR(0x423b7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423b7d:{NFSU2_TR(0x423b7d);
__builtin_memmove((R+24),(R+4),4);
}
B423b7f:{NFSU2_TR(0x423b7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423b83:{NFSU2_TR(0x423b83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423b84:{NFSU2_TR(0x423b84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423b85:{NFSU2_TR(0x423b85);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423b87:{NFSU2_TR(0x423b87);
__builtin_memmove((R+4),(R+24),4);
}
B423b89:{NFSU2_TR(0x423b89);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423b8d:{NFSU2_TR(0x423b8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423b92ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4234a0u);}goto L4234a0;}
}
B423b92:L423b92:{c.instructions+=13;NFSU2_TR(0x423b92);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B423b96:{NFSU2_TR(0x423b96);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423b9a:{NFSU2_TR(0x423b9a);
u8 U[4];
w4(U+0,u32(0x785754ull));
s4(u32(r4(R+24)),r4(U+0));
}
B423ba0:{NFSU2_TR(0x423ba0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B423ba2:{NFSU2_TR(0x423ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423ba8:{NFSU2_TR(0x423ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423bae:{NFSU2_TR(0x423bae);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B423bb4:{NFSU2_TR(0x423bb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B423bb6:{NFSU2_TR(0x423bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423bbc:{NFSU2_TR(0x423bbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423bc0:{NFSU2_TR(0x423bc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423bc7:{NFSU2_TR(0x423bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423bcd:{NFSU2_TR(0x423bcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423bd2ull));
TAIL_STATIC(0x5ec0b0u,5ec);
}
B423bd2:L423bd2:{c.instructions+=4;NFSU2_TR(0x423bd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423bd3:{NFSU2_TR(0x423bd3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423bd4:{NFSU2_TR(0x423bd4);
__builtin_memmove((R+4),(R+24),4);
}
B423bd6:{NFSU2_TR(0x423bd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423bdbull));
TAIL_STATIC(0x40e6e0u,40e);
}
B423bdb:L423bdb:{c.instructions+=4;NFSU2_TR(0x423bdb);
{u32 ea_=u32(u32(7878344u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B423be1:{NFSU2_TR(0x423be1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B423be3:{NFSU2_TR(0x423be3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B423be6:{NFSU2_TR(0x423be6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L423bef;}}
}
B423be8:L423be8:{c.instructions+=2;NFSU2_TR(0x423be8);
w4(R+0,u32(0x1ull));
}
B423bed:{NFSU2_TR(0x423bed);
{goto L423bf1;}
}
B423bef:L423bef:{c.instructions+=1;NFSU2_TR(0x423bef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B423bf1:L423bf1:{c.instructions+=6;NFSU2_TR(0x423bf1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423bf2:{NFSU2_TR(0x423bf2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423bf3:{NFSU2_TR(0x423bf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B423bf6:{NFSU2_TR(0x423bf6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x219ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B423bfc:{NFSU2_TR(0x423bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423c02:{NFSU2_TR(0x423c02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423c07ull));
TAIL_STATIC(0x41d160u,41d);
}
B423c07:L423c07:{c.instructions+=8;NFSU2_TR(0x423c07);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423c0b:{NFSU2_TR(0x423c0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B423c0c:{NFSU2_TR(0x423c0c);
__builtin_memmove((R+0),(R+24),4);
}
B423c0e:{NFSU2_TR(0x423c0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423c0f:{NFSU2_TR(0x423c0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B423c10:{NFSU2_TR(0x423c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423c17:{NFSU2_TR(0x423c17);
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
B423c1a:{NFSU2_TR(0x423c1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423c20:L423c20:{c.instructions+=2;NFSU2_TR(0x423c20);
w4(R+0,u32(0x785778ull));
}
B423c25:{NFSU2_TR(0x423c25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423c30:L423c30:{c.instructions+=9;NFSU2_TR(0x423c30);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423c34:{NFSU2_TR(0x423c34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423c35:{NFSU2_TR(0x423c35);
__builtin_memmove((R+24),(R+4),4);
}
B423c37:{NFSU2_TR(0x423c37);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423c3b:{NFSU2_TR(0x423c3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423c3c:{NFSU2_TR(0x423c3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423c3d:{NFSU2_TR(0x423c3d);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423c3f:{NFSU2_TR(0x423c3f);
__builtin_memmove((R+4),(R+24),4);
}
B423c41:{NFSU2_TR(0x423c41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423c46ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4234a0u);}goto L4234a0;}
}
B423c46:L423c46:{c.instructions+=13;NFSU2_TR(0x423c46);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423c4a:{NFSU2_TR(0x423c4a);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B423c50:{NFSU2_TR(0x423c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423c54:{NFSU2_TR(0x423c54);
u8 U[4];
w4(U+0,u32(0x785784ull));
s4(u32(r4(R+24)),r4(U+0));
}
B423c5a:{NFSU2_TR(0x423c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B423c64:{NFSU2_TR(0x423c64);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B423c6a:{NFSU2_TR(0x423c6a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B423c6c:{NFSU2_TR(0x423c6c);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B423c72:{NFSU2_TR(0x423c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423c78:{NFSU2_TR(0x423c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423c7e:{NFSU2_TR(0x423c7e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B423c80:{NFSU2_TR(0x423c80);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B423c83:{NFSU2_TR(0x423c83);
if(r1(R+514)){{goto L423c9b;}}
}
B423c85:L423c85:{c.instructions+=7;NFSU2_TR(0x423c85);
w4(R+0,u32(0x1ull));
}
B423c8a:{NFSU2_TR(0x423c8a);
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
B423c8c:{NFSU2_TR(0x423c8c);
__builtin_memmove((R+4),(R+518),1);
}
B423c8f:{NFSU2_TR(0x423c8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B423c95:{NFSU2_TR(0x423c95);
__builtin_memmove((R+0),(R+24),4);
}
B423c97:{NFSU2_TR(0x423c97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423c98:{NFSU2_TR(0x423c98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423c9b:L423c9b:{c.instructions+=7;NFSU2_TR(0x423c9b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B423c9d:{NFSU2_TR(0x423c9d);
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
B423c9f:{NFSU2_TR(0x423c9f);
__builtin_memmove((R+4),(R+518),1);
}
B423ca2:{NFSU2_TR(0x423ca2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B423ca8:{NFSU2_TR(0x423ca8);
__builtin_memmove((R+0),(R+24),4);
}
B423caa:{NFSU2_TR(0x423caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423cab:{NFSU2_TR(0x423cab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423cb0:L423cb0:{c.instructions+=2;NFSU2_TR(0x423cb0);
w4(R+0,u32(0x7857a8ull));
}
B423cb5:{NFSU2_TR(0x423cb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423cc0:L423cc0:{c.instructions+=18;NFSU2_TR(0x423cc0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423cc2:{NFSU2_TR(0x423cc2);
u8 U[4];
w4(U+0,u32(0x7716f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423cc7:{NFSU2_TR(0x423cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423ccd:{NFSU2_TR(0x423ccd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423cce:{NFSU2_TR(0x423cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423cd5:{NFSU2_TR(0x423cd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423cd6:{NFSU2_TR(0x423cd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423cda:{NFSU2_TR(0x423cda);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423cdb:{NFSU2_TR(0x423cdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423cdc:{NFSU2_TR(0x423cdc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423cdd:{NFSU2_TR(0x423cdd);
__builtin_memmove((R+28),(R+4),4);
}
B423cdf:{NFSU2_TR(0x423cdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423ce3:{NFSU2_TR(0x423ce3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423ce4:{NFSU2_TR(0x423ce4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423ce5:{NFSU2_TR(0x423ce5);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423ce7:{NFSU2_TR(0x423ce7);
__builtin_memmove((R+4),(R+28),4);
}
B423ce9:{NFSU2_TR(0x423ce9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423ced:{NFSU2_TR(0x423ced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423cf2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4234a0u);}goto L4234a0;}
}
B423cf2:L423cf2:{c.instructions+=9;NFSU2_TR(0x423cf2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B423cf4:{NFSU2_TR(0x423cf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423cfa:{NFSU2_TR(0x423cfa);
u8 U[4];
w4(U+0,u32(0x7857b4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B423d00:{NFSU2_TR(0x423d00);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423d04:{NFSU2_TR(0x423d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423d07:{NFSU2_TR(0x423d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423d0d:{NFSU2_TR(0x423d0d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B423d10:{NFSU2_TR(0x423d10);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423d15:{NFSU2_TR(0x423d15);
if(r1(R+518)){{goto L423d28;}}
}
B423d17:L423d17:{c.instructions+=2;NFSU2_TR(0x423d17);
__builtin_memmove((R+4),(R+24),4);
}
B423d19:{NFSU2_TR(0x423d19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423d1eull));
TAIL_STATIC(0x614810u,614);
}
B423d1e:L423d1e:{c.instructions+=4;NFSU2_TR(0x423d1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B423d20:{NFSU2_TR(0x423d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423d23:{NFSU2_TR(0x423d23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B423d25:{NFSU2_TR(0x423d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423d28:L423d28:{c.instructions+=4;NFSU2_TR(0x423d28);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423d2c:{NFSU2_TR(0x423d2c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B423d2e:{NFSU2_TR(0x423d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423d31:{NFSU2_TR(0x423d31);
if(r1(R+518)){{goto L423d47;}}
}
B423d33:L423d33:{c.instructions+=2;NFSU2_TR(0x423d33);
__builtin_memmove((R+4),(R+24),4);
}
B423d35:{NFSU2_TR(0x423d35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423d3aull));
TAIL_STATIC(0x614810u,614);
}
B423d3a:L423d3a:{c.instructions+=5;NFSU2_TR(0x423d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423d3d:{NFSU2_TR(0x423d3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B423d3f:{NFSU2_TR(0x423d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423d42:{NFSU2_TR(0x423d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423d45:{NFSU2_TR(0x423d45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B423d47:L423d47:{c.instructions+=9;NFSU2_TR(0x423d47);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423d4b:{NFSU2_TR(0x423d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423d51:{NFSU2_TR(0x423d51);
__builtin_memmove((R+0),(R+28),4);
}
B423d53:{NFSU2_TR(0x423d53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B423d54:{NFSU2_TR(0x423d54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423d55:{NFSU2_TR(0x423d55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B423d56:{NFSU2_TR(0x423d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423d5d:{NFSU2_TR(0x423d5d);
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
B423d60:{NFSU2_TR(0x423d60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423d70:L423d70:{c.instructions+=2;NFSU2_TR(0x423d70);
w4(R+0,u32(0x7857d8ull));
}
B423d75:{NFSU2_TR(0x423d75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423d80:L423d80:{c.instructions+=3;NFSU2_TR(0x423d80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423d81:{NFSU2_TR(0x423d81);
__builtin_memmove((R+24),(R+4),4);
}
B423d83:{NFSU2_TR(0x423d83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423d88ull));
{goto L423db0;}
}
B423d88:L423d88:{c.instructions+=2;NFSU2_TR(0x423d88);
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
B423d8d:{NFSU2_TR(0x423d8d);
if(r1(R+518)){{goto L423d9e;}}
}
B423d8f:L423d8f:{c.instructions+=4;NFSU2_TR(0x423d8f);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B423d94:{NFSU2_TR(0x423d94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423d95:{NFSU2_TR(0x423d95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423d96:{NFSU2_TR(0x423d96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423d9bull));
TAIL_STATIC(0x43f920u,43f);
}
B423d9b:L423d9b:{c.instructions+=1;NFSU2_TR(0x423d9b);
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
B423d9e:L423d9e:{c.instructions+=3;NFSU2_TR(0x423d9e);
__builtin_memmove((R+0),(R+24),4);
}
B423da0:{NFSU2_TR(0x423da0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423da1:{NFSU2_TR(0x423da1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423db0:L423db0:{c.instructions+=16;NFSU2_TR(0x423db0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423db2:{NFSU2_TR(0x423db2);
u8 U[4];
w4(U+0,u32(0x7716c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423db7:{NFSU2_TR(0x423db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423dbd:{NFSU2_TR(0x423dbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423dbe:{NFSU2_TR(0x423dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423dc5:{NFSU2_TR(0x423dc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423dc6:{NFSU2_TR(0x423dc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423dc7:{NFSU2_TR(0x423dc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423dc8:{NFSU2_TR(0x423dc8);
__builtin_memmove((R+28),(R+4),4);
}
B423dca:{NFSU2_TR(0x423dca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423dce:{NFSU2_TR(0x423dce);
u8 U[4];
w4(U+0,u32(0x7857b4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B423dd4:{NFSU2_TR(0x423dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423dda:{NFSU2_TR(0x423dda);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B423ddc:{NFSU2_TR(0x423ddc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423de2:{NFSU2_TR(0x423de2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B423dea:{NFSU2_TR(0x423dea);
if(r1(R+518)){{goto L423dfd;}}
}
B423dec:L423dec:{c.instructions+=2;NFSU2_TR(0x423dec);
__builtin_memmove((R+4),(R+24),4);
}
B423dee:{NFSU2_TR(0x423dee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423df3ull));
TAIL_STATIC(0x614810u,614);
}
B423df3:L423df3:{c.instructions+=4;NFSU2_TR(0x423df3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B423df5:{NFSU2_TR(0x423df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423df8:{NFSU2_TR(0x423df8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B423dfa:{NFSU2_TR(0x423dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423dfd:L423dfd:{c.instructions+=8;NFSU2_TR(0x423dfd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423e01:{NFSU2_TR(0x423e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B423e08:{NFSU2_TR(0x423e08);
u8 U[4];
w4(U+0,u32(0x784270ull));
s4(u32(r4(R+28)),r4(U+0));
}
B423e0e:{NFSU2_TR(0x423e0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B423e0f:{NFSU2_TR(0x423e0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B423e10:{NFSU2_TR(0x423e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423e17:{NFSU2_TR(0x423e17);
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
B423e1a:{NFSU2_TR(0x423e1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B423e20:L423e20:{c.instructions+=20;NFSU2_TR(0x423e20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B423e23:{NFSU2_TR(0x423e23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423e24:{NFSU2_TR(0x423e24);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423e25:{NFSU2_TR(0x423e25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423e26:{NFSU2_TR(0x423e26);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B423e2a:{NFSU2_TR(0x423e2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B423e31:{NFSU2_TR(0x423e31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B423e33:{NFSU2_TR(0x423e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B423e36:{NFSU2_TR(0x423e36);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B423e39:{NFSU2_TR(0x423e39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423e3a:{NFSU2_TR(0x423e3a);
__builtin_memmove((R+28),(R+4),4);
}
B423e3c:{NFSU2_TR(0x423e3c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B423e40:{NFSU2_TR(0x423e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423e43:{NFSU2_TR(0x423e43);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423e47:{NFSU2_TR(0x423e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423e4d:{NFSU2_TR(0x423e4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423e51:{NFSU2_TR(0x423e51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423e52:{NFSU2_TR(0x423e52);
__builtin_memmove((R+4),(R+24),4);
}
B423e54:{NFSU2_TR(0x423e54);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((R+12),(U+0),4);
}
B423e5a:{NFSU2_TR(0x423e5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423e5full));
TAIL_STATIC(0x60c120u,60c);
}
B423e5f:L423e5f:{c.instructions+=11;NFSU2_TR(0x423e5f);
__builtin_memmove((R+4),gp(0x783718),4);
}
B423e65:{NFSU2_TR(0x423e65);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423e6b:{NFSU2_TR(0x423e6b);
__builtin_memmove((R+20),(R+0),4);
}
B423e6d:{NFSU2_TR(0x423e6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B423e6f:{NFSU2_TR(0x423e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B423e79:{NFSU2_TR(0x423e79);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423e80:{NFSU2_TR(0x423e80);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423e87:{NFSU2_TR(0x423e87);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423e8c:{NFSU2_TR(0x423e8c);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423e91:{NFSU2_TR(0x423e91);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423e95:{NFSU2_TR(0x423e95);
if(r1(R+518)){{goto L423fd2;}}
}
B423e9b:L423e9b:{c.instructions+=3;NFSU2_TR(0x423e9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423ea1:{NFSU2_TR(0x423ea1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B423ea3:{NFSU2_TR(0x423ea3);
if(r1(R+518)){{goto L423fd2;}}
}
B423ea9:L423ea9:{c.instructions+=6;NFSU2_TR(0x423ea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B423eab:{NFSU2_TR(0x423eab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B423ead:{NFSU2_TR(0x423ead);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423eae:{NFSU2_TR(0x423eae);
__builtin_memmove((R+4),(R+20),4);
}
B423eb0:{NFSU2_TR(0x423eb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423eb4:{NFSU2_TR(0x423eb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423eb9ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B423eb9:L423eb9:{c.instructions+=15;NFSU2_TR(0x423eb9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B423ebd:{NFSU2_TR(0x423ebd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B423ec4:{NFSU2_TR(0x423ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B423ec7:{NFSU2_TR(0x423ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423eca:{NFSU2_TR(0x423eca);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423ece:{NFSU2_TR(0x423ece);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B423ed2:{NFSU2_TR(0x423ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B423ed5:{NFSU2_TR(0x423ed5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B423ed8:{NFSU2_TR(0x423ed8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423ed9:{NFSU2_TR(0x423ed9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423edd:{NFSU2_TR(0x423edd);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423ee1:{NFSU2_TR(0x423ee1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423ee2:{NFSU2_TR(0x423ee2);
__builtin_memmove((R+4),(R+24),4);
}
B423ee4:{NFSU2_TR(0x423ee4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B423ee8:{NFSU2_TR(0x423ee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423eedull));
TAIL_STATIC(0x60c010u,60c);
}
B423eed:L423eed:{c.instructions+=4;NFSU2_TR(0x423eed);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B423ef3:{NFSU2_TR(0x423ef3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B423ef5:{NFSU2_TR(0x423ef5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B423ef8:{NFSU2_TR(0x423ef8);
if(r1(R+514)){{goto L423f25;}}
}
B423efa:L423efa:{c.instructions+=9;NFSU2_TR(0x423efa);
{u32 ea_=u32(u32(7878420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423f00:{NFSU2_TR(0x423f00);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B423f04:{NFSU2_TR(0x423f04);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B423f08:{NFSU2_TR(0x423f08);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B423f0c:{NFSU2_TR(0x423f0c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423f10:{NFSU2_TR(0x423f10);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B423f12:{NFSU2_TR(0x423f12);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B423f14:{NFSU2_TR(0x423f14);
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
B423f17:{NFSU2_TR(0x423f17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L423f50;}}
}
B423f19:L423f19:{c.instructions+=4;NFSU2_TR(0x423f19);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423f1d:{NFSU2_TR(0x423f1d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B423f1f:{NFSU2_TR(0x423f1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423f23:{NFSU2_TR(0x423f23);
{goto L423f54;}
}
B423f25:L423f25:{c.instructions+=9;NFSU2_TR(0x423f25);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423f29:{NFSU2_TR(0x423f29);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B423f2d:{NFSU2_TR(0x423f2d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B423f31:{NFSU2_TR(0x423f31);
{u32 ea_=u32(u32(7878420u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B423f37:{NFSU2_TR(0x423f37);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423f3b:{NFSU2_TR(0x423f3b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B423f3d:{NFSU2_TR(0x423f3d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B423f3f:{NFSU2_TR(0x423f3f);
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
B423f42:{NFSU2_TR(0x423f42);
if(r1(R+514)){{goto L423f50;}}
}
B423f44:L423f44:{c.instructions+=4;NFSU2_TR(0x423f44);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423f48:{NFSU2_TR(0x423f48);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B423f4a:{NFSU2_TR(0x423f4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423f4e:{NFSU2_TR(0x423f4e);
{goto L423f54;}
}
B423f50:L423f50:{c.instructions+=1;NFSU2_TR(0x423f50);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B423f54:L423f54:{c.instructions+=8;NFSU2_TR(0x423f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423f57:{NFSU2_TR(0x423f57);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B423f5b:{NFSU2_TR(0x423f5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423f5e:{NFSU2_TR(0x423f5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423f62:{NFSU2_TR(0x423f62);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423f63:{NFSU2_TR(0x423f63);
__builtin_memmove((R+4),(R+24),4);
}
B423f65:{NFSU2_TR(0x423f65);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423f69:{NFSU2_TR(0x423f69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423f6eull));
TAIL_STATIC(0x60bff0u,60b);
}
B423f6e:L423f6e:{c.instructions+=8;NFSU2_TR(0x423f6e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423f72:{NFSU2_TR(0x423f72);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B423f76:{NFSU2_TR(0x423f76);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423f7b:{NFSU2_TR(0x423f7b);
{u32 ea_=u32(u32(7878412u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B423f81:{NFSU2_TR(0x423f81);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B423f83:{NFSU2_TR(0x423f83);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B423f85:{NFSU2_TR(0x423f85);
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
B423f88:{NFSU2_TR(0x423f88);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L423f8f;}}
}
B423f8a:L423f8a:{c.instructions+=1;NFSU2_TR(0x423f8a);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423f8f:L423f8f:{c.instructions+=8;NFSU2_TR(0x423f8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B423f93:{NFSU2_TR(0x423f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B423f96:{NFSU2_TR(0x423f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423f99:{NFSU2_TR(0x423f99);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423f9d:{NFSU2_TR(0x423f9d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423f9e:{NFSU2_TR(0x423f9e);
__builtin_memmove((R+4),(R+24),4);
}
B423fa0:{NFSU2_TR(0x423fa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423fa4:{NFSU2_TR(0x423fa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423fa9ull));
TAIL_STATIC(0x60bff0u,60b);
}
B423fa9:L423fa9:{c.instructions+=7;NFSU2_TR(0x423fa9);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423fad:{NFSU2_TR(0x423fad);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B423fb1:{NFSU2_TR(0x423fb1);
{u32 ea_=u32(u32(7878412u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B423fb7:{NFSU2_TR(0x423fb7);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B423fb9:{NFSU2_TR(0x423fb9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B423fbb:{NFSU2_TR(0x423fbb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B423fbe:{NFSU2_TR(0x423fbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L423fe3;}}
}
B423fc0:L423fc0:{c.instructions+=4;NFSU2_TR(0x423fc0);
__builtin_memmove((R+8),gp(0x7e8e64),4);
}
B423fc6:{NFSU2_TR(0x423fc6);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423fc9:{NFSU2_TR(0x423fc9);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423fce:{NFSU2_TR(0x423fce);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423fd2:L423fd2:{c.instructions+=2;NFSU2_TR(0x423fd2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B423fd5:{NFSU2_TR(0x423fd5);
if(r1(R+518)){{goto L423fee;}}
}
B423fd7:L423fd7:{c.instructions+=4;NFSU2_TR(0x423fd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B423fdb:{NFSU2_TR(0x423fdb);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B423fde:{NFSU2_TR(0x423fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B423fe1:{NFSU2_TR(0x423fe1);
{goto L423ff0;}
}
B423fe3:L423fe3:{c.instructions+=3;NFSU2_TR(0x423fe3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B423fe7:{NFSU2_TR(0x423fe7);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B423fec:{NFSU2_TR(0x423fec);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x423fd2u);}goto L423fd2;}
}
B423fee:L423fee:{c.instructions+=1;NFSU2_TR(0x423fee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B423ff0:L423ff0:{c.instructions+=5;NFSU2_TR(0x423ff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423ff1:{NFSU2_TR(0x423ff1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B423ff4:{NFSU2_TR(0x423ff4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B423ff5:{NFSU2_TR(0x423ff5);
__builtin_memmove((R+4),(R+12),4);
}
B423ff7:{NFSU2_TR(0x423ff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x423ffcull));
TAIL_STATIC(0x420d40u,420);
}
B423ffc:L423ffc:{c.instructions+=1;NFSU2_TR(0x423ffc);
__builtin_memmove((R+0),gp(0x89e7e3),1);
TAIL_STATIC(0x424001u,424);
}
XIT:NFSU2_TR_EXIT(0x423,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
