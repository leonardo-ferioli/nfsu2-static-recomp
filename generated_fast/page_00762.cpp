#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_763(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_768(u8* __restrict R,Cpu& c);
u32 body_76a(u8* __restrict R,Cpu& c);
u32 body_76c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x762,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x762,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_762(u8* __restrict R,Cpu& c);
u32 page_762(Cpu& c){return body_762(c.regs.data(),c);}
__attribute__((noinline)) u32 body_762(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x762000:goto L762000;
case 0x762003:c.instructions+=2;goto B762003;
case 0x762005:c.instructions+=1;goto B762005;
case 0x76200a:goto L76200a;
case 0x76200b:c.instructions+=1;goto B76200b;
case 0x76200f:goto L76200f;
case 0x762011:c.instructions+=1;goto B762011;
case 0x762016:goto L762016;
case 0x762017:c.instructions+=1;goto B762017;
case 0x762018:goto L762018;
case 0x76201d:goto L76201d;
case 0x76201f:c.instructions+=1;goto B76201f;
case 0x762021:goto L762021;
case 0x762027:goto L762027;
case 0x76202a:c.instructions+=2;goto B76202a;
case 0x76202f:c.instructions+=1;goto B76202f;
case 0x762031:goto L762031;
case 0x762036:goto L762036;
case 0x762038:c.instructions+=1;goto B762038;
case 0x762039:goto L762039;
case 0x76203a:c.instructions+=3;goto B76203a;
case 0x76203f:c.instructions+=2;goto B76203f;
case 0x762041:c.instructions+=1;goto B762041;
case 0x762046:goto L762046;
case 0x762048:c.instructions+=4;goto B762048;
case 0x76204a:c.instructions+=3;goto B76204a;
case 0x76204b:c.instructions+=2;goto B76204b;
case 0x76204c:c.instructions+=1;goto B76204c;
case 0x76204e:goto L76204e;
case 0x76204f:c.instructions+=2;goto B76204f;
case 0x762055:c.instructions+=1;goto B762055;
case 0x76205b:goto L76205b;
case 0x76205d:c.instructions+=1;goto B76205d;
case 0x76205f:goto L76205f;
case 0x762066:c.instructions+=2;goto B762066;
case 0x76206d:c.instructions+=1;goto B76206d;
case 0x762073:goto L762073;
case 0x762077:c.instructions+=5;goto B762077;
case 0x762079:c.instructions+=4;goto B762079;
case 0x76207b:c.instructions+=3;goto B76207b;
case 0x76207c:c.instructions+=2;goto B76207c;
case 0x76207d:c.instructions+=1;goto B76207d;
case 0x76207e:goto L76207e;
case 0x762083:goto L762083;
case 0x762085:c.instructions+=2;goto B762085;
case 0x762086:c.instructions+=1;goto B762086;
case 0x762087:goto L762087;
case 0x76208e:c.instructions+=1;goto B76208e;
case 0x762090:goto L762090;
case 0x762097:c.instructions+=1;goto B762097;
case 0x762099:goto L762099;
case 0x76209b:c.instructions+=2;goto B76209b;
case 0x76209c:c.instructions+=1;goto B76209c;
case 0x76209d:goto L76209d;
case 0x76209f:c.instructions+=2;goto B76209f;
case 0x7620a0:c.instructions+=1;goto B7620a0;
case 0x7620a1:goto L7620a1;
case 0x7620a3:c.instructions+=6;goto B7620a3;
case 0x7620a7:c.instructions+=5;goto B7620a7;
case 0x7620a9:c.instructions+=4;goto B7620a9;
case 0x7620ac:c.instructions+=3;goto B7620ac;
case 0x7620b1:c.instructions+=2;goto B7620b1;
case 0x7620b2:c.instructions+=1;goto B7620b2;
case 0x7620b8:goto L7620b8;
case 0x7620ba:c.instructions+=2;goto B7620ba;
case 0x7620bf:c.instructions+=1;goto B7620bf;
case 0x7620c1:goto L7620c1;
case 0x7620c6:goto L7620c6;
case 0x7620c9:c.instructions+=2;goto B7620c9;
case 0x7620ce:c.instructions+=1;goto B7620ce;
case 0x7620d0:goto L7620d0;
case 0x7620d5:c.instructions+=1;goto B7620d5;
case 0x7620da:goto L7620da;
case 0x7620dc:c.instructions+=2;goto B7620dc;
case 0x7620dd:c.instructions+=1;goto B7620dd;
case 0x7620df:goto L7620df;
case 0x7620e5:c.instructions+=1;goto B7620e5;
case 0x7620eb:goto L7620eb;
case 0x7620ed:c.instructions+=1;goto B7620ed;
case 0x7620ee:goto L7620ee;
case 0x7620f0:c.instructions+=2;goto B7620f0;
case 0x7620f1:c.instructions+=1;goto B7620f1;
case 0x7620f2:goto L7620f2;
case 0x7620f3:c.instructions+=4;goto B7620f3;
case 0x7620f7:c.instructions+=3;goto B7620f7;
case 0x7620fa:c.instructions+=2;goto B7620fa;
case 0x7620fb:c.instructions+=1;goto B7620fb;
case 0x762100:goto L762100;
case 0x762103:c.instructions+=1;goto B762103;
case 0x762105:goto L762105;
case 0x762106:c.instructions+=3;goto B762106;
case 0x762109:c.instructions+=2;goto B762109;
case 0x76210a:c.instructions+=1;goto B76210a;
case 0x76210f:goto L76210f;
case 0x762111:goto L762111;
case 0x762112:c.instructions+=1;goto B762112;
case 0x762114:goto L762114;
case 0x762116:c.instructions+=3;goto B762116;
case 0x76211c:c.instructions+=2;goto B76211c;
case 0x76211e:c.instructions+=1;goto B76211e;
case 0x76211f:goto L76211f;
case 0x762121:c.instructions+=6;goto B762121;
case 0x762123:c.instructions+=5;goto B762123;
case 0x762125:c.instructions+=4;goto B762125;
case 0x762127:c.instructions+=3;goto B762127;
case 0x762128:c.instructions+=2;goto B762128;
case 0x76212a:c.instructions+=1;goto B76212a;
case 0x76212c:goto L76212c;
case 0x76212d:c.instructions+=1;goto B76212d;
case 0x76212e:goto L76212e;
case 0x762132:c.instructions+=3;goto B762132;
case 0x762133:c.instructions+=2;goto B762133;
case 0x762139:c.instructions+=1;goto B762139;
case 0x76213b:goto L76213b;
case 0x76213d:c.instructions+=1;goto B76213d;
case 0x76213f:goto L76213f;
case 0x762140:goto L762140;
case 0x762142:c.instructions+=2;goto B762142;
case 0x762144:c.instructions+=1;goto B762144;
case 0x762146:goto L762146;
case 0x762148:c.instructions+=3;goto B762148;
case 0x762149:c.instructions+=2;goto B762149;
case 0x76214b:c.instructions+=1;goto B76214b;
case 0x76214d:goto L76214d;
case 0x76214f:goto L76214f;
case 0x762152:c.instructions+=1;goto B762152;
case 0x762154:goto L762154;
case 0x762157:c.instructions+=1;goto B762157;
case 0x762159:goto L762159;
case 0x76215a:goto L76215a;
case 0x76215c:c.instructions+=2;goto B76215c;
case 0x76215e:c.instructions+=1;goto B76215e;
case 0x762160:goto L762160;
case 0x762162:goto L762162;
case 0x762163:c.instructions+=2;goto B762163;
case 0x762166:c.instructions+=1;goto B762166;
case 0x762168:goto L762168;
case 0x76216a:c.instructions+=1;goto B76216a;
case 0x76216c:goto L76216c;
case 0x76216d:goto L76216d;
case 0x76216f:c.instructions+=5;goto B76216f;
case 0x762170:c.instructions+=4;goto B762170;
case 0x762171:c.instructions+=3;goto B762171;
case 0x762173:c.instructions+=2;goto B762173;
case 0x762175:c.instructions+=1;goto B762175;
case 0x762177:goto L762177;
case 0x762178:c.instructions+=1;goto B762178;
case 0x762179:goto L762179;
case 0x76217d:c.instructions+=5;goto B76217d;
case 0x76217f:c.instructions+=4;goto B76217f;
case 0x762185:c.instructions+=3;goto B762185;
case 0x762187:c.instructions+=2;goto B762187;
case 0x76218a:c.instructions+=1;goto B76218a;
case 0x76218c:goto L76218c;
case 0x76218e:c.instructions+=2;goto B76218e;
case 0x76218f:c.instructions+=1;goto B76218f;
case 0x762190:goto L762190;
case 0x762192:c.instructions+=1;goto B762192;
case 0x762193:goto L762193;
case 0x762194:c.instructions+=6;goto B762194;
case 0x762196:c.instructions+=5;goto B762196;
case 0x762197:c.instructions+=4;goto B762197;
case 0x762198:c.instructions+=3;goto B762198;
case 0x76219c:c.instructions+=2;goto B76219c;
case 0x76219f:c.instructions+=1;goto B76219f;
case 0x7621a1:goto L7621a1;
case 0x7621a4:c.instructions+=2;goto B7621a4;
case 0x7621a5:c.instructions+=1;goto B7621a5;
case 0x7621aa:goto L7621aa;
case 0x7621ad:c.instructions+=8;goto B7621ad;
case 0x7621ae:c.instructions+=7;goto B7621ae;
case 0x7621af:c.instructions+=6;goto B7621af;
case 0x7621b2:c.instructions+=5;goto B7621b2;
case 0x7621b4:c.instructions+=4;goto B7621b4;
case 0x7621b7:c.instructions+=3;goto B7621b7;
case 0x7621ba:c.instructions+=2;goto B7621ba;
case 0x7621bb:c.instructions+=1;goto B7621bb;
case 0x7621bc:goto L7621bc;
case 0x7621bf:c.instructions+=2;goto B7621bf;
case 0x7621c0:c.instructions+=1;goto B7621c0;
case 0x7621c5:goto L7621c5;
case 0x7621c8:c.instructions+=6;goto B7621c8;
case 0x7621c9:c.instructions+=5;goto B7621c9;
case 0x7621ca:c.instructions+=4;goto B7621ca;
case 0x7621cd:c.instructions+=3;goto B7621cd;
case 0x7621cf:c.instructions+=2;goto B7621cf;
case 0x7621d0:c.instructions+=1;goto B7621d0;
case 0x7621d1:goto L7621d1;
case 0x7621d3:c.instructions+=3;goto B7621d3;
case 0x7621d4:c.instructions+=2;goto B7621d4;
case 0x7621d6:c.instructions+=1;goto B7621d6;
case 0x7621d8:goto L7621d8;
case 0x7621d9:c.instructions+=1;goto B7621d9;
case 0x7621de:goto L7621de;
case 0x7621df:c.instructions+=5;goto B7621df;
case 0x7621e0:c.instructions+=4;goto B7621e0;
case 0x7621e1:c.instructions+=3;goto B7621e1;
case 0x7621e3:c.instructions+=2;goto B7621e3;
case 0x7621e4:c.instructions+=1;goto B7621e4;
case 0x7621e9:goto L7621e9;
case 0x7621ec:goto L7621ec;
case 0x7621ed:c.instructions+=1;goto B7621ed;
case 0x7621ee:goto L7621ee;
case 0x7621ef:c.instructions+=5;goto B7621ef;
case 0x7621f1:c.instructions+=4;goto B7621f1;
case 0x7621f5:c.instructions+=3;goto B7621f5;
case 0x7621f6:c.instructions+=2;goto B7621f6;
case 0x7621f8:c.instructions+=1;goto B7621f8;
case 0x7621fa:goto L7621fa;
case 0x7621fc:c.instructions+=10;goto B7621fc;
case 0x7621ff:c.instructions+=9;goto B7621ff;
case 0x762200:c.instructions+=8;goto B762200;
case 0x762203:c.instructions+=7;goto B762203;
case 0x762205:c.instructions+=6;goto B762205;
case 0x762208:c.instructions+=5;goto B762208;
case 0x76220b:c.instructions+=4;goto B76220b;
case 0x76220d:c.instructions+=3;goto B76220d;
case 0x76220f:c.instructions+=2;goto B76220f;
case 0x762211:c.instructions+=1;goto B762211;
case 0x762216:goto L762216;
case 0x762217:goto L762217;
case 0x76221a:c.instructions+=2;goto B76221a;
case 0x76221c:c.instructions+=1;goto B76221c;
case 0x76221e:goto L76221e;
case 0x762221:c.instructions+=1;goto B762221;
case 0x762224:goto L762224;
case 0x762228:c.instructions+=1;goto B762228;
case 0x76222a:goto L76222a;
case 0x76222d:c.instructions+=5;goto B76222d;
case 0x76222f:c.instructions+=4;goto B76222f;
case 0x762231:c.instructions+=3;goto B762231;
case 0x762233:c.instructions+=2;goto B762233;
case 0x762239:c.instructions+=1;goto B762239;
case 0x76223b:goto L76223b;
case 0x76223d:c.instructions+=7;goto B76223d;
case 0x762240:c.instructions+=6;goto B762240;
case 0x762245:c.instructions+=5;goto B762245;
case 0x762248:c.instructions+=4;goto B762248;
case 0x76224a:c.instructions+=3;goto B76224a;
case 0x76224d:c.instructions+=2;goto B76224d;
case 0x76224e:c.instructions+=1;goto B76224e;
case 0x762253:goto L762253;
case 0x762257:c.instructions+=4;goto B762257;
case 0x762258:c.instructions+=3;goto B762258;
case 0x762259:c.instructions+=2;goto B762259;
case 0x76225b:c.instructions+=1;goto B76225b;
case 0x76225d:goto L76225d;
case 0x762260:goto L762260;
case 0x762263:c.instructions+=3;goto B762263;
case 0x762264:c.instructions+=2;goto B762264;
case 0x762267:c.instructions+=1;goto B762267;
case 0x762269:goto L762269;
case 0x76226c:c.instructions+=2;goto B76226c;
case 0x76226d:c.instructions+=1;goto B76226d;
case 0x76226f:goto L76226f;
case 0x762271:c.instructions+=1;goto B762271;
case 0x762274:goto L762274;
case 0x762275:c.instructions+=2;goto B762275;
case 0x762278:c.instructions+=1;goto B762278;
case 0x76227a:goto L76227a;
case 0x76227b:c.instructions+=5;goto B76227b;
case 0x76227d:c.instructions+=4;goto B76227d;
case 0x76227e:c.instructions+=3;goto B76227e;
case 0x762280:c.instructions+=2;goto B762280;
case 0x762282:c.instructions+=1;goto B762282;
case 0x762284:goto L762284;
case 0x762285:c.instructions+=2;goto B762285;
case 0x762288:c.instructions+=1;goto B762288;
case 0x76228a:goto L76228a;
case 0x76228b:c.instructions+=5;goto B76228b;
case 0x76228d:c.instructions+=4;goto B76228d;
case 0x76228e:c.instructions+=3;goto B76228e;
case 0x762290:c.instructions+=2;goto B762290;
case 0x762292:c.instructions+=1;goto B762292;
case 0x762294:goto L762294;
case 0x762297:goto L762297;
case 0x762299:c.instructions+=3;goto B762299;
case 0x76229a:c.instructions+=2;goto B76229a;
case 0x76229b:c.instructions+=1;goto B76229b;
case 0x76229c:goto L76229c;
case 0x76229d:c.instructions+=15;goto B76229d;
case 0x76229f:c.instructions+=14;goto B76229f;
case 0x7622a2:c.instructions+=13;goto B7622a2;
case 0x7622a7:c.instructions+=12;goto B7622a7;
case 0x7622aa:c.instructions+=11;goto B7622aa;
case 0x7622ab:c.instructions+=10;goto B7622ab;
case 0x7622ae:c.instructions+=9;goto B7622ae;
case 0x7622af:c.instructions+=8;goto B7622af;
case 0x7622b2:c.instructions+=7;goto B7622b2;
case 0x7622b3:c.instructions+=6;goto B7622b3;
case 0x7622b6:c.instructions+=5;goto B7622b6;
case 0x7622b7:c.instructions+=4;goto B7622b7;
case 0x7622ba:c.instructions+=3;goto B7622ba;
case 0x7622bd:c.instructions+=2;goto B7622bd;
case 0x7622bf:c.instructions+=1;goto B7622bf;
case 0x7622c4:goto L7622c4;
case 0x7622c7:c.instructions+=16;goto B7622c7;
case 0x7622ca:c.instructions+=15;goto B7622ca;
case 0x7622cd:c.instructions+=14;goto B7622cd;
case 0x7622ce:c.instructions+=13;goto B7622ce;
case 0x7622d1:c.instructions+=12;goto B7622d1;
case 0x7622d2:c.instructions+=11;goto B7622d2;
case 0x7622d4:c.instructions+=10;goto B7622d4;
case 0x7622d8:c.instructions+=9;goto B7622d8;
case 0x7622da:c.instructions+=8;goto B7622da;
case 0x7622dd:c.instructions+=7;goto B7622dd;
case 0x7622df:c.instructions+=6;goto B7622df;
case 0x7622e1:c.instructions+=5;goto B7622e1;
case 0x7622e4:c.instructions+=4;goto B7622e4;
case 0x7622e6:c.instructions+=3;goto B7622e6;
case 0x7622e8:c.instructions+=2;goto B7622e8;
case 0x7622e9:c.instructions+=1;goto B7622e9;
case 0x7622ee:goto L7622ee;
case 0x7622f0:c.instructions+=4;goto B7622f0;
case 0x7622f3:c.instructions+=3;goto B7622f3;
case 0x7622f6:c.instructions+=2;goto B7622f6;
case 0x7622f7:c.instructions+=1;goto B7622f7;
case 0x7622fc:goto L7622fc;
case 0x7622ff:c.instructions+=6;goto B7622ff;
case 0x762302:c.instructions+=5;goto B762302;
case 0x762305:c.instructions+=4;goto B762305;
case 0x762306:c.instructions+=3;goto B762306;
case 0x762308:c.instructions+=2;goto B762308;
case 0x762309:c.instructions+=1;goto B762309;
case 0x76230e:goto L76230e;
case 0x76230f:c.instructions+=1;goto B76230f;
case 0x762310:goto L762310;
case 0x762311:c.instructions+=9;goto B762311;
case 0x762313:c.instructions+=8;goto B762313;
case 0x762314:c.instructions+=7;goto B762314;
case 0x762315:c.instructions+=6;goto B762315;
case 0x762317:c.instructions+=5;goto B762317;
case 0x76231a:c.instructions+=4;goto B76231a;
case 0x76231b:c.instructions+=3;goto B76231b;
case 0x76231f:c.instructions+=2;goto B76231f;
case 0x762320:c.instructions+=1;goto B762320;
case 0x762322:goto L762322;
case 0x762325:c.instructions+=1;goto B762325;
case 0x762327:goto L762327;
case 0x762329:c.instructions+=7;goto B762329;
case 0x76232c:c.instructions+=6;goto B76232c;
case 0x76232f:c.instructions+=5;goto B76232f;
case 0x762331:c.instructions+=4;goto B762331;
case 0x762334:c.instructions+=3;goto B762334;
case 0x762336:c.instructions+=2;goto B762336;
case 0x762339:c.instructions+=1;goto B762339;
case 0x76233d:goto L76233d;
case 0x762340:c.instructions+=2;goto B762340;
case 0x762343:c.instructions+=1;goto B762343;
case 0x762345:goto L762345;
case 0x762348:c.instructions+=1;goto B762348;
case 0x762349:goto L762349;
case 0x76234c:c.instructions+=4;goto B76234c;
case 0x76234e:c.instructions+=3;goto B76234e;
case 0x76234f:c.instructions+=2;goto B76234f;
case 0x762351:c.instructions+=1;goto B762351;
case 0x762353:goto L762353;
case 0x762355:c.instructions+=1;goto B762355;
case 0x76235a:goto L76235a;
case 0x76235d:c.instructions+=2;goto B76235d;
case 0x76235e:c.instructions+=1;goto B76235e;
case 0x762360:goto L762360;
case 0x762362:goto L762362;
case 0x762366:c.instructions+=1;goto B762366;
case 0x762368:goto L762368;
case 0x76236a:c.instructions+=1;goto B76236a;
case 0x76236f:goto L76236f;
case 0x762374:c.instructions+=5;goto B762374;
case 0x762376:c.instructions+=4;goto B762376;
case 0x762379:c.instructions+=3;goto B762379;
case 0x76237a:c.instructions+=2;goto B76237a;
case 0x76237c:c.instructions+=1;goto B76237c;
case 0x76237e:goto L76237e;
case 0x762380:c.instructions+=2;goto B762380;
case 0x762384:c.instructions+=1;goto B762384;
case 0x762386:goto L762386;
case 0x762389:c.instructions+=1;goto B762389;
case 0x76238b:goto L76238b;
case 0x76238e:goto L76238e;
case 0x762391:c.instructions+=2;goto B762391;
case 0x762393:c.instructions+=1;goto B762393;
case 0x762398:goto L762398;
case 0x762399:c.instructions+=3;goto B762399;
case 0x76239b:c.instructions+=2;goto B76239b;
case 0x76239c:c.instructions+=1;goto B76239c;
case 0x7623a1:goto L7623a1;
case 0x7623a4:goto L7623a4;
case 0x7623a7:c.instructions+=5;goto B7623a7;
case 0x7623a8:c.instructions+=4;goto B7623a8;
case 0x7623a9:c.instructions+=3;goto B7623a9;
case 0x7623aa:c.instructions+=2;goto B7623aa;
case 0x7623ab:c.instructions+=1;goto B7623ab;
case 0x7623ac:goto L7623ac;
case 0x7623ad:c.instructions+=14;goto B7623ad;
case 0x7623af:c.instructions+=13;goto B7623af;
case 0x7623b2:c.instructions+=12;goto B7623b2;
case 0x7623b7:c.instructions+=11;goto B7623b7;
case 0x7623ba:c.instructions+=10;goto B7623ba;
case 0x7623bb:c.instructions+=9;goto B7623bb;
case 0x7623be:c.instructions+=8;goto B7623be;
case 0x7623c1:c.instructions+=7;goto B7623c1;
case 0x7623c2:c.instructions+=6;goto B7623c2;
case 0x7623c5:c.instructions+=5;goto B7623c5;
case 0x7623c6:c.instructions+=4;goto B7623c6;
case 0x7623c9:c.instructions+=3;goto B7623c9;
case 0x7623cc:c.instructions+=2;goto B7623cc;
case 0x7623ce:c.instructions+=1;goto B7623ce;
case 0x7623d3:goto L7623d3;
case 0x7623d6:c.instructions+=11;goto B7623d6;
case 0x7623d9:c.instructions+=10;goto B7623d9;
case 0x7623da:c.instructions+=9;goto B7623da;
case 0x7623dd:c.instructions+=8;goto B7623dd;
case 0x7623df:c.instructions+=7;goto B7623df;
case 0x7623e0:c.instructions+=6;goto B7623e0;
case 0x7623e2:c.instructions+=5;goto B7623e2;
case 0x7623e6:c.instructions+=4;goto B7623e6;
case 0x7623e9:c.instructions+=3;goto B7623e9;
case 0x7623ec:c.instructions+=2;goto B7623ec;
case 0x7623ed:c.instructions+=1;goto B7623ed;
case 0x7623f2:goto L7623f2;
case 0x7623f4:c.instructions+=4;goto B7623f4;
case 0x7623f5:c.instructions+=3;goto B7623f5;
case 0x7623f8:c.instructions+=2;goto B7623f8;
case 0x7623fb:c.instructions+=1;goto B7623fb;
case 0x762400:goto L762400;
case 0x762403:c.instructions+=5;goto B762403;
case 0x762406:c.instructions+=4;goto B762406;
case 0x762409:c.instructions+=3;goto B762409;
case 0x76240c:c.instructions+=2;goto B76240c;
case 0x76240d:c.instructions+=1;goto B76240d;
case 0x762412:goto L762412;
case 0x762413:c.instructions+=1;goto B762413;
case 0x762414:goto L762414;
case 0x762415:c.instructions+=16;goto B762415;
case 0x762417:c.instructions+=15;goto B762417;
case 0x76241a:c.instructions+=14;goto B76241a;
case 0x76241f:c.instructions+=13;goto B76241f;
case 0x762422:c.instructions+=12;goto B762422;
case 0x762423:c.instructions+=11;goto B762423;
case 0x762424:c.instructions+=10;goto B762424;
case 0x762427:c.instructions+=9;goto B762427;
case 0x762428:c.instructions+=8;goto B762428;
case 0x76242b:c.instructions+=7;goto B76242b;
case 0x76242c:c.instructions+=6;goto B76242c;
case 0x76242f:c.instructions+=5;goto B76242f;
case 0x762430:c.instructions+=4;goto B762430;
case 0x762433:c.instructions+=3;goto B762433;
case 0x762436:c.instructions+=2;goto B762436;
case 0x762438:c.instructions+=1;goto B762438;
case 0x76243d:goto L76243d;
case 0x762440:c.instructions+=12;goto B762440;
case 0x762443:c.instructions+=11;goto B762443;
case 0x762445:c.instructions+=10;goto B762445;
case 0x762446:c.instructions+=9;goto B762446;
case 0x76244a:c.instructions+=8;goto B76244a;
case 0x76244d:c.instructions+=7;goto B76244d;
case 0x762450:c.instructions+=6;goto B762450;
case 0x762452:c.instructions+=5;goto B762452;
case 0x762455:c.instructions+=4;goto B762455;
case 0x762456:c.instructions+=3;goto B762456;
case 0x762457:c.instructions+=2;goto B762457;
case 0x762458:c.instructions+=1;goto B762458;
case 0x76245d:goto L76245d;
case 0x762460:c.instructions+=6;goto B762460;
case 0x762463:c.instructions+=5;goto B762463;
case 0x762464:c.instructions+=4;goto B762464;
case 0x762466:c.instructions+=3;goto B762466;
case 0x762469:c.instructions+=2;goto B762469;
case 0x76246c:c.instructions+=1;goto B76246c;
case 0x76246e:goto L76246e;
case 0x762470:c.instructions+=1;goto B762470;
case 0x762472:goto L762472;
case 0x762474:c.instructions+=1;goto B762474;
case 0x762476:goto L762476;
case 0x762478:c.instructions+=3;goto B762478;
case 0x762479:c.instructions+=2;goto B762479;
case 0x76247b:c.instructions+=1;goto B76247b;
case 0x76247d:goto L76247d;
case 0x762480:goto L762480;
case 0x762482:c.instructions+=4;goto B762482;
case 0x762483:c.instructions+=3;goto B762483;
case 0x762486:c.instructions+=2;goto B762486;
case 0x762489:c.instructions+=1;goto B762489;
case 0x76248e:goto L76248e;
case 0x762490:goto L762490;
case 0x762492:c.instructions+=5;goto B762492;
case 0x762495:c.instructions+=4;goto B762495;
case 0x762498:c.instructions+=3;goto B762498;
case 0x762499:c.instructions+=2;goto B762499;
case 0x76249c:c.instructions+=1;goto B76249c;
case 0x7624a1:goto L7624a1;
case 0x7624a4:c.instructions+=6;goto B7624a4;
case 0x7624a7:c.instructions+=5;goto B7624a7;
case 0x7624aa:c.instructions+=4;goto B7624aa;
case 0x7624ab:c.instructions+=3;goto B7624ab;
case 0x7624ac:c.instructions+=2;goto B7624ac;
case 0x7624ad:c.instructions+=1;goto B7624ad;
case 0x7624b2:goto L7624b2;
case 0x7624b3:c.instructions+=1;goto B7624b3;
case 0x7624b4:goto L7624b4;
case 0x7624b5:c.instructions+=3;goto B7624b5;
case 0x7624b7:c.instructions+=2;goto B7624b7;
case 0x7624bb:c.instructions+=1;goto B7624bb;
case 0x7624bd:goto L7624bd;
case 0x7624c1:c.instructions+=1;goto B7624c1;
case 0x7624c3:goto L7624c3;
case 0x7624c7:c.instructions+=1;goto B7624c7;
case 0x7624c9:goto L7624c9;
case 0x7624cc:c.instructions+=3;goto B7624cc;
case 0x7624cf:c.instructions+=2;goto B7624cf;
case 0x7624d2:c.instructions+=1;goto B7624d2;
case 0x7624d7:goto L7624d7;
case 0x7624da:c.instructions+=2;goto B7624da;
case 0x7624db:c.instructions+=1;goto B7624db;
case 0x7624dc:goto L7624dc;
case 0x7624df:c.instructions+=4;goto B7624df;
case 0x7624e2:c.instructions+=3;goto B7624e2;
case 0x7624e5:c.instructions+=2;goto B7624e5;
case 0x7624e8:c.instructions+=1;goto B7624e8;
case 0x7624ed:goto L7624ed;
case 0x7624ef:goto L7624ef;
case 0x7624f2:c.instructions+=4;goto B7624f2;
case 0x7624f5:c.instructions+=3;goto B7624f5;
case 0x7624f8:c.instructions+=2;goto B7624f8;
case 0x7624fb:c.instructions+=1;goto B7624fb;
case 0x762500:goto L762500;
case 0x762503:c.instructions+=2;goto B762503;
case 0x762504:c.instructions+=1;goto B762504;
case 0x762505:goto L762505;
case 0x76250a:c.instructions+=2;goto B76250a;
case 0x76250f:c.instructions+=1;goto B76250f;
case 0x762514:goto L762514;
case 0x762515:c.instructions+=2;goto B762515;
case 0x762516:c.instructions+=1;goto B762516;
case 0x762517:goto L762517;
case 0x762518:c.instructions+=16;goto B762518;
case 0x76251a:c.instructions+=15;goto B76251a;
case 0x76251d:c.instructions+=14;goto B76251d;
case 0x762523:c.instructions+=13;goto B762523;
case 0x762526:c.instructions+=12;goto B762526;
case 0x76252c:c.instructions+=11;goto B76252c;
case 0x76252f:c.instructions+=10;goto B76252f;
case 0x762532:c.instructions+=9;goto B762532;
case 0x762535:c.instructions+=8;goto B762535;
case 0x762538:c.instructions+=7;goto B762538;
case 0x76253b:c.instructions+=6;goto B76253b;
case 0x76253e:c.instructions+=5;goto B76253e;
case 0x762541:c.instructions+=4;goto B762541;
case 0x762547:c.instructions+=3;goto B762547;
case 0x762549:c.instructions+=2;goto B762549;
case 0x76254c:c.instructions+=1;goto B76254c;
case 0x76254e:goto L76254e;
case 0x762550:c.instructions+=3;goto B762550;
case 0x762551:c.instructions+=2;goto B762551;
case 0x762552:c.instructions+=1;goto B762552;
case 0x762553:goto L762553;
case 0x762555:c.instructions+=2;goto B762555;
case 0x762556:c.instructions+=1;goto B762556;
case 0x762557:goto L762557;
case 0x76255c:c.instructions+=1;goto B76255c;
case 0x762562:goto L762562;
case 0x762564:c.instructions+=1;goto B762564;
case 0x762566:goto L762566;
case 0x76256b:c.instructions+=2;goto B76256b;
case 0x76256c:c.instructions+=1;goto B76256c;
case 0x762572:goto L762572;
case 0x762574:c.instructions+=1;goto B762574;
case 0x762576:goto L762576;
case 0x762578:c.instructions+=1;goto B762578;
case 0x76257a:goto L76257a;
case 0x76257b:goto L76257b;
case 0x762580:goto L762580;
case 0x762583:c.instructions+=2;goto B762583;
case 0x762585:c.instructions+=1;goto B762585;
case 0x762587:goto L762587;
case 0x76258a:c.instructions+=2;goto B76258a;
case 0x76258d:c.instructions+=1;goto B76258d;
case 0x76258f:goto L76258f;
case 0x762592:c.instructions+=2;goto B762592;
case 0x762594:c.instructions+=1;goto B762594;
case 0x762596:goto L762596;
case 0x762599:c.instructions+=3;goto B762599;
case 0x76259a:c.instructions+=2;goto B76259a;
case 0x76259b:c.instructions+=1;goto B76259b;
case 0x7625a0:goto L7625a0;
case 0x7625a2:c.instructions+=3;goto B7625a2;
case 0x7625a3:c.instructions+=2;goto B7625a3;
case 0x7625a4:c.instructions+=1;goto B7625a4;
case 0x7625a6:goto L7625a6;
case 0x7625a9:c.instructions+=1;goto B7625a9;
case 0x7625ab:goto L7625ab;
case 0x7625ae:c.instructions+=1;goto B7625ae;
case 0x7625b0:goto L7625b0;
case 0x7625b4:c.instructions+=3;goto B7625b4;
case 0x7625b6:c.instructions+=2;goto B7625b6;
case 0x7625b8:c.instructions+=1;goto B7625b8;
case 0x7625ba:goto L7625ba;
case 0x7625bd:c.instructions+=1;goto B7625bd;
case 0x7625bf:goto L7625bf;
case 0x7625c1:c.instructions+=1;goto B7625c1;
case 0x7625c3:goto L7625c3;
case 0x7625c6:c.instructions+=1;goto B7625c6;
case 0x7625c8:goto L7625c8;
case 0x7625ca:c.instructions+=1;goto B7625ca;
case 0x7625cb:goto L7625cb;
case 0x7625cd:c.instructions+=2;goto B7625cd;
case 0x7625ce:c.instructions+=1;goto B7625ce;
case 0x7625cf:goto L7625cf;
case 0x7625d1:c.instructions+=2;goto B7625d1;
case 0x7625d7:c.instructions+=1;goto B7625d7;
case 0x7625d9:goto L7625d9;
case 0x7625db:c.instructions+=1;goto B7625db;
case 0x7625dc:goto L7625dc;
case 0x7625e1:goto L7625e1;
case 0x7625e8:c.instructions+=1;goto B7625e8;
case 0x7625ed:goto L7625ed;
case 0x7625ef:c.instructions+=2;goto B7625ef;
case 0x7625f4:c.instructions+=1;goto B7625f4;
case 0x7625f9:goto L7625f9;
case 0x7625fc:c.instructions+=3;goto B7625fc;
case 0x7625ff:c.instructions+=2;goto B7625ff;
case 0x762602:c.instructions+=1;goto B762602;
case 0x762607:goto L762607;
case 0x76260c:c.instructions+=3;goto B76260c;
case 0x76260e:c.instructions+=2;goto B76260e;
case 0x762612:c.instructions+=1;goto B762612;
case 0x762615:goto L762615;
case 0x762618:c.instructions+=1;goto B762618;
case 0x76261a:goto L76261a;
case 0x76261d:c.instructions+=1;goto B76261d;
case 0x76261f:goto L76261f;
case 0x762622:c.instructions+=1;goto B762622;
case 0x762624:goto L762624;
case 0x762629:goto L762629;
case 0x76262b:c.instructions+=8;goto B76262b;
case 0x76262e:c.instructions+=7;goto B76262e;
case 0x762631:c.instructions+=6;goto B762631;
case 0x762633:c.instructions+=5;goto B762633;
case 0x762635:c.instructions+=4;goto B762635;
case 0x762638:c.instructions+=3;goto B762638;
case 0x76263f:c.instructions+=2;goto B76263f;
case 0x762643:c.instructions+=1;goto B762643;
case 0x762645:goto L762645;
case 0x762648:c.instructions+=5;goto B762648;
case 0x76264d:c.instructions+=4;goto B76264d;
case 0x76264e:c.instructions+=3;goto B76264e;
case 0x762651:c.instructions+=2;goto B762651;
case 0x762655:c.instructions+=1;goto B762655;
case 0x76265a:goto L76265a;
case 0x76265e:c.instructions+=1;goto B76265e;
case 0x762660:goto L762660;
case 0x762663:c.instructions+=1;goto B762663;
case 0x762668:goto L762668;
case 0x762669:goto L762669;
case 0x76266c:c.instructions+=4;goto B76266c;
case 0x762670:c.instructions+=3;goto B762670;
case 0x762673:c.instructions+=2;goto B762673;
case 0x762676:c.instructions+=1;goto B762676;
case 0x762679:goto L762679;
case 0x76267c:c.instructions+=1;goto B76267c;
case 0x76267e:goto L76267e;
case 0x762682:c.instructions+=1;goto B762682;
case 0x762687:goto L762687;
case 0x76268a:c.instructions+=1;goto B76268a;
case 0x76268c:goto L76268c;
case 0x762691:goto L762691;
case 0x762694:c.instructions+=1;goto B762694;
case 0x762699:goto L762699;
case 0x76269a:goto L76269a;
case 0x76269d:c.instructions+=1;goto B76269d;
case 0x7626a0:goto L7626a0;
case 0x7626a5:goto L7626a5;
case 0x7626ac:c.instructions+=1;goto B7626ac;
case 0x7626ae:goto L7626ae;
case 0x7626b3:goto L7626b3;
case 0x7626b8:c.instructions+=1;goto B7626b8;
case 0x7626ba:goto L7626ba;
case 0x7626bb:goto L7626bb;
case 0x7626bd:c.instructions+=2;goto B7626bd;
case 0x7626c2:c.instructions+=1;goto B7626c2;
case 0x7626c7:goto L7626c7;
case 0x7626ca:c.instructions+=2;goto B7626ca;
case 0x7626cc:c.instructions+=1;goto B7626cc;
case 0x7626ce:goto L7626ce;
case 0x7626d1:c.instructions+=3;goto B7626d1;
case 0x7626d4:c.instructions+=2;goto B7626d4;
case 0x7626d6:c.instructions+=1;goto B7626d6;
case 0x7626d8:goto L7626d8;
case 0x7626dc:c.instructions+=3;goto B7626dc;
case 0x7626dd:c.instructions+=2;goto B7626dd;
case 0x7626e0:c.instructions+=1;goto B7626e0;
case 0x7626e5:goto L7626e5;
case 0x7626e9:goto L7626e9;
case 0x7626ee:goto L7626ee;
case 0x7626ef:goto L7626ef;
case 0x7626f1:c.instructions+=3;goto B7626f1;
case 0x7626f4:c.instructions+=2;goto B7626f4;
case 0x7626f7:c.instructions+=1;goto B7626f7;
case 0x7626f8:goto L7626f8;
case 0x7626fb:c.instructions+=1;goto B7626fb;
case 0x762700:goto L762700;
case 0x762703:c.instructions+=6;goto B762703;
case 0x762704:c.instructions+=5;goto B762704;
case 0x762706:c.instructions+=4;goto B762706;
case 0x762708:c.instructions+=3;goto B762708;
case 0x76270a:c.instructions+=2;goto B76270a;
case 0x76270c:c.instructions+=1;goto B76270c;
case 0x76270e:goto L76270e;
case 0x762711:c.instructions+=4;goto B762711;
case 0x762714:c.instructions+=3;goto B762714;
case 0x762717:c.instructions+=2;goto B762717;
case 0x762719:c.instructions+=1;goto B762719;
case 0x76271b:goto L76271b;
case 0x76271c:c.instructions+=1;goto B76271c;
case 0x76271d:goto L76271d;
case 0x76271f:c.instructions+=2;goto B76271f;
case 0x762724:c.instructions+=1;goto B762724;
case 0x762729:goto L762729;
case 0x76272b:c.instructions+=10;goto B76272b;
case 0x76272e:c.instructions+=9;goto B76272e;
case 0x762731:c.instructions+=8;goto B762731;
case 0x762734:c.instructions+=7;goto B762734;
case 0x762738:c.instructions+=6;goto B762738;
case 0x76273b:c.instructions+=5;goto B76273b;
case 0x76273e:c.instructions+=4;goto B76273e;
case 0x762741:c.instructions+=3;goto B762741;
case 0x762744:c.instructions+=2;goto B762744;
case 0x762745:c.instructions+=1;goto B762745;
case 0x76274a:goto L76274a;
case 0x76274b:c.instructions+=3;goto B76274b;
case 0x76274c:c.instructions+=2;goto B76274c;
case 0x76274f:c.instructions+=1;goto B76274f;
case 0x762754:goto L762754;
case 0x762757:c.instructions+=2;goto B762757;
case 0x76275a:c.instructions+=1;goto B76275a;
case 0x76275f:goto L76275f;
case 0x762762:c.instructions+=2;goto B762762;
case 0x762765:c.instructions+=1;goto B762765;
case 0x76276a:goto L76276a;
case 0x76276d:c.instructions+=1;goto B76276d;
case 0x762772:goto L762772;
case 0x762775:c.instructions+=9;goto B762775;
case 0x762778:c.instructions+=8;goto B762778;
case 0x76277c:c.instructions+=7;goto B76277c;
case 0x762783:c.instructions+=6;goto B762783;
case 0x762786:c.instructions+=5;goto B762786;
case 0x762789:c.instructions+=4;goto B762789;
case 0x76278a:c.instructions+=3;goto B76278a;
case 0x76278d:c.instructions+=2;goto B76278d;
case 0x76278e:c.instructions+=1;goto B76278e;
case 0x762793:goto L762793;
case 0x762796:c.instructions+=3;goto B762796;
case 0x762799:c.instructions+=2;goto B762799;
case 0x76279d:c.instructions+=1;goto B76279d;
case 0x7627a2:goto L7627a2;
case 0x7627a5:c.instructions+=5;goto B7627a5;
case 0x7627a7:c.instructions+=4;goto B7627a7;
case 0x7627aa:c.instructions+=3;goto B7627aa;
case 0x7627ad:c.instructions+=2;goto B7627ad;
case 0x7627b3:c.instructions+=1;goto B7627b3;
case 0x7627b5:goto L7627b5;
case 0x7627b8:c.instructions+=2;goto B7627b8;
case 0x7627bc:c.instructions+=1;goto B7627bc;
case 0x7627be:goto L7627be;
case 0x7627c1:c.instructions+=2;goto B7627c1;
case 0x7627c8:c.instructions+=1;goto B7627c8;
case 0x7627ca:goto L7627ca;
case 0x7627cd:c.instructions+=3;goto B7627cd;
case 0x7627d1:c.instructions+=2;goto B7627d1;
case 0x7627d8:c.instructions+=1;goto B7627d8;
case 0x7627da:goto L7627da;
case 0x7627e1:goto L7627e1;
case 0x7627e4:c.instructions+=1;goto B7627e4;
case 0x7627e5:goto L7627e5;
case 0x7627e8:c.instructions+=9;goto B7627e8;
case 0x7627eb:c.instructions+=8;goto B7627eb;
case 0x7627ee:c.instructions+=7;goto B7627ee;
case 0x7627f1:c.instructions+=6;goto B7627f1;
case 0x7627f4:c.instructions+=5;goto B7627f4;
case 0x7627f7:c.instructions+=4;goto B7627f7;
case 0x7627fa:c.instructions+=3;goto B7627fa;
case 0x7627fd:c.instructions+=2;goto B7627fd;
case 0x762800:c.instructions+=1;goto B762800;
case 0x762802:goto L762802;
case 0x762805:c.instructions+=2;goto B762805;
case 0x762808:c.instructions+=1;goto B762808;
case 0x76280a:goto L76280a;
case 0x76280d:c.instructions+=5;goto B76280d;
case 0x762810:c.instructions+=4;goto B762810;
case 0x762813:c.instructions+=3;goto B762813;
case 0x762816:c.instructions+=2;goto B762816;
case 0x762818:c.instructions+=1;goto B762818;
case 0x76281a:goto L76281a;
case 0x76281d:c.instructions+=1;goto B76281d;
case 0x76281f:goto L76281f;
case 0x762822:c.instructions+=4;goto B762822;
case 0x762825:c.instructions+=3;goto B762825;
case 0x762828:c.instructions+=2;goto B762828;
case 0x76282b:c.instructions+=1;goto B76282b;
case 0x76282e:goto L76282e;
case 0x76282f:c.instructions+=5;goto B76282f;
case 0x762830:c.instructions+=4;goto B762830;
case 0x762832:c.instructions+=3;goto B762832;
case 0x762833:c.instructions+=2;goto B762833;
case 0x762834:c.instructions+=1;goto B762834;
case 0x762839:goto L762839;
case 0x76283c:c.instructions+=3;goto B76283c;
case 0x76283f:c.instructions+=2;goto B76283f;
case 0x762842:c.instructions+=1;goto B762842;
case 0x762845:goto L762845;
case 0x762849:c.instructions+=1;goto B762849;
case 0x76284e:goto L76284e;
case 0x762851:c.instructions+=1;goto B762851;
case 0x762856:goto L762856;
case 0x762857:goto L762857;
case 0x762858:c.instructions+=1;goto B762858;
case 0x76285a:goto L76285a;
case 0x76285d:c.instructions+=1;goto B76285d;
case 0x762860:goto L762860;
case 0x762863:c.instructions+=3;goto B762863;
case 0x762866:c.instructions+=2;goto B762866;
case 0x762869:c.instructions+=1;goto B762869;
case 0x76286e:goto L76286e;
case 0x76286f:c.instructions+=1;goto B76286f;
case 0x762874:goto L762874;
case 0x762877:c.instructions+=2;goto B762877;
case 0x76287a:c.instructions+=1;goto B76287a;
case 0x76287f:goto L76287f;
case 0x762882:c.instructions+=3;goto B762882;
case 0x762885:c.instructions+=2;goto B762885;
case 0x76288b:c.instructions+=1;goto B76288b;
case 0x76288d:goto L76288d;
case 0x762891:c.instructions+=1;goto B762891;
case 0x762893:goto L762893;
case 0x76289a:c.instructions+=1;goto B76289a;
case 0x76289c:goto L76289c;
case 0x7628a0:c.instructions+=1;goto B7628a0;
case 0x7628a2:goto L7628a2;
case 0x7628a6:c.instructions+=1;goto B7628a6;
case 0x7628a8:goto L7628a8;
case 0x7628ab:c.instructions+=1;goto B7628ab;
case 0x7628b0:goto L7628b0;
case 0x7628b1:c.instructions+=2;goto B7628b1;
case 0x7628b3:c.instructions+=1;goto B7628b3;
case 0x7628b5:goto L7628b5;
case 0x7628ba:goto L7628ba;
case 0x7628bb:c.instructions+=2;goto B7628bb;
case 0x7628bc:c.instructions+=1;goto B7628bc;
case 0x7628c1:goto L7628c1;
case 0x7628c2:c.instructions+=1;goto B7628c2;
case 0x7628c3:goto L7628c3;
case 0x7628c4:goto L7628c4;
case 0x7628c6:c.instructions+=2;goto B7628c6;
case 0x7628cb:c.instructions+=1;goto B7628cb;
case 0x7628d0:goto L7628d0;
case 0x7628d2:c.instructions+=6;goto B7628d2;
case 0x7628d5:c.instructions+=5;goto B7628d5;
case 0x7628d7:c.instructions+=4;goto B7628d7;
case 0x7628da:c.instructions+=3;goto B7628da;
case 0x7628dd:c.instructions+=2;goto B7628dd;
case 0x7628df:c.instructions+=1;goto B7628df;
case 0x7628e5:goto L7628e5;
case 0x7628e9:c.instructions+=1;goto B7628e9;
case 0x7628ef:goto L7628ef;
case 0x7628f2:c.instructions+=2;goto B7628f2;
case 0x7628f4:c.instructions+=1;goto B7628f4;
case 0x7628f6:goto L7628f6;
case 0x7628fa:c.instructions+=1;goto B7628fa;
case 0x762900:goto L762900;
case 0x762902:c.instructions+=2;goto B762902;
case 0x762904:c.instructions+=1;goto B762904;
case 0x762906:goto L762906;
case 0x76290a:goto L76290a;
case 0x76290e:c.instructions+=4;goto B76290e;
case 0x762910:c.instructions+=3;goto B762910;
case 0x762913:c.instructions+=2;goto B762913;
case 0x762915:c.instructions+=1;goto B762915;
case 0x762917:goto L762917;
case 0x76291c:goto L76291c;
case 0x76291d:c.instructions+=3;goto B76291d;
case 0x76291e:c.instructions+=2;goto B76291e;
case 0x762920:c.instructions+=1;goto B762920;
case 0x762926:goto L762926;
case 0x762928:c.instructions+=2;goto B762928;
case 0x762929:c.instructions+=1;goto B762929;
case 0x76292e:goto L76292e;
case 0x76292f:c.instructions+=3;goto B76292f;
case 0x762930:c.instructions+=2;goto B762930;
case 0x762932:c.instructions+=1;goto B762932;
case 0x762938:goto L762938;
case 0x76293b:c.instructions+=1;goto B76293b;
case 0x76293d:goto L76293d;
case 0x762940:c.instructions+=1;goto B762940;
case 0x762945:goto L762945;
case 0x762947:c.instructions+=1;goto B762947;
case 0x76294c:goto L76294c;
case 0x76294f:c.instructions+=1;goto B76294f;
case 0x762951:goto L762951;
case 0x762956:goto L762956;
case 0x762957:c.instructions+=3;goto B762957;
case 0x762958:c.instructions+=2;goto B762958;
case 0x76295a:c.instructions+=1;goto B76295a;
case 0x762960:goto L762960;
case 0x762962:c.instructions+=2;goto B762962;
case 0x762963:c.instructions+=1;goto B762963;
case 0x762968:goto L762968;
case 0x762969:c.instructions+=3;goto B762969;
case 0x76296a:c.instructions+=2;goto B76296a;
case 0x76296c:c.instructions+=1;goto B76296c;
case 0x762972:goto L762972;
case 0x762975:c.instructions+=3;goto B762975;
case 0x762978:c.instructions+=2;goto B762978;
case 0x762979:c.instructions+=1;goto B762979;
case 0x76297e:goto L76297e;
case 0x762981:c.instructions+=2;goto B762981;
case 0x762985:c.instructions+=1;goto B762985;
case 0x76298b:goto L76298b;
case 0x76298d:c.instructions+=2;goto B76298d;
case 0x76298f:c.instructions+=1;goto B76298f;
case 0x762995:goto L762995;
case 0x762997:goto L762997;
case 0x76299b:c.instructions+=1;goto B76299b;
case 0x76299d:goto L76299d;
case 0x7629a2:goto L7629a2;
case 0x7629a3:c.instructions+=3;goto B7629a3;
case 0x7629a4:c.instructions+=2;goto B7629a4;
case 0x7629a6:c.instructions+=1;goto B7629a6;
case 0x7629a8:goto L7629a8;
case 0x7629aa:c.instructions+=2;goto B7629aa;
case 0x7629ab:c.instructions+=1;goto B7629ab;
case 0x7629b0:goto L7629b0;
case 0x7629b1:c.instructions+=3;goto B7629b1;
case 0x7629b2:c.instructions+=2;goto B7629b2;
case 0x7629b4:c.instructions+=1;goto B7629b4;
case 0x7629b6:goto L7629b6;
case 0x7629b9:c.instructions+=3;goto B7629b9;
case 0x7629bc:c.instructions+=2;goto B7629bc;
case 0x7629bf:c.instructions+=1;goto B7629bf;
case 0x7629c4:goto L7629c4;
case 0x7629c5:c.instructions+=2;goto B7629c5;
case 0x7629c6:c.instructions+=1;goto B7629c6;
case 0x7629cb:goto L7629cb;
case 0x7629ce:c.instructions+=1;goto B7629ce;
case 0x7629d0:goto L7629d0;
case 0x7629d5:goto L7629d5;
case 0x7629d6:c.instructions+=3;goto B7629d6;
case 0x7629d7:c.instructions+=2;goto B7629d7;
case 0x7629d9:c.instructions+=1;goto B7629d9;
case 0x7629db:goto L7629db;
case 0x7629dd:c.instructions+=2;goto B7629dd;
case 0x7629de:c.instructions+=1;goto B7629de;
case 0x7629e3:goto L7629e3;
case 0x7629e4:c.instructions+=3;goto B7629e4;
case 0x7629e5:c.instructions+=2;goto B7629e5;
case 0x7629e7:c.instructions+=1;goto B7629e7;
case 0x7629e9:goto L7629e9;
case 0x7629ec:c.instructions+=1;goto B7629ec;
case 0x7629f1:goto L7629f1;
case 0x7629f2:c.instructions+=2;goto B7629f2;
case 0x7629f4:c.instructions+=1;goto B7629f4;
case 0x7629f6:goto L7629f6;
case 0x7629f9:c.instructions+=3;goto B7629f9;
case 0x7629fc:c.instructions+=2;goto B7629fc;
case 0x7629ff:c.instructions+=1;goto B7629ff;
case 0x762a01:goto L762a01;
case 0x762a03:c.instructions+=1;goto B762a03;
case 0x762a08:goto L762a08;
case 0x762a09:c.instructions+=3;goto B762a09;
case 0x762a0c:c.instructions+=2;goto B762a0c;
case 0x762a0d:c.instructions+=1;goto B762a0d;
case 0x762a12:goto L762a12;
case 0x762a14:goto L762a14;
case 0x762a19:goto L762a19;
case 0x762a1a:c.instructions+=3;goto B762a1a;
case 0x762a1d:c.instructions+=2;goto B762a1d;
case 0x762a1e:c.instructions+=1;goto B762a1e;
case 0x762a23:goto L762a23;
case 0x762a25:goto L762a25;
case 0x762a2a:goto L762a2a;
case 0x762a2e:goto L762a2e;
case 0x762a33:goto L762a33;
case 0x762a34:goto L762a34;
case 0x762a36:c.instructions+=2;goto B762a36;
case 0x762a37:c.instructions+=1;goto B762a37;
case 0x762a38:goto L762a38;
case 0x762a3b:c.instructions+=1;goto B762a3b;
case 0x762a40:goto L762a40;
case 0x762a41:c.instructions+=3;goto B762a41;
case 0x762a43:c.instructions+=2;goto B762a43;
case 0x762a45:c.instructions+=1;goto B762a45;
case 0x762a47:goto L762a47;
case 0x762a48:c.instructions+=3;goto B762a48;
case 0x762a4b:c.instructions+=2;goto B762a4b;
case 0x762a4d:c.instructions+=1;goto B762a4d;
case 0x762a52:goto L762a52;
case 0x762a53:c.instructions+=1;goto B762a53;
case 0x762a54:goto L762a54;
case 0x762a58:c.instructions+=2;goto B762a58;
case 0x762a5b:c.instructions+=1;goto B762a5b;
case 0x762a5d:goto L762a5d;
case 0x762a5e:c.instructions+=1;goto B762a5e;
case 0x762a60:goto L762a60;
case 0x762a63:goto L762a63;
case 0x762a68:goto L762a68;
case 0x762a6a:c.instructions+=4;goto B762a6a;
case 0x762a6d:c.instructions+=3;goto B762a6d;
case 0x762a70:c.instructions+=2;goto B762a70;
case 0x762a71:c.instructions+=1;goto B762a71;
case 0x762a76:goto L762a76;
case 0x762a79:c.instructions+=10;goto B762a79;
case 0x762a7e:c.instructions+=9;goto B762a7e;
case 0x762a81:c.instructions+=8;goto B762a81;
case 0x762a82:c.instructions+=7;goto B762a82;
case 0x762a85:c.instructions+=6;goto B762a85;
case 0x762a88:c.instructions+=5;goto B762a88;
case 0x762a8b:c.instructions+=4;goto B762a8b;
case 0x762a8e:c.instructions+=3;goto B762a8e;
case 0x762a8f:c.instructions+=2;goto B762a8f;
case 0x762a92:c.instructions+=1;goto B762a92;
case 0x762a97:goto L762a97;
case 0x762a9a:c.instructions+=2;goto B762a9a;
case 0x762a9c:c.instructions+=1;goto B762a9c;
case 0x762a9e:goto L762a9e;
case 0x762a9f:c.instructions+=2;goto B762a9f;
case 0x762aa0:c.instructions+=1;goto B762aa0;
case 0x762aa5:goto L762aa5;
case 0x762aa6:c.instructions+=1;goto B762aa6;
case 0x762aa7:goto L762aa7;
case 0x762aa8:c.instructions+=7;goto B762aa8;
case 0x762aaa:c.instructions+=6;goto B762aaa;
case 0x762aab:c.instructions+=5;goto B762aab;
case 0x762aac:c.instructions+=4;goto B762aac;
case 0x762aad:c.instructions+=3;goto B762aad;
case 0x762ab0:c.instructions+=2;goto B762ab0;
case 0x762ab6:c.instructions+=1;goto B762ab6;
case 0x762abc:goto L762abc;
case 0x762ac1:goto L762ac1;
case 0x762ac5:c.instructions+=1;goto B762ac5;
case 0x762ac7:goto L762ac7;
case 0x762aca:c.instructions+=7;goto B762aca;
case 0x762acd:c.instructions+=6;goto B762acd;
case 0x762ad0:c.instructions+=5;goto B762ad0;
case 0x762ad3:c.instructions+=4;goto B762ad3;
case 0x762ad6:c.instructions+=3;goto B762ad6;
case 0x762ad9:c.instructions+=2;goto B762ad9;
case 0x762ada:c.instructions+=1;goto B762ada;
case 0x762adf:goto L762adf;
case 0x762ae2:c.instructions+=2;goto B762ae2;
case 0x762ae4:c.instructions+=1;goto B762ae4;
case 0x762ae6:goto L762ae6;
case 0x762ae9:c.instructions+=9;goto B762ae9;
case 0x762aea:c.instructions+=8;goto B762aea;
case 0x762aed:c.instructions+=7;goto B762aed;
case 0x762aee:c.instructions+=6;goto B762aee;
case 0x762af1:c.instructions+=5;goto B762af1;
case 0x762af2:c.instructions+=4;goto B762af2;
case 0x762af3:c.instructions+=3;goto B762af3;
case 0x762af6:c.instructions+=2;goto B762af6;
case 0x762af9:c.instructions+=1;goto B762af9;
case 0x762afe:goto L762afe;
case 0x762b00:c.instructions+=4;goto B762b00;
case 0x762b03:c.instructions+=3;goto B762b03;
case 0x762b06:c.instructions+=2;goto B762b06;
case 0x762b09:c.instructions+=1;goto B762b09;
case 0x762b0b:goto L762b0b;
case 0x762b0c:goto L762b0c;
case 0x762b0e:c.instructions+=1;goto B762b0e;
case 0x762b10:goto L762b10;
case 0x762b13:c.instructions+=1;goto B762b13;
case 0x762b15:goto L762b15;
case 0x762b18:c.instructions+=6;goto B762b18;
case 0x762b1b:c.instructions+=5;goto B762b1b;
case 0x762b1e:c.instructions+=4;goto B762b1e;
case 0x762b20:c.instructions+=3;goto B762b20;
case 0x762b23:c.instructions+=2;goto B762b23;
case 0x762b25:c.instructions+=1;goto B762b25;
case 0x762b27:goto L762b27;
case 0x762b2b:c.instructions+=1;goto B762b2b;
case 0x762b2d:goto L762b2d;
case 0x762b30:c.instructions+=10;goto B762b30;
case 0x762b32:c.instructions+=9;goto B762b32;
case 0x762b35:c.instructions+=8;goto B762b35;
case 0x762b38:c.instructions+=7;goto B762b38;
case 0x762b3b:c.instructions+=6;goto B762b3b;
case 0x762b3d:c.instructions+=5;goto B762b3d;
case 0x762b40:c.instructions+=4;goto B762b40;
case 0x762b43:c.instructions+=3;goto B762b43;
case 0x762b46:c.instructions+=2;goto B762b46;
case 0x762b49:c.instructions+=1;goto B762b49;
case 0x762b4e:goto L762b4e;
case 0x762b51:c.instructions+=1;goto B762b51;
case 0x762b54:goto L762b54;
case 0x762b57:c.instructions+=4;goto B762b57;
case 0x762b5a:c.instructions+=3;goto B762b5a;
case 0x762b5d:c.instructions+=2;goto B762b5d;
case 0x762b60:c.instructions+=1;goto B762b60;
case 0x762b62:goto L762b62;
case 0x762b63:goto L762b63;
case 0x762b64:goto L762b64;
case 0x762b65:c.instructions+=2;goto B762b65;
case 0x762b66:c.instructions+=1;goto B762b66;
case 0x762b67:goto L762b67;
case 0x762b68:c.instructions+=8;goto B762b68;
case 0x762b6a:c.instructions+=7;goto B762b6a;
case 0x762b6d:c.instructions+=6;goto B762b6d;
case 0x762b70:c.instructions+=5;goto B762b70;
case 0x762b73:c.instructions+=4;goto B762b73;
case 0x762b77:c.instructions+=3;goto B762b77;
case 0x762b7a:c.instructions+=2;goto B762b7a;
case 0x762b7d:c.instructions+=1;goto B762b7d;
case 0x762b7f:goto L762b7f;
case 0x762b82:c.instructions+=2;goto B762b82;
case 0x762b85:c.instructions+=1;goto B762b85;
case 0x762b87:goto L762b87;
case 0x762b8c:goto L762b8c;
case 0x762b8d:c.instructions+=5;goto B762b8d;
case 0x762b90:c.instructions+=4;goto B762b90;
case 0x762b96:c.instructions+=3;goto B762b96;
case 0x762b97:c.instructions+=2;goto B762b97;
case 0x762b98:c.instructions+=1;goto B762b98;
case 0x762b9e:goto L762b9e;
case 0x762ba2:c.instructions+=2;goto B762ba2;
case 0x762ba7:c.instructions+=1;goto B762ba7;
case 0x762ba9:goto L762ba9;
case 0x762bac:c.instructions+=1;goto B762bac;
case 0x762bae:goto L762bae;
case 0x762bb2:c.instructions+=1;goto B762bb2;
case 0x762bb4:goto L762bb4;
case 0x762bb9:goto L762bb9;
case 0x762bbd:c.instructions+=1;goto B762bbd;
case 0x762bc3:goto L762bc3;
case 0x762bc8:goto L762bc8;
case 0x762bcb:c.instructions+=2;goto B762bcb;
case 0x762bce:c.instructions+=1;goto B762bce;
case 0x762bd3:goto L762bd3;
case 0x762bd6:c.instructions+=5;goto B762bd6;
case 0x762bd8:c.instructions+=4;goto B762bd8;
case 0x762bd9:c.instructions+=3;goto B762bd9;
case 0x762bdc:c.instructions+=2;goto B762bdc;
case 0x762be0:c.instructions+=1;goto B762be0;
case 0x762be5:goto L762be5;
case 0x762be7:c.instructions+=3;goto B762be7;
case 0x762be8:c.instructions+=2;goto B762be8;
case 0x762be9:c.instructions+=1;goto B762be9;
case 0x762beb:goto L762beb;
case 0x762bf0:goto L762bf0;
case 0x762bf6:c.instructions+=1;goto B762bf6;
case 0x762bfc:goto L762bfc;
case 0x762bff:c.instructions+=2;goto B762bff;
case 0x762c03:c.instructions+=1;goto B762c03;
case 0x762c05:goto L762c05;
case 0x762c08:c.instructions+=1;goto B762c08;
case 0x762c0a:goto L762c0a;
case 0x762c0e:c.instructions+=1;goto B762c0e;
case 0x762c10:goto L762c10;
case 0x762c15:goto L762c15;
case 0x762c18:goto L762c18;
case 0x762c1e:c.instructions+=1;goto B762c1e;
case 0x762c24:goto L762c24;
case 0x762c28:c.instructions+=1;goto B762c28;
case 0x762c2e:goto L762c2e;
case 0x762c31:c.instructions+=1;goto B762c31;
case 0x762c37:goto L762c37;
case 0x762c3a:c.instructions+=8;goto B762c3a;
case 0x762c3d:c.instructions+=7;goto B762c3d;
case 0x762c3e:c.instructions+=6;goto B762c3e;
case 0x762c41:c.instructions+=5;goto B762c41;
case 0x762c42:c.instructions+=4;goto B762c42;
case 0x762c43:c.instructions+=3;goto B762c43;
case 0x762c46:c.instructions+=2;goto B762c46;
case 0x762c49:c.instructions+=1;goto B762c49;
case 0x762c4e:goto L762c4e;
case 0x762c51:c.instructions+=4;goto B762c51;
case 0x762c54:c.instructions+=3;goto B762c54;
case 0x762c57:c.instructions+=2;goto B762c57;
case 0x762c5a:c.instructions+=1;goto B762c5a;
case 0x762c60:goto L762c60;
case 0x762c62:goto L762c62;
case 0x762c65:goto L762c65;
case 0x762c67:c.instructions+=1;goto B762c67;
case 0x762c6d:goto L762c6d;
case 0x762c70:c.instructions+=1;goto B762c70;
case 0x762c72:goto L762c72;
case 0x762c75:c.instructions+=4;goto B762c75;
case 0x762c77:c.instructions+=3;goto B762c77;
case 0x762c7a:c.instructions+=2;goto B762c7a;
case 0x762c7d:c.instructions+=1;goto B762c7d;
case 0x762c7f:goto L762c7f;
case 0x762c82:c.instructions+=7;goto B762c82;
case 0x762c85:c.instructions+=6;goto B762c85;
case 0x762c88:c.instructions+=5;goto B762c88;
case 0x762c8a:c.instructions+=4;goto B762c8a;
case 0x762c8c:c.instructions+=3;goto B762c8c;
case 0x762c8f:c.instructions+=2;goto B762c8f;
case 0x762c92:c.instructions+=1;goto B762c92;
case 0x762c94:goto L762c94;
case 0x762c97:c.instructions+=4;goto B762c97;
case 0x762c99:c.instructions+=3;goto B762c99;
case 0x762c9c:c.instructions+=2;goto B762c9c;
case 0x762c9f:c.instructions+=1;goto B762c9f;
case 0x762ca4:goto L762ca4;
case 0x762ca6:c.instructions+=2;goto B762ca6;
case 0x762ca7:c.instructions+=1;goto B762ca7;
case 0x762ca9:goto L762ca9;
case 0x762cac:c.instructions+=3;goto B762cac;
case 0x762cb0:c.instructions+=2;goto B762cb0;
case 0x762cb3:c.instructions+=1;goto B762cb3;
case 0x762cb5:goto L762cb5;
case 0x762cb8:goto L762cb8;
case 0x762cbb:c.instructions+=3;goto B762cbb;
case 0x762cbe:c.instructions+=2;goto B762cbe;
case 0x762cc2:c.instructions+=1;goto B762cc2;
case 0x762cc4:goto L762cc4;
case 0x762cc6:goto L762cc6;
case 0x762cc9:c.instructions+=11;goto B762cc9;
case 0x762ccc:c.instructions+=10;goto B762ccc;
case 0x762ccf:c.instructions+=9;goto B762ccf;
case 0x762cd2:c.instructions+=8;goto B762cd2;
case 0x762cd5:c.instructions+=7;goto B762cd5;
case 0x762cd8:c.instructions+=6;goto B762cd8;
case 0x762cdb:c.instructions+=5;goto B762cdb;
case 0x762cde:c.instructions+=4;goto B762cde;
case 0x762cdf:c.instructions+=3;goto B762cdf;
case 0x762ce1:c.instructions+=2;goto B762ce1;
case 0x762ce4:c.instructions+=1;goto B762ce4;
case 0x762ce9:goto L762ce9;
case 0x762cec:c.instructions+=2;goto B762cec;
case 0x762cef:c.instructions+=1;goto B762cef;
case 0x762cf1:goto L762cf1;
case 0x762cf4:c.instructions+=5;goto B762cf4;
case 0x762cf7:c.instructions+=4;goto B762cf7;
case 0x762cfa:c.instructions+=3;goto B762cfa;
case 0x762cfd:c.instructions+=2;goto B762cfd;
case 0x762d00:c.instructions+=1;goto B762d00;
case 0x762d06:goto L762d06;
case 0x762d0a:c.instructions+=1;goto B762d0a;
case 0x762d0c:goto L762d0c;
case 0x762d0e:c.instructions+=2;goto B762d0e;
case 0x762d0f:c.instructions+=1;goto B762d0f;
case 0x762d14:goto L762d14;
case 0x762d15:c.instructions+=1;goto B762d15;
case 0x762d16:goto L762d16;
case 0x762d17:c.instructions+=4;goto B762d17;
case 0x762d18:c.instructions+=3;goto B762d18;
case 0x762d19:c.instructions+=2;goto B762d19;
case 0x762d1a:c.instructions+=1;goto B762d1a;
case 0x762d1b:goto L762d1b;
case 0x762d1e:goto L762d1e;
case 0x762d22:c.instructions+=1;goto B762d22;
case 0x762d24:goto L762d24;
case 0x762d27:c.instructions+=8;goto B762d27;
case 0x762d2a:c.instructions+=7;goto B762d2a;
case 0x762d2d:c.instructions+=6;goto B762d2d;
case 0x762d30:c.instructions+=5;goto B762d30;
case 0x762d33:c.instructions+=4;goto B762d33;
case 0x762d36:c.instructions+=3;goto B762d36;
case 0x762d39:c.instructions+=2;goto B762d39;
case 0x762d3a:c.instructions+=1;goto B762d3a;
case 0x762d3f:goto L762d3f;
case 0x762d42:c.instructions+=1;goto B762d42;
case 0x762d44:goto L762d44;
case 0x762d49:goto L762d49;
case 0x762d4a:c.instructions+=9;goto B762d4a;
case 0x762d4c:c.instructions+=8;goto B762d4c;
case 0x762d4d:c.instructions+=7;goto B762d4d;
case 0x762d50:c.instructions+=6;goto B762d50;
case 0x762d52:c.instructions+=5;goto B762d52;
case 0x762d53:c.instructions+=4;goto B762d53;
case 0x762d58:c.instructions+=3;goto B762d58;
case 0x762d5d:c.instructions+=2;goto B762d5d;
case 0x762d5f:c.instructions+=1;goto B762d5f;
case 0x762d61:goto L762d61;
case 0x762d66:goto L762d66;
case 0x762d69:c.instructions+=2;goto B762d69;
case 0x762d6d:c.instructions+=1;goto B762d6d;
case 0x762d6f:goto L762d6f;
case 0x762d73:c.instructions+=1;goto B762d73;
case 0x762d75:goto L762d75;
case 0x762d79:c.instructions+=1;goto B762d79;
case 0x762d7b:goto L762d7b;
case 0x762d7d:c.instructions+=4;goto B762d7d;
case 0x762d7e:c.instructions+=3;goto B762d7e;
case 0x762d81:c.instructions+=2;goto B762d81;
case 0x762d84:c.instructions+=1;goto B762d84;
case 0x762d89:goto L762d89;
case 0x762d8c:c.instructions+=1;goto B762d8c;
case 0x762d8e:goto L762d8e;
case 0x762d92:c.instructions+=1;goto B762d92;
case 0x762d94:goto L762d94;
case 0x762d9a:c.instructions+=1;goto B762d9a;
case 0x762d9c:goto L762d9c;
case 0x762d9f:c.instructions+=1;goto B762d9f;
case 0x762da1:goto L762da1;
case 0x762da4:c.instructions+=3;goto B762da4;
case 0x762da7:c.instructions+=2;goto B762da7;
case 0x762da9:c.instructions+=1;goto B762da9;
case 0x762dab:goto L762dab;
case 0x762daf:c.instructions+=9;goto B762daf;
case 0x762db0:c.instructions+=8;goto B762db0;
case 0x762db3:c.instructions+=7;goto B762db3;
case 0x762db6:c.instructions+=6;goto B762db6;
case 0x762db7:c.instructions+=5;goto B762db7;
case 0x762dba:c.instructions+=4;goto B762dba;
case 0x762dbd:c.instructions+=3;goto B762dbd;
case 0x762dc0:c.instructions+=2;goto B762dc0;
case 0x762dc1:c.instructions+=1;goto B762dc1;
case 0x762dc3:goto L762dc3;
case 0x762dc6:c.instructions+=1;goto B762dc6;
case 0x762dc8:goto L762dc8;
case 0x762dcb:c.instructions+=8;goto B762dcb;
case 0x762dce:c.instructions+=7;goto B762dce;
case 0x762dd1:c.instructions+=6;goto B762dd1;
case 0x762dd2:c.instructions+=5;goto B762dd2;
case 0x762dd5:c.instructions+=4;goto B762dd5;
case 0x762dd8:c.instructions+=3;goto B762dd8;
case 0x762ddb:c.instructions+=2;goto B762ddb;
case 0x762ddc:c.instructions+=1;goto B762ddc;
case 0x762de1:goto L762de1;
case 0x762de4:goto L762de4;
case 0x762de6:c.instructions+=1;goto B762de6;
case 0x762de7:goto L762de7;
case 0x762de8:c.instructions+=3;goto B762de8;
case 0x762de9:c.instructions+=2;goto B762de9;
case 0x762dea:c.instructions+=1;goto B762dea;
case 0x762deb:goto L762deb;
case 0x762ded:c.instructions+=2;goto B762ded;
case 0x762df2:c.instructions+=1;goto B762df2;
case 0x762df7:goto L762df7;
case 0x762dfc:goto L762dfc;
case 0x762e00:c.instructions+=1;goto B762e00;
case 0x762e02:goto L762e02;
case 0x762e06:c.instructions+=1;goto B762e06;
case 0x762e0b:goto L762e0b;
case 0x762e0e:goto L762e0e;
case 0x762e10:goto L762e10;
case 0x762e12:c.instructions+=2;goto B762e12;
case 0x762e13:c.instructions+=1;goto B762e13;
case 0x762e17:goto L762e17;
case 0x762e1b:goto L762e1b;
case 0x762e20:goto L762e20;
case 0x762e22:c.instructions+=2;goto B762e22;
case 0x762e27:c.instructions+=1;goto B762e27;
case 0x762e2c:goto L762e2c;
case 0x762e31:c.instructions+=2;goto B762e31;
case 0x762e33:c.instructions+=1;goto B762e33;
case 0x762e35:goto L762e35;
case 0x762e39:c.instructions+=1;goto B762e39;
case 0x762e3b:goto L762e3b;
case 0x762e3d:goto L762e3d;
case 0x762e3f:c.instructions+=2;goto B762e3f;
case 0x762e40:c.instructions+=1;goto B762e40;
case 0x762e44:goto L762e44;
case 0x762e48:goto L762e48;
case 0x762e50:goto L762e50;
case 0x762e51:c.instructions+=13;goto B762e51;
case 0x762e53:c.instructions+=12;goto B762e53;
case 0x762e56:c.instructions+=11;goto B762e56;
case 0x762e57:c.instructions+=10;goto B762e57;
case 0x762e58:c.instructions+=9;goto B762e58;
case 0x762e5b:c.instructions+=8;goto B762e5b;
case 0x762e5e:c.instructions+=7;goto B762e5e;
case 0x762e61:c.instructions+=6;goto B762e61;
case 0x762e64:c.instructions+=5;goto B762e64;
case 0x762e65:c.instructions+=4;goto B762e65;
case 0x762e68:c.instructions+=3;goto B762e68;
case 0x762e6b:c.instructions+=2;goto B762e6b;
case 0x762e6e:c.instructions+=1;goto B762e6e;
case 0x762e73:goto L762e73;
case 0x762e74:c.instructions+=2;goto B762e74;
case 0x762e75:c.instructions+=1;goto B762e75;
case 0x762e77:goto L762e77;
case 0x762e78:c.instructions+=8;goto B762e78;
case 0x762e79:c.instructions+=7;goto B762e79;
case 0x762e7b:c.instructions+=6;goto B762e7b;
case 0x762e7c:c.instructions+=5;goto B762e7c;
case 0x762e7f:c.instructions+=4;goto B762e7f;
case 0x762e80:c.instructions+=3;goto B762e80;
case 0x762e82:c.instructions+=2;goto B762e82;
case 0x762e88:c.instructions+=1;goto B762e88;
case 0x762e8a:goto L762e8a;
case 0x762e8f:goto L762e8f;
case 0x762e90:c.instructions+=1;goto B762e90;
case 0x762e95:goto L762e95;
case 0x762e96:c.instructions+=4;goto B762e96;
case 0x762e97:c.instructions+=3;goto B762e97;
case 0x762e98:c.instructions+=2;goto B762e98;
case 0x762e99:c.instructions+=1;goto B762e99;
case 0x762e9c:goto L762e9c;
case 0x762e9e:c.instructions+=2;goto B762e9e;
case 0x762ea3:c.instructions+=1;goto B762ea3;
case 0x762ea8:goto L762ea8;
case 0x762eab:c.instructions+=3;goto B762eab;
case 0x762ead:c.instructions+=2;goto B762ead;
case 0x762eaf:c.instructions+=1;goto B762eaf;
case 0x762eb1:goto L762eb1;
case 0x762eb4:c.instructions+=1;goto B762eb4;
case 0x762eb9:goto L762eb9;
case 0x762eba:c.instructions+=1;goto B762eba;
case 0x762ebf:goto L762ebf;
case 0x762ec2:c.instructions+=2;goto B762ec2;
case 0x762ec4:c.instructions+=1;goto B762ec4;
case 0x762ec6:goto L762ec6;
case 0x762ec7:c.instructions+=1;goto B762ec7;
case 0x762ecc:goto L762ecc;
case 0x762ecd:c.instructions+=1;goto B762ecd;
case 0x762ed2:goto L762ed2;
case 0x762ed9:c.instructions+=1;goto B762ed9;
case 0x762edf:goto L762edf;
case 0x762ee2:c.instructions+=2;goto B762ee2;
case 0x762ee5:c.instructions+=1;goto B762ee5;
case 0x762eeb:goto L762eeb;
case 0x762eed:c.instructions+=1;goto B762eed;
case 0x762ef2:goto L762ef2;
case 0x762ef3:c.instructions+=3;goto B762ef3;
case 0x762ef6:c.instructions+=2;goto B762ef6;
case 0x762ef7:c.instructions+=1;goto B762ef7;
case 0x762efc:goto L762efc;
case 0x762efd:c.instructions+=3;goto B762efd;
case 0x762f00:c.instructions+=2;goto B762f00;
case 0x762f02:c.instructions+=1;goto B762f02;
case 0x762f08:goto L762f08;
case 0x762f0e:c.instructions+=1;goto B762f0e;
case 0x762f10:goto L762f10;
case 0x762f11:c.instructions+=3;goto B762f11;
case 0x762f12:c.instructions+=2;goto B762f12;
case 0x762f13:c.instructions+=1;goto B762f13;
case 0x762f18:goto L762f18;
case 0x762f1b:c.instructions+=2;goto B762f1b;
case 0x762f1d:c.instructions+=1;goto B762f1d;
case 0x762f1f:goto L762f1f;
case 0x762f22:c.instructions+=1;goto B762f22;
case 0x762f24:goto L762f24;
case 0x762f25:c.instructions+=1;goto B762f25;
case 0x762f2a:goto L762f2a;
case 0x762f2b:c.instructions+=3;goto B762f2b;
case 0x762f2e:c.instructions+=2;goto B762f2e;
case 0x762f30:c.instructions+=1;goto B762f30;
case 0x762f32:goto L762f32;
case 0x762f35:c.instructions+=4;goto B762f35;
case 0x762f36:c.instructions+=3;goto B762f36;
case 0x762f39:c.instructions+=2;goto B762f39;
case 0x762f3b:c.instructions+=1;goto B762f3b;
case 0x762f3d:goto L762f3d;
case 0x762f3f:goto L762f3f;
case 0x762f40:c.instructions+=3;goto B762f40;
case 0x762f41:c.instructions+=2;goto B762f41;
case 0x762f44:c.instructions+=1;goto B762f44;
case 0x762f49:goto L762f49;
case 0x762f4a:c.instructions+=1;goto B762f4a;
case 0x762f4f:goto L762f4f;
case 0x762f52:c.instructions+=3;goto B762f52;
case 0x762f53:c.instructions+=2;goto B762f53;
case 0x762f54:c.instructions+=1;goto B762f54;
case 0x762f59:goto L762f59;
case 0x762f5c:goto L762f5c;
case 0x762f5f:c.instructions+=1;goto B762f5f;
case 0x762f61:goto L762f61;
case 0x762f63:c.instructions+=1;goto B762f63;
case 0x762f65:goto L762f65;
case 0x762f67:c.instructions+=2;goto B762f67;
case 0x762f68:c.instructions+=1;goto B762f68;
case 0x762f6b:goto L762f6b;
case 0x762f6e:c.instructions+=6;goto B762f6e;
case 0x762f71:c.instructions+=5;goto B762f71;
case 0x762f74:c.instructions+=4;goto B762f74;
case 0x762f75:c.instructions+=3;goto B762f75;
case 0x762f76:c.instructions+=2;goto B762f76;
case 0x762f7c:c.instructions+=1;goto B762f7c;
case 0x762f82:goto L762f82;
case 0x762f85:c.instructions+=2;goto B762f85;
case 0x762f87:c.instructions+=1;goto B762f87;
case 0x762f89:goto L762f89;
case 0x762f8c:c.instructions+=4;goto B762f8c;
case 0x762f8d:c.instructions+=3;goto B762f8d;
case 0x762f90:c.instructions+=2;goto B762f90;
case 0x762f92:c.instructions+=1;goto B762f92;
case 0x762f94:goto L762f94;
case 0x762f96:goto L762f96;
case 0x762f97:c.instructions+=3;goto B762f97;
case 0x762f98:c.instructions+=2;goto B762f98;
case 0x762f9b:c.instructions+=1;goto B762f9b;
case 0x762fa0:goto L762fa0;
case 0x762fa1:c.instructions+=2;goto B762fa1;
case 0x762fa4:c.instructions+=1;goto B762fa4;
case 0x762fa9:goto L762fa9;
case 0x762fac:goto L762fac;
case 0x762fb0:c.instructions+=1;goto B762fb0;
case 0x762fb5:goto L762fb5;
case 0x762fb8:c.instructions+=1;goto B762fb8;
case 0x762fba:goto L762fba;
case 0x762fbc:c.instructions+=1;goto B762fbc;
case 0x762fbe:goto L762fbe;
case 0x762fc0:c.instructions+=1;goto B762fc0;
case 0x762fc1:goto L762fc1;
case 0x762fc4:c.instructions+=7;goto B762fc4;
case 0x762fc7:c.instructions+=6;goto B762fc7;
case 0x762fca:c.instructions+=5;goto B762fca;
case 0x762fcb:c.instructions+=4;goto B762fcb;
case 0x762fcc:c.instructions+=3;goto B762fcc;
case 0x762fcd:c.instructions+=2;goto B762fcd;
case 0x762fd3:c.instructions+=1;goto B762fd3;
case 0x762fd9:goto L762fd9;
case 0x762fdc:goto L762fdc;
case 0x762fdf:c.instructions+=2;goto B762fdf;
case 0x762fe1:c.instructions+=1;goto B762fe1;
case 0x762fe3:goto L762fe3;
case 0x762fe9:c.instructions+=1;goto B762fe9;
case 0x762feb:goto L762feb;
case 0x762fec:c.instructions+=1;goto B762fec;
case 0x762ff1:goto L762ff1;
case 0x762ff2:c.instructions+=2;goto B762ff2;
case 0x762ff4:c.instructions+=1;goto B762ff4;
case 0x762ffa:goto L762ffa;
case 0x762ffc:goto L762ffc;
case 0x762ffe:c.instructions+=1;goto B762ffe;
default:missing_instruction(c.pc);}
B762000:L762000:{c.instructions+=3;NFSU2_TR(0x762000);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762003:{NFSU2_TR(0x762003);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762005:{NFSU2_TR(0x762005);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76200aull));
TAIL_STATIC(0x76315du,763);
}
B76200a:L76200a:{c.instructions+=2;NFSU2_TR(0x76200a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76200b:{NFSU2_TR(0x76200b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76200f:L76200f:{c.instructions+=2;NFSU2_TR(0x76200f);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762011:{NFSU2_TR(0x762011);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762016ull));
TAIL_STATIC(0x76315du,763);
}
B762016:L762016:{c.instructions+=2;NFSU2_TR(0x762016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762017:{NFSU2_TR(0x762017);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762018:L762018:{c.instructions+=1;NFSU2_TR(0x762018);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76201dull));
TAIL_STATIC(0x7630bfu,763);
}
B76201d:L76201d:{c.instructions+=2;NFSU2_TR(0x76201d);
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
B76201f:{NFSU2_TR(0x76201f);
if(r1(R+518)){{goto L762031;}}
}
B762021:L762021:{c.instructions+=1;NFSU2_TR(0x762021);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830e0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762027ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B762027:L762027:{c.instructions+=3;NFSU2_TR(0x762027);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76202a:{NFSU2_TR(0x76202a);
__builtin_memmove(gp(0x81a314),(R+0),4);
}
B76202f:{NFSU2_TR(0x76202f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762039;}}
}
B762031:L762031:{c.instructions+=1;NFSU2_TR(0x762031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762036ull));
TAIL_STATIC(0x761e0bu,761);
}
B762036:L762036:{c.instructions+=2;NFSU2_TR(0x762036);
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
B762038:{NFSU2_TR(0x762038);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762039:L762039:{c.instructions+=4;NFSU2_TR(0x762039);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76203a:{NFSU2_TR(0x76203a);
u8 U[4];
w4(U+0,u32(0x88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76203f:{NFSU2_TR(0x76203f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762041:{NFSU2_TR(0x762041);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762046ull));
TAIL_STATIC(0x76ace0u,76a);
}
B762046:L762046:{c.instructions+=5;NFSU2_TR(0x762046);
__builtin_memmove((R+24),(R+0),4);
}
B762048:{NFSU2_TR(0x762048);
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
B76204a:{NFSU2_TR(0x76204a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76204b:{NFSU2_TR(0x76204b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76204c:{NFSU2_TR(0x76204c);
if(r1(R+518)){{goto L76207e;}}
}
B76204e:L76204e:{c.instructions+=3;NFSU2_TR(0x76204e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76204f:{NFSU2_TR(0x76204f);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a314),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762055:{NFSU2_TR(0x762055);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832ac),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76205bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76205b:L76205b:{c.instructions+=2;NFSU2_TR(0x76205b);
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
B76205d:{NFSU2_TR(0x76205d);
if(r1(R+518)){{goto L76207e;}}
}
B76205f:L76205f:{c.instructions+=3;NFSU2_TR(0x76205f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x81a268ull));
s4(u32(r4(U+0)),r4(U+4));
}
B762066:{NFSU2_TR(0x762066);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76206d:{NFSU2_TR(0x76206d);
u8 U[4];
__builtin_memmove((U+0),gp(0x783200),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762073ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B762073:L762073:{c.instructions+=6;NFSU2_TR(0x762073);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B762077:{NFSU2_TR(0x762077);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B762079:{NFSU2_TR(0x762079);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76207b:{NFSU2_TR(0x76207b);
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
B76207c:{NFSU2_TR(0x76207c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76207d:{NFSU2_TR(0x76207d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76207e:L76207e:{c.instructions+=1;NFSU2_TR(0x76207e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762083ull));
TAIL_STATIC(0x761e0bu,761);
}
B762083:L762083:{c.instructions+=3;NFSU2_TR(0x762083);
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
B762085:{NFSU2_TR(0x762085);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B762086:{NFSU2_TR(0x762086);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762087:L762087:{c.instructions+=2;NFSU2_TR(0x762087);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b8430),4);
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
B76208e:{NFSU2_TR(0x76208e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76209d;}}
}
B762090:L762090:{c.instructions+=2;NFSU2_TR(0x762090);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b843c),4);
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
B762097:{NFSU2_TR(0x762097);
if(r1(R+512)){{goto L76209d;}}
}
B762099:L762099:{c.instructions+=3;NFSU2_TR(0x762099);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76209b:{NFSU2_TR(0x76209b);
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
B76209c:{NFSU2_TR(0x76209c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76209d:L76209d:{c.instructions+=3;NFSU2_TR(0x76209d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76209f:{NFSU2_TR(0x76209f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7620a0:{NFSU2_TR(0x7620a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7620a1:L7620a1:{c.instructions+=7;NFSU2_TR(0x7620a1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7620a3:{NFSU2_TR(0x7620a3);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B7620a7:{NFSU2_TR(0x7620a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7620a9:{NFSU2_TR(0x7620a9);
__builtin_memmove((R+0),(R+518),1);
}
B7620ac:{NFSU2_TR(0x7620ac);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7620b1:{NFSU2_TR(0x7620b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7620b2:{NFSU2_TR(0x7620b2);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830d8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7620b8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7620b8:L7620b8:{c.instructions+=3;NFSU2_TR(0x7620b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7620ba:{NFSU2_TR(0x7620ba);
__builtin_memmove(gp(0x8ba4a4),(R+0),4);
}
B7620bf:{NFSU2_TR(0x7620bf);
if(r1(R+518)){{goto L7620eb;}}
}
B7620c1:L7620c1:{c.instructions+=1;NFSU2_TR(0x7620c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7620c6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762087u);}goto L762087;}
}
B7620c6:L7620c6:{c.instructions+=3;NFSU2_TR(0x7620c6);
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
B7620c9:{NFSU2_TR(0x7620c9);
__builtin_memmove(gp(0x8ba4a8),(R+0),4);
}
B7620ce:{NFSU2_TR(0x7620ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7620ee;}}
}
B7620d0:L7620d0:{c.instructions+=2;NFSU2_TR(0x7620d0);
u8 U[4];
w4(U+0,u32(0x3f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7620d5:{NFSU2_TR(0x7620d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7620daull));
TAIL_STATIC(0x763222u,763);
}
B7620da:L7620da:{c.instructions+=3;NFSU2_TR(0x7620da);
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
B7620dc:{NFSU2_TR(0x7620dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7620dd:{NFSU2_TR(0x7620dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7620ee;}}
}
B7620df:L7620df:{c.instructions+=2;NFSU2_TR(0x7620df);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba4a4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7620e5:{NFSU2_TR(0x7620e5);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830dc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7620ebull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7620eb:L7620eb:{c.instructions+=2;NFSU2_TR(0x7620eb);
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
B7620ed:{NFSU2_TR(0x7620ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7620ee:L7620ee:{c.instructions+=3;NFSU2_TR(0x7620ee);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7620f0:{NFSU2_TR(0x7620f0);
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
B7620f1:{NFSU2_TR(0x7620f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7620f2:L7620f2:{c.instructions+=5;NFSU2_TR(0x7620f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7620f3:{NFSU2_TR(0x7620f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7620f7:{NFSU2_TR(0x7620f7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B7620fa:{NFSU2_TR(0x7620fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7620fb:{NFSU2_TR(0x7620fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762100ull));
TAIL_STATIC(0x75ded8u,75d);
}
B762100:L762100:{c.instructions+=2;NFSU2_TR(0x762100);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x65ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x65ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B762103:{NFSU2_TR(0x762103);
{goto L762111;}
}
B762105:L762105:{c.instructions+=4;NFSU2_TR(0x762105);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B762106:{NFSU2_TR(0x762106);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B762109:{NFSU2_TR(0x762109);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76210a:{NFSU2_TR(0x76210a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76210full));
TAIL_STATIC(0x75df39u,75d);
}
B76210f:L76210f:{c.instructions+=1;NFSU2_TR(0x76210f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B762111:L762111:{c.instructions+=2;NFSU2_TR(0x762111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762112:{NFSU2_TR(0x762112);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762105u);}goto L762105;}}
}
B762114:L762114:{c.instructions+=4;NFSU2_TR(0x762114);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B762116:{NFSU2_TR(0x762116);
__builtin_memmove((R+4),gp(0x81aa54),1);
}
B76211c:{NFSU2_TR(0x76211c);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B76211e:{NFSU2_TR(0x76211e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76211f:L76211f:{c.instructions+=7;NFSU2_TR(0x76211f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B762121:{NFSU2_TR(0x762121);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B762123:{NFSU2_TR(0x762123);
__builtin_memmove((R+0),(R+4),1);
}
B762125:{NFSU2_TR(0x762125);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B762127:{NFSU2_TR(0x762127);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B762128:{NFSU2_TR(0x762128);
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
B76212a:{NFSU2_TR(0x76212a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76211fu);}goto L76211f;}}
}
B76212c:L76212c:{c.instructions+=2;NFSU2_TR(0x76212c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76212d:{NFSU2_TR(0x76212d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76212e:L76212e:{c.instructions+=4;NFSU2_TR(0x76212e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762132:{NFSU2_TR(0x762132);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762133:{NFSU2_TR(0x762133);
__builtin_memmove((R+12),gp(0x81aa54),1);
}
B762139:{NFSU2_TR(0x762139);
{goto L762140;}
}
B76213b:L76213b:{c.instructions+=2;NFSU2_TR(0x76213b);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76213d:{NFSU2_TR(0x76213d);
if(r1(R+518)){{goto L762146;}}
}
B76213f:L76213f:{c.instructions+=1;NFSU2_TR(0x76213f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B762140:L762140:{c.instructions+=3;NFSU2_TR(0x762140);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B762142:{NFSU2_TR(0x762142);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B762144:{NFSU2_TR(0x762144);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76213bu);}goto L76213b;}}
}
B762146:L762146:{c.instructions+=4;NFSU2_TR(0x762146);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B762148:{NFSU2_TR(0x762148);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B762149:{NFSU2_TR(0x762149);
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
B76214b:{NFSU2_TR(0x76214b);
if(r1(R+518)){{goto L762177;}}
}
B76214d:L76214d:{c.instructions+=1;NFSU2_TR(0x76214d);
{goto L76215a;}
}
B76214f:L76214f:{c.instructions+=2;NFSU2_TR(0x76214f);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x65ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B762152:{NFSU2_TR(0x762152);
if(r1(R+518)){{goto L762160;}}
}
B762154:L762154:{c.instructions+=2;NFSU2_TR(0x762154);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x45ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B762157:{NFSU2_TR(0x762157);
if(r1(R+518)){{goto L762160;}}
}
B762159:L762159:{c.instructions+=1;NFSU2_TR(0x762159);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76215a:L76215a:{c.instructions+=3;NFSU2_TR(0x76215a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B76215c:{NFSU2_TR(0x76215c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76215e:{NFSU2_TR(0x76215e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76214fu);}goto L76214f;}}
}
B762160:L762160:{c.instructions+=1;NFSU2_TR(0x762160);
__builtin_memmove((R+8),(R+0),4);
}
B762162:L762162:{c.instructions+=3;NFSU2_TR(0x762162);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B762163:{NFSU2_TR(0x762163);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B762166:{NFSU2_TR(0x762166);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762162u);}goto L762162;}}
}
B762168:L762168:{c.instructions+=2;NFSU2_TR(0x762168);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76216a:{NFSU2_TR(0x76216a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76216d;}}
}
B76216c:L76216c:{c.instructions+=1;NFSU2_TR(0x76216c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76216d:L76216d:{c.instructions+=6;NFSU2_TR(0x76216d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B76216f:{NFSU2_TR(0x76216f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B762170:{NFSU2_TR(0x762170);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B762171:{NFSU2_TR(0x762171);
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
B762173:{NFSU2_TR(0x762173);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B762175:{NFSU2_TR(0x762175);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76216du);}goto L76216d;}}
}
B762177:L762177:{c.instructions+=2;NFSU2_TR(0x762177);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B762178:{NFSU2_TR(0x762178);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762179:L762179:{c.instructions+=6;NFSU2_TR(0x762179);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76217d:{NFSU2_TR(0x76217d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76217f:{NFSU2_TR(0x76217f);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B762185:{NFSU2_TR(0x762185);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B762187:{NFSU2_TR(0x762187);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76218a:{NFSU2_TR(0x76218a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762190;}}
}
B76218c:L76218c:{c.instructions+=3;NFSU2_TR(0x76218c);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76218e:{NFSU2_TR(0x76218e);
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
B76218f:{NFSU2_TR(0x76218f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762190:L762190:{c.instructions+=2;NFSU2_TR(0x762190);
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
B762192:{NFSU2_TR(0x762192);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762193:L762193:{c.instructions+=7;NFSU2_TR(0x762193);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762194:{NFSU2_TR(0x762194);
__builtin_memmove((R+20),(R+16),4);
}
B762196:{NFSU2_TR(0x762196);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762197:{NFSU2_TR(0x762197);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762198:{NFSU2_TR(0x762198);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76219c:{NFSU2_TR(0x76219c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76219f:{NFSU2_TR(0x76219f);
if(r1(R+518)){{goto L7621bc;}}
}
B7621a1:L7621a1:{c.instructions+=3;NFSU2_TR(0x7621a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7621a4:{NFSU2_TR(0x7621a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7621a5:{NFSU2_TR(0x7621a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7621aaull));
TAIL_STATIC(0x76c765u,76c);
}
B7621aa:L7621aa:{c.instructions+=9;NFSU2_TR(0x7621aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7621ad:{NFSU2_TR(0x7621ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7621ae:{NFSU2_TR(0x7621ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7621af:{NFSU2_TR(0x7621af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7621b2:{NFSU2_TR(0x7621b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7621b4:{NFSU2_TR(0x7621b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7621b7:{NFSU2_TR(0x7621b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7621ba:{NFSU2_TR(0x7621ba);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7621bb:{NFSU2_TR(0x7621bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7621bc:L7621bc:{c.instructions+=3;NFSU2_TR(0x7621bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7621bf:{NFSU2_TR(0x7621bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7621c0:{NFSU2_TR(0x7621c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7621c5ull));
TAIL_STATIC(0x76c7a8u,76c);
}
B7621c5:L7621c5:{c.instructions+=7;NFSU2_TR(0x7621c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7621c8:{NFSU2_TR(0x7621c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7621c9:{NFSU2_TR(0x7621c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7621ca:{NFSU2_TR(0x7621ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7621cd:{NFSU2_TR(0x7621cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7621cf:{NFSU2_TR(0x7621cf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7621d0:{NFSU2_TR(0x7621d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7621d1:L7621d1:{c.instructions+=4;NFSU2_TR(0x7621d1);
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
B7621d3:{NFSU2_TR(0x7621d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7621d4:{NFSU2_TR(0x7621d4);
__builtin_memmove((R+24),(R+0),4);
}
B7621d6:{NFSU2_TR(0x7621d6);
if(r1(R+518)){{goto L7621ec;}}
}
B7621d8:L7621d8:{c.instructions+=2;NFSU2_TR(0x7621d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7621d9:{NFSU2_TR(0x7621d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7621deull));
TAIL_STATIC(0x766bc0u,766);
}
B7621de:L7621de:{c.instructions+=6;NFSU2_TR(0x7621de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7621df:{NFSU2_TR(0x7621df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7621e0:{NFSU2_TR(0x7621e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7621e1:{NFSU2_TR(0x7621e1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7621e3:{NFSU2_TR(0x7621e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7621e4:{NFSU2_TR(0x7621e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7621e9ull));
TAIL_STATIC(0x75cfd0u,75c);
}
B7621e9:L7621e9:{c.instructions+=1;NFSU2_TR(0x7621e9);
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
B7621ec:L7621ec:{c.instructions+=2;NFSU2_TR(0x7621ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7621ed:{NFSU2_TR(0x7621ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7621ee:L7621ee:{c.instructions+=6;NFSU2_TR(0x7621ee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7621ef:{NFSU2_TR(0x7621ef);
__builtin_memmove((R+20),(R+16),4);
}
B7621f1:{NFSU2_TR(0x7621f1);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7621f5:{NFSU2_TR(0x7621f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7621f6:{NFSU2_TR(0x7621f6);
__builtin_memmove((R+24),(R+0),4);
}
B7621f8:{NFSU2_TR(0x7621f8);
if(r1(R+518)){{goto L762217;}}
}
B7621fa:L7621fa:{c.instructions+=11;NFSU2_TR(0x7621fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7621fc:{NFSU2_TR(0x7621fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7621ff:{NFSU2_TR(0x7621ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762200:{NFSU2_TR(0x762200);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B762203:{NFSU2_TR(0x762203);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B762205:{NFSU2_TR(0x762205);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2dull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B762208:{NFSU2_TR(0x762208);
__builtin_memmove((R+4),(R+518),1);
}
B76220b:{NFSU2_TR(0x76220b);
__builtin_memmove((R+28),(R+0),4);
}
B76220d:{NFSU2_TR(0x76220d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B76220f:{NFSU2_TR(0x76220f);
__builtin_memmove((R+0),(R+4),4);
}
B762211:{NFSU2_TR(0x762211);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762216ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7621d1u);}goto L7621d1;}
}
B762216:L762216:{c.instructions+=1;NFSU2_TR(0x762216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B762217:L762217:{c.instructions+=3;NFSU2_TR(0x762217);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2dull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76221a:{NFSU2_TR(0x76221a);
__builtin_memmove((R+0),(R+12),4);
}
B76221c:{NFSU2_TR(0x76221c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762224;}}
}
B76221e:L76221e:{c.instructions+=2;NFSU2_TR(0x76221e);
u8 U[1];
w1(U+0,u8(0x2dull));
s1(u32(r4(R+12)),r1(U+0));
}
B762221:{NFSU2_TR(0x762221);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B762224:L762224:{c.instructions+=2;NFSU2_TR(0x762224);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762228:{NFSU2_TR(0x762228);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76223b;}}
}
B76222a:L76222a:{c.instructions+=6;NFSU2_TR(0x76222a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76222d:{NFSU2_TR(0x76222d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B76222f:{NFSU2_TR(0x76222f);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B762231:{NFSU2_TR(0x762231);
__builtin_memmove((R+0),(R+4),4);
}
B762233:{NFSU2_TR(0x762233);
__builtin_memmove((R+4),gp(0x81aa54),1);
}
B762239:{NFSU2_TR(0x762239);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B76223b:L76223b:{c.instructions+=8;NFSU2_TR(0x76223b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76223d:{NFSU2_TR(0x76223d);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B762240:{NFSU2_TR(0x762240);
u8 U[4];
w4(U+0,u32(0x7d41c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762245:{NFSU2_TR(0x762245);
__builtin_memmove((R+4),(R+518),1);
}
B762248:{NFSU2_TR(0x762248);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B76224a:{NFSU2_TR(0x76224a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B76224d:{NFSU2_TR(0x76224d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76224e:{NFSU2_TR(0x76224e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762253ull));
TAIL_STATIC(0x766ac0u,766);
}
B762253:L762253:{c.instructions+=5;NFSU2_TR(0x762253);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762257:{NFSU2_TR(0x762257);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762258:{NFSU2_TR(0x762258);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762259:{NFSU2_TR(0x762259);
__builtin_memmove((R+4),(R+0),4);
}
B76225b:{NFSU2_TR(0x76225b);
if(r1(R+518)){{goto L762260;}}
}
B76225d:L76225d:{c.instructions+=1;NFSU2_TR(0x76225d);
u8 U[1];
w1(U+0,u8(0x45ull));
s1(u32(r4(R+4)),r1(U+0));
}
B762260:L762260:{c.instructions+=4;NFSU2_TR(0x762260);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762263:{NFSU2_TR(0x762263);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B762264:{NFSU2_TR(0x762264);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x30ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x30ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B762267:{NFSU2_TR(0x762267);
if(r1(R+518)){{goto L762297;}}
}
B762269:L762269:{c.instructions+=3;NFSU2_TR(0x762269);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76226c:{NFSU2_TR(0x76226c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B76226d:{NFSU2_TR(0x76226d);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L762274;}}
}
B76226f:L76226f:{c.instructions+=2;NFSU2_TR(0x76226f);
w4(R+0,u32(0-u32(r4(R+0))));
}
B762271:{NFSU2_TR(0x762271);
u8 U[1];
w1(U+0,u8(0x2dull));
s1(u32(r4(R+4)),r1(U+0));
}
B762274:L762274:{c.instructions+=3;NFSU2_TR(0x762274);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B762275:{NFSU2_TR(0x762275);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B762278:{NFSU2_TR(0x762278);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L762284;}}
}
B76227a:L76227a:{c.instructions+=6;NFSU2_TR(0x76227a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76227b:{NFSU2_TR(0x76227b);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76227d:{NFSU2_TR(0x76227d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76227e:{NFSU2_TR(0x76227e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76227e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76227e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B762280:{NFSU2_TR(0x762280);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+4)),r1(U+0));
}
B762282:{NFSU2_TR(0x762282);
__builtin_memmove((R+0),(R+8),4);
}
B762284:L762284:{c.instructions+=3;NFSU2_TR(0x762284);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B762285:{NFSU2_TR(0x762285);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B762288:{NFSU2_TR(0x762288);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L762294;}}
}
B76228a:L76228a:{c.instructions+=6;NFSU2_TR(0x76228a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76228b:{NFSU2_TR(0x76228b);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76228d:{NFSU2_TR(0x76228d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76228e:{NFSU2_TR(0x76228e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76228e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76228e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B762290:{NFSU2_TR(0x762290);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+4)),r1(U+0));
}
B762292:{NFSU2_TR(0x762292);
__builtin_memmove((R+0),(R+8),4);
}
B762294:L762294:{c.instructions+=1;NFSU2_TR(0x762294);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+512,carry<u8>(r1(U+4),r1(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+523,scarry<u8>(r1(U+4),r1(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(r1(R+0))));
s1(u32(r4(U+0)),r1(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B762297:L762297:{c.instructions+=4;NFSU2_TR(0x762297);
__builtin_memmove((R+0),(R+12),4);
}
B762299:{NFSU2_TR(0x762299);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76229a:{NFSU2_TR(0x76229a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76229b:{NFSU2_TR(0x76229b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76229c:L76229c:{c.instructions+=16;NFSU2_TR(0x76229c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76229d:{NFSU2_TR(0x76229d);
__builtin_memmove((R+20),(R+16),4);
}
B76229f:{NFSU2_TR(0x76229f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B7622a2:{NFSU2_TR(0x7622a2);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7622a7:{NFSU2_TR(0x7622a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B7622aa:{NFSU2_TR(0x7622aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7622ab:{NFSU2_TR(0x7622ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7622ae:{NFSU2_TR(0x7622ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7622af:{NFSU2_TR(0x7622af);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7622b2:{NFSU2_TR(0x7622b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7622b3:{NFSU2_TR(0x7622b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B7622b6:{NFSU2_TR(0x7622b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7622b7:{NFSU2_TR(0x7622b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7622ba:{NFSU2_TR(0x7622ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7622bd:{NFSU2_TR(0x7622bd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B7622bf:{NFSU2_TR(0x7622bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7622c4ull));
TAIL_STATIC(0x76c91cu,76c);
}
B7622c4:L7622c4:{c.instructions+=17;NFSU2_TR(0x7622c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7622c7:{NFSU2_TR(0x7622c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7622ca:{NFSU2_TR(0x7622ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B7622cd:{NFSU2_TR(0x7622cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7622ce:{NFSU2_TR(0x7622ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7622d1:{NFSU2_TR(0x7622d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7622d2:{NFSU2_TR(0x7622d2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7622d4:{NFSU2_TR(0x7622d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2dull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7622d8:{NFSU2_TR(0x7622d8);
__builtin_memmove((R+8),(R+12),4);
}
B7622da:{NFSU2_TR(0x7622da);
__builtin_memmove((R+0),(R+518),1);
}
B7622dd:{NFSU2_TR(0x7622dd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7622df:{NFSU2_TR(0x7622df);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7622e1:{NFSU2_TR(0x7622e1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+4),(U+2),1);
}
B7622e4:{NFSU2_TR(0x7622e4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B7622e6:{NFSU2_TR(0x7622e6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7622e8:{NFSU2_TR(0x7622e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7622e9:{NFSU2_TR(0x7622e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7622eeull));
TAIL_STATIC(0x76c7ebu,76c);
}
B7622ee:L7622ee:{c.instructions+=5;NFSU2_TR(0x7622ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7622f0:{NFSU2_TR(0x7622f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7622f3:{NFSU2_TR(0x7622f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B7622f6:{NFSU2_TR(0x7622f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7622f7:{NFSU2_TR(0x7622f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7622fcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7621eeu);}goto L7621ee;}
}
B7622fc:L7622fc:{c.instructions+=7;NFSU2_TR(0x7622fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7622ff:{NFSU2_TR(0x7622ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B762302:{NFSU2_TR(0x762302);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B762305:{NFSU2_TR(0x762305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B762306:{NFSU2_TR(0x762306);
__builtin_memmove((R+0),(R+12),4);
}
B762308:{NFSU2_TR(0x762308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B762309:{NFSU2_TR(0x762309);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76230eull));
TAIL_STATIC(0x76115eu,761);
}
B76230e:L76230e:{c.instructions+=2;NFSU2_TR(0x76230e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76230f:{NFSU2_TR(0x76230f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762310:L762310:{c.instructions+=10;NFSU2_TR(0x762310);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762311:{NFSU2_TR(0x762311);
__builtin_memmove((R+20),(R+16),4);
}
B762313:{NFSU2_TR(0x762313);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762314:{NFSU2_TR(0x762314);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762315:{NFSU2_TR(0x762315);
__builtin_memmove((R+24),(R+0),4);
}
B762317:{NFSU2_TR(0x762317);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76231a:{NFSU2_TR(0x76231a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76231b:{NFSU2_TR(0x76231b);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B76231f:{NFSU2_TR(0x76231f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762320:{NFSU2_TR(0x762320);
if(r1(R+518)){{goto L76233d;}}
}
B762322:L762322:{c.instructions+=2;NFSU2_TR(0x762322);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762325:{NFSU2_TR(0x762325);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76233d;}}
}
B762327:L762327:{c.instructions+=8;NFSU2_TR(0x762327);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B762329:{NFSU2_TR(0x762329);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2dull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76232c:{NFSU2_TR(0x76232c);
__builtin_memmove((R+4),(R+518),1);
}
B76232f:{NFSU2_TR(0x76232f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B762331:{NFSU2_TR(0x762331);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B762334:{NFSU2_TR(0x762334);
__builtin_memmove((R+0),(R+4),4);
}
B762336:{NFSU2_TR(0x762336);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(R+0)),r1(U+0));
}
B762339:{NFSU2_TR(0x762339);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76233d:L76233d:{c.instructions+=3;NFSU2_TR(0x76233d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2dull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B762340:{NFSU2_TR(0x762340);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B762343:{NFSU2_TR(0x762343);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762349;}}
}
B762345:L762345:{c.instructions+=2;NFSU2_TR(0x762345);
u8 U[1];
w1(U+0,u8(0x2dull));
s1(u32(r4(R+12)),r1(U+0));
}
B762348:{NFSU2_TR(0x762348);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B762349:L762349:{c.instructions+=5;NFSU2_TR(0x762349);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76234c:{NFSU2_TR(0x76234c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76234e:{NFSU2_TR(0x76234e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76234f:{NFSU2_TR(0x76234f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B762351:{NFSU2_TR(0x762351);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L762360;}}
}
B762353:L762353:{c.instructions+=2;NFSU2_TR(0x762353);
__builtin_memmove((R+0),(R+12),4);
}
B762355:{NFSU2_TR(0x762355);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76235aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7621d1u);}goto L7621d1;}
}
B76235a:L76235a:{c.instructions+=3;NFSU2_TR(0x76235a);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(R+12)),r1(U+0));
}
B76235d:{NFSU2_TR(0x76235d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76235e:{NFSU2_TR(0x76235e);
{goto L762362;}
}
B762360:L762360:{c.instructions+=1;NFSU2_TR(0x762360);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B762362:L762362:{c.instructions+=2;NFSU2_TR(0x762362);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B762366:{NFSU2_TR(0x762366);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7623a4;}}
}
B762368:L762368:{c.instructions+=2;NFSU2_TR(0x762368);
__builtin_memmove((R+0),(R+12),4);
}
B76236a:{NFSU2_TR(0x76236a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76236full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7621d1u);}goto L7621d1;}
}
B76236f:L76236f:{c.instructions+=6;NFSU2_TR(0x76236f);
__builtin_memmove((R+0),gp(0x81aa54),1);
}
B762374:{NFSU2_TR(0x762374);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+12)),r1(U+0));
}
B762376:{NFSU2_TR(0x762376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762379:{NFSU2_TR(0x762379);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76237a:{NFSU2_TR(0x76237a);
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
B76237c:{NFSU2_TR(0x76237c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7623a4;}}
}
B76237e:L76237e:{c.instructions+=3;NFSU2_TR(0x76237e);
w4(R+24,u32(0-u32(r4(R+24))));
}
B762380:{NFSU2_TR(0x762380);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B762384:{NFSU2_TR(0x762384);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76238b;}}
}
B762386:L762386:{c.instructions+=2;NFSU2_TR(0x762386);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B762389:{NFSU2_TR(0x762389);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76238e;}}
}
B76238b:L76238b:{c.instructions+=1;NFSU2_TR(0x76238b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76238e:L76238e:{c.instructions+=3;NFSU2_TR(0x76238e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B762391:{NFSU2_TR(0x762391);
__builtin_memmove((R+0),(R+12),4);
}
B762393:{NFSU2_TR(0x762393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762398ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7621d1u);}goto L7621d1;}
}
B762398:L762398:{c.instructions+=4;NFSU2_TR(0x762398);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762399:{NFSU2_TR(0x762399);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76239b:{NFSU2_TR(0x76239b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76239c:{NFSU2_TR(0x76239c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7623a1ull));
TAIL_STATIC(0x768890u,768);
}
B7623a1:L7623a1:{c.instructions+=1;NFSU2_TR(0x7623a1);
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
B7623a4:L7623a4:{c.instructions+=6;NFSU2_TR(0x7623a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7623a7:{NFSU2_TR(0x7623a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7623a8:{NFSU2_TR(0x7623a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7623a9:{NFSU2_TR(0x7623a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7623aa:{NFSU2_TR(0x7623aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7623ab:{NFSU2_TR(0x7623ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7623ac:L7623ac:{c.instructions+=15;NFSU2_TR(0x7623ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7623ad:{NFSU2_TR(0x7623ad);
__builtin_memmove((R+20),(R+16),4);
}
B7623af:{NFSU2_TR(0x7623af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B7623b2:{NFSU2_TR(0x7623b2);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7623b7:{NFSU2_TR(0x7623b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B7623ba:{NFSU2_TR(0x7623ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7623bb:{NFSU2_TR(0x7623bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7623be:{NFSU2_TR(0x7623be);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7623c1:{NFSU2_TR(0x7623c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7623c2:{NFSU2_TR(0x7623c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B7623c5:{NFSU2_TR(0x7623c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7623c6:{NFSU2_TR(0x7623c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7623c9:{NFSU2_TR(0x7623c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7623cc:{NFSU2_TR(0x7623cc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B7623ce:{NFSU2_TR(0x7623ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7623d3ull));
TAIL_STATIC(0x76c91cu,76c);
}
B7623d3:L7623d3:{c.instructions+=12;NFSU2_TR(0x7623d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7623d6:{NFSU2_TR(0x7623d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B7623d9:{NFSU2_TR(0x7623d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7623da:{NFSU2_TR(0x7623da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7623dd:{NFSU2_TR(0x7623dd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B7623df:{NFSU2_TR(0x7623df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7623e0:{NFSU2_TR(0x7623e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7623e2:{NFSU2_TR(0x7623e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2dull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7623e6:{NFSU2_TR(0x7623e6);
__builtin_memmove((R+0),(R+518),1);
}
B7623e9:{NFSU2_TR(0x7623e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7623ec:{NFSU2_TR(0x7623ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7623ed:{NFSU2_TR(0x7623ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7623f2ull));
TAIL_STATIC(0x76c7ebu,76c);
}
B7623f2:L7623f2:{c.instructions+=5;NFSU2_TR(0x7623f2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7623f4:{NFSU2_TR(0x7623f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7623f5:{NFSU2_TR(0x7623f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7623f8:{NFSU2_TR(0x7623f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B7623fb:{NFSU2_TR(0x7623fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762400ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762310u);}goto L762310;}
}
B762400:L762400:{c.instructions+=6;NFSU2_TR(0x762400);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762403:{NFSU2_TR(0x762403);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B762406:{NFSU2_TR(0x762406);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762409:{NFSU2_TR(0x762409);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B76240c:{NFSU2_TR(0x76240c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76240d:{NFSU2_TR(0x76240d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762412ull));
TAIL_STATIC(0x76115eu,761);
}
B762412:L762412:{c.instructions+=2;NFSU2_TR(0x762412);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B762413:{NFSU2_TR(0x762413);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762414:L762414:{c.instructions+=17;NFSU2_TR(0x762414);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762415:{NFSU2_TR(0x762415);
__builtin_memmove((R+20),(R+16),4);
}
B762417:{NFSU2_TR(0x762417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B76241a:{NFSU2_TR(0x76241a);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76241f:{NFSU2_TR(0x76241f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B762422:{NFSU2_TR(0x762422);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762423:{NFSU2_TR(0x762423);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762424:{NFSU2_TR(0x762424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762427:{NFSU2_TR(0x762427);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762428:{NFSU2_TR(0x762428);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76242b:{NFSU2_TR(0x76242b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76242c:{NFSU2_TR(0x76242c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B76242f:{NFSU2_TR(0x76242f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762430:{NFSU2_TR(0x762430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762433:{NFSU2_TR(0x762433);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762436:{NFSU2_TR(0x762436);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B762438:{NFSU2_TR(0x762438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76243dull));
TAIL_STATIC(0x76c91cu,76c);
}
B76243d:L76243d:{c.instructions+=13;NFSU2_TR(0x76243d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762440:{NFSU2_TR(0x762440);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B762443:{NFSU2_TR(0x762443);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B762445:{NFSU2_TR(0x762445);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B762446:{NFSU2_TR(0x762446);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2dull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76244a:{NFSU2_TR(0x76244a);
__builtin_memmove((R+0),(R+518),1);
}
B76244d:{NFSU2_TR(0x76244d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B762450:{NFSU2_TR(0x762450);
__builtin_memmove((R+28),(R+0),4);
}
B762452:{NFSU2_TR(0x762452);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B762455:{NFSU2_TR(0x762455);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762456:{NFSU2_TR(0x762456);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762457:{NFSU2_TR(0x762457);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762458:{NFSU2_TR(0x762458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76245dull));
TAIL_STATIC(0x76c7ebu,76c);
}
B76245d:L76245d:{c.instructions+=7;NFSU2_TR(0x76245d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762460:{NFSU2_TR(0x762460);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B762463:{NFSU2_TR(0x762463);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B762464:{NFSU2_TR(0x762464);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B762466:{NFSU2_TR(0x762466);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B762469:{NFSU2_TR(0x762469);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfffffffcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76246c:{NFSU2_TR(0x76246c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L762490;}}
}
B76246e:L76246e:{c.instructions+=2;NFSU2_TR(0x76246e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B762470:{NFSU2_TR(0x762470);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L762490;}}
}
B762472:L762472:{c.instructions+=2;NFSU2_TR(0x762472);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B762474:{NFSU2_TR(0x762474);
if(r1(R+518)){{goto L762480;}}
}
B762476:L762476:{c.instructions+=4;NFSU2_TR(0x762476);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B762478:{NFSU2_TR(0x762478);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B762479:{NFSU2_TR(0x762479);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76247b:{NFSU2_TR(0x76247b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762476u);}goto L762476;}}
}
B76247d:L76247d:{c.instructions+=1;NFSU2_TR(0x76247d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(r1(R+0))));
s1(u32(r4(U+0)),r1(U+4));
}
B762480:L762480:{c.instructions+=5;NFSU2_TR(0x762480);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762482:{NFSU2_TR(0x762482);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762483:{NFSU2_TR(0x762483);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762486:{NFSU2_TR(0x762486);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B762489:{NFSU2_TR(0x762489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76248eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762310u);}goto L762310;}
}
B76248e:L76248e:{c.instructions+=1;NFSU2_TR(0x76248e);
{goto L7624a1;}
}
B762490:L762490:{c.instructions+=6;NFSU2_TR(0x762490);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762492:{NFSU2_TR(0x762492);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762495:{NFSU2_TR(0x762495);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B762498:{NFSU2_TR(0x762498);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762499:{NFSU2_TR(0x762499);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76249c:{NFSU2_TR(0x76249c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7624a1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7621eeu);}goto L7621ee;}
}
B7624a1:L7624a1:{c.instructions+=7;NFSU2_TR(0x7624a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7624a4:{NFSU2_TR(0x7624a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B7624a7:{NFSU2_TR(0x7624a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7624aa:{NFSU2_TR(0x7624aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7624ab:{NFSU2_TR(0x7624ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7624ac:{NFSU2_TR(0x7624ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7624ad:{NFSU2_TR(0x7624ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7624b2ull));
TAIL_STATIC(0x76115eu,761);
}
B7624b2:L7624b2:{c.instructions+=2;NFSU2_TR(0x7624b2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7624b3:{NFSU2_TR(0x7624b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7624b4:L7624b4:{c.instructions+=4;NFSU2_TR(0x7624b4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7624b5:{NFSU2_TR(0x7624b5);
__builtin_memmove((R+20),(R+16),4);
}
B7624b7:{NFSU2_TR(0x7624b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x65ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7624bb:{NFSU2_TR(0x7624bb);
if(r1(R+518)){{goto L7624ef;}}
}
B7624bd:L7624bd:{c.instructions+=2;NFSU2_TR(0x7624bd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x45ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7624c1:{NFSU2_TR(0x7624c1);
if(r1(R+518)){{goto L7624ef;}}
}
B7624c3:L7624c3:{c.instructions+=2;NFSU2_TR(0x7624c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x66ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7624c7:{NFSU2_TR(0x7624c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7624dc;}}
}
B7624c9:L7624c9:{c.instructions+=4;NFSU2_TR(0x7624c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7624cc:{NFSU2_TR(0x7624cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7624cf:{NFSU2_TR(0x7624cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7624d2:{NFSU2_TR(0x7624d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7624d7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7623acu);}goto L7623ac;}
}
B7624d7:L7624d7:{c.instructions+=3;NFSU2_TR(0x7624d7);
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
B7624da:{NFSU2_TR(0x7624da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7624db:{NFSU2_TR(0x7624db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7624dc:L7624dc:{c.instructions+=5;NFSU2_TR(0x7624dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7624df:{NFSU2_TR(0x7624df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7624e2:{NFSU2_TR(0x7624e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7624e5:{NFSU2_TR(0x7624e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7624e8:{NFSU2_TR(0x7624e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7624edull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762414u);}goto L762414;}
}
B7624ed:L7624ed:{c.instructions+=1;NFSU2_TR(0x7624ed);
{goto L762500;}
}
B7624ef:L7624ef:{c.instructions+=5;NFSU2_TR(0x7624ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7624f2:{NFSU2_TR(0x7624f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7624f5:{NFSU2_TR(0x7624f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7624f8:{NFSU2_TR(0x7624f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7624fb:{NFSU2_TR(0x7624fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762500ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76229cu);}goto L76229c;}
}
B762500:L762500:{c.instructions+=3;NFSU2_TR(0x762500);
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
B762503:{NFSU2_TR(0x762503);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B762504:{NFSU2_TR(0x762504);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762505:L762505:{c.instructions+=3;NFSU2_TR(0x762505);
u8 U[4];
w4(U+0,u32(0x30000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76250a:{NFSU2_TR(0x76250a);
u8 U[4];
w4(U+0,u32(0x10000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76250f:{NFSU2_TR(0x76250f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762514ull));
TAIL_STATIC(0x75db6au,75d);
}
B762514:L762514:{c.instructions+=3;NFSU2_TR(0x762514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762515:{NFSU2_TR(0x762515);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762516:{NFSU2_TR(0x762516);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762517:L762517:{c.instructions+=17;NFSU2_TR(0x762517);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762518:{NFSU2_TR(0x762518);
__builtin_memmove((R+20),(R+16),4);
}
B76251a:{NFSU2_TR(0x76251a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B76251d:{NFSU2_TR(0x76251d);
{u32 ea_=u32(u32(8208848u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B762523:{NFSU2_TR(0x762523);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B762526:{NFSU2_TR(0x762526);
{u32 ea_=u32(u32(8208840u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76252c:{NFSU2_TR(0x76252c);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76252f:{NFSU2_TR(0x76252f);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B762532:{NFSU2_TR(0x762532);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdc,0x30"::"a"(ea_):"memory");}
}
B762535:{NFSU2_TR(0x762535);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B762538:{NFSU2_TR(0x762538);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdc,0x28"::"a"(ea_):"memory");}
}
B76253b:{NFSU2_TR(0x76253b);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76253e:{NFSU2_TR(0x76253e);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B762541:{NFSU2_TR(0x762541);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B762547:{NFSU2_TR(0x762547);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B762549:{NFSU2_TR(0x762549);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76254c:{NFSU2_TR(0x76254c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762553;}}
}
B76254e:L76254e:{c.instructions+=4;NFSU2_TR(0x76254e);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B762550:{NFSU2_TR(0x762550);
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
B762551:{NFSU2_TR(0x762551);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B762552:{NFSU2_TR(0x762552);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762553:L762553:{c.instructions+=3;NFSU2_TR(0x762553);
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
B762555:{NFSU2_TR(0x762555);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B762556:{NFSU2_TR(0x762556);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762557:L762557:{c.instructions+=2;NFSU2_TR(0x762557);
u8 U[4];
w4(U+0,u32(0x7d41f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76255c:{NFSU2_TR(0x76255c);
u8 U[4];
__builtin_memmove((U+0),gp(0x783138),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762562ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B762562:L762562:{c.instructions+=2;NFSU2_TR(0x762562);
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
B762564:{NFSU2_TR(0x762564);
if(r1(R+518)){{goto L76257b;}}
}
B762566:L762566:{c.instructions+=3;NFSU2_TR(0x762566);
u8 U[4];
w4(U+0,u32(0x7d41d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76256b:{NFSU2_TR(0x76256b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76256c:{NFSU2_TR(0x76256c);
u8 U[4];
__builtin_memmove((U+0),gp(0x783194),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762572ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B762572:L762572:{c.instructions+=2;NFSU2_TR(0x762572);
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
B762574:{NFSU2_TR(0x762574);
if(r1(R+518)){{goto L76257b;}}
}
B762576:L762576:{c.instructions+=2;NFSU2_TR(0x762576);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762578:{NFSU2_TR(0x762578);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76257aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76257a:L76257a:{c.instructions+=1;NFSU2_TR(0x76257a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76257b:L76257b:{c.instructions+=1;NFSU2_TR(0x76257b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762517u);}goto L762517;}
}
B762580:L762580:{c.instructions+=3;NFSU2_TR(0x762580);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762583:{NFSU2_TR(0x762583);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B762585:{NFSU2_TR(0x762585);
if(r1(R+518)){{goto L7625cb;}}
}
B762587:L762587:{c.instructions+=3;NFSU2_TR(0x762587);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76258a:{NFSU2_TR(0x76258a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76258d:{NFSU2_TR(0x76258d);
if(r1(R+518)){{goto L7625cb;}}
}
B76258f:L76258f:{c.instructions+=3;NFSU2_TR(0x76258f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762592:{NFSU2_TR(0x762592);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B762594:{NFSU2_TR(0x762594);
if(r1(R+518)){{goto L7625a6;}}
}
B762596:L762596:{c.instructions+=4;NFSU2_TR(0x762596);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B762599:{NFSU2_TR(0x762599);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76259a:{NFSU2_TR(0x76259a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76259b:{NFSU2_TR(0x76259b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7625a0ull));
TAIL_STATIC(0x766c50u,766);
}
B7625a0:L7625a0:{c.instructions+=4;NFSU2_TR(0x7625a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7625a2:{NFSU2_TR(0x7625a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7625a3:{NFSU2_TR(0x7625a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7625a4:{NFSU2_TR(0x7625a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7625c8;}}
}
B7625a6:L7625a6:{c.instructions+=2;NFSU2_TR(0x7625a6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7625a9:{NFSU2_TR(0x7625a9);
if(r1(R+518)){{goto L7625b0;}}
}
B7625ab:L7625ab:{c.instructions+=2;NFSU2_TR(0x7625ab);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7625ae:{NFSU2_TR(0x7625ae);
if(r1(R+518)){{goto L7625c8;}}
}
B7625b0:L7625b0:{c.instructions+=4;NFSU2_TR(0x7625b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7625b4:{NFSU2_TR(0x7625b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7625b6:{NFSU2_TR(0x7625b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7625b8:{NFSU2_TR(0x7625b8);
if(r1(R+518)){{goto L7625bf;}}
}
B7625ba:L7625ba:{c.instructions+=2;NFSU2_TR(0x7625ba);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7625bd:{NFSU2_TR(0x7625bd);
if(r1(R+518)){{goto L7625c8;}}
}
B7625bf:L7625bf:{c.instructions+=2;NFSU2_TR(0x7625bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7625c1:{NFSU2_TR(0x7625c1);
if(r1(R+518)){{goto L7625cb;}}
}
B7625c3:L7625c3:{c.instructions+=2;NFSU2_TR(0x7625c3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7625c6:{NFSU2_TR(0x7625c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7625cb;}}
}
B7625c8:L7625c8:{c.instructions+=2;NFSU2_TR(0x7625c8);
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
B7625ca:{NFSU2_TR(0x7625ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7625cb:L7625cb:{c.instructions+=3;NFSU2_TR(0x7625cb);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7625cd:{NFSU2_TR(0x7625cd);
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
B7625ce:{NFSU2_TR(0x7625ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7625cf:L7625cf:{c.instructions+=3;NFSU2_TR(0x7625cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7625d1:{NFSU2_TR(0x7625d1);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xe06d7363ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xe06d7363ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xe06d7363ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B7625d7:{NFSU2_TR(0x7625d7);
if(r1(R+518)){{goto L7625dc;}}
}
B7625d9:L7625d9:{c.instructions+=2;NFSU2_TR(0x7625d9);
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
B7625db:{NFSU2_TR(0x7625db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7625dc:L7625dc:{c.instructions+=1;NFSU2_TR(0x7625dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7625e1ull));
TAIL_STATIC(0x761e3cu,761);
}
B7625e1:L7625e1:{c.instructions+=2;NFSU2_TR(0x7625e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7625e8:{NFSU2_TR(0x7625e8);
{goto L762deb;}
}
B7625ed:L7625ed:{c.instructions+=3;NFSU2_TR(0x7625ed);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7625ef:{NFSU2_TR(0x7625ef);
u8 U[4];
w4(U+0,u32(0x7d4200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7625f4:{NFSU2_TR(0x7625f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7625f9ull));
TAIL_STATIC(0x760da0u,760);
}
B7625f9:L7625f9:{c.instructions+=4;NFSU2_TR(0x7625f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7625fc:{NFSU2_TR(0x7625fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7625ff:{NFSU2_TR(0x7625ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762602:{NFSU2_TR(0x762602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762607ull));
TAIL_STATIC(0x761e3cu,761);
}
B762607:L762607:{c.instructions+=4;NFSU2_TR(0x762607);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B76260c:{NFSU2_TR(0x76260c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B76260e:{NFSU2_TR(0x76260e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B762612:{NFSU2_TR(0x762612);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B762615:L762615:{c.instructions+=2;NFSU2_TR(0x762615);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762618:{NFSU2_TR(0x762618);
if(r1(R+518)){{goto L76267e;}}
}
B76261a:L76261a:{c.instructions+=2;NFSU2_TR(0x76261a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76261d:{NFSU2_TR(0x76261d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L762624;}}
}
B76261f:L76261f:{c.instructions+=2;NFSU2_TR(0x76261f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B762622:{NFSU2_TR(0x762622);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L762629;}}
}
B762624:L762624:{c.instructions+=1;NFSU2_TR(0x762624);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762629ull));
{goto L762e20;}
}
B762629:L762629:{c.instructions+=9;NFSU2_TR(0x762629);
__builtin_memmove((R+0),(R+24),4);
}
B76262b:{NFSU2_TR(0x76262b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B76262e:{NFSU2_TR(0x76262e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762631:{NFSU2_TR(0x762631);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B762633:{NFSU2_TR(0x762633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B762635:{NFSU2_TR(0x762635);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762638:{NFSU2_TR(0x762638);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76263f:{NFSU2_TR(0x76263f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762643:{NFSU2_TR(0x762643);
if(r1(R+518)){{goto L76265a;}}
}
B762645:L762645:{c.instructions+=6;NFSU2_TR(0x762645);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762648:{NFSU2_TR(0x762648);
u8 U[4];
w4(U+0,u32(0x103ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76264d:{NFSU2_TR(0x76264d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76264e:{NFSU2_TR(0x76264e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762651:{NFSU2_TR(0x762651);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B762655:{NFSU2_TR(0x762655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76265aull));
{goto L762e50;}
}
B76265a:L76265a:{c.instructions+=2;NFSU2_TR(0x76265a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76265e:{NFSU2_TR(0x76265e);
{goto L762679;}
}
B762660:L762660:{c.instructions+=2;NFSU2_TR(0x762660);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762663:{NFSU2_TR(0x762663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762668ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7625cfu);}goto L7625cf;}
}
B762668:L762668:{c.instructions+=1;NFSU2_TR(0x762668);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762669:L762669:{c.instructions+=5;NFSU2_TR(0x762669);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B76266c:{NFSU2_TR(0x76266c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B762670:{NFSU2_TR(0x762670);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B762673:{NFSU2_TR(0x762673);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B762676:{NFSU2_TR(0x762676);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762679:L762679:{c.instructions+=2;NFSU2_TR(0x762679);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76267c:{NFSU2_TR(0x76267c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762615u);}goto L762615;}
}
B76267e:L76267e:{c.instructions+=2;NFSU2_TR(0x76267e);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B762682:{NFSU2_TR(0x762682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762687ull));
{goto L7626a0;}
}
B762687:L762687:{c.instructions+=2;NFSU2_TR(0x762687);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76268a:{NFSU2_TR(0x76268a);
if(r1(R+518)){{goto L762691;}}
}
B76268c:L76268c:{c.instructions+=1;NFSU2_TR(0x76268c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762691ull));
{goto L762e20;}
}
B762691:L762691:{c.instructions+=2;NFSU2_TR(0x762691);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762694:{NFSU2_TR(0x762694);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762699ull));
TAIL_STATIC(0x760ddbu,760);
}
B762699:L762699:{c.instructions+=1;NFSU2_TR(0x762699);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76269a:L76269a:{c.instructions+=2;NFSU2_TR(0x76269a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76269d:{NFSU2_TR(0x76269d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7626a0:L7626a0:{c.instructions+=1;NFSU2_TR(0x7626a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7626a5ull));
TAIL_STATIC(0x761e3cu,761);
}
B7626a5:L7626a5:{c.instructions+=2;NFSU2_TR(0x7626a5);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
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
B7626ac:{NFSU2_TR(0x7626ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7626ba;}}
}
B7626ae:L7626ae:{c.instructions+=1;NFSU2_TR(0x7626ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7626b3ull));
TAIL_STATIC(0x761e3cu,761);
}
B7626b3:L7626b3:{c.instructions+=2;NFSU2_TR(0x7626b3);
w1(R+512,carry<u32>(r4(R+0),u32(0x80ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B7626b8:{NFSU2_TR(0x7626b8);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
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
B7626ba:L7626ba:{c.instructions+=1;NFSU2_TR(0x7626ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7626bb:L7626bb:{c.instructions+=3;NFSU2_TR(0x7626bb);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7626bd:{NFSU2_TR(0x7626bd);
u8 U[4];
w4(U+0,u32(0x7d4218ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7626c2:{NFSU2_TR(0x7626c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7626c7ull));
TAIL_STATIC(0x760da0u,760);
}
B7626c7:L7626c7:{c.instructions+=3;NFSU2_TR(0x7626c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7626ca:{NFSU2_TR(0x7626ca);
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
B7626cc:{NFSU2_TR(0x7626cc);
if(r1(R+518)){{goto L7626e9;}}
}
B7626ce:L7626ce:{c.instructions+=4;NFSU2_TR(0x7626ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7626d1:{NFSU2_TR(0x7626d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7626d4:{NFSU2_TR(0x7626d4);
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
B7626d6:{NFSU2_TR(0x7626d6);
if(r1(R+518)){{goto L7626e9;}}
}
B7626d8:L7626d8:{c.instructions+=4;NFSU2_TR(0x7626d8);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B7626dc:{NFSU2_TR(0x7626dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7626dd:{NFSU2_TR(0x7626dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7626e0:{NFSU2_TR(0x7626e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7626e5ull));
TAIL_STATIC(0x75bf79u,75b);
}
B7626e5:L7626e5:{c.instructions+=1;NFSU2_TR(0x7626e5);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B7626e9:L7626e9:{c.instructions+=1;NFSU2_TR(0x7626e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7626eeull));
TAIL_STATIC(0x760ddbu,760);
}
B7626ee:L7626ee:{c.instructions+=1;NFSU2_TR(0x7626ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7626ef:L7626ef:{c.instructions+=4;NFSU2_TR(0x7626ef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7626f1:{NFSU2_TR(0x7626f1);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+0)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B7626f4:{NFSU2_TR(0x7626f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B7626f7:{NFSU2_TR(0x7626f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7626f8:L7626f8:{c.instructions+=2;NFSU2_TR(0x7626f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B7626fb:{NFSU2_TR(0x7626fb);
{goto L762deb;}
}
B762700:L762700:{c.instructions+=7;NFSU2_TR(0x762700);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B762703:{NFSU2_TR(0x762703);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762704:{NFSU2_TR(0x762704);
__builtin_memmove((R+24),(R+0),4);
}
B762706:{NFSU2_TR(0x762706);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B762708:{NFSU2_TR(0x762708);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B76270a:{NFSU2_TR(0x76270a);
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
B76270c:{NFSU2_TR(0x76270c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76271b;}}
}
B76270e:L76270e:{c.instructions+=5;NFSU2_TR(0x76270e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762711:{NFSU2_TR(0x762711);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B762714:{NFSU2_TR(0x762714);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B762717:{NFSU2_TR(0x762717);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B762719:{NFSU2_TR(0x762719);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76271b:L76271b:{c.instructions+=2;NFSU2_TR(0x76271b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76271c:{NFSU2_TR(0x76271c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76271d:L76271d:{c.instructions+=3;NFSU2_TR(0x76271d);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76271f:{NFSU2_TR(0x76271f);
u8 U[4];
w4(U+0,u32(0x7d4228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762724:{NFSU2_TR(0x762724);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762729ull));
TAIL_STATIC(0x760da0u,760);
}
B762729:L762729:{c.instructions+=11;NFSU2_TR(0x762729);
__builtin_memmove((R+12),(R+4),4);
}
B76272b:{NFSU2_TR(0x76272b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76272e:{NFSU2_TR(0x76272e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762731:{NFSU2_TR(0x762731);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762734:{NFSU2_TR(0x762734);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
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
B762738:{NFSU2_TR(0x762738);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76273b:{NFSU2_TR(0x76273b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76273e:{NFSU2_TR(0x76273e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762741:{NFSU2_TR(0x762741);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B762744:{NFSU2_TR(0x762744);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762745:{NFSU2_TR(0x762745);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76274aull));
TAIL_STATIC(0x75c117u,75c);
}
B76274a:L76274a:{c.instructions+=4;NFSU2_TR(0x76274a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76274b:{NFSU2_TR(0x76274b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76274c:{NFSU2_TR(0x76274c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76274f:{NFSU2_TR(0x76274f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762754ull));
TAIL_STATIC(0x761e3cu,761);
}
B762754:L762754:{c.instructions+=3;NFSU2_TR(0x762754);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762757:{NFSU2_TR(0x762757);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76275a:{NFSU2_TR(0x76275a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76275full));
TAIL_STATIC(0x761e3cu,761);
}
B76275f:L76275f:{c.instructions+=3;NFSU2_TR(0x76275f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762762:{NFSU2_TR(0x762762);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762765:{NFSU2_TR(0x762765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76276aull));
TAIL_STATIC(0x761e3cu,761);
}
B76276a:L76276a:{c.instructions+=2;NFSU2_TR(0x76276a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76276d:{NFSU2_TR(0x76276d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762772ull));
TAIL_STATIC(0x761e3cu,761);
}
B762772:L762772:{c.instructions+=10;NFSU2_TR(0x762772);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762775:{NFSU2_TR(0x762775);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762778:{NFSU2_TR(0x762778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76277c:{NFSU2_TR(0x76277c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B762783:{NFSU2_TR(0x762783);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762786:{NFSU2_TR(0x762786);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762789:{NFSU2_TR(0x762789);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76278a:{NFSU2_TR(0x76278a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76278d:{NFSU2_TR(0x76278d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76278e:{NFSU2_TR(0x76278e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762793ull));
TAIL_STATIC(0x75c1acu,75c);
}
B762793:L762793:{c.instructions+=4;NFSU2_TR(0x762793);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B762796:{NFSU2_TR(0x762796);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762799:{NFSU2_TR(0x762799);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76279d:{NFSU2_TR(0x76279d);
{goto L762845;}
}
B7627a2:L7627a2:{c.instructions+=6;NFSU2_TR(0x7627a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7627a5:{NFSU2_TR(0x7627a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7627a7:{NFSU2_TR(0x7627a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7627aa:{NFSU2_TR(0x7627aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7627ad:{NFSU2_TR(0x7627ad);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xe06d7363ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xe06d7363ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xe06d7363ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B7627b3:{NFSU2_TR(0x7627b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7627da;}}
}
B7627b5:L7627b5:{c.instructions+=3;NFSU2_TR(0x7627b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7627b8:{NFSU2_TR(0x7627b8);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7627bc:{NFSU2_TR(0x7627bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7627da;}}
}
B7627be:L7627be:{c.instructions+=3;NFSU2_TR(0x7627be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7627c1:{NFSU2_TR(0x7627c1);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x19930520ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x19930520ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x19930520ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7627c8:{NFSU2_TR(0x7627c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7627da;}}
}
B7627ca:L7627ca:{c.instructions+=4;NFSU2_TR(0x7627ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7627cd:{NFSU2_TR(0x7627cd);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
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
B7627d1:{NFSU2_TR(0x7627d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7627d8:{NFSU2_TR(0x7627d8);
if(r1(R+518)){{goto L7627e1;}}
}
B7627da:L7627da:{c.instructions+=1;NFSU2_TR(0x7627da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7627e1:L7627e1:{c.instructions+=2;NFSU2_TR(0x7627e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7627e4:{NFSU2_TR(0x7627e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7627e5:L7627e5:{c.instructions+=10;NFSU2_TR(0x7627e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B7627e8:{NFSU2_TR(0x7627e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7627eb:{NFSU2_TR(0x7627eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7627ee:{NFSU2_TR(0x7627ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7627f1:{NFSU2_TR(0x7627f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7627f4:{NFSU2_TR(0x7627f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7627f7:{NFSU2_TR(0x7627f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7627fa:{NFSU2_TR(0x7627fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7627fd:{NFSU2_TR(0x7627fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762800:{NFSU2_TR(0x762800);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B762802:L762802:{c.instructions+=3;NFSU2_TR(0x762802);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762805:{NFSU2_TR(0x762805);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B762808:{NFSU2_TR(0x762808);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76282e;}}
}
B76280a:L76280a:{c.instructions+=6;NFSU2_TR(0x76280a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B76280d:{NFSU2_TR(0x76280d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B762810:{NFSU2_TR(0x762810);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B762813:{NFSU2_TR(0x762813);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B762816:{NFSU2_TR(0x762816);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B762818:{NFSU2_TR(0x762818);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L762857;}}
}
B76281a:L76281a:{c.instructions+=2;NFSU2_TR(0x76281a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76281d:{NFSU2_TR(0x76281d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L762857;}}
}
B76281f:L76281f:{c.instructions+=5;NFSU2_TR(0x76281f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B762822:{NFSU2_TR(0x762822);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762825:{NFSU2_TR(0x762825);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B762828:{NFSU2_TR(0x762828);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B76282b:{NFSU2_TR(0x76282b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76282e:L76282e:{c.instructions+=6;NFSU2_TR(0x76282e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76282f:{NFSU2_TR(0x76282f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762830:{NFSU2_TR(0x762830);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B762832:{NFSU2_TR(0x762832);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762833:{NFSU2_TR(0x762833);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762834:{NFSU2_TR(0x762834);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762839ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7625edu);}goto L7625ed;}
}
B762839:L762839:{c.instructions+=4;NFSU2_TR(0x762839);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B76283c:{NFSU2_TR(0x76283c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76283f:{NFSU2_TR(0x76283f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762842:{NFSU2_TR(0x762842);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762845:L762845:{c.instructions+=2;NFSU2_TR(0x762845);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B762849:{NFSU2_TR(0x762849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76284eull));
{goto L762860;}
}
B76284e:L76284e:{c.instructions+=2;NFSU2_TR(0x76284e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762851:{NFSU2_TR(0x762851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762856ull));
TAIL_STATIC(0x760ddbu,760);
}
B762856:L762856:{c.instructions+=1;NFSU2_TR(0x762856);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762857:L762857:{c.instructions+=2;NFSU2_TR(0x762857);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B762858:{NFSU2_TR(0x762858);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762802u);}goto L762802;}
}
B76285a:L76285a:{c.instructions+=2;NFSU2_TR(0x76285a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76285d:{NFSU2_TR(0x76285d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762860:L762860:{c.instructions+=4;NFSU2_TR(0x762860);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762863:{NFSU2_TR(0x762863);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762866:{NFSU2_TR(0x762866);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762869:{NFSU2_TR(0x762869);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76286eull));
TAIL_STATIC(0x75c160u,75c);
}
B76286e:L76286e:{c.instructions+=2;NFSU2_TR(0x76286e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76286f:{NFSU2_TR(0x76286f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762874ull));
TAIL_STATIC(0x761e3cu,761);
}
B762874:L762874:{c.instructions+=3;NFSU2_TR(0x762874);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762877:{NFSU2_TR(0x762877);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76287a:{NFSU2_TR(0x76287a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76287full));
TAIL_STATIC(0x761e3cu,761);
}
B76287f:L76287f:{c.instructions+=4;NFSU2_TR(0x76287f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762882:{NFSU2_TR(0x762882);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762885:{NFSU2_TR(0x762885);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xe06d7363ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xe06d7363ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xe06d7363ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B76288b:{NFSU2_TR(0x76288b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7628c3;}}
}
B76288d:L76288d:{c.instructions+=2;NFSU2_TR(0x76288d);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B762891:{NFSU2_TR(0x762891);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7628c3;}}
}
B762893:L762893:{c.instructions+=2;NFSU2_TR(0x762893);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x19930520ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x19930520ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x19930520ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76289a:{NFSU2_TR(0x76289a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7628c3;}}
}
B76289c:L76289c:{c.instructions+=2;NFSU2_TR(0x76289c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
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
B7628a0:{NFSU2_TR(0x7628a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7628c3;}}
}
B7628a2:L7628a2:{c.instructions+=2;NFSU2_TR(0x7628a2);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
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
B7628a6:{NFSU2_TR(0x7628a6);
if(r1(R+518)){{goto L7628c3;}}
}
B7628a8:L7628a8:{c.instructions+=2;NFSU2_TR(0x7628a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7628ab:{NFSU2_TR(0x7628ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7628b0ull));
TAIL_STATIC(0x75c13fu,75c);
}
B7628b0:L7628b0:{c.instructions+=3;NFSU2_TR(0x7628b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7628b1:{NFSU2_TR(0x7628b1);
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
B7628b3:{NFSU2_TR(0x7628b3);
if(r1(R+518)){{goto L7628c3;}}
}
B7628b5:L7628b5:{c.instructions+=1;NFSU2_TR(0x7628b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7628baull));
TAIL_STATIC(0x75c356u,75c);
}
B7628ba:L7628ba:{c.instructions+=3;NFSU2_TR(0x7628ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7628bb:{NFSU2_TR(0x7628bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7628bc:{NFSU2_TR(0x7628bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7628c1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7626bbu);}goto L7626bb;}
}
B7628c1:L7628c1:{c.instructions+=2;NFSU2_TR(0x7628c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7628c2:{NFSU2_TR(0x7628c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7628c3:L7628c3:{c.instructions+=1;NFSU2_TR(0x7628c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7628c4:L7628c4:{c.instructions+=3;NFSU2_TR(0x7628c4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7628c6:{NFSU2_TR(0x7628c6);
u8 U[4];
w4(U+0,u32(0x7d4240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7628cb:{NFSU2_TR(0x7628cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7628d0ull));
TAIL_STATIC(0x760da0u,760);
}
B7628d0:L7628d0:{c.instructions+=7;NFSU2_TR(0x7628d0);
__builtin_memmove((R+24),(R+4),4);
}
B7628d2:{NFSU2_TR(0x7628d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7628d5:{NFSU2_TR(0x7628d5);
__builtin_memmove((R+28),(R+8),4);
}
B7628d7:{NFSU2_TR(0x7628d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7628da:{NFSU2_TR(0x7628da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7628dd:{NFSU2_TR(0x7628dd);
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
B7628df:{NFSU2_TR(0x7628df);
if(r1(R+518)){{goto L762a2e;}}
}
B7628e5:L7628e5:{c.instructions+=2;NFSU2_TR(0x7628e5);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B7628e9:{NFSU2_TR(0x7628e9);
if(r1(R+518)){{goto L762a2e;}}
}
B7628ef:L7628ef:{c.instructions+=3;NFSU2_TR(0x7628ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7628f2:{NFSU2_TR(0x7628f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7628f4:{NFSU2_TR(0x7628f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762900;}}
}
B7628f6:L7628f6:{c.instructions+=2;NFSU2_TR(0x7628f6);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B7628fa:{NFSU2_TR(0x7628fa);
if(r1(R+518)){{goto L762a2e;}}
}
B762900:L762900:{c.instructions+=3;NFSU2_TR(0x762900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B762902:{NFSU2_TR(0x762902);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B762904:{NFSU2_TR(0x762904);
if(r1(R+519)){{goto L76290a;}}
}
B762906:L762906:{c.instructions+=1;NFSU2_TR(0x762906);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B76290a:L76290a:{c.instructions+=5;NFSU2_TR(0x76290a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76290e:{NFSU2_TR(0x76290e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762910:{NFSU2_TR(0x762910);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762913:{NFSU2_TR(0x762913);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B762915:{NFSU2_TR(0x762915);
if(r1(R+518)){{goto L76294c;}}
}
B762917:L762917:{c.instructions+=1;NFSU2_TR(0x762917);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76291cull));
TAIL_STATIC(0x76c997u,76c);
}
B76291c:L76291c:{c.instructions+=4;NFSU2_TR(0x76291c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76291d:{NFSU2_TR(0x76291d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76291e:{NFSU2_TR(0x76291e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B762920:{NFSU2_TR(0x762920);
if(r1(R+518)){{goto L762a25;}}
}
B762926:L762926:{c.instructions+=3;NFSU2_TR(0x762926);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762928:{NFSU2_TR(0x762928);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762929:{NFSU2_TR(0x762929);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76292eull));
TAIL_STATIC(0x76c9b3u,76c);
}
B76292e:L76292e:{c.instructions+=4;NFSU2_TR(0x76292e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76292f:{NFSU2_TR(0x76292f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762930:{NFSU2_TR(0x762930);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B762932:{NFSU2_TR(0x762932);
if(r1(R+518)){{goto L762a25;}}
}
B762938:L762938:{c.instructions+=2;NFSU2_TR(0x762938);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76293b:{NFSU2_TR(0x76293b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B76293d:L76293d:{c.instructions+=2;NFSU2_TR(0x76293d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762940:{NFSU2_TR(0x762940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762945ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762700u);}goto L762700;}
}
B762945:L762945:{c.instructions+=2;NFSU2_TR(0x762945);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B762947:{NFSU2_TR(0x762947);
{goto L762a2a;}
}
B76294c:L76294c:{c.instructions+=2;NFSU2_TR(0x76294c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76294f:{NFSU2_TR(0x76294f);
if(r1(R+518)){{goto L762997;}}
}
B762951:L762951:{c.instructions+=1;NFSU2_TR(0x762951);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762956ull));
TAIL_STATIC(0x76c997u,76c);
}
B762956:L762956:{c.instructions+=4;NFSU2_TR(0x762956);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762957:{NFSU2_TR(0x762957);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762958:{NFSU2_TR(0x762958);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76295a:{NFSU2_TR(0x76295a);
if(r1(R+518)){{goto L762a25;}}
}
B762960:L762960:{c.instructions+=3;NFSU2_TR(0x762960);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762962:{NFSU2_TR(0x762962);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762963:{NFSU2_TR(0x762963);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762968ull));
TAIL_STATIC(0x76c9b3u,76c);
}
B762968:L762968:{c.instructions+=4;NFSU2_TR(0x762968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762969:{NFSU2_TR(0x762969);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76296a:{NFSU2_TR(0x76296a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76296c:{NFSU2_TR(0x76296c);
if(r1(R+518)){{goto L762a25;}}
}
B762972:L762972:{c.instructions+=4;NFSU2_TR(0x762972);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762975:{NFSU2_TR(0x762975);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762978:{NFSU2_TR(0x762978);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762979:{NFSU2_TR(0x762979);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76297eull));
TAIL_STATIC(0x75cfd0u,75c);
}
B76297e:L76297e:{c.instructions+=3;NFSU2_TR(0x76297e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B762981:{NFSU2_TR(0x762981);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762985:{NFSU2_TR(0x762985);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762a2a;}}
}
B76298b:L76298b:{c.instructions+=3;NFSU2_TR(0x76298b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76298d:{NFSU2_TR(0x76298d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76298f:{NFSU2_TR(0x76298f);
if(r1(R+518)){{goto L762a2a;}}
}
B762995:L762995:{c.instructions+=1;NFSU2_TR(0x762995);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76293du);}goto L76293d;}
}
B762997:L762997:{c.instructions+=2;NFSU2_TR(0x762997);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76299b:{NFSU2_TR(0x76299b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7629d0;}}
}
B76299d:L76299d:{c.instructions+=1;NFSU2_TR(0x76299d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7629a2ull));
TAIL_STATIC(0x76c997u,76c);
}
B7629a2:L7629a2:{c.instructions+=4;NFSU2_TR(0x7629a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7629a3:{NFSU2_TR(0x7629a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7629a4:{NFSU2_TR(0x7629a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7629a6:{NFSU2_TR(0x7629a6);
if(r1(R+518)){{goto L762a25;}}
}
B7629a8:L7629a8:{c.instructions+=3;NFSU2_TR(0x7629a8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7629aa:{NFSU2_TR(0x7629aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7629ab:{NFSU2_TR(0x7629ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7629b0ull));
TAIL_STATIC(0x76c9b3u,76c);
}
B7629b0:L7629b0:{c.instructions+=4;NFSU2_TR(0x7629b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7629b1:{NFSU2_TR(0x7629b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7629b2:{NFSU2_TR(0x7629b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7629b4:{NFSU2_TR(0x7629b4);
if(r1(R+518)){{goto L762a25;}}
}
B7629b6:L7629b6:{c.instructions+=4;NFSU2_TR(0x7629b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7629b9:{NFSU2_TR(0x7629b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7629bc:{NFSU2_TR(0x7629bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7629bf:{NFSU2_TR(0x7629bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7629c4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762700u);}goto L762700;}
}
B7629c4:L7629c4:{c.instructions+=3;NFSU2_TR(0x7629c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7629c5:{NFSU2_TR(0x7629c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7629c6:{NFSU2_TR(0x7629c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7629cbull));
TAIL_STATIC(0x75cfd0u,75c);
}
B7629cb:L7629cb:{c.instructions+=2;NFSU2_TR(0x7629cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7629ce:{NFSU2_TR(0x7629ce);
{goto L762a2a;}
}
B7629d0:L7629d0:{c.instructions+=1;NFSU2_TR(0x7629d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7629d5ull));
TAIL_STATIC(0x76c997u,76c);
}
B7629d5:L7629d5:{c.instructions+=4;NFSU2_TR(0x7629d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7629d6:{NFSU2_TR(0x7629d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7629d7:{NFSU2_TR(0x7629d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7629d9:{NFSU2_TR(0x7629d9);
if(r1(R+518)){{goto L762a25;}}
}
B7629db:L7629db:{c.instructions+=3;NFSU2_TR(0x7629db);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7629dd:{NFSU2_TR(0x7629dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7629de:{NFSU2_TR(0x7629de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7629e3ull));
TAIL_STATIC(0x76c9b3u,76c);
}
B7629e3:L7629e3:{c.instructions+=4;NFSU2_TR(0x7629e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7629e4:{NFSU2_TR(0x7629e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7629e5:{NFSU2_TR(0x7629e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7629e7:{NFSU2_TR(0x7629e7);
if(r1(R+518)){{goto L762a25;}}
}
B7629e9:L7629e9:{c.instructions+=2;NFSU2_TR(0x7629e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7629ec:{NFSU2_TR(0x7629ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7629f1ull));
TAIL_STATIC(0x76c9cfu,76c);
}
B7629f1:L7629f1:{c.instructions+=3;NFSU2_TR(0x7629f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7629f2:{NFSU2_TR(0x7629f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7629f4:{NFSU2_TR(0x7629f4);
if(r1(R+518)){{goto L762a25;}}
}
B7629f6:L7629f6:{c.instructions+=4;NFSU2_TR(0x7629f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7629f9:{NFSU2_TR(0x7629f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7629fc:{NFSU2_TR(0x7629fc);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7629ff:{NFSU2_TR(0x7629ff);
if(r1(R+518)){{goto L762a14;}}
}
B762a01:L762a01:{c.instructions+=2;NFSU2_TR(0x762a01);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762a03:{NFSU2_TR(0x762a03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762a08ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762700u);}goto L762700;}
}
B762a08:L762a08:{c.instructions+=4;NFSU2_TR(0x762a08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762a09:{NFSU2_TR(0x762a09);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762a0c:{NFSU2_TR(0x762a0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762a0d:{NFSU2_TR(0x762a0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762a12ull));
TAIL_STATIC(0x75bf79u,75b);
}
B762a12:L762a12:{c.instructions+=1;NFSU2_TR(0x762a12);
{goto L762a2a;}
}
B762a14:L762a14:{c.instructions+=1;NFSU2_TR(0x762a14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762a19ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762700u);}goto L762700;}
}
B762a19:L762a19:{c.instructions+=4;NFSU2_TR(0x762a19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762a1a:{NFSU2_TR(0x762a1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762a1d:{NFSU2_TR(0x762a1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762a1e:{NFSU2_TR(0x762a1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762a23ull));
TAIL_STATIC(0x75bf79u,75b);
}
B762a23:L762a23:{c.instructions+=1;NFSU2_TR(0x762a23);
{goto L762a2a;}
}
B762a25:L762a25:{c.instructions+=1;NFSU2_TR(0x762a25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762a2aull));
{goto L762e20;}
}
B762a2a:L762a2a:{c.instructions+=1;NFSU2_TR(0x762a2a);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B762a2e:L762a2e:{c.instructions+=1;NFSU2_TR(0x762a2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762a33ull));
TAIL_STATIC(0x760ddbu,760);
}
B762a33:L762a33:{c.instructions+=1;NFSU2_TR(0x762a33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762a34:L762a34:{c.instructions+=3;NFSU2_TR(0x762a34);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B762a36:{NFSU2_TR(0x762a36);
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
B762a37:{NFSU2_TR(0x762a37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762a38:L762a38:{c.instructions+=2;NFSU2_TR(0x762a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B762a3b:{NFSU2_TR(0x762a3b);
{goto L762deb;}
}
B762a40:L762a40:{c.instructions+=4;NFSU2_TR(0x762a40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762a41:{NFSU2_TR(0x762a41);
__builtin_memmove((R+20),(R+16),4);
}
B762a43:{NFSU2_TR(0x762a43);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B762a45:{NFSU2_TR(0x762a45);
if(r1(R+518)){{goto L762a54;}}
}
B762a47:L762a47:{c.instructions+=4;NFSU2_TR(0x762a47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762a48:{NFSU2_TR(0x762a48);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762a4b:{NFSU2_TR(0x762a4b);
__builtin_memmove((R+8),(R+24),4);
}
B762a4d:{NFSU2_TR(0x762a4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762a52ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7628c4u);}goto L7628c4;}
}
B762a52:L762a52:{c.instructions+=2;NFSU2_TR(0x762a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762a53:{NFSU2_TR(0x762a53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762a54:L762a54:{c.instructions+=3;NFSU2_TR(0x762a54);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
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
B762a58:{NFSU2_TR(0x762a58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762a5b:{NFSU2_TR(0x762a5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762a60;}}
}
B762a5d:L762a5d:{c.instructions+=2;NFSU2_TR(0x762a5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762a5e:{NFSU2_TR(0x762a5e);
{goto L762a63;}
}
B762a60:L762a60:{c.instructions+=1;NFSU2_TR(0x762a60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762a63:L762a63:{c.instructions+=1;NFSU2_TR(0x762a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762a68ull));
TAIL_STATIC(0x75bf80u,75b);
}
B762a68:L762a68:{c.instructions+=5;NFSU2_TR(0x762a68);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B762a6a:{NFSU2_TR(0x762a6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762a6d:{NFSU2_TR(0x762a6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762a70:{NFSU2_TR(0x762a70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762a71:{NFSU2_TR(0x762a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762a76ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7625edu);}goto L7625ed;}
}
B762a76:L762a76:{c.instructions+=11;NFSU2_TR(0x762a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762a79:{NFSU2_TR(0x762a79);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762a7e:{NFSU2_TR(0x762a7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762a81:{NFSU2_TR(0x762a81);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B762a82:{NFSU2_TR(0x762a82);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762a85:{NFSU2_TR(0x762a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762a88:{NFSU2_TR(0x762a88);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762a8b:{NFSU2_TR(0x762a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762a8e:{NFSU2_TR(0x762a8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762a8f:{NFSU2_TR(0x762a8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762a92:{NFSU2_TR(0x762a92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762a97ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76271du);}goto L76271d;}
}
B762a97:L762a97:{c.instructions+=3;NFSU2_TR(0x762a97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B762a9a:{NFSU2_TR(0x762a9a);
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
B762a9c:{NFSU2_TR(0x762a9c);
if(r1(R+518)){{goto L762aa5;}}
}
B762a9e:L762a9e:{c.instructions+=3;NFSU2_TR(0x762a9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762a9f:{NFSU2_TR(0x762a9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762aa0:{NFSU2_TR(0x762aa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762aa5ull));
TAIL_STATIC(0x75bf49u,75b);
}
B762aa5:L762aa5:{c.instructions+=2;NFSU2_TR(0x762aa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B762aa6:{NFSU2_TR(0x762aa6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762aa7:L762aa7:{c.instructions+=8;NFSU2_TR(0x762aa7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762aa8:{NFSU2_TR(0x762aa8);
__builtin_memmove((R+20),(R+16),4);
}
B762aaa:{NFSU2_TR(0x762aaa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762aab:{NFSU2_TR(0x762aab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762aac:{NFSU2_TR(0x762aac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762aad:{NFSU2_TR(0x762aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762ab0:{NFSU2_TR(0x762ab0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x80000003ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x80000003ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B762ab6:{NFSU2_TR(0x762ab6);
if(r1(R+518)){{goto L762b64;}}
}
B762abc:L762abc:{c.instructions+=1;NFSU2_TR(0x762abc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762ac1ull));
TAIL_STATIC(0x761e3cu,761);
}
B762ac1:L762ac1:{c.instructions+=2;NFSU2_TR(0x762ac1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762ac5:{NFSU2_TR(0x762ac5);
if(r1(R+518)){{goto L762ae6;}}
}
B762ac7:L762ac7:{c.instructions+=8;NFSU2_TR(0x762ac7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762aca:{NFSU2_TR(0x762aca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762acd:{NFSU2_TR(0x762acd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762ad0:{NFSU2_TR(0x762ad0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762ad3:{NFSU2_TR(0x762ad3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762ad6:{NFSU2_TR(0x762ad6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762ad9:{NFSU2_TR(0x762ad9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762ada:{NFSU2_TR(0x762ada);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762adfull));
TAIL_STATIC(0x75c1fdu,75c);
}
B762adf:L762adf:{c.instructions+=3;NFSU2_TR(0x762adf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B762ae2:{NFSU2_TR(0x762ae2);
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
B762ae4:{NFSU2_TR(0x762ae4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762b64;}}
}
B762ae6:L762ae6:{c.instructions+=10;NFSU2_TR(0x762ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762ae9:{NFSU2_TR(0x762ae9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762aea:{NFSU2_TR(0x762aea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B762aed:{NFSU2_TR(0x762aed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762aee:{NFSU2_TR(0x762aee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B762af1:{NFSU2_TR(0x762af1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762af2:{NFSU2_TR(0x762af2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762af3:{NFSU2_TR(0x762af3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762af6:{NFSU2_TR(0x762af6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762af9:{NFSU2_TR(0x762af9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762afeull));
TAIL_STATIC(0x75c09du,75c);
}
B762afe:L762afe:{c.instructions+=5;NFSU2_TR(0x762afe);
__builtin_memmove((R+28),(R+0),4);
}
B762b00:{NFSU2_TR(0x762b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762b03:{NFSU2_TR(0x762b03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B762b06:{NFSU2_TR(0x762b06);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B762b09:{NFSU2_TR(0x762b09);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L762b63;}}
}
B762b0b:L762b0b:{c.instructions+=1;NFSU2_TR(0x762b0b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762b0c:L762b0c:{c.instructions+=2;NFSU2_TR(0x762b0c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+4)));
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B762b0e:{NFSU2_TR(0x762b0e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L762b54;}}
}
B762b10:L762b10:{c.instructions+=2;NFSU2_TR(0x762b10);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762b13:{NFSU2_TR(0x762b13);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L762b54;}}
}
B762b15:L762b15:{c.instructions+=7;NFSU2_TR(0x762b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762b18:{NFSU2_TR(0x762b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762b1b:{NFSU2_TR(0x762b1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B762b1e:{NFSU2_TR(0x762b1e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B762b20:{NFSU2_TR(0x762b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762b23:{NFSU2_TR(0x762b23);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B762b25:{NFSU2_TR(0x762b25);
if(r1(R+518)){{goto L762b2d;}}
}
B762b27:L762b27:{c.instructions+=2;NFSU2_TR(0x762b27);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B762b2b:{NFSU2_TR(0x762b2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762b54;}}
}
B762b2d:L762b2d:{c.instructions+=11;NFSU2_TR(0x762b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762b30:{NFSU2_TR(0x762b30);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762b32:{NFSU2_TR(0x762b32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762b35:{NFSU2_TR(0x762b35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B762b38:{NFSU2_TR(0x762b38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762b3b:{NFSU2_TR(0x762b3b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B762b3d:{NFSU2_TR(0x762b3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762b40:{NFSU2_TR(0x762b40);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762b43:{NFSU2_TR(0x762b43);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762b46:{NFSU2_TR(0x762b46);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762b49:{NFSU2_TR(0x762b49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762b4eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762a40u);}goto L762a40;}
}
B762b4e:L762b4e:{c.instructions+=2;NFSU2_TR(0x762b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762b51:{NFSU2_TR(0x762b51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B762b54:L762b54:{c.instructions+=5;NFSU2_TR(0x762b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B762b57:{NFSU2_TR(0x762b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762b5a:{NFSU2_TR(0x762b5a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B762b5d:{NFSU2_TR(0x762b5d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B762b60:{NFSU2_TR(0x762b60);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762b0cu);}goto L762b0c;}}
}
B762b62:L762b62:{c.instructions+=1;NFSU2_TR(0x762b62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B762b63:L762b63:{c.instructions+=1;NFSU2_TR(0x762b63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B762b64:L762b64:{c.instructions+=3;NFSU2_TR(0x762b64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B762b65:{NFSU2_TR(0x762b65);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B762b66:{NFSU2_TR(0x762b66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762b67:L762b67:{c.instructions+=9;NFSU2_TR(0x762b67);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762b68:{NFSU2_TR(0x762b68);
__builtin_memmove((R+20),(R+16),4);
}
B762b6a:{NFSU2_TR(0x762b6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B762b6d:{NFSU2_TR(0x762b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762b70:{NFSU2_TR(0x762b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762b73:{NFSU2_TR(0x762b73);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B762b77:{NFSU2_TR(0x762b77);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B762b7a:{NFSU2_TR(0x762b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762b7d:{NFSU2_TR(0x762b7d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L762b87;}}
}
B762b7f:L762b7f:{c.instructions+=3;NFSU2_TR(0x762b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762b82:{NFSU2_TR(0x762b82);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B762b85:{NFSU2_TR(0x762b85);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L762b8c;}}
}
B762b87:L762b87:{c.instructions+=1;NFSU2_TR(0x762b87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762b8cull));
{goto L762e20;}
}
B762b8c:L762b8c:{c.instructions+=6;NFSU2_TR(0x762b8c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762b8d:{NFSU2_TR(0x762b8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B762b90:{NFSU2_TR(0x762b90);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xe06d7363ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B762b96:{NFSU2_TR(0x762b96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762b97:{NFSU2_TR(0x762b97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762b98:{NFSU2_TR(0x762b98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762d1e;}}
}
B762b9e:L762b9e:{c.instructions+=3;NFSU2_TR(0x762b9e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762ba2:{NFSU2_TR(0x762ba2);
w4(R+28,u32(0x19930520ull));
}
B762ba7:{NFSU2_TR(0x762ba7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762c18;}}
}
B762ba9:L762ba9:{c.instructions+=2;NFSU2_TR(0x762ba9);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762bac:{NFSU2_TR(0x762bac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762c18;}}
}
B762bae:L762bae:{c.instructions+=2;NFSU2_TR(0x762bae);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
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
B762bb2:{NFSU2_TR(0x762bb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762c18;}}
}
B762bb4:L762bb4:{c.instructions+=1;NFSU2_TR(0x762bb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762bb9ull));
TAIL_STATIC(0x761e3cu,761);
}
B762bb9:L762bb9:{c.instructions+=2;NFSU2_TR(0x762bb9);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
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
B762bbd:{NFSU2_TR(0x762bbd);
if(r1(R+518)){{goto L762d16;}}
}
B762bc3:L762bc3:{c.instructions+=1;NFSU2_TR(0x762bc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762bc8ull));
TAIL_STATIC(0x761e3cu,761);
}
B762bc8:L762bc8:{c.instructions+=3;NFSU2_TR(0x762bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762bcb:{NFSU2_TR(0x762bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762bce:{NFSU2_TR(0x762bce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762bd3ull));
TAIL_STATIC(0x761e3cu,761);
}
B762bd3:L762bd3:{c.instructions+=6;NFSU2_TR(0x762bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762bd6:{NFSU2_TR(0x762bd6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762bd8:{NFSU2_TR(0x762bd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762bd9:{NFSU2_TR(0x762bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762bdc:{NFSU2_TR(0x762bdc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B762be0:{NFSU2_TR(0x762be0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762be5ull));
TAIL_STATIC(0x76c997u,76c);
}
B762be5:L762be5:{c.instructions+=4;NFSU2_TR(0x762be5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B762be7:{NFSU2_TR(0x762be7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762be8:{NFSU2_TR(0x762be8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762be9:{NFSU2_TR(0x762be9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762bf0;}}
}
B762beb:L762beb:{c.instructions+=1;NFSU2_TR(0x762beb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762bf0ull));
{goto L762e20;}
}
B762bf0:L762bf0:{c.instructions+=2;NFSU2_TR(0x762bf0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xe06d7363ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B762bf6:{NFSU2_TR(0x762bf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762d1b;}}
}
B762bfc:L762bfc:{c.instructions+=3;NFSU2_TR(0x762bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762bff:{NFSU2_TR(0x762bff);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762c03:{NFSU2_TR(0x762c03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762c15;}}
}
B762c05:L762c05:{c.instructions+=2;NFSU2_TR(0x762c05);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762c08:{NFSU2_TR(0x762c08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762c15;}}
}
B762c0a:L762c0a:{c.instructions+=2;NFSU2_TR(0x762c0a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762c0e:{NFSU2_TR(0x762c0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762c15;}}
}
B762c10:L762c10:{c.instructions+=1;NFSU2_TR(0x762c10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762c15ull));
{goto L762e20;}
}
B762c15:L762c15:{c.instructions+=1;NFSU2_TR(0x762c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B762c18:L762c18:{c.instructions+=2;NFSU2_TR(0x762c18);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xe06d7363ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B762c1e:{NFSU2_TR(0x762c1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762d1e;}}
}
B762c24:L762c24:{c.instructions+=2;NFSU2_TR(0x762c24);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762c28:{NFSU2_TR(0x762c28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762d1e;}}
}
B762c2e:L762c2e:{c.instructions+=2;NFSU2_TR(0x762c2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762c31:{NFSU2_TR(0x762c31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762d1e;}}
}
B762c37:L762c37:{c.instructions+=9;NFSU2_TR(0x762c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762c3a:{NFSU2_TR(0x762c3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B762c3d:{NFSU2_TR(0x762c3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762c3e:{NFSU2_TR(0x762c3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B762c41:{NFSU2_TR(0x762c41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762c42:{NFSU2_TR(0x762c42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762c43:{NFSU2_TR(0x762c43);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762c46:{NFSU2_TR(0x762c46);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762c49:{NFSU2_TR(0x762c49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762c4eull));
TAIL_STATIC(0x75c09du,75c);
}
B762c4e:L762c4e:{c.instructions+=5;NFSU2_TR(0x762c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762c51:{NFSU2_TR(0x762c51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B762c54:{NFSU2_TR(0x762c54);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B762c57:{NFSU2_TR(0x762c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762c5a:{NFSU2_TR(0x762c5a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L762d06;}}
}
B762c60:L762c60:{c.instructions+=1;NFSU2_TR(0x762c60);
{goto L762c65;}
}
B762c62:L762c62:{c.instructions+=1;NFSU2_TR(0x762c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762c65:L762c65:{c.instructions+=2;NFSU2_TR(0x762c65);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+24)));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B762c67:{NFSU2_TR(0x762c67);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L762cf1;}}
}
B762c6d:L762c6d:{c.instructions+=2;NFSU2_TR(0x762c6d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762c70:{NFSU2_TR(0x762c70);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L762cf1;}}
}
B762c72:L762c72:{c.instructions+=5;NFSU2_TR(0x762c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762c75:{NFSU2_TR(0x762c75);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B762c77:{NFSU2_TR(0x762c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762c7a:{NFSU2_TR(0x762c7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762c7d:{NFSU2_TR(0x762c7d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L762cf1;}}
}
B762c7f:L762c7f:{c.instructions+=8;NFSU2_TR(0x762c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762c82:{NFSU2_TR(0x762c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762c85:{NFSU2_TR(0x762c85);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B762c88:{NFSU2_TR(0x762c88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B762c8a:{NFSU2_TR(0x762c8a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B762c8c:{NFSU2_TR(0x762c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762c8f:{NFSU2_TR(0x762c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762c92:{NFSU2_TR(0x762c92);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L762cb8;}}
}
B762c94:L762c94:{c.instructions+=5;NFSU2_TR(0x762c94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762c97:{NFSU2_TR(0x762c97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B762c99:{NFSU2_TR(0x762c99);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762c9c:{NFSU2_TR(0x762c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762c9f:{NFSU2_TR(0x762c9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762ca4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762580u);}goto L762580;}
}
B762ca4:L762ca4:{c.instructions+=3;NFSU2_TR(0x762ca4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B762ca6:{NFSU2_TR(0x762ca6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762ca7:{NFSU2_TR(0x762ca7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762cc6;}}
}
B762ca9:L762ca9:{c.instructions+=4;NFSU2_TR(0x762ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B762cac:{NFSU2_TR(0x762cac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B762cb0:{NFSU2_TR(0x762cb0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762cb3:{NFSU2_TR(0x762cb3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762c94u);}goto L762c94;}}
}
B762cb5:L762cb5:{c.instructions+=1;NFSU2_TR(0x762cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762cb8:L762cb8:{c.instructions+=4;NFSU2_TR(0x762cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B762cbb:{NFSU2_TR(0x762cbb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B762cbe:{NFSU2_TR(0x762cbe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762cc2:{NFSU2_TR(0x762cc2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762c7fu);}goto L762c7f;}}
}
B762cc4:L762cc4:{c.instructions+=1;NFSU2_TR(0x762cc4);
{goto L762cf1;}
}
B762cc6:L762cc6:{c.instructions+=12;NFSU2_TR(0x762cc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762cc9:{NFSU2_TR(0x762cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B762ccc:{NFSU2_TR(0x762ccc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762ccf:{NFSU2_TR(0x762ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762cd2:{NFSU2_TR(0x762cd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762cd5:{NFSU2_TR(0x762cd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762cd8:{NFSU2_TR(0x762cd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762cdb:{NFSU2_TR(0x762cdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762cde:{NFSU2_TR(0x762cde);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762cdf:{NFSU2_TR(0x762cdf);
__builtin_memmove((R+12),(R+24),4);
}
B762ce1:{NFSU2_TR(0x762ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762ce4:{NFSU2_TR(0x762ce4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762ce9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762a40u);}goto L762a40;}
}
B762ce9:L762ce9:{c.instructions+=3;NFSU2_TR(0x762ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B762cec:{NFSU2_TR(0x762cec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B762cef:{NFSU2_TR(0x762cef);
__builtin_memmove((R+0),(R+28),4);
}
B762cf1:L762cf1:{c.instructions+=6;NFSU2_TR(0x762cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B762cf4:{NFSU2_TR(0x762cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762cf7:{NFSU2_TR(0x762cf7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B762cfa:{NFSU2_TR(0x762cfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B762cfd:{NFSU2_TR(0x762cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762d00:{NFSU2_TR(0x762d00);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762c62u);}goto L762c62;}}
}
B762d06:L762d06:{c.instructions+=2;NFSU2_TR(0x762d06);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B762d0a:{NFSU2_TR(0x762d0a);
if(r1(R+518)){{goto L762d16;}}
}
B762d0c:L762d0c:{c.instructions+=3;NFSU2_TR(0x762d0c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762d0e:{NFSU2_TR(0x762d0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762d0f:{NFSU2_TR(0x762d0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762d14ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7626bbu);}goto L7626bb;}
}
B762d14:L762d14:{c.instructions+=2;NFSU2_TR(0x762d14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762d15:{NFSU2_TR(0x762d15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762d16:L762d16:{c.instructions+=5;NFSU2_TR(0x762d16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B762d17:{NFSU2_TR(0x762d17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B762d18:{NFSU2_TR(0x762d18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B762d19:{NFSU2_TR(0x762d19);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B762d1a:{NFSU2_TR(0x762d1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762d1b:L762d1b:{c.instructions+=1;NFSU2_TR(0x762d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B762d1e:L762d1e:{c.instructions+=2;NFSU2_TR(0x762d1e);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B762d22:{NFSU2_TR(0x762d22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762d44;}}
}
B762d24:L762d24:{c.instructions+=9;NFSU2_TR(0x762d24);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762d27:{NFSU2_TR(0x762d27);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762d2a:{NFSU2_TR(0x762d2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762d2d:{NFSU2_TR(0x762d2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762d30:{NFSU2_TR(0x762d30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762d33:{NFSU2_TR(0x762d33);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762d36:{NFSU2_TR(0x762d36);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762d39:{NFSU2_TR(0x762d39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762d3a:{NFSU2_TR(0x762d3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762d3full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762aa7u);}goto L762aa7;}
}
B762d3f:L762d3f:{c.instructions+=2;NFSU2_TR(0x762d3f);
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
B762d42:{NFSU2_TR(0x762d42);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762d16u);}goto L762d16;}
}
B762d44:L762d44:{c.instructions+=1;NFSU2_TR(0x762d44);
{goto L762deb;}
}
B762d49:L762d49:{c.instructions+=10;NFSU2_TR(0x762d49);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762d4a:{NFSU2_TR(0x762d4a);
__builtin_memmove((R+20),(R+16),4);
}
B762d4c:{NFSU2_TR(0x762d4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762d4d:{NFSU2_TR(0x762d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762d50:{NFSU2_TR(0x762d50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B762d52:{NFSU2_TR(0x762d52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762d53:{NFSU2_TR(0x762d53);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1fffffffull))));
}
B762d58:{NFSU2_TR(0x762d58);
w4(R+28,u32(0x19930520ull));
}
B762d5d:{NFSU2_TR(0x762d5d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B762d5f:{NFSU2_TR(0x762d5f);
if(r1(R+518)){{goto L762d66;}}
}
B762d61:L762d61:{c.instructions+=1;NFSU2_TR(0x762d61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762d66ull));
{goto L762e20;}
}
B762d66:L762d66:{c.instructions+=3;NFSU2_TR(0x762d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762d69:{NFSU2_TR(0x762d69);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x66ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B762d6d:{NFSU2_TR(0x762d6d);
if(r1(R+518)){{goto L762d8e;}}
}
B762d6f:L762d6f:{c.instructions+=2;NFSU2_TR(0x762d6f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762d73:{NFSU2_TR(0x762d73);
if(r1(R+518)){{goto L762de4;}}
}
B762d75:L762d75:{c.instructions+=2;NFSU2_TR(0x762d75);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762d79:{NFSU2_TR(0x762d79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762de4;}}
}
B762d7b:L762d7b:{c.instructions+=5;NFSU2_TR(0x762d7b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762d7d:{NFSU2_TR(0x762d7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762d7e:{NFSU2_TR(0x762d7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762d81:{NFSU2_TR(0x762d81);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762d84:{NFSU2_TR(0x762d84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762d89ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7625edu);}goto L7625ed;}
}
B762d89:L762d89:{c.instructions+=2;NFSU2_TR(0x762d89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B762d8c:{NFSU2_TR(0x762d8c);
{goto L762de4;}
}
B762d8e:L762d8e:{c.instructions+=2;NFSU2_TR(0x762d8e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762d92:{NFSU2_TR(0x762d92);
if(r1(R+518)){{goto L762de4;}}
}
B762d94:L762d94:{c.instructions+=2;NFSU2_TR(0x762d94);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xe06d7363ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B762d9a:{NFSU2_TR(0x762d9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762dc8;}}
}
B762d9c:L762d9c:{c.instructions+=2;NFSU2_TR(0x762d9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762d9f:{NFSU2_TR(0x762d9f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L762dc8;}}
}
B762da1:L762da1:{c.instructions+=4;NFSU2_TR(0x762da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762da4:{NFSU2_TR(0x762da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762da7:{NFSU2_TR(0x762da7);
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
B762da9:{NFSU2_TR(0x762da9);
if(r1(R+518)){{goto L762dc8;}}
}
B762dab:L762dab:{c.instructions+=10;NFSU2_TR(0x762dab);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B762daf:{NFSU2_TR(0x762daf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762db0:{NFSU2_TR(0x762db0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762db3:{NFSU2_TR(0x762db3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762db6:{NFSU2_TR(0x762db6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762db7:{NFSU2_TR(0x762db7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762dba:{NFSU2_TR(0x762dba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762dbd:{NFSU2_TR(0x762dbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762dc0:{NFSU2_TR(0x762dc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762dc1:{NFSU2_TR(0x762dc1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762dc3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B762dc3:L762dc3:{c.instructions+=2;NFSU2_TR(0x762dc3);
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
B762dc6:{NFSU2_TR(0x762dc6);
{goto L762de7;}
}
B762dc8:L762dc8:{c.instructions+=9;NFSU2_TR(0x762dc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762dcb:{NFSU2_TR(0x762dcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762dce:{NFSU2_TR(0x762dce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762dd1:{NFSU2_TR(0x762dd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762dd2:{NFSU2_TR(0x762dd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762dd5:{NFSU2_TR(0x762dd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762dd8:{NFSU2_TR(0x762dd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762ddb:{NFSU2_TR(0x762ddb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762ddc:{NFSU2_TR(0x762ddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762de1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762b67u);}goto L762b67;}
}
B762de1:L762de1:{c.instructions+=1;NFSU2_TR(0x762de1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B762de4:L762de4:{c.instructions+=2;NFSU2_TR(0x762de4);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B762de6:{NFSU2_TR(0x762de6);
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
B762de7:L762de7:{c.instructions+=4;NFSU2_TR(0x762de7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B762de8:{NFSU2_TR(0x762de8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B762de9:{NFSU2_TR(0x762de9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B762dea:{NFSU2_TR(0x762dea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762deb:L762deb:{c.instructions+=3;NFSU2_TR(0x762deb);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762ded:{NFSU2_TR(0x762ded);
u8 U[4];
w4(U+0,u32(0x7d4250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762df2:{NFSU2_TR(0x762df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762df7ull));
TAIL_STATIC(0x760da0u,760);
}
B762df7:L762df7:{c.instructions+=1;NFSU2_TR(0x762df7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762dfcull));
TAIL_STATIC(0x761e3cu,761);
}
B762dfc:L762dfc:{c.instructions+=2;NFSU2_TR(0x762dfc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762e00:{NFSU2_TR(0x762e00);
if(r1(R+518)){{goto L762e1b;}}
}
B762e02:L762e02:{c.instructions+=2;NFSU2_TR(0x762e02);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B762e06:{NFSU2_TR(0x762e06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762e0bull));
TAIL_STATIC(0x761e3cu,761);
}
B762e0b:L762e0b:{c.instructions+=1;NFSU2_TR(0x762e0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762e0eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B762e0e:L762e0e:{c.instructions+=1;NFSU2_TR(0x762e0e);
{goto L762e17;}
}
B762e10:L762e10:{c.instructions+=3;NFSU2_TR(0x762e10);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B762e12:{NFSU2_TR(0x762e12);
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
B762e13:{NFSU2_TR(0x762e13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762e17:L762e17:{c.instructions+=1;NFSU2_TR(0x762e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B762e1b:L762e1b:{c.instructions+=1;NFSU2_TR(0x762e1b);
TAIL_STATIC(0x76ae36u,76a);
}
B762e20:L762e20:{c.instructions+=3;NFSU2_TR(0x762e20);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762e22:{NFSU2_TR(0x762e22);
u8 U[4];
w4(U+0,u32(0x7d4260ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762e27:{NFSU2_TR(0x762e27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762e2cull));
TAIL_STATIC(0x760da0u,760);
}
B762e2c:L762e2c:{c.instructions+=3;NFSU2_TR(0x762e2c);
__builtin_memmove((R+0),gp(0x81a338),4);
}
B762e31:{NFSU2_TR(0x762e31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B762e33:{NFSU2_TR(0x762e33);
if(r1(R+518)){{goto L762e48;}}
}
B762e35:L762e35:{c.instructions+=2;NFSU2_TR(0x762e35);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B762e39:{NFSU2_TR(0x762e39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762e3bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B762e3b:L762e3b:{c.instructions+=1;NFSU2_TR(0x762e3b);
{goto L762e44;}
}
B762e3d:L762e3d:{c.instructions+=3;NFSU2_TR(0x762e3d);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B762e3f:{NFSU2_TR(0x762e3f);
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
B762e40:{NFSU2_TR(0x762e40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762e44:L762e44:{c.instructions+=1;NFSU2_TR(0x762e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B762e48:L762e48:{c.instructions+=1;NFSU2_TR(0x762e48);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762debu);}goto L762deb;}
}
B762e50:L762e50:{c.instructions+=14;NFSU2_TR(0x762e50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762e51:{NFSU2_TR(0x762e51);
__builtin_memmove((R+20),(R+16),4);
}
B762e53:{NFSU2_TR(0x762e53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
}
B762e56:{NFSU2_TR(0x762e56);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762e57:{NFSU2_TR(0x762e57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762e58:{NFSU2_TR(0x762e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762e5b:{NFSU2_TR(0x762e5b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B762e5e:{NFSU2_TR(0x762e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762e61:{NFSU2_TR(0x762e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762e64:{NFSU2_TR(0x762e64);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762e65:{NFSU2_TR(0x762e65);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762e68:{NFSU2_TR(0x762e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762e6b:{NFSU2_TR(0x762e6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B762e6e:{NFSU2_TR(0x762e6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762e73ull));
TAIL_STATIC(0x75c379u,75c);
}
B762e73:L762e73:{c.instructions+=3;NFSU2_TR(0x762e73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762e74:{NFSU2_TR(0x762e74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762e75:{NFSU2_TR(0x762e75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762e77ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B762e77:L762e77:{c.instructions+=9;NFSU2_TR(0x762e77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B762e78:{NFSU2_TR(0x762e78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B762e79:{NFSU2_TR(0x762e79);
__builtin_memmove((R+12),(R+20),4);
}
B762e7b:{NFSU2_TR(0x762e7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B762e7c:{NFSU2_TR(0x762e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B762e7f:{NFSU2_TR(0x762e7f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762e80:{NFSU2_TR(0x762e80);
__builtin_memmove((R+20),(R+12),4);
}
B762e82:{NFSU2_TR(0x762e82);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x100ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B762e88:{NFSU2_TR(0x762e88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762e8f;}}
}
B762e8a:L762e8a:{c.instructions+=1;NFSU2_TR(0x762e8a);
w4(R+4,u32(0x2ull));
}
B762e8f:L762e8f:{c.instructions+=2;NFSU2_TR(0x762e8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762e90:{NFSU2_TR(0x762e90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762e95ull));
TAIL_STATIC(0x75c379u,75c);
}
B762e95:L762e95:{c.instructions+=5;NFSU2_TR(0x762e95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B762e96:{NFSU2_TR(0x762e96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762e97:{NFSU2_TR(0x762e97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B762e98:{NFSU2_TR(0x762e98);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B762e99:{NFSU2_TR(0x762e99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B762e9c:L762e9c:{c.instructions+=3;NFSU2_TR(0x762e9c);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762e9e:{NFSU2_TR(0x762e9e);
u8 U[4];
w4(U+0,u32(0x7d4270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762ea3:{NFSU2_TR(0x762ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762ea8ull));
TAIL_STATIC(0x760da0u,760);
}
B762ea8:L762ea8:{c.instructions+=4;NFSU2_TR(0x762ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B762eab:{NFSU2_TR(0x762eab);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B762ead:{NFSU2_TR(0x762ead);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B762eaf:{NFSU2_TR(0x762eaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762ebf;}}
}
B762eb1:L762eb1:{c.instructions+=2;NFSU2_TR(0x762eb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762eb4:{NFSU2_TR(0x762eb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762eb9ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B762eb9:L762eb9:{c.instructions+=2;NFSU2_TR(0x762eb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762eba:{NFSU2_TR(0x762eba);
TAIL_STATIC(0x763043u,763);
}
B762ebf:L762ebf:{c.instructions+=3;NFSU2_TR(0x762ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B762ec2:{NFSU2_TR(0x762ec2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B762ec4:{NFSU2_TR(0x762ec4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762ed2;}}
}
B762ec6:L762ec6:{c.instructions+=2;NFSU2_TR(0x762ec6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762ec7:{NFSU2_TR(0x762ec7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762eccull));
TAIL_STATIC(0x75c6dau,75c);
}
B762ecc:L762ecc:{c.instructions+=2;NFSU2_TR(0x762ecc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762ecd:{NFSU2_TR(0x762ecd);
TAIL_STATIC(0x763041u,763);
}
B762ed2:L762ed2:{c.instructions+=2;NFSU2_TR(0x762ed2);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba4a8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B762ed9:{NFSU2_TR(0x762ed9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x76300du,763);}
}
B762edf:L762edf:{c.instructions+=3;NFSU2_TR(0x762edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762ee2:{NFSU2_TR(0x762ee2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xffffffe0ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffe0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B762ee5:{NFSU2_TR(0x762ee5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L762fdc;}}
}
B762eeb:L762eeb:{c.instructions+=2;NFSU2_TR(0x762eeb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762eed:{NFSU2_TR(0x762eed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762ef2ull));
TAIL_STATIC(0x7631f1u,763);
}
B762ef2:L762ef2:{c.instructions+=4;NFSU2_TR(0x762ef2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762ef3:{NFSU2_TR(0x762ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762ef6:{NFSU2_TR(0x762ef6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762ef7:{NFSU2_TR(0x762ef7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762efcull));
TAIL_STATIC(0x76326au,763);
}
B762efc:L762efc:{c.instructions+=4;NFSU2_TR(0x762efc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762efd:{NFSU2_TR(0x762efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762f00:{NFSU2_TR(0x762f00);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B762f02:{NFSU2_TR(0x762f02);
if(r1(R+518)){{goto L762fac;}}
}
B762f08:L762f08:{c.instructions+=2;NFSU2_TR(0x762f08);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba494),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B762f0e:{NFSU2_TR(0x762f0e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L762f5c;}}
}
B762f10:L762f10:{c.instructions+=4;NFSU2_TR(0x762f10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762f11:{NFSU2_TR(0x762f11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762f12:{NFSU2_TR(0x762f12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762f13:{NFSU2_TR(0x762f13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762f18ull));
TAIL_STATIC(0x76376au,763);
}
B762f18:L762f18:{c.instructions+=3;NFSU2_TR(0x762f18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B762f1b:{NFSU2_TR(0x762f1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B762f1d:{NFSU2_TR(0x762f1d);
if(r1(R+518)){{goto L762f24;}}
}
B762f1f:L762f1f:{c.instructions+=2;NFSU2_TR(0x762f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762f22:{NFSU2_TR(0x762f22);
{goto L762f5c;}
}
B762f24:L762f24:{c.instructions+=2;NFSU2_TR(0x762f24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762f25:{NFSU2_TR(0x762f25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762f2aull));
TAIL_STATIC(0x763a49u,763);
}
B762f2a:L762f2a:{c.instructions+=4;NFSU2_TR(0x762f2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762f2b:{NFSU2_TR(0x762f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762f2e:{NFSU2_TR(0x762f2e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B762f30:{NFSU2_TR(0x762f30);
if(r1(R+518)){{goto L762f5c;}}
}
B762f32:L762f32:{c.instructions+=5;NFSU2_TR(0x762f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762f35:{NFSU2_TR(0x762f35);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B762f36:{NFSU2_TR(0x762f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762f39:{NFSU2_TR(0x762f39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B762f3b:{NFSU2_TR(0x762f3b);
if(r1(R+512)){{goto L762f3f;}}
}
B762f3d:L762f3d:{c.instructions+=1;NFSU2_TR(0x762f3d);
__builtin_memmove((R+0),(R+24),4);
}
B762f3f:L762f3f:{c.instructions+=4;NFSU2_TR(0x762f3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762f40:{NFSU2_TR(0x762f40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762f41:{NFSU2_TR(0x762f41);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762f44:{NFSU2_TR(0x762f44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762f49ull));
TAIL_STATIC(0x760df0u,760);
}
B762f49:L762f49:{c.instructions+=2;NFSU2_TR(0x762f49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762f4a:{NFSU2_TR(0x762f4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762f4full));
TAIL_STATIC(0x76326au,763);
}
B762f4f:L762f4f:{c.instructions+=4;NFSU2_TR(0x762f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762f52:{NFSU2_TR(0x762f52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762f53:{NFSU2_TR(0x762f53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762f54:{NFSU2_TR(0x762f54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762f59ull));
TAIL_STATIC(0x763295u,763);
}
B762f59:L762f59:{c.instructions+=1;NFSU2_TR(0x762f59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B762f5c:L762f5c:{c.instructions+=2;NFSU2_TR(0x762f5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762f5f:{NFSU2_TR(0x762f5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762fac;}}
}
B762f61:L762f61:{c.instructions+=2;NFSU2_TR(0x762f61);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B762f63:{NFSU2_TR(0x762f63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762f6b;}}
}
B762f65:L762f65:{c.instructions+=3;NFSU2_TR(0x762f65);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B762f67:{NFSU2_TR(0x762f67);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B762f68:{NFSU2_TR(0x762f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762f6b:L762f6b:{c.instructions+=7;NFSU2_TR(0x762f6b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfull))));
}
B762f6e:{NFSU2_TR(0x762f6e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B762f71:{NFSU2_TR(0x762f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762f74:{NFSU2_TR(0x762f74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762f75:{NFSU2_TR(0x762f75);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762f76:{NFSU2_TR(0x762f76);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba4a4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762f7c:{NFSU2_TR(0x762f7c);
u8 U[4];
__builtin_memmove((U+0),gp(0x78325c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762f82ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B762f82:L762f82:{c.instructions+=3;NFSU2_TR(0x762f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762f85:{NFSU2_TR(0x762f85);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B762f87:{NFSU2_TR(0x762f87);
if(r1(R+518)){{goto L762fac;}}
}
B762f89:L762f89:{c.instructions+=5;NFSU2_TR(0x762f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762f8c:{NFSU2_TR(0x762f8c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B762f8d:{NFSU2_TR(0x762f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762f90:{NFSU2_TR(0x762f90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B762f92:{NFSU2_TR(0x762f92);
if(r1(R+512)){{goto L762f96;}}
}
B762f94:L762f94:{c.instructions+=1;NFSU2_TR(0x762f94);
__builtin_memmove((R+0),(R+24),4);
}
B762f96:L762f96:{c.instructions+=4;NFSU2_TR(0x762f96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762f97:{NFSU2_TR(0x762f97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762f98:{NFSU2_TR(0x762f98);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762f9b:{NFSU2_TR(0x762f9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762fa0ull));
TAIL_STATIC(0x760df0u,760);
}
B762fa0:L762fa0:{c.instructions+=3;NFSU2_TR(0x762fa0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762fa1:{NFSU2_TR(0x762fa1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B762fa4:{NFSU2_TR(0x762fa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762fa9ull));
TAIL_STATIC(0x763295u,763);
}
B762fa9:L762fa9:{c.instructions+=1;NFSU2_TR(0x762fa9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B762fac:L762fac:{c.instructions+=2;NFSU2_TR(0x762fac);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B762fb0:{NFSU2_TR(0x762fb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762fb5ull));
TAIL_STATIC(0x763004u,763);
}
B762fb5:L762fb5:{c.instructions+=2;NFSU2_TR(0x762fb5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B762fb8:{NFSU2_TR(0x762fb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762fdc;}}
}
B762fba:L762fba:{c.instructions+=2;NFSU2_TR(0x762fba);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B762fbc:{NFSU2_TR(0x762fbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L762fc1;}}
}
B762fbe:L762fbe:{c.instructions+=2;NFSU2_TR(0x762fbe);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B762fc0:{NFSU2_TR(0x762fc0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B762fc1:L762fc1:{c.instructions+=8;NFSU2_TR(0x762fc1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfull))));
}
B762fc4:{NFSU2_TR(0x762fc4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B762fc7:{NFSU2_TR(0x762fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762fca:{NFSU2_TR(0x762fca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762fcb:{NFSU2_TR(0x762fcb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762fcc:{NFSU2_TR(0x762fcc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762fcd:{NFSU2_TR(0x762fcd);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba4a4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762fd3:{NFSU2_TR(0x762fd3);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830d4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762fd9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B762fd9:L762fd9:{c.instructions+=1;NFSU2_TR(0x762fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B762fdc:L762fdc:{c.instructions+=3;NFSU2_TR(0x762fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B762fdf:{NFSU2_TR(0x762fdf);
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
B762fe1:{NFSU2_TR(0x762fe1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x763043u,763);}
}
B762fe3:L762fe3:{c.instructions+=2;NFSU2_TR(0x762fe3);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b8714),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B762fe9:{NFSU2_TR(0x762fe9);
if(r1(R+518)){TAIL_STATIC(0x763043u,763);}
}
B762feb:L762feb:{c.instructions+=2;NFSU2_TR(0x762feb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B762fec:{NFSU2_TR(0x762fec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x762ff1ull));
TAIL_STATIC(0x763d45u,763);
}
B762ff1:L762ff1:{c.instructions+=3;NFSU2_TR(0x762ff1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B762ff2:{NFSU2_TR(0x762ff2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B762ff4:{NFSU2_TR(0x762ff4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x762edfu);}goto L762edf;}}
}
B762ffa:L762ffa:{c.instructions+=1;NFSU2_TR(0x762ffa);
TAIL_STATIC(0x763041u,763);
}
B762ffc:L762ffc:{c.instructions+=2;NFSU2_TR(0x762ffc);
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
B762ffe:{NFSU2_TR(0x762ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
TAIL_STATIC(0x763001u,763);
}
XIT:NFSU2_TR_EXIT(0x762,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
