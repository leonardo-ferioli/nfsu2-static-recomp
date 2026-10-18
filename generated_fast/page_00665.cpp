#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_64b(u8* __restrict R,Cpu& c);
u32 body_65b(u8* __restrict R,Cpu& c);
u32 body_65c(u8* __restrict R,Cpu& c);
u32 body_65e(u8* __restrict R,Cpu& c);
u32 body_661(u8* __restrict R,Cpu& c);
u32 body_663(u8* __restrict R,Cpu& c);
u32 body_664(u8* __restrict R,Cpu& c);
u32 body_666(u8* __restrict R,Cpu& c);
u32 body_66a(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x665,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x665,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_665(u8* __restrict R,Cpu& c);
u32 page_665(Cpu& c){return body_665(c.regs.data(),c);}
__attribute__((noinline)) u32 body_665(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x665001:goto L665001;
case 0x665008:c.instructions+=1;goto B665008;
case 0x66500a:goto L66500a;
case 0x66500d:c.instructions+=2;goto B66500d;
case 0x66500f:c.instructions+=1;goto B66500f;
case 0x665011:goto L665011;
case 0x665013:c.instructions+=1;goto B665013;
case 0x665018:goto L665018;
case 0x66501c:goto L66501c;
case 0x66501f:c.instructions+=2;goto B66501f;
case 0x665023:c.instructions+=1;goto B665023;
case 0x665027:goto L665027;
case 0x66502a:c.instructions+=5;goto B66502a;
case 0x66502b:c.instructions+=4;goto B66502b;
case 0x66502c:c.instructions+=3;goto B66502c;
case 0x66502d:c.instructions+=2;goto B66502d;
case 0x66502e:c.instructions+=1;goto B66502e;
case 0x665031:goto L665031;
case 0x665033:c.instructions+=5;goto B665033;
case 0x665034:c.instructions+=4;goto B665034;
case 0x665036:c.instructions+=3;goto B665036;
case 0x665039:c.instructions+=2;goto B665039;
case 0x66503b:c.instructions+=1;goto B66503b;
case 0x66503d:goto L66503d;
case 0x66503f:c.instructions+=1;goto B66503f;
case 0x665044:goto L665044;
case 0x665048:goto L665048;
case 0x66504a:c.instructions+=2;goto B66504a;
case 0x66504b:c.instructions+=1;goto B66504b;
case 0x665050:goto L665050;
case 0x665052:c.instructions+=6;goto B665052;
case 0x665053:c.instructions+=5;goto B665053;
case 0x665055:c.instructions+=4;goto B665055;
case 0x665059:c.instructions+=3;goto B665059;
case 0x66505a:c.instructions+=2;goto B66505a;
case 0x66505c:c.instructions+=1;goto B66505c;
case 0x66505e:goto L66505e;
case 0x66505f:c.instructions+=6;goto B66505f;
case 0x665064:c.instructions+=5;goto B665064;
case 0x665067:c.instructions+=4;goto B665067;
case 0x665069:c.instructions+=3;goto B665069;
case 0x66506b:c.instructions+=2;goto B66506b;
case 0x66506c:c.instructions+=1;goto B66506c;
case 0x665071:goto L665071;
case 0x665075:c.instructions+=1;goto B665075;
case 0x665077:goto L665077;
case 0x665078:c.instructions+=1;goto B665078;
case 0x66507d:goto L66507d;
case 0x66507e:goto L66507e;
case 0x665080:c.instructions+=2;goto B665080;
case 0x665081:c.instructions+=1;goto B665081;
case 0x665083:goto L665083;
case 0x665085:c.instructions+=1;goto B665085;
case 0x66508a:goto L66508a;
case 0x66508e:c.instructions+=1;goto B66508e;
case 0x665090:goto L665090;
case 0x665091:c.instructions+=1;goto B665091;
case 0x665096:goto L665096;
case 0x665097:goto L665097;
case 0x665099:goto L665099;
case 0x66509a:c.instructions+=2;goto B66509a;
case 0x66509b:c.instructions+=1;goto B66509b;
case 0x66509e:goto L66509e;
case 0x6650a0:c.instructions+=9;goto B6650a0;
case 0x6650a6:c.instructions+=8;goto B6650a6;
case 0x6650a7:c.instructions+=7;goto B6650a7;
case 0x6650a9:c.instructions+=6;goto B6650a9;
case 0x6650ac:c.instructions+=5;goto B6650ac;
case 0x6650b3:c.instructions+=4;goto B6650b3;
case 0x6650b6:c.instructions+=3;goto B6650b6;
case 0x6650b9:c.instructions+=2;goto B6650b9;
case 0x6650bc:c.instructions+=1;goto B6650bc;
case 0x6650c1:goto L6650c1;
case 0x6650c7:c.instructions+=1;goto B6650c7;
case 0x6650cc:goto L6650cc;
case 0x6650d5:c.instructions+=42;goto B6650d5;
case 0x6650d8:c.instructions+=41;goto B6650d8;
case 0x6650de:c.instructions+=40;goto B6650de;
case 0x6650e4:c.instructions+=39;goto B6650e4;
case 0x6650e7:c.instructions+=38;goto B6650e7;
case 0x6650ea:c.instructions+=37;goto B6650ea;
case 0x6650f0:c.instructions+=36;goto B6650f0;
case 0x6650f3:c.instructions+=35;goto B6650f3;
case 0x6650f9:c.instructions+=34;goto B6650f9;
case 0x6650ff:c.instructions+=33;goto B6650ff;
case 0x665105:c.instructions+=32;goto B665105;
case 0x66510b:c.instructions+=31;goto B66510b;
case 0x665111:c.instructions+=30;goto B665111;
case 0x665117:c.instructions+=29;goto B665117;
case 0x66511d:c.instructions+=28;goto B66511d;
case 0x665123:c.instructions+=27;goto B665123;
case 0x665129:c.instructions+=26;goto B665129;
case 0x66512d:c.instructions+=25;goto B66512d;
case 0x665130:c.instructions+=24;goto B665130;
case 0x665133:c.instructions+=23;goto B665133;
case 0x665139:c.instructions+=22;goto B665139;
case 0x66513f:c.instructions+=21;goto B66513f;
case 0x665145:c.instructions+=20;goto B665145;
case 0x66514b:c.instructions+=19;goto B66514b;
case 0x665151:c.instructions+=18;goto B665151;
case 0x665154:c.instructions+=17;goto B665154;
case 0x665157:c.instructions+=16;goto B665157;
case 0x66515a:c.instructions+=15;goto B66515a;
case 0x66515d:c.instructions+=14;goto B66515d;
case 0x665160:c.instructions+=13;goto B665160;
case 0x665166:c.instructions+=12;goto B665166;
case 0x66516c:c.instructions+=11;goto B66516c;
case 0x665172:c.instructions+=10;goto B665172;
case 0x665178:c.instructions+=9;goto B665178;
case 0x66517e:c.instructions+=8;goto B66517e;
case 0x665184:c.instructions+=7;goto B665184;
case 0x66518a:c.instructions+=6;goto B66518a;
case 0x665190:c.instructions+=5;goto B665190;
case 0x665193:c.instructions+=4;goto B665193;
case 0x66519a:c.instructions+=3;goto B66519a;
case 0x66519c:c.instructions+=2;goto B66519c;
case 0x66519d:c.instructions+=1;goto B66519d;
case 0x66519e:goto L66519e;
case 0x6651a0:c.instructions+=5;goto B6651a0;
case 0x6651a1:c.instructions+=4;goto B6651a1;
case 0x6651a3:c.instructions+=3;goto B6651a3;
case 0x6651a4:c.instructions+=2;goto B6651a4;
case 0x6651a6:c.instructions+=1;goto B6651a6;
case 0x6651ab:goto L6651ab;
case 0x6651af:c.instructions+=1;goto B6651af;
case 0x6651b1:goto L6651b1;
case 0x6651b2:c.instructions+=1;goto B6651b2;
case 0x6651b7:goto L6651b7;
case 0x6651b8:goto L6651b8;
case 0x6651ba:c.instructions+=3;goto B6651ba;
case 0x6651bb:c.instructions+=2;goto B6651bb;
case 0x6651bc:c.instructions+=1;goto B6651bc;
case 0x6651bf:goto L6651bf;
case 0x6651c1:c.instructions+=6;goto B6651c1;
case 0x6651c2:c.instructions+=5;goto B6651c2;
case 0x6651c4:c.instructions+=4;goto B6651c4;
case 0x6651c8:c.instructions+=3;goto B6651c8;
case 0x6651c9:c.instructions+=2;goto B6651c9;
case 0x6651cb:c.instructions+=1;goto B6651cb;
case 0x6651cd:goto L6651cd;
case 0x6651ce:c.instructions+=6;goto B6651ce;
case 0x6651d3:c.instructions+=5;goto B6651d3;
case 0x6651d6:c.instructions+=4;goto B6651d6;
case 0x6651d8:c.instructions+=3;goto B6651d8;
case 0x6651da:c.instructions+=2;goto B6651da;
case 0x6651db:c.instructions+=1;goto B6651db;
case 0x6651e0:goto L6651e0;
case 0x6651e4:c.instructions+=1;goto B6651e4;
case 0x6651e6:goto L6651e6;
case 0x6651e7:c.instructions+=1;goto B6651e7;
case 0x6651ec:goto L6651ec;
case 0x6651ed:goto L6651ed;
case 0x6651ef:c.instructions+=2;goto B6651ef;
case 0x6651f0:c.instructions+=1;goto B6651f0;
case 0x6651f2:goto L6651f2;
case 0x6651f4:c.instructions+=1;goto B6651f4;
case 0x6651f9:goto L6651f9;
case 0x6651fd:c.instructions+=1;goto B6651fd;
case 0x6651ff:goto L6651ff;
case 0x665200:c.instructions+=1;goto B665200;
case 0x665205:goto L665205;
case 0x665206:goto L665206;
case 0x665208:goto L665208;
case 0x665209:c.instructions+=2;goto B665209;
case 0x66520a:c.instructions+=1;goto B66520a;
case 0x66520d:goto L66520d;
case 0x66520f:c.instructions+=20;goto B66520f;
case 0x665210:c.instructions+=19;goto B665210;
case 0x665212:c.instructions+=18;goto B665212;
case 0x665215:c.instructions+=17;goto B665215;
case 0x665218:c.instructions+=16;goto B665218;
case 0x66521b:c.instructions+=15;goto B66521b;
case 0x66521c:c.instructions+=14;goto B66521c;
case 0x66521f:c.instructions+=13;goto B66521f;
case 0x665223:c.instructions+=12;goto B665223;
case 0x665226:c.instructions+=11;goto B665226;
case 0x665227:c.instructions+=10;goto B665227;
case 0x665229:c.instructions+=9;goto B665229;
case 0x66522c:c.instructions+=8;goto B66522c;
case 0x66522f:c.instructions+=7;goto B66522f;
case 0x665232:c.instructions+=6;goto B665232;
case 0x665235:c.instructions+=5;goto B665235;
case 0x665239:c.instructions+=4;goto B665239;
case 0x66523c:c.instructions+=3;goto B66523c;
case 0x665242:c.instructions+=2;goto B665242;
case 0x665245:c.instructions+=1;goto B665245;
case 0x665247:goto L665247;
case 0x66524a:c.instructions+=1;goto B66524a;
case 0x665250:goto L665250;
case 0x665253:c.instructions+=3;goto B665253;
case 0x665255:c.instructions+=2;goto B665255;
case 0x665256:c.instructions+=1;goto B665256;
case 0x665258:goto L665258;
case 0x66525a:c.instructions+=2;goto B66525a;
case 0x66525b:c.instructions+=1;goto B66525b;
case 0x66525e:goto L66525e;
case 0x665261:c.instructions+=5;goto B665261;
case 0x665263:c.instructions+=4;goto B665263;
case 0x665264:c.instructions+=3;goto B665264;
case 0x665266:c.instructions+=2;goto B665266;
case 0x665269:c.instructions+=1;goto B665269;
case 0x66526b:goto L66526b;
case 0x66526d:c.instructions+=2;goto B66526d;
case 0x66526e:c.instructions+=1;goto B66526e;
case 0x665271:goto L665271;
case 0x665273:c.instructions+=4;goto B665273;
case 0x665276:c.instructions+=3;goto B665276;
case 0x665279:c.instructions+=2;goto B665279;
case 0x66527c:c.instructions+=1;goto B66527c;
case 0x66527e:goto L66527e;
case 0x665281:goto L665281;
case 0x665283:c.instructions+=2;goto B665283;
case 0x665285:c.instructions+=1;goto B665285;
case 0x665287:goto L665287;
case 0x665289:c.instructions+=2;goto B665289;
case 0x66528a:c.instructions+=1;goto B66528a;
case 0x66528d:goto L66528d;
case 0x66528f:c.instructions+=1;goto B66528f;
case 0x665291:goto L665291;
case 0x665298:c.instructions+=1;goto B665298;
case 0x66529d:goto L66529d;
case 0x6652a3:c.instructions+=5;goto B6652a3;
case 0x6652a6:c.instructions+=4;goto B6652a6;
case 0x6652a9:c.instructions+=3;goto B6652a9;
case 0x6652ab:c.instructions+=2;goto B6652ab;
case 0x6652af:c.instructions+=1;goto B6652af;
case 0x6652b1:goto L6652b1;
case 0x6652b4:c.instructions+=4;goto B6652b4;
case 0x6652b7:c.instructions+=3;goto B6652b7;
case 0x6652ba:c.instructions+=2;goto B6652ba;
case 0x6652bd:c.instructions+=1;goto B6652bd;
case 0x6652bf:goto L6652bf;
case 0x6652c1:c.instructions+=8;goto B6652c1;
case 0x6652c4:c.instructions+=7;goto B6652c4;
case 0x6652c7:c.instructions+=6;goto B6652c7;
case 0x6652ca:c.instructions+=5;goto B6652ca;
case 0x6652cd:c.instructions+=4;goto B6652cd;
case 0x6652d0:c.instructions+=3;goto B6652d0;
case 0x6652d3:c.instructions+=2;goto B6652d3;
case 0x6652d6:c.instructions+=1;goto B6652d6;
case 0x6652d9:goto L6652d9;
case 0x6652dc:c.instructions+=7;goto B6652dc;
case 0x6652df:c.instructions+=6;goto B6652df;
case 0x6652e2:c.instructions+=5;goto B6652e2;
case 0x6652e6:c.instructions+=4;goto B6652e6;
case 0x6652e9:c.instructions+=3;goto B6652e9;
case 0x6652ec:c.instructions+=2;goto B6652ec;
case 0x6652ef:c.instructions+=1;goto B6652ef;
case 0x6652f1:goto L6652f1;
case 0x6652f5:c.instructions+=6;goto B6652f5;
case 0x6652f9:c.instructions+=5;goto B6652f9;
case 0x6652fd:c.instructions+=4;goto B6652fd;
case 0x665300:c.instructions+=3;goto B665300;
case 0x665303:c.instructions+=2;goto B665303;
case 0x665305:c.instructions+=1;goto B665305;
case 0x66530a:goto L66530a;
case 0x66530c:c.instructions+=2;goto B66530c;
case 0x66530f:c.instructions+=1;goto B66530f;
case 0x665315:goto L665315;
case 0x665319:c.instructions+=9;goto B665319;
case 0x66531c:c.instructions+=8;goto B66531c;
case 0x665322:c.instructions+=7;goto B665322;
case 0x665326:c.instructions+=6;goto B665326;
case 0x665329:c.instructions+=5;goto B665329;
case 0x66532b:c.instructions+=4;goto B66532b;
case 0x66532e:c.instructions+=3;goto B66532e;
case 0x665331:c.instructions+=2;goto B665331;
case 0x665334:c.instructions+=1;goto B665334;
case 0x665336:goto L665336;
case 0x66533b:c.instructions+=4;goto B66533b;
case 0x665341:c.instructions+=3;goto B665341;
case 0x665344:c.instructions+=2;goto B665344;
case 0x66534b:c.instructions+=1;goto B66534b;
case 0x66534d:goto L66534d;
case 0x665352:c.instructions+=3;goto B665352;
case 0x665358:c.instructions+=2;goto B665358;
case 0x66535b:c.instructions+=1;goto B66535b;
case 0x665362:goto L665362;
case 0x665365:c.instructions+=14;goto B665365;
case 0x66536b:c.instructions+=13;goto B66536b;
case 0x66536e:c.instructions+=12;goto B66536e;
case 0x665370:c.instructions+=11;goto B665370;
case 0x665371:c.instructions+=10;goto B665371;
case 0x665375:c.instructions+=9;goto B665375;
case 0x665378:c.instructions+=8;goto B665378;
case 0x66537b:c.instructions+=7;goto B66537b;
case 0x66537e:c.instructions+=6;goto B66537e;
case 0x665380:c.instructions+=5;goto B665380;
case 0x665383:c.instructions+=4;goto B665383;
case 0x665386:c.instructions+=3;goto B665386;
case 0x665388:c.instructions+=2;goto B665388;
case 0x66538b:c.instructions+=1;goto B66538b;
case 0x66538c:goto L66538c;
case 0x66538e:goto L66538e;
case 0x665391:c.instructions+=6;goto B665391;
case 0x665395:c.instructions+=5;goto B665395;
case 0x665398:c.instructions+=4;goto B665398;
case 0x66539b:c.instructions+=3;goto B66539b;
case 0x66539f:c.instructions+=2;goto B66539f;
case 0x6653a1:c.instructions+=1;goto B6653a1;
case 0x6653a7:goto L6653a7;
case 0x6653aa:c.instructions+=4;goto B6653aa;
case 0x6653ad:c.instructions+=3;goto B6653ad;
case 0x6653ae:c.instructions+=2;goto B6653ae;
case 0x6653af:c.instructions+=1;goto B6653af;
case 0x6653b4:goto L6653b4;
case 0x6653b6:c.instructions+=2;goto B6653b6;
case 0x6653b9:c.instructions+=1;goto B6653b9;
case 0x6653bf:goto L6653bf;
case 0x6653c1:c.instructions+=3;goto B6653c1;
case 0x6653c3:c.instructions+=2;goto B6653c3;
case 0x6653c4:c.instructions+=1;goto B6653c4;
case 0x6653c7:goto L6653c7;
case 0x6653ca:c.instructions+=12;goto B6653ca;
case 0x6653cd:c.instructions+=11;goto B6653cd;
case 0x6653cf:c.instructions+=10;goto B6653cf;
case 0x6653d2:c.instructions+=9;goto B6653d2;
case 0x6653d4:c.instructions+=8;goto B6653d4;
case 0x6653d5:c.instructions+=7;goto B6653d5;
case 0x6653d7:c.instructions+=6;goto B6653d7;
case 0x6653d9:c.instructions+=5;goto B6653d9;
case 0x6653dc:c.instructions+=4;goto B6653dc;
case 0x6653de:c.instructions+=3;goto B6653de;
case 0x6653e1:c.instructions+=2;goto B6653e1;
case 0x6653e3:c.instructions+=1;goto B6653e3;
case 0x6653e6:goto L6653e6;
case 0x6653e9:c.instructions+=4;goto B6653e9;
case 0x6653eb:c.instructions+=3;goto B6653eb;
case 0x6653ee:c.instructions+=2;goto B6653ee;
case 0x6653f0:c.instructions+=1;goto B6653f0;
case 0x6653f2:goto L6653f2;
case 0x6653f4:c.instructions+=2;goto B6653f4;
case 0x6653f5:c.instructions+=1;goto B6653f5;
case 0x6653f8:goto L6653f8;
case 0x6653fa:c.instructions+=5;goto B6653fa;
case 0x6653fd:c.instructions+=4;goto B6653fd;
case 0x665400:c.instructions+=3;goto B665400;
case 0x665403:c.instructions+=2;goto B665403;
case 0x665405:c.instructions+=1;goto B665405;
case 0x665408:goto L665408;
case 0x66540a:goto L66540a;
case 0x66540c:c.instructions+=1;goto B66540c;
case 0x66540f:goto L66540f;
case 0x665411:goto L665411;
case 0x665414:c.instructions+=1;goto B665414;
case 0x665417:goto L665417;
case 0x66541a:c.instructions+=4;goto B66541a;
case 0x66541c:c.instructions+=3;goto B66541c;
case 0x66541e:c.instructions+=2;goto B66541e;
case 0x66541f:c.instructions+=1;goto B66541f;
case 0x665422:goto L665422;
case 0x665424:c.instructions+=1;goto B665424;
case 0x66542a:goto L66542a;
case 0x66542d:c.instructions+=5;goto B66542d;
case 0x665431:c.instructions+=4;goto B665431;
case 0x665434:c.instructions+=3;goto B665434;
case 0x665437:c.instructions+=2;goto B665437;
case 0x665438:c.instructions+=1;goto B665438;
case 0x66543a:goto L66543a;
case 0x66543f:goto L66543f;
case 0x665441:goto L665441;
case 0x665446:goto L665446;
case 0x665449:c.instructions+=14;goto B665449;
case 0x66544f:c.instructions+=13;goto B66544f;
case 0x665452:c.instructions+=12;goto B665452;
case 0x665458:c.instructions+=11;goto B665458;
case 0x66545f:c.instructions+=10;goto B66545f;
case 0x665465:c.instructions+=9;goto B665465;
case 0x665468:c.instructions+=8;goto B665468;
case 0x66546c:c.instructions+=7;goto B66546c;
case 0x66546e:c.instructions+=6;goto B66546e;
case 0x665471:c.instructions+=5;goto B665471;
case 0x665474:c.instructions+=4;goto B665474;
case 0x665477:c.instructions+=3;goto B665477;
case 0x66547a:c.instructions+=2;goto B66547a;
case 0x66547d:c.instructions+=1;goto B66547d;
case 0x665481:goto L665481;
case 0x665482:goto L665482;
case 0x665485:c.instructions+=4;goto B665485;
case 0x665486:c.instructions+=3;goto B665486;
case 0x665487:c.instructions+=2;goto B665487;
case 0x665488:c.instructions+=1;goto B665488;
case 0x66548b:goto L66548b;
case 0x66548d:c.instructions+=17;goto B66548d;
case 0x66548e:c.instructions+=16;goto B66548e;
case 0x665490:c.instructions+=15;goto B665490;
case 0x665493:c.instructions+=14;goto B665493;
case 0x665494:c.instructions+=13;goto B665494;
case 0x665495:c.instructions+=12;goto B665495;
case 0x665497:c.instructions+=11;goto B665497;
case 0x66549a:c.instructions+=10;goto B66549a;
case 0x66549d:c.instructions+=9;goto B66549d;
case 0x66549f:c.instructions+=8;goto B66549f;
case 0x6654a2:c.instructions+=7;goto B6654a2;
case 0x6654a4:c.instructions+=6;goto B6654a4;
case 0x6654a7:c.instructions+=5;goto B6654a7;
case 0x6654a9:c.instructions+=4;goto B6654a9;
case 0x6654ac:c.instructions+=3;goto B6654ac;
case 0x6654af:c.instructions+=2;goto B6654af;
case 0x6654b2:c.instructions+=1;goto B6654b2;
case 0x6654b4:goto L6654b4;
case 0x6654b9:c.instructions+=1;goto B6654b9;
case 0x6654be:goto L6654be;
case 0x6654c0:c.instructions+=7;goto B6654c0;
case 0x6654c1:c.instructions+=6;goto B6654c1;
case 0x6654c4:c.instructions+=5;goto B6654c4;
case 0x6654c7:c.instructions+=4;goto B6654c7;
case 0x6654c9:c.instructions+=3;goto B6654c9;
case 0x6654cc:c.instructions+=2;goto B6654cc;
case 0x6654cf:c.instructions+=1;goto B6654cf;
case 0x6654d4:goto L6654d4;
case 0x6654d6:c.instructions+=1;goto B6654d6;
case 0x6654dc:goto L6654dc;
case 0x6654df:c.instructions+=2;goto B6654df;
case 0x6654e1:c.instructions+=1;goto B6654e1;
case 0x6654e6:goto L6654e6;
case 0x6654e8:c.instructions+=2;goto B6654e8;
case 0x6654ea:c.instructions+=1;goto B6654ea;
case 0x6654f0:goto L6654f0;
case 0x6654f2:c.instructions+=1;goto B6654f2;
case 0x6654f4:goto L6654f4;
case 0x6654fb:c.instructions+=1;goto B6654fb;
case 0x6654fe:goto L6654fe;
case 0x665501:c.instructions+=2;goto B665501;
case 0x665503:c.instructions+=1;goto B665503;
case 0x665509:goto L665509;
case 0x66550c:c.instructions+=1;goto B66550c;
case 0x665512:goto L665512;
case 0x665515:c.instructions+=1;goto B665515;
case 0x665517:goto L665517;
case 0x66551a:c.instructions+=1;goto B66551a;
case 0x665520:goto L665520;
case 0x665523:c.instructions+=1;goto B665523;
case 0x665525:goto L665525;
case 0x665528:c.instructions+=4;goto B665528;
case 0x66552b:c.instructions+=3;goto B66552b;
case 0x66552d:c.instructions+=2;goto B66552d;
case 0x665532:c.instructions+=1;goto B665532;
case 0x665534:goto L665534;
case 0x665536:c.instructions+=7;goto B665536;
case 0x665539:c.instructions+=6;goto B665539;
case 0x66553b:c.instructions+=5;goto B66553b;
case 0x66553e:c.instructions+=4;goto B66553e;
case 0x665541:c.instructions+=3;goto B665541;
case 0x665543:c.instructions+=2;goto B665543;
case 0x665546:c.instructions+=1;goto B665546;
case 0x665548:goto L665548;
case 0x66554b:c.instructions+=4;goto B66554b;
case 0x66554e:c.instructions+=3;goto B66554e;
case 0x665550:c.instructions+=2;goto B665550;
case 0x665553:c.instructions+=1;goto B665553;
case 0x665555:goto L665555;
case 0x665558:c.instructions+=4;goto B665558;
case 0x66555a:c.instructions+=3;goto B66555a;
case 0x66555d:c.instructions+=2;goto B66555d;
case 0x665560:c.instructions+=1;goto B665560;
case 0x665565:goto L665565;
case 0x665567:c.instructions+=1;goto B665567;
case 0x665569:goto L665569;
case 0x66556c:c.instructions+=3;goto B66556c;
case 0x66556f:c.instructions+=2;goto B66556f;
case 0x665572:c.instructions+=1;goto B665572;
case 0x665574:goto L665574;
case 0x665576:goto L665576;
case 0x665579:c.instructions+=2;goto B665579;
case 0x66557c:c.instructions+=1;goto B66557c;
case 0x66557e:goto L66557e;
case 0x665580:goto L665580;
case 0x665583:c.instructions+=3;goto B665583;
case 0x665585:c.instructions+=2;goto B665585;
case 0x665588:c.instructions+=1;goto B665588;
case 0x66558a:goto L66558a;
case 0x66558d:c.instructions+=1;goto B66558d;
case 0x665593:goto L665593;
case 0x665596:c.instructions+=1;goto B665596;
case 0x665598:goto L665598;
case 0x66559b:c.instructions+=1;goto B66559b;
case 0x6655a1:goto L6655a1;
case 0x6655a6:goto L6655a6;
case 0x6655a7:goto L6655a7;
case 0x6655a8:c.instructions+=3;goto B6655a8;
case 0x6655a9:c.instructions+=2;goto B6655a9;
case 0x6655aa:c.instructions+=1;goto B6655aa;
case 0x6655ad:goto L6655ad;
case 0x6655b0:c.instructions+=6;goto B6655b0;
case 0x6655b6:c.instructions+=5;goto B6655b6;
case 0x6655b9:c.instructions+=4;goto B6655b9;
case 0x6655bd:c.instructions+=3;goto B6655bd;
case 0x6655c0:c.instructions+=2;goto B6655c0;
case 0x6655c3:c.instructions+=1;goto B6655c3;
case 0x6655c5:goto L6655c5;
case 0x6655c9:c.instructions+=5;goto B6655c9;
case 0x6655cb:c.instructions+=4;goto B6655cb;
case 0x6655cf:c.instructions+=3;goto B6655cf;
case 0x6655d3:c.instructions+=2;goto B6655d3;
case 0x6655d5:c.instructions+=1;goto B6655d5;
case 0x6655db:goto L6655db;
case 0x6655de:goto L6655de;
case 0x6655e2:c.instructions+=13;goto B6655e2;
case 0x6655e5:c.instructions+=12;goto B6655e5;
case 0x6655e9:c.instructions+=11;goto B6655e9;
case 0x6655ec:c.instructions+=10;goto B6655ec;
case 0x6655ef:c.instructions+=9;goto B6655ef;
case 0x6655f3:c.instructions+=8;goto B6655f3;
case 0x6655f6:c.instructions+=7;goto B6655f6;
case 0x6655f9:c.instructions+=6;goto B6655f9;
case 0x6655fb:c.instructions+=5;goto B6655fb;
case 0x6655fe:c.instructions+=4;goto B6655fe;
case 0x665600:c.instructions+=3;goto B665600;
case 0x665602:c.instructions+=2;goto B665602;
case 0x665607:c.instructions+=1;goto B665607;
case 0x665609:goto L665609;
case 0x66560b:c.instructions+=5;goto B66560b;
case 0x66560e:c.instructions+=4;goto B66560e;
case 0x66560f:c.instructions+=3;goto B66560f;
case 0x665611:c.instructions+=2;goto B665611;
case 0x665613:c.instructions+=1;goto B665613;
case 0x665618:goto L665618;
case 0x66561a:c.instructions+=1;goto B66561a;
case 0x665620:goto L665620;
case 0x665623:c.instructions+=9;goto B665623;
case 0x665626:c.instructions+=8;goto B665626;
case 0x665629:c.instructions+=7;goto B665629;
case 0x66562c:c.instructions+=6;goto B66562c;
case 0x66562e:c.instructions+=5;goto B66562e;
case 0x665630:c.instructions+=4;goto B665630;
case 0x665632:c.instructions+=3;goto B665632;
case 0x665637:c.instructions+=2;goto B665637;
case 0x66563a:c.instructions+=1;goto B66563a;
case 0x665640:goto L665640;
case 0x665642:c.instructions+=3;goto B665642;
case 0x665646:c.instructions+=2;goto B665646;
case 0x665649:c.instructions+=1;goto B665649;
case 0x66564f:goto L66564f;
case 0x665652:goto L665652;
case 0x665655:c.instructions+=39;goto B665655;
case 0x665658:c.instructions+=38;goto B665658;
case 0x66565a:c.instructions+=37;goto B66565a;
case 0x66565e:c.instructions+=36;goto B66565e;
case 0x665664:c.instructions+=35;goto B665664;
case 0x665666:c.instructions+=34;goto B665666;
case 0x665669:c.instructions+=33;goto B665669;
case 0x66566d:c.instructions+=32;goto B66566d;
case 0x66566e:c.instructions+=31;goto B66566e;
case 0x665670:c.instructions+=30;goto B665670;
case 0x665674:c.instructions+=29;goto B665674;
case 0x665677:c.instructions+=28;goto B665677;
case 0x66567d:c.instructions+=27;goto B66567d;
case 0x665680:c.instructions+=26;goto B665680;
case 0x665682:c.instructions+=25;goto B665682;
case 0x665685:c.instructions+=24;goto B665685;
case 0x665689:c.instructions+=23;goto B665689;
case 0x66568b:c.instructions+=22;goto B66568b;
case 0x665691:c.instructions+=21;goto B665691;
case 0x665693:c.instructions+=20;goto B665693;
case 0x665695:c.instructions+=19;goto B665695;
case 0x665698:c.instructions+=18;goto B665698;
case 0x66569a:c.instructions+=17;goto B66569a;
case 0x66569c:c.instructions+=16;goto B66569c;
case 0x66569e:c.instructions+=15;goto B66569e;
case 0x6656a1:c.instructions+=14;goto B6656a1;
case 0x6656a3:c.instructions+=13;goto B6656a3;
case 0x6656a7:c.instructions+=12;goto B6656a7;
case 0x6656aa:c.instructions+=11;goto B6656aa;
case 0x6656ad:c.instructions+=10;goto B6656ad;
case 0x6656b0:c.instructions+=9;goto B6656b0;
case 0x6656b3:c.instructions+=8;goto B6656b3;
case 0x6656b6:c.instructions+=7;goto B6656b6;
case 0x6656b8:c.instructions+=6;goto B6656b8;
case 0x6656bb:c.instructions+=5;goto B6656bb;
case 0x6656bd:c.instructions+=4;goto B6656bd;
case 0x6656c1:c.instructions+=3;goto B6656c1;
case 0x6656c6:c.instructions+=2;goto B6656c6;
case 0x6656c9:c.instructions+=1;goto B6656c9;
case 0x6656cf:goto L6656cf;
case 0x6656d2:c.instructions+=2;goto B6656d2;
case 0x6656d8:c.instructions+=1;goto B6656d8;
case 0x6656da:goto L6656da;
case 0x6656de:c.instructions+=8;goto B6656de;
case 0x6656e1:c.instructions+=7;goto B6656e1;
case 0x6656e4:c.instructions+=6;goto B6656e4;
case 0x6656e7:c.instructions+=5;goto B6656e7;
case 0x6656ea:c.instructions+=4;goto B6656ea;
case 0x6656f0:c.instructions+=3;goto B6656f0;
case 0x6656f3:c.instructions+=2;goto B6656f3;
case 0x6656f6:c.instructions+=1;goto B6656f6;
case 0x6656fb:goto L6656fb;
case 0x665701:c.instructions+=2;goto B665701;
case 0x665707:c.instructions+=1;goto B665707;
case 0x66570d:goto L66570d;
case 0x665711:c.instructions+=4;goto B665711;
case 0x665714:c.instructions+=3;goto B665714;
case 0x66571a:c.instructions+=2;goto B66571a;
case 0x66571b:c.instructions+=1;goto B66571b;
case 0x66571d:goto L66571d;
case 0x66571e:c.instructions+=1;goto B66571e;
case 0x665720:goto L665720;
case 0x665721:c.instructions+=1;goto B665721;
case 0x665723:goto L665723;
case 0x665728:c.instructions+=1;goto B665728;
case 0x66572e:goto L66572e;
case 0x665734:c.instructions+=30;goto B665734;
case 0x66573b:c.instructions+=29;goto B66573b;
case 0x66573e:c.instructions+=28;goto B66573e;
case 0x665741:c.instructions+=27;goto B665741;
case 0x665744:c.instructions+=26;goto B665744;
case 0x665746:c.instructions+=25;goto B665746;
case 0x665749:c.instructions+=24;goto B665749;
case 0x66574c:c.instructions+=23;goto B66574c;
case 0x66574f:c.instructions+=22;goto B66574f;
case 0x665751:c.instructions+=21;goto B665751;
case 0x665754:c.instructions+=20;goto B665754;
case 0x665756:c.instructions+=19;goto B665756;
case 0x665759:c.instructions+=18;goto B665759;
case 0x66575b:c.instructions+=17;goto B66575b;
case 0x66575e:c.instructions+=16;goto B66575e;
case 0x665761:c.instructions+=15;goto B665761;
case 0x665764:c.instructions+=14;goto B665764;
case 0x665766:c.instructions+=13;goto B665766;
case 0x665769:c.instructions+=12;goto B665769;
case 0x66576c:c.instructions+=11;goto B66576c;
case 0x66576f:c.instructions+=10;goto B66576f;
case 0x665771:c.instructions+=9;goto B665771;
case 0x665774:c.instructions+=8;goto B665774;
case 0x665777:c.instructions+=7;goto B665777;
case 0x66577a:c.instructions+=6;goto B66577a;
case 0x66577d:c.instructions+=5;goto B66577d;
case 0x665780:c.instructions+=4;goto B665780;
case 0x665783:c.instructions+=3;goto B665783;
case 0x665786:c.instructions+=2;goto B665786;
case 0x66578a:c.instructions+=1;goto B66578a;
case 0x665790:goto L665790;
case 0x665794:c.instructions+=4;goto B665794;
case 0x665797:c.instructions+=3;goto B665797;
case 0x66579b:c.instructions+=2;goto B66579b;
case 0x66579e:c.instructions+=1;goto B66579e;
case 0x6657a4:goto L6657a4;
case 0x6657a7:goto L6657a7;
case 0x6657aa:c.instructions+=3;goto B6657aa;
case 0x6657ad:c.instructions+=2;goto B6657ad;
case 0x6657b0:c.instructions+=1;goto B6657b0;
case 0x6657b6:goto L6657b6;
case 0x6657b9:c.instructions+=1;goto B6657b9;
case 0x6657be:goto L6657be;
case 0x6657c3:c.instructions+=1;goto B6657c3;
case 0x6657c8:goto L6657c8;
case 0x6657cb:c.instructions+=6;goto B6657cb;
case 0x6657cd:c.instructions+=5;goto B6657cd;
case 0x6657d0:c.instructions+=4;goto B6657d0;
case 0x6657d3:c.instructions+=3;goto B6657d3;
case 0x6657d5:c.instructions+=2;goto B6657d5;
case 0x6657da:c.instructions+=1;goto B6657da;
case 0x6657e0:goto L6657e0;
case 0x6657e4:c.instructions+=2;goto B6657e4;
case 0x6657e6:c.instructions+=1;goto B6657e6;
case 0x6657ec:goto L6657ec;
case 0x6657ee:c.instructions+=3;goto B6657ee;
case 0x6657f0:c.instructions+=2;goto B6657f0;
case 0x6657f3:c.instructions+=1;goto B6657f3;
case 0x6657f9:goto L6657f9;
case 0x6657fb:c.instructions+=1;goto B6657fb;
case 0x665801:goto L665801;
case 0x665804:c.instructions+=5;goto B665804;
case 0x665807:c.instructions+=4;goto B665807;
case 0x66580a:c.instructions+=3;goto B66580a;
case 0x66580c:c.instructions+=2;goto B66580c;
case 0x665812:c.instructions+=1;goto B665812;
case 0x665818:goto L665818;
case 0x66581a:c.instructions+=5;goto B66581a;
case 0x66581d:c.instructions+=4;goto B66581d;
case 0x665821:c.instructions+=3;goto B665821;
case 0x665824:c.instructions+=2;goto B665824;
case 0x665827:c.instructions+=1;goto B665827;
case 0x665829:goto L665829;
case 0x66582c:c.instructions+=1;goto B66582c;
case 0x665832:goto L665832;
case 0x665838:c.instructions+=7;goto B665838;
case 0x66583b:c.instructions+=6;goto B66583b;
case 0x66583e:c.instructions+=5;goto B66583e;
case 0x665842:c.instructions+=4;goto B665842;
case 0x665845:c.instructions+=3;goto B665845;
case 0x665848:c.instructions+=2;goto B665848;
case 0x66584b:c.instructions+=1;goto B66584b;
case 0x665851:goto L665851;
case 0x665854:c.instructions+=12;goto B665854;
case 0x665859:c.instructions+=11;goto B665859;
case 0x66585d:c.instructions+=10;goto B66585d;
case 0x665861:c.instructions+=9;goto B665861;
case 0x665865:c.instructions+=8;goto B665865;
case 0x665869:c.instructions+=7;goto B665869;
case 0x66586d:c.instructions+=6;goto B66586d;
case 0x665870:c.instructions+=5;goto B665870;
case 0x665873:c.instructions+=4;goto B665873;
case 0x665876:c.instructions+=3;goto B665876;
case 0x66587b:c.instructions+=2;goto B66587b;
case 0x66587f:c.instructions+=1;goto B66587f;
case 0x665885:goto L665885;
case 0x665887:c.instructions+=4;goto B665887;
case 0x665888:c.instructions+=3;goto B665888;
case 0x665889:c.instructions+=2;goto B665889;
case 0x66588b:c.instructions+=1;goto B66588b;
case 0x665890:goto L665890;
case 0x665892:c.instructions+=2;goto B665892;
case 0x665894:c.instructions+=1;goto B665894;
case 0x66589a:goto L66589a;
case 0x66589e:c.instructions+=2;goto B66589e;
case 0x6658a1:c.instructions+=1;goto B6658a1;
case 0x6658a3:goto L6658a3;
case 0x6658a7:c.instructions+=4;goto B6658a7;
case 0x6658ad:c.instructions+=3;goto B6658ad;
case 0x6658b0:c.instructions+=2;goto B6658b0;
case 0x6658b7:c.instructions+=1;goto B6658b7;
case 0x6658b9:goto L6658b9;
case 0x6658bd:c.instructions+=3;goto B6658bd;
case 0x6658c3:c.instructions+=2;goto B6658c3;
case 0x6658c6:c.instructions+=1;goto B6658c6;
case 0x6658cd:goto L6658cd;
case 0x6658d0:c.instructions+=13;goto B6658d0;
case 0x6658d6:c.instructions+=12;goto B6658d6;
case 0x6658d9:c.instructions+=11;goto B6658d9;
case 0x6658dd:c.instructions+=10;goto B6658dd;
case 0x6658e0:c.instructions+=9;goto B6658e0;
case 0x6658e2:c.instructions+=8;goto B6658e2;
case 0x6658e5:c.instructions+=7;goto B6658e5;
case 0x6658e8:c.instructions+=6;goto B6658e8;
case 0x6658eb:c.instructions+=5;goto B6658eb;
case 0x6658ee:c.instructions+=4;goto B6658ee;
case 0x6658f1:c.instructions+=3;goto B6658f1;
case 0x6658f3:c.instructions+=2;goto B6658f3;
case 0x6658f6:c.instructions+=1;goto B6658f6;
case 0x6658f7:goto L6658f7;
case 0x6658f9:goto L6658f9;
case 0x6658fc:c.instructions+=13;goto B6658fc;
case 0x6658fe:c.instructions+=12;goto B6658fe;
case 0x665901:c.instructions+=11;goto B665901;
case 0x665904:c.instructions+=10;goto B665904;
case 0x665907:c.instructions+=9;goto B665907;
case 0x66590a:c.instructions+=8;goto B66590a;
case 0x66590d:c.instructions+=7;goto B66590d;
case 0x66590f:c.instructions+=6;goto B66590f;
case 0x665912:c.instructions+=5;goto B665912;
case 0x665915:c.instructions+=4;goto B665915;
case 0x665918:c.instructions+=3;goto B665918;
case 0x66591a:c.instructions+=2;goto B66591a;
case 0x66591d:c.instructions+=1;goto B66591d;
case 0x66591f:goto L66591f;
case 0x665922:goto L665922;
case 0x665925:c.instructions+=5;goto B665925;
case 0x665928:c.instructions+=4;goto B665928;
case 0x66592b:c.instructions+=3;goto B66592b;
case 0x66592d:c.instructions+=2;goto B66592d;
case 0x665934:c.instructions+=1;goto B665934;
case 0x665939:goto L665939;
case 0x66593b:c.instructions+=2;goto B66593b;
case 0x66593c:c.instructions+=1;goto B66593c;
case 0x66593e:goto L66593e;
case 0x665940:c.instructions+=8;goto B665940;
case 0x665945:c.instructions+=7;goto B665945;
case 0x665946:c.instructions+=6;goto B665946;
case 0x665947:c.instructions+=5;goto B665947;
case 0x66594a:c.instructions+=4;goto B66594a;
case 0x66594c:c.instructions+=3;goto B66594c;
case 0x66594d:c.instructions+=2;goto B66594d;
case 0x66594f:c.instructions+=1;goto B66594f;
case 0x665954:goto L665954;
case 0x665956:goto L665956;
case 0x665958:goto L665958;
case 0x66595a:c.instructions+=3;goto B66595a;
case 0x66595d:c.instructions+=2;goto B66595d;
case 0x665960:c.instructions+=1;goto B665960;
case 0x665966:goto L665966;
case 0x665969:c.instructions+=11;goto B665969;
case 0x66596c:c.instructions+=10;goto B66596c;
case 0x66596d:c.instructions+=9;goto B66596d;
case 0x665970:c.instructions+=8;goto B665970;
case 0x665976:c.instructions+=7;goto B665976;
case 0x665979:c.instructions+=6;goto B665979;
case 0x66597d:c.instructions+=5;goto B66597d;
case 0x66597e:c.instructions+=4;goto B66597e;
case 0x66597f:c.instructions+=3;goto B66597f;
case 0x665982:c.instructions+=2;goto B665982;
case 0x665986:c.instructions+=1;goto B665986;
case 0x66598b:goto L66598b;
case 0x66598d:c.instructions+=1;goto B66598d;
case 0x665993:goto L665993;
case 0x665996:c.instructions+=2;goto B665996;
case 0x665999:c.instructions+=1;goto B665999;
case 0x66599c:goto L66599c;
case 0x66599f:c.instructions+=4;goto B66599f;
case 0x6659a2:c.instructions+=3;goto B6659a2;
case 0x6659a5:c.instructions+=2;goto B6659a5;
case 0x6659a8:c.instructions+=1;goto B6659a8;
case 0x6659ae:goto L6659ae;
case 0x6659b1:c.instructions+=2;goto B6659b1;
case 0x6659b4:c.instructions+=1;goto B6659b4;
case 0x6659b9:goto L6659b9;
case 0x6659bc:c.instructions+=1;goto B6659bc;
case 0x6659c2:goto L6659c2;
case 0x6659c6:c.instructions+=1;goto B6659c6;
case 0x6659c8:goto L6659c8;
case 0x6659cc:c.instructions+=1;goto B6659cc;
case 0x6659d2:goto L6659d2;
case 0x6659d5:c.instructions+=5;goto B6659d5;
case 0x6659d8:c.instructions+=4;goto B6659d8;
case 0x6659dd:c.instructions+=3;goto B6659dd;
case 0x6659df:c.instructions+=2;goto B6659df;
case 0x6659e1:c.instructions+=1;goto B6659e1;
case 0x6659e7:goto L6659e7;
case 0x6659ea:c.instructions+=9;goto B6659ea;
case 0x6659ed:c.instructions+=8;goto B6659ed;
case 0x6659f0:c.instructions+=7;goto B6659f0;
case 0x6659f3:c.instructions+=6;goto B6659f3;
case 0x6659f6:c.instructions+=5;goto B6659f6;
case 0x6659f8:c.instructions+=4;goto B6659f8;
case 0x6659fb:c.instructions+=3;goto B6659fb;
case 0x6659fd:c.instructions+=2;goto B6659fd;
case 0x6659ff:c.instructions+=1;goto B6659ff;
case 0x665a05:goto L665a05;
case 0x665a08:c.instructions+=4;goto B665a08;
case 0x665a0a:c.instructions+=3;goto B665a0a;
case 0x665a0d:c.instructions+=2;goto B665a0d;
case 0x665a10:c.instructions+=1;goto B665a10;
case 0x665a15:goto L665a15;
case 0x665a17:c.instructions+=11;goto B665a17;
case 0x665a18:c.instructions+=10;goto B665a18;
case 0x665a1a:c.instructions+=9;goto B665a1a;
case 0x665a1d:c.instructions+=8;goto B665a1d;
case 0x665a20:c.instructions+=7;goto B665a20;
case 0x665a21:c.instructions+=6;goto B665a21;
case 0x665a22:c.instructions+=5;goto B665a22;
case 0x665a24:c.instructions+=4;goto B665a24;
case 0x665a26:c.instructions+=3;goto B665a26;
case 0x665a27:c.instructions+=2;goto B665a27;
case 0x665a29:c.instructions+=1;goto B665a29;
case 0x665a2f:goto L665a2f;
case 0x665a32:c.instructions+=1;goto B665a32;
case 0x665a38:goto L665a38;
case 0x665a3a:c.instructions+=2;goto B665a3a;
case 0x665a3d:c.instructions+=1;goto B665a3d;
case 0x665a42:goto L665a42;
case 0x665a44:c.instructions+=1;goto B665a44;
case 0x665a46:goto L665a46;
case 0x665a49:c.instructions+=2;goto B665a49;
case 0x665a4c:c.instructions+=1;goto B665a4c;
case 0x665a4e:goto L665a4e;
case 0x665a50:c.instructions+=3;goto B665a50;
case 0x665a53:c.instructions+=2;goto B665a53;
case 0x665a55:c.instructions+=1;goto B665a55;
case 0x665a5a:goto L665a5a;
case 0x665a5c:c.instructions+=1;goto B665a5c;
case 0x665a5e:goto L665a5e;
case 0x665a60:c.instructions+=2;goto B665a60;
case 0x665a63:c.instructions+=1;goto B665a63;
case 0x665a68:goto L665a68;
case 0x665a6a:c.instructions+=1;goto B665a6a;
case 0x665a70:goto L665a70;
case 0x665a73:c.instructions+=1;goto B665a73;
case 0x665a76:goto L665a76;
case 0x665a78:c.instructions+=6;goto B665a78;
case 0x665a7a:c.instructions+=5;goto B665a7a;
case 0x665a7d:c.instructions+=4;goto B665a7d;
case 0x665a80:c.instructions+=3;goto B665a80;
case 0x665a83:c.instructions+=2;goto B665a83;
case 0x665a86:c.instructions+=1;goto B665a86;
case 0x665a8c:goto L665a8c;
case 0x665a8f:c.instructions+=5;goto B665a8f;
case 0x665a95:c.instructions+=4;goto B665a95;
case 0x665a97:c.instructions+=3;goto B665a97;
case 0x665a9a:c.instructions+=2;goto B665a9a;
case 0x665a9d:c.instructions+=1;goto B665a9d;
case 0x665a9f:goto L665a9f;
case 0x665aa1:c.instructions+=3;goto B665aa1;
case 0x665aa7:c.instructions+=2;goto B665aa7;
case 0x665aaa:c.instructions+=1;goto B665aaa;
case 0x665aac:goto L665aac;
case 0x665ab2:c.instructions+=3;goto B665ab2;
case 0x665ab5:c.instructions+=2;goto B665ab5;
case 0x665ab9:c.instructions+=1;goto B665ab9;
case 0x665abb:goto L665abb;
case 0x665abe:c.instructions+=1;goto B665abe;
case 0x665ac0:goto L665ac0;
case 0x665ac3:c.instructions+=1;goto B665ac3;
case 0x665ac6:goto L665ac6;
case 0x665ac9:c.instructions+=4;goto B665ac9;
case 0x665acb:c.instructions+=3;goto B665acb;
case 0x665acd:c.instructions+=2;goto B665acd;
case 0x665acf:c.instructions+=1;goto B665acf;
case 0x665ad1:goto L665ad1;
case 0x665ad4:goto L665ad4;
case 0x665ad7:c.instructions+=1;goto B665ad7;
case 0x665ad9:goto L665ad9;
case 0x665adb:c.instructions+=1;goto B665adb;
case 0x665add:goto L665add;
case 0x665ade:c.instructions+=1;goto B665ade;
case 0x665adf:goto L665adf;
case 0x665ae1:c.instructions+=2;goto B665ae1;
case 0x665ae3:c.instructions+=1;goto B665ae3;
case 0x665ae5:goto L665ae5;
case 0x665ae7:c.instructions+=3;goto B665ae7;
case 0x665ae9:c.instructions+=2;goto B665ae9;
case 0x665aeb:c.instructions+=1;goto B665aeb;
case 0x665af1:goto L665af1;
case 0x665af3:c.instructions+=1;goto B665af3;
case 0x665af5:goto L665af5;
case 0x665af7:c.instructions+=1;goto B665af7;
case 0x665afd:goto L665afd;
case 0x665aff:c.instructions+=1;goto B665aff;
case 0x665b05:goto L665b05;
case 0x665b08:c.instructions+=4;goto B665b08;
case 0x665b0b:c.instructions+=3;goto B665b0b;
case 0x665b0d:c.instructions+=2;goto B665b0d;
case 0x665b10:c.instructions+=1;goto B665b10;
case 0x665b16:goto L665b16;
case 0x665b18:goto L665b18;
case 0x665b1f:c.instructions+=1;goto B665b1f;
case 0x665b25:goto L665b25;
case 0x665b2b:c.instructions+=9;goto B665b2b;
case 0x665b2e:c.instructions+=8;goto B665b2e;
case 0x665b31:c.instructions+=7;goto B665b31;
case 0x665b33:c.instructions+=6;goto B665b33;
case 0x665b35:c.instructions+=5;goto B665b35;
case 0x665b38:c.instructions+=4;goto B665b38;
case 0x665b3b:c.instructions+=3;goto B665b3b;
case 0x665b3e:c.instructions+=2;goto B665b3e;
case 0x665b41:c.instructions+=1;goto B665b41;
case 0x665b44:goto L665b44;
case 0x665b47:c.instructions+=2;goto B665b47;
case 0x665b4a:c.instructions+=1;goto B665b4a;
case 0x665b50:goto L665b50;
case 0x665b53:c.instructions+=1;goto B665b53;
case 0x665b59:goto L665b59;
case 0x665b5c:c.instructions+=1;goto B665b5c;
case 0x665b62:goto L665b62;
case 0x665b63:c.instructions+=2;goto B665b63;
case 0x665b64:c.instructions+=1;goto B665b64;
case 0x665b6a:goto L665b6a;
case 0x665b6b:c.instructions+=3;goto B665b6b;
case 0x665b6d:c.instructions+=2;goto B665b6d;
case 0x665b6f:c.instructions+=1;goto B665b6f;
case 0x665b71:goto L665b71;
case 0x665b74:c.instructions+=1;goto B665b74;
case 0x665b77:goto L665b77;
case 0x665b79:c.instructions+=3;goto B665b79;
case 0x665b7a:c.instructions+=2;goto B665b7a;
case 0x665b7c:c.instructions+=1;goto B665b7c;
case 0x665b7e:goto L665b7e;
case 0x665b80:c.instructions+=15;goto B665b80;
case 0x665b81:c.instructions+=14;goto B665b81;
case 0x665b83:c.instructions+=13;goto B665b83;
case 0x665b86:c.instructions+=12;goto B665b86;
case 0x665b88:c.instructions+=11;goto B665b88;
case 0x665b8b:c.instructions+=10;goto B665b8b;
case 0x665b8d:c.instructions+=9;goto B665b8d;
case 0x665b90:c.instructions+=8;goto B665b90;
case 0x665b92:c.instructions+=7;goto B665b92;
case 0x665b94:c.instructions+=6;goto B665b94;
case 0x665b9a:c.instructions+=5;goto B665b9a;
case 0x665ba1:c.instructions+=4;goto B665ba1;
case 0x665ba4:c.instructions+=3;goto B665ba4;
case 0x665ba5:c.instructions+=2;goto B665ba5;
case 0x665ba8:c.instructions+=1;goto B665ba8;
case 0x665bad:goto L665bad;
case 0x665baf:c.instructions+=3;goto B665baf;
case 0x665bb0:c.instructions+=2;goto B665bb0;
case 0x665bb3:c.instructions+=1;goto B665bb3;
case 0x665bb9:goto L665bb9;
case 0x665bbf:c.instructions+=3;goto B665bbf;
case 0x665bc6:c.instructions+=2;goto B665bc6;
case 0x665bc7:c.instructions+=1;goto B665bc7;
case 0x665bcc:goto L665bcc;
case 0x665bce:c.instructions+=3;goto B665bce;
case 0x665bcf:c.instructions+=2;goto B665bcf;
case 0x665bd2:c.instructions+=1;goto B665bd2;
case 0x665bd8:goto L665bd8;
case 0x665bda:c.instructions+=1;goto B665bda;
case 0x665bdf:goto L665bdf;
case 0x665be1:c.instructions+=2;goto B665be1;
case 0x665be2:c.instructions+=1;goto B665be2;
case 0x665be4:goto L665be4;
case 0x665be6:c.instructions+=1;goto B665be6;
case 0x665beb:goto L665beb;
case 0x665bee:c.instructions+=1;goto B665bee;
case 0x665bf0:goto L665bf0;
case 0x665bf2:c.instructions+=2;goto B665bf2;
case 0x665bf4:c.instructions+=1;goto B665bf4;
case 0x665bf6:goto L665bf6;
case 0x665bf7:c.instructions+=3;goto B665bf7;
case 0x665bf9:c.instructions+=2;goto B665bf9;
case 0x665bfb:c.instructions+=1;goto B665bfb;
case 0x665bfd:goto L665bfd;
case 0x665bff:c.instructions+=1;goto B665bff;
case 0x665c01:goto L665c01;
case 0x665c02:c.instructions+=1;goto B665c02;
case 0x665c07:goto L665c07;
case 0x665c08:c.instructions+=3;goto B665c08;
case 0x665c0b:c.instructions+=2;goto B665c0b;
case 0x665c0e:c.instructions+=1;goto B665c0e;
case 0x665c10:goto L665c10;
case 0x665c12:goto L665c12;
case 0x665c13:c.instructions+=4;goto B665c13;
case 0x665c14:c.instructions+=3;goto B665c14;
case 0x665c15:c.instructions+=2;goto B665c15;
case 0x665c16:c.instructions+=1;goto B665c16;
case 0x665c19:goto L665c19;
case 0x665c1c:c.instructions+=1;goto B665c1c;
case 0x665c1e:goto L665c1e;
case 0x665c1f:goto L665c1f;
case 0x665c21:c.instructions+=2;goto B665c21;
case 0x665c24:c.instructions+=1;goto B665c24;
case 0x665c26:goto L665c26;
case 0x665c29:c.instructions+=1;goto B665c29;
case 0x665c2b:goto L665c2b;
case 0x665c2e:c.instructions+=6;goto B665c2e;
case 0x665c30:c.instructions+=5;goto B665c30;
case 0x665c31:c.instructions+=4;goto B665c31;
case 0x665c32:c.instructions+=3;goto B665c32;
case 0x665c34:c.instructions+=2;goto B665c34;
case 0x665c35:c.instructions+=1;goto B665c35;
case 0x665c3a:goto L665c3a;
case 0x665c3c:c.instructions+=1;goto B665c3c;
case 0x665c3e:goto L665c3e;
case 0x665c40:c.instructions+=2;goto B665c40;
case 0x665c42:c.instructions+=1;goto B665c42;
case 0x665c44:goto L665c44;
case 0x665c47:c.instructions+=1;goto B665c47;
case 0x665c49:goto L665c49;
case 0x665c4c:c.instructions+=3;goto B665c4c;
case 0x665c4d:c.instructions+=2;goto B665c4d;
case 0x665c4e:c.instructions+=1;goto B665c4e;
case 0x665c4f:goto L665c4f;
case 0x665c51:c.instructions+=1;goto B665c51;
case 0x665c56:goto L665c56;
case 0x665c58:goto L665c58;
case 0x665c5b:c.instructions+=5;goto B665c5b;
case 0x665c5c:c.instructions+=4;goto B665c5c;
case 0x665c5d:c.instructions+=3;goto B665c5d;
case 0x665c5f:c.instructions+=2;goto B665c5f;
case 0x665c60:c.instructions+=1;goto B665c60;
case 0x665c62:goto L665c62;
case 0x665c66:goto L665c66;
case 0x665c6a:c.instructions+=1;goto B665c6a;
case 0x665c70:goto L665c70;
case 0x665c76:c.instructions+=6;goto B665c76;
case 0x665c79:c.instructions+=5;goto B665c79;
case 0x665c7f:c.instructions+=4;goto B665c7f;
case 0x665c82:c.instructions+=3;goto B665c82;
case 0x665c84:c.instructions+=2;goto B665c84;
case 0x665c87:c.instructions+=1;goto B665c87;
case 0x665c89:goto L665c89;
case 0x665c8b:goto L665c8b;
case 0x665c8d:c.instructions+=1;goto B665c8d;
case 0x665c90:goto L665c90;
case 0x665c92:goto L665c92;
case 0x665c98:c.instructions+=3;goto B665c98;
case 0x665c9c:c.instructions+=2;goto B665c9c;
case 0x665ca2:c.instructions+=1;goto B665ca2;
case 0x665ca7:goto L665ca7;
case 0x665caa:c.instructions+=21;goto B665caa;
case 0x665cb0:c.instructions+=20;goto B665cb0;
case 0x665cb3:c.instructions+=19;goto B665cb3;
case 0x665cb5:c.instructions+=18;goto B665cb5;
case 0x665cbb:c.instructions+=17;goto B665cbb;
case 0x665cbc:c.instructions+=16;goto B665cbc;
case 0x665cc3:c.instructions+=15;goto B665cc3;
case 0x665cc7:c.instructions+=14;goto B665cc7;
case 0x665cca:c.instructions+=13;goto B665cca;
case 0x665ccd:c.instructions+=12;goto B665ccd;
case 0x665cd0:c.instructions+=11;goto B665cd0;
case 0x665cd3:c.instructions+=10;goto B665cd3;
case 0x665cda:c.instructions+=9;goto B665cda;
case 0x665cdd:c.instructions+=8;goto B665cdd;
case 0x665ce0:c.instructions+=7;goto B665ce0;
case 0x665ce6:c.instructions+=6;goto B665ce6;
case 0x665ce9:c.instructions+=5;goto B665ce9;
case 0x665ceb:c.instructions+=4;goto B665ceb;
case 0x665ced:c.instructions+=3;goto B665ced;
case 0x665cf0:c.instructions+=2;goto B665cf0;
case 0x665cf3:c.instructions+=1;goto B665cf3;
case 0x665cf9:goto L665cf9;
case 0x665cfc:c.instructions+=1;goto B665cfc;
case 0x665d02:goto L665d02;
case 0x665d05:c.instructions+=1;goto B665d05;
case 0x665d0b:goto L665d0b;
case 0x665d0d:c.instructions+=1;goto B665d0d;
case 0x665d13:goto L665d13;
case 0x665d15:c.instructions+=1;goto B665d15;
case 0x665d1b:goto L665d1b;
case 0x665d1e:c.instructions+=4;goto B665d1e;
case 0x665d21:c.instructions+=3;goto B665d21;
case 0x665d22:c.instructions+=2;goto B665d22;
case 0x665d25:c.instructions+=1;goto B665d25;
case 0x665d2a:goto L665d2a;
case 0x665d2c:c.instructions+=3;goto B665d2c;
case 0x665d2d:c.instructions+=2;goto B665d2d;
case 0x665d30:c.instructions+=1;goto B665d30;
case 0x665d36:goto L665d36;
case 0x665d39:c.instructions+=5;goto B665d39;
case 0x665d3a:c.instructions+=4;goto B665d3a;
case 0x665d3d:c.instructions+=3;goto B665d3d;
case 0x665d44:c.instructions+=2;goto B665d44;
case 0x665d45:c.instructions+=1;goto B665d45;
case 0x665d4a:goto L665d4a;
case 0x665d4c:c.instructions+=2;goto B665d4c;
case 0x665d4d:c.instructions+=1;goto B665d4d;
case 0x665d4f:goto L665d4f;
case 0x665d54:c.instructions+=6;goto B665d54;
case 0x665d55:c.instructions+=5;goto B665d55;
case 0x665d58:c.instructions+=4;goto B665d58;
case 0x665d5a:c.instructions+=3;goto B665d5a;
case 0x665d5b:c.instructions+=2;goto B665d5b;
case 0x665d5d:c.instructions+=1;goto B665d5d;
case 0x665d62:goto L665d62;
case 0x665d65:c.instructions+=1;goto B665d65;
case 0x665d67:goto L665d67;
case 0x665d6b:goto L665d6b;
case 0x665d6f:c.instructions+=1;goto B665d6f;
case 0x665d75:goto L665d75;
case 0x665d78:c.instructions+=4;goto B665d78;
case 0x665d7b:c.instructions+=3;goto B665d7b;
case 0x665d7d:c.instructions+=2;goto B665d7d;
case 0x665d80:c.instructions+=1;goto B665d80;
case 0x665d82:goto L665d82;
case 0x665d84:goto L665d84;
case 0x665d86:c.instructions+=1;goto B665d86;
case 0x665d89:goto L665d89;
case 0x665d8b:goto L665d8b;
case 0x665d8e:c.instructions+=6;goto B665d8e;
case 0x665d90:c.instructions+=5;goto B665d90;
case 0x665d93:c.instructions+=4;goto B665d93;
case 0x665d96:c.instructions+=3;goto B665d96;
case 0x665d99:c.instructions+=2;goto B665d99;
case 0x665d9b:c.instructions+=1;goto B665d9b;
case 0x665d9c:goto L665d9c;
case 0x665d9e:goto L665d9e;
case 0x665da1:c.instructions+=11;goto B665da1;
case 0x665da4:c.instructions+=10;goto B665da4;
case 0x665da6:c.instructions+=9;goto B665da6;
case 0x665da7:c.instructions+=8;goto B665da7;
case 0x665daa:c.instructions+=7;goto B665daa;
case 0x665dad:c.instructions+=6;goto B665dad;
case 0x665db0:c.instructions+=5;goto B665db0;
case 0x665db3:c.instructions+=4;goto B665db3;
case 0x665db6:c.instructions+=3;goto B665db6;
case 0x665db8:c.instructions+=2;goto B665db8;
case 0x665dba:c.instructions+=1;goto B665dba;
case 0x665dbd:goto L665dbd;
case 0x665dbf:goto L665dbf;
case 0x665dc1:c.instructions+=2;goto B665dc1;
case 0x665dc4:c.instructions+=1;goto B665dc4;
case 0x665dc7:goto L665dc7;
case 0x665dc9:goto L665dc9;
case 0x665dcc:c.instructions+=8;goto B665dcc;
case 0x665dcf:c.instructions+=7;goto B665dcf;
case 0x665dd2:c.instructions+=6;goto B665dd2;
case 0x665dd5:c.instructions+=5;goto B665dd5;
case 0x665dd8:c.instructions+=4;goto B665dd8;
case 0x665ddb:c.instructions+=3;goto B665ddb;
case 0x665de1:c.instructions+=2;goto B665de1;
case 0x665de3:c.instructions+=1;goto B665de3;
case 0x665de4:goto L665de4;
case 0x665de6:goto L665de6;
case 0x665de9:c.instructions+=9;goto B665de9;
case 0x665dec:c.instructions+=8;goto B665dec;
case 0x665def:c.instructions+=7;goto B665def;
case 0x665df2:c.instructions+=6;goto B665df2;
case 0x665df5:c.instructions+=5;goto B665df5;
case 0x665df8:c.instructions+=4;goto B665df8;
case 0x665dfb:c.instructions+=3;goto B665dfb;
case 0x665dfd:c.instructions+=2;goto B665dfd;
case 0x665e00:c.instructions+=1;goto B665e00;
case 0x665e02:goto L665e02;
case 0x665e04:goto L665e04;
case 0x665e06:c.instructions+=1;goto B665e06;
case 0x665e09:goto L665e09;
case 0x665e0b:goto L665e0b;
case 0x665e0e:c.instructions+=2;goto B665e0e;
case 0x665e10:c.instructions+=1;goto B665e10;
case 0x665e12:goto L665e12;
case 0x665e14:c.instructions+=1;goto B665e14;
case 0x665e19:goto L665e19;
case 0x665e1d:c.instructions+=1;goto B665e1d;
case 0x665e20:goto L665e20;
case 0x665e23:c.instructions+=4;goto B665e23;
case 0x665e27:c.instructions+=3;goto B665e27;
case 0x665e2a:c.instructions+=2;goto B665e2a;
case 0x665e2d:c.instructions+=1;goto B665e2d;
case 0x665e32:goto L665e32;
case 0x665e33:c.instructions+=3;goto B665e33;
case 0x665e36:c.instructions+=2;goto B665e36;
case 0x665e39:c.instructions+=1;goto B665e39;
case 0x665e3b:goto L665e3b;
case 0x665e3c:c.instructions+=1;goto B665e3c;
case 0x665e3e:goto L665e3e;
case 0x665e3f:c.instructions+=1;goto B665e3f;
case 0x665e45:goto L665e45;
case 0x665e48:c.instructions+=7;goto B665e48;
case 0x665e4b:c.instructions+=6;goto B665e4b;
case 0x665e4e:c.instructions+=5;goto B665e4e;
case 0x665e50:c.instructions+=4;goto B665e50;
case 0x665e57:c.instructions+=3;goto B665e57;
case 0x665e5a:c.instructions+=2;goto B665e5a;
case 0x665e5c:c.instructions+=1;goto B665e5c;
case 0x665e5e:goto L665e5e;
case 0x665e61:c.instructions+=2;goto B665e61;
case 0x665e64:c.instructions+=1;goto B665e64;
case 0x665e67:goto L665e67;
case 0x665e6a:c.instructions+=3;goto B665e6a;
case 0x665e6e:c.instructions+=2;goto B665e6e;
case 0x665e6f:c.instructions+=1;goto B665e6f;
case 0x665e74:goto L665e74;
case 0x665e76:c.instructions+=3;goto B665e76;
case 0x665e77:c.instructions+=2;goto B665e77;
case 0x665e7a:c.instructions+=1;goto B665e7a;
case 0x665e80:goto L665e80;
case 0x665e83:c.instructions+=4;goto B665e83;
case 0x665e85:c.instructions+=3;goto B665e85;
case 0x665e88:c.instructions+=2;goto B665e88;
case 0x665e8a:c.instructions+=1;goto B665e8a;
case 0x665e8c:goto L665e8c;
case 0x665e8e:goto L665e8e;
case 0x665e90:c.instructions+=1;goto B665e90;
case 0x665e93:goto L665e93;
case 0x665e95:goto L665e95;
case 0x665e98:c.instructions+=5;goto B665e98;
case 0x665e9e:c.instructions+=4;goto B665e9e;
case 0x665ea2:c.instructions+=3;goto B665ea2;
case 0x665ea5:c.instructions+=2;goto B665ea5;
case 0x665ea7:c.instructions+=1;goto B665ea7;
case 0x665ea8:goto L665ea8;
case 0x665eaa:goto L665eaa;
case 0x665ead:c.instructions+=3;goto B665ead;
case 0x665eb0:c.instructions+=2;goto B665eb0;
case 0x665eb3:c.instructions+=1;goto B665eb3;
case 0x665eb5:goto L665eb5;
case 0x665eb8:c.instructions+=6;goto B665eb8;
case 0x665ebb:c.instructions+=5;goto B665ebb;
case 0x665ebe:c.instructions+=4;goto B665ebe;
case 0x665ec0:c.instructions+=3;goto B665ec0;
case 0x665ec3:c.instructions+=2;goto B665ec3;
case 0x665ec5:c.instructions+=1;goto B665ec5;
case 0x665ec8:goto L665ec8;
case 0x665eca:goto L665eca;
case 0x665ecc:c.instructions+=1;goto B665ecc;
case 0x665ecf:goto L665ecf;
case 0x665ed1:goto L665ed1;
case 0x665ed4:c.instructions+=13;goto B665ed4;
case 0x665ed7:c.instructions+=12;goto B665ed7;
case 0x665edb:c.instructions+=11;goto B665edb;
case 0x665edd:c.instructions+=10;goto B665edd;
case 0x665ede:c.instructions+=9;goto B665ede;
case 0x665ee1:c.instructions+=8;goto B665ee1;
case 0x665ee5:c.instructions+=7;goto B665ee5;
case 0x665ee6:c.instructions+=6;goto B665ee6;
case 0x665eec:c.instructions+=5;goto B665eec;
case 0x665ef2:c.instructions+=4;goto B665ef2;
case 0x665ef5:c.instructions+=3;goto B665ef5;
case 0x665ef8:c.instructions+=2;goto B665ef8;
case 0x665efa:c.instructions+=1;goto B665efa;
case 0x665efd:goto L665efd;
case 0x665eff:goto L665eff;
case 0x665f01:c.instructions+=1;goto B665f01;
case 0x665f04:goto L665f04;
case 0x665f06:goto L665f06;
case 0x665f0c:c.instructions+=5;goto B665f0c;
case 0x665f0f:c.instructions+=4;goto B665f0f;
case 0x665f12:c.instructions+=3;goto B665f12;
case 0x665f18:c.instructions+=2;goto B665f18;
case 0x665f1a:c.instructions+=1;goto B665f1a;
case 0x665f1c:goto L665f1c;
case 0x665f1d:c.instructions+=1;goto B665f1d;
case 0x665f22:goto L665f22;
case 0x665f29:c.instructions+=2;goto B665f29;
case 0x665f2c:c.instructions+=1;goto B665f2c;
case 0x665f2d:goto L665f2d;
case 0x665f30:c.instructions+=7;goto B665f30;
case 0x665f32:c.instructions+=6;goto B665f32;
case 0x665f38:c.instructions+=5;goto B665f38;
case 0x665f3e:c.instructions+=4;goto B665f3e;
case 0x665f41:c.instructions+=3;goto B665f41;
case 0x665f43:c.instructions+=2;goto B665f43;
case 0x665f46:c.instructions+=1;goto B665f46;
case 0x665f48:goto L665f48;
case 0x665f4b:c.instructions+=1;goto B665f4b;
case 0x665f4d:goto L665f4d;
case 0x665f50:c.instructions+=1;goto B665f50;
case 0x665f52:goto L665f52;
case 0x665f55:c.instructions+=15;goto B665f55;
case 0x665f57:c.instructions+=14;goto B665f57;
case 0x665f5a:c.instructions+=13;goto B665f5a;
case 0x665f5d:c.instructions+=12;goto B665f5d;
case 0x665f60:c.instructions+=11;goto B665f60;
case 0x665f62:c.instructions+=10;goto B665f62;
case 0x665f65:c.instructions+=9;goto B665f65;
case 0x665f68:c.instructions+=8;goto B665f68;
case 0x665f6a:c.instructions+=7;goto B665f6a;
case 0x665f6c:c.instructions+=6;goto B665f6c;
case 0x665f72:c.instructions+=5;goto B665f72;
case 0x665f74:c.instructions+=4;goto B665f74;
case 0x665f77:c.instructions+=3;goto B665f77;
case 0x665f7a:c.instructions+=2;goto B665f7a;
case 0x665f7d:c.instructions+=1;goto B665f7d;
case 0x665f80:goto L665f80;
case 0x665f83:c.instructions+=2;goto B665f83;
case 0x665f85:c.instructions+=1;goto B665f85;
case 0x665f87:goto L665f87;
case 0x665f89:c.instructions+=1;goto B665f89;
case 0x665f8e:goto L665f8e;
case 0x665f90:c.instructions+=2;goto B665f90;
case 0x665f93:c.instructions+=1;goto B665f93;
case 0x665f95:goto L665f95;
case 0x665f98:c.instructions+=1;goto B665f98;
case 0x665f9d:goto L665f9d;
case 0x665f9e:goto L665f9e;
case 0x665fa1:c.instructions+=1;goto B665fa1;
case 0x665fa3:goto L665fa3;
case 0x665fa6:c.instructions+=1;goto B665fa6;
case 0x665fab:goto L665fab;
case 0x665fac:goto L665fac;
case 0x665faf:c.instructions+=2;goto B665faf;
case 0x665fb1:c.instructions+=1;goto B665fb1;
case 0x665fb3:goto L665fb3;
case 0x665fb5:c.instructions+=1;goto B665fb5;
case 0x665fba:goto L665fba;
case 0x665fbd:c.instructions+=1;goto B665fbd;
case 0x665fbf:goto L665fbf;
case 0x665fc2:c.instructions+=1;goto B665fc2;
case 0x665fc7:goto L665fc7;
case 0x665fc8:goto L665fc8;
case 0x665fcb:c.instructions+=1;goto B665fcb;
case 0x665fd0:goto L665fd0;
case 0x665fd2:c.instructions+=8;goto B665fd2;
case 0x665fd3:c.instructions+=7;goto B665fd3;
case 0x665fd5:c.instructions+=6;goto B665fd5;
case 0x665fd6:c.instructions+=5;goto B665fd6;
case 0x665fd9:c.instructions+=4;goto B665fd9;
case 0x665fdb:c.instructions+=3;goto B665fdb;
case 0x665fdc:c.instructions+=2;goto B665fdc;
case 0x665fdd:c.instructions+=1;goto B665fdd;
case 0x665fdf:goto L665fdf;
case 0x665fe4:c.instructions+=1;goto B665fe4;
case 0x665fe9:goto L665fe9;
case 0x665fec:c.instructions+=3;goto B665fec;
case 0x665fee:c.instructions+=2;goto B665fee;
case 0x665ff1:c.instructions+=1;goto B665ff1;
case 0x665ff6:goto L665ff6;
case 0x665ff8:c.instructions+=2;goto B665ff8;
case 0x665ffa:c.instructions+=1;goto B665ffa;
case 0x665ffc:goto L665ffc;
case 0x665fff:c.instructions+=1;goto B665fff;
default:missing_instruction(c.pc);}
B665001:L665001:{c.instructions+=2;NFSU2_TR(0x665001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B665008:{NFSU2_TR(0x665008);
{goto L665027;}
}
B66500a:L66500a:{c.instructions+=3;NFSU2_TR(0x66500a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66500d:{NFSU2_TR(0x66500d);
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
B66500f:{NFSU2_TR(0x66500f);
if(r1(R+518)){{goto L66501c;}}
}
B665011:L665011:{c.instructions+=2;NFSU2_TR(0x665011);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665013:{NFSU2_TR(0x665013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665018ull));
TAIL_STATIC(0x664f63u,664);
}
B665018:L665018:{c.instructions+=1;NFSU2_TR(0x665018);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B66501c:L66501c:{c.instructions+=3;NFSU2_TR(0x66501c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66501f:{NFSU2_TR(0x66501f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B665023:{NFSU2_TR(0x665023);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B665027:L665027:{c.instructions+=6;NFSU2_TR(0x665027);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66502a:{NFSU2_TR(0x66502a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66502b:{NFSU2_TR(0x66502b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66502c:{NFSU2_TR(0x66502c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66502d:{NFSU2_TR(0x66502d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66502e:{NFSU2_TR(0x66502e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B665031:L665031:{c.instructions+=6;NFSU2_TR(0x665031);
__builtin_memmove((R+28),(R+28),4);
}
B665033:{NFSU2_TR(0x665033);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665034:{NFSU2_TR(0x665034);
__builtin_memmove((R+24),(R+4),4);
}
B665036:{NFSU2_TR(0x665036);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665039:{NFSU2_TR(0x665039);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66503b:{NFSU2_TR(0x66503b);
if(r1(R+518)){{goto L665048;}}
}
B66503d:L66503d:{c.instructions+=2;NFSU2_TR(0x66503d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66503f:{NFSU2_TR(0x66503f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665044ull));
TAIL_STATIC(0x664f42u,664);
}
B665044:L665044:{c.instructions+=1;NFSU2_TR(0x665044);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B665048:L665048:{c.instructions+=3;NFSU2_TR(0x665048);
__builtin_memmove((R+4),(R+24),4);
}
B66504a:{NFSU2_TR(0x66504a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66504b:{NFSU2_TR(0x66504b);
TAIL_STATIC(0x663e90u,663);
}
B665050:L665050:{c.instructions+=7;NFSU2_TR(0x665050);
__builtin_memmove((R+28),(R+28),4);
}
B665052:{NFSU2_TR(0x665052);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665053:{NFSU2_TR(0x665053);
__builtin_memmove((R+20),(R+16),4);
}
B665055:{NFSU2_TR(0x665055);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B665059:{NFSU2_TR(0x665059);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66505a:{NFSU2_TR(0x66505a);
__builtin_memmove((R+28),(R+4),4);
}
B66505c:{NFSU2_TR(0x66505c);
if(r1(R+518)){{goto L665083;}}
}
B66505e:L66505e:{c.instructions+=7;NFSU2_TR(0x66505e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66505f:{NFSU2_TR(0x66505f);
u8 U[4];
w4(U+0,u32(0x665031ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665064:{NFSU2_TR(0x665064);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B665067:{NFSU2_TR(0x665067);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B665069:{NFSU2_TR(0x665069);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66506b:{NFSU2_TR(0x66506b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66506c:{NFSU2_TR(0x66506c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665071ull));
TAIL_STATIC(0x64b5ffu,64b);
}
B665071:L665071:{c.instructions+=2;NFSU2_TR(0x665071);
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
B665075:{NFSU2_TR(0x665075);
if(r1(R+518)){{goto L66507e;}}
}
B665077:L665077:{c.instructions+=2;NFSU2_TR(0x665077);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665078:{NFSU2_TR(0x665078);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66507dull));
TAIL_STATIC(0x575630u,575);
}
B66507d:L66507d:{c.instructions+=1;NFSU2_TR(0x66507d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66507e:L66507e:{c.instructions+=3;NFSU2_TR(0x66507e);
__builtin_memmove((R+0),(R+24),4);
}
B665080:{NFSU2_TR(0x665080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B665081:{NFSU2_TR(0x665081);
{goto L665099;}
}
B665083:L665083:{c.instructions+=2;NFSU2_TR(0x665083);
__builtin_memmove((R+4),(R+28),4);
}
B665085:{NFSU2_TR(0x665085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66508aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665031u);}goto L665031;}
}
B66508a:L66508a:{c.instructions+=2;NFSU2_TR(0x66508a);
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
B66508e:{NFSU2_TR(0x66508e);
if(r1(R+518)){{goto L665097;}}
}
B665090:L665090:{c.instructions+=2;NFSU2_TR(0x665090);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665091:{NFSU2_TR(0x665091);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665096ull));
TAIL_STATIC(0x575630u,575);
}
B665096:L665096:{c.instructions+=1;NFSU2_TR(0x665096);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665097:L665097:{c.instructions+=1;NFSU2_TR(0x665097);
__builtin_memmove((R+0),(R+28),4);
}
B665099:L665099:{c.instructions+=3;NFSU2_TR(0x665099);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66509a:{NFSU2_TR(0x66509a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66509b:{NFSU2_TR(0x66509b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66509e:L66509e:{c.instructions+=10;NFSU2_TR(0x66509e);
__builtin_memmove((R+8),(R+4),4);
}
B6650a0:{NFSU2_TR(0x6650a0);
u8 U[4];
w4(U+0,u32(0x7b6fe0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B6650a6:{NFSU2_TR(0x6650a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6650a7:{NFSU2_TR(0x6650a7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6650a9:{NFSU2_TR(0x6650a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6650ac:{NFSU2_TR(0x6650ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w4(U+4,u32(0x7b6e00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6650b3:{NFSU2_TR(0x6650b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6650b6:{NFSU2_TR(0x6650b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6650b9:{NFSU2_TR(0x6650b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6650bc:{NFSU2_TR(0x6650bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6650c1ull));
TAIL_STATIC(0x664ecfu,664);
}
B6650c1:L6650c1:{c.instructions+=2;NFSU2_TR(0x6650c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6650c7:{NFSU2_TR(0x6650c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6650ccull));
TAIL_STATIC(0x65eb78u,65e);
}
B6650cc:L6650cc:{c.instructions+=43;NFSU2_TR(0x6650cc);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x118ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0xe478ull))));
s2(u32(r4(U+0)),r2(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6650d5:{NFSU2_TR(0x6650d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6650d8:{NFSU2_TR(0x6650d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6650de:{NFSU2_TR(0x6650de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6650e4:{NFSU2_TR(0x6650e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6650e7:{NFSU2_TR(0x6650e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6650ea:{NFSU2_TR(0x6650ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6650f0:{NFSU2_TR(0x6650f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6650f3:{NFSU2_TR(0x6650f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6650f9:{NFSU2_TR(0x6650f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6650ff:{NFSU2_TR(0x6650ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665105:{NFSU2_TR(0x665105);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66510b:{NFSU2_TR(0x66510b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665111:{NFSU2_TR(0x665111);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665117:{NFSU2_TR(0x665117);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66511d:{NFSU2_TR(0x66511d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665123:{NFSU2_TR(0x665123);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665129:{NFSU2_TR(0x665129);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66512d:{NFSU2_TR(0x66512d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665130:{NFSU2_TR(0x665130);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665133:{NFSU2_TR(0x665133);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665139:{NFSU2_TR(0x665139);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66513f:{NFSU2_TR(0x66513f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665145:{NFSU2_TR(0x665145);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66514b:{NFSU2_TR(0x66514b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665151:{NFSU2_TR(0x665151);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665154:{NFSU2_TR(0x665154);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665157:{NFSU2_TR(0x665157);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66515a:{NFSU2_TR(0x66515a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66515d:{NFSU2_TR(0x66515d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665160:{NFSU2_TR(0x665160);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665166:{NFSU2_TR(0x665166);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66516c:{NFSU2_TR(0x66516c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665172:{NFSU2_TR(0x665172);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665178:{NFSU2_TR(0x665178);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66517e:{NFSU2_TR(0x66517e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665184:{NFSU2_TR(0x665184);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66518a:{NFSU2_TR(0x66518a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665190:{NFSU2_TR(0x665190);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665193:{NFSU2_TR(0x665193);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66519a:{NFSU2_TR(0x66519a);
__builtin_memmove((R+0),(R+8),4);
}
B66519c:{NFSU2_TR(0x66519c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66519d:{NFSU2_TR(0x66519d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66519e:L66519e:{c.instructions+=6;NFSU2_TR(0x66519e);
__builtin_memmove((R+28),(R+28),4);
}
B6651a0:{NFSU2_TR(0x6651a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6651a1:{NFSU2_TR(0x6651a1);
__builtin_memmove((R+20),(R+16),4);
}
B6651a3:{NFSU2_TR(0x6651a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6651a4:{NFSU2_TR(0x6651a4);
__builtin_memmove((R+24),(R+4),4);
}
B6651a6:{NFSU2_TR(0x6651a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6651abull));
TAIL_STATIC(0x663fcfu,663);
}
B6651ab:L6651ab:{c.instructions+=2;NFSU2_TR(0x6651ab);
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
B6651af:{NFSU2_TR(0x6651af);
if(r1(R+518)){{goto L6651b8;}}
}
B6651b1:L6651b1:{c.instructions+=2;NFSU2_TR(0x6651b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6651b2:{NFSU2_TR(0x6651b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6651b7ull));
TAIL_STATIC(0x575630u,575);
}
B6651b7:L6651b7:{c.instructions+=1;NFSU2_TR(0x6651b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6651b8:L6651b8:{c.instructions+=4;NFSU2_TR(0x6651b8);
__builtin_memmove((R+0),(R+24),4);
}
B6651ba:{NFSU2_TR(0x6651ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6651bb:{NFSU2_TR(0x6651bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6651bc:{NFSU2_TR(0x6651bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6651bf:L6651bf:{c.instructions+=7;NFSU2_TR(0x6651bf);
__builtin_memmove((R+28),(R+28),4);
}
B6651c1:{NFSU2_TR(0x6651c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6651c2:{NFSU2_TR(0x6651c2);
__builtin_memmove((R+20),(R+16),4);
}
B6651c4:{NFSU2_TR(0x6651c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6651c8:{NFSU2_TR(0x6651c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6651c9:{NFSU2_TR(0x6651c9);
__builtin_memmove((R+28),(R+4),4);
}
B6651cb:{NFSU2_TR(0x6651cb);
if(r1(R+518)){{goto L6651f2;}}
}
B6651cd:L6651cd:{c.instructions+=7;NFSU2_TR(0x6651cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6651ce:{NFSU2_TR(0x6651ce);
u8 U[4];
w4(U+0,u32(0x664efaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6651d3:{NFSU2_TR(0x6651d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6651d6:{NFSU2_TR(0x6651d6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6651d8:{NFSU2_TR(0x6651d8);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6651da:{NFSU2_TR(0x6651da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6651db:{NFSU2_TR(0x6651db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6651e0ull));
TAIL_STATIC(0x64b5ffu,64b);
}
B6651e0:L6651e0:{c.instructions+=2;NFSU2_TR(0x6651e0);
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
B6651e4:{NFSU2_TR(0x6651e4);
if(r1(R+518)){{goto L6651ed;}}
}
B6651e6:L6651e6:{c.instructions+=2;NFSU2_TR(0x6651e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6651e7:{NFSU2_TR(0x6651e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6651ecull));
TAIL_STATIC(0x575630u,575);
}
B6651ec:L6651ec:{c.instructions+=1;NFSU2_TR(0x6651ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6651ed:L6651ed:{c.instructions+=3;NFSU2_TR(0x6651ed);
__builtin_memmove((R+0),(R+24),4);
}
B6651ef:{NFSU2_TR(0x6651ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6651f0:{NFSU2_TR(0x6651f0);
{goto L665208;}
}
B6651f2:L6651f2:{c.instructions+=2;NFSU2_TR(0x6651f2);
__builtin_memmove((R+4),(R+28),4);
}
B6651f4:{NFSU2_TR(0x6651f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6651f9ull));
TAIL_STATIC(0x664efau,664);
}
B6651f9:L6651f9:{c.instructions+=2;NFSU2_TR(0x6651f9);
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
B6651fd:{NFSU2_TR(0x6651fd);
if(r1(R+518)){{goto L665206;}}
}
B6651ff:L6651ff:{c.instructions+=2;NFSU2_TR(0x6651ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665200:{NFSU2_TR(0x665200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665205ull));
TAIL_STATIC(0x575630u,575);
}
B665205:L665205:{c.instructions+=1;NFSU2_TR(0x665205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665206:L665206:{c.instructions+=1;NFSU2_TR(0x665206);
__builtin_memmove((R+0),(R+28),4);
}
B665208:L665208:{c.instructions+=3;NFSU2_TR(0x665208);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B665209:{NFSU2_TR(0x665209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66520a:{NFSU2_TR(0x66520a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66520d:L66520d:{c.instructions+=21;NFSU2_TR(0x66520d);
__builtin_memmove((R+28),(R+28),4);
}
B66520f:{NFSU2_TR(0x66520f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665210:{NFSU2_TR(0x665210);
__builtin_memmove((R+20),(R+16),4);
}
B665212:{NFSU2_TR(0x665212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B665215:{NFSU2_TR(0x665215);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665218:{NFSU2_TR(0x665218);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66521b:{NFSU2_TR(0x66521b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66521c:{NFSU2_TR(0x66521c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66521f:{NFSU2_TR(0x66521f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B665223:{NFSU2_TR(0x665223);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B665226:{NFSU2_TR(0x665226);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665227:{NFSU2_TR(0x665227);
__builtin_memmove((R+24),(R+4),4);
}
B665229:{NFSU2_TR(0x665229);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66522c:{NFSU2_TR(0x66522c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66522f:{NFSU2_TR(0x66522f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B665232:{NFSU2_TR(0x665232);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665235:{NFSU2_TR(0x665235);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B665239:{NFSU2_TR(0x665239);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66523c:{NFSU2_TR(0x66523c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b582cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665242:{NFSU2_TR(0x665242);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B665245:{NFSU2_TR(0x665245);
if(r1(R+518)){{goto L665250;}}
}
B665247:L665247:{c.instructions+=2;NFSU2_TR(0x665247);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66524a:{NFSU2_TR(0x66524a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L665482;}}
}
B665250:L665250:{c.instructions+=4;NFSU2_TR(0x665250);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665253:{NFSU2_TR(0x665253);
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
B665255:{NFSU2_TR(0x665255);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665256:{NFSU2_TR(0x665256);
if(r1(R+518)){{goto L66527e;}}
}
B665258:L665258:{c.instructions+=3;NFSU2_TR(0x665258);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66525a:{NFSU2_TR(0x66525a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66525b:{NFSU2_TR(0x66525b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66525eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66525e:L66525e:{c.instructions+=6;NFSU2_TR(0x66525e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B665261:{NFSU2_TR(0x665261);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B665263:{NFSU2_TR(0x665263);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B665264:{NFSU2_TR(0x665264);
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
B665266:{NFSU2_TR(0x665266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665269:{NFSU2_TR(0x665269);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L665281;}}
}
B66526b:L66526b:{c.instructions+=3;NFSU2_TR(0x66526b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66526d:{NFSU2_TR(0x66526d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66526e:{NFSU2_TR(0x66526e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665271ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B665271:L665271:{c.instructions+=5;NFSU2_TR(0x665271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B665273:{NFSU2_TR(0x665273);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B665276:{NFSU2_TR(0x665276);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665279:{NFSU2_TR(0x665279);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66527c:{NFSU2_TR(0x66527c);
{goto L665281;}
}
B66527e:L66527e:{c.instructions+=1;NFSU2_TR(0x66527e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B665281:L665281:{c.instructions+=3;NFSU2_TR(0x665281);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B665283:{NFSU2_TR(0x665283);
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
B665285:{NFSU2_TR(0x665285);
if(r1(R+518)){{goto L665291;}}
}
B665287:L665287:{c.instructions+=3;NFSU2_TR(0x665287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B665289:{NFSU2_TR(0x665289);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66528a:{NFSU2_TR(0x66528a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66528dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66528d:L66528d:{c.instructions+=2;NFSU2_TR(0x66528d);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66528f:{NFSU2_TR(0x66528f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L66529d;}}
}
B665291:L665291:{c.instructions+=2;NFSU2_TR(0x665291);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B665298:{NFSU2_TR(0x665298);
{goto L665481;}
}
B66529d:L66529d:{c.instructions+=6;NFSU2_TR(0x66529d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6652a3:{NFSU2_TR(0x6652a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6652a6:{NFSU2_TR(0x6652a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6652a9:{NFSU2_TR(0x6652a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6652ab:{NFSU2_TR(0x6652ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6652af:{NFSU2_TR(0x6652af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6652bf;}}
}
B6652b1:L6652b1:{c.instructions+=5;NFSU2_TR(0x6652b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6652b4:{NFSU2_TR(0x6652b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6652b7:{NFSU2_TR(0x6652b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6652ba:{NFSU2_TR(0x6652ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6652bd:{NFSU2_TR(0x6652bd);
{goto L6652d9;}
}
B6652bf:L6652bf:{c.instructions+=9;NFSU2_TR(0x6652bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6652c1:{NFSU2_TR(0x6652c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6652c4:{NFSU2_TR(0x6652c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6652c7:{NFSU2_TR(0x6652c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B6652ca:{NFSU2_TR(0x6652ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6652cd:{NFSU2_TR(0x6652cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6652d0:{NFSU2_TR(0x6652d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6652d3:{NFSU2_TR(0x6652d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6652d6:{NFSU2_TR(0x6652d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6652d9:L6652d9:{c.instructions+=8;NFSU2_TR(0x6652d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6652dc:{NFSU2_TR(0x6652dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6652df:{NFSU2_TR(0x6652df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6652e2:{NFSU2_TR(0x6652e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6652e6:{NFSU2_TR(0x6652e6);
w4(R+4,u32(r2(R+0)));
}
B6652e9:{NFSU2_TR(0x6652e9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6652ec:{NFSU2_TR(0x6652ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6652ef:{NFSU2_TR(0x6652ef);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665291u);}goto L665291;}}
}
B6652f1:L6652f1:{c.instructions+=7;NFSU2_TR(0x6652f1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6652f5:{NFSU2_TR(0x6652f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6652f9:{NFSU2_TR(0x6652f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6652fd:{NFSU2_TR(0x6652fd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B665300:{NFSU2_TR(0x665300);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B665303:{NFSU2_TR(0x665303);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665305:{NFSU2_TR(0x665305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66530aull));
TAIL_STATIC(0x664fb1u,664);
}
B66530a:L66530a:{c.instructions+=3;NFSU2_TR(0x66530a);
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
B66530c:{NFSU2_TR(0x66530c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66530f:{NFSU2_TR(0x66530f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L665481;}}
}
B665315:L665315:{c.instructions+=10;NFSU2_TR(0x665315);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B665319:{NFSU2_TR(0x665319);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66531c:{NFSU2_TR(0x66531c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b582cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665322:{NFSU2_TR(0x665322);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B665326:{NFSU2_TR(0x665326);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B665329:{NFSU2_TR(0x665329);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66532b:{NFSU2_TR(0x66532b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66532e:{NFSU2_TR(0x66532e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B665331:{NFSU2_TR(0x665331);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665334:{NFSU2_TR(0x665334);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66534d;}}
}
B665336:L665336:{c.instructions+=5;NFSU2_TR(0x665336);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66533b:{NFSU2_TR(0x66533b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x52ull))));
w2(U+4,u16(0x92ull));
s2(u32(r4(U+0)),r2(U+4));
}
B665341:{NFSU2_TR(0x665341);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665344:{NFSU2_TR(0x665344);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
w4(U+4,u32(0xa000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66534b:{NFSU2_TR(0x66534b);
{goto L665362;}
}
B66534d:L66534d:{c.instructions+=4;NFSU2_TR(0x66534d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B665352:{NFSU2_TR(0x665352);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x52ull))));
w2(U+4,u16(0x93ull));
s2(u32(r4(U+0)),r2(U+4));
}
B665358:{NFSU2_TR(0x665358);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66535b:{NFSU2_TR(0x66535b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
w4(U+4,u32(0xb000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B665362:L665362:{c.instructions+=15;NFSU2_TR(0x665362);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665365:{NFSU2_TR(0x665365);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66536b:{NFSU2_TR(0x66536b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66536e:{NFSU2_TR(0x66536e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B665370:{NFSU2_TR(0x665370);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B665371:{NFSU2_TR(0x665371);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B665375:{NFSU2_TR(0x665375);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665378:{NFSU2_TR(0x665378);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B66537b:{NFSU2_TR(0x66537b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66537e:{NFSU2_TR(0x66537e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B665380:{NFSU2_TR(0x665380);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B665383:{NFSU2_TR(0x665383);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B665386:{NFSU2_TR(0x665386);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665388:{NFSU2_TR(0x665388);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66538b:{NFSU2_TR(0x66538b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66538c:L66538c:{c.instructions+=1;NFSU2_TR(0x66538c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66538e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66538cu);}goto L66538c;}
}
B66538e:L66538e:{c.instructions+=7;NFSU2_TR(0x66538e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665391:{NFSU2_TR(0x665391);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B665395:{NFSU2_TR(0x665395);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665398:{NFSU2_TR(0x665398);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66539b:{NFSU2_TR(0x66539b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66539f:{NFSU2_TR(0x66539f);
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
B6653a1:{NFSU2_TR(0x6653a1);
if(r1(R+518)){{goto L665481;}}
}
B6653a7:L6653a7:{c.instructions+=5;NFSU2_TR(0x6653a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6653aa:{NFSU2_TR(0x6653aa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6653ad:{NFSU2_TR(0x6653ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6653ae:{NFSU2_TR(0x6653ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6653af:{NFSU2_TR(0x6653af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6653b4ull));
TAIL_STATIC(0x670f08u,670);
}
B6653b4:L6653b4:{c.instructions+=3;NFSU2_TR(0x6653b4);
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
B6653b6:{NFSU2_TR(0x6653b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6653b9:{NFSU2_TR(0x6653b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L665481;}}
}
B6653bf:L6653bf:{c.instructions+=4;NFSU2_TR(0x6653bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6653c1:{NFSU2_TR(0x6653c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6653c3:{NFSU2_TR(0x6653c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6653c4:{NFSU2_TR(0x6653c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6653c7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6653c7:L6653c7:{c.instructions+=13;NFSU2_TR(0x6653c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6653ca:{NFSU2_TR(0x6653ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6653cd:{NFSU2_TR(0x6653cd);
__builtin_memmove((R+0),(R+28),4);
}
B6653cf:{NFSU2_TR(0x6653cf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B6653d2:{NFSU2_TR(0x6653d2);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B6653d4:{NFSU2_TR(0x6653d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6653d5:{NFSU2_TR(0x6653d5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6653d7:{NFSU2_TR(0x6653d7);
w4(R+0,u32(0-u32(r4(R+0))));
}
B6653d9:{NFSU2_TR(0x6653d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6653dc:{NFSU2_TR(0x6653dc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6653de:{NFSU2_TR(0x6653de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6653e1:{NFSU2_TR(0x6653e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6653e3:{NFSU2_TR(0x6653e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6653e6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6653e6:L6653e6:{c.instructions+=5;NFSU2_TR(0x6653e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6653e9:{NFSU2_TR(0x6653e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6653eb:{NFSU2_TR(0x6653eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6653ee:{NFSU2_TR(0x6653ee);
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
B6653f0:{NFSU2_TR(0x6653f0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L665417;}}
}
B6653f2:L6653f2:{c.instructions+=3;NFSU2_TR(0x6653f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6653f4:{NFSU2_TR(0x6653f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6653f5:{NFSU2_TR(0x6653f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6653f8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6653f8:L6653f8:{c.instructions+=6;NFSU2_TR(0x6653f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6653fa:{NFSU2_TR(0x6653fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6653fd:{NFSU2_TR(0x6653fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B665400:{NFSU2_TR(0x665400);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665403:{NFSU2_TR(0x665403);
__builtin_memmove((R+0),(R+4),4);
}
B665405:{NFSU2_TR(0x665405);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B665408:L665408:{c.instructions+=1;NFSU2_TR(0x665408);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66540a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665408u);}goto L665408;}
}
B66540a:L66540a:{c.instructions+=2;NFSU2_TR(0x66540a);
__builtin_memmove((R+4),(R+0),4);
}
B66540c:{NFSU2_TR(0x66540c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66540f:L66540f:{c.instructions+=1;NFSU2_TR(0x66540f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L665411;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66540fu);}goto L66540f;}
}
B665411:L665411:{c.instructions+=2;NFSU2_TR(0x665411);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665414:{NFSU2_TR(0x665414);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B665417:L665417:{c.instructions+=5;NFSU2_TR(0x665417);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66541a:{NFSU2_TR(0x66541a);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+523,scarry<u32>(r4(U+0),r4(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+28)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66541c:{NFSU2_TR(0x66541c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66541e:{NFSU2_TR(0x66541e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66541f:{NFSU2_TR(0x66541f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665422ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B665422:L665422:{c.instructions+=2;NFSU2_TR(0x665422);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B665424:{NFSU2_TR(0x665424);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665291u);}goto L665291;}}
}
B66542a:L66542a:{c.instructions+=6;NFSU2_TR(0x66542a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66542d:{NFSU2_TR(0x66542d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B665431:{NFSU2_TR(0x665431);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B665434:{NFSU2_TR(0x665434);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665437:{NFSU2_TR(0x665437);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665438:{NFSU2_TR(0x665438);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L665441;}}
}
B66543a:L66543a:{c.instructions+=1;NFSU2_TR(0x66543a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66543full));
TAIL_STATIC(0x65b970u,65b);
}
B66543f:L66543f:{c.instructions+=1;NFSU2_TR(0x66543f);
{goto L665446;}
}
B665441:L665441:{c.instructions+=1;NFSU2_TR(0x665441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665446ull));
TAIL_STATIC(0x65b9ceu,65b);
}
B665446:L665446:{c.instructions+=15;NFSU2_TR(0x665446);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665449:{NFSU2_TR(0x665449);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66544f:{NFSU2_TR(0x66544f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B665452:{NFSU2_TR(0x665452);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x52ull))));
w2(U+4,u16(0xb3ull));
s2(u32(r4(U+0)),r2(U+4));
}
B665458:{NFSU2_TR(0x665458);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
w4(U+4,u32(0xe000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66545f:{NFSU2_TR(0x66545f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B665465:{NFSU2_TR(0x665465);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665468:{NFSU2_TR(0x665468);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66546c:{NFSU2_TR(0x66546c);
__builtin_memmove((R+8),(R+4),4);
}
B66546e:{NFSU2_TR(0x66546e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B665471:{NFSU2_TR(0x665471);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B665474:{NFSU2_TR(0x665474);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B665477:{NFSU2_TR(0x665477);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66547a:{NFSU2_TR(0x66547a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66547d:{NFSU2_TR(0x66547d);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x4ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x4ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
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
B665481:L665481:{c.instructions+=1;NFSU2_TR(0x665481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B665482:L665482:{c.instructions+=5;NFSU2_TR(0x665482);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665485:{NFSU2_TR(0x665485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B665486:{NFSU2_TR(0x665486);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B665487:{NFSU2_TR(0x665487);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B665488:{NFSU2_TR(0x665488);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66548b:L66548b:{c.instructions+=18;NFSU2_TR(0x66548b);
__builtin_memmove((R+28),(R+28),4);
}
B66548d:{NFSU2_TR(0x66548d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66548e:{NFSU2_TR(0x66548e);
__builtin_memmove((R+20),(R+16),4);
}
B665490:{NFSU2_TR(0x665490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B665493:{NFSU2_TR(0x665493);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665494:{NFSU2_TR(0x665494);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665495:{NFSU2_TR(0x665495);
__builtin_memmove((R+28),(R+4),4);
}
B665497:{NFSU2_TR(0x665497);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66549a:{NFSU2_TR(0x66549a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66549d:{NFSU2_TR(0x66549d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B66549f:{NFSU2_TR(0x66549f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6654a2:{NFSU2_TR(0x6654a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6654a4:{NFSU2_TR(0x6654a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6654a7:{NFSU2_TR(0x6654a7);
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
B6654a9:{NFSU2_TR(0x6654a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6654ac:{NFSU2_TR(0x6654ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6654af:{NFSU2_TR(0x6654af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6654b2:{NFSU2_TR(0x6654b2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6654be;}}
}
B6654b4:L6654b4:{c.instructions+=2;NFSU2_TR(0x6654b4);
w4(R+0,u32(0x80004005ull));
}
B6654b9:{NFSU2_TR(0x6654b9);
{goto L6655a7;}
}
B6654be:L6654be:{c.instructions+=8;NFSU2_TR(0x6654be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6654c0:{NFSU2_TR(0x6654c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6654c1:{NFSU2_TR(0x6654c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6654c4:{NFSU2_TR(0x6654c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6654c7:{NFSU2_TR(0x6654c7);
__builtin_memmove((R+4),(R+28),4);
}
B6654c9:{NFSU2_TR(0x6654c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6654cc:{NFSU2_TR(0x6654cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6654cf:{NFSU2_TR(0x6654cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6654d4ull));
TAIL_STATIC(0x65bcbau,65b);
}
B6654d4:L6654d4:{c.instructions+=2;NFSU2_TR(0x6654d4);
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
B6654d6:{NFSU2_TR(0x6654d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6655a6;}}
}
B6654dc:L6654dc:{c.instructions+=3;NFSU2_TR(0x6654dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6654df:{NFSU2_TR(0x6654df);
__builtin_memmove((R+4),(R+28),4);
}
B6654e1:{NFSU2_TR(0x6654e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6654e6ull));
TAIL_STATIC(0x65bc5eu,65b);
}
B6654e6:L6654e6:{c.instructions+=3;NFSU2_TR(0x6654e6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6654e8:{NFSU2_TR(0x6654e8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6654ea:{NFSU2_TR(0x6654ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6655a6;}}
}
B6654f0:L6654f0:{c.instructions+=2;NFSU2_TR(0x6654f0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6654f2:{NFSU2_TR(0x6654f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6654fe;}}
}
B6654f4:L6654f4:{c.instructions+=2;NFSU2_TR(0x6654f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6654fb:{NFSU2_TR(0x6654fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6654fe:L6654fe:{c.instructions+=3;NFSU2_TR(0x6654fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665501:{NFSU2_TR(0x665501);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B665503:{NFSU2_TR(0x665503);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6655a1;}}
}
B665509:L665509:{c.instructions+=2;NFSU2_TR(0x665509);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66550c:{NFSU2_TR(0x66550c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6659b9;}}
}
B665512:L665512:{c.instructions+=2;NFSU2_TR(0x665512);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B665515:{NFSU2_TR(0x665515);
if(r1(R+518)){{goto L665580;}}
}
B665517:L665517:{c.instructions+=2;NFSU2_TR(0x665517);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B66551a:{NFSU2_TR(0x66551a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6655a1;}}
}
B665520:L665520:{c.instructions+=2;NFSU2_TR(0x665520);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B665523:{NFSU2_TR(0x665523);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6655a1;}}
}
B665525:L665525:{c.instructions+=5;NFSU2_TR(0x665525);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B665528:{NFSU2_TR(0x665528);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B66552b:{NFSU2_TR(0x66552b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B66552d:{NFSU2_TR(0x66552d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80004005ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B665532:{NFSU2_TR(0x665532);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6655a6;}}
}
B665534:L665534:{c.instructions+=8;NFSU2_TR(0x665534);
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
B665536:{NFSU2_TR(0x665536);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B665539:{NFSU2_TR(0x665539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66553b:{NFSU2_TR(0x66553b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66553e:{NFSU2_TR(0x66553e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B665541:{NFSU2_TR(0x665541);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B665543:{NFSU2_TR(0x665543);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665546:{NFSU2_TR(0x665546);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6655a6;}}
}
B665548:L665548:{c.instructions+=5;NFSU2_TR(0x665548);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66554b:{NFSU2_TR(0x66554b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66554e:{NFSU2_TR(0x66554e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B665550:{NFSU2_TR(0x665550);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665553:{NFSU2_TR(0x665553);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L665576;}}
}
B665555:L665555:{c.instructions+=5;NFSU2_TR(0x665555);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B665558:{NFSU2_TR(0x665558);
__builtin_memmove((R+4),(R+28),4);
}
B66555a:{NFSU2_TR(0x66555a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66555d:{NFSU2_TR(0x66555d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B665560:{NFSU2_TR(0x665560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665565ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66548bu);}goto L66548b;}
}
B665565:L665565:{c.instructions+=2;NFSU2_TR(0x665565);
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
B665567:{NFSU2_TR(0x665567);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6655a6;}}
}
B665569:L665569:{c.instructions+=4;NFSU2_TR(0x665569);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66556c:{NFSU2_TR(0x66556c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66556f:{NFSU2_TR(0x66556f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B665572:{NFSU2_TR(0x665572);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665555u);}goto L665555;}}
}
B665574:L665574:{c.instructions+=1;NFSU2_TR(0x665574);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B665576:L665576:{c.instructions+=3;NFSU2_TR(0x665576);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B665579:{NFSU2_TR(0x665579);
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
B66557c:{NFSU2_TR(0x66557c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665548u);}goto L665548;}}
}
B66557e:L66557e:{c.instructions+=1;NFSU2_TR(0x66557e);
{goto L6655a6;}
}
B665580:L665580:{c.instructions+=4;NFSU2_TR(0x665580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B665583:{NFSU2_TR(0x665583);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B665585:{NFSU2_TR(0x665585);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B665588:{NFSU2_TR(0x665588);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6655a1;}}
}
B66558a:L66558a:{c.instructions+=2;NFSU2_TR(0x66558a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66558d:{NFSU2_TR(0x66558d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6657c8;}}
}
B665593:L665593:{c.instructions+=2;NFSU2_TR(0x665593);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B665596:{NFSU2_TR(0x665596);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6655ad;}}
}
B665598:L665598:{c.instructions+=2;NFSU2_TR(0x665598);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66559b:{NFSU2_TR(0x66559b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6657c8;}}
}
B6655a1:L6655a1:{c.instructions+=1;NFSU2_TR(0x6655a1);
w4(R+0,u32(0x80004005ull));
}
B6655a6:L6655a6:{c.instructions+=1;NFSU2_TR(0x6655a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6655a7:L6655a7:{c.instructions+=4;NFSU2_TR(0x6655a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6655a8:{NFSU2_TR(0x6655a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6655a9:{NFSU2_TR(0x6655a9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6655aa:{NFSU2_TR(0x6655aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6655ad:L6655ad:{c.instructions+=7;NFSU2_TR(0x6655ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6655b0:{NFSU2_TR(0x6655b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6655b6:{NFSU2_TR(0x6655b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6655b9:{NFSU2_TR(0x6655b9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B6655bd:{NFSU2_TR(0x6655bd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6655c0:{NFSU2_TR(0x6655c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6655c3:{NFSU2_TR(0x6655c3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a1u);}goto L6655a1;}}
}
B6655c5:L6655c5:{c.instructions+=6;NFSU2_TR(0x6655c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6655c9:{NFSU2_TR(0x6655c9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B6655cb:{NFSU2_TR(0x6655cb);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6655cf:{NFSU2_TR(0x6655cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+24))));
s2(u32(r4(U+0)),r2(U+4));
}
B6655d3:{NFSU2_TR(0x6655d3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6655d5:{NFSU2_TR(0x6655d5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6659ae;}}
}
B6655db:L6655db:{c.instructions+=1;NFSU2_TR(0x6655db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6655de:L6655de:{c.instructions+=14;NFSU2_TR(0x6655de);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6655e2:{NFSU2_TR(0x6655e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B6655e5:{NFSU2_TR(0x6655e5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6655e9:{NFSU2_TR(0x6655e9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B6655ec:{NFSU2_TR(0x6655ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B6655ef:{NFSU2_TR(0x6655ef);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6655f3:{NFSU2_TR(0x6655f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6655f6:{NFSU2_TR(0x6655f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6655f9:{NFSU2_TR(0x6655f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6655fb:{NFSU2_TR(0x6655fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6655fe:{NFSU2_TR(0x6655fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B665600:{NFSU2_TR(0x665600);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B665602:{NFSU2_TR(0x665602);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80004005ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B665607:{NFSU2_TR(0x665607);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a6u);}goto L6655a6;}}
}
B665609:L665609:{c.instructions+=6;NFSU2_TR(0x665609);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66560b:{NFSU2_TR(0x66560b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66560e:{NFSU2_TR(0x66560e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66560f:{NFSU2_TR(0x66560f);
__builtin_memmove((R+4),(R+12),4);
}
B665611:{NFSU2_TR(0x665611);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B665613:{NFSU2_TR(0x665613);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665618ull));
TAIL_STATIC(0x664fb1u,664);
}
B665618:L665618:{c.instructions+=2;NFSU2_TR(0x665618);
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
B66561a:{NFSU2_TR(0x66561a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6657be;}}
}
B665620:L665620:{c.instructions+=10;NFSU2_TR(0x665620);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665623:{NFSU2_TR(0x665623);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665626:{NFSU2_TR(0x665626);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B665629:{NFSU2_TR(0x665629);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66562c:{NFSU2_TR(0x66562c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B66562e:{NFSU2_TR(0x66562e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B665630:{NFSU2_TR(0x665630);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B665632:{NFSU2_TR(0x665632);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80004005ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B665637:{NFSU2_TR(0x665637);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66563a:{NFSU2_TR(0x66563a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a6u);}goto L6655a6;}}
}
B665640:L665640:{c.instructions+=4;NFSU2_TR(0x665640);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B665642:{NFSU2_TR(0x665642);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+4))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B665646:{NFSU2_TR(0x665646);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665649:{NFSU2_TR(0x665649);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6657a7;}}
}
B66564f:L66564f:{c.instructions+=1;NFSU2_TR(0x66564f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665652:L665652:{c.instructions+=40;NFSU2_TR(0x665652);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665655:{NFSU2_TR(0x665655);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B665658:{NFSU2_TR(0x665658);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66565a:{NFSU2_TR(0x66565a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66565e:{NFSU2_TR(0x66565e);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+4)),r4(U+0));
}
B665664:{NFSU2_TR(0x665664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B665666:{NFSU2_TR(0x665666);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B665669:{NFSU2_TR(0x665669);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x52ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66566d:{NFSU2_TR(0x66566d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B66566e:{NFSU2_TR(0x66566e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+24)),r4(U+0));
}
B665670:{NFSU2_TR(0x665670);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B665674:{NFSU2_TR(0x665674);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B665677:{NFSU2_TR(0x665677);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b583cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66567d:{NFSU2_TR(0x66567d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665680:{NFSU2_TR(0x665680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B665682:{NFSU2_TR(0x665682);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B665685:{NFSU2_TR(0x665685);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B665689:{NFSU2_TR(0x665689);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+24)),r4(U+0));
}
B66568b:{NFSU2_TR(0x66568b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B665691:{NFSU2_TR(0x665691);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B665693:{NFSU2_TR(0x665693);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B665695:{NFSU2_TR(0x665695);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665698:{NFSU2_TR(0x665698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+24)),r4(U+0));
}
B66569a:{NFSU2_TR(0x66569a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66569c:{NFSU2_TR(0x66569c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66569e:{NFSU2_TR(0x66569e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6656a1:{NFSU2_TR(0x6656a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+24)),r4(U+0));
}
B6656a3:{NFSU2_TR(0x6656a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6656a7:{NFSU2_TR(0x6656a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6656aa:{NFSU2_TR(0x6656aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6656ad:{NFSU2_TR(0x6656ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6656b0:{NFSU2_TR(0x6656b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6656b3:{NFSU2_TR(0x6656b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6656b6:{NFSU2_TR(0x6656b6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6656b8:{NFSU2_TR(0x6656b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6656bb:{NFSU2_TR(0x6656bb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6656bd:{NFSU2_TR(0x6656bd);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B6656c1:{NFSU2_TR(0x6656c1);
u8 U[8];
__builtin_memmove((U+4),(R+8),2);
w1(R+512,u8((r2(U+4))<(u16(0xb6ull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0xb6ull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0xb6ull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6656c6:{NFSU2_TR(0x6656c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6656c9:{NFSU2_TR(0x6656c9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a1u);}goto L6655a1;}}
}
B6656cf:L6656cf:{c.instructions+=3;NFSU2_TR(0x6656cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6656d2:{NFSU2_TR(0x6656d2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6656d8:{NFSU2_TR(0x6656d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6656fb;}}
}
B6656da:L6656da:{c.instructions+=9;NFSU2_TR(0x6656da);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6656de:{NFSU2_TR(0x6656de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6656e1:{NFSU2_TR(0x6656e1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6656e4:{NFSU2_TR(0x6656e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6656e7:{NFSU2_TR(0x6656e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6656ea:{NFSU2_TR(0x6656ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b582cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6656f0:{NFSU2_TR(0x6656f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6656f3:{NFSU2_TR(0x6656f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6656f6:{NFSU2_TR(0x6656f6);
{goto L665790;}
}
B6656fb:L6656fb:{c.instructions+=3;NFSU2_TR(0x6656fb);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xff000000ull))));
}
B665701:{NFSU2_TR(0x665701);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3000000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3000000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3000000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B665707:{NFSU2_TR(0x665707);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a1u);}goto L6655a1;}}
}
B66570d:L66570d:{c.instructions+=5;NFSU2_TR(0x66570d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B665711:{NFSU2_TR(0x665711);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B665714:{NFSU2_TR(0x665714);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7b582cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66571a:{NFSU2_TR(0x66571a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66571b:{NFSU2_TR(0x66571b);
if(r1(R+518)){{goto L66572e;}}
}
B66571d:L66571d:{c.instructions+=2;NFSU2_TR(0x66571d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66571e:{NFSU2_TR(0x66571e);
if(r1(R+518)){{goto L66572e;}}
}
B665720:L665720:{c.instructions+=2;NFSU2_TR(0x665720);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B665721:{NFSU2_TR(0x665721);
if(r1(R+518)){{goto L66572e;}}
}
B665723:L665723:{c.instructions+=2;NFSU2_TR(0x665723);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0xf1fffdull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xf1fffdull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xf1fffdull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B665728:{NFSU2_TR(0x665728);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a1u);}goto L6655a1;}}
}
B66572e:L66572e:{c.instructions+=31;NFSU2_TR(0x66572e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7b5834ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665734:{NFSU2_TR(0x665734);
u8 U[32];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7b5830ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B66573b:{NFSU2_TR(0x66573b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66573e:{NFSU2_TR(0x66573e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665741:{NFSU2_TR(0x665741);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665744:{NFSU2_TR(0x665744);
__builtin_memmove((R+8),(R+0),4);
}
B665746:{NFSU2_TR(0x665746);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B665749:{NFSU2_TR(0x665749);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B66574c:{NFSU2_TR(0x66574c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66574f:{NFSU2_TR(0x66574f);
__builtin_memmove((R+8),(R+0),4);
}
B665751:{NFSU2_TR(0x665751);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B665754:{NFSU2_TR(0x665754);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B665756:{NFSU2_TR(0x665756);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B665759:{NFSU2_TR(0x665759);
__builtin_memmove((R+8),(R+0),4);
}
B66575b:{NFSU2_TR(0x66575b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B66575e:{NFSU2_TR(0x66575e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B665761:{NFSU2_TR(0x665761);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B665764:{NFSU2_TR(0x665764);
__builtin_memmove((R+8),(R+0),4);
}
B665766:{NFSU2_TR(0x665766);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B665769:{NFSU2_TR(0x665769);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B66576c:{NFSU2_TR(0x66576c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66576f:{NFSU2_TR(0x66576f);
__builtin_memmove((R+8),(R+0),4);
}
B665771:{NFSU2_TR(0x665771);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B665774:{NFSU2_TR(0x665774);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B665777:{NFSU2_TR(0x665777);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66577a:{NFSU2_TR(0x66577a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66577d:{NFSU2_TR(0x66577d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665780:{NFSU2_TR(0x665780);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665783:{NFSU2_TR(0x665783);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B665786:{NFSU2_TR(0x665786);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66578a:{NFSU2_TR(0x66578a);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+4)),r4(U+0));
}
B665790:L665790:{c.instructions+=5;NFSU2_TR(0x665790);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B665794:{NFSU2_TR(0x665794);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B665797:{NFSU2_TR(0x665797);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x64ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66579b:{NFSU2_TR(0x66579b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B66579e:{NFSU2_TR(0x66579e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665652u);}goto L665652;}}
}
B6657a4:L6657a4:{c.instructions+=1;NFSU2_TR(0x6657a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6657a7:L6657a7:{c.instructions+=4;NFSU2_TR(0x6657a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6657aa:{NFSU2_TR(0x6657aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6657ad:{NFSU2_TR(0x6657ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6657b0:{NFSU2_TR(0x6657b0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6659ae;}}
}
B6657b6:L6657b6:{c.instructions+=2;NFSU2_TR(0x6657b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6657b9:{NFSU2_TR(0x6657b9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655deu);}goto L6655de;}
}
B6657be:L6657be:{c.instructions+=2;NFSU2_TR(0x6657be);
w4(R+0,u32(0x8007000eull));
}
B6657c3:{NFSU2_TR(0x6657c3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a6u);}goto L6655a6;}
}
B6657c8:L6657c8:{c.instructions+=7;NFSU2_TR(0x6657c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6657cb:{NFSU2_TR(0x6657cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6657cd:{NFSU2_TR(0x6657cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6657d0:{NFSU2_TR(0x6657d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6657d3:{NFSU2_TR(0x6657d3);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6657d5:{NFSU2_TR(0x6657d5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80004005ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6657da:{NFSU2_TR(0x6657da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a6u);}goto L6655a6;}}
}
B6657e0:L6657e0:{c.instructions+=3;NFSU2_TR(0x6657e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6657e4:{NFSU2_TR(0x6657e4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6657e6:{NFSU2_TR(0x6657e6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6659ae;}}
}
B6657ec:L6657ec:{c.instructions+=4;NFSU2_TR(0x6657ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6657ee:{NFSU2_TR(0x6657ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6657f0:{NFSU2_TR(0x6657f0);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
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
B6657f3:{NFSU2_TR(0x6657f3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a1u);}goto L6655a1;}}
}
B6657f9:L6657f9:{c.instructions+=2;NFSU2_TR(0x6657f9);
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
B6657fb:{NFSU2_TR(0x6657fb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a1u);}goto L6655a1;}}
}
B665801:L665801:{c.instructions+=6;NFSU2_TR(0x665801);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B665804:{NFSU2_TR(0x665804);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B665807:{NFSU2_TR(0x665807);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66580a:{NFSU2_TR(0x66580a);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B66580c:{NFSU2_TR(0x66580c);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x7fffffffull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B665812:{NFSU2_TR(0x665812);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a1u);}goto L6655a1;}}
}
B665818:L665818:{c.instructions+=6;NFSU2_TR(0x665818);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66581a:{NFSU2_TR(0x66581a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66581d:{NFSU2_TR(0x66581d);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B665821:{NFSU2_TR(0x665821);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x1ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B665824:{NFSU2_TR(0x665824);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B665827:{NFSU2_TR(0x665827);
if(r1(R+518)){{goto L665832;}}
}
B665829:L665829:{c.instructions+=2;NFSU2_TR(0x665829);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66582c:{NFSU2_TR(0x66582c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66599c;}}
}
B665832:L665832:{c.instructions+=8;NFSU2_TR(0x665832);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665838:{NFSU2_TR(0x665838);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66583b:{NFSU2_TR(0x66583b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B66583e:{NFSU2_TR(0x66583e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B665842:{NFSU2_TR(0x665842);
w4(R+12,u32(r2(R+0)));
}
B665845:{NFSU2_TR(0x665845);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B665848:{NFSU2_TR(0x665848);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66584b:{NFSU2_TR(0x66584b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a1u);}goto L6655a1;}}
}
B665851:L665851:{c.instructions+=13;NFSU2_TR(0x665851);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B665854:{NFSU2_TR(0x665854);
u8 U[14];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B665859:{NFSU2_TR(0x665859);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66585d:{NFSU2_TR(0x66585d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B665861:{NFSU2_TR(0x665861);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B665865:{NFSU2_TR(0x665865);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B665869:{NFSU2_TR(0x665869);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B66586d:{NFSU2_TR(0x66586d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665870:{NFSU2_TR(0x665870);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B665873:{NFSU2_TR(0x665873);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B665876:{NFSU2_TR(0x665876);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66587b:{NFSU2_TR(0x66587b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3eull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66587f:{NFSU2_TR(0x66587f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a1u);}goto L6655a1;}}
}
B665885:L665885:{c.instructions+=5;NFSU2_TR(0x665885);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B665887:{NFSU2_TR(0x665887);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B665888:{NFSU2_TR(0x665888);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665889:{NFSU2_TR(0x665889);
__builtin_memmove((R+4),(R+12),4);
}
B66588b:{NFSU2_TR(0x66588b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665890ull));
TAIL_STATIC(0x664fb1u,664);
}
B665890:L665890:{c.instructions+=3;NFSU2_TR(0x665890);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B665892:{NFSU2_TR(0x665892);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B665894:{NFSU2_TR(0x665894);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a6u);}goto L6655a6;}}
}
B66589a:L66589a:{c.instructions+=3;NFSU2_TR(0x66589a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66589e:{NFSU2_TR(0x66589e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6658a1:{NFSU2_TR(0x6658a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6658b9;}}
}
B6658a3:L6658a3:{c.instructions+=5;NFSU2_TR(0x6658a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6658a7:{NFSU2_TR(0x6658a7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
w2(U+4,u16(0x92ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6658ad:{NFSU2_TR(0x6658ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6658b0:{NFSU2_TR(0x6658b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
w4(U+4,u32(0xa000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6658b7:{NFSU2_TR(0x6658b7);
{goto L6658cd;}
}
B6658b9:L6658b9:{c.instructions+=4;NFSU2_TR(0x6658b9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6658bd:{NFSU2_TR(0x6658bd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
w2(U+4,u16(0x93ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6658c3:{NFSU2_TR(0x6658c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6658c6:{NFSU2_TR(0x6658c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
w4(U+4,u32(0xb000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6658cd:L6658cd:{c.instructions+=14;NFSU2_TR(0x6658cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6658d0:{NFSU2_TR(0x6658d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6658d6:{NFSU2_TR(0x6658d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6658d9:{NFSU2_TR(0x6658d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6658dd:{NFSU2_TR(0x6658dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6658e0:{NFSU2_TR(0x6658e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6658e2:{NFSU2_TR(0x6658e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6658e5:{NFSU2_TR(0x6658e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6658e8:{NFSU2_TR(0x6658e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6658eb:{NFSU2_TR(0x6658eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6658ee:{NFSU2_TR(0x6658ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6658f1:{NFSU2_TR(0x6658f1);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6658f3:{NFSU2_TR(0x6658f3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B6658f6:{NFSU2_TR(0x6658f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6658f7:L6658f7:{c.instructions+=1;NFSU2_TR(0x6658f7);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6658f9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6658f7u);}goto L6658f7;}
}
B6658f9:L6658f9:{c.instructions+=14;NFSU2_TR(0x6658f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6658fc:{NFSU2_TR(0x6658fc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6658fe:{NFSU2_TR(0x6658fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665901:{NFSU2_TR(0x665901);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665904:{NFSU2_TR(0x665904);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665907:{NFSU2_TR(0x665907);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66590a:{NFSU2_TR(0x66590a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66590d:{NFSU2_TR(0x66590d);
__builtin_memmove((R+4),(R+0),4);
}
B66590f:{NFSU2_TR(0x66590f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B665912:{NFSU2_TR(0x665912);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665915:{NFSU2_TR(0x665915);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665918:{NFSU2_TR(0x665918);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66591a:{NFSU2_TR(0x66591a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66591d:{NFSU2_TR(0x66591d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L665922;}}
}
B66591f:L66591f:{c.instructions+=1;NFSU2_TR(0x66591f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B665922:L665922:{c.instructions+=6;NFSU2_TR(0x665922);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665925:{NFSU2_TR(0x665925);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665928:{NFSU2_TR(0x665928);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66592b:{NFSU2_TR(0x66592b);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66592d:{NFSU2_TR(0x66592d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B665934:{NFSU2_TR(0x665934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665939ull));
TAIL_STATIC(0x575620u,575);
}
B665939:L665939:{c.instructions+=3;NFSU2_TR(0x665939);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66593b:{NFSU2_TR(0x66593b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66593c:{NFSU2_TR(0x66593c);
if(r1(R+518)){{goto L665956;}}
}
B66593e:L66593e:{c.instructions+=9;NFSU2_TR(0x66593e);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B665940:{NFSU2_TR(0x665940);
u8 U[4];
w4(U+0,u32(0x65b680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665945:{NFSU2_TR(0x665945);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B665946:{NFSU2_TR(0x665946);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665947:{NFSU2_TR(0x665947);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66594a:{NFSU2_TR(0x66594a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66594c:{NFSU2_TR(0x66594c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66594d:{NFSU2_TR(0x66594d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66594f:{NFSU2_TR(0x66594f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665954ull));
TAIL_STATIC(0x401650u,401);
}
B665954:L665954:{c.instructions+=1;NFSU2_TR(0x665954);
{goto L665958;}
}
B665956:L665956:{c.instructions+=1;NFSU2_TR(0x665956);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B665958:L665958:{c.instructions+=4;NFSU2_TR(0x665958);
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
B66595a:{NFSU2_TR(0x66595a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66595d:{NFSU2_TR(0x66595d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665960:{NFSU2_TR(0x665960);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6657beu);}goto L6657be;}}
}
B665966:L665966:{c.instructions+=12;NFSU2_TR(0x665966);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665969:{NFSU2_TR(0x665969);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66596c:{NFSU2_TR(0x66596c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66596d:{NFSU2_TR(0x66596d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B665970:{NFSU2_TR(0x665970);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B665976:{NFSU2_TR(0x665976);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B665979:{NFSU2_TR(0x665979);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66597d:{NFSU2_TR(0x66597d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66597e:{NFSU2_TR(0x66597e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66597f:{NFSU2_TR(0x66597f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B665982:{NFSU2_TR(0x665982);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B665986:{NFSU2_TR(0x665986);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66598bull));
TAIL_STATIC(0x65bd1eu,65b);
}
B66598b:L66598b:{c.instructions+=2;NFSU2_TR(0x66598b);
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
B66598d:{NFSU2_TR(0x66598d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a6u);}goto L6655a6;}}
}
B665993:L665993:{c.instructions+=3;NFSU2_TR(0x665993);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B665996:{NFSU2_TR(0x665996);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665999:{NFSU2_TR(0x665999);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66599c:L66599c:{c.instructions+=5;NFSU2_TR(0x66599c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66599f:{NFSU2_TR(0x66599f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6659a2:{NFSU2_TR(0x6659a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6659a5:{NFSU2_TR(0x6659a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6659a8:{NFSU2_TR(0x6659a8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6657ecu);}goto L6657ec;}}
}
B6659ae:L6659ae:{c.instructions+=3;NFSU2_TR(0x6659ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6659b1:{NFSU2_TR(0x6659b1);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x14ull))));
s4(u32(r4(R+4)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6659b4:{NFSU2_TR(0x6659b4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a6u);}goto L6655a6;}
}
B6659b9:L6659b9:{c.instructions+=2;NFSU2_TR(0x6659b9);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6659bc:{NFSU2_TR(0x6659bc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a1u);}goto L6655a1;}}
}
B6659c2:L6659c2:{c.instructions+=2;NFSU2_TR(0x6659c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6659c6:{NFSU2_TR(0x6659c6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6659d2;}}
}
B6659c8:L6659c8:{c.instructions+=2;NFSU2_TR(0x6659c8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B6659cc:{NFSU2_TR(0x6659cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a1u);}goto L6655a1;}}
}
B6659d2:L6659d2:{c.instructions+=6;NFSU2_TR(0x6659d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6659d5:{NFSU2_TR(0x6659d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6659d8:{NFSU2_TR(0x6659d8);
w4(R+8,u32(0x80004005ull));
}
B6659dd:{NFSU2_TR(0x6659dd);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6659df:{NFSU2_TR(0x6659df);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6659e1:{NFSU2_TR(0x6659e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a6u);}goto L6655a6;}}
}
B6659e7:L6659e7:{c.instructions+=10;NFSU2_TR(0x6659e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6659ea:{NFSU2_TR(0x6659ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6659ed:{NFSU2_TR(0x6659ed);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+4,u32(r8(U+20)));
}
B6659f0:{NFSU2_TR(0x6659f0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6659f3:{NFSU2_TR(0x6659f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6659f6:{NFSU2_TR(0x6659f6);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B6659f8:{NFSU2_TR(0x6659f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6659fb:{NFSU2_TR(0x6659fb);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6659fd:{NFSU2_TR(0x6659fd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6659ff:{NFSU2_TR(0x6659ff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a6u);}goto L6655a6;}}
}
B665a05:L665a05:{c.instructions+=5;NFSU2_TR(0x665a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B665a08:{NFSU2_TR(0x665a08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+8)),r4(U+0));
}
B665a0a:{NFSU2_TR(0x665a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665a0d:{NFSU2_TR(0x665a0d);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+4)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B665a10:{NFSU2_TR(0x665a10);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6655a6u);}goto L6655a6;}
}
B665a15:L665a15:{c.instructions+=12;NFSU2_TR(0x665a15);
__builtin_memmove((R+28),(R+28),4);
}
B665a17:{NFSU2_TR(0x665a17);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665a18:{NFSU2_TR(0x665a18);
__builtin_memmove((R+20),(R+16),4);
}
B665a1a:{NFSU2_TR(0x665a1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B665a1d:{NFSU2_TR(0x665a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665a20:{NFSU2_TR(0x665a20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665a21:{NFSU2_TR(0x665a21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665a22:{NFSU2_TR(0x665a22);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B665a24:{NFSU2_TR(0x665a24);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B665a26:{NFSU2_TR(0x665a26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665a27:{NFSU2_TR(0x665a27);
__builtin_memmove((R+12),(R+4),4);
}
B665a29:{NFSU2_TR(0x665a29);
if(r1(R+518)){{goto L665c10;}}
}
B665a2f:L665a2f:{c.instructions+=2;NFSU2_TR(0x665a2f);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B665a32:{NFSU2_TR(0x665a32);
if(r1(R+518)){{goto L665c10;}}
}
B665a38:L665a38:{c.instructions+=3;NFSU2_TR(0x665a38);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665a3a:{NFSU2_TR(0x665a3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B665a3d:{NFSU2_TR(0x665a3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665a42ull));
TAIL_STATIC(0x65be0du,65b);
}
B665a42:L665a42:{c.instructions+=2;NFSU2_TR(0x665a42);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B665a44:{NFSU2_TR(0x665a44);
if(r1(R+518)){{goto L665a4e;}}
}
B665a46:L665a46:{c.instructions+=3;NFSU2_TR(0x665a46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665a49:{NFSU2_TR(0x665a49);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
}
B665a4c:{NFSU2_TR(0x665a4c);
{goto L665a76;}
}
B665a4e:L665a4e:{c.instructions+=4;NFSU2_TR(0x665a4e);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665a50:{NFSU2_TR(0x665a50);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B665a53:{NFSU2_TR(0x665a53);
__builtin_memmove((R+4),(R+12),4);
}
B665a55:{NFSU2_TR(0x665a55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665a5aull));
TAIL_STATIC(0x65c61fu,65c);
}
B665a5a:L665a5a:{c.instructions+=2;NFSU2_TR(0x665a5a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B665a5c:{NFSU2_TR(0x665a5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L665a70;}}
}
B665a5e:L665a5e:{c.instructions+=3;NFSU2_TR(0x665a5e);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665a60:{NFSU2_TR(0x665a60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B665a63:{NFSU2_TR(0x665a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665a68ull));
TAIL_STATIC(0x65c5deu,65c);
}
B665a68:L665a68:{c.instructions+=2;NFSU2_TR(0x665a68);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B665a6a:{NFSU2_TR(0x665a6a);
if(r1(R+518)){{goto L665c10;}}
}
B665a70:L665a70:{c.instructions+=2;NFSU2_TR(0x665a70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((R+4),(U+0),4);
}
B665a73:{NFSU2_TR(0x665a73);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B665a76:L665a76:{c.instructions+=7;NFSU2_TR(0x665a76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B665a78:{NFSU2_TR(0x665a78);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B665a7a:{NFSU2_TR(0x665a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665a7d:{NFSU2_TR(0x665a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665a80:{NFSU2_TR(0x665a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665a83:{NFSU2_TR(0x665a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665a86:{NFSU2_TR(0x665a86);
if(r1(R+518)){{goto L665b18;}}
}
B665a8c:L665a8c:{c.instructions+=6;NFSU2_TR(0x665a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665a8f:{NFSU2_TR(0x665a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665a95:{NFSU2_TR(0x665a95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B665a97:{NFSU2_TR(0x665a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B665a9a:{NFSU2_TR(0x665a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665a9d:{NFSU2_TR(0x665a9d);
if(r1(R+512)){{goto L665aac;}}
}
B665a9f:L665a9f:{c.instructions+=4;NFSU2_TR(0x665a9f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B665aa1:{NFSU2_TR(0x665aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665aa7:{NFSU2_TR(0x665aa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B665aaa:{NFSU2_TR(0x665aaa);
{goto L665ac6;}
}
B665aac:L665aac:{c.instructions+=4;NFSU2_TR(0x665aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665ab2:{NFSU2_TR(0x665ab2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B665ab5:{NFSU2_TR(0x665ab5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B665ab9:{NFSU2_TR(0x665ab9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L665ac0;}}
}
B665abb:L665abb:{c.instructions+=2;NFSU2_TR(0x665abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665abe:{NFSU2_TR(0x665abe);
{goto L665ac6;}
}
B665ac0:L665ac0:{c.instructions+=2;NFSU2_TR(0x665ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665ac3:{NFSU2_TR(0x665ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665ac6:L665ac6:{c.instructions+=5;NFSU2_TR(0x665ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665ac9:{NFSU2_TR(0x665ac9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B665acb:{NFSU2_TR(0x665acb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B665acd:{NFSU2_TR(0x665acd);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B665acf:{NFSU2_TR(0x665acf);
if(r1(R+518)){{goto L665ad4;}}
}
B665ad1:L665ad1:{c.instructions+=1;NFSU2_TR(0x665ad1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665ad4:L665ad4:{c.instructions+=2;NFSU2_TR(0x665ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665ad7:{NFSU2_TR(0x665ad7);
{goto L665adf;}
}
B665ad9:L665ad9:{c.instructions+=2;NFSU2_TR(0x665ad9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B665adb:{NFSU2_TR(0x665adb);
if(r1(R+518)){{goto L665ae5;}}
}
B665add:L665add:{c.instructions+=2;NFSU2_TR(0x665add);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B665ade:{NFSU2_TR(0x665ade);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B665adf:L665adf:{c.instructions+=3;NFSU2_TR(0x665adf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B665ae1:{NFSU2_TR(0x665ae1);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B665ae3:{NFSU2_TR(0x665ae3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665ad9u);}goto L665ad9;}}
}
B665ae5:L665ae5:{c.instructions+=4;NFSU2_TR(0x665ae5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B665ae7:{NFSU2_TR(0x665ae7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B665ae9:{NFSU2_TR(0x665ae9);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B665aeb:{NFSU2_TR(0x665aeb);
if(r1(R+518)){{goto L665bf0;}}
}
B665af1:L665af1:{c.instructions+=2;NFSU2_TR(0x665af1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B665af3:{NFSU2_TR(0x665af3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L665b05;}}
}
B665af5:L665af5:{c.instructions+=2;NFSU2_TR(0x665af5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B665af7:{NFSU2_TR(0x665af7);
if(r1(R+518)){{goto L665c58;}}
}
B665afd:L665afd:{c.instructions+=2;NFSU2_TR(0x665afd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5bull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B665aff:{NFSU2_TR(0x665aff);
if(r1(R+518)){{goto L665bf6;}}
}
B665b05:L665b05:{c.instructions+=5;NFSU2_TR(0x665b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665b08:{NFSU2_TR(0x665b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B665b0b:{NFSU2_TR(0x665b0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B665b0d:{NFSU2_TR(0x665b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665b10:{NFSU2_TR(0x665b10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665a8cu);}goto L665a8c;}}
}
B665b16:L665b16:{c.instructions+=1;NFSU2_TR(0x665b16);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B665b18:L665b18:{c.instructions+=2;NFSU2_TR(0x665b18);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B665b1f:{NFSU2_TR(0x665b1f);
if(r1(R+518)){{goto L665c10;}}
}
B665b25:L665b25:{c.instructions+=10;NFSU2_TR(0x665b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665b2b:{NFSU2_TR(0x665b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665b2e:{NFSU2_TR(0x665b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665b31:{NFSU2_TR(0x665b31);
__builtin_memmove((R+4),(R+0),4);
}
B665b33:{NFSU2_TR(0x665b33);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B665b35:{NFSU2_TR(0x665b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665b38:{NFSU2_TR(0x665b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665b3b:{NFSU2_TR(0x665b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665b3e:{NFSU2_TR(0x665b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665b41:{NFSU2_TR(0x665b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665b44:L665b44:{c.instructions+=3;NFSU2_TR(0x665b44);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B665b47:{NFSU2_TR(0x665b47);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2eull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B665b4a:{NFSU2_TR(0x665b4a);
if(r1(R+518)){{goto L665f80;}}
}
B665b50:L665b50:{c.instructions+=2;NFSU2_TR(0x665b50);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x12ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B665b53:{NFSU2_TR(0x665b53);
if(r1(R+518)){{goto L665f80;}}
}
B665b59:L665b59:{c.instructions+=2;NFSU2_TR(0x665b59);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1bull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B665b5c:{NFSU2_TR(0x665b5c);
if(r1(R+518)){{goto L665f80;}}
}
B665b62:L665b62:{c.instructions+=3;NFSU2_TR(0x665b62);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B665b63:{NFSU2_TR(0x665b63);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B665b64:{NFSU2_TR(0x665b64);
if(r1(R+518)){{goto L665f80;}}
}
B665b6a:L665b6a:{c.instructions+=4;NFSU2_TR(0x665b6a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B665b6b:{NFSU2_TR(0x665b6b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B665b6d:{NFSU2_TR(0x665b6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B665b6f:{NFSU2_TR(0x665b6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665b44u);}goto L665b44;}}
}
B665b71:L665b71:{c.instructions+=2;NFSU2_TR(0x665b71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665b74:{NFSU2_TR(0x665b74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B665b77:L665b77:{c.instructions+=4;NFSU2_TR(0x665b77);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B665b79:{NFSU2_TR(0x665b79);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B665b7a:{NFSU2_TR(0x665b7a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B665b7c:{NFSU2_TR(0x665b7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665b77u);}goto L665b77;}}
}
B665b7e:L665b7e:{c.instructions+=16;NFSU2_TR(0x665b7e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B665b80:{NFSU2_TR(0x665b80);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B665b81:{NFSU2_TR(0x665b81);
__builtin_memmove((R+4),(R+0),4);
}
B665b83:{NFSU2_TR(0x665b83);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B665b86:{NFSU2_TR(0x665b86);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B665b88:{NFSU2_TR(0x665b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665b8b:{NFSU2_TR(0x665b8b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B665b8d:{NFSU2_TR(0x665b8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B665b90:{NFSU2_TR(0x665b90);
w4(R+4,u32(0-u32(r4(R+4))));
}
B665b92:{NFSU2_TR(0x665b92);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B665b94:{NFSU2_TR(0x665b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665b9a:{NFSU2_TR(0x665b9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B665ba1:{NFSU2_TR(0x665ba1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B665ba4:{NFSU2_TR(0x665ba4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665ba5:{NFSU2_TR(0x665ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665ba8:{NFSU2_TR(0x665ba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665badull));
TAIL_STATIC(0x575620u,575);
}
B665bad:L665bad:{c.instructions+=4;NFSU2_TR(0x665bad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B665baf:{NFSU2_TR(0x665baf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665bb0:{NFSU2_TR(0x665bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665bb3:{NFSU2_TR(0x665bb3);
if(r1(R+518)){{goto L665f80;}}
}
B665bb9:L665bb9:{c.instructions+=4;NFSU2_TR(0x665bb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665bbf:{NFSU2_TR(0x665bbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B665bc6:{NFSU2_TR(0x665bc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665bc7:{NFSU2_TR(0x665bc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665bccull));
TAIL_STATIC(0x575620u,575);
}
B665bcc:L665bcc:{c.instructions+=4;NFSU2_TR(0x665bcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B665bce:{NFSU2_TR(0x665bce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665bcf:{NFSU2_TR(0x665bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665bd2:{NFSU2_TR(0x665bd2);
if(r1(R+518)){{goto L665f80;}}
}
B665bd8:L665bd8:{c.instructions+=2;NFSU2_TR(0x665bd8);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665bda:{NFSU2_TR(0x665bda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665bdfull));
TAIL_STATIC(0x575620u,575);
}
B665bdf:L665bdf:{c.instructions+=3;NFSU2_TR(0x665bdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B665be1:{NFSU2_TR(0x665be1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665be2:{NFSU2_TR(0x665be2);
if(r1(R+518)){{goto L665c62;}}
}
B665be4:L665be4:{c.instructions+=2;NFSU2_TR(0x665be4);
__builtin_memmove((R+4),(R+0),4);
}
B665be6:{NFSU2_TR(0x665be6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665bebull));
TAIL_STATIC(0x664ecfu,664);
}
B665beb:L665beb:{c.instructions+=2;NFSU2_TR(0x665beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665bee:{NFSU2_TR(0x665bee);
{goto L665c66;}
}
B665bf0:L665bf0:{c.instructions+=3;NFSU2_TR(0x665bf0);
__builtin_memmove((R+0),(R+28),4);
}
B665bf2:{NFSU2_TR(0x665bf2);
w4(R+0,u32(~u32(r4(R+0))));
}
B665bf4:{NFSU2_TR(0x665bf4);
{goto L665c12;}
}
B665bf6:L665bf6:{c.instructions+=4;NFSU2_TR(0x665bf6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B665bf7:{NFSU2_TR(0x665bf7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B665bf9:{NFSU2_TR(0x665bf9);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B665bfb:{NFSU2_TR(0x665bfb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L665c10;}}
}
B665bfd:L665bfd:{c.instructions+=2;NFSU2_TR(0x665bfd);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x39ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B665bff:{NFSU2_TR(0x665bff);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L665c10;}}
}
B665c01:L665c01:{c.instructions+=2;NFSU2_TR(0x665c01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665c02:{NFSU2_TR(0x665c02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665c07ull));
TAIL_STATIC(0x75d65bu,75d);
}
B665c07:L665c07:{c.instructions+=4;NFSU2_TR(0x665c07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665c08:{NFSU2_TR(0x665c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665c0b:{NFSU2_TR(0x665c0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B665c0e:{NFSU2_TR(0x665c0e);
if(r1(R+512)){{goto L665c1f;}}
}
B665c10:L665c10:{c.instructions+=1;NFSU2_TR(0x665c10);
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
B665c12:L665c12:{c.instructions+=5;NFSU2_TR(0x665c12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B665c13:{NFSU2_TR(0x665c13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B665c14:{NFSU2_TR(0x665c14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B665c15:{NFSU2_TR(0x665c15);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B665c16:{NFSU2_TR(0x665c16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B665c19:L665c19:{c.instructions+=2;NFSU2_TR(0x665c19);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B665c1c:{NFSU2_TR(0x665c1c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L665c26;}}
}
B665c1e:L665c1e:{c.instructions+=1;NFSU2_TR(0x665c1e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B665c1f:L665c1f:{c.instructions+=3;NFSU2_TR(0x665c1f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B665c21:{NFSU2_TR(0x665c21);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B665c24:{NFSU2_TR(0x665c24);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665c19u);}goto L665c19;}}
}
B665c26:L665c26:{c.instructions+=2;NFSU2_TR(0x665c26);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5dull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B665c29:{NFSU2_TR(0x665c29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665c10u);}goto L665c10;}}
}
B665c2b:L665c2b:{c.instructions+=7;NFSU2_TR(0x665c2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B665c2e:{NFSU2_TR(0x665c2e);
w4(R+28,u32(~u32(r4(R+28))));
}
B665c30:{NFSU2_TR(0x665c30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665c31:{NFSU2_TR(0x665c31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665c32:{NFSU2_TR(0x665c32);
__builtin_memmove((R+4),(R+12),4);
}
B665c34:{NFSU2_TR(0x665c34);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B665c35:{NFSU2_TR(0x665c35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665c3aull));
TAIL_STATIC(0x65c123u,65c);
}
B665c3a:L665c3a:{c.instructions+=2;NFSU2_TR(0x665c3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B665c3c:{NFSU2_TR(0x665c3c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665c10u);}goto L665c10;}}
}
B665c3e:L665c3e:{c.instructions+=3;NFSU2_TR(0x665c3e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B665c40:{NFSU2_TR(0x665c40);
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
B665c42:{NFSU2_TR(0x665c42);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665c12u);}goto L665c12;}}
}
B665c44:L665c44:{c.instructions+=2;NFSU2_TR(0x665c44);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B665c47:{NFSU2_TR(0x665c47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665c10u);}goto L665c10;}}
}
B665c49:L665c49:{c.instructions+=4;NFSU2_TR(0x665c49);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B665c4c:{NFSU2_TR(0x665c4c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B665c4d:{NFSU2_TR(0x665c4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665c4e:{NFSU2_TR(0x665c4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665c4f:L665c4f:{c.instructions+=2;NFSU2_TR(0x665c4f);
__builtin_memmove((R+4),(R+12),4);
}
B665c51:{NFSU2_TR(0x665c51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665c56ull));
TAIL_STATIC(0x66a83cu,66a);
}
B665c56:L665c56:{c.instructions+=1;NFSU2_TR(0x665c56);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665c12u);}goto L665c12;}
}
B665c58:L665c58:{c.instructions+=6;NFSU2_TR(0x665c58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B665c5b:{NFSU2_TR(0x665c5b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B665c5c:{NFSU2_TR(0x665c5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665c5d:{NFSU2_TR(0x665c5d);
w4(R+28,u32(~u32(r4(R+28))));
}
B665c5f:{NFSU2_TR(0x665c5f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665c60:{NFSU2_TR(0x665c60);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665c4fu);}goto L665c4f;}
}
B665c62:L665c62:{c.instructions+=1;NFSU2_TR(0x665c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B665c66:L665c66:{c.instructions+=2;NFSU2_TR(0x665c66);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B665c6a:{NFSU2_TR(0x665c6a);
if(r1(R+518)){{goto L665f8e;}}
}
B665c70:L665c70:{c.instructions+=7;NFSU2_TR(0x665c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665c76:{NFSU2_TR(0x665c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665c79:{NFSU2_TR(0x665c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665c7f:{NFSU2_TR(0x665c7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B665c82:{NFSU2_TR(0x665c82);
__builtin_memmove((R+8),(R+4),4);
}
B665c84:{NFSU2_TR(0x665c84);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B665c87:{NFSU2_TR(0x665c87);
__builtin_memmove((R+28),(R+0),4);
}
B665c89:L665c89:{c.instructions+=1;NFSU2_TR(0x665c89);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L665c8b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665c89u);}goto L665c89;}
}
B665c8b:L665c8b:{c.instructions+=2;NFSU2_TR(0x665c8b);
__builtin_memmove((R+4),(R+8),4);
}
B665c8d:{NFSU2_TR(0x665c8d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B665c90:L665c90:{c.instructions+=1;NFSU2_TR(0x665c90);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L665c92;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665c90u);}goto L665c90;}
}
B665c92:L665c92:{c.instructions+=4;NFSU2_TR(0x665c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665c98:{NFSU2_TR(0x665c98);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B665c9c:{NFSU2_TR(0x665c9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B665ca2:{NFSU2_TR(0x665ca2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665ca7ull));
TAIL_STATIC(0x575630u,575);
}
B665ca7:L665ca7:{c.instructions+=22;NFSU2_TR(0x665ca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665caa:{NFSU2_TR(0x665caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665cb0:{NFSU2_TR(0x665cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665cb3:{NFSU2_TR(0x665cb3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B665cb5:{NFSU2_TR(0x665cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B665cbb:{NFSU2_TR(0x665cbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665cbc:{NFSU2_TR(0x665cbc);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B665cc3:{NFSU2_TR(0x665cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B665cc7:{NFSU2_TR(0x665cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665cca:{NFSU2_TR(0x665cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665ccd:{NFSU2_TR(0x665ccd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B665cd0:{NFSU2_TR(0x665cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665cd3:{NFSU2_TR(0x665cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B665cda:{NFSU2_TR(0x665cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665cdd:{NFSU2_TR(0x665cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665ce0:{NFSU2_TR(0x665ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665ce6:{NFSU2_TR(0x665ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665ce9:{NFSU2_TR(0x665ce9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B665ceb:{NFSU2_TR(0x665ceb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B665ced:{NFSU2_TR(0x665ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665cf0:{NFSU2_TR(0x665cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665cf3:{NFSU2_TR(0x665cf3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L665f80;}}
}
B665cf9:L665cf9:{c.instructions+=2;NFSU2_TR(0x665cf9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B665cfc:{NFSU2_TR(0x665cfc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L665e32;}}
}
B665d02:L665d02:{c.instructions+=2;NFSU2_TR(0x665d02);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B665d05:{NFSU2_TR(0x665d05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L665f80;}}
}
B665d0b:L665d0b:{c.instructions+=2;NFSU2_TR(0x665d0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B665d0d:{NFSU2_TR(0x665d0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L665f80;}}
}
B665d13:L665d13:{c.instructions+=2;NFSU2_TR(0x665d13);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B665d15:{NFSU2_TR(0x665d15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L665f80;}}
}
B665d1b:L665d1b:{c.instructions+=5;NFSU2_TR(0x665d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665d1e:{NFSU2_TR(0x665d1e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B665d21:{NFSU2_TR(0x665d21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665d22:{NFSU2_TR(0x665d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665d25:{NFSU2_TR(0x665d25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665d2aull));
TAIL_STATIC(0x575620u,575);
}
B665d2a:L665d2a:{c.instructions+=4;NFSU2_TR(0x665d2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B665d2c:{NFSU2_TR(0x665d2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665d2d:{NFSU2_TR(0x665d2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665d30:{NFSU2_TR(0x665d30);
if(r1(R+518)){{goto L665f80;}}
}
B665d36:L665d36:{c.instructions+=6;NFSU2_TR(0x665d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665d39:{NFSU2_TR(0x665d39);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B665d3a:{NFSU2_TR(0x665d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B665d3d:{NFSU2_TR(0x665d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B665d44:{NFSU2_TR(0x665d44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665d45:{NFSU2_TR(0x665d45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665d4aull));
TAIL_STATIC(0x575620u,575);
}
B665d4a:L665d4a:{c.instructions+=3;NFSU2_TR(0x665d4a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B665d4c:{NFSU2_TR(0x665d4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665d4d:{NFSU2_TR(0x665d4d);
if(r1(R+518)){{goto L665d67;}}
}
B665d4f:L665d4f:{c.instructions+=7;NFSU2_TR(0x665d4f);
u8 U[4];
w4(U+0,u32(0x65b78dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665d54:{NFSU2_TR(0x665d54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665d55:{NFSU2_TR(0x665d55);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B665d58:{NFSU2_TR(0x665d58);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665d5a:{NFSU2_TR(0x665d5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665d5b:{NFSU2_TR(0x665d5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B665d5d:{NFSU2_TR(0x665d5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665d62ull));
TAIL_STATIC(0x401650u,401);
}
B665d62:L665d62:{c.instructions+=2;NFSU2_TR(0x665d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665d65:{NFSU2_TR(0x665d65);
{goto L665d6b;}
}
B665d67:L665d67:{c.instructions+=1;NFSU2_TR(0x665d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B665d6b:L665d6b:{c.instructions+=2;NFSU2_TR(0x665d6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B665d6f:{NFSU2_TR(0x665d6f);
if(r1(R+518)){{goto L665f80;}}
}
B665d75:L665d75:{c.instructions+=5;NFSU2_TR(0x665d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665d78:{NFSU2_TR(0x665d78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B665d7b:{NFSU2_TR(0x665d7b);
__builtin_memmove((R+8),(R+4),4);
}
B665d7d:{NFSU2_TR(0x665d7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B665d80:{NFSU2_TR(0x665d80);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B665d82:L665d82:{c.instructions+=1;NFSU2_TR(0x665d82);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L665d84;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665d82u);}goto L665d82;}
}
B665d84:L665d84:{c.instructions+=2;NFSU2_TR(0x665d84);
__builtin_memmove((R+4),(R+8),4);
}
B665d86:{NFSU2_TR(0x665d86);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B665d89:L665d89:{c.instructions+=1;NFSU2_TR(0x665d89);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L665d8b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665d89u);}goto L665d89;}
}
B665d8b:L665d8b:{c.instructions+=7;NFSU2_TR(0x665d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B665d8e:{NFSU2_TR(0x665d8e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B665d90:{NFSU2_TR(0x665d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B665d93:{NFSU2_TR(0x665d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B665d96:{NFSU2_TR(0x665d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B665d99:{NFSU2_TR(0x665d99);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665d9b:{NFSU2_TR(0x665d9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665d9c:L665d9c:{c.instructions+=1;NFSU2_TR(0x665d9c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L665d9e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665d9cu);}goto L665d9c;}
}
B665d9e:L665d9e:{c.instructions+=12;NFSU2_TR(0x665d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665da1:{NFSU2_TR(0x665da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B665da4:{NFSU2_TR(0x665da4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665da6:{NFSU2_TR(0x665da6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B665da7:{NFSU2_TR(0x665da7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B665daa:{NFSU2_TR(0x665daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665dad:{NFSU2_TR(0x665dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665db0:{NFSU2_TR(0x665db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B665db3:{NFSU2_TR(0x665db3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B665db6:{NFSU2_TR(0x665db6);
__builtin_memmove((R+28),(R+8),4);
}
B665db8:{NFSU2_TR(0x665db8);
__builtin_memmove((R+8),(R+4),4);
}
B665dba:{NFSU2_TR(0x665dba);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B665dbd:L665dbd:{c.instructions+=1;NFSU2_TR(0x665dbd);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L665dbf;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665dbdu);}goto L665dbd;}
}
B665dbf:L665dbf:{c.instructions+=3;NFSU2_TR(0x665dbf);
__builtin_memmove((R+4),(R+8),4);
}
B665dc1:{NFSU2_TR(0x665dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B665dc4:{NFSU2_TR(0x665dc4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B665dc7:L665dc7:{c.instructions+=1;NFSU2_TR(0x665dc7);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L665dc9;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665dc7u);}goto L665dc7;}
}
B665dc9:L665dc9:{c.instructions+=9;NFSU2_TR(0x665dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665dcc:{NFSU2_TR(0x665dcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B665dcf:{NFSU2_TR(0x665dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665dd2:{NFSU2_TR(0x665dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665dd5:{NFSU2_TR(0x665dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B665dd8:{NFSU2_TR(0x665dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665ddb:{NFSU2_TR(0x665ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665de1:{NFSU2_TR(0x665de1);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665de3:{NFSU2_TR(0x665de3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665de4:L665de4:{c.instructions+=1;NFSU2_TR(0x665de4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L665de6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665de4u);}goto L665de4;}
}
B665de6:L665de6:{c.instructions+=10;NFSU2_TR(0x665de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665de9:{NFSU2_TR(0x665de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665dec:{NFSU2_TR(0x665dec);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B665def:{NFSU2_TR(0x665def);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665df2:{NFSU2_TR(0x665df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B665df5:{NFSU2_TR(0x665df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B665df8:{NFSU2_TR(0x665df8);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B665dfb:{NFSU2_TR(0x665dfb);
__builtin_memmove((R+24),(R+4),4);
}
B665dfd:{NFSU2_TR(0x665dfd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B665e00:{NFSU2_TR(0x665e00);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B665e02:L665e02:{c.instructions+=1;NFSU2_TR(0x665e02);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L665e04;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665e02u);}goto L665e02;}
}
B665e04:L665e04:{c.instructions+=2;NFSU2_TR(0x665e04);
__builtin_memmove((R+4),(R+24),4);
}
B665e06:{NFSU2_TR(0x665e06);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B665e09:L665e09:{c.instructions+=1;NFSU2_TR(0x665e09);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L665e0b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665e09u);}goto L665e09;}
}
B665e0b:L665e0b:{c.instructions+=3;NFSU2_TR(0x665e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665e0e:{NFSU2_TR(0x665e0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B665e10:{NFSU2_TR(0x665e10);
if(r1(R+518)){{goto L665e20;}}
}
B665e12:L665e12:{c.instructions+=2;NFSU2_TR(0x665e12);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665e14:{NFSU2_TR(0x665e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665e19ull));
TAIL_STATIC(0x661453u,661);
}
B665e19:L665e19:{c.instructions+=2;NFSU2_TR(0x665e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B665e1d:{NFSU2_TR(0x665e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B665e20:L665e20:{c.instructions+=5;NFSU2_TR(0x665e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665e23:{NFSU2_TR(0x665e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B665e27:{NFSU2_TR(0x665e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B665e2a:{NFSU2_TR(0x665e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665e2d:{NFSU2_TR(0x665e2d);
{goto L665eb5;}
}
B665e32:L665e32:{c.instructions+=4;NFSU2_TR(0x665e32);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B665e33:{NFSU2_TR(0x665e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665e36:{NFSU2_TR(0x665e36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665e39:{NFSU2_TR(0x665e39);
if(r1(R+518)){{goto L665e45;}}
}
B665e3b:L665e3b:{c.instructions+=2;NFSU2_TR(0x665e3b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B665e3c:{NFSU2_TR(0x665e3c);
if(r1(R+518)){{goto L665e45;}}
}
B665e3e:L665e3e:{c.instructions+=2;NFSU2_TR(0x665e3e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B665e3f:{NFSU2_TR(0x665e3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L665f80;}}
}
B665e45:L665e45:{c.instructions+=8;NFSU2_TR(0x665e45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B665e48:{NFSU2_TR(0x665e48);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B665e4b:{NFSU2_TR(0x665e4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B665e4e:{NFSU2_TR(0x665e4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B665e50:{NFSU2_TR(0x665e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B665e57:{NFSU2_TR(0x665e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665e5a:{NFSU2_TR(0x665e5a);
__builtin_memmove((R+4),(R+0),4);
}
B665e5c:{NFSU2_TR(0x665e5c);
if(r1(R+518)){{goto L665e67;}}
}
B665e5e:L665e5e:{c.instructions+=3;NFSU2_TR(0x665e5e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B665e61:{NFSU2_TR(0x665e61);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B665e64:{NFSU2_TR(0x665e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665e67:L665e67:{c.instructions+=4;NFSU2_TR(0x665e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665e6a:{NFSU2_TR(0x665e6a);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B665e6e:{NFSU2_TR(0x665e6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665e6f:{NFSU2_TR(0x665e6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665e74ull));
TAIL_STATIC(0x575620u,575);
}
B665e74:L665e74:{c.instructions+=4;NFSU2_TR(0x665e74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B665e76:{NFSU2_TR(0x665e76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665e77:{NFSU2_TR(0x665e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665e7a:{NFSU2_TR(0x665e7a);
if(r1(R+518)){{goto L665f80;}}
}
B665e80:L665e80:{c.instructions+=5;NFSU2_TR(0x665e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B665e83:{NFSU2_TR(0x665e83);
__builtin_memmove((R+4),(R+24),4);
}
B665e85:{NFSU2_TR(0x665e85);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B665e88:{NFSU2_TR(0x665e88);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B665e8a:{NFSU2_TR(0x665e8a);
__builtin_memmove((R+28),(R+8),4);
}
B665e8c:L665e8c:{c.instructions+=1;NFSU2_TR(0x665e8c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L665e8e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665e8cu);}goto L665e8c;}
}
B665e8e:L665e8e:{c.instructions+=2;NFSU2_TR(0x665e8e);
__builtin_memmove((R+4),(R+24),4);
}
B665e90:{NFSU2_TR(0x665e90);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B665e93:L665e93:{c.instructions+=1;NFSU2_TR(0x665e93);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L665e95;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665e93u);}goto L665e93;}
}
B665e95:L665e95:{c.instructions+=6;NFSU2_TR(0x665e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665e98:{NFSU2_TR(0x665e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665e9e:{NFSU2_TR(0x665e9e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B665ea2:{NFSU2_TR(0x665ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665ea5:{NFSU2_TR(0x665ea5);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665ea7:{NFSU2_TR(0x665ea7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665ea8:L665ea8:{c.instructions+=1;NFSU2_TR(0x665ea8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L665eaa;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665ea8u);}goto L665ea8;}
}
B665eaa:L665eaa:{c.instructions+=4;NFSU2_TR(0x665eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665ead:{NFSU2_TR(0x665ead);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B665eb0:{NFSU2_TR(0x665eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665eb3:{NFSU2_TR(0x665eb3);
__builtin_memmove((R+8),(R+0),4);
}
B665eb5:L665eb5:{c.instructions+=7;NFSU2_TR(0x665eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665eb8:{NFSU2_TR(0x665eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665ebb:{NFSU2_TR(0x665ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665ebe:{NFSU2_TR(0x665ebe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B665ec0:{NFSU2_TR(0x665ec0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B665ec3:{NFSU2_TR(0x665ec3);
__builtin_memmove((R+0),(R+4),4);
}
B665ec5:{NFSU2_TR(0x665ec5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B665ec8:L665ec8:{c.instructions+=1;NFSU2_TR(0x665ec8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L665eca;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665ec8u);}goto L665ec8;}
}
B665eca:L665eca:{c.instructions+=2;NFSU2_TR(0x665eca);
__builtin_memmove((R+4),(R+0),4);
}
B665ecc:{NFSU2_TR(0x665ecc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B665ecf:L665ecf:{c.instructions+=1;NFSU2_TR(0x665ecf);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L665ed1;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665ecfu);}goto L665ecf;}
}
B665ed1:L665ed1:{c.instructions+=14;NFSU2_TR(0x665ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665ed4:{NFSU2_TR(0x665ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665ed7:{NFSU2_TR(0x665ed7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B665edb:{NFSU2_TR(0x665edb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B665edd:{NFSU2_TR(0x665edd);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B665ede:{NFSU2_TR(0x665ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665ee1:{NFSU2_TR(0x665ee1);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B665ee5:{NFSU2_TR(0x665ee5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B665ee6:{NFSU2_TR(0x665ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665eec:{NFSU2_TR(0x665eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665ef2:{NFSU2_TR(0x665ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B665ef5:{NFSU2_TR(0x665ef5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B665ef8:{NFSU2_TR(0x665ef8);
__builtin_memmove((R+0),(R+4),4);
}
B665efa:{NFSU2_TR(0x665efa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B665efd:L665efd:{c.instructions+=1;NFSU2_TR(0x665efd);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L665eff;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665efdu);}goto L665efd;}
}
B665eff:L665eff:{c.instructions+=2;NFSU2_TR(0x665eff);
__builtin_memmove((R+4),(R+0),4);
}
B665f01:{NFSU2_TR(0x665f01);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B665f04:L665f04:{c.instructions+=1;NFSU2_TR(0x665f04);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L665f06;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665f04u);}goto L665f04;}
}
B665f06:L665f06:{c.instructions+=6;NFSU2_TR(0x665f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665f0c:{NFSU2_TR(0x665f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665f0f:{NFSU2_TR(0x665f0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B665f12:{NFSU2_TR(0x665f12);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665f18:{NFSU2_TR(0x665f18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B665f1a:{NFSU2_TR(0x665f1a);
if(r1(R+518)){{goto L665f2d;}}
}
B665f1c:L665f1c:{c.instructions+=2;NFSU2_TR(0x665f1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665f1d:{NFSU2_TR(0x665f1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665f22ull));
TAIL_STATIC(0x575630u,575);
}
B665f22:L665f22:{c.instructions+=3;NFSU2_TR(0x665f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B665f29:{NFSU2_TR(0x665f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B665f2c:{NFSU2_TR(0x665f2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665f2d:L665f2d:{c.instructions+=8;NFSU2_TR(0x665f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665f30:{NFSU2_TR(0x665f30);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B665f32:{NFSU2_TR(0x665f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B665f38:{NFSU2_TR(0x665f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665f3e:{NFSU2_TR(0x665f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665f41:{NFSU2_TR(0x665f41);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B665f43:{NFSU2_TR(0x665f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665f46:{NFSU2_TR(0x665f46);
if(r1(R+518)){{goto L665f4d;}}
}
B665f48:L665f48:{c.instructions+=2;NFSU2_TR(0x665f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665f4b:{NFSU2_TR(0x665f4b);
{goto L665f52;}
}
B665f4d:L665f4d:{c.instructions+=2;NFSU2_TR(0x665f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665f50:{NFSU2_TR(0x665f50);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B665f52:L665f52:{c.instructions+=16;NFSU2_TR(0x665f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665f55:{NFSU2_TR(0x665f55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B665f57:{NFSU2_TR(0x665f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665f5a:{NFSU2_TR(0x665f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665f5d:{NFSU2_TR(0x665f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B665f60:{NFSU2_TR(0x665f60);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B665f62:{NFSU2_TR(0x665f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665f65:{NFSU2_TR(0x665f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665f68:{NFSU2_TR(0x665f68);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B665f6a:{NFSU2_TR(0x665f6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B665f6c:{NFSU2_TR(0x665f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B665f72:{NFSU2_TR(0x665f72);
w4(R+8,u32(~u32(r4(R+8))));
}
B665f74:{NFSU2_TR(0x665f74);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B665f77:{NFSU2_TR(0x665f77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665f7a:{NFSU2_TR(0x665f7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665f7d:{NFSU2_TR(0x665f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B665f80:L665f80:{c.instructions+=3;NFSU2_TR(0x665f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665f83:{NFSU2_TR(0x665f83);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B665f85:{NFSU2_TR(0x665f85);
if(r1(R+518)){{goto L665f8e;}}
}
B665f87:L665f87:{c.instructions+=2;NFSU2_TR(0x665f87);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665f89:{NFSU2_TR(0x665f89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665f8eull));
TAIL_STATIC(0x664f42u,664);
}
B665f8e:L665f8e:{c.instructions+=3;NFSU2_TR(0x665f8e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B665f90:{NFSU2_TR(0x665f90);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B665f93:{NFSU2_TR(0x665f93);
if(r1(R+518)){{goto L665f9e;}}
}
B665f95:L665f95:{c.instructions+=2;NFSU2_TR(0x665f95);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B665f98:{NFSU2_TR(0x665f98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665f9dull));
TAIL_STATIC(0x575630u,575);
}
B665f9d:L665f9d:{c.instructions+=1;NFSU2_TR(0x665f9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665f9e:L665f9e:{c.instructions+=2;NFSU2_TR(0x665f9e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B665fa1:{NFSU2_TR(0x665fa1);
if(r1(R+518)){{goto L665fac;}}
}
B665fa3:L665fa3:{c.instructions+=2;NFSU2_TR(0x665fa3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B665fa6:{NFSU2_TR(0x665fa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665fabull));
TAIL_STATIC(0x575630u,575);
}
B665fab:L665fab:{c.instructions+=1;NFSU2_TR(0x665fab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665fac:L665fac:{c.instructions+=3;NFSU2_TR(0x665fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665faf:{NFSU2_TR(0x665faf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B665fb1:{NFSU2_TR(0x665fb1);
if(r1(R+518)){{goto L665fba;}}
}
B665fb3:L665fb3:{c.instructions+=2;NFSU2_TR(0x665fb3);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665fb5:{NFSU2_TR(0x665fb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665fbaull));
TAIL_STATIC(0x661453u,661);
}
B665fba:L665fba:{c.instructions+=2;NFSU2_TR(0x665fba);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B665fbd:{NFSU2_TR(0x665fbd);
if(r1(R+518)){{goto L665fc8;}}
}
B665fbf:L665fbf:{c.instructions+=2;NFSU2_TR(0x665fbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B665fc2:{NFSU2_TR(0x665fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665fc7ull));
TAIL_STATIC(0x575630u,575);
}
B665fc7:L665fc7:{c.instructions+=1;NFSU2_TR(0x665fc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B665fc8:L665fc8:{c.instructions+=2;NFSU2_TR(0x665fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B665fcb:{NFSU2_TR(0x665fcb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665c12u);}goto L665c12;}
}
B665fd0:L665fd0:{c.instructions+=9;NFSU2_TR(0x665fd0);
__builtin_memmove((R+28),(R+28),4);
}
B665fd2:{NFSU2_TR(0x665fd2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665fd3:{NFSU2_TR(0x665fd3);
__builtin_memmove((R+20),(R+16),4);
}
B665fd5:{NFSU2_TR(0x665fd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665fd6:{NFSU2_TR(0x665fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B665fd9:{NFSU2_TR(0x665fd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B665fdb:{NFSU2_TR(0x665fdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665fdc:{NFSU2_TR(0x665fdc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665fdd:{NFSU2_TR(0x665fdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L665fe9;}}
}
B665fdf:L665fdf:{c.instructions+=2;NFSU2_TR(0x665fdf);
w4(R+28,u32(0x8876086cull));
}
B665fe4:{NFSU2_TR(0x665fe4);
TAIL_STATIC(0x666086u,666);
}
B665fe9:L665fe9:{c.instructions+=4;NFSU2_TR(0x665fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665fec:{NFSU2_TR(0x665fec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B665fee:{NFSU2_TR(0x665fee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B665ff1:{NFSU2_TR(0x665ff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x665ff6ull));
TAIL_STATIC(0x65c5deu,65c);
}
B665ff6:L665ff6:{c.instructions+=3;NFSU2_TR(0x665ff6);
__builtin_memmove((R+24),(R+0),4);
}
B665ff8:{NFSU2_TR(0x665ff8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B665ffa:{NFSU2_TR(0x665ffa);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x665fdfu);}goto L665fdf;}}
}
B665ffc:L665ffc:{c.instructions+=2;NFSU2_TR(0x665ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B665fff:{NFSU2_TR(0x665fff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
TAIL_STATIC(0x666001u,666);
}
XIT:NFSU2_TR_EXIT(0x665,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
