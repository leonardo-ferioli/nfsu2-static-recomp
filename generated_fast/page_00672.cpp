#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_695(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x672,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x672,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_672(u8* __restrict R,Cpu& c);
u32 page_672(Cpu& c){return body_672(c.regs.data(),c);}
__attribute__((noinline)) u32 body_672(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x672000:goto L672000;
case 0x672002:c.instructions+=4;goto B672002;
case 0x672004:c.instructions+=3;goto B672004;
case 0x672006:c.instructions+=2;goto B672006;
case 0x672008:c.instructions+=1;goto B672008;
case 0x67200e:goto L67200e;
case 0x672014:c.instructions+=1;goto B672014;
case 0x672016:goto L672016;
case 0x672019:c.instructions+=2;goto B672019;
case 0x67201e:c.instructions+=1;goto B67201e;
case 0x672020:goto L672020;
case 0x672023:c.instructions+=1;goto B672023;
case 0x672026:goto L672026;
case 0x672029:c.instructions+=2;goto B672029;
case 0x67202c:c.instructions+=1;goto B67202c;
case 0x672031:goto L672031;
case 0x672036:c.instructions+=1;goto B672036;
case 0x67203b:goto L67203b;
case 0x67203d:c.instructions+=1;goto B67203d;
case 0x67203f:goto L67203f;
case 0x672041:c.instructions+=14;goto B672041;
case 0x672044:c.instructions+=13;goto B672044;
case 0x672045:c.instructions+=12;goto B672045;
case 0x672047:c.instructions+=11;goto B672047;
case 0x672049:c.instructions+=10;goto B672049;
case 0x67204b:c.instructions+=9;goto B67204b;
case 0x67204d:c.instructions+=8;goto B67204d;
case 0x67204f:c.instructions+=7;goto B67204f;
case 0x672052:c.instructions+=6;goto B672052;
case 0x672055:c.instructions+=5;goto B672055;
case 0x672058:c.instructions+=4;goto B672058;
case 0x67205d:c.instructions+=3;goto B67205d;
case 0x67205f:c.instructions+=2;goto B67205f;
case 0x672060:c.instructions+=1;goto B672060;
case 0x672063:goto L672063;
case 0x672065:c.instructions+=3;goto B672065;
case 0x672067:c.instructions+=2;goto B672067;
case 0x672069:c.instructions+=1;goto B672069;
case 0x67206b:goto L67206b;
case 0x672071:c.instructions+=2;goto B672071;
case 0x672077:c.instructions+=1;goto B672077;
case 0x672079:goto L672079;
case 0x67207b:c.instructions+=2;goto B67207b;
case 0x672081:c.instructions+=1;goto B672081;
case 0x672083:goto L672083;
case 0x67208a:c.instructions+=1;goto B67208a;
case 0x67208c:goto L67208c;
case 0x67208e:c.instructions+=3;goto B67208e;
case 0x67208f:c.instructions+=2;goto B67208f;
case 0x672091:c.instructions+=1;goto B672091;
case 0x672093:goto L672093;
case 0x672096:goto L672096;
case 0x67209a:c.instructions+=1;goto B67209a;
case 0x6720a0:goto L6720a0;
case 0x6720a6:c.instructions+=1;goto B6720a6;
case 0x6720ac:goto L6720ac;
case 0x6720b1:c.instructions+=2;goto B6720b1;
case 0x6720b6:c.instructions+=1;goto B6720b6;
case 0x6720b8:goto L6720b8;
case 0x6720ba:c.instructions+=2;goto B6720ba;
case 0x6720bc:c.instructions+=1;goto B6720bc;
case 0x6720be:goto L6720be;
case 0x6720c4:c.instructions+=1;goto B6720c4;
case 0x6720c6:goto L6720c6;
case 0x6720c9:c.instructions+=2;goto B6720c9;
case 0x6720ce:c.instructions+=1;goto B6720ce;
case 0x6720d0:goto L6720d0;
case 0x6720d3:c.instructions+=1;goto B6720d3;
case 0x6720d5:goto L6720d5;
case 0x6720d8:c.instructions+=1;goto B6720d8;
case 0x6720da:goto L6720da;
case 0x6720dd:c.instructions+=1;goto B6720dd;
case 0x6720df:goto L6720df;
case 0x6720e2:c.instructions+=1;goto B6720e2;
case 0x6720e4:goto L6720e4;
case 0x6720e7:c.instructions+=1;goto B6720e7;
case 0x6720e9:goto L6720e9;
case 0x6720ec:c.instructions+=1;goto B6720ec;
case 0x6720ee:goto L6720ee;
case 0x6720f1:c.instructions+=1;goto B6720f1;
case 0x6720f3:goto L6720f3;
case 0x6720f6:c.instructions+=4;goto B6720f6;
case 0x6720f8:c.instructions+=3;goto B6720f8;
case 0x6720fe:c.instructions+=2;goto B6720fe;
case 0x672104:c.instructions+=1;goto B672104;
case 0x672106:goto L672106;
case 0x67210c:c.instructions+=1;goto B67210c;
case 0x672111:goto L672111;
case 0x672114:c.instructions+=3;goto B672114;
case 0x672116:c.instructions+=2;goto B672116;
case 0x67211c:c.instructions+=1;goto B67211c;
case 0x67211e:goto L67211e;
case 0x672121:c.instructions+=1;goto B672121;
case 0x672124:goto L672124;
case 0x672127:c.instructions+=1;goto B672127;
case 0x672129:goto L672129;
case 0x67212c:c.instructions+=1;goto B67212c;
case 0x67212e:goto L67212e;
case 0x672131:goto L672131;
case 0x672134:c.instructions+=2;goto B672134;
case 0x672136:c.instructions+=1;goto B672136;
case 0x67213b:goto L67213b;
case 0x67213e:c.instructions+=1;goto B67213e;
case 0x672140:goto L672140;
case 0x672145:c.instructions+=1;goto B672145;
case 0x672147:goto L672147;
case 0x672149:c.instructions+=1;goto B672149;
case 0x67214b:goto L67214b;
case 0x67214e:c.instructions+=3;goto B67214e;
case 0x672151:c.instructions+=2;goto B672151;
case 0x672158:c.instructions+=1;goto B672158;
case 0x67215c:goto L67215c;
case 0x67215f:goto L67215f;
case 0x672160:c.instructions+=2;goto B672160;
case 0x672163:c.instructions+=1;goto B672163;
case 0x672165:goto L672165;
case 0x672168:c.instructions+=3;goto B672168;
case 0x67216a:c.instructions+=2;goto B67216a;
case 0x67216b:c.instructions+=1;goto B67216b;
case 0x67216d:goto L67216d;
case 0x67216f:c.instructions+=1;goto B67216f;
case 0x672171:goto L672171;
case 0x672174:c.instructions+=3;goto B672174;
case 0x672177:c.instructions+=2;goto B672177;
case 0x672179:c.instructions+=1;goto B672179;
case 0x67217c:goto L67217c;
case 0x67217f:goto L67217f;
case 0x672182:c.instructions+=1;goto B672182;
case 0x672184:goto L672184;
case 0x672186:c.instructions+=1;goto B672186;
case 0x672188:goto L672188;
case 0x67218b:c.instructions+=3;goto B67218b;
case 0x67218e:c.instructions+=2;goto B67218e;
case 0x672190:c.instructions+=1;goto B672190;
case 0x672197:goto L672197;
case 0x67219a:goto L67219a;
case 0x67219d:c.instructions+=2;goto B67219d;
case 0x67219f:c.instructions+=1;goto B67219f;
case 0x6721a1:goto L6721a1;
case 0x6721a4:c.instructions+=1;goto B6721a4;
case 0x6721a6:goto L6721a6;
case 0x6721a8:goto L6721a8;
case 0x6721a9:c.instructions+=4;goto B6721a9;
case 0x6721aa:c.instructions+=3;goto B6721aa;
case 0x6721ab:c.instructions+=2;goto B6721ab;
case 0x6721ac:c.instructions+=1;goto B6721ac;
case 0x6721af:goto L6721af;
case 0x6721b3:c.instructions+=5;goto B6721b3;
case 0x6721b6:c.instructions+=4;goto B6721b6;
case 0x6721b8:c.instructions+=3;goto B6721b8;
case 0x6721bb:c.instructions+=2;goto B6721bb;
case 0x6721bd:c.instructions+=1;goto B6721bd;
case 0x6721c2:goto L6721c2;
case 0x6721c4:c.instructions+=2;goto B6721c4;
case 0x6721c6:c.instructions+=1;goto B6721c6;
case 0x6721cc:goto L6721cc;
case 0x6721ce:c.instructions+=2;goto B6721ce;
case 0x6721d1:c.instructions+=1;goto B6721d1;
case 0x6721d3:goto L6721d3;
case 0x6721d6:c.instructions+=7;goto B6721d6;
case 0x6721d8:c.instructions+=6;goto B6721d8;
case 0x6721db:c.instructions+=5;goto B6721db;
case 0x6721e1:c.instructions+=4;goto B6721e1;
case 0x6721e7:c.instructions+=3;goto B6721e7;
case 0x6721e9:c.instructions+=2;goto B6721e9;
case 0x6721ef:c.instructions+=1;goto B6721ef;
case 0x6721f1:goto L6721f1;
case 0x6721f3:c.instructions+=1;goto B6721f3;
case 0x6721f5:goto L6721f5;
case 0x6721f8:c.instructions+=8;goto B6721f8;
case 0x6721fb:c.instructions+=7;goto B6721fb;
case 0x6721fd:c.instructions+=6;goto B6721fd;
case 0x672200:c.instructions+=5;goto B672200;
case 0x672203:c.instructions+=4;goto B672203;
case 0x672205:c.instructions+=3;goto B672205;
case 0x672209:c.instructions+=2;goto B672209;
case 0x67220f:c.instructions+=1;goto B67220f;
case 0x672213:goto L672213;
case 0x672216:goto L672216;
case 0x672218:c.instructions+=4;goto B672218;
case 0x67221a:c.instructions+=3;goto B67221a;
case 0x67221c:c.instructions+=2;goto B67221c;
case 0x67221e:c.instructions+=1;goto B67221e;
case 0x672224:goto L672224;
case 0x67222a:c.instructions+=1;goto B67222a;
case 0x67222c:goto L67222c;
case 0x67222f:c.instructions+=2;goto B67222f;
case 0x672235:c.instructions+=1;goto B672235;
case 0x672237:goto L672237;
case 0x672239:c.instructions+=1;goto B672239;
case 0x67223b:goto L67223b;
case 0x67223e:c.instructions+=1;goto B67223e;
case 0x672241:goto L672241;
case 0x672244:c.instructions+=1;goto B672244;
case 0x672246:goto L672246;
case 0x672249:c.instructions+=1;goto B672249;
case 0x67224b:goto L67224b;
case 0x67224e:goto L67224e;
case 0x672251:c.instructions+=1;goto B672251;
case 0x672256:goto L672256;
case 0x672258:c.instructions+=5;goto B672258;
case 0x672259:c.instructions+=4;goto B672259;
case 0x67225b:c.instructions+=3;goto B67225b;
case 0x67225c:c.instructions+=2;goto B67225c;
case 0x67225e:c.instructions+=1;goto B67225e;
case 0x672263:goto L672263;
case 0x672267:c.instructions+=1;goto B672267;
case 0x672269:goto L672269;
case 0x67226a:c.instructions+=1;goto B67226a;
case 0x67226f:goto L67226f;
case 0x672270:goto L672270;
case 0x672272:c.instructions+=3;goto B672272;
case 0x672273:c.instructions+=2;goto B672273;
case 0x672274:c.instructions+=1;goto B672274;
case 0x672277:goto L672277;
case 0x672279:c.instructions+=6;goto B672279;
case 0x67227a:c.instructions+=5;goto B67227a;
case 0x67227c:c.instructions+=4;goto B67227c;
case 0x67227d:c.instructions+=3;goto B67227d;
case 0x67227f:c.instructions+=2;goto B67227f;
case 0x672282:c.instructions+=1;goto B672282;
case 0x672284:goto L672284;
case 0x672289:c.instructions+=1;goto B672289;
case 0x67228b:goto L67228b;
case 0x67228d:c.instructions+=5;goto B67228d;
case 0x67228e:c.instructions+=4;goto B67228e;
case 0x67228f:c.instructions+=3;goto B67228f;
case 0x672290:c.instructions+=2;goto B672290;
case 0x672293:c.instructions+=1;goto B672293;
case 0x672294:goto L672294;
case 0x672297:c.instructions+=4;goto B672297;
case 0x672299:c.instructions+=3;goto B672299;
case 0x67229b:c.instructions+=2;goto B67229b;
case 0x67229e:c.instructions+=1;goto B67229e;
case 0x6722a5:goto L6722a5;
case 0x6722a7:c.instructions+=3;goto B6722a7;
case 0x6722a9:c.instructions+=2;goto B6722a9;
case 0x6722ab:c.instructions+=1;goto B6722ab;
case 0x6722ad:goto L6722ad;
case 0x6722af:c.instructions+=1;goto B6722af;
case 0x6722b1:goto L6722b1;
case 0x6722b4:c.instructions+=3;goto B6722b4;
case 0x6722b6:c.instructions+=2;goto B6722b6;
case 0x6722b9:c.instructions+=1;goto B6722b9;
case 0x6722bb:goto L6722bb;
case 0x6722bc:c.instructions+=5;goto B6722bc;
case 0x6722bd:c.instructions+=4;goto B6722bd;
case 0x6722be:c.instructions+=3;goto B6722be;
case 0x6722bf:c.instructions+=2;goto B6722bf;
case 0x6722c1:c.instructions+=1;goto B6722c1;
case 0x6722c3:goto L6722c3;
case 0x6722c5:c.instructions+=1;goto B6722c5;
case 0x6722c7:goto L6722c7;
case 0x6722c9:c.instructions+=1;goto B6722c9;
case 0x6722cc:goto L6722cc;
case 0x6722ce:c.instructions+=1;goto B6722ce;
case 0x6722d0:goto L6722d0;
case 0x6722d2:goto L6722d2;
case 0x6722d5:c.instructions+=1;goto B6722d5;
case 0x6722d7:goto L6722d7;
case 0x6722da:goto L6722da;
case 0x6722dd:c.instructions+=2;goto B6722dd;
case 0x6722df:c.instructions+=1;goto B6722df;
case 0x6722e1:goto L6722e1;
case 0x6722e6:goto L6722e6;
case 0x6722e7:c.instructions+=2;goto B6722e7;
case 0x6722e8:c.instructions+=1;goto B6722e8;
case 0x6722e9:goto L6722e9;
case 0x6722ea:c.instructions+=1;goto B6722ea;
case 0x6722ed:goto L6722ed;
case 0x6722f0:c.instructions+=5;goto B6722f0;
case 0x6722f3:c.instructions+=4;goto B6722f3;
case 0x6722f9:c.instructions+=3;goto B6722f9;
case 0x6722fc:c.instructions+=2;goto B6722fc;
case 0x6722ff:c.instructions+=1;goto B6722ff;
case 0x672301:goto L672301;
case 0x672304:c.instructions+=2;goto B672304;
case 0x672306:c.instructions+=1;goto B672306;
case 0x672308:goto L672308;
case 0x67230e:c.instructions+=3;goto B67230e;
case 0x67230f:c.instructions+=2;goto B67230f;
case 0x672310:c.instructions+=1;goto B672310;
case 0x672311:goto L672311;
case 0x672313:c.instructions+=1;goto B672313;
case 0x672315:goto L672315;
case 0x672317:c.instructions+=5;goto B672317;
case 0x672318:c.instructions+=4;goto B672318;
case 0x67231a:c.instructions+=3;goto B67231a;
case 0x67231c:c.instructions+=2;goto B67231c;
case 0x67231d:c.instructions+=1;goto B67231d;
case 0x672322:goto L672322;
case 0x672325:c.instructions+=4;goto B672325;
case 0x672328:c.instructions+=3;goto B672328;
case 0x672329:c.instructions+=2;goto B672329;
case 0x67232c:c.instructions+=1;goto B67232c;
case 0x67232e:goto L67232e;
case 0x672330:c.instructions+=3;goto B672330;
case 0x672333:c.instructions+=2;goto B672333;
case 0x672336:c.instructions+=1;goto B672336;
case 0x672338:goto L672338;
case 0x67233d:c.instructions+=1;goto B67233d;
case 0x67233f:goto L67233f;
case 0x672344:goto L672344;
case 0x672345:c.instructions+=1;goto B672345;
case 0x672348:goto L672348;
case 0x672349:c.instructions+=3;goto B672349;
case 0x67234c:c.instructions+=2;goto B67234c;
case 0x67234e:c.instructions+=1;goto B67234e;
case 0x672350:goto L672350;
case 0x672351:c.instructions+=6;goto B672351;
case 0x672354:c.instructions+=5;goto B672354;
case 0x67235b:c.instructions+=4;goto B67235b;
case 0x67235c:c.instructions+=3;goto B67235c;
case 0x67235d:c.instructions+=2;goto B67235d;
case 0x67235e:c.instructions+=1;goto B67235e;
case 0x67235f:goto L67235f;
case 0x672361:c.instructions+=2;goto B672361;
case 0x672362:c.instructions+=1;goto B672362;
case 0x672364:goto L672364;
case 0x672366:c.instructions+=9;goto B672366;
case 0x672367:c.instructions+=8;goto B672367;
case 0x672369:c.instructions+=7;goto B672369;
case 0x67236a:c.instructions+=6;goto B67236a;
case 0x67236d:c.instructions+=5;goto B67236d;
case 0x67236e:c.instructions+=4;goto B67236e;
case 0x672370:c.instructions+=3;goto B672370;
case 0x672372:c.instructions+=2;goto B672372;
case 0x672373:c.instructions+=1;goto B672373;
case 0x672375:goto L672375;
case 0x672377:goto L672377;
case 0x67237a:c.instructions+=2;goto B67237a;
case 0x67237c:c.instructions+=1;goto B67237c;
case 0x67237e:goto L67237e;
case 0x672380:c.instructions+=1;goto B672380;
case 0x672382:goto L672382;
case 0x672387:c.instructions+=1;goto B672387;
case 0x672389:goto L672389;
case 0x67238b:c.instructions+=4;goto B67238b;
case 0x672390:c.instructions+=3;goto B672390;
case 0x672392:c.instructions+=2;goto B672392;
case 0x672397:c.instructions+=1;goto B672397;
case 0x672399:goto L672399;
case 0x67239b:c.instructions+=1;goto B67239b;
case 0x67239d:goto L67239d;
case 0x67239f:c.instructions+=1;goto B67239f;
case 0x6723a4:goto L6723a4;
case 0x6723a6:c.instructions+=2;goto B6723a6;
case 0x6723a7:c.instructions+=1;goto B6723a7;
case 0x6723a9:goto L6723a9;
case 0x6723ab:c.instructions+=1;goto B6723ab;
case 0x6723b0:goto L6723b0;
case 0x6723b2:goto L6723b2;
case 0x6723b4:c.instructions+=1;goto B6723b4;
case 0x6723b6:goto L6723b6;
case 0x6723bb:c.instructions+=1;goto B6723bb;
case 0x6723bd:goto L6723bd;
case 0x6723bf:c.instructions+=3;goto B6723bf;
case 0x6723c0:c.instructions+=2;goto B6723c0;
case 0x6723c2:c.instructions+=1;goto B6723c2;
case 0x6723c7:goto L6723c7;
case 0x6723c9:c.instructions+=2;goto B6723c9;
case 0x6723cb:c.instructions+=1;goto B6723cb;
case 0x6723cd:goto L6723cd;
case 0x6723cf:c.instructions+=2;goto B6723cf;
case 0x6723d1:c.instructions+=1;goto B6723d1;
case 0x6723d6:goto L6723d6;
case 0x6723d8:c.instructions+=1;goto B6723d8;
case 0x6723da:goto L6723da;
case 0x6723dc:c.instructions+=1;goto B6723dc;
case 0x6723de:goto L6723de;
case 0x6723df:c.instructions+=4;goto B6723df;
case 0x6723e0:c.instructions+=3;goto B6723e0;
case 0x6723e1:c.instructions+=2;goto B6723e1;
case 0x6723e2:c.instructions+=1;goto B6723e2;
case 0x6723e5:goto L6723e5;
case 0x6723e7:c.instructions+=10;goto B6723e7;
case 0x6723e8:c.instructions+=9;goto B6723e8;
case 0x6723ea:c.instructions+=8;goto B6723ea;
case 0x6723ec:c.instructions+=7;goto B6723ec;
case 0x6723ef:c.instructions+=6;goto B6723ef;
case 0x6723f3:c.instructions+=5;goto B6723f3;
case 0x6723f7:c.instructions+=4;goto B6723f7;
case 0x6723fd:c.instructions+=3;goto B6723fd;
case 0x672400:c.instructions+=2;goto B672400;
case 0x672401:c.instructions+=1;goto B672401;
case 0x672404:goto L672404;
case 0x672406:c.instructions+=5;goto B672406;
case 0x672407:c.instructions+=4;goto B672407;
case 0x672409:c.instructions+=3;goto B672409;
case 0x67240c:c.instructions+=2;goto B67240c;
case 0x67240e:c.instructions+=1;goto B67240e;
case 0x672410:goto L672410;
case 0x672413:c.instructions+=4;goto B672413;
case 0x672416:c.instructions+=3;goto B672416;
case 0x672418:c.instructions+=2;goto B672418;
case 0x67241a:c.instructions+=1;goto B67241a;
case 0x67241b:goto L67241b;
case 0x67241c:c.instructions+=1;goto B67241c;
case 0x67241f:goto L67241f;
case 0x672421:c.instructions+=5;goto B672421;
case 0x672422:c.instructions+=4;goto B672422;
case 0x672424:c.instructions+=3;goto B672424;
case 0x672427:c.instructions+=2;goto B672427;
case 0x672429:c.instructions+=1;goto B672429;
case 0x67242b:goto L67242b;
case 0x67242e:c.instructions+=2;goto B67242e;
case 0x672430:c.instructions+=1;goto B672430;
case 0x672432:goto L672432;
case 0x672434:goto L672434;
case 0x672436:c.instructions+=2;goto B672436;
case 0x672439:c.instructions+=1;goto B672439;
case 0x67243c:goto L67243c;
case 0x67243d:c.instructions+=1;goto B67243d;
case 0x672440:goto L672440;
case 0x672442:c.instructions+=5;goto B672442;
case 0x672443:c.instructions+=4;goto B672443;
case 0x672445:c.instructions+=3;goto B672445;
case 0x672448:c.instructions+=2;goto B672448;
case 0x67244a:c.instructions+=1;goto B67244a;
case 0x67244c:goto L67244c;
case 0x67244e:c.instructions+=1;goto B67244e;
case 0x672450:goto L672450;
case 0x672452:c.instructions+=1;goto B672452;
case 0x672455:goto L672455;
case 0x672456:c.instructions+=1;goto B672456;
case 0x672459:goto L672459;
case 0x67245b:c.instructions+=4;goto B67245b;
case 0x67245c:c.instructions+=3;goto B67245c;
case 0x67245e:c.instructions+=2;goto B67245e;
case 0x672462:c.instructions+=1;goto B672462;
case 0x672464:goto L672464;
case 0x672467:c.instructions+=1;goto B672467;
case 0x672469:goto L672469;
case 0x67246c:goto L67246c;
case 0x67246e:c.instructions+=3;goto B67246e;
case 0x672471:c.instructions+=2;goto B672471;
case 0x672474:c.instructions+=1;goto B672474;
case 0x672476:goto L672476;
case 0x672479:c.instructions+=2;goto B672479;
case 0x67247b:c.instructions+=1;goto B67247b;
case 0x67247e:goto L67247e;
case 0x67247f:c.instructions+=1;goto B67247f;
case 0x672482:goto L672482;
case 0x672484:c.instructions+=2;goto B672484;
case 0x672486:c.instructions+=1;goto B672486;
case 0x67248b:goto L67248b;
case 0x67248f:c.instructions+=3;goto B67248f;
case 0x672495:c.instructions+=2;goto B672495;
case 0x672497:c.instructions+=1;goto B672497;
case 0x672498:goto L672498;
case 0x67249a:c.instructions+=5;goto B67249a;
case 0x67249b:c.instructions+=4;goto B67249b;
case 0x67249d:c.instructions+=3;goto B67249d;
case 0x67249f:c.instructions+=2;goto B67249f;
case 0x6724a1:c.instructions+=1;goto B6724a1;
case 0x6724a6:goto L6724a6;
case 0x6724a9:c.instructions+=9;goto B6724a9;
case 0x6724ac:c.instructions+=8;goto B6724ac;
case 0x6724af:c.instructions+=7;goto B6724af;
case 0x6724b2:c.instructions+=6;goto B6724b2;
case 0x6724b5:c.instructions+=5;goto B6724b5;
case 0x6724b8:c.instructions+=4;goto B6724b8;
case 0x6724be:c.instructions+=3;goto B6724be;
case 0x6724c0:c.instructions+=2;goto B6724c0;
case 0x6724c1:c.instructions+=1;goto B6724c1;
case 0x6724c4:goto L6724c4;
case 0x6724c6:c.instructions+=6;goto B6724c6;
case 0x6724c7:c.instructions+=5;goto B6724c7;
case 0x6724c9:c.instructions+=4;goto B6724c9;
case 0x6724ca:c.instructions+=3;goto B6724ca;
case 0x6724cd:c.instructions+=2;goto B6724cd;
case 0x6724ce:c.instructions+=1;goto B6724ce;
case 0x6724d3:goto L6724d3;
case 0x6724d5:c.instructions+=1;goto B6724d5;
case 0x6724d7:goto L6724d7;
case 0x6724d9:c.instructions+=3;goto B6724d9;
case 0x6724da:c.instructions+=2;goto B6724da;
case 0x6724dc:c.instructions+=1;goto B6724dc;
case 0x6724de:goto L6724de;
case 0x6724e2:c.instructions+=1;goto B6724e2;
case 0x6724e4:goto L6724e4;
case 0x6724e6:c.instructions+=1;goto B6724e6;
case 0x6724e8:goto L6724e8;
case 0x6724ec:c.instructions+=1;goto B6724ec;
case 0x6724ee:goto L6724ee;
case 0x6724f1:c.instructions+=2;goto B6724f1;
case 0x6724f4:c.instructions+=1;goto B6724f4;
case 0x6724f9:goto L6724f9;
case 0x6724fb:c.instructions+=1;goto B6724fb;
case 0x6724fd:goto L6724fd;
case 0x672500:c.instructions+=3;goto B672500;
case 0x672502:c.instructions+=2;goto B672502;
case 0x672505:c.instructions+=1;goto B672505;
case 0x672507:goto L672507;
case 0x672509:goto L672509;
case 0x67250b:c.instructions+=1;goto B67250b;
case 0x67250d:goto L67250d;
case 0x67250e:c.instructions+=2;goto B67250e;
case 0x67250f:c.instructions+=1;goto B67250f;
case 0x672514:goto L672514;
case 0x672516:c.instructions+=1;goto B672516;
case 0x672518:goto L672518;
case 0x67251a:c.instructions+=1;goto B67251a;
case 0x67251b:goto L67251b;
case 0x67251c:goto L67251c;
case 0x67251d:c.instructions+=2;goto B67251d;
case 0x67251e:c.instructions+=1;goto B67251e;
case 0x672521:goto L672521;
case 0x672523:c.instructions+=2;goto B672523;
case 0x672525:c.instructions+=1;goto B672525;
case 0x67252a:goto L67252a;
case 0x67252e:c.instructions+=4;goto B67252e;
case 0x672532:c.instructions+=3;goto B672532;
case 0x672538:c.instructions+=2;goto B672538;
case 0x67253a:c.instructions+=1;goto B67253a;
case 0x67253b:goto L67253b;
case 0x67253d:c.instructions+=5;goto B67253d;
case 0x67253e:c.instructions+=4;goto B67253e;
case 0x672540:c.instructions+=3;goto B672540;
case 0x672542:c.instructions+=2;goto B672542;
case 0x672544:c.instructions+=1;goto B672544;
case 0x672549:goto L672549;
case 0x67254c:c.instructions+=11;goto B67254c;
case 0x67254f:c.instructions+=10;goto B67254f;
case 0x672552:c.instructions+=9;goto B672552;
case 0x672555:c.instructions+=8;goto B672555;
case 0x672558:c.instructions+=7;goto B672558;
case 0x67255b:c.instructions+=6;goto B67255b;
case 0x67255e:c.instructions+=5;goto B67255e;
case 0x672561:c.instructions+=4;goto B672561;
case 0x672567:c.instructions+=3;goto B672567;
case 0x672569:c.instructions+=2;goto B672569;
case 0x67256a:c.instructions+=1;goto B67256a;
case 0x67256d:goto L67256d;
case 0x67256f:c.instructions+=8;goto B67256f;
case 0x672570:c.instructions+=7;goto B672570;
case 0x672572:c.instructions+=6;goto B672572;
case 0x672573:c.instructions+=5;goto B672573;
case 0x672574:c.instructions+=4;goto B672574;
case 0x672577:c.instructions+=3;goto B672577;
case 0x672578:c.instructions+=2;goto B672578;
case 0x67257a:c.instructions+=1;goto B67257a;
case 0x67257f:goto L67257f;
case 0x672581:c.instructions+=1;goto B672581;
case 0x672583:goto L672583;
case 0x672585:c.instructions+=1;goto B672585;
case 0x672587:goto L672587;
case 0x67258a:c.instructions+=2;goto B67258a;
case 0x67258d:c.instructions+=1;goto B67258d;
case 0x67258f:goto L67258f;
case 0x672592:c.instructions+=2;goto B672592;
case 0x672595:c.instructions+=1;goto B672595;
case 0x672597:goto L672597;
case 0x67259a:c.instructions+=2;goto B67259a;
case 0x67259d:c.instructions+=1;goto B67259d;
case 0x6725a2:goto L6725a2;
case 0x6725a4:c.instructions+=1;goto B6725a4;
case 0x6725a6:goto L6725a6;
case 0x6725a9:c.instructions+=2;goto B6725a9;
case 0x6725ac:c.instructions+=1;goto B6725ac;
case 0x6725b1:goto L6725b1;
case 0x6725b3:c.instructions+=2;goto B6725b3;
case 0x6725b5:c.instructions+=1;goto B6725b5;
case 0x6725b7:goto L6725b7;
case 0x6725b8:c.instructions+=3;goto B6725b8;
case 0x6725b9:c.instructions+=2;goto B6725b9;
case 0x6725ba:c.instructions+=1;goto B6725ba;
case 0x6725bd:goto L6725bd;
case 0x6725bf:c.instructions+=2;goto B6725bf;
case 0x6725c1:c.instructions+=1;goto B6725c1;
case 0x6725c3:goto L6725c3;
case 0x6725c5:c.instructions+=1;goto B6725c5;
case 0x6725c6:goto L6725c6;
case 0x6725c9:c.instructions+=2;goto B6725c9;
case 0x6725ca:c.instructions+=1;goto B6725ca;
case 0x6725cc:goto L6725cc;
case 0x6725cf:c.instructions+=1;goto B6725cf;
case 0x6725d1:goto L6725d1;
case 0x6725d3:c.instructions+=1;goto B6725d3;
case 0x6725d5:goto L6725d5;
case 0x6725d8:c.instructions+=1;goto B6725d8;
case 0x6725da:goto L6725da;
case 0x6725dc:goto L6725dc;
case 0x6725df:c.instructions+=1;goto B6725df;
case 0x6725e1:goto L6725e1;
case 0x6725e4:c.instructions+=1;goto B6725e4;
case 0x6725e7:goto L6725e7;
case 0x6725e9:goto L6725e9;
case 0x6725eb:c.instructions+=2;goto B6725eb;
case 0x6725ec:c.instructions+=1;goto B6725ec;
case 0x6725ed:goto L6725ed;
case 0x6725f0:c.instructions+=1;goto B6725f0;
case 0x6725f3:goto L6725f3;
case 0x6725f5:c.instructions+=3;goto B6725f5;
case 0x6725f7:c.instructions+=2;goto B6725f7;
case 0x6725f9:c.instructions+=1;goto B6725f9;
case 0x6725ff:goto L6725ff;
case 0x672601:c.instructions+=1;goto B672601;
case 0x672603:goto L672603;
case 0x672606:c.instructions+=3;goto B672606;
case 0x672608:c.instructions+=2;goto B672608;
case 0x67260b:c.instructions+=1;goto B67260b;
case 0x67260d:goto L67260d;
case 0x67260e:c.instructions+=5;goto B67260e;
case 0x67260f:c.instructions+=4;goto B67260f;
case 0x672610:c.instructions+=3;goto B672610;
case 0x672611:c.instructions+=2;goto B672611;
case 0x672613:c.instructions+=1;goto B672613;
case 0x672615:goto L672615;
case 0x672617:c.instructions+=1;goto B672617;
case 0x672619:goto L672619;
case 0x67261c:c.instructions+=5;goto B67261c;
case 0x67261f:c.instructions+=4;goto B67261f;
case 0x672621:c.instructions+=3;goto B672621;
case 0x672623:c.instructions+=2;goto B672623;
case 0x672626:c.instructions+=1;goto B672626;
case 0x672628:goto L672628;
case 0x67262a:c.instructions+=3;goto B67262a;
case 0x67262b:c.instructions+=2;goto B67262b;
case 0x67262c:c.instructions+=1;goto B67262c;
case 0x67262d:goto L67262d;
case 0x672630:c.instructions+=1;goto B672630;
case 0x672632:goto L672632;
case 0x672633:c.instructions+=1;goto B672633;
case 0x672635:goto L672635;
case 0x672638:c.instructions+=1;goto B672638;
case 0x67263b:goto L67263b;
case 0x67263d:c.instructions+=3;goto B67263d;
case 0x67263f:c.instructions+=2;goto B67263f;
case 0x672641:c.instructions+=1;goto B672641;
case 0x672643:goto L672643;
case 0x672645:c.instructions+=1;goto B672645;
case 0x672647:goto L672647;
case 0x67264a:c.instructions+=3;goto B67264a;
case 0x67264c:c.instructions+=2;goto B67264c;
case 0x67264f:c.instructions+=1;goto B67264f;
case 0x672651:goto L672651;
case 0x672652:c.instructions+=5;goto B672652;
case 0x672653:c.instructions+=4;goto B672653;
case 0x672654:c.instructions+=3;goto B672654;
case 0x672655:c.instructions+=2;goto B672655;
case 0x672657:c.instructions+=1;goto B672657;
case 0x672659:goto L672659;
case 0x67265b:goto L67265b;
case 0x67265e:c.instructions+=1;goto B67265e;
case 0x672661:goto L672661;
case 0x672663:c.instructions+=3;goto B672663;
case 0x672665:c.instructions+=2;goto B672665;
case 0x672667:c.instructions+=1;goto B672667;
case 0x672669:goto L672669;
case 0x67266b:c.instructions+=1;goto B67266b;
case 0x67266d:goto L67266d;
case 0x672670:c.instructions+=3;goto B672670;
case 0x672672:c.instructions+=2;goto B672672;
case 0x672675:c.instructions+=1;goto B672675;
case 0x672677:goto L672677;
case 0x672678:c.instructions+=5;goto B672678;
case 0x672679:c.instructions+=4;goto B672679;
case 0x67267a:c.instructions+=3;goto B67267a;
case 0x67267b:c.instructions+=2;goto B67267b;
case 0x67267d:c.instructions+=1;goto B67267d;
case 0x67267f:goto L67267f;
case 0x672681:goto L672681;
case 0x672683:c.instructions+=1;goto B672683;
case 0x672686:goto L672686;
case 0x672688:c.instructions+=1;goto B672688;
case 0x67268d:goto L67268d;
case 0x67268f:c.instructions+=2;goto B67268f;
case 0x672691:c.instructions+=1;goto B672691;
case 0x672696:goto L672696;
case 0x67269c:c.instructions+=2;goto B67269c;
case 0x67269e:c.instructions+=1;goto B67269e;
case 0x67269f:goto L67269f;
case 0x6726a1:c.instructions+=7;goto B6726a1;
case 0x6726a2:c.instructions+=6;goto B6726a2;
case 0x6726a4:c.instructions+=5;goto B6726a4;
case 0x6726a5:c.instructions+=4;goto B6726a5;
case 0x6726a6:c.instructions+=3;goto B6726a6;
case 0x6726a8:c.instructions+=2;goto B6726a8;
case 0x6726aa:c.instructions+=1;goto B6726aa;
case 0x6726af:goto L6726af;
case 0x6726b2:c.instructions+=4;goto B6726b2;
case 0x6726b4:c.instructions+=3;goto B6726b4;
case 0x6726b5:c.instructions+=2;goto B6726b5;
case 0x6726b8:c.instructions+=1;goto B6726b8;
case 0x6726be:goto L6726be;
case 0x6726c0:goto L6726c0;
case 0x6726c1:c.instructions+=4;goto B6726c1;
case 0x6726c3:c.instructions+=3;goto B6726c3;
case 0x6726c4:c.instructions+=2;goto B6726c4;
case 0x6726c5:c.instructions+=1;goto B6726c5;
case 0x6726c8:goto L6726c8;
case 0x6726ca:c.instructions+=5;goto B6726ca;
case 0x6726cb:c.instructions+=4;goto B6726cb;
case 0x6726cd:c.instructions+=3;goto B6726cd;
case 0x6726d0:c.instructions+=2;goto B6726d0;
case 0x6726d1:c.instructions+=1;goto B6726d1;
case 0x6726d6:goto L6726d6;
case 0x6726d8:c.instructions+=1;goto B6726d8;
case 0x6726da:goto L6726da;
case 0x6726dd:c.instructions+=2;goto B6726dd;
case 0x6726e0:c.instructions+=1;goto B6726e0;
case 0x6726e5:goto L6726e5;
case 0x6726e7:c.instructions+=2;goto B6726e7;
case 0x6726e9:c.instructions+=1;goto B6726e9;
case 0x6726eb:goto L6726eb;
case 0x6726ec:c.instructions+=1;goto B6726ec;
case 0x6726ef:goto L6726ef;
case 0x6726f1:c.instructions+=2;goto B6726f1;
case 0x6726f3:c.instructions+=1;goto B6726f3;
case 0x6726f8:goto L6726f8;
case 0x6726fa:c.instructions+=7;goto B6726fa;
case 0x6726fd:c.instructions+=6;goto B6726fd;
case 0x672700:c.instructions+=5;goto B672700;
case 0x672703:c.instructions+=4;goto B672703;
case 0x672706:c.instructions+=3;goto B672706;
case 0x67270c:c.instructions+=2;goto B67270c;
case 0x67270e:c.instructions+=1;goto B67270e;
case 0x67270f:goto L67270f;
case 0x672711:c.instructions+=5;goto B672711;
case 0x672712:c.instructions+=4;goto B672712;
case 0x672714:c.instructions+=3;goto B672714;
case 0x672716:c.instructions+=2;goto B672716;
case 0x672718:c.instructions+=1;goto B672718;
case 0x67271d:goto L67271d;
case 0x672720:c.instructions+=11;goto B672720;
case 0x672723:c.instructions+=10;goto B672723;
case 0x672726:c.instructions+=9;goto B672726;
case 0x672729:c.instructions+=8;goto B672729;
case 0x67272c:c.instructions+=7;goto B67272c;
case 0x67272f:c.instructions+=6;goto B67272f;
case 0x672732:c.instructions+=5;goto B672732;
case 0x672735:c.instructions+=4;goto B672735;
case 0x67273b:c.instructions+=3;goto B67273b;
case 0x67273d:c.instructions+=2;goto B67273d;
case 0x67273e:c.instructions+=1;goto B67273e;
case 0x672741:goto L672741;
case 0x672743:c.instructions+=5;goto B672743;
case 0x672744:c.instructions+=4;goto B672744;
case 0x672746:c.instructions+=3;goto B672746;
case 0x672749:c.instructions+=2;goto B672749;
case 0x67274a:c.instructions+=1;goto B67274a;
case 0x67274f:goto L67274f;
case 0x672751:c.instructions+=1;goto B672751;
case 0x672753:goto L672753;
case 0x672756:c.instructions+=2;goto B672756;
case 0x672759:c.instructions+=1;goto B672759;
case 0x67275b:goto L67275b;
case 0x67275e:c.instructions+=2;goto B67275e;
case 0x672761:c.instructions+=1;goto B672761;
case 0x672763:goto L672763;
case 0x672766:c.instructions+=2;goto B672766;
case 0x672769:c.instructions+=1;goto B672769;
case 0x67276b:goto L67276b;
case 0x67276e:c.instructions+=2;goto B67276e;
case 0x672771:c.instructions+=1;goto B672771;
case 0x672776:goto L672776;
case 0x672778:c.instructions+=3;goto B672778;
case 0x67277a:c.instructions+=2;goto B67277a;
case 0x67277c:c.instructions+=1;goto B67277c;
case 0x67277e:goto L67277e;
case 0x672780:goto L672780;
case 0x672781:c.instructions+=1;goto B672781;
case 0x672784:goto L672784;
case 0x672786:c.instructions+=2;goto B672786;
case 0x672788:c.instructions+=1;goto B672788;
case 0x67278d:goto L67278d;
case 0x67278f:c.instructions+=8;goto B67278f;
case 0x672792:c.instructions+=7;goto B672792;
case 0x672795:c.instructions+=6;goto B672795;
case 0x672798:c.instructions+=5;goto B672798;
case 0x67279b:c.instructions+=4;goto B67279b;
case 0x67279e:c.instructions+=3;goto B67279e;
case 0x6727a4:c.instructions+=2;goto B6727a4;
case 0x6727a6:c.instructions+=1;goto B6727a6;
case 0x6727a7:goto L6727a7;
case 0x6727a9:c.instructions+=5;goto B6727a9;
case 0x6727aa:c.instructions+=4;goto B6727aa;
case 0x6727ac:c.instructions+=3;goto B6727ac;
case 0x6727ae:c.instructions+=2;goto B6727ae;
case 0x6727b0:c.instructions+=1;goto B6727b0;
case 0x6727b5:goto L6727b5;
case 0x6727b8:c.instructions+=13;goto B6727b8;
case 0x6727bb:c.instructions+=12;goto B6727bb;
case 0x6727be:c.instructions+=11;goto B6727be;
case 0x6727c1:c.instructions+=10;goto B6727c1;
case 0x6727c4:c.instructions+=9;goto B6727c4;
case 0x6727c7:c.instructions+=8;goto B6727c7;
case 0x6727ca:c.instructions+=7;goto B6727ca;
case 0x6727cd:c.instructions+=6;goto B6727cd;
case 0x6727d0:c.instructions+=5;goto B6727d0;
case 0x6727d3:c.instructions+=4;goto B6727d3;
case 0x6727d9:c.instructions+=3;goto B6727d9;
case 0x6727db:c.instructions+=2;goto B6727db;
case 0x6727dc:c.instructions+=1;goto B6727dc;
case 0x6727df:goto L6727df;
case 0x6727e1:c.instructions+=8;goto B6727e1;
case 0x6727e2:c.instructions+=7;goto B6727e2;
case 0x6727e4:c.instructions+=6;goto B6727e4;
case 0x6727e5:c.instructions+=5;goto B6727e5;
case 0x6727e6:c.instructions+=4;goto B6727e6;
case 0x6727e9:c.instructions+=3;goto B6727e9;
case 0x6727ea:c.instructions+=2;goto B6727ea;
case 0x6727ec:c.instructions+=1;goto B6727ec;
case 0x6727f1:goto L6727f1;
case 0x6727f3:c.instructions+=1;goto B6727f3;
case 0x6727f5:goto L6727f5;
case 0x6727f8:c.instructions+=2;goto B6727f8;
case 0x6727fb:c.instructions+=1;goto B6727fb;
case 0x6727fd:goto L6727fd;
case 0x672800:c.instructions+=2;goto B672800;
case 0x672803:c.instructions+=1;goto B672803;
case 0x672805:goto L672805;
case 0x672808:c.instructions+=2;goto B672808;
case 0x67280b:c.instructions+=1;goto B67280b;
case 0x672810:goto L672810;
case 0x672812:c.instructions+=1;goto B672812;
case 0x672814:goto L672814;
case 0x672817:c.instructions+=2;goto B672817;
case 0x67281a:c.instructions+=1;goto B67281a;
case 0x67281f:goto L67281f;
case 0x672821:c.instructions+=1;goto B672821;
case 0x672823:goto L672823;
case 0x672826:c.instructions+=2;goto B672826;
case 0x672829:c.instructions+=1;goto B672829;
case 0x67282e:goto L67282e;
case 0x672830:c.instructions+=1;goto B672830;
case 0x672832:goto L672832;
case 0x672834:c.instructions+=2;goto B672834;
case 0x672835:c.instructions+=1;goto B672835;
case 0x672837:goto L672837;
case 0x672839:goto L672839;
case 0x67283a:c.instructions+=3;goto B67283a;
case 0x67283b:c.instructions+=2;goto B67283b;
case 0x67283c:c.instructions+=1;goto B67283c;
case 0x67283f:goto L67283f;
case 0x672841:c.instructions+=2;goto B672841;
case 0x672843:c.instructions+=1;goto B672843;
case 0x672848:goto L672848;
case 0x67284c:c.instructions+=11;goto B67284c;
case 0x67284e:c.instructions+=10;goto B67284e;
case 0x672851:c.instructions+=9;goto B672851;
case 0x672854:c.instructions+=8;goto B672854;
case 0x672857:c.instructions+=7;goto B672857;
case 0x67285a:c.instructions+=6;goto B67285a;
case 0x67285d:c.instructions+=5;goto B67285d;
case 0x672860:c.instructions+=4;goto B672860;
case 0x672863:c.instructions+=3;goto B672863;
case 0x672869:c.instructions+=2;goto B672869;
case 0x67286b:c.instructions+=1;goto B67286b;
case 0x67286c:goto L67286c;
case 0x67286e:c.instructions+=5;goto B67286e;
case 0x67286f:c.instructions+=4;goto B67286f;
case 0x672871:c.instructions+=3;goto B672871;
case 0x672873:c.instructions+=2;goto B672873;
case 0x672875:c.instructions+=1;goto B672875;
case 0x67287a:goto L67287a;
case 0x67287d:c.instructions+=16;goto B67287d;
case 0x672880:c.instructions+=15;goto B672880;
case 0x672883:c.instructions+=14;goto B672883;
case 0x672886:c.instructions+=13;goto B672886;
case 0x672889:c.instructions+=12;goto B672889;
case 0x67288c:c.instructions+=11;goto B67288c;
case 0x67288f:c.instructions+=10;goto B67288f;
case 0x672892:c.instructions+=9;goto B672892;
case 0x672894:c.instructions+=8;goto B672894;
case 0x672898:c.instructions+=7;goto B672898;
case 0x67289b:c.instructions+=6;goto B67289b;
case 0x67289e:c.instructions+=5;goto B67289e;
case 0x6728a1:c.instructions+=4;goto B6728a1;
case 0x6728a7:c.instructions+=3;goto B6728a7;
case 0x6728a9:c.instructions+=2;goto B6728a9;
case 0x6728aa:c.instructions+=1;goto B6728aa;
case 0x6728ad:goto L6728ad;
case 0x6728af:c.instructions+=8;goto B6728af;
case 0x6728b0:c.instructions+=7;goto B6728b0;
case 0x6728b2:c.instructions+=6;goto B6728b2;
case 0x6728b3:c.instructions+=5;goto B6728b3;
case 0x6728b4:c.instructions+=4;goto B6728b4;
case 0x6728b7:c.instructions+=3;goto B6728b7;
case 0x6728b8:c.instructions+=2;goto B6728b8;
case 0x6728ba:c.instructions+=1;goto B6728ba;
case 0x6728bf:goto L6728bf;
case 0x6728c1:c.instructions+=1;goto B6728c1;
case 0x6728c3:goto L6728c3;
case 0x6728c6:c.instructions+=2;goto B6728c6;
case 0x6728c9:c.instructions+=1;goto B6728c9;
case 0x6728cb:goto L6728cb;
case 0x6728ce:c.instructions+=2;goto B6728ce;
case 0x6728d1:c.instructions+=1;goto B6728d1;
case 0x6728d3:goto L6728d3;
case 0x6728d6:c.instructions+=2;goto B6728d6;
case 0x6728d9:c.instructions+=1;goto B6728d9;
case 0x6728db:goto L6728db;
case 0x6728de:c.instructions+=2;goto B6728de;
case 0x6728e1:c.instructions+=1;goto B6728e1;
case 0x6728e3:goto L6728e3;
case 0x6728e6:c.instructions+=2;goto B6728e6;
case 0x6728e9:c.instructions+=1;goto B6728e9;
case 0x6728eb:goto L6728eb;
case 0x6728ee:c.instructions+=2;goto B6728ee;
case 0x6728f1:c.instructions+=1;goto B6728f1;
case 0x6728f6:goto L6728f6;
case 0x6728f8:c.instructions+=1;goto B6728f8;
case 0x6728fa:goto L6728fa;
case 0x6728fd:c.instructions+=2;goto B6728fd;
case 0x672900:c.instructions+=1;goto B672900;
case 0x672905:goto L672905;
case 0x672907:c.instructions+=1;goto B672907;
case 0x672909:goto L672909;
case 0x67290c:c.instructions+=2;goto B67290c;
case 0x67290f:c.instructions+=1;goto B67290f;
case 0x672914:goto L672914;
case 0x672916:c.instructions+=1;goto B672916;
case 0x672918:goto L672918;
case 0x67291a:c.instructions+=2;goto B67291a;
case 0x67291b:c.instructions+=1;goto B67291b;
case 0x67291d:goto L67291d;
case 0x67291f:goto L67291f;
case 0x672920:c.instructions+=3;goto B672920;
case 0x672921:c.instructions+=2;goto B672921;
case 0x672922:c.instructions+=1;goto B672922;
case 0x672925:goto L672925;
case 0x672927:c.instructions+=2;goto B672927;
case 0x672929:c.instructions+=1;goto B672929;
case 0x67292e:goto L67292e;
case 0x672930:c.instructions+=6;goto B672930;
case 0x672933:c.instructions+=5;goto B672933;
case 0x672936:c.instructions+=4;goto B672936;
case 0x672939:c.instructions+=3;goto B672939;
case 0x67293f:c.instructions+=2;goto B67293f;
case 0x672941:c.instructions+=1;goto B672941;
case 0x672942:goto L672942;
case 0x672944:c.instructions+=5;goto B672944;
case 0x672945:c.instructions+=4;goto B672945;
case 0x672947:c.instructions+=3;goto B672947;
case 0x672949:c.instructions+=2;goto B672949;
case 0x67294b:c.instructions+=1;goto B67294b;
case 0x672950:goto L672950;
case 0x672953:c.instructions+=9;goto B672953;
case 0x672956:c.instructions+=8;goto B672956;
case 0x672959:c.instructions+=7;goto B672959;
case 0x67295c:c.instructions+=6;goto B67295c;
case 0x67295f:c.instructions+=5;goto B67295f;
case 0x672962:c.instructions+=4;goto B672962;
case 0x672968:c.instructions+=3;goto B672968;
case 0x67296a:c.instructions+=2;goto B67296a;
case 0x67296b:c.instructions+=1;goto B67296b;
case 0x67296e:goto L67296e;
case 0x672970:c.instructions+=8;goto B672970;
case 0x672971:c.instructions+=7;goto B672971;
case 0x672973:c.instructions+=6;goto B672973;
case 0x672974:c.instructions+=5;goto B672974;
case 0x672975:c.instructions+=4;goto B672975;
case 0x672978:c.instructions+=3;goto B672978;
case 0x672979:c.instructions+=2;goto B672979;
case 0x67297b:c.instructions+=1;goto B67297b;
case 0x672980:goto L672980;
case 0x672982:c.instructions+=1;goto B672982;
case 0x672984:goto L672984;
case 0x672987:c.instructions+=2;goto B672987;
case 0x67298a:c.instructions+=1;goto B67298a;
case 0x67298c:goto L67298c;
case 0x67298f:c.instructions+=2;goto B67298f;
case 0x672992:c.instructions+=1;goto B672992;
case 0x672997:goto L672997;
case 0x672999:c.instructions+=1;goto B672999;
case 0x67299b:goto L67299b;
case 0x67299e:c.instructions+=2;goto B67299e;
case 0x6729a1:c.instructions+=1;goto B6729a1;
case 0x6729a6:goto L6729a6;
case 0x6729a8:c.instructions+=1;goto B6729a8;
case 0x6729aa:goto L6729aa;
case 0x6729ac:c.instructions+=2;goto B6729ac;
case 0x6729ad:c.instructions+=1;goto B6729ad;
case 0x6729af:goto L6729af;
case 0x6729b1:goto L6729b1;
case 0x6729b2:c.instructions+=3;goto B6729b2;
case 0x6729b3:c.instructions+=2;goto B6729b3;
case 0x6729b4:c.instructions+=1;goto B6729b4;
case 0x6729b7:goto L6729b7;
case 0x6729b9:c.instructions+=2;goto B6729b9;
case 0x6729bb:c.instructions+=1;goto B6729bb;
case 0x6729c0:goto L6729c0;
case 0x6729c4:c.instructions+=4;goto B6729c4;
case 0x6729c8:c.instructions+=3;goto B6729c8;
case 0x6729ce:c.instructions+=2;goto B6729ce;
case 0x6729d0:c.instructions+=1;goto B6729d0;
case 0x6729d1:goto L6729d1;
case 0x6729d3:c.instructions+=5;goto B6729d3;
case 0x6729d4:c.instructions+=4;goto B6729d4;
case 0x6729d6:c.instructions+=3;goto B6729d6;
case 0x6729d8:c.instructions+=2;goto B6729d8;
case 0x6729da:c.instructions+=1;goto B6729da;
case 0x6729df:goto L6729df;
case 0x6729e2:c.instructions+=7;goto B6729e2;
case 0x6729e5:c.instructions+=6;goto B6729e5;
case 0x6729e8:c.instructions+=5;goto B6729e8;
case 0x6729eb:c.instructions+=4;goto B6729eb;
case 0x6729f1:c.instructions+=3;goto B6729f1;
case 0x6729f3:c.instructions+=2;goto B6729f3;
case 0x6729f4:c.instructions+=1;goto B6729f4;
case 0x6729f7:goto L6729f7;
case 0x6729f9:c.instructions+=5;goto B6729f9;
case 0x6729fa:c.instructions+=4;goto B6729fa;
case 0x6729fc:c.instructions+=3;goto B6729fc;
case 0x6729ff:c.instructions+=2;goto B6729ff;
case 0x672a00:c.instructions+=1;goto B672a00;
case 0x672a05:goto L672a05;
case 0x672a07:c.instructions+=1;goto B672a07;
case 0x672a09:goto L672a09;
case 0x672a0b:c.instructions+=1;goto B672a0b;
case 0x672a0d:goto L672a0d;
case 0x672a10:c.instructions+=2;goto B672a10;
case 0x672a13:c.instructions+=1;goto B672a13;
case 0x672a15:goto L672a15;
case 0x672a18:c.instructions+=2;goto B672a18;
case 0x672a1b:c.instructions+=1;goto B672a1b;
case 0x672a20:goto L672a20;
case 0x672a22:c.instructions+=2;goto B672a22;
case 0x672a24:c.instructions+=1;goto B672a24;
case 0x672a26:goto L672a26;
case 0x672a27:c.instructions+=1;goto B672a27;
case 0x672a2a:goto L672a2a;
case 0x672a2c:c.instructions+=2;goto B672a2c;
case 0x672a2e:c.instructions+=1;goto B672a2e;
case 0x672a33:goto L672a33;
case 0x672a35:c.instructions+=8;goto B672a35;
case 0x672a38:c.instructions+=7;goto B672a38;
case 0x672a3b:c.instructions+=6;goto B672a3b;
case 0x672a3e:c.instructions+=5;goto B672a3e;
case 0x672a41:c.instructions+=4;goto B672a41;
case 0x672a47:c.instructions+=3;goto B672a47;
case 0x672a4e:c.instructions+=2;goto B672a4e;
case 0x672a50:c.instructions+=1;goto B672a50;
case 0x672a51:goto L672a51;
case 0x672a53:c.instructions+=5;goto B672a53;
case 0x672a54:c.instructions+=4;goto B672a54;
case 0x672a56:c.instructions+=3;goto B672a56;
case 0x672a58:c.instructions+=2;goto B672a58;
case 0x672a5a:c.instructions+=1;goto B672a5a;
case 0x672a5f:goto L672a5f;
case 0x672a62:c.instructions+=13;goto B672a62;
case 0x672a65:c.instructions+=12;goto B672a65;
case 0x672a68:c.instructions+=11;goto B672a68;
case 0x672a6b:c.instructions+=10;goto B672a6b;
case 0x672a6e:c.instructions+=9;goto B672a6e;
case 0x672a71:c.instructions+=8;goto B672a71;
case 0x672a74:c.instructions+=7;goto B672a74;
case 0x672a77:c.instructions+=6;goto B672a77;
case 0x672a7a:c.instructions+=5;goto B672a7a;
case 0x672a7d:c.instructions+=4;goto B672a7d;
case 0x672a83:c.instructions+=3;goto B672a83;
case 0x672a85:c.instructions+=2;goto B672a85;
case 0x672a86:c.instructions+=1;goto B672a86;
case 0x672a89:goto L672a89;
case 0x672a8b:c.instructions+=5;goto B672a8b;
case 0x672a8c:c.instructions+=4;goto B672a8c;
case 0x672a8e:c.instructions+=3;goto B672a8e;
case 0x672a91:c.instructions+=2;goto B672a91;
case 0x672a92:c.instructions+=1;goto B672a92;
case 0x672a97:goto L672a97;
case 0x672a99:c.instructions+=1;goto B672a99;
case 0x672a9b:goto L672a9b;
case 0x672a9e:c.instructions+=2;goto B672a9e;
case 0x672aa1:c.instructions+=1;goto B672aa1;
case 0x672aa3:goto L672aa3;
case 0x672aa6:c.instructions+=2;goto B672aa6;
case 0x672aa9:c.instructions+=1;goto B672aa9;
case 0x672aab:goto L672aab;
case 0x672aae:c.instructions+=2;goto B672aae;
case 0x672ab1:c.instructions+=1;goto B672ab1;
case 0x672ab3:goto L672ab3;
case 0x672ab6:c.instructions+=2;goto B672ab6;
case 0x672ab9:c.instructions+=1;goto B672ab9;
case 0x672abb:goto L672abb;
case 0x672abe:c.instructions+=2;goto B672abe;
case 0x672ac1:c.instructions+=1;goto B672ac1;
case 0x672ac3:goto L672ac3;
case 0x672ac5:c.instructions+=2;goto B672ac5;
case 0x672ac6:c.instructions+=1;goto B672ac6;
case 0x672ac8:goto L672ac8;
case 0x672aca:goto L672aca;
case 0x672acb:c.instructions+=1;goto B672acb;
case 0x672ace:goto L672ace;
case 0x672ad0:c.instructions+=2;goto B672ad0;
case 0x672ad2:c.instructions+=1;goto B672ad2;
case 0x672ad7:goto L672ad7;
case 0x672ad9:c.instructions+=15;goto B672ad9;
case 0x672adc:c.instructions+=14;goto B672adc;
case 0x672adf:c.instructions+=13;goto B672adf;
case 0x672ae2:c.instructions+=12;goto B672ae2;
case 0x672ae5:c.instructions+=11;goto B672ae5;
case 0x672ae8:c.instructions+=10;goto B672ae8;
case 0x672aeb:c.instructions+=9;goto B672aeb;
case 0x672aee:c.instructions+=8;goto B672aee;
case 0x672af1:c.instructions+=7;goto B672af1;
case 0x672af4:c.instructions+=6;goto B672af4;
case 0x672af7:c.instructions+=5;goto B672af7;
case 0x672afa:c.instructions+=4;goto B672afa;
case 0x672afd:c.instructions+=3;goto B672afd;
case 0x672b03:c.instructions+=2;goto B672b03;
case 0x672b05:c.instructions+=1;goto B672b05;
case 0x672b06:goto L672b06;
case 0x672b08:c.instructions+=8;goto B672b08;
case 0x672b09:c.instructions+=7;goto B672b09;
case 0x672b0b:c.instructions+=6;goto B672b0b;
case 0x672b0c:c.instructions+=5;goto B672b0c;
case 0x672b0d:c.instructions+=4;goto B672b0d;
case 0x672b10:c.instructions+=3;goto B672b10;
case 0x672b11:c.instructions+=2;goto B672b11;
case 0x672b13:c.instructions+=1;goto B672b13;
case 0x672b18:goto L672b18;
case 0x672b1a:c.instructions+=1;goto B672b1a;
case 0x672b20:goto L672b20;
case 0x672b23:c.instructions+=2;goto B672b23;
case 0x672b26:c.instructions+=1;goto B672b26;
case 0x672b2c:goto L672b2c;
case 0x672b2f:c.instructions+=2;goto B672b2f;
case 0x672b32:c.instructions+=1;goto B672b32;
case 0x672b38:goto L672b38;
case 0x672b3b:c.instructions+=2;goto B672b3b;
case 0x672b3e:c.instructions+=1;goto B672b3e;
case 0x672b40:goto L672b40;
case 0x672b43:c.instructions+=2;goto B672b43;
case 0x672b46:c.instructions+=1;goto B672b46;
case 0x672b48:goto L672b48;
case 0x672b4b:c.instructions+=2;goto B672b4b;
case 0x672b4e:c.instructions+=1;goto B672b4e;
case 0x672b50:goto L672b50;
case 0x672b53:c.instructions+=2;goto B672b53;
case 0x672b56:c.instructions+=1;goto B672b56;
case 0x672b5b:goto L672b5b;
case 0x672b5d:c.instructions+=1;goto B672b5d;
case 0x672b5f:goto L672b5f;
case 0x672b62:c.instructions+=2;goto B672b62;
case 0x672b65:c.instructions+=1;goto B672b65;
case 0x672b6a:goto L672b6a;
case 0x672b6c:c.instructions+=1;goto B672b6c;
case 0x672b6e:goto L672b6e;
case 0x672b71:c.instructions+=2;goto B672b71;
case 0x672b74:c.instructions+=1;goto B672b74;
case 0x672b79:goto L672b79;
case 0x672b7b:c.instructions+=1;goto B672b7b;
case 0x672b7d:goto L672b7d;
case 0x672b80:c.instructions+=2;goto B672b80;
case 0x672b83:c.instructions+=1;goto B672b83;
case 0x672b88:goto L672b88;
case 0x672b8a:c.instructions+=1;goto B672b8a;
case 0x672b8c:goto L672b8c;
case 0x672b8f:c.instructions+=2;goto B672b8f;
case 0x672b92:c.instructions+=1;goto B672b92;
case 0x672b97:goto L672b97;
case 0x672b99:c.instructions+=1;goto B672b99;
case 0x672b9b:goto L672b9b;
case 0x672b9e:c.instructions+=2;goto B672b9e;
case 0x672ba1:c.instructions+=1;goto B672ba1;
case 0x672ba6:goto L672ba6;
case 0x672ba8:c.instructions+=1;goto B672ba8;
case 0x672baa:goto L672baa;
case 0x672bad:c.instructions+=2;goto B672bad;
case 0x672bb0:c.instructions+=1;goto B672bb0;
case 0x672bb5:goto L672bb5;
case 0x672bb7:c.instructions+=1;goto B672bb7;
case 0x672bb9:goto L672bb9;
case 0x672bbb:c.instructions+=2;goto B672bbb;
case 0x672bbc:c.instructions+=1;goto B672bbc;
case 0x672bbe:goto L672bbe;
case 0x672bc0:goto L672bc0;
case 0x672bc1:c.instructions+=3;goto B672bc1;
case 0x672bc2:c.instructions+=2;goto B672bc2;
case 0x672bc3:c.instructions+=1;goto B672bc3;
case 0x672bc6:goto L672bc6;
case 0x672bc8:c.instructions+=2;goto B672bc8;
case 0x672bca:c.instructions+=1;goto B672bca;
case 0x672bcf:goto L672bcf;
case 0x672bd1:c.instructions+=15;goto B672bd1;
case 0x672bd4:c.instructions+=14;goto B672bd4;
case 0x672bd7:c.instructions+=13;goto B672bd7;
case 0x672bda:c.instructions+=12;goto B672bda;
case 0x672bdd:c.instructions+=11;goto B672bdd;
case 0x672be0:c.instructions+=10;goto B672be0;
case 0x672be3:c.instructions+=9;goto B672be3;
case 0x672be6:c.instructions+=8;goto B672be6;
case 0x672be9:c.instructions+=7;goto B672be9;
case 0x672bec:c.instructions+=6;goto B672bec;
case 0x672bef:c.instructions+=5;goto B672bef;
case 0x672bf2:c.instructions+=4;goto B672bf2;
case 0x672bf5:c.instructions+=3;goto B672bf5;
case 0x672bfb:c.instructions+=2;goto B672bfb;
case 0x672bfd:c.instructions+=1;goto B672bfd;
case 0x672bfe:goto L672bfe;
case 0x672c00:c.instructions+=8;goto B672c00;
case 0x672c01:c.instructions+=7;goto B672c01;
case 0x672c03:c.instructions+=6;goto B672c03;
case 0x672c04:c.instructions+=5;goto B672c04;
case 0x672c05:c.instructions+=4;goto B672c05;
case 0x672c08:c.instructions+=3;goto B672c08;
case 0x672c09:c.instructions+=2;goto B672c09;
case 0x672c0b:c.instructions+=1;goto B672c0b;
case 0x672c10:goto L672c10;
case 0x672c12:c.instructions+=1;goto B672c12;
case 0x672c18:goto L672c18;
case 0x672c1b:c.instructions+=2;goto B672c1b;
case 0x672c1e:c.instructions+=1;goto B672c1e;
case 0x672c24:goto L672c24;
case 0x672c27:c.instructions+=2;goto B672c27;
case 0x672c2a:c.instructions+=1;goto B672c2a;
case 0x672c30:goto L672c30;
case 0x672c33:c.instructions+=2;goto B672c33;
case 0x672c36:c.instructions+=1;goto B672c36;
case 0x672c38:goto L672c38;
case 0x672c3b:c.instructions+=2;goto B672c3b;
case 0x672c3e:c.instructions+=1;goto B672c3e;
case 0x672c40:goto L672c40;
case 0x672c43:c.instructions+=2;goto B672c43;
case 0x672c46:c.instructions+=1;goto B672c46;
case 0x672c48:goto L672c48;
case 0x672c4b:c.instructions+=2;goto B672c4b;
case 0x672c4e:c.instructions+=1;goto B672c4e;
case 0x672c53:goto L672c53;
case 0x672c55:c.instructions+=1;goto B672c55;
case 0x672c57:goto L672c57;
case 0x672c5a:c.instructions+=2;goto B672c5a;
case 0x672c5d:c.instructions+=1;goto B672c5d;
case 0x672c62:goto L672c62;
case 0x672c64:c.instructions+=1;goto B672c64;
case 0x672c66:goto L672c66;
case 0x672c69:c.instructions+=2;goto B672c69;
case 0x672c6c:c.instructions+=1;goto B672c6c;
case 0x672c71:goto L672c71;
case 0x672c73:c.instructions+=1;goto B672c73;
case 0x672c75:goto L672c75;
case 0x672c78:c.instructions+=2;goto B672c78;
case 0x672c7b:c.instructions+=1;goto B672c7b;
case 0x672c80:goto L672c80;
case 0x672c82:c.instructions+=1;goto B672c82;
case 0x672c84:goto L672c84;
case 0x672c87:c.instructions+=2;goto B672c87;
case 0x672c8a:c.instructions+=1;goto B672c8a;
case 0x672c8f:goto L672c8f;
case 0x672c91:c.instructions+=1;goto B672c91;
case 0x672c93:goto L672c93;
case 0x672c96:c.instructions+=2;goto B672c96;
case 0x672c98:c.instructions+=1;goto B672c98;
case 0x672c9a:goto L672c9a;
case 0x672c9d:c.instructions+=4;goto B672c9d;
case 0x672ca0:c.instructions+=3;goto B672ca0;
case 0x672ca2:c.instructions+=2;goto B672ca2;
case 0x672ca5:c.instructions+=1;goto B672ca5;
case 0x672ca7:goto L672ca7;
case 0x672ca9:goto L672ca9;
case 0x672cab:goto L672cab;
case 0x672cad:c.instructions+=2;goto B672cad;
case 0x672cae:c.instructions+=1;goto B672cae;
case 0x672cb0:goto L672cb0;
case 0x672cb2:goto L672cb2;
case 0x672cb3:c.instructions+=3;goto B672cb3;
case 0x672cb4:c.instructions+=2;goto B672cb4;
case 0x672cb5:c.instructions+=1;goto B672cb5;
case 0x672cb8:goto L672cb8;
case 0x672cba:c.instructions+=2;goto B672cba;
case 0x672cbc:c.instructions+=1;goto B672cbc;
case 0x672cc1:goto L672cc1;
case 0x672cc3:c.instructions+=8;goto B672cc3;
case 0x672cc6:c.instructions+=7;goto B672cc6;
case 0x672cc9:c.instructions+=6;goto B672cc9;
case 0x672ccc:c.instructions+=5;goto B672ccc;
case 0x672ccf:c.instructions+=4;goto B672ccf;
case 0x672cd2:c.instructions+=3;goto B672cd2;
case 0x672cd8:c.instructions+=2;goto B672cd8;
case 0x672cda:c.instructions+=1;goto B672cda;
case 0x672cdb:goto L672cdb;
case 0x672cdd:c.instructions+=8;goto B672cdd;
case 0x672cde:c.instructions+=7;goto B672cde;
case 0x672ce0:c.instructions+=6;goto B672ce0;
case 0x672ce1:c.instructions+=5;goto B672ce1;
case 0x672ce2:c.instructions+=4;goto B672ce2;
case 0x672ce5:c.instructions+=3;goto B672ce5;
case 0x672ce6:c.instructions+=2;goto B672ce6;
case 0x672ce8:c.instructions+=1;goto B672ce8;
case 0x672ced:goto L672ced;
case 0x672cef:c.instructions+=1;goto B672cef;
case 0x672cf1:goto L672cf1;
case 0x672cf4:c.instructions+=2;goto B672cf4;
case 0x672cf7:c.instructions+=1;goto B672cf7;
case 0x672cf9:goto L672cf9;
case 0x672cfc:c.instructions+=2;goto B672cfc;
case 0x672cff:c.instructions+=1;goto B672cff;
case 0x672d04:goto L672d04;
case 0x672d06:c.instructions+=1;goto B672d06;
case 0x672d08:goto L672d08;
case 0x672d0b:c.instructions+=2;goto B672d0b;
case 0x672d0e:c.instructions+=1;goto B672d0e;
case 0x672d13:goto L672d13;
case 0x672d15:c.instructions+=1;goto B672d15;
case 0x672d17:goto L672d17;
case 0x672d1a:c.instructions+=2;goto B672d1a;
case 0x672d1d:c.instructions+=1;goto B672d1d;
case 0x672d22:goto L672d22;
case 0x672d24:c.instructions+=1;goto B672d24;
case 0x672d26:goto L672d26;
case 0x672d29:c.instructions+=2;goto B672d29;
case 0x672d2c:c.instructions+=1;goto B672d2c;
case 0x672d31:goto L672d31;
case 0x672d33:c.instructions+=1;goto B672d33;
case 0x672d35:goto L672d35;
case 0x672d37:c.instructions+=2;goto B672d37;
case 0x672d38:c.instructions+=1;goto B672d38;
case 0x672d3a:goto L672d3a;
case 0x672d3c:goto L672d3c;
case 0x672d3d:c.instructions+=3;goto B672d3d;
case 0x672d3e:c.instructions+=2;goto B672d3e;
case 0x672d3f:c.instructions+=1;goto B672d3f;
case 0x672d42:goto L672d42;
case 0x672d44:c.instructions+=4;goto B672d44;
case 0x672d45:c.instructions+=3;goto B672d45;
case 0x672d47:c.instructions+=2;goto B672d47;
case 0x672d49:c.instructions+=1;goto B672d49;
case 0x672d4e:goto L672d4e;
case 0x672d50:c.instructions+=11;goto B672d50;
case 0x672d52:c.instructions+=10;goto B672d52;
case 0x672d53:c.instructions+=9;goto B672d53;
case 0x672d56:c.instructions+=8;goto B672d56;
case 0x672d59:c.instructions+=7;goto B672d59;
case 0x672d5c:c.instructions+=6;goto B672d5c;
case 0x672d5f:c.instructions+=5;goto B672d5f;
case 0x672d62:c.instructions+=4;goto B672d62;
case 0x672d65:c.instructions+=3;goto B672d65;
case 0x672d68:c.instructions+=2;goto B672d68;
case 0x672d6e:c.instructions+=1;goto B672d6e;
case 0x672d75:goto L672d75;
case 0x672d77:goto L672d77;
case 0x672d79:c.instructions+=2;goto B672d79;
case 0x672d7a:c.instructions+=1;goto B672d7a;
case 0x672d7b:goto L672d7b;
case 0x672d7d:c.instructions+=7;goto B672d7d;
case 0x672d7e:c.instructions+=6;goto B672d7e;
case 0x672d80:c.instructions+=5;goto B672d80;
case 0x672d81:c.instructions+=4;goto B672d81;
case 0x672d82:c.instructions+=3;goto B672d82;
case 0x672d84:c.instructions+=2;goto B672d84;
case 0x672d86:c.instructions+=1;goto B672d86;
case 0x672d8b:goto L672d8b;
case 0x672d8e:c.instructions+=16;goto B672d8e;
case 0x672d92:c.instructions+=15;goto B672d92;
case 0x672d95:c.instructions+=14;goto B672d95;
case 0x672d99:c.instructions+=13;goto B672d99;
case 0x672d9c:c.instructions+=12;goto B672d9c;
case 0x672d9f:c.instructions+=11;goto B672d9f;
case 0x672da2:c.instructions+=10;goto B672da2;
case 0x672da5:c.instructions+=9;goto B672da5;
case 0x672da8:c.instructions+=8;goto B672da8;
case 0x672dab:c.instructions+=7;goto B672dab;
case 0x672dae:c.instructions+=6;goto B672dae;
case 0x672db1:c.instructions+=5;goto B672db1;
case 0x672db3:c.instructions+=4;goto B672db3;
case 0x672db4:c.instructions+=3;goto B672db4;
case 0x672db7:c.instructions+=2;goto B672db7;
case 0x672dba:c.instructions+=1;goto B672dba;
case 0x672dc0:goto L672dc0;
case 0x672dc2:goto L672dc2;
case 0x672dc3:c.instructions+=4;goto B672dc3;
case 0x672dc5:c.instructions+=3;goto B672dc5;
case 0x672dc6:c.instructions+=2;goto B672dc6;
case 0x672dc7:c.instructions+=1;goto B672dc7;
case 0x672dca:goto L672dca;
case 0x672dcc:c.instructions+=8;goto B672dcc;
case 0x672dcd:c.instructions+=7;goto B672dcd;
case 0x672dcf:c.instructions+=6;goto B672dcf;
case 0x672dd0:c.instructions+=5;goto B672dd0;
case 0x672dd1:c.instructions+=4;goto B672dd1;
case 0x672dd4:c.instructions+=3;goto B672dd4;
case 0x672dd5:c.instructions+=2;goto B672dd5;
case 0x672dd7:c.instructions+=1;goto B672dd7;
case 0x672ddc:goto L672ddc;
case 0x672dde:c.instructions+=1;goto B672dde;
case 0x672de0:goto L672de0;
case 0x672de3:c.instructions+=2;goto B672de3;
case 0x672de6:c.instructions+=1;goto B672de6;
case 0x672de8:goto L672de8;
case 0x672deb:c.instructions+=2;goto B672deb;
case 0x672dee:c.instructions+=1;goto B672dee;
case 0x672df0:goto L672df0;
case 0x672df3:c.instructions+=2;goto B672df3;
case 0x672df6:c.instructions+=1;goto B672df6;
case 0x672df8:goto L672df8;
case 0x672dfb:c.instructions+=2;goto B672dfb;
case 0x672dfe:c.instructions+=1;goto B672dfe;
case 0x672e00:goto L672e00;
case 0x672e03:c.instructions+=2;goto B672e03;
case 0x672e06:c.instructions+=1;goto B672e06;
case 0x672e0b:goto L672e0b;
case 0x672e0d:c.instructions+=1;goto B672e0d;
case 0x672e0f:goto L672e0f;
case 0x672e12:c.instructions+=2;goto B672e12;
case 0x672e15:c.instructions+=1;goto B672e15;
case 0x672e1a:goto L672e1a;
case 0x672e1c:c.instructions+=1;goto B672e1c;
case 0x672e1e:goto L672e1e;
case 0x672e21:c.instructions+=2;goto B672e21;
case 0x672e24:c.instructions+=1;goto B672e24;
case 0x672e29:goto L672e29;
case 0x672e2b:c.instructions+=1;goto B672e2b;
case 0x672e2d:goto L672e2d;
case 0x672e30:c.instructions+=2;goto B672e30;
case 0x672e33:c.instructions+=1;goto B672e33;
case 0x672e38:goto L672e38;
case 0x672e3a:c.instructions+=1;goto B672e3a;
case 0x672e3c:goto L672e3c;
case 0x672e3e:c.instructions+=2;goto B672e3e;
case 0x672e3f:c.instructions+=1;goto B672e3f;
case 0x672e41:goto L672e41;
case 0x672e43:goto L672e43;
case 0x672e44:c.instructions+=3;goto B672e44;
case 0x672e45:c.instructions+=2;goto B672e45;
case 0x672e46:c.instructions+=1;goto B672e46;
case 0x672e49:goto L672e49;
case 0x672e4b:c.instructions+=5;goto B672e4b;
case 0x672e4c:c.instructions+=4;goto B672e4c;
case 0x672e4d:c.instructions+=3;goto B672e4d;
case 0x672e4f:c.instructions+=2;goto B672e4f;
case 0x672e51:c.instructions+=1;goto B672e51;
case 0x672e56:goto L672e56;
case 0x672e59:c.instructions+=11;goto B672e59;
case 0x672e5b:c.instructions+=10;goto B672e5b;
case 0x672e61:c.instructions+=9;goto B672e61;
case 0x672e63:c.instructions+=8;goto B672e63;
case 0x672e64:c.instructions+=7;goto B672e64;
case 0x672e65:c.instructions+=6;goto B672e65;
case 0x672e66:c.instructions+=5;goto B672e66;
case 0x672e67:c.instructions+=4;goto B672e67;
case 0x672e69:c.instructions+=3;goto B672e69;
case 0x672e6a:c.instructions+=2;goto B672e6a;
case 0x672e6c:c.instructions+=1;goto B672e6c;
case 0x672e6f:goto L672e6f;
case 0x672e71:goto L672e71;
case 0x672e72:c.instructions+=4;goto B672e72;
case 0x672e78:c.instructions+=3;goto B672e78;
case 0x672e7a:c.instructions+=2;goto B672e7a;
case 0x672e7b:c.instructions+=1;goto B672e7b;
case 0x672e7c:goto L672e7c;
case 0x672e7e:c.instructions+=8;goto B672e7e;
case 0x672e7f:c.instructions+=7;goto B672e7f;
case 0x672e81:c.instructions+=6;goto B672e81;
case 0x672e82:c.instructions+=5;goto B672e82;
case 0x672e83:c.instructions+=4;goto B672e83;
case 0x672e84:c.instructions+=3;goto B672e84;
case 0x672e86:c.instructions+=2;goto B672e86;
case 0x672e88:c.instructions+=1;goto B672e88;
case 0x672e8d:goto L672e8d;
case 0x672e90:c.instructions+=12;goto B672e90;
case 0x672e96:c.instructions+=11;goto B672e96;
case 0x672e99:c.instructions+=10;goto B672e99;
case 0x672e9b:c.instructions+=9;goto B672e9b;
case 0x672e9c:c.instructions+=8;goto B672e9c;
case 0x672e9d:c.instructions+=7;goto B672e9d;
case 0x672e9e:c.instructions+=6;goto B672e9e;
case 0x672e9f:c.instructions+=5;goto B672e9f;
case 0x672ea2:c.instructions+=4;goto B672ea2;
case 0x672ea5:c.instructions+=3;goto B672ea5;
case 0x672ea7:c.instructions+=2;goto B672ea7;
case 0x672eaa:c.instructions+=1;goto B672eaa;
case 0x672eab:goto L672eab;
case 0x672ead:goto L672ead;
case 0x672eaf:goto L672eaf;
case 0x672eb2:c.instructions+=2;goto B672eb2;
case 0x672eb4:c.instructions+=1;goto B672eb4;
case 0x672eb6:goto L672eb6;
case 0x672eb7:c.instructions+=1;goto B672eb7;
case 0x672ebc:goto L672ebc;
case 0x672ebf:goto L672ebf;
case 0x672ec0:c.instructions+=5;goto B672ec0;
case 0x672ec1:c.instructions+=4;goto B672ec1;
case 0x672ec3:c.instructions+=3;goto B672ec3;
case 0x672ec4:c.instructions+=2;goto B672ec4;
case 0x672ec5:c.instructions+=1;goto B672ec5;
case 0x672ec8:goto L672ec8;
case 0x672eca:c.instructions+=7;goto B672eca;
case 0x672ecb:c.instructions+=6;goto B672ecb;
case 0x672ecd:c.instructions+=5;goto B672ecd;
case 0x672ece:c.instructions+=4;goto B672ece;
case 0x672ecf:c.instructions+=3;goto B672ecf;
case 0x672ed1:c.instructions+=2;goto B672ed1;
case 0x672ed3:c.instructions+=1;goto B672ed3;
case 0x672ed8:goto L672ed8;
case 0x672edb:c.instructions+=8;goto B672edb;
case 0x672ede:c.instructions+=7;goto B672ede;
case 0x672ee1:c.instructions+=6;goto B672ee1;
case 0x672ee4:c.instructions+=5;goto B672ee4;
case 0x672ee6:c.instructions+=4;goto B672ee6;
case 0x672ee7:c.instructions+=3;goto B672ee7;
case 0x672eea:c.instructions+=2;goto B672eea;
case 0x672eed:c.instructions+=1;goto B672eed;
case 0x672ef3:goto L672ef3;
case 0x672ef5:goto L672ef5;
case 0x672ef6:c.instructions+=4;goto B672ef6;
case 0x672ef8:c.instructions+=3;goto B672ef8;
case 0x672ef9:c.instructions+=2;goto B672ef9;
case 0x672efa:c.instructions+=1;goto B672efa;
case 0x672efd:goto L672efd;
case 0x672eff:c.instructions+=7;goto B672eff;
case 0x672f00:c.instructions+=6;goto B672f00;
case 0x672f02:c.instructions+=5;goto B672f02;
case 0x672f03:c.instructions+=4;goto B672f03;
case 0x672f04:c.instructions+=3;goto B672f04;
case 0x672f06:c.instructions+=2;goto B672f06;
case 0x672f08:c.instructions+=1;goto B672f08;
case 0x672f0d:goto L672f0d;
case 0x672f10:c.instructions+=8;goto B672f10;
case 0x672f13:c.instructions+=7;goto B672f13;
case 0x672f16:c.instructions+=6;goto B672f16;
case 0x672f19:c.instructions+=5;goto B672f19;
case 0x672f1b:c.instructions+=4;goto B672f1b;
case 0x672f1c:c.instructions+=3;goto B672f1c;
case 0x672f1f:c.instructions+=2;goto B672f1f;
case 0x672f22:c.instructions+=1;goto B672f22;
case 0x672f28:goto L672f28;
case 0x672f2a:goto L672f2a;
case 0x672f2b:c.instructions+=4;goto B672f2b;
case 0x672f2d:c.instructions+=3;goto B672f2d;
case 0x672f2e:c.instructions+=2;goto B672f2e;
case 0x672f2f:c.instructions+=1;goto B672f2f;
case 0x672f32:goto L672f32;
case 0x672f34:c.instructions+=7;goto B672f34;
case 0x672f35:c.instructions+=6;goto B672f35;
case 0x672f37:c.instructions+=5;goto B672f37;
case 0x672f38:c.instructions+=4;goto B672f38;
case 0x672f39:c.instructions+=3;goto B672f39;
case 0x672f3b:c.instructions+=2;goto B672f3b;
case 0x672f3d:c.instructions+=1;goto B672f3d;
case 0x672f42:goto L672f42;
case 0x672f45:c.instructions+=10;goto B672f45;
case 0x672f48:c.instructions+=9;goto B672f48;
case 0x672f4b:c.instructions+=8;goto B672f4b;
case 0x672f4e:c.instructions+=7;goto B672f4e;
case 0x672f51:c.instructions+=6;goto B672f51;
case 0x672f54:c.instructions+=5;goto B672f54;
case 0x672f56:c.instructions+=4;goto B672f56;
case 0x672f57:c.instructions+=3;goto B672f57;
case 0x672f5a:c.instructions+=2;goto B672f5a;
case 0x672f5d:c.instructions+=1;goto B672f5d;
case 0x672f63:goto L672f63;
case 0x672f65:goto L672f65;
case 0x672f66:c.instructions+=4;goto B672f66;
case 0x672f68:c.instructions+=3;goto B672f68;
case 0x672f69:c.instructions+=2;goto B672f69;
case 0x672f6a:c.instructions+=1;goto B672f6a;
case 0x672f6d:goto L672f6d;
case 0x672f6f:c.instructions+=7;goto B672f6f;
case 0x672f70:c.instructions+=6;goto B672f70;
case 0x672f72:c.instructions+=5;goto B672f72;
case 0x672f73:c.instructions+=4;goto B672f73;
case 0x672f76:c.instructions+=3;goto B672f76;
case 0x672f77:c.instructions+=2;goto B672f77;
case 0x672f79:c.instructions+=1;goto B672f79;
case 0x672f7e:goto L672f7e;
case 0x672f80:c.instructions+=1;goto B672f80;
case 0x672f82:goto L672f82;
case 0x672f83:c.instructions+=5;goto B672f83;
case 0x672f86:c.instructions+=4;goto B672f86;
case 0x672f88:c.instructions+=3;goto B672f88;
case 0x672f8b:c.instructions+=2;goto B672f8b;
case 0x672f8d:c.instructions+=1;goto B672f8d;
case 0x672f8f:goto L672f8f;
case 0x672f90:c.instructions+=3;goto B672f90;
case 0x672f92:c.instructions+=2;goto B672f92;
case 0x672f93:c.instructions+=1;goto B672f93;
case 0x672f95:goto L672f95;
case 0x672f97:goto L672f97;
case 0x672f98:c.instructions+=1;goto B672f98;
case 0x672f9a:goto L672f9a;
case 0x672f9c:c.instructions+=2;goto B672f9c;
case 0x672f9d:c.instructions+=1;goto B672f9d;
case 0x672f9f:goto L672f9f;
case 0x672fa2:c.instructions+=1;goto B672fa2;
case 0x672fa4:goto L672fa4;
case 0x672fa7:c.instructions+=3;goto B672fa7;
case 0x672faa:c.instructions+=2;goto B672faa;
case 0x672fad:c.instructions+=1;goto B672fad;
case 0x672fb2:goto L672fb2;
case 0x672fb4:c.instructions+=1;goto B672fb4;
case 0x672fb6:goto L672fb6;
case 0x672fb8:goto L672fb8;
case 0x672fb9:goto L672fb9;
case 0x672fba:c.instructions+=2;goto B672fba;
case 0x672fbb:c.instructions+=1;goto B672fbb;
case 0x672fbe:goto L672fbe;
case 0x672fc0:c.instructions+=2;goto B672fc0;
case 0x672fc2:c.instructions+=1;goto B672fc2;
case 0x672fc7:goto L672fc7;
case 0x672fc9:c.instructions+=6;goto B672fc9;
case 0x672fcc:c.instructions+=5;goto B672fcc;
case 0x672fcf:c.instructions+=4;goto B672fcf;
case 0x672fd2:c.instructions+=3;goto B672fd2;
case 0x672fd8:c.instructions+=2;goto B672fd8;
case 0x672fda:c.instructions+=1;goto B672fda;
case 0x672fdb:goto L672fdb;
case 0x672fdd:c.instructions+=5;goto B672fdd;
case 0x672fde:c.instructions+=4;goto B672fde;
case 0x672fe0:c.instructions+=3;goto B672fe0;
case 0x672fe2:c.instructions+=2;goto B672fe2;
case 0x672fe4:c.instructions+=1;goto B672fe4;
case 0x672fe9:goto L672fe9;
case 0x672fec:c.instructions+=6;goto B672fec;
case 0x672fef:c.instructions+=5;goto B672fef;
case 0x672ff2:c.instructions+=4;goto B672ff2;
case 0x672ff5:c.instructions+=3;goto B672ff5;
case 0x672ff8:c.instructions+=2;goto B672ff8;
case 0x672ffb:c.instructions+=1;goto B672ffb;
default:missing_instruction(c.pc);}
B672000:L672000:{c.instructions+=5;NFSU2_TR(0x672000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B672002:{NFSU2_TR(0x672002);
__builtin_memmove((R+8),(R+0),4);
}
B672004:{NFSU2_TR(0x672004);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B672006:{NFSU2_TR(0x672006);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B672008:{NFSU2_TR(0x672008);
if(r1(R+518)){{goto L67219a;}}
}
B67200e:L67200e:{c.instructions+=2;NFSU2_TR(0x67200e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B672014:{NFSU2_TR(0x672014);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672020;}}
}
B672016:L672016:{c.instructions+=3;NFSU2_TR(0x672016);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B672019:{NFSU2_TR(0x672019);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffull))));
}
B67201e:{NFSU2_TR(0x67201e);
{goto L672026;}
}
B672020:L672020:{c.instructions+=2;NFSU2_TR(0x672020);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B672023:{NFSU2_TR(0x672023);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B672026:L672026:{c.instructions+=3;NFSU2_TR(0x672026);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B672029:{NFSU2_TR(0x672029);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B67202c:{NFSU2_TR(0x67202c);
TAIL_STATIC(0x671f9cu,671);
}
B672031:L672031:{c.instructions+=2;NFSU2_TR(0x672031);
w4(R+0,u32(0x80004005ull));
}
B672036:{NFSU2_TR(0x672036);
{goto L6721a8;}
}
B67203b:L67203b:{c.instructions+=2;NFSU2_TR(0x67203b);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67203d:{NFSU2_TR(0x67203d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672031u);}goto L672031;}}
}
B67203f:L67203f:{c.instructions+=15;NFSU2_TR(0x67203f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B672041:{NFSU2_TR(0x672041);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672044:{NFSU2_TR(0x672044);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B672045:{NFSU2_TR(0x672045);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B672047:{NFSU2_TR(0x672047);
__builtin_memmove((R+0),(R+24),4);
}
B672049:{NFSU2_TR(0x672049);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B67204b:{NFSU2_TR(0x67204b);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
}
B67204d:{NFSU2_TR(0x67204d);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B67204f:{NFSU2_TR(0x67204f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672052:{NFSU2_TR(0x672052);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672055:{NFSU2_TR(0x672055);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672058:{NFSU2_TR(0x672058);
w4(R+4,u32(0xffffull));
}
B67205d:{NFSU2_TR(0x67205d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B67205f:{NFSU2_TR(0x67205f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B672060:{NFSU2_TR(0x672060);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672063:L672063:{c.instructions+=4;NFSU2_TR(0x672063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B672065:{NFSU2_TR(0x672065);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B672067:{NFSU2_TR(0x672067);
__builtin_memmove((R+28),(R+0),4);
}
B672069:{NFSU2_TR(0x672069);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6720b8;}}
}
B67206b:L67206b:{c.instructions+=3;NFSU2_TR(0x67206b);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xf0001800ull))));
}
B672071:{NFSU2_TR(0x672071);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x90000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B672077:{NFSU2_TR(0x672077);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672096;}}
}
B672079:L672079:{c.instructions+=3;NFSU2_TR(0x672079);
__builtin_memmove((R+8),(R+0),4);
}
B67207b:{NFSU2_TR(0x67207b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B672081:{NFSU2_TR(0x672081);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67208c;}}
}
B672083:L672083:{c.instructions+=2;NFSU2_TR(0x672083);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67208a:{NFSU2_TR(0x67208a);
{goto L672096;}
}
B67208c:L67208c:{c.instructions+=4;NFSU2_TR(0x67208c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B67208e:{NFSU2_TR(0x67208e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B67208f:{NFSU2_TR(0x67208f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B672091:{NFSU2_TR(0x672091);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672096;}}
}
B672093:L672093:{c.instructions+=1;NFSU2_TR(0x672093);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672096:L672096:{c.instructions+=2;NFSU2_TR(0x672096);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67209a:{NFSU2_TR(0x67209a);
if(r1(R+518)){{goto L672131;}}
}
B6720a0:L6720a0:{c.instructions+=2;NFSU2_TR(0x6720a0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb0000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6720a6:{NFSU2_TR(0x6720a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672131;}}
}
B6720ac:L6720ac:{c.instructions+=3;NFSU2_TR(0x6720ac);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B6720b1:{NFSU2_TR(0x6720b1);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B6720b6:{NFSU2_TR(0x6720b6);
{goto L672131;}
}
B6720b8:L6720b8:{c.instructions+=3;NFSU2_TR(0x6720b8);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B6720ba:{NFSU2_TR(0x6720ba);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6720bc:{NFSU2_TR(0x6720bc);
if(r1(R+518)){{goto L67213b;}}
}
B6720be:L6720be:{c.instructions+=2;NFSU2_TR(0x6720be);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6720c4:{NFSU2_TR(0x6720c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6720d0;}}
}
B6720c6:L6720c6:{c.instructions+=3;NFSU2_TR(0x6720c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6720c9:{NFSU2_TR(0x6720c9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffull))));
}
B6720ce:{NFSU2_TR(0x6720ce);
{goto L672124;}
}
B6720d0:L6720d0:{c.instructions+=2;NFSU2_TR(0x6720d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6720d3:{NFSU2_TR(0x6720d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672111;}}
}
B6720d5:L6720d5:{c.instructions+=2;NFSU2_TR(0x6720d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
}
B6720d8:{NFSU2_TR(0x6720d8);
if(r1(R+512)){{goto L672111;}}
}
B6720da:L6720da:{c.instructions+=2;NFSU2_TR(0x6720da);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4aull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6720dd:{NFSU2_TR(0x6720dd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6720f3;}}
}
B6720df:L6720df:{c.instructions+=2;NFSU2_TR(0x6720df);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4bull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6720e2:{NFSU2_TR(0x6720e2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L672111;}}
}
B6720e4:L6720e4:{c.instructions+=2;NFSU2_TR(0x6720e4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4dull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6720e7:{NFSU2_TR(0x6720e7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6720f3;}}
}
B6720e9:L6720e9:{c.instructions+=2;NFSU2_TR(0x6720e9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x51ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x51ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6720ec:{NFSU2_TR(0x6720ec);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L672111;}}
}
B6720ee:L6720ee:{c.instructions+=2;NFSU2_TR(0x6720ee);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x57ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x57ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6720f1:{NFSU2_TR(0x6720f1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L672111;}}
}
B6720f3:L6720f3:{c.instructions+=5;NFSU2_TR(0x6720f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6720f6:{NFSU2_TR(0x6720f6);
__builtin_memmove((R+12),(R+8),4);
}
B6720f8:{NFSU2_TR(0x6720f8);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xf0001800ull))));
}
B6720fe:{NFSU2_TR(0x6720fe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb0000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B672104:{NFSU2_TR(0x672104);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672111;}}
}
B672106:L672106:{c.instructions+=2;NFSU2_TR(0x672106);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
}
B67210c:{NFSU2_TR(0x67210c);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B672111:L672111:{c.instructions+=4;NFSU2_TR(0x672111);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B672114:{NFSU2_TR(0x672114);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B672116:{NFSU2_TR(0x672116);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x200ull))));
}
B67211c:{NFSU2_TR(0x67211c);
if(r1(R+512)){{goto L672129;}}
}
B67211e:L67211e:{c.instructions+=2;NFSU2_TR(0x67211e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B672121:{NFSU2_TR(0x672121);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B672124:L672124:{c.instructions+=2;NFSU2_TR(0x672124);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B672127:{NFSU2_TR(0x672127);
{goto L672131;}
}
B672129:L672129:{c.instructions+=2;NFSU2_TR(0x672129);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x51ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67212c:{NFSU2_TR(0x67212c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672131;}}
}
B67212e:L67212e:{c.instructions+=1;NFSU2_TR(0x67212e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B672131:L672131:{c.instructions+=3;NFSU2_TR(0x672131);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B672134:{NFSU2_TR(0x672134);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B672136:{NFSU2_TR(0x672136);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672063u);}goto L672063;}
}
B67213b:L67213b:{c.instructions+=2;NFSU2_TR(0x67213b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67213e:{NFSU2_TR(0x67213e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B672140:L672140:{c.instructions+=2;NFSU2_TR(0x672140);
u8 U[15];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B672145:{NFSU2_TR(0x672145);
if(r1(R+518)){{goto L67215f;}}
}
B672147:L672147:{c.instructions+=2;NFSU2_TR(0x672147);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B672149:{NFSU2_TR(0x672149);
if(r1(R+518)){{goto L67215c;}}
}
B67214b:L67214b:{c.instructions+=4;NFSU2_TR(0x67214b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67214e:{NFSU2_TR(0x67214e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B672151:{NFSU2_TR(0x672151);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(0x5ull));
s4(u32(r4(U+4)),r4(U+8));
}
B672158:{NFSU2_TR(0x672158);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67215c:L67215c:{c.instructions+=1;NFSU2_TR(0x67215c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67215f:L67215f:{c.instructions+=3;NFSU2_TR(0x67215f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B672160:{NFSU2_TR(0x672160);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B672163:{NFSU2_TR(0x672163);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672140u);}goto L672140;}}
}
B672165:L672165:{c.instructions+=4;NFSU2_TR(0x672165);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672168:{NFSU2_TR(0x672168);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67216a:{NFSU2_TR(0x67216a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B67216b:{NFSU2_TR(0x67216b);
if(r1(R+518)){{goto L67217f;}}
}
B67216d:L67216d:{c.instructions+=2;NFSU2_TR(0x67216d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67216f:{NFSU2_TR(0x67216f);
if(r1(R+518)){{goto L67217c;}}
}
B672171:L672171:{c.instructions+=4;NFSU2_TR(0x672171);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B672174:{NFSU2_TR(0x672174);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B672177:{NFSU2_TR(0x672177);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B672179:{NFSU2_TR(0x672179);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67217c:L67217c:{c.instructions+=1;NFSU2_TR(0x67217c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67217f:L67217f:{c.instructions+=2;NFSU2_TR(0x67217f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672182:{NFSU2_TR(0x672182);
if(r1(R+518)){{goto L67219a;}}
}
B672184:L672184:{c.instructions+=2;NFSU2_TR(0x672184);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672186:{NFSU2_TR(0x672186);
if(r1(R+518)){{goto L672197;}}
}
B672188:L672188:{c.instructions+=4;NFSU2_TR(0x672188);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67218b:{NFSU2_TR(0x67218b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67218e:{NFSU2_TR(0x67218e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B672190:{NFSU2_TR(0x672190);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B672197:L672197:{c.instructions+=1;NFSU2_TR(0x672197);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67219a:L67219a:{c.instructions+=3;NFSU2_TR(0x67219a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67219d:{NFSU2_TR(0x67219d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67219f:{NFSU2_TR(0x67219f);
if(r1(R+518)){{goto L6721a6;}}
}
B6721a1:L6721a1:{c.instructions+=2;NFSU2_TR(0x6721a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6721a4:{NFSU2_TR(0x6721a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6721a6:L6721a6:{c.instructions+=1;NFSU2_TR(0x6721a6);
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
B6721a8:L6721a8:{c.instructions+=5;NFSU2_TR(0x6721a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6721a9:{NFSU2_TR(0x6721a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6721aa:{NFSU2_TR(0x6721aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6721ab:{NFSU2_TR(0x6721ab);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6721ac:{NFSU2_TR(0x6721ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6721af:L6721af:{c.instructions+=6;NFSU2_TR(0x6721af);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x2ull))));
}
B6721b3:{NFSU2_TR(0x6721b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6721b6:{NFSU2_TR(0x6721b6);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6721b8:{NFSU2_TR(0x6721b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6721bb:{NFSU2_TR(0x6721bb);
w4(R+12,u32(0-u32(r4(R+12))));
}
B6721bd:{NFSU2_TR(0x6721bd);
w4(R+4,u32(0xffffull));
}
B6721c2:L6721c2:{c.instructions+=3;NFSU2_TR(0x6721c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6721c4:{NFSU2_TR(0x6721c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6721c6:{NFSU2_TR(0x6721c6);
if(r1(R+519)){{goto L67224e;}}
}
B6721cc:L6721cc:{c.instructions+=3;NFSU2_TR(0x6721cc);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B6721ce:{NFSU2_TR(0x6721ce);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6721d1:{NFSU2_TR(0x6721d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672216;}}
}
B6721d3:L6721d3:{c.instructions+=8;NFSU2_TR(0x6721d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6721d6:{NFSU2_TR(0x6721d6);
__builtin_memmove((R+24),(R+8),4);
}
B6721d8:{NFSU2_TR(0x6721d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B6721db:{NFSU2_TR(0x6721db);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x700ull))));
}
B6721e1:{NFSU2_TR(0x6721e1);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1800ull))));
}
B6721e7:{NFSU2_TR(0x6721e7);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+8))));
}
B6721e9:{NFSU2_TR(0x6721e9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6721ef:{NFSU2_TR(0x6721ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672216;}}
}
B6721f1:L6721f1:{c.instructions+=2;NFSU2_TR(0x6721f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6721f3:{NFSU2_TR(0x6721f3);
if(r1(R+518)){{goto L672213;}}
}
B6721f5:L6721f5:{c.instructions+=9;NFSU2_TR(0x6721f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6721f8:{NFSU2_TR(0x6721f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6721fb:{NFSU2_TR(0x6721fb);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+4))));
}
B6721fd:{NFSU2_TR(0x6721fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B672200:{NFSU2_TR(0x672200);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B672203:{NFSU2_TR(0x672203);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B672205:{NFSU2_TR(0x672205);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B672209:{NFSU2_TR(0x672209);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B67220f:{NFSU2_TR(0x67220f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B672213:L672213:{c.instructions+=1;NFSU2_TR(0x672213);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B672216:L672216:{c.instructions+=5;NFSU2_TR(0x672216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B672218:{NFSU2_TR(0x672218);
__builtin_memmove((R+24),(R+8),4);
}
B67221a:{NFSU2_TR(0x67221a);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+4))));
}
B67221c:{NFSU2_TR(0x67221c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67221e:{NFSU2_TR(0x67221e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67219au);}goto L67219a;}}
}
B672224:L672224:{c.instructions+=2;NFSU2_TR(0x672224);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67222a:{NFSU2_TR(0x67222a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672237;}}
}
B67222c:L67222c:{c.instructions+=3;NFSU2_TR(0x67222c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B67222f:{NFSU2_TR(0x67222f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B672235:{NFSU2_TR(0x672235);
{goto L672241;}
}
B672237:L672237:{c.instructions+=2;NFSU2_TR(0x672237);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672239:{NFSU2_TR(0x672239);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672246;}}
}
B67223b:L67223b:{c.instructions+=2;NFSU2_TR(0x67223b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B67223e:{NFSU2_TR(0x67223e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B672241:L672241:{c.instructions+=2;NFSU2_TR(0x672241);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B672244:{NFSU2_TR(0x672244);
{goto L67224e;}
}
B672246:L672246:{c.instructions+=2;NFSU2_TR(0x672246);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x51ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B672249:{NFSU2_TR(0x672249);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67224e;}}
}
B67224b:L67224b:{c.instructions+=1;NFSU2_TR(0x67224b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B67224e:L67224e:{c.instructions+=2;NFSU2_TR(0x67224e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B672251:{NFSU2_TR(0x672251);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6721c2u);}goto L6721c2;}
}
B672256:L672256:{c.instructions+=6;NFSU2_TR(0x672256);
__builtin_memmove((R+28),(R+28),4);
}
B672258:{NFSU2_TR(0x672258);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672259:{NFSU2_TR(0x672259);
__builtin_memmove((R+20),(R+16),4);
}
B67225b:{NFSU2_TR(0x67225b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67225c:{NFSU2_TR(0x67225c);
__builtin_memmove((R+24),(R+4),4);
}
B67225e:{NFSU2_TR(0x67225e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672263ull));
TAIL_STATIC(0x69581du,695);
}
B672263:L672263:{c.instructions+=2;NFSU2_TR(0x672263);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B672267:{NFSU2_TR(0x672267);
if(r1(R+518)){{goto L672270;}}
}
B672269:L672269:{c.instructions+=2;NFSU2_TR(0x672269);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67226a:{NFSU2_TR(0x67226a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67226full));
TAIL_STATIC(0x575630u,575);
}
B67226f:L67226f:{c.instructions+=1;NFSU2_TR(0x67226f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B672270:L672270:{c.instructions+=4;NFSU2_TR(0x672270);
__builtin_memmove((R+0),(R+24),4);
}
B672272:{NFSU2_TR(0x672272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672273:{NFSU2_TR(0x672273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672274:{NFSU2_TR(0x672274);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672277:L672277:{c.instructions+=7;NFSU2_TR(0x672277);
__builtin_memmove((R+28),(R+28),4);
}
B672279:{NFSU2_TR(0x672279);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67227a:{NFSU2_TR(0x67227a);
__builtin_memmove((R+20),(R+16),4);
}
B67227c:{NFSU2_TR(0x67227c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67227d:{NFSU2_TR(0x67227d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B67227f:{NFSU2_TR(0x67227f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B672282:{NFSU2_TR(0x672282);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67228b;}}
}
B672284:L672284:{c.instructions+=2;NFSU2_TR(0x672284);
w4(R+0,u32(0x8876086cull));
}
B672289:{NFSU2_TR(0x672289);
{goto L6722e9;}
}
B67228b:L67228b:{c.instructions+=6;NFSU2_TR(0x67228b);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67228d:{NFSU2_TR(0x67228d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67228e:{NFSU2_TR(0x67228e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67228f:{NFSU2_TR(0x67228f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672290:{NFSU2_TR(0x672290);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672293:{NFSU2_TR(0x672293);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672294:L672294:{c.instructions+=5;NFSU2_TR(0x672294);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B672297:{NFSU2_TR(0x672297);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B672299:{NFSU2_TR(0x672299);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B67229b:{NFSU2_TR(0x67229b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B67229e:{NFSU2_TR(0x67229e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7b7440ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6722a5:L6722a5:{c.instructions+=4;NFSU2_TR(0x6722a5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6722a7:{NFSU2_TR(0x6722a7);
__builtin_memmove((R+4),(R+12),1);
}
B6722a9:{NFSU2_TR(0x6722a9);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6722ab:{NFSU2_TR(0x6722ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6722c7;}}
}
B6722ad:L6722ad:{c.instructions+=2;NFSU2_TR(0x6722ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6722af:{NFSU2_TR(0x6722af);
if(r1(R+518)){{goto L6722c3;}}
}
B6722b1:L6722b1:{c.instructions+=4;NFSU2_TR(0x6722b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6722b4:{NFSU2_TR(0x6722b4);
__builtin_memmove((R+4),(R+12),1);
}
B6722b6:{NFSU2_TR(0x6722b6);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6722b9:{NFSU2_TR(0x6722b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6722c7;}}
}
B6722bb:L6722bb:{c.instructions+=6;NFSU2_TR(0x6722bb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6722bc:{NFSU2_TR(0x6722bc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6722bd:{NFSU2_TR(0x6722bd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6722be:{NFSU2_TR(0x6722be);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6722bf:{NFSU2_TR(0x6722bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6722c1:{NFSU2_TR(0x6722c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6722a5u);}goto L6722a5;}}
}
B6722c3:L6722c3:{c.instructions+=2;NFSU2_TR(0x6722c3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6722c5:{NFSU2_TR(0x6722c5);
{goto L6722cc;}
}
B6722c7:L6722c7:{c.instructions+=2;NFSU2_TR(0x6722c7);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+4))<(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6722c9:{NFSU2_TR(0x6722c9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(u32(0xffffffffull))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6722cc:L6722cc:{c.instructions+=2;NFSU2_TR(0x6722cc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6722ce:{NFSU2_TR(0x6722ce);
if(r1(R+518)){{goto L6722ed;}}
}
B6722d0:L6722d0:{c.instructions+=1;NFSU2_TR(0x6722d0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6722d7;}}
}
B6722d2:L6722d2:{c.instructions+=2;NFSU2_TR(0x6722d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6722d5:{NFSU2_TR(0x6722d5);
{goto L6722da;}
}
B6722d7:L6722d7:{c.instructions+=1;NFSU2_TR(0x6722d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6722da:L6722da:{c.instructions+=3;NFSU2_TR(0x6722da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6722dd:{NFSU2_TR(0x6722dd);
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
B6722df:{NFSU2_TR(0x6722df);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672294u);}goto L672294;}}
}
B6722e1:L6722e1:{c.instructions+=1;NFSU2_TR(0x6722e1);
w4(R+0,u32(0x80004005ull));
}
B6722e6:L6722e6:{c.instructions+=3;NFSU2_TR(0x6722e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6722e7:{NFSU2_TR(0x6722e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6722e8:{NFSU2_TR(0x6722e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6722e9:L6722e9:{c.instructions+=2;NFSU2_TR(0x6722e9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6722ea:{NFSU2_TR(0x6722ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6722ed:L6722ed:{c.instructions+=6;NFSU2_TR(0x6722ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6722f0:{NFSU2_TR(0x6722f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6722f3:{NFSU2_TR(0x6722f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b7448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6722f9:{NFSU2_TR(0x6722f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B6722fc:{NFSU2_TR(0x6722fc);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6722ff:{NFSU2_TR(0x6722ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6722e1u);}goto L6722e1;}}
}
B672301:L672301:{c.instructions+=3;NFSU2_TR(0x672301);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B672304:{NFSU2_TR(0x672304);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672306:{NFSU2_TR(0x672306);
if(r1(R+518)){{goto L672311;}}
}
B672308:L672308:{c.instructions+=4;NFSU2_TR(0x672308);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b7440ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67230e:{NFSU2_TR(0x67230e);
u8 U[40];
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
}
B67230f:{NFSU2_TR(0x67230f);
u8 U[40];
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
}
B672310:{NFSU2_TR(0x672310);
u8 U[40];
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
}
B672311:L672311:{c.instructions+=2;NFSU2_TR(0x672311);
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
B672313:{NFSU2_TR(0x672313);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6722e6u);}goto L6722e6;}
}
B672315:L672315:{c.instructions+=6;NFSU2_TR(0x672315);
__builtin_memmove((R+28),(R+28),4);
}
B672317:{NFSU2_TR(0x672317);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672318:{NFSU2_TR(0x672318);
__builtin_memmove((R+20),(R+16),4);
}
B67231a:{NFSU2_TR(0x67231a);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67231c:{NFSU2_TR(0x67231c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67231d:{NFSU2_TR(0x67231d);
w4(R+0,u32(0x7b7658ull));
}
B672322:L672322:{c.instructions+=5;NFSU2_TR(0x672322);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B672325:{NFSU2_TR(0x672325);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xcull))));
}
B672328:{NFSU2_TR(0x672328);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B672329:{NFSU2_TR(0x672329);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67232c:{NFSU2_TR(0x67232c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672338;}}
}
B67232e:L67232e:{c.instructions+=4;NFSU2_TR(0x67232e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B672330:{NFSU2_TR(0x672330);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))&u32(r4(U+4))));
}
B672333:{NFSU2_TR(0x672333);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672336:{NFSU2_TR(0x672336);
if(r1(R+518)){{goto L672348;}}
}
B672338:L672338:{c.instructions+=2;NFSU2_TR(0x672338);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7b7448ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7b7448ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7b7448ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B67233d:{NFSU2_TR(0x67233d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672322u);}goto L672322;}}
}
B67233f:L67233f:{c.instructions+=1;NFSU2_TR(0x67233f);
w4(R+0,u32(0x80004005ull));
}
B672344:L672344:{c.instructions+=2;NFSU2_TR(0x672344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672345:{NFSU2_TR(0x672345);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672348:L672348:{c.instructions+=4;NFSU2_TR(0x672348);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672349:{NFSU2_TR(0x672349);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67234c:{NFSU2_TR(0x67234c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67234e:{NFSU2_TR(0x67234e);
if(r1(R+518)){{goto L67235f;}}
}
B672350:L672350:{c.instructions+=7;NFSU2_TR(0x672350);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672351:{NFSU2_TR(0x672351);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B672354:{NFSU2_TR(0x672354);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7b7440ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B67235b:{NFSU2_TR(0x67235b);
u8 U[40];
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
}
B67235c:{NFSU2_TR(0x67235c);
u8 U[40];
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
}
B67235d:{NFSU2_TR(0x67235d);
u8 U[40];
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
}
B67235e:{NFSU2_TR(0x67235e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67235f:L67235f:{c.instructions+=3;NFSU2_TR(0x67235f);
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
B672361:{NFSU2_TR(0x672361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672362:{NFSU2_TR(0x672362);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672344u);}goto L672344;}
}
B672364:L672364:{c.instructions+=10;NFSU2_TR(0x672364);
__builtin_memmove((R+28),(R+28),4);
}
B672366:{NFSU2_TR(0x672366);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672367:{NFSU2_TR(0x672367);
__builtin_memmove((R+20),(R+16),4);
}
B672369:{NFSU2_TR(0x672369);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67236a:{NFSU2_TR(0x67236a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B67236d:{NFSU2_TR(0x67236d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67236e:{NFSU2_TR(0x67236e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B672370:{NFSU2_TR(0x672370);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B672372:{NFSU2_TR(0x672372);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672373:{NFSU2_TR(0x672373);
if(r1(R+518)){{goto L672377;}}
}
B672375:L672375:{c.instructions+=1;NFSU2_TR(0x672375);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B672377:L672377:{c.instructions+=3;NFSU2_TR(0x672377);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67237a:{NFSU2_TR(0x67237a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B67237c:{NFSU2_TR(0x67237c);
if(r1(R+518)){{goto L672382;}}
}
B67237e:L67237e:{c.instructions+=2;NFSU2_TR(0x67237e);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B672380:{NFSU2_TR(0x672380);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672389;}}
}
B672382:L672382:{c.instructions+=2;NFSU2_TR(0x672382);
w4(R+0,u32(0x8876086cull));
}
B672387:{NFSU2_TR(0x672387);
{goto L6723de;}
}
B672389:L672389:{c.instructions+=5;NFSU2_TR(0x672389);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67238b:{NFSU2_TR(0x67238b);
w4(R+4,u32(0xffff0000ull));
}
B672390:{NFSU2_TR(0x672390);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B672392:{NFSU2_TR(0x672392);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672397:{NFSU2_TR(0x672397);
if(r1(R+518)){{goto L67239d;}}
}
B672399:L672399:{c.instructions+=2;NFSU2_TR(0x672399);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67239b:{NFSU2_TR(0x67239b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6723da;}}
}
B67239d:L67239d:{c.instructions+=2;NFSU2_TR(0x67239d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67239f:{NFSU2_TR(0x67239f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6723a4ull));
TAIL_STATIC(0x575620u,575);
}
B6723a4:L6723a4:{c.instructions+=3;NFSU2_TR(0x6723a4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6723a6:{NFSU2_TR(0x6723a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6723a7:{NFSU2_TR(0x6723a7);
if(r1(R+518)){{goto L6723b2;}}
}
B6723a9:L6723a9:{c.instructions+=2;NFSU2_TR(0x6723a9);
__builtin_memmove((R+4),(R+0),4);
}
B6723ab:{NFSU2_TR(0x6723ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6723b0ull));
TAIL_STATIC(0x6982b5u,698);
}
B6723b0:L6723b0:{c.instructions+=1;NFSU2_TR(0x6723b0);
__builtin_memmove((R+24),(R+0),4);
}
B6723b2:L6723b2:{c.instructions+=2;NFSU2_TR(0x6723b2);
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
B6723b4:{NFSU2_TR(0x6723b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6723bd;}}
}
B6723b6:L6723b6:{c.instructions+=2;NFSU2_TR(0x6723b6);
w4(R+0,u32(0x8007000eull));
}
B6723bb:{NFSU2_TR(0x6723bb);
{goto L6723de;}
}
B6723bd:L6723bd:{c.instructions+=4;NFSU2_TR(0x6723bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6723bf:{NFSU2_TR(0x6723bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6723c0:{NFSU2_TR(0x6723c0);
__builtin_memmove((R+4),(R+24),4);
}
B6723c2:{NFSU2_TR(0x6723c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6723c7ull));
TAIL_STATIC(0x6982d6u,698);
}
B6723c7:L6723c7:{c.instructions+=3;NFSU2_TR(0x6723c7);
__builtin_memmove((R+28),(R+0),4);
}
B6723c9:{NFSU2_TR(0x6723c9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6723cb:{NFSU2_TR(0x6723cb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6723da;}}
}
B6723cd:L6723cd:{c.instructions+=3;NFSU2_TR(0x6723cd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6723cf:{NFSU2_TR(0x6723cf);
__builtin_memmove((R+4),(R+24),4);
}
B6723d1:{NFSU2_TR(0x6723d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6723d6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672256u);}goto L672256;}
}
B6723d6:L6723d6:{c.instructions+=2;NFSU2_TR(0x6723d6);
__builtin_memmove((R+0),(R+28),4);
}
B6723d8:{NFSU2_TR(0x6723d8);
{goto L6723de;}
}
B6723da:L6723da:{c.instructions+=2;NFSU2_TR(0x6723da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6723dc:{NFSU2_TR(0x6723dc);
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
B6723de:L6723de:{c.instructions+=5;NFSU2_TR(0x6723de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6723df:{NFSU2_TR(0x6723df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6723e0:{NFSU2_TR(0x6723e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6723e1:{NFSU2_TR(0x6723e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6723e2:{NFSU2_TR(0x6723e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6723e5:L6723e5:{c.instructions+=11;NFSU2_TR(0x6723e5);
__builtin_memmove((R+28),(R+28),4);
}
B6723e7:{NFSU2_TR(0x6723e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6723e8:{NFSU2_TR(0x6723e8);
__builtin_memmove((R+20),(R+16),4);
}
B6723ea:{NFSU2_TR(0x6723ea);
__builtin_memmove((R+0),(R+4),4);
}
B6723ec:{NFSU2_TR(0x6723ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6723ef:{NFSU2_TR(0x6723ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6723f3:{NFSU2_TR(0x6723f3);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6723f7:{NFSU2_TR(0x6723f7);
u8 U[4];
w4(U+0,u32(0x7b77a4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6723fd:{NFSU2_TR(0x6723fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672400:{NFSU2_TR(0x672400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672401:{NFSU2_TR(0x672401);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672404:L672404:{c.instructions+=6;NFSU2_TR(0x672404);
__builtin_memmove((R+28),(R+28),4);
}
B672406:{NFSU2_TR(0x672406);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672407:{NFSU2_TR(0x672407);
__builtin_memmove((R+20),(R+16),4);
}
B672409:{NFSU2_TR(0x672409);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67240c:{NFSU2_TR(0x67240c);
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
B67240e:{NFSU2_TR(0x67240e);
if(r1(R+518)){{goto L67241b;}}
}
B672410:L672410:{c.instructions+=5;NFSU2_TR(0x672410);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672413:{NFSU2_TR(0x672413);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B672416:{NFSU2_TR(0x672416);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B672418:{NFSU2_TR(0x672418);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B67241a:{NFSU2_TR(0x67241a);
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
B67241b:L67241b:{c.instructions+=2;NFSU2_TR(0x67241b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B67241c:{NFSU2_TR(0x67241c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67241f:L67241f:{c.instructions+=6;NFSU2_TR(0x67241f);
__builtin_memmove((R+28),(R+28),4);
}
B672421:{NFSU2_TR(0x672421);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672422:{NFSU2_TR(0x672422);
__builtin_memmove((R+20),(R+16),4);
}
B672424:{NFSU2_TR(0x672424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B672427:{NFSU2_TR(0x672427);
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
B672429:{NFSU2_TR(0x672429);
if(r1(R+518)){{goto L672434;}}
}
B67242b:L67242b:{c.instructions+=3;NFSU2_TR(0x67242b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67242e:{NFSU2_TR(0x67242e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B672430:{NFSU2_TR(0x672430);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672432ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B672432:L672432:{c.instructions+=1;NFSU2_TR(0x672432);
{goto L67243c;}
}
B672434:L672434:{c.instructions+=3;NFSU2_TR(0x672434);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B672436:{NFSU2_TR(0x672436);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B672439:{NFSU2_TR(0x672439);
__builtin_memmove((R+0),(R+518),1);
}
B67243c:L67243c:{c.instructions+=2;NFSU2_TR(0x67243c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B67243d:{NFSU2_TR(0x67243d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672440:L672440:{c.instructions+=6;NFSU2_TR(0x672440);
__builtin_memmove((R+28),(R+28),4);
}
B672442:{NFSU2_TR(0x672442);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672443:{NFSU2_TR(0x672443);
__builtin_memmove((R+20),(R+16),4);
}
B672445:{NFSU2_TR(0x672445);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B672448:{NFSU2_TR(0x672448);
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
B67244a:{NFSU2_TR(0x67244a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672450;}}
}
B67244c:L67244c:{c.instructions+=2;NFSU2_TR(0x67244c);
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
B67244e:{NFSU2_TR(0x67244e);
{goto L672455;}
}
B672450:L672450:{c.instructions+=2;NFSU2_TR(0x672450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B672452:{NFSU2_TR(0x672452);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672455ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B672455:L672455:{c.instructions+=2;NFSU2_TR(0x672455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672456:{NFSU2_TR(0x672456);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672459:L672459:{c.instructions+=5;NFSU2_TR(0x672459);
__builtin_memmove((R+28),(R+28),4);
}
B67245b:{NFSU2_TR(0x67245b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67245c:{NFSU2_TR(0x67245c);
__builtin_memmove((R+20),(R+16),4);
}
B67245e:{NFSU2_TR(0x67245e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B672462:{NFSU2_TR(0x672462);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672469;}}
}
B672464:L672464:{c.instructions+=2;NFSU2_TR(0x672464);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672467:{NFSU2_TR(0x672467);
{goto L67247e;}
}
B672469:L672469:{c.instructions+=1;NFSU2_TR(0x672469);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67246c:L67246c:{c.instructions+=4;NFSU2_TR(0x67246c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67246e:{NFSU2_TR(0x67246e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B672471:{NFSU2_TR(0x672471);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
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
B672474:{NFSU2_TR(0x672474);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67246cu);}goto L67246c;}}
}
B672476:L672476:{c.instructions+=3;NFSU2_TR(0x672476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B672479:{NFSU2_TR(0x672479);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B67247b:{NFSU2_TR(0x67247b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67247e:L67247e:{c.instructions+=2;NFSU2_TR(0x67247e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B67247f:{NFSU2_TR(0x67247f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672482:L672482:{c.instructions+=3;NFSU2_TR(0x672482);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672484:{NFSU2_TR(0x672484);
__builtin_memmove((R+8),(R+4),4);
}
B672486:{NFSU2_TR(0x672486);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67248bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B67248b:L67248b:{c.instructions+=4;NFSU2_TR(0x67248b);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B67248f:{NFSU2_TR(0x67248f);
u8 U[4];
w4(U+0,u32(0x7b77b0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B672495:{NFSU2_TR(0x672495);
__builtin_memmove((R+0),(R+8),4);
}
B672497:{NFSU2_TR(0x672497);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672498:L672498:{c.instructions+=6;NFSU2_TR(0x672498);
__builtin_memmove((R+28),(R+28),4);
}
B67249a:{NFSU2_TR(0x67249a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67249b:{NFSU2_TR(0x67249b);
__builtin_memmove((R+20),(R+16),4);
}
B67249d:{NFSU2_TR(0x67249d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67249f:{NFSU2_TR(0x67249f);
__builtin_memmove((R+8),(R+4),4);
}
B6724a1:{NFSU2_TR(0x6724a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6724a6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B6724a6:L6724a6:{c.instructions+=10;NFSU2_TR(0x6724a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6724a9:{NFSU2_TR(0x6724a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6724ac:{NFSU2_TR(0x6724ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6724af:{NFSU2_TR(0x6724af);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6724b2:{NFSU2_TR(0x6724b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6724b5:{NFSU2_TR(0x6724b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6724b8:{NFSU2_TR(0x6724b8);
u8 U[4];
w4(U+0,u32(0x7b77b0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B6724be:{NFSU2_TR(0x6724be);
__builtin_memmove((R+0),(R+8),4);
}
B6724c0:{NFSU2_TR(0x6724c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6724c1:{NFSU2_TR(0x6724c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6724c4:L6724c4:{c.instructions+=7;NFSU2_TR(0x6724c4);
__builtin_memmove((R+28),(R+28),4);
}
B6724c6:{NFSU2_TR(0x6724c6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6724c7:{NFSU2_TR(0x6724c7);
__builtin_memmove((R+20),(R+16),4);
}
B6724c9:{NFSU2_TR(0x6724c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6724ca:{NFSU2_TR(0x6724ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6724cd:{NFSU2_TR(0x6724cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6724ce:{NFSU2_TR(0x6724ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6724d3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672404u);}goto L672404;}
}
B6724d3:L6724d3:{c.instructions+=2;NFSU2_TR(0x6724d3);
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
B6724d5:{NFSU2_TR(0x6724d5);
if(r1(R+518)){{goto L67251c;}}
}
B6724d7:L6724d7:{c.instructions+=4;NFSU2_TR(0x6724d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6724d9:{NFSU2_TR(0x6724d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6724da:{NFSU2_TR(0x6724da);
__builtin_memmove((R+28),(R+4),4);
}
B6724dc:{NFSU2_TR(0x6724dc);
if(r1(R+518)){{goto L672518;}}
}
B6724de:L6724de:{c.instructions+=2;NFSU2_TR(0x6724de);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6724e2:{NFSU2_TR(0x6724e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67250d;}}
}
B6724e4:L6724e4:{c.instructions+=2;NFSU2_TR(0x6724e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6724e6:{NFSU2_TR(0x6724e6);
if(r1(R+518)){{goto L672509;}}
}
B6724e8:L6724e8:{c.instructions+=2;NFSU2_TR(0x6724e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6724ec:{NFSU2_TR(0x6724ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672509;}}
}
B6724ee:L6724ee:{c.instructions+=3;NFSU2_TR(0x6724ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6724f1:{NFSU2_TR(0x6724f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6724f4:{NFSU2_TR(0x6724f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6724f9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B6724f9:L6724f9:{c.instructions+=2;NFSU2_TR(0x6724f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6724fb:{NFSU2_TR(0x6724fb);
if(r1(R+518)){{goto L672509;}}
}
B6724fd:L6724fd:{c.instructions+=4;NFSU2_TR(0x6724fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B672500:{NFSU2_TR(0x672500);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672502:{NFSU2_TR(0x672502);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B672505:{NFSU2_TR(0x672505);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6724deu);}goto L6724de;}}
}
B672507:L672507:{c.instructions+=1;NFSU2_TR(0x672507);
{goto L672518;}
}
B672509:L672509:{c.instructions+=2;NFSU2_TR(0x672509);
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
B67250b:{NFSU2_TR(0x67250b);
{goto L67251b;}
}
B67250d:L67250d:{c.instructions+=3;NFSU2_TR(0x67250d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67250e:{NFSU2_TR(0x67250e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67250f:{NFSU2_TR(0x67250f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672514ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672514:L672514:{c.instructions+=2;NFSU2_TR(0x672514);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672516:{NFSU2_TR(0x672516);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672509u);}goto L672509;}}
}
B672518:L672518:{c.instructions+=2;NFSU2_TR(0x672518);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67251a:{NFSU2_TR(0x67251a);
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
B67251b:L67251b:{c.instructions+=1;NFSU2_TR(0x67251b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67251c:L67251c:{c.instructions+=3;NFSU2_TR(0x67251c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67251d:{NFSU2_TR(0x67251d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B67251e:{NFSU2_TR(0x67251e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672521:L672521:{c.instructions+=3;NFSU2_TR(0x672521);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672523:{NFSU2_TR(0x672523);
__builtin_memmove((R+8),(R+4),4);
}
B672525:{NFSU2_TR(0x672525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67252aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B67252a:L67252a:{c.instructions+=5;NFSU2_TR(0x67252a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67252e:{NFSU2_TR(0x67252e);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B672532:{NFSU2_TR(0x672532);
u8 U[4];
w4(U+0,u32(0x7b77bcull));
s4(u32(r4(R+8)),r4(U+0));
}
B672538:{NFSU2_TR(0x672538);
__builtin_memmove((R+0),(R+8),4);
}
B67253a:{NFSU2_TR(0x67253a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67253b:L67253b:{c.instructions+=6;NFSU2_TR(0x67253b);
__builtin_memmove((R+28),(R+28),4);
}
B67253d:{NFSU2_TR(0x67253d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67253e:{NFSU2_TR(0x67253e);
__builtin_memmove((R+20),(R+16),4);
}
B672540:{NFSU2_TR(0x672540);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672542:{NFSU2_TR(0x672542);
__builtin_memmove((R+8),(R+4),4);
}
B672544:{NFSU2_TR(0x672544);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672549ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672549:L672549:{c.instructions+=12;NFSU2_TR(0x672549);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67254c:{NFSU2_TR(0x67254c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67254f:{NFSU2_TR(0x67254f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672552:{NFSU2_TR(0x672552);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672555:{NFSU2_TR(0x672555);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672558:{NFSU2_TR(0x672558);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67255b:{NFSU2_TR(0x67255b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67255e:{NFSU2_TR(0x67255e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672561:{NFSU2_TR(0x672561);
u8 U[4];
w4(U+0,u32(0x7b77bcull));
s4(u32(r4(R+8)),r4(U+0));
}
B672567:{NFSU2_TR(0x672567);
__builtin_memmove((R+0),(R+8),4);
}
B672569:{NFSU2_TR(0x672569);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B67256a:{NFSU2_TR(0x67256a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67256d:L67256d:{c.instructions+=9;NFSU2_TR(0x67256d);
__builtin_memmove((R+28),(R+28),4);
}
B67256f:{NFSU2_TR(0x67256f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672570:{NFSU2_TR(0x672570);
__builtin_memmove((R+20),(R+16),4);
}
B672572:{NFSU2_TR(0x672572);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672573:{NFSU2_TR(0x672573);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672574:{NFSU2_TR(0x672574);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B672577:{NFSU2_TR(0x672577);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672578:{NFSU2_TR(0x672578);
__builtin_memmove((R+24),(R+4),4);
}
B67257a:{NFSU2_TR(0x67257a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67257full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672404u);}goto L672404;}
}
B67257f:L67257f:{c.instructions+=2;NFSU2_TR(0x67257f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672581:{NFSU2_TR(0x672581);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672587;}}
}
B672583:L672583:{c.instructions+=2;NFSU2_TR(0x672583);
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
B672585:{NFSU2_TR(0x672585);
{goto L6725b7;}
}
B672587:L672587:{c.instructions+=3;NFSU2_TR(0x672587);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67258a:{NFSU2_TR(0x67258a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67258d:{NFSU2_TR(0x67258d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672583u);}goto L672583;}}
}
B67258f:L67258f:{c.instructions+=3;NFSU2_TR(0x67258f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672592:{NFSU2_TR(0x672592);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672595:{NFSU2_TR(0x672595);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672583u);}goto L672583;}}
}
B672597:L672597:{c.instructions+=3;NFSU2_TR(0x672597);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67259a:{NFSU2_TR(0x67259a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67259d:{NFSU2_TR(0x67259d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6725a2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B6725a2:L6725a2:{c.instructions+=2;NFSU2_TR(0x6725a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6725a4:{NFSU2_TR(0x6725a4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672583u);}goto L672583;}}
}
B6725a6:L6725a6:{c.instructions+=3;NFSU2_TR(0x6725a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6725a9:{NFSU2_TR(0x6725a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6725ac:{NFSU2_TR(0x6725ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6725b1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B6725b1:L6725b1:{c.instructions+=3;NFSU2_TR(0x6725b1);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6725b3:{NFSU2_TR(0x6725b3);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6725b5:{NFSU2_TR(0x6725b5);
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
B6725b7:L6725b7:{c.instructions+=4;NFSU2_TR(0x6725b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6725b8:{NFSU2_TR(0x6725b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6725b9:{NFSU2_TR(0x6725b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6725ba:{NFSU2_TR(0x6725ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6725bd:L6725bd:{c.instructions+=3;NFSU2_TR(0x6725bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6725bf:{NFSU2_TR(0x6725bf);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6725c1:{NFSU2_TR(0x6725c1);
if(r1(R+518)){{goto L6725c6;}}
}
B6725c3:L6725c3:{c.instructions+=2;NFSU2_TR(0x6725c3);
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
B6725c5:{NFSU2_TR(0x6725c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6725c6:L6725c6:{c.instructions+=3;NFSU2_TR(0x6725c6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6725c9:{NFSU2_TR(0x6725c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6725ca:{NFSU2_TR(0x6725ca);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L67262d;}}
}
B6725cc:L6725cc:{c.instructions+=2;NFSU2_TR(0x6725cc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6725cf:{NFSU2_TR(0x6725cf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L672619;}}
}
B6725d1:L6725d1:{c.instructions+=2;NFSU2_TR(0x6725d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6725d3:{NFSU2_TR(0x6725d3);
if(r1(R+518)){{goto L6725e1;}}
}
B6725d5:L6725d5:{c.instructions+=2;NFSU2_TR(0x6725d5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6725d8:{NFSU2_TR(0x6725d8);
if(r1(R+518)){{goto L6725ed;}}
}
B6725da:L6725da:{c.instructions+=1;NFSU2_TR(0x6725da);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L672628;}}
}
B6725dc:L6725dc:{c.instructions+=2;NFSU2_TR(0x6725dc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6725df:{NFSU2_TR(0x6725df);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L672628;}}
}
B6725e1:L6725e1:{c.instructions+=2;NFSU2_TR(0x6725e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6725e4:{NFSU2_TR(0x6725e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6725e7:L6725e7:{c.instructions+=1;NFSU2_TR(0x6725e7);
if(r1(R+518)){{goto L672628;}}
}
B6725e9:L6725e9:{c.instructions+=3;NFSU2_TR(0x6725e9);
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
B6725eb:{NFSU2_TR(0x6725eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6725ec:{NFSU2_TR(0x6725ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6725ed:L6725ed:{c.instructions+=2;NFSU2_TR(0x6725ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6725f0:{NFSU2_TR(0x6725f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6725f3:L6725f3:{c.instructions+=4;NFSU2_TR(0x6725f3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6725f5:{NFSU2_TR(0x6725f5);
__builtin_memmove((R+4),(R+8),1);
}
B6725f7:{NFSU2_TR(0x6725f7);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6725f9:{NFSU2_TR(0x6725f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672681;}}
}
B6725ff:L6725ff:{c.instructions+=2;NFSU2_TR(0x6725ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B672601:{NFSU2_TR(0x672601);
if(r1(R+518)){{goto L672615;}}
}
B672603:L672603:{c.instructions+=4;NFSU2_TR(0x672603);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B672606:{NFSU2_TR(0x672606);
__builtin_memmove((R+4),(R+8),1);
}
B672608:{NFSU2_TR(0x672608);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B67260b:{NFSU2_TR(0x67260b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672681;}}
}
B67260d:L67260d:{c.instructions+=6;NFSU2_TR(0x67260d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67260e:{NFSU2_TR(0x67260e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67260f:{NFSU2_TR(0x67260f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B672610:{NFSU2_TR(0x672610);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B672611:{NFSU2_TR(0x672611);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B672613:{NFSU2_TR(0x672613);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6725f3u);}goto L6725f3;}}
}
B672615:L672615:{c.instructions+=2;NFSU2_TR(0x672615);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B672617:{NFSU2_TR(0x672617);
{goto L672686;}
}
B672619:L672619:{c.instructions+=6;NFSU2_TR(0x672619);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67261c:{NFSU2_TR(0x67261c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67261f:{NFSU2_TR(0x67261f);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B672621:{NFSU2_TR(0x672621);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B672623:{NFSU2_TR(0x672623);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B672626:{NFSU2_TR(0x672626);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6725e9u);}goto L6725e9;}}
}
B672628:L672628:{c.instructions+=4;NFSU2_TR(0x672628);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67262a:{NFSU2_TR(0x67262a);
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
B67262b:{NFSU2_TR(0x67262b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67262c:{NFSU2_TR(0x67262c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67262d:L67262d:{c.instructions+=2;NFSU2_TR(0x67262d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B672630:{NFSU2_TR(0x672630);
if(r1(R+518)){{goto L67265b;}}
}
B672632:L672632:{c.instructions+=2;NFSU2_TR(0x672632);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B672633:{NFSU2_TR(0x672633);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672628u);}goto L672628;}}
}
B672635:L672635:{c.instructions+=2;NFSU2_TR(0x672635);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B672638:{NFSU2_TR(0x672638);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67263b:L67263b:{c.instructions+=4;NFSU2_TR(0x67263b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B67263d:{NFSU2_TR(0x67263d);
__builtin_memmove((R+0),(R+8),1);
}
B67263f:{NFSU2_TR(0x67263f);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B672641:{NFSU2_TR(0x672641);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672681;}}
}
B672643:L672643:{c.instructions+=2;NFSU2_TR(0x672643);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B672645:{NFSU2_TR(0x672645);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672615u);}goto L672615;}}
}
B672647:L672647:{c.instructions+=4;NFSU2_TR(0x672647);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B67264a:{NFSU2_TR(0x67264a);
__builtin_memmove((R+0),(R+8),1);
}
B67264c:{NFSU2_TR(0x67264c);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B67264f:{NFSU2_TR(0x67264f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672681;}}
}
B672651:L672651:{c.instructions+=6;NFSU2_TR(0x672651);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B672652:{NFSU2_TR(0x672652);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B672653:{NFSU2_TR(0x672653);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B672654:{NFSU2_TR(0x672654);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B672655:{NFSU2_TR(0x672655);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B672657:{NFSU2_TR(0x672657);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67263bu);}goto L67263b;}}
}
B672659:L672659:{c.instructions+=1;NFSU2_TR(0x672659);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672615u);}goto L672615;}
}
B67265b:L67265b:{c.instructions+=2;NFSU2_TR(0x67265b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67265e:{NFSU2_TR(0x67265e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B672661:L672661:{c.instructions+=4;NFSU2_TR(0x672661);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B672663:{NFSU2_TR(0x672663);
__builtin_memmove((R+0),(R+8),1);
}
B672665:{NFSU2_TR(0x672665);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B672667:{NFSU2_TR(0x672667);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672681;}}
}
B672669:L672669:{c.instructions+=2;NFSU2_TR(0x672669);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67266b:{NFSU2_TR(0x67266b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672615u);}goto L672615;}}
}
B67266d:L67266d:{c.instructions+=4;NFSU2_TR(0x67266d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B672670:{NFSU2_TR(0x672670);
__builtin_memmove((R+0),(R+8),1);
}
B672672:{NFSU2_TR(0x672672);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B672675:{NFSU2_TR(0x672675);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672681;}}
}
B672677:L672677:{c.instructions+=6;NFSU2_TR(0x672677);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B672678:{NFSU2_TR(0x672678);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B672679:{NFSU2_TR(0x672679);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B67267a:{NFSU2_TR(0x67267a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B67267b:{NFSU2_TR(0x67267b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67267d:{NFSU2_TR(0x67267d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672661u);}goto L672661;}}
}
B67267f:L67267f:{c.instructions+=1;NFSU2_TR(0x67267f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672615u);}goto L672615;}
}
B672681:L672681:{c.instructions+=2;NFSU2_TR(0x672681);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B672683:{NFSU2_TR(0x672683);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B672686:L672686:{c.instructions+=2;NFSU2_TR(0x672686);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672688:{NFSU2_TR(0x672688);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6725e7u);}goto L6725e7;}
}
B67268d:L67268d:{c.instructions+=3;NFSU2_TR(0x67268d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67268f:{NFSU2_TR(0x67268f);
__builtin_memmove((R+8),(R+4),4);
}
B672691:{NFSU2_TR(0x672691);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672696ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672696:L672696:{c.instructions+=3;NFSU2_TR(0x672696);
u8 U[4];
w4(U+0,u32(0x7b77c8ull));
s4(u32(r4(R+8)),r4(U+0));
}
B67269c:{NFSU2_TR(0x67269c);
__builtin_memmove((R+0),(R+8),4);
}
B67269e:{NFSU2_TR(0x67269e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67269f:L67269f:{c.instructions+=8;NFSU2_TR(0x67269f);
__builtin_memmove((R+28),(R+28),4);
}
B6726a1:{NFSU2_TR(0x6726a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6726a2:{NFSU2_TR(0x6726a2);
__builtin_memmove((R+20),(R+16),4);
}
B6726a4:{NFSU2_TR(0x6726a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6726a5:{NFSU2_TR(0x6726a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6726a6:{NFSU2_TR(0x6726a6);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6726a8:{NFSU2_TR(0x6726a8);
__builtin_memmove((R+8),(R+4),4);
}
B6726aa:{NFSU2_TR(0x6726aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6726afull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B6726af:L6726af:{c.instructions+=5;NFSU2_TR(0x6726af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6726b2:{NFSU2_TR(0x6726b2);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6726b4:{NFSU2_TR(0x6726b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6726b5:{NFSU2_TR(0x6726b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6726b8:{NFSU2_TR(0x6726b8);
u8 U[4];
w4(U+0,u32(0x7b77c8ull));
s4(u32(r4(R+8)),r4(U+0));
}
B6726be:L6726be:{c.instructions+=1;NFSU2_TR(0x6726be);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6726c0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6726beu);}goto L6726be;}
}
B6726c0:L6726c0:{c.instructions+=5;NFSU2_TR(0x6726c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6726c1:{NFSU2_TR(0x6726c1);
__builtin_memmove((R+0),(R+8),4);
}
B6726c3:{NFSU2_TR(0x6726c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6726c4:{NFSU2_TR(0x6726c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6726c5:{NFSU2_TR(0x6726c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6726c8:L6726c8:{c.instructions+=6;NFSU2_TR(0x6726c8);
__builtin_memmove((R+28),(R+28),4);
}
B6726ca:{NFSU2_TR(0x6726ca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6726cb:{NFSU2_TR(0x6726cb);
__builtin_memmove((R+20),(R+16),4);
}
B6726cd:{NFSU2_TR(0x6726cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6726d0:{NFSU2_TR(0x6726d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6726d1:{NFSU2_TR(0x6726d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6726d6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672404u);}goto L672404;}
}
B6726d6:L6726d6:{c.instructions+=2;NFSU2_TR(0x6726d6);
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
B6726d8:{NFSU2_TR(0x6726d8);
if(r1(R+518)){{goto L6726eb;}}
}
B6726da:L6726da:{c.instructions+=3;NFSU2_TR(0x6726da);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6726dd:{NFSU2_TR(0x6726dd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6726e0:{NFSU2_TR(0x6726e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6726e5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6725bdu);}goto L6725bd;}
}
B6726e5:L6726e5:{c.instructions+=3;NFSU2_TR(0x6726e5);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6726e7:{NFSU2_TR(0x6726e7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6726e9:{NFSU2_TR(0x6726e9);
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
B6726eb:L6726eb:{c.instructions+=2;NFSU2_TR(0x6726eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6726ec:{NFSU2_TR(0x6726ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6726ef:L6726ef:{c.instructions+=3;NFSU2_TR(0x6726ef);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6726f1:{NFSU2_TR(0x6726f1);
__builtin_memmove((R+8),(R+4),4);
}
B6726f3:{NFSU2_TR(0x6726f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6726f8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B6726f8:L6726f8:{c.instructions+=8;NFSU2_TR(0x6726f8);
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
B6726fa:{NFSU2_TR(0x6726fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6726fd:{NFSU2_TR(0x6726fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672700:{NFSU2_TR(0x672700);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672703:{NFSU2_TR(0x672703);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672706:{NFSU2_TR(0x672706);
u8 U[4];
w4(U+0,u32(0x7b77d4ull));
s4(u32(r4(R+8)),r4(U+0));
}
B67270c:{NFSU2_TR(0x67270c);
__builtin_memmove((R+0),(R+8),4);
}
B67270e:{NFSU2_TR(0x67270e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67270f:L67270f:{c.instructions+=6;NFSU2_TR(0x67270f);
__builtin_memmove((R+28),(R+28),4);
}
B672711:{NFSU2_TR(0x672711);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672712:{NFSU2_TR(0x672712);
__builtin_memmove((R+20),(R+16),4);
}
B672714:{NFSU2_TR(0x672714);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672716:{NFSU2_TR(0x672716);
__builtin_memmove((R+8),(R+4),4);
}
B672718:{NFSU2_TR(0x672718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67271dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B67271d:L67271d:{c.instructions+=12;NFSU2_TR(0x67271d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672720:{NFSU2_TR(0x672720);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672723:{NFSU2_TR(0x672723);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672726:{NFSU2_TR(0x672726);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672729:{NFSU2_TR(0x672729);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67272c:{NFSU2_TR(0x67272c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67272f:{NFSU2_TR(0x67272f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672732:{NFSU2_TR(0x672732);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672735:{NFSU2_TR(0x672735);
u8 U[4];
w4(U+0,u32(0x7b77d4ull));
s4(u32(r4(R+8)),r4(U+0));
}
B67273b:{NFSU2_TR(0x67273b);
__builtin_memmove((R+0),(R+8),4);
}
B67273d:{NFSU2_TR(0x67273d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B67273e:{NFSU2_TR(0x67273e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672741:L672741:{c.instructions+=6;NFSU2_TR(0x672741);
__builtin_memmove((R+28),(R+28),4);
}
B672743:{NFSU2_TR(0x672743);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672744:{NFSU2_TR(0x672744);
__builtin_memmove((R+20),(R+16),4);
}
B672746:{NFSU2_TR(0x672746);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B672749:{NFSU2_TR(0x672749);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67274a:{NFSU2_TR(0x67274a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67274full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672404u);}goto L672404;}
}
B67274f:L67274f:{c.instructions+=2;NFSU2_TR(0x67274f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672751:{NFSU2_TR(0x672751);
if(r1(R+518)){{goto L67277e;}}
}
B672753:L672753:{c.instructions+=3;NFSU2_TR(0x672753);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672756:{NFSU2_TR(0x672756);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672759:{NFSU2_TR(0x672759);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67277e;}}
}
B67275b:L67275b:{c.instructions+=3;NFSU2_TR(0x67275b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67275e:{NFSU2_TR(0x67275e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672761:{NFSU2_TR(0x672761);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67277e;}}
}
B672763:L672763:{c.instructions+=3;NFSU2_TR(0x672763);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672766:{NFSU2_TR(0x672766);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672769:{NFSU2_TR(0x672769);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67277e;}}
}
B67276b:L67276b:{c.instructions+=3;NFSU2_TR(0x67276b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67276e:{NFSU2_TR(0x67276e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672771:{NFSU2_TR(0x672771);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672776ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672776:L672776:{c.instructions+=4;NFSU2_TR(0x672776);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B672778:{NFSU2_TR(0x672778);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B67277a:{NFSU2_TR(0x67277a);
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
B67277c:{NFSU2_TR(0x67277c);
{goto L672780;}
}
B67277e:L67277e:{c.instructions+=1;NFSU2_TR(0x67277e);
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
B672780:L672780:{c.instructions+=2;NFSU2_TR(0x672780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672781:{NFSU2_TR(0x672781);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672784:L672784:{c.instructions+=3;NFSU2_TR(0x672784);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672786:{NFSU2_TR(0x672786);
__builtin_memmove((R+8),(R+4),4);
}
B672788:{NFSU2_TR(0x672788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67278dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B67278d:L67278d:{c.instructions+=9;NFSU2_TR(0x67278d);
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
B67278f:{NFSU2_TR(0x67278f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672792:{NFSU2_TR(0x672792);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672795:{NFSU2_TR(0x672795);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672798:{NFSU2_TR(0x672798);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67279b:{NFSU2_TR(0x67279b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67279e:{NFSU2_TR(0x67279e);
u8 U[4];
w4(U+0,u32(0x7b77e0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B6727a4:{NFSU2_TR(0x6727a4);
__builtin_memmove((R+0),(R+8),4);
}
B6727a6:{NFSU2_TR(0x6727a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6727a7:L6727a7:{c.instructions+=6;NFSU2_TR(0x6727a7);
__builtin_memmove((R+28),(R+28),4);
}
B6727a9:{NFSU2_TR(0x6727a9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6727aa:{NFSU2_TR(0x6727aa);
__builtin_memmove((R+20),(R+16),4);
}
B6727ac:{NFSU2_TR(0x6727ac);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6727ae:{NFSU2_TR(0x6727ae);
__builtin_memmove((R+8),(R+4),4);
}
B6727b0:{NFSU2_TR(0x6727b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6727b5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B6727b5:L6727b5:{c.instructions+=14;NFSU2_TR(0x6727b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6727b8:{NFSU2_TR(0x6727b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6727bb:{NFSU2_TR(0x6727bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6727be:{NFSU2_TR(0x6727be);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6727c1:{NFSU2_TR(0x6727c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6727c4:{NFSU2_TR(0x6727c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6727c7:{NFSU2_TR(0x6727c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6727ca:{NFSU2_TR(0x6727ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6727cd:{NFSU2_TR(0x6727cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6727d0:{NFSU2_TR(0x6727d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6727d3:{NFSU2_TR(0x6727d3);
u8 U[4];
w4(U+0,u32(0x7b77e0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B6727d9:{NFSU2_TR(0x6727d9);
__builtin_memmove((R+0),(R+8),4);
}
B6727db:{NFSU2_TR(0x6727db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6727dc:{NFSU2_TR(0x6727dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6727df:L6727df:{c.instructions+=9;NFSU2_TR(0x6727df);
__builtin_memmove((R+28),(R+28),4);
}
B6727e1:{NFSU2_TR(0x6727e1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6727e2:{NFSU2_TR(0x6727e2);
__builtin_memmove((R+20),(R+16),4);
}
B6727e4:{NFSU2_TR(0x6727e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6727e5:{NFSU2_TR(0x6727e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6727e6:{NFSU2_TR(0x6727e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6727e9:{NFSU2_TR(0x6727e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6727ea:{NFSU2_TR(0x6727ea);
__builtin_memmove((R+24),(R+4),4);
}
B6727ec:{NFSU2_TR(0x6727ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6727f1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672404u);}goto L672404;}
}
B6727f1:L6727f1:{c.instructions+=2;NFSU2_TR(0x6727f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6727f3:{NFSU2_TR(0x6727f3);
if(r1(R+518)){{goto L672837;}}
}
B6727f5:L6727f5:{c.instructions+=3;NFSU2_TR(0x6727f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6727f8:{NFSU2_TR(0x6727f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6727fb:{NFSU2_TR(0x6727fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672837;}}
}
B6727fd:L6727fd:{c.instructions+=3;NFSU2_TR(0x6727fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672800:{NFSU2_TR(0x672800);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672803:{NFSU2_TR(0x672803);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672837;}}
}
B672805:L672805:{c.instructions+=3;NFSU2_TR(0x672805);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672808:{NFSU2_TR(0x672808);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67280b:{NFSU2_TR(0x67280b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672810ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672810:L672810:{c.instructions+=2;NFSU2_TR(0x672810);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672812:{NFSU2_TR(0x672812);
if(r1(R+518)){{goto L672837;}}
}
B672814:L672814:{c.instructions+=3;NFSU2_TR(0x672814);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672817:{NFSU2_TR(0x672817);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67281a:{NFSU2_TR(0x67281a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67281full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B67281f:L67281f:{c.instructions+=2;NFSU2_TR(0x67281f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672821:{NFSU2_TR(0x672821);
if(r1(R+518)){{goto L672837;}}
}
B672823:L672823:{c.instructions+=3;NFSU2_TR(0x672823);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672826:{NFSU2_TR(0x672826);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672829:{NFSU2_TR(0x672829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67282eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B67282e:L67282e:{c.instructions+=2;NFSU2_TR(0x67282e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672830:{NFSU2_TR(0x672830);
if(r1(R+518)){{goto L672837;}}
}
B672832:L672832:{c.instructions+=3;NFSU2_TR(0x672832);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B672834:{NFSU2_TR(0x672834);
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
B672835:{NFSU2_TR(0x672835);
{goto L672839;}
}
B672837:L672837:{c.instructions+=1;NFSU2_TR(0x672837);
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
B672839:L672839:{c.instructions+=4;NFSU2_TR(0x672839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67283a:{NFSU2_TR(0x67283a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67283b:{NFSU2_TR(0x67283b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B67283c:{NFSU2_TR(0x67283c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67283f:L67283f:{c.instructions+=3;NFSU2_TR(0x67283f);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672841:{NFSU2_TR(0x672841);
__builtin_memmove((R+8),(R+4),4);
}
B672843:{NFSU2_TR(0x672843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672848ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672848:L672848:{c.instructions+=12;NFSU2_TR(0x672848);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67284c:{NFSU2_TR(0x67284c);
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
B67284e:{NFSU2_TR(0x67284e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672851:{NFSU2_TR(0x672851);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672854:{NFSU2_TR(0x672854);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672857:{NFSU2_TR(0x672857);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67285a:{NFSU2_TR(0x67285a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67285d:{NFSU2_TR(0x67285d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672860:{NFSU2_TR(0x672860);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672863:{NFSU2_TR(0x672863);
u8 U[4];
w4(U+0,u32(0x7b77ecull));
s4(u32(r4(R+8)),r4(U+0));
}
B672869:{NFSU2_TR(0x672869);
__builtin_memmove((R+0),(R+8),4);
}
B67286b:{NFSU2_TR(0x67286b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67286c:L67286c:{c.instructions+=6;NFSU2_TR(0x67286c);
__builtin_memmove((R+28),(R+28),4);
}
B67286e:{NFSU2_TR(0x67286e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67286f:{NFSU2_TR(0x67286f);
__builtin_memmove((R+20),(R+16),4);
}
B672871:{NFSU2_TR(0x672871);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672873:{NFSU2_TR(0x672873);
__builtin_memmove((R+8),(R+4),4);
}
B672875:{NFSU2_TR(0x672875);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67287aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B67287a:L67287a:{c.instructions+=17;NFSU2_TR(0x67287a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67287d:{NFSU2_TR(0x67287d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672880:{NFSU2_TR(0x672880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672883:{NFSU2_TR(0x672883);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672886:{NFSU2_TR(0x672886);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672889:{NFSU2_TR(0x672889);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67288c:{NFSU2_TR(0x67288c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67288f:{NFSU2_TR(0x67288f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672892:{NFSU2_TR(0x672892);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B672894:{NFSU2_TR(0x672894);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B672898:{NFSU2_TR(0x672898);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67289b:{NFSU2_TR(0x67289b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67289e:{NFSU2_TR(0x67289e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6728a1:{NFSU2_TR(0x6728a1);
u8 U[4];
w4(U+0,u32(0x7b77ecull));
s4(u32(r4(R+8)),r4(U+0));
}
B6728a7:{NFSU2_TR(0x6728a7);
__builtin_memmove((R+0),(R+8),4);
}
B6728a9:{NFSU2_TR(0x6728a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6728aa:{NFSU2_TR(0x6728aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6728ad:L6728ad:{c.instructions+=9;NFSU2_TR(0x6728ad);
__builtin_memmove((R+28),(R+28),4);
}
B6728af:{NFSU2_TR(0x6728af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6728b0:{NFSU2_TR(0x6728b0);
__builtin_memmove((R+20),(R+16),4);
}
B6728b2:{NFSU2_TR(0x6728b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6728b3:{NFSU2_TR(0x6728b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6728b4:{NFSU2_TR(0x6728b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6728b7:{NFSU2_TR(0x6728b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6728b8:{NFSU2_TR(0x6728b8);
__builtin_memmove((R+24),(R+4),4);
}
B6728ba:{NFSU2_TR(0x6728ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6728bfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672404u);}goto L672404;}
}
B6728bf:L6728bf:{c.instructions+=2;NFSU2_TR(0x6728bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6728c1:{NFSU2_TR(0x6728c1);
if(r1(R+518)){{goto L67291d;}}
}
B6728c3:L6728c3:{c.instructions+=3;NFSU2_TR(0x6728c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6728c6:{NFSU2_TR(0x6728c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6728c9:{NFSU2_TR(0x6728c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67291d;}}
}
B6728cb:L6728cb:{c.instructions+=3;NFSU2_TR(0x6728cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6728ce:{NFSU2_TR(0x6728ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6728d1:{NFSU2_TR(0x6728d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67291d;}}
}
B6728d3:L6728d3:{c.instructions+=3;NFSU2_TR(0x6728d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6728d6:{NFSU2_TR(0x6728d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6728d9:{NFSU2_TR(0x6728d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67291d;}}
}
B6728db:L6728db:{c.instructions+=3;NFSU2_TR(0x6728db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6728de:{NFSU2_TR(0x6728de);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6728e1:{NFSU2_TR(0x6728e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67291d;}}
}
B6728e3:L6728e3:{c.instructions+=3;NFSU2_TR(0x6728e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6728e6:{NFSU2_TR(0x6728e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6728e9:{NFSU2_TR(0x6728e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67291d;}}
}
B6728eb:L6728eb:{c.instructions+=3;NFSU2_TR(0x6728eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6728ee:{NFSU2_TR(0x6728ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6728f1:{NFSU2_TR(0x6728f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6728f6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B6728f6:L6728f6:{c.instructions+=2;NFSU2_TR(0x6728f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6728f8:{NFSU2_TR(0x6728f8);
if(r1(R+518)){{goto L67291d;}}
}
B6728fa:L6728fa:{c.instructions+=3;NFSU2_TR(0x6728fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6728fd:{NFSU2_TR(0x6728fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672900:{NFSU2_TR(0x672900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672905ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672905:L672905:{c.instructions+=2;NFSU2_TR(0x672905);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672907:{NFSU2_TR(0x672907);
if(r1(R+518)){{goto L67291d;}}
}
B672909:L672909:{c.instructions+=3;NFSU2_TR(0x672909);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67290c:{NFSU2_TR(0x67290c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67290f:{NFSU2_TR(0x67290f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672914ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672914:L672914:{c.instructions+=2;NFSU2_TR(0x672914);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672916:{NFSU2_TR(0x672916);
if(r1(R+518)){{goto L67291d;}}
}
B672918:L672918:{c.instructions+=3;NFSU2_TR(0x672918);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67291a:{NFSU2_TR(0x67291a);
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
B67291b:{NFSU2_TR(0x67291b);
{goto L67291f;}
}
B67291d:L67291d:{c.instructions+=1;NFSU2_TR(0x67291d);
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
B67291f:L67291f:{c.instructions+=4;NFSU2_TR(0x67291f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672920:{NFSU2_TR(0x672920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672921:{NFSU2_TR(0x672921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672922:{NFSU2_TR(0x672922);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672925:L672925:{c.instructions+=3;NFSU2_TR(0x672925);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672927:{NFSU2_TR(0x672927);
__builtin_memmove((R+8),(R+4),4);
}
B672929:{NFSU2_TR(0x672929);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67292eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B67292e:L67292e:{c.instructions+=7;NFSU2_TR(0x67292e);
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
B672930:{NFSU2_TR(0x672930);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672933:{NFSU2_TR(0x672933);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672936:{NFSU2_TR(0x672936);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672939:{NFSU2_TR(0x672939);
u8 U[4];
w4(U+0,u32(0x7b77f8ull));
s4(u32(r4(R+8)),r4(U+0));
}
B67293f:{NFSU2_TR(0x67293f);
__builtin_memmove((R+0),(R+8),4);
}
B672941:{NFSU2_TR(0x672941);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672942:L672942:{c.instructions+=6;NFSU2_TR(0x672942);
__builtin_memmove((R+28),(R+28),4);
}
B672944:{NFSU2_TR(0x672944);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672945:{NFSU2_TR(0x672945);
__builtin_memmove((R+20),(R+16),4);
}
B672947:{NFSU2_TR(0x672947);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672949:{NFSU2_TR(0x672949);
__builtin_memmove((R+8),(R+4),4);
}
B67294b:{NFSU2_TR(0x67294b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672950ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672950:L672950:{c.instructions+=10;NFSU2_TR(0x672950);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672953:{NFSU2_TR(0x672953);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672956:{NFSU2_TR(0x672956);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672959:{NFSU2_TR(0x672959);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67295c:{NFSU2_TR(0x67295c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67295f:{NFSU2_TR(0x67295f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672962:{NFSU2_TR(0x672962);
u8 U[4];
w4(U+0,u32(0x7b77f8ull));
s4(u32(r4(R+8)),r4(U+0));
}
B672968:{NFSU2_TR(0x672968);
__builtin_memmove((R+0),(R+8),4);
}
B67296a:{NFSU2_TR(0x67296a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B67296b:{NFSU2_TR(0x67296b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67296e:L67296e:{c.instructions+=9;NFSU2_TR(0x67296e);
__builtin_memmove((R+28),(R+28),4);
}
B672970:{NFSU2_TR(0x672970);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672971:{NFSU2_TR(0x672971);
__builtin_memmove((R+20),(R+16),4);
}
B672973:{NFSU2_TR(0x672973);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672974:{NFSU2_TR(0x672974);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672975:{NFSU2_TR(0x672975);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B672978:{NFSU2_TR(0x672978);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672979:{NFSU2_TR(0x672979);
__builtin_memmove((R+24),(R+4),4);
}
B67297b:{NFSU2_TR(0x67297b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672980ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672404u);}goto L672404;}
}
B672980:L672980:{c.instructions+=2;NFSU2_TR(0x672980);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672982:{NFSU2_TR(0x672982);
if(r1(R+518)){{goto L6729af;}}
}
B672984:L672984:{c.instructions+=3;NFSU2_TR(0x672984);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672987:{NFSU2_TR(0x672987);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67298a:{NFSU2_TR(0x67298a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6729af;}}
}
B67298c:L67298c:{c.instructions+=3;NFSU2_TR(0x67298c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67298f:{NFSU2_TR(0x67298f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672992:{NFSU2_TR(0x672992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672997ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672997:L672997:{c.instructions+=2;NFSU2_TR(0x672997);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672999:{NFSU2_TR(0x672999);
if(r1(R+518)){{goto L6729af;}}
}
B67299b:L67299b:{c.instructions+=3;NFSU2_TR(0x67299b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67299e:{NFSU2_TR(0x67299e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6729a1:{NFSU2_TR(0x6729a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6729a6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B6729a6:L6729a6:{c.instructions+=2;NFSU2_TR(0x6729a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6729a8:{NFSU2_TR(0x6729a8);
if(r1(R+518)){{goto L6729af;}}
}
B6729aa:L6729aa:{c.instructions+=3;NFSU2_TR(0x6729aa);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6729ac:{NFSU2_TR(0x6729ac);
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
B6729ad:{NFSU2_TR(0x6729ad);
{goto L6729b1;}
}
B6729af:L6729af:{c.instructions+=1;NFSU2_TR(0x6729af);
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
B6729b1:L6729b1:{c.instructions+=4;NFSU2_TR(0x6729b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6729b2:{NFSU2_TR(0x6729b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6729b3:{NFSU2_TR(0x6729b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6729b4:{NFSU2_TR(0x6729b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6729b7:L6729b7:{c.instructions+=3;NFSU2_TR(0x6729b7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6729b9:{NFSU2_TR(0x6729b9);
__builtin_memmove((R+8),(R+4),4);
}
B6729bb:{NFSU2_TR(0x6729bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6729c0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B6729c0:L6729c0:{c.instructions+=5;NFSU2_TR(0x6729c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6729c4:{NFSU2_TR(0x6729c4);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6729c8:{NFSU2_TR(0x6729c8);
u8 U[4];
w4(U+0,u32(0x7b7804ull));
s4(u32(r4(R+8)),r4(U+0));
}
B6729ce:{NFSU2_TR(0x6729ce);
__builtin_memmove((R+0),(R+8),4);
}
B6729d0:{NFSU2_TR(0x6729d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6729d1:L6729d1:{c.instructions+=6;NFSU2_TR(0x6729d1);
__builtin_memmove((R+28),(R+28),4);
}
B6729d3:{NFSU2_TR(0x6729d3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6729d4:{NFSU2_TR(0x6729d4);
__builtin_memmove((R+20),(R+16),4);
}
B6729d6:{NFSU2_TR(0x6729d6);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6729d8:{NFSU2_TR(0x6729d8);
__builtin_memmove((R+8),(R+4),4);
}
B6729da:{NFSU2_TR(0x6729da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6729dfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B6729df:L6729df:{c.instructions+=8;NFSU2_TR(0x6729df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6729e2:{NFSU2_TR(0x6729e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6729e5:{NFSU2_TR(0x6729e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6729e8:{NFSU2_TR(0x6729e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6729eb:{NFSU2_TR(0x6729eb);
u8 U[4];
w4(U+0,u32(0x7b7804ull));
s4(u32(r4(R+8)),r4(U+0));
}
B6729f1:{NFSU2_TR(0x6729f1);
__builtin_memmove((R+0),(R+8),4);
}
B6729f3:{NFSU2_TR(0x6729f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6729f4:{NFSU2_TR(0x6729f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6729f7:L6729f7:{c.instructions+=6;NFSU2_TR(0x6729f7);
__builtin_memmove((R+28),(R+28),4);
}
B6729f9:{NFSU2_TR(0x6729f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6729fa:{NFSU2_TR(0x6729fa);
__builtin_memmove((R+20),(R+16),4);
}
B6729fc:{NFSU2_TR(0x6729fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6729ff:{NFSU2_TR(0x6729ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672a00:{NFSU2_TR(0x672a00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672a05ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672404u);}goto L672404;}
}
B672a05:L672a05:{c.instructions+=2;NFSU2_TR(0x672a05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672a07:{NFSU2_TR(0x672a07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672a0d;}}
}
B672a09:L672a09:{c.instructions+=2;NFSU2_TR(0x672a09);
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
B672a0b:{NFSU2_TR(0x672a0b);
{goto L672a26;}
}
B672a0d:L672a0d:{c.instructions+=3;NFSU2_TR(0x672a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672a10:{NFSU2_TR(0x672a10);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672a13:{NFSU2_TR(0x672a13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672a09u);}goto L672a09;}}
}
B672a15:L672a15:{c.instructions+=3;NFSU2_TR(0x672a15);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672a18:{NFSU2_TR(0x672a18);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672a1b:{NFSU2_TR(0x672a1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672a20ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672a20:L672a20:{c.instructions+=3;NFSU2_TR(0x672a20);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B672a22:{NFSU2_TR(0x672a22);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B672a24:{NFSU2_TR(0x672a24);
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
B672a26:L672a26:{c.instructions+=2;NFSU2_TR(0x672a26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672a27:{NFSU2_TR(0x672a27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672a2a:L672a2a:{c.instructions+=3;NFSU2_TR(0x672a2a);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672a2c:{NFSU2_TR(0x672a2c);
__builtin_memmove((R+8),(R+4),4);
}
B672a2e:{NFSU2_TR(0x672a2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672a33ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672a33:L672a33:{c.instructions+=9;NFSU2_TR(0x672a33);
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
B672a35:{NFSU2_TR(0x672a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672a38:{NFSU2_TR(0x672a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672a3b:{NFSU2_TR(0x672a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672a3e:{NFSU2_TR(0x672a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672a41:{NFSU2_TR(0x672a41);
u8 U[4];
w4(U+0,u32(0x7b7810ull));
s4(u32(r4(R+8)),r4(U+0));
}
B672a47:{NFSU2_TR(0x672a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B672a4e:{NFSU2_TR(0x672a4e);
__builtin_memmove((R+0),(R+8),4);
}
B672a50:{NFSU2_TR(0x672a50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672a51:L672a51:{c.instructions+=6;NFSU2_TR(0x672a51);
__builtin_memmove((R+28),(R+28),4);
}
B672a53:{NFSU2_TR(0x672a53);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672a54:{NFSU2_TR(0x672a54);
__builtin_memmove((R+20),(R+16),4);
}
B672a56:{NFSU2_TR(0x672a56);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672a58:{NFSU2_TR(0x672a58);
__builtin_memmove((R+8),(R+4),4);
}
B672a5a:{NFSU2_TR(0x672a5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672a5full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672a5f:L672a5f:{c.instructions+=14;NFSU2_TR(0x672a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672a62:{NFSU2_TR(0x672a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672a65:{NFSU2_TR(0x672a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672a68:{NFSU2_TR(0x672a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672a6b:{NFSU2_TR(0x672a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672a6e:{NFSU2_TR(0x672a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672a71:{NFSU2_TR(0x672a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672a74:{NFSU2_TR(0x672a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672a77:{NFSU2_TR(0x672a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672a7a:{NFSU2_TR(0x672a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672a7d:{NFSU2_TR(0x672a7d);
u8 U[4];
w4(U+0,u32(0x7b7810ull));
s4(u32(r4(R+8)),r4(U+0));
}
B672a83:{NFSU2_TR(0x672a83);
__builtin_memmove((R+0),(R+8),4);
}
B672a85:{NFSU2_TR(0x672a85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672a86:{NFSU2_TR(0x672a86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672a89:L672a89:{c.instructions+=6;NFSU2_TR(0x672a89);
__builtin_memmove((R+28),(R+28),4);
}
B672a8b:{NFSU2_TR(0x672a8b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672a8c:{NFSU2_TR(0x672a8c);
__builtin_memmove((R+20),(R+16),4);
}
B672a8e:{NFSU2_TR(0x672a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B672a91:{NFSU2_TR(0x672a91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672a92:{NFSU2_TR(0x672a92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672a97ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672404u);}goto L672404;}
}
B672a97:L672a97:{c.instructions+=2;NFSU2_TR(0x672a97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672a99:{NFSU2_TR(0x672a99);
if(r1(R+518)){{goto L672ac8;}}
}
B672a9b:L672a9b:{c.instructions+=3;NFSU2_TR(0x672a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672a9e:{NFSU2_TR(0x672a9e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672aa1:{NFSU2_TR(0x672aa1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672ac8;}}
}
B672aa3:L672aa3:{c.instructions+=3;NFSU2_TR(0x672aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672aa6:{NFSU2_TR(0x672aa6);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672aa9:{NFSU2_TR(0x672aa9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672ac8;}}
}
B672aab:L672aab:{c.instructions+=3;NFSU2_TR(0x672aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672aae:{NFSU2_TR(0x672aae);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672ab1:{NFSU2_TR(0x672ab1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672ac8;}}
}
B672ab3:L672ab3:{c.instructions+=3;NFSU2_TR(0x672ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672ab6:{NFSU2_TR(0x672ab6);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672ab9:{NFSU2_TR(0x672ab9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672ac8;}}
}
B672abb:L672abb:{c.instructions+=3;NFSU2_TR(0x672abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672abe:{NFSU2_TR(0x672abe);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672ac1:{NFSU2_TR(0x672ac1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672ac8;}}
}
B672ac3:L672ac3:{c.instructions+=3;NFSU2_TR(0x672ac3);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B672ac5:{NFSU2_TR(0x672ac5);
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
B672ac6:{NFSU2_TR(0x672ac6);
{goto L672aca;}
}
B672ac8:L672ac8:{c.instructions+=1;NFSU2_TR(0x672ac8);
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
B672aca:L672aca:{c.instructions+=2;NFSU2_TR(0x672aca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672acb:{NFSU2_TR(0x672acb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672ace:L672ace:{c.instructions+=3;NFSU2_TR(0x672ace);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672ad0:{NFSU2_TR(0x672ad0);
__builtin_memmove((R+8),(R+4),4);
}
B672ad2:{NFSU2_TR(0x672ad2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672ad7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672ad7:L672ad7:{c.instructions+=16;NFSU2_TR(0x672ad7);
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
B672ad9:{NFSU2_TR(0x672ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672adc:{NFSU2_TR(0x672adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672adf:{NFSU2_TR(0x672adf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672ae2:{NFSU2_TR(0x672ae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672ae5:{NFSU2_TR(0x672ae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672ae8:{NFSU2_TR(0x672ae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672aeb:{NFSU2_TR(0x672aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672aee:{NFSU2_TR(0x672aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672af1:{NFSU2_TR(0x672af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672af4:{NFSU2_TR(0x672af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672af7:{NFSU2_TR(0x672af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672afa:{NFSU2_TR(0x672afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672afd:{NFSU2_TR(0x672afd);
u8 U[4];
w4(U+0,u32(0x7b781cull));
s4(u32(r4(R+8)),r4(U+0));
}
B672b03:{NFSU2_TR(0x672b03);
__builtin_memmove((R+0),(R+8),4);
}
B672b05:{NFSU2_TR(0x672b05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672b06:L672b06:{c.instructions+=9;NFSU2_TR(0x672b06);
__builtin_memmove((R+28),(R+28),4);
}
B672b08:{NFSU2_TR(0x672b08);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672b09:{NFSU2_TR(0x672b09);
__builtin_memmove((R+20),(R+16),4);
}
B672b0b:{NFSU2_TR(0x672b0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672b0c:{NFSU2_TR(0x672b0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672b0d:{NFSU2_TR(0x672b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B672b10:{NFSU2_TR(0x672b10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672b11:{NFSU2_TR(0x672b11);
__builtin_memmove((R+24),(R+4),4);
}
B672b13:{NFSU2_TR(0x672b13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672b18ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672404u);}goto L672404;}
}
B672b18:L672b18:{c.instructions+=2;NFSU2_TR(0x672b18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672b1a:{NFSU2_TR(0x672b1a);
if(r1(R+518)){{goto L672bbe;}}
}
B672b20:L672b20:{c.instructions+=3;NFSU2_TR(0x672b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672b23:{NFSU2_TR(0x672b23);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672b26:{NFSU2_TR(0x672b26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672bbe;}}
}
B672b2c:L672b2c:{c.instructions+=3;NFSU2_TR(0x672b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672b2f:{NFSU2_TR(0x672b2f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672b32:{NFSU2_TR(0x672b32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672bbe;}}
}
B672b38:L672b38:{c.instructions+=3;NFSU2_TR(0x672b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672b3b:{NFSU2_TR(0x672b3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672b3e:{NFSU2_TR(0x672b3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672bbe;}}
}
B672b40:L672b40:{c.instructions+=3;NFSU2_TR(0x672b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672b43:{NFSU2_TR(0x672b43);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672b46:{NFSU2_TR(0x672b46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672bbe;}}
}
B672b48:L672b48:{c.instructions+=3;NFSU2_TR(0x672b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672b4b:{NFSU2_TR(0x672b4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672b4e:{NFSU2_TR(0x672b4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672bbe;}}
}
B672b50:L672b50:{c.instructions+=3;NFSU2_TR(0x672b50);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672b53:{NFSU2_TR(0x672b53);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672b56:{NFSU2_TR(0x672b56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672b5bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672b5b:L672b5b:{c.instructions+=2;NFSU2_TR(0x672b5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672b5d:{NFSU2_TR(0x672b5d);
if(r1(R+518)){{goto L672bbe;}}
}
B672b5f:L672b5f:{c.instructions+=3;NFSU2_TR(0x672b5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672b62:{NFSU2_TR(0x672b62);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672b65:{NFSU2_TR(0x672b65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672b6aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672b6a:L672b6a:{c.instructions+=2;NFSU2_TR(0x672b6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672b6c:{NFSU2_TR(0x672b6c);
if(r1(R+518)){{goto L672bbe;}}
}
B672b6e:L672b6e:{c.instructions+=3;NFSU2_TR(0x672b6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672b71:{NFSU2_TR(0x672b71);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672b74:{NFSU2_TR(0x672b74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672b79ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672b79:L672b79:{c.instructions+=2;NFSU2_TR(0x672b79);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672b7b:{NFSU2_TR(0x672b7b);
if(r1(R+518)){{goto L672bbe;}}
}
B672b7d:L672b7d:{c.instructions+=3;NFSU2_TR(0x672b7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672b80:{NFSU2_TR(0x672b80);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672b83:{NFSU2_TR(0x672b83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672b88ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672b88:L672b88:{c.instructions+=2;NFSU2_TR(0x672b88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672b8a:{NFSU2_TR(0x672b8a);
if(r1(R+518)){{goto L672bbe;}}
}
B672b8c:L672b8c:{c.instructions+=3;NFSU2_TR(0x672b8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672b8f:{NFSU2_TR(0x672b8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672b92:{NFSU2_TR(0x672b92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672b97ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672b97:L672b97:{c.instructions+=2;NFSU2_TR(0x672b97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672b99:{NFSU2_TR(0x672b99);
if(r1(R+518)){{goto L672bbe;}}
}
B672b9b:L672b9b:{c.instructions+=3;NFSU2_TR(0x672b9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672b9e:{NFSU2_TR(0x672b9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672ba1:{NFSU2_TR(0x672ba1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672ba6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672ba6:L672ba6:{c.instructions+=2;NFSU2_TR(0x672ba6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672ba8:{NFSU2_TR(0x672ba8);
if(r1(R+518)){{goto L672bbe;}}
}
B672baa:L672baa:{c.instructions+=3;NFSU2_TR(0x672baa);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672bad:{NFSU2_TR(0x672bad);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672bb0:{NFSU2_TR(0x672bb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672bb5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672bb5:L672bb5:{c.instructions+=2;NFSU2_TR(0x672bb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672bb7:{NFSU2_TR(0x672bb7);
if(r1(R+518)){{goto L672bbe;}}
}
B672bb9:L672bb9:{c.instructions+=3;NFSU2_TR(0x672bb9);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B672bbb:{NFSU2_TR(0x672bbb);
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
B672bbc:{NFSU2_TR(0x672bbc);
{goto L672bc0;}
}
B672bbe:L672bbe:{c.instructions+=1;NFSU2_TR(0x672bbe);
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
B672bc0:L672bc0:{c.instructions+=4;NFSU2_TR(0x672bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672bc1:{NFSU2_TR(0x672bc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672bc2:{NFSU2_TR(0x672bc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672bc3:{NFSU2_TR(0x672bc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672bc6:L672bc6:{c.instructions+=3;NFSU2_TR(0x672bc6);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672bc8:{NFSU2_TR(0x672bc8);
__builtin_memmove((R+8),(R+4),4);
}
B672bca:{NFSU2_TR(0x672bca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672bcfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672bcf:L672bcf:{c.instructions+=16;NFSU2_TR(0x672bcf);
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
B672bd1:{NFSU2_TR(0x672bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672bd4:{NFSU2_TR(0x672bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672bd7:{NFSU2_TR(0x672bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672bda:{NFSU2_TR(0x672bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672bdd:{NFSU2_TR(0x672bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672be0:{NFSU2_TR(0x672be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672be3:{NFSU2_TR(0x672be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672be6:{NFSU2_TR(0x672be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672be9:{NFSU2_TR(0x672be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672bec:{NFSU2_TR(0x672bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672bef:{NFSU2_TR(0x672bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672bf2:{NFSU2_TR(0x672bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672bf5:{NFSU2_TR(0x672bf5);
u8 U[4];
w4(U+0,u32(0x7b7828ull));
s4(u32(r4(R+8)),r4(U+0));
}
B672bfb:{NFSU2_TR(0x672bfb);
__builtin_memmove((R+0),(R+8),4);
}
B672bfd:{NFSU2_TR(0x672bfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672bfe:L672bfe:{c.instructions+=9;NFSU2_TR(0x672bfe);
__builtin_memmove((R+28),(R+28),4);
}
B672c00:{NFSU2_TR(0x672c00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672c01:{NFSU2_TR(0x672c01);
__builtin_memmove((R+20),(R+16),4);
}
B672c03:{NFSU2_TR(0x672c03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672c04:{NFSU2_TR(0x672c04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672c05:{NFSU2_TR(0x672c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B672c08:{NFSU2_TR(0x672c08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672c09:{NFSU2_TR(0x672c09);
__builtin_memmove((R+24),(R+4),4);
}
B672c0b:{NFSU2_TR(0x672c0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672c10ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672404u);}goto L672404;}
}
B672c10:L672c10:{c.instructions+=2;NFSU2_TR(0x672c10);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672c12:{NFSU2_TR(0x672c12);
if(r1(R+518)){{goto L672cb0;}}
}
B672c18:L672c18:{c.instructions+=3;NFSU2_TR(0x672c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672c1b:{NFSU2_TR(0x672c1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672c1e:{NFSU2_TR(0x672c1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672cb0;}}
}
B672c24:L672c24:{c.instructions+=3;NFSU2_TR(0x672c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672c27:{NFSU2_TR(0x672c27);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672c2a:{NFSU2_TR(0x672c2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672cb0;}}
}
B672c30:L672c30:{c.instructions+=3;NFSU2_TR(0x672c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672c33:{NFSU2_TR(0x672c33);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672c36:{NFSU2_TR(0x672c36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672cb0;}}
}
B672c38:L672c38:{c.instructions+=3;NFSU2_TR(0x672c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672c3b:{NFSU2_TR(0x672c3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672c3e:{NFSU2_TR(0x672c3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672cb0;}}
}
B672c40:L672c40:{c.instructions+=3;NFSU2_TR(0x672c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672c43:{NFSU2_TR(0x672c43);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672c46:{NFSU2_TR(0x672c46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672cb0;}}
}
B672c48:L672c48:{c.instructions+=3;NFSU2_TR(0x672c48);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672c4b:{NFSU2_TR(0x672c4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672c4e:{NFSU2_TR(0x672c4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672c53ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672c53:L672c53:{c.instructions+=2;NFSU2_TR(0x672c53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672c55:{NFSU2_TR(0x672c55);
if(r1(R+518)){{goto L672cb0;}}
}
B672c57:L672c57:{c.instructions+=3;NFSU2_TR(0x672c57);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672c5a:{NFSU2_TR(0x672c5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672c5d:{NFSU2_TR(0x672c5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672c62ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672c62:L672c62:{c.instructions+=2;NFSU2_TR(0x672c62);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672c64:{NFSU2_TR(0x672c64);
if(r1(R+518)){{goto L672cb0;}}
}
B672c66:L672c66:{c.instructions+=3;NFSU2_TR(0x672c66);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672c69:{NFSU2_TR(0x672c69);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672c6c:{NFSU2_TR(0x672c6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672c71ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672c71:L672c71:{c.instructions+=2;NFSU2_TR(0x672c71);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672c73:{NFSU2_TR(0x672c73);
if(r1(R+518)){{goto L672cb0;}}
}
B672c75:L672c75:{c.instructions+=3;NFSU2_TR(0x672c75);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672c78:{NFSU2_TR(0x672c78);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672c7b:{NFSU2_TR(0x672c7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672c80ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672c80:L672c80:{c.instructions+=2;NFSU2_TR(0x672c80);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672c82:{NFSU2_TR(0x672c82);
if(r1(R+518)){{goto L672cb0;}}
}
B672c84:L672c84:{c.instructions+=3;NFSU2_TR(0x672c84);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672c87:{NFSU2_TR(0x672c87);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672c8a:{NFSU2_TR(0x672c8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672c8full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672c8f:L672c8f:{c.instructions+=2;NFSU2_TR(0x672c8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672c91:{NFSU2_TR(0x672c91);
if(r1(R+518)){{goto L672cb0;}}
}
B672c93:L672c93:{c.instructions+=3;NFSU2_TR(0x672c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672c96:{NFSU2_TR(0x672c96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672c98:{NFSU2_TR(0x672c98);
if(r1(R+518)){{goto L672cab;}}
}
B672c9a:L672c9a:{c.instructions+=5;NFSU2_TR(0x672c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B672c9d:{NFSU2_TR(0x672c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B672ca0:{NFSU2_TR(0x672ca0);
__builtin_memmove((R+4),(R+0),4);
}
B672ca2:{NFSU2_TR(0x672ca2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B672ca5:{NFSU2_TR(0x672ca5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B672ca7:L672ca7:{c.instructions+=1;NFSU2_TR(0x672ca7);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L672ca9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672ca7u);}goto L672ca7;}}
}
B672ca9:L672ca9:{c.instructions+=1;NFSU2_TR(0x672ca9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672cb0;}}
}
B672cab:L672cab:{c.instructions+=3;NFSU2_TR(0x672cab);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B672cad:{NFSU2_TR(0x672cad);
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
B672cae:{NFSU2_TR(0x672cae);
{goto L672cb2;}
}
B672cb0:L672cb0:{c.instructions+=1;NFSU2_TR(0x672cb0);
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
B672cb2:L672cb2:{c.instructions+=4;NFSU2_TR(0x672cb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672cb3:{NFSU2_TR(0x672cb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672cb4:{NFSU2_TR(0x672cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672cb5:{NFSU2_TR(0x672cb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672cb8:L672cb8:{c.instructions+=3;NFSU2_TR(0x672cb8);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672cba:{NFSU2_TR(0x672cba);
__builtin_memmove((R+8),(R+4),4);
}
B672cbc:{NFSU2_TR(0x672cbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672cc1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672cc1:L672cc1:{c.instructions+=9;NFSU2_TR(0x672cc1);
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
B672cc3:{NFSU2_TR(0x672cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672cc6:{NFSU2_TR(0x672cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672cc9:{NFSU2_TR(0x672cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672ccc:{NFSU2_TR(0x672ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672ccf:{NFSU2_TR(0x672ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672cd2:{NFSU2_TR(0x672cd2);
u8 U[4];
w4(U+0,u32(0x7b7834ull));
s4(u32(r4(R+8)),r4(U+0));
}
B672cd8:{NFSU2_TR(0x672cd8);
__builtin_memmove((R+0),(R+8),4);
}
B672cda:{NFSU2_TR(0x672cda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672cdb:L672cdb:{c.instructions+=9;NFSU2_TR(0x672cdb);
__builtin_memmove((R+28),(R+28),4);
}
B672cdd:{NFSU2_TR(0x672cdd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672cde:{NFSU2_TR(0x672cde);
__builtin_memmove((R+20),(R+16),4);
}
B672ce0:{NFSU2_TR(0x672ce0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672ce1:{NFSU2_TR(0x672ce1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672ce2:{NFSU2_TR(0x672ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B672ce5:{NFSU2_TR(0x672ce5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672ce6:{NFSU2_TR(0x672ce6);
__builtin_memmove((R+24),(R+4),4);
}
B672ce8:{NFSU2_TR(0x672ce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672cedull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672404u);}goto L672404;}
}
B672ced:L672ced:{c.instructions+=2;NFSU2_TR(0x672ced);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672cef:{NFSU2_TR(0x672cef);
if(r1(R+518)){{goto L672d3a;}}
}
B672cf1:L672cf1:{c.instructions+=3;NFSU2_TR(0x672cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672cf4:{NFSU2_TR(0x672cf4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672cf7:{NFSU2_TR(0x672cf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672d3a;}}
}
B672cf9:L672cf9:{c.instructions+=3;NFSU2_TR(0x672cf9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672cfc:{NFSU2_TR(0x672cfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672cff:{NFSU2_TR(0x672cff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672d04ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672d04:L672d04:{c.instructions+=2;NFSU2_TR(0x672d04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672d06:{NFSU2_TR(0x672d06);
if(r1(R+518)){{goto L672d3a;}}
}
B672d08:L672d08:{c.instructions+=3;NFSU2_TR(0x672d08);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672d0b:{NFSU2_TR(0x672d0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672d0e:{NFSU2_TR(0x672d0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672d13ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672d13:L672d13:{c.instructions+=2;NFSU2_TR(0x672d13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672d15:{NFSU2_TR(0x672d15);
if(r1(R+518)){{goto L672d3a;}}
}
B672d17:L672d17:{c.instructions+=3;NFSU2_TR(0x672d17);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672d1a:{NFSU2_TR(0x672d1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672d1d:{NFSU2_TR(0x672d1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672d22ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672d22:L672d22:{c.instructions+=2;NFSU2_TR(0x672d22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672d24:{NFSU2_TR(0x672d24);
if(r1(R+518)){{goto L672d3a;}}
}
B672d26:L672d26:{c.instructions+=3;NFSU2_TR(0x672d26);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672d29:{NFSU2_TR(0x672d29);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672d2c:{NFSU2_TR(0x672d2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672d31ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672d31:L672d31:{c.instructions+=2;NFSU2_TR(0x672d31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672d33:{NFSU2_TR(0x672d33);
if(r1(R+518)){{goto L672d3a;}}
}
B672d35:L672d35:{c.instructions+=3;NFSU2_TR(0x672d35);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B672d37:{NFSU2_TR(0x672d37);
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
B672d38:{NFSU2_TR(0x672d38);
{goto L672d3c;}
}
B672d3a:L672d3a:{c.instructions+=1;NFSU2_TR(0x672d3a);
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
B672d3c:L672d3c:{c.instructions+=4;NFSU2_TR(0x672d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672d3d:{NFSU2_TR(0x672d3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672d3e:{NFSU2_TR(0x672d3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672d3f:{NFSU2_TR(0x672d3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672d42:L672d42:{c.instructions+=5;NFSU2_TR(0x672d42);
__builtin_memmove((R+28),(R+28),4);
}
B672d44:{NFSU2_TR(0x672d44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672d45:{NFSU2_TR(0x672d45);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672d47:{NFSU2_TR(0x672d47);
__builtin_memmove((R+8),(R+4),4);
}
B672d49:{NFSU2_TR(0x672d49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672d4eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672d4e:L672d4e:{c.instructions+=12;NFSU2_TR(0x672d4e);
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
B672d50:{NFSU2_TR(0x672d50);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672d52:{NFSU2_TR(0x672d52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B672d53:{NFSU2_TR(0x672d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672d56:{NFSU2_TR(0x672d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672d59:{NFSU2_TR(0x672d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672d5c:{NFSU2_TR(0x672d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672d5f:{NFSU2_TR(0x672d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672d62:{NFSU2_TR(0x672d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672d65:{NFSU2_TR(0x672d65);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672d68:{NFSU2_TR(0x672d68);
u8 U[4];
w4(U+0,u32(0x7b7840ull));
s4(u32(r4(R+8)),r4(U+0));
}
B672d6e:{NFSU2_TR(0x672d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B672d75:L672d75:{c.instructions+=1;NFSU2_TR(0x672d75);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L672d77;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672d75u);}goto L672d75;}
}
B672d77:L672d77:{c.instructions+=3;NFSU2_TR(0x672d77);
__builtin_memmove((R+0),(R+8),4);
}
B672d79:{NFSU2_TR(0x672d79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672d7a:{NFSU2_TR(0x672d7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672d7b:L672d7b:{c.instructions+=8;NFSU2_TR(0x672d7b);
__builtin_memmove((R+28),(R+28),4);
}
B672d7d:{NFSU2_TR(0x672d7d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672d7e:{NFSU2_TR(0x672d7e);
__builtin_memmove((R+20),(R+16),4);
}
B672d80:{NFSU2_TR(0x672d80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672d81:{NFSU2_TR(0x672d81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672d82:{NFSU2_TR(0x672d82);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672d84:{NFSU2_TR(0x672d84);
__builtin_memmove((R+8),(R+4),4);
}
B672d86:{NFSU2_TR(0x672d86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672d8bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672d8b:L672d8b:{c.instructions+=17;NFSU2_TR(0x672d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672d8e:{NFSU2_TR(0x672d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B672d92:{NFSU2_TR(0x672d92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B672d95:{NFSU2_TR(0x672d95);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B672d99:{NFSU2_TR(0x672d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672d9c:{NFSU2_TR(0x672d9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672d9f:{NFSU2_TR(0x672d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672da2:{NFSU2_TR(0x672da2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672da5:{NFSU2_TR(0x672da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672da8:{NFSU2_TR(0x672da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672dab:{NFSU2_TR(0x672dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672dae:{NFSU2_TR(0x672dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672db1:{NFSU2_TR(0x672db1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672db3:{NFSU2_TR(0x672db3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B672db4:{NFSU2_TR(0x672db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672db7:{NFSU2_TR(0x672db7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672dba:{NFSU2_TR(0x672dba);
u8 U[4];
w4(U+0,u32(0x7b7840ull));
s4(u32(r4(R+8)),r4(U+0));
}
B672dc0:L672dc0:{c.instructions+=1;NFSU2_TR(0x672dc0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L672dc2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672dc0u);}goto L672dc0;}
}
B672dc2:L672dc2:{c.instructions+=5;NFSU2_TR(0x672dc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672dc3:{NFSU2_TR(0x672dc3);
__builtin_memmove((R+0),(R+8),4);
}
B672dc5:{NFSU2_TR(0x672dc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672dc6:{NFSU2_TR(0x672dc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672dc7:{NFSU2_TR(0x672dc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672dca:L672dca:{c.instructions+=9;NFSU2_TR(0x672dca);
__builtin_memmove((R+28),(R+28),4);
}
B672dcc:{NFSU2_TR(0x672dcc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672dcd:{NFSU2_TR(0x672dcd);
__builtin_memmove((R+20),(R+16),4);
}
B672dcf:{NFSU2_TR(0x672dcf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672dd0:{NFSU2_TR(0x672dd0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672dd1:{NFSU2_TR(0x672dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B672dd4:{NFSU2_TR(0x672dd4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672dd5:{NFSU2_TR(0x672dd5);
__builtin_memmove((R+24),(R+4),4);
}
B672dd7:{NFSU2_TR(0x672dd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672ddcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672404u);}goto L672404;}
}
B672ddc:L672ddc:{c.instructions+=2;NFSU2_TR(0x672ddc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672dde:{NFSU2_TR(0x672dde);
if(r1(R+518)){{goto L672e41;}}
}
B672de0:L672de0:{c.instructions+=3;NFSU2_TR(0x672de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672de3:{NFSU2_TR(0x672de3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672de6:{NFSU2_TR(0x672de6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672e41;}}
}
B672de8:L672de8:{c.instructions+=3;NFSU2_TR(0x672de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672deb:{NFSU2_TR(0x672deb);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672dee:{NFSU2_TR(0x672dee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672e41;}}
}
B672df0:L672df0:{c.instructions+=3;NFSU2_TR(0x672df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672df3:{NFSU2_TR(0x672df3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672df6:{NFSU2_TR(0x672df6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672e41;}}
}
B672df8:L672df8:{c.instructions+=3;NFSU2_TR(0x672df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672dfb:{NFSU2_TR(0x672dfb);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B672dfe:{NFSU2_TR(0x672dfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672e41;}}
}
B672e00:L672e00:{c.instructions+=3;NFSU2_TR(0x672e00);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B672e03:{NFSU2_TR(0x672e03);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B672e06:{NFSU2_TR(0x672e06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672e0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6725bdu);}goto L6725bd;}
}
B672e0b:L672e0b:{c.instructions+=2;NFSU2_TR(0x672e0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672e0d:{NFSU2_TR(0x672e0d);
if(r1(R+518)){{goto L672e41;}}
}
B672e0f:L672e0f:{c.instructions+=3;NFSU2_TR(0x672e0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672e12:{NFSU2_TR(0x672e12);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672e15:{NFSU2_TR(0x672e15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672e1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672e1a:L672e1a:{c.instructions+=2;NFSU2_TR(0x672e1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672e1c:{NFSU2_TR(0x672e1c);
if(r1(R+518)){{goto L672e41;}}
}
B672e1e:L672e1e:{c.instructions+=3;NFSU2_TR(0x672e1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672e21:{NFSU2_TR(0x672e21);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672e24:{NFSU2_TR(0x672e24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672e29ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672e29:L672e29:{c.instructions+=2;NFSU2_TR(0x672e29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672e2b:{NFSU2_TR(0x672e2b);
if(r1(R+518)){{goto L672e41;}}
}
B672e2d:L672e2d:{c.instructions+=3;NFSU2_TR(0x672e2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672e30:{NFSU2_TR(0x672e30);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672e33:{NFSU2_TR(0x672e33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672e38ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672e38:L672e38:{c.instructions+=2;NFSU2_TR(0x672e38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672e3a:{NFSU2_TR(0x672e3a);
if(r1(R+518)){{goto L672e41;}}
}
B672e3c:L672e3c:{c.instructions+=3;NFSU2_TR(0x672e3c);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B672e3e:{NFSU2_TR(0x672e3e);
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
B672e3f:{NFSU2_TR(0x672e3f);
{goto L672e43;}
}
B672e41:L672e41:{c.instructions+=1;NFSU2_TR(0x672e41);
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
B672e43:L672e43:{c.instructions+=4;NFSU2_TR(0x672e43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672e44:{NFSU2_TR(0x672e44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672e45:{NFSU2_TR(0x672e45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672e46:{NFSU2_TR(0x672e46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672e49:L672e49:{c.instructions+=6;NFSU2_TR(0x672e49);
__builtin_memmove((R+28),(R+28),4);
}
B672e4b:{NFSU2_TR(0x672e4b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672e4c:{NFSU2_TR(0x672e4c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672e4d:{NFSU2_TR(0x672e4d);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672e4f:{NFSU2_TR(0x672e4f);
__builtin_memmove((R+8),(R+4),4);
}
B672e51:{NFSU2_TR(0x672e51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672e56ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672e56:L672e56:{c.instructions+=12;NFSU2_TR(0x672e56);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672e59:{NFSU2_TR(0x672e59);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B672e5b:{NFSU2_TR(0x672e5b);
u8 U[4];
w4(U+0,u32(0x7b784cull));
s4(u32(r4(R+8)),r4(U+0));
}
B672e61:{NFSU2_TR(0x672e61);
__builtin_memmove((R+28),(R+24),4);
}
B672e63:{NFSU2_TR(0x672e63);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B672e64:{NFSU2_TR(0x672e64);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B672e65:{NFSU2_TR(0x672e65);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B672e66:{NFSU2_TR(0x672e66);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B672e67:{NFSU2_TR(0x672e67);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672e69:{NFSU2_TR(0x672e69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B672e6a:{NFSU2_TR(0x672e6a);
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
B672e6c:{NFSU2_TR(0x672e6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672e6f:L672e6f:{c.instructions+=1;NFSU2_TR(0x672e6f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L672e71;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672e6fu);}goto L672e6f;}
}
B672e71:L672e71:{c.instructions+=5;NFSU2_TR(0x672e71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672e72:{NFSU2_TR(0x672e72);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+24)),r4(U+0));
}
B672e78:{NFSU2_TR(0x672e78);
__builtin_memmove((R+0),(R+8),4);
}
B672e7a:{NFSU2_TR(0x672e7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672e7b:{NFSU2_TR(0x672e7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672e7c:L672e7c:{c.instructions+=9;NFSU2_TR(0x672e7c);
__builtin_memmove((R+28),(R+28),4);
}
B672e7e:{NFSU2_TR(0x672e7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672e7f:{NFSU2_TR(0x672e7f);
__builtin_memmove((R+20),(R+16),4);
}
B672e81:{NFSU2_TR(0x672e81);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672e82:{NFSU2_TR(0x672e82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672e83:{NFSU2_TR(0x672e83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672e84:{NFSU2_TR(0x672e84);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672e86:{NFSU2_TR(0x672e86);
__builtin_memmove((R+12),(R+4),4);
}
B672e88:{NFSU2_TR(0x672e88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672e8dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672e8d:L672e8d:{c.instructions+=13;NFSU2_TR(0x672e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B672e90:{NFSU2_TR(0x672e90);
u8 U[4];
w4(U+0,u32(0x7b784cull));
s4(u32(r4(R+12)),r4(U+0));
}
B672e96:{NFSU2_TR(0x672e96);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B672e99:{NFSU2_TR(0x672e99);
__builtin_memmove((R+28),(R+0),4);
}
B672e9b:{NFSU2_TR(0x672e9b);
u8 U[40];
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
}
B672e9c:{NFSU2_TR(0x672e9c);
u8 U[40];
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
}
B672e9d:{NFSU2_TR(0x672e9d);
u8 U[40];
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
}
B672e9e:{NFSU2_TR(0x672e9e);
u8 U[40];
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
}
B672e9f:{NFSU2_TR(0x672e9f);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B672ea2:{NFSU2_TR(0x672ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B672ea5:{NFSU2_TR(0x672ea5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672ea7:{NFSU2_TR(0x672ea7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672eaa:{NFSU2_TR(0x672eaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B672eab:L672eab:{c.instructions+=1;NFSU2_TR(0x672eab);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L672ead;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672eabu);}goto L672eab;}
}
B672ead:L672ead:{c.instructions+=1;NFSU2_TR(0x672ead);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672ebf;}}
}
B672eaf:L672eaf:{c.instructions+=3;NFSU2_TR(0x672eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672eb2:{NFSU2_TR(0x672eb2);
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
B672eb4:{NFSU2_TR(0x672eb4);
if(r1(R+518)){{goto L672ebf;}}
}
B672eb6:L672eb6:{c.instructions+=2;NFSU2_TR(0x672eb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672eb7:{NFSU2_TR(0x672eb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672ebcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672440u);}goto L672440;}
}
B672ebc:L672ebc:{c.instructions+=1;NFSU2_TR(0x672ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672ebf:L672ebf:{c.instructions+=6;NFSU2_TR(0x672ebf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672ec0:{NFSU2_TR(0x672ec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672ec1:{NFSU2_TR(0x672ec1);
__builtin_memmove((R+0),(R+12),4);
}
B672ec3:{NFSU2_TR(0x672ec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B672ec4:{NFSU2_TR(0x672ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672ec5:{NFSU2_TR(0x672ec5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672ec8:L672ec8:{c.instructions+=8;NFSU2_TR(0x672ec8);
__builtin_memmove((R+28),(R+28),4);
}
B672eca:{NFSU2_TR(0x672eca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672ecb:{NFSU2_TR(0x672ecb);
__builtin_memmove((R+20),(R+16),4);
}
B672ecd:{NFSU2_TR(0x672ecd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672ece:{NFSU2_TR(0x672ece);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672ecf:{NFSU2_TR(0x672ecf);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672ed1:{NFSU2_TR(0x672ed1);
__builtin_memmove((R+8),(R+4),4);
}
B672ed3:{NFSU2_TR(0x672ed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672ed8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672ed8:L672ed8:{c.instructions+=9;NFSU2_TR(0x672ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672edb:{NFSU2_TR(0x672edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B672ede:{NFSU2_TR(0x672ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672ee1:{NFSU2_TR(0x672ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672ee4:{NFSU2_TR(0x672ee4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672ee6:{NFSU2_TR(0x672ee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B672ee7:{NFSU2_TR(0x672ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672eea:{NFSU2_TR(0x672eea);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672eed:{NFSU2_TR(0x672eed);
u8 U[4];
w4(U+0,u32(0x7b784cull));
s4(u32(r4(R+8)),r4(U+0));
}
B672ef3:L672ef3:{c.instructions+=1;NFSU2_TR(0x672ef3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L672ef5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672ef3u);}goto L672ef3;}
}
B672ef5:L672ef5:{c.instructions+=5;NFSU2_TR(0x672ef5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672ef6:{NFSU2_TR(0x672ef6);
__builtin_memmove((R+0),(R+8),4);
}
B672ef8:{NFSU2_TR(0x672ef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672ef9:{NFSU2_TR(0x672ef9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672efa:{NFSU2_TR(0x672efa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672efd:L672efd:{c.instructions+=8;NFSU2_TR(0x672efd);
__builtin_memmove((R+28),(R+28),4);
}
B672eff:{NFSU2_TR(0x672eff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f00:{NFSU2_TR(0x672f00);
__builtin_memmove((R+20),(R+16),4);
}
B672f02:{NFSU2_TR(0x672f02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f03:{NFSU2_TR(0x672f03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f04:{NFSU2_TR(0x672f04);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f06:{NFSU2_TR(0x672f06);
__builtin_memmove((R+8),(R+4),4);
}
B672f08:{NFSU2_TR(0x672f08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672f0dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672f0d:L672f0d:{c.instructions+=9;NFSU2_TR(0x672f0d);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B672f10:{NFSU2_TR(0x672f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672f13:{NFSU2_TR(0x672f13);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B672f16:{NFSU2_TR(0x672f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B672f19:{NFSU2_TR(0x672f19);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f1b:{NFSU2_TR(0x672f1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B672f1c:{NFSU2_TR(0x672f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672f1f:{NFSU2_TR(0x672f1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672f22:{NFSU2_TR(0x672f22);
u8 U[4];
w4(U+0,u32(0x7b784cull));
s4(u32(r4(R+8)),r4(U+0));
}
B672f28:L672f28:{c.instructions+=1;NFSU2_TR(0x672f28);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L672f2a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672f28u);}goto L672f28;}
}
B672f2a:L672f2a:{c.instructions+=5;NFSU2_TR(0x672f2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672f2b:{NFSU2_TR(0x672f2b);
__builtin_memmove((R+0),(R+8),4);
}
B672f2d:{NFSU2_TR(0x672f2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672f2e:{NFSU2_TR(0x672f2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672f2f:{NFSU2_TR(0x672f2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672f32:L672f32:{c.instructions+=8;NFSU2_TR(0x672f32);
__builtin_memmove((R+28),(R+28),4);
}
B672f34:{NFSU2_TR(0x672f34);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f35:{NFSU2_TR(0x672f35);
__builtin_memmove((R+20),(R+16),4);
}
B672f37:{NFSU2_TR(0x672f37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f38:{NFSU2_TR(0x672f38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f39:{NFSU2_TR(0x672f39);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f3b:{NFSU2_TR(0x672f3b);
__builtin_memmove((R+8),(R+4),4);
}
B672f3d:{NFSU2_TR(0x672f3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672f42ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672f42:L672f42:{c.instructions+=11;NFSU2_TR(0x672f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672f45:{NFSU2_TR(0x672f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B672f48:{NFSU2_TR(0x672f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672f4b:{NFSU2_TR(0x672f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672f4e:{NFSU2_TR(0x672f4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672f51:{NFSU2_TR(0x672f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672f54:{NFSU2_TR(0x672f54);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f56:{NFSU2_TR(0x672f56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B672f57:{NFSU2_TR(0x672f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672f5a:{NFSU2_TR(0x672f5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672f5d:{NFSU2_TR(0x672f5d);
u8 U[4];
w4(U+0,u32(0x7b784cull));
s4(u32(r4(R+8)),r4(U+0));
}
B672f63:L672f63:{c.instructions+=1;NFSU2_TR(0x672f63);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L672f65;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672f63u);}goto L672f63;}
}
B672f65:L672f65:{c.instructions+=5;NFSU2_TR(0x672f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672f66:{NFSU2_TR(0x672f66);
__builtin_memmove((R+0),(R+8),4);
}
B672f68:{NFSU2_TR(0x672f68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672f69:{NFSU2_TR(0x672f69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672f6a:{NFSU2_TR(0x672f6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672f6d:L672f6d:{c.instructions+=8;NFSU2_TR(0x672f6d);
__builtin_memmove((R+28),(R+28),4);
}
B672f6f:{NFSU2_TR(0x672f6f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f70:{NFSU2_TR(0x672f70);
__builtin_memmove((R+20),(R+16),4);
}
B672f72:{NFSU2_TR(0x672f72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f73:{NFSU2_TR(0x672f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B672f76:{NFSU2_TR(0x672f76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f77:{NFSU2_TR(0x672f77);
__builtin_memmove((R+8),(R+4),4);
}
B672f79:{NFSU2_TR(0x672f79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672f7eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672404u);}goto L672404;}
}
B672f7e:L672f7e:{c.instructions+=2;NFSU2_TR(0x672f7e);
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
B672f80:{NFSU2_TR(0x672f80);
if(r1(R+518)){{goto L672fb9;}}
}
B672f82:L672f82:{c.instructions+=6;NFSU2_TR(0x672f82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f83:{NFSU2_TR(0x672f83);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672f86:{NFSU2_TR(0x672f86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B672f88:{NFSU2_TR(0x672f88);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B672f8b:{NFSU2_TR(0x672f8b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B672f8d:{NFSU2_TR(0x672f8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672fb6;}}
}
B672f8f:L672f8f:{c.instructions+=4;NFSU2_TR(0x672f8f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f90:{NFSU2_TR(0x672f90);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672f92:{NFSU2_TR(0x672f92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B672f93:{NFSU2_TR(0x672f93);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B672f95:L672f95:{c.instructions+=1;NFSU2_TR(0x672f95);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L672f97;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672f95u);}goto L672f95;}}
}
B672f97:L672f97:{c.instructions+=2;NFSU2_TR(0x672f97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B672f98:{NFSU2_TR(0x672f98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672f9f;}}
}
B672f9a:L672f9a:{c.instructions+=3;NFSU2_TR(0x672f9a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B672f9c:{NFSU2_TR(0x672f9c);
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
B672f9d:{NFSU2_TR(0x672f9d);
{goto L672fb8;}
}
B672f9f:L672f9f:{c.instructions+=2;NFSU2_TR(0x672f9f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B672fa2:{NFSU2_TR(0x672fa2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L672fb6;}}
}
B672fa4:L672fa4:{c.instructions+=4;NFSU2_TR(0x672fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672fa7:{NFSU2_TR(0x672fa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672faa:{NFSU2_TR(0x672faa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B672fad:{NFSU2_TR(0x672fad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672fb2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67241fu);}goto L67241f;}
}
B672fb2:L672fb2:{c.instructions+=2;NFSU2_TR(0x672fb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B672fb4:{NFSU2_TR(0x672fb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x672f9au);}goto L672f9a;}}
}
B672fb6:L672fb6:{c.instructions+=1;NFSU2_TR(0x672fb6);
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
B672fb8:L672fb8:{c.instructions+=1;NFSU2_TR(0x672fb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B672fb9:L672fb9:{c.instructions+=3;NFSU2_TR(0x672fb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B672fba:{NFSU2_TR(0x672fba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B672fbb:{NFSU2_TR(0x672fbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672fbe:L672fbe:{c.instructions+=3;NFSU2_TR(0x672fbe);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672fc0:{NFSU2_TR(0x672fc0);
__builtin_memmove((R+8),(R+4),4);
}
B672fc2:{NFSU2_TR(0x672fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672fc7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672fc7:L672fc7:{c.instructions+=7;NFSU2_TR(0x672fc7);
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
B672fc9:{NFSU2_TR(0x672fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672fcc:{NFSU2_TR(0x672fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672fcf:{NFSU2_TR(0x672fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672fd2:{NFSU2_TR(0x672fd2);
u8 U[4];
w4(U+0,u32(0x7b7858ull));
s4(u32(r4(R+8)),r4(U+0));
}
B672fd8:{NFSU2_TR(0x672fd8);
__builtin_memmove((R+0),(R+8),4);
}
B672fda:{NFSU2_TR(0x672fda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B672fdb:L672fdb:{c.instructions+=6;NFSU2_TR(0x672fdb);
__builtin_memmove((R+28),(R+28),4);
}
B672fdd:{NFSU2_TR(0x672fdd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672fde:{NFSU2_TR(0x672fde);
__builtin_memmove((R+20),(R+16),4);
}
B672fe0:{NFSU2_TR(0x672fe0);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B672fe2:{NFSU2_TR(0x672fe2);
__builtin_memmove((R+8),(R+4),4);
}
B672fe4:{NFSU2_TR(0x672fe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x672fe9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6723e5u);}goto L6723e5;}
}
B672fe9:L672fe9:{c.instructions+=7;NFSU2_TR(0x672fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672fec:{NFSU2_TR(0x672fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672fef:{NFSU2_TR(0x672fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672ff2:{NFSU2_TR(0x672ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672ff5:{NFSU2_TR(0x672ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B672ff8:{NFSU2_TR(0x672ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B672ffb:{NFSU2_TR(0x672ffb);
u8 U[4];
w4(U+0,u32(0x7b7858ull));
s4(u32(r4(R+8)),r4(U+0));
TAIL_STATIC(0x673001u,673);
}
XIT:NFSU2_TR_EXIT(0x672,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
