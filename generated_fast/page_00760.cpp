#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_763(u8* __restrict R,Cpu& c);
u32 body_765(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_76b(u8* __restrict R,Cpu& c);
u32 body_76c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x760,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x760,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_760(u8* __restrict R,Cpu& c);
u32 page_760(Cpu& c){return body_760(c.regs.data(),c);}
__attribute__((noinline)) u32 body_760(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x760003:goto L760003;
case 0x760006:c.instructions+=2;goto B760006;
case 0x76000c:c.instructions+=1;goto B76000c;
case 0x76000e:goto L76000e;
case 0x760010:c.instructions+=9;goto B760010;
case 0x760013:c.instructions+=8;goto B760013;
case 0x76001a:c.instructions+=7;goto B76001a;
case 0x76001c:c.instructions+=6;goto B76001c;
case 0x76001f:c.instructions+=5;goto B76001f;
case 0x760022:c.instructions+=4;goto B760022;
case 0x760025:c.instructions+=3;goto B760025;
case 0x760027:c.instructions+=2;goto B760027;
case 0x76002c:c.instructions+=1;goto B76002c;
case 0x76002e:goto L76002e;
case 0x76002f:c.instructions+=1;goto B76002f;
case 0x760034:goto L760034;
case 0x760035:c.instructions+=4;goto B760035;
case 0x760039:c.instructions+=3;goto B760039;
case 0x76003b:c.instructions+=2;goto B76003b;
case 0x760040:c.instructions+=1;goto B760040;
case 0x760042:goto L760042;
case 0x760043:c.instructions+=1;goto B760043;
case 0x760048:goto L760048;
case 0x760049:c.instructions+=2;goto B760049;
case 0x76004c:c.instructions+=1;goto B76004c;
case 0x76004e:goto L76004e;
case 0x760053:goto L760053;
case 0x760059:c.instructions+=1;goto B760059;
case 0x76005d:goto L76005d;
case 0x760061:c.instructions+=1;goto B760061;
case 0x760066:goto L760066;
case 0x760069:c.instructions+=1;goto B760069;
case 0x76006e:goto L76006e;
case 0x76006f:c.instructions+=1;goto B76006f;
case 0x760074:goto L760074;
case 0x760075:c.instructions+=1;goto B760075;
case 0x760076:goto L760076;
case 0x76007b:goto L76007b;
case 0x760081:c.instructions+=1;goto B760081;
case 0x760086:goto L760086;
case 0x760089:c.instructions+=1;goto B760089;
case 0x76008c:goto L76008c;
case 0x760091:goto L760091;
case 0x760092:goto L760092;
case 0x760093:c.instructions+=11;goto B760093;
case 0x760095:c.instructions+=10;goto B760095;
case 0x76009b:c.instructions+=9;goto B76009b;
case 0x7600a0:c.instructions+=8;goto B7600a0;
case 0x7600a3:c.instructions+=7;goto B7600a3;
case 0x7600a4:c.instructions+=6;goto B7600a4;
case 0x7600a6:c.instructions+=5;goto B7600a6;
case 0x7600a9:c.instructions+=4;goto B7600a9;
case 0x7600ac:c.instructions+=3;goto B7600ac;
case 0x7600af:c.instructions+=2;goto B7600af;
case 0x7600b2:c.instructions+=1;goto B7600b2;
case 0x7600b4:goto L7600b4;
case 0x7600b6:c.instructions+=1;goto B7600b6;
case 0x7600bb:goto L7600bb;
case 0x7600be:c.instructions+=11;goto B7600be;
case 0x7600bf:c.instructions+=10;goto B7600bf;
case 0x7600c2:c.instructions+=9;goto B7600c2;
case 0x7600c5:c.instructions+=8;goto B7600c5;
case 0x7600c8:c.instructions+=7;goto B7600c8;
case 0x7600c9:c.instructions+=6;goto B7600c9;
case 0x7600cc:c.instructions+=5;goto B7600cc;
case 0x7600d3:c.instructions+=4;goto B7600d3;
case 0x7600d5:c.instructions+=3;goto B7600d5;
case 0x7600d8:c.instructions+=2;goto B7600d8;
case 0x7600dd:c.instructions+=1;goto B7600dd;
case 0x7600df:goto L7600df;
case 0x7600e1:c.instructions+=4;goto B7600e1;
case 0x7600e2:c.instructions+=3;goto B7600e2;
case 0x7600e3:c.instructions+=2;goto B7600e3;
case 0x7600e6:c.instructions+=1;goto B7600e6;
case 0x7600eb:goto L7600eb;
case 0x7600ee:goto L7600ee;
case 0x7600f0:c.instructions+=3;goto B7600f0;
case 0x7600f2:c.instructions+=2;goto B7600f2;
case 0x7600f6:c.instructions+=1;goto B7600f6;
case 0x7600fc:goto L7600fc;
case 0x7600ff:c.instructions+=4;goto B7600ff;
case 0x760102:c.instructions+=3;goto B760102;
case 0x760105:c.instructions+=2;goto B760105;
case 0x760108:c.instructions+=1;goto B760108;
case 0x76010e:goto L76010e;
case 0x760111:c.instructions+=3;goto B760111;
case 0x760114:c.instructions+=2;goto B760114;
case 0x76011a:c.instructions+=1;goto B76011a;
case 0x76011d:goto L76011d;
case 0x760120:c.instructions+=1;goto B760120;
case 0x760122:goto L760122;
case 0x760125:c.instructions+=5;goto B760125;
case 0x760128:c.instructions+=4;goto B760128;
case 0x76012a:c.instructions+=3;goto B76012a;
case 0x76012b:c.instructions+=2;goto B76012b;
case 0x76012e:c.instructions+=1;goto B76012e;
case 0x760130:goto L760130;
case 0x760133:c.instructions+=3;goto B760133;
case 0x760136:c.instructions+=2;goto B760136;
case 0x760137:c.instructions+=1;goto B760137;
case 0x76013a:goto L76013a;
case 0x76013c:c.instructions+=4;goto B76013c;
case 0x76013d:c.instructions+=3;goto B76013d;
case 0x760140:c.instructions+=2;goto B760140;
case 0x760147:c.instructions+=1;goto B760147;
case 0x760149:goto L760149;
case 0x76014b:c.instructions+=11;goto B76014b;
case 0x760151:c.instructions+=10;goto B760151;
case 0x760153:c.instructions+=9;goto B760153;
case 0x760155:c.instructions+=8;goto B760155;
case 0x760158:c.instructions+=7;goto B760158;
case 0x760159:c.instructions+=6;goto B760159;
case 0x76015a:c.instructions+=5;goto B76015a;
case 0x760160:c.instructions+=4;goto B760160;
case 0x760161:c.instructions+=3;goto B760161;
case 0x760163:c.instructions+=2;goto B760163;
case 0x760166:c.instructions+=1;goto B760166;
case 0x76016c:goto L76016c;
case 0x76016e:c.instructions+=1;goto B76016e;
case 0x760170:goto L760170;
case 0x760173:c.instructions+=3;goto B760173;
case 0x760176:c.instructions+=2;goto B760176;
case 0x760178:c.instructions+=1;goto B760178;
case 0x76017a:goto L76017a;
case 0x76017d:c.instructions+=4;goto B76017d;
case 0x760180:c.instructions+=3;goto B760180;
case 0x760182:c.instructions+=2;goto B760182;
case 0x760185:c.instructions+=1;goto B760185;
case 0x760187:goto L760187;
case 0x760189:goto L760189;
case 0x76018f:goto L76018f;
case 0x760192:goto L760192;
case 0x760194:goto L760194;
case 0x760197:c.instructions+=2;goto B760197;
case 0x760199:c.instructions+=1;goto B760199;
case 0x76019f:goto L76019f;
case 0x7601a2:c.instructions+=1;goto B7601a2;
case 0x7601a4:goto L7601a4;
case 0x7601a6:c.instructions+=3;goto B7601a6;
case 0x7601a7:c.instructions+=2;goto B7601a7;
case 0x7601aa:c.instructions+=1;goto B7601aa;
case 0x7601ac:goto L7601ac;
case 0x7601b1:goto L7601b1;
case 0x7601b7:c.instructions+=1;goto B7601b7;
case 0x7601bc:goto L7601bc;
case 0x7601be:c.instructions+=1;goto B7601be;
case 0x7601c0:goto L7601c0;
case 0x7601c1:c.instructions+=6;goto B7601c1;
case 0x7601c4:c.instructions+=5;goto B7601c4;
case 0x7601c5:c.instructions+=4;goto B7601c5;
case 0x7601c8:c.instructions+=3;goto B7601c8;
case 0x7601cb:c.instructions+=2;goto B7601cb;
case 0x7601cd:c.instructions+=1;goto B7601cd;
case 0x7601d3:goto L7601d3;
case 0x7601d5:c.instructions+=1;goto B7601d5;
case 0x7601d7:goto L7601d7;
case 0x7601da:c.instructions+=3;goto B7601da;
case 0x7601dd:c.instructions+=2;goto B7601dd;
case 0x7601e0:c.instructions+=1;goto B7601e0;
case 0x7601e2:goto L7601e2;
case 0x7601e8:goto L7601e8;
case 0x7601eb:c.instructions+=1;goto B7601eb;
case 0x7601ed:goto L7601ed;
case 0x7601f0:c.instructions+=1;goto B7601f0;
case 0x7601f5:goto L7601f5;
case 0x7601f6:goto L7601f6;
case 0x7601f9:c.instructions+=1;goto B7601f9;
case 0x7601fb:goto L7601fb;
case 0x7601fd:c.instructions+=2;goto B7601fd;
case 0x760202:c.instructions+=1;goto B760202;
case 0x760204:goto L760204;
case 0x760207:c.instructions+=2;goto B760207;
case 0x76020a:c.instructions+=1;goto B76020a;
case 0x76020c:goto L76020c;
case 0x76020e:c.instructions+=1;goto B76020e;
case 0x760210:goto L760210;
case 0x760215:goto L760215;
case 0x76021b:c.instructions+=1;goto B76021b;
case 0x760220:goto L760220;
case 0x760222:c.instructions+=1;goto B760222;
case 0x760224:goto L760224;
case 0x760227:goto L760227;
case 0x760228:c.instructions+=1;goto B760228;
case 0x760229:goto L760229;
case 0x76022c:c.instructions+=3;goto B76022c;
case 0x76022f:c.instructions+=2;goto B76022f;
case 0x760230:c.instructions+=1;goto B760230;
case 0x760235:goto L760235;
case 0x760236:c.instructions+=1;goto B760236;
case 0x760237:goto L760237;
case 0x760239:c.instructions+=2;goto B760239;
case 0x76023e:c.instructions+=1;goto B76023e;
case 0x760243:goto L760243;
case 0x760246:c.instructions+=2;goto B760246;
case 0x76024c:c.instructions+=1;goto B76024c;
case 0x76024e:goto L76024e;
case 0x760250:c.instructions+=9;goto B760250;
case 0x760253:c.instructions+=8;goto B760253;
case 0x76025a:c.instructions+=7;goto B76025a;
case 0x76025c:c.instructions+=6;goto B76025c;
case 0x76025f:c.instructions+=5;goto B76025f;
case 0x760262:c.instructions+=4;goto B760262;
case 0x760265:c.instructions+=3;goto B760265;
case 0x760267:c.instructions+=2;goto B760267;
case 0x76026c:c.instructions+=1;goto B76026c;
case 0x76026e:goto L76026e;
case 0x76026f:c.instructions+=1;goto B76026f;
case 0x760274:goto L760274;
case 0x760275:c.instructions+=4;goto B760275;
case 0x760279:c.instructions+=3;goto B760279;
case 0x76027b:c.instructions+=2;goto B76027b;
case 0x760280:c.instructions+=1;goto B760280;
case 0x760282:goto L760282;
case 0x760285:c.instructions+=3;goto B760285;
case 0x760288:c.instructions+=2;goto B760288;
case 0x760289:c.instructions+=1;goto B760289;
case 0x76028e:goto L76028e;
case 0x760291:c.instructions+=2;goto B760291;
case 0x760294:c.instructions+=1;goto B760294;
case 0x760296:goto L760296;
case 0x76029b:goto L76029b;
case 0x7602a1:c.instructions+=1;goto B7602a1;
case 0x7602a6:goto L7602a6;
case 0x7602a9:c.instructions+=1;goto B7602a9;
case 0x7602ad:goto L7602ad;
case 0x7602b1:c.instructions+=1;goto B7602b1;
case 0x7602b6:goto L7602b6;
case 0x7602b9:c.instructions+=1;goto B7602b9;
case 0x7602be:goto L7602be;
case 0x7602bf:c.instructions+=1;goto B7602bf;
case 0x7602c4:goto L7602c4;
case 0x7602c5:c.instructions+=1;goto B7602c5;
case 0x7602c6:goto L7602c6;
case 0x7602cb:goto L7602cb;
case 0x7602d1:c.instructions+=1;goto B7602d1;
case 0x7602d6:goto L7602d6;
case 0x7602d9:c.instructions+=1;goto B7602d9;
case 0x7602dc:goto L7602dc;
case 0x7602e1:goto L7602e1;
case 0x7602e2:goto L7602e2;
case 0x7602e3:c.instructions+=10;goto B7602e3;
case 0x7602e5:c.instructions+=9;goto B7602e5;
case 0x7602e8:c.instructions+=8;goto B7602e8;
case 0x7602eb:c.instructions+=7;goto B7602eb;
case 0x7602ec:c.instructions+=6;goto B7602ec;
case 0x7602ed:c.instructions+=5;goto B7602ed;
case 0x7602ef:c.instructions+=4;goto B7602ef;
case 0x7602f1:c.instructions+=3;goto B7602f1;
case 0x7602f8:c.instructions+=2;goto B7602f8;
case 0x7602fb:c.instructions+=1;goto B7602fb;
case 0x7602fd:goto L7602fd;
case 0x760300:c.instructions+=2;goto B760300;
case 0x760304:c.instructions+=1;goto B760304;
case 0x760306:goto L760306;
case 0x76030a:c.instructions+=1;goto B76030a;
case 0x760311:goto L760311;
case 0x760316:c.instructions+=2;goto B760316;
case 0x760318:c.instructions+=1;goto B760318;
case 0x76031a:goto L76031a;
case 0x76031d:c.instructions+=1;goto B76031d;
case 0x76031f:goto L76031f;
case 0x760325:c.instructions+=1;goto B760325;
case 0x760327:goto L760327;
case 0x76032b:goto L76032b;
case 0x76032d:c.instructions+=5;goto B76032d;
case 0x76032f:c.instructions+=4;goto B76032f;
case 0x760330:c.instructions+=3;goto B760330;
case 0x760332:c.instructions+=2;goto B760332;
case 0x760334:c.instructions+=1;goto B760334;
case 0x760336:goto L760336;
case 0x760337:c.instructions+=1;goto B760337;
case 0x760339:goto L760339;
case 0x76033a:c.instructions+=1;goto B76033a;
case 0x76033c:goto L76033c;
case 0x760343:c.instructions+=1;goto B760343;
case 0x760345:goto L760345;
case 0x76034c:c.instructions+=1;goto B76034c;
case 0x76034e:goto L76034e;
case 0x760355:goto L760355;
case 0x760358:c.instructions+=1;goto B760358;
case 0x76035a:goto L76035a;
case 0x76035d:c.instructions+=1;goto B76035d;
case 0x76035f:goto L76035f;
case 0x760362:c.instructions+=1;goto B760362;
case 0x760364:goto L760364;
case 0x760367:c.instructions+=1;goto B760367;
case 0x760369:goto L760369;
case 0x76036e:goto L76036e;
case 0x760374:c.instructions+=1;goto B760374;
case 0x760379:goto L760379;
case 0x76037b:c.instructions+=2;goto B76037b;
case 0x76037e:c.instructions+=1;goto B76037e;
case 0x760383:goto L760383;
case 0x760386:c.instructions+=1;goto B760386;
case 0x760388:goto L760388;
case 0x76038f:c.instructions+=1;goto B76038f;
case 0x760391:goto L760391;
case 0x760398:c.instructions+=1;goto B760398;
case 0x76039a:goto L76039a;
case 0x76039d:goto L76039d;
case 0x76039f:c.instructions+=7;goto B76039f;
case 0x7603a4:c.instructions+=6;goto B7603a4;
case 0x7603a6:c.instructions+=5;goto B7603a6;
case 0x7603ab:c.instructions+=4;goto B7603ab;
case 0x7603ad:c.instructions+=3;goto B7603ad;
case 0x7603ae:c.instructions+=2;goto B7603ae;
case 0x7603b3:c.instructions+=1;goto B7603b3;
case 0x7603b5:goto L7603b5;
case 0x7603b7:goto L7603b7;
case 0x7603b9:c.instructions+=1;goto B7603b9;
case 0x7603bb:goto L7603bb;
case 0x7603bd:c.instructions+=1;goto B7603bd;
case 0x7603bf:goto L7603bf;
case 0x7603c4:c.instructions+=1;goto B7603c4;
case 0x7603c6:goto L7603c6;
case 0x7603cb:c.instructions+=1;goto B7603cb;
case 0x7603cd:goto L7603cd;
case 0x7603d4:c.instructions+=1;goto B7603d4;
case 0x7603d6:goto L7603d6;
case 0x7603dd:c.instructions+=1;goto B7603dd;
case 0x7603df:goto L7603df;
case 0x7603e2:c.instructions+=1;goto B7603e2;
case 0x7603e4:goto L7603e4;
case 0x7603e9:c.instructions+=1;goto B7603e9;
case 0x7603eb:goto L7603eb;
case 0x7603f0:c.instructions+=1;goto B7603f0;
case 0x7603f2:goto L7603f2;
case 0x7603f4:c.instructions+=1;goto B7603f4;
case 0x7603f6:goto L7603f6;
case 0x7603fb:goto L7603fb;
case 0x760401:c.instructions+=1;goto B760401;
case 0x760406:goto L760406;
case 0x760408:goto L760408;
case 0x76040b:c.instructions+=1;goto B76040b;
case 0x760410:goto L760410;
case 0x760417:c.instructions+=1;goto B760417;
case 0x760419:goto L760419;
case 0x760420:goto L760420;
case 0x760423:c.instructions+=3;goto B760423;
case 0x760425:c.instructions+=2;goto B760425;
case 0x76042a:c.instructions+=1;goto B76042a;
case 0x76042c:goto L76042c;
case 0x760432:c.instructions+=4;goto B760432;
case 0x760434:c.instructions+=3;goto B760434;
case 0x760437:c.instructions+=2;goto B760437;
case 0x760439:c.instructions+=1;goto B760439;
case 0x76043b:goto L76043b;
case 0x76043d:c.instructions+=1;goto B76043d;
case 0x76043e:goto L76043e;
case 0x760440:c.instructions+=1;goto B760440;
case 0x760442:goto L760442;
case 0x760446:c.instructions+=3;goto B760446;
case 0x76044c:c.instructions+=2;goto B76044c;
case 0x760453:c.instructions+=1;goto B760453;
case 0x760455:goto L760455;
case 0x760459:goto L760459;
case 0x76045c:c.instructions+=1;goto B76045c;
case 0x76045e:goto L76045e;
case 0x760460:goto L760460;
case 0x760462:c.instructions+=1;goto B760462;
case 0x760464:goto L760464;
case 0x76046a:c.instructions+=1;goto B76046a;
case 0x76046c:goto L76046c;
case 0x76046e:c.instructions+=1;goto B76046e;
case 0x760470:goto L760470;
case 0x760476:goto L760476;
case 0x76047b:goto L76047b;
case 0x76047d:c.instructions+=3;goto B76047d;
case 0x760480:c.instructions+=2;goto B760480;
case 0x760482:c.instructions+=1;goto B760482;
case 0x760484:goto L760484;
case 0x760489:goto L760489;
case 0x76048f:c.instructions+=1;goto B76048f;
case 0x760494:goto L760494;
case 0x760497:goto L760497;
case 0x760499:c.instructions+=1;goto B760499;
case 0x76049e:goto L76049e;
case 0x7604a1:c.instructions+=12;goto B7604a1;
case 0x7604a3:c.instructions+=11;goto B7604a3;
case 0x7604a4:c.instructions+=10;goto B7604a4;
case 0x7604a7:c.instructions+=9;goto B7604a7;
case 0x7604ad:c.instructions+=8;goto B7604ad;
case 0x7604b0:c.instructions+=7;goto B7604b0;
case 0x7604b2:c.instructions+=6;goto B7604b2;
case 0x7604b5:c.instructions+=5;goto B7604b5;
case 0x7604b6:c.instructions+=4;goto B7604b6;
case 0x7604b9:c.instructions+=3;goto B7604b9;
case 0x7604bc:c.instructions+=2;goto B7604bc;
case 0x7604bf:c.instructions+=1;goto B7604bf;
case 0x7604c5:goto L7604c5;
case 0x7604c7:c.instructions+=2;goto B7604c7;
case 0x7604c9:c.instructions+=1;goto B7604c9;
case 0x7604cb:goto L7604cb;
case 0x7604cc:c.instructions+=1;goto B7604cc;
case 0x7604d2:goto L7604d2;
case 0x7604d4:c.instructions+=1;goto B7604d4;
case 0x7604d6:goto L7604d6;
case 0x7604d7:c.instructions+=1;goto B7604d7;
case 0x7604dd:goto L7604dd;
case 0x7604e3:goto L7604e3;
case 0x7604e4:c.instructions+=1;goto B7604e4;
case 0x7604e9:goto L7604e9;
case 0x7604ea:c.instructions+=1;goto B7604ea;
case 0x7604ec:goto L7604ec;
case 0x7604ef:c.instructions+=1;goto B7604ef;
case 0x7604f1:goto L7604f1;
case 0x7604f5:c.instructions+=1;goto B7604f5;
case 0x7604f7:goto L7604f7;
case 0x7604fa:c.instructions+=1;goto B7604fa;
case 0x7604fc:goto L7604fc;
case 0x760500:goto L760500;
case 0x760501:c.instructions+=2;goto B760501;
case 0x760502:c.instructions+=1;goto B760502;
case 0x760507:goto L760507;
case 0x76050b:c.instructions+=15;goto B76050b;
case 0x76050d:c.instructions+=14;goto B76050d;
case 0x760510:c.instructions+=13;goto B760510;
case 0x760517:c.instructions+=12;goto B760517;
case 0x760519:c.instructions+=11;goto B760519;
case 0x76051c:c.instructions+=10;goto B76051c;
case 0x76051f:c.instructions+=9;goto B76051f;
case 0x760522:c.instructions+=8;goto B760522;
case 0x760523:c.instructions+=7;goto B760523;
case 0x760524:c.instructions+=6;goto B760524;
case 0x760526:c.instructions+=5;goto B760526;
case 0x760529:c.instructions+=4;goto B760529;
case 0x76052c:c.instructions+=3;goto B76052c;
case 0x760530:c.instructions+=2;goto B760530;
case 0x760534:c.instructions+=1;goto B760534;
case 0x760536:goto L760536;
case 0x760538:c.instructions+=1;goto B760538;
case 0x76053a:goto L76053a;
case 0x76053e:c.instructions+=1;goto B76053e;
case 0x760540:goto L760540;
case 0x760542:c.instructions+=3;goto B760542;
case 0x760544:c.instructions+=2;goto B760544;
case 0x760545:c.instructions+=1;goto B760545;
case 0x76054a:goto L76054a;
case 0x76054d:c.instructions+=3;goto B76054d;
case 0x760550:c.instructions+=2;goto B760550;
case 0x760553:c.instructions+=1;goto B760553;
case 0x760555:goto L760555;
case 0x76055a:goto L76055a;
case 0x760560:c.instructions+=1;goto B760560;
case 0x760562:goto L760562;
case 0x760566:c.instructions+=1;goto B760566;
case 0x760568:goto L760568;
case 0x76056c:c.instructions+=1;goto B76056c;
case 0x76056e:goto L76056e;
case 0x760570:c.instructions+=2;goto B760570;
case 0x760574:c.instructions+=1;goto B760574;
case 0x760577:goto L760577;
case 0x760579:goto L760579;
case 0x76057a:goto L76057a;
case 0x76057b:c.instructions+=3;goto B76057b;
case 0x76057c:c.instructions+=2;goto B76057c;
case 0x76057d:c.instructions+=1;goto B76057d;
case 0x76057e:goto L76057e;
case 0x760582:c.instructions+=5;goto B760582;
case 0x760584:c.instructions+=4;goto B760584;
case 0x760587:c.instructions+=3;goto B760587;
case 0x760588:c.instructions+=2;goto B760588;
case 0x760589:c.instructions+=1;goto B760589;
case 0x76058e:goto L76058e;
case 0x760591:c.instructions+=2;goto B760591;
case 0x760593:c.instructions+=1;goto B760593;
case 0x760595:goto L760595;
case 0x760599:c.instructions+=1;goto B760599;
case 0x76059b:goto L76059b;
case 0x76059e:c.instructions+=2;goto B76059e;
case 0x76059f:c.instructions+=1;goto B76059f;
case 0x7605a4:goto L7605a4;
case 0x7605a7:c.instructions+=3;goto B7605a7;
case 0x7605a8:c.instructions+=2;goto B7605a8;
case 0x7605a9:c.instructions+=1;goto B7605a9;
case 0x7605ab:goto L7605ab;
case 0x7605ad:c.instructions+=3;goto B7605ad;
case 0x7605af:c.instructions+=2;goto B7605af;
case 0x7605b0:c.instructions+=1;goto B7605b0;
case 0x7605b5:goto L7605b5;
case 0x7605b8:c.instructions+=2;goto B7605b8;
case 0x7605bb:c.instructions+=1;goto B7605bb;
case 0x7605bd:goto L7605bd;
case 0x7605be:c.instructions+=1;goto B7605be;
case 0x7605c3:goto L7605c3;
case 0x7605c4:c.instructions+=1;goto B7605c4;
case 0x7605c9:goto L7605c9;
case 0x7605cb:c.instructions+=2;goto B7605cb;
case 0x7605d0:c.instructions+=1;goto B7605d0;
case 0x7605d5:goto L7605d5;
case 0x7605d9:c.instructions+=11;goto B7605d9;
case 0x7605dd:c.instructions+=10;goto B7605dd;
case 0x7605e0:c.instructions+=9;goto B7605e0;
case 0x7605e3:c.instructions+=8;goto B7605e3;
case 0x7605e6:c.instructions+=7;goto B7605e6;
case 0x7605e9:c.instructions+=6;goto B7605e9;
case 0x7605ea:c.instructions+=5;goto B7605ea;
case 0x7605ed:c.instructions+=4;goto B7605ed;
case 0x7605ee:c.instructions+=3;goto B7605ee;
case 0x7605f0:c.instructions+=2;goto B7605f0;
case 0x7605f1:c.instructions+=1;goto B7605f1;
case 0x7605f6:goto L7605f6;
case 0x7605f9:c.instructions+=3;goto B7605f9;
case 0x7605fc:c.instructions+=2;goto B7605fc;
case 0x760600:c.instructions+=1;goto B760600;
case 0x760605:goto L760605;
case 0x760608:c.instructions+=1;goto B760608;
case 0x76060d:goto L76060d;
case 0x76060e:goto L76060e;
case 0x760612:c.instructions+=1;goto B760612;
case 0x760614:goto L760614;
case 0x760617:c.instructions+=1;goto B760617;
case 0x76061c:goto L76061c;
case 0x76061d:goto L76061d;
case 0x76061e:goto L76061e;
case 0x760620:c.instructions+=2;goto B760620;
case 0x760625:c.instructions+=1;goto B760625;
case 0x76062a:goto L76062a;
case 0x76062e:c.instructions+=10;goto B76062e;
case 0x760632:c.instructions+=9;goto B760632;
case 0x760635:c.instructions+=8;goto B760635;
case 0x760638:c.instructions+=7;goto B760638;
case 0x76063b:c.instructions+=6;goto B76063b;
case 0x76063e:c.instructions+=5;goto B76063e;
case 0x76063f:c.instructions+=4;goto B76063f;
case 0x760642:c.instructions+=3;goto B760642;
case 0x760643:c.instructions+=2;goto B760643;
case 0x760646:c.instructions+=1;goto B760646;
case 0x76064b:goto L76064b;
case 0x76064e:c.instructions+=3;goto B76064e;
case 0x760651:c.instructions+=2;goto B760651;
case 0x760655:c.instructions+=1;goto B760655;
case 0x76065a:goto L76065a;
case 0x76065d:c.instructions+=1;goto B76065d;
case 0x760662:goto L760662;
case 0x760663:goto L760663;
case 0x760667:c.instructions+=1;goto B760667;
case 0x760669:goto L760669;
case 0x76066c:c.instructions+=1;goto B76066c;
case 0x760671:goto L760671;
case 0x760672:goto L760672;
case 0x760673:goto L760673;
case 0x760674:c.instructions+=3;goto B760674;
case 0x760678:c.instructions+=2;goto B760678;
case 0x760679:c.instructions+=1;goto B760679;
case 0x76067e:goto L76067e;
case 0x760681:c.instructions+=2;goto B760681;
case 0x760682:c.instructions+=1;goto B760682;
case 0x760684:goto L760684;
case 0x760689:goto L760689;
case 0x76068f:c.instructions+=3;goto B76068f;
case 0x760692:c.instructions+=2;goto B760692;
case 0x760693:c.instructions+=1;goto B760693;
case 0x760694:goto L760694;
case 0x760695:c.instructions+=5;goto B760695;
case 0x760699:c.instructions+=4;goto B760699;
case 0x76069b:c.instructions+=3;goto B76069b;
case 0x76069f:c.instructions+=2;goto B76069f;
case 0x7606a0:c.instructions+=1;goto B7606a0;
case 0x7606a6:goto L7606a6;
case 0x7606a8:c.instructions+=2;goto B7606a8;
case 0x7606ab:c.instructions+=1;goto B7606ab;
case 0x7606ad:goto L7606ad;
case 0x7606b3:goto L7606b3;
case 0x7606b5:goto L7606b5;
case 0x7606b7:goto L7606b7;
case 0x7606b9:c.instructions+=1;goto B7606b9;
case 0x7606bb:goto L7606bb;
case 0x7606bc:c.instructions+=1;goto B7606bc;
case 0x7606c1:goto L7606c1;
case 0x7606c2:c.instructions+=2;goto B7606c2;
case 0x7606c5:c.instructions+=1;goto B7606c5;
case 0x7606c7:goto L7606c7;
case 0x7606c9:c.instructions+=8;goto B7606c9;
case 0x7606cc:c.instructions+=7;goto B7606cc;
case 0x7606cf:c.instructions+=6;goto B7606cf;
case 0x7606d6:c.instructions+=5;goto B7606d6;
case 0x7606d8:c.instructions+=4;goto B7606d8;
case 0x7606db:c.instructions+=3;goto B7606db;
case 0x7606df:c.instructions+=2;goto B7606df;
case 0x7606e2:c.instructions+=1;goto B7606e2;
case 0x7606e4:goto L7606e4;
case 0x7606e5:c.instructions+=2;goto B7606e5;
case 0x7606e6:c.instructions+=1;goto B7606e6;
case 0x7606e7:goto L7606e7;
case 0x7606e9:c.instructions+=2;goto B7606e9;
case 0x7606ee:c.instructions+=1;goto B7606ee;
case 0x7606f3:goto L7606f3;
case 0x7606f6:c.instructions+=2;goto B7606f6;
case 0x7606fc:c.instructions+=1;goto B7606fc;
case 0x7606fe:goto L7606fe;
case 0x760700:c.instructions+=9;goto B760700;
case 0x760703:c.instructions+=8;goto B760703;
case 0x76070a:c.instructions+=7;goto B76070a;
case 0x76070c:c.instructions+=6;goto B76070c;
case 0x76070f:c.instructions+=5;goto B76070f;
case 0x760712:c.instructions+=4;goto B760712;
case 0x760715:c.instructions+=3;goto B760715;
case 0x760717:c.instructions+=2;goto B760717;
case 0x76071c:c.instructions+=1;goto B76071c;
case 0x76071e:goto L76071e;
case 0x76071f:c.instructions+=1;goto B76071f;
case 0x760724:goto L760724;
case 0x760725:c.instructions+=4;goto B760725;
case 0x760729:c.instructions+=3;goto B760729;
case 0x76072b:c.instructions+=2;goto B76072b;
case 0x760730:c.instructions+=1;goto B760730;
case 0x760732:goto L760732;
case 0x760735:c.instructions+=3;goto B760735;
case 0x760738:c.instructions+=2;goto B760738;
case 0x760739:c.instructions+=1;goto B760739;
case 0x76073e:goto L76073e;
case 0x760741:c.instructions+=2;goto B760741;
case 0x760744:c.instructions+=1;goto B760744;
case 0x760746:goto L760746;
case 0x76074b:goto L76074b;
case 0x760751:c.instructions+=1;goto B760751;
case 0x760756:goto L760756;
case 0x760759:c.instructions+=1;goto B760759;
case 0x76075d:goto L76075d;
case 0x760761:c.instructions+=1;goto B760761;
case 0x760766:goto L760766;
case 0x760769:c.instructions+=1;goto B760769;
case 0x76076e:goto L76076e;
case 0x76076f:c.instructions+=1;goto B76076f;
case 0x760774:goto L760774;
case 0x760775:c.instructions+=1;goto B760775;
case 0x760776:goto L760776;
case 0x76077b:goto L76077b;
case 0x760781:c.instructions+=1;goto B760781;
case 0x760786:goto L760786;
case 0x760789:c.instructions+=1;goto B760789;
case 0x76078c:goto L76078c;
case 0x760791:goto L760791;
case 0x760792:goto L760792;
case 0x760793:c.instructions+=10;goto B760793;
case 0x760795:c.instructions+=9;goto B760795;
case 0x760798:c.instructions+=8;goto B760798;
case 0x76079c:c.instructions+=7;goto B76079c;
case 0x7607a0:c.instructions+=6;goto B7607a0;
case 0x7607a1:c.instructions+=5;goto B7607a1;
case 0x7607a4:c.instructions+=4;goto B7607a4;
case 0x7607a5:c.instructions+=3;goto B7607a5;
case 0x7607a6:c.instructions+=2;goto B7607a6;
case 0x7607a8:c.instructions+=1;goto B7607a8;
case 0x7607ae:goto L7607ae;
case 0x7607b1:c.instructions+=11;goto B7607b1;
case 0x7607b3:c.instructions+=10;goto B7607b3;
case 0x7607b6:c.instructions+=9;goto B7607b6;
case 0x7607b9:c.instructions+=8;goto B7607b9;
case 0x7607bc:c.instructions+=7;goto B7607bc;
case 0x7607c3:c.instructions+=6;goto B7607c3;
case 0x7607c5:c.instructions+=5;goto B7607c5;
case 0x7607c8:c.instructions+=4;goto B7607c8;
case 0x7607ca:c.instructions+=3;goto B7607ca;
case 0x7607cd:c.instructions+=2;goto B7607cd;
case 0x7607d0:c.instructions+=1;goto B7607d0;
case 0x7607d6:goto L7607d6;
case 0x7607d9:c.instructions+=1;goto B7607d9;
case 0x7607db:goto L7607db;
case 0x7607de:c.instructions+=2;goto B7607de;
case 0x7607e0:c.instructions+=1;goto B7607e0;
case 0x7607e2:goto L7607e2;
case 0x7607e5:c.instructions+=5;goto B7607e5;
case 0x7607e7:c.instructions+=4;goto B7607e7;
case 0x7607e9:c.instructions+=3;goto B7607e9;
case 0x7607ec:c.instructions+=2;goto B7607ec;
case 0x7607f3:c.instructions+=1;goto B7607f3;
case 0x7607f8:goto L7607f8;
case 0x7607fa:c.instructions+=7;goto B7607fa;
case 0x7607fd:c.instructions+=6;goto B7607fd;
case 0x7607fe:c.instructions+=5;goto B7607fe;
case 0x760801:c.instructions+=4;goto B760801;
case 0x760803:c.instructions+=3;goto B760803;
case 0x760804:c.instructions+=2;goto B760804;
case 0x760807:c.instructions+=1;goto B760807;
case 0x76080d:goto L76080d;
case 0x76080f:c.instructions+=1;goto B76080f;
case 0x760811:goto L760811;
case 0x760817:goto L760817;
case 0x760819:c.instructions+=3;goto B760819;
case 0x76081a:c.instructions+=2;goto B76081a;
case 0x76081c:c.instructions+=1;goto B76081c;
case 0x76081e:goto L76081e;
case 0x760823:goto L760823;
case 0x760829:c.instructions+=1;goto B760829;
case 0x76082e:goto L76082e;
case 0x760830:c.instructions+=1;goto B760830;
case 0x760832:goto L760832;
case 0x760835:c.instructions+=1;goto B760835;
case 0x76083b:goto L76083b;
case 0x76083c:c.instructions+=1;goto B76083c;
case 0x760841:goto L760841;
case 0x760842:goto L760842;
case 0x760845:c.instructions+=1;goto B760845;
case 0x76084a:goto L76084a;
case 0x76084c:c.instructions+=6;goto B76084c;
case 0x76084f:c.instructions+=5;goto B76084f;
case 0x760852:c.instructions+=4;goto B760852;
case 0x760856:c.instructions+=3;goto B760856;
case 0x760858:c.instructions+=2;goto B760858;
case 0x76085a:c.instructions+=1;goto B76085a;
case 0x760860:goto L760860;
case 0x760862:c.instructions+=1;goto B760862;
case 0x760864:goto L760864;
case 0x760867:c.instructions+=1;goto B760867;
case 0x760869:goto L760869;
case 0x76086b:c.instructions+=1;goto B76086b;
case 0x76086d:goto L76086d;
case 0x76086f:goto L76086f;
case 0x760871:c.instructions+=7;goto B760871;
case 0x760874:c.instructions+=6;goto B760874;
case 0x760877:c.instructions+=5;goto B760877;
case 0x760879:c.instructions+=4;goto B760879;
case 0x76087b:c.instructions+=3;goto B76087b;
case 0x76087e:c.instructions+=2;goto B76087e;
case 0x760881:c.instructions+=1;goto B760881;
case 0x760887:goto L760887;
case 0x76088a:c.instructions+=3;goto B76088a;
case 0x76088c:c.instructions+=2;goto B76088c;
case 0x76088e:c.instructions+=1;goto B76088e;
case 0x760894:goto L760894;
case 0x760896:c.instructions+=1;goto B760896;
case 0x760898:goto L760898;
case 0x76089a:c.instructions+=3;goto B76089a;
case 0x76089b:c.instructions+=2;goto B76089b;
case 0x76089e:c.instructions+=1;goto B76089e;
case 0x7608a3:goto L7608a3;
case 0x7608a4:c.instructions+=2;goto B7608a4;
case 0x7608a7:c.instructions+=1;goto B7608a7;
case 0x7608a9:goto L7608a9;
case 0x7608ac:c.instructions+=3;goto B7608ac;
case 0x7608ad:c.instructions+=2;goto B7608ad;
case 0x7608b0:c.instructions+=1;goto B7608b0;
case 0x7608b2:goto L7608b2;
case 0x7608b6:c.instructions+=1;goto B7608b6;
case 0x7608b8:goto L7608b8;
case 0x7608bb:c.instructions+=1;goto B7608bb;
case 0x7608bd:goto L7608bd;
case 0x7608c0:c.instructions+=9;goto B7608c0;
case 0x7608c2:c.instructions+=8;goto B7608c2;
case 0x7608c5:c.instructions+=7;goto B7608c5;
case 0x7608c6:c.instructions+=6;goto B7608c6;
case 0x7608c8:c.instructions+=5;goto B7608c8;
case 0x7608cb:c.instructions+=4;goto B7608cb;
case 0x7608cc:c.instructions+=3;goto B7608cc;
case 0x7608ce:c.instructions+=2;goto B7608ce;
case 0x7608d1:c.instructions+=1;goto B7608d1;
case 0x7608d7:goto L7608d7;
case 0x7608d9:c.instructions+=1;goto B7608d9;
case 0x7608db:goto L7608db;
case 0x7608e1:goto L7608e1;
case 0x7608e3:c.instructions+=1;goto B7608e3;
case 0x7608e5:goto L7608e5;
case 0x7608e9:c.instructions+=1;goto B7608e9;
case 0x7608eb:goto L7608eb;
case 0x7608ed:c.instructions+=2;goto B7608ed;
case 0x7608f2:c.instructions+=1;goto B7608f2;
case 0x7608f4:goto L7608f4;
case 0x7608f7:c.instructions+=2;goto B7608f7;
case 0x7608f9:c.instructions+=1;goto B7608f9;
case 0x7608fb:goto L7608fb;
case 0x7608fe:c.instructions+=3;goto B7608fe;
case 0x760900:c.instructions+=2;goto B760900;
case 0x760904:c.instructions+=1;goto B760904;
case 0x760906:goto L760906;
case 0x760909:c.instructions+=1;goto B760909;
case 0x76090b:goto L76090b;
case 0x76090f:c.instructions+=1;goto B76090f;
case 0x760911:goto L760911;
case 0x760914:c.instructions+=1;goto B760914;
case 0x760916:goto L760916;
case 0x760918:c.instructions+=3;goto B760918;
case 0x76091a:c.instructions+=2;goto B76091a;
case 0x76091d:c.instructions+=1;goto B76091d;
case 0x760922:goto L760922;
case 0x760925:c.instructions+=2;goto B760925;
case 0x760929:c.instructions+=1;goto B760929;
case 0x76092b:goto L76092b;
case 0x76092e:goto L76092e;
case 0x76092f:goto L76092f;
case 0x760932:c.instructions+=2;goto B760932;
case 0x760935:c.instructions+=1;goto B760935;
case 0x76093b:goto L76093b;
case 0x76093d:goto L76093d;
case 0x76093f:c.instructions+=4;goto B76093f;
case 0x760943:c.instructions+=3;goto B760943;
case 0x760945:c.instructions+=2;goto B760945;
case 0x760947:c.instructions+=1;goto B760947;
case 0x760949:goto L760949;
case 0x76094b:c.instructions+=1;goto B76094b;
case 0x76094d:goto L76094d;
case 0x760950:c.instructions+=1;goto B760950;
case 0x760953:goto L760953;
case 0x760956:c.instructions+=1;goto B760956;
case 0x760958:goto L760958;
case 0x76095a:goto L76095a;
case 0x76095b:c.instructions+=4;goto B76095b;
case 0x76095c:c.instructions+=3;goto B76095c;
case 0x76095d:c.instructions+=2;goto B76095d;
case 0x76095e:c.instructions+=1;goto B76095e;
case 0x76095f:goto L76095f;
case 0x760961:c.instructions+=2;goto B760961;
case 0x760966:c.instructions+=1;goto B760966;
case 0x76096b:goto L76096b;
case 0x76096e:c.instructions+=2;goto B76096e;
case 0x760974:c.instructions+=1;goto B760974;
case 0x760976:goto L760976;
case 0x760978:c.instructions+=9;goto B760978;
case 0x76097b:c.instructions+=8;goto B76097b;
case 0x760982:c.instructions+=7;goto B760982;
case 0x760984:c.instructions+=6;goto B760984;
case 0x760987:c.instructions+=5;goto B760987;
case 0x76098a:c.instructions+=4;goto B76098a;
case 0x76098d:c.instructions+=3;goto B76098d;
case 0x76098f:c.instructions+=2;goto B76098f;
case 0x760994:c.instructions+=1;goto B760994;
case 0x760996:goto L760996;
case 0x760997:c.instructions+=1;goto B760997;
case 0x76099c:goto L76099c;
case 0x76099d:c.instructions+=4;goto B76099d;
case 0x7609a1:c.instructions+=3;goto B7609a1;
case 0x7609a3:c.instructions+=2;goto B7609a3;
case 0x7609a8:c.instructions+=1;goto B7609a8;
case 0x7609aa:goto L7609aa;
case 0x7609ad:c.instructions+=3;goto B7609ad;
case 0x7609b0:c.instructions+=2;goto B7609b0;
case 0x7609b1:c.instructions+=1;goto B7609b1;
case 0x7609b6:goto L7609b6;
case 0x7609b9:c.instructions+=2;goto B7609b9;
case 0x7609bc:c.instructions+=1;goto B7609bc;
case 0x7609be:goto L7609be;
case 0x7609c3:goto L7609c3;
case 0x7609c9:c.instructions+=1;goto B7609c9;
case 0x7609ce:goto L7609ce;
case 0x7609d1:c.instructions+=1;goto B7609d1;
case 0x7609d5:goto L7609d5;
case 0x7609d9:c.instructions+=1;goto B7609d9;
case 0x7609de:goto L7609de;
case 0x7609e1:c.instructions+=1;goto B7609e1;
case 0x7609e6:goto L7609e6;
case 0x7609e7:c.instructions+=1;goto B7609e7;
case 0x7609ec:goto L7609ec;
case 0x7609ed:c.instructions+=1;goto B7609ed;
case 0x7609ee:goto L7609ee;
case 0x7609f3:goto L7609f3;
case 0x7609f9:c.instructions+=1;goto B7609f9;
case 0x7609fe:goto L7609fe;
case 0x760a01:c.instructions+=1;goto B760a01;
case 0x760a04:goto L760a04;
case 0x760a09:goto L760a09;
case 0x760a0a:goto L760a0a;
case 0x760a0c:c.instructions+=2;goto B760a0c;
case 0x760a11:c.instructions+=1;goto B760a11;
case 0x760a16:goto L760a16;
case 0x760a19:c.instructions+=2;goto B760a19;
case 0x760a1f:c.instructions+=1;goto B760a1f;
case 0x760a25:goto L760a25;
case 0x760a27:c.instructions+=9;goto B760a27;
case 0x760a2a:c.instructions+=8;goto B760a2a;
case 0x760a31:c.instructions+=7;goto B760a31;
case 0x760a33:c.instructions+=6;goto B760a33;
case 0x760a36:c.instructions+=5;goto B760a36;
case 0x760a39:c.instructions+=4;goto B760a39;
case 0x760a3c:c.instructions+=3;goto B760a3c;
case 0x760a3e:c.instructions+=2;goto B760a3e;
case 0x760a43:c.instructions+=1;goto B760a43;
case 0x760a45:goto L760a45;
case 0x760a46:c.instructions+=1;goto B760a46;
case 0x760a4b:goto L760a4b;
case 0x760a4c:c.instructions+=4;goto B760a4c;
case 0x760a50:c.instructions+=3;goto B760a50;
case 0x760a52:c.instructions+=2;goto B760a52;
case 0x760a57:c.instructions+=1;goto B760a57;
case 0x760a59:goto L760a59;
case 0x760a5b:c.instructions+=3;goto B760a5b;
case 0x760a5d:c.instructions+=2;goto B760a5d;
case 0x760a5e:c.instructions+=1;goto B760a5e;
case 0x760a63:goto L760a63;
case 0x760a66:c.instructions+=4;goto B760a66;
case 0x760a68:c.instructions+=3;goto B760a68;
case 0x760a6b:c.instructions+=2;goto B760a6b;
case 0x760a6e:c.instructions+=1;goto B760a6e;
case 0x760a70:goto L760a70;
case 0x760a72:c.instructions+=3;goto B760a72;
case 0x760a74:c.instructions+=2;goto B760a74;
case 0x760a75:c.instructions+=1;goto B760a75;
case 0x760a7a:goto L760a7a;
case 0x760a7d:c.instructions+=3;goto B760a7d;
case 0x760a80:c.instructions+=2;goto B760a80;
case 0x760a82:c.instructions+=1;goto B760a82;
case 0x760a84:goto L760a84;
case 0x760a86:c.instructions+=3;goto B760a86;
case 0x760a87:c.instructions+=2;goto B760a87;
case 0x760a88:c.instructions+=1;goto B760a88;
case 0x760a8d:goto L760a8d;
case 0x760a90:c.instructions+=1;goto B760a90;
case 0x760a92:goto L760a92;
case 0x760a97:goto L760a97;
case 0x760a9d:c.instructions+=1;goto B760a9d;
case 0x760aa2:goto L760aa2;
case 0x760aa5:goto L760aa5;
case 0x760aa9:goto L760aa9;
case 0x760aad:c.instructions+=1;goto B760aad;
case 0x760ab2:goto L760ab2;
case 0x760ab5:c.instructions+=1;goto B760ab5;
case 0x760aba:goto L760aba;
case 0x760abb:c.instructions+=1;goto B760abb;
case 0x760ac0:goto L760ac0;
case 0x760ac1:c.instructions+=1;goto B760ac1;
case 0x760ac2:goto L760ac2;
case 0x760ac7:goto L760ac7;
case 0x760acd:c.instructions+=1;goto B760acd;
case 0x760ad2:goto L760ad2;
case 0x760ad5:c.instructions+=1;goto B760ad5;
case 0x760ad8:goto L760ad8;
case 0x760add:goto L760add;
case 0x760ade:goto L760ade;
case 0x760ae2:c.instructions+=1;goto B760ae2;
case 0x760ae8:goto L760ae8;
case 0x760aea:c.instructions+=1;goto B760aea;
case 0x760aec:goto L760aec;
case 0x760af2:goto L760af2;
case 0x760af4:goto L760af4;
case 0x760af6:goto L760af6;
case 0x760af8:c.instructions+=1;goto B760af8;
case 0x760afa:goto L760afa;
case 0x760afb:c.instructions+=1;goto B760afb;
case 0x760b00:goto L760b00;
case 0x760b01:c.instructions+=2;goto B760b01;
case 0x760b04:c.instructions+=1;goto B760b04;
case 0x760b05:goto L760b05;
case 0x760b07:c.instructions+=1;goto B760b07;
case 0x760b08:goto L760b08;
case 0x760b0c:c.instructions+=1;goto B760b0c;
case 0x760b12:goto L760b12;
case 0x760b14:c.instructions+=1;goto B760b14;
case 0x760b16:goto L760b16;
case 0x760b1c:goto L760b1c;
case 0x760b1e:goto L760b1e;
case 0x760b20:goto L760b20;
case 0x760b22:c.instructions+=1;goto B760b22;
case 0x760b24:goto L760b24;
case 0x760b25:c.instructions+=1;goto B760b25;
case 0x760b2a:goto L760b2a;
case 0x760b2b:c.instructions+=2;goto B760b2b;
case 0x760b2e:c.instructions+=1;goto B760b2e;
case 0x760b2f:goto L760b2f;
case 0x760b31:c.instructions+=1;goto B760b31;
case 0x760b32:goto L760b32;
case 0x760b33:c.instructions+=6;goto B760b33;
case 0x760b35:c.instructions+=5;goto B760b35;
case 0x760b36:c.instructions+=4;goto B760b36;
case 0x760b37:c.instructions+=3;goto B760b37;
case 0x760b38:c.instructions+=2;goto B760b38;
case 0x760b39:c.instructions+=1;goto B760b39;
case 0x760b3e:goto L760b3e;
case 0x760b41:c.instructions+=2;goto B760b41;
case 0x760b47:c.instructions+=1;goto B760b47;
case 0x760b49:goto L760b49;
case 0x760b4e:goto L760b4e;
case 0x760b50:goto L760b50;
case 0x760b53:c.instructions+=3;goto B760b53;
case 0x760b57:c.instructions+=2;goto B760b57;
case 0x760b59:c.instructions+=1;goto B760b59;
case 0x760b5c:goto L760b5c;
case 0x760b60:c.instructions+=2;goto B760b60;
case 0x760b63:c.instructions+=1;goto B760b63;
case 0x760b65:goto L760b65;
case 0x760b67:c.instructions+=3;goto B760b67;
case 0x760b68:c.instructions+=2;goto B760b68;
case 0x760b69:c.instructions+=1;goto B760b69;
case 0x760b6e:goto L760b6e;
case 0x760b71:c.instructions+=2;goto B760b71;
case 0x760b74:c.instructions+=1;goto B760b74;
case 0x760b76:goto L760b76;
case 0x760b79:c.instructions+=2;goto B760b79;
case 0x760b7d:c.instructions+=1;goto B760b7d;
case 0x760b80:goto L760b80;
case 0x760b82:c.instructions+=1;goto B760b82;
case 0x760b84:goto L760b84;
case 0x760b86:c.instructions+=2;goto B760b86;
case 0x760b87:c.instructions+=1;goto B760b87;
case 0x760b89:goto L760b89;
case 0x760b8c:c.instructions+=1;goto B760b8c;
case 0x760b8e:goto L760b8e;
case 0x760b92:c.instructions+=1;goto B760b92;
case 0x760b94:goto L760b94;
case 0x760b97:c.instructions+=1;goto B760b97;
case 0x760b99:goto L760b99;
case 0x760b9b:c.instructions+=1;goto B760b9b;
case 0x760b9c:goto L760b9c;
case 0x760b9f:c.instructions+=2;goto B760b9f;
case 0x760ba1:c.instructions+=1;goto B760ba1;
case 0x760ba7:goto L760ba7;
case 0x760baa:c.instructions+=1;goto B760baa;
case 0x760bb0:goto L760bb0;
case 0x760bb3:c.instructions+=1;goto B760bb3;
case 0x760bb9:goto L760bb9;
case 0x760bbb:c.instructions+=3;goto B760bbb;
case 0x760bbd:c.instructions+=2;goto B760bbd;
case 0x760bbe:c.instructions+=1;goto B760bbe;
case 0x760bc0:goto L760bc0;
case 0x760bc3:c.instructions+=1;goto B760bc3;
case 0x760bc5:goto L760bc5;
case 0x760bcc:c.instructions+=1;goto B760bcc;
case 0x760bce:goto L760bce;
case 0x760bd0:c.instructions+=2;goto B760bd0;
case 0x760bd2:c.instructions+=1;goto B760bd2;
case 0x760bd4:goto L760bd4;
case 0x760bd6:c.instructions+=1;goto B760bd6;
case 0x760bd8:goto L760bd8;
case 0x760bdf:c.instructions+=1;goto B760bdf;
case 0x760be1:goto L760be1;
case 0x760be4:goto L760be4;
case 0x760be7:c.instructions+=1;goto B760be7;
case 0x760be9:goto L760be9;
case 0x760bec:c.instructions+=1;goto B760bec;
case 0x760bee:goto L760bee;
case 0x760bf0:c.instructions+=2;goto B760bf0;
case 0x760bf2:c.instructions+=1;goto B760bf2;
case 0x760bf4:goto L760bf4;
case 0x760bf6:c.instructions+=1;goto B760bf6;
case 0x760bf8:goto L760bf8;
case 0x760bf9:c.instructions+=2;goto B760bf9;
case 0x760bfb:c.instructions+=1;goto B760bfb;
case 0x760bfc:goto L760bfc;
case 0x760bff:c.instructions+=2;goto B760bff;
case 0x760c01:c.instructions+=1;goto B760c01;
case 0x760c04:goto L760c04;
case 0x760c0a:c.instructions+=4;goto B760c0a;
case 0x760c0d:c.instructions+=3;goto B760c0d;
case 0x760c11:c.instructions+=2;goto B760c11;
case 0x760c14:c.instructions+=1;goto B760c14;
case 0x760c16:goto L760c16;
case 0x760c19:c.instructions+=2;goto B760c19;
case 0x760c1c:c.instructions+=1;goto B760c1c;
case 0x760c1e:goto L760c1e;
case 0x760c23:c.instructions+=1;goto B760c23;
case 0x760c25:goto L760c25;
case 0x760c28:c.instructions+=1;goto B760c28;
case 0x760c2a:goto L760c2a;
case 0x760c2d:c.instructions+=1;goto B760c2d;
case 0x760c2f:goto L760c2f;
case 0x760c32:c.instructions+=2;goto B760c32;
case 0x760c35:c.instructions+=1;goto B760c35;
case 0x760c37:goto L760c37;
case 0x760c3a:goto L760c3a;
case 0x760c3d:goto L760c3d;
case 0x760c40:c.instructions+=1;goto B760c40;
case 0x760c42:goto L760c42;
case 0x760c46:c.instructions+=2;goto B760c46;
case 0x760c49:c.instructions+=1;goto B760c49;
case 0x760c4b:goto L760c4b;
case 0x760c4d:goto L760c4d;
case 0x760c4f:c.instructions+=1;goto B760c4f;
case 0x760c51:goto L760c51;
case 0x760c55:c.instructions+=1;goto B760c55;
case 0x760c57:goto L760c57;
case 0x760c5a:c.instructions+=3;goto B760c5a;
case 0x760c5e:c.instructions+=2;goto B760c5e;
case 0x760c60:c.instructions+=1;goto B760c60;
case 0x760c63:goto L760c63;
case 0x760c65:c.instructions+=2;goto B760c65;
case 0x760c66:c.instructions+=1;goto B760c66;
case 0x760c68:goto L760c68;
case 0x760c6b:c.instructions+=3;goto B760c6b;
case 0x760c6c:c.instructions+=2;goto B760c6c;
case 0x760c6e:c.instructions+=1;goto B760c6e;
case 0x760c70:goto L760c70;
case 0x760c74:c.instructions+=1;goto B760c74;
case 0x760c76:goto L760c76;
case 0x760c79:goto L760c79;
case 0x760c7d:c.instructions+=1;goto B760c7d;
case 0x760c7f:goto L760c7f;
case 0x760c81:c.instructions+=2;goto B760c81;
case 0x760c86:c.instructions+=1;goto B760c86;
case 0x760c88:goto L760c88;
case 0x760c8a:c.instructions+=1;goto B760c8a;
case 0x760c8c:goto L760c8c;
case 0x760c8f:c.instructions+=1;goto B760c8f;
case 0x760c91:goto L760c91;
case 0x760c98:c.instructions+=1;goto B760c98;
case 0x760c9a:goto L760c9a;
case 0x760c9c:c.instructions+=1;goto B760c9c;
case 0x760c9e:goto L760c9e;
case 0x760ca1:c.instructions+=1;goto B760ca1;
case 0x760ca3:goto L760ca3;
case 0x760ca8:goto L760ca8;
case 0x760cac:c.instructions+=2;goto B760cac;
case 0x760cb2:c.instructions+=1;goto B760cb2;
case 0x760cb4:goto L760cb4;
case 0x760cb8:c.instructions+=1;goto B760cb8;
case 0x760cba:goto L760cba;
case 0x760cbd:c.instructions+=6;goto B760cbd;
case 0x760cbf:c.instructions+=5;goto B760cbf;
case 0x760cc1:c.instructions+=4;goto B760cc1;
case 0x760cc3:c.instructions+=3;goto B760cc3;
case 0x760cc5:c.instructions+=2;goto B760cc5;
case 0x760cc7:c.instructions+=1;goto B760cc7;
case 0x760cca:goto L760cca;
case 0x760ccd:c.instructions+=2;goto B760ccd;
case 0x760ccf:c.instructions+=1;goto B760ccf;
case 0x760cd1:goto L760cd1;
case 0x760cd3:goto L760cd3;
case 0x760cd7:c.instructions+=1;goto B760cd7;
case 0x760cd9:goto L760cd9;
case 0x760cdc:goto L760cdc;
case 0x760cdf:c.instructions+=1;goto B760cdf;
case 0x760ce1:goto L760ce1;
case 0x760ce4:c.instructions+=2;goto B760ce4;
case 0x760ce6:c.instructions+=1;goto B760ce6;
case 0x760ce8:goto L760ce8;
case 0x760cea:goto L760cea;
case 0x760cec:goto L760cec;
case 0x760ced:c.instructions+=4;goto B760ced;
case 0x760cee:c.instructions+=3;goto B760cee;
case 0x760cef:c.instructions+=2;goto B760cef;
case 0x760cf0:c.instructions+=1;goto B760cf0;
case 0x760cf1:goto L760cf1;
case 0x760cf3:c.instructions+=4;goto B760cf3;
case 0x760cf7:c.instructions+=3;goto B760cf7;
case 0x760cfb:c.instructions+=2;goto B760cfb;
case 0x760cff:c.instructions+=1;goto B760cff;
case 0x760d04:goto L760d04;
case 0x760d07:c.instructions+=1;goto B760d07;
case 0x760d08:goto L760d08;
case 0x760d0a:c.instructions+=4;goto B760d0a;
case 0x760d0e:c.instructions+=3;goto B760d0e;
case 0x760d12:c.instructions+=2;goto B760d12;
case 0x760d16:c.instructions+=1;goto B760d16;
case 0x760d1b:goto L760d1b;
case 0x760d1e:c.instructions+=1;goto B760d1e;
case 0x760d1f:goto L760d1f;
case 0x760d21:c.instructions+=2;goto B760d21;
case 0x760d26:c.instructions+=1;goto B760d26;
case 0x760d2b:goto L760d2b;
case 0x760d2e:c.instructions+=3;goto B760d2e;
case 0x760d31:c.instructions+=2;goto B760d31;
case 0x760d32:c.instructions+=1;goto B760d32;
case 0x760d37:goto L760d37;
case 0x760d38:c.instructions+=3;goto B760d38;
case 0x760d3c:c.instructions+=2;goto B760d3c;
case 0x760d3d:c.instructions+=1;goto B760d3d;
case 0x760d42:goto L760d42;
case 0x760d45:c.instructions+=5;goto B760d45;
case 0x760d48:c.instructions+=4;goto B760d48;
case 0x760d49:c.instructions+=3;goto B760d49;
case 0x760d4c:c.instructions+=2;goto B760d4c;
case 0x760d4d:c.instructions+=1;goto B760d4d;
case 0x760d52:goto L760d52;
case 0x760d55:c.instructions+=3;goto B760d55;
case 0x760d56:c.instructions+=2;goto B760d56;
case 0x760d59:c.instructions+=1;goto B760d59;
case 0x760d5e:goto L760d5e;
case 0x760d61:c.instructions+=2;goto B760d61;
case 0x760d65:c.instructions+=1;goto B760d65;
case 0x760d6a:goto L760d6a;
case 0x760d6d:c.instructions+=1;goto B760d6d;
case 0x760d72:goto L760d72;
case 0x760d73:goto L760d73;
case 0x760d76:c.instructions+=1;goto B760d76;
case 0x760d7b:goto L760d7b;
case 0x760d7c:c.instructions+=1;goto B760d7c;
case 0x760d7d:goto L760d7d;
case 0x760d82:goto L760d82;
case 0x760d85:c.instructions+=7;goto B760d85;
case 0x760d8b:c.instructions+=6;goto B760d8b;
case 0x760d91:c.instructions+=5;goto B760d91;
case 0x760d94:c.instructions+=4;goto B760d94;
case 0x760d96:c.instructions+=3;goto B760d96;
case 0x760d99:c.instructions+=2;goto B760d99;
case 0x760d9e:c.instructions+=1;goto B760d9e;
case 0x760da0:goto L760da0;
case 0x760da5:c.instructions+=18;goto B760da5;
case 0x760dab:c.instructions+=17;goto B760dab;
case 0x760dac:c.instructions+=16;goto B760dac;
case 0x760db0:c.instructions+=15;goto B760db0;
case 0x760db4:c.instructions+=14;goto B760db4;
case 0x760db8:c.instructions+=13;goto B760db8;
case 0x760dba:c.instructions+=12;goto B760dba;
case 0x760dbb:c.instructions+=11;goto B760dbb;
case 0x760dbc:c.instructions+=10;goto B760dbc;
case 0x760dbd:c.instructions+=9;goto B760dbd;
case 0x760dc0:c.instructions+=8;goto B760dc0;
case 0x760dc3:c.instructions+=7;goto B760dc3;
case 0x760dc4:c.instructions+=6;goto B760dc4;
case 0x760dc7:c.instructions+=5;goto B760dc7;
case 0x760dce:c.instructions+=4;goto B760dce;
case 0x760dd1:c.instructions+=3;goto B760dd1;
case 0x760dd4:c.instructions+=2;goto B760dd4;
case 0x760dda:c.instructions+=1;goto B760dda;
case 0x760ddb:goto L760ddb;
case 0x760dde:c.instructions+=8;goto B760dde;
case 0x760de5:c.instructions+=7;goto B760de5;
case 0x760de6:c.instructions+=6;goto B760de6;
case 0x760de7:c.instructions+=5;goto B760de7;
case 0x760de8:c.instructions+=4;goto B760de8;
case 0x760de9:c.instructions+=3;goto B760de9;
case 0x760dea:c.instructions+=2;goto B760dea;
case 0x760deb:c.instructions+=1;goto B760deb;
case 0x760df0:goto L760df0;
case 0x760df1:c.instructions+=11;goto B760df1;
case 0x760df3:c.instructions+=10;goto B760df3;
case 0x760df4:c.instructions+=9;goto B760df4;
case 0x760df5:c.instructions+=8;goto B760df5;
case 0x760df8:c.instructions+=7;goto B760df8;
case 0x760dfb:c.instructions+=6;goto B760dfb;
case 0x760dfe:c.instructions+=5;goto B760dfe;
case 0x760e00:c.instructions+=4;goto B760e00;
case 0x760e02:c.instructions+=3;goto B760e02;
case 0x760e04:c.instructions+=2;goto B760e04;
case 0x760e06:c.instructions+=1;goto B760e06;
case 0x760e08:goto L760e08;
case 0x760e0a:c.instructions+=1;goto B760e0a;
case 0x760e10:goto L760e10;
case 0x760e16:c.instructions+=1;goto B760e16;
case 0x760e18:goto L760e18;
case 0x760e1b:c.instructions+=3;goto B760e1b;
case 0x760e1e:c.instructions+=2;goto B760e1e;
case 0x760e21:c.instructions+=1;goto B760e21;
case 0x760e23:goto L760e23;
case 0x760e25:goto L760e25;
case 0x760e2c:goto L760e2c;
case 0x760e2e:c.instructions+=3;goto B760e2e;
case 0x760e33:c.instructions+=2;goto B760e33;
case 0x760e36:c.instructions+=1;goto B760e36;
case 0x760e38:goto L760e38;
case 0x760e3b:c.instructions+=2;goto B760e3b;
case 0x760e3d:c.instructions+=1;goto B760e3d;
case 0x760e44:goto L760e44;
case 0x760e4c:goto L760e4c;
case 0x760e60:goto L760e60;
case 0x760e62:c.instructions+=11;goto B760e62;
case 0x760e64:c.instructions+=10;goto B760e64;
case 0x760e66:c.instructions+=9;goto B760e66;
case 0x760e69:c.instructions+=8;goto B760e69;
case 0x760e6c:c.instructions+=7;goto B760e6c;
case 0x760e6f:c.instructions+=6;goto B760e6f;
case 0x760e72:c.instructions+=5;goto B760e72;
case 0x760e75:c.instructions+=4;goto B760e75;
case 0x760e78:c.instructions+=3;goto B760e78;
case 0x760e7b:c.instructions+=2;goto B760e7b;
case 0x760e7e:c.instructions+=1;goto B760e7e;
case 0x760e80:goto L760e80;
case 0x760e82:goto L760e82;
case 0x760e8c:goto L760e8c;
case 0x760e8e:c.instructions+=9;goto B760e8e;
case 0x760e90:c.instructions+=8;goto B760e90;
case 0x760e92:c.instructions+=7;goto B760e92;
case 0x760e95:c.instructions+=6;goto B760e95;
case 0x760e98:c.instructions+=5;goto B760e98;
case 0x760e9b:c.instructions+=4;goto B760e9b;
case 0x760e9e:c.instructions+=3;goto B760e9e;
case 0x760ea1:c.instructions+=2;goto B760ea1;
case 0x760ea4:c.instructions+=1;goto B760ea4;
case 0x760ea6:goto L760ea6;
case 0x760ea8:goto L760ea8;
case 0x760eb0:goto L760eb0;
case 0x760eb2:c.instructions+=7;goto B760eb2;
case 0x760eb4:c.instructions+=6;goto B760eb4;
case 0x760eb6:c.instructions+=5;goto B760eb6;
case 0x760eb9:c.instructions+=4;goto B760eb9;
case 0x760ebc:c.instructions+=3;goto B760ebc;
case 0x760ebf:c.instructions+=2;goto B760ebf;
case 0x760ec2:c.instructions+=1;goto B760ec2;
case 0x760ec4:goto L760ec4;
case 0x760ec6:goto L760ec6;
case 0x760ef0:goto L760ef0;
case 0x760ef4:c.instructions+=17;goto B760ef4;
case 0x760ef8:c.instructions+=16;goto B760ef8;
case 0x760efc:c.instructions+=15;goto B760efc;
case 0x760f00:c.instructions+=14;goto B760f00;
case 0x760f04:c.instructions+=13;goto B760f04;
case 0x760f08:c.instructions+=12;goto B760f08;
case 0x760f0c:c.instructions+=11;goto B760f0c;
case 0x760f10:c.instructions+=10;goto B760f10;
case 0x760f14:c.instructions+=9;goto B760f14;
case 0x760f18:c.instructions+=8;goto B760f18;
case 0x760f1c:c.instructions+=7;goto B760f1c;
case 0x760f20:c.instructions+=6;goto B760f20;
case 0x760f24:c.instructions+=5;goto B760f24;
case 0x760f28:c.instructions+=4;goto B760f28;
case 0x760f2f:c.instructions+=3;goto B760f2f;
case 0x760f31:c.instructions+=2;goto B760f31;
case 0x760f33:c.instructions+=1;goto B760f33;
case 0x760f4c:goto L760f4c;
case 0x760f4f:c.instructions+=4;goto B760f4f;
case 0x760f50:c.instructions+=3;goto B760f50;
case 0x760f51:c.instructions+=2;goto B760f51;
case 0x760f52:c.instructions+=1;goto B760f52;
case 0x760f54:goto L760f54;
case 0x760f56:c.instructions+=6;goto B760f56;
case 0x760f58:c.instructions+=5;goto B760f58;
case 0x760f5b:c.instructions+=4;goto B760f5b;
case 0x760f5c:c.instructions+=3;goto B760f5c;
case 0x760f5d:c.instructions+=2;goto B760f5d;
case 0x760f5e:c.instructions+=1;goto B760f5e;
case 0x760f60:goto L760f60;
case 0x760f62:c.instructions+=8;goto B760f62;
case 0x760f64:c.instructions+=7;goto B760f64;
case 0x760f67:c.instructions+=6;goto B760f67;
case 0x760f6a:c.instructions+=5;goto B760f6a;
case 0x760f6d:c.instructions+=4;goto B760f6d;
case 0x760f6e:c.instructions+=3;goto B760f6e;
case 0x760f6f:c.instructions+=2;goto B760f6f;
case 0x760f70:c.instructions+=1;goto B760f70;
case 0x760f74:goto L760f74;
case 0x760f76:c.instructions+=10;goto B760f76;
case 0x760f78:c.instructions+=9;goto B760f78;
case 0x760f7b:c.instructions+=8;goto B760f7b;
case 0x760f7e:c.instructions+=7;goto B760f7e;
case 0x760f81:c.instructions+=6;goto B760f81;
case 0x760f84:c.instructions+=5;goto B760f84;
case 0x760f87:c.instructions+=4;goto B760f87;
case 0x760f88:c.instructions+=3;goto B760f88;
case 0x760f89:c.instructions+=2;goto B760f89;
case 0x760f8a:c.instructions+=1;goto B760f8a;
case 0x760f8c:goto L760f8c;
case 0x760f90:c.instructions+=3;goto B760f90;
case 0x760f94:c.instructions+=2;goto B760f94;
case 0x760f9a:c.instructions+=1;goto B760f9a;
case 0x760f9c:goto L760f9c;
case 0x760f9f:c.instructions+=3;goto B760f9f;
case 0x760fa2:c.instructions+=2;goto B760fa2;
case 0x760fa5:c.instructions+=1;goto B760fa5;
case 0x760fa7:goto L760fa7;
case 0x760fa8:goto L760fa8;
case 0x760faa:goto L760faa;
case 0x760fab:c.instructions+=1;goto B760fab;
case 0x760fb4:goto L760fb4;
case 0x760fb6:c.instructions+=1;goto B760fb6;
case 0x760fc0:goto L760fc0;
case 0x760fc2:c.instructions+=3;goto B760fc2;
case 0x760fc7:c.instructions+=2;goto B760fc7;
case 0x760fca:c.instructions+=1;goto B760fca;
case 0x760fcc:goto L760fcc;
case 0x760fcf:c.instructions+=2;goto B760fcf;
case 0x760fd1:c.instructions+=1;goto B760fd1;
case 0x760fd8:goto L760fd8;
case 0x760fec:goto L760fec;
case 0x760fef:c.instructions+=6;goto B760fef;
case 0x760ff1:c.instructions+=5;goto B760ff1;
case 0x760ff4:c.instructions+=4;goto B760ff4;
case 0x760ff7:c.instructions+=3;goto B760ff7;
case 0x760ffa:c.instructions+=2;goto B760ffa;
case 0x760ffd:c.instructions+=1;goto B760ffd;
default:missing_instruction(c.pc);}
B760003:L760003:{c.instructions+=3;NFSU2_TR(0x760003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B760006:{NFSU2_TR(0x760006);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ba4ac),4);
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
B76000c:{NFSU2_TR(0x76000c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L760076;}}
}
B76000e:L76000e:{c.instructions+=10;NFSU2_TR(0x76000e);
__builtin_memmove((R+0),(R+12),4);
}
B760010:{NFSU2_TR(0x760010);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B760013:{NFSU2_TR(0x760013);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B76001a:{NFSU2_TR(0x76001a);
__builtin_memmove((R+0),(R+12),4);
}
B76001c:{NFSU2_TR(0x76001c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B76001f:{NFSU2_TR(0x76001f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B760022:{NFSU2_TR(0x760022);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B760025:{NFSU2_TR(0x760025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B760027:{NFSU2_TR(0x760027);
u8 U[17];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B76002c:{NFSU2_TR(0x76002c);
if(r1(R+518)){{goto L760076;}}
}
B76002e:L76002e:{c.instructions+=2;NFSU2_TR(0x76002e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76002f:{NFSU2_TR(0x76002f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760034ull));
TAIL_STATIC(0x76be66u,76b);
}
B760034:L760034:{c.instructions+=5;NFSU2_TR(0x760034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760035:{NFSU2_TR(0x760035);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760039:{NFSU2_TR(0x760039);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76003b:{NFSU2_TR(0x76003b);
u8 U[17];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B760040:{NFSU2_TR(0x760040);
if(r1(R+518)){{goto L76004e;}}
}
B760042:L760042:{c.instructions+=2;NFSU2_TR(0x760042);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760043:{NFSU2_TR(0x760043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760048ull));
TAIL_STATIC(0x75ff74u,75f);
}
B760048:L760048:{c.instructions+=3;NFSU2_TR(0x760048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760049:{NFSU2_TR(0x760049);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76004c:{NFSU2_TR(0x76004c);
{goto L76005d;}
}
B76004e:L76004e:{c.instructions+=1;NFSU2_TR(0x76004e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760053ull));
TAIL_STATIC(0x7661bau,766);
}
B760053:L760053:{c.instructions+=2;NFSU2_TR(0x760053);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B760059:{NFSU2_TR(0x760059);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76005d:L76005d:{c.instructions+=2;NFSU2_TR(0x76005d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760061:{NFSU2_TR(0x760061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760066ull));
{goto L76006e;}
}
B760066:L760066:{c.instructions+=2;NFSU2_TR(0x760066);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760069:{NFSU2_TR(0x760069);
{goto L76008c;}
}
B76006e:L76006e:{c.instructions+=2;NFSU2_TR(0x76006e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76006f:{NFSU2_TR(0x76006f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760074ull));
TAIL_STATIC(0x76bed9u,76b);
}
B760074:L760074:{c.instructions+=2;NFSU2_TR(0x760074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760075:{NFSU2_TR(0x760075);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760076:L760076:{c.instructions+=1;NFSU2_TR(0x760076);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76007bull));
TAIL_STATIC(0x7661bau,766);
}
B76007b:L76007b:{c.instructions+=2;NFSU2_TR(0x76007b);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B760081:{NFSU2_TR(0x760081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760086ull));
TAIL_STATIC(0x7661c3u,766);
}
B760086:L760086:{c.instructions+=2;NFSU2_TR(0x760086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B760089:{NFSU2_TR(0x760089);
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
B76008c:L76008c:{c.instructions+=1;NFSU2_TR(0x76008c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760091ull));
{goto L760ddb;}
}
B760091:L760091:{c.instructions+=1;NFSU2_TR(0x760091);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760092:L760092:{c.instructions+=12;NFSU2_TR(0x760092);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760093:{NFSU2_TR(0x760093);
__builtin_memmove((R+20),(R+16),4);
}
B760095:{NFSU2_TR(0x760095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x420ull))));
}
B76009b:{NFSU2_TR(0x76009b);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7600a0:{NFSU2_TR(0x7600a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B7600a3:{NFSU2_TR(0x7600a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7600a4:{NFSU2_TR(0x7600a4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7600a6:{NFSU2_TR(0x7600a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7600a9:{NFSU2_TR(0x7600a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7600ac:{NFSU2_TR(0x7600ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7600af:{NFSU2_TR(0x7600af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7600b2:{NFSU2_TR(0x7600b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7600bb;}}
}
B7600b4:L7600b4:{c.instructions+=2;NFSU2_TR(0x7600b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7600b6:{NFSU2_TR(0x7600b6);
{goto L760229;}
}
B7600bb:L7600bb:{c.instructions+=12;NFSU2_TR(0x7600bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7600be:{NFSU2_TR(0x7600be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7600bf:{NFSU2_TR(0x7600bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7600c2:{NFSU2_TR(0x7600c2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B7600c5:{NFSU2_TR(0x7600c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B7600c8:{NFSU2_TR(0x7600c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7600c9:{NFSU2_TR(0x7600c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7600cc:{NFSU2_TR(0x7600cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B7600d3:{NFSU2_TR(0x7600d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7600d5:{NFSU2_TR(0x7600d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B7600d8:{NFSU2_TR(0x7600d8);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
}
B7600dd:{NFSU2_TR(0x7600dd);
if(r1(R+518)){{goto L7600ee;}}
}
B7600df:L7600df:{c.instructions+=5;NFSU2_TR(0x7600df);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7600e1:{NFSU2_TR(0x7600e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7600e2:{NFSU2_TR(0x7600e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7600e3:{NFSU2_TR(0x7600e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7600e6:{NFSU2_TR(0x7600e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7600ebull));
TAIL_STATIC(0x76c048u,76c);
}
B7600eb:L7600eb:{c.instructions+=1;NFSU2_TR(0x7600eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7600ee:L7600ee:{c.instructions+=4;NFSU2_TR(0x7600ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7600f0:{NFSU2_TR(0x7600f0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B7600f2:{NFSU2_TR(0x7600f2);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B7600f6:{NFSU2_TR(0x7600f6);
if(r1(R+518)){{goto L7601c0;}}
}
B7600fc:L7600fc:{c.instructions+=5;NFSU2_TR(0x7600fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7600ff:{NFSU2_TR(0x7600ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760102:{NFSU2_TR(0x760102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760105:{NFSU2_TR(0x760105);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760108:{NFSU2_TR(0x760108);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7601fb;}}
}
B76010e:L76010e:{c.instructions+=4;NFSU2_TR(0x76010e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B760111:{NFSU2_TR(0x760111);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B760114:{NFSU2_TR(0x760114);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76011a:{NFSU2_TR(0x76011a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76011d:L76011d:{c.instructions+=2;NFSU2_TR(0x76011d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B760120:{NFSU2_TR(0x760120);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L760149;}}
}
B760122:L760122:{c.instructions+=6;NFSU2_TR(0x760122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B760125:{NFSU2_TR(0x760125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760128:{NFSU2_TR(0x760128);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+8),(U+0),1);
}
B76012a:{NFSU2_TR(0x76012a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B76012b:{NFSU2_TR(0x76012b);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76012e:{NFSU2_TR(0x76012e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76013a;}}
}
B760130:L760130:{c.instructions+=4;NFSU2_TR(0x760130);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760133:{NFSU2_TR(0x760133);
u8 U[1];
w1(U+0,u8(0xdull));
s1(u32(r4(R+0)),r1(U+0));
}
B760136:{NFSU2_TR(0x760136);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B760137:{NFSU2_TR(0x760137);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76013a:L76013a:{c.instructions+=5;NFSU2_TR(0x76013a);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B76013c:{NFSU2_TR(0x76013c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76013d:{NFSU2_TR(0x76013d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760140:{NFSU2_TR(0x760140);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x400ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B760147:{NFSU2_TR(0x760147);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76011du);}goto L76011d;}}
}
B760149:L760149:{c.instructions+=12;NFSU2_TR(0x760149);
__builtin_memmove((R+28),(R+0),4);
}
B76014b:{NFSU2_TR(0x76014b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B760151:{NFSU2_TR(0x760151);
u8 U[6];
w1(R+512,u8((r4(R+28))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B760153:{NFSU2_TR(0x760153);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760155:{NFSU2_TR(0x760155);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B760158:{NFSU2_TR(0x760158);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760159:{NFSU2_TR(0x760159);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76015a:{NFSU2_TR(0x76015a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B760160:{NFSU2_TR(0x760160);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760161:{NFSU2_TR(0x760161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B760163:{NFSU2_TR(0x760163);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B760166:{NFSU2_TR(0x760166);
u8 U[4];
__builtin_memmove((U+0),gp(0x783224),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76016cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76016c:L76016c:{c.instructions+=2;NFSU2_TR(0x76016c);
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
B76016e:{NFSU2_TR(0x76016e);
if(r1(R+518)){{goto L760189;}}
}
B760170:L760170:{c.instructions+=4;NFSU2_TR(0x760170);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760173:{NFSU2_TR(0x760173);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B760176:{NFSU2_TR(0x760176);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B760178:{NFSU2_TR(0x760178);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L760192;}}
}
B76017a:L76017a:{c.instructions+=5;NFSU2_TR(0x76017a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76017d:{NFSU2_TR(0x76017d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B760180:{NFSU2_TR(0x760180);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B760182:{NFSU2_TR(0x760182);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B760185:{NFSU2_TR(0x760185);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76010eu);}goto L76010e;}}
}
B760187:L760187:{c.instructions+=1;NFSU2_TR(0x760187);
{goto L760194;}
}
B760189:L760189:{c.instructions+=1;NFSU2_TR(0x760189);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76018full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76018f:L76018f:{c.instructions+=1;NFSU2_TR(0x76018f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760192:L760192:{c.instructions+=1;NFSU2_TR(0x760192);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B760194:L760194:{c.instructions+=3;NFSU2_TR(0x760194);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760197:{NFSU2_TR(0x760197);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B760199:{NFSU2_TR(0x760199);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760224;}}
}
B76019f:L76019f:{c.instructions+=2;NFSU2_TR(0x76019f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7601a2:{NFSU2_TR(0x7601a2);
if(r1(R+518)){{goto L7601fb;}}
}
B7601a4:L7601a4:{c.instructions+=4;NFSU2_TR(0x7601a4);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7601a6:{NFSU2_TR(0x7601a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7601a7:{NFSU2_TR(0x7601a7);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7601aa:{NFSU2_TR(0x7601aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7601ed;}}
}
B7601ac:L7601ac:{c.instructions+=1;NFSU2_TR(0x7601ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7601b1ull));
TAIL_STATIC(0x7661bau,766);
}
B7601b1:L7601b1:{c.instructions+=2;NFSU2_TR(0x7601b1);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B7601b7:{NFSU2_TR(0x7601b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7601bcull));
TAIL_STATIC(0x7661c3u,766);
}
B7601bc:L7601bc:{c.instructions+=2;NFSU2_TR(0x7601bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7601be:{NFSU2_TR(0x7601be);
{goto L7601f6;}
}
B7601c0:L7601c0:{c.instructions+=7;NFSU2_TR(0x7601c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7601c1:{NFSU2_TR(0x7601c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7601c4:{NFSU2_TR(0x7601c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7601c5:{NFSU2_TR(0x7601c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7601c8:{NFSU2_TR(0x7601c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7601cb:{NFSU2_TR(0x7601cb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B7601cd:{NFSU2_TR(0x7601cd);
u8 U[4];
__builtin_memmove((U+0),gp(0x783224),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7601d3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7601d3:L7601d3:{c.instructions+=2;NFSU2_TR(0x7601d3);
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
B7601d5:{NFSU2_TR(0x7601d5);
if(r1(R+518)){{goto L7601e2;}}
}
B7601d7:L7601d7:{c.instructions+=4;NFSU2_TR(0x7601d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7601da:{NFSU2_TR(0x7601da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7601dd:{NFSU2_TR(0x7601dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7601e0:{NFSU2_TR(0x7601e0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760194u);}goto L760194;}
}
B7601e2:L7601e2:{c.instructions+=1;NFSU2_TR(0x7601e2);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7601e8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7601e8:L7601e8:{c.instructions+=2;NFSU2_TR(0x7601e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7601eb:{NFSU2_TR(0x7601eb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760194u);}goto L760194;}
}
B7601ed:L7601ed:{c.instructions+=2;NFSU2_TR(0x7601ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7601f0:{NFSU2_TR(0x7601f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7601f5ull));
TAIL_STATIC(0x7661ccu,766);
}
B7601f5:L7601f5:{c.instructions+=1;NFSU2_TR(0x7601f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7601f6:L7601f6:{c.instructions+=2;NFSU2_TR(0x7601f6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B7601f9:{NFSU2_TR(0x7601f9);
{goto L760227;}
}
B7601fb:L7601fb:{c.instructions+=3;NFSU2_TR(0x7601fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7601fd:{NFSU2_TR(0x7601fd);
u8 U[17];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B760202:{NFSU2_TR(0x760202);
if(r1(R+518)){{goto L760210;}}
}
B760204:L760204:{c.instructions+=3;NFSU2_TR(0x760204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760207:{NFSU2_TR(0x760207);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x1aull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x1aull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x1aull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B76020a:{NFSU2_TR(0x76020a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760210;}}
}
B76020c:L76020c:{c.instructions+=2;NFSU2_TR(0x76020c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76020e:{NFSU2_TR(0x76020e);
{goto L760227;}
}
B760210:L760210:{c.instructions+=1;NFSU2_TR(0x760210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760215ull));
TAIL_STATIC(0x7661bau,766);
}
B760215:L760215:{c.instructions+=2;NFSU2_TR(0x760215);
u8 U[4];
w4(U+0,u32(0x1cull));
s4(u32(r4(R+0)),r4(U+0));
}
B76021b:{NFSU2_TR(0x76021b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760220ull));
TAIL_STATIC(0x7661c3u,766);
}
B760220:L760220:{c.instructions+=2;NFSU2_TR(0x760220);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B760222:{NFSU2_TR(0x760222);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7601f6u);}goto L7601f6;}
}
B760224:L760224:{c.instructions+=1;NFSU2_TR(0x760224);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B760227:L760227:{c.instructions+=2;NFSU2_TR(0x760227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B760228:{NFSU2_TR(0x760228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B760229:L760229:{c.instructions+=4;NFSU2_TR(0x760229);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76022c:{NFSU2_TR(0x76022c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76022f:{NFSU2_TR(0x76022f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B760230:{NFSU2_TR(0x760230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760235ull));
TAIL_STATIC(0x76115eu,761);
}
B760235:L760235:{c.instructions+=2;NFSU2_TR(0x760235);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B760236:{NFSU2_TR(0x760236);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760237:L760237:{c.instructions+=3;NFSU2_TR(0x760237);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760239:{NFSU2_TR(0x760239);
u8 U[4];
w4(U+0,u32(0x7d3df0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76023e:{NFSU2_TR(0x76023e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760243ull));
{goto L760da0;}
}
B760243:L760243:{c.instructions+=3;NFSU2_TR(0x760243);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B760246:{NFSU2_TR(0x760246);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ba4ac),4);
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
B76024c:{NFSU2_TR(0x76024c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7602c6;}}
}
B76024e:L76024e:{c.instructions+=10;NFSU2_TR(0x76024e);
__builtin_memmove((R+0),(R+12),4);
}
B760250:{NFSU2_TR(0x760250);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B760253:{NFSU2_TR(0x760253);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B76025a:{NFSU2_TR(0x76025a);
__builtin_memmove((R+0),(R+12),4);
}
B76025c:{NFSU2_TR(0x76025c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B76025f:{NFSU2_TR(0x76025f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B760262:{NFSU2_TR(0x760262);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B760265:{NFSU2_TR(0x760265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B760267:{NFSU2_TR(0x760267);
u8 U[17];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B76026c:{NFSU2_TR(0x76026c);
if(r1(R+518)){{goto L7602c6;}}
}
B76026e:L76026e:{c.instructions+=2;NFSU2_TR(0x76026e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76026f:{NFSU2_TR(0x76026f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760274ull));
TAIL_STATIC(0x76be66u,76b);
}
B760274:L760274:{c.instructions+=5;NFSU2_TR(0x760274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760275:{NFSU2_TR(0x760275);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760279:{NFSU2_TR(0x760279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76027b:{NFSU2_TR(0x76027b);
u8 U[17];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B760280:{NFSU2_TR(0x760280);
if(r1(R+518)){{goto L760296;}}
}
B760282:L760282:{c.instructions+=4;NFSU2_TR(0x760282);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760285:{NFSU2_TR(0x760285);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760288:{NFSU2_TR(0x760288);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760289:{NFSU2_TR(0x760289);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76028eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760092u);}goto L760092;}
}
B76028e:L76028e:{c.instructions+=3;NFSU2_TR(0x76028e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B760291:{NFSU2_TR(0x760291);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760294:{NFSU2_TR(0x760294);
{goto L7602ad;}
}
B760296:L760296:{c.instructions+=1;NFSU2_TR(0x760296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76029bull));
TAIL_STATIC(0x7661bau,766);
}
B76029b:L76029b:{c.instructions+=2;NFSU2_TR(0x76029b);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B7602a1:{NFSU2_TR(0x7602a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7602a6ull));
TAIL_STATIC(0x7661c3u,766);
}
B7602a6:L7602a6:{c.instructions+=2;NFSU2_TR(0x7602a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B7602a9:{NFSU2_TR(0x7602a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7602ad:L7602ad:{c.instructions+=2;NFSU2_TR(0x7602ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7602b1:{NFSU2_TR(0x7602b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7602b6ull));
{goto L7602be;}
}
B7602b6:L7602b6:{c.instructions+=2;NFSU2_TR(0x7602b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7602b9:{NFSU2_TR(0x7602b9);
{goto L7602dc;}
}
B7602be:L7602be:{c.instructions+=2;NFSU2_TR(0x7602be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7602bf:{NFSU2_TR(0x7602bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7602c4ull));
TAIL_STATIC(0x76bed9u,76b);
}
B7602c4:L7602c4:{c.instructions+=2;NFSU2_TR(0x7602c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7602c5:{NFSU2_TR(0x7602c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7602c6:L7602c6:{c.instructions+=1;NFSU2_TR(0x7602c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7602cbull));
TAIL_STATIC(0x7661bau,766);
}
B7602cb:L7602cb:{c.instructions+=2;NFSU2_TR(0x7602cb);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B7602d1:{NFSU2_TR(0x7602d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7602d6ull));
TAIL_STATIC(0x7661c3u,766);
}
B7602d6:L7602d6:{c.instructions+=2;NFSU2_TR(0x7602d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B7602d9:{NFSU2_TR(0x7602d9);
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
B7602dc:L7602dc:{c.instructions+=1;NFSU2_TR(0x7602dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7602e1ull));
{goto L760ddb;}
}
B7602e1:L7602e1:{c.instructions+=1;NFSU2_TR(0x7602e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7602e2:L7602e2:{c.instructions+=11;NFSU2_TR(0x7602e2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7602e3:{NFSU2_TR(0x7602e3);
__builtin_memmove((R+20),(R+16),4);
}
B7602e5:{NFSU2_TR(0x7602e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B7602e8:{NFSU2_TR(0x7602e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7602eb:{NFSU2_TR(0x7602eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7602ec:{NFSU2_TR(0x7602ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7602ed:{NFSU2_TR(0x7602ed);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7602ef:{NFSU2_TR(0x7602ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B7602f1:{NFSU2_TR(0x7602f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B7602f8:{NFSU2_TR(0x7602f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7602fb:{NFSU2_TR(0x7602fb);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L760306;}}
}
B7602fd:L7602fd:{c.instructions+=3;NFSU2_TR(0x7602fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760300:{NFSU2_TR(0x760300);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x10ull));
s1(u32(r4(U+0)),r1(U+4));
}
B760304:{NFSU2_TR(0x760304);
{goto L760311;}
}
B760306:L760306:{c.instructions+=2;NFSU2_TR(0x760306);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76030a:{NFSU2_TR(0x76030a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B760311:L760311:{c.instructions+=3;NFSU2_TR(0x760311);
w4(R+0,u32(0x8000ull));
}
B760316:{NFSU2_TR(0x760316);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B760318:{NFSU2_TR(0x760318);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76032b;}}
}
B76031a:L76031a:{c.instructions+=2;NFSU2_TR(0x76031a);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76031d:{NFSU2_TR(0x76031d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760327;}}
}
B76031f:L76031f:{c.instructions+=2;NFSU2_TR(0x76031f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8888),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B760325:{NFSU2_TR(0x760325);
if(r1(R+518)){{goto L76032b;}}
}
B760327:L760327:{c.instructions+=1;NFSU2_TR(0x760327);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x80ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76032b:L76032b:{c.instructions+=6;NFSU2_TR(0x76032b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76032d:{NFSU2_TR(0x76032d);
__builtin_memmove((R+0),(R+8),4);
}
B76032f:{NFSU2_TR(0x76032f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B760330:{NFSU2_TR(0x760330);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B760332:{NFSU2_TR(0x760332);
w1(R+512,u8((r4(R+0))<(r4(R+24))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B760334:{NFSU2_TR(0x760334);
if(r1(R+518)){{goto L76034e;}}
}
B760336:L760336:{c.instructions+=2;NFSU2_TR(0x760336);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B760337:{NFSU2_TR(0x760337);
if(r1(R+518)){{goto L760345;}}
}
B760339:L760339:{c.instructions+=2;NFSU2_TR(0x760339);
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
B76033a:{NFSU2_TR(0x76033a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760369;}}
}
B76033c:L76033c:{c.instructions+=2;NFSU2_TR(0x76033c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0xc0000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B760343:{NFSU2_TR(0x760343);
{goto L760355;}
}
B760345:L760345:{c.instructions+=2;NFSU2_TR(0x760345);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x40000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76034c:{NFSU2_TR(0x76034c);
{goto L760355;}
}
B76034e:L76034e:{c.instructions+=1;NFSU2_TR(0x76034e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x80000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B760355:L760355:{c.instructions+=2;NFSU2_TR(0x760355);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B760358:{NFSU2_TR(0x760358);
if(r1(R+518)){{goto L76039a;}}
}
B76035a:L76035a:{c.instructions+=2;NFSU2_TR(0x76035a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76035d:{NFSU2_TR(0x76035d);
if(r1(R+518)){{goto L760391;}}
}
B76035f:L76035f:{c.instructions+=2;NFSU2_TR(0x76035f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B760362:{NFSU2_TR(0x760362);
if(r1(R+518)){{goto L760388;}}
}
B760364:L760364:{c.instructions+=2;NFSU2_TR(0x760364);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B760367:{NFSU2_TR(0x760367);
if(r1(R+518)){{goto L760383;}}
}
B760369:L760369:{c.instructions+=1;NFSU2_TR(0x760369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76036eull));
TAIL_STATIC(0x7661bau,766);
}
B76036e:L76036e:{c.instructions+=2;NFSU2_TR(0x76036e);
u8 U[4];
w4(U+0,u32(0x16ull));
s4(u32(r4(R+0)),r4(U+0));
}
B760374:{NFSU2_TR(0x760374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760379ull));
TAIL_STATIC(0x7661c3u,766);
}
B760379:L760379:{c.instructions+=3;NFSU2_TR(0x760379);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B76037b:{NFSU2_TR(0x76037b);
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
B76037e:{NFSU2_TR(0x76037e);
{goto L76057a;}
}
B760383:L760383:{c.instructions+=2;NFSU2_TR(0x760383);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760386:{NFSU2_TR(0x760386);
{goto L76039d;}
}
B760388:L760388:{c.instructions+=2;NFSU2_TR(0x760388);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76038f:{NFSU2_TR(0x76038f);
{goto L76039d;}
}
B760391:L760391:{c.instructions+=2;NFSU2_TR(0x760391);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B760398:{NFSU2_TR(0x760398);
{goto L76039d;}
}
B76039a:L76039a:{c.instructions+=1;NFSU2_TR(0x76039a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76039d:L76039d:{c.instructions+=8;NFSU2_TR(0x76039d);
__builtin_memmove((R+0),(R+8),4);
}
B76039f:{NFSU2_TR(0x76039f);
w4(R+8,u32(0x700ull));
}
B7603a4:{NFSU2_TR(0x7603a4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B7603a6:{NFSU2_TR(0x7603a6);
w4(R+4,u32(0x400ull));
}
B7603ab:{NFSU2_TR(0x7603ab);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7603ad:{NFSU2_TR(0x7603ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7603ae:{NFSU2_TR(0x7603ae);
w4(R+28,u32(0x100ull));
}
B7603b3:{NFSU2_TR(0x7603b3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7603e4;}}
}
B7603b5:L7603b5:{c.instructions+=1;NFSU2_TR(0x7603b5);
if(r1(R+518)){{goto L7603df;}}
}
B7603b7:L7603b7:{c.instructions+=2;NFSU2_TR(0x7603b7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7603b9:{NFSU2_TR(0x7603b9);
if(r1(R+518)){{goto L7603df;}}
}
B7603bb:L7603bb:{c.instructions+=2;NFSU2_TR(0x7603bb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7603bd:{NFSU2_TR(0x7603bd);
if(r1(R+518)){{goto L7603d6;}}
}
B7603bf:L7603bf:{c.instructions+=2;NFSU2_TR(0x7603bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7603c4:{NFSU2_TR(0x7603c4);
if(r1(R+518)){{goto L760410;}}
}
B7603c6:L7603c6:{c.instructions+=2;NFSU2_TR(0x7603c6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x300ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x300ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x300ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7603cb:{NFSU2_TR(0x7603cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7603f6;}}
}
B7603cd:L7603cd:{c.instructions+=2;NFSU2_TR(0x7603cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7603d4:{NFSU2_TR(0x7603d4);
{goto L760420;}
}
B7603d6:L7603d6:{c.instructions+=2;NFSU2_TR(0x7603d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7603dd:{NFSU2_TR(0x7603dd);
{goto L760420;}
}
B7603df:L7603df:{c.instructions+=2;NFSU2_TR(0x7603df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7603e2:{NFSU2_TR(0x7603e2);
{goto L760420;}
}
B7603e4:L7603e4:{c.instructions+=2;NFSU2_TR(0x7603e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x500ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7603e9:{NFSU2_TR(0x7603e9);
if(r1(R+518)){{goto L760419;}}
}
B7603eb:L7603eb:{c.instructions+=2;NFSU2_TR(0x7603eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x600ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7603f0:{NFSU2_TR(0x7603f0);
if(r1(R+518)){{goto L760410;}}
}
B7603f2:L7603f2:{c.instructions+=2;NFSU2_TR(0x7603f2);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B7603f4:{NFSU2_TR(0x7603f4);
if(r1(R+518)){{goto L760419;}}
}
B7603f6:L7603f6:{c.instructions+=1;NFSU2_TR(0x7603f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7603fbull));
TAIL_STATIC(0x7661bau,766);
}
B7603fb:L7603fb:{c.instructions+=2;NFSU2_TR(0x7603fb);
u8 U[4];
w4(U+0,u32(0x16ull));
s4(u32(r4(R+0)),r4(U+0));
}
B760401:{NFSU2_TR(0x760401);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760406ull));
TAIL_STATIC(0x7661c3u,766);
}
B760406:L760406:{c.instructions+=1;NFSU2_TR(0x760406);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B760408:L760408:{c.instructions+=2;NFSU2_TR(0x760408);
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
B76040b:{NFSU2_TR(0x76040b);
{goto L760579;}
}
B760410:L760410:{c.instructions+=2;NFSU2_TR(0x760410);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B760417:{NFSU2_TR(0x760417);
{goto L760420;}
}
B760419:L760419:{c.instructions+=1;NFSU2_TR(0x760419);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B760420:L760420:{c.instructions+=4;NFSU2_TR(0x760420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760423:{NFSU2_TR(0x760423);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B760425:{NFSU2_TR(0x760425);
w4(R+24,u32(0x80ull));
}
B76042a:{NFSU2_TR(0x76042a);
if(r1(R+518)){{goto L76043e;}}
}
B76042c:L76042c:{c.instructions+=5;NFSU2_TR(0x76042c);
__builtin_memmove((R+4),gp(0x8b842c),4);
}
B760432:{NFSU2_TR(0x760432);
w4(R+4,u32(~u32(r4(R+4))));
}
B760434:{NFSU2_TR(0x760434);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B760437:{NFSU2_TR(0x760437);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B760439:{NFSU2_TR(0x760439);
if(r1(R+519)){{goto L76043e;}}
}
B76043b:L76043b:{c.instructions+=2;NFSU2_TR(0x76043b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76043d:{NFSU2_TR(0x76043d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76043e:L76043e:{c.instructions+=2;NFSU2_TR(0x76043e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B760440:{NFSU2_TR(0x760440);
if(r1(R+518)){{goto L760459;}}
}
B760442:L760442:{c.instructions+=4;NFSU2_TR(0x760442);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B760446:{NFSU2_TR(0x760446);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x4000000ull))));
}
B76044c:{NFSU2_TR(0x76044c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8430),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B760453:{NFSU2_TR(0x760453);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760459;}}
}
B760455:L760455:{c.instructions+=1;NFSU2_TR(0x760455);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760459:L760459:{c.instructions+=2;NFSU2_TR(0x760459);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76045c:{NFSU2_TR(0x76045c);
if(r1(R+518)){{goto L760460;}}
}
B76045e:L76045e:{c.instructions+=1;NFSU2_TR(0x76045e);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B760460:L760460:{c.instructions+=2;NFSU2_TR(0x760460);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B760462:{NFSU2_TR(0x760462);
if(r1(R+518)){{goto L76046c;}}
}
B760464:L760464:{c.instructions+=2;NFSU2_TR(0x760464);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x8000000ull))));
}
B76046a:{NFSU2_TR(0x76046a);
{goto L760476;}
}
B76046c:L76046c:{c.instructions+=2;NFSU2_TR(0x76046c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76046e:{NFSU2_TR(0x76046e);
if(r1(R+518)){{goto L760476;}}
}
B760470:L760470:{c.instructions+=1;NFSU2_TR(0x760470);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x10000000ull))));
}
B760476:L760476:{c.instructions+=1;NFSU2_TR(0x760476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76047bull));
TAIL_STATIC(0x76befbu,76b);
}
B76047b:L76047b:{c.instructions+=4;NFSU2_TR(0x76047b);
__builtin_memmove((R+28),(R+0),4);
}
B76047d:{NFSU2_TR(0x76047d);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B760480:{NFSU2_TR(0x760480);
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
B760482:{NFSU2_TR(0x760482);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76049e;}}
}
B760484:L760484:{c.instructions+=1;NFSU2_TR(0x760484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760489ull));
TAIL_STATIC(0x7661bau,766);
}
B760489:L760489:{c.instructions+=2;NFSU2_TR(0x760489);
u8 U[4];
w4(U+0,u32(0x18ull));
s4(u32(r4(R+0)),r4(U+0));
}
B76048f:{NFSU2_TR(0x76048f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760494ull));
TAIL_STATIC(0x7661c3u,766);
}
B760494:L760494:{c.instructions+=1;NFSU2_TR(0x760494);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
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
B760497:L760497:{c.instructions+=2;NFSU2_TR(0x760497);
__builtin_memmove((R+0),(R+12),4);
}
B760499:{NFSU2_TR(0x760499);
{goto L760579;}
}
B76049e:L76049e:{c.instructions+=13;NFSU2_TR(0x76049e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7604a1:{NFSU2_TR(0x7604a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7604a3:{NFSU2_TR(0x7604a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7604a4:{NFSU2_TR(0x7604a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7604a7:{NFSU2_TR(0x7604a7);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B7604ad:{NFSU2_TR(0x7604ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7604b0:{NFSU2_TR(0x7604b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7604b2:{NFSU2_TR(0x7604b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7604b5:{NFSU2_TR(0x7604b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7604b6:{NFSU2_TR(0x7604b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7604b9:{NFSU2_TR(0x7604b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7604bc:{NFSU2_TR(0x7604bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7604bf:{NFSU2_TR(0x7604bf);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831d0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7604c5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7604c5:L7604c5:{c.instructions+=3;NFSU2_TR(0x7604c5);
__builtin_memmove((R+24),(R+0),4);
}
B7604c7:{NFSU2_TR(0x7604c7);
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
B7604c9:{NFSU2_TR(0x7604c9);
if(r1(R+518)){{goto L7604dd;}}
}
B7604cb:L7604cb:{c.instructions+=2;NFSU2_TR(0x7604cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7604cc:{NFSU2_TR(0x7604cc);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832c0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7604d2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7604d2:L7604d2:{c.instructions+=2;NFSU2_TR(0x7604d2);
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
B7604d4:{NFSU2_TR(0x7604d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7604ec;}}
}
B7604d6:L7604d6:{c.instructions+=2;NFSU2_TR(0x7604d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7604d7:{NFSU2_TR(0x7604d7);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7604ddull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7604dd:L7604dd:{c.instructions+=1;NFSU2_TR(0x7604dd);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7604e3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7604e3:L7604e3:{c.instructions+=2;NFSU2_TR(0x7604e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7604e4:{NFSU2_TR(0x7604e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7604e9ull));
TAIL_STATIC(0x7661ccu,766);
}
B7604e9:L7604e9:{c.instructions+=2;NFSU2_TR(0x7604e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7604ea:{NFSU2_TR(0x7604ea);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760497u);}goto L760497;}
}
B7604ec:L7604ec:{c.instructions+=2;NFSU2_TR(0x7604ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7604ef:{NFSU2_TR(0x7604ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7604f7;}}
}
B7604f1:L7604f1:{c.instructions+=2;NFSU2_TR(0x7604f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x40ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B7604f5:{NFSU2_TR(0x7604f5);
{goto L760500;}
}
B7604f7:L7604f7:{c.instructions+=2;NFSU2_TR(0x7604f7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7604fa:{NFSU2_TR(0x7604fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760500;}}
}
B7604fc:L7604fc:{c.instructions+=1;NFSU2_TR(0x7604fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x8ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B760500:L760500:{c.instructions+=3;NFSU2_TR(0x760500);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760501:{NFSU2_TR(0x760501);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760502:{NFSU2_TR(0x760502);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760507ull));
TAIL_STATIC(0x76bd2au,76b);
}
B760507:L760507:{c.instructions+=16;NFSU2_TR(0x760507);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76050b:{NFSU2_TR(0x76050b);
__builtin_memmove((R+0),(R+28),4);
}
B76050d:{NFSU2_TR(0x76050d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B760510:{NFSU2_TR(0x760510);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B760517:{NFSU2_TR(0x760517);
__builtin_memmove((R+0),(R+28),4);
}
B760519:{NFSU2_TR(0x760519);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B76051c:{NFSU2_TR(0x76051c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B76051f:{NFSU2_TR(0x76051f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B760522:{NFSU2_TR(0x760522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760523:{NFSU2_TR(0x760523);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760524:{NFSU2_TR(0x760524);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B760526:{NFSU2_TR(0x760526);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B760529:{NFSU2_TR(0x760529);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76052c:{NFSU2_TR(0x76052c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x48ull))));
s1(u32(r4(U+0)),r1(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
}
B760530:{NFSU2_TR(0x760530);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B760534:{NFSU2_TR(0x760534);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760562;}}
}
B760536:L760536:{c.instructions+=2;NFSU2_TR(0x760536);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B760538:{NFSU2_TR(0x760538);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L760562;}}
}
B76053a:L76053a:{c.instructions+=2;NFSU2_TR(0x76053a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76053e:{NFSU2_TR(0x76053e);
if(r1(R+518)){{goto L760562;}}
}
B760540:L760540:{c.instructions+=4;NFSU2_TR(0x760540);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760542:{NFSU2_TR(0x760542);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760544:{NFSU2_TR(0x760544);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760545:{NFSU2_TR(0x760545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76054aull));
{goto L760673;}
}
B76054a:L76054a:{c.instructions+=4;NFSU2_TR(0x76054a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76054d:{NFSU2_TR(0x76054d);
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
B760550:{NFSU2_TR(0x760550);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760553:{NFSU2_TR(0x760553);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76057e;}}
}
B760555:L760555:{c.instructions+=1;NFSU2_TR(0x760555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76055aull));
TAIL_STATIC(0x7661c3u,766);
}
B76055a:L76055a:{c.instructions+=2;NFSU2_TR(0x76055a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x83ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B760560:{NFSU2_TR(0x760560);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7605bd;}}
}
B760562:L760562:{c.instructions+=2;NFSU2_TR(0x760562);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
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
B760566:{NFSU2_TR(0x760566);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760577;}}
}
B760568:L760568:{c.instructions+=2;NFSU2_TR(0x760568);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B76056c:{NFSU2_TR(0x76056c);
if(r1(R+518)){{goto L760577;}}
}
B76056e:L76056e:{c.instructions+=3;NFSU2_TR(0x76056e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B760570:{NFSU2_TR(0x760570);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B760574:{NFSU2_TR(0x760574);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))|u32(u8(0x20ull))));
s1(u32(r4(R+0)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B760577:L760577:{c.instructions+=1;NFSU2_TR(0x760577);
__builtin_memmove((R+0),(R+28),4);
}
B760579:L760579:{c.instructions+=1;NFSU2_TR(0x760579);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76057a:L76057a:{c.instructions+=4;NFSU2_TR(0x76057a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76057b:{NFSU2_TR(0x76057b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76057c:{NFSU2_TR(0x76057c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76057d:{NFSU2_TR(0x76057d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76057e:L76057e:{c.instructions+=6;NFSU2_TR(0x76057e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B760582:{NFSU2_TR(0x760582);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760584:{NFSU2_TR(0x760584);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B760587:{NFSU2_TR(0x760587);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760588:{NFSU2_TR(0x760588);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760589:{NFSU2_TR(0x760589);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76058eull));
{goto L760792;}
}
B76058e:L76058e:{c.instructions+=3;NFSU2_TR(0x76058e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B760591:{NFSU2_TR(0x760591);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B760593:{NFSU2_TR(0x760593);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7605ab;}}
}
B760595:L760595:{c.instructions+=2;NFSU2_TR(0x760595);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1aull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B760599:{NFSU2_TR(0x760599);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7605ab;}}
}
B76059b:L76059b:{c.instructions+=3;NFSU2_TR(0x76059b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76059e:{NFSU2_TR(0x76059e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76059f:{NFSU2_TR(0x76059f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7605a4ull));
TAIL_STATIC(0x76c0cbu,76c);
}
B7605a4:L7605a4:{c.instructions+=4;NFSU2_TR(0x7605a4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7605a7:{NFSU2_TR(0x7605a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7605a8:{NFSU2_TR(0x7605a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7605a9:{NFSU2_TR(0x7605a9);
if(r1(R+518)){{goto L7605bd;}}
}
B7605ab:L7605ab:{c.instructions+=4;NFSU2_TR(0x7605ab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7605ad:{NFSU2_TR(0x7605ad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7605af:{NFSU2_TR(0x7605af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7605b0:{NFSU2_TR(0x7605b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7605b5ull));
{goto L760673;}
}
B7605b5:L7605b5:{c.instructions+=3;NFSU2_TR(0x7605b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7605b8:{NFSU2_TR(0x7605b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7605bb:{NFSU2_TR(0x7605bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760562u);}goto L760562;}}
}
B7605bd:L7605bd:{c.instructions+=2;NFSU2_TR(0x7605bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7605be:{NFSU2_TR(0x7605be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7605c3ull));
TAIL_STATIC(0x75ff74u,75f);
}
B7605c3:L7605c3:{c.instructions+=2;NFSU2_TR(0x7605c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7605c4:{NFSU2_TR(0x7605c4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760408u);}goto L760408;}
}
B7605c9:L7605c9:{c.instructions+=3;NFSU2_TR(0x7605c9);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7605cb:{NFSU2_TR(0x7605cb);
u8 U[4];
w4(U+0,u32(0x7d3e00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7605d0:{NFSU2_TR(0x7605d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7605d5ull));
{goto L760da0;}
}
B7605d5:L7605d5:{c.instructions+=12;NFSU2_TR(0x7605d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7605d9:{NFSU2_TR(0x7605d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7605dd:{NFSU2_TR(0x7605dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7605e0:{NFSU2_TR(0x7605e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7605e3:{NFSU2_TR(0x7605e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7605e6:{NFSU2_TR(0x7605e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7605e9:{NFSU2_TR(0x7605e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7605ea:{NFSU2_TR(0x7605ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7605ed:{NFSU2_TR(0x7605ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7605ee:{NFSU2_TR(0x7605ee);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7605f0:{NFSU2_TR(0x7605f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7605f1:{NFSU2_TR(0x7605f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7605f6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7602e2u);}goto L7602e2;}
}
B7605f6:L7605f6:{c.instructions+=4;NFSU2_TR(0x7605f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7605f9:{NFSU2_TR(0x7605f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7605fc:{NFSU2_TR(0x7605fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760600:{NFSU2_TR(0x760600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760605ull));
{goto L76060e;}
}
B760605:L760605:{c.instructions+=2;NFSU2_TR(0x760605);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760608:{NFSU2_TR(0x760608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76060dull));
{goto L760ddb;}
}
B76060d:L76060d:{c.instructions+=1;NFSU2_TR(0x76060d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76060e:L76060e:{c.instructions+=2;NFSU2_TR(0x76060e);
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
B760612:{NFSU2_TR(0x760612);
if(r1(R+518)){{goto L76061d;}}
}
B760614:L760614:{c.instructions+=2;NFSU2_TR(0x760614);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760617:{NFSU2_TR(0x760617);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76061cull));
TAIL_STATIC(0x76bed9u,76b);
}
B76061c:L76061c:{c.instructions+=1;NFSU2_TR(0x76061c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76061d:L76061d:{c.instructions+=1;NFSU2_TR(0x76061d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76061e:L76061e:{c.instructions+=3;NFSU2_TR(0x76061e);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760620:{NFSU2_TR(0x760620);
u8 U[4];
w4(U+0,u32(0x7d3e10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760625:{NFSU2_TR(0x760625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76062aull));
{goto L760da0;}
}
B76062a:L76062a:{c.instructions+=11;NFSU2_TR(0x76062a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76062e:{NFSU2_TR(0x76062e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760632:{NFSU2_TR(0x760632);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760635:{NFSU2_TR(0x760635);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760638:{NFSU2_TR(0x760638);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76063b:{NFSU2_TR(0x76063b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76063e:{NFSU2_TR(0x76063e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76063f:{NFSU2_TR(0x76063f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B760642:{NFSU2_TR(0x760642);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760643:{NFSU2_TR(0x760643);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B760646:{NFSU2_TR(0x760646);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76064bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7602e2u);}goto L7602e2;}
}
B76064b:L76064b:{c.instructions+=4;NFSU2_TR(0x76064b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B76064e:{NFSU2_TR(0x76064e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760651:{NFSU2_TR(0x760651);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760655:{NFSU2_TR(0x760655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76065aull));
{goto L760663;}
}
B76065a:L76065a:{c.instructions+=2;NFSU2_TR(0x76065a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76065d:{NFSU2_TR(0x76065d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760662ull));
{goto L760ddb;}
}
B760662:L760662:{c.instructions+=1;NFSU2_TR(0x760662);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760663:L760663:{c.instructions+=2;NFSU2_TR(0x760663);
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
B760667:{NFSU2_TR(0x760667);
if(r1(R+518)){{goto L760672;}}
}
B760669:L760669:{c.instructions+=2;NFSU2_TR(0x760669);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76066c:{NFSU2_TR(0x76066c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760671ull));
TAIL_STATIC(0x76bed9u,76b);
}
B760671:L760671:{c.instructions+=1;NFSU2_TR(0x760671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760672:L760672:{c.instructions+=1;NFSU2_TR(0x760672);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760673:L760673:{c.instructions+=4;NFSU2_TR(0x760673);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760674:{NFSU2_TR(0x760674);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B760678:{NFSU2_TR(0x760678);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760679:{NFSU2_TR(0x760679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76067eull));
TAIL_STATIC(0x76be25u,76b);
}
B76067e:L76067e:{c.instructions+=3;NFSU2_TR(0x76067e);
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
B760681:{NFSU2_TR(0x760681);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760682:{NFSU2_TR(0x760682);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760694;}}
}
B760684:L760684:{c.instructions+=1;NFSU2_TR(0x760684);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760689ull));
TAIL_STATIC(0x7661bau,766);
}
B760689:L760689:{c.instructions+=4;NFSU2_TR(0x760689);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B76068f:{NFSU2_TR(0x76068f);
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
B760692:{NFSU2_TR(0x760692);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B760693:{NFSU2_TR(0x760693);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760694:L760694:{c.instructions+=6;NFSU2_TR(0x760694);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760695:{NFSU2_TR(0x760695);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760699:{NFSU2_TR(0x760699);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76069b:{NFSU2_TR(0x76069b);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76069f:{NFSU2_TR(0x76069f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7606a0:{NFSU2_TR(0x7606a0);
u8 U[4];
__builtin_memmove((U+0),gp(0x783228),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7606a6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7606a6:L7606a6:{c.instructions+=3;NFSU2_TR(0x7606a6);
__builtin_memmove((R+28),(R+0),4);
}
B7606a8:{NFSU2_TR(0x7606a8);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B7606ab:{NFSU2_TR(0x7606ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7606b5;}}
}
B7606ad:L7606ad:{c.instructions+=1;NFSU2_TR(0x7606ad);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7606b3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7606b3:L7606b3:{c.instructions+=1;NFSU2_TR(0x7606b3);
{goto L7606b7;}
}
B7606b5:L7606b5:{c.instructions+=1;NFSU2_TR(0x7606b5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7606b7:L7606b7:{c.instructions+=2;NFSU2_TR(0x7606b7);
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
B7606b9:{NFSU2_TR(0x7606b9);
if(r1(R+518)){{goto L7606c7;}}
}
B7606bb:L7606bb:{c.instructions+=2;NFSU2_TR(0x7606bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7606bc:{NFSU2_TR(0x7606bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7606c1ull));
TAIL_STATIC(0x7661ccu,766);
}
B7606c1:L7606c1:{c.instructions+=3;NFSU2_TR(0x7606c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7606c2:{NFSU2_TR(0x7606c2);
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
B7606c5:{NFSU2_TR(0x7606c5);
{goto L7606e4;}
}
B7606c7:L7606c7:{c.instructions+=9;NFSU2_TR(0x7606c7);
__builtin_memmove((R+4),(R+24),4);
}
B7606c9:{NFSU2_TR(0x7606c9);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1full))));
}
B7606cc:{NFSU2_TR(0x7606cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B7606cf:{NFSU2_TR(0x7606cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B7606d6:{NFSU2_TR(0x7606d6);
__builtin_memmove((R+0),(R+24),4);
}
B7606d8:{NFSU2_TR(0x7606d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7606db:{NFSU2_TR(0x7606db);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7606df:{NFSU2_TR(0x7606df);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))&u32(u8(0xfdull))));
s1(u32(r4(R+0)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B7606e2:{NFSU2_TR(0x7606e2);
__builtin_memmove((R+0),(R+28),4);
}
B7606e4:L7606e4:{c.instructions+=3;NFSU2_TR(0x7606e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7606e5:{NFSU2_TR(0x7606e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7606e6:{NFSU2_TR(0x7606e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7606e7:L7606e7:{c.instructions+=3;NFSU2_TR(0x7606e7);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7606e9:{NFSU2_TR(0x7606e9);
u8 U[4];
w4(U+0,u32(0x7d3e20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7606ee:{NFSU2_TR(0x7606ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7606f3ull));
{goto L760da0;}
}
B7606f3:L7606f3:{c.instructions+=3;NFSU2_TR(0x7606f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7606f6:{NFSU2_TR(0x7606f6);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ba4ac),4);
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
B7606fc:{NFSU2_TR(0x7606fc);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L760776;}}
}
B7606fe:L7606fe:{c.instructions+=10;NFSU2_TR(0x7606fe);
__builtin_memmove((R+0),(R+12),4);
}
B760700:{NFSU2_TR(0x760700);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B760703:{NFSU2_TR(0x760703);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B76070a:{NFSU2_TR(0x76070a);
__builtin_memmove((R+0),(R+12),4);
}
B76070c:{NFSU2_TR(0x76070c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B76070f:{NFSU2_TR(0x76070f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B760712:{NFSU2_TR(0x760712);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B760715:{NFSU2_TR(0x760715);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B760717:{NFSU2_TR(0x760717);
u8 U[17];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B76071c:{NFSU2_TR(0x76071c);
if(r1(R+518)){{goto L760776;}}
}
B76071e:L76071e:{c.instructions+=2;NFSU2_TR(0x76071e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76071f:{NFSU2_TR(0x76071f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760724ull));
TAIL_STATIC(0x76be66u,76b);
}
B760724:L760724:{c.instructions+=5;NFSU2_TR(0x760724);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760725:{NFSU2_TR(0x760725);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760729:{NFSU2_TR(0x760729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76072b:{NFSU2_TR(0x76072b);
u8 U[17];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B760730:{NFSU2_TR(0x760730);
if(r1(R+518)){{goto L760746;}}
}
B760732:L760732:{c.instructions+=4;NFSU2_TR(0x760732);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760735:{NFSU2_TR(0x760735);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760738:{NFSU2_TR(0x760738);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760739:{NFSU2_TR(0x760739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76073eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760673u);}goto L760673;}
}
B76073e:L76073e:{c.instructions+=3;NFSU2_TR(0x76073e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B760741:{NFSU2_TR(0x760741);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760744:{NFSU2_TR(0x760744);
{goto L76075d;}
}
B760746:L760746:{c.instructions+=1;NFSU2_TR(0x760746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76074bull));
TAIL_STATIC(0x7661bau,766);
}
B76074b:L76074b:{c.instructions+=2;NFSU2_TR(0x76074b);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B760751:{NFSU2_TR(0x760751);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760756ull));
TAIL_STATIC(0x7661c3u,766);
}
B760756:L760756:{c.instructions+=2;NFSU2_TR(0x760756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B760759:{NFSU2_TR(0x760759);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76075d:L76075d:{c.instructions+=2;NFSU2_TR(0x76075d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760761:{NFSU2_TR(0x760761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760766ull));
{goto L76076e;}
}
B760766:L760766:{c.instructions+=2;NFSU2_TR(0x760766);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760769:{NFSU2_TR(0x760769);
{goto L76078c;}
}
B76076e:L76076e:{c.instructions+=2;NFSU2_TR(0x76076e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76076f:{NFSU2_TR(0x76076f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760774ull));
TAIL_STATIC(0x76bed9u,76b);
}
B760774:L760774:{c.instructions+=2;NFSU2_TR(0x760774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760775:{NFSU2_TR(0x760775);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760776:L760776:{c.instructions+=1;NFSU2_TR(0x760776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76077bull));
TAIL_STATIC(0x7661bau,766);
}
B76077b:L76077b:{c.instructions+=2;NFSU2_TR(0x76077b);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B760781:{NFSU2_TR(0x760781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760786ull));
TAIL_STATIC(0x7661c3u,766);
}
B760786:L760786:{c.instructions+=2;NFSU2_TR(0x760786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B760789:{NFSU2_TR(0x760789);
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
B76078c:L76078c:{c.instructions+=1;NFSU2_TR(0x76078c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760791ull));
{goto L760ddb;}
}
B760791:L760791:{c.instructions+=1;NFSU2_TR(0x760791);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760792:L760792:{c.instructions+=11;NFSU2_TR(0x760792);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760793:{NFSU2_TR(0x760793);
__builtin_memmove((R+20),(R+16),4);
}
B760795:{NFSU2_TR(0x760795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B760798:{NFSU2_TR(0x760798);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76079c:{NFSU2_TR(0x76079c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7607a0:{NFSU2_TR(0x7607a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7607a1:{NFSU2_TR(0x7607a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7607a4:{NFSU2_TR(0x7607a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7607a5:{NFSU2_TR(0x7607a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7607a6:{NFSU2_TR(0x7607a6);
__builtin_memmove((R+8),(R+12),4);
}
B7607a8:{NFSU2_TR(0x7607a8);
if(r1(R+518)){{goto L760958;}}
}
B7607ae:L7607ae:{c.instructions+=12;NFSU2_TR(0x7607ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7607b1:{NFSU2_TR(0x7607b1);
__builtin_memmove((R+4),(R+0),4);
}
B7607b3:{NFSU2_TR(0x7607b3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B7607b6:{NFSU2_TR(0x7607b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B7607b9:{NFSU2_TR(0x7607b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7607bc:{NFSU2_TR(0x7607bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B7607c3:{NFSU2_TR(0x7607c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7607c5:{NFSU2_TR(0x7607c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B7607c8:{NFSU2_TR(0x7607c8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B7607ca:{NFSU2_TR(0x7607ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7607cd:{NFSU2_TR(0x7607cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7607d0:{NFSU2_TR(0x7607d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760958;}}
}
B7607d6:L7607d6:{c.instructions+=2;NFSU2_TR(0x7607d6);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x48ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7607d9:{NFSU2_TR(0x7607d9);
if(r1(R+518)){{goto L7607f8;}}
}
B7607db:L7607db:{c.instructions+=3;NFSU2_TR(0x7607db);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7607de:{NFSU2_TR(0x7607de);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0xaull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0xaull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0xaull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7607e0:{NFSU2_TR(0x7607e0);
if(r1(R+518)){{goto L7607f8;}}
}
B7607e2:L7607e2:{c.instructions+=6;NFSU2_TR(0x7607e2);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B7607e5:{NFSU2_TR(0x7607e5);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+12)),r1(U+0));
}
B7607e7:{NFSU2_TR(0x7607e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7607e9:{NFSU2_TR(0x7607e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7607ec:{NFSU2_TR(0x7607ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7607f3:{NFSU2_TR(0x7607f3);
u8 U[13];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0xaull));
s1(u32(r4(U+8)),r1(U+12));
}
B7607f8:L7607f8:{c.instructions+=8;NFSU2_TR(0x7607f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7607fa:{NFSU2_TR(0x7607fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7607fd:{NFSU2_TR(0x7607fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7607fe:{NFSU2_TR(0x7607fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760801:{NFSU2_TR(0x760801);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B760803:{NFSU2_TR(0x760803);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760804:{NFSU2_TR(0x760804);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B760807:{NFSU2_TR(0x760807);
u8 U[4];
__builtin_memmove((U+0),gp(0x783234),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76080dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76080d:L76080d:{c.instructions+=2;NFSU2_TR(0x76080d);
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
B76080f:{NFSU2_TR(0x76080f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76084a;}}
}
B760811:L760811:{c.instructions+=1;NFSU2_TR(0x760811);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760817ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B760817:L760817:{c.instructions+=4;NFSU2_TR(0x760817);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760819:{NFSU2_TR(0x760819);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76081a:{NFSU2_TR(0x76081a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B76081c:{NFSU2_TR(0x76081c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760832;}}
}
B76081e:L76081e:{c.instructions+=1;NFSU2_TR(0x76081e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760823ull));
TAIL_STATIC(0x7661bau,766);
}
B760823:L760823:{c.instructions+=2;NFSU2_TR(0x760823);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B760829:{NFSU2_TR(0x760829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76082eull));
TAIL_STATIC(0x7661c3u,766);
}
B76082e:L76082e:{c.instructions+=2;NFSU2_TR(0x76082e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B760830:{NFSU2_TR(0x760830);
{goto L760842;}
}
B760832:L760832:{c.instructions+=2;NFSU2_TR(0x760832);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B760835:{NFSU2_TR(0x760835);
if(r1(R+518)){{goto L760958;}}
}
B76083b:L76083b:{c.instructions+=2;NFSU2_TR(0x76083b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76083c:{NFSU2_TR(0x76083c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760841ull));
TAIL_STATIC(0x7661ccu,766);
}
B760841:L760841:{c.instructions+=1;NFSU2_TR(0x760841);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760842:L760842:{c.instructions+=2;NFSU2_TR(0x760842);
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
B760845:{NFSU2_TR(0x760845);
{goto L76095a;}
}
B76084a:L76084a:{c.instructions+=7;NFSU2_TR(0x76084a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76084c:{NFSU2_TR(0x76084c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76084f:{NFSU2_TR(0x76084f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B760852:{NFSU2_TR(0x760852);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B760856:{NFSU2_TR(0x760856);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B760858:{NFSU2_TR(0x760858);
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
B76085a:{NFSU2_TR(0x76085a);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L760953;}}
}
B760860:L760860:{c.instructions+=2;NFSU2_TR(0x760860);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B760862:{NFSU2_TR(0x760862);
if(r1(R+518)){{goto L76086d;}}
}
B760864:L760864:{c.instructions+=2;NFSU2_TR(0x760864);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B760867:{NFSU2_TR(0x760867);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76086d;}}
}
B760869:L760869:{c.instructions+=2;NFSU2_TR(0x760869);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0x4ull))));
}
B76086b:{NFSU2_TR(0x76086b);
{goto L76086f;}
}
B76086d:L76086d:{c.instructions+=1;NFSU2_TR(0x76086d);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfbull))));
}
B76086f:L76086f:{c.instructions+=8;NFSU2_TR(0x76086f);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B760871:{NFSU2_TR(0x760871);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760874:{NFSU2_TR(0x760874);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B760877:{NFSU2_TR(0x760877);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B760879:{NFSU2_TR(0x760879);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B76087b:{NFSU2_TR(0x76087b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76087e:{NFSU2_TR(0x76087e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760881:{NFSU2_TR(0x760881);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76094d;}}
}
B760887:L760887:{c.instructions+=4;NFSU2_TR(0x760887);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76088a:{NFSU2_TR(0x76088a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76088c:{NFSU2_TR(0x76088c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1aull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76088e:{NFSU2_TR(0x76088e);
if(r1(R+518)){{goto L76093d;}}
}
B760894:L760894:{c.instructions+=2;NFSU2_TR(0x760894);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B760896:{NFSU2_TR(0x760896);
if(r1(R+518)){{goto L7608a3;}}
}
B760898:L760898:{c.instructions+=4;NFSU2_TR(0x760898);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+12)),r1(U+0));
}
B76089a:{NFSU2_TR(0x76089a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76089b:{NFSU2_TR(0x76089b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76089e:{NFSU2_TR(0x76089e);
{goto L76092f;}
}
B7608a3:L7608a3:{c.instructions+=3;NFSU2_TR(0x7608a3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7608a4:{NFSU2_TR(0x7608a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B7608a7:{NFSU2_TR(0x7608a7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7608bd;}}
}
B7608a9:L7608a9:{c.instructions+=4;NFSU2_TR(0x7608a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7608ac:{NFSU2_TR(0x7608ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7608ad:{NFSU2_TR(0x7608ad);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7608b0:{NFSU2_TR(0x7608b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7608b8;}}
}
B7608b2:L7608b2:{c.instructions+=2;NFSU2_TR(0x7608b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7608b6:{NFSU2_TR(0x7608b6);
{goto L760911;}
}
B7608b8:L7608b8:{c.instructions+=2;NFSU2_TR(0x7608b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7608bb:{NFSU2_TR(0x7608bb);
{goto L76092b;}
}
B7608bd:L7608bd:{c.instructions+=10;NFSU2_TR(0x7608bd);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B7608c0:{NFSU2_TR(0x7608c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7608c2:{NFSU2_TR(0x7608c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7608c5:{NFSU2_TR(0x7608c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7608c6:{NFSU2_TR(0x7608c6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7608c8:{NFSU2_TR(0x7608c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B7608cb:{NFSU2_TR(0x7608cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7608cc:{NFSU2_TR(0x7608cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7608ce:{NFSU2_TR(0x7608ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B7608d1:{NFSU2_TR(0x7608d1);
u8 U[4];
__builtin_memmove((U+0),gp(0x783234),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7608d7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7608d7:L7608d7:{c.instructions+=2;NFSU2_TR(0x7608d7);
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
B7608d9:{NFSU2_TR(0x7608d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7608e5;}}
}
B7608db:L7608db:{c.instructions+=1;NFSU2_TR(0x7608db);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7608e1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7608e1:L7608e1:{c.instructions+=2;NFSU2_TR(0x7608e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7608e3:{NFSU2_TR(0x7608e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76092b;}}
}
B7608e5:L7608e5:{c.instructions+=2;NFSU2_TR(0x7608e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7608e9:{NFSU2_TR(0x7608e9);
if(r1(R+518)){{goto L76092b;}}
}
B7608eb:L7608eb:{c.instructions+=3;NFSU2_TR(0x7608eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7608ed:{NFSU2_TR(0x7608ed);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x48ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
}
B7608f2:{NFSU2_TR(0x7608f2);
if(r1(R+518)){{goto L760906;}}
}
B7608f4:L7608f4:{c.instructions+=3;NFSU2_TR(0x7608f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7608f7:{NFSU2_TR(0x7608f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7608f9:{NFSU2_TR(0x7608f9);
if(r1(R+518)){{goto L760911;}}
}
B7608fb:L7608fb:{c.instructions+=4;NFSU2_TR(0x7608fb);
u8 U[1];
w1(U+0,u8(0xdull));
s1(u32(r4(R+12)),r1(U+0));
}
B7608fe:{NFSU2_TR(0x7608fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B760900:{NFSU2_TR(0x760900);
u8 U[13];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B760904:{NFSU2_TR(0x760904);
{goto L76092e;}
}
B760906:L760906:{c.instructions+=2;NFSU2_TR(0x760906);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B760909:{NFSU2_TR(0x760909);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760916;}}
}
B76090b:L76090b:{c.instructions+=2;NFSU2_TR(0x76090b);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B76090f:{NFSU2_TR(0x76090f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760916;}}
}
B760911:L760911:{c.instructions+=2;NFSU2_TR(0x760911);
u8 U[1];
w1(U+0,u8(0xaull));
s1(u32(r4(R+12)),r1(U+0));
}
B760914:{NFSU2_TR(0x760914);
{goto L76092e;}
}
B760916:L760916:{c.instructions+=4;NFSU2_TR(0x760916);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760918:{NFSU2_TR(0x760918);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76091a:{NFSU2_TR(0x76091a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76091d:{NFSU2_TR(0x76091d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760922ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760673u);}goto L760673;}
}
B760922:L760922:{c.instructions+=3;NFSU2_TR(0x760922);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B760925:{NFSU2_TR(0x760925);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B760929:{NFSU2_TR(0x760929);
if(r1(R+518)){{goto L76092f;}}
}
B76092b:L76092b:{c.instructions+=1;NFSU2_TR(0x76092b);
u8 U[1];
w1(U+0,u8(0xdull));
s1(u32(r4(R+12)),r1(U+0));
}
B76092e:L76092e:{c.instructions+=1;NFSU2_TR(0x76092e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76092f:L76092f:{c.instructions+=3;NFSU2_TR(0x76092f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B760932:{NFSU2_TR(0x760932);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B760935:{NFSU2_TR(0x760935);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760887u);}goto L760887;}}
}
B76093b:L76093b:{c.instructions+=1;NFSU2_TR(0x76093b);
{goto L76094d;}
}
B76093d:L76093d:{c.instructions+=5;NFSU2_TR(0x76093d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76093f:{NFSU2_TR(0x76093f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B760943:{NFSU2_TR(0x760943);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B760945:{NFSU2_TR(0x760945);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B760947:{NFSU2_TR(0x760947);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76094d;}}
}
B760949:L760949:{c.instructions+=2;NFSU2_TR(0x760949);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0x2ull))));
}
B76094b:{NFSU2_TR(0x76094b);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B76094d:L76094d:{c.instructions+=2;NFSU2_TR(0x76094d);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+12))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B760950:{NFSU2_TR(0x760950);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760953:L760953:{c.instructions+=2;NFSU2_TR(0x760953);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760956:{NFSU2_TR(0x760956);
{goto L76095a;}
}
B760958:L760958:{c.instructions+=1;NFSU2_TR(0x760958);
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
B76095a:L76095a:{c.instructions+=5;NFSU2_TR(0x76095a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76095b:{NFSU2_TR(0x76095b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76095c:{NFSU2_TR(0x76095c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76095d:{NFSU2_TR(0x76095d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76095e:{NFSU2_TR(0x76095e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76095f:L76095f:{c.instructions+=3;NFSU2_TR(0x76095f);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760961:{NFSU2_TR(0x760961);
u8 U[4];
w4(U+0,u32(0x7d3e30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760966:{NFSU2_TR(0x760966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76096bull));
{goto L760da0;}
}
B76096b:L76096b:{c.instructions+=3;NFSU2_TR(0x76096b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76096e:{NFSU2_TR(0x76096e);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ba4ac),4);
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
B760974:{NFSU2_TR(0x760974);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7609ee;}}
}
B760976:L760976:{c.instructions+=10;NFSU2_TR(0x760976);
__builtin_memmove((R+0),(R+12),4);
}
B760978:{NFSU2_TR(0x760978);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B76097b:{NFSU2_TR(0x76097b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B760982:{NFSU2_TR(0x760982);
__builtin_memmove((R+0),(R+12),4);
}
B760984:{NFSU2_TR(0x760984);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B760987:{NFSU2_TR(0x760987);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B76098a:{NFSU2_TR(0x76098a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B76098d:{NFSU2_TR(0x76098d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76098f:{NFSU2_TR(0x76098f);
u8 U[17];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B760994:{NFSU2_TR(0x760994);
if(r1(R+518)){{goto L7609ee;}}
}
B760996:L760996:{c.instructions+=2;NFSU2_TR(0x760996);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760997:{NFSU2_TR(0x760997);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76099cull));
TAIL_STATIC(0x76be66u,76b);
}
B76099c:L76099c:{c.instructions+=5;NFSU2_TR(0x76099c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76099d:{NFSU2_TR(0x76099d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7609a1:{NFSU2_TR(0x7609a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7609a3:{NFSU2_TR(0x7609a3);
u8 U[17];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B7609a8:{NFSU2_TR(0x7609a8);
if(r1(R+518)){{goto L7609be;}}
}
B7609aa:L7609aa:{c.instructions+=4;NFSU2_TR(0x7609aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7609ad:{NFSU2_TR(0x7609ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7609b0:{NFSU2_TR(0x7609b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7609b1:{NFSU2_TR(0x7609b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7609b6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760792u);}goto L760792;}
}
B7609b6:L7609b6:{c.instructions+=3;NFSU2_TR(0x7609b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7609b9:{NFSU2_TR(0x7609b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7609bc:{NFSU2_TR(0x7609bc);
{goto L7609d5;}
}
B7609be:L7609be:{c.instructions+=1;NFSU2_TR(0x7609be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7609c3ull));
TAIL_STATIC(0x7661bau,766);
}
B7609c3:L7609c3:{c.instructions+=2;NFSU2_TR(0x7609c3);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B7609c9:{NFSU2_TR(0x7609c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7609ceull));
TAIL_STATIC(0x7661c3u,766);
}
B7609ce:L7609ce:{c.instructions+=2;NFSU2_TR(0x7609ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B7609d1:{NFSU2_TR(0x7609d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7609d5:L7609d5:{c.instructions+=2;NFSU2_TR(0x7609d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7609d9:{NFSU2_TR(0x7609d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7609deull));
{goto L7609e6;}
}
B7609de:L7609de:{c.instructions+=2;NFSU2_TR(0x7609de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7609e1:{NFSU2_TR(0x7609e1);
{goto L760a04;}
}
B7609e6:L7609e6:{c.instructions+=2;NFSU2_TR(0x7609e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7609e7:{NFSU2_TR(0x7609e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7609ecull));
TAIL_STATIC(0x76bed9u,76b);
}
B7609ec:L7609ec:{c.instructions+=2;NFSU2_TR(0x7609ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7609ed:{NFSU2_TR(0x7609ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7609ee:L7609ee:{c.instructions+=1;NFSU2_TR(0x7609ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7609f3ull));
TAIL_STATIC(0x7661bau,766);
}
B7609f3:L7609f3:{c.instructions+=2;NFSU2_TR(0x7609f3);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B7609f9:{NFSU2_TR(0x7609f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7609feull));
TAIL_STATIC(0x7661c3u,766);
}
B7609fe:L7609fe:{c.instructions+=2;NFSU2_TR(0x7609fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B760a01:{NFSU2_TR(0x760a01);
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
B760a04:L760a04:{c.instructions+=1;NFSU2_TR(0x760a04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760a09ull));
{goto L760ddb;}
}
B760a09:L760a09:{c.instructions+=1;NFSU2_TR(0x760a09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760a0a:L760a0a:{c.instructions+=3;NFSU2_TR(0x760a0a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760a0c:{NFSU2_TR(0x760a0c);
u8 U[4];
w4(U+0,u32(0x7d3e40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760a11:{NFSU2_TR(0x760a11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760a16ull));
{goto L760da0;}
}
B760a16:L760a16:{c.instructions+=3;NFSU2_TR(0x760a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B760a19:{NFSU2_TR(0x760a19);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ba4ac),4);
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
B760a1f:{NFSU2_TR(0x760a1f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L760ac2;}}
}
B760a25:L760a25:{c.instructions+=10;NFSU2_TR(0x760a25);
__builtin_memmove((R+0),(R+12),4);
}
B760a27:{NFSU2_TR(0x760a27);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B760a2a:{NFSU2_TR(0x760a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B760a31:{NFSU2_TR(0x760a31);
__builtin_memmove((R+0),(R+12),4);
}
B760a33:{NFSU2_TR(0x760a33);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B760a36:{NFSU2_TR(0x760a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B760a39:{NFSU2_TR(0x760a39);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B760a3c:{NFSU2_TR(0x760a3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B760a3e:{NFSU2_TR(0x760a3e);
u8 U[17];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B760a43:{NFSU2_TR(0x760a43);
if(r1(R+518)){{goto L760ac2;}}
}
B760a45:L760a45:{c.instructions+=2;NFSU2_TR(0x760a45);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760a46:{NFSU2_TR(0x760a46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760a4bull));
TAIL_STATIC(0x76be66u,76b);
}
B760a4b:L760a4b:{c.instructions+=5;NFSU2_TR(0x760a4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760a4c:{NFSU2_TR(0x760a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760a50:{NFSU2_TR(0x760a50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B760a52:{NFSU2_TR(0x760a52);
u8 U[17];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B760a57:{NFSU2_TR(0x760a57);
if(r1(R+518)){{goto L760a92;}}
}
B760a59:L760a59:{c.instructions+=4;NFSU2_TR(0x760a59);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760a5b:{NFSU2_TR(0x760a5b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760a5d:{NFSU2_TR(0x760a5d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760a5e:{NFSU2_TR(0x760a5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760a63ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760673u);}goto L760673;}
}
B760a63:L760a63:{c.instructions+=5;NFSU2_TR(0x760a63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B760a66:{NFSU2_TR(0x760a66);
__builtin_memmove((R+24),(R+0),4);
}
B760a68:{NFSU2_TR(0x760a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760a6b:{NFSU2_TR(0x760a6b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B760a6e:{NFSU2_TR(0x760a6e);
if(r1(R+518)){{goto L760aa5;}}
}
B760a70:L760a70:{c.instructions+=4;NFSU2_TR(0x760a70);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760a72:{NFSU2_TR(0x760a72);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760a74:{NFSU2_TR(0x760a74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760a75:{NFSU2_TR(0x760a75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760a7aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760673u);}goto L760673;}
}
B760a7a:L760a7a:{c.instructions+=4;NFSU2_TR(0x760a7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B760a7d:{NFSU2_TR(0x760a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760a80:{NFSU2_TR(0x760a80);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B760a82:{NFSU2_TR(0x760a82);
if(r1(R+518)){{goto L760aa9;}}
}
B760a84:L760a84:{c.instructions+=4;NFSU2_TR(0x760a84);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760a86:{NFSU2_TR(0x760a86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760a87:{NFSU2_TR(0x760a87);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760a88:{NFSU2_TR(0x760a88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760a8dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760673u);}goto L760673;}
}
B760a8d:L760a8d:{c.instructions+=2;NFSU2_TR(0x760a8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B760a90:{NFSU2_TR(0x760a90);
{goto L760aa9;}
}
B760a92:L760a92:{c.instructions+=1;NFSU2_TR(0x760a92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760a97ull));
TAIL_STATIC(0x7661bau,766);
}
B760a97:L760a97:{c.instructions+=2;NFSU2_TR(0x760a97);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B760a9d:{NFSU2_TR(0x760a9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760aa2ull));
TAIL_STATIC(0x7661c3u,766);
}
B760aa2:L760aa2:{c.instructions+=1;NFSU2_TR(0x760aa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B760aa5:L760aa5:{c.instructions+=1;NFSU2_TR(0x760aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760aa9:L760aa9:{c.instructions+=2;NFSU2_TR(0x760aa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760aad:{NFSU2_TR(0x760aad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760ab2ull));
{goto L760aba;}
}
B760ab2:L760ab2:{c.instructions+=2;NFSU2_TR(0x760ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760ab5:{NFSU2_TR(0x760ab5);
{goto L760ad8;}
}
B760aba:L760aba:{c.instructions+=2;NFSU2_TR(0x760aba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760abb:{NFSU2_TR(0x760abb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760ac0ull));
TAIL_STATIC(0x76bed9u,76b);
}
B760ac0:L760ac0:{c.instructions+=2;NFSU2_TR(0x760ac0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760ac1:{NFSU2_TR(0x760ac1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760ac2:L760ac2:{c.instructions+=1;NFSU2_TR(0x760ac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760ac7ull));
TAIL_STATIC(0x7661bau,766);
}
B760ac7:L760ac7:{c.instructions+=2;NFSU2_TR(0x760ac7);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B760acd:{NFSU2_TR(0x760acd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760ad2ull));
TAIL_STATIC(0x7661c3u,766);
}
B760ad2:L760ad2:{c.instructions+=2;NFSU2_TR(0x760ad2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B760ad5:{NFSU2_TR(0x760ad5);
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
B760ad8:L760ad8:{c.instructions+=1;NFSU2_TR(0x760ad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760addull));
{goto L760ddb;}
}
B760add:L760add:{c.instructions+=1;NFSU2_TR(0x760add);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760ade:L760ade:{c.instructions+=2;NFSU2_TR(0x760ade);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760ae2:{NFSU2_TR(0x760ae2);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832c4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760ae8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B760ae8:L760ae8:{c.instructions+=2;NFSU2_TR(0x760ae8);
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
B760aea:{NFSU2_TR(0x760aea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760af4;}}
}
B760aec:L760aec:{c.instructions+=1;NFSU2_TR(0x760aec);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760af2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B760af2:L760af2:{c.instructions+=1;NFSU2_TR(0x760af2);
{goto L760af6;}
}
B760af4:L760af4:{c.instructions+=1;NFSU2_TR(0x760af4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B760af6:L760af6:{c.instructions+=2;NFSU2_TR(0x760af6);
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
B760af8:{NFSU2_TR(0x760af8);
if(r1(R+518)){{goto L760b05;}}
}
B760afa:L760afa:{c.instructions+=2;NFSU2_TR(0x760afa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760afb:{NFSU2_TR(0x760afb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760b00ull));
TAIL_STATIC(0x7661ccu,766);
}
B760b00:L760b00:{c.instructions+=3;NFSU2_TR(0x760b00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760b01:{NFSU2_TR(0x760b01);
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
B760b04:{NFSU2_TR(0x760b04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760b05:L760b05:{c.instructions+=2;NFSU2_TR(0x760b05);
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
B760b07:{NFSU2_TR(0x760b07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760b08:L760b08:{c.instructions+=2;NFSU2_TR(0x760b08);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760b0c:{NFSU2_TR(0x760b0c);
u8 U[4];
__builtin_memmove((U+0),gp(0x78322c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760b12ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B760b12:L760b12:{c.instructions+=2;NFSU2_TR(0x760b12);
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
B760b14:{NFSU2_TR(0x760b14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760b1e;}}
}
B760b16:L760b16:{c.instructions+=1;NFSU2_TR(0x760b16);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760b1cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B760b1c:L760b1c:{c.instructions+=1;NFSU2_TR(0x760b1c);
{goto L760b20;}
}
B760b1e:L760b1e:{c.instructions+=1;NFSU2_TR(0x760b1e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B760b20:L760b20:{c.instructions+=2;NFSU2_TR(0x760b20);
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
B760b22:{NFSU2_TR(0x760b22);
if(r1(R+518)){{goto L760b2f;}}
}
B760b24:L760b24:{c.instructions+=2;NFSU2_TR(0x760b24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760b25:{NFSU2_TR(0x760b25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760b2aull));
TAIL_STATIC(0x7661ccu,766);
}
B760b2a:L760b2a:{c.instructions+=3;NFSU2_TR(0x760b2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760b2b:{NFSU2_TR(0x760b2b);
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
B760b2e:{NFSU2_TR(0x760b2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760b2f:L760b2f:{c.instructions+=2;NFSU2_TR(0x760b2f);
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
B760b31:{NFSU2_TR(0x760b31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760b32:L760b32:{c.instructions+=7;NFSU2_TR(0x760b32);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760b33:{NFSU2_TR(0x760b33);
__builtin_memmove((R+20),(R+16),4);
}
B760b35:{NFSU2_TR(0x760b35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760b36:{NFSU2_TR(0x760b36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760b37:{NFSU2_TR(0x760b37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760b38:{NFSU2_TR(0x760b38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760b39:{NFSU2_TR(0x760b39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760b3eull));
TAIL_STATIC(0x761e3cu,761);
}
B760b3e:L760b3e:{c.instructions+=3;NFSU2_TR(0x760b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B760b41:{NFSU2_TR(0x760b41);
u8 U[8];
__builtin_memmove((U+0),gp(0x819d24),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B760b47:{NFSU2_TR(0x760b47);
if(r1(R+518)){{goto L760b50;}}
}
B760b49:L760b49:{c.instructions+=1;NFSU2_TR(0x760b49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760b4eull));
TAIL_STATIC(0x75e3d3u,75e);
}
B760b4e:L760b4e:{c.instructions+=1;NFSU2_TR(0x760b4e);
__builtin_memmove((R+24),(R+0),4);
}
B760b50:L760b50:{c.instructions+=4;NFSU2_TR(0x760b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B760b53:{NFSU2_TR(0x760b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760b57:{NFSU2_TR(0x760b57);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B760b59:{NFSU2_TR(0x760b59);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B760b5c:L760b5c:{c.instructions+=3;NFSU2_TR(0x760b5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B760b60:{NFSU2_TR(0x760b60);
w4(R+0,u32(r1(R+12)));
}
B760b63:{NFSU2_TR(0x760b63);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L760b76;}}
}
B760b65:L760b65:{c.instructions+=4;NFSU2_TR(0x760b65);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760b67:{NFSU2_TR(0x760b67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760b68:{NFSU2_TR(0x760b68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760b69:{NFSU2_TR(0x760b69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760b6eull));
TAIL_STATIC(0x766361u,766);
}
B760b6e:L760b6e:{c.instructions+=3;NFSU2_TR(0x760b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B760b71:{NFSU2_TR(0x760b71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B760b74:{NFSU2_TR(0x760b74);
{goto L760b80;}
}
B760b76:L760b76:{c.instructions+=3;NFSU2_TR(0x760b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B760b79:{NFSU2_TR(0x760b79);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B760b7d:{NFSU2_TR(0x760b7d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8ull))));
}
B760b80:L760b80:{c.instructions+=2;NFSU2_TR(0x760b80);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B760b82:{NFSU2_TR(0x760b82);
if(r1(R+518)){{goto L760b89;}}
}
B760b84:L760b84:{c.instructions+=3;NFSU2_TR(0x760b84);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B760b86:{NFSU2_TR(0x760b86);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B760b87:{NFSU2_TR(0x760b87);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760b5cu);}goto L760b5c;}
}
B760b89:L760b89:{c.instructions+=2;NFSU2_TR(0x760b89);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2dull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B760b8c:{NFSU2_TR(0x760b8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760b94;}}
}
B760b8e:L760b8e:{c.instructions+=2;NFSU2_TR(0x760b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760b92:{NFSU2_TR(0x760b92);
{goto L760b99;}
}
B760b94:L760b94:{c.instructions+=2;NFSU2_TR(0x760b94);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2bull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B760b97:{NFSU2_TR(0x760b97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760b9c;}}
}
B760b99:L760b99:{c.instructions+=2;NFSU2_TR(0x760b99);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B760b9b:{NFSU2_TR(0x760b9b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B760b9c:L760b9c:{c.instructions+=3;NFSU2_TR(0x760b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760b9f:{NFSU2_TR(0x760b9f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B760ba1:{NFSU2_TR(0x760ba1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L760ce1;}}
}
B760ba7:L760ba7:{c.instructions+=2;NFSU2_TR(0x760ba7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B760baa:{NFSU2_TR(0x760baa);
if(r1(R+518)){{goto L760ce1;}}
}
B760bb0:L760bb0:{c.instructions+=2;NFSU2_TR(0x760bb0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x24ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B760bb3:{NFSU2_TR(0x760bb3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L760ce1;}}
}
B760bb9:L760bb9:{c.instructions+=4;NFSU2_TR(0x760bb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B760bbb:{NFSU2_TR(0x760bbb);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760bbd:{NFSU2_TR(0x760bbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760bbe:{NFSU2_TR(0x760bbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760be4;}}
}
B760bc0:L760bc0:{c.instructions+=2;NFSU2_TR(0x760bc0);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B760bc3:{NFSU2_TR(0x760bc3);
if(r1(R+518)){{goto L760bce;}}
}
B760bc5:L760bc5:{c.instructions+=2;NFSU2_TR(0x760bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B760bcc:{NFSU2_TR(0x760bcc);
{goto L760bfc;}
}
B760bce:L760bce:{c.instructions+=3;NFSU2_TR(0x760bce);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B760bd0:{NFSU2_TR(0x760bd0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x78ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B760bd2:{NFSU2_TR(0x760bd2);
if(r1(R+518)){{goto L760be1;}}
}
B760bd4:L760bd4:{c.instructions+=2;NFSU2_TR(0x760bd4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x58ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B760bd6:{NFSU2_TR(0x760bd6);
if(r1(R+518)){{goto L760be1;}}
}
B760bd8:L760bd8:{c.instructions+=2;NFSU2_TR(0x760bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B760bdf:{NFSU2_TR(0x760bdf);
{goto L760bfc;}
}
B760be1:L760be1:{c.instructions+=1;NFSU2_TR(0x760be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760be4:L760be4:{c.instructions+=2;NFSU2_TR(0x760be4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B760be7:{NFSU2_TR(0x760be7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760bfc;}}
}
B760be9:L760be9:{c.instructions+=2;NFSU2_TR(0x760be9);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B760bec:{NFSU2_TR(0x760bec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760bfc;}}
}
B760bee:L760bee:{c.instructions+=3;NFSU2_TR(0x760bee);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B760bf0:{NFSU2_TR(0x760bf0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x78ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B760bf2:{NFSU2_TR(0x760bf2);
if(r1(R+518)){{goto L760bf8;}}
}
B760bf4:L760bf4:{c.instructions+=2;NFSU2_TR(0x760bf4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x58ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B760bf6:{NFSU2_TR(0x760bf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760bfc;}}
}
B760bf8:L760bf8:{c.instructions+=3;NFSU2_TR(0x760bf8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B760bf9:{NFSU2_TR(0x760bf9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B760bfb:{NFSU2_TR(0x760bfb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B760bfc:L760bfc:{c.instructions+=3;NFSU2_TR(0x760bfc);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B760bff:{NFSU2_TR(0x760bff);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B760c01:{NFSU2_TR(0x760c01);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x760c01);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x760c01);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B760c04:L760c04:{c.instructions+=5;NFSU2_TR(0x760c04);
__builtin_memmove((R+24),gp(0x81aa00),4);
}
B760c0a:{NFSU2_TR(0x760c0a);
w4(R+4,u32(r1(R+12)));
}
B760c0d:{NFSU2_TR(0x760c0d);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+4),(U+8),2);
}
B760c11:{NFSU2_TR(0x760c11);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B760c14:{NFSU2_TR(0x760c14);
if(r1(R+518)){{goto L760c1e;}}
}
B760c16:L760c16:{c.instructions+=3;NFSU2_TR(0x760c16);
w4(R+4,u32(s32(s8(r1(R+12)))));
}
B760c19:{NFSU2_TR(0x760c19);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x30ull))));
}
B760c1c:{NFSU2_TR(0x760c1c);
{goto L760c3d;}
}
B760c1e:L760c1e:{c.instructions+=2;NFSU2_TR(0x760c1e);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(u16(0x103ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B760c23:{NFSU2_TR(0x760c23);
if(r1(R+518)){{goto L760c68;}}
}
B760c25:L760c25:{c.instructions+=2;NFSU2_TR(0x760c25);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B760c28:{NFSU2_TR(0x760c28);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L760c37;}}
}
B760c2a:L760c2a:{c.instructions+=2;NFSU2_TR(0x760c2a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B760c2d:{NFSU2_TR(0x760c2d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L760c37;}}
}
B760c2f:L760c2f:{c.instructions+=3;NFSU2_TR(0x760c2f);
w4(R+4,u32(s32(s8(r1(R+12)))));
}
B760c32:{NFSU2_TR(0x760c32);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
}
B760c35:{NFSU2_TR(0x760c35);
{goto L760c3a;}
}
B760c37:L760c37:{c.instructions+=1;NFSU2_TR(0x760c37);
w4(R+4,u32(s32(s8(r1(R+12)))));
}
B760c3a:L760c3a:{c.instructions+=1;NFSU2_TR(0x760c3a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffffffc9ull))));
}
B760c3d:L760c3d:{c.instructions+=2;NFSU2_TR(0x760c3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B760c40:{NFSU2_TR(0x760c40);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L760c68;}}
}
B760c42:L760c42:{c.instructions+=3;NFSU2_TR(0x760c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760c46:{NFSU2_TR(0x760c46);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B760c49:{NFSU2_TR(0x760c49);
if(r1(R+512)){{goto L760c57;}}
}
B760c4b:L760c4b:{c.instructions+=1;NFSU2_TR(0x760c4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760c51;}}
}
B760c4d:L760c4d:{c.instructions+=2;NFSU2_TR(0x760c4d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B760c4f:{NFSU2_TR(0x760c4f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L760c57;}}
}
B760c51:L760c51:{c.instructions+=2;NFSU2_TR(0x760c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760c55:{NFSU2_TR(0x760c55);
{goto L760c63;}
}
B760c57:L760c57:{c.instructions+=4;NFSU2_TR(0x760c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B760c5a:{NFSU2_TR(0x760c5a);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B760c5e:{NFSU2_TR(0x760c5e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B760c60:{NFSU2_TR(0x760c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760c63:L760c63:{c.instructions+=3;NFSU2_TR(0x760c63);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B760c65:{NFSU2_TR(0x760c65);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B760c66:{NFSU2_TR(0x760c66);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760c04u);}goto L760c04;}
}
B760c68:L760c68:{c.instructions+=4;NFSU2_TR(0x760c68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760c6b:{NFSU2_TR(0x760c6b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B760c6c:{NFSU2_TR(0x760c6c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B760c6e:{NFSU2_TR(0x760c6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760c7f;}}
}
B760c70:L760c70:{c.instructions+=2;NFSU2_TR(0x760c70);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B760c74:{NFSU2_TR(0x760c74);
if(r1(R+518)){{goto L760c79;}}
}
B760c76:L760c76:{c.instructions+=1;NFSU2_TR(0x760c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B760c79:L760c79:{c.instructions+=2;NFSU2_TR(0x760c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760c7d:{NFSU2_TR(0x760c7d);
{goto L760cca;}
}
B760c7f:L760c7f:{c.instructions+=3;NFSU2_TR(0x760c7f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B760c81:{NFSU2_TR(0x760c81);
w4(R+24,u32(0x7fffffffull));
}
B760c86:{NFSU2_TR(0x760c86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760ca3;}}
}
B760c88:L760c88:{c.instructions+=2;NFSU2_TR(0x760c88);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B760c8a:{NFSU2_TR(0x760c8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760cca;}}
}
B760c8c:L760c8c:{c.instructions+=2;NFSU2_TR(0x760c8c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B760c8f:{NFSU2_TR(0x760c8f);
if(r1(R+518)){{goto L760c9a;}}
}
B760c91:L760c91:{c.instructions+=2;NFSU2_TR(0x760c91);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x80000000ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x80000000ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x80000000ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B760c98:{NFSU2_TR(0x760c98);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L760ca3;}}
}
B760c9a:L760c9a:{c.instructions+=2;NFSU2_TR(0x760c9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B760c9c:{NFSU2_TR(0x760c9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760cca;}}
}
B760c9e:L760c9e:{c.instructions+=2;NFSU2_TR(0x760c9e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B760ca1:{NFSU2_TR(0x760ca1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L760cca;}}
}
B760ca3:L760ca3:{c.instructions+=1;NFSU2_TR(0x760ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760ca8ull));
TAIL_STATIC(0x7661bau,766);
}
B760ca8:L760ca8:{c.instructions+=3;NFSU2_TR(0x760ca8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B760cac:{NFSU2_TR(0x760cac);
u8 U[4];
w4(U+0,u32(0x22ull));
s4(u32(r4(R+0)),r4(U+0));
}
B760cb2:{NFSU2_TR(0x760cb2);
if(r1(R+518)){{goto L760cba;}}
}
B760cb4:L760cb4:{c.instructions+=2;NFSU2_TR(0x760cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760cb8:{NFSU2_TR(0x760cb8);
{goto L760cca;}
}
B760cba:L760cba:{c.instructions+=7;NFSU2_TR(0x760cba);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B760cbd:{NFSU2_TR(0x760cbd);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
}
B760cbf:{NFSU2_TR(0x760cbf);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B760cc1:{NFSU2_TR(0x760cc1);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B760cc3:{NFSU2_TR(0x760cc3);
w4(R+0,u32(0-u32(r4(R+0))));
}
B760cc5:{NFSU2_TR(0x760cc5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B760cc7:{NFSU2_TR(0x760cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760cca:L760cca:{c.instructions+=3;NFSU2_TR(0x760cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760ccd:{NFSU2_TR(0x760ccd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B760ccf:{NFSU2_TR(0x760ccf);
if(r1(R+518)){{goto L760cd3;}}
}
B760cd1:L760cd1:{c.instructions+=1;NFSU2_TR(0x760cd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B760cd3:L760cd3:{c.instructions+=2;NFSU2_TR(0x760cd3);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B760cd7:{NFSU2_TR(0x760cd7);
if(r1(R+518)){{goto L760cdc;}}
}
B760cd9:L760cd9:{c.instructions+=1;NFSU2_TR(0x760cd9);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(U+4))!=(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(u32(0x0ull),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(0-u32(r4(U+4))));
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
B760cdc:L760cdc:{c.instructions+=2;NFSU2_TR(0x760cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760cdf:{NFSU2_TR(0x760cdf);
{goto L760cec;}
}
B760ce1:L760ce1:{c.instructions+=3;NFSU2_TR(0x760ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760ce4:{NFSU2_TR(0x760ce4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B760ce6:{NFSU2_TR(0x760ce6);
if(r1(R+518)){{goto L760cea;}}
}
B760ce8:L760ce8:{c.instructions+=1;NFSU2_TR(0x760ce8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B760cea:L760cea:{c.instructions+=1;NFSU2_TR(0x760cea);
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
B760cec:L760cec:{c.instructions+=5;NFSU2_TR(0x760cec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B760ced:{NFSU2_TR(0x760ced);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B760cee:{NFSU2_TR(0x760cee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B760cef:{NFSU2_TR(0x760cef);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B760cf0:{NFSU2_TR(0x760cf0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760cf1:L760cf1:{c.instructions+=5;NFSU2_TR(0x760cf1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760cf3:{NFSU2_TR(0x760cf3);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760cf7:{NFSU2_TR(0x760cf7);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760cfb:{NFSU2_TR(0x760cfb);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760cff:{NFSU2_TR(0x760cff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760d04ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760b32u);}goto L760b32;}
}
B760d04:L760d04:{c.instructions+=2;NFSU2_TR(0x760d04);
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
B760d07:{NFSU2_TR(0x760d07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760d08:L760d08:{c.instructions+=5;NFSU2_TR(0x760d08);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760d0a:{NFSU2_TR(0x760d0a);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760d0e:{NFSU2_TR(0x760d0e);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760d12:{NFSU2_TR(0x760d12);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760d16:{NFSU2_TR(0x760d16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760d1bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760b32u);}goto L760b32;}
}
B760d1b:L760d1b:{c.instructions+=2;NFSU2_TR(0x760d1b);
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
B760d1e:{NFSU2_TR(0x760d1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760d1f:L760d1f:{c.instructions+=3;NFSU2_TR(0x760d1f);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760d21:{NFSU2_TR(0x760d21);
u8 U[4];
w4(U+0,u32(0x7d3e50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760d26:{NFSU2_TR(0x760d26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760d2bull));
{goto L760da0;}
}
B760d2b:L760d2b:{c.instructions+=4;NFSU2_TR(0x760d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B760d2e:{NFSU2_TR(0x760d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760d31:{NFSU2_TR(0x760d31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760d32:{NFSU2_TR(0x760d32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760d37ull));
TAIL_STATIC(0x75f323u,75f);
}
B760d37:L760d37:{c.instructions+=4;NFSU2_TR(0x760d37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760d38:{NFSU2_TR(0x760d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760d3c:{NFSU2_TR(0x760d3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760d3d:{NFSU2_TR(0x760d3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760d42ull));
TAIL_STATIC(0x765f75u,765);
}
B760d42:L760d42:{c.instructions+=6;NFSU2_TR(0x760d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760d45:{NFSU2_TR(0x760d45);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B760d48:{NFSU2_TR(0x760d48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760d49:{NFSU2_TR(0x760d49);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760d4c:{NFSU2_TR(0x760d4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760d4d:{NFSU2_TR(0x760d4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760d52ull));
TAIL_STATIC(0x763f07u,763);
}
B760d52:L760d52:{c.instructions+=4;NFSU2_TR(0x760d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760d55:{NFSU2_TR(0x760d55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760d56:{NFSU2_TR(0x760d56);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760d59:{NFSU2_TR(0x760d59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760d5eull));
TAIL_STATIC(0x765ffdu,765);
}
B760d5e:L760d5e:{c.instructions+=3;NFSU2_TR(0x760d5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B760d61:{NFSU2_TR(0x760d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B760d65:{NFSU2_TR(0x760d65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760d6aull));
{goto L760d73;}
}
B760d6a:L760d6a:{c.instructions+=2;NFSU2_TR(0x760d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760d6d:{NFSU2_TR(0x760d6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760d72ull));
{goto L760ddb;}
}
B760d72:L760d72:{c.instructions+=1;NFSU2_TR(0x760d72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760d73:L760d73:{c.instructions+=2;NFSU2_TR(0x760d73);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B760d76:{NFSU2_TR(0x760d76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760d7bull));
TAIL_STATIC(0x75f375u,75f);
}
B760d7b:L760d7b:{c.instructions+=2;NFSU2_TR(0x760d7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760d7c:{NFSU2_TR(0x760d7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760d7d:L760d7d:{c.instructions+=1;NFSU2_TR(0x760d7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760d82ull));
TAIL_STATIC(0x761e3cu,761);
}
B760d82:L760d82:{c.instructions+=8;NFSU2_TR(0x760d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B760d85:{NFSU2_TR(0x760d85);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x343fdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B760d8b:{NFSU2_TR(0x760d8b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x269ec3ull))));
}
B760d91:{NFSU2_TR(0x760d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760d94:{NFSU2_TR(0x760d94);
__builtin_memmove((R+0),(R+4),4);
}
B760d96:{NFSU2_TR(0x760d96);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B760d99:{NFSU2_TR(0x760d99);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B760d9e:{NFSU2_TR(0x760d9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760da0:L760da0:{c.instructions+=19;NFSU2_TR(0x760da0);
u8 U[4];
w4(U+0,u32(0x75ef74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760da5:{NFSU2_TR(0x760da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760dab:{NFSU2_TR(0x760dab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760dac:{NFSU2_TR(0x760dac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760db0:{NFSU2_TR(0x760db0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760db4:{NFSU2_TR(0x760db4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B760db8:{NFSU2_TR(0x760db8);
u8 U[6];
w1(R+512,u8((r4(R+16))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+16),r4(R+0)));
w4(R+16,u32(u32(r4(R+16))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B760dba:{NFSU2_TR(0x760dba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760dbb:{NFSU2_TR(0x760dbb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760dbc:{NFSU2_TR(0x760dbc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760dbd:{NFSU2_TR(0x760dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760dc0:{NFSU2_TR(0x760dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760dc3:{NFSU2_TR(0x760dc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760dc4:{NFSU2_TR(0x760dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760dc7:{NFSU2_TR(0x760dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B760dce:{NFSU2_TR(0x760dce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760dd1:{NFSU2_TR(0x760dd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B760dd4:{NFSU2_TR(0x760dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760dda:{NFSU2_TR(0x760dda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760ddb:L760ddb:{c.instructions+=9;NFSU2_TR(0x760ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B760dde:{NFSU2_TR(0x760dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B760de5:{NFSU2_TR(0x760de5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B760de6:{NFSU2_TR(0x760de6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B760de7:{NFSU2_TR(0x760de7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B760de8:{NFSU2_TR(0x760de8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B760de9:{NFSU2_TR(0x760de9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B760dea:{NFSU2_TR(0x760dea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760deb:{NFSU2_TR(0x760deb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760df0:L760df0:{c.instructions+=12;NFSU2_TR(0x760df0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760df1:{NFSU2_TR(0x760df1);
__builtin_memmove((R+20),(R+16),4);
}
B760df3:{NFSU2_TR(0x760df3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760df4:{NFSU2_TR(0x760df4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B760df5:{NFSU2_TR(0x760df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B760df8:{NFSU2_TR(0x760df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B760dfb:{NFSU2_TR(0x760dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B760dfe:{NFSU2_TR(0x760dfe);
__builtin_memmove((R+0),(R+4),4);
}
B760e00:{NFSU2_TR(0x760e00);
__builtin_memmove((R+8),(R+4),4);
}
B760e02:{NFSU2_TR(0x760e02);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B760e04:{NFSU2_TR(0x760e04);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B760e06:{NFSU2_TR(0x760e06);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L760e10;}}
}
B760e08:L760e08:{c.instructions+=2;NFSU2_TR(0x760e08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B760e0a:{NFSU2_TR(0x760e0a);
if(r1(R+512)){{goto L760f8c;}}
}
B760e10:L760e10:{c.instructions+=2;NFSU2_TR(0x760e10);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B760e16:{NFSU2_TR(0x760e16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760e2c;}}
}
B760e18:L760e18:{c.instructions+=4;NFSU2_TR(0x760e18);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B760e1b:{NFSU2_TR(0x760e1b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B760e1e:{NFSU2_TR(0x760e1e);
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
B760e21:{NFSU2_TR(0x760e21);
if(r1(R+512)){{goto L760e4c;}}
}
B760e23:L760e23:{c.instructions+=1;NFSU2_TR(0x760e23);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L760e25;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760e23u);}goto L760e23;}
}
B760e25:L760e25:{c.instructions+=1;NFSU2_TR(0x760e25);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x760f3cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B760e2c:L760e2c:{c.instructions+=4;NFSU2_TR(0x760e2c);
__builtin_memmove((R+0),(R+28),4);
}
B760e2e:{NFSU2_TR(0x760e2e);
w4(R+8,u32(0x3ull));
}
B760e33:{NFSU2_TR(0x760e33);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B760e36:{NFSU2_TR(0x760e36);
if(r1(R+512)){{goto L760e44;}}
}
B760e38:L760e38:{c.instructions+=3;NFSU2_TR(0x760e38);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B760e3b:{NFSU2_TR(0x760e3b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B760e3d:{NFSU2_TR(0x760e3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x760e50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B760e44:L760e44:{c.instructions+=1;NFSU2_TR(0x760e44);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x760f4cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B760e4c:L760e4c:{c.instructions+=1;NFSU2_TR(0x760e4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x760ed0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B760e60:L760e60:{c.instructions+=12;NFSU2_TR(0x760e60);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B760e62:{NFSU2_TR(0x760e62);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B760e64:{NFSU2_TR(0x760e64);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B760e66:{NFSU2_TR(0x760e66);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B760e69:{NFSU2_TR(0x760e69);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B760e6c:{NFSU2_TR(0x760e6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B760e6f:{NFSU2_TR(0x760e6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B760e72:{NFSU2_TR(0x760e72);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B760e75:{NFSU2_TR(0x760e75);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B760e78:{NFSU2_TR(0x760e78);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3ull))));
}
B760e7b:{NFSU2_TR(0x760e7b);
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
B760e7e:{NFSU2_TR(0x760e7e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760e4cu);}goto L760e4c;}}
}
B760e80:L760e80:{c.instructions+=1;NFSU2_TR(0x760e80);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L760e82;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760e80u);}goto L760e80;}
}
B760e82:L760e82:{c.instructions+=1;NFSU2_TR(0x760e82);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x760f3cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B760e8c:L760e8c:{c.instructions+=10;NFSU2_TR(0x760e8c);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B760e8e:{NFSU2_TR(0x760e8e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B760e90:{NFSU2_TR(0x760e90);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B760e92:{NFSU2_TR(0x760e92);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B760e95:{NFSU2_TR(0x760e95);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B760e98:{NFSU2_TR(0x760e98);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B760e9b:{NFSU2_TR(0x760e9b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B760e9e:{NFSU2_TR(0x760e9e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B760ea1:{NFSU2_TR(0x760ea1);
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
B760ea4:{NFSU2_TR(0x760ea4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760e4cu);}goto L760e4c;}}
}
B760ea6:L760ea6:{c.instructions+=1;NFSU2_TR(0x760ea6);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L760ea8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760ea6u);}goto L760ea6;}
}
B760ea8:L760ea8:{c.instructions+=1;NFSU2_TR(0x760ea8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x760f3cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B760eb0:L760eb0:{c.instructions+=8;NFSU2_TR(0x760eb0);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B760eb2:{NFSU2_TR(0x760eb2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B760eb4:{NFSU2_TR(0x760eb4);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B760eb6:{NFSU2_TR(0x760eb6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B760eb9:{NFSU2_TR(0x760eb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B760ebc:{NFSU2_TR(0x760ebc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B760ebf:{NFSU2_TR(0x760ebf);
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
B760ec2:{NFSU2_TR(0x760ec2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760e4cu);}goto L760e4c;}}
}
B760ec4:L760ec4:{c.instructions+=1;NFSU2_TR(0x760ec4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L760ec6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760ec4u);}goto L760ec4;}
}
B760ec6:L760ec6:{c.instructions+=1;NFSU2_TR(0x760ec6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x760f3cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B760ef0:L760ef0:{c.instructions+=18;NFSU2_TR(0x760ef0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B760ef4:{NFSU2_TR(0x760ef4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B760ef8:{NFSU2_TR(0x760ef8);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B760efc:{NFSU2_TR(0x760efc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B760f00:{NFSU2_TR(0x760f00);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B760f04:{NFSU2_TR(0x760f04);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B760f08:{NFSU2_TR(0x760f08);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B760f0c:{NFSU2_TR(0x760f0c);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B760f10:{NFSU2_TR(0x760f10);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B760f14:{NFSU2_TR(0x760f14);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B760f18:{NFSU2_TR(0x760f18);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B760f1c:{NFSU2_TR(0x760f1c);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B760f20:{NFSU2_TR(0x760f20);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B760f24:{NFSU2_TR(0x760f24);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B760f28:{NFSU2_TR(0x760f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B760f2f:{NFSU2_TR(0x760f2f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B760f31:{NFSU2_TR(0x760f31);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B760f33:{NFSU2_TR(0x760f33);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x760f3cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B760f4c:L760f4c:{c.instructions+=5;NFSU2_TR(0x760f4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760f4f:{NFSU2_TR(0x760f4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B760f50:{NFSU2_TR(0x760f50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B760f51:{NFSU2_TR(0x760f51);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B760f52:{NFSU2_TR(0x760f52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760f54:L760f54:{c.instructions+=7;NFSU2_TR(0x760f54);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B760f56:{NFSU2_TR(0x760f56);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B760f58:{NFSU2_TR(0x760f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760f5b:{NFSU2_TR(0x760f5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B760f5c:{NFSU2_TR(0x760f5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B760f5d:{NFSU2_TR(0x760f5d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B760f5e:{NFSU2_TR(0x760f5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760f60:L760f60:{c.instructions+=9;NFSU2_TR(0x760f60);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B760f62:{NFSU2_TR(0x760f62);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B760f64:{NFSU2_TR(0x760f64);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B760f67:{NFSU2_TR(0x760f67);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B760f6a:{NFSU2_TR(0x760f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760f6d:{NFSU2_TR(0x760f6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B760f6e:{NFSU2_TR(0x760f6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B760f6f:{NFSU2_TR(0x760f6f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B760f70:{NFSU2_TR(0x760f70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760f74:L760f74:{c.instructions+=11;NFSU2_TR(0x760f74);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B760f76:{NFSU2_TR(0x760f76);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B760f78:{NFSU2_TR(0x760f78);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B760f7b:{NFSU2_TR(0x760f7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B760f7e:{NFSU2_TR(0x760f7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B760f81:{NFSU2_TR(0x760f81);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B760f84:{NFSU2_TR(0x760f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B760f87:{NFSU2_TR(0x760f87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B760f88:{NFSU2_TR(0x760f88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B760f89:{NFSU2_TR(0x760f89);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B760f8a:{NFSU2_TR(0x760f8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B760f8c:L760f8c:{c.instructions+=4;NFSU2_TR(0x760f8c);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B760f90:{NFSU2_TR(0x760f90);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B760f94:{NFSU2_TR(0x760f94);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B760f9a:{NFSU2_TR(0x760f9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L760fc0;}}
}
B760f9c:L760f9c:{c.instructions+=4;NFSU2_TR(0x760f9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B760f9f:{NFSU2_TR(0x760f9f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B760fa2:{NFSU2_TR(0x760fa2);
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
B760fa5:{NFSU2_TR(0x760fa5);
if(r1(R+512)){{goto L760fb4;}}
}
B760fa7:L760fa7:{c.instructions+=1;NFSU2_TR(0x760fa7);
w1(R+522,u8(0x1ull));
}
B760fa8:L760fa8:{c.instructions+=1;NFSU2_TR(0x760fa8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L760faa;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x760fa8u);}goto L760fa8;}
}
B760faa:L760faa:{c.instructions+=2;NFSU2_TR(0x760faa);
w1(R+522,u8(0x0ull));
}
B760fab:{NFSU2_TR(0x760fab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7610d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B760fb4:L760fb4:{c.instructions+=2;NFSU2_TR(0x760fb4);
u8 U[6];
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+4)));
w4(R+4,u32(0-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B760fb6:{NFSU2_TR(0x760fb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x761088ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B760fc0:L760fc0:{c.instructions+=4;NFSU2_TR(0x760fc0);
__builtin_memmove((R+0),(R+28),4);
}
B760fc2:{NFSU2_TR(0x760fc2);
w4(R+8,u32(0x3ull));
}
B760fc7:{NFSU2_TR(0x760fc7);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B760fca:{NFSU2_TR(0x760fca);
if(r1(R+512)){{goto L760fd8;}}
}
B760fcc:L760fcc:{c.instructions+=3;NFSU2_TR(0x760fcc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B760fcf:{NFSU2_TR(0x760fcf);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B760fd1:{NFSU2_TR(0x760fd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x760fdcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B760fd8:L760fd8:{c.instructions+=1;NFSU2_TR(0x760fd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7610d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B760fec:L760fec:{c.instructions+=7;NFSU2_TR(0x760fec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B760fef:{NFSU2_TR(0x760fef);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B760ff1:{NFSU2_TR(0x760ff1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B760ff4:{NFSU2_TR(0x760ff4);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B760ff7:{NFSU2_TR(0x760ff7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B760ffa:{NFSU2_TR(0x760ffa);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B760ffd:{NFSU2_TR(0x760ffd);
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
TAIL_STATIC(0x761000u,761);
}
XIT:NFSU2_TR_EXIT(0x760,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
