#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_612(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x611,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x611,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_611(u8* __restrict R,Cpu& c);
u32 page_611(Cpu& c){return body_611(c.regs.data(),c);}
__attribute__((noinline)) u32 body_611(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x611000:goto L611000;
case 0x611003:c.instructions+=2;goto B611003;
case 0x611006:c.instructions+=1;goto B611006;
case 0x611010:goto L611010;
case 0x611013:c.instructions+=2;goto B611013;
case 0x611015:c.instructions+=1;goto B611015;
case 0x611017:goto L611017;
case 0x61101a:c.instructions+=2;goto B61101a;
case 0x61101c:c.instructions+=1;goto B61101c;
case 0x61101e:goto L61101e;
case 0x611022:c.instructions+=1;goto B611022;
case 0x611023:goto L611023;
case 0x611025:c.instructions+=1;goto B611025;
case 0x611030:goto L611030;
case 0x611033:c.instructions+=1;goto B611033;
case 0x611040:goto L611040;
case 0x611042:c.instructions+=4;goto B611042;
case 0x611047:c.instructions+=3;goto B611047;
case 0x61104c:c.instructions+=2;goto B61104c;
case 0x61104e:c.instructions+=1;goto B61104e;
case 0x611053:goto L611053;
case 0x611056:c.instructions+=2;goto B611056;
case 0x61105b:c.instructions+=1;goto B61105b;
case 0x611060:goto L611060;
case 0x611061:c.instructions+=3;goto B611061;
case 0x611065:c.instructions+=2;goto B611065;
case 0x611067:c.instructions+=1;goto B611067;
case 0x61106c:goto L61106c;
case 0x61106e:c.instructions+=1;goto B61106e;
case 0x611070:goto L611070;
case 0x611072:c.instructions+=1;goto B611072;
case 0x611077:goto L611077;
case 0x611079:c.instructions+=1;goto B611079;
case 0x61107b:goto L61107b;
case 0x611081:c.instructions+=2;goto B611081;
case 0x611083:c.instructions+=1;goto B611083;
case 0x611085:goto L611085;
case 0x611086:c.instructions+=2;goto B611086;
case 0x61108b:c.instructions+=1;goto B61108b;
case 0x611090:goto L611090;
case 0x611092:c.instructions+=1;goto B611092;
case 0x611094:goto L611094;
case 0x611098:c.instructions+=5;goto B611098;
case 0x61109e:c.instructions+=4;goto B61109e;
case 0x61109f:c.instructions+=3;goto B61109f;
case 0x6110a0:c.instructions+=2;goto B6110a0;
case 0x6110a2:c.instructions+=1;goto B6110a2;
case 0x6110a7:goto L6110a7;
case 0x6110a8:c.instructions+=1;goto B6110a8;
case 0x6110b0:goto L6110b0;
case 0x6110b4:c.instructions+=12;goto B6110b4;
case 0x6110b8:c.instructions+=11;goto B6110b8;
case 0x6110bc:c.instructions+=10;goto B6110bc;
case 0x6110bd:c.instructions+=9;goto B6110bd;
case 0x6110c1:c.instructions+=8;goto B6110c1;
case 0x6110c2:c.instructions+=7;goto B6110c2;
case 0x6110c4:c.instructions+=6;goto B6110c4;
case 0x6110c6:c.instructions+=5;goto B6110c6;
case 0x6110cc:c.instructions+=4;goto B6110cc;
case 0x6110d1:c.instructions+=3;goto B6110d1;
case 0x6110d7:c.instructions+=2;goto B6110d7;
case 0x6110dd:c.instructions+=1;goto B6110dd;
case 0x6110df:goto L6110df;
case 0x6110e6:c.instructions+=6;goto B6110e6;
case 0x6110e7:c.instructions+=5;goto B6110e7;
case 0x6110e8:c.instructions+=4;goto B6110e8;
case 0x6110ea:c.instructions+=3;goto B6110ea;
case 0x6110ed:c.instructions+=2;goto B6110ed;
case 0x6110ef:c.instructions+=1;goto B6110ef;
case 0x6110f4:goto L6110f4;
case 0x6110f6:goto L6110f6;
case 0x6110f8:c.instructions+=6;goto B6110f8;
case 0x6110fd:c.instructions+=5;goto B6110fd;
case 0x6110fe:c.instructions+=4;goto B6110fe;
case 0x611101:c.instructions+=3;goto B611101;
case 0x611103:c.instructions+=2;goto B611103;
case 0x611108:c.instructions+=1;goto B611108;
case 0x61110d:goto L61110d;
case 0x61110f:goto L61110f;
case 0x611110:goto L611110;
case 0x611112:c.instructions+=11;goto B611112;
case 0x611115:c.instructions+=10;goto B611115;
case 0x611116:c.instructions+=9;goto B611116;
case 0x611118:c.instructions+=8;goto B611118;
case 0x611119:c.instructions+=7;goto B611119;
case 0x61111c:c.instructions+=6;goto B61111c;
case 0x61111e:c.instructions+=5;goto B61111e;
case 0x611121:c.instructions+=4;goto B611121;
case 0x611124:c.instructions+=3;goto B611124;
case 0x611127:c.instructions+=2;goto B611127;
case 0x61112a:c.instructions+=1;goto B61112a;
case 0x61112c:goto L61112c;
case 0x61112d:c.instructions+=1;goto B61112d;
case 0x61112e:goto L61112e;
case 0x61112f:c.instructions+=2;goto B61112f;
case 0x611130:c.instructions+=1;goto B611130;
case 0x611140:goto L611140;
case 0x611143:c.instructions+=8;goto B611143;
case 0x611149:c.instructions+=7;goto B611149;
case 0x61114a:c.instructions+=6;goto B61114a;
case 0x61114c:c.instructions+=5;goto B61114c;
case 0x61114e:c.instructions+=4;goto B61114e;
case 0x611150:c.instructions+=3;goto B611150;
case 0x611154:c.instructions+=2;goto B611154;
case 0x611158:c.instructions+=1;goto B611158;
case 0x61115e:goto L61115e;
case 0x61115f:c.instructions+=4;goto B61115f;
case 0x611160:c.instructions+=3;goto B611160;
case 0x611165:c.instructions+=2;goto B611165;
case 0x611166:c.instructions+=1;goto B611166;
case 0x611170:goto L611170;
case 0x611176:c.instructions+=6;goto B611176;
case 0x611179:c.instructions+=5;goto B611179;
case 0x61117c:c.instructions+=4;goto B61117c;
case 0x61117e:c.instructions+=3;goto B61117e;
case 0x611180:c.instructions+=2;goto B611180;
case 0x611184:c.instructions+=1;goto B611184;
case 0x611186:goto L611186;
case 0x611188:goto L611188;
case 0x61118b:c.instructions+=2;goto B61118b;
case 0x61118d:c.instructions+=1;goto B61118d;
case 0x61118f:goto L61118f;
case 0x611191:c.instructions+=1;goto B611191;
case 0x611193:goto L611193;
case 0x611199:c.instructions+=4;goto B611199;
case 0x61119a:c.instructions+=3;goto B61119a;
case 0x61119d:c.instructions+=2;goto B61119d;
case 0x61119f:c.instructions+=1;goto B61119f;
case 0x6111a1:goto L6111a1;
case 0x6111a5:goto L6111a5;
case 0x6111a7:c.instructions+=3;goto B6111a7;
case 0x6111aa:c.instructions+=2;goto B6111aa;
case 0x6111b1:c.instructions+=1;goto B6111b1;
case 0x6111b3:goto L6111b3;
case 0x6111b6:c.instructions+=20;goto B6111b6;
case 0x6111b8:c.instructions+=19;goto B6111b8;
case 0x6111ba:c.instructions+=18;goto B6111ba;
case 0x6111bd:c.instructions+=17;goto B6111bd;
case 0x6111c0:c.instructions+=16;goto B6111c0;
case 0x6111c3:c.instructions+=15;goto B6111c3;
case 0x6111c6:c.instructions+=14;goto B6111c6;
case 0x6111c9:c.instructions+=13;goto B6111c9;
case 0x6111cc:c.instructions+=12;goto B6111cc;
case 0x6111cf:c.instructions+=11;goto B6111cf;
case 0x6111d2:c.instructions+=10;goto B6111d2;
case 0x6111d5:c.instructions+=9;goto B6111d5;
case 0x6111d8:c.instructions+=8;goto B6111d8;
case 0x6111db:c.instructions+=7;goto B6111db;
case 0x6111de:c.instructions+=6;goto B6111de;
case 0x6111e1:c.instructions+=5;goto B6111e1;
case 0x6111e4:c.instructions+=4;goto B6111e4;
case 0x6111e7:c.instructions+=3;goto B6111e7;
case 0x6111ea:c.instructions+=2;goto B6111ea;
case 0x6111ed:c.instructions+=1;goto B6111ed;
case 0x6111f1:goto L6111f1;
case 0x6111f3:c.instructions+=1;goto B6111f3;
case 0x6111f5:goto L6111f5;
case 0x6111f9:c.instructions+=6;goto B6111f9;
case 0x6111fb:c.instructions+=5;goto B6111fb;
case 0x6111fd:c.instructions+=4;goto B6111fd;
case 0x611200:c.instructions+=3;goto B611200;
case 0x611202:c.instructions+=2;goto B611202;
case 0x611209:c.instructions+=1;goto B611209;
case 0x61120b:goto L61120b;
case 0x61120d:c.instructions+=2;goto B61120d;
case 0x611214:c.instructions+=1;goto B611214;
case 0x611216:goto L611216;
case 0x611218:goto L611218;
case 0x61121c:c.instructions+=2;goto B61121c;
case 0x611220:c.instructions+=1;goto B611220;
case 0x611222:goto L611222;
case 0x611226:c.instructions+=4;goto B611226;
case 0x61122c:c.instructions+=3;goto B61122c;
case 0x61122f:c.instructions+=2;goto B61122f;
case 0x611231:c.instructions+=1;goto B611231;
case 0x611237:goto L611237;
case 0x611238:c.instructions+=3;goto B611238;
case 0x611239:c.instructions+=2;goto B611239;
case 0x61123b:c.instructions+=1;goto B61123b;
case 0x61123c:goto L61123c;
case 0x611240:c.instructions+=6;goto B611240;
case 0x611244:c.instructions+=5;goto B611244;
case 0x611246:c.instructions+=4;goto B611246;
case 0x611249:c.instructions+=3;goto B611249;
case 0x61124e:c.instructions+=2;goto B61124e;
case 0x611255:c.instructions+=1;goto B611255;
case 0x611257:goto L611257;
case 0x61125c:c.instructions+=3;goto B61125c;
case 0x611263:c.instructions+=2;goto B611263;
case 0x611265:c.instructions+=1;goto B611265;
case 0x611268:goto L611268;
case 0x61126a:goto L61126a;
case 0x61126b:c.instructions+=2;goto B61126b;
case 0x61126e:c.instructions+=1;goto B61126e;
case 0x611270:goto L611270;
case 0x611271:c.instructions+=9;goto B611271;
case 0x611275:c.instructions+=8;goto B611275;
case 0x611276:c.instructions+=7;goto B611276;
case 0x61127d:c.instructions+=6;goto B61127d;
case 0x61127e:c.instructions+=5;goto B61127e;
case 0x61127f:c.instructions+=4;goto B61127f;
case 0x611280:c.instructions+=3;goto B611280;
case 0x611285:c.instructions+=2;goto B611285;
case 0x61128d:c.instructions+=1;goto B61128d;
case 0x611290:goto L611290;
case 0x611295:c.instructions+=2;goto B611295;
case 0x611297:c.instructions+=1;goto B611297;
case 0x611299:goto L611299;
case 0x61129b:c.instructions+=1;goto B61129b;
case 0x61129d:goto L61129d;
case 0x6112a1:c.instructions+=6;goto B6112a1;
case 0x6112a2:c.instructions+=5;goto B6112a2;
case 0x6112a3:c.instructions+=4;goto B6112a3;
case 0x6112a4:c.instructions+=3;goto B6112a4;
case 0x6112a5:c.instructions+=2;goto B6112a5;
case 0x6112a6:c.instructions+=1;goto B6112a6;
case 0x6112a7:goto L6112a7;
case 0x6112ab:c.instructions+=6;goto B6112ab;
case 0x6112ae:c.instructions+=5;goto B6112ae;
case 0x6112b5:c.instructions+=4;goto B6112b5;
case 0x6112bc:c.instructions+=3;goto B6112bc;
case 0x6112be:c.instructions+=2;goto B6112be;
case 0x6112c0:c.instructions+=1;goto B6112c0;
case 0x6112c2:goto L6112c2;
case 0x6112c4:c.instructions+=1;goto B6112c4;
case 0x6112c6:goto L6112c6;
case 0x6112c7:c.instructions+=2;goto B6112c7;
case 0x6112c9:c.instructions+=1;goto B6112c9;
case 0x6112cb:goto L6112cb;
case 0x6112cd:goto L6112cd;
case 0x6112cf:c.instructions+=2;goto B6112cf;
case 0x6112d3:c.instructions+=1;goto B6112d3;
case 0x6112d5:goto L6112d5;
case 0x6112d7:goto L6112d7;
case 0x6112d9:c.instructions+=2;goto B6112d9;
case 0x6112db:c.instructions+=1;goto B6112db;
case 0x6112dd:goto L6112dd;
case 0x6112e0:c.instructions+=2;goto B6112e0;
case 0x6112e4:c.instructions+=1;goto B6112e4;
case 0x6112e6:goto L6112e6;
case 0x6112e8:goto L6112e8;
case 0x6112ea:c.instructions+=2;goto B6112ea;
case 0x6112ec:c.instructions+=1;goto B6112ec;
case 0x6112ee:goto L6112ee;
case 0x6112f1:c.instructions+=2;goto B6112f1;
case 0x6112f5:c.instructions+=1;goto B6112f5;
case 0x6112f7:goto L6112f7;
case 0x6112f9:goto L6112f9;
case 0x6112fb:c.instructions+=2;goto B6112fb;
case 0x6112fd:c.instructions+=1;goto B6112fd;
case 0x6112ff:goto L6112ff;
case 0x611301:c.instructions+=2;goto B611301;
case 0x611304:c.instructions+=1;goto B611304;
case 0x611308:goto L611308;
case 0x61130c:c.instructions+=6;goto B61130c;
case 0x611310:c.instructions+=5;goto B611310;
case 0x611317:c.instructions+=4;goto B611317;
case 0x61131e:c.instructions+=3;goto B61131e;
case 0x611320:c.instructions+=2;goto B611320;
case 0x611322:c.instructions+=1;goto B611322;
case 0x611324:goto L611324;
case 0x611327:c.instructions+=1;goto B611327;
case 0x61132c:goto L61132c;
case 0x61132d:c.instructions+=2;goto B61132d;
case 0x61132f:c.instructions+=1;goto B61132f;
case 0x611331:goto L611331;
case 0x611333:goto L611333;
case 0x611335:c.instructions+=2;goto B611335;
case 0x611339:c.instructions+=1;goto B611339;
case 0x61133b:goto L61133b;
case 0x61133d:goto L61133d;
case 0x61133f:c.instructions+=2;goto B61133f;
case 0x611341:c.instructions+=1;goto B611341;
case 0x611347:goto L611347;
case 0x61134a:c.instructions+=2;goto B61134a;
case 0x61134e:c.instructions+=1;goto B61134e;
case 0x611350:goto L611350;
case 0x611352:goto L611352;
case 0x611354:c.instructions+=2;goto B611354;
case 0x611356:c.instructions+=1;goto B611356;
case 0x61135c:goto L61135c;
case 0x61135f:c.instructions+=2;goto B61135f;
case 0x611363:c.instructions+=1;goto B611363;
case 0x611365:goto L611365;
case 0x611367:goto L611367;
case 0x611369:c.instructions+=2;goto B611369;
case 0x61136b:c.instructions+=1;goto B61136b;
case 0x611371:goto L611371;
case 0x611374:c.instructions+=3;goto B611374;
case 0x611376:c.instructions+=2;goto B611376;
case 0x61137a:c.instructions+=1;goto B61137a;
case 0x611380:goto L611380;
case 0x611383:c.instructions+=10;goto B611383;
case 0x611389:c.instructions+=9;goto B611389;
case 0x61138c:c.instructions+=8;goto B61138c;
case 0x61138d:c.instructions+=7;goto B61138d;
case 0x611392:c.instructions+=6;goto B611392;
case 0x611394:c.instructions+=5;goto B611394;
case 0x611396:c.instructions+=4;goto B611396;
case 0x61139a:c.instructions+=3;goto B61139a;
case 0x61139e:c.instructions+=2;goto B61139e;
case 0x6113a2:c.instructions+=1;goto B6113a2;
case 0x6113a8:goto L6113a8;
case 0x6113a9:c.instructions+=4;goto B6113a9;
case 0x6113aa:c.instructions+=3;goto B6113aa;
case 0x6113ab:c.instructions+=2;goto B6113ab;
case 0x6113b0:c.instructions+=1;goto B6113b0;
case 0x6113b2:goto L6113b2;
case 0x6113b5:c.instructions+=2;goto B6113b5;
case 0x6113b9:c.instructions+=1;goto B6113b9;
case 0x6113bb:goto L6113bb;
case 0x6113bd:goto L6113bd;
case 0x6113c0:c.instructions+=2;goto B6113c0;
case 0x6113c4:c.instructions+=1;goto B6113c4;
case 0x6113c6:goto L6113c6;
case 0x6113c8:goto L6113c8;
case 0x6113cc:c.instructions+=4;goto B6113cc;
case 0x6113ce:c.instructions+=3;goto B6113ce;
case 0x6113d1:c.instructions+=2;goto B6113d1;
case 0x6113d3:c.instructions+=1;goto B6113d3;
case 0x6113d5:goto L6113d5;
case 0x6113d7:goto L6113d7;
case 0x6113db:c.instructions+=4;goto B6113db;
case 0x6113dd:c.instructions+=3;goto B6113dd;
case 0x6113e0:c.instructions+=2;goto B6113e0;
case 0x6113e2:c.instructions+=1;goto B6113e2;
case 0x6113e4:goto L6113e4;
case 0x6113e6:goto L6113e6;
case 0x6113e8:c.instructions+=2;goto B6113e8;
case 0x6113ec:c.instructions+=1;goto B6113ec;
case 0x6113ee:goto L6113ee;
case 0x6113f2:c.instructions+=1;goto B6113f2;
case 0x6113f6:goto L6113f6;
case 0x6113fc:c.instructions+=5;goto B6113fc;
case 0x6113fe:c.instructions+=4;goto B6113fe;
case 0x611401:c.instructions+=3;goto B611401;
case 0x611403:c.instructions+=2;goto B611403;
case 0x611405:c.instructions+=1;goto B611405;
case 0x611407:goto L611407;
case 0x611409:c.instructions+=1;goto B611409;
case 0x61140d:goto L61140d;
case 0x611413:c.instructions+=13;goto B611413;
case 0x611415:c.instructions+=12;goto B611415;
case 0x611418:c.instructions+=11;goto B611418;
case 0x61141a:c.instructions+=10;goto B61141a;
case 0x61141d:c.instructions+=9;goto B61141d;
case 0x61141f:c.instructions+=8;goto B61141f;
case 0x611425:c.instructions+=7;goto B611425;
case 0x61142b:c.instructions+=6;goto B61142b;
case 0x611431:c.instructions+=5;goto B611431;
case 0x611434:c.instructions+=4;goto B611434;
case 0x611435:c.instructions+=3;goto B611435;
case 0x611438:c.instructions+=2;goto B611438;
case 0x61143a:c.instructions+=1;goto B61143a;
case 0x611440:goto L611440;
case 0x611444:c.instructions+=3;goto B611444;
case 0x611445:c.instructions+=2;goto B611445;
case 0x611446:c.instructions+=1;goto B611446;
case 0x611447:goto L611447;
case 0x61144e:c.instructions+=10;goto B61144e;
case 0x611455:c.instructions+=9;goto B611455;
case 0x611458:c.instructions+=8;goto B611458;
case 0x61145f:c.instructions+=7;goto B61145f;
case 0x611466:c.instructions+=6;goto B611466;
case 0x61146b:c.instructions+=5;goto B61146b;
case 0x61146d:c.instructions+=4;goto B61146d;
case 0x611471:c.instructions+=3;goto B611471;
case 0x611472:c.instructions+=2;goto B611472;
case 0x611475:c.instructions+=1;goto B611475;
case 0x611480:goto L611480;
case 0x611483:c.instructions+=50;goto B611483;
case 0x611484:c.instructions+=49;goto B611484;
case 0x61148b:c.instructions+=48;goto B61148b;
case 0x611492:c.instructions+=47;goto B611492;
case 0x611494:c.instructions+=46;goto B611494;
case 0x611496:c.instructions+=45;goto B611496;
case 0x611499:c.instructions+=44;goto B611499;
case 0x61149a:c.instructions+=43;goto B61149a;
case 0x6114a0:c.instructions+=42;goto B6114a0;
case 0x6114a2:c.instructions+=41;goto B6114a2;
case 0x6114a6:c.instructions+=40;goto B6114a6;
case 0x6114a9:c.instructions+=39;goto B6114a9;
case 0x6114ab:c.instructions+=38;goto B6114ab;
case 0x6114ad:c.instructions+=37;goto B6114ad;
case 0x6114b0:c.instructions+=36;goto B6114b0;
case 0x6114b3:c.instructions+=35;goto B6114b3;
case 0x6114b5:c.instructions+=34;goto B6114b5;
case 0x6114b7:c.instructions+=33;goto B6114b7;
case 0x6114ba:c.instructions+=32;goto B6114ba;
case 0x6114bb:c.instructions+=31;goto B6114bb;
case 0x6114c1:c.instructions+=30;goto B6114c1;
case 0x6114c3:c.instructions+=29;goto B6114c3;
case 0x6114c7:c.instructions+=28;goto B6114c7;
case 0x6114ca:c.instructions+=27;goto B6114ca;
case 0x6114cc:c.instructions+=26;goto B6114cc;
case 0x6114ce:c.instructions+=25;goto B6114ce;
case 0x6114d1:c.instructions+=24;goto B6114d1;
case 0x6114d4:c.instructions+=23;goto B6114d4;
case 0x6114d6:c.instructions+=22;goto B6114d6;
case 0x6114d8:c.instructions+=21;goto B6114d8;
case 0x6114db:c.instructions+=20;goto B6114db;
case 0x6114dc:c.instructions+=19;goto B6114dc;
case 0x6114e2:c.instructions+=18;goto B6114e2;
case 0x6114e4:c.instructions+=17;goto B6114e4;
case 0x6114e8:c.instructions+=16;goto B6114e8;
case 0x6114eb:c.instructions+=15;goto B6114eb;
case 0x6114ed:c.instructions+=14;goto B6114ed;
case 0x6114ef:c.instructions+=13;goto B6114ef;
case 0x6114f2:c.instructions+=12;goto B6114f2;
case 0x6114f5:c.instructions+=11;goto B6114f5;
case 0x6114f7:c.instructions+=10;goto B6114f7;
case 0x6114f9:c.instructions+=9;goto B6114f9;
case 0x6114fc:c.instructions+=8;goto B6114fc;
case 0x6114fd:c.instructions+=7;goto B6114fd;
case 0x611503:c.instructions+=6;goto B611503;
case 0x611505:c.instructions+=5;goto B611505;
case 0x611508:c.instructions+=4;goto B611508;
case 0x61150a:c.instructions+=3;goto B61150a;
case 0x61150c:c.instructions+=2;goto B61150c;
case 0x61150d:c.instructions+=1;goto B61150d;
case 0x611510:goto L611510;
case 0x611513:c.instructions+=5;goto B611513;
case 0x611515:c.instructions+=4;goto B611515;
case 0x611517:c.instructions+=3;goto B611517;
case 0x61151a:c.instructions+=2;goto B61151a;
case 0x61151e:c.instructions+=1;goto B61151e;
case 0x611520:goto L611520;
case 0x611528:c.instructions+=1;goto B611528;
case 0x61152c:goto L61152c;
case 0x61152d:c.instructions+=8;goto B61152d;
case 0x61152e:c.instructions+=7;goto B61152e;
case 0x61152f:c.instructions+=6;goto B61152f;
case 0x611532:c.instructions+=5;goto B611532;
case 0x611538:c.instructions+=4;goto B611538;
case 0x61153a:c.instructions+=3;goto B61153a;
case 0x61153b:c.instructions+=2;goto B61153b;
case 0x61153f:c.instructions+=1;goto B61153f;
case 0x611541:goto L611541;
case 0x611545:goto L611545;
case 0x611548:c.instructions+=8;goto B611548;
case 0x611549:c.instructions+=7;goto B611549;
case 0x61154c:c.instructions+=6;goto B61154c;
case 0x611550:c.instructions+=5;goto B611550;
case 0x611554:c.instructions+=4;goto B611554;
case 0x61155c:c.instructions+=3;goto B61155c;
case 0x611563:c.instructions+=2;goto B611563;
case 0x61156a:c.instructions+=1;goto B61156a;
case 0x611570:goto L611570;
case 0x611574:c.instructions+=2;goto B611574;
case 0x611576:c.instructions+=1;goto B611576;
case 0x611578:goto L611578;
case 0x61157a:c.instructions+=1;goto B61157a;
case 0x611580:goto L611580;
case 0x611584:c.instructions+=5;goto B611584;
case 0x611587:c.instructions+=4;goto B611587;
case 0x611589:c.instructions+=3;goto B611589;
case 0x61158d:c.instructions+=2;goto B61158d;
case 0x61158f:c.instructions+=1;goto B61158f;
case 0x611595:goto L611595;
case 0x611598:c.instructions+=47;goto B611598;
case 0x61159c:c.instructions+=46;goto B61159c;
case 0x61159e:c.instructions+=45;goto B61159e;
case 0x6115a0:c.instructions+=44;goto B6115a0;
case 0x6115a3:c.instructions+=43;goto B6115a3;
case 0x6115a4:c.instructions+=42;goto B6115a4;
case 0x6115aa:c.instructions+=41;goto B6115aa;
case 0x6115ac:c.instructions+=40;goto B6115ac;
case 0x6115b0:c.instructions+=39;goto B6115b0;
case 0x6115b3:c.instructions+=38;goto B6115b3;
case 0x6115b5:c.instructions+=37;goto B6115b5;
case 0x6115b8:c.instructions+=36;goto B6115b8;
case 0x6115bb:c.instructions+=35;goto B6115bb;
case 0x6115bd:c.instructions+=34;goto B6115bd;
case 0x6115bf:c.instructions+=33;goto B6115bf;
case 0x6115c2:c.instructions+=32;goto B6115c2;
case 0x6115c3:c.instructions+=31;goto B6115c3;
case 0x6115c9:c.instructions+=30;goto B6115c9;
case 0x6115cb:c.instructions+=29;goto B6115cb;
case 0x6115cf:c.instructions+=28;goto B6115cf;
case 0x6115d2:c.instructions+=27;goto B6115d2;
case 0x6115d4:c.instructions+=26;goto B6115d4;
case 0x6115d7:c.instructions+=25;goto B6115d7;
case 0x6115d9:c.instructions+=24;goto B6115d9;
case 0x6115db:c.instructions+=23;goto B6115db;
case 0x6115dd:c.instructions+=22;goto B6115dd;
case 0x6115e0:c.instructions+=21;goto B6115e0;
case 0x6115e1:c.instructions+=20;goto B6115e1;
case 0x6115e7:c.instructions+=19;goto B6115e7;
case 0x6115e9:c.instructions+=18;goto B6115e9;
case 0x6115ed:c.instructions+=17;goto B6115ed;
case 0x6115f0:c.instructions+=16;goto B6115f0;
case 0x6115f2:c.instructions+=15;goto B6115f2;
case 0x6115f4:c.instructions+=14;goto B6115f4;
case 0x6115f7:c.instructions+=13;goto B6115f7;
case 0x6115f9:c.instructions+=12;goto B6115f9;
case 0x6115fb:c.instructions+=11;goto B6115fb;
case 0x6115fe:c.instructions+=10;goto B6115fe;
case 0x6115ff:c.instructions+=9;goto B6115ff;
case 0x611605:c.instructions+=8;goto B611605;
case 0x611607:c.instructions+=7;goto B611607;
case 0x61160b:c.instructions+=6;goto B61160b;
case 0x61160e:c.instructions+=5;goto B61160e;
case 0x611610:c.instructions+=4;goto B611610;
case 0x611614:c.instructions+=3;goto B611614;
case 0x611617:c.instructions+=2;goto B611617;
case 0x611618:c.instructions+=1;goto B611618;
case 0x61161b:goto L61161b;
case 0x61161d:c.instructions+=1;goto B61161d;
case 0x611623:goto L611623;
case 0x611626:c.instructions+=50;goto B611626;
case 0x61162a:c.instructions+=49;goto B61162a;
case 0x61162c:c.instructions+=48;goto B61162c;
case 0x61162e:c.instructions+=47;goto B61162e;
case 0x611631:c.instructions+=46;goto B611631;
case 0x611632:c.instructions+=45;goto B611632;
case 0x611638:c.instructions+=44;goto B611638;
case 0x61163a:c.instructions+=43;goto B61163a;
case 0x61163e:c.instructions+=42;goto B61163e;
case 0x611641:c.instructions+=41;goto B611641;
case 0x611643:c.instructions+=40;goto B611643;
case 0x611646:c.instructions+=39;goto B611646;
case 0x611649:c.instructions+=38;goto B611649;
case 0x61164b:c.instructions+=37;goto B61164b;
case 0x61164d:c.instructions+=36;goto B61164d;
case 0x611650:c.instructions+=35;goto B611650;
case 0x611651:c.instructions+=34;goto B611651;
case 0x611657:c.instructions+=33;goto B611657;
case 0x611659:c.instructions+=32;goto B611659;
case 0x61165d:c.instructions+=31;goto B61165d;
case 0x611660:c.instructions+=30;goto B611660;
case 0x611662:c.instructions+=29;goto B611662;
case 0x611665:c.instructions+=28;goto B611665;
case 0x611667:c.instructions+=27;goto B611667;
case 0x611669:c.instructions+=26;goto B611669;
case 0x61166b:c.instructions+=25;goto B61166b;
case 0x61166e:c.instructions+=24;goto B61166e;
case 0x61166f:c.instructions+=23;goto B61166f;
case 0x611675:c.instructions+=22;goto B611675;
case 0x611677:c.instructions+=21;goto B611677;
case 0x61167b:c.instructions+=20;goto B61167b;
case 0x61167e:c.instructions+=19;goto B61167e;
case 0x611680:c.instructions+=18;goto B611680;
case 0x611682:c.instructions+=17;goto B611682;
case 0x611685:c.instructions+=16;goto B611685;
case 0x611687:c.instructions+=15;goto B611687;
case 0x611689:c.instructions+=14;goto B611689;
case 0x61168c:c.instructions+=13;goto B61168c;
case 0x611690:c.instructions+=12;goto B611690;
case 0x611691:c.instructions+=11;goto B611691;
case 0x611697:c.instructions+=10;goto B611697;
case 0x611699:c.instructions+=9;goto B611699;
case 0x61169d:c.instructions+=8;goto B61169d;
case 0x6116a0:c.instructions+=7;goto B6116a0;
case 0x6116a2:c.instructions+=6;goto B6116a2;
case 0x6116a3:c.instructions+=5;goto B6116a3;
case 0x6116a6:c.instructions+=4;goto B6116a6;
case 0x6116aa:c.instructions+=3;goto B6116aa;
case 0x6116ad:c.instructions+=2;goto B6116ad;
case 0x6116af:c.instructions+=1;goto B6116af;
case 0x6116b4:goto L6116b4;
case 0x6116b5:c.instructions+=5;goto B6116b5;
case 0x6116b6:c.instructions+=4;goto B6116b6;
case 0x6116b7:c.instructions+=3;goto B6116b7;
case 0x6116b8:c.instructions+=2;goto B6116b8;
case 0x6116bb:c.instructions+=1;goto B6116bb;
case 0x6116c0:goto L6116c0;
case 0x6116c3:c.instructions+=25;goto B6116c3;
case 0x6116c4:c.instructions+=24;goto B6116c4;
case 0x6116ca:c.instructions+=23;goto B6116ca;
case 0x6116cb:c.instructions+=22;goto B6116cb;
case 0x6116cc:c.instructions+=21;goto B6116cc;
case 0x6116d2:c.instructions+=20;goto B6116d2;
case 0x6116d5:c.instructions+=19;goto B6116d5;
case 0x6116da:c.instructions+=18;goto B6116da;
case 0x6116dc:c.instructions+=17;goto B6116dc;
case 0x6116de:c.instructions+=16;goto B6116de;
case 0x6116e1:c.instructions+=15;goto B6116e1;
case 0x6116e5:c.instructions+=14;goto B6116e5;
case 0x6116eb:c.instructions+=13;goto B6116eb;
case 0x6116f1:c.instructions+=12;goto B6116f1;
case 0x6116f4:c.instructions+=11;goto B6116f4;
case 0x6116f8:c.instructions+=10;goto B6116f8;
case 0x6116fa:c.instructions+=9;goto B6116fa;
case 0x6116fd:c.instructions+=8;goto B6116fd;
case 0x6116fe:c.instructions+=7;goto B6116fe;
case 0x611700:c.instructions+=6;goto B611700;
case 0x611701:c.instructions+=5;goto B611701;
case 0x611705:c.instructions+=4;goto B611705;
case 0x611707:c.instructions+=3;goto B611707;
case 0x61170a:c.instructions+=2;goto B61170a;
case 0x61170e:c.instructions+=1;goto B61170e;
case 0x611710:goto L611710;
case 0x611715:c.instructions+=7;goto B611715;
case 0x611717:c.instructions+=6;goto B611717;
case 0x61171a:c.instructions+=5;goto B61171a;
case 0x61171c:c.instructions+=4;goto B61171c;
case 0x61171f:c.instructions+=3;goto B61171f;
case 0x611721:c.instructions+=2;goto B611721;
case 0x611725:c.instructions+=1;goto B611725;
case 0x611727:goto L611727;
case 0x61172f:goto L61172f;
case 0x611735:c.instructions+=7;goto B611735;
case 0x611738:c.instructions+=6;goto B611738;
case 0x61173b:c.instructions+=5;goto B61173b;
case 0x61173f:c.instructions+=4;goto B61173f;
case 0x611742:c.instructions+=3;goto B611742;
case 0x611745:c.instructions+=2;goto B611745;
case 0x61174d:c.instructions+=1;goto B61174d;
case 0x61174f:goto L61174f;
case 0x611751:goto L611751;
case 0x611753:c.instructions+=2;goto B611753;
case 0x611755:c.instructions+=1;goto B611755;
case 0x611757:goto L611757;
case 0x611759:c.instructions+=2;goto B611759;
case 0x61175c:c.instructions+=1;goto B61175c;
case 0x611760:goto L611760;
case 0x611762:c.instructions+=11;goto B611762;
case 0x611765:c.instructions+=10;goto B611765;
case 0x611767:c.instructions+=9;goto B611767;
case 0x611769:c.instructions+=8;goto B611769;
case 0x61176c:c.instructions+=7;goto B61176c;
case 0x61176d:c.instructions+=6;goto B61176d;
case 0x61176f:c.instructions+=5;goto B61176f;
case 0x611772:c.instructions+=4;goto B611772;
case 0x611779:c.instructions+=3;goto B611779;
case 0x61177a:c.instructions+=2;goto B61177a;
case 0x61177c:c.instructions+=1;goto B61177c;
case 0x61177e:goto L61177e;
case 0x611784:goto L611784;
case 0x611786:c.instructions+=5;goto B611786;
case 0x611787:c.instructions+=4;goto B611787;
case 0x61178c:c.instructions+=3;goto B61178c;
case 0x61178e:c.instructions+=2;goto B61178e;
case 0x611790:c.instructions+=1;goto B611790;
case 0x611792:goto L611792;
case 0x61179a:c.instructions+=1;goto B61179a;
case 0x61179c:goto L61179c;
case 0x61179e:c.instructions+=5;goto B61179e;
case 0x61179f:c.instructions+=4;goto B61179f;
case 0x6117a4:c.instructions+=3;goto B6117a4;
case 0x6117a6:c.instructions+=2;goto B6117a6;
case 0x6117a8:c.instructions+=1;goto B6117a8;
case 0x6117aa:goto L6117aa;
case 0x6117b2:c.instructions+=1;goto B6117b2;
case 0x6117b4:goto L6117b4;
case 0x6117b6:c.instructions+=8;goto B6117b6;
case 0x6117b7:c.instructions+=7;goto B6117b7;
case 0x6117bc:c.instructions+=6;goto B6117bc;
case 0x6117be:c.instructions+=5;goto B6117be;
case 0x6117c0:c.instructions+=4;goto B6117c0;
case 0x6117c2:c.instructions+=3;goto B6117c2;
case 0x6117c5:c.instructions+=2;goto B6117c5;
case 0x6117cb:c.instructions+=1;goto B6117cb;
case 0x6117cf:goto L6117cf;
case 0x6117d1:c.instructions+=2;goto B6117d1;
case 0x6117d9:c.instructions+=1;goto B6117d9;
case 0x6117df:goto L6117df;
case 0x6117e1:goto L6117e1;
case 0x6117e5:c.instructions+=1;goto B6117e5;
case 0x6117f0:goto L6117f0;
case 0x6117f4:c.instructions+=14;goto B6117f4;
case 0x6117f8:c.instructions+=13;goto B6117f8;
case 0x6117fc:c.instructions+=12;goto B6117fc;
case 0x6117ff:c.instructions+=11;goto B6117ff;
case 0x611802:c.instructions+=10;goto B611802;
case 0x611803:c.instructions+=9;goto B611803;
case 0x611806:c.instructions+=8;goto B611806;
case 0x611807:c.instructions+=7;goto B611807;
case 0x61180a:c.instructions+=6;goto B61180a;
case 0x61180d:c.instructions+=5;goto B61180d;
case 0x61180e:c.instructions+=4;goto B61180e;
case 0x61180f:c.instructions+=3;goto B61180f;
case 0x611813:c.instructions+=2;goto B611813;
case 0x611817:c.instructions+=1;goto B611817;
case 0x61181c:goto L61181c;
case 0x611820:c.instructions+=7;goto B611820;
case 0x611821:c.instructions+=6;goto B611821;
case 0x611822:c.instructions+=5;goto B611822;
case 0x611826:c.instructions+=4;goto B611826;
case 0x611827:c.instructions+=3;goto B611827;
case 0x611829:c.instructions+=2;goto B611829;
case 0x61182d:c.instructions+=1;goto B61182d;
case 0x611832:goto L611832;
case 0x611835:c.instructions+=2;goto B611835;
case 0x611837:c.instructions+=1;goto B611837;
case 0x611839:goto L611839;
case 0x61183d:c.instructions+=8;goto B61183d;
case 0x611841:c.instructions+=7;goto B611841;
case 0x611842:c.instructions+=6;goto B611842;
case 0x611843:c.instructions+=5;goto B611843;
case 0x611847:c.instructions+=4;goto B611847;
case 0x611848:c.instructions+=3;goto B611848;
case 0x611849:c.instructions+=2;goto B611849;
case 0x61184b:c.instructions+=1;goto B61184b;
case 0x611850:goto L611850;
case 0x611853:goto L611853;
case 0x611857:c.instructions+=6;goto B611857;
case 0x61185b:c.instructions+=5;goto B61185b;
case 0x61185f:c.instructions+=4;goto B61185f;
case 0x611861:c.instructions+=3;goto B611861;
case 0x611863:c.instructions+=2;goto B611863;
case 0x611867:c.instructions+=1;goto B611867;
case 0x611869:goto L611869;
case 0x611870:goto L611870;
case 0x611876:c.instructions+=2;goto B611876;
case 0x611878:c.instructions+=1;goto B611878;
case 0x61187a:goto L61187a;
case 0x61187e:goto L61187e;
case 0x611882:c.instructions+=7;goto B611882;
case 0x611883:c.instructions+=6;goto B611883;
case 0x611885:c.instructions+=5;goto B611885;
case 0x611886:c.instructions+=4;goto B611886;
case 0x61188a:c.instructions+=3;goto B61188a;
case 0x61188e:c.instructions+=2;goto B61188e;
case 0x611890:c.instructions+=1;goto B611890;
case 0x611892:goto L611892;
case 0x611896:c.instructions+=18;goto B611896;
case 0x611898:c.instructions+=17;goto B611898;
case 0x611899:c.instructions+=16;goto B611899;
case 0x61189f:c.instructions+=15;goto B61189f;
case 0x6118a3:c.instructions+=14;goto B6118a3;
case 0x6118a5:c.instructions+=13;goto B6118a5;
case 0x6118aa:c.instructions+=12;goto B6118aa;
case 0x6118ac:c.instructions+=11;goto B6118ac;
case 0x6118ae:c.instructions+=10;goto B6118ae;
case 0x6118b1:c.instructions+=9;goto B6118b1;
case 0x6118b3:c.instructions+=8;goto B6118b3;
case 0x6118b6:c.instructions+=7;goto B6118b6;
case 0x6118b8:c.instructions+=6;goto B6118b8;
case 0x6118ba:c.instructions+=5;goto B6118ba;
case 0x6118be:c.instructions+=4;goto B6118be;
case 0x6118c1:c.instructions+=3;goto B6118c1;
case 0x6118c4:c.instructions+=2;goto B6118c4;
case 0x6118c8:c.instructions+=1;goto B6118c8;
case 0x6118ca:goto L6118ca;
case 0x6118cc:goto L6118cc;
case 0x6118ce:c.instructions+=2;goto B6118ce;
case 0x6118d0:c.instructions+=1;goto B6118d0;
case 0x6118d2:goto L6118d2;
case 0x6118d4:c.instructions+=1;goto B6118d4;
case 0x6118d7:goto L6118d7;
case 0x6118d9:c.instructions+=11;goto B6118d9;
case 0x6118dc:c.instructions+=10;goto B6118dc;
case 0x6118de:c.instructions+=9;goto B6118de;
case 0x6118e0:c.instructions+=8;goto B6118e0;
case 0x6118e3:c.instructions+=7;goto B6118e3;
case 0x6118e4:c.instructions+=6;goto B6118e4;
case 0x6118e6:c.instructions+=5;goto B6118e6;
case 0x6118e9:c.instructions+=4;goto B6118e9;
case 0x6118f0:c.instructions+=3;goto B6118f0;
case 0x6118f1:c.instructions+=2;goto B6118f1;
case 0x6118f3:c.instructions+=1;goto B6118f3;
case 0x6118f5:goto L6118f5;
case 0x6118f9:c.instructions+=1;goto B6118f9;
case 0x6118ff:goto L6118ff;
case 0x611900:c.instructions+=5;goto B611900;
case 0x611901:c.instructions+=4;goto B611901;
case 0x611902:c.instructions+=3;goto B611902;
case 0x611903:c.instructions+=2;goto B611903;
case 0x611906:c.instructions+=1;goto B611906;
case 0x611910:goto L611910;
case 0x611914:c.instructions+=4;goto B611914;
case 0x61191a:c.instructions+=3;goto B61191a;
case 0x61191c:c.instructions+=2;goto B61191c;
case 0x61191f:c.instructions+=1;goto B61191f;
case 0x611921:goto L611921;
case 0x611928:goto L611928;
case 0x61192d:c.instructions+=1;goto B61192d;
case 0x61192e:goto L61192e;
case 0x611933:c.instructions+=1;goto B611933;
case 0x611934:goto L611934;
case 0x611939:c.instructions+=1;goto B611939;
case 0x61193a:goto L61193a;
case 0x61193f:c.instructions+=1;goto B61193f;
case 0x611940:goto L611940;
case 0x611945:c.instructions+=1;goto B611945;
case 0x611946:goto L611946;
case 0x61194b:goto L61194b;
case 0x611970:goto L611970;
case 0x611974:c.instructions+=6;goto B611974;
case 0x611976:c.instructions+=5;goto B611976;
case 0x611977:c.instructions+=4;goto B611977;
case 0x61197b:c.instructions+=3;goto B61197b;
case 0x61197d:c.instructions+=2;goto B61197d;
case 0x61197f:c.instructions+=1;goto B61197f;
case 0x611981:goto L611981;
case 0x611984:c.instructions+=2;goto B611984;
case 0x611987:c.instructions+=1;goto B611987;
case 0x611989:goto L611989;
case 0x61198b:c.instructions+=2;goto B61198b;
case 0x61198c:c.instructions+=1;goto B61198c;
case 0x61198d:goto L61198d;
case 0x61198e:c.instructions+=5;goto B61198e;
case 0x61198f:c.instructions+=4;goto B61198f;
case 0x611991:c.instructions+=3;goto B611991;
case 0x611993:c.instructions+=2;goto B611993;
case 0x611996:c.instructions+=1;goto B611996;
case 0x611998:goto L611998;
case 0x61199b:c.instructions+=2;goto B61199b;
case 0x61199d:c.instructions+=1;goto B61199d;
case 0x61199f:goto L61199f;
case 0x6119a0:c.instructions+=3;goto B6119a0;
case 0x6119a3:c.instructions+=2;goto B6119a3;
case 0x6119a6:c.instructions+=1;goto B6119a6;
case 0x6119a8:goto L6119a8;
case 0x6119aa:c.instructions+=3;goto B6119aa;
case 0x6119ad:c.instructions+=2;goto B6119ad;
case 0x6119b0:c.instructions+=1;goto B6119b0;
case 0x6119b2:goto L6119b2;
case 0x6119b5:c.instructions+=2;goto B6119b5;
case 0x6119b8:c.instructions+=1;goto B6119b8;
case 0x6119ba:goto L6119ba;
case 0x6119bc:c.instructions+=2;goto B6119bc;
case 0x6119bf:c.instructions+=1;goto B6119bf;
case 0x6119c1:goto L6119c1;
case 0x6119c4:c.instructions+=2;goto B6119c4;
case 0x6119c7:c.instructions+=1;goto B6119c7;
case 0x6119c9:goto L6119c9;
case 0x6119cc:c.instructions+=2;goto B6119cc;
case 0x6119ce:c.instructions+=1;goto B6119ce;
case 0x6119d0:goto L6119d0;
case 0x6119d3:c.instructions+=2;goto B6119d3;
case 0x6119d6:c.instructions+=1;goto B6119d6;
case 0x6119d8:goto L6119d8;
case 0x6119db:c.instructions+=2;goto B6119db;
case 0x6119de:c.instructions+=1;goto B6119de;
case 0x6119e0:goto L6119e0;
case 0x6119e3:c.instructions+=2;goto B6119e3;
case 0x6119e6:c.instructions+=1;goto B6119e6;
case 0x6119e8:goto L6119e8;
case 0x6119eb:c.instructions+=2;goto B6119eb;
case 0x6119ee:c.instructions+=1;goto B6119ee;
case 0x6119f0:goto L6119f0;
case 0x6119f3:c.instructions+=2;goto B6119f3;
case 0x6119f6:c.instructions+=1;goto B6119f6;
case 0x6119f8:goto L6119f8;
case 0x6119f9:c.instructions+=4;goto B6119f9;
case 0x6119fc:c.instructions+=3;goto B6119fc;
case 0x6119ff:c.instructions+=2;goto B6119ff;
case 0x611a02:c.instructions+=1;goto B611a02;
case 0x611a04:goto L611a04;
case 0x611a05:c.instructions+=4;goto B611a05;
case 0x611a06:c.instructions+=3;goto B611a06;
case 0x611a08:c.instructions+=2;goto B611a08;
case 0x611a09:c.instructions+=1;goto B611a09;
case 0x611a0a:goto L611a0a;
case 0x611a0b:c.instructions+=4;goto B611a0b;
case 0x611a0c:c.instructions+=3;goto B611a0c;
case 0x611a0e:c.instructions+=2;goto B611a0e;
case 0x611a0f:c.instructions+=1;goto B611a0f;
case 0x611a10:goto L611a10;
case 0x611a14:c.instructions+=3;goto B611a14;
case 0x611a15:c.instructions+=2;goto B611a15;
case 0x611a16:c.instructions+=1;goto B611a16;
case 0x611a1b:goto L611a1b;
case 0x611a1d:c.instructions+=3;goto B611a1d;
case 0x611a20:c.instructions+=2;goto B611a20;
case 0x611a22:c.instructions+=1;goto B611a22;
case 0x611a24:goto L611a24;
case 0x611a29:c.instructions+=1;goto B611a29;
case 0x611a2b:goto L611a2b;
case 0x611a2d:goto L611a2d;
case 0x611a2e:c.instructions+=1;goto B611a2e;
case 0x611a30:goto L611a30;
case 0x611a33:c.instructions+=14;goto B611a33;
case 0x611a37:c.instructions+=13;goto B611a37;
case 0x611a38:c.instructions+=12;goto B611a38;
case 0x611a3c:c.instructions+=11;goto B611a3c;
case 0x611a3f:c.instructions+=10;goto B611a3f;
case 0x611a42:c.instructions+=9;goto B611a42;
case 0x611a46:c.instructions+=8;goto B611a46;
case 0x611a49:c.instructions+=7;goto B611a49;
case 0x611a4c:c.instructions+=6;goto B611a4c;
case 0x611a50:c.instructions+=5;goto B611a50;
case 0x611a54:c.instructions+=4;goto B611a54;
case 0x611a5a:c.instructions+=3;goto B611a5a;
case 0x611a62:c.instructions+=2;goto B611a62;
case 0x611a66:c.instructions+=1;goto B611a66;
case 0x611a6b:goto L611a6b;
case 0x611a70:c.instructions+=8;goto B611a70;
case 0x611a74:c.instructions+=7;goto B611a74;
case 0x611a78:c.instructions+=6;goto B611a78;
case 0x611a7d:c.instructions+=5;goto B611a7d;
case 0x611a81:c.instructions+=4;goto B611a81;
case 0x611a85:c.instructions+=3;goto B611a85;
case 0x611a8b:c.instructions+=2;goto B611a8b;
case 0x611a8f:c.instructions+=1;goto B611a8f;
case 0x611a94:goto L611a94;
case 0x611a99:c.instructions+=8;goto B611a99;
case 0x611a9e:c.instructions+=7;goto B611a9e;
case 0x611aa2:c.instructions+=6;goto B611aa2;
case 0x611aa6:c.instructions+=5;goto B611aa6;
case 0x611aaa:c.instructions+=4;goto B611aaa;
case 0x611aae:c.instructions+=3;goto B611aae;
case 0x611ab4:c.instructions+=2;goto B611ab4;
case 0x611ab8:c.instructions+=1;goto B611ab8;
case 0x611abd:goto L611abd;
case 0x611ac2:c.instructions+=8;goto B611ac2;
case 0x611ac6:c.instructions+=7;goto B611ac6;
case 0x611ac9:c.instructions+=6;goto B611ac9;
case 0x611acd:c.instructions+=5;goto B611acd;
case 0x611ad1:c.instructions+=4;goto B611ad1;
case 0x611ad5:c.instructions+=3;goto B611ad5;
case 0x611adb:c.instructions+=2;goto B611adb;
case 0x611adf:c.instructions+=1;goto B611adf;
case 0x611ae4:goto L611ae4;
case 0x611ae8:c.instructions+=4;goto B611ae8;
case 0x611aec:c.instructions+=3;goto B611aec;
case 0x611aed:c.instructions+=2;goto B611aed;
case 0x611af0:c.instructions+=1;goto B611af0;
case 0x611b00:goto L611b00;
case 0x611b03:c.instructions+=13;goto B611b03;
case 0x611b07:c.instructions+=12;goto B611b07;
case 0x611b08:c.instructions+=11;goto B611b08;
case 0x611b09:c.instructions+=10;goto B611b09;
case 0x611b0b:c.instructions+=9;goto B611b0b;
case 0x611b0c:c.instructions+=8;goto B611b0c;
case 0x611b0e:c.instructions+=7;goto B611b0e;
case 0x611b11:c.instructions+=6;goto B611b11;
case 0x611b12:c.instructions+=5;goto B611b12;
case 0x611b16:c.instructions+=4;goto B611b16;
case 0x611b1a:c.instructions+=3;goto B611b1a;
case 0x611b1e:c.instructions+=2;goto B611b1e;
case 0x611b22:c.instructions+=1;goto B611b22;
case 0x611b28:goto L611b28;
case 0x611b2c:c.instructions+=4;goto B611b2c;
case 0x611b30:c.instructions+=3;goto B611b30;
case 0x611b33:c.instructions+=2;goto B611b33;
case 0x611b3b:c.instructions+=1;goto B611b3b;
case 0x611b3e:goto L611b3e;
case 0x611b41:c.instructions+=4;goto B611b41;
case 0x611b47:c.instructions+=3;goto B611b47;
case 0x611b49:c.instructions+=2;goto B611b49;
case 0x611b4c:c.instructions+=1;goto B611b4c;
case 0x611b52:goto L611b52;
case 0x611b56:c.instructions+=4;goto B611b56;
case 0x611b5a:c.instructions+=3;goto B611b5a;
case 0x611b5e:c.instructions+=2;goto B611b5e;
case 0x611b61:c.instructions+=1;goto B611b61;
case 0x611b66:goto L611b66;
case 0x611b6a:c.instructions+=5;goto B611b6a;
case 0x611b6e:c.instructions+=4;goto B611b6e;
case 0x611b72:c.instructions+=3;goto B611b72;
case 0x611b76:c.instructions+=2;goto B611b76;
case 0x611b79:c.instructions+=1;goto B611b79;
case 0x611b7e:goto L611b7e;
case 0x611b82:c.instructions+=5;goto B611b82;
case 0x611b86:c.instructions+=4;goto B611b86;
case 0x611b8a:c.instructions+=3;goto B611b8a;
case 0x611b8e:c.instructions+=2;goto B611b8e;
case 0x611b91:c.instructions+=1;goto B611b91;
case 0x611b96:goto L611b96;
case 0x611b9a:c.instructions+=5;goto B611b9a;
case 0x611b9c:c.instructions+=4;goto B611b9c;
case 0x611ba0:c.instructions+=3;goto B611ba0;
case 0x611ba2:c.instructions+=2;goto B611ba2;
case 0x611ba6:c.instructions+=1;goto B611ba6;
case 0x611ba8:goto L611ba8;
case 0x611bab:c.instructions+=4;goto B611bab;
case 0x611baf:c.instructions+=3;goto B611baf;
case 0x611bb3:c.instructions+=2;goto B611bb3;
case 0x611bb6:c.instructions+=1;goto B611bb6;
case 0x611bbb:goto L611bbb;
case 0x611bbe:c.instructions+=2;goto B611bbe;
case 0x611bc0:c.instructions+=1;goto B611bc0;
case 0x611bc2:goto L611bc2;
case 0x611bc4:c.instructions+=1;goto B611bc4;
case 0x611bc6:goto L611bc6;
case 0x611bc9:c.instructions+=4;goto B611bc9;
case 0x611bcd:c.instructions+=3;goto B611bcd;
case 0x611bd1:c.instructions+=2;goto B611bd1;
case 0x611bd4:c.instructions+=1;goto B611bd4;
case 0x611bd9:goto L611bd9;
case 0x611bdb:goto L611bdb;
case 0x611bde:c.instructions+=4;goto B611bde;
case 0x611be4:c.instructions+=3;goto B611be4;
case 0x611be6:c.instructions+=2;goto B611be6;
case 0x611be9:c.instructions+=1;goto B611be9;
case 0x611bef:goto L611bef;
case 0x611bf3:c.instructions+=4;goto B611bf3;
case 0x611bf7:c.instructions+=3;goto B611bf7;
case 0x611bfb:c.instructions+=2;goto B611bfb;
case 0x611bfe:c.instructions+=1;goto B611bfe;
case 0x611c03:goto L611c03;
case 0x611c07:c.instructions+=7;goto B611c07;
case 0x611c09:c.instructions+=6;goto B611c09;
case 0x611c0d:c.instructions+=5;goto B611c0d;
case 0x611c11:c.instructions+=4;goto B611c11;
case 0x611c15:c.instructions+=3;goto B611c15;
case 0x611c19:c.instructions+=2;goto B611c19;
case 0x611c1c:c.instructions+=1;goto B611c1c;
case 0x611c21:goto L611c21;
case 0x611c25:c.instructions+=7;goto B611c25;
case 0x611c29:c.instructions+=6;goto B611c29;
case 0x611c2d:c.instructions+=5;goto B611c2d;
case 0x611c2f:c.instructions+=4;goto B611c2f;
case 0x611c33:c.instructions+=3;goto B611c33;
case 0x611c37:c.instructions+=2;goto B611c37;
case 0x611c3a:c.instructions+=1;goto B611c3a;
case 0x611c3f:goto L611c3f;
case 0x611c43:c.instructions+=5;goto B611c43;
case 0x611c45:c.instructions+=4;goto B611c45;
case 0x611c49:c.instructions+=3;goto B611c49;
case 0x611c4b:c.instructions+=2;goto B611c4b;
case 0x611c4f:c.instructions+=1;goto B611c4f;
case 0x611c51:goto L611c51;
case 0x611c55:c.instructions+=4;goto B611c55;
case 0x611c59:c.instructions+=3;goto B611c59;
case 0x611c5d:c.instructions+=2;goto B611c5d;
case 0x611c60:c.instructions+=1;goto B611c60;
case 0x611c65:goto L611c65;
case 0x611c68:c.instructions+=2;goto B611c68;
case 0x611c6a:c.instructions+=1;goto B611c6a;
case 0x611c6c:goto L611c6c;
case 0x611c6e:c.instructions+=1;goto B611c6e;
case 0x611c70:goto L611c70;
case 0x611c74:c.instructions+=4;goto B611c74;
case 0x611c78:c.instructions+=3;goto B611c78;
case 0x611c7c:c.instructions+=2;goto B611c7c;
case 0x611c7f:c.instructions+=1;goto B611c7f;
case 0x611c84:goto L611c84;
case 0x611c86:goto L611c86;
case 0x611c88:c.instructions+=4;goto B611c88;
case 0x611c8e:c.instructions+=3;goto B611c8e;
case 0x611c90:c.instructions+=2;goto B611c90;
case 0x611c93:c.instructions+=1;goto B611c93;
case 0x611c99:goto L611c99;
case 0x611c9d:c.instructions+=4;goto B611c9d;
case 0x611ca1:c.instructions+=3;goto B611ca1;
case 0x611ca5:c.instructions+=2;goto B611ca5;
case 0x611ca7:c.instructions+=1;goto B611ca7;
case 0x611cac:goto L611cac;
case 0x611cb0:c.instructions+=7;goto B611cb0;
case 0x611cb4:c.instructions+=6;goto B611cb4;
case 0x611cb8:c.instructions+=5;goto B611cb8;
case 0x611cba:c.instructions+=4;goto B611cba;
case 0x611cbe:c.instructions+=3;goto B611cbe;
case 0x611cc2:c.instructions+=2;goto B611cc2;
case 0x611cc4:c.instructions+=1;goto B611cc4;
case 0x611cc9:goto L611cc9;
case 0x611ccd:c.instructions+=7;goto B611ccd;
case 0x611ccf:c.instructions+=6;goto B611ccf;
case 0x611cd3:c.instructions+=5;goto B611cd3;
case 0x611cd7:c.instructions+=4;goto B611cd7;
case 0x611cdb:c.instructions+=3;goto B611cdb;
case 0x611cdf:c.instructions+=2;goto B611cdf;
case 0x611ce1:c.instructions+=1;goto B611ce1;
case 0x611ce6:goto L611ce6;
case 0x611cea:c.instructions+=5;goto B611cea;
case 0x611cec:c.instructions+=4;goto B611cec;
case 0x611cf0:c.instructions+=3;goto B611cf0;
case 0x611cf2:c.instructions+=2;goto B611cf2;
case 0x611cf6:c.instructions+=1;goto B611cf6;
case 0x611cf8:goto L611cf8;
case 0x611cfc:c.instructions+=4;goto B611cfc;
case 0x611d00:c.instructions+=3;goto B611d00;
case 0x611d04:c.instructions+=2;goto B611d04;
case 0x611d06:c.instructions+=1;goto B611d06;
case 0x611d0b:goto L611d0b;
case 0x611d0e:c.instructions+=2;goto B611d0e;
case 0x611d10:c.instructions+=1;goto B611d10;
case 0x611d12:goto L611d12;
case 0x611d14:c.instructions+=1;goto B611d14;
case 0x611d16:goto L611d16;
case 0x611d1a:c.instructions+=4;goto B611d1a;
case 0x611d1e:c.instructions+=3;goto B611d1e;
case 0x611d22:c.instructions+=2;goto B611d22;
case 0x611d24:c.instructions+=1;goto B611d24;
case 0x611d29:goto L611d29;
case 0x611d2b:goto L611d2b;
case 0x611d2e:c.instructions+=4;goto B611d2e;
case 0x611d34:c.instructions+=3;goto B611d34;
case 0x611d36:c.instructions+=2;goto B611d36;
case 0x611d39:c.instructions+=1;goto B611d39;
case 0x611d3f:goto L611d3f;
case 0x611d43:c.instructions+=4;goto B611d43;
case 0x611d47:c.instructions+=3;goto B611d47;
case 0x611d4b:c.instructions+=2;goto B611d4b;
case 0x611d4e:c.instructions+=1;goto B611d4e;
case 0x611d53:goto L611d53;
case 0x611d57:c.instructions+=5;goto B611d57;
case 0x611d5b:c.instructions+=4;goto B611d5b;
case 0x611d5f:c.instructions+=3;goto B611d5f;
case 0x611d63:c.instructions+=2;goto B611d63;
case 0x611d66:c.instructions+=1;goto B611d66;
case 0x611d6b:goto L611d6b;
case 0x611d6f:c.instructions+=5;goto B611d6f;
case 0x611d73:c.instructions+=4;goto B611d73;
case 0x611d77:c.instructions+=3;goto B611d77;
case 0x611d7b:c.instructions+=2;goto B611d7b;
case 0x611d7e:c.instructions+=1;goto B611d7e;
case 0x611d83:goto L611d83;
case 0x611d87:c.instructions+=5;goto B611d87;
case 0x611d89:c.instructions+=4;goto B611d89;
case 0x611d8d:c.instructions+=3;goto B611d8d;
case 0x611d8f:c.instructions+=2;goto B611d8f;
case 0x611d93:c.instructions+=1;goto B611d93;
case 0x611d95:goto L611d95;
case 0x611d99:c.instructions+=4;goto B611d99;
case 0x611d9d:c.instructions+=3;goto B611d9d;
case 0x611da1:c.instructions+=2;goto B611da1;
case 0x611da4:c.instructions+=1;goto B611da4;
case 0x611da9:goto L611da9;
case 0x611dac:c.instructions+=2;goto B611dac;
case 0x611dae:c.instructions+=1;goto B611dae;
case 0x611db0:goto L611db0;
case 0x611db2:c.instructions+=1;goto B611db2;
case 0x611db4:goto L611db4;
case 0x611db8:c.instructions+=4;goto B611db8;
case 0x611dbc:c.instructions+=3;goto B611dbc;
case 0x611dc0:c.instructions+=2;goto B611dc0;
case 0x611dc3:c.instructions+=1;goto B611dc3;
case 0x611dc8:goto L611dc8;
case 0x611dca:goto L611dca;
case 0x611dce:c.instructions+=8;goto B611dce;
case 0x611dd2:c.instructions+=7;goto B611dd2;
case 0x611dd5:c.instructions+=6;goto B611dd5;
case 0x611dd8:c.instructions+=5;goto B611dd8;
case 0x611ddb:c.instructions+=4;goto B611ddb;
case 0x611dde:c.instructions+=3;goto B611dde;
case 0x611de0:c.instructions+=2;goto B611de0;
case 0x611de4:c.instructions+=1;goto B611de4;
case 0x611dea:goto L611dea;
case 0x611dec:c.instructions+=1;goto B611dec;
case 0x611df2:goto L611df2;
case 0x611df6:c.instructions+=2;goto B611df6;
case 0x611dfa:c.instructions+=1;goto B611dfa;
case 0x611e00:goto L611e00;
case 0x611e04:c.instructions+=5;goto B611e04;
case 0x611e07:c.instructions+=4;goto B611e07;
case 0x611e0d:c.instructions+=3;goto B611e0d;
case 0x611e0f:c.instructions+=2;goto B611e0f;
case 0x611e12:c.instructions+=1;goto B611e12;
case 0x611e18:goto L611e18;
case 0x611e1c:c.instructions+=4;goto B611e1c;
case 0x611e20:c.instructions+=3;goto B611e20;
case 0x611e24:c.instructions+=2;goto B611e24;
case 0x611e27:c.instructions+=1;goto B611e27;
case 0x611e2c:goto L611e2c;
case 0x611e30:c.instructions+=8;goto B611e30;
case 0x611e34:c.instructions+=7;goto B611e34;
case 0x611e36:c.instructions+=6;goto B611e36;
case 0x611e3a:c.instructions+=5;goto B611e3a;
case 0x611e3e:c.instructions+=4;goto B611e3e;
case 0x611e42:c.instructions+=3;goto B611e42;
case 0x611e46:c.instructions+=2;goto B611e46;
case 0x611e49:c.instructions+=1;goto B611e49;
case 0x611e4e:goto L611e4e;
case 0x611e52:c.instructions+=5;goto B611e52;
case 0x611e56:c.instructions+=4;goto B611e56;
case 0x611e5a:c.instructions+=3;goto B611e5a;
case 0x611e5e:c.instructions+=2;goto B611e5e;
case 0x611e61:c.instructions+=1;goto B611e61;
case 0x611e66:goto L611e66;
case 0x611e6a:c.instructions+=5;goto B611e6a;
case 0x611e6c:c.instructions+=4;goto B611e6c;
case 0x611e70:c.instructions+=3;goto B611e70;
case 0x611e72:c.instructions+=2;goto B611e72;
case 0x611e76:c.instructions+=1;goto B611e76;
case 0x611e78:goto L611e78;
case 0x611e7b:c.instructions+=4;goto B611e7b;
case 0x611e7f:c.instructions+=3;goto B611e7f;
case 0x611e83:c.instructions+=2;goto B611e83;
case 0x611e86:c.instructions+=1;goto B611e86;
case 0x611e8b:goto L611e8b;
case 0x611e8e:c.instructions+=2;goto B611e8e;
case 0x611e90:c.instructions+=1;goto B611e90;
case 0x611e92:goto L611e92;
case 0x611e94:c.instructions+=1;goto B611e94;
case 0x611e96:goto L611e96;
case 0x611e99:c.instructions+=4;goto B611e99;
case 0x611e9d:c.instructions+=3;goto B611e9d;
case 0x611ea1:c.instructions+=2;goto B611ea1;
case 0x611ea4:c.instructions+=1;goto B611ea4;
case 0x611ea9:goto L611ea9;
case 0x611eab:goto L611eab;
case 0x611eaf:c.instructions+=4;goto B611eaf;
case 0x611eb0:c.instructions+=3;goto B611eb0;
case 0x611eb3:c.instructions+=2;goto B611eb3;
case 0x611eb5:c.instructions+=1;goto B611eb5;
case 0x611ebb:goto L611ebb;
case 0x611ebf:c.instructions+=4;goto B611ebf;
case 0x611ec4:c.instructions+=3;goto B611ec4;
case 0x611ec6:c.instructions+=2;goto B611ec6;
case 0x611eca:c.instructions+=1;goto B611eca;
case 0x611ecc:goto L611ecc;
case 0x611ed0:goto L611ed0;
case 0x611ed4:c.instructions+=3;goto B611ed4;
case 0x611ed6:c.instructions+=2;goto B611ed6;
case 0x611eda:c.instructions+=1;goto B611eda;
case 0x611edc:goto L611edc;
case 0x611ee0:goto L611ee0;
case 0x611ee4:c.instructions+=3;goto B611ee4;
case 0x611ee6:c.instructions+=2;goto B611ee6;
case 0x611eea:c.instructions+=1;goto B611eea;
case 0x611eec:goto L611eec;
case 0x611ef0:goto L611ef0;
case 0x611ef2:c.instructions+=2;goto B611ef2;
case 0x611ef6:c.instructions+=1;goto B611ef6;
case 0x611ef8:goto L611ef8;
case 0x611efc:goto L611efc;
case 0x611f00:c.instructions+=6;goto B611f00;
case 0x611f01:c.instructions+=5;goto B611f01;
case 0x611f02:c.instructions+=4;goto B611f02;
case 0x611f03:c.instructions+=3;goto B611f03;
case 0x611f04:c.instructions+=2;goto B611f04;
case 0x611f07:c.instructions+=1;goto B611f07;
case 0x611f10:goto L611f10;
case 0x611f13:c.instructions+=14;goto B611f13;
case 0x611f17:c.instructions+=13;goto B611f17;
case 0x611f1a:c.instructions+=12;goto B611f1a;
case 0x611f1d:c.instructions+=11;goto B611f1d;
case 0x611f1e:c.instructions+=10;goto B611f1e;
case 0x611f20:c.instructions+=9;goto B611f20;
case 0x611f22:c.instructions+=8;goto B611f22;
case 0x611f26:c.instructions+=7;goto B611f26;
case 0x611f2a:c.instructions+=6;goto B611f2a;
case 0x611f30:c.instructions+=5;goto B611f30;
case 0x611f33:c.instructions+=4;goto B611f33;
case 0x611f37:c.instructions+=3;goto B611f37;
case 0x611f3b:c.instructions+=2;goto B611f3b;
case 0x611f3f:c.instructions+=1;goto B611f3f;
case 0x611f41:goto L611f41;
case 0x611f45:c.instructions+=1;goto B611f45;
case 0x611f47:goto L611f47;
case 0x611f49:c.instructions+=3;goto B611f49;
case 0x611f4a:c.instructions+=2;goto B611f4a;
case 0x611f4d:c.instructions+=1;goto B611f4d;
case 0x611f4e:goto L611f4e;
case 0x611f4f:c.instructions+=5;goto B611f4f;
case 0x611f50:c.instructions+=4;goto B611f50;
case 0x611f51:c.instructions+=3;goto B611f51;
case 0x611f53:c.instructions+=2;goto B611f53;
case 0x611f55:c.instructions+=1;goto B611f55;
case 0x611f5a:goto L611f5a;
case 0x611f5e:c.instructions+=8;goto B611f5e;
case 0x611f62:c.instructions+=7;goto B611f62;
case 0x611f64:c.instructions+=6;goto B611f64;
case 0x611f69:c.instructions+=5;goto B611f69;
case 0x611f6b:c.instructions+=4;goto B611f6b;
case 0x611f6f:c.instructions+=3;goto B611f6f;
case 0x611f73:c.instructions+=2;goto B611f73;
case 0x611f77:c.instructions+=1;goto B611f77;
case 0x611f7d:goto L611f7d;
case 0x611f80:c.instructions+=3;goto B611f80;
case 0x611f82:c.instructions+=2;goto B611f82;
case 0x611f87:c.instructions+=1;goto B611f87;
case 0x611f8c:goto L611f8c;
case 0x611f8e:goto L611f8e;
case 0x611f92:c.instructions+=10;goto B611f92;
case 0x611f94:c.instructions+=9;goto B611f94;
case 0x611f9c:c.instructions+=8;goto B611f9c;
case 0x611fa4:c.instructions+=7;goto B611fa4;
case 0x611fac:c.instructions+=6;goto B611fac;
case 0x611fb4:c.instructions+=5;goto B611fb4;
case 0x611fbc:c.instructions+=4;goto B611fbc;
case 0x611fc4:c.instructions+=3;goto B611fc4;
case 0x611fcc:c.instructions+=2;goto B611fcc;
case 0x611fce:c.instructions+=1;goto B611fce;
case 0x611fd0:goto L611fd0;
case 0x611fd4:c.instructions+=2;goto B611fd4;
case 0x611fd6:c.instructions+=1;goto B611fd6;
case 0x611fd8:goto L611fd8;
case 0x611fdc:c.instructions+=1;goto B611fdc;
case 0x611fde:goto L611fde;
case 0x611fdf:c.instructions+=2;goto B611fdf;
case 0x611fe2:c.instructions+=1;goto B611fe2;
case 0x611fe4:goto L611fe4;
case 0x611fe6:goto L611fe6;
case 0x611fed:c.instructions+=7;goto B611fed;
case 0x611ff1:c.instructions+=6;goto B611ff1;
case 0x611ff3:c.instructions+=5;goto B611ff3;
case 0x611ff6:c.instructions+=4;goto B611ff6;
case 0x611ff9:c.instructions+=3;goto B611ff9;
case 0x611ffb:c.instructions+=2;goto B611ffb;
case 0x611ffc:c.instructions+=1;goto B611ffc;
default:missing_instruction(c.pc);}
B611000:L611000:{c.instructions+=3;NFSU2_TR(0x611000);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611003:{NFSU2_TR(0x611003);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611006:{NFSU2_TR(0x611006);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611010:L611010:{c.instructions+=3;NFSU2_TR(0x611010);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611013:{NFSU2_TR(0x611013);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B611015:{NFSU2_TR(0x611015);
if(r1(R+518)){{goto L611023;}}
}
B611017:L611017:{c.instructions+=3;NFSU2_TR(0x611017);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61101a:{NFSU2_TR(0x61101a);
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
B61101c:{NFSU2_TR(0x61101c);
if(r1(R+518)){{goto L611023;}}
}
B61101e:L61101e:{c.instructions+=2;NFSU2_TR(0x61101e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B611022:{NFSU2_TR(0x611022);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611023:L611023:{c.instructions+=2;NFSU2_TR(0x611023);
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
B611025:{NFSU2_TR(0x611025);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611030:L611030:{c.instructions+=2;NFSU2_TR(0x611030);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611033:{NFSU2_TR(0x611033);
TAIL_STATIC(0x48d7e0u,48d);
}
B611040:L611040:{c.instructions+=5;NFSU2_TR(0x611040);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611042:{NFSU2_TR(0x611042);
u8 U[4];
w4(U+0,u32(0x7a847cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611047:{NFSU2_TR(0x611047);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61104c:{NFSU2_TR(0x61104c);
u8 U[4];
w4(U+0,u32(0x70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61104e:{NFSU2_TR(0x61104e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611053ull));
TAIL_STATIC(0x440df0u,440);
}
B611053:L611053:{c.instructions+=3;NFSU2_TR(0x611053);
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
B611056:{NFSU2_TR(0x611056);
__builtin_memmove(gp(0x8a1d08),(R+0),4);
}
B61105b:{NFSU2_TR(0x61105b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611060:L611060:{c.instructions+=4;NFSU2_TR(0x611060);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611061:{NFSU2_TR(0x611061);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B611065:{NFSU2_TR(0x611065);
__builtin_memmove((R+4),(R+24),4);
}
B611067:{NFSU2_TR(0x611067);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61106cull));
TAIL_STATIC(0x48b150u,48b);
}
B61106c:L61106c:{c.instructions+=2;NFSU2_TR(0x61106c);
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
B61106e:{NFSU2_TR(0x61106e);
if(r1(R+518)){{goto L6110a7;}}
}
B611070:L611070:{c.instructions+=2;NFSU2_TR(0x611070);
__builtin_memmove((R+4),(R+24),4);
}
B611072:{NFSU2_TR(0x611072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611077ull));
TAIL_STATIC(0x48b190u,48b);
}
B611077:L611077:{c.instructions+=2;NFSU2_TR(0x611077);
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
B611079:{NFSU2_TR(0x611079);
if(r1(R+518)){{goto L6110a7;}}
}
B61107b:L61107b:{c.instructions+=3;NFSU2_TR(0x61107b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611081:{NFSU2_TR(0x611081);
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
B611083:{NFSU2_TR(0x611083);
if(r1(R+518)){{goto L6110a7;}}
}
B611085:L611085:{c.instructions+=3;NFSU2_TR(0x611085);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611086:{NFSU2_TR(0x611086);
w4(R+4,u32(0x827b88ull));
}
B61108b:{NFSU2_TR(0x61108b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611090ull));
TAIL_STATIC(0x432490u,432);
}
B611090:L611090:{c.instructions+=2;NFSU2_TR(0x611090);
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
B611092:{NFSU2_TR(0x611092);
if(r1(R+518)){{goto L6110a7;}}
}
B611094:L611094:{c.instructions+=6;NFSU2_TR(0x611094);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611098:{NFSU2_TR(0x611098);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x800ull))));
}
B61109e:{NFSU2_TR(0x61109e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61109f:{NFSU2_TR(0x61109f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6110a0:{NFSU2_TR(0x6110a0);
__builtin_memmove((R+4),(R+0),4);
}
B6110a2:{NFSU2_TR(0x6110a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6110a7ull));
TAIL_STATIC(0x432640u,432);
}
B6110a7:L6110a7:{c.instructions+=2;NFSU2_TR(0x6110a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6110a8:{NFSU2_TR(0x6110a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6110b0:L6110b0:{c.instructions+=13;NFSU2_TR(0x6110b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6110b4:{NFSU2_TR(0x6110b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6110b8:{NFSU2_TR(0x6110b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6110bc:{NFSU2_TR(0x6110bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6110bd:{NFSU2_TR(0x6110bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6110c1:{NFSU2_TR(0x6110c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6110c2:{NFSU2_TR(0x6110c2);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6110c4:{NFSU2_TR(0x6110c4);
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
B6110c6:{NFSU2_TR(0x6110c6);
__builtin_memmove(gp(0x803958),(R+12),4);
}
B6110cc:{NFSU2_TR(0x6110cc);
__builtin_memmove(gp(0x8a1bc8),(R+0),4);
}
B6110d1:{NFSU2_TR(0x6110d1);
__builtin_memmove(gp(0x8a05e4),(R+4),4);
}
B6110d7:{NFSU2_TR(0x6110d7);
__builtin_memmove(gp(0x8a05d0),(R+8),4);
}
B6110dd:{NFSU2_TR(0x6110dd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61112e;}}
}
B6110df:L6110df:{c.instructions+=7;NFSU2_TR(0x6110df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6110e6:{NFSU2_TR(0x6110e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6110e7:{NFSU2_TR(0x6110e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6110e8:{NFSU2_TR(0x6110e8);
__builtin_memmove((R+4),(R+8),4);
}
B6110ea:{NFSU2_TR(0x6110ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6110ed:{NFSU2_TR(0x6110ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6110ef:{NFSU2_TR(0x6110ef);
w4(R+28,u32(0x89ff00ull));
}
B6110f4:L6110f4:{c.instructions+=1;NFSU2_TR(0x6110f4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6110f6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6110f4u);}goto L6110f4;}
}
B6110f6:L6110f6:{c.instructions+=7;NFSU2_TR(0x6110f6);
__builtin_memmove((R+4),(R+8),4);
}
B6110f8:{NFSU2_TR(0x6110f8);
w4(R+0,u32(0x10000ull));
}
B6110fd:{NFSU2_TR(0x6110fd);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6110fe:{NFSU2_TR(0x6110fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B611101:{NFSU2_TR(0x611101);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x611101);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x611101);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B611103:{NFSU2_TR(0x611103);
w4(R+28,u32(0x89fb00ull));
}
B611108:{NFSU2_TR(0x611108);
w4(R+24,u32(0x8a07d0ull));
}
B61110d:L61110d:{c.instructions+=1;NFSU2_TR(0x61110d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L61110f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61110du);}goto L61110d;}
}
B61110f:L61110f:{c.instructions+=1;NFSU2_TR(0x61110f);
}
B611110:L611110:{c.instructions+=12;NFSU2_TR(0x611110);
__builtin_memmove((R+0),(R+20),4);
}
B611112:{NFSU2_TR(0x611112);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B611115:{NFSU2_TR(0x611115);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B611116:{NFSU2_TR(0x611116);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x611116);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x611116);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B611118:{NFSU2_TR(0x611118);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B611119:{NFSU2_TR(0x611119);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B61111c:{NFSU2_TR(0x61111c);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61111e:{NFSU2_TR(0x61111e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611121:{NFSU2_TR(0x611121);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611124:{NFSU2_TR(0x611124);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611127:{NFSU2_TR(0x611127);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61112a:{NFSU2_TR(0x61112a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611110u);}goto L611110;}}
}
B61112c:L61112c:{c.instructions+=2;NFSU2_TR(0x61112c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61112d:{NFSU2_TR(0x61112d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61112e:L61112e:{c.instructions+=3;NFSU2_TR(0x61112e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61112f:{NFSU2_TR(0x61112f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B611130:{NFSU2_TR(0x611130);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611140:L611140:{c.instructions+=9;NFSU2_TR(0x611140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B611143:{NFSU2_TR(0x611143);
__builtin_memmove((R+8),gp(0x803958),4);
}
B611149:{NFSU2_TR(0x611149);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61114a:{NFSU2_TR(0x61114a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61114c:{NFSU2_TR(0x61114c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61114e:{NFSU2_TR(0x61114e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B611150:{NFSU2_TR(0x611150);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611154:{NFSU2_TR(0x611154);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611158:{NFSU2_TR(0x611158);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61123c;}}
}
B61115e:L61115e:{c.instructions+=5;NFSU2_TR(0x61115e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61115f:{NFSU2_TR(0x61115f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611160:{NFSU2_TR(0x611160);
w4(R+8,u32(0x8a07e0ull));
}
B611165:{NFSU2_TR(0x611165);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611166:{NFSU2_TR(0x611166);
{goto L611170;}
}
B611170:L611170:{c.instructions+=7;NFSU2_TR(0x611170);
__builtin_memmove((R+20),gp(0x803958),4);
}
B611176:{NFSU2_TR(0x611176);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B611179:{NFSU2_TR(0x611179);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61117c:{NFSU2_TR(0x61117c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61117e:{NFSU2_TR(0x61117e);
__builtin_memmove((R+12),(R+0),4);
}
B611180:{NFSU2_TR(0x611180);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611184:{NFSU2_TR(0x611184);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6111a5;}}
}
B611186:L611186:{c.instructions+=1;NFSU2_TR(0x611186);
__builtin_memmove((R+20),(R+8),4);
}
B611188:L611188:{c.instructions+=3;NFSU2_TR(0x611188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+28),(U+0),4);
}
B61118b:{NFSU2_TR(0x61118b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61118d:{NFSU2_TR(0x61118d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L611193;}}
}
B61118f:L61118f:{c.instructions+=2;NFSU2_TR(0x61118f);
__builtin_memmove((R+12),(R+4),4);
}
B611191:{NFSU2_TR(0x611191);
__builtin_memmove((R+24),(R+28),4);
}
B611193:L611193:{c.instructions+=5;NFSU2_TR(0x611193);
__builtin_memmove((R+28),gp(0x803958),4);
}
B611199:{NFSU2_TR(0x611199);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B61119a:{NFSU2_TR(0x61119a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x14ull))));
}
B61119d:{NFSU2_TR(0x61119d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61119f:{NFSU2_TR(0x61119f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611188u);}goto L611188;}}
}
B6111a1:L6111a1:{c.instructions+=1;NFSU2_TR(0x6111a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6111a5:L6111a5:{c.instructions+=4;NFSU2_TR(0x6111a5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6111a7:{NFSU2_TR(0x6111a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6111aa:{NFSU2_TR(0x6111aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a07c8ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6111b1:{NFSU2_TR(0x6111b1);
if(r1(R+518)){{goto L6111f1;}}
}
B6111b3:L6111b3:{c.instructions+=21;NFSU2_TR(0x6111b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6111b6:{NFSU2_TR(0x6111b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6111b8:{NFSU2_TR(0x6111b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6111ba:{NFSU2_TR(0x6111ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6111bd:{NFSU2_TR(0x6111bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6111c0:{NFSU2_TR(0x6111c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6111c3:{NFSU2_TR(0x6111c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6111c6:{NFSU2_TR(0x6111c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6111c9:{NFSU2_TR(0x6111c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6111cc:{NFSU2_TR(0x6111cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6111cf:{NFSU2_TR(0x6111cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6111d2:{NFSU2_TR(0x6111d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6111d5:{NFSU2_TR(0x6111d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6111d8:{NFSU2_TR(0x6111d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6111db:{NFSU2_TR(0x6111db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6111de:{NFSU2_TR(0x6111de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6111e1:{NFSU2_TR(0x6111e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6111e4:{NFSU2_TR(0x6111e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6111e7:{NFSU2_TR(0x6111e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6111ea:{NFSU2_TR(0x6111ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6111ed:{NFSU2_TR(0x6111ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6111f1:L6111f1:{c.instructions+=2;NFSU2_TR(0x6111f1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6111f3:{NFSU2_TR(0x6111f3);
if(r1(R+518)){{goto L611222;}}
}
B6111f5:L6111f5:{c.instructions+=7;NFSU2_TR(0x6111f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6111f9:{NFSU2_TR(0x6111f9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6111fb:{NFSU2_TR(0x6111fb);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B6111fd:{NFSU2_TR(0x6111fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B611200:{NFSU2_TR(0x611200);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B611202:{NFSU2_TR(0x611202);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ebc0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B611209:{NFSU2_TR(0x611209);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L611218;}}
}
B61120b:L61120b:{c.instructions+=3;NFSU2_TR(0x61120b);
__builtin_memmove((R+4),(R+24),4);
}
B61120d:{NFSU2_TR(0x61120d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ebc0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B611214:{NFSU2_TR(0x611214);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B611216:L611216:{c.instructions+=1;NFSU2_TR(0x611216);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L611218;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611216u);}goto L611216;}
}
B611218:L611218:{c.instructions+=3;NFSU2_TR(0x611218);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61121c:{NFSU2_TR(0x61121c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611220:{NFSU2_TR(0x611220);
__builtin_memmove((R+28),(R+24),4);
}
B611222:L611222:{c.instructions+=5;NFSU2_TR(0x611222);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611226:{NFSU2_TR(0x611226);
__builtin_memmove((R+4),gp(0x803958),4);
}
B61122c:{NFSU2_TR(0x61122c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B61122f:{NFSU2_TR(0x61122f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B611231:{NFSU2_TR(0x611231);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611170u);}goto L611170;}}
}
B611237:L611237:{c.instructions+=4;NFSU2_TR(0x611237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B611238:{NFSU2_TR(0x611238);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B611239:{NFSU2_TR(0x611239);
__builtin_memmove((R+8),(R+4),4);
}
B61123b:{NFSU2_TR(0x61123b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61123c:L61123c:{c.instructions+=7;NFSU2_TR(0x61123c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611240:{NFSU2_TR(0x611240);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B611244:{NFSU2_TR(0x611244);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B611246:{NFSU2_TR(0x611246);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B611249:{NFSU2_TR(0x611249);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B61124e:{NFSU2_TR(0x61124e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ebc0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B611255:{NFSU2_TR(0x611255);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61126a;}}
}
B611257:L611257:{c.instructions+=4;NFSU2_TR(0x611257);
w4(R+4,u32(0x100ull));
}
B61125c:{NFSU2_TR(0x61125c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ebc0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B611263:{NFSU2_TR(0x611263);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B611265:{NFSU2_TR(0x611265);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B611268:L611268:{c.instructions+=1;NFSU2_TR(0x611268);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L61126a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611268u);}goto L611268;}
}
B61126a:L61126a:{c.instructions+=3;NFSU2_TR(0x61126a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61126b:{NFSU2_TR(0x61126b);
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
B61126e:{NFSU2_TR(0x61126e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611270:L611270:{c.instructions+=10;NFSU2_TR(0x611270);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611271:{NFSU2_TR(0x611271);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611275:{NFSU2_TR(0x611275);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611276:{NFSU2_TR(0x611276);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ebc0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B61127d:{NFSU2_TR(0x61127d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61127e:{NFSU2_TR(0x61127e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61127f:{NFSU2_TR(0x61127f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611280:{NFSU2_TR(0x611280);
w4(R+8,u32(0x3e8ull));
}
B611285:{NFSU2_TR(0x611285);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B61128d:{NFSU2_TR(0x61128d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+20),(U+0),4);
}
B611290:L611290:{c.instructions+=3;NFSU2_TR(0x611290);
__builtin_memmove((R+0),gp(0x803958),4);
}
B611295:{NFSU2_TR(0x611295);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B611297:{NFSU2_TR(0x611297);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6112a7;}}
}
B611299:L611299:{c.instructions+=2;NFSU2_TR(0x611299);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61129b:{NFSU2_TR(0x61129b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L611308;}}
}
B61129d:L61129d:{c.instructions+=7;NFSU2_TR(0x61129d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6112a1:{NFSU2_TR(0x6112a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6112a2:{NFSU2_TR(0x6112a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6112a3:{NFSU2_TR(0x6112a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6112a4:{NFSU2_TR(0x6112a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6112a5:{NFSU2_TR(0x6112a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6112a6:{NFSU2_TR(0x6112a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6112a7:L6112a7:{c.instructions+=7;NFSU2_TR(0x6112a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6112ab:{NFSU2_TR(0x6112ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6112ae:{NFSU2_TR(0x6112ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a07ccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6112b5:{NFSU2_TR(0x6112b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a07c8ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6112bc:{NFSU2_TR(0x6112bc);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B6112be:{NFSU2_TR(0x6112be);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6112c0:{NFSU2_TR(0x6112c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6112c6;}}
}
B6112c2:L6112c2:{c.instructions+=2;NFSU2_TR(0x6112c2);
__builtin_memmove((R+12),(R+0),4);
}
B6112c4:{NFSU2_TR(0x6112c4);
{goto L611308;}
}
B6112c6:L6112c6:{c.instructions+=3;NFSU2_TR(0x6112c6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6112c7:{NFSU2_TR(0x6112c7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6112c9:{NFSU2_TR(0x6112c9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6112cd;}}
}
B6112cb:L6112cb:{c.instructions+=1;NFSU2_TR(0x6112cb);
w4(R+4,u32(0-u32(r4(R+4))));
}
B6112cd:L6112cd:{c.instructions+=3;NFSU2_TR(0x6112cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6112cf:{NFSU2_TR(0x6112cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B6112d3:{NFSU2_TR(0x6112d3);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6112d7;}}
}
B6112d5:L6112d5:{c.instructions+=1;NFSU2_TR(0x6112d5);
w4(R+28,u32(0-u32(r4(R+28))));
}
B6112d7:L6112d7:{c.instructions+=3;NFSU2_TR(0x6112d7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6112d9:{NFSU2_TR(0x6112d9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6112db:{NFSU2_TR(0x6112db);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L611308;}}
}
B6112dd:L6112dd:{c.instructions+=3;NFSU2_TR(0x6112dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6112e0:{NFSU2_TR(0x6112e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B6112e4:{NFSU2_TR(0x6112e4);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6112e8;}}
}
B6112e6:L6112e6:{c.instructions+=1;NFSU2_TR(0x6112e6);
w4(R+28,u32(0-u32(r4(R+28))));
}
B6112e8:L6112e8:{c.instructions+=3;NFSU2_TR(0x6112e8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6112ea:{NFSU2_TR(0x6112ea);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6112ec:{NFSU2_TR(0x6112ec);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L611308;}}
}
B6112ee:L6112ee:{c.instructions+=3;NFSU2_TR(0x6112ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6112f1:{NFSU2_TR(0x6112f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B6112f5:{NFSU2_TR(0x6112f5);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6112f9;}}
}
B6112f7:L6112f7:{c.instructions+=1;NFSU2_TR(0x6112f7);
w4(R+28,u32(0-u32(r4(R+28))));
}
B6112f9:L6112f9:{c.instructions+=3;NFSU2_TR(0x6112f9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6112fb:{NFSU2_TR(0x6112fb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6112fd:{NFSU2_TR(0x6112fd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L611308;}}
}
B6112ff:L6112ff:{c.instructions+=3;NFSU2_TR(0x6112ff);
__builtin_memmove((R+8),(R+4),4);
}
B611301:{NFSU2_TR(0x611301);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611304:{NFSU2_TR(0x611304);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611308:L611308:{c.instructions+=7;NFSU2_TR(0x611308);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61130c:{NFSU2_TR(0x61130c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B611310:{NFSU2_TR(0x611310);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a07ccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B611317:{NFSU2_TR(0x611317);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a07c8ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B61131e:{NFSU2_TR(0x61131e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B611320:{NFSU2_TR(0x611320);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B611322:{NFSU2_TR(0x611322);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L61132c;}}
}
B611324:L611324:{c.instructions+=2;NFSU2_TR(0x611324);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B611327:{NFSU2_TR(0x611327);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611290u);}goto L611290;}
}
B61132c:L61132c:{c.instructions+=3;NFSU2_TR(0x61132c);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B61132d:{NFSU2_TR(0x61132d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B61132f:{NFSU2_TR(0x61132f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L611333;}}
}
B611331:L611331:{c.instructions+=1;NFSU2_TR(0x611331);
w4(R+4,u32(0-u32(r4(R+4))));
}
B611333:L611333:{c.instructions+=3;NFSU2_TR(0x611333);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B611335:{NFSU2_TR(0x611335);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B611339:{NFSU2_TR(0x611339);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L61133d;}}
}
B61133b:L61133b:{c.instructions+=1;NFSU2_TR(0x61133b);
w4(R+28,u32(0-u32(r4(R+28))));
}
B61133d:L61133d:{c.instructions+=3;NFSU2_TR(0x61133d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B61133f:{NFSU2_TR(0x61133f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B611341:{NFSU2_TR(0x611341);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611290u);}goto L611290;}}
}
B611347:L611347:{c.instructions+=3;NFSU2_TR(0x611347);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61134a:{NFSU2_TR(0x61134a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B61134e:{NFSU2_TR(0x61134e);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L611352;}}
}
B611350:L611350:{c.instructions+=1;NFSU2_TR(0x611350);
w4(R+28,u32(0-u32(r4(R+28))));
}
B611352:L611352:{c.instructions+=3;NFSU2_TR(0x611352);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B611354:{NFSU2_TR(0x611354);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B611356:{NFSU2_TR(0x611356);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611290u);}goto L611290;}}
}
B61135c:L61135c:{c.instructions+=3;NFSU2_TR(0x61135c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61135f:{NFSU2_TR(0x61135f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B611363:{NFSU2_TR(0x611363);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L611367;}}
}
B611365:L611365:{c.instructions+=1;NFSU2_TR(0x611365);
w4(R+28,u32(0-u32(r4(R+28))));
}
B611367:L611367:{c.instructions+=3;NFSU2_TR(0x611367);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B611369:{NFSU2_TR(0x611369);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61136b:{NFSU2_TR(0x61136b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611290u);}goto L611290;}}
}
B611371:L611371:{c.instructions+=4;NFSU2_TR(0x611371);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611374:{NFSU2_TR(0x611374);
__builtin_memmove((R+8),(R+4),4);
}
B611376:{NFSU2_TR(0x611376);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61137a:{NFSU2_TR(0x61137a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611290u);}goto L611290;}
}
B611380:L611380:{c.instructions+=11;NFSU2_TR(0x611380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B611383:{NFSU2_TR(0x611383);
__builtin_memmove((R+8),gp(0x803958),4);
}
B611389:{NFSU2_TR(0x611389);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B61138c:{NFSU2_TR(0x61138c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61138d:{NFSU2_TR(0x61138d);
w4(R+0,u32(0x7fffffffull));
}
B611392:{NFSU2_TR(0x611392);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B611394:{NFSU2_TR(0x611394);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B611396:{NFSU2_TR(0x611396);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61139a:{NFSU2_TR(0x61139a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61139e:{NFSU2_TR(0x61139e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6113a2:{NFSU2_TR(0x6113a2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L611447;}}
}
B6113a8:L6113a8:{c.instructions+=5;NFSU2_TR(0x6113a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6113a9:{NFSU2_TR(0x6113a9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6113aa:{NFSU2_TR(0x6113aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6113ab:{NFSU2_TR(0x6113ab);
w4(R+20,u32(0x8a07d0ull));
}
B6113b0:{NFSU2_TR(0x6113b0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6113b2:L6113b2:{c.instructions+=3;NFSU2_TR(0x6113b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6113b5:{NFSU2_TR(0x6113b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6113b9:{NFSU2_TR(0x6113b9);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6113bd;}}
}
B6113bb:L6113bb:{c.instructions+=1;NFSU2_TR(0x6113bb);
w4(R+4,u32(0-u32(r4(R+4))));
}
B6113bd:L6113bd:{c.instructions+=3;NFSU2_TR(0x6113bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6113c0:{NFSU2_TR(0x6113c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B6113c4:{NFSU2_TR(0x6113c4);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6113c8;}}
}
B6113c6:L6113c6:{c.instructions+=1;NFSU2_TR(0x6113c6);
w4(R+8,u32(0-u32(r4(R+8))));
}
B6113c8:L6113c8:{c.instructions+=5;NFSU2_TR(0x6113c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6113cc:{NFSU2_TR(0x6113cc);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6113ce:{NFSU2_TR(0x6113ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6113d1:{NFSU2_TR(0x6113d1);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B6113d3:{NFSU2_TR(0x6113d3);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6113d7;}}
}
B6113d5:L6113d5:{c.instructions+=1;NFSU2_TR(0x6113d5);
w4(R+8,u32(0-u32(r4(R+8))));
}
B6113d7:L6113d7:{c.instructions+=5;NFSU2_TR(0x6113d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6113db:{NFSU2_TR(0x6113db);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6113dd:{NFSU2_TR(0x6113dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6113e0:{NFSU2_TR(0x6113e0);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B6113e2:{NFSU2_TR(0x6113e2);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6113e6;}}
}
B6113e4:L6113e4:{c.instructions+=1;NFSU2_TR(0x6113e4);
w4(R+8,u32(0-u32(r4(R+8))));
}
B6113e6:L6113e6:{c.instructions+=3;NFSU2_TR(0x6113e6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6113e8:{NFSU2_TR(0x6113e8);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6113ec:{NFSU2_TR(0x6113ec);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6113f6;}}
}
B6113ee:L6113ee:{c.instructions+=2;NFSU2_TR(0x6113ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6113f2:{NFSU2_TR(0x6113f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6113f6:L6113f6:{c.instructions+=6;NFSU2_TR(0x6113f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x89ff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6113fc:{NFSU2_TR(0x6113fc);
__builtin_memmove((R+8),(R+12),4);
}
B6113fe:{NFSU2_TR(0x6113fe);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B611401:{NFSU2_TR(0x611401);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B611403:{NFSU2_TR(0x611403);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B611405:{NFSU2_TR(0x611405);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61140d;}}
}
B611407:L611407:{c.instructions+=2;NFSU2_TR(0x611407);
__builtin_memmove((R+0),(R+4),4);
}
B611409:{NFSU2_TR(0x611409);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61140d:L61140d:{c.instructions+=14;NFSU2_TR(0x61140d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x89fb00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B611413:{NFSU2_TR(0x611413);
__builtin_memmove((R+4),(R+8),4);
}
B611415:{NFSU2_TR(0x611415);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B611418:{NFSU2_TR(0x611418);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B61141a:{NFSU2_TR(0x61141a);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B61141d:{NFSU2_TR(0x61141d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B61141f:{NFSU2_TR(0x61141f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x89ff00ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611425:{NFSU2_TR(0x611425);
__builtin_memmove((R+4),gp(0x803958),4);
}
B61142b:{NFSU2_TR(0x61142b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x89fb00ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611431:{NFSU2_TR(0x611431);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B611434:{NFSU2_TR(0x611434);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B611435:{NFSU2_TR(0x611435);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x14ull))));
}
B611438:{NFSU2_TR(0x611438);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61143a:{NFSU2_TR(0x61143a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6113b2u);}goto L6113b2;}}
}
B611440:L611440:{c.instructions+=4;NFSU2_TR(0x611440);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611444:{NFSU2_TR(0x611444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B611445:{NFSU2_TR(0x611445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B611446:{NFSU2_TR(0x611446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B611447:L611447:{c.instructions+=11;NFSU2_TR(0x611447);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89fb00ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B61144e:{NFSU2_TR(0x61144e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ff00ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B611455:{NFSU2_TR(0x611455);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B611458:{NFSU2_TR(0x611458);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89fb00ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B61145f:{NFSU2_TR(0x61145f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ff00ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B611466:{NFSU2_TR(0x611466);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffff0000ull))));
}
B61146b:{NFSU2_TR(0x61146b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B61146d:{NFSU2_TR(0x61146d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611471:{NFSU2_TR(0x611471);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B611472:{NFSU2_TR(0x611472);
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
B611475:{NFSU2_TR(0x611475);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611480:L611480:{c.instructions+=51;NFSU2_TR(0x611480);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B611483:{NFSU2_TR(0x611483);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611484:{NFSU2_TR(0x611484);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a07c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B61148b:{NFSU2_TR(0x61148b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a07c8ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B611492:{NFSU2_TR(0x611492);
__builtin_memmove((R+0),(R+24),4);
}
B611494:{NFSU2_TR(0x611494);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B611496:{NFSU2_TR(0x611496);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B611499:{NFSU2_TR(0x611499);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B61149a:{NFSU2_TR(0x61149a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ffull))));
}
B6114a0:{NFSU2_TR(0x6114a0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6114a2:{NFSU2_TR(0x6114a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6114a6:{NFSU2_TR(0x6114a6);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6114a9:{NFSU2_TR(0x6114a9);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B6114ab:{NFSU2_TR(0x6114ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6114ad:{NFSU2_TR(0x6114ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6114b0:{NFSU2_TR(0x6114b0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6114b3:{NFSU2_TR(0x6114b3);
__builtin_memmove((R+0),(R+24),4);
}
B6114b5:{NFSU2_TR(0x6114b5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6114b7:{NFSU2_TR(0x6114b7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6114ba:{NFSU2_TR(0x6114ba);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6114bb:{NFSU2_TR(0x6114bb);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ffull))));
}
B6114c1:{NFSU2_TR(0x6114c1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6114c3:{NFSU2_TR(0x6114c3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6114c7:{NFSU2_TR(0x6114c7);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6114ca:{NFSU2_TR(0x6114ca);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B6114cc:{NFSU2_TR(0x6114cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6114ce:{NFSU2_TR(0x6114ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6114d1:{NFSU2_TR(0x6114d1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6114d4:{NFSU2_TR(0x6114d4);
__builtin_memmove((R+0),(R+24),4);
}
B6114d6:{NFSU2_TR(0x6114d6);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6114d8:{NFSU2_TR(0x6114d8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6114db:{NFSU2_TR(0x6114db);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6114dc:{NFSU2_TR(0x6114dc);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ffull))));
}
B6114e2:{NFSU2_TR(0x6114e2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6114e4:{NFSU2_TR(0x6114e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6114e8:{NFSU2_TR(0x6114e8);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6114eb:{NFSU2_TR(0x6114eb);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B6114ed:{NFSU2_TR(0x6114ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6114ef:{NFSU2_TR(0x6114ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6114f2:{NFSU2_TR(0x6114f2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6114f5:{NFSU2_TR(0x6114f5);
__builtin_memmove((R+0),(R+24),4);
}
B6114f7:{NFSU2_TR(0x6114f7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6114f9:{NFSU2_TR(0x6114f9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6114fc:{NFSU2_TR(0x6114fc);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6114fd:{NFSU2_TR(0x6114fd);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ffull))));
}
B611503:{NFSU2_TR(0x611503);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B611505:{NFSU2_TR(0x611505);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B611508:{NFSU2_TR(0x611508);
u8 U[6];
w1(R+512,u8((r4(R+24))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+24),r4(R+0)));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61150a:{NFSU2_TR(0x61150a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B61150c:{NFSU2_TR(0x61150c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61150d:{NFSU2_TR(0x61150d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611510:L611510:{c.instructions+=6;NFSU2_TR(0x611510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B611513:{NFSU2_TR(0x611513);
__builtin_memmove((R+8),(R+0),4);
}
B611515:{NFSU2_TR(0x611515);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B611517:{NFSU2_TR(0x611517);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61151a:{NFSU2_TR(0x61151a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B61151e:{NFSU2_TR(0x61151e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61152c;}}
}
B611520:L611520:{c.instructions+=2;NFSU2_TR(0x611520);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+16)),r4(U+0));
}
B611528:{NFSU2_TR(0x611528);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61152c:L61152c:{c.instructions+=9;NFSU2_TR(0x61152c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61152d:{NFSU2_TR(0x61152d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61152e:{NFSU2_TR(0x61152e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61152f:{NFSU2_TR(0x61152f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B611532:{NFSU2_TR(0x611532);
__builtin_memmove((R+4),gp(0x803958),4);
}
B611538:{NFSU2_TR(0x611538);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61153a:{NFSU2_TR(0x61153a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61153b:{NFSU2_TR(0x61153b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61153f:{NFSU2_TR(0x61153f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L611545;}}
}
B611541:L611541:{c.instructions+=1;NFSU2_TR(0x611541);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611545:L611545:{c.instructions+=9;NFSU2_TR(0x611545);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B611548:{NFSU2_TR(0x611548);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B611549:{NFSU2_TR(0x611549);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B61154c:{NFSU2_TR(0x61154c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B611550:{NFSU2_TR(0x611550);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611554:{NFSU2_TR(0x611554);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x89efc8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61155c:{NFSU2_TR(0x61155c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a07d0ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B611563:{NFSU2_TR(0x611563);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a07d0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B61156a:{NFSU2_TR(0x61156a);
__builtin_memmove((R+12),(R+12),4);
}
B611570:L611570:{c.instructions+=3;NFSU2_TR(0x611570);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B611574:{NFSU2_TR(0x611574);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B611576:{NFSU2_TR(0x611576);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L611580;}}
}
B611578:L611578:{c.instructions+=2;NFSU2_TR(0x611578);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61157a:{NFSU2_TR(0x61157a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6116b4;}}
}
B611580:L611580:{c.instructions+=6;NFSU2_TR(0x611580);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611584:{NFSU2_TR(0x611584);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B611587:{NFSU2_TR(0x611587);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B611589:{NFSU2_TR(0x611589);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61158d:{NFSU2_TR(0x61158d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B61158f:{NFSU2_TR(0x61158f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61161b;}}
}
B611595:L611595:{c.instructions+=48;NFSU2_TR(0x611595);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B611598:{NFSU2_TR(0x611598);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61159c:{NFSU2_TR(0x61159c);
__builtin_memmove((R+0),(R+12),4);
}
B61159e:{NFSU2_TR(0x61159e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6115a0:{NFSU2_TR(0x6115a0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6115a3:{NFSU2_TR(0x6115a3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6115a4:{NFSU2_TR(0x6115a4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ffffull))));
}
B6115aa:{NFSU2_TR(0x6115aa);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6115ac:{NFSU2_TR(0x6115ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6115b0:{NFSU2_TR(0x6115b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6115b3:{NFSU2_TR(0x6115b3);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B6115b5:{NFSU2_TR(0x6115b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6115b8:{NFSU2_TR(0x6115b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6115bb:{NFSU2_TR(0x6115bb);
__builtin_memmove((R+0),(R+12),4);
}
B6115bd:{NFSU2_TR(0x6115bd);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6115bf:{NFSU2_TR(0x6115bf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6115c2:{NFSU2_TR(0x6115c2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6115c3:{NFSU2_TR(0x6115c3);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ffffull))));
}
B6115c9:{NFSU2_TR(0x6115c9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6115cb:{NFSU2_TR(0x6115cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6115cf:{NFSU2_TR(0x6115cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6115d2:{NFSU2_TR(0x6115d2);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B6115d4:{NFSU2_TR(0x6115d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6115d7:{NFSU2_TR(0x6115d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6115d9:{NFSU2_TR(0x6115d9);
__builtin_memmove((R+0),(R+12),4);
}
B6115db:{NFSU2_TR(0x6115db);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6115dd:{NFSU2_TR(0x6115dd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6115e0:{NFSU2_TR(0x6115e0);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6115e1:{NFSU2_TR(0x6115e1);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ffffull))));
}
B6115e7:{NFSU2_TR(0x6115e7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6115e9:{NFSU2_TR(0x6115e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6115ed:{NFSU2_TR(0x6115ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6115f0:{NFSU2_TR(0x6115f0);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B6115f2:{NFSU2_TR(0x6115f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6115f4:{NFSU2_TR(0x6115f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6115f7:{NFSU2_TR(0x6115f7);
__builtin_memmove((R+0),(R+12),4);
}
B6115f9:{NFSU2_TR(0x6115f9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6115fb:{NFSU2_TR(0x6115fb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6115fe:{NFSU2_TR(0x6115fe);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6115ff:{NFSU2_TR(0x6115ff);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ffffull))));
}
B611605:{NFSU2_TR(0x611605);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B611607:{NFSU2_TR(0x611607);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61160b:{NFSU2_TR(0x61160b);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B61160e:{NFSU2_TR(0x61160e);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B611610:{NFSU2_TR(0x611610);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611614:{NFSU2_TR(0x611614);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611617:{NFSU2_TR(0x611617);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B611618:{NFSU2_TR(0x611618);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B61161b:L61161b:{c.instructions+=2;NFSU2_TR(0x61161b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61161d:{NFSU2_TR(0x61161d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611570u);}goto L611570;}}
}
B611623:L611623:{c.instructions+=51;NFSU2_TR(0x611623);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B611626:{NFSU2_TR(0x611626);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61162a:{NFSU2_TR(0x61162a);
__builtin_memmove((R+0),(R+12),4);
}
B61162c:{NFSU2_TR(0x61162c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B61162e:{NFSU2_TR(0x61162e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B611631:{NFSU2_TR(0x611631);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B611632:{NFSU2_TR(0x611632);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ffffull))));
}
B611638:{NFSU2_TR(0x611638);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B61163a:{NFSU2_TR(0x61163a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61163e:{NFSU2_TR(0x61163e);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B611641:{NFSU2_TR(0x611641);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B611643:{NFSU2_TR(0x611643);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611646:{NFSU2_TR(0x611646);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B611649:{NFSU2_TR(0x611649);
__builtin_memmove((R+0),(R+12),4);
}
B61164b:{NFSU2_TR(0x61164b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B61164d:{NFSU2_TR(0x61164d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B611650:{NFSU2_TR(0x611650);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B611651:{NFSU2_TR(0x611651);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ffffull))));
}
B611657:{NFSU2_TR(0x611657);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B611659:{NFSU2_TR(0x611659);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61165d:{NFSU2_TR(0x61165d);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B611660:{NFSU2_TR(0x611660);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B611662:{NFSU2_TR(0x611662);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611665:{NFSU2_TR(0x611665);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B611667:{NFSU2_TR(0x611667);
__builtin_memmove((R+0),(R+12),4);
}
B611669:{NFSU2_TR(0x611669);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B61166b:{NFSU2_TR(0x61166b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B61166e:{NFSU2_TR(0x61166e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B61166f:{NFSU2_TR(0x61166f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ffffull))));
}
B611675:{NFSU2_TR(0x611675);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B611677:{NFSU2_TR(0x611677);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61167b:{NFSU2_TR(0x61167b);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B61167e:{NFSU2_TR(0x61167e);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B611680:{NFSU2_TR(0x611680);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B611682:{NFSU2_TR(0x611682);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B611685:{NFSU2_TR(0x611685);
__builtin_memmove((R+0),(R+12),4);
}
B611687:{NFSU2_TR(0x611687);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B611689:{NFSU2_TR(0x611689);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B61168c:{NFSU2_TR(0x61168c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611690:{NFSU2_TR(0x611690);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B611691:{NFSU2_TR(0x611691);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ffffull))));
}
B611697:{NFSU2_TR(0x611697);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B611699:{NFSU2_TR(0x611699);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61169d:{NFSU2_TR(0x61169d);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6116a0:{NFSU2_TR(0x6116a0);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B6116a2:{NFSU2_TR(0x6116a2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6116a3:{NFSU2_TR(0x6116a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6116a6:{NFSU2_TR(0x6116a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6116aa:{NFSU2_TR(0x6116aa);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x14ull))));
}
B6116ad:{NFSU2_TR(0x6116ad);
__builtin_memmove((R+0),(R+4),4);
}
B6116af:{NFSU2_TR(0x6116af);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611570u);}goto L611570;}
}
B6116b4:L6116b4:{c.instructions+=6;NFSU2_TR(0x6116b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6116b5:{NFSU2_TR(0x6116b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6116b6:{NFSU2_TR(0x6116b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6116b7:{NFSU2_TR(0x6116b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6116b8:{NFSU2_TR(0x6116b8);
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
B6116bb:{NFSU2_TR(0x6116bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6116c0:L6116c0:{c.instructions+=26;NFSU2_TR(0x6116c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B6116c3:{NFSU2_TR(0x6116c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6116c4:{NFSU2_TR(0x6116c4);
__builtin_memmove((R+12),gp(0x8a05e4),4);
}
B6116ca:{NFSU2_TR(0x6116ca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6116cb:{NFSU2_TR(0x6116cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6116cc:{NFSU2_TR(0x6116cc);
__builtin_memmove((R+24),gp(0x8a05d0),4);
}
B6116d2:{NFSU2_TR(0x6116d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B6116d5:{NFSU2_TR(0x6116d5);
w4(R+0,u32(0x55555556ull));
}
B6116da:{NFSU2_TR(0x6116da);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6116dc:{NFSU2_TR(0x6116dc);
__builtin_memmove((R+0),(R+8),4);
}
B6116de:{NFSU2_TR(0x6116de);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6116e1:{NFSU2_TR(0x6116e1);
u8 U[12];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6116e5:{NFSU2_TR(0x6116e5);
__builtin_memmove(gp(0x8a05cc),(R+4),4);
}
B6116eb:{NFSU2_TR(0x6116eb);
__builtin_memmove((R+4),gp(0x8a1bc8),4);
}
B6116f1:{NFSU2_TR(0x6116f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6116f4:{NFSU2_TR(0x6116f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6116f8:{NFSU2_TR(0x6116f8);
__builtin_memmove((R+0),(R+12),4);
}
B6116fa:{NFSU2_TR(0x6116fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6116fd:{NFSU2_TR(0x6116fd);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6116fe:{NFSU2_TR(0x6116fe);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6116fe);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6116fe);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B611700:{NFSU2_TR(0x611700);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611701:{NFSU2_TR(0x611701);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611705:{NFSU2_TR(0x611705);
__builtin_memmove((R+20),(R+0),4);
}
B611707:{NFSU2_TR(0x611707);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61170a:{NFSU2_TR(0x61170a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61170e:{NFSU2_TR(0x61170e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L611727;}}
}
B611710:L611710:{c.instructions+=8;NFSU2_TR(0x611710);
w4(R+0,u32(0x51eb851full));
}
B611715:{NFSU2_TR(0x611715);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B611717:{NFSU2_TR(0x611717);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B61171a:{NFSU2_TR(0x61171a);
__builtin_memmove((R+0),(R+8),4);
}
B61171c:{NFSU2_TR(0x61171c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B61171f:{NFSU2_TR(0x61171f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B611721:{NFSU2_TR(0x611721);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611725:{NFSU2_TR(0x611725);
{goto L61172f;}
}
B611727:L611727:{c.instructions+=1;NFSU2_TR(0x611727);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61172f:L61172f:{c.instructions+=8;NFSU2_TR(0x61172f);
__builtin_memmove((R+24),gp(0x803958),4);
}
B611735:{NFSU2_TR(0x611735);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B611738:{NFSU2_TR(0x611738);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B61173b:{NFSU2_TR(0x61173b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61173f:{NFSU2_TR(0x61173f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B611742:{NFSU2_TR(0x611742);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B611745:{NFSU2_TR(0x611745);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x400ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61174d:{NFSU2_TR(0x61174d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L611751;}}
}
B61174f:L61174f:{c.instructions+=1;NFSU2_TR(0x61174f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B611751:L611751:{c.instructions+=3;NFSU2_TR(0x611751);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B611753:{NFSU2_TR(0x611753);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B611755:{NFSU2_TR(0x611755);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L611784;}}
}
B611757:L611757:{c.instructions+=3;NFSU2_TR(0x611757);
__builtin_memmove((R+12),(R+24),4);
}
B611759:{NFSU2_TR(0x611759);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B61175c:{NFSU2_TR(0x61175c);
__builtin_memmove((R+16),(R+16),4);
}
B611760:L611760:{c.instructions+=12;NFSU2_TR(0x611760);
__builtin_memmove((R+8),(R+28),4);
}
B611762:{NFSU2_TR(0x611762);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B611765:{NFSU2_TR(0x611765);
__builtin_memmove((R+0),(R+12),4);
}
B611767:{NFSU2_TR(0x611767);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B611769:{NFSU2_TR(0x611769);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61176c:{NFSU2_TR(0x61176c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B61176d:{NFSU2_TR(0x61176d);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x61176d);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x61176d);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B61176f:{NFSU2_TR(0x61176f);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B611772:{NFSU2_TR(0x611772);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89efc8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B611779:{NFSU2_TR(0x611779);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B61177a:{NFSU2_TR(0x61177a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61177c:{NFSU2_TR(0x61177c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611760u);}goto L611760;}}
}
B61177e:L61177e:{c.instructions+=1;NFSU2_TR(0x61177e);
__builtin_memmove((R+12),gp(0x8a05e4),4);
}
B611784:L611784:{c.instructions+=6;NFSU2_TR(0x611784);
__builtin_memmove((R+0),(R+12),4);
}
B611786:{NFSU2_TR(0x611786);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B611787:{NFSU2_TR(0x611787);
w4(R+28,u32(0x1f3ull));
}
B61178c:{NFSU2_TR(0x61178c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x61178c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x61178c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B61178e:{NFSU2_TR(0x61178e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B611790:{NFSU2_TR(0x611790);
if(r1(R+518)){{goto L61179c;}}
}
B611792:L611792:{c.instructions+=2;NFSU2_TR(0x611792);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ccull));
s4(u32(r4(U+0)),r4(U+4));
}
B61179a:{NFSU2_TR(0x61179a);
{goto L6117cf;}
}
B61179c:L61179c:{c.instructions+=6;NFSU2_TR(0x61179c);
__builtin_memmove((R+0),(R+12),4);
}
B61179e:{NFSU2_TR(0x61179e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B61179f:{NFSU2_TR(0x61179f);
w4(R+28,u32(0x1ebull));
}
B6117a4:{NFSU2_TR(0x6117a4);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6117a4);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6117a4);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6117a6:{NFSU2_TR(0x6117a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6117a8:{NFSU2_TR(0x6117a8);
if(r1(R+518)){{goto L6117b4;}}
}
B6117aa:L6117aa:{c.instructions+=2;NFSU2_TR(0x6117aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x7acull));
s4(u32(r4(U+0)),r4(U+4));
}
B6117b2:{NFSU2_TR(0x6117b2);
{goto L6117cf;}
}
B6117b4:L6117b4:{c.instructions+=9;NFSU2_TR(0x6117b4);
__builtin_memmove((R+0),(R+12),4);
}
B6117b6:{NFSU2_TR(0x6117b6);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6117b7:{NFSU2_TR(0x6117b7);
w4(R+28,u32(0x1e7ull));
}
B6117bc:{NFSU2_TR(0x6117bc);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6117bc);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6117bc);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6117be:{NFSU2_TR(0x6117be);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B6117c0:{NFSU2_TR(0x6117c0);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6117c2:{NFSU2_TR(0x6117c2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffffc0ull))));
}
B6117c5:{NFSU2_TR(0x6117c5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x7dcull))));
}
B6117cb:{NFSU2_TR(0x6117cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6117cf:L6117cf:{c.instructions+=3;NFSU2_TR(0x6117cf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6117d1:{NFSU2_TR(0x6117d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6117d9:{NFSU2_TR(0x6117d9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6118ff;}}
}
B6117df:L6117df:{c.instructions+=1;NFSU2_TR(0x6117df);
{goto L6117f0;}
}
B6117e1:L6117e1:{c.instructions+=2;NFSU2_TR(0x6117e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6117e5:{NFSU2_TR(0x6117e5);
{goto L6117f0;}
}
B6117f0:L6117f0:{c.instructions+=15;NFSU2_TR(0x6117f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6117f4:{NFSU2_TR(0x6117f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6117f8:{NFSU2_TR(0x6117f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B6117fc:{NFSU2_TR(0x6117fc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B6117ff:{NFSU2_TR(0x6117ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B611802:{NFSU2_TR(0x611802);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611803:{NFSU2_TR(0x611803);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B611806:{NFSU2_TR(0x611806);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611807:{NFSU2_TR(0x611807);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B61180a:{NFSU2_TR(0x61180a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B61180d:{NFSU2_TR(0x61180d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61180e:{NFSU2_TR(0x61180e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61180f:{NFSU2_TR(0x61180f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611813:{NFSU2_TR(0x611813);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611817:{NFSU2_TR(0x611817);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61181cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611380u);}goto L611380;}
}
B61181c:L61181c:{c.instructions+=8;NFSU2_TR(0x61181c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611820:{NFSU2_TR(0x611820);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611821:{NFSU2_TR(0x611821);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611822:{NFSU2_TR(0x611822);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B611826:{NFSU2_TR(0x611826);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611827:{NFSU2_TR(0x611827);
__builtin_memmove((R+8),(R+12),4);
}
B611829:{NFSU2_TR(0x611829);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61182d:{NFSU2_TR(0x61182d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611832ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611480u);}goto L611480;}
}
B611832:L611832:{c.instructions+=3;NFSU2_TR(0x611832);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B611835:{NFSU2_TR(0x611835);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B611837:{NFSU2_TR(0x611837);
if(r1(R+518)){{goto L611853;}}
}
B611839:L611839:{c.instructions+=9;NFSU2_TR(0x611839);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61183d:{NFSU2_TR(0x61183d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611841:{NFSU2_TR(0x611841);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611842:{NFSU2_TR(0x611842);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611843:{NFSU2_TR(0x611843);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611847:{NFSU2_TR(0x611847);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611848:{NFSU2_TR(0x611848);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611849:{NFSU2_TR(0x611849);
__builtin_memmove((R+4),(R+24),4);
}
B61184b:{NFSU2_TR(0x61184b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611850ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611510u);}goto L611510;}
}
B611850:L611850:{c.instructions+=1;NFSU2_TR(0x611850);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B611853:L611853:{c.instructions+=7;NFSU2_TR(0x611853);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611857:{NFSU2_TR(0x611857);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61185b:{NFSU2_TR(0x61185b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61185f:{NFSU2_TR(0x61185f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B611861:{NFSU2_TR(0x611861);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B611863:{NFSU2_TR(0x611863);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611867:{NFSU2_TR(0x611867);
if(r1(R+512)){{goto L61187e;}}
}
B611869:L611869:{c.instructions+=1;NFSU2_TR(0x611869);
__builtin_memmove((R+16),(R+16),4);
}
B611870:L611870:{c.instructions+=3;NFSU2_TR(0x611870);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x8a05e4))));
}
B611876:{NFSU2_TR(0x611876);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B611878:{NFSU2_TR(0x611878);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611870u);}goto L611870;}}
}
B61187a:L61187a:{c.instructions+=1;NFSU2_TR(0x61187a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61187e:L61187e:{c.instructions+=8;NFSU2_TR(0x61187e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B611882:{NFSU2_TR(0x611882);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B611883:{NFSU2_TR(0x611883);
__builtin_memmove((R+0),(R+20),4);
}
B611885:{NFSU2_TR(0x611885);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B611886:{NFSU2_TR(0x611886);
u8 U[64];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x611886);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x611886);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B61188a:{NFSU2_TR(0x61188a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61188e:{NFSU2_TR(0x61188e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B611890:{NFSU2_TR(0x611890);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6118f5;}}
}
B611892:L611892:{c.instructions+=19;NFSU2_TR(0x611892);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B611896:{NFSU2_TR(0x611896);
__builtin_memmove((R+0),(R+12),4);
}
B611898:{NFSU2_TR(0x611898);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B611899:{NFSU2_TR(0x611899);
u8 U[56];
w8(U+0,u64(s64(s32(m4(0x8a05cc)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x611899);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x611899);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B61189f:{NFSU2_TR(0x61189f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6118a3:{NFSU2_TR(0x6118a3);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B6118a5:{NFSU2_TR(0x6118a5);
w4(R+0,u32(0x77777777ull));
}
B6118aa:{NFSU2_TR(0x6118aa);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6118ac:{NFSU2_TR(0x6118ac);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B6118ae:{NFSU2_TR(0x6118ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B6118b1:{NFSU2_TR(0x6118b1);
__builtin_memmove((R+4),(R+8),4);
}
B6118b3:{NFSU2_TR(0x6118b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6118b6:{NFSU2_TR(0x6118b6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6118b8:{NFSU2_TR(0x6118b8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B6118ba:{NFSU2_TR(0x6118ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6118be:{NFSU2_TR(0x6118be);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B6118c1:{NFSU2_TR(0x6118c1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6118c4:{NFSU2_TR(0x6118c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6118c8:{NFSU2_TR(0x6118c8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6118cc;}}
}
B6118ca:L6118ca:{c.instructions+=1;NFSU2_TR(0x6118ca);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6118cc:L6118cc:{c.instructions+=3;NFSU2_TR(0x6118cc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6118ce:{NFSU2_TR(0x6118ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6118d0:{NFSU2_TR(0x6118d0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6118f5;}}
}
B6118d2:L6118d2:{c.instructions+=2;NFSU2_TR(0x6118d2);
__builtin_memmove((R+28),(R+24),4);
}
B6118d4:{NFSU2_TR(0x6118d4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B6118d7:L6118d7:{c.instructions+=12;NFSU2_TR(0x6118d7);
__builtin_memmove((R+8),(R+4),4);
}
B6118d9:{NFSU2_TR(0x6118d9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6118dc:{NFSU2_TR(0x6118dc);
__builtin_memmove((R+0),(R+28),4);
}
B6118de:{NFSU2_TR(0x6118de);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6118e0:{NFSU2_TR(0x6118e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6118e3:{NFSU2_TR(0x6118e3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6118e4:{NFSU2_TR(0x6118e4);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6118e4);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6118e4);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6118e6:{NFSU2_TR(0x6118e6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6118e9:{NFSU2_TR(0x6118e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89efc8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6118f0:{NFSU2_TR(0x6118f0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6118f1:{NFSU2_TR(0x6118f1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6118f3:{NFSU2_TR(0x6118f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6118d7u);}goto L6118d7;}}
}
B6118f5:L6118f5:{c.instructions+=2;NFSU2_TR(0x6118f5);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6118f9:{NFSU2_TR(0x6118f9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6117e1u);}goto L6117e1;}}
}
B6118ff:L6118ff:{c.instructions+=6;NFSU2_TR(0x6118ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B611900:{NFSU2_TR(0x611900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B611901:{NFSU2_TR(0x611901);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B611902:{NFSU2_TR(0x611902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B611903:{NFSU2_TR(0x611903);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B611906:{NFSU2_TR(0x611906);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611910:L611910:{c.instructions+=5;NFSU2_TR(0x611910);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611914:{NFSU2_TR(0x611914);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xacf47d50ull))));
}
B61191a:{NFSU2_TR(0x61191a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61191c:{NFSU2_TR(0x61191c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B61191f:{NFSU2_TR(0x61191f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L61194b;}}
}
B611921:L611921:{c.instructions+=1;NFSU2_TR(0x611921);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x61194cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B611928:L611928:{c.instructions+=2;NFSU2_TR(0x611928);
w4(R+0,u32(0x89f050ull));
}
B61192d:{NFSU2_TR(0x61192d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61192e:L61192e:{c.instructions+=2;NFSU2_TR(0x61192e);
w4(R+0,u32(0x89f218ull));
}
B611933:{NFSU2_TR(0x611933);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611934:L611934:{c.instructions+=2;NFSU2_TR(0x611934);
w4(R+0,u32(0x89f3e0ull));
}
B611939:{NFSU2_TR(0x611939);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61193a:L61193a:{c.instructions+=2;NFSU2_TR(0x61193a);
w4(R+0,u32(0x89f5a8ull));
}
B61193f:{NFSU2_TR(0x61193f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611940:L611940:{c.instructions+=2;NFSU2_TR(0x611940);
w4(R+0,u32(0x89f770ull));
}
B611945:{NFSU2_TR(0x611945);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611946:L611946:{c.instructions+=1;NFSU2_TR(0x611946);
w4(R+0,u32(0x89f938ull));
}
B61194b:L61194b:{c.instructions+=1;NFSU2_TR(0x61194b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611970:L611970:{c.instructions+=7;NFSU2_TR(0x611970);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B611974:{NFSU2_TR(0x611974);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B611976:{NFSU2_TR(0x611976);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611977:{NFSU2_TR(0x611977);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61197b:{NFSU2_TR(0x61197b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61197d:{NFSU2_TR(0x61197d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61197f:{NFSU2_TR(0x61197f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611989;}}
}
B611981:L611981:{c.instructions+=3;NFSU2_TR(0x611981);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611984:{NFSU2_TR(0x611984);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B611987:{NFSU2_TR(0x611987);
if(r1(R+518)){{goto L61198d;}}
}
B611989:L611989:{c.instructions+=3;NFSU2_TR(0x611989);
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
B61198b:{NFSU2_TR(0x61198b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61198c:{NFSU2_TR(0x61198c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61198d:L61198d:{c.instructions+=6;NFSU2_TR(0x61198d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61198e:{NFSU2_TR(0x61198e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61198f:{NFSU2_TR(0x61198f);
__builtin_memmove((R+28),(R+24),4);
}
B611991:{NFSU2_TR(0x611991);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B611993:{NFSU2_TR(0x611993);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B611996:{NFSU2_TR(0x611996);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B611998:L611998:{c.instructions+=3;NFSU2_TR(0x611998);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B61199b:{NFSU2_TR(0x61199b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+12))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B61199d:{NFSU2_TR(0x61199d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611a0a;}}
}
B61199f:L61199f:{c.instructions+=4;NFSU2_TR(0x61199f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6119a0:{NFSU2_TR(0x6119a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6119a3:{NFSU2_TR(0x6119a3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6119a6:{NFSU2_TR(0x6119a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611998u);}goto L611998;}}
}
B6119a8:L6119a8:{c.instructions+=4;NFSU2_TR(0x6119a8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6119aa:{NFSU2_TR(0x6119aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6119ad:{NFSU2_TR(0x6119ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6119b0:{NFSU2_TR(0x6119b0);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B6119b2:L6119b2:{c.instructions+=3;NFSU2_TR(0x6119b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6119b5:{NFSU2_TR(0x6119b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6119b8:{NFSU2_TR(0x6119b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611a0a;}}
}
B6119ba:L6119ba:{c.instructions+=3;NFSU2_TR(0x6119ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6119bc:{NFSU2_TR(0x6119bc);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+24))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6119bf:{NFSU2_TR(0x6119bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611a0a;}}
}
B6119c1:L6119c1:{c.instructions+=3;NFSU2_TR(0x6119c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6119c4:{NFSU2_TR(0x6119c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6119c7:{NFSU2_TR(0x6119c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611a0a;}}
}
B6119c9:L6119c9:{c.instructions+=3;NFSU2_TR(0x6119c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6119cc:{NFSU2_TR(0x6119cc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6119ce:{NFSU2_TR(0x6119ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611a0a;}}
}
B6119d0:L6119d0:{c.instructions+=3;NFSU2_TR(0x6119d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6119d3:{NFSU2_TR(0x6119d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6119d6:{NFSU2_TR(0x6119d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611a0a;}}
}
B6119d8:L6119d8:{c.instructions+=3;NFSU2_TR(0x6119d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6119db:{NFSU2_TR(0x6119db);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6119de:{NFSU2_TR(0x6119de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611a0a;}}
}
B6119e0:L6119e0:{c.instructions+=3;NFSU2_TR(0x6119e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6119e3:{NFSU2_TR(0x6119e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6119e6:{NFSU2_TR(0x6119e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611a0a;}}
}
B6119e8:L6119e8:{c.instructions+=3;NFSU2_TR(0x6119e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6119eb:{NFSU2_TR(0x6119eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6119ee:{NFSU2_TR(0x6119ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611a0a;}}
}
B6119f0:L6119f0:{c.instructions+=3;NFSU2_TR(0x6119f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6119f3:{NFSU2_TR(0x6119f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6119f6:{NFSU2_TR(0x6119f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611a0a;}}
}
B6119f8:L6119f8:{c.instructions+=5;NFSU2_TR(0x6119f8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6119f9:{NFSU2_TR(0x6119f9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
}
B6119fc:{NFSU2_TR(0x6119fc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x34ull))));
}
B6119ff:{NFSU2_TR(0x6119ff);
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
B611a02:{NFSU2_TR(0x611a02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6119b2u);}goto L6119b2;}}
}
B611a04:L611a04:{c.instructions+=5;NFSU2_TR(0x611a04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B611a05:{NFSU2_TR(0x611a05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B611a06:{NFSU2_TR(0x611a06);
w1(R+0,u8(0x1ull));
}
B611a08:{NFSU2_TR(0x611a08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B611a09:{NFSU2_TR(0x611a09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611a0a:L611a0a:{c.instructions+=5;NFSU2_TR(0x611a0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B611a0b:{NFSU2_TR(0x611a0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B611a0c:{NFSU2_TR(0x611a0c);
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
B611a0e:{NFSU2_TR(0x611a0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B611a0f:{NFSU2_TR(0x611a0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611a10:L611a10:{c.instructions+=4;NFSU2_TR(0x611a10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611a14:{NFSU2_TR(0x611a14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611a15:{NFSU2_TR(0x611a15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611a16:{NFSU2_TR(0x611a16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611a1bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611910u);}goto L611910;}
}
B611a1b:L611a1b:{c.instructions+=4;NFSU2_TR(0x611a1b);
__builtin_memmove((R+28),(R+0),4);
}
B611a1d:{NFSU2_TR(0x611a1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B611a20:{NFSU2_TR(0x611a20);
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
B611a22:{NFSU2_TR(0x611a22);
if(r1(R+518)){{goto L611a2d;}}
}
B611a24:L611a24:{c.instructions+=2;NFSU2_TR(0x611a24);
w4(R+4,u32(0x72ull));
}
B611a29:{NFSU2_TR(0x611a29);
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
B611a2b:L611a2b:{c.instructions+=1;NFSU2_TR(0x611a2b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L611a2d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611a2bu);}goto L611a2b;}
}
B611a2d:L611a2d:{c.instructions+=2;NFSU2_TR(0x611a2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B611a2e:{NFSU2_TR(0x611a2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611a30:L611a30:{c.instructions+=15;NFSU2_TR(0x611a30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B611a33:{NFSU2_TR(0x611a33);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611a37:{NFSU2_TR(0x611a37);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611a38:{NFSU2_TR(0x611a38);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B611a3c:{NFSU2_TR(0x611a3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B611a3f:{NFSU2_TR(0x611a3f);
w4(R+0,u32(r1(R+12)));
}
B611a42:{NFSU2_TR(0x611a42);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611a46:{NFSU2_TR(0x611a46);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B611a49:{NFSU2_TR(0x611a49);
w4(R+4,u32(r1(R+4)));
}
B611a4c:{NFSU2_TR(0x611a4c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611a50:{NFSU2_TR(0x611a50);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611a54:{NFSU2_TR(0x611a54);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611a5a:{NFSU2_TR(0x611a5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B611a62:{NFSU2_TR(0x611a62);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B611a66:{NFSU2_TR(0x611a66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611a6bull));
TAIL_STATIC(0x75bed4u,75b);
}
B611a6b:L611a6b:{c.instructions+=9;NFSU2_TR(0x611a6b);
u8 U[5];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B611a70:{NFSU2_TR(0x611a70);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611a74:{NFSU2_TR(0x611a74);
u8 U[5];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B611a78:{NFSU2_TR(0x611a78);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B611a7d:{NFSU2_TR(0x611a7d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611a81:{NFSU2_TR(0x611a81);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611a85:{NFSU2_TR(0x611a85);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611a8b:{NFSU2_TR(0x611a8b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B611a8f:{NFSU2_TR(0x611a8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611a94ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611a94:L611a94:{c.instructions+=9;NFSU2_TR(0x611a94);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B611a99:{NFSU2_TR(0x611a99);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B611a9e:{NFSU2_TR(0x611a9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611aa2:{NFSU2_TR(0x611aa2);
u8 U[5];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B611aa6:{NFSU2_TR(0x611aa6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611aaa:{NFSU2_TR(0x611aaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611aae:{NFSU2_TR(0x611aae);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611ab4:{NFSU2_TR(0x611ab4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B611ab8:{NFSU2_TR(0x611ab8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611abdull));
TAIL_STATIC(0x75bed4u,75b);
}
B611abd:L611abd:{c.instructions+=9;NFSU2_TR(0x611abd);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B611ac2:{NFSU2_TR(0x611ac2);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B611ac6:{NFSU2_TR(0x611ac6);
w4(R+0,u32(r1(R+13)));
}
B611ac9:{NFSU2_TR(0x611ac9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611acd:{NFSU2_TR(0x611acd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611ad1:{NFSU2_TR(0x611ad1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611ad5:{NFSU2_TR(0x611ad5);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611adb:{NFSU2_TR(0x611adb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B611adf:{NFSU2_TR(0x611adf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611ae4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611ae4:L611ae4:{c.instructions+=5;NFSU2_TR(0x611ae4);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B611ae8:{NFSU2_TR(0x611ae8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611aec:{NFSU2_TR(0x611aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B611aed:{NFSU2_TR(0x611aed);
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
B611af0:{NFSU2_TR(0x611af0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611b00:L611b00:{c.instructions+=14;NFSU2_TR(0x611b00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B611b03:{NFSU2_TR(0x611b03);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611b07:{NFSU2_TR(0x611b07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611b08:{NFSU2_TR(0x611b08);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611b09:{NFSU2_TR(0x611b09);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B611b0b:{NFSU2_TR(0x611b0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611b0c:{NFSU2_TR(0x611b0c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B611b0e:{NFSU2_TR(0x611b0e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B611b11:{NFSU2_TR(0x611b11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611b12:{NFSU2_TR(0x611b12);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611b16:{NFSU2_TR(0x611b16);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611b1a:{NFSU2_TR(0x611b1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611b1e:{NFSU2_TR(0x611b1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611b22:{NFSU2_TR(0x611b22);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L611dea;}}
}
B611b28:L611b28:{c.instructions+=5;NFSU2_TR(0x611b28);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B611b2c:{NFSU2_TR(0x611b2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B611b30:{NFSU2_TR(0x611b30);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B611b33:{NFSU2_TR(0x611b33);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B611b3b:{NFSU2_TR(0x611b3b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3ull))));
}
B611b3e:L611b3e:{c.instructions+=5;NFSU2_TR(0x611b3e);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B611b41:{NFSU2_TR(0x611b41);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B611b47:{NFSU2_TR(0x611b47);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B611b49:{NFSU2_TR(0x611b49);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B611b4c:{NFSU2_TR(0x611b4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611bdb;}}
}
B611b52:L611b52:{c.instructions+=5;NFSU2_TR(0x611b52);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B611b56:{NFSU2_TR(0x611b56);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611b5a:{NFSU2_TR(0x611b5a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611b5e:{NFSU2_TR(0x611b5e);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611b61:{NFSU2_TR(0x611b61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611b66ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611b66:L611b66:{c.instructions+=6;NFSU2_TR(0x611b66);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B611b6a:{NFSU2_TR(0x611b6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B611b6e:{NFSU2_TR(0x611b6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611b72:{NFSU2_TR(0x611b72);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611b76:{NFSU2_TR(0x611b76);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611b79:{NFSU2_TR(0x611b79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611b7eull));
TAIL_STATIC(0x75bed4u,75b);
}
B611b7e:L611b7e:{c.instructions+=6;NFSU2_TR(0x611b7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B611b82:{NFSU2_TR(0x611b82);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B611b86:{NFSU2_TR(0x611b86);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611b8a:{NFSU2_TR(0x611b8a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611b8e:{NFSU2_TR(0x611b8e);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611b91:{NFSU2_TR(0x611b91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611b96ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611b96:L611b96:{c.instructions+=6;NFSU2_TR(0x611b96);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611b9a:{NFSU2_TR(0x611b9a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B611b9c:{NFSU2_TR(0x611b9c);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B611ba0:{NFSU2_TR(0x611ba0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B611ba2:{NFSU2_TR(0x611ba2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611ba6:{NFSU2_TR(0x611ba6);
if(r1(R+518)){{goto L611bc6;}}
}
B611ba8:L611ba8:{c.instructions+=5;NFSU2_TR(0x611ba8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B611bab:{NFSU2_TR(0x611bab);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611baf:{NFSU2_TR(0x611baf);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611bb3:{NFSU2_TR(0x611bb3);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611bb6:{NFSU2_TR(0x611bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611bbbull));
TAIL_STATIC(0x75bed4u,75b);
}
B611bbb:L611bbb:{c.instructions+=3;NFSU2_TR(0x611bbb);
w4(R+0,u32(r1(R+0)));
}
B611bbe:{NFSU2_TR(0x611bbe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B611bc0:{NFSU2_TR(0x611bc0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L611bdb;}}
}
B611bc2:L611bc2:{c.instructions+=2;NFSU2_TR(0x611bc2);
__builtin_memmove((R+12),(R+0),4);
}
B611bc4:{NFSU2_TR(0x611bc4);
{goto L611bdb;}
}
B611bc6:L611bc6:{c.instructions+=5;NFSU2_TR(0x611bc6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B611bc9:{NFSU2_TR(0x611bc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611bcd:{NFSU2_TR(0x611bcd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611bd1:{NFSU2_TR(0x611bd1);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611bd4:{NFSU2_TR(0x611bd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611bd9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611bd9:L611bd9:{c.instructions+=1;NFSU2_TR(0x611bd9);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B611bdb:L611bdb:{c.instructions+=5;NFSU2_TR(0x611bdb);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B611bde:{NFSU2_TR(0x611bde);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B611be4:{NFSU2_TR(0x611be4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B611be6:{NFSU2_TR(0x611be6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B611be9:{NFSU2_TR(0x611be9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611c86;}}
}
B611bef:L611bef:{c.instructions+=5;NFSU2_TR(0x611bef);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B611bf3:{NFSU2_TR(0x611bf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611bf7:{NFSU2_TR(0x611bf7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611bfb:{NFSU2_TR(0x611bfb);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611bfe:{NFSU2_TR(0x611bfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611c03ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611c03:L611c03:{c.instructions+=8;NFSU2_TR(0x611c03);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611c07:{NFSU2_TR(0x611c07);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B611c09:{NFSU2_TR(0x611c09);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B611c0d:{NFSU2_TR(0x611c0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611c11:{NFSU2_TR(0x611c11);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611c15:{NFSU2_TR(0x611c15);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611c19:{NFSU2_TR(0x611c19);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611c1c:{NFSU2_TR(0x611c1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611c21ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611c21:L611c21:{c.instructions+=8;NFSU2_TR(0x611c21);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B611c25:{NFSU2_TR(0x611c25);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B611c29:{NFSU2_TR(0x611c29);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611c2d:{NFSU2_TR(0x611c2d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B611c2f:{NFSU2_TR(0x611c2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611c33:{NFSU2_TR(0x611c33);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611c37:{NFSU2_TR(0x611c37);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611c3a:{NFSU2_TR(0x611c3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611c3full));
TAIL_STATIC(0x75bed4u,75b);
}
B611c3f:L611c3f:{c.instructions+=6;NFSU2_TR(0x611c3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611c43:{NFSU2_TR(0x611c43);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B611c45:{NFSU2_TR(0x611c45);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B611c49:{NFSU2_TR(0x611c49);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B611c4b:{NFSU2_TR(0x611c4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611c4f:{NFSU2_TR(0x611c4f);
if(r1(R+518)){{goto L611c70;}}
}
B611c51:L611c51:{c.instructions+=5;NFSU2_TR(0x611c51);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B611c55:{NFSU2_TR(0x611c55);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611c59:{NFSU2_TR(0x611c59);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611c5d:{NFSU2_TR(0x611c5d);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611c60:{NFSU2_TR(0x611c60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611c65ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611c65:L611c65:{c.instructions+=3;NFSU2_TR(0x611c65);
w4(R+0,u32(r1(R+0)));
}
B611c68:{NFSU2_TR(0x611c68);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B611c6a:{NFSU2_TR(0x611c6a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L611c86;}}
}
B611c6c:L611c6c:{c.instructions+=2;NFSU2_TR(0x611c6c);
__builtin_memmove((R+12),(R+0),4);
}
B611c6e:{NFSU2_TR(0x611c6e);
{goto L611c86;}
}
B611c70:L611c70:{c.instructions+=5;NFSU2_TR(0x611c70);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B611c74:{NFSU2_TR(0x611c74);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611c78:{NFSU2_TR(0x611c78);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611c7c:{NFSU2_TR(0x611c7c);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611c7f:{NFSU2_TR(0x611c7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611c84ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611c84:L611c84:{c.instructions+=1;NFSU2_TR(0x611c84);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B611c86:L611c86:{c.instructions+=5;NFSU2_TR(0x611c86);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B611c88:{NFSU2_TR(0x611c88);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B611c8e:{NFSU2_TR(0x611c8e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B611c90:{NFSU2_TR(0x611c90);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B611c93:{NFSU2_TR(0x611c93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611d2b;}}
}
B611c99:L611c99:{c.instructions+=5;NFSU2_TR(0x611c99);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B611c9d:{NFSU2_TR(0x611c9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611ca1:{NFSU2_TR(0x611ca1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611ca5:{NFSU2_TR(0x611ca5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611ca7:{NFSU2_TR(0x611ca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611cacull));
TAIL_STATIC(0x75bed4u,75b);
}
B611cac:L611cac:{c.instructions+=8;NFSU2_TR(0x611cac);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B611cb0:{NFSU2_TR(0x611cb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611cb4:{NFSU2_TR(0x611cb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611cb8:{NFSU2_TR(0x611cb8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B611cba:{NFSU2_TR(0x611cba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611cbe:{NFSU2_TR(0x611cbe);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611cc2:{NFSU2_TR(0x611cc2);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611cc4:{NFSU2_TR(0x611cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611cc9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611cc9:L611cc9:{c.instructions+=8;NFSU2_TR(0x611cc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B611ccd:{NFSU2_TR(0x611ccd);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B611ccf:{NFSU2_TR(0x611ccf);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B611cd3:{NFSU2_TR(0x611cd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611cd7:{NFSU2_TR(0x611cd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611cdb:{NFSU2_TR(0x611cdb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611cdf:{NFSU2_TR(0x611cdf);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611ce1:{NFSU2_TR(0x611ce1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611ce6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611ce6:L611ce6:{c.instructions+=6;NFSU2_TR(0x611ce6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611cea:{NFSU2_TR(0x611cea);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B611cec:{NFSU2_TR(0x611cec);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B611cf0:{NFSU2_TR(0x611cf0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B611cf2:{NFSU2_TR(0x611cf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611cf6:{NFSU2_TR(0x611cf6);
if(r1(R+518)){{goto L611d16;}}
}
B611cf8:L611cf8:{c.instructions+=5;NFSU2_TR(0x611cf8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B611cfc:{NFSU2_TR(0x611cfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611d00:{NFSU2_TR(0x611d00);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611d04:{NFSU2_TR(0x611d04);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611d06:{NFSU2_TR(0x611d06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611d0bull));
TAIL_STATIC(0x75bed4u,75b);
}
B611d0b:L611d0b:{c.instructions+=3;NFSU2_TR(0x611d0b);
w4(R+0,u32(r1(R+0)));
}
B611d0e:{NFSU2_TR(0x611d0e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B611d10:{NFSU2_TR(0x611d10);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L611d2b;}}
}
B611d12:L611d12:{c.instructions+=2;NFSU2_TR(0x611d12);
__builtin_memmove((R+12),(R+0),4);
}
B611d14:{NFSU2_TR(0x611d14);
{goto L611d2b;}
}
B611d16:L611d16:{c.instructions+=5;NFSU2_TR(0x611d16);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B611d1a:{NFSU2_TR(0x611d1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611d1e:{NFSU2_TR(0x611d1e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611d22:{NFSU2_TR(0x611d22);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611d24:{NFSU2_TR(0x611d24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611d29ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611d29:L611d29:{c.instructions+=1;NFSU2_TR(0x611d29);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B611d2b:L611d2b:{c.instructions+=5;NFSU2_TR(0x611d2b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B611d2e:{NFSU2_TR(0x611d2e);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B611d34:{NFSU2_TR(0x611d34);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B611d36:{NFSU2_TR(0x611d36);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B611d39:{NFSU2_TR(0x611d39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611dca;}}
}
B611d3f:L611d3f:{c.instructions+=5;NFSU2_TR(0x611d3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B611d43:{NFSU2_TR(0x611d43);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611d47:{NFSU2_TR(0x611d47);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611d4b:{NFSU2_TR(0x611d4b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611d4e:{NFSU2_TR(0x611d4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611d53ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611d53:L611d53:{c.instructions+=6;NFSU2_TR(0x611d53);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B611d57:{NFSU2_TR(0x611d57);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B611d5b:{NFSU2_TR(0x611d5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611d5f:{NFSU2_TR(0x611d5f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611d63:{NFSU2_TR(0x611d63);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611d66:{NFSU2_TR(0x611d66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611d6bull));
TAIL_STATIC(0x75bed4u,75b);
}
B611d6b:L611d6b:{c.instructions+=6;NFSU2_TR(0x611d6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B611d6f:{NFSU2_TR(0x611d6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B611d73:{NFSU2_TR(0x611d73);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611d77:{NFSU2_TR(0x611d77);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611d7b:{NFSU2_TR(0x611d7b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611d7e:{NFSU2_TR(0x611d7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611d83ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611d83:L611d83:{c.instructions+=6;NFSU2_TR(0x611d83);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611d87:{NFSU2_TR(0x611d87);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B611d89:{NFSU2_TR(0x611d89);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B611d8d:{NFSU2_TR(0x611d8d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B611d8f:{NFSU2_TR(0x611d8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611d93:{NFSU2_TR(0x611d93);
if(r1(R+518)){{goto L611db4;}}
}
B611d95:L611d95:{c.instructions+=5;NFSU2_TR(0x611d95);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B611d99:{NFSU2_TR(0x611d99);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611d9d:{NFSU2_TR(0x611d9d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611da1:{NFSU2_TR(0x611da1);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611da4:{NFSU2_TR(0x611da4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611da9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611da9:L611da9:{c.instructions+=3;NFSU2_TR(0x611da9);
w4(R+0,u32(r1(R+0)));
}
B611dac:{NFSU2_TR(0x611dac);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B611dae:{NFSU2_TR(0x611dae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L611dca;}}
}
B611db0:L611db0:{c.instructions+=2;NFSU2_TR(0x611db0);
__builtin_memmove((R+12),(R+0),4);
}
B611db2:{NFSU2_TR(0x611db2);
{goto L611dca;}
}
B611db4:L611db4:{c.instructions+=5;NFSU2_TR(0x611db4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B611db8:{NFSU2_TR(0x611db8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611dbc:{NFSU2_TR(0x611dbc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611dc0:{NFSU2_TR(0x611dc0);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611dc3:{NFSU2_TR(0x611dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611dc8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611dc8:L611dc8:{c.instructions+=1;NFSU2_TR(0x611dc8);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B611dca:L611dca:{c.instructions+=9;NFSU2_TR(0x611dca);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611dce:{NFSU2_TR(0x611dce);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611dd2:{NFSU2_TR(0x611dd2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B611dd5:{NFSU2_TR(0x611dd5);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B611dd8:{NFSU2_TR(0x611dd8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B611ddb:{NFSU2_TR(0x611ddb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B611dde:{NFSU2_TR(0x611dde);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B611de0:{NFSU2_TR(0x611de0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611de4:{NFSU2_TR(0x611de4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611b3eu);}goto L611b3e;}}
}
B611dea:L611dea:{c.instructions+=2;NFSU2_TR(0x611dea);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B611dec:{NFSU2_TR(0x611dec);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L611ebb;}}
}
B611df2:L611df2:{c.instructions+=3;NFSU2_TR(0x611df2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B611df6:{NFSU2_TR(0x611df6);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B611dfa:{NFSU2_TR(0x611dfa);
__builtin_memmove((R+12),(R+12),4);
}
B611e00:L611e00:{c.instructions+=6;NFSU2_TR(0x611e00);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611e04:{NFSU2_TR(0x611e04);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B611e07:{NFSU2_TR(0x611e07);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B611e0d:{NFSU2_TR(0x611e0d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B611e0f:{NFSU2_TR(0x611e0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B611e12:{NFSU2_TR(0x611e12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L611eab;}}
}
B611e18:L611e18:{c.instructions+=5;NFSU2_TR(0x611e18);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B611e1c:{NFSU2_TR(0x611e1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611e20:{NFSU2_TR(0x611e20);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611e24:{NFSU2_TR(0x611e24);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611e27:{NFSU2_TR(0x611e27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611e2cull));
TAIL_STATIC(0x75bed4u,75b);
}
B611e2c:L611e2c:{c.instructions+=9;NFSU2_TR(0x611e2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B611e30:{NFSU2_TR(0x611e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B611e34:{NFSU2_TR(0x611e34);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B611e36:{NFSU2_TR(0x611e36);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611e3a:{NFSU2_TR(0x611e3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611e3e:{NFSU2_TR(0x611e3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B611e42:{NFSU2_TR(0x611e42);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611e46:{NFSU2_TR(0x611e46);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611e49:{NFSU2_TR(0x611e49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611e4eull));
TAIL_STATIC(0x75bed4u,75b);
}
B611e4e:L611e4e:{c.instructions+=6;NFSU2_TR(0x611e4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B611e52:{NFSU2_TR(0x611e52);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B611e56:{NFSU2_TR(0x611e56);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611e5a:{NFSU2_TR(0x611e5a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611e5e:{NFSU2_TR(0x611e5e);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611e61:{NFSU2_TR(0x611e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611e66ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611e66:L611e66:{c.instructions+=6;NFSU2_TR(0x611e66);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611e6a:{NFSU2_TR(0x611e6a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B611e6c:{NFSU2_TR(0x611e6c);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B611e70:{NFSU2_TR(0x611e70);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B611e72:{NFSU2_TR(0x611e72);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611e76:{NFSU2_TR(0x611e76);
if(r1(R+518)){{goto L611e96;}}
}
B611e78:L611e78:{c.instructions+=5;NFSU2_TR(0x611e78);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B611e7b:{NFSU2_TR(0x611e7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611e7f:{NFSU2_TR(0x611e7f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611e83:{NFSU2_TR(0x611e83);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611e86:{NFSU2_TR(0x611e86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611e8bull));
TAIL_STATIC(0x75bed4u,75b);
}
B611e8b:L611e8b:{c.instructions+=3;NFSU2_TR(0x611e8b);
w4(R+0,u32(r1(R+0)));
}
B611e8e:{NFSU2_TR(0x611e8e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B611e90:{NFSU2_TR(0x611e90);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L611eab;}}
}
B611e92:L611e92:{c.instructions+=2;NFSU2_TR(0x611e92);
__builtin_memmove((R+12),(R+0),4);
}
B611e94:{NFSU2_TR(0x611e94);
{goto L611eab;}
}
B611e96:L611e96:{c.instructions+=5;NFSU2_TR(0x611e96);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(r1(U+0)));
}
B611e99:{NFSU2_TR(0x611e99);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611e9d:{NFSU2_TR(0x611e9d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B611ea1:{NFSU2_TR(0x611ea1);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B611ea4:{NFSU2_TR(0x611ea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611ea9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B611ea9:L611ea9:{c.instructions+=1;NFSU2_TR(0x611ea9);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B611eab:L611eab:{c.instructions+=5;NFSU2_TR(0x611eab);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611eaf:{NFSU2_TR(0x611eaf);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B611eb0:{NFSU2_TR(0x611eb0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B611eb3:{NFSU2_TR(0x611eb3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B611eb5:{NFSU2_TR(0x611eb5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611e00u);}goto L611e00;}}
}
B611ebb:L611ebb:{c.instructions+=5;NFSU2_TR(0x611ebb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611ebf:{NFSU2_TR(0x611ebf);
w4(R+0,u32(0xffull));
}
B611ec4:{NFSU2_TR(0x611ec4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B611ec6:{NFSU2_TR(0x611ec6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B611eca:{NFSU2_TR(0x611eca);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L611ed0;}}
}
B611ecc:L611ecc:{c.instructions+=1;NFSU2_TR(0x611ecc);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B611ed0:L611ed0:{c.instructions+=4;NFSU2_TR(0x611ed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611ed4:{NFSU2_TR(0x611ed4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B611ed6:{NFSU2_TR(0x611ed6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B611eda:{NFSU2_TR(0x611eda);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L611ee0;}}
}
B611edc:L611edc:{c.instructions+=1;NFSU2_TR(0x611edc);
u8 U[5];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B611ee0:L611ee0:{c.instructions+=4;NFSU2_TR(0x611ee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611ee4:{NFSU2_TR(0x611ee4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B611ee6:{NFSU2_TR(0x611ee6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B611eea:{NFSU2_TR(0x611eea);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L611ef0;}}
}
B611eec:L611eec:{c.instructions+=1;NFSU2_TR(0x611eec);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B611ef0:L611ef0:{c.instructions+=3;NFSU2_TR(0x611ef0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B611ef2:{NFSU2_TR(0x611ef2);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B611ef6:{NFSU2_TR(0x611ef6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L611efc;}}
}
B611ef8:L611ef8:{c.instructions+=1;NFSU2_TR(0x611ef8);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B611efc:L611efc:{c.instructions+=7;NFSU2_TR(0x611efc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611f00:{NFSU2_TR(0x611f00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B611f01:{NFSU2_TR(0x611f01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B611f02:{NFSU2_TR(0x611f02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B611f03:{NFSU2_TR(0x611f03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B611f04:{NFSU2_TR(0x611f04);
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
B611f07:{NFSU2_TR(0x611f07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611f10:L611f10:{c.instructions+=15;NFSU2_TR(0x611f10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B611f13:{NFSU2_TR(0x611f13);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B611f17:{NFSU2_TR(0x611f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B611f1a:{NFSU2_TR(0x611f1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B611f1d:{NFSU2_TR(0x611f1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611f1e:{NFSU2_TR(0x611f1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B611f20:{NFSU2_TR(0x611f20);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B611f22:{NFSU2_TR(0x611f22);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611f26:{NFSU2_TR(0x611f26);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611f2a:{NFSU2_TR(0x611f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B611f30:{NFSU2_TR(0x611f30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B611f33:{NFSU2_TR(0x611f33);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611f37:{NFSU2_TR(0x611f37);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611f3b:{NFSU2_TR(0x611f3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611f3f:{NFSU2_TR(0x611f3f);
if(r1(R+518)){{goto L611f47;}}
}
B611f41:L611f41:{c.instructions+=2;NFSU2_TR(0x611f41);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B611f45:{NFSU2_TR(0x611f45);
if(r1(R+518)){{goto L611f4e;}}
}
B611f47:L611f47:{c.instructions+=4;NFSU2_TR(0x611f47);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B611f49:{NFSU2_TR(0x611f49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B611f4a:{NFSU2_TR(0x611f4a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B611f4d:{NFSU2_TR(0x611f4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B611f4e:L611f4e:{c.instructions+=6;NFSU2_TR(0x611f4e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611f4f:{NFSU2_TR(0x611f4f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611f50:{NFSU2_TR(0x611f50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611f51:{NFSU2_TR(0x611f51);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B611f53:{NFSU2_TR(0x611f53);
__builtin_memmove((R+4),(R+28),4);
}
B611f55:{NFSU2_TR(0x611f55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x611f5aull));
TAIL_STATIC(0x5b96a0u,5b9);
}
B611f5a:L611f5a:{c.instructions+=9;NFSU2_TR(0x611f5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B611f5e:{NFSU2_TR(0x611f5e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B611f62:{NFSU2_TR(0x611f62);
__builtin_memmove((R+20),(R+0),4);
}
B611f64:{NFSU2_TR(0x611f64);
__builtin_memmove((R+0),gp(0x8a1d18),4);
}
B611f69:{NFSU2_TR(0x611f69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B611f6b:{NFSU2_TR(0x611f6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611f6f:{NFSU2_TR(0x611f6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611f73:{NFSU2_TR(0x611f73);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611f77:{NFSU2_TR(0x611f77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x61202au,612);}
}
B611f7d:L611f7d:{c.instructions+=4;NFSU2_TR(0x611f7d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B611f80:{NFSU2_TR(0x611f80);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B611f82:{NFSU2_TR(0x611f82);
w4(R+4,u32(0x40ull));
}
B611f87:{NFSU2_TR(0x611f87);
w4(R+28,u32(0x8a05e8ull));
}
B611f8c:L611f8c:{c.instructions+=1;NFSU2_TR(0x611f8c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L611f8e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611f8cu);}goto L611f8c;}
}
B611f8e:L611f8e:{c.instructions+=11;NFSU2_TR(0x611f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B611f92:{NFSU2_TR(0x611f92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B611f94:{NFSU2_TR(0x611f94);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0xbfff0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B611f9c:{NFSU2_TR(0x611f9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf00ff00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B611fa4:{NFSU2_TR(0x611fa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf0000ffull));
s4(u32(r4(U+0)),r4(U+4));
}
B611fac:{NFSU2_TR(0x611fac);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0xbfff00ffull));
s4(u32(r4(U+0)),r4(U+4));
}
B611fb4:{NFSU2_TR(0x611fb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0xbf00ffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B611fbc:{NFSU2_TR(0x611fbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0xbfffff00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B611fc4:{NFSU2_TR(0x611fc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0xbfffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B611fcc:{NFSU2_TR(0x611fcc);
__builtin_memmove((R+4),(R+20),4);
}
B611fce:{NFSU2_TR(0x611fce);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x612020u,612);}
}
B611fd0:L611fd0:{c.instructions+=3;NFSU2_TR(0x611fd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B611fd4:{NFSU2_TR(0x611fd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B611fd6:{NFSU2_TR(0x611fd6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B611fd8:L611fd8:{c.instructions+=2;NFSU2_TR(0x611fd8);
u8 U[24];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+8))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B611fdc:{NFSU2_TR(0x611fdc);
if(r1(R+518)){{goto L611fe6;}}
}
B611fde:L611fde:{c.instructions+=3;NFSU2_TR(0x611fde);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B611fdf:{NFSU2_TR(0x611fdf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B611fe2:{NFSU2_TR(0x611fe2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x611fd8u);}goto L611fd8;}}
}
B611fe4:L611fe4:{c.instructions+=1;NFSU2_TR(0x611fe4);
TAIL_STATIC(0x61200au,612);
}
B611fe6:L611fe6:{c.instructions+=8;NFSU2_TR(0x611fe6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a1d1cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B611fed:{NFSU2_TR(0x611fed);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B611ff1:{NFSU2_TR(0x611ff1);
__builtin_memmove((R+12),(R+0),4);
}
B611ff3:{NFSU2_TR(0x611ff3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B611ff6:{NFSU2_TR(0x611ff6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B611ff9:{NFSU2_TR(0x611ff9);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B611ffb:{NFSU2_TR(0x611ffb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B611ffc:{NFSU2_TR(0x611ffc);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a05e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
TAIL_STATIC(0x612003u,612);
}
XIT:NFSU2_TR_EXIT(0x611,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
