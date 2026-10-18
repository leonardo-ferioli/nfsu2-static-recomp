#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_524(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53a(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_546(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_559(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55c(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_55f(u8* __restrict R,Cpu& c);
u32 body_560(u8* __restrict R,Cpu& c);
u32 body_569(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x568,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x568,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_568(u8* __restrict R,Cpu& c);
u32 page_568(Cpu& c){return body_568(c.regs.data(),c);}
__attribute__((noinline)) u32 body_568(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x568000:goto L568000;
case 0x568003:c.instructions+=3;goto B568003;
case 0x568006:c.instructions+=2;goto B568006;
case 0x568008:c.instructions+=1;goto B568008;
case 0x56800e:goto L56800e;
case 0x568010:c.instructions+=1;goto B568010;
case 0x568015:goto L568015;
case 0x568016:c.instructions+=5;goto B568016;
case 0x568017:c.instructions+=4;goto B568017;
case 0x568018:c.instructions+=3;goto B568018;
case 0x56801a:c.instructions+=2;goto B56801a;
case 0x56801b:c.instructions+=1;goto B56801b;
case 0x56801e:goto L56801e;
case 0x568021:c.instructions+=3;goto B568021;
case 0x568026:c.instructions+=2;goto B568026;
case 0x568027:c.instructions+=1;goto B568027;
case 0x56802c:goto L56802c;
case 0x56802d:c.instructions+=2;goto B56802d;
case 0x56802f:c.instructions+=1;goto B56802f;
case 0x568034:goto L568034;
case 0x568037:c.instructions+=2;goto B568037;
case 0x568039:c.instructions+=1;goto B568039;
case 0x56803b:goto L56803b;
case 0x56803e:c.instructions+=3;goto B56803e;
case 0x568041:c.instructions+=2;goto B568041;
case 0x568043:c.instructions+=1;goto B568043;
case 0x568049:goto L568049;
case 0x56804b:c.instructions+=1;goto B56804b;
case 0x568050:goto L568050;
case 0x568051:c.instructions+=5;goto B568051;
case 0x568052:c.instructions+=4;goto B568052;
case 0x568053:c.instructions+=3;goto B568053;
case 0x568055:c.instructions+=2;goto B568055;
case 0x568056:c.instructions+=1;goto B568056;
case 0x568059:goto L568059;
case 0x56805a:c.instructions+=1;goto B56805a;
case 0x56805f:goto L56805f;
case 0x568062:c.instructions+=2;goto B568062;
case 0x568064:c.instructions+=1;goto B568064;
case 0x568066:goto L568066;
case 0x568069:c.instructions+=3;goto B568069;
case 0x56806c:c.instructions+=2;goto B56806c;
case 0x56806e:c.instructions+=1;goto B56806e;
case 0x568074:goto L568074;
case 0x568076:c.instructions+=1;goto B568076;
case 0x56807b:goto L56807b;
case 0x56807c:c.instructions+=5;goto B56807c;
case 0x56807d:c.instructions+=4;goto B56807d;
case 0x56807e:c.instructions+=3;goto B56807e;
case 0x568080:c.instructions+=2;goto B568080;
case 0x568081:c.instructions+=1;goto B568081;
case 0x568084:goto L568084;
case 0x56808a:c.instructions+=1;goto B56808a;
case 0x56808f:goto L56808f;
case 0x568095:c.instructions+=2;goto B568095;
case 0x568098:c.instructions+=1;goto B568098;
case 0x56809a:goto L56809a;
case 0x56809d:c.instructions+=1;goto B56809d;
case 0x56809f:goto L56809f;
case 0x5680a5:c.instructions+=4;goto B5680a5;
case 0x5680ab:c.instructions+=3;goto B5680ab;
case 0x5680ad:c.instructions+=2;goto B5680ad;
case 0x5680b0:c.instructions+=1;goto B5680b0;
case 0x5680b2:goto L5680b2;
case 0x5680b7:c.instructions+=4;goto B5680b7;
case 0x5680b9:c.instructions+=3;goto B5680b9;
case 0x5680ba:c.instructions+=2;goto B5680ba;
case 0x5680bc:c.instructions+=1;goto B5680bc;
case 0x5680c1:goto L5680c1;
case 0x5680c2:c.instructions+=5;goto B5680c2;
case 0x5680c3:c.instructions+=4;goto B5680c3;
case 0x5680c4:c.instructions+=3;goto B5680c4;
case 0x5680c6:c.instructions+=2;goto B5680c6;
case 0x5680c7:c.instructions+=1;goto B5680c7;
case 0x5680ca:goto L5680ca;
case 0x5680d0:c.instructions+=3;goto B5680d0;
case 0x5680d2:c.instructions+=2;goto B5680d2;
case 0x5680d5:c.instructions+=1;goto B5680d5;
case 0x5680db:goto L5680db;
case 0x5680e0:c.instructions+=3;goto B5680e0;
case 0x5680e1:c.instructions+=2;goto B5680e1;
case 0x5680e3:c.instructions+=1;goto B5680e3;
case 0x5680e8:goto L5680e8;
case 0x5680e9:c.instructions+=5;goto B5680e9;
case 0x5680ea:c.instructions+=4;goto B5680ea;
case 0x5680eb:c.instructions+=3;goto B5680eb;
case 0x5680ed:c.instructions+=2;goto B5680ed;
case 0x5680ee:c.instructions+=1;goto B5680ee;
case 0x5680f1:goto L5680f1;
case 0x5680f7:c.instructions+=2;goto B5680f7;
case 0x5680f9:c.instructions+=1;goto B5680f9;
case 0x5680ff:goto L5680ff;
case 0x568100:c.instructions+=2;goto B568100;
case 0x568102:c.instructions+=1;goto B568102;
case 0x568107:goto L568107;
case 0x568108:c.instructions+=5;goto B568108;
case 0x568109:c.instructions+=4;goto B568109;
case 0x56810a:c.instructions+=3;goto B56810a;
case 0x56810c:c.instructions+=2;goto B56810c;
case 0x56810d:c.instructions+=1;goto B56810d;
case 0x568110:goto L568110;
case 0x568112:c.instructions+=2;goto B568112;
case 0x568114:c.instructions+=1;goto B568114;
case 0x568119:goto L568119;
case 0x56811a:c.instructions+=5;goto B56811a;
case 0x56811b:c.instructions+=4;goto B56811b;
case 0x56811c:c.instructions+=3;goto B56811c;
case 0x56811e:c.instructions+=2;goto B56811e;
case 0x56811f:c.instructions+=1;goto B56811f;
case 0x568122:goto L568122;
case 0x568124:c.instructions+=1;goto B568124;
case 0x568129:goto L568129;
case 0x56812a:c.instructions+=6;goto B56812a;
case 0x56812e:c.instructions+=5;goto B56812e;
case 0x56812f:c.instructions+=4;goto B56812f;
case 0x568130:c.instructions+=3;goto B568130;
case 0x568132:c.instructions+=2;goto B568132;
case 0x568133:c.instructions+=1;goto B568133;
case 0x568136:goto L568136;
case 0x56813c:c.instructions+=1;goto B56813c;
case 0x56813e:goto L56813e;
case 0x568144:c.instructions+=1;goto B568144;
case 0x568146:goto L568146;
case 0x56814c:c.instructions+=1;goto B56814c;
case 0x568152:goto L568152;
case 0x56815c:c.instructions+=1;goto B56815c;
case 0x568162:goto L568162;
case 0x568167:c.instructions+=1;goto B568167;
case 0x56816c:goto L56816c;
case 0x568171:goto L568171;
case 0x568173:c.instructions+=1;goto B568173;
case 0x568178:goto L568178;
case 0x568179:c.instructions+=5;goto B568179;
case 0x56817a:c.instructions+=4;goto B56817a;
case 0x56817b:c.instructions+=3;goto B56817b;
case 0x56817d:c.instructions+=2;goto B56817d;
case 0x56817e:c.instructions+=1;goto B56817e;
case 0x568181:goto L568181;
case 0x568187:c.instructions+=1;goto B568187;
case 0x56818c:goto L56818c;
case 0x56818d:c.instructions+=5;goto B56818d;
case 0x56818e:c.instructions+=4;goto B56818e;
case 0x56818f:c.instructions+=3;goto B56818f;
case 0x568191:c.instructions+=2;goto B568191;
case 0x568192:c.instructions+=1;goto B568192;
case 0x568195:goto L568195;
case 0x56819b:c.instructions+=2;goto B56819b;
case 0x56819d:c.instructions+=1;goto B56819d;
case 0x5681a3:goto L5681a3;
case 0x5681a9:c.instructions+=2;goto B5681a9;
case 0x5681ac:c.instructions+=1;goto B5681ac;
case 0x5681b1:goto L5681b1;
case 0x5681b2:c.instructions+=1;goto B5681b2;
case 0x5681b7:goto L5681b7;
case 0x5681ba:c.instructions+=5;goto B5681ba;
case 0x5681bd:c.instructions+=4;goto B5681bd;
case 0x5681bf:c.instructions+=3;goto B5681bf;
case 0x5681c4:c.instructions+=2;goto B5681c4;
case 0x5681c9:c.instructions+=1;goto B5681c9;
case 0x5681cb:goto L5681cb;
case 0x5681ce:c.instructions+=2;goto B5681ce;
case 0x5681d1:c.instructions+=1;goto B5681d1;
case 0x5681d6:goto L5681d6;
case 0x5681d7:c.instructions+=3;goto B5681d7;
case 0x5681d9:c.instructions+=2;goto B5681d9;
case 0x5681de:c.instructions+=1;goto B5681de;
case 0x5681e3:goto L5681e3;
case 0x5681e4:c.instructions+=3;goto B5681e4;
case 0x5681e6:c.instructions+=2;goto B5681e6;
case 0x5681eb:c.instructions+=1;goto B5681eb;
case 0x5681f0:goto L5681f0;
case 0x5681f2:c.instructions+=3;goto B5681f2;
case 0x5681f4:c.instructions+=2;goto B5681f4;
case 0x5681f9:c.instructions+=1;goto B5681f9;
case 0x5681fe:goto L5681fe;
case 0x568201:c.instructions+=4;goto B568201;
case 0x568206:c.instructions+=3;goto B568206;
case 0x56820b:c.instructions+=2;goto B56820b;
case 0x568210:c.instructions+=1;goto B568210;
case 0x568215:goto L568215;
case 0x568218:c.instructions+=6;goto B568218;
case 0x56821b:c.instructions+=5;goto B56821b;
case 0x56821d:c.instructions+=4;goto B56821d;
case 0x56821f:c.instructions+=3;goto B56821f;
case 0x568220:c.instructions+=2;goto B568220;
case 0x568222:c.instructions+=1;goto B568222;
case 0x568227:goto L568227;
case 0x56822a:c.instructions+=6;goto B56822a;
case 0x56822b:c.instructions+=5;goto B56822b;
case 0x56822c:c.instructions+=4;goto B56822c;
case 0x56822d:c.instructions+=3;goto B56822d;
case 0x56822f:c.instructions+=2;goto B56822f;
case 0x568230:c.instructions+=1;goto B568230;
case 0x568233:goto L568233;
case 0x568239:c.instructions+=1;goto B568239;
case 0x56823e:goto L56823e;
case 0x56823f:c.instructions+=3;goto B56823f;
case 0x568241:c.instructions+=2;goto B568241;
case 0x568246:c.instructions+=1;goto B568246;
case 0x56824b:goto L56824b;
case 0x56824c:c.instructions+=3;goto B56824c;
case 0x56824e:c.instructions+=2;goto B56824e;
case 0x568253:c.instructions+=1;goto B568253;
case 0x568258:goto L568258;
case 0x56825a:c.instructions+=3;goto B56825a;
case 0x56825c:c.instructions+=2;goto B56825c;
case 0x568261:c.instructions+=1;goto B568261;
case 0x568266:goto L568266;
case 0x568269:c.instructions+=4;goto B568269;
case 0x56826e:c.instructions+=3;goto B56826e;
case 0x568273:c.instructions+=2;goto B568273;
case 0x568278:c.instructions+=1;goto B568278;
case 0x56827d:goto L56827d;
case 0x568283:c.instructions+=5;goto B568283;
case 0x568285:c.instructions+=4;goto B568285;
case 0x568287:c.instructions+=3;goto B568287;
case 0x568288:c.instructions+=2;goto B568288;
case 0x56828a:c.instructions+=1;goto B56828a;
case 0x56828f:goto L56828f;
case 0x568292:goto L568292;
case 0x568293:c.instructions+=5;goto B568293;
case 0x568294:c.instructions+=4;goto B568294;
case 0x568295:c.instructions+=3;goto B568295;
case 0x568297:c.instructions+=2;goto B568297;
case 0x568298:c.instructions+=1;goto B568298;
case 0x5682a0:goto L5682a0;
case 0x5682a1:c.instructions+=4;goto B5682a1;
case 0x5682a3:c.instructions+=3;goto B5682a3;
case 0x5682a9:c.instructions+=2;goto B5682a9;
case 0x5682ab:c.instructions+=1;goto B5682ab;
case 0x5682b1:goto L5682b1;
case 0x5682b7:c.instructions+=2;goto B5682b7;
case 0x5682b9:c.instructions+=1;goto B5682b9;
case 0x5682bf:goto L5682bf;
case 0x5682c4:c.instructions+=1;goto B5682c4;
case 0x5682c9:goto L5682c9;
case 0x5682cc:c.instructions+=2;goto B5682cc;
case 0x5682ce:c.instructions+=1;goto B5682ce;
case 0x5682d4:goto L5682d4;
case 0x5682d8:c.instructions+=4;goto B5682d8;
case 0x5682dd:c.instructions+=3;goto B5682dd;
case 0x5682de:c.instructions+=2;goto B5682de;
case 0x5682df:c.instructions+=1;goto B5682df;
case 0x5682e5:goto L5682e5;
case 0x5682ea:c.instructions+=1;goto B5682ea;
case 0x5682f0:goto L5682f0;
case 0x5682f6:c.instructions+=3;goto B5682f6;
case 0x5682f8:c.instructions+=2;goto B5682f8;
case 0x5682fd:c.instructions+=1;goto B5682fd;
case 0x5682ff:goto L5682ff;
case 0x568305:c.instructions+=1;goto B568305;
case 0x568307:goto L568307;
case 0x56830d:c.instructions+=3;goto B56830d;
case 0x56830e:c.instructions+=2;goto B56830e;
case 0x568313:c.instructions+=1;goto B568313;
case 0x568318:goto L568318;
case 0x56831e:c.instructions+=4;goto B56831e;
case 0x568321:c.instructions+=3;goto B568321;
case 0x568326:c.instructions+=2;goto B568326;
case 0x56832c:c.instructions+=1;goto B56832c;
case 0x56832e:goto L56832e;
case 0x568333:c.instructions+=1;goto B568333;
case 0x568335:goto L568335;
case 0x568336:c.instructions+=4;goto B568336;
case 0x568337:c.instructions+=3;goto B568337;
case 0x56833e:c.instructions+=2;goto B56833e;
case 0x56833f:c.instructions+=1;goto B56833f;
case 0x568342:goto L568342;
case 0x568343:c.instructions+=4;goto B568343;
case 0x568344:c.instructions+=3;goto B568344;
case 0x56834b:c.instructions+=2;goto B56834b;
case 0x56834c:c.instructions+=1;goto B56834c;
case 0x56834f:goto L56834f;
case 0x568355:c.instructions+=2;goto B568355;
case 0x56835a:c.instructions+=1;goto B56835a;
case 0x56835c:goto L56835c;
case 0x56835f:c.instructions+=4;goto B56835f;
case 0x568361:c.instructions+=3;goto B568361;
case 0x568363:c.instructions+=2;goto B568363;
case 0x56836b:c.instructions+=1;goto B56836b;
case 0x568370:goto L568370;
case 0x568371:c.instructions+=3;goto B568371;
case 0x568372:c.instructions+=2;goto B568372;
case 0x568373:c.instructions+=1;goto B568373;
case 0x568376:goto L568376;
case 0x56837c:c.instructions+=2;goto B56837c;
case 0x56837e:c.instructions+=1;goto B56837e;
case 0x568380:goto L568380;
case 0x568386:c.instructions+=3;goto B568386;
case 0x568387:c.instructions+=2;goto B568387;
case 0x56838c:c.instructions+=1;goto B56838c;
case 0x568391:goto L568391;
case 0x568394:c.instructions+=1;goto B568394;
case 0x56839a:goto L56839a;
case 0x56839d:c.instructions+=5;goto B56839d;
case 0x56839e:c.instructions+=4;goto B56839e;
case 0x5683a3:c.instructions+=3;goto B5683a3;
case 0x5683a8:c.instructions+=2;goto B5683a8;
case 0x5683a9:c.instructions+=1;goto B5683a9;
case 0x5683ae:goto L5683ae;
case 0x5683b1:c.instructions+=5;goto B5683b1;
case 0x5683b2:c.instructions+=4;goto B5683b2;
case 0x5683b8:c.instructions+=3;goto B5683b8;
case 0x5683b9:c.instructions+=2;goto B5683b9;
case 0x5683ba:c.instructions+=1;goto B5683ba;
case 0x5683bd:goto L5683bd;
case 0x5683c0:c.instructions+=3;goto B5683c0;
case 0x5683c3:c.instructions+=2;goto B5683c3;
case 0x5683c5:c.instructions+=1;goto B5683c5;
case 0x5683c7:goto L5683c7;
case 0x5683cd:c.instructions+=2;goto B5683cd;
case 0x5683cf:c.instructions+=1;goto B5683cf;
case 0x5683d1:goto L5683d1;
case 0x5683d6:c.instructions+=8;goto B5683d6;
case 0x5683dc:c.instructions+=7;goto B5683dc;
case 0x5683e0:c.instructions+=6;goto B5683e0;
case 0x5683e6:c.instructions+=5;goto B5683e6;
case 0x5683e9:c.instructions+=4;goto B5683e9;
case 0x5683ee:c.instructions+=3;goto B5683ee;
case 0x5683ef:c.instructions+=2;goto B5683ef;
case 0x5683f9:c.instructions+=1;goto B5683f9;
case 0x5683fe:goto L5683fe;
case 0x568401:c.instructions+=2;goto B568401;
case 0x568403:c.instructions+=1;goto B568403;
case 0x568408:goto L568408;
case 0x568409:c.instructions+=4;goto B568409;
case 0x56840a:c.instructions+=3;goto B56840a;
case 0x568411:c.instructions+=2;goto B568411;
case 0x568412:c.instructions+=1;goto B568412;
case 0x568415:goto L568415;
case 0x568417:c.instructions+=1;goto B568417;
case 0x568419:goto L568419;
case 0x56841f:c.instructions+=4;goto B56841f;
case 0x568421:c.instructions+=3;goto B568421;
case 0x568427:c.instructions+=2;goto B568427;
case 0x56842d:c.instructions+=1;goto B56842d;
case 0x56842f:goto L56842f;
case 0x568432:c.instructions+=1;goto B568432;
case 0x568437:goto L568437;
case 0x56843a:c.instructions+=4;goto B56843a;
case 0x56843c:c.instructions+=3;goto B56843c;
case 0x56843e:c.instructions+=2;goto B56843e;
case 0x568445:c.instructions+=1;goto B568445;
case 0x56844a:goto L56844a;
case 0x56844b:c.instructions+=1;goto B56844b;
case 0x56844c:goto L56844c;
case 0x56844d:c.instructions+=1;goto B56844d;
case 0x568450:goto L568450;
case 0x568451:c.instructions+=15;goto B568451;
case 0x568453:c.instructions+=14;goto B568453;
case 0x568455:c.instructions+=13;goto B568455;
case 0x56845a:c.instructions+=12;goto B56845a;
case 0x568460:c.instructions+=11;goto B568460;
case 0x568461:c.instructions+=10;goto B568461;
case 0x568468:c.instructions+=9;goto B568468;
case 0x568469:c.instructions+=8;goto B568469;
case 0x56846a:c.instructions+=7;goto B56846a;
case 0x56846b:c.instructions+=6;goto B56846b;
case 0x56846c:c.instructions+=5;goto B56846c;
case 0x56846f:c.instructions+=4;goto B56846f;
case 0x568471:c.instructions+=3;goto B568471;
case 0x568472:c.instructions+=2;goto B568472;
case 0x568475:c.instructions+=1;goto B568475;
case 0x56847a:goto L56847a;
case 0x56847f:c.instructions+=13;goto B56847f;
case 0x568484:c.instructions+=12;goto B568484;
case 0x568486:c.instructions+=11;goto B568486;
case 0x56848c:c.instructions+=10;goto B56848c;
case 0x56848f:c.instructions+=9;goto B56848f;
case 0x568494:c.instructions+=8;goto B568494;
case 0x568497:c.instructions+=7;goto B568497;
case 0x56849a:c.instructions+=6;goto B56849a;
case 0x56849f:c.instructions+=5;goto B56849f;
case 0x5684a1:c.instructions+=4;goto B5684a1;
case 0x5684a4:c.instructions+=3;goto B5684a4;
case 0x5684a5:c.instructions+=2;goto B5684a5;
case 0x5684a8:c.instructions+=1;goto B5684a8;
case 0x5684ad:goto L5684ad;
case 0x5684b0:c.instructions+=8;goto B5684b0;
case 0x5684b1:c.instructions+=7;goto B5684b1;
case 0x5684b2:c.instructions+=6;goto B5684b2;
case 0x5684b4:c.instructions+=5;goto B5684b4;
case 0x5684b9:c.instructions+=4;goto B5684b9;
case 0x5684ba:c.instructions+=3;goto B5684ba;
case 0x5684c0:c.instructions+=2;goto B5684c0;
case 0x5684c4:c.instructions+=1;goto B5684c4;
case 0x5684c9:goto L5684c9;
case 0x5684cf:c.instructions+=13;goto B5684cf;
case 0x5684d5:c.instructions+=12;goto B5684d5;
case 0x5684db:c.instructions+=11;goto B5684db;
case 0x5684e1:c.instructions+=10;goto B5684e1;
case 0x5684e7:c.instructions+=9;goto B5684e7;
case 0x5684ed:c.instructions+=8;goto B5684ed;
case 0x5684f3:c.instructions+=7;goto B5684f3;
case 0x5684f7:c.instructions+=6;goto B5684f7;
case 0x5684fd:c.instructions+=5;goto B5684fd;
case 0x568507:c.instructions+=4;goto B568507;
case 0x568511:c.instructions+=3;goto B568511;
case 0x568516:c.instructions+=2;goto B568516;
case 0x56851b:c.instructions+=1;goto B56851b;
case 0x56851d:goto L56851d;
case 0x568520:goto L568520;
case 0x568523:c.instructions+=1;goto B568523;
case 0x568525:goto L568525;
case 0x568527:c.instructions+=2;goto B568527;
case 0x56852c:c.instructions+=1;goto B56852c;
case 0x56852e:goto L56852e;
case 0x568530:goto L568530;
case 0x568533:c.instructions+=2;goto B568533;
case 0x568535:c.instructions+=1;goto B568535;
case 0x568537:goto L568537;
case 0x56853a:c.instructions+=3;goto B56853a;
case 0x56853b:c.instructions+=2;goto B56853b;
case 0x568540:c.instructions+=1;goto B568540;
case 0x568545:goto L568545;
case 0x568547:c.instructions+=2;goto B568547;
case 0x568549:c.instructions+=1;goto B568549;
case 0x56854b:goto L56854b;
case 0x568550:c.instructions+=1;goto B568550;
case 0x568555:goto L568555;
case 0x568558:c.instructions+=4;goto B568558;
case 0x568559:c.instructions+=3;goto B568559;
case 0x56855a:c.instructions+=2;goto B56855a;
case 0x56855c:c.instructions+=1;goto B56855c;
case 0x568561:goto L568561;
case 0x568562:c.instructions+=4;goto B568562;
case 0x568567:c.instructions+=3;goto B568567;
case 0x568569:c.instructions+=2;goto B568569;
case 0x56856c:c.instructions+=1;goto B56856c;
case 0x568571:goto L568571;
case 0x568574:c.instructions+=4;goto B568574;
case 0x568577:c.instructions+=3;goto B568577;
case 0x568579:c.instructions+=2;goto B568579;
case 0x56857c:c.instructions+=1;goto B56857c;
case 0x568582:goto L568582;
case 0x568584:c.instructions+=1;goto B568584;
case 0x568589:goto L568589;
case 0x56858b:c.instructions+=1;goto B56858b;
case 0x568590:goto L568590;
case 0x568596:c.instructions+=1;goto B568596;
case 0x568598:goto L568598;
case 0x56859a:c.instructions+=6;goto B56859a;
case 0x56859f:c.instructions+=5;goto B56859f;
case 0x5685a5:c.instructions+=4;goto B5685a5;
case 0x5685a8:c.instructions+=3;goto B5685a8;
case 0x5685ad:c.instructions+=2;goto B5685ad;
case 0x5685ae:c.instructions+=1;goto B5685ae;
case 0x5685b3:goto L5685b3;
case 0x5685b6:goto L5685b6;
case 0x5685bd:c.instructions+=1;goto B5685bd;
case 0x5685bf:goto L5685bf;
case 0x5685c2:c.instructions+=3;goto B5685c2;
case 0x5685c7:c.instructions+=2;goto B5685c7;
case 0x5685c8:c.instructions+=1;goto B5685c8;
case 0x5685cd:goto L5685cd;
case 0x5685d0:goto L5685d0;
case 0x5685d3:c.instructions+=6;goto B5685d3;
case 0x5685d4:c.instructions+=5;goto B5685d4;
case 0x5685d5:c.instructions+=4;goto B5685d5;
case 0x5685d6:c.instructions+=3;goto B5685d6;
case 0x5685d7:c.instructions+=2;goto B5685d7;
case 0x5685d9:c.instructions+=1;goto B5685d9;
case 0x5685de:goto L5685de;
case 0x5685df:c.instructions+=1;goto B5685df;
case 0x5685e4:goto L5685e4;
case 0x5685e7:c.instructions+=3;goto B5685e7;
case 0x5685ea:c.instructions+=2;goto B5685ea;
case 0x5685ec:c.instructions+=1;goto B5685ec;
case 0x5685ee:goto L5685ee;
case 0x5685f1:c.instructions+=1;goto B5685f1;
case 0x5685f3:goto L5685f3;
case 0x5685f5:goto L5685f5;
case 0x5685f8:c.instructions+=1;goto B5685f8;
case 0x5685fa:goto L5685fa;
case 0x568600:c.instructions+=2;goto B568600;
case 0x568601:c.instructions+=1;goto B568601;
case 0x568606:goto L568606;
case 0x568609:c.instructions+=1;goto B568609;
case 0x56860b:goto L56860b;
case 0x56860e:c.instructions+=2;goto B56860e;
case 0x568610:c.instructions+=1;goto B568610;
case 0x568612:goto L568612;
case 0x568615:c.instructions+=1;goto B568615;
case 0x568617:goto L568617;
case 0x568619:goto L568619;
case 0x56861c:c.instructions+=1;goto B56861c;
case 0x56861e:goto L56861e;
case 0x568624:c.instructions+=2;goto B568624;
case 0x568625:c.instructions+=1;goto B568625;
case 0x56862a:goto L56862a;
case 0x56862d:c.instructions+=1;goto B56862d;
case 0x56862f:goto L56862f;
case 0x568635:c.instructions+=2;goto B568635;
case 0x568636:c.instructions+=1;goto B568636;
case 0x56863b:goto L56863b;
case 0x568641:c.instructions+=2;goto B568641;
case 0x568642:c.instructions+=1;goto B568642;
case 0x568647:goto L568647;
case 0x56864a:goto L56864a;
case 0x56864d:c.instructions+=2;goto B56864d;
case 0x56864e:c.instructions+=1;goto B56864e;
case 0x568653:goto L568653;
case 0x568656:c.instructions+=2;goto B568656;
case 0x568658:c.instructions+=1;goto B568658;
case 0x56865a:goto L56865a;
case 0x56865d:c.instructions+=3;goto B56865d;
case 0x568660:c.instructions+=2;goto B568660;
case 0x568663:c.instructions+=1;goto B568663;
case 0x568666:goto L568666;
case 0x568669:c.instructions+=8;goto B568669;
case 0x56866a:c.instructions+=7;goto B56866a;
case 0x56866c:c.instructions+=6;goto B56866c;
case 0x56866d:c.instructions+=5;goto B56866d;
case 0x56866e:c.instructions+=4;goto B56866e;
case 0x568675:c.instructions+=3;goto B568675;
case 0x568677:c.instructions+=2;goto B568677;
case 0x568678:c.instructions+=1;goto B568678;
case 0x568680:goto L568680;
case 0x568684:c.instructions+=2;goto B568684;
case 0x568687:c.instructions+=1;goto B568687;
case 0x568689:goto L568689;
case 0x56868c:c.instructions+=1;goto B56868c;
case 0x56868e:goto L56868e;
case 0x568690:goto L568690;
case 0x5686a0:goto L5686a0;
case 0x5686a1:c.instructions+=2;goto B5686a1;
case 0x5686a3:c.instructions+=1;goto B5686a3;
case 0x5686a8:goto L5686a8;
case 0x5686ad:c.instructions+=1;goto B5686ad;
case 0x5686af:goto L5686af;
case 0x5686b0:c.instructions+=1;goto B5686b0;
case 0x5686b5:goto L5686b5;
case 0x5686b8:goto L5686b8;
case 0x5686ba:c.instructions+=2;goto B5686ba;
case 0x5686bb:c.instructions+=1;goto B5686bb;
case 0x5686c0:goto L5686c0;
case 0x5686c2:c.instructions+=12;goto B5686c2;
case 0x5686c7:c.instructions+=11;goto B5686c7;
case 0x5686cd:c.instructions+=10;goto B5686cd;
case 0x5686ce:c.instructions+=9;goto B5686ce;
case 0x5686d5:c.instructions+=8;goto B5686d5;
case 0x5686d6:c.instructions+=7;goto B5686d6;
case 0x5686d7:c.instructions+=6;goto B5686d7;
case 0x5686d9:c.instructions+=5;goto B5686d9;
case 0x5686dd:c.instructions+=4;goto B5686dd;
case 0x5686e3:c.instructions+=3;goto B5686e3;
case 0x5686e6:c.instructions+=2;goto B5686e6;
case 0x5686ee:c.instructions+=1;goto B5686ee;
case 0x5686f3:goto L5686f3;
case 0x5686f7:c.instructions+=5;goto B5686f7;
case 0x5686fd:c.instructions+=4;goto B5686fd;
case 0x5686fe:c.instructions+=3;goto B5686fe;
case 0x568705:c.instructions+=2;goto B568705;
case 0x568708:c.instructions+=1;goto B568708;
case 0x568710:goto L568710;
case 0x568716:c.instructions+=7;goto B568716;
case 0x568719:c.instructions+=6;goto B568719;
case 0x56871b:c.instructions+=5;goto B56871b;
case 0x56871e:c.instructions+=4;goto B56871e;
case 0x568724:c.instructions+=3;goto B568724;
case 0x568727:c.instructions+=2;goto B568727;
case 0x56872d:c.instructions+=1;goto B56872d;
case 0x568740:goto L568740;
case 0x568741:c.instructions+=7;goto B568741;
case 0x568743:c.instructions+=6;goto B568743;
case 0x568744:c.instructions+=5;goto B568744;
case 0x568745:c.instructions+=4;goto B568745;
case 0x568748:c.instructions+=3;goto B568748;
case 0x56874e:c.instructions+=2;goto B56874e;
case 0x568750:c.instructions+=1;goto B568750;
case 0x568752:goto L568752;
case 0x568755:c.instructions+=3;goto B568755;
case 0x568758:c.instructions+=2;goto B568758;
case 0x56875a:c.instructions+=1;goto B56875a;
case 0x56875c:goto L56875c;
case 0x568763:c.instructions+=2;goto B568763;
case 0x568766:c.instructions+=1;goto B568766;
case 0x56876c:goto L56876c;
case 0x568772:c.instructions+=2;goto B568772;
case 0x568773:c.instructions+=1;goto B568773;
case 0x568778:goto L568778;
case 0x568779:c.instructions+=3;goto B568779;
case 0x56877a:c.instructions+=2;goto B56877a;
case 0x56877b:c.instructions+=1;goto B56877b;
case 0x56877e:goto L56877e;
case 0x568784:c.instructions+=2;goto B568784;
case 0x568786:c.instructions+=1;goto B568786;
case 0x568788:goto L568788;
case 0x56878e:c.instructions+=1;goto B56878e;
case 0x568794:goto L568794;
case 0x56879a:c.instructions+=1;goto B56879a;
case 0x5687a0:goto L5687a0;
case 0x5687a2:c.instructions+=3;goto B5687a2;
case 0x5687a3:c.instructions+=2;goto B5687a3;
case 0x5687a6:c.instructions+=1;goto B5687a6;
case 0x5687a8:goto L5687a8;
case 0x5687ab:c.instructions+=7;goto B5687ab;
case 0x5687ae:c.instructions+=6;goto B5687ae;
case 0x5687af:c.instructions+=5;goto B5687af;
case 0x5687b0:c.instructions+=4;goto B5687b0;
case 0x5687b1:c.instructions+=3;goto B5687b1;
case 0x5687b2:c.instructions+=2;goto B5687b2;
case 0x5687b4:c.instructions+=1;goto B5687b4;
case 0x5687b9:goto L5687b9;
case 0x5687bf:c.instructions+=1;goto B5687bf;
case 0x5687c5:goto L5687c5;
case 0x5687cb:goto L5687cb;
case 0x5687d1:c.instructions+=1;goto B5687d1;
case 0x5687d7:goto L5687d7;
case 0x5687dd:goto L5687dd;
case 0x5687e3:c.instructions+=1;goto B5687e3;
case 0x5687e9:goto L5687e9;
case 0x5687eb:goto L5687eb;
case 0x5687f1:c.instructions+=1;goto B5687f1;
case 0x5687f3:goto L5687f3;
case 0x5687f9:c.instructions+=1;goto B5687f9;
case 0x5687ff:goto L5687ff;
case 0x568801:c.instructions+=1;goto B568801;
case 0x568806:goto L568806;
case 0x56880c:c.instructions+=2;goto B56880c;
case 0x56880e:c.instructions+=1;goto B56880e;
case 0x568814:goto L568814;
case 0x568815:c.instructions+=5;goto B568815;
case 0x568816:c.instructions+=4;goto B568816;
case 0x56881a:c.instructions+=3;goto B56881a;
case 0x56881b:c.instructions+=2;goto B56881b;
case 0x56881c:c.instructions+=1;goto B56881c;
case 0x56881f:goto L56881f;
case 0x568822:c.instructions+=4;goto B568822;
case 0x568827:c.instructions+=3;goto B568827;
case 0x56882c:c.instructions+=2;goto B56882c;
case 0x56882d:c.instructions+=1;goto B56882d;
case 0x568832:goto L568832;
case 0x568835:c.instructions+=2;goto B568835;
case 0x568837:c.instructions+=1;goto B568837;
case 0x56883d:goto L56883d;
case 0x568840:c.instructions+=3;goto B568840;
case 0x568843:c.instructions+=2;goto B568843;
case 0x568845:c.instructions+=1;goto B568845;
case 0x56884b:goto L56884b;
case 0x568852:c.instructions+=1;goto B568852;
case 0x568854:goto L568854;
case 0x568859:c.instructions+=1;goto B568859;
case 0x56885e:goto L56885e;
case 0x568860:c.instructions+=1;goto B568860;
case 0x568862:goto L568862;
case 0x568865:c.instructions+=4;goto B568865;
case 0x56886a:c.instructions+=3;goto B56886a;
case 0x56886f:c.instructions+=2;goto B56886f;
case 0x568870:c.instructions+=1;goto B568870;
case 0x568875:goto L568875;
case 0x568878:c.instructions+=3;goto B568878;
case 0x56887a:c.instructions+=2;goto B56887a;
case 0x568884:c.instructions+=1;goto B568884;
case 0x568889:goto L568889;
case 0x56888a:c.instructions+=4;goto B56888a;
case 0x56888b:c.instructions+=3;goto B56888b;
case 0x56888c:c.instructions+=2;goto B56888c;
case 0x56888d:c.instructions+=1;goto B56888d;
case 0x568890:goto L568890;
case 0x568893:c.instructions+=3;goto B568893;
case 0x568896:c.instructions+=2;goto B568896;
case 0x568899:c.instructions+=1;goto B568899;
case 0x56889b:goto L56889b;
case 0x56889d:c.instructions+=6;goto B56889d;
case 0x5688a2:c.instructions+=5;goto B5688a2;
case 0x5688ac:c.instructions+=4;goto B5688ac;
case 0x5688af:c.instructions+=3;goto B5688af;
case 0x5688b4:c.instructions+=2;goto B5688b4;
case 0x5688b5:c.instructions+=1;goto B5688b5;
case 0x5688ba:goto L5688ba;
case 0x5688bd:c.instructions+=5;goto B5688bd;
case 0x5688be:c.instructions+=4;goto B5688be;
case 0x5688bf:c.instructions+=3;goto B5688bf;
case 0x5688c0:c.instructions+=2;goto B5688c0;
case 0x5688c1:c.instructions+=1;goto B5688c1;
case 0x5688c4:goto L5688c4;
case 0x5688c7:c.instructions+=2;goto B5688c7;
case 0x5688cd:c.instructions+=1;goto B5688cd;
case 0x5688cf:goto L5688cf;
case 0x5688d1:c.instructions+=1;goto B5688d1;
case 0x5688d3:goto L5688d3;
case 0x5688d5:c.instructions+=1;goto B5688d5;
case 0x5688d7:goto L5688d7;
case 0x5688da:c.instructions+=3;goto B5688da;
case 0x5688db:c.instructions+=2;goto B5688db;
case 0x5688e0:c.instructions+=1;goto B5688e0;
case 0x5688e5:goto L5688e5;
case 0x5688e7:c.instructions+=1;goto B5688e7;
case 0x5688e9:goto L5688e9;
case 0x5688eb:goto L5688eb;
case 0x5688ec:c.instructions+=2;goto B5688ec;
case 0x5688ef:c.instructions+=1;goto B5688ef;
case 0x5688f1:goto L5688f1;
case 0x5688f3:c.instructions+=1;goto B5688f3;
case 0x5688f5:goto L5688f5;
case 0x5688f8:c.instructions+=4;goto B5688f8;
case 0x5688fd:c.instructions+=3;goto B5688fd;
case 0x568902:c.instructions+=2;goto B568902;
case 0x568903:c.instructions+=1;goto B568903;
case 0x568908:goto L568908;
case 0x56890b:c.instructions+=3;goto B56890b;
case 0x56890d:c.instructions+=2;goto B56890d;
case 0x568917:c.instructions+=1;goto B568917;
case 0x56891c:goto L56891c;
case 0x56891f:c.instructions+=3;goto B56891f;
case 0x568920:c.instructions+=2;goto B568920;
case 0x568922:c.instructions+=1;goto B568922;
case 0x568927:goto L568927;
case 0x56892a:goto L56892a;
case 0x56892c:c.instructions+=1;goto B56892c;
case 0x568931:goto L568931;
case 0x568932:c.instructions+=4;goto B568932;
case 0x568933:c.instructions+=3;goto B568933;
case 0x568934:c.instructions+=2;goto B568934;
case 0x568935:c.instructions+=1;goto B568935;
case 0x568938:goto L568938;
case 0x56893e:goto L56893e;
case 0x568940:c.instructions+=1;goto B568940;
case 0x568942:goto L568942;
case 0x568948:c.instructions+=2;goto B568948;
case 0x56894a:c.instructions+=1;goto B56894a;
case 0x568950:goto L568950;
case 0x568951:c.instructions+=2;goto B568951;
case 0x568956:c.instructions+=1;goto B568956;
case 0x56895b:goto L56895b;
case 0x56895e:c.instructions+=5;goto B56895e;
case 0x56895f:c.instructions+=4;goto B56895f;
case 0x568960:c.instructions+=3;goto B568960;
case 0x568961:c.instructions+=2;goto B568961;
case 0x568962:c.instructions+=1;goto B568962;
case 0x568965:goto L568965;
case 0x56896b:c.instructions+=1;goto B56896b;
case 0x568971:goto L568971;
case 0x568976:c.instructions+=2;goto B568976;
case 0x568978:c.instructions+=1;goto B568978;
case 0x56897e:goto L56897e;
case 0x568980:c.instructions+=2;goto B568980;
case 0x568985:c.instructions+=1;goto B568985;
case 0x56898a:goto L56898a;
case 0x56898c:c.instructions+=2;goto B56898c;
case 0x568991:c.instructions+=1;goto B568991;
case 0x568996:goto L568996;
case 0x568997:c.instructions+=4;goto B568997;
case 0x568998:c.instructions+=3;goto B568998;
case 0x568999:c.instructions+=2;goto B568999;
case 0x56899a:c.instructions+=1;goto B56899a;
case 0x56899d:goto L56899d;
case 0x5689a7:c.instructions+=4;goto B5689a7;
case 0x5689ad:c.instructions+=3;goto B5689ad;
case 0x5689ae:c.instructions+=2;goto B5689ae;
case 0x5689b3:c.instructions+=1;goto B5689b3;
case 0x5689b8:goto L5689b8;
case 0x5689bb:c.instructions+=3;goto B5689bb;
case 0x5689bc:c.instructions+=2;goto B5689bc;
case 0x5689c1:c.instructions+=1;goto B5689c1;
case 0x5689c6:goto L5689c6;
case 0x5689c9:c.instructions+=5;goto B5689c9;
case 0x5689ca:c.instructions+=4;goto B5689ca;
case 0x5689cb:c.instructions+=3;goto B5689cb;
case 0x5689cc:c.instructions+=2;goto B5689cc;
case 0x5689cd:c.instructions+=1;goto B5689cd;
case 0x5689d0:goto L5689d0;
case 0x5689d6:c.instructions+=1;goto B5689d6;
case 0x5689dc:goto L5689dc;
case 0x5689e2:c.instructions+=1;goto B5689e2;
case 0x5689e8:goto L5689e8;
case 0x5689ee:c.instructions+=1;goto B5689ee;
case 0x5689f4:goto L5689f4;
case 0x5689f7:c.instructions+=3;goto B5689f7;
case 0x5689fc:c.instructions+=2;goto B5689fc;
case 0x5689fd:c.instructions+=1;goto B5689fd;
case 0x568a02:goto L568a02;
case 0x568a04:c.instructions+=7;goto B568a04;
case 0x568a0b:c.instructions+=6;goto B568a0b;
case 0x568a11:c.instructions+=5;goto B568a11;
case 0x568a17:c.instructions+=4;goto B568a17;
case 0x568a1d:c.instructions+=3;goto B568a1d;
case 0x568a20:c.instructions+=2;goto B568a20;
case 0x568a22:c.instructions+=1;goto B568a22;
case 0x568a24:goto L568a24;
case 0x568a27:c.instructions+=1;goto B568a27;
case 0x568a2d:goto L568a2d;
case 0x568a2f:c.instructions+=3;goto B568a2f;
case 0x568a30:c.instructions+=2;goto B568a30;
case 0x568a34:c.instructions+=1;goto B568a34;
case 0x568a39:goto L568a39;
case 0x568a3e:c.instructions+=3;goto B568a3e;
case 0x568a43:c.instructions+=2;goto B568a43;
case 0x568a44:c.instructions+=1;goto B568a44;
case 0x568a49:goto L568a49;
case 0x568a4f:c.instructions+=3;goto B568a4f;
case 0x568a54:c.instructions+=2;goto B568a54;
case 0x568a55:c.instructions+=1;goto B568a55;
case 0x568a5a:goto L568a5a;
case 0x568a5d:c.instructions+=5;goto B568a5d;
case 0x568a5f:c.instructions+=4;goto B568a5f;
case 0x568a64:c.instructions+=3;goto B568a64;
case 0x568a69:c.instructions+=2;goto B568a69;
case 0x568a6a:c.instructions+=1;goto B568a6a;
case 0x568a6f:goto L568a6f;
case 0x568a72:c.instructions+=6;goto B568a72;
case 0x568a75:c.instructions+=5;goto B568a75;
case 0x568a78:c.instructions+=4;goto B568a78;
case 0x568a79:c.instructions+=3;goto B568a79;
case 0x568a7a:c.instructions+=2;goto B568a7a;
case 0x568a80:c.instructions+=1;goto B568a80;
case 0x568a85:goto L568a85;
case 0x568a86:c.instructions+=4;goto B568a86;
case 0x568a87:c.instructions+=3;goto B568a87;
case 0x568a88:c.instructions+=2;goto B568a88;
case 0x568a89:c.instructions+=1;goto B568a89;
case 0x568a8c:goto L568a8c;
case 0x568a92:c.instructions+=4;goto B568a92;
case 0x568a93:c.instructions+=3;goto B568a93;
case 0x568a98:c.instructions+=2;goto B568a98;
case 0x568a9f:c.instructions+=1;goto B568a9f;
case 0x568aa4:goto L568aa4;
case 0x568aa7:c.instructions+=3;goto B568aa7;
case 0x568aa8:c.instructions+=2;goto B568aa8;
case 0x568aad:c.instructions+=1;goto B568aad;
case 0x568ab2:goto L568ab2;
case 0x568ab5:c.instructions+=5;goto B568ab5;
case 0x568ab6:c.instructions+=4;goto B568ab6;
case 0x568ab7:c.instructions+=3;goto B568ab7;
case 0x568ab8:c.instructions+=2;goto B568ab8;
case 0x568ab9:c.instructions+=1;goto B568ab9;
case 0x568abc:goto L568abc;
case 0x568ac2:c.instructions+=6;goto B568ac2;
case 0x568ac5:c.instructions+=5;goto B568ac5;
case 0x568ac6:c.instructions+=4;goto B568ac6;
case 0x568acb:c.instructions+=3;goto B568acb;
case 0x568ad0:c.instructions+=2;goto B568ad0;
case 0x568ad1:c.instructions+=1;goto B568ad1;
case 0x568ad6:goto L568ad6;
case 0x568ad9:c.instructions+=5;goto B568ad9;
case 0x568ada:c.instructions+=4;goto B568ada;
case 0x568adb:c.instructions+=3;goto B568adb;
case 0x568adc:c.instructions+=2;goto B568adc;
case 0x568add:c.instructions+=1;goto B568add;
case 0x568ae0:goto L568ae0;
case 0x568ae6:c.instructions+=3;goto B568ae6;
case 0x568ae8:c.instructions+=2;goto B568ae8;
case 0x568aed:c.instructions+=1;goto B568aed;
case 0x568aef:goto L568aef;
case 0x568af2:c.instructions+=1;goto B568af2;
case 0x568af4:goto L568af4;
case 0x568af6:c.instructions+=1;goto B568af6;
case 0x568afb:goto L568afb;
case 0x568afc:c.instructions+=4;goto B568afc;
case 0x568afd:c.instructions+=3;goto B568afd;
case 0x568afe:c.instructions+=2;goto B568afe;
case 0x568aff:c.instructions+=1;goto B568aff;
case 0x568b02:goto L568b02;
case 0x568b09:c.instructions+=1;goto B568b09;
case 0x568b0b:goto L568b0b;
case 0x568b11:c.instructions+=2;goto B568b11;
case 0x568b13:c.instructions+=1;goto B568b13;
case 0x568b15:goto L568b15;
case 0x568b17:c.instructions+=1;goto B568b17;
case 0x568b19:goto L568b19;
case 0x568b1c:c.instructions+=10;goto B568b1c;
case 0x568b21:c.instructions+=9;goto B568b21;
case 0x568b23:c.instructions+=8;goto B568b23;
case 0x568b28:c.instructions+=7;goto B568b28;
case 0x568b2d:c.instructions+=6;goto B568b2d;
case 0x568b32:c.instructions+=5;goto B568b32;
case 0x568b37:c.instructions+=4;goto B568b37;
case 0x568b3c:c.instructions+=3;goto B568b3c;
case 0x568b41:c.instructions+=2;goto B568b41;
case 0x568b42:c.instructions+=1;goto B568b42;
case 0x568b47:goto L568b47;
case 0x568b4a:c.instructions+=3;goto B568b4a;
case 0x568b4c:c.instructions+=2;goto B568b4c;
case 0x568b56:c.instructions+=1;goto B568b56;
case 0x568b5b:goto L568b5b;
case 0x568b5c:c.instructions+=4;goto B568b5c;
case 0x568b5d:c.instructions+=3;goto B568b5d;
case 0x568b5e:c.instructions+=2;goto B568b5e;
case 0x568b5f:c.instructions+=1;goto B568b5f;
case 0x568b62:goto L568b62;
case 0x568b68:c.instructions+=3;goto B568b68;
case 0x568b6a:c.instructions+=2;goto B568b6a;
case 0x568b71:c.instructions+=1;goto B568b71;
case 0x568b73:goto L568b73;
case 0x568b76:c.instructions+=4;goto B568b76;
case 0x568b78:c.instructions+=3;goto B568b78;
case 0x568b79:c.instructions+=2;goto B568b79;
case 0x568b7b:c.instructions+=1;goto B568b7b;
case 0x568b80:goto L568b80;
case 0x568b86:c.instructions+=3;goto B568b86;
case 0x568b87:c.instructions+=2;goto B568b87;
case 0x568b8c:c.instructions+=1;goto B568b8c;
case 0x568b91:goto L568b91;
case 0x568b94:c.instructions+=5;goto B568b94;
case 0x568b96:c.instructions+=4;goto B568b96;
case 0x568b9b:c.instructions+=3;goto B568b9b;
case 0x568ba0:c.instructions+=2;goto B568ba0;
case 0x568ba1:c.instructions+=1;goto B568ba1;
case 0x568ba6:goto L568ba6;
case 0x568ba9:c.instructions+=5;goto B568ba9;
case 0x568baa:c.instructions+=4;goto B568baa;
case 0x568bab:c.instructions+=3;goto B568bab;
case 0x568bac:c.instructions+=2;goto B568bac;
case 0x568bad:c.instructions+=1;goto B568bad;
case 0x568bb0:goto L568bb0;
case 0x568bb6:c.instructions+=1;goto B568bb6;
case 0x568bbc:goto L568bbc;
case 0x568bbe:goto L568bbe;
case 0x568bc4:c.instructions+=1;goto B568bc4;
case 0x568bc6:goto L568bc6;
case 0x568bcc:c.instructions+=1;goto B568bcc;
case 0x568bd2:goto L568bd2;
case 0x568bd8:c.instructions+=1;goto B568bd8;
case 0x568bde:goto L568bde;
case 0x568be3:c.instructions+=1;goto B568be3;
case 0x568be8:goto L568be8;
case 0x568bea:c.instructions+=3;goto B568bea;
case 0x568bed:c.instructions+=2;goto B568bed;
case 0x568bef:c.instructions+=1;goto B568bef;
case 0x568bf5:goto L568bf5;
case 0x568bfb:c.instructions+=2;goto B568bfb;
case 0x568bfd:c.instructions+=1;goto B568bfd;
case 0x568c03:goto L568c03;
case 0x568c09:c.instructions+=2;goto B568c09;
case 0x568c0c:c.instructions+=1;goto B568c0c;
case 0x568c11:goto L568c11;
case 0x568c12:c.instructions+=5;goto B568c12;
case 0x568c13:c.instructions+=4;goto B568c13;
case 0x568c1a:c.instructions+=3;goto B568c1a;
case 0x568c1b:c.instructions+=2;goto B568c1b;
case 0x568c1c:c.instructions+=1;goto B568c1c;
case 0x568c1f:goto L568c1f;
case 0x568c20:c.instructions+=5;goto B568c20;
case 0x568c21:c.instructions+=4;goto B568c21;
case 0x568c25:c.instructions+=3;goto B568c25;
case 0x568c26:c.instructions+=2;goto B568c26;
case 0x568c27:c.instructions+=1;goto B568c27;
case 0x568c2a:goto L568c2a;
case 0x568c2f:c.instructions+=2;goto B568c2f;
case 0x568c34:c.instructions+=1;goto B568c34;
case 0x568c39:goto L568c39;
case 0x568c3c:c.instructions+=5;goto B568c3c;
case 0x568c3d:c.instructions+=4;goto B568c3d;
case 0x568c3e:c.instructions+=3;goto B568c3e;
case 0x568c3f:c.instructions+=2;goto B568c3f;
case 0x568c40:c.instructions+=1;goto B568c40;
case 0x568c43:goto L568c43;
case 0x568c49:c.instructions+=1;goto B568c49;
case 0x568c4b:goto L568c4b;
case 0x568c51:c.instructions+=1;goto B568c51;
case 0x568c53:goto L568c53;
case 0x568c59:c.instructions+=1;goto B568c59;
case 0x568c5f:goto L568c5f;
case 0x568c60:c.instructions+=5;goto B568c60;
case 0x568c61:c.instructions+=4;goto B568c61;
case 0x568c68:c.instructions+=3;goto B568c68;
case 0x568c69:c.instructions+=2;goto B568c69;
case 0x568c6a:c.instructions+=1;goto B568c6a;
case 0x568c6d:goto L568c6d;
case 0x568c6e:c.instructions+=1;goto B568c6e;
case 0x568c73:goto L568c73;
case 0x568c76:c.instructions+=8;goto B568c76;
case 0x568c77:c.instructions+=7;goto B568c77;
case 0x568c78:c.instructions+=6;goto B568c78;
case 0x568c7d:c.instructions+=5;goto B568c7d;
case 0x568c84:c.instructions+=4;goto B568c84;
case 0x568c8b:c.instructions+=3;goto B568c8b;
case 0x568c8c:c.instructions+=2;goto B568c8c;
case 0x568c8d:c.instructions+=1;goto B568c8d;
case 0x568c90:goto L568c90;
case 0x568c95:c.instructions+=2;goto B568c95;
case 0x568c97:c.instructions+=1;goto B568c97;
case 0x568c9d:goto L568c9d;
case 0x568ca0:c.instructions+=3;goto B568ca0;
case 0x568ca4:c.instructions+=2;goto B568ca4;
case 0x568cab:c.instructions+=1;goto B568cab;
case 0x568cad:goto L568cad;
case 0x568cb7:c.instructions+=1;goto B568cb7;
case 0x568cb9:goto L568cb9;
case 0x568cbe:c.instructions+=2;goto B568cbe;
case 0x568cc0:c.instructions+=1;goto B568cc0;
case 0x568cc2:goto L568cc2;
case 0x568cc7:c.instructions+=3;goto B568cc7;
case 0x568cc9:c.instructions+=2;goto B568cc9;
case 0x568cd0:c.instructions+=1;goto B568cd0;
case 0x568cd2:goto L568cd2;
case 0x568cd7:c.instructions+=2;goto B568cd7;
case 0x568cd9:c.instructions+=1;goto B568cd9;
case 0x568cdb:goto L568cdb;
case 0x568cde:c.instructions+=2;goto B568cde;
case 0x568cdf:c.instructions+=1;goto B568cdf;
case 0x568ce4:goto L568ce4;
case 0x568ce7:c.instructions+=5;goto B568ce7;
case 0x568ce8:c.instructions+=4;goto B568ce8;
case 0x568ce9:c.instructions+=3;goto B568ce9;
case 0x568cea:c.instructions+=2;goto B568cea;
case 0x568ceb:c.instructions+=1;goto B568ceb;
case 0x568cee:goto L568cee;
case 0x568cf1:c.instructions+=3;goto B568cf1;
case 0x568cf3:c.instructions+=2;goto B568cf3;
case 0x568cf4:c.instructions+=1;goto B568cf4;
case 0x568cf9:goto L568cf9;
case 0x568cfb:c.instructions+=2;goto B568cfb;
case 0x568cfd:c.instructions+=1;goto B568cfd;
case 0x568d02:goto L568d02;
case 0x568d05:c.instructions+=1;goto B568d05;
case 0x568d0a:goto L568d0a;
case 0x568d0c:c.instructions+=1;goto B568d0c;
case 0x568d11:goto L568d11;
case 0x568d12:c.instructions+=4;goto B568d12;
case 0x568d13:c.instructions+=3;goto B568d13;
case 0x568d14:c.instructions+=2;goto B568d14;
case 0x568d15:c.instructions+=1;goto B568d15;
case 0x568d18:goto L568d18;
case 0x568d1d:goto L568d1d;
case 0x568d1f:c.instructions+=1;goto B568d1f;
case 0x568d24:goto L568d24;
case 0x568d25:goto L568d25;
case 0x568d26:c.instructions+=3;goto B568d26;
case 0x568d27:c.instructions+=2;goto B568d27;
case 0x568d28:c.instructions+=1;goto B568d28;
case 0x568d30:goto L568d30;
case 0x568d31:c.instructions+=8;goto B568d31;
case 0x568d33:c.instructions+=7;goto B568d33;
case 0x568d36:c.instructions+=6;goto B568d36;
case 0x568d3b:c.instructions+=5;goto B568d3b;
case 0x568d3c:c.instructions+=4;goto B568d3c;
case 0x568d3d:c.instructions+=3;goto B568d3d;
case 0x568d3e:c.instructions+=2;goto B568d3e;
case 0x568d40:c.instructions+=1;goto B568d40;
case 0x568d46:goto L568d46;
case 0x568d4c:goto L568d4c;
case 0x568d51:c.instructions+=1;goto B568d51;
case 0x568d57:goto L568d57;
case 0x568d59:goto L568d59;
case 0x568d5e:c.instructions+=1;goto B568d5e;
case 0x568d64:goto L568d64;
case 0x568d6a:goto L568d6a;
case 0x568d6f:c.instructions+=1;goto B568d6f;
case 0x568d71:goto L568d71;
case 0x568d76:c.instructions+=1;goto B568d76;
case 0x568d7c:goto L568d7c;
case 0x568d7f:c.instructions+=3;goto B568d7f;
case 0x568d82:c.instructions+=2;goto B568d82;
case 0x568d84:c.instructions+=1;goto B568d84;
case 0x568d8a:goto L568d8a;
case 0x568d90:c.instructions+=5;goto B568d90;
case 0x568d93:c.instructions+=4;goto B568d93;
case 0x568d95:c.instructions+=3;goto B568d95;
case 0x568d98:c.instructions+=2;goto B568d98;
case 0x568d9b:c.instructions+=1;goto B568d9b;
case 0x568da1:goto L568da1;
case 0x568da7:c.instructions+=1;goto B568da7;
case 0x568dad:goto L568dad;
case 0x568dae:c.instructions+=3;goto B568dae;
case 0x568daf:c.instructions+=2;goto B568daf;
case 0x568db4:c.instructions+=1;goto B568db4;
case 0x568db9:goto L568db9;
case 0x568dbb:c.instructions+=1;goto B568dbb;
case 0x568dc1:goto L568dc1;
case 0x568dc4:c.instructions+=4;goto B568dc4;
case 0x568dc9:c.instructions+=3;goto B568dc9;
case 0x568dce:c.instructions+=2;goto B568dce;
case 0x568dcf:c.instructions+=1;goto B568dcf;
case 0x568dd4:goto L568dd4;
case 0x568dda:c.instructions+=5;goto B568dda;
case 0x568ddd:c.instructions+=4;goto B568ddd;
case 0x568ddf:c.instructions+=3;goto B568ddf;
case 0x568de2:c.instructions+=2;goto B568de2;
case 0x568de5:c.instructions+=1;goto B568de5;
case 0x568deb:goto L568deb;
case 0x568df1:c.instructions+=1;goto B568df1;
case 0x568df7:goto L568df7;
case 0x568df8:c.instructions+=3;goto B568df8;
case 0x568df9:c.instructions+=2;goto B568df9;
case 0x568dfe:c.instructions+=1;goto B568dfe;
case 0x568e03:goto L568e03;
case 0x568e04:c.instructions+=3;goto B568e04;
case 0x568e05:c.instructions+=2;goto B568e05;
case 0x568e0a:c.instructions+=1;goto B568e0a;
case 0x568e0f:goto L568e0f;
case 0x568e10:c.instructions+=2;goto B568e10;
case 0x568e15:c.instructions+=1;goto B568e15;
case 0x568e1a:goto L568e1a;
case 0x568e1c:c.instructions+=1;goto B568e1c;
case 0x568e21:goto L568e21;
case 0x568e23:c.instructions+=1;goto B568e23;
case 0x568e28:goto L568e28;
case 0x568e2e:c.instructions+=3;goto B568e2e;
case 0x568e2f:c.instructions+=2;goto B568e2f;
case 0x568e34:c.instructions+=1;goto B568e34;
case 0x568e39:goto L568e39;
case 0x568e3c:c.instructions+=7;goto B568e3c;
case 0x568e3d:c.instructions+=6;goto B568e3d;
case 0x568e44:c.instructions+=5;goto B568e44;
case 0x568e4b:c.instructions+=4;goto B568e4b;
case 0x568e4c:c.instructions+=3;goto B568e4c;
case 0x568e4d:c.instructions+=2;goto B568e4d;
case 0x568e4e:c.instructions+=1;goto B568e4e;
case 0x568e51:goto L568e51;
case 0x568e56:c.instructions+=1;goto B568e56;
case 0x568e5c:goto L568e5c;
case 0x568e5d:c.instructions+=4;goto B568e5d;
case 0x568e5e:c.instructions+=3;goto B568e5e;
case 0x568e5f:c.instructions+=2;goto B568e5f;
case 0x568e60:c.instructions+=1;goto B568e60;
case 0x568e63:goto L568e63;
case 0x568e6a:c.instructions+=1;goto B568e6a;
case 0x568e70:goto L568e70;
case 0x568e71:c.instructions+=3;goto B568e71;
case 0x568e72:c.instructions+=2;goto B568e72;
case 0x568e77:c.instructions+=1;goto B568e77;
case 0x568e7c:goto L568e7c;
case 0x568e7e:c.instructions+=1;goto B568e7e;
case 0x568e84:goto L568e84;
case 0x568e88:c.instructions+=1;goto B568e88;
case 0x568e8e:goto L568e8e;
case 0x568e93:c.instructions+=5;goto B568e93;
case 0x568e94:c.instructions+=4;goto B568e94;
case 0x568e95:c.instructions+=3;goto B568e95;
case 0x568e9a:c.instructions+=2;goto B568e9a;
case 0x568e9d:c.instructions+=1;goto B568e9d;
case 0x568ea2:goto L568ea2;
case 0x568ea5:c.instructions+=1;goto B568ea5;
case 0x568ea7:goto L568ea7;
case 0x568eaa:c.instructions+=3;goto B568eaa;
case 0x568eaf:c.instructions+=2;goto B568eaf;
case 0x568eb4:c.instructions+=1;goto B568eb4;
case 0x568eb5:goto L568eb5;
case 0x568eba:goto L568eba;
case 0x568ebd:c.instructions+=3;goto B568ebd;
case 0x568ebf:c.instructions+=2;goto B568ebf;
case 0x568ec9:c.instructions+=1;goto B568ec9;
case 0x568ece:goto L568ece;
case 0x568ecf:c.instructions+=4;goto B568ecf;
case 0x568ed0:c.instructions+=3;goto B568ed0;
case 0x568ed1:c.instructions+=2;goto B568ed1;
case 0x568ed2:c.instructions+=1;goto B568ed2;
case 0x568ed5:goto L568ed5;
case 0x568ed8:c.instructions+=2;goto B568ed8;
case 0x568edd:c.instructions+=1;goto B568edd;
case 0x568edf:goto L568edf;
case 0x568ee0:c.instructions+=2;goto B568ee0;
case 0x568ee5:c.instructions+=1;goto B568ee5;
case 0x568eea:goto L568eea;
case 0x568eec:c.instructions+=1;goto B568eec;
case 0x568eee:goto L568eee;
case 0x568ef3:c.instructions+=1;goto B568ef3;
case 0x568ef5:goto L568ef5;
case 0x568ef8:c.instructions+=5;goto B568ef8;
case 0x568efa:c.instructions+=4;goto B568efa;
case 0x568efc:c.instructions+=3;goto B568efc;
case 0x568efe:c.instructions+=2;goto B568efe;
case 0x568f03:c.instructions+=1;goto B568f03;
case 0x568f08:goto L568f08;
case 0x568f0b:c.instructions+=10;goto B568f0b;
case 0x568f0c:c.instructions+=9;goto B568f0c;
case 0x568f0e:c.instructions+=8;goto B568f0e;
case 0x568f13:c.instructions+=7;goto B568f13;
case 0x568f18:c.instructions+=6;goto B568f18;
case 0x568f1d:c.instructions+=5;goto B568f1d;
case 0x568f22:c.instructions+=4;goto B568f22;
case 0x568f27:c.instructions+=3;goto B568f27;
case 0x568f2c:c.instructions+=2;goto B568f2c;
case 0x568f2d:c.instructions+=1;goto B568f2d;
case 0x568f2f:goto L568f2f;
case 0x568f32:c.instructions+=2;goto B568f32;
case 0x568f37:c.instructions+=1;goto B568f37;
case 0x568f39:goto L568f39;
case 0x568f3a:c.instructions+=2;goto B568f3a;
case 0x568f3f:c.instructions+=1;goto B568f3f;
case 0x568f44:goto L568f44;
case 0x568f46:c.instructions+=1;goto B568f46;
case 0x568f48:goto L568f48;
case 0x568f4d:c.instructions+=1;goto B568f4d;
case 0x568f4f:goto L568f4f;
case 0x568f51:c.instructions+=1;goto B568f51;
case 0x568f53:goto L568f53;
case 0x568f57:c.instructions+=2;goto B568f57;
case 0x568f5c:c.instructions+=1;goto B568f5c;
case 0x568f5e:goto L568f5e;
case 0x568f63:goto L568f63;
case 0x568f64:c.instructions+=9;goto B568f64;
case 0x568f67:c.instructions+=8;goto B568f67;
case 0x568f69:c.instructions+=7;goto B568f69;
case 0x568f6e:c.instructions+=6;goto B568f6e;
case 0x568f73:c.instructions+=5;goto B568f73;
case 0x568f78:c.instructions+=4;goto B568f78;
case 0x568f7d:c.instructions+=3;goto B568f7d;
case 0x568f82:c.instructions+=2;goto B568f82;
case 0x568f87:c.instructions+=1;goto B568f87;
case 0x568f88:goto L568f88;
case 0x568f8d:goto L568f8d;
case 0x568f90:c.instructions+=3;goto B568f90;
case 0x568f92:c.instructions+=2;goto B568f92;
case 0x568f9c:c.instructions+=1;goto B568f9c;
case 0x568fa1:goto L568fa1;
case 0x568fa2:c.instructions+=4;goto B568fa2;
case 0x568fa3:c.instructions+=3;goto B568fa3;
case 0x568fa4:c.instructions+=2;goto B568fa4;
case 0x568fa5:c.instructions+=1;goto B568fa5;
case 0x568fa8:goto L568fa8;
case 0x568fad:c.instructions+=1;goto B568fad;
case 0x568fb3:goto L568fb3;
case 0x568fb5:goto L568fb5;
case 0x568fba:c.instructions+=1;goto B568fba;
case 0x568fbc:goto L568fbc;
case 0x568fc1:c.instructions+=1;goto B568fc1;
case 0x568fc7:goto L568fc7;
case 0x568fc9:c.instructions+=2;goto B568fc9;
case 0x568fcb:c.instructions+=1;goto B568fcb;
case 0x568fd0:goto L568fd0;
case 0x568fd1:c.instructions+=4;goto B568fd1;
case 0x568fd2:c.instructions+=3;goto B568fd2;
case 0x568fd3:c.instructions+=2;goto B568fd3;
case 0x568fd4:c.instructions+=1;goto B568fd4;
case 0x568fd7:goto L568fd7;
case 0x568fdd:c.instructions+=5;goto B568fdd;
case 0x568fe0:c.instructions+=4;goto B568fe0;
case 0x568fe2:c.instructions+=3;goto B568fe2;
case 0x568fe5:c.instructions+=2;goto B568fe5;
case 0x568fe8:c.instructions+=1;goto B568fe8;
case 0x568fee:goto L568fee;
case 0x568ff3:c.instructions+=1;goto B568ff3;
case 0x568ff9:goto L568ff9;
case 0x568ffa:c.instructions+=2;goto B568ffa;
case 0x568ffb:c.instructions+=1;goto B568ffb;
default:missing_instruction(c.pc);}
B568000:L568000:{c.instructions+=4;NFSU2_TR(0x568000);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B568003:{NFSU2_TR(0x568003);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B568006:{NFSU2_TR(0x568006);
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
B568008:{NFSU2_TR(0x568008);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568292;}}
}
B56800e:L56800e:{c.instructions+=2;NFSU2_TR(0x56800e);
__builtin_memmove((R+4),(R+24),4);
}
B568010:{NFSU2_TR(0x568010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568015ull));
TAIL_STATIC(0x55fb00u,55f);
}
B568015:L568015:{c.instructions+=6;NFSU2_TR(0x568015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568016:{NFSU2_TR(0x568016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568017:{NFSU2_TR(0x568017);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568018:{NFSU2_TR(0x568018);
__builtin_memmove((R+16),(R+20),4);
}
B56801a:{NFSU2_TR(0x56801a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56801b:{NFSU2_TR(0x56801b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56801e:L56801e:{c.instructions+=4;NFSU2_TR(0x56801e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568021:{NFSU2_TR(0x568021);
u8 U[4];
w4(U+0,u32(0x38e39ad7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568026:{NFSU2_TR(0x568026);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568027:{NFSU2_TR(0x568027);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56802cull));
TAIL_STATIC(0x537a60u,537);
}
B56802c:L56802c:{c.instructions+=3;NFSU2_TR(0x56802c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56802d:{NFSU2_TR(0x56802d);
__builtin_memmove((R+28),(R+0),4);
}
B56802f:{NFSU2_TR(0x56802f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568034ull));
TAIL_STATIC(0x52d100u,52d);
}
B568034:L568034:{c.instructions+=3;NFSU2_TR(0x568034);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B568037:{NFSU2_TR(0x568037);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B568039:{NFSU2_TR(0x568039);
if(r1(R+518)){{goto L568059;}}
}
B56803b:L56803b:{c.instructions+=4;NFSU2_TR(0x56803b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56803e:{NFSU2_TR(0x56803e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B568041:{NFSU2_TR(0x568041);
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
B568043:{NFSU2_TR(0x568043);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568292;}}
}
B568049:L568049:{c.instructions+=2;NFSU2_TR(0x568049);
__builtin_memmove((R+4),(R+24),4);
}
B56804b:{NFSU2_TR(0x56804b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568050ull));
TAIL_STATIC(0x559ab0u,559);
}
B568050:L568050:{c.instructions+=6;NFSU2_TR(0x568050);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568051:{NFSU2_TR(0x568051);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568052:{NFSU2_TR(0x568052);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568053:{NFSU2_TR(0x568053);
__builtin_memmove((R+16),(R+20),4);
}
B568055:{NFSU2_TR(0x568055);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568056:{NFSU2_TR(0x568056);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568059:L568059:{c.instructions+=2;NFSU2_TR(0x568059);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56805a:{NFSU2_TR(0x56805a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56805full));
TAIL_STATIC(0x52d100u,52d);
}
B56805f:L56805f:{c.instructions+=3;NFSU2_TR(0x56805f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B568062:{NFSU2_TR(0x568062);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B568064:{NFSU2_TR(0x568064);
if(r1(R+518)){{goto L568084;}}
}
B568066:L568066:{c.instructions+=4;NFSU2_TR(0x568066);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568069:{NFSU2_TR(0x568069);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56806c:{NFSU2_TR(0x56806c);
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
B56806e:{NFSU2_TR(0x56806e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568292;}}
}
B568074:L568074:{c.instructions+=2;NFSU2_TR(0x568074);
__builtin_memmove((R+4),(R+24),4);
}
B568076:{NFSU2_TR(0x568076);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56807bull));
TAIL_STATIC(0x559ab0u,559);
}
B56807b:L56807b:{c.instructions+=6;NFSU2_TR(0x56807b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56807c:{NFSU2_TR(0x56807c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56807d:{NFSU2_TR(0x56807d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56807e:{NFSU2_TR(0x56807e);
__builtin_memmove((R+16),(R+20),4);
}
B568080:{NFSU2_TR(0x568080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568081:{NFSU2_TR(0x568081);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568084:L568084:{c.instructions+=2;NFSU2_TR(0x568084);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56808a:{NFSU2_TR(0x56808a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56808full));
TAIL_STATIC(0x538130u,538);
}
B56808f:L56808f:{c.instructions+=3;NFSU2_TR(0x56808f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568095:{NFSU2_TR(0x568095);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B568098:{NFSU2_TR(0x568098);
if(r1(R+518)){{goto L5680f1;}}
}
B56809a:L56809a:{c.instructions+=2;NFSU2_TR(0x56809a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56809d:{NFSU2_TR(0x56809d);
if(r1(R+518)){{goto L5680f1;}}
}
B56809f:L56809f:{c.instructions+=5;NFSU2_TR(0x56809f);
{u32 ea_=u32(u32(8872940u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5680a5:{NFSU2_TR(0x5680a5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5680ab:{NFSU2_TR(0x5680ab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5680ad:{NFSU2_TR(0x5680ad);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5680b0:{NFSU2_TR(0x5680b0);
if(r1(R+514)){{goto L5680ca;}}
}
B5680b2:L5680b2:{c.instructions+=5;NFSU2_TR(0x5680b2);
w4(R+0,u32(0x1ull));
}
B5680b7:{NFSU2_TR(0x5680b7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5680b9:{NFSU2_TR(0x5680b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5680ba:{NFSU2_TR(0x5680ba);
__builtin_memmove((R+4),(R+24),4);
}
B5680bc:{NFSU2_TR(0x5680bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5680c1ull));
TAIL_STATIC(0x55f740u,55f);
}
B5680c1:L5680c1:{c.instructions+=6;NFSU2_TR(0x5680c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5680c2:{NFSU2_TR(0x5680c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5680c3:{NFSU2_TR(0x5680c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5680c4:{NFSU2_TR(0x5680c4);
__builtin_memmove((R+16),(R+20),4);
}
B5680c6:{NFSU2_TR(0x5680c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5680c7:{NFSU2_TR(0x5680c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5680ca:L5680ca:{c.instructions+=4;NFSU2_TR(0x5680ca);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5680d0:{NFSU2_TR(0x5680d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5680d2:{NFSU2_TR(0x5680d2);
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
B5680d5:{NFSU2_TR(0x5680d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568292;}}
}
B5680db:L5680db:{c.instructions+=4;NFSU2_TR(0x5680db);
w4(R+0,u32(0xffffffffull));
}
B5680e0:{NFSU2_TR(0x5680e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5680e1:{NFSU2_TR(0x5680e1);
__builtin_memmove((R+4),(R+24),4);
}
B5680e3:{NFSU2_TR(0x5680e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5680e8ull));
TAIL_STATIC(0x55f740u,55f);
}
B5680e8:L5680e8:{c.instructions+=6;NFSU2_TR(0x5680e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5680e9:{NFSU2_TR(0x5680e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5680ea:{NFSU2_TR(0x5680ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5680eb:{NFSU2_TR(0x5680eb);
__builtin_memmove((R+16),(R+20),4);
}
B5680ed:{NFSU2_TR(0x5680ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5680ee:{NFSU2_TR(0x5680ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5680f1:L5680f1:{c.instructions+=3;NFSU2_TR(0x5680f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5680f7:{NFSU2_TR(0x5680f7);
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
B5680f9:{NFSU2_TR(0x5680f9);
if(r1(R+518)){{goto L568292;}}
}
B5680ff:L5680ff:{c.instructions+=3;NFSU2_TR(0x5680ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568100:{NFSU2_TR(0x568100);
__builtin_memmove((R+4),(R+24),4);
}
B568102:{NFSU2_TR(0x568102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568107ull));
TAIL_STATIC(0x55f740u,55f);
}
B568107:L568107:{c.instructions+=6;NFSU2_TR(0x568107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568108:{NFSU2_TR(0x568108);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568109:{NFSU2_TR(0x568109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56810a:{NFSU2_TR(0x56810a);
__builtin_memmove((R+16),(R+20),4);
}
B56810c:{NFSU2_TR(0x56810c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56810d:{NFSU2_TR(0x56810d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568110:L568110:{c.instructions+=3;NFSU2_TR(0x568110);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568112:{NFSU2_TR(0x568112);
__builtin_memmove((R+4),(R+24),4);
}
B568114:{NFSU2_TR(0x568114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568119ull));
TAIL_STATIC(0x55f740u,55f);
}
B568119:L568119:{c.instructions+=6;NFSU2_TR(0x568119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56811a:{NFSU2_TR(0x56811a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56811b:{NFSU2_TR(0x56811b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56811c:{NFSU2_TR(0x56811c);
__builtin_memmove((R+16),(R+20),4);
}
B56811e:{NFSU2_TR(0x56811e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56811f:{NFSU2_TR(0x56811f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568122:L568122:{c.instructions+=2;NFSU2_TR(0x568122);
__builtin_memmove((R+4),(R+24),4);
}
B568124:{NFSU2_TR(0x568124);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568129ull));
TAIL_STATIC(0x53a740u,53a);
}
B568129:L568129:{c.instructions+=7;NFSU2_TR(0x568129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56812a:{NFSU2_TR(0x56812a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56812e:{NFSU2_TR(0x56812e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56812f:{NFSU2_TR(0x56812f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568130:{NFSU2_TR(0x568130);
__builtin_memmove((R+16),(R+20),4);
}
B568132:{NFSU2_TR(0x568132);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568133:{NFSU2_TR(0x568133);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568136:L568136:{c.instructions+=2;NFSU2_TR(0x568136);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56813c:{NFSU2_TR(0x56813c);
if(r1(R+518)){{goto L568195;}}
}
B56813e:L56813e:{c.instructions+=2;NFSU2_TR(0x56813e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B568144:{NFSU2_TR(0x568144);
if(r1(R+518)){{goto L568181;}}
}
B568146:L568146:{c.instructions+=2;NFSU2_TR(0x568146);
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
B56814c:{NFSU2_TR(0x56814c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568292;}}
}
B568152:L568152:{c.instructions+=2;NFSU2_TR(0x568152);
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
B56815c:{NFSU2_TR(0x56815c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568292;}}
}
B568162:L568162:{c.instructions+=2;NFSU2_TR(0x568162);
w4(R+4,u32(0x838980ull));
}
B568167:{NFSU2_TR(0x568167);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56816cull));
TAIL_STATIC(0x530140u,530);
}
B56816c:L56816c:{c.instructions+=1;NFSU2_TR(0x56816c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568171ull));
TAIL_STATIC(0x54f980u,54f);
}
B568171:L568171:{c.instructions+=2;NFSU2_TR(0x568171);
__builtin_memmove((R+4),(R+0),4);
}
B568173:{NFSU2_TR(0x568173);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568178ull));
TAIL_STATIC(0x55bdf0u,55b);
}
B568178:L568178:{c.instructions+=6;NFSU2_TR(0x568178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568179:{NFSU2_TR(0x568179);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56817a:{NFSU2_TR(0x56817a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56817b:{NFSU2_TR(0x56817b);
__builtin_memmove((R+16),(R+20),4);
}
B56817d:{NFSU2_TR(0x56817d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56817e:{NFSU2_TR(0x56817e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568181:L568181:{c.instructions+=2;NFSU2_TR(0x568181);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B568187:{NFSU2_TR(0x568187);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56818cull));
TAIL_STATIC(0x538760u,538);
}
B56818c:L56818c:{c.instructions+=6;NFSU2_TR(0x56818c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56818d:{NFSU2_TR(0x56818d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56818e:{NFSU2_TR(0x56818e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56818f:{NFSU2_TR(0x56818f);
__builtin_memmove((R+16),(R+20),4);
}
B568191:{NFSU2_TR(0x568191);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568192:{NFSU2_TR(0x568192);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568195:L568195:{c.instructions+=3;NFSU2_TR(0x568195);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56819b:{NFSU2_TR(0x56819b);
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
B56819d:{NFSU2_TR(0x56819d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568292;}}
}
B5681a3:L5681a3:{c.instructions+=3;NFSU2_TR(0x5681a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5681a9:{NFSU2_TR(0x5681a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5681ac:{NFSU2_TR(0x5681ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5681b1ull));
TAIL_STATIC(0x610000u,610);
}
B5681b1:L5681b1:{c.instructions+=2;NFSU2_TR(0x5681b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5681b2:{NFSU2_TR(0x5681b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5681b7ull));
TAIL_STATIC(0x43db50u,43d);
}
B5681b7:L5681b7:{c.instructions+=6;NFSU2_TR(0x5681b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5681ba:{NFSU2_TR(0x5681ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5681bd:{NFSU2_TR(0x5681bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5681bf:{NFSU2_TR(0x5681bf);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5681c4:{NFSU2_TR(0x5681c4);
w4(R+4,u32(0x8389d0ull));
}
B5681c9:{NFSU2_TR(0x5681c9);
if(r1(R+518)){{goto L568233;}}
}
B5681cb:L5681cb:{c.instructions+=3;NFSU2_TR(0x5681cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5681ce:{NFSU2_TR(0x5681ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5681d1:{NFSU2_TR(0x5681d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5681d6ull));
TAIL_STATIC(0x413440u,413);
}
B5681d6:L5681d6:{c.instructions+=4;NFSU2_TR(0x5681d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5681d7:{NFSU2_TR(0x5681d7);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5681d9:{NFSU2_TR(0x5681d9);
w4(R+4,u32(0x8389d0ull));
}
B5681de:{NFSU2_TR(0x5681de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5681e3ull));
TAIL_STATIC(0x631d20u,631);
}
B5681e3:L5681e3:{c.instructions+=4;NFSU2_TR(0x5681e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5681e4:{NFSU2_TR(0x5681e4);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5681e6:{NFSU2_TR(0x5681e6);
w4(R+4,u32(0x8389d0ull));
}
B5681eb:{NFSU2_TR(0x5681eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5681f0ull));
TAIL_STATIC(0x631d20u,631);
}
B5681f0:L5681f0:{c.instructions+=4;NFSU2_TR(0x5681f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5681f2:{NFSU2_TR(0x5681f2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5681f4:{NFSU2_TR(0x5681f4);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5681f9:{NFSU2_TR(0x5681f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5681feull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B5681fe:L5681fe:{c.instructions+=5;NFSU2_TR(0x5681fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B568201:{NFSU2_TR(0x568201);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568206:{NFSU2_TR(0x568206);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56820b:{NFSU2_TR(0x56820b);
w4(R+4,u32(0x8637d0ull));
}
B568210:{NFSU2_TR(0x568210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568215ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B568215:L568215:{c.instructions+=7;NFSU2_TR(0x568215);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568218:{NFSU2_TR(0x568218);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56821b:{NFSU2_TR(0x56821b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56821d:{NFSU2_TR(0x56821d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56821f:{NFSU2_TR(0x56821f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568220:{NFSU2_TR(0x568220);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568222:{NFSU2_TR(0x568222);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568227ull));
TAIL_STATIC(0x4c2100u,4c2);
}
B568227:L568227:{c.instructions+=7;NFSU2_TR(0x568227);
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
B56822a:{NFSU2_TR(0x56822a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56822b:{NFSU2_TR(0x56822b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56822c:{NFSU2_TR(0x56822c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56822d:{NFSU2_TR(0x56822d);
__builtin_memmove((R+16),(R+20),4);
}
B56822f:{NFSU2_TR(0x56822f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568230:{NFSU2_TR(0x568230);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568233:L568233:{c.instructions+=2;NFSU2_TR(0x568233);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B568239:{NFSU2_TR(0x568239);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56823eull));
TAIL_STATIC(0x413440u,413);
}
B56823e:L56823e:{c.instructions+=4;NFSU2_TR(0x56823e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56823f:{NFSU2_TR(0x56823f);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568241:{NFSU2_TR(0x568241);
w4(R+4,u32(0x8389d0ull));
}
B568246:{NFSU2_TR(0x568246);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56824bull));
TAIL_STATIC(0x631d20u,631);
}
B56824b:L56824b:{c.instructions+=4;NFSU2_TR(0x56824b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56824c:{NFSU2_TR(0x56824c);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56824e:{NFSU2_TR(0x56824e);
w4(R+4,u32(0x8389d0ull));
}
B568253:{NFSU2_TR(0x568253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568258ull));
TAIL_STATIC(0x631d20u,631);
}
B568258:L568258:{c.instructions+=4;NFSU2_TR(0x568258);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56825a:{NFSU2_TR(0x56825a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56825c:{NFSU2_TR(0x56825c);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568261:{NFSU2_TR(0x568261);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568266ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B568266:L568266:{c.instructions+=5;NFSU2_TR(0x568266);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B568269:{NFSU2_TR(0x568269);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56826e:{NFSU2_TR(0x56826e);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568273:{NFSU2_TR(0x568273);
w4(R+4,u32(0x8637d0ull));
}
B568278:{NFSU2_TR(0x568278);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56827dull));
TAIL_STATIC(0x55b1a0u,55b);
}
B56827d:L56827d:{c.instructions+=6;NFSU2_TR(0x56827d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B568283:{NFSU2_TR(0x568283);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568285:{NFSU2_TR(0x568285);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568287:{NFSU2_TR(0x568287);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568288:{NFSU2_TR(0x568288);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56828a:{NFSU2_TR(0x56828a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56828full));
TAIL_STATIC(0x4c2100u,4c2);
}
B56828f:L56828f:{c.instructions+=1;NFSU2_TR(0x56828f);
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
B568292:L568292:{c.instructions+=6;NFSU2_TR(0x568292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568293:{NFSU2_TR(0x568293);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568294:{NFSU2_TR(0x568294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568295:{NFSU2_TR(0x568295);
__builtin_memmove((R+16),(R+20),4);
}
B568297:{NFSU2_TR(0x568297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568298:{NFSU2_TR(0x568298);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5682a0:L5682a0:{c.instructions+=5;NFSU2_TR(0x5682a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5682a1:{NFSU2_TR(0x5682a1);
__builtin_memmove((R+24),(R+4),4);
}
B5682a3:{NFSU2_TR(0x5682a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5682a9:{NFSU2_TR(0x5682a9);
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
B5682ab:{NFSU2_TR(0x5682ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56844c;}}
}
B5682b1:L5682b1:{c.instructions+=3;NFSU2_TR(0x5682b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x172ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5682b7:{NFSU2_TR(0x5682b7);
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
B5682b9:{NFSU2_TR(0x5682b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56844c;}}
}
B5682bf:L5682bf:{c.instructions+=2;NFSU2_TR(0x5682bf);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5682c4:{NFSU2_TR(0x5682c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5682c9ull));
TAIL_STATIC(0x52cf60u,52c);
}
B5682c9:L5682c9:{c.instructions+=3;NFSU2_TR(0x5682c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5682cc:{NFSU2_TR(0x5682cc);
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
B5682ce:{NFSU2_TR(0x5682ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56844c;}}
}
B5682d4:L5682d4:{c.instructions+=5;NFSU2_TR(0x5682d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5682d8:{NFSU2_TR(0x5682d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5682dd:{NFSU2_TR(0x5682dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5682de:{NFSU2_TR(0x5682de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5682df:{NFSU2_TR(0x5682df);
if(r1(R+518)){{goto L5683bd;}}
}
B5682e5:L5682e5:{c.instructions+=2;NFSU2_TR(0x5682e5);
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
B5682ea:{NFSU2_TR(0x5682ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56844a;}}
}
B5682f0:L5682f0:{c.instructions+=4;NFSU2_TR(0x5682f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5682f6:{NFSU2_TR(0x5682f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5682f8:{NFSU2_TR(0x5682f8);
w4(R+12,u32(0x1ull));
}
B5682fd:{NFSU2_TR(0x5682fd);
if(r1(R+518)){{goto L56834f;}}
}
B5682ff:L5682ff:{c.instructions+=2;NFSU2_TR(0x5682ff);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B568305:{NFSU2_TR(0x568305);
if(r1(R+518)){{goto L56834f;}}
}
B568307:L568307:{c.instructions+=4;NFSU2_TR(0x568307);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56830d:{NFSU2_TR(0x56830d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56830e:{NFSU2_TR(0x56830e);
u8 U[4];
w4(U+0,u32(0x81f0b71aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568313:{NFSU2_TR(0x568313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568318ull));
TAIL_STATIC(0x55dda0u,55d);
}
B568318:L568318:{c.instructions+=5;NFSU2_TR(0x568318);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56831e:{NFSU2_TR(0x56831e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B568321:{NFSU2_TR(0x568321);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x10003ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10003ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x10003ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B568326:{NFSU2_TR(0x568326);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56832c:{NFSU2_TR(0x56832c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L568342;}}
}
B56832e:L56832e:{c.instructions+=2;NFSU2_TR(0x56832e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x10005ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10005ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x10005ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B568333:{NFSU2_TR(0x568333);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L568342;}}
}
B568335:L568335:{c.instructions+=5;NFSU2_TR(0x568335);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568336:{NFSU2_TR(0x568336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568337:{NFSU2_TR(0x568337);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xb36e7c1eull));
s4(u32(r4(U+0)),r4(U+4));
}
B56833e:{NFSU2_TR(0x56833e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56833f:{NFSU2_TR(0x56833f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568342:L568342:{c.instructions+=5;NFSU2_TR(0x568342);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568343:{NFSU2_TR(0x568343);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568344:{NFSU2_TR(0x568344);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xaade3025ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56834b:{NFSU2_TR(0x56834b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56834c:{NFSU2_TR(0x56834c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56834f:L56834f:{c.instructions+=3;NFSU2_TR(0x56834f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568355:{NFSU2_TR(0x568355);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffff0000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56835a:{NFSU2_TR(0x56835a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L568376;}}
}
B56835c:L56835c:{c.instructions+=5;NFSU2_TR(0x56835c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B56835f:{NFSU2_TR(0x56835f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568361:{NFSU2_TR(0x568361);
__builtin_memmove((R+4),(R+24),4);
}
B568363:{NFSU2_TR(0x568363);
u8 U[13];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B56836b:{NFSU2_TR(0x56836b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568370ull));
TAIL_STATIC(0x560020u,560);
}
B568370:L568370:{c.instructions+=4;NFSU2_TR(0x568370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568371:{NFSU2_TR(0x568371);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568372:{NFSU2_TR(0x568372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568373:{NFSU2_TR(0x568373);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568376:L568376:{c.instructions+=3;NFSU2_TR(0x568376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56837c:{NFSU2_TR(0x56837c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56837e:{NFSU2_TR(0x56837e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56839a;}}
}
B568380:L568380:{c.instructions+=4;NFSU2_TR(0x568380);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B568386:{NFSU2_TR(0x568386);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568387:{NFSU2_TR(0x568387);
u8 U[4];
w4(U+0,u32(0x81f0b71aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56838c:{NFSU2_TR(0x56838c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568391ull));
TAIL_STATIC(0x55dda0u,55d);
}
B568391:L568391:{c.instructions+=2;NFSU2_TR(0x568391);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B568394:{NFSU2_TR(0x568394);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56839a:L56839a:{c.instructions+=6;NFSU2_TR(0x56839a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56839d:{NFSU2_TR(0x56839d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56839e:{NFSU2_TR(0x56839e);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5683a3:{NFSU2_TR(0x5683a3);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5683a8:{NFSU2_TR(0x5683a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5683a9:{NFSU2_TR(0x5683a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5683aeull));
TAIL_STATIC(0x537c60u,537);
}
B5683ae:L5683ae:{c.instructions+=6;NFSU2_TR(0x5683ae);
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
B5683b1:{NFSU2_TR(0x5683b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5683b2:{NFSU2_TR(0x5683b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5683b8:{NFSU2_TR(0x5683b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5683b9:{NFSU2_TR(0x5683b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5683ba:{NFSU2_TR(0x5683ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5683bd:L5683bd:{c.instructions+=4;NFSU2_TR(0x5683bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5683c0:{NFSU2_TR(0x5683c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5683c3:{NFSU2_TR(0x5683c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5683c5:{NFSU2_TR(0x5683c5);
if(r1(R+518)){{goto L568419;}}
}
B5683c7:L5683c7:{c.instructions+=3;NFSU2_TR(0x5683c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5683cd:{NFSU2_TR(0x5683cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5683cf:{NFSU2_TR(0x5683cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568415;}}
}
B5683d1:L5683d1:{c.instructions+=9;NFSU2_TR(0x5683d1);
w4(R+12,u32(0x1ull));
}
B5683d6:{NFSU2_TR(0x5683d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5683dc:{NFSU2_TR(0x5683dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5683e0:{NFSU2_TR(0x5683e0);
__builtin_memmove(gp(0x7fa1fc),(R+12),1);
}
B5683e6:{NFSU2_TR(0x5683e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5683e9:{NFSU2_TR(0x5683e9);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5683ee:{NFSU2_TR(0x5683ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5683ef:{NFSU2_TR(0x5683ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
w4(U+4,u32(0x799c30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5683f9:{NFSU2_TR(0x5683f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5683feull));
TAIL_STATIC(0x4954e0u,495);
}
B5683fe:L5683fe:{c.instructions+=3;NFSU2_TR(0x5683fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B568401:{NFSU2_TR(0x568401);
__builtin_memmove((R+4),(R+24),4);
}
B568403:{NFSU2_TR(0x568403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568408ull));
TAIL_STATIC(0x556870u,556);
}
B568408:L568408:{c.instructions+=5;NFSU2_TR(0x568408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568409:{NFSU2_TR(0x568409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56840a:{NFSU2_TR(0x56840a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x73332e68ull));
s4(u32(r4(U+0)),r4(U+4));
}
B568411:{NFSU2_TR(0x568411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568412:{NFSU2_TR(0x568412);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568415:L568415:{c.instructions+=2;NFSU2_TR(0x568415);
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
B568417:{NFSU2_TR(0x568417);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56844a;}}
}
B568419:L568419:{c.instructions+=5;NFSU2_TR(0x568419);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56841f:{NFSU2_TR(0x56841f);
__builtin_memmove((R+8),(R+28),4);
}
B568421:{NFSU2_TR(0x568421);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffff0000ull))));
}
B568427:{NFSU2_TR(0x568427);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x20000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56842d:{NFSU2_TR(0x56842d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L56844a;}}
}
B56842f:L56842f:{c.instructions+=2;NFSU2_TR(0x56842f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B568432:{NFSU2_TR(0x568432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568437ull));
TAIL_STATIC(0x495910u,495);
}
B568437:L568437:{c.instructions+=5;NFSU2_TR(0x568437);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B56843a:{NFSU2_TR(0x56843a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56843c:{NFSU2_TR(0x56843c);
__builtin_memmove((R+4),(R+24),4);
}
B56843e:{NFSU2_TR(0x56843e);
u8 U[13];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B568445:{NFSU2_TR(0x568445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56844aull));
TAIL_STATIC(0x560020u,560);
}
B56844a:L56844a:{c.instructions+=2;NFSU2_TR(0x56844a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56844b:{NFSU2_TR(0x56844b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56844c:L56844c:{c.instructions+=2;NFSU2_TR(0x56844c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56844d:{NFSU2_TR(0x56844d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568450:L568450:{c.instructions+=16;NFSU2_TR(0x568450);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568451:{NFSU2_TR(0x568451);
__builtin_memmove((R+20),(R+16),4);
}
B568453:{NFSU2_TR(0x568453);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568455:{NFSU2_TR(0x568455);
u8 U[4];
w4(U+0,u32(0x777dc3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56845a:{NFSU2_TR(0x56845a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568460:{NFSU2_TR(0x568460);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568461:{NFSU2_TR(0x568461);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B568468:{NFSU2_TR(0x568468);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568469:{NFSU2_TR(0x568469);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56846a:{NFSU2_TR(0x56846a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56846b:{NFSU2_TR(0x56846b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56846c:{NFSU2_TR(0x56846c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56846f:{NFSU2_TR(0x56846f);
__builtin_memmove((R+24),(R+4),4);
}
B568471:{NFSU2_TR(0x568471);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568472:{NFSU2_TR(0x568472);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B568475:{NFSU2_TR(0x568475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56847aull));
TAIL_STATIC(0x551de0u,551);
}
B56847a:L56847a:{c.instructions+=14;NFSU2_TR(0x56847a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56847f:{NFSU2_TR(0x56847f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568484:{NFSU2_TR(0x568484);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568486:{NFSU2_TR(0x568486);
u8 U[4];
w4(U+0,u32(0x79d890ull));
s4(u32(r4(R+24)),r4(U+0));
}
B56848c:{NFSU2_TR(0x56848c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56848f:{NFSU2_TR(0x56848f);
u8 U[4];
w4(U+0,u32(0x79caf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568494:{NFSU2_TR(0x568494);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B568497:{NFSU2_TR(0x568497);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56849a:{NFSU2_TR(0x56849a);
u8 U[4];
w4(U+0,u32(0x797f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56849f:{NFSU2_TR(0x56849f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5684a1:{NFSU2_TR(0x5684a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5684a4:{NFSU2_TR(0x5684a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5684a5:{NFSU2_TR(0x5684a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5684a8:{NFSU2_TR(0x5684a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5684adull));
TAIL_STATIC(0x5435d0u,543);
}
B5684ad:L5684ad:{c.instructions+=9;NFSU2_TR(0x5684ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5684b0:{NFSU2_TR(0x5684b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5684b1:{NFSU2_TR(0x5684b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5684b2:{NFSU2_TR(0x5684b2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5684b4:{NFSU2_TR(0x5684b4);
u8 U[4];
w4(U+0,u32(0x78f814ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5684b9:{NFSU2_TR(0x5684b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5684ba:{NFSU2_TR(0x5684ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5684c0:{NFSU2_TR(0x5684c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5684c4:{NFSU2_TR(0x5684c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5684c9ull));
TAIL_STATIC(0x542ac0u,542);
}
B5684c9:L5684c9:{c.instructions+=14;NFSU2_TR(0x5684c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5684cf:{NFSU2_TR(0x5684cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5684d5:{NFSU2_TR(0x5684d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x111ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5684db:{NFSU2_TR(0x5684db);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x112ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5684e1:{NFSU2_TR(0x5684e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5684e7:{NFSU2_TR(0x5684e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5684ed:{NFSU2_TR(0x5684ed);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B5684f3:{NFSU2_TR(0x5684f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5684f7:{NFSU2_TR(0x5684f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5684fd:{NFSU2_TR(0x5684fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
w4(U+4,u32(0x43480000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B568507:{NFSU2_TR(0x568507);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x41a00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B568511:{NFSU2_TR(0x568511);
__builtin_memmove((R+0),gp(0x8389c8),4);
}
B568516:{NFSU2_TR(0x568516);
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
B56851b:{NFSU2_TR(0x56851b);
if(r1(R+518)){{goto L568537;}}
}
B56851d:L56851d:{c.instructions+=1;NFSU2_TR(0x56851d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B568520:L568520:{c.instructions+=2;NFSU2_TR(0x568520);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B568523:{NFSU2_TR(0x568523);
if(r1(R+518)){{goto L568530;}}
}
B568525:L568525:{c.instructions+=3;NFSU2_TR(0x568525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B568527:{NFSU2_TR(0x568527);
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
B56852c:{NFSU2_TR(0x56852c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x568520u);}goto L568520;}}
}
B56852e:L56852e:{c.instructions+=1;NFSU2_TR(0x56852e);
{goto L568537;}
}
B568530:L568530:{c.instructions+=3;NFSU2_TR(0x568530);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B568533:{NFSU2_TR(0x568533);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B568535:{NFSU2_TR(0x568535);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56854b;}}
}
B568537:L568537:{c.instructions+=4;NFSU2_TR(0x568537);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56853a:{NFSU2_TR(0x56853a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56853b:{NFSU2_TR(0x56853b);
w4(R+4,u32(0x8392c0ull));
}
B568540:{NFSU2_TR(0x568540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568545ull));
TAIL_STATIC(0x6102f0u,610);
}
B568545:L568545:{c.instructions+=3;NFSU2_TR(0x568545);
__builtin_memmove((R+28),(R+0),4);
}
B568547:{NFSU2_TR(0x568547);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B568549:{NFSU2_TR(0x568549);
if(r1(R+518)){{goto L568582;}}
}
B56854b:L56854b:{c.instructions+=2;NFSU2_TR(0x56854b);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568550:{NFSU2_TR(0x568550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568555ull));
TAIL_STATIC(0x43db50u,43d);
}
B568555:L568555:{c.instructions+=5;NFSU2_TR(0x568555);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B568558:{NFSU2_TR(0x568558);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568559:{NFSU2_TR(0x568559);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56855a:{NFSU2_TR(0x56855a);
__builtin_memmove((R+4),(R+28),4);
}
B56855c:{NFSU2_TR(0x56855c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568561ull));
TAIL_STATIC(0x61b500u,61b);
}
B568561:L568561:{c.instructions+=5;NFSU2_TR(0x568561);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568562:{NFSU2_TR(0x568562);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568567:{NFSU2_TR(0x568567);
__builtin_memmove((R+4),(R+28),4);
}
B568569:{NFSU2_TR(0x568569);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56856c:{NFSU2_TR(0x56856c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568571ull));
TAIL_STATIC(0x61b500u,61b);
}
B568571:L568571:{c.instructions+=5;NFSU2_TR(0x568571);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B568574:{NFSU2_TR(0x568574);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B568577:{NFSU2_TR(0x568577);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B568579:{NFSU2_TR(0x568579);
__builtin_memmove((R+8),(R+518),1);
}
B56857c:{NFSU2_TR(0x56857c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x112ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B568582:L568582:{c.instructions+=2;NFSU2_TR(0x568582);
__builtin_memmove((R+4),(R+24),4);
}
B568584:{NFSU2_TR(0x568584);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568589ull));
TAIL_STATIC(0x560250u,560);
}
B568589:L568589:{c.instructions+=2;NFSU2_TR(0x568589);
__builtin_memmove((R+4),(R+24),4);
}
B56858b:{NFSU2_TR(0x56858b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568590ull));
TAIL_STATIC(0x546f40u,546);
}
B568590:L568590:{c.instructions+=2;NFSU2_TR(0x568590);
u8 U[2];
__builtin_memmove((U+0),gp(0x7fa1fc),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B568596:{NFSU2_TR(0x568596);
if(r1(R+518)){{goto L5685b6;}}
}
B568598:L568598:{c.instructions+=7;NFSU2_TR(0x568598);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56859a:{NFSU2_TR(0x56859a);
u8 U[4];
w4(U+0,u32(0x78fab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56859f:{NFSU2_TR(0x56859f);
__builtin_memmove(gp(0x7fa1fc),(R+12),1);
}
B5685a5:{NFSU2_TR(0x5685a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5685a8:{NFSU2_TR(0x5685a8);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5685ad:{NFSU2_TR(0x5685ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5685ae:{NFSU2_TR(0x5685ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5685b3ull));
TAIL_STATIC(0x537c00u,537);
}
B5685b3:L5685b3:{c.instructions+=1;NFSU2_TR(0x5685b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5685b6:L5685b6:{c.instructions+=2;NFSU2_TR(0x5685b6);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5685bd:{NFSU2_TR(0x5685bd);
if(r1(R+518)){{goto L5685d0;}}
}
B5685bf:L5685bf:{c.instructions+=4;NFSU2_TR(0x5685bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5685c2:{NFSU2_TR(0x5685c2);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5685c7:{NFSU2_TR(0x5685c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5685c8:{NFSU2_TR(0x5685c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5685cdull));
TAIL_STATIC(0x4954e0u,495);
}
B5685cd:L5685cd:{c.instructions+=1;NFSU2_TR(0x5685cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5685d0:L5685d0:{c.instructions+=7;NFSU2_TR(0x5685d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5685d3:{NFSU2_TR(0x5685d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5685d4:{NFSU2_TR(0x5685d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5685d5:{NFSU2_TR(0x5685d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5685d6:{NFSU2_TR(0x5685d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5685d7:{NFSU2_TR(0x5685d7);
__builtin_memmove((R+4),(R+24),4);
}
B5685d9:{NFSU2_TR(0x5685d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5685deull));
TAIL_STATIC(0x50e5a0u,50e);
}
B5685de:L5685de:{c.instructions+=2;NFSU2_TR(0x5685de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5685df:{NFSU2_TR(0x5685df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5685e4ull));
TAIL_STATIC(0x4c2100u,4c2);
}
B5685e4:L5685e4:{c.instructions+=4;NFSU2_TR(0x5685e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5685e7:{NFSU2_TR(0x5685e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5685ea:{NFSU2_TR(0x5685ea);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5685ec:{NFSU2_TR(0x5685ec);
if(r1(R+518)){{goto L5685f3;}}
}
B5685ee:L5685ee:{c.instructions+=2;NFSU2_TR(0x5685ee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5685f1:{NFSU2_TR(0x5685f1);
{goto L5685f5;}
}
B5685f3:L5685f3:{c.instructions+=1;NFSU2_TR(0x5685f3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5685f5:L5685f5:{c.instructions+=2;NFSU2_TR(0x5685f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5685f8:{NFSU2_TR(0x5685f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56860b;}}
}
B5685fa:L5685fa:{c.instructions+=3;NFSU2_TR(0x5685fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568600:{NFSU2_TR(0x568600);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568601:{NFSU2_TR(0x568601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568606ull));
TAIL_STATIC(0x50ca00u,50c);
}
B568606:L568606:{c.instructions+=2;NFSU2_TR(0x568606);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B568609:{NFSU2_TR(0x568609);
{goto L56864a;}
}
B56860b:L56860b:{c.instructions+=3;NFSU2_TR(0x56860b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56860e:{NFSU2_TR(0x56860e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B568610:{NFSU2_TR(0x568610);
if(r1(R+518)){{goto L568617;}}
}
B568612:L568612:{c.instructions+=2;NFSU2_TR(0x568612);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B568615:{NFSU2_TR(0x568615);
{goto L568619;}
}
B568617:L568617:{c.instructions+=1;NFSU2_TR(0x568617);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B568619:L568619:{c.instructions+=2;NFSU2_TR(0x568619);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56861c:{NFSU2_TR(0x56861c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56862f;}}
}
B56861e:L56861e:{c.instructions+=3;NFSU2_TR(0x56861e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B568624:{NFSU2_TR(0x568624);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568625:{NFSU2_TR(0x568625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56862aull));
TAIL_STATIC(0x50ca00u,50c);
}
B56862a:L56862a:{c.instructions+=2;NFSU2_TR(0x56862a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56862d:{NFSU2_TR(0x56862d);
{goto L56864a;}
}
B56862f:L56862f:{c.instructions+=3;NFSU2_TR(0x56862f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B568635:{NFSU2_TR(0x568635);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568636:{NFSU2_TR(0x568636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56863bull));
TAIL_STATIC(0x50ca50u,50c);
}
B56863b:L56863b:{c.instructions+=3;NFSU2_TR(0x56863b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568641:{NFSU2_TR(0x568641);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568642:{NFSU2_TR(0x568642);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568647ull));
TAIL_STATIC(0x50ca50u,50c);
}
B568647:L568647:{c.instructions+=1;NFSU2_TR(0x568647);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56864a:L56864a:{c.instructions+=3;NFSU2_TR(0x56864a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56864d:{NFSU2_TR(0x56864d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56864e:{NFSU2_TR(0x56864e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568653ull));
TAIL_STATIC(0x52cef0u,52c);
}
B568653:L568653:{c.instructions+=3;NFSU2_TR(0x568653);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B568656:{NFSU2_TR(0x568656);
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
B568658:{NFSU2_TR(0x568658);
if(r1(R+518)){{goto L568666;}}
}
B56865a:L56865a:{c.instructions+=4;NFSU2_TR(0x56865a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56865d:{NFSU2_TR(0x56865d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B568660:{NFSU2_TR(0x568660);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B568663:{NFSU2_TR(0x568663);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B568666:L568666:{c.instructions+=9;NFSU2_TR(0x568666);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B568669:{NFSU2_TR(0x568669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56866a:{NFSU2_TR(0x56866a);
__builtin_memmove((R+0),(R+24),4);
}
B56866c:{NFSU2_TR(0x56866c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56866d:{NFSU2_TR(0x56866d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56866e:{NFSU2_TR(0x56866e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B568675:{NFSU2_TR(0x568675);
__builtin_memmove((R+16),(R+20),4);
}
B568677:{NFSU2_TR(0x568677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568678:{NFSU2_TR(0x568678);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568680:L568680:{c.instructions+=3;NFSU2_TR(0x568680);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568684:{NFSU2_TR(0x568684);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B568687:{NFSU2_TR(0x568687);
if(r1(R+518)){{goto L568690;}}
}
B568689:L568689:{c.instructions+=2;NFSU2_TR(0x568689);
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
B56868c:{NFSU2_TR(0x56868c);
if(r1(R+518)){{goto L568690;}}
}
B56868e:L56868e:{c.instructions+=1;NFSU2_TR(0x56868e);
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
B568690:L568690:{c.instructions+=1;NFSU2_TR(0x568690);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5686a0:L5686a0:{c.instructions+=3;NFSU2_TR(0x5686a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5686a1:{NFSU2_TR(0x5686a1);
__builtin_memmove((R+24),(R+4),4);
}
B5686a3:{NFSU2_TR(0x5686a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5686a8ull));
{goto L5686c0;}
}
B5686a8:L5686a8:{c.instructions+=2;NFSU2_TR(0x5686a8);
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
B5686ad:{NFSU2_TR(0x5686ad);
if(r1(R+518)){{goto L5686b8;}}
}
B5686af:L5686af:{c.instructions+=2;NFSU2_TR(0x5686af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5686b0:{NFSU2_TR(0x5686b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5686b5ull));
TAIL_STATIC(0x575630u,575);
}
B5686b5:L5686b5:{c.instructions+=1;NFSU2_TR(0x5686b5);
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
B5686b8:L5686b8:{c.instructions+=3;NFSU2_TR(0x5686b8);
__builtin_memmove((R+0),(R+24),4);
}
B5686ba:{NFSU2_TR(0x5686ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5686bb:{NFSU2_TR(0x5686bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5686c0:L5686c0:{c.instructions+=13;NFSU2_TR(0x5686c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5686c2:{NFSU2_TR(0x5686c2);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5686c7:{NFSU2_TR(0x5686c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5686cd:{NFSU2_TR(0x5686cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5686ce:{NFSU2_TR(0x5686ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5686d5:{NFSU2_TR(0x5686d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5686d6:{NFSU2_TR(0x5686d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5686d7:{NFSU2_TR(0x5686d7);
__builtin_memmove((R+24),(R+4),4);
}
B5686d9:{NFSU2_TR(0x5686d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5686dd:{NFSU2_TR(0x5686dd);
u8 U[4];
w4(U+0,u32(0x79d890ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5686e3:{NFSU2_TR(0x5686e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5686e6:{NFSU2_TR(0x5686e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5686ee:{NFSU2_TR(0x5686ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5686f3ull));
TAIL_STATIC(0x52ea90u,52e);
}
B5686f3:L5686f3:{c.instructions+=6;NFSU2_TR(0x5686f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5686f7:{NFSU2_TR(0x5686f7);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5686fd:{NFSU2_TR(0x5686fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5686fe:{NFSU2_TR(0x5686fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B568705:{NFSU2_TR(0x568705);
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
B568708:{NFSU2_TR(0x568708);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568710:L568710:{c.instructions+=8;NFSU2_TR(0x568710);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x112ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B568716:{NFSU2_TR(0x568716);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B568719:{NFSU2_TR(0x568719);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56871b:{NFSU2_TR(0x56871b);
__builtin_memmove((R+0),(R+518),1);
}
B56871e:{NFSU2_TR(0x56871e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x112ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B568724:{NFSU2_TR(0x568724);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568727:{NFSU2_TR(0x568727);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56872d:{NFSU2_TR(0x56872d);
TAIL_STATIC(0x560250u,560);
}
B568740:L568740:{c.instructions+=8;NFSU2_TR(0x568740);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568741:{NFSU2_TR(0x568741);
__builtin_memmove((R+20),(R+16),4);
}
B568743:{NFSU2_TR(0x568743);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568744:{NFSU2_TR(0x568744);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568745:{NFSU2_TR(0x568745);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B568748:{NFSU2_TR(0x568748);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56874e:{NFSU2_TR(0x56874e);
__builtin_memmove((R+24),(R+4),4);
}
B568750:{NFSU2_TR(0x568750);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56877e;}}
}
B568752:L568752:{c.instructions+=4;NFSU2_TR(0x568752);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568755:{NFSU2_TR(0x568755);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B568758:{NFSU2_TR(0x568758);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56875a:{NFSU2_TR(0x56875a);
if(r1(R+518)){{goto L56877e;}}
}
B56875c:L56875c:{c.instructions+=3;NFSU2_TR(0x56875c);
w4(R+0,u32(s32(s8(m1(0x8381e1)))));
}
B568763:{NFSU2_TR(0x568763);
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
B568766:{NFSU2_TR(0x568766);
if(r1(R+518)){{goto L568d25;}}
}
B56876c:L56876c:{c.instructions+=3;NFSU2_TR(0x56876c);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B568772:{NFSU2_TR(0x568772);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568773:{NFSU2_TR(0x568773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568778ull));
TAIL_STATIC(0x458520u,458);
}
B568778:L568778:{c.instructions+=4;NFSU2_TR(0x568778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568779:{NFSU2_TR(0x568779);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56877a:{NFSU2_TR(0x56877a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56877b:{NFSU2_TR(0x56877b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56877e:L56877e:{c.instructions+=3;NFSU2_TR(0x56877e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x169ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B568784:{NFSU2_TR(0x568784);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B568786:{NFSU2_TR(0x568786);
if(r1(R+518)){{goto L5687a0;}}
}
B568788:L568788:{c.instructions+=2;NFSU2_TR(0x568788);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9120409eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56878e:{NFSU2_TR(0x56878e);
if(r1(R+518)){{goto L568d25;}}
}
B568794:L568794:{c.instructions+=2;NFSU2_TR(0x568794);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B56879a:{NFSU2_TR(0x56879a);
if(r1(R+518)){{goto L568d25;}}
}
B5687a0:L5687a0:{c.instructions+=4;NFSU2_TR(0x5687a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5687a2:{NFSU2_TR(0x5687a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5687a3:{NFSU2_TR(0x5687a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5687a6:{NFSU2_TR(0x5687a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5687b9;}}
}
B5687a8:L5687a8:{c.instructions+=8;NFSU2_TR(0x5687a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5687ab:{NFSU2_TR(0x5687ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5687ae:{NFSU2_TR(0x5687ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5687af:{NFSU2_TR(0x5687af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5687b0:{NFSU2_TR(0x5687b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5687b1:{NFSU2_TR(0x5687b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5687b2:{NFSU2_TR(0x5687b2);
__builtin_memmove((R+4),(R+24),4);
}
B5687b4:{NFSU2_TR(0x5687b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5687b9ull));
TAIL_STATIC(0x543d40u,543);
}
B5687b9:L5687b9:{c.instructions+=2;NFSU2_TR(0x5687b9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5687bf:{NFSU2_TR(0x5687bf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L568bb0;}}
}
B5687c5:L5687c5:{c.instructions+=1;NFSU2_TR(0x5687c5);
if(r1(R+518)){{goto L568ae0;}}
}
B5687cb:L5687cb:{c.instructions+=2;NFSU2_TR(0x5687cb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x495dc3f0ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x495dc3f0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5687d1:{NFSU2_TR(0x5687d1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5689d0;}}
}
B5687d7:L5687d7:{c.instructions+=1;NFSU2_TR(0x5687d7);
if(r1(R+518)){{goto L56899d;}}
}
B5687dd:L5687dd:{c.instructions+=2;NFSU2_TR(0x5687dd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x34dc1becull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34dc1becull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5687e3:{NFSU2_TR(0x5687e3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L568965;}}
}
B5687e9:L5687e9:{c.instructions+=1;NFSU2_TR(0x5687e9);
if(r1(R+518)){{goto L5687ff;}}
}
B5687eb:L5687eb:{c.instructions+=2;NFSU2_TR(0x5687eb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5687f1:{NFSU2_TR(0x5687f1);
if(r1(R+518)){{goto L56881f;}}
}
B5687f3:L5687f3:{c.instructions+=2;NFSU2_TR(0x5687f3);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x1fab5998ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1fab5998ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1fab5998ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5687f9:{NFSU2_TR(0x5687f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568d24;}}
}
B5687ff:L5687ff:{c.instructions+=2;NFSU2_TR(0x5687ff);
__builtin_memmove((R+4),(R+24),4);
}
B568801:{NFSU2_TR(0x568801);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568806ull));
TAIL_STATIC(0x538ca0u,538);
}
B568806:L568806:{c.instructions+=3;NFSU2_TR(0x568806);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x169ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56880c:{NFSU2_TR(0x56880c);
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
B56880e:{NFSU2_TR(0x56880e);
if(r1(R+518)){{goto L568d24;}}
}
B568814:L568814:{c.instructions+=6;NFSU2_TR(0x568814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568815:{NFSU2_TR(0x568815);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568816:{NFSU2_TR(0x568816);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56881a:{NFSU2_TR(0x56881a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56881b:{NFSU2_TR(0x56881b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56881c:{NFSU2_TR(0x56881c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56881f:L56881f:{c.instructions+=5;NFSU2_TR(0x56881f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568822:{NFSU2_TR(0x568822);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568827:{NFSU2_TR(0x568827);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56882c:{NFSU2_TR(0x56882c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56882d:{NFSU2_TR(0x56882d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568832ull));
TAIL_STATIC(0x537d40u,537);
}
B568832:L568832:{c.instructions+=3;NFSU2_TR(0x568832);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B568835:{NFSU2_TR(0x568835);
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
B568837:{NFSU2_TR(0x568837);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568d24;}}
}
B56883d:L56883d:{c.instructions+=4;NFSU2_TR(0x56883d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568840:{NFSU2_TR(0x568840);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B568843:{NFSU2_TR(0x568843);
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
B568845:{NFSU2_TR(0x568845);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568d24;}}
}
B56884b:L56884b:{c.instructions+=2;NFSU2_TR(0x56884b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xa2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B568852:{NFSU2_TR(0x568852);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568890;}}
}
B568854:L568854:{c.instructions+=2;NFSU2_TR(0x568854);
w4(R+4,u32(0x838980ull));
}
B568859:{NFSU2_TR(0x568859);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56885eull));
TAIL_STATIC(0x50f180u,50f);
}
B56885e:L56885e:{c.instructions+=2;NFSU2_TR(0x56885e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B568860:{NFSU2_TR(0x568860);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568890;}}
}
B568862:L568862:{c.instructions+=5;NFSU2_TR(0x568862);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568865:{NFSU2_TR(0x568865);
u8 U[4];
w4(U+0,u32(0x20b30cd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56886a:{NFSU2_TR(0x56886a);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56886f:{NFSU2_TR(0x56886f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568870:{NFSU2_TR(0x568870);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568875ull));
TAIL_STATIC(0x558430u,558);
}
B568875:L568875:{c.instructions+=4;NFSU2_TR(0x568875);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B568878:{NFSU2_TR(0x568878);
__builtin_memmove((R+4),(R+24),4);
}
B56887a:{NFSU2_TR(0x56887a);
s4(0x838970,u32(0x34dc1becull));
}
B568884:{NFSU2_TR(0x568884);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568889ull));
TAIL_STATIC(0x538c00u,538);
}
B568889:L568889:{c.instructions+=5;NFSU2_TR(0x568889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56888a:{NFSU2_TR(0x56888a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56888b:{NFSU2_TR(0x56888b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56888c:{NFSU2_TR(0x56888c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56888d:{NFSU2_TR(0x56888d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568890:L568890:{c.instructions+=4;NFSU2_TR(0x568890);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B568893:{NFSU2_TR(0x568893);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568896:{NFSU2_TR(0x568896);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B568899:{NFSU2_TR(0x568899);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5688c4;}}
}
B56889b:L56889b:{c.instructions+=7;NFSU2_TR(0x56889b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56889d:{NFSU2_TR(0x56889d);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5688a2:{NFSU2_TR(0x5688a2);
s4(0x838998,u32(0x8ull));
}
B5688ac:{NFSU2_TR(0x5688ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5688af:{NFSU2_TR(0x5688af);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5688b4:{NFSU2_TR(0x5688b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5688b5:{NFSU2_TR(0x5688b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5688baull));
TAIL_STATIC(0x537c60u,537);
}
B5688ba:L5688ba:{c.instructions+=6;NFSU2_TR(0x5688ba);
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
B5688bd:{NFSU2_TR(0x5688bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5688be:{NFSU2_TR(0x5688be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5688bf:{NFSU2_TR(0x5688bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5688c0:{NFSU2_TR(0x5688c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5688c1:{NFSU2_TR(0x5688c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5688c4:L5688c4:{c.instructions+=3;NFSU2_TR(0x5688c4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5688c7:{NFSU2_TR(0x5688c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x169ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5688cd:{NFSU2_TR(0x5688cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56893e;}}
}
B5688cf:L5688cf:{c.instructions+=2;NFSU2_TR(0x5688cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5688d1:{NFSU2_TR(0x5688d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568942;}}
}
B5688d3:L5688d3:{c.instructions+=2;NFSU2_TR(0x5688d3);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5688d5:{NFSU2_TR(0x5688d5);
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
B5688d7:L5688d7:{c.instructions+=4;NFSU2_TR(0x5688d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x61ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5688da:{NFSU2_TR(0x5688da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5688db:{NFSU2_TR(0x5688db);
w4(R+4,u32(0x8392c0ull));
}
B5688e0:{NFSU2_TR(0x5688e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5688e5ull));
TAIL_STATIC(0x6102f0u,610);
}
B5688e5:L5688e5:{c.instructions+=2;NFSU2_TR(0x5688e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5688e7:{NFSU2_TR(0x5688e7);
if(r1(R+518)){{goto L5688eb;}}
}
B5688e9:L5688e9:{c.instructions+=1;NFSU2_TR(0x5688e9);
w1(R+12,u8(0x1ull));
}
B5688eb:L5688eb:{c.instructions+=3;NFSU2_TR(0x5688eb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5688ec:{NFSU2_TR(0x5688ec);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5688ef:{NFSU2_TR(0x5688ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5688d7u);}goto L5688d7;}}
}
B5688f1:L5688f1:{c.instructions+=2;NFSU2_TR(0x5688f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5688f3:{NFSU2_TR(0x5688f3);
if(r1(R+518)){{goto L568938;}}
}
B5688f5:L5688f5:{c.instructions+=5;NFSU2_TR(0x5688f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5688f8:{NFSU2_TR(0x5688f8);
u8 U[4];
w4(U+0,u32(0x903854f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5688fd:{NFSU2_TR(0x5688fd);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568902:{NFSU2_TR(0x568902);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568903:{NFSU2_TR(0x568903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568908ull));
TAIL_STATIC(0x558430u,558);
}
B568908:L568908:{c.instructions+=4;NFSU2_TR(0x568908);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56890b:{NFSU2_TR(0x56890b);
__builtin_memmove((R+4),(R+24),4);
}
B56890d:{NFSU2_TR(0x56890d);
s4(0x838970,u32(0x34dc1becull));
}
B568917:{NFSU2_TR(0x568917);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56891cull));
TAIL_STATIC(0x538c00u,538);
}
B56891c:L56891c:{c.instructions+=4;NFSU2_TR(0x56891c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56891f:{NFSU2_TR(0x56891f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568920:{NFSU2_TR(0x568920);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568922:{NFSU2_TR(0x568922);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568927ull));
TAIL_STATIC(0x51de30u,51d);
}
B568927:L568927:{c.instructions+=1;NFSU2_TR(0x568927);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56892a:L56892a:{c.instructions+=2;NFSU2_TR(0x56892a);
__builtin_memmove((R+4),(R+24),4);
}
B56892c:{NFSU2_TR(0x56892c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568931ull));
TAIL_STATIC(0x556930u,556);
}
B568931:L568931:{c.instructions+=5;NFSU2_TR(0x568931);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568932:{NFSU2_TR(0x568932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568933:{NFSU2_TR(0x568933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568934:{NFSU2_TR(0x568934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568935:{NFSU2_TR(0x568935);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568938:L568938:{c.instructions+=1;NFSU2_TR(0x568938);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x169ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56893e:L56893e:{c.instructions+=2;NFSU2_TR(0x56893e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B568940:{NFSU2_TR(0x568940);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56892au);}goto L56892a;}}
}
B568942:L568942:{c.instructions+=3;NFSU2_TR(0x568942);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B568948:{NFSU2_TR(0x568948);
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
B56894a:{NFSU2_TR(0x56894a);
if(r1(R+518)){{goto L568d24;}}
}
B568950:L568950:{c.instructions+=3;NFSU2_TR(0x568950);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568951:{NFSU2_TR(0x568951);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568956:{NFSU2_TR(0x568956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56895bull));
TAIL_STATIC(0x55dda0u,55d);
}
B56895b:L56895b:{c.instructions+=6;NFSU2_TR(0x56895b);
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
B56895e:{NFSU2_TR(0x56895e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56895f:{NFSU2_TR(0x56895f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568960:{NFSU2_TR(0x568960);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568961:{NFSU2_TR(0x568961);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568962:{NFSU2_TR(0x568962);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568965:L568965:{c.instructions+=2;NFSU2_TR(0x568965);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x35f8620bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56896b:{NFSU2_TR(0x56896b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568d24;}}
}
B568971:L568971:{c.instructions+=3;NFSU2_TR(0x568971);
__builtin_memmove((R+0),gp(0x838998),4);
}
B568976:{NFSU2_TR(0x568976);
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
B568978:{NFSU2_TR(0x568978);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568d24;}}
}
B56897e:L56897e:{c.instructions+=3;NFSU2_TR(0x56897e);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568980:{NFSU2_TR(0x568980);
w4(R+4,u32(0x8635bcull));
}
B568985:{NFSU2_TR(0x568985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56898aull));
TAIL_STATIC(0x5243d0u,524);
}
B56898a:L56898a:{c.instructions+=3;NFSU2_TR(0x56898a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56898c:{NFSU2_TR(0x56898c);
w4(R+4,u32(0x83a9d0ull));
}
B568991:{NFSU2_TR(0x568991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568996ull));
TAIL_STATIC(0x52a460u,52a);
}
B568996:L568996:{c.instructions+=5;NFSU2_TR(0x568996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568997:{NFSU2_TR(0x568997);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568998:{NFSU2_TR(0x568998);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568999:{NFSU2_TR(0x568999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56899a:{NFSU2_TR(0x56899a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56899d:L56899d:{c.instructions+=5;NFSU2_TR(0x56899d);
s4(0x838998,u32(0x5ull));
}
B5689a7:{NFSU2_TR(0x5689a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5689ad:{NFSU2_TR(0x5689ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5689ae:{NFSU2_TR(0x5689ae);
u8 U[4];
w4(U+0,u32(0xe1fde1d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5689b3:{NFSU2_TR(0x5689b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5689b8ull));
TAIL_STATIC(0x55dda0u,55d);
}
B5689b8:L5689b8:{c.instructions+=4;NFSU2_TR(0x5689b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5689bb:{NFSU2_TR(0x5689bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5689bc:{NFSU2_TR(0x5689bc);
u8 U[4];
w4(U+0,u32(0xe1fde1d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5689c1:{NFSU2_TR(0x5689c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5689c6ull));
TAIL_STATIC(0x55dda0u,55d);
}
B5689c6:L5689c6:{c.instructions+=6;NFSU2_TR(0x5689c6);
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
B5689c9:{NFSU2_TR(0x5689c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5689ca:{NFSU2_TR(0x5689ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5689cb:{NFSU2_TR(0x5689cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5689cc:{NFSU2_TR(0x5689cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5689cd:{NFSU2_TR(0x5689cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5689d0:L5689d0:{c.instructions+=2;NFSU2_TR(0x5689d0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6691c08eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5689d6:{NFSU2_TR(0x5689d6);
if(r1(R+518)){{goto L568abc;}}
}
B5689dc:L5689dc:{c.instructions+=2;NFSU2_TR(0x5689dc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fd238feull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5689e2:{NFSU2_TR(0x5689e2);
if(r1(R+518)){{goto L568a8c;}}
}
B5689e8:L5689e8:{c.instructions+=2;NFSU2_TR(0x5689e8);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x8acaa8dfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8acaa8dfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8acaa8dfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5689ee:{NFSU2_TR(0x5689ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568d24;}}
}
B5689f4:L5689f4:{c.instructions+=4;NFSU2_TR(0x5689f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5689f7:{NFSU2_TR(0x5689f7);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5689fc:{NFSU2_TR(0x5689fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5689fd:{NFSU2_TR(0x5689fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568a02ull));
TAIL_STATIC(0x495520u,495);
}
B568a02:L568a02:{c.instructions+=8;NFSU2_TR(0x568a02);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B568a04:{NFSU2_TR(0x568a04);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x169ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B568a0b:{NFSU2_TR(0x568a0b);
__builtin_memmove(gp(0x8363f8),(R+4),4);
}
B568a11:{NFSU2_TR(0x568a11);
__builtin_memmove(gp(0x8a1c68),(R+4),4);
}
B568a17:{NFSU2_TR(0x568a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568a1d:{NFSU2_TR(0x568a1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B568a20:{NFSU2_TR(0x568a20);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B568a22:{NFSU2_TR(0x568a22);
if(r1(R+518)){{goto L568a2d;}}
}
B568a24:L568a24:{c.instructions+=2;NFSU2_TR(0x568a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B568a27:{NFSU2_TR(0x568a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B568a2d:L568a2d:{c.instructions+=4;NFSU2_TR(0x568a2d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568a2f:{NFSU2_TR(0x568a2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568a30:{NFSU2_TR(0x568a30);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B568a34:{NFSU2_TR(0x568a34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568a39ull));
TAIL_STATIC(0x4c2140u,4c2);
}
B568a39:L568a39:{c.instructions+=4;NFSU2_TR(0x568a39);
__builtin_memmove((R+0),gp(0x7fa1c0),4);
}
B568a3e:{NFSU2_TR(0x568a3e);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568a43:{NFSU2_TR(0x568a43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568a44:{NFSU2_TR(0x568a44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568a49ull));
TAIL_STATIC(0x4954e0u,495);
}
B568a49:L568a49:{c.instructions+=4;NFSU2_TR(0x568a49);
__builtin_memmove((R+4),gp(0x7fa1c0),4);
}
B568a4f:{NFSU2_TR(0x568a4f);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568a54:{NFSU2_TR(0x568a54);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568a55:{NFSU2_TR(0x568a55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568a5aull));
TAIL_STATIC(0x4954e0u,495);
}
B568a5a:L568a5a:{c.instructions+=6;NFSU2_TR(0x568a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B568a5d:{NFSU2_TR(0x568a5d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568a5f:{NFSU2_TR(0x568a5f);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568a64:{NFSU2_TR(0x568a64);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568a69:{NFSU2_TR(0x568a69);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568a6a:{NFSU2_TR(0x568a6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568a6full));
TAIL_STATIC(0x537c00u,537);
}
B568a6f:L568a6f:{c.instructions+=7;NFSU2_TR(0x568a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568a72:{NFSU2_TR(0x568a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B568a75:{NFSU2_TR(0x568a75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B568a78:{NFSU2_TR(0x568a78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568a79:{NFSU2_TR(0x568a79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568a7a:{NFSU2_TR(0x568a7a);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B568a80:{NFSU2_TR(0x568a80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568a85ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B568a85:L568a85:{c.instructions+=5;NFSU2_TR(0x568a85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568a86:{NFSU2_TR(0x568a86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568a87:{NFSU2_TR(0x568a87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568a88:{NFSU2_TR(0x568a88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568a89:{NFSU2_TR(0x568a89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568a8c:L568a8c:{c.instructions+=5;NFSU2_TR(0x568a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B568a92:{NFSU2_TR(0x568a92);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568a93:{NFSU2_TR(0x568a93);
u8 U[4];
w4(U+0,u32(0xe1fde1d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568a98:{NFSU2_TR(0x568a98);
s1(0x86461a,u8(0x1ull));
}
B568a9f:{NFSU2_TR(0x568a9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568aa4ull));
TAIL_STATIC(0x55dda0u,55d);
}
B568aa4:L568aa4:{c.instructions+=4;NFSU2_TR(0x568aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568aa7:{NFSU2_TR(0x568aa7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568aa8:{NFSU2_TR(0x568aa8);
u8 U[4];
w4(U+0,u32(0xe1fde1d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568aad:{NFSU2_TR(0x568aad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568ab2ull));
TAIL_STATIC(0x55dda0u,55d);
}
B568ab2:L568ab2:{c.instructions+=6;NFSU2_TR(0x568ab2);
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
B568ab5:{NFSU2_TR(0x568ab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568ab6:{NFSU2_TR(0x568ab6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568ab7:{NFSU2_TR(0x568ab7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568ab8:{NFSU2_TR(0x568ab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568ab9:{NFSU2_TR(0x568ab9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568abc:L568abc:{c.instructions+=7;NFSU2_TR(0x568abc);
__builtin_memmove((R+4),gp(0x861e74),4);
}
B568ac2:{NFSU2_TR(0x568ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B568ac5:{NFSU2_TR(0x568ac5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568ac6:{NFSU2_TR(0x568ac6);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568acb:{NFSU2_TR(0x568acb);
u8 U[4];
w4(U+0,u32(0xeb3a688aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568ad0:{NFSU2_TR(0x568ad0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568ad1:{NFSU2_TR(0x568ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568ad6ull));
TAIL_STATIC(0x537b80u,537);
}
B568ad6:L568ad6:{c.instructions+=6;NFSU2_TR(0x568ad6);
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
B568ad9:{NFSU2_TR(0x568ad9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568ada:{NFSU2_TR(0x568ada);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568adb:{NFSU2_TR(0x568adb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568adc:{NFSU2_TR(0x568adc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568add:{NFSU2_TR(0x568add);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568ae0:L568ae0:{c.instructions+=4;NFSU2_TR(0x568ae0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x169ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B568ae6:{NFSU2_TR(0x568ae6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B568ae8:{NFSU2_TR(0x568ae8);
__builtin_memmove((R+0),gp(0x838998),4);
}
B568aed:{NFSU2_TR(0x568aed);
if(r1(R+518)){{goto L568b02;}}
}
B568aef:L568aef:{c.instructions+=2;NFSU2_TR(0x568aef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B568af2:{NFSU2_TR(0x568af2);
if(r1(R+518)){{goto L568b02;}}
}
B568af4:L568af4:{c.instructions+=2;NFSU2_TR(0x568af4);
__builtin_memmove((R+4),(R+24),4);
}
B568af6:{NFSU2_TR(0x568af6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568afbull));
TAIL_STATIC(0x5605b0u,560);
}
B568afb:L568afb:{c.instructions+=5;NFSU2_TR(0x568afb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568afc:{NFSU2_TR(0x568afc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568afd:{NFSU2_TR(0x568afd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568afe:{NFSU2_TR(0x568afe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568aff:{NFSU2_TR(0x568aff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568b02:L568b02:{c.instructions+=2;NFSU2_TR(0x568b02);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B568b09:{NFSU2_TR(0x568b09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568b62;}}
}
B568b0b:L568b0b:{c.instructions+=3;NFSU2_TR(0x568b0b);
__builtin_memmove((R+4),gp(0x83898c),4);
}
B568b11:{NFSU2_TR(0x568b11);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B568b13:{NFSU2_TR(0x568b13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568b62;}}
}
B568b15:L568b15:{c.instructions+=2;NFSU2_TR(0x568b15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B568b17:{NFSU2_TR(0x568b17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568b62;}}
}
B568b19:L568b19:{c.instructions+=11;NFSU2_TR(0x568b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568b1c:{NFSU2_TR(0x568b1c);
u8 U[4];
w4(U+0,u32(0xd76e0b5aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568b21:{NFSU2_TR(0x568b21);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568b23:{NFSU2_TR(0x568b23);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568b28:{NFSU2_TR(0x568b28);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568b2d:{NFSU2_TR(0x568b2d);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568b32:{NFSU2_TR(0x568b32);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568b37:{NFSU2_TR(0x568b37);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568b3c:{NFSU2_TR(0x568b3c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568b41:{NFSU2_TR(0x568b41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568b42:{NFSU2_TR(0x568b42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568b47ull));
TAIL_STATIC(0x558790u,558);
}
B568b47:L568b47:{c.instructions+=4;NFSU2_TR(0x568b47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B568b4a:{NFSU2_TR(0x568b4a);
__builtin_memmove((R+4),(R+24),4);
}
B568b4c:{NFSU2_TR(0x568b4c);
s4(0x838970,u32(0x1fab5998ull));
}
B568b56:{NFSU2_TR(0x568b56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568b5bull));
TAIL_STATIC(0x538c00u,538);
}
B568b5b:L568b5b:{c.instructions+=5;NFSU2_TR(0x568b5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568b5c:{NFSU2_TR(0x568b5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568b5d:{NFSU2_TR(0x568b5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568b5e:{NFSU2_TR(0x568b5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568b5f:{NFSU2_TR(0x568b5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568b62:L568b62:{c.instructions+=4;NFSU2_TR(0x568b62);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B568b68:{NFSU2_TR(0x568b68);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B568b6a:{NFSU2_TR(0x568b6a);
s1(0x86461a,u8(0x1ull));
}
B568b71:{NFSU2_TR(0x568b71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568b80;}}
}
B568b73:L568b73:{c.instructions+=5;NFSU2_TR(0x568b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B568b76:{NFSU2_TR(0x568b76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568b78:{NFSU2_TR(0x568b78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568b79:{NFSU2_TR(0x568b79);
__builtin_memmove((R+4),(R+24),4);
}
B568b7b:{NFSU2_TR(0x568b7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568b80ull));
TAIL_STATIC(0x54fb70u,54f);
}
B568b80:L568b80:{c.instructions+=4;NFSU2_TR(0x568b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B568b86:{NFSU2_TR(0x568b86);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568b87:{NFSU2_TR(0x568b87);
u8 U[4];
w4(U+0,u32(0x81f0b71aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568b8c:{NFSU2_TR(0x568b8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568b91ull));
TAIL_STATIC(0x55dda0u,55d);
}
B568b91:L568b91:{c.instructions+=6;NFSU2_TR(0x568b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568b94:{NFSU2_TR(0x568b94);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568b96:{NFSU2_TR(0x568b96);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568b9b:{NFSU2_TR(0x568b9b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568ba0:{NFSU2_TR(0x568ba0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568ba1:{NFSU2_TR(0x568ba1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568ba6ull));
TAIL_STATIC(0x537c60u,537);
}
B568ba6:L568ba6:{c.instructions+=6;NFSU2_TR(0x568ba6);
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
B568ba9:{NFSU2_TR(0x568ba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568baa:{NFSU2_TR(0x568baa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568bab:{NFSU2_TR(0x568bab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568bac:{NFSU2_TR(0x568bac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568bad:{NFSU2_TR(0x568bad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568bb0:L568bb0:{c.instructions+=2;NFSU2_TR(0x568bb0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xc539a4b0ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc539a4b0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B568bb6:{NFSU2_TR(0x568bb6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L568c43;}}
}
B568bbc:L568bbc:{c.instructions+=1;NFSU2_TR(0x568bbc);
if(r1(R+518)){{goto L568c2a;}}
}
B568bbe:L568bbe:{c.instructions+=2;NFSU2_TR(0x568bbe);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x9fbbd1d4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9fbbd1d4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9fbbd1d4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B568bc4:{NFSU2_TR(0x568bc4);
if(r1(R+518)){{goto L568c1f;}}
}
B568bc6:L568bc6:{c.instructions+=2;NFSU2_TR(0x568bc6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb4edeb6dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B568bcc:{NFSU2_TR(0x568bcc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5687ffu);}goto L5687ff;}}
}
B568bd2:L568bd2:{c.instructions+=2;NFSU2_TR(0x568bd2);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc519bfc3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc519bfc3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc519bfc3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B568bd8:{NFSU2_TR(0x568bd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568d24;}}
}
B568bde:L568bde:{c.instructions+=2;NFSU2_TR(0x568bde);
u8 U[4];
w4(U+0,u32(0x799aa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568be3:{NFSU2_TR(0x568be3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568be8ull));
TAIL_STATIC(0x51bd10u,51b);
}
B568be8:L568be8:{c.instructions+=4;NFSU2_TR(0x568be8);
__builtin_memmove((R+24),(R+0),4);
}
B568bea:{NFSU2_TR(0x568bea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B568bed:{NFSU2_TR(0x568bed);
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
B568bef:{NFSU2_TR(0x568bef);
if(r1(R+518)){{goto L568d24;}}
}
B568bf5:L568bf5:{c.instructions+=3;NFSU2_TR(0x568bf5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x116ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B568bfb:{NFSU2_TR(0x568bfb);
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
B568bfd:{NFSU2_TR(0x568bfd);
if(r1(R+518)){{goto L568d24;}}
}
B568c03:L568c03:{c.instructions+=3;NFSU2_TR(0x568c03);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B568c09:{NFSU2_TR(0x568c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B568c0c:{NFSU2_TR(0x568c0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568c11ull));
TAIL_STATIC(0x458c40u,458);
}
B568c11:L568c11:{c.instructions+=6;NFSU2_TR(0x568c11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568c12:{NFSU2_TR(0x568c12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568c13:{NFSU2_TR(0x568c13);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x116ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B568c1a:{NFSU2_TR(0x568c1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568c1b:{NFSU2_TR(0x568c1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568c1c:{NFSU2_TR(0x568c1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568c1f:L568c1f:{c.instructions+=6;NFSU2_TR(0x568c1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568c20:{NFSU2_TR(0x568c20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568c21:{NFSU2_TR(0x568c21);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B568c25:{NFSU2_TR(0x568c25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568c26:{NFSU2_TR(0x568c26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568c27:{NFSU2_TR(0x568c27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568c2a:L568c2a:{c.instructions+=3;NFSU2_TR(0x568c2a);
u8 U[4];
w4(U+0,u32(0x799aa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568c2f:{NFSU2_TR(0x568c2f);
u8 U[4];
w4(U+0,u32(0xc519bfc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568c34:{NFSU2_TR(0x568c34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568c39ull));
TAIL_STATIC(0x55dda0u,55d);
}
B568c39:L568c39:{c.instructions+=6;NFSU2_TR(0x568c39);
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
B568c3c:{NFSU2_TR(0x568c3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568c3d:{NFSU2_TR(0x568c3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568c3e:{NFSU2_TR(0x568c3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568c3f:{NFSU2_TR(0x568c3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568c40:{NFSU2_TR(0x568c40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568c43:L568c43:{c.instructions+=2;NFSU2_TR(0x568c43);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B568c49:{NFSU2_TR(0x568c49);
if(r1(R+518)){{goto L568c90;}}
}
B568c4b:L568c4b:{c.instructions+=2;NFSU2_TR(0x568c4b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd05fc3a3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B568c51:{NFSU2_TR(0x568c51);
if(r1(R+518)){{goto L568c6d;}}
}
B568c53:L568c53:{c.instructions+=2;NFSU2_TR(0x568c53);
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
B568c59:{NFSU2_TR(0x568c59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568d24;}}
}
B568c5f:L568c5f:{c.instructions+=6;NFSU2_TR(0x568c5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568c60:{NFSU2_TR(0x568c60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568c61:{NFSU2_TR(0x568c61);
s1(0x864619,u8(0x1ull));
}
B568c68:{NFSU2_TR(0x568c68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568c69:{NFSU2_TR(0x568c69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568c6a:{NFSU2_TR(0x568c6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568c6d:L568c6d:{c.instructions+=2;NFSU2_TR(0x568c6d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568c6e:{NFSU2_TR(0x568c6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568c73ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B568c73:L568c73:{c.instructions+=9;NFSU2_TR(0x568c73);
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
B568c76:{NFSU2_TR(0x568c76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568c77:{NFSU2_TR(0x568c77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568c78:{NFSU2_TR(0x568c78);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B568c7d:{NFSU2_TR(0x568c7d);
s1(0x86461a,u8(0x1ull));
}
B568c84:{NFSU2_TR(0x568c84);
s1(0x864619,u8(0x1ull));
}
B568c8b:{NFSU2_TR(0x568c8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568c8c:{NFSU2_TR(0x568c8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568c8d:{NFSU2_TR(0x568c8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568c90:L568c90:{c.instructions+=3;NFSU2_TR(0x568c90);
__builtin_memmove((R+0),gp(0x864619),1);
}
B568c95:{NFSU2_TR(0x568c95);
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
B568c97:{NFSU2_TR(0x568c97);
if(r1(R+518)){{goto L568d24;}}
}
B568c9d:L568c9d:{c.instructions+=4;NFSU2_TR(0x568c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B568ca0:{NFSU2_TR(0x568ca0);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1dull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B568ca4:{NFSU2_TR(0x568ca4);
s1(0x864619,u8(0x0ull));
}
B568cab:{NFSU2_TR(0x568cab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568cb9;}}
}
B568cad:L568cad:{c.instructions+=2;NFSU2_TR(0x568cad);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B568cb7:{NFSU2_TR(0x568cb7);
if(r1(R+518)){{goto L568d18;}}
}
B568cb9:L568cb9:{c.instructions+=3;NFSU2_TR(0x568cb9);
__builtin_memmove((R+0),gp(0x86461a),1);
}
B568cbe:{NFSU2_TR(0x568cbe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B568cc0:{NFSU2_TR(0x568cc0);
if(r1(R+518)){{goto L568d18;}}
}
B568cc2:L568cc2:{c.instructions+=4;NFSU2_TR(0x568cc2);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B568cc7:{NFSU2_TR(0x568cc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B568cc9:{NFSU2_TR(0x568cc9);
s1(0x86461a,u8(0x0ull));
}
B568cd0:{NFSU2_TR(0x568cd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568cee;}}
}
B568cd2:L568cd2:{c.instructions+=3;NFSU2_TR(0x568cd2);
__builtin_memmove((R+0),gp(0x838998),4);
}
B568cd7:{NFSU2_TR(0x568cd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B568cd9:{NFSU2_TR(0x568cd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568cee;}}
}
B568cdb:L568cdb:{c.instructions+=3;NFSU2_TR(0x568cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568cde:{NFSU2_TR(0x568cde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568cdf:{NFSU2_TR(0x568cdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568ce4ull));
TAIL_STATIC(0x552c80u,552);
}
B568ce4:L568ce4:{c.instructions+=6;NFSU2_TR(0x568ce4);
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
B568ce7:{NFSU2_TR(0x568ce7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568ce8:{NFSU2_TR(0x568ce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568ce9:{NFSU2_TR(0x568ce9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568cea:{NFSU2_TR(0x568cea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568ceb:{NFSU2_TR(0x568ceb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568cee:L568cee:{c.instructions+=4;NFSU2_TR(0x568cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B568cf1:{NFSU2_TR(0x568cf1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568cf3:{NFSU2_TR(0x568cf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568cf4:{NFSU2_TR(0x568cf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568cf9ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B568cf9:L568cf9:{c.instructions+=3;NFSU2_TR(0x568cf9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568cfb:{NFSU2_TR(0x568cfb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568cfd:{NFSU2_TR(0x568cfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568d02ull));
TAIL_STATIC(0x4c2140u,4c2);
}
B568d02:L568d02:{c.instructions+=2;NFSU2_TR(0x568d02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B568d05:{NFSU2_TR(0x568d05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568d0aull));
TAIL_STATIC(0x54f980u,54f);
}
B568d0a:L568d0a:{c.instructions+=2;NFSU2_TR(0x568d0a);
__builtin_memmove((R+4),(R+0),4);
}
B568d0c:{NFSU2_TR(0x568d0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568d11ull));
TAIL_STATIC(0x55bdf0u,55b);
}
B568d11:L568d11:{c.instructions+=5;NFSU2_TR(0x568d11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568d12:{NFSU2_TR(0x568d12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568d13:{NFSU2_TR(0x568d13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568d14:{NFSU2_TR(0x568d14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568d15:{NFSU2_TR(0x568d15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568d18:L568d18:{c.instructions+=1;NFSU2_TR(0x568d18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568d1dull));
TAIL_STATIC(0x54f980u,54f);
}
B568d1d:L568d1d:{c.instructions+=2;NFSU2_TR(0x568d1d);
__builtin_memmove((R+4),(R+0),4);
}
B568d1f:{NFSU2_TR(0x568d1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568d24ull));
TAIL_STATIC(0x55bd60u,55b);
}
B568d24:L568d24:{c.instructions+=1;NFSU2_TR(0x568d24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568d25:L568d25:{c.instructions+=4;NFSU2_TR(0x568d25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568d26:{NFSU2_TR(0x568d26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568d27:{NFSU2_TR(0x568d27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568d28:{NFSU2_TR(0x568d28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568d30:L568d30:{c.instructions+=9;NFSU2_TR(0x568d30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568d31:{NFSU2_TR(0x568d31);
__builtin_memmove((R+20),(R+16),4);
}
B568d33:{NFSU2_TR(0x568d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568d36:{NFSU2_TR(0x568d36);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B568d3b:{NFSU2_TR(0x568d3b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568d3c:{NFSU2_TR(0x568d3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568d3d:{NFSU2_TR(0x568d3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568d3e:{NFSU2_TR(0x568d3e);
__builtin_memmove((R+24),(R+4),4);
}
B568d40:{NFSU2_TR(0x568d40);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5690b6u,569);}
}
B568d46:L568d46:{c.instructions+=1;NFSU2_TR(0x568d46);
if(r1(R+518)){TAIL_STATIC(0x5690a6u,569);}
}
B568d4c:L568d4c:{c.instructions+=2;NFSU2_TR(0x568d4c);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B568d51:{NFSU2_TR(0x568d51);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L568fa8;}}
}
B568d57:L568d57:{c.instructions+=1;NFSU2_TR(0x568d57);
if(r1(R+518)){{goto L568d7c;}}
}
B568d59:L568d59:{c.instructions+=2;NFSU2_TR(0x568d59);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x1fab5998ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1fab5998ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B568d5e:{NFSU2_TR(0x568d5e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L568e51;}}
}
B568d64:L568d64:{c.instructions+=1;NFSU2_TR(0x568d64);
if(r1(R+518)){TAIL_STATIC(0x5691c3u,569);}
}
B568d6a:L568d6a:{c.instructions+=2;NFSU2_TR(0x568d6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9f00f07ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B568d6f:{NFSU2_TR(0x568d6f);
if(r1(R+518)){{goto L568dd4;}}
}
B568d71:L568d71:{c.instructions+=2;NFSU2_TR(0x568d71);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B568d76:{NFSU2_TR(0x568d76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5694c9u,569);}
}
B568d7c:L568d7c:{c.instructions+=4;NFSU2_TR(0x568d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B568d7f:{NFSU2_TR(0x568d7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B568d82:{NFSU2_TR(0x568d82);
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
B568d84:{NFSU2_TR(0x568d84);
if(r1(R+518)){TAIL_STATIC(0x5694c9u,569);}
}
B568d8a:L568d8a:{c.instructions+=6;NFSU2_TR(0x568d8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568d90:{NFSU2_TR(0x568d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B568d93:{NFSU2_TR(0x568d93);
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
B568d95:{NFSU2_TR(0x568d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B568d98:{NFSU2_TR(0x568d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B568d9b:{NFSU2_TR(0x568d9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5694c9u,569);}
}
B568da1:L568da1:{c.instructions+=2;NFSU2_TR(0x568da1);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xaaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B568da7:{NFSU2_TR(0x568da7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5694c9u,569);}
}
B568dad:L568dad:{c.instructions+=4;NFSU2_TR(0x568dad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568dae:{NFSU2_TR(0x568dae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568daf:{NFSU2_TR(0x568daf);
w4(R+4,u32(0x838980ull));
}
B568db4:{NFSU2_TR(0x568db4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568db9ull));
TAIL_STATIC(0x50f1b0u,50f);
}
B568db9:L568db9:{c.instructions+=2;NFSU2_TR(0x568db9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B568dbb:{NFSU2_TR(0x568dbb);
if(r1(R+518)){{goto L568e63;}}
}
B568dc1:L568dc1:{c.instructions+=5;NFSU2_TR(0x568dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B568dc4:{NFSU2_TR(0x568dc4);
u8 U[4];
w4(U+0,u32(0xda15d7e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568dc9:{NFSU2_TR(0x568dc9);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568dce:{NFSU2_TR(0x568dce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568dcf:{NFSU2_TR(0x568dcf);
{goto L568eb5;}
}
B568dd4:L568dd4:{c.instructions+=6;NFSU2_TR(0x568dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568dda:{NFSU2_TR(0x568dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B568ddd:{NFSU2_TR(0x568ddd);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B568ddf:{NFSU2_TR(0x568ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B568de2:{NFSU2_TR(0x568de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B568de5:{NFSU2_TR(0x568de5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5694c9u,569);}
}
B568deb:L568deb:{c.instructions+=2;NFSU2_TR(0x568deb);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0xaaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B568df1:{NFSU2_TR(0x568df1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5694c9u,569);}
}
B568df7:L568df7:{c.instructions+=4;NFSU2_TR(0x568df7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568df8:{NFSU2_TR(0x568df8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568df9:{NFSU2_TR(0x568df9);
w4(R+4,u32(0x85ad40ull));
}
B568dfe:{NFSU2_TR(0x568dfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568e03ull));
TAIL_STATIC(0x5289f0u,528);
}
B568e03:L568e03:{c.instructions+=4;NFSU2_TR(0x568e03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568e04:{NFSU2_TR(0x568e04);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568e05:{NFSU2_TR(0x568e05);
w4(R+4,u32(0x838980ull));
}
B568e0a:{NFSU2_TR(0x568e0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568e0full));
TAIL_STATIC(0x55c230u,55c);
}
B568e0f:L568e0f:{c.instructions+=3;NFSU2_TR(0x568e0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568e10:{NFSU2_TR(0x568e10);
w4(R+4,u32(0x838980ull));
}
B568e15:{NFSU2_TR(0x568e15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568e1aull));
TAIL_STATIC(0x521280u,521);
}
B568e1a:L568e1a:{c.instructions+=2;NFSU2_TR(0x568e1a);
__builtin_memmove((R+4),(R+24),4);
}
B568e1c:{NFSU2_TR(0x568e1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568e21ull));
TAIL_STATIC(0x560c40u,560);
}
B568e21:L568e21:{c.instructions+=2;NFSU2_TR(0x568e21);
__builtin_memmove((R+4),(R+24),4);
}
B568e23:{NFSU2_TR(0x568e23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568e28ull));
TAIL_STATIC(0x560ae0u,560);
}
B568e28:L568e28:{c.instructions+=4;NFSU2_TR(0x568e28);
__builtin_memmove((R+8),gp(0x7fa200),4);
}
B568e2e:{NFSU2_TR(0x568e2e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568e2f:{NFSU2_TR(0x568e2f);
u8 U[4];
w4(U+0,u32(0x6691c08eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568e34:{NFSU2_TR(0x568e34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568e39ull));
TAIL_STATIC(0x55dda0u,55d);
}
B568e39:L568e39:{c.instructions+=8;NFSU2_TR(0x568e39);
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
B568e3c:{NFSU2_TR(0x568e3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568e3d:{NFSU2_TR(0x568e3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x115ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B568e44:{NFSU2_TR(0x568e44);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B568e4b:{NFSU2_TR(0x568e4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568e4c:{NFSU2_TR(0x568e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568e4d:{NFSU2_TR(0x568e4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568e4e:{NFSU2_TR(0x568e4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568e51:L568e51:{c.instructions+=2;NFSU2_TR(0x568e51);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x34dc1becull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x34dc1becull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x34dc1becull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B568e56:{NFSU2_TR(0x568e56);
if(r1(R+518)){TAIL_STATIC(0x5691c3u,569);}
}
B568e5c:L568e5c:{c.instructions+=5;NFSU2_TR(0x568e5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568e5d:{NFSU2_TR(0x568e5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568e5e:{NFSU2_TR(0x568e5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568e5f:{NFSU2_TR(0x568e5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568e60:{NFSU2_TR(0x568e60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568e63:L568e63:{c.instructions+=2;NFSU2_TR(0x568e63);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B568e6a:{NFSU2_TR(0x568e6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568f2f;}}
}
B568e70:L568e70:{c.instructions+=4;NFSU2_TR(0x568e70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568e71:{NFSU2_TR(0x568e71);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568e72:{NFSU2_TR(0x568e72);
w4(R+4,u32(0x838980ull));
}
B568e77:{NFSU2_TR(0x568e77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568e7cull));
TAIL_STATIC(0x521be0u,521);
}
B568e7c:L568e7c:{c.instructions+=2;NFSU2_TR(0x568e7c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B568e7e:{NFSU2_TR(0x568e7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568f2f;}}
}
B568e84:L568e84:{c.instructions+=2;NFSU2_TR(0x568e84);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xe0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B568e88:{NFSU2_TR(0x568e88);
if(r1(R+518)){{goto L568f2f;}}
}
B568e8e:L568e8e:{c.instructions+=6;NFSU2_TR(0x568e8e);
__builtin_memmove((R+0),gp(0x861e74),4);
}
B568e93:{NFSU2_TR(0x568e93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568e94:{NFSU2_TR(0x568e94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568e95:{NFSU2_TR(0x568e95);
w4(R+4,u32(0x85ad40ull));
}
B568e9a:{NFSU2_TR(0x568e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B568e9d:{NFSU2_TR(0x568e9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568ea2ull));
TAIL_STATIC(0x514280u,514);
}
B568ea2:L568ea2:{c.instructions+=2;NFSU2_TR(0x568ea2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B568ea5:{NFSU2_TR(0x568ea5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L568ed5;}}
}
B568ea7:L568ea7:{c.instructions+=4;NFSU2_TR(0x568ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B568eaa:{NFSU2_TR(0x568eaa);
u8 U[4];
w4(U+0,u32(0xd1ac60beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568eaf:{NFSU2_TR(0x568eaf);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568eb4:{NFSU2_TR(0x568eb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568eb5:L568eb5:{c.instructions+=1;NFSU2_TR(0x568eb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568ebaull));
TAIL_STATIC(0x558430u,558);
}
B568eba:L568eba:{c.instructions+=4;NFSU2_TR(0x568eba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B568ebd:{NFSU2_TR(0x568ebd);
__builtin_memmove((R+4),(R+24),4);
}
B568ebf:{NFSU2_TR(0x568ebf);
s4(0x838970,u32(0x34dc1becull));
}
B568ec9:{NFSU2_TR(0x568ec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568eceull));
TAIL_STATIC(0x560b60u,560);
}
B568ece:L568ece:{c.instructions+=5;NFSU2_TR(0x568ece);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568ecf:{NFSU2_TR(0x568ecf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568ed0:{NFSU2_TR(0x568ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568ed1:{NFSU2_TR(0x568ed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568ed2:{NFSU2_TR(0x568ed2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568ed5:L568ed5:{c.instructions+=3;NFSU2_TR(0x568ed5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x22ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B568ed8:{NFSU2_TR(0x568ed8);
w4(R+0,u32(0x44b7167full));
}
B568edd:{NFSU2_TR(0x568edd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568f08;}}
}
B568edf:L568edf:{c.instructions+=3;NFSU2_TR(0x568edf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568ee0:{NFSU2_TR(0x568ee0);
w4(R+4,u32(0x838980ull));
}
B568ee5:{NFSU2_TR(0x568ee5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568eeaull));
TAIL_STATIC(0x50f150u,50f);
}
B568eea:L568eea:{c.instructions+=2;NFSU2_TR(0x568eea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B568eec:{NFSU2_TR(0x568eec);
if(r1(R+518)){{goto L568ef5;}}
}
B568eee:L568eee:{c.instructions+=2;NFSU2_TR(0x568eee);
w4(R+0,u32(0xf58c0cd9ull));
}
B568ef3:{NFSU2_TR(0x568ef3);
{goto L568f08;}
}
B568ef5:L568ef5:{c.instructions+=6;NFSU2_TR(0x568ef5);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B568ef8:{NFSU2_TR(0x568ef8);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xe0ull))));
}
B568efa:{NFSU2_TR(0x568efa);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B568efc:{NFSU2_TR(0x568efc);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B568efe:{NFSU2_TR(0x568efe);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x294e7f46ull))));
}
B568f03:{NFSU2_TR(0x568f03);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x266131ceull))));
}
B568f08:L568f08:{c.instructions+=11;NFSU2_TR(0x568f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B568f0b:{NFSU2_TR(0x568f0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f0c:{NFSU2_TR(0x568f0c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f0e:{NFSU2_TR(0x568f0e);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f13:{NFSU2_TR(0x568f13);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f18:{NFSU2_TR(0x568f18);
u8 U[4];
w4(U+0,u32(0x9f00f07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f1d:{NFSU2_TR(0x568f1d);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f22:{NFSU2_TR(0x568f22);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f27:{NFSU2_TR(0x568f27);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f2c:{NFSU2_TR(0x568f2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f2d:{NFSU2_TR(0x568f2d);
{goto L568f88;}
}
B568f2f:L568f2f:{c.instructions+=3;NFSU2_TR(0x568f2f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x22ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B568f32:{NFSU2_TR(0x568f32);
w4(R+0,u32(0xf5ac2b2aull));
}
B568f37:{NFSU2_TR(0x568f37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L568f63;}}
}
B568f39:L568f39:{c.instructions+=3;NFSU2_TR(0x568f39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f3a:{NFSU2_TR(0x568f3a);
w4(R+4,u32(0x838980ull));
}
B568f3f:{NFSU2_TR(0x568f3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568f44ull));
TAIL_STATIC(0x50f150u,50f);
}
B568f44:L568f44:{c.instructions+=2;NFSU2_TR(0x568f44);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B568f46:{NFSU2_TR(0x568f46);
if(r1(R+518)){{goto L568f4f;}}
}
B568f48:L568f48:{c.instructions+=2;NFSU2_TR(0x568f48);
w4(R+0,u32(0x113eab80ull));
}
B568f4d:{NFSU2_TR(0x568f4d);
{goto L568f63;}
}
B568f4f:L568f4f:{c.instructions+=2;NFSU2_TR(0x568f4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B568f51:{NFSU2_TR(0x568f51);
if(r1(R+518)){{goto L568f5e;}}
}
B568f53:L568f53:{c.instructions+=3;NFSU2_TR(0x568f53);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xe0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B568f57:{NFSU2_TR(0x568f57);
w4(R+0,u32(0x266131ceull));
}
B568f5c:{NFSU2_TR(0x568f5c);
if(r1(R+518)){{goto L568f63;}}
}
B568f5e:L568f5e:{c.instructions+=1;NFSU2_TR(0x568f5e);
w4(R+0,u32(0x8e4312b0ull));
}
B568f63:L568f63:{c.instructions+=10;NFSU2_TR(0x568f63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f64:{NFSU2_TR(0x568f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568f67:{NFSU2_TR(0x568f67);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f69:{NFSU2_TR(0x568f69);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f6e:{NFSU2_TR(0x568f6e);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f73:{NFSU2_TR(0x568f73);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f78:{NFSU2_TR(0x568f78);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f7d:{NFSU2_TR(0x568f7d);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f82:{NFSU2_TR(0x568f82);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f87:{NFSU2_TR(0x568f87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568f88:L568f88:{c.instructions+=1;NFSU2_TR(0x568f88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568f8dull));
TAIL_STATIC(0x558790u,558);
}
B568f8d:L568f8d:{c.instructions+=4;NFSU2_TR(0x568f8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B568f90:{NFSU2_TR(0x568f90);
__builtin_memmove((R+4),(R+24),4);
}
B568f92:{NFSU2_TR(0x568f92);
s4(0x838970,u32(0xb4623f67ull));
}
B568f9c:{NFSU2_TR(0x568f9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568fa1ull));
TAIL_STATIC(0x560b60u,560);
}
B568fa1:L568fa1:{c.instructions+=5;NFSU2_TR(0x568fa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568fa2:{NFSU2_TR(0x568fa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568fa3:{NFSU2_TR(0x568fa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568fa4:{NFSU2_TR(0x568fa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568fa5:{NFSU2_TR(0x568fa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568fa8:L568fa8:{c.instructions+=2;NFSU2_TR(0x568fa8);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x81f0b71aull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x81f0b71aull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B568fad:{NFSU2_TR(0x568fad);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x569075u,569);}
}
B568fb3:L568fb3:{c.instructions+=1;NFSU2_TR(0x568fb3);
if(r1(R+518)){TAIL_STATIC(0x569033u,569);}
}
B568fb5:L568fb5:{c.instructions+=2;NFSU2_TR(0x568fb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x51123592ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B568fba:{NFSU2_TR(0x568fba);
if(r1(R+518)){{goto L568fd7;}}
}
B568fbc:L568fbc:{c.instructions+=2;NFSU2_TR(0x568fbc);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72619778ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B568fc1:{NFSU2_TR(0x568fc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5694c9u,569);}
}
B568fc7:L568fc7:{c.instructions+=3;NFSU2_TR(0x568fc7);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568fc9:{NFSU2_TR(0x568fc9);
__builtin_memmove((R+4),(R+24),4);
}
B568fcb:{NFSU2_TR(0x568fcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x568fd0ull));
TAIL_STATIC(0x560920u,560);
}
B568fd0:L568fd0:{c.instructions+=5;NFSU2_TR(0x568fd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B568fd1:{NFSU2_TR(0x568fd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B568fd2:{NFSU2_TR(0x568fd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B568fd3:{NFSU2_TR(0x568fd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B568fd4:{NFSU2_TR(0x568fd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B568fd7:L568fd7:{c.instructions+=6;NFSU2_TR(0x568fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B568fdd:{NFSU2_TR(0x568fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B568fe0:{NFSU2_TR(0x568fe0);
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
B568fe2:{NFSU2_TR(0x568fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B568fe5:{NFSU2_TR(0x568fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B568fe8:{NFSU2_TR(0x568fe8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5694c9u,569);}
}
B568fee:L568fee:{c.instructions+=2;NFSU2_TR(0x568fee);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xaaull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xaaull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B568ff3:{NFSU2_TR(0x568ff3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5694c9u,569);}
}
B568ff9:L568ff9:{c.instructions+=3;NFSU2_TR(0x568ff9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568ffa:{NFSU2_TR(0x568ffa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B568ffb:{NFSU2_TR(0x568ffb);
w4(R+4,u32(0x838980ull));
TAIL_STATIC(0x569000u,569);
}
XIT:NFSU2_TR_EXIT(0x568,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
