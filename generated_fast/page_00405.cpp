#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_406(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x405,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x405,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_405(u8* __restrict R,Cpu& c);
u32 page_405(Cpu& c){return body_405(c.regs.data(),c);}
__attribute__((noinline)) u32 body_405(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x405004:goto L405004;
case 0x40500a:c.instructions+=7;goto B40500a;
case 0x405011:c.instructions+=6;goto B405011;
case 0x405012:c.instructions+=5;goto B405012;
case 0x405013:c.instructions+=4;goto B405013;
case 0x405014:c.instructions+=3;goto B405014;
case 0x405016:c.instructions+=2;goto B405016;
case 0x405017:c.instructions+=1;goto B405017;
case 0x405020:goto L405020;
case 0x405021:c.instructions+=12;goto B405021;
case 0x405022:c.instructions+=11;goto B405022;
case 0x405024:c.instructions+=10;goto B405024;
case 0x405027:c.instructions+=9;goto B405027;
case 0x405028:c.instructions+=8;goto B405028;
case 0x40502c:c.instructions+=7;goto B40502c;
case 0x405030:c.instructions+=6;goto B405030;
case 0x405034:c.instructions+=5;goto B405034;
case 0x405038:c.instructions+=4;goto B405038;
case 0x40503e:c.instructions+=3;goto B40503e;
case 0x405040:c.instructions+=2;goto B405040;
case 0x405043:c.instructions+=1;goto B405043;
case 0x405045:goto L405045;
case 0x405049:c.instructions+=1;goto B405049;
case 0x40504b:goto L40504b;
case 0x405051:goto L405051;
case 0x405055:c.instructions+=4;goto B405055;
case 0x405057:c.instructions+=3;goto B405057;
case 0x405059:c.instructions+=2;goto B405059;
case 0x40505c:c.instructions+=1;goto B40505c;
case 0x40505e:goto L40505e;
case 0x405060:c.instructions+=1;goto B405060;
case 0x405064:goto L405064;
case 0x405066:c.instructions+=1;goto B405066;
case 0x40506b:goto L40506b;
case 0x40506f:c.instructions+=5;goto B40506f;
case 0x405073:c.instructions+=4;goto B405073;
case 0x405075:c.instructions+=3;goto B405075;
case 0x405077:c.instructions+=2;goto B405077;
case 0x40507a:c.instructions+=1;goto B40507a;
case 0x40507c:goto L40507c;
case 0x405082:goto L405082;
case 0x405084:c.instructions+=1;goto B405084;
case 0x405089:goto L405089;
case 0x40508b:c.instructions+=6;goto B40508b;
case 0x40508d:c.instructions+=5;goto B40508d;
case 0x40508f:c.instructions+=4;goto B40508f;
case 0x405091:c.instructions+=3;goto B405091;
case 0x405094:c.instructions+=2;goto B405094;
case 0x405097:c.instructions+=1;goto B405097;
case 0x405099:goto L405099;
case 0x40509b:c.instructions+=14;goto B40509b;
case 0x40509e:c.instructions+=13;goto B40509e;
case 0x4050a1:c.instructions+=12;goto B4050a1;
case 0x4050a3:c.instructions+=11;goto B4050a3;
case 0x4050a7:c.instructions+=10;goto B4050a7;
case 0x4050a9:c.instructions+=9;goto B4050a9;
case 0x4050ac:c.instructions+=8;goto B4050ac;
case 0x4050b0:c.instructions+=7;goto B4050b0;
case 0x4050b2:c.instructions+=6;goto B4050b2;
case 0x4050b4:c.instructions+=5;goto B4050b4;
case 0x4050b7:c.instructions+=4;goto B4050b7;
case 0x4050b8:c.instructions+=3;goto B4050b8;
case 0x4050bb:c.instructions+=2;goto B4050bb;
case 0x4050bc:c.instructions+=1;goto B4050bc;
case 0x4050bf:goto L4050bf;
case 0x4050c1:c.instructions+=29;goto B4050c1;
case 0x4050c4:c.instructions+=28;goto B4050c4;
case 0x4050c8:c.instructions+=27;goto B4050c8;
case 0x4050ca:c.instructions+=26;goto B4050ca;
case 0x4050cc:c.instructions+=25;goto B4050cc;
case 0x4050d0:c.instructions+=24;goto B4050d0;
case 0x4050d4:c.instructions+=23;goto B4050d4;
case 0x4050d7:c.instructions+=22;goto B4050d7;
case 0x4050db:c.instructions+=21;goto B4050db;
case 0x4050dd:c.instructions+=20;goto B4050dd;
case 0x4050de:c.instructions+=19;goto B4050de;
case 0x4050e4:c.instructions+=18;goto B4050e4;
case 0x4050e7:c.instructions+=17;goto B4050e7;
case 0x4050eb:c.instructions+=16;goto B4050eb;
case 0x4050ed:c.instructions+=15;goto B4050ed;
case 0x4050f0:c.instructions+=14;goto B4050f0;
case 0x4050f1:c.instructions+=13;goto B4050f1;
case 0x4050f3:c.instructions+=12;goto B4050f3;
case 0x4050f5:c.instructions+=11;goto B4050f5;
case 0x4050f9:c.instructions+=10;goto B4050f9;
case 0x4050fa:c.instructions+=9;goto B4050fa;
case 0x4050fb:c.instructions+=8;goto B4050fb;
case 0x4050fd:c.instructions+=7;goto B4050fd;
case 0x4050ff:c.instructions+=6;goto B4050ff;
case 0x405102:c.instructions+=5;goto B405102;
case 0x405106:c.instructions+=4;goto B405106;
case 0x405108:c.instructions+=3;goto B405108;
case 0x40510b:c.instructions+=2;goto B40510b;
case 0x40510d:c.instructions+=1;goto B40510d;
case 0x405112:goto L405112;
case 0x405115:c.instructions+=3;goto B405115;
case 0x405116:c.instructions+=2;goto B405116;
case 0x405117:c.instructions+=1;goto B405117;
case 0x405120:goto L405120;
case 0x405121:c.instructions+=11;goto B405121;
case 0x405123:c.instructions+=10;goto B405123;
case 0x405126:c.instructions+=9;goto B405126;
case 0x40512c:c.instructions+=8;goto B40512c;
case 0x40512d:c.instructions+=7;goto B40512d;
case 0x40512f:c.instructions+=6;goto B40512f;
case 0x405131:c.instructions+=5;goto B405131;
case 0x405133:c.instructions+=4;goto B405133;
case 0x405134:c.instructions+=3;goto B405134;
case 0x405135:c.instructions+=2;goto B405135;
case 0x405139:c.instructions+=1;goto B405139;
case 0x40513f:goto L40513f;
case 0x405142:c.instructions+=11;goto B405142;
case 0x405145:c.instructions+=10;goto B405145;
case 0x405149:c.instructions+=9;goto B405149;
case 0x40514b:c.instructions+=8;goto B40514b;
case 0x40514d:c.instructions+=7;goto B40514d;
case 0x405151:c.instructions+=6;goto B405151;
case 0x405155:c.instructions+=5;goto B405155;
case 0x40515b:c.instructions+=4;goto B40515b;
case 0x40515f:c.instructions+=3;goto B40515f;
case 0x405165:c.instructions+=2;goto B405165;
case 0x405169:c.instructions+=1;goto B405169;
case 0x40516b:goto L40516b;
case 0x40516e:c.instructions+=1;goto B40516e;
case 0x405170:goto L405170;
case 0x405172:c.instructions+=1;goto B405172;
case 0x405174:goto L405174;
case 0x405177:c.instructions+=18;goto B405177;
case 0x40517a:c.instructions+=17;goto B40517a;
case 0x40517d:c.instructions+=16;goto B40517d;
case 0x405180:c.instructions+=15;goto B405180;
case 0x405183:c.instructions+=14;goto B405183;
case 0x405185:c.instructions+=13;goto B405185;
case 0x405187:c.instructions+=12;goto B405187;
case 0x405189:c.instructions+=11;goto B405189;
case 0x40518b:c.instructions+=10;goto B40518b;
case 0x40518d:c.instructions+=9;goto B40518d;
case 0x40518f:c.instructions+=8;goto B40518f;
case 0x405191:c.instructions+=7;goto B405191;
case 0x405193:c.instructions+=6;goto B405193;
case 0x405195:c.instructions+=5;goto B405195;
case 0x405197:c.instructions+=4;goto B405197;
case 0x405199:c.instructions+=3;goto B405199;
case 0x40519b:c.instructions+=2;goto B40519b;
case 0x40519d:c.instructions+=1;goto B40519d;
case 0x40519f:goto L40519f;
case 0x4051a3:c.instructions+=7;goto B4051a3;
case 0x4051a4:c.instructions+=6;goto B4051a4;
case 0x4051a8:c.instructions+=5;goto B4051a8;
case 0x4051ab:c.instructions+=4;goto B4051ab;
case 0x4051ad:c.instructions+=3;goto B4051ad;
case 0x4051b1:c.instructions+=2;goto B4051b1;
case 0x4051b5:c.instructions+=1;goto B4051b5;
case 0x4051b7:goto L4051b7;
case 0x4051bb:c.instructions+=1;goto B4051bb;
case 0x4051bd:goto L4051bd;
case 0x4051bf:goto L4051bf;
case 0x4051c0:c.instructions+=4;goto B4051c0;
case 0x4051c4:c.instructions+=3;goto B4051c4;
case 0x4051c5:c.instructions+=2;goto B4051c5;
case 0x4051c9:c.instructions+=1;goto B4051c9;
case 0x4051ce:goto L4051ce;
case 0x4051d0:c.instructions+=3;goto B4051d0;
case 0x4051d2:c.instructions+=2;goto B4051d2;
case 0x4051d6:c.instructions+=1;goto B4051d6;
case 0x4051d8:goto L4051d8;
case 0x4051df:c.instructions+=1;goto B4051df;
case 0x4051e0:goto L4051e0;
case 0x4051e4:c.instructions+=6;goto B4051e4;
case 0x4051e5:c.instructions+=5;goto B4051e5;
case 0x4051e9:c.instructions+=4;goto B4051e9;
case 0x4051ed:c.instructions+=3;goto B4051ed;
case 0x4051f1:c.instructions+=2;goto B4051f1;
case 0x4051f4:c.instructions+=1;goto B4051f4;
case 0x4051f9:goto L4051f9;
case 0x4051fd:c.instructions+=5;goto B4051fd;
case 0x405201:c.instructions+=4;goto B405201;
case 0x405205:c.instructions+=3;goto B405205;
case 0x405206:c.instructions+=2;goto B405206;
case 0x405207:c.instructions+=1;goto B405207;
case 0x40520c:goto L40520c;
case 0x40520d:c.instructions+=4;goto B40520d;
case 0x405210:c.instructions+=3;goto B405210;
case 0x405212:c.instructions+=2;goto B405212;
case 0x405216:c.instructions+=1;goto B405216;
case 0x405218:goto L405218;
case 0x40521c:c.instructions+=2;goto B40521c;
case 0x405223:c.instructions+=1;goto B405223;
case 0x405226:goto L405226;
case 0x405229:c.instructions+=9;goto B405229;
case 0x40522b:c.instructions+=8;goto B40522b;
case 0x40522e:c.instructions+=7;goto B40522e;
case 0x405231:c.instructions+=6;goto B405231;
case 0x405233:c.instructions+=5;goto B405233;
case 0x405236:c.instructions+=4;goto B405236;
case 0x405239:c.instructions+=3;goto B405239;
case 0x40523c:c.instructions+=2;goto B40523c;
case 0x40523d:c.instructions+=1;goto B40523d;
case 0x40523f:goto L40523f;
case 0x405243:goto L405243;
case 0x405247:c.instructions+=4;goto B405247;
case 0x40524d:c.instructions+=3;goto B40524d;
case 0x40524f:c.instructions+=2;goto B40524f;
case 0x405255:c.instructions+=1;goto B405255;
case 0x40525b:goto L40525b;
case 0x40525c:c.instructions+=5;goto B40525c;
case 0x40525d:c.instructions+=4;goto B40525d;
case 0x40525e:c.instructions+=3;goto B40525e;
case 0x405260:c.instructions+=2;goto B405260;
case 0x405261:c.instructions+=1;goto B405261;
case 0x405270:goto L405270;
case 0x405271:c.instructions+=8;goto B405271;
case 0x405272:c.instructions+=7;goto B405272;
case 0x405274:c.instructions+=6;goto B405274;
case 0x405277:c.instructions+=5;goto B405277;
case 0x405279:c.instructions+=4;goto B405279;
case 0x40527a:c.instructions+=3;goto B40527a;
case 0x40527c:c.instructions+=2;goto B40527c;
case 0x405282:c.instructions+=1;goto B405282;
case 0x405284:goto L405284;
case 0x405285:c.instructions+=1;goto B405285;
case 0x405288:goto L405288;
case 0x40528b:c.instructions+=3;goto B40528b;
case 0x40528c:c.instructions+=2;goto B40528c;
case 0x40528d:c.instructions+=1;goto B40528d;
case 0x405292:goto L405292;
case 0x405298:c.instructions+=8;goto B405298;
case 0x40529b:c.instructions+=7;goto B40529b;
case 0x40529c:c.instructions+=6;goto B40529c;
case 0x4052a2:c.instructions+=5;goto B4052a2;
case 0x4052a5:c.instructions+=4;goto B4052a5;
case 0x4052a8:c.instructions+=3;goto B4052a8;
case 0x4052a9:c.instructions+=2;goto B4052a9;
case 0x4052ab:c.instructions+=1;goto B4052ab;
case 0x4052ad:goto L4052ad;
case 0x4052ae:goto L4052ae;
case 0x4052af:c.instructions+=2;goto B4052af;
case 0x4052b0:c.instructions+=1;goto B4052b0;
case 0x4052c0:goto L4052c0;
case 0x4052c4:c.instructions+=3;goto B4052c4;
case 0x4052c6:c.instructions+=2;goto B4052c6;
case 0x4052c8:c.instructions+=1;goto B4052c8;
case 0x4052ca:goto L4052ca;
case 0x4052cb:c.instructions+=3;goto B4052cb;
case 0x4052ce:c.instructions+=2;goto B4052ce;
case 0x4052d0:c.instructions+=1;goto B4052d0;
case 0x4052d2:goto L4052d2;
case 0x4052da:c.instructions+=2;goto B4052da;
case 0x4052de:c.instructions+=1;goto B4052de;
case 0x4052e0:goto L4052e0;
case 0x4052e8:c.instructions+=2;goto B4052e8;
case 0x4052ec:c.instructions+=1;goto B4052ec;
case 0x4052ee:goto L4052ee;
case 0x4052f1:c.instructions+=2;goto B4052f1;
case 0x4052f3:c.instructions+=1;goto B4052f3;
case 0x4052f5:goto L4052f5;
case 0x4052fc:c.instructions+=2;goto B4052fc;
case 0x4052fe:c.instructions+=1;goto B4052fe;
case 0x405300:goto L405300;
case 0x405303:c.instructions+=2;goto B405303;
case 0x405306:c.instructions+=1;goto B405306;
case 0x40530d:goto L40530d;
case 0x40530e:goto L40530e;
case 0x405320:goto L405320;
case 0x405322:c.instructions+=2;goto B405322;
case 0x405329:c.instructions+=1;goto B405329;
case 0x405330:goto L405330;
case 0x405331:c.instructions+=3;goto B405331;
case 0x405334:c.instructions+=2;goto B405334;
case 0x405336:c.instructions+=1;goto B405336;
case 0x405338:goto L405338;
case 0x40533a:c.instructions+=1;goto B40533a;
case 0x40533f:goto L40533f;
case 0x405344:c.instructions+=3;goto B405344;
case 0x405345:c.instructions+=2;goto B405345;
case 0x405346:c.instructions+=1;goto B405346;
case 0x40534b:goto L40534b;
case 0x40534e:goto L40534e;
case 0x40534f:c.instructions+=1;goto B40534f;
case 0x405350:goto L405350;
case 0x405351:c.instructions+=7;goto B405351;
case 0x405355:c.instructions+=6;goto B405355;
case 0x405356:c.instructions+=5;goto B405356;
case 0x40535b:c.instructions+=4;goto B40535b;
case 0x40535d:c.instructions+=3;goto B40535d;
case 0x40535f:c.instructions+=2;goto B40535f;
case 0x405361:c.instructions+=1;goto B405361;
case 0x405366:goto L405366;
case 0x405368:c.instructions+=5;goto B405368;
case 0x40536a:c.instructions+=4;goto B40536a;
case 0x40536c:c.instructions+=3;goto B40536c;
case 0x40536d:c.instructions+=2;goto B40536d;
case 0x40536f:c.instructions+=1;goto B40536f;
case 0x405374:goto L405374;
case 0x405377:c.instructions+=3;goto B405377;
case 0x405378:c.instructions+=2;goto B405378;
case 0x40537a:c.instructions+=1;goto B40537a;
case 0x40537f:goto L40537f;
case 0x405382:c.instructions+=3;goto B405382;
case 0x405383:c.instructions+=2;goto B405383;
case 0x405385:c.instructions+=1;goto B405385;
case 0x40538a:goto L40538a;
case 0x40538d:c.instructions+=3;goto B40538d;
case 0x40538e:c.instructions+=2;goto B40538e;
case 0x405390:c.instructions+=1;goto B405390;
case 0x405395:goto L405395;
case 0x405397:c.instructions+=1;goto B405397;
case 0x40539c:goto L40539c;
case 0x40539d:c.instructions+=2;goto B40539d;
case 0x40539e:c.instructions+=1;goto B40539e;
case 0x4053b0:goto L4053b0;
case 0x4053b4:c.instructions+=12;goto B4053b4;
case 0x4053b8:c.instructions+=11;goto B4053b8;
case 0x4053bc:c.instructions+=10;goto B4053bc;
case 0x4053be:c.instructions+=9;goto B4053be;
case 0x4053c2:c.instructions+=8;goto B4053c2;
case 0x4053c5:c.instructions+=7;goto B4053c5;
case 0x4053c8:c.instructions+=6;goto B4053c8;
case 0x4053ce:c.instructions+=5;goto B4053ce;
case 0x4053d0:c.instructions+=4;goto B4053d0;
case 0x4053d6:c.instructions+=3;goto B4053d6;
case 0x4053d8:c.instructions+=2;goto B4053d8;
case 0x4053db:c.instructions+=1;goto B4053db;
case 0x4053dd:goto L4053dd;
case 0x4053e0:c.instructions+=2;goto B4053e0;
case 0x4053e2:c.instructions+=1;goto B4053e2;
case 0x4053e4:goto L4053e4;
case 0x4053e9:c.instructions+=1;goto B4053e9;
case 0x4053eb:goto L4053eb;
case 0x4053f1:c.instructions+=2;goto B4053f1;
case 0x4053f4:c.instructions+=1;goto B4053f4;
case 0x4053f7:goto L4053f7;
case 0x4053fe:goto L4053fe;
case 0x405410:goto L405410;
case 0x405414:c.instructions+=11;goto B405414;
case 0x40541a:c.instructions+=10;goto B40541a;
case 0x40541d:c.instructions+=9;goto B40541d;
case 0x40541f:c.instructions+=8;goto B40541f;
case 0x405421:c.instructions+=7;goto B405421;
case 0x405424:c.instructions+=6;goto B405424;
case 0x40542a:c.instructions+=5;goto B40542a;
case 0x40542c:c.instructions+=4;goto B40542c;
case 0x405432:c.instructions+=3;goto B405432;
case 0x405434:c.instructions+=2;goto B405434;
case 0x405437:c.instructions+=1;goto B405437;
case 0x405439:goto L405439;
case 0x40543c:c.instructions+=2;goto B40543c;
case 0x40543e:c.instructions+=1;goto B40543e;
case 0x405440:goto L405440;
case 0x405445:c.instructions+=1;goto B405445;
case 0x405447:goto L405447;
case 0x40544d:goto L40544d;
case 0x405450:goto L405450;
case 0x405460:goto L405460;
case 0x405462:c.instructions+=3;goto B405462;
case 0x405465:c.instructions+=2;goto B405465;
case 0x405468:c.instructions+=1;goto B405468;
case 0x40546a:goto L40546a;
case 0x40546e:c.instructions+=2;goto B40546e;
case 0x405470:c.instructions+=1;goto B405470;
case 0x405472:goto L405472;
case 0x405475:c.instructions+=1;goto B405475;
case 0x405477:goto L405477;
case 0x405479:c.instructions+=1;goto B405479;
case 0x40547b:goto L40547b;
case 0x40547d:c.instructions+=1;goto B40547d;
case 0x40547f:goto L40547f;
case 0x405480:c.instructions+=1;goto B405480;
case 0x405483:goto L405483;
case 0x405486:c.instructions+=1;goto B405486;
case 0x405488:goto L405488;
case 0x40548b:c.instructions+=1;goto B40548b;
case 0x40548d:goto L40548d;
case 0x405490:c.instructions+=1;goto B405490;
case 0x405493:goto L405493;
case 0x405495:goto L405495;
case 0x4054a0:goto L4054a0;
case 0x4054a4:c.instructions+=8;goto B4054a4;
case 0x4054a8:c.instructions+=7;goto B4054a8;
case 0x4054ae:c.instructions+=6;goto B4054ae;
case 0x4054b2:c.instructions+=5;goto B4054b2;
case 0x4054b8:c.instructions+=4;goto B4054b8;
case 0x4054bc:c.instructions+=3;goto B4054bc;
case 0x4054c2:c.instructions+=2;goto B4054c2;
case 0x4054c8:c.instructions+=1;goto B4054c8;
case 0x4054d0:goto L4054d0;
case 0x4054d1:c.instructions+=13;goto B4054d1;
case 0x4054d2:c.instructions+=12;goto B4054d2;
case 0x4054d3:c.instructions+=11;goto B4054d3;
case 0x4054d5:c.instructions+=10;goto B4054d5;
case 0x4054db:c.instructions+=9;goto B4054db;
case 0x4054e1:c.instructions+=8;goto B4054e1;
case 0x4054e4:c.instructions+=7;goto B4054e4;
case 0x4054e5:c.instructions+=6;goto B4054e5;
case 0x4054e8:c.instructions+=5;goto B4054e8;
case 0x4054ec:c.instructions+=4;goto B4054ec;
case 0x4054f2:c.instructions+=3;goto B4054f2;
case 0x4054f5:c.instructions+=2;goto B4054f5;
case 0x4054f8:c.instructions+=1;goto B4054f8;
case 0x4054fd:goto L4054fd;
case 0x405500:c.instructions+=12;goto B405500;
case 0x405502:c.instructions+=11;goto B405502;
case 0x405508:c.instructions+=10;goto B405508;
case 0x40550f:c.instructions+=9;goto B40550f;
case 0x405512:c.instructions+=8;goto B405512;
case 0x405515:c.instructions+=7;goto B405515;
case 0x405519:c.instructions+=6;goto B405519;
case 0x40551d:c.instructions+=5;goto B40551d;
case 0x405523:c.instructions+=4;goto B405523;
case 0x405529:c.instructions+=3;goto B405529;
case 0x40552b:c.instructions+=2;goto B40552b;
case 0x40552e:c.instructions+=1;goto B40552e;
case 0x405530:goto L405530;
case 0x405536:c.instructions+=1;goto B405536;
case 0x405538:goto L405538;
case 0x40553e:c.instructions+=3;goto B40553e;
case 0x405540:c.instructions+=2;goto B405540;
case 0x405543:c.instructions+=1;goto B405543;
case 0x405545:goto L405545;
case 0x40554b:goto L40554b;
case 0x40554f:c.instructions+=8;goto B40554f;
case 0x405551:c.instructions+=7;goto B405551;
case 0x405557:c.instructions+=6;goto B405557;
case 0x40555d:c.instructions+=5;goto B40555d;
case 0x40555f:c.instructions+=4;goto B40555f;
case 0x405563:c.instructions+=3;goto B405563;
case 0x405564:c.instructions+=2;goto B405564;
case 0x405569:c.instructions+=1;goto B405569;
case 0x40556e:goto L40556e;
case 0x405572:c.instructions+=4;goto B405572;
case 0x405578:c.instructions+=3;goto B405578;
case 0x40557a:c.instructions+=2;goto B40557a;
case 0x40557d:c.instructions+=1;goto B40557d;
case 0x40557f:goto L40557f;
case 0x405585:c.instructions+=5;goto B405585;
case 0x405588:c.instructions+=4;goto B405588;
case 0x40558b:c.instructions+=3;goto B40558b;
case 0x40558c:c.instructions+=2;goto B40558c;
case 0x40558d:c.instructions+=1;goto B40558d;
case 0x405592:goto L405592;
case 0x405595:c.instructions+=9;goto B405595;
case 0x405597:c.instructions+=8;goto B405597;
case 0x40559a:c.instructions+=7;goto B40559a;
case 0x40559e:c.instructions+=6;goto B40559e;
case 0x4055a2:c.instructions+=5;goto B4055a2;
case 0x4055a8:c.instructions+=4;goto B4055a8;
case 0x4055ae:c.instructions+=3;goto B4055ae;
case 0x4055b0:c.instructions+=2;goto B4055b0;
case 0x4055b3:c.instructions+=1;goto B4055b3;
case 0x4055b5:goto L4055b5;
case 0x4055bb:c.instructions+=1;goto B4055bb;
case 0x4055bd:goto L4055bd;
case 0x4055c3:c.instructions+=3;goto B4055c3;
case 0x4055c5:c.instructions+=2;goto B4055c5;
case 0x4055c8:c.instructions+=1;goto B4055c8;
case 0x4055ca:goto L4055ca;
case 0x4055d0:goto L4055d0;
case 0x4055d6:c.instructions+=8;goto B4055d6;
case 0x4055da:c.instructions+=7;goto B4055da;
case 0x4055de:c.instructions+=6;goto B4055de;
case 0x4055e0:c.instructions+=5;goto B4055e0;
case 0x4055e2:c.instructions+=4;goto B4055e2;
case 0x4055e6:c.instructions+=3;goto B4055e6;
case 0x4055e8:c.instructions+=2;goto B4055e8;
case 0x4055ea:c.instructions+=1;goto B4055ea;
case 0x4055ec:goto L4055ec;
case 0x4055ee:c.instructions+=2;goto B4055ee;
case 0x4055f2:c.instructions+=1;goto B4055f2;
case 0x4055f4:goto L4055f4;
case 0x4055fa:c.instructions+=4;goto B4055fa;
case 0x4055fd:c.instructions+=3;goto B4055fd;
case 0x4055fe:c.instructions+=2;goto B4055fe;
case 0x405601:c.instructions+=1;goto B405601;
case 0x405606:goto L405606;
case 0x40560a:c.instructions+=5;goto B40560a;
case 0x40560e:c.instructions+=4;goto B40560e;
case 0x405613:c.instructions+=3;goto B405613;
case 0x405614:c.instructions+=2;goto B405614;
case 0x405615:c.instructions+=1;goto B405615;
case 0x40561a:goto L40561a;
case 0x40561d:c.instructions+=8;goto B40561d;
case 0x405621:c.instructions+=7;goto B405621;
case 0x405624:c.instructions+=6;goto B405624;
case 0x405628:c.instructions+=5;goto B405628;
case 0x40562e:c.instructions+=4;goto B40562e;
case 0x405634:c.instructions+=3;goto B405634;
case 0x405636:c.instructions+=2;goto B405636;
case 0x405639:c.instructions+=1;goto B405639;
case 0x40563b:goto L40563b;
case 0x405641:c.instructions+=8;goto B405641;
case 0x405645:c.instructions+=7;goto B405645;
case 0x405648:c.instructions+=6;goto B405648;
case 0x405649:c.instructions+=5;goto B405649;
case 0x40564a:c.instructions+=4;goto B40564a;
case 0x40564c:c.instructions+=3;goto B40564c;
case 0x40564d:c.instructions+=2;goto B40564d;
case 0x40564e:c.instructions+=1;goto B40564e;
case 0x405651:goto L405651;
case 0x405657:c.instructions+=3;goto B405657;
case 0x405659:c.instructions+=2;goto B405659;
case 0x40565c:c.instructions+=1;goto B40565c;
case 0x40565e:goto L40565e;
case 0x405664:goto L405664;
case 0x405668:c.instructions+=7;goto B405668;
case 0x40566b:c.instructions+=6;goto B40566b;
case 0x40566d:c.instructions+=5;goto B40566d;
case 0x40566e:c.instructions+=4;goto B40566e;
case 0x40566f:c.instructions+=3;goto B40566f;
case 0x405670:c.instructions+=2;goto B405670;
case 0x405671:c.instructions+=1;goto B405671;
case 0x405680:goto L405680;
case 0x405681:c.instructions+=4;goto B405681;
case 0x405683:c.instructions+=3;goto B405683;
case 0x405689:c.instructions+=2;goto B405689;
case 0x40568b:c.instructions+=1;goto B40568b;
case 0x405690:goto L405690;
case 0x405696:c.instructions+=2;goto B405696;
case 0x405698:c.instructions+=1;goto B405698;
case 0x40569d:goto L40569d;
case 0x40569e:c.instructions+=1;goto B40569e;
case 0x4056a0:goto L4056a0;
case 0x4056a1:c.instructions+=4;goto B4056a1;
case 0x4056a3:c.instructions+=3;goto B4056a3;
case 0x4056a9:c.instructions+=2;goto B4056a9;
case 0x4056ab:c.instructions+=1;goto B4056ab;
case 0x4056b0:goto L4056b0;
case 0x4056b6:c.instructions+=2;goto B4056b6;
case 0x4056b8:c.instructions+=1;goto B4056b8;
case 0x4056bd:goto L4056bd;
case 0x4056be:c.instructions+=1;goto B4056be;
case 0x4056c0:goto L4056c0;
case 0x4056c3:c.instructions+=10;goto B4056c3;
case 0x4056c4:c.instructions+=9;goto B4056c4;
case 0x4056c6:c.instructions+=8;goto B4056c6;
case 0x4056ca:c.instructions+=7;goto B4056ca;
case 0x4056cb:c.instructions+=6;goto B4056cb;
case 0x4056cf:c.instructions+=5;goto B4056cf;
case 0x4056d0:c.instructions+=4;goto B4056d0;
case 0x4056d4:c.instructions+=3;goto B4056d4;
case 0x4056d5:c.instructions+=2;goto B4056d5;
case 0x4056d7:c.instructions+=1;goto B4056d7;
case 0x4056dc:goto L4056dc;
case 0x4056e0:c.instructions+=3;goto B4056e0;
case 0x4056e6:c.instructions+=2;goto B4056e6;
case 0x4056e7:c.instructions+=1;goto B4056e7;
case 0x4056ec:goto L4056ec;
case 0x4056f0:c.instructions+=3;goto B4056f0;
case 0x4056f1:c.instructions+=2;goto B4056f1;
case 0x4056f7:c.instructions+=1;goto B4056f7;
case 0x4056fc:goto L4056fc;
case 0x405700:c.instructions+=3;goto B405700;
case 0x405706:c.instructions+=2;goto B405706;
case 0x405707:c.instructions+=1;goto B405707;
case 0x40570c:goto L40570c;
case 0x40570d:c.instructions+=2;goto B40570d;
case 0x405710:c.instructions+=1;goto B405710;
case 0x405720:goto L405720;
case 0x405723:c.instructions+=10;goto B405723;
case 0x405724:c.instructions+=9;goto B405724;
case 0x405726:c.instructions+=8;goto B405726;
case 0x40572a:c.instructions+=7;goto B40572a;
case 0x40572b:c.instructions+=6;goto B40572b;
case 0x40572f:c.instructions+=5;goto B40572f;
case 0x405730:c.instructions+=4;goto B405730;
case 0x405734:c.instructions+=3;goto B405734;
case 0x405735:c.instructions+=2;goto B405735;
case 0x405737:c.instructions+=1;goto B405737;
case 0x40573c:goto L40573c;
case 0x405740:c.instructions+=3;goto B405740;
case 0x405746:c.instructions+=2;goto B405746;
case 0x405747:c.instructions+=1;goto B405747;
case 0x40574c:goto L40574c;
case 0x405750:c.instructions+=3;goto B405750;
case 0x405751:c.instructions+=2;goto B405751;
case 0x405757:c.instructions+=1;goto B405757;
case 0x40575c:goto L40575c;
case 0x405760:c.instructions+=3;goto B405760;
case 0x405766:c.instructions+=2;goto B405766;
case 0x405767:c.instructions+=1;goto B405767;
case 0x40576c:goto L40576c;
case 0x40576d:c.instructions+=2;goto B40576d;
case 0x405770:c.instructions+=1;goto B405770;
case 0x405780:goto L405780;
case 0x405786:c.instructions+=2;goto B405786;
case 0x405788:c.instructions+=1;goto B405788;
case 0x40578d:goto L40578d;
case 0x405790:goto L405790;
case 0x405796:c.instructions+=7;goto B405796;
case 0x40579c:c.instructions+=6;goto B40579c;
case 0x40579e:c.instructions+=5;goto B40579e;
case 0x4057a4:c.instructions+=4;goto B4057a4;
case 0x4057a5:c.instructions+=3;goto B4057a5;
case 0x4057ab:c.instructions+=2;goto B4057ab;
case 0x4057ae:c.instructions+=1;goto B4057ae;
case 0x4057b3:goto L4057b3;
case 0x4057c0:goto L4057c0;
case 0x4057c3:c.instructions+=12;goto B4057c3;
case 0x4057c9:c.instructions+=11;goto B4057c9;
case 0x4057ca:c.instructions+=10;goto B4057ca;
case 0x4057cc:c.instructions+=9;goto B4057cc;
case 0x4057d0:c.instructions+=8;goto B4057d0;
case 0x4057d6:c.instructions+=7;goto B4057d6;
case 0x4057dc:c.instructions+=6;goto B4057dc;
case 0x4057df:c.instructions+=5;goto B4057df;
case 0x4057e3:c.instructions+=4;goto B4057e3;
case 0x4057e4:c.instructions+=3;goto B4057e4;
case 0x4057ea:c.instructions+=2;goto B4057ea;
case 0x4057ef:c.instructions+=1;goto B4057ef;
case 0x4057f0:goto L4057f0;
case 0x4057f2:c.instructions+=8;goto B4057f2;
case 0x4057f5:c.instructions+=7;goto B4057f5;
case 0x4057f7:c.instructions+=6;goto B4057f7;
case 0x4057fb:c.instructions+=5;goto B4057fb;
case 0x405801:c.instructions+=4;goto B405801;
case 0x405807:c.instructions+=3;goto B405807;
case 0x405809:c.instructions+=2;goto B405809;
case 0x40580c:c.instructions+=1;goto B40580c;
case 0x40580e:goto L40580e;
case 0x405814:c.instructions+=6;goto B405814;
case 0x405816:c.instructions+=5;goto B405816;
case 0x405818:c.instructions+=4;goto B405818;
case 0x40581a:c.instructions+=3;goto B40581a;
case 0x40581c:c.instructions+=2;goto B40581c;
case 0x40581f:c.instructions+=1;goto B40581f;
case 0x405821:goto L405821;
case 0x405823:c.instructions+=1;goto B405823;
case 0x405825:goto L405825;
case 0x40582b:c.instructions+=4;goto B40582b;
case 0x40582d:c.instructions+=3;goto B40582d;
case 0x40582f:c.instructions+=2;goto B40582f;
case 0x405832:c.instructions+=1;goto B405832;
case 0x405834:goto L405834;
case 0x405836:c.instructions+=1;goto B405836;
case 0x40583c:goto L40583c;
case 0x40583e:c.instructions+=5;goto B40583e;
case 0x405840:c.instructions+=4;goto B405840;
case 0x405842:c.instructions+=3;goto B405842;
case 0x405844:c.instructions+=2;goto B405844;
case 0x405847:c.instructions+=1;goto B405847;
case 0x405849:goto L405849;
case 0x40584b:c.instructions+=1;goto B40584b;
case 0x40584d:goto L40584d;
case 0x40584f:goto L40584f;
case 0x405855:c.instructions+=4;goto B405855;
case 0x40585b:c.instructions+=3;goto B40585b;
case 0x40585d:c.instructions+=2;goto B40585d;
case 0x405860:c.instructions+=1;goto B405860;
case 0x405862:goto L405862;
case 0x405868:c.instructions+=6;goto B405868;
case 0x40586a:c.instructions+=5;goto B40586a;
case 0x40586e:c.instructions+=4;goto B40586e;
case 0x405870:c.instructions+=3;goto B405870;
case 0x405872:c.instructions+=2;goto B405872;
case 0x405875:c.instructions+=1;goto B405875;
case 0x405877:goto L405877;
case 0x405879:c.instructions+=1;goto B405879;
case 0x40587d:goto L40587d;
case 0x405883:c.instructions+=4;goto B405883;
case 0x405885:c.instructions+=3;goto B405885;
case 0x405887:c.instructions+=2;goto B405887;
case 0x40588a:c.instructions+=1;goto B40588a;
case 0x40588c:goto L40588c;
case 0x40588e:c.instructions+=1;goto B40588e;
case 0x405894:goto L405894;
case 0x405898:c.instructions+=5;goto B405898;
case 0x40589a:c.instructions+=4;goto B40589a;
case 0x40589c:c.instructions+=3;goto B40589c;
case 0x40589e:c.instructions+=2;goto B40589e;
case 0x4058a1:c.instructions+=1;goto B4058a1;
case 0x4058a3:goto L4058a3;
case 0x4058a7:goto L4058a7;
case 0x4058aa:c.instructions+=2;goto B4058aa;
case 0x4058ab:c.instructions+=1;goto B4058ab;
case 0x4058b1:goto L4058b1;
case 0x4058b5:c.instructions+=8;goto B4058b5;
case 0x4058b7:c.instructions+=7;goto B4058b7;
case 0x4058bb:c.instructions+=6;goto B4058bb;
case 0x4058bd:c.instructions+=5;goto B4058bd;
case 0x4058c3:c.instructions+=4;goto B4058c3;
case 0x4058c9:c.instructions+=3;goto B4058c9;
case 0x4058cb:c.instructions+=2;goto B4058cb;
case 0x4058ce:c.instructions+=1;goto B4058ce;
case 0x4058d0:goto L4058d0;
case 0x4058d2:c.instructions+=2;goto B4058d2;
case 0x4058d6:c.instructions+=1;goto B4058d6;
case 0x4058d8:goto L4058d8;
case 0x4058da:goto L4058da;
case 0x4058de:c.instructions+=7;goto B4058de;
case 0x4058e2:c.instructions+=6;goto B4058e2;
case 0x4058e8:c.instructions+=5;goto B4058e8;
case 0x4058ea:c.instructions+=4;goto B4058ea;
case 0x4058ec:c.instructions+=3;goto B4058ec;
case 0x4058ed:c.instructions+=2;goto B4058ed;
case 0x4058ee:c.instructions+=1;goto B4058ee;
case 0x4058f3:goto L4058f3;
case 0x4058f7:c.instructions+=6;goto B4058f7;
case 0x4058f9:c.instructions+=5;goto B4058f9;
case 0x4058fb:c.instructions+=4;goto B4058fb;
case 0x4058fc:c.instructions+=3;goto B4058fc;
case 0x4058fd:c.instructions+=2;goto B4058fd;
case 0x405903:c.instructions+=1;goto B405903;
case 0x405908:goto L405908;
case 0x405909:c.instructions+=3;goto B405909;
case 0x40590a:c.instructions+=2;goto B40590a;
case 0x40590d:c.instructions+=1;goto B40590d;
case 0x405910:goto L405910;
case 0x405914:c.instructions+=2;goto B405914;
case 0x405916:c.instructions+=1;goto B405916;
case 0x405918:goto L405918;
case 0x40591a:c.instructions+=2;goto B40591a;
case 0x40591c:c.instructions+=1;goto B40591c;
case 0x40591e:goto L40591e;
case 0x405921:c.instructions+=1;goto B405921;
case 0x405923:goto L405923;
case 0x405927:c.instructions+=2;goto B405927;
case 0x40592a:c.instructions+=1;goto B40592a;
case 0x40592f:goto L40592f;
case 0x405940:goto L405940;
case 0x405943:c.instructions+=5;goto B405943;
case 0x405947:c.instructions+=4;goto B405947;
case 0x40594d:c.instructions+=3;goto B40594d;
case 0x405953:c.instructions+=2;goto B405953;
case 0x405957:c.instructions+=1;goto B405957;
case 0x40595c:goto L40595c;
case 0x405960:c.instructions+=5;goto B405960;
case 0x405964:c.instructions+=4;goto B405964;
case 0x405968:c.instructions+=3;goto B405968;
case 0x40596a:c.instructions+=2;goto B40596a;
case 0x40596d:c.instructions+=1;goto B40596d;
case 0x40596f:goto L40596f;
case 0x405975:goto L405975;
case 0x40597b:c.instructions+=3;goto B40597b;
case 0x40597f:c.instructions+=2;goto B40597f;
case 0x405982:c.instructions+=1;goto B405982;
case 0x405990:goto L405990;
case 0x405993:c.instructions+=11;goto B405993;
case 0x405994:c.instructions+=10;goto B405994;
case 0x405996:c.instructions+=9;goto B405996;
case 0x40599d:c.instructions+=8;goto B40599d;
case 0x4059a1:c.instructions+=7;goto B4059a1;
case 0x4059a5:c.instructions+=6;goto B4059a5;
case 0x4059ab:c.instructions+=5;goto B4059ab;
case 0x4059b1:c.instructions+=4;goto B4059b1;
case 0x4059b3:c.instructions+=3;goto B4059b3;
case 0x4059b9:c.instructions+=2;goto B4059b9;
case 0x4059bd:c.instructions+=1;goto B4059bd;
case 0x4059c2:goto L4059c2;
case 0x4059c6:c.instructions+=5;goto B4059c6;
case 0x4059ca:c.instructions+=4;goto B4059ca;
case 0x4059ce:c.instructions+=3;goto B4059ce;
case 0x4059d0:c.instructions+=2;goto B4059d0;
case 0x4059d3:c.instructions+=1;goto B4059d3;
case 0x4059d5:goto L4059d5;
case 0x4059db:goto L4059db;
case 0x4059e1:c.instructions+=13;goto B4059e1;
case 0x4059e3:c.instructions+=12;goto B4059e3;
case 0x4059e7:c.instructions+=11;goto B4059e7;
case 0x4059e9:c.instructions+=10;goto B4059e9;
case 0x4059ef:c.instructions+=9;goto B4059ef;
case 0x4059f3:c.instructions+=8;goto B4059f3;
case 0x4059f9:c.instructions+=7;goto B4059f9;
case 0x4059fd:c.instructions+=6;goto B4059fd;
case 0x4059ff:c.instructions+=5;goto B4059ff;
case 0x405a03:c.instructions+=4;goto B405a03;
case 0x405a07:c.instructions+=3;goto B405a07;
case 0x405a09:c.instructions+=2;goto B405a09;
case 0x405a0c:c.instructions+=1;goto B405a0c;
case 0x405a0e:goto L405a0e;
case 0x405a10:c.instructions+=1;goto B405a10;
case 0x405a14:goto L405a14;
case 0x405a18:c.instructions+=4;goto B405a18;
case 0x405a1a:c.instructions+=3;goto B405a1a;
case 0x405a1c:c.instructions+=2;goto B405a1c;
case 0x405a1f:c.instructions+=1;goto B405a1f;
case 0x405a21:goto L405a21;
case 0x405a23:c.instructions+=1;goto B405a23;
case 0x405a27:goto L405a27;
case 0x405a29:c.instructions+=7;goto B405a29;
case 0x405a2d:c.instructions+=6;goto B405a2d;
case 0x405a2f:c.instructions+=5;goto B405a2f;
case 0x405a33:c.instructions+=4;goto B405a33;
case 0x405a39:c.instructions+=3;goto B405a39;
case 0x405a3b:c.instructions+=2;goto B405a3b;
case 0x405a3e:c.instructions+=1;goto B405a3e;
case 0x405a40:goto L405a40;
case 0x405a44:c.instructions+=5;goto B405a44;
case 0x405a4a:c.instructions+=4;goto B405a4a;
case 0x405a4e:c.instructions+=3;goto B405a4e;
case 0x405a50:c.instructions+=2;goto B405a50;
case 0x405a53:c.instructions+=1;goto B405a53;
case 0x405a55:goto L405a55;
case 0x405a57:c.instructions+=1;goto B405a57;
case 0x405a5d:goto L405a5d;
case 0x405a63:c.instructions+=1;goto B405a63;
case 0x405a68:goto L405a68;
case 0x405a6f:c.instructions+=3;goto B405a6f;
case 0x405a70:c.instructions+=2;goto B405a70;
case 0x405a73:c.instructions+=1;goto B405a73;
case 0x405a76:goto L405a76;
case 0x405a7c:c.instructions+=1;goto B405a7c;
case 0x405a80:goto L405a80;
case 0x405a81:c.instructions+=5;goto B405a81;
case 0x405a85:c.instructions+=4;goto B405a85;
case 0x405a86:c.instructions+=3;goto B405a86;
case 0x405a87:c.instructions+=2;goto B405a87;
case 0x405a89:c.instructions+=1;goto B405a89;
case 0x405a8e:goto L405a8e;
case 0x405a93:c.instructions+=3;goto B405a93;
case 0x405a95:c.instructions+=2;goto B405a95;
case 0x405a97:c.instructions+=1;goto B405a97;
case 0x405a9c:goto L405a9c;
case 0x405a9e:c.instructions+=6;goto B405a9e;
case 0x405aa0:c.instructions+=5;goto B405aa0;
case 0x405aa2:c.instructions+=4;goto B405aa2;
case 0x405aa8:c.instructions+=3;goto B405aa8;
case 0x405aa9:c.instructions+=2;goto B405aa9;
case 0x405aab:c.instructions+=1;goto B405aab;
case 0x405ab0:goto L405ab0;
case 0x405ab6:c.instructions+=3;goto B405ab6;
case 0x405ab7:c.instructions+=2;goto B405ab7;
case 0x405ab9:c.instructions+=1;goto B405ab9;
case 0x405abe:goto L405abe;
case 0x405ac4:c.instructions+=3;goto B405ac4;
case 0x405ac5:c.instructions+=2;goto B405ac5;
case 0x405ac7:c.instructions+=1;goto B405ac7;
case 0x405acc:goto L405acc;
case 0x405ad2:c.instructions+=3;goto B405ad2;
case 0x405ad3:c.instructions+=2;goto B405ad3;
case 0x405ad5:c.instructions+=1;goto B405ad5;
case 0x405ada:goto L405ada;
case 0x405ae0:c.instructions+=3;goto B405ae0;
case 0x405ae1:c.instructions+=2;goto B405ae1;
case 0x405ae3:c.instructions+=1;goto B405ae3;
case 0x405ae8:goto L405ae8;
case 0x405aea:c.instructions+=6;goto B405aea;
case 0x405aec:c.instructions+=5;goto B405aec;
case 0x405aee:c.instructions+=4;goto B405aee;
case 0x405af4:c.instructions+=3;goto B405af4;
case 0x405af5:c.instructions+=2;goto B405af5;
case 0x405af7:c.instructions+=1;goto B405af7;
case 0x405afc:goto L405afc;
case 0x405afe:c.instructions+=1;goto B405afe;
case 0x405b03:goto L405b03;
case 0x405b04:c.instructions+=2;goto B405b04;
case 0x405b05:c.instructions+=1;goto B405b05;
case 0x405b10:goto L405b10;
case 0x405b14:c.instructions+=2;goto B405b14;
case 0x405b1a:c.instructions+=1;goto B405b1a;
case 0x405b20:goto L405b20;
case 0x405b26:c.instructions+=1;goto B405b26;
case 0x405b30:goto L405b30;
case 0x405b36:c.instructions+=1;goto B405b36;
case 0x405b40:goto L405b40;
case 0x405b44:c.instructions+=2;goto B405b44;
case 0x405b4a:c.instructions+=1;goto B405b4a;
case 0x405b50:goto L405b50;
case 0x405b54:c.instructions+=2;goto B405b54;
case 0x405b5a:c.instructions+=1;goto B405b5a;
case 0x405b60:goto L405b60;
case 0x405b64:c.instructions+=6;goto B405b64;
case 0x405b68:c.instructions+=5;goto B405b68;
case 0x405b6e:c.instructions+=4;goto B405b6e;
case 0x405b74:c.instructions+=3;goto B405b74;
case 0x405b76:c.instructions+=2;goto B405b76;
case 0x405b79:c.instructions+=1;goto B405b79;
case 0x405b7b:goto L405b7b;
case 0x405b85:goto L405b85;
case 0x405b90:goto L405b90;
case 0x405b96:c.instructions+=2;goto B405b96;
case 0x405b9a:c.instructions+=1;goto B405b9a;
case 0x405ba0:goto L405ba0;
case 0x405ba6:c.instructions+=1;goto B405ba6;
case 0x405bb0:goto L405bb0;
case 0x405bb6:c.instructions+=1;goto B405bb6;
case 0x405bc0:goto L405bc0;
case 0x405bc6:c.instructions+=1;goto B405bc6;
case 0x405bd0:goto L405bd0;
case 0x405bd3:c.instructions+=1;goto B405bd3;
case 0x405be0:goto L405be0;
case 0x405be1:c.instructions+=4;goto B405be1;
case 0x405be3:c.instructions+=3;goto B405be3;
case 0x405be9:c.instructions+=2;goto B405be9;
case 0x405bef:c.instructions+=1;goto B405bef;
case 0x405bf2:goto L405bf2;
case 0x405bf8:c.instructions+=2;goto B405bf8;
case 0x405bfa:c.instructions+=1;goto B405bfa;
case 0x405bfc:goto L405bfc;
case 0x405bfe:c.instructions+=3;goto B405bfe;
case 0x405c03:c.instructions+=2;goto B405c03;
case 0x405c05:c.instructions+=1;goto B405c05;
case 0x405c08:goto L405c08;
case 0x405c09:c.instructions+=1;goto B405c09;
case 0x405c0e:goto L405c0e;
case 0x405c10:c.instructions+=4;goto B405c10;
case 0x405c13:c.instructions+=3;goto B405c13;
case 0x405c18:c.instructions+=2;goto B405c18;
case 0x405c1a:c.instructions+=1;goto B405c1a;
case 0x405c1d:goto L405c1d;
case 0x405c1e:c.instructions+=1;goto B405c1e;
case 0x405c23:goto L405c23;
case 0x405c25:c.instructions+=4;goto B405c25;
case 0x405c28:c.instructions+=3;goto B405c28;
case 0x405c2d:c.instructions+=2;goto B405c2d;
case 0x405c2f:c.instructions+=1;goto B405c2f;
case 0x405c32:goto L405c32;
case 0x405c33:c.instructions+=1;goto B405c33;
case 0x405c38:goto L405c38;
case 0x405c3a:c.instructions+=4;goto B405c3a;
case 0x405c3d:c.instructions+=3;goto B405c3d;
case 0x405c42:c.instructions+=2;goto B405c42;
case 0x405c44:c.instructions+=1;goto B405c44;
case 0x405c47:goto L405c47;
case 0x405c48:c.instructions+=1;goto B405c48;
case 0x405c4d:goto L405c4d;
case 0x405c50:c.instructions+=1;goto B405c50;
case 0x405c57:goto L405c57;
case 0x405c58:c.instructions+=1;goto B405c58;
case 0x405c60:goto L405c60;
case 0x405c62:c.instructions+=15;goto B405c62;
case 0x405c67:c.instructions+=14;goto B405c67;
case 0x405c6d:c.instructions+=13;goto B405c6d;
case 0x405c6e:c.instructions+=12;goto B405c6e;
case 0x405c75:c.instructions+=11;goto B405c75;
case 0x405c76:c.instructions+=10;goto B405c76;
case 0x405c7b:c.instructions+=9;goto B405c7b;
case 0x405c7c:c.instructions+=8;goto B405c7c;
case 0x405c7d:c.instructions+=7;goto B405c7d;
case 0x405c7f:c.instructions+=6;goto B405c7f;
case 0x405c85:c.instructions+=5;goto B405c85;
case 0x405c86:c.instructions+=4;goto B405c86;
case 0x405c87:c.instructions+=3;goto B405c87;
case 0x405c8a:c.instructions+=2;goto B405c8a;
case 0x405c8e:c.instructions+=1;goto B405c8e;
case 0x405c93:goto L405c93;
case 0x405c99:c.instructions+=7;goto B405c99;
case 0x405c9e:c.instructions+=6;goto B405c9e;
case 0x405c9f:c.instructions+=5;goto B405c9f;
case 0x405ca1:c.instructions+=4;goto B405ca1;
case 0x405ca2:c.instructions+=3;goto B405ca2;
case 0x405ca5:c.instructions+=2;goto B405ca5;
case 0x405ca9:c.instructions+=1;goto B405ca9;
case 0x405cae:goto L405cae;
case 0x405cb2:c.instructions+=15;goto B405cb2;
case 0x405cb4:c.instructions+=14;goto B405cb4;
case 0x405cb8:c.instructions+=13;goto B405cb8;
case 0x405cbc:c.instructions+=12;goto B405cbc;
case 0x405cc2:c.instructions+=11;goto B405cc2;
case 0x405cc5:c.instructions+=10;goto B405cc5;
case 0x405cc8:c.instructions+=9;goto B405cc8;
case 0x405cd2:c.instructions+=8;goto B405cd2;
case 0x405cd9:c.instructions+=7;goto B405cd9;
case 0x405ce0:c.instructions+=6;goto B405ce0;
case 0x405ce2:c.instructions+=5;goto B405ce2;
case 0x405ce3:c.instructions+=4;goto B405ce3;
case 0x405ce4:c.instructions+=3;goto B405ce4;
case 0x405ceb:c.instructions+=2;goto B405ceb;
case 0x405cee:c.instructions+=1;goto B405cee;
case 0x405d00:goto L405d00;
case 0x405d02:c.instructions+=11;goto B405d02;
case 0x405d07:c.instructions+=10;goto B405d07;
case 0x405d0d:c.instructions+=9;goto B405d0d;
case 0x405d0e:c.instructions+=8;goto B405d0e;
case 0x405d15:c.instructions+=7;goto B405d15;
case 0x405d16:c.instructions+=6;goto B405d16;
case 0x405d17:c.instructions+=5;goto B405d17;
case 0x405d19:c.instructions+=4;goto B405d19;
case 0x405d1d:c.instructions+=3;goto B405d1d;
case 0x405d20:c.instructions+=2;goto B405d20;
case 0x405d28:c.instructions+=1;goto B405d28;
case 0x405d2d:goto L405d2d;
case 0x405d30:c.instructions+=2;goto B405d30;
case 0x405d38:c.instructions+=1;goto B405d38;
case 0x405d3d:goto L405d3d;
case 0x405d41:c.instructions+=4;goto B405d41;
case 0x405d42:c.instructions+=3;goto B405d42;
case 0x405d49:c.instructions+=2;goto B405d49;
case 0x405d4c:c.instructions+=1;goto B405d4c;
case 0x405d50:goto L405d50;
case 0x405d51:c.instructions+=7;goto B405d51;
case 0x405d55:c.instructions+=6;goto B405d55;
case 0x405d56:c.instructions+=5;goto B405d56;
case 0x405d5b:c.instructions+=4;goto B405d5b;
case 0x405d5d:c.instructions+=3;goto B405d5d;
case 0x405d5f:c.instructions+=2;goto B405d5f;
case 0x405d61:c.instructions+=1;goto B405d61;
case 0x405d66:goto L405d66;
case 0x405d69:c.instructions+=3;goto B405d69;
case 0x405d6a:c.instructions+=2;goto B405d6a;
case 0x405d6c:c.instructions+=1;goto B405d6c;
case 0x405d71:goto L405d71;
case 0x405d77:c.instructions+=3;goto B405d77;
case 0x405d78:c.instructions+=2;goto B405d78;
case 0x405d7a:c.instructions+=1;goto B405d7a;
case 0x405d7f:goto L405d7f;
case 0x405d85:c.instructions+=3;goto B405d85;
case 0x405d86:c.instructions+=2;goto B405d86;
case 0x405d88:c.instructions+=1;goto B405d88;
case 0x405d8d:goto L405d8d;
case 0x405d8f:c.instructions+=6;goto B405d8f;
case 0x405d91:c.instructions+=5;goto B405d91;
case 0x405d93:c.instructions+=4;goto B405d93;
case 0x405d96:c.instructions+=3;goto B405d96;
case 0x405d97:c.instructions+=2;goto B405d97;
case 0x405d99:c.instructions+=1;goto B405d99;
case 0x405d9e:goto L405d9e;
case 0x405d9f:c.instructions+=2;goto B405d9f;
case 0x405da2:c.instructions+=1;goto B405da2;
case 0x405da7:goto L405da7;
case 0x405da8:c.instructions+=2;goto B405da8;
case 0x405dab:c.instructions+=1;goto B405dab;
case 0x405db0:goto L405db0;
case 0x405db2:c.instructions+=1;goto B405db2;
case 0x405db7:goto L405db7;
case 0x405db8:c.instructions+=2;goto B405db8;
case 0x405db9:c.instructions+=1;goto B405db9;
case 0x405dc0:goto L405dc0;
case 0x405dc3:c.instructions+=9;goto B405dc3;
case 0x405dc4:c.instructions+=8;goto B405dc4;
case 0x405dc6:c.instructions+=7;goto B405dc6;
case 0x405dc8:c.instructions+=6;goto B405dc8;
case 0x405dce:c.instructions+=5;goto B405dce;
case 0x405dd0:c.instructions+=4;goto B405dd0;
case 0x405dd4:c.instructions+=3;goto B405dd4;
case 0x405dd5:c.instructions+=2;goto B405dd5;
case 0x405dda:c.instructions+=1;goto B405dda;
case 0x405ddf:goto L405ddf;
case 0x405de3:c.instructions+=14;goto B405de3;
case 0x405de5:c.instructions+=13;goto B405de5;
case 0x405de8:c.instructions+=12;goto B405de8;
case 0x405dee:c.instructions+=11;goto B405dee;
case 0x405df4:c.instructions+=10;goto B405df4;
case 0x405df8:c.instructions+=9;goto B405df8;
case 0x405dfe:c.instructions+=8;goto B405dfe;
case 0x405e04:c.instructions+=7;goto B405e04;
case 0x405e08:c.instructions+=6;goto B405e08;
case 0x405e0a:c.instructions+=5;goto B405e0a;
case 0x405e0e:c.instructions+=4;goto B405e0e;
case 0x405e0f:c.instructions+=3;goto B405e0f;
case 0x405e14:c.instructions+=2;goto B405e14;
case 0x405e18:c.instructions+=1;goto B405e18;
case 0x405e1d:goto L405e1d;
case 0x405e21:c.instructions+=18;goto B405e21;
case 0x405e27:c.instructions+=17;goto B405e27;
case 0x405e28:c.instructions+=16;goto B405e28;
case 0x405e2c:c.instructions+=15;goto B405e2c;
case 0x405e31:c.instructions+=14;goto B405e31;
case 0x405e35:c.instructions+=13;goto B405e35;
case 0x405e3b:c.instructions+=12;goto B405e3b;
case 0x405e3d:c.instructions+=11;goto B405e3d;
case 0x405e43:c.instructions+=10;goto B405e43;
case 0x405e49:c.instructions+=9;goto B405e49;
case 0x405e4b:c.instructions+=8;goto B405e4b;
case 0x405e51:c.instructions+=7;goto B405e51;
case 0x405e57:c.instructions+=6;goto B405e57;
case 0x405e5b:c.instructions+=5;goto B405e5b;
case 0x405e5f:c.instructions+=4;goto B405e5f;
case 0x405e62:c.instructions+=3;goto B405e62;
case 0x405e64:c.instructions+=2;goto B405e64;
case 0x405e67:c.instructions+=1;goto B405e67;
case 0x405e6c:goto L405e6c;
case 0x405e70:c.instructions+=4;goto B405e70;
case 0x405e75:c.instructions+=3;goto B405e75;
case 0x405e77:c.instructions+=2;goto B405e77;
case 0x405e7b:c.instructions+=1;goto B405e7b;
case 0x405e81:goto L405e81;
case 0x405e86:c.instructions+=2;goto B405e86;
case 0x405e88:c.instructions+=1;goto B405e88;
case 0x405e8e:goto L405e8e;
case 0x405e90:c.instructions+=4;goto B405e90;
case 0x405e93:c.instructions+=3;goto B405e93;
case 0x405e99:c.instructions+=2;goto B405e99;
case 0x405e9b:c.instructions+=1;goto B405e9b;
case 0x405ea1:goto L405ea1;
case 0x405ea6:c.instructions+=1;goto B405ea6;
case 0x405eac:goto L405eac;
case 0x405eb2:c.instructions+=9;goto B405eb2;
case 0x405eb4:c.instructions+=8;goto B405eb4;
case 0x405eb8:c.instructions+=7;goto B405eb8;
case 0x405ebc:c.instructions+=6;goto B405ebc;
case 0x405ec2:c.instructions+=5;goto B405ec2;
case 0x405ec6:c.instructions+=4;goto B405ec6;
case 0x405ecc:c.instructions+=3;goto B405ecc;
case 0x405ece:c.instructions+=2;goto B405ece;
case 0x405ed1:c.instructions+=1;goto B405ed1;
case 0x405ed3:goto L405ed3;
case 0x405ed9:c.instructions+=4;goto B405ed9;
case 0x405edc:c.instructions+=3;goto B405edc;
case 0x405edf:c.instructions+=2;goto B405edf;
case 0x405ee3:c.instructions+=1;goto B405ee3;
case 0x405ee8:goto L405ee8;
case 0x405eee:c.instructions+=6;goto B405eee;
case 0x405ef2:c.instructions+=5;goto B405ef2;
case 0x405ef8:c.instructions+=4;goto B405ef8;
case 0x405efa:c.instructions+=3;goto B405efa;
case 0x405efc:c.instructions+=2;goto B405efc;
case 0x405eff:c.instructions+=1;goto B405eff;
case 0x405f01:goto L405f01;
case 0x405f03:c.instructions+=2;goto B405f03;
case 0x405f0b:c.instructions+=1;goto B405f0b;
case 0x405f0d:goto L405f0d;
case 0x405f11:goto L405f11;
case 0x405f15:c.instructions+=3;goto B405f15;
case 0x405f16:c.instructions+=2;goto B405f16;
case 0x405f1b:c.instructions+=1;goto B405f1b;
case 0x405f20:goto L405f20;
case 0x405f26:c.instructions+=8;goto B405f26;
case 0x405f2a:c.instructions+=7;goto B405f2a;
case 0x405f30:c.instructions+=6;goto B405f30;
case 0x405f32:c.instructions+=5;goto B405f32;
case 0x405f34:c.instructions+=4;goto B405f34;
case 0x405f36:c.instructions+=3;goto B405f36;
case 0x405f3a:c.instructions+=2;goto B405f3a;
case 0x405f3e:c.instructions+=1;goto B405f3e;
case 0x405f40:goto L405f40;
case 0x405f42:c.instructions+=2;goto B405f42;
case 0x405f45:c.instructions+=1;goto B405f45;
case 0x405f4a:goto L405f4a;
case 0x405f4c:c.instructions+=28;goto B405f4c;
case 0x405f52:c.instructions+=27;goto B405f52;
case 0x405f55:c.instructions+=26;goto B405f55;
case 0x405f57:c.instructions+=25;goto B405f57;
case 0x405f59:c.instructions+=24;goto B405f59;
case 0x405f5d:c.instructions+=23;goto B405f5d;
case 0x405f60:c.instructions+=22;goto B405f60;
case 0x405f63:c.instructions+=21;goto B405f63;
case 0x405f65:c.instructions+=20;goto B405f65;
case 0x405f67:c.instructions+=19;goto B405f67;
case 0x405f69:c.instructions+=18;goto B405f69;
case 0x405f6b:c.instructions+=17;goto B405f6b;
case 0x405f6d:c.instructions+=16;goto B405f6d;
case 0x405f6f:c.instructions+=15;goto B405f6f;
case 0x405f71:c.instructions+=14;goto B405f71;
case 0x405f73:c.instructions+=13;goto B405f73;
case 0x405f75:c.instructions+=12;goto B405f75;
case 0x405f77:c.instructions+=11;goto B405f77;
case 0x405f79:c.instructions+=10;goto B405f79;
case 0x405f7b:c.instructions+=9;goto B405f7b;
case 0x405f7d:c.instructions+=8;goto B405f7d;
case 0x405f81:c.instructions+=7;goto B405f81;
case 0x405f85:c.instructions+=6;goto B405f85;
case 0x405f87:c.instructions+=5;goto B405f87;
case 0x405f8d:c.instructions+=4;goto B405f8d;
case 0x405f8f:c.instructions+=3;goto B405f8f;
case 0x405f91:c.instructions+=2;goto B405f91;
case 0x405f94:c.instructions+=1;goto B405f94;
case 0x405f96:goto L405f96;
case 0x405f98:c.instructions+=1;goto B405f98;
case 0x405f9a:goto L405f9a;
case 0x405f9c:goto L405f9c;
case 0x405f9f:c.instructions+=3;goto B405f9f;
case 0x405fa3:c.instructions+=2;goto B405fa3;
case 0x405fa5:c.instructions+=1;goto B405fa5;
case 0x405fa7:goto L405fa7;
case 0x405fad:c.instructions+=3;goto B405fad;
case 0x405faf:c.instructions+=2;goto B405faf;
case 0x405fb2:c.instructions+=1;goto B405fb2;
case 0x405fb4:goto L405fb4;
case 0x405fb8:c.instructions+=4;goto B405fb8;
case 0x405fbe:c.instructions+=3;goto B405fbe;
case 0x405fc0:c.instructions+=2;goto B405fc0;
case 0x405fc3:c.instructions+=1;goto B405fc3;
case 0x405fc5:goto L405fc5;
case 0x405fc9:c.instructions+=1;goto B405fc9;
case 0x405fcb:goto L405fcb;
case 0x405fd1:c.instructions+=3;goto B405fd1;
case 0x405fd3:c.instructions+=2;goto B405fd3;
case 0x405fd6:c.instructions+=1;goto B405fd6;
case 0x405fd8:goto L405fd8;
case 0x405fdc:c.instructions+=4;goto B405fdc;
case 0x405fe2:c.instructions+=3;goto B405fe2;
case 0x405fe4:c.instructions+=2;goto B405fe4;
case 0x405fe7:c.instructions+=1;goto B405fe7;
case 0x405fe9:goto L405fe9;
case 0x405fed:goto L405fed;
case 0x405fef:c.instructions+=1;goto B405fef;
case 0x405ff5:goto L405ff5;
case 0x405ff8:c.instructions+=2;goto B405ff8;
case 0x405ffa:c.instructions+=1;goto B405ffa;
case 0x405ffc:goto L405ffc;
default:missing_instruction(c.pc);}
B405004:L405004:{c.instructions+=8;NFSU2_TR(0x405004);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40500a:{NFSU2_TR(0x40500a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B405011:{NFSU2_TR(0x405011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B405012:{NFSU2_TR(0x405012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B405013:{NFSU2_TR(0x405013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B405014:{NFSU2_TR(0x405014);
__builtin_memmove((R+16),(R+20),4);
}
B405016:{NFSU2_TR(0x405016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B405017:{NFSU2_TR(0x405017);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405020:L405020:{c.instructions+=13;NFSU2_TR(0x405020);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405021:{NFSU2_TR(0x405021);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405022:{NFSU2_TR(0x405022);
__builtin_memmove((R+24),(R+4),4);
}
B405024:{NFSU2_TR(0x405024);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B405027:{NFSU2_TR(0x405027);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B405028:{NFSU2_TR(0x405028);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40502c:{NFSU2_TR(0x40502c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B405030:{NFSU2_TR(0x405030);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B405034:{NFSU2_TR(0x405034);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405038:{NFSU2_TR(0x405038);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40503e:{NFSU2_TR(0x40503e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405040:{NFSU2_TR(0x405040);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B405043:{NFSU2_TR(0x405043);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40504b;}}
}
B405045:L405045:{c.instructions+=2;NFSU2_TR(0x405045);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405049:{NFSU2_TR(0x405049);
{goto L405051;}
}
B40504b:L40504b:{c.instructions+=1;NFSU2_TR(0x40504b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405051:L405051:{c.instructions+=5;NFSU2_TR(0x405051);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405055:{NFSU2_TR(0x405055);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B405057:{NFSU2_TR(0x405057);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405059:{NFSU2_TR(0x405059);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40505c:{NFSU2_TR(0x40505c);
if(r1(R+514)){{goto L405064;}}
}
B40505e:L40505e:{c.instructions+=2;NFSU2_TR(0x40505e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B405060:{NFSU2_TR(0x405060);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405064:L405064:{c.instructions+=2;NFSU2_TR(0x405064);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B405066:{NFSU2_TR(0x405066);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40506bull));
TAIL_STATIC(0x75bed4u,75b);
}
B40506b:L40506b:{c.instructions+=6;NFSU2_TR(0x40506b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40506f:{NFSU2_TR(0x40506f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B405073:{NFSU2_TR(0x405073);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B405075:{NFSU2_TR(0x405075);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405077:{NFSU2_TR(0x405077);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40507a:{NFSU2_TR(0x40507a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L405082;}}
}
B40507c:L40507c:{c.instructions+=1;NFSU2_TR(0x40507c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B405082:L405082:{c.instructions+=2;NFSU2_TR(0x405082);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B405084:{NFSU2_TR(0x405084);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405089ull));
TAIL_STATIC(0x75bed4u,75b);
}
B405089:L405089:{c.instructions+=7;NFSU2_TR(0x405089);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B40508b:{NFSU2_TR(0x40508b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40508d:{NFSU2_TR(0x40508d);
__builtin_memmove((R+4),(R+0),4);
}
B40508f:{NFSU2_TR(0x40508f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405091:{NFSU2_TR(0x405091);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B405094:{NFSU2_TR(0x405094);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B405097:{NFSU2_TR(0x405097);
if(r1(R+514)){{goto L4050bf;}}
}
B405099:L405099:{c.instructions+=15;NFSU2_TR(0x405099);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40509b:{NFSU2_TR(0x40509b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40509e:{NFSU2_TR(0x40509e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4050a1:{NFSU2_TR(0x4050a1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4050a3:{NFSU2_TR(0x4050a3);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4050a7:{NFSU2_TR(0x4050a7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4050a9:{NFSU2_TR(0x4050a9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4050ac:{NFSU2_TR(0x4050ac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4050b0:{NFSU2_TR(0x4050b0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4050b2:{NFSU2_TR(0x4050b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4050b4:{NFSU2_TR(0x4050b4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4050b7:{NFSU2_TR(0x4050b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4050b8:{NFSU2_TR(0x4050b8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4050bb:{NFSU2_TR(0x4050bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4050bc:{NFSU2_TR(0x4050bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4050bf:L4050bf:{c.instructions+=30;NFSU2_TR(0x4050bf);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4050c1:{NFSU2_TR(0x4050c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4050c4:{NFSU2_TR(0x4050c4);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4050c8:{NFSU2_TR(0x4050c8);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4050ca:{NFSU2_TR(0x4050ca);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B4050cc:{NFSU2_TR(0x4050cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4050d0:{NFSU2_TR(0x4050d0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4050d4:{NFSU2_TR(0x4050d4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B4050d7:{NFSU2_TR(0x4050d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4050db:{NFSU2_TR(0x4050db);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4050dd:{NFSU2_TR(0x4050dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4050de:{NFSU2_TR(0x4050de);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4050e4:{NFSU2_TR(0x4050e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B4050e7:{NFSU2_TR(0x4050e7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4050eb:{NFSU2_TR(0x4050eb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+24)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4050ed:{NFSU2_TR(0x4050ed);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4050f0:{NFSU2_TR(0x4050f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4050f1:{NFSU2_TR(0x4050f1);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4050f3:{NFSU2_TR(0x4050f3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4050f5:{NFSU2_TR(0x4050f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4050f9:{NFSU2_TR(0x4050f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4050fa:{NFSU2_TR(0x4050fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4050fb:{NFSU2_TR(0x4050fb);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4050fd:{NFSU2_TR(0x4050fd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4050ff:{NFSU2_TR(0x4050ff);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B405102:{NFSU2_TR(0x405102);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405106:{NFSU2_TR(0x405106);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B405108:{NFSU2_TR(0x405108);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40510b:{NFSU2_TR(0x40510b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40510d:{NFSU2_TR(0x40510d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405112ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B405112:L405112:{c.instructions+=4;NFSU2_TR(0x405112);
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
B405115:{NFSU2_TR(0x405115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B405116:{NFSU2_TR(0x405116);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B405117:{NFSU2_TR(0x405117);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405120:L405120:{c.instructions+=12;NFSU2_TR(0x405120);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405121:{NFSU2_TR(0x405121);
__builtin_memmove((R+20),(R+16),4);
}
B405123:{NFSU2_TR(0x405123);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B405126:{NFSU2_TR(0x405126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x204ull))));
}
B40512c:{NFSU2_TR(0x40512c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40512d:{NFSU2_TR(0x40512d);
__builtin_memmove((R+12),(R+4),4);
}
B40512f:{NFSU2_TR(0x40512f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B405131:{NFSU2_TR(0x405131);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x3ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B405133:{NFSU2_TR(0x405133);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405134:{NFSU2_TR(0x405134);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405135:{NFSU2_TR(0x405135);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405139:{NFSU2_TR(0x405139);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40525b;}}
}
B40513f:L40513f:{c.instructions+=12;NFSU2_TR(0x40513f);
w4(R+24,u32(s32(s8(r1(R+0)))));
}
B405142:{NFSU2_TR(0x405142);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B405145:{NFSU2_TR(0x405145);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405149:{NFSU2_TR(0x405149);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40514b:{NFSU2_TR(0x40514b);
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
B40514d:{NFSU2_TR(0x40514d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B405151:{NFSU2_TR(0x405151);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405155:{NFSU2_TR(0x405155);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B40515b:{NFSU2_TR(0x40515b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40515f:{NFSU2_TR(0x40515f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405165:{NFSU2_TR(0x405165);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B405169:{NFSU2_TR(0x405169);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4051bd;}}
}
B40516b:L40516b:{c.instructions+=2;NFSU2_TR(0x40516b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40516e:{NFSU2_TR(0x40516e);
__builtin_memmove((R+28),(R+28),4);
}
B405170:L405170:{c.instructions+=2;NFSU2_TR(0x405170);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B405172:{NFSU2_TR(0x405172);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40519f;}}
}
B405174:L405174:{c.instructions+=19;NFSU2_TR(0x405174);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405177:{NFSU2_TR(0x405177);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40517a:{NFSU2_TR(0x40517a);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40517d:{NFSU2_TR(0x40517d);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B405180:{NFSU2_TR(0x405180);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405183:{NFSU2_TR(0x405183);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B405185:{NFSU2_TR(0x405185);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B405187:{NFSU2_TR(0x405187);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B405189:{NFSU2_TR(0x405189);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B40518b:{NFSU2_TR(0x40518b);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B40518d:{NFSU2_TR(0x40518d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40518f:{NFSU2_TR(0x40518f);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B405191:{NFSU2_TR(0x405191);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B405193:{NFSU2_TR(0x405193);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B405195:{NFSU2_TR(0x405195);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B405197:{NFSU2_TR(0x405197);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B405199:{NFSU2_TR(0x405199);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40519b:{NFSU2_TR(0x40519b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40519d:{NFSU2_TR(0x40519d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40519f:L40519f:{c.instructions+=8;NFSU2_TR(0x40519f);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4051a3:{NFSU2_TR(0x4051a3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4051a4:{NFSU2_TR(0x4051a4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4051a8:{NFSU2_TR(0x4051a8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B4051ab:{NFSU2_TR(0x4051ab);
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
B4051ad:{NFSU2_TR(0x4051ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4051b1:{NFSU2_TR(0x4051b1);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4051b5:{NFSU2_TR(0x4051b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x405170u);}goto L405170;}}
}
B4051b7:L4051b7:{c.instructions+=2;NFSU2_TR(0x4051b7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4051bb:{NFSU2_TR(0x4051bb);
{goto L4051bf;}
}
B4051bd:L4051bd:{c.instructions+=1;NFSU2_TR(0x4051bd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4051bf:L4051bf:{c.instructions+=5;NFSU2_TR(0x4051bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4051c0:{NFSU2_TR(0x4051c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4051c4:{NFSU2_TR(0x4051c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4051c5:{NFSU2_TR(0x4051c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4051c9:{NFSU2_TR(0x4051c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4051ceull));
TAIL_STATIC(0x576770u,576);
}
B4051ce:L4051ce:{c.instructions+=4;NFSU2_TR(0x4051ce);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4051d0:{NFSU2_TR(0x4051d0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4051d2:{NFSU2_TR(0x4051d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4051d6:{NFSU2_TR(0x4051d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L405243;}}
}
B4051d8:L4051d8:{c.instructions+=2;NFSU2_TR(0x4051d8);
u8 U[4];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B4051df:{NFSU2_TR(0x4051df);
}
B4051e0:L4051e0:{c.instructions+=7;NFSU2_TR(0x4051e0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4051e4:{NFSU2_TR(0x4051e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4051e5:{NFSU2_TR(0x4051e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4051e9:{NFSU2_TR(0x4051e9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4051ed:{NFSU2_TR(0x4051ed);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4051f1:{NFSU2_TR(0x4051f1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4051f4:{NFSU2_TR(0x4051f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4051f9ull));
TAIL_STATIC(0x576790u,576);
}
B4051f9:L4051f9:{c.instructions+=6;NFSU2_TR(0x4051f9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4051fd:{NFSU2_TR(0x4051fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B405201:{NFSU2_TR(0x405201);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405205:{NFSU2_TR(0x405205);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405206:{NFSU2_TR(0x405206);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405207:{NFSU2_TR(0x405207);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40520cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x405020u);}goto L405020;}
}
B40520c:L40520c:{c.instructions+=5;NFSU2_TR(0x40520c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B40520d:{NFSU2_TR(0x40520d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B405210:{NFSU2_TR(0x405210);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B405212:{NFSU2_TR(0x405212);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405216:{NFSU2_TR(0x405216);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4051e0u);}goto L4051e0;}}
}
B405218:L405218:{c.instructions+=3;NFSU2_TR(0x405218);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40521c:{NFSU2_TR(0x40521c);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B405223:{NFSU2_TR(0x405223);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B405226:L405226:{c.instructions+=10;NFSU2_TR(0x405226);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405229:{NFSU2_TR(0x405229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40522b:{NFSU2_TR(0x40522b);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40522e:{NFSU2_TR(0x40522e);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405231:{NFSU2_TR(0x405231);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B405233:{NFSU2_TR(0x405233);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B405236:{NFSU2_TR(0x405236);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B405239:{NFSU2_TR(0x405239);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B40523c:{NFSU2_TR(0x40523c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B40523d:{NFSU2_TR(0x40523d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x405226u);}goto L405226;}}
}
B40523f:L40523f:{c.instructions+=1;NFSU2_TR(0x40523f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B405243:L405243:{c.instructions+=5;NFSU2_TR(0x405243);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405247:{NFSU2_TR(0x405247);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40524d:{NFSU2_TR(0x40524d);
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
B40524f:{NFSU2_TR(0x40524f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405255:{NFSU2_TR(0x405255);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40525b:L40525b:{c.instructions+=6;NFSU2_TR(0x40525b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40525c:{NFSU2_TR(0x40525c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40525d:{NFSU2_TR(0x40525d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40525e:{NFSU2_TR(0x40525e);
__builtin_memmove((R+16),(R+20),4);
}
B405260:{NFSU2_TR(0x405260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B405261:{NFSU2_TR(0x405261);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405270:L405270:{c.instructions+=9;NFSU2_TR(0x405270);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405271:{NFSU2_TR(0x405271);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405272:{NFSU2_TR(0x405272);
__builtin_memmove((R+24),(R+4),4);
}
B405274:{NFSU2_TR(0x405274);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B405277:{NFSU2_TR(0x405277);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B405279:{NFSU2_TR(0x405279);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B40527a:{NFSU2_TR(0x40527a);
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
B40527c:{NFSU2_TR(0x40527c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405282:{NFSU2_TR(0x405282);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4052ae;}}
}
B405284:L405284:{c.instructions+=2;NFSU2_TR(0x405284);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405285:{NFSU2_TR(0x405285);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B405288:L405288:{c.instructions+=4;NFSU2_TR(0x405288);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40528b:{NFSU2_TR(0x40528b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40528c:{NFSU2_TR(0x40528c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40528d:{NFSU2_TR(0x40528d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405292ull));
TAIL_STATIC(0x43ce10u,43c);
}
B405292:L405292:{c.instructions+=9;NFSU2_TR(0x405292);
{u32 ea_=u32(r4(R+24)+u32(452u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B405298:{NFSU2_TR(0x405298);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40529b:{NFSU2_TR(0x40529b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B40529c:{NFSU2_TR(0x40529c);
{u32 ea_=u32(r4(R+24)+u32(452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4052a2:{NFSU2_TR(0x4052a2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+8,u32(s32(s8(r1(U+0)))));
}
B4052a5:{NFSU2_TR(0x4052a5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B4052a8:{NFSU2_TR(0x4052a8);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4052a9:{NFSU2_TR(0x4052a9);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4052ab:{NFSU2_TR(0x4052ab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x405288u);}goto L405288;}}
}
B4052ad:L4052ad:{c.instructions+=1;NFSU2_TR(0x4052ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4052ae:L4052ae:{c.instructions+=3;NFSU2_TR(0x4052ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4052af:{NFSU2_TR(0x4052af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4052b0:{NFSU2_TR(0x4052b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4052c0:L4052c0:{c.instructions+=4;NFSU2_TR(0x4052c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4052c4:{NFSU2_TR(0x4052c4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4052c6:{NFSU2_TR(0x4052c6);
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
B4052c8:{NFSU2_TR(0x4052c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40530e;}}
}
B4052ca:L4052ca:{c.instructions+=4;NFSU2_TR(0x4052ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4052cb:{NFSU2_TR(0x4052cb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+24,u32(s32(s8(r1(U+0)))));
}
B4052ce:{NFSU2_TR(0x4052ce);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4052d0:{NFSU2_TR(0x4052d0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40530d;}}
}
B4052d2:L4052d2:{c.instructions+=3;NFSU2_TR(0x4052d2);
u8 U[14];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+24),(U+12),2);
}
B4052da:{NFSU2_TR(0x4052da);
u8 U[8];
__builtin_memmove((U+4),(R+24),2);
w1(R+512,u8((r2(U+4))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0xffffull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B4052de:{NFSU2_TR(0x4052de);
if(r1(R+518)){{goto L40530d;}}
}
B4052e0:L4052e0:{c.instructions+=3;NFSU2_TR(0x4052e0);
u8 U[14];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+4),(U+12),2);
}
B4052e8:{NFSU2_TR(0x4052e8);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w1(R+512,u8((r2(U+4))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0xffffull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B4052ec:{NFSU2_TR(0x4052ec);
if(r1(R+518)){{goto L40530d;}}
}
B4052ee:L4052ee:{c.instructions+=3;NFSU2_TR(0x4052ee);
w4(R+24,u32(s32(s16(r2(R+24)))));
}
B4052f1:{NFSU2_TR(0x4052f1);
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
B4052f3:{NFSU2_TR(0x4052f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40530d;}}
}
B4052f5:L4052f5:{c.instructions+=3;NFSU2_TR(0x4052f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B4052fc:{NFSU2_TR(0x4052fc);
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
B4052fe:{NFSU2_TR(0x4052fe);
if(r1(R+518)){{goto L40530d;}}
}
B405300:L405300:{c.instructions+=3;NFSU2_TR(0x405300);
w4(R+0,u32(s32(s16(r2(R+4)))));
}
B405303:{NFSU2_TR(0x405303);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B405306:{NFSU2_TR(0x405306);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B40530d:L40530d:{c.instructions+=1;NFSU2_TR(0x40530d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40530e:L40530e:{c.instructions+=1;NFSU2_TR(0x40530e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405320:L405320:{c.instructions+=3;NFSU2_TR(0x405320);
__builtin_memmove((R+0),(R+4),4);
}
B405322:{NFSU2_TR(0x405322);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B405329:{NFSU2_TR(0x405329);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405330:L405330:{c.instructions+=4;NFSU2_TR(0x405330);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405331:{NFSU2_TR(0x405331);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B405334:{NFSU2_TR(0x405334);
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
B405336:{NFSU2_TR(0x405336);
if(r1(R+518)){{goto L40534e;}}
}
B405338:L405338:{c.instructions+=2;NFSU2_TR(0x405338);
__builtin_memmove((R+4),(R+24),4);
}
B40533a:{NFSU2_TR(0x40533a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40533full));
TAIL_STATIC(0x633fd0u,633);
}
B40533f:L40533f:{c.instructions+=4;NFSU2_TR(0x40533f);
__builtin_memmove((R+0),gp(0x8a1d08),4);
}
B405344:{NFSU2_TR(0x405344);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405345:{NFSU2_TR(0x405345);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405346:{NFSU2_TR(0x405346);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40534bull));
TAIL_STATIC(0x43f920u,43f);
}
B40534b:L40534b:{c.instructions+=1;NFSU2_TR(0x40534b);
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
B40534e:L40534e:{c.instructions+=2;NFSU2_TR(0x40534e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40534f:{NFSU2_TR(0x40534f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405350:L405350:{c.instructions+=8;NFSU2_TR(0x405350);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405351:{NFSU2_TR(0x405351);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B405355:{NFSU2_TR(0x405355);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405356:{NFSU2_TR(0x405356);
u8 U[4];
w4(U+0,u32(0x78447cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40535b:{NFSU2_TR(0x40535b);
__builtin_memmove((R+28),(R+4),4);
}
B40535d:{NFSU2_TR(0x40535d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40535f:{NFSU2_TR(0x40535f);
__builtin_memmove((R+4),(R+24),4);
}
B405361:{NFSU2_TR(0x405361);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405366ull));
TAIL_STATIC(0x578ce0u,578);
}
B405366:L405366:{c.instructions+=6;NFSU2_TR(0x405366);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405368:{NFSU2_TR(0x405368);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40536a:{NFSU2_TR(0x40536a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40536c:{NFSU2_TR(0x40536c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40536d:{NFSU2_TR(0x40536d);
__builtin_memmove((R+4),(R+24),4);
}
B40536f:{NFSU2_TR(0x40536f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405374ull));
TAIL_STATIC(0x571640u,571);
}
B405374:L405374:{c.instructions+=4;NFSU2_TR(0x405374);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B405377:{NFSU2_TR(0x405377);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405378:{NFSU2_TR(0x405378);
__builtin_memmove((R+4),(R+24),4);
}
B40537a:{NFSU2_TR(0x40537a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40537full));
TAIL_STATIC(0x571770u,571);
}
B40537f:L40537f:{c.instructions+=4;NFSU2_TR(0x40537f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B405382:{NFSU2_TR(0x405382);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405383:{NFSU2_TR(0x405383);
__builtin_memmove((R+4),(R+24),4);
}
B405385:{NFSU2_TR(0x405385);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40538aull));
TAIL_STATIC(0x571770u,571);
}
B40538a:L40538a:{c.instructions+=4;NFSU2_TR(0x40538a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B40538d:{NFSU2_TR(0x40538d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40538e:{NFSU2_TR(0x40538e);
__builtin_memmove((R+4),(R+24),4);
}
B405390:{NFSU2_TR(0x405390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405395ull));
TAIL_STATIC(0x571770u,571);
}
B405395:L405395:{c.instructions+=2;NFSU2_TR(0x405395);
__builtin_memmove((R+4),(R+24),4);
}
B405397:{NFSU2_TR(0x405397);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40539cull));
TAIL_STATIC(0x578d90u,578);
}
B40539c:L40539c:{c.instructions+=3;NFSU2_TR(0x40539c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40539d:{NFSU2_TR(0x40539d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40539e:{NFSU2_TR(0x40539e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4053b0:L4053b0:{c.instructions+=13;NFSU2_TR(0x4053b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4053b4:{NFSU2_TR(0x4053b4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4053b8:{NFSU2_TR(0x4053b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4053bc:{NFSU2_TR(0x4053bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4053be:{NFSU2_TR(0x4053be);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4053c2:{NFSU2_TR(0x4053c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4053c5:{NFSU2_TR(0x4053c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4053c8:{NFSU2_TR(0x4053c8);
{u32 ea_=u32(u32(8293992u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4053ce:{NFSU2_TR(0x4053ce);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4053d0:{NFSU2_TR(0x4053d0);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4053d6:{NFSU2_TR(0x4053d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4053d8:{NFSU2_TR(0x4053d8);
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
B4053db:{NFSU2_TR(0x4053db);
if(r1(R+514)){{goto L4053f7;}}
}
B4053dd:L4053dd:{c.instructions+=3;NFSU2_TR(0x4053dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4053e0:{NFSU2_TR(0x4053e0);
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
B4053e2:{NFSU2_TR(0x4053e2);
if(r1(R+518)){{goto L4053eb;}}
}
B4053e4:L4053e4:{c.instructions+=2;NFSU2_TR(0x4053e4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4053e9:{NFSU2_TR(0x4053e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4053fe;}}
}
B4053eb:L4053eb:{c.instructions+=3;NFSU2_TR(0x4053eb);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B4053f1:{NFSU2_TR(0x4053f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4053f4:{NFSU2_TR(0x4053f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4053f7:L4053f7:{c.instructions+=1;NFSU2_TR(0x4053f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4053fe:L4053fe:{c.instructions+=1;NFSU2_TR(0x4053fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405410:L405410:{c.instructions+=12;NFSU2_TR(0x405410);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405414:{NFSU2_TR(0x405414);
{u32 ea_=u32(u32(7878616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40541a:{NFSU2_TR(0x40541a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40541d:{NFSU2_TR(0x40541d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40541f:{NFSU2_TR(0x40541f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B405421:{NFSU2_TR(0x405421);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405424:{NFSU2_TR(0x405424);
{u32 ea_=u32(u32(8293992u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40542a:{NFSU2_TR(0x40542a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40542c:{NFSU2_TR(0x40542c);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B405432:{NFSU2_TR(0x405432);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405434:{NFSU2_TR(0x405434);
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
B405437:{NFSU2_TR(0x405437);
if(r1(R+514)){{goto L40544d;}}
}
B405439:L405439:{c.instructions+=3;NFSU2_TR(0x405439);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40543c:{NFSU2_TR(0x40543c);
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
B40543e:{NFSU2_TR(0x40543e);
if(r1(R+518)){{goto L405447;}}
}
B405440:L405440:{c.instructions+=2;NFSU2_TR(0x405440);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B405445:{NFSU2_TR(0x405445);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L405450;}}
}
B405447:L405447:{c.instructions+=1;NFSU2_TR(0x405447);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B40544d:L40544d:{c.instructions+=1;NFSU2_TR(0x40544d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405450:L405450:{c.instructions+=1;NFSU2_TR(0x405450);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405460:L405460:{c.instructions+=4;NFSU2_TR(0x405460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B405462:{NFSU2_TR(0x405462);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B405465:{NFSU2_TR(0x405465);
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
B405468:{NFSU2_TR(0x405468);
if(r1(R+518)){{goto L405493;}}
}
B40546a:L40546a:{c.instructions+=3;NFSU2_TR(0x40546a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40546e:{NFSU2_TR(0x40546e);
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
B405470:{NFSU2_TR(0x405470);
if(r1(R+518)){{goto L405495;}}
}
B405472:L405472:{c.instructions+=2;NFSU2_TR(0x405472);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B405475:{NFSU2_TR(0x405475);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L405493;}}
}
B405477:L405477:{c.instructions+=2;NFSU2_TR(0x405477);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B405479:{NFSU2_TR(0x405479);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L405483;}}
}
B40547b:L40547b:{c.instructions+=2;NFSU2_TR(0x40547b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40547d:{NFSU2_TR(0x40547d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L405483;}}
}
B40547f:L40547f:{c.instructions+=2;NFSU2_TR(0x40547f);
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
B405480:{NFSU2_TR(0x405480);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405483:L405483:{c.instructions+=2;NFSU2_TR(0x405483);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B405486:{NFSU2_TR(0x405486);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L405495;}}
}
B405488:L405488:{c.instructions+=2;NFSU2_TR(0x405488);
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
B40548b:{NFSU2_TR(0x40548b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L405495;}}
}
B40548d:L40548d:{c.instructions+=2;NFSU2_TR(0x40548d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B405490:{NFSU2_TR(0x405490);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405493:L405493:{c.instructions+=1;NFSU2_TR(0x405493);
__builtin_memmove((R+0),(R+8),4);
}
B405495:L405495:{c.instructions+=1;NFSU2_TR(0x405495);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4054a0:L4054a0:{c.instructions+=9;NFSU2_TR(0x4054a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4054a4:{NFSU2_TR(0x4054a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4054a8:{NFSU2_TR(0x4054a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4054ae:{NFSU2_TR(0x4054ae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4054b2:{NFSU2_TR(0x4054b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x234ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4054b8:{NFSU2_TR(0x4054b8);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4054bc:{NFSU2_TR(0x4054bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4054c2:{NFSU2_TR(0x4054c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4054c8:{NFSU2_TR(0x4054c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4054d0:L4054d0:{c.instructions+=14;NFSU2_TR(0x4054d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4054d1:{NFSU2_TR(0x4054d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4054d2:{NFSU2_TR(0x4054d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4054d3:{NFSU2_TR(0x4054d3);
__builtin_memmove((R+24),(R+4),4);
}
B4054d5:{NFSU2_TR(0x4054d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4054db:{NFSU2_TR(0x4054db);
{u32 ea_=u32(r4(R+24)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4054e1:{NFSU2_TR(0x4054e1);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4054e4:{NFSU2_TR(0x4054e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4054e5:{NFSU2_TR(0x4054e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4054e8:{NFSU2_TR(0x4054e8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4054ec:{NFSU2_TR(0x4054ec);
{u32 ea_=u32(r4(R+24)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4054f2:{NFSU2_TR(0x4054f2);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4054f5:{NFSU2_TR(0x4054f5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4054f8:{NFSU2_TR(0x4054f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4054fdull));
TAIL_STATIC(0x43e6d0u,43e);
}
B4054fd:L4054fd:{c.instructions+=13;NFSU2_TR(0x4054fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B405500:{NFSU2_TR(0x405500);
__builtin_memmove((R+28),(R+0),4);
}
B405502:{NFSU2_TR(0x405502);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405508:{NFSU2_TR(0x405508);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B40550f:{NFSU2_TR(0x40550f);
w2(R+4,u16(u32(r2(R+4))-u32(r2(R+28))));
}
B405512:{NFSU2_TR(0x405512);
w4(R+8,u32(r2(R+4)));
}
B405515:{NFSU2_TR(0x405515);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405519:{NFSU2_TR(0x405519);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40551d:{NFSU2_TR(0x40551d);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B405523:{NFSU2_TR(0x405523);
{u32 ea_=u32(u32(7881872u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B405529:{NFSU2_TR(0x405529);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40552b:{NFSU2_TR(0x40552b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40552e:{NFSU2_TR(0x40552e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L405538;}}
}
B405530:L405530:{c.instructions+=2;NFSU2_TR(0x405530);
{u32 ea_=u32(u32(7881868u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B405536:{NFSU2_TR(0x405536);
{goto L40554b;}
}
B405538:L405538:{c.instructions+=4;NFSU2_TR(0x405538);
{u32 ea_=u32(u32(7881876u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40553e:{NFSU2_TR(0x40553e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405540:{NFSU2_TR(0x405540);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B405543:{NFSU2_TR(0x405543);
if(r1(R+514)){{goto L40554b;}}
}
B405545:L405545:{c.instructions+=1;NFSU2_TR(0x405545);
{u32 ea_=u32(u32(7881868u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40554b:L40554b:{c.instructions+=9;NFSU2_TR(0x40554b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B40554f:{NFSU2_TR(0x40554f);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B405551:{NFSU2_TR(0x405551);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405557:{NFSU2_TR(0x405557);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40555d:{NFSU2_TR(0x40555d);
__builtin_memmove((R+8),(R+4),4);
}
B40555f:{NFSU2_TR(0x40555f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405563:{NFSU2_TR(0x405563);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405564:{NFSU2_TR(0x405564);
w4(R+4,u32(0x81e7e4ull));
}
B405569:{NFSU2_TR(0x405569);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40556eull));
TAIL_STATIC(0x576790u,576);
}
B40556e:L40556e:{c.instructions+=5;NFSU2_TR(0x40556e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B405572:{NFSU2_TR(0x405572);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B405578:{NFSU2_TR(0x405578);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40557a:{NFSU2_TR(0x40557a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40557d:{NFSU2_TR(0x40557d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4055ec;}}
}
B40557f:L40557f:{c.instructions+=6;NFSU2_TR(0x40557f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405585:{NFSU2_TR(0x405585);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405588:{NFSU2_TR(0x405588);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40558b:{NFSU2_TR(0x40558b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40558c:{NFSU2_TR(0x40558c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40558d:{NFSU2_TR(0x40558d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405592ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B405592:L405592:{c.instructions+=10;NFSU2_TR(0x405592);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B405595:{NFSU2_TR(0x405595);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B405597:{NFSU2_TR(0x405597);
w4(R+0,u32(r2(R+0)));
}
B40559a:{NFSU2_TR(0x40559a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40559e:{NFSU2_TR(0x40559e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4055a2:{NFSU2_TR(0x4055a2);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4055a8:{NFSU2_TR(0x4055a8);
{u32 ea_=u32(u32(7881872u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4055ae:{NFSU2_TR(0x4055ae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4055b0:{NFSU2_TR(0x4055b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4055b3:{NFSU2_TR(0x4055b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4055bd;}}
}
B4055b5:L4055b5:{c.instructions+=2;NFSU2_TR(0x4055b5);
{u32 ea_=u32(u32(7881868u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4055bb:{NFSU2_TR(0x4055bb);
{goto L4055d0;}
}
B4055bd:L4055bd:{c.instructions+=4;NFSU2_TR(0x4055bd);
{u32 ea_=u32(u32(7881876u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4055c3:{NFSU2_TR(0x4055c3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4055c5:{NFSU2_TR(0x4055c5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4055c8:{NFSU2_TR(0x4055c8);
if(r1(R+514)){{goto L4055d0;}}
}
B4055ca:L4055ca:{c.instructions+=1;NFSU2_TR(0x4055ca);
{u32 ea_=u32(u32(7881868u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4055d0:L4055d0:{c.instructions+=9;NFSU2_TR(0x4055d0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4055d6:{NFSU2_TR(0x4055d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4055da:{NFSU2_TR(0x4055da);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4055de:{NFSU2_TR(0x4055de);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4055e0:{NFSU2_TR(0x4055e0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4055e2:{NFSU2_TR(0x4055e2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4055e6:{NFSU2_TR(0x4055e6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4055e8:{NFSU2_TR(0x4055e8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4055ea:{NFSU2_TR(0x4055ea);
{goto L4055f4;}
}
B4055ec:L4055ec:{c.instructions+=3;NFSU2_TR(0x4055ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4055ee:{NFSU2_TR(0x4055ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4055f2:{NFSU2_TR(0x4055f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4055f4:L4055f4:{c.instructions+=5;NFSU2_TR(0x4055f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4055fa:{NFSU2_TR(0x4055fa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B4055fd:{NFSU2_TR(0x4055fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4055fe:{NFSU2_TR(0x4055fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B405601:{NFSU2_TR(0x405601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405606ull));
TAIL_STATIC(0x404af0u,404);
}
B405606:L405606:{c.instructions+=6;NFSU2_TR(0x405606);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40560a:{NFSU2_TR(0x40560a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40560e:{NFSU2_TR(0x40560e);
__builtin_memmove((R+0),gp(0x783938),4);
}
B405613:{NFSU2_TR(0x405613);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405614:{NFSU2_TR(0x405614);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405615:{NFSU2_TR(0x405615);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40561aull));
TAIL_STATIC(0x43e6d0u,43e);
}
B40561a:L40561a:{c.instructions+=9;NFSU2_TR(0x40561a);
w4(R+4,u32(r2(R+0)));
}
B40561d:{NFSU2_TR(0x40561d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405621:{NFSU2_TR(0x405621);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B405624:{NFSU2_TR(0x405624);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B405628:{NFSU2_TR(0x405628);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40562e:{NFSU2_TR(0x40562e);
{u32 ea_=u32(u32(7881872u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B405634:{NFSU2_TR(0x405634);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405636:{NFSU2_TR(0x405636);
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
B405639:{NFSU2_TR(0x405639);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L405651;}}
}
B40563b:L40563b:{c.instructions+=9;NFSU2_TR(0x40563b);
{u32 ea_=u32(u32(7881868u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B405641:{NFSU2_TR(0x405641);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B405645:{NFSU2_TR(0x405645);
__builtin_memmove((R+0),(R+28),2);
}
B405648:{NFSU2_TR(0x405648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B405649:{NFSU2_TR(0x405649);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40564a:{NFSU2_TR(0x40564a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40564c:{NFSU2_TR(0x40564c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40564d:{NFSU2_TR(0x40564d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40564e:{NFSU2_TR(0x40564e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405651:L405651:{c.instructions+=4;NFSU2_TR(0x405651);
{u32 ea_=u32(u32(7881876u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B405657:{NFSU2_TR(0x405657);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405659:{NFSU2_TR(0x405659);
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
B40565c:{NFSU2_TR(0x40565c);
if(r1(R+514)){{goto L405664;}}
}
B40565e:L40565e:{c.instructions+=1;NFSU2_TR(0x40565e);
{u32 ea_=u32(u32(7881868u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B405664:L405664:{c.instructions+=8;NFSU2_TR(0x405664);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B405668:{NFSU2_TR(0x405668);
__builtin_memmove((R+0),(R+28),2);
}
B40566b:{NFSU2_TR(0x40566b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40566d:{NFSU2_TR(0x40566d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40566e:{NFSU2_TR(0x40566e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40566f:{NFSU2_TR(0x40566f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B405670:{NFSU2_TR(0x405670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B405671:{NFSU2_TR(0x405671);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405680:L405680:{c.instructions+=5;NFSU2_TR(0x405680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405681:{NFSU2_TR(0x405681);
__builtin_memmove((R+24),(R+4),4);
}
B405683:{NFSU2_TR(0x405683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405689:{NFSU2_TR(0x405689);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40568b:{NFSU2_TR(0x40568b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405690ull));
TAIL_STATIC(0x57a010u,57a);
}
B405690:L405690:{c.instructions+=3;NFSU2_TR(0x405690);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405696:{NFSU2_TR(0x405696);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405698:{NFSU2_TR(0x405698);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40569dull));
TAIL_STATIC(0x57a010u,57a);
}
B40569d:L40569d:{c.instructions+=2;NFSU2_TR(0x40569d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40569e:{NFSU2_TR(0x40569e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4056a0:L4056a0:{c.instructions+=5;NFSU2_TR(0x4056a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4056a1:{NFSU2_TR(0x4056a1);
__builtin_memmove((R+24),(R+4),4);
}
B4056a3:{NFSU2_TR(0x4056a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4056a9:{NFSU2_TR(0x4056a9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4056ab:{NFSU2_TR(0x4056ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4056b0ull));
TAIL_STATIC(0x576c40u,576);
}
B4056b0:L4056b0:{c.instructions+=3;NFSU2_TR(0x4056b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4056b6:{NFSU2_TR(0x4056b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4056b8:{NFSU2_TR(0x4056b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4056bdull));
TAIL_STATIC(0x576c40u,576);
}
B4056bd:L4056bd:{c.instructions+=2;NFSU2_TR(0x4056bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4056be:{NFSU2_TR(0x4056be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4056c0:L4056c0:{c.instructions+=11;NFSU2_TR(0x4056c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4056c3:{NFSU2_TR(0x4056c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4056c4:{NFSU2_TR(0x4056c4);
__builtin_memmove((R+24),(R+4),4);
}
B4056c6:{NFSU2_TR(0x4056c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4056ca:{NFSU2_TR(0x4056ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4056cb:{NFSU2_TR(0x4056cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4056cf:{NFSU2_TR(0x4056cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4056d0:{NFSU2_TR(0x4056d0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4056d4:{NFSU2_TR(0x4056d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4056d5:{NFSU2_TR(0x4056d5);
__builtin_memmove((R+4),(R+24),4);
}
B4056d7:{NFSU2_TR(0x4056d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4056dcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4054d0u);}goto L4054d0;}
}
B4056dc:L4056dc:{c.instructions+=4;NFSU2_TR(0x4056dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4056e0:{NFSU2_TR(0x4056e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4056e6:{NFSU2_TR(0x4056e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4056e7:{NFSU2_TR(0x4056e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4056ecull));
TAIL_STATIC(0x576c40u,576);
}
B4056ec:L4056ec:{c.instructions+=4;NFSU2_TR(0x4056ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4056f0:{NFSU2_TR(0x4056f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4056f1:{NFSU2_TR(0x4056f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4056f7:{NFSU2_TR(0x4056f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4056fcull));
TAIL_STATIC(0x576c40u,576);
}
B4056fc:L4056fc:{c.instructions+=4;NFSU2_TR(0x4056fc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B405700:{NFSU2_TR(0x405700);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405706:{NFSU2_TR(0x405706);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405707:{NFSU2_TR(0x405707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40570cull));
TAIL_STATIC(0x576c40u,576);
}
B40570c:L40570c:{c.instructions+=3;NFSU2_TR(0x40570c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40570d:{NFSU2_TR(0x40570d);
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
B405710:{NFSU2_TR(0x405710);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405720:L405720:{c.instructions+=11;NFSU2_TR(0x405720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B405723:{NFSU2_TR(0x405723);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405724:{NFSU2_TR(0x405724);
__builtin_memmove((R+24),(R+4),4);
}
B405726:{NFSU2_TR(0x405726);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B40572a:{NFSU2_TR(0x40572a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40572b:{NFSU2_TR(0x40572b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40572f:{NFSU2_TR(0x40572f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405730:{NFSU2_TR(0x405730);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B405734:{NFSU2_TR(0x405734);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405735:{NFSU2_TR(0x405735);
__builtin_memmove((R+4),(R+24),4);
}
B405737:{NFSU2_TR(0x405737);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40573cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4054d0u);}goto L4054d0;}
}
B40573c:L40573c:{c.instructions+=4;NFSU2_TR(0x40573c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405740:{NFSU2_TR(0x405740);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405746:{NFSU2_TR(0x405746);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405747:{NFSU2_TR(0x405747);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40574cull));
TAIL_STATIC(0x57a010u,57a);
}
B40574c:L40574c:{c.instructions+=4;NFSU2_TR(0x40574c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405750:{NFSU2_TR(0x405750);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405751:{NFSU2_TR(0x405751);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405757:{NFSU2_TR(0x405757);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40575cull));
TAIL_STATIC(0x57a010u,57a);
}
B40575c:L40575c:{c.instructions+=4;NFSU2_TR(0x40575c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B405760:{NFSU2_TR(0x405760);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405766:{NFSU2_TR(0x405766);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405767:{NFSU2_TR(0x405767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40576cull));
TAIL_STATIC(0x57a010u,57a);
}
B40576c:L40576c:{c.instructions+=3;NFSU2_TR(0x40576c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40576d:{NFSU2_TR(0x40576d);
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
B405770:{NFSU2_TR(0x405770);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405780:L405780:{c.instructions+=3;NFSU2_TR(0x405780);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405786:{NFSU2_TR(0x405786);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405788:{NFSU2_TR(0x405788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40578dull));
TAIL_STATIC(0x57a010u,57a);
}
B40578d:L40578d:{c.instructions+=1;NFSU2_TR(0x40578d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405790:L405790:{c.instructions+=8;NFSU2_TR(0x405790);
{u32 ea_=u32(r4(R+4)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405796:{NFSU2_TR(0x405796);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40579c:{NFSU2_TR(0x40579c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40579e:{NFSU2_TR(0x40579e);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4057a4:{NFSU2_TR(0x4057a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4057a5:{NFSU2_TR(0x4057a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4057ab:{NFSU2_TR(0x4057ab);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4057ae:{NFSU2_TR(0x4057ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4057b3ull));
TAIL_STATIC(0x57a010u,57a);
}
B4057b3:L4057b3:{c.instructions+=1;NFSU2_TR(0x4057b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4057c0:L4057c0:{c.instructions+=13;NFSU2_TR(0x4057c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4057c3:{NFSU2_TR(0x4057c3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4057c9:{NFSU2_TR(0x4057c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4057ca:{NFSU2_TR(0x4057ca);
__builtin_memmove((R+24),(R+4),4);
}
B4057cc:{NFSU2_TR(0x4057cc);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4057d0:{NFSU2_TR(0x4057d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4057d6:{NFSU2_TR(0x4057d6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4057dc:{NFSU2_TR(0x4057dc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B4057df:{NFSU2_TR(0x4057df);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4057e3:{NFSU2_TR(0x4057e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4057e4:{NFSU2_TR(0x4057e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x374ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4057ea:{NFSU2_TR(0x4057ea);
w4(R+28,u32(0x4ull));
}
B4057ef:{NFSU2_TR(0x4057ef);
}
B4057f0:L4057f0:{c.instructions+=9;NFSU2_TR(0x4057f0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4057f2:{NFSU2_TR(0x4057f2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4057f5:{NFSU2_TR(0x4057f5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4057f7:{NFSU2_TR(0x4057f7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4057fb:{NFSU2_TR(0x4057fb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405801:{NFSU2_TR(0x405801);
{u32 ea_=u32(u32(7879156u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B405807:{NFSU2_TR(0x405807);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405809:{NFSU2_TR(0x405809);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40580c:{NFSU2_TR(0x40580c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L405849;}}
}
B40580e:L40580e:{c.instructions+=7;NFSU2_TR(0x40580e);
{u32 ea_=u32(u32(7879156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405814:{NFSU2_TR(0x405814);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B405816:{NFSU2_TR(0x405816);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B405818:{NFSU2_TR(0x405818);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40581a:{NFSU2_TR(0x40581a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40581c:{NFSU2_TR(0x40581c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40581f:{NFSU2_TR(0x40581f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L405825;}}
}
B405821:L405821:{c.instructions+=2;NFSU2_TR(0x405821);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B405823:{NFSU2_TR(0x405823);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B405825:L405825:{c.instructions+=5;NFSU2_TR(0x405825);
{u32 ea_=u32(u32(7879156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40582b:{NFSU2_TR(0x40582b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40582d:{NFSU2_TR(0x40582d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40582f:{NFSU2_TR(0x40582f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B405832:{NFSU2_TR(0x405832);
if(r1(R+514)){{goto L40583c;}}
}
B405834:L405834:{c.instructions+=2;NFSU2_TR(0x405834);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B405836:{NFSU2_TR(0x405836);
{u32 ea_=u32(u32(7879156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40583c:L40583c:{c.instructions+=6;NFSU2_TR(0x40583c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B40583e:{NFSU2_TR(0x40583e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B405840:{NFSU2_TR(0x405840);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405842:{NFSU2_TR(0x405842);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B405844:{NFSU2_TR(0x405844);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B405847:{NFSU2_TR(0x405847);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40584d;}}
}
B405849:L405849:{c.instructions+=2;NFSU2_TR(0x405849);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B40584b:{NFSU2_TR(0x40584b);
{goto L40584f;}
}
B40584d:L40584d:{c.instructions+=1;NFSU2_TR(0x40584d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40584f:L40584f:{c.instructions+=5;NFSU2_TR(0x40584f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405855:{NFSU2_TR(0x405855);
{u32 ea_=u32(u32(7879160u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40585b:{NFSU2_TR(0x40585b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40585d:{NFSU2_TR(0x40585d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B405860:{NFSU2_TR(0x405860);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4058a3;}}
}
B405862:L405862:{c.instructions+=7;NFSU2_TR(0x405862);
{u32 ea_=u32(u32(7879160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405868:{NFSU2_TR(0x405868);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40586a:{NFSU2_TR(0x40586a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40586e:{NFSU2_TR(0x40586e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B405870:{NFSU2_TR(0x405870);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405872:{NFSU2_TR(0x405872);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B405875:{NFSU2_TR(0x405875);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40587d;}}
}
B405877:L405877:{c.instructions+=2;NFSU2_TR(0x405877);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B405879:{NFSU2_TR(0x405879);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40587d:L40587d:{c.instructions+=5;NFSU2_TR(0x40587d);
{u32 ea_=u32(u32(7879160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405883:{NFSU2_TR(0x405883);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B405885:{NFSU2_TR(0x405885);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405887:{NFSU2_TR(0x405887);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40588a:{NFSU2_TR(0x40588a);
if(r1(R+514)){{goto L405894;}}
}
B40588c:L40588c:{c.instructions+=2;NFSU2_TR(0x40588c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40588e:{NFSU2_TR(0x40588e);
{u32 ea_=u32(u32(7879160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405894:L405894:{c.instructions+=6;NFSU2_TR(0x405894);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405898:{NFSU2_TR(0x405898);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40589a:{NFSU2_TR(0x40589a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40589c:{NFSU2_TR(0x40589c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40589e:{NFSU2_TR(0x40589e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4058a1:{NFSU2_TR(0x4058a1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4058a7;}}
}
B4058a3:L4058a3:{c.instructions+=1;NFSU2_TR(0x4058a3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4058a7:L4058a7:{c.instructions+=3;NFSU2_TR(0x4058a7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B4058aa:{NFSU2_TR(0x4058aa);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B4058ab:{NFSU2_TR(0x4058ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4057f0u);}goto L4057f0;}}
}
B4058b1:L4058b1:{c.instructions+=9;NFSU2_TR(0x4058b1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4058b5:{NFSU2_TR(0x4058b5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4058b7:{NFSU2_TR(0x4058b7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4058bb:{NFSU2_TR(0x4058bb);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B4058bd:{NFSU2_TR(0x4058bd);
{u32 ea_=u32(r4(R+8)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4058c3:{NFSU2_TR(0x4058c3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4058c9:{NFSU2_TR(0x4058c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4058cb:{NFSU2_TR(0x4058cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4058ce:{NFSU2_TR(0x4058ce);
if(r1(R+514)){{goto L4058d8;}}
}
B4058d0:L4058d0:{c.instructions+=3;NFSU2_TR(0x4058d0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4058d2:{NFSU2_TR(0x4058d2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4058d6:{NFSU2_TR(0x4058d6);
{goto L4058da;}
}
B4058d8:L4058d8:{c.instructions+=1;NFSU2_TR(0x4058d8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4058da:L4058da:{c.instructions+=8;NFSU2_TR(0x4058da);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4058de:{NFSU2_TR(0x4058de);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4058e2:{NFSU2_TR(0x4058e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4058e8:{NFSU2_TR(0x4058e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4058ea:{NFSU2_TR(0x4058ea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4058ec:{NFSU2_TR(0x4058ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4058ed:{NFSU2_TR(0x4058ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4058ee:{NFSU2_TR(0x4058ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4058f3ull));
TAIL_STATIC(0x576bb0u,576);
}
B4058f3:L4058f3:{c.instructions+=7;NFSU2_TR(0x4058f3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4058f7:{NFSU2_TR(0x4058f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4058f9:{NFSU2_TR(0x4058f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4058fb:{NFSU2_TR(0x4058fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4058fc:{NFSU2_TR(0x4058fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4058fd:{NFSU2_TR(0x4058fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405903:{NFSU2_TR(0x405903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405908ull));
TAIL_STATIC(0x576bb0u,576);
}
B405908:L405908:{c.instructions+=4;NFSU2_TR(0x405908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B405909:{NFSU2_TR(0x405909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40590a:{NFSU2_TR(0x40590a);
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
B40590d:{NFSU2_TR(0x40590d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405910:L405910:{c.instructions+=3;NFSU2_TR(0x405910);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405914:{NFSU2_TR(0x405914);
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
B405916:{NFSU2_TR(0x405916);
if(r1(R+518)){{goto L40592f;}}
}
B405918:L405918:{c.instructions+=3;NFSU2_TR(0x405918);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B40591a:{NFSU2_TR(0x40591a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40591c:{NFSU2_TR(0x40591c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40592f;}}
}
B40591e:L40591e:{c.instructions+=2;NFSU2_TR(0x40591e);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x14ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x14ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x14ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B405921:{NFSU2_TR(0x405921);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L40592f;}}
}
B405923:L405923:{c.instructions+=3;NFSU2_TR(0x405923);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405927:{NFSU2_TR(0x405927);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B40592a:{NFSU2_TR(0x40592a);
TAIL_STATIC(0x401d40u,401);
}
B40592f:L40592f:{c.instructions+=1;NFSU2_TR(0x40592f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405940:L405940:{c.instructions+=6;NFSU2_TR(0x405940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B405943:{NFSU2_TR(0x405943);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405947:{NFSU2_TR(0x405947);
{u32 ea_=u32(u32(7881880u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40594d:{NFSU2_TR(0x40594d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B405953:{NFSU2_TR(0x405953);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B405957:{NFSU2_TR(0x405957);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40595cull));
TAIL_STATIC(0x75bed4u,75b);
}
B40595c:L40595c:{c.instructions+=6;NFSU2_TR(0x40595c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405960:{NFSU2_TR(0x405960);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B405964:{NFSU2_TR(0x405964);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B405968:{NFSU2_TR(0x405968);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40596a:{NFSU2_TR(0x40596a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40596d:{NFSU2_TR(0x40596d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L405975;}}
}
B40596f:L40596f:{c.instructions+=1;NFSU2_TR(0x40596f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B405975:L405975:{c.instructions+=4;NFSU2_TR(0x405975);
{u32 ea_=u32(u32(7881868u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40597b:{NFSU2_TR(0x40597b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40597f:{NFSU2_TR(0x40597f);
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
B405982:{NFSU2_TR(0x405982);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405990:L405990:{c.instructions+=12;NFSU2_TR(0x405990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B405993:{NFSU2_TR(0x405993);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405994:{NFSU2_TR(0x405994);
__builtin_memmove((R+24),(R+4),4);
}
B405996:{NFSU2_TR(0x405996);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40599d:{NFSU2_TR(0x40599d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4059a1:{NFSU2_TR(0x4059a1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4059a5:{NFSU2_TR(0x4059a5);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4059ab:{NFSU2_TR(0x4059ab);
{u32 ea_=u32(u32(7881880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4059b1:{NFSU2_TR(0x4059b1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4059b3:{NFSU2_TR(0x4059b3);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4059b9:{NFSU2_TR(0x4059b9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4059bd:{NFSU2_TR(0x4059bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4059c2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4059c2:L4059c2:{c.instructions+=6;NFSU2_TR(0x4059c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4059c6:{NFSU2_TR(0x4059c6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4059ca:{NFSU2_TR(0x4059ca);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4059ce:{NFSU2_TR(0x4059ce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4059d0:{NFSU2_TR(0x4059d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4059d3:{NFSU2_TR(0x4059d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4059db;}}
}
B4059d5:L4059d5:{c.instructions+=1;NFSU2_TR(0x4059d5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4059db:L4059db:{c.instructions+=14;NFSU2_TR(0x4059db);
{u32 ea_=u32(u32(7881868u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4059e1:{NFSU2_TR(0x4059e1);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4059e3:{NFSU2_TR(0x4059e3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4059e7:{NFSU2_TR(0x4059e7);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4059e9:{NFSU2_TR(0x4059e9);
{u32 ea_=u32(u32(7879272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4059ef:{NFSU2_TR(0x4059ef);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4059f3:{NFSU2_TR(0x4059f3);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4059f9:{NFSU2_TR(0x4059f9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4059fd:{NFSU2_TR(0x4059fd);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4059ff:{NFSU2_TR(0x4059ff);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B405a03:{NFSU2_TR(0x405a03);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B405a07:{NFSU2_TR(0x405a07);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405a09:{NFSU2_TR(0x405a09);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B405a0c:{NFSU2_TR(0x405a0c);
if(r1(R+518)){{goto L405a14;}}
}
B405a0e:L405a0e:{c.instructions+=2;NFSU2_TR(0x405a0e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B405a10:{NFSU2_TR(0x405a10);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405a14:L405a14:{c.instructions+=5;NFSU2_TR(0x405a14);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405a18:{NFSU2_TR(0x405a18);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B405a1a:{NFSU2_TR(0x405a1a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405a1c:{NFSU2_TR(0x405a1c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B405a1f:{NFSU2_TR(0x405a1f);
if(r1(R+514)){{goto L405a27;}}
}
B405a21:L405a21:{c.instructions+=2;NFSU2_TR(0x405a21);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B405a23:{NFSU2_TR(0x405a23);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405a27:L405a27:{c.instructions+=8;NFSU2_TR(0x405a27);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B405a29:{NFSU2_TR(0x405a29);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B405a2d:{NFSU2_TR(0x405a2d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B405a2f:{NFSU2_TR(0x405a2f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405a33:{NFSU2_TR(0x405a33);
{u32 ea_=u32(u32(7881888u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B405a39:{NFSU2_TR(0x405a39);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405a3b:{NFSU2_TR(0x405a3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B405a3e:{NFSU2_TR(0x405a3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L405a76;}}
}
B405a40:L405a40:{c.instructions+=6;NFSU2_TR(0x405a40);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405a44:{NFSU2_TR(0x405a44);
{u32 ea_=u32(u32(7881884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405a4a:{NFSU2_TR(0x405a4a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B405a4e:{NFSU2_TR(0x405a4e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405a50:{NFSU2_TR(0x405a50);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B405a53:{NFSU2_TR(0x405a53);
if(r1(R+514)){{goto L405a5d;}}
}
B405a55:L405a55:{c.instructions+=2;NFSU2_TR(0x405a55);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B405a57:{NFSU2_TR(0x405a57);
{u32 ea_=u32(u32(7881884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405a5d:L405a5d:{c.instructions+=2;NFSU2_TR(0x405a5d);
{u32 ea_=u32(u32(7881276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B405a63:{NFSU2_TR(0x405a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405a68ull));
TAIL_STATIC(0x75bed4u,75b);
}
B405a68:L405a68:{c.instructions+=4;NFSU2_TR(0x405a68);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B405a6f:{NFSU2_TR(0x405a6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B405a70:{NFSU2_TR(0x405a70);
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
B405a73:{NFSU2_TR(0x405a73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405a76:L405a76:{c.instructions+=2;NFSU2_TR(0x405a76);
{u32 ea_=u32(u32(7881888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405a7c:{NFSU2_TR(0x405a7c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x405a5du);}goto L405a5d;}
}
B405a80:L405a80:{c.instructions+=6;NFSU2_TR(0x405a80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405a81:{NFSU2_TR(0x405a81);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B405a85:{NFSU2_TR(0x405a85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405a86:{NFSU2_TR(0x405a86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405a87:{NFSU2_TR(0x405a87);
__builtin_memmove((R+28),(R+4),4);
}
B405a89:{NFSU2_TR(0x405a89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405a8eull));
TAIL_STATIC(0x5eb860u,5eb);
}
B405a8e:L405a8e:{c.instructions+=4;NFSU2_TR(0x405a8e);
u8 U[4];
w4(U+0,u32(0x7844a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405a93:{NFSU2_TR(0x405a93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405a95:{NFSU2_TR(0x405a95);
__builtin_memmove((R+4),(R+24),4);
}
B405a97:{NFSU2_TR(0x405a97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405a9cull));
TAIL_STATIC(0x578ce0u,578);
}
B405a9c:L405a9c:{c.instructions+=7;NFSU2_TR(0x405a9c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405a9e:{NFSU2_TR(0x405a9e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405aa0:{NFSU2_TR(0x405aa0);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405aa2:{NFSU2_TR(0x405aa2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x224ull))));
__builtin_memmove((R+0),(U+0),4);
}
B405aa8:{NFSU2_TR(0x405aa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405aa9:{NFSU2_TR(0x405aa9);
__builtin_memmove((R+4),(R+24),4);
}
B405aab:{NFSU2_TR(0x405aab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405ab0ull));
TAIL_STATIC(0x571640u,571);
}
B405ab0:L405ab0:{c.instructions+=4;NFSU2_TR(0x405ab0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x22cull))));
__builtin_memmove((R+4),(U+0),4);
}
B405ab6:{NFSU2_TR(0x405ab6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405ab7:{NFSU2_TR(0x405ab7);
__builtin_memmove((R+4),(R+24),4);
}
B405ab9:{NFSU2_TR(0x405ab9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405abeull));
TAIL_STATIC(0x571770u,571);
}
B405abe:L405abe:{c.instructions+=4;NFSU2_TR(0x405abe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x230ull))));
__builtin_memmove((R+8),(U+0),4);
}
B405ac4:{NFSU2_TR(0x405ac4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405ac5:{NFSU2_TR(0x405ac5);
__builtin_memmove((R+4),(R+24),4);
}
B405ac7:{NFSU2_TR(0x405ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405accull));
TAIL_STATIC(0x571770u,571);
}
B405acc:L405acc:{c.instructions+=4;NFSU2_TR(0x405acc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x234ull))));
__builtin_memmove((R+0),(U+0),4);
}
B405ad2:{NFSU2_TR(0x405ad2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405ad3:{NFSU2_TR(0x405ad3);
__builtin_memmove((R+4),(R+24),4);
}
B405ad5:{NFSU2_TR(0x405ad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405adaull));
TAIL_STATIC(0x571770u,571);
}
B405ada:L405ada:{c.instructions+=4;NFSU2_TR(0x405ada);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x238ull))));
__builtin_memmove((R+4),(U+0),4);
}
B405ae0:{NFSU2_TR(0x405ae0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405ae1:{NFSU2_TR(0x405ae1);
__builtin_memmove((R+4),(R+24),4);
}
B405ae3:{NFSU2_TR(0x405ae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405ae8ull));
TAIL_STATIC(0x571770u,571);
}
B405ae8:L405ae8:{c.instructions+=7;NFSU2_TR(0x405ae8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405aea:{NFSU2_TR(0x405aea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405aec:{NFSU2_TR(0x405aec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405aee:{NFSU2_TR(0x405aee);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x23cull))));
}
B405af4:{NFSU2_TR(0x405af4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405af5:{NFSU2_TR(0x405af5);
__builtin_memmove((R+4),(R+24),4);
}
B405af7:{NFSU2_TR(0x405af7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405afcull));
TAIL_STATIC(0x571640u,571);
}
B405afc:L405afc:{c.instructions+=2;NFSU2_TR(0x405afc);
__builtin_memmove((R+4),(R+24),4);
}
B405afe:{NFSU2_TR(0x405afe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405b03ull));
TAIL_STATIC(0x578d90u,578);
}
B405b03:L405b03:{c.instructions+=3;NFSU2_TR(0x405b03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B405b04:{NFSU2_TR(0x405b04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B405b05:{NFSU2_TR(0x405b05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405b10:L405b10:{c.instructions+=3;NFSU2_TR(0x405b10);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B405b14:{NFSU2_TR(0x405b14);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B405b1a:{NFSU2_TR(0x405b1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405b20:L405b20:{c.instructions+=2;NFSU2_TR(0x405b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405b26:{NFSU2_TR(0x405b26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405b30:L405b30:{c.instructions+=2;NFSU2_TR(0x405b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405b36:{NFSU2_TR(0x405b36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405b40:L405b40:{c.instructions+=3;NFSU2_TR(0x405b40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405b44:{NFSU2_TR(0x405b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405b4a:{NFSU2_TR(0x405b4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405b50:L405b50:{c.instructions+=3;NFSU2_TR(0x405b50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405b54:{NFSU2_TR(0x405b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405b5a:{NFSU2_TR(0x405b5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405b60:L405b60:{c.instructions+=7;NFSU2_TR(0x405b60);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405b64:{NFSU2_TR(0x405b64);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405b68:{NFSU2_TR(0x405b68);
{u32 ea_=u32(u32(7881916u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B405b6e:{NFSU2_TR(0x405b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405b74:{NFSU2_TR(0x405b74);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405b76:{NFSU2_TR(0x405b76);
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
B405b79:{NFSU2_TR(0x405b79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L405b85;}}
}
B405b7b:L405b7b:{c.instructions+=1;NFSU2_TR(0x405b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22cull))));
w4(U+4,u32(0x41fa55d4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B405b85:L405b85:{c.instructions+=1;NFSU2_TR(0x405b85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405b90:L405b90:{c.instructions+=3;NFSU2_TR(0x405b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405b96:{NFSU2_TR(0x405b96);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B405b9a:{NFSU2_TR(0x405b9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405ba0:L405ba0:{c.instructions+=2;NFSU2_TR(0x405ba0);
{u32 ea_=u32(r4(R+4)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405ba6:{NFSU2_TR(0x405ba6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405bb0:L405bb0:{c.instructions+=2;NFSU2_TR(0x405bb0);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405bb6:{NFSU2_TR(0x405bb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405bc0:L405bc0:{c.instructions+=2;NFSU2_TR(0x405bc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x224ull))));
__builtin_memmove((R+0),(U+0),4);
}
B405bc6:{NFSU2_TR(0x405bc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405bd0:L405bd0:{c.instructions+=2;NFSU2_TR(0x405bd0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))^u32(r2(R+0))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B405bd3:{NFSU2_TR(0x405bd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405be0:L405be0:{c.instructions+=5;NFSU2_TR(0x405be0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405be1:{NFSU2_TR(0x405be1);
__builtin_memmove((R+24),(R+4),4);
}
B405be3:{NFSU2_TR(0x405be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x470ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405be9:{NFSU2_TR(0x405be9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x470ull))));
__builtin_memmove((R+4),(U+0),4);
}
B405bef:{NFSU2_TR(0x405bef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405bf2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B405bf2:L405bf2:{c.instructions+=3;NFSU2_TR(0x405bf2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x460ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B405bf8:{NFSU2_TR(0x405bf8);
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
B405bfa:{NFSU2_TR(0x405bfa);
if(r1(R+518)){{goto L405c57;}}
}
B405bfc:L405bfc:{c.instructions+=4;NFSU2_TR(0x405bfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B405bfe:{NFSU2_TR(0x405bfe);
u8 U[4];
w4(U+0,u32(0xb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c03:{NFSU2_TR(0x405c03);
__builtin_memmove((R+4),(R+24),4);
}
B405c05:{NFSU2_TR(0x405c05);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405c08ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B405c08:L405c08:{c.instructions+=2;NFSU2_TR(0x405c08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c09:{NFSU2_TR(0x405c09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405c0eull));
TAIL_STATIC(0x57c330u,57c);
}
B405c0e:L405c0e:{c.instructions+=5;NFSU2_TR(0x405c0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B405c10:{NFSU2_TR(0x405c10);
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
B405c13:{NFSU2_TR(0x405c13);
u8 U[4];
w4(U+0,u32(0xb9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c18:{NFSU2_TR(0x405c18);
__builtin_memmove((R+4),(R+24),4);
}
B405c1a:{NFSU2_TR(0x405c1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405c1dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B405c1d:L405c1d:{c.instructions+=2;NFSU2_TR(0x405c1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c1e:{NFSU2_TR(0x405c1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405c23ull));
TAIL_STATIC(0x57c330u,57c);
}
B405c23:L405c23:{c.instructions+=5;NFSU2_TR(0x405c23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B405c25:{NFSU2_TR(0x405c25);
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
B405c28:{NFSU2_TR(0x405c28);
u8 U[4];
w4(U+0,u32(0xbaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c2d:{NFSU2_TR(0x405c2d);
__builtin_memmove((R+4),(R+24),4);
}
B405c2f:{NFSU2_TR(0x405c2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405c32ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B405c32:L405c32:{c.instructions+=2;NFSU2_TR(0x405c32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c33:{NFSU2_TR(0x405c33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405c38ull));
TAIL_STATIC(0x57c330u,57c);
}
B405c38:L405c38:{c.instructions+=5;NFSU2_TR(0x405c38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B405c3a:{NFSU2_TR(0x405c3a);
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
B405c3d:{NFSU2_TR(0x405c3d);
u8 U[4];
w4(U+0,u32(0xbbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c42:{NFSU2_TR(0x405c42);
__builtin_memmove((R+4),(R+24),4);
}
B405c44:{NFSU2_TR(0x405c44);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405c47ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B405c47:L405c47:{c.instructions+=2;NFSU2_TR(0x405c47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c48:{NFSU2_TR(0x405c48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405c4dull));
TAIL_STATIC(0x57c330u,57c);
}
B405c4d:L405c4d:{c.instructions+=2;NFSU2_TR(0x405c4d);
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
B405c50:{NFSU2_TR(0x405c50);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x460ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B405c57:L405c57:{c.instructions+=2;NFSU2_TR(0x405c57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B405c58:{NFSU2_TR(0x405c58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405c60:L405c60:{c.instructions+=16;NFSU2_TR(0x405c60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c62:{NFSU2_TR(0x405c62);
u8 U[4];
w4(U+0,u32(0x77133bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c67:{NFSU2_TR(0x405c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405c6d:{NFSU2_TR(0x405c6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c6e:{NFSU2_TR(0x405c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405c75:{NFSU2_TR(0x405c75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c76:{NFSU2_TR(0x405c76);
__builtin_memmove((R+0),gp(0x783ad4),4);
}
B405c7b:{NFSU2_TR(0x405c7b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c7c:{NFSU2_TR(0x405c7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c7d:{NFSU2_TR(0x405c7d);
__builtin_memmove((R+24),(R+4),4);
}
B405c7f:{NFSU2_TR(0x405c7f);
__builtin_memmove((R+4),gp(0x783ad8),4);
}
B405c85:{NFSU2_TR(0x405c85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c86:{NFSU2_TR(0x405c86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c87:{NFSU2_TR(0x405c87);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B405c8a:{NFSU2_TR(0x405c8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405c8e:{NFSU2_TR(0x405c8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405c93ull));
TAIL_STATIC(0x579f80u,579);
}
B405c93:L405c93:{c.instructions+=8;NFSU2_TR(0x405c93);
__builtin_memmove((R+8),gp(0x783ad4),4);
}
B405c99:{NFSU2_TR(0x405c99);
__builtin_memmove((R+0),gp(0x783adc),4);
}
B405c9e:{NFSU2_TR(0x405c9e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405c9f:{NFSU2_TR(0x405c9f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B405ca1:{NFSU2_TR(0x405ca1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405ca2:{NFSU2_TR(0x405ca2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B405ca5:{NFSU2_TR(0x405ca5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405ca9:{NFSU2_TR(0x405ca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405caeull));
TAIL_STATIC(0x579f80u,579);
}
B405cae:L405cae:{c.instructions+=16;NFSU2_TR(0x405cae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405cb2:{NFSU2_TR(0x405cb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B405cb4:{NFSU2_TR(0x405cb4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405cb8:{NFSU2_TR(0x405cb8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B405cbc:{NFSU2_TR(0x405cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405cc2:{NFSU2_TR(0x405cc2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B405cc5:{NFSU2_TR(0x405cc5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B405cc8:{NFSU2_TR(0x405cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
w4(U+4,u32(0x42340000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B405cd2:{NFSU2_TR(0x405cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B405cd9:{NFSU2_TR(0x405cd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x40e00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B405ce0:{NFSU2_TR(0x405ce0);
__builtin_memmove((R+0),(R+24),4);
}
B405ce2:{NFSU2_TR(0x405ce2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B405ce3:{NFSU2_TR(0x405ce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B405ce4:{NFSU2_TR(0x405ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405ceb:{NFSU2_TR(0x405ceb);
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
B405cee:{NFSU2_TR(0x405cee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405d00:L405d00:{c.instructions+=12;NFSU2_TR(0x405d00);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d02:{NFSU2_TR(0x405d02);
u8 U[4];
w4(U+0,u32(0x77133bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d07:{NFSU2_TR(0x405d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405d0d:{NFSU2_TR(0x405d0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d0e:{NFSU2_TR(0x405d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405d15:{NFSU2_TR(0x405d15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d16:{NFSU2_TR(0x405d16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d17:{NFSU2_TR(0x405d17);
__builtin_memmove((R+24),(R+4),4);
}
B405d19:{NFSU2_TR(0x405d19);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405d1d:{NFSU2_TR(0x405d1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B405d20:{NFSU2_TR(0x405d20);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B405d28:{NFSU2_TR(0x405d28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405d2dull));
TAIL_STATIC(0x576a60u,576);
}
B405d2d:L405d2d:{c.instructions+=3;NFSU2_TR(0x405d2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B405d30:{NFSU2_TR(0x405d30);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B405d38:{NFSU2_TR(0x405d38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405d3dull));
TAIL_STATIC(0x576a60u,576);
}
B405d3d:L405d3d:{c.instructions+=5;NFSU2_TR(0x405d3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405d41:{NFSU2_TR(0x405d41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B405d42:{NFSU2_TR(0x405d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405d49:{NFSU2_TR(0x405d49);
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
B405d4c:{NFSU2_TR(0x405d4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405d50:L405d50:{c.instructions+=8;NFSU2_TR(0x405d50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d51:{NFSU2_TR(0x405d51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B405d55:{NFSU2_TR(0x405d55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d56:{NFSU2_TR(0x405d56);
u8 U[4];
w4(U+0,u32(0x7844c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d5b:{NFSU2_TR(0x405d5b);
__builtin_memmove((R+28),(R+4),4);
}
B405d5d:{NFSU2_TR(0x405d5d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d5f:{NFSU2_TR(0x405d5f);
__builtin_memmove((R+4),(R+24),4);
}
B405d61:{NFSU2_TR(0x405d61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405d66ull));
TAIL_STATIC(0x578ce0u,578);
}
B405d66:L405d66:{c.instructions+=4;NFSU2_TR(0x405d66);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B405d69:{NFSU2_TR(0x405d69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d6a:{NFSU2_TR(0x405d6a);
__builtin_memmove((R+4),(R+24),4);
}
B405d6c:{NFSU2_TR(0x405d6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405d71ull));
TAIL_STATIC(0x571710u,571);
}
B405d71:L405d71:{c.instructions+=4;NFSU2_TR(0x405d71);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B405d77:{NFSU2_TR(0x405d77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d78:{NFSU2_TR(0x405d78);
__builtin_memmove((R+4),(R+24),4);
}
B405d7a:{NFSU2_TR(0x405d7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405d7full));
TAIL_STATIC(0x571770u,571);
}
B405d7f:L405d7f:{c.instructions+=4;NFSU2_TR(0x405d7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((R+8),(U+0),4);
}
B405d85:{NFSU2_TR(0x405d85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d86:{NFSU2_TR(0x405d86);
__builtin_memmove((R+4),(R+24),4);
}
B405d88:{NFSU2_TR(0x405d88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405d8dull));
TAIL_STATIC(0x571770u,571);
}
B405d8d:L405d8d:{c.instructions+=7;NFSU2_TR(0x405d8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d8f:{NFSU2_TR(0x405d8f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d91:{NFSU2_TR(0x405d91);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d93:{NFSU2_TR(0x405d93);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B405d96:{NFSU2_TR(0x405d96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d97:{NFSU2_TR(0x405d97);
__builtin_memmove((R+4),(R+24),4);
}
B405d99:{NFSU2_TR(0x405d99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405d9eull));
TAIL_STATIC(0x571640u,571);
}
B405d9e:L405d9e:{c.instructions+=3;NFSU2_TR(0x405d9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405d9f:{NFSU2_TR(0x405d9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B405da2:{NFSU2_TR(0x405da2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405da7ull));
TAIL_STATIC(0x57cbe0u,57c);
}
B405da7:L405da7:{c.instructions+=3;NFSU2_TR(0x405da7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405da8:{NFSU2_TR(0x405da8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B405dab:{NFSU2_TR(0x405dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405db0ull));
TAIL_STATIC(0x57cbe0u,57c);
}
B405db0:L405db0:{c.instructions+=2;NFSU2_TR(0x405db0);
__builtin_memmove((R+4),(R+24),4);
}
B405db2:{NFSU2_TR(0x405db2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405db7ull));
TAIL_STATIC(0x578d90u,578);
}
B405db7:L405db7:{c.instructions+=3;NFSU2_TR(0x405db7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B405db8:{NFSU2_TR(0x405db8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B405db9:{NFSU2_TR(0x405db9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B405dc0:L405dc0:{c.instructions+=10;NFSU2_TR(0x405dc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B405dc3:{NFSU2_TR(0x405dc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405dc4:{NFSU2_TR(0x405dc4);
__builtin_memmove((R+24),(R+4),4);
}
B405dc6:{NFSU2_TR(0x405dc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B405dc8:{NFSU2_TR(0x405dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405dce:{NFSU2_TR(0x405dce);
__builtin_memmove((R+8),(R+4),4);
}
B405dd0:{NFSU2_TR(0x405dd0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405dd4:{NFSU2_TR(0x405dd4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405dd5:{NFSU2_TR(0x405dd5);
w4(R+4,u32(0x7e9ed8ull));
}
B405dda:{NFSU2_TR(0x405dda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405ddfull));
TAIL_STATIC(0x5764d0u,576);
}
B405ddf:L405ddf:{c.instructions+=15;NFSU2_TR(0x405ddf);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B405de3:{NFSU2_TR(0x405de3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B405de5:{NFSU2_TR(0x405de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405de8:{NFSU2_TR(0x405de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B405dee:{NFSU2_TR(0x405dee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405df4:{NFSU2_TR(0x405df4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405df8:{NFSU2_TR(0x405df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B405dfe:{NFSU2_TR(0x405dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405e04:{NFSU2_TR(0x405e04);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405e08:{NFSU2_TR(0x405e08);
__builtin_memmove((R+8),(R+4),4);
}
B405e0a:{NFSU2_TR(0x405e0a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405e0e:{NFSU2_TR(0x405e0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405e0f:{NFSU2_TR(0x405e0f);
w4(R+4,u32(0x7e9f14ull));
}
B405e14:{NFSU2_TR(0x405e14);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405e18:{NFSU2_TR(0x405e18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405e1dull));
TAIL_STATIC(0x5764d0u,576);
}
B405e1d:L405e1d:{c.instructions+=19;NFSU2_TR(0x405e1d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405e21:{NFSU2_TR(0x405e21);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B405e27:{NFSU2_TR(0x405e27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405e28:{NFSU2_TR(0x405e28);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405e2c:{NFSU2_TR(0x405e2c);
w4(R+4,u32(0x7e9f00ull));
}
B405e31:{NFSU2_TR(0x405e31);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B405e35:{NFSU2_TR(0x405e35);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B405e3b:{NFSU2_TR(0x405e3b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B405e3d:{NFSU2_TR(0x405e3d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B405e43:{NFSU2_TR(0x405e43);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B405e49:{NFSU2_TR(0x405e49);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B405e4b:{NFSU2_TR(0x405e4b);
{u32 ea_=u32(u32(7879392u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B405e51:{NFSU2_TR(0x405e51);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B405e57:{NFSU2_TR(0x405e57);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B405e5b:{NFSU2_TR(0x405e5b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B405e5f:{NFSU2_TR(0x405e5f);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405e62:{NFSU2_TR(0x405e62);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B405e64:{NFSU2_TR(0x405e64);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B405e67:{NFSU2_TR(0x405e67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405e6cull));
TAIL_STATIC(0x5764d0u,576);
}
B405e6c:L405e6c:{c.instructions+=5;NFSU2_TR(0x405e6c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B405e70:{NFSU2_TR(0x405e70);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B405e75:{NFSU2_TR(0x405e75);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B405e77:{NFSU2_TR(0x405e77);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B405e7b:{NFSU2_TR(0x405e7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L405f40;}}
}
B405e81:L405e81:{c.instructions+=3;NFSU2_TR(0x405e81);
__builtin_memmove((R+0),gp(0x890104),4);
}
B405e86:{NFSU2_TR(0x405e86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B405e88:{NFSU2_TR(0x405e88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L405f40;}}
}
B405e8e:L405e8e:{c.instructions+=5;NFSU2_TR(0x405e8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B405e90:{NFSU2_TR(0x405e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405e93:{NFSU2_TR(0x405e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405e99:{NFSU2_TR(0x405e99);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B405e9b:{NFSU2_TR(0x405e9b);
if(r1(R+518)){{goto L405f40;}}
}
B405ea1:L405ea1:{c.instructions+=2;NFSU2_TR(0x405ea1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B405ea6:{NFSU2_TR(0x405ea6);
if(r1(R+518)){{goto L405f40;}}
}
B405eac:L405eac:{c.instructions+=10;NFSU2_TR(0x405eac);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B405eb2:{NFSU2_TR(0x405eb2);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B405eb4:{NFSU2_TR(0x405eb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405eb8:{NFSU2_TR(0x405eb8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B405ebc:{NFSU2_TR(0x405ebc);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B405ec2:{NFSU2_TR(0x405ec2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B405ec6:{NFSU2_TR(0x405ec6);
{u32 ea_=u32(u32(7879416u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B405ecc:{NFSU2_TR(0x405ecc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405ece:{NFSU2_TR(0x405ece);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B405ed1:{NFSU2_TR(0x405ed1);
if(r1(R+514)){{goto L405f40;}}
}
B405ed3:L405ed3:{c.instructions+=5;NFSU2_TR(0x405ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B405ed9:{NFSU2_TR(0x405ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405edc:{NFSU2_TR(0x405edc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B405edf:{NFSU2_TR(0x405edf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B405ee3:{NFSU2_TR(0x405ee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405ee8ull));
TAIL_STATIC(0x5b5930u,5b5);
}
B405ee8:L405ee8:{c.instructions+=7;NFSU2_TR(0x405ee8);
{u32 ea_=u32(u32(7881944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B405eee:{NFSU2_TR(0x405eee);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B405ef2:{NFSU2_TR(0x405ef2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405ef8:{NFSU2_TR(0x405ef8);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B405efa:{NFSU2_TR(0x405efa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405efc:{NFSU2_TR(0x405efc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B405eff:{NFSU2_TR(0x405eff);
if(r1(R+514)){{goto L405f0d;}}
}
B405f01:L405f01:{c.instructions+=3;NFSU2_TR(0x405f01);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B405f03:{NFSU2_TR(0x405f03);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B405f0b:{NFSU2_TR(0x405f0b);
{goto L405f11;}
}
B405f0d:L405f0d:{c.instructions+=1;NFSU2_TR(0x405f0d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B405f11:L405f11:{c.instructions+=4;NFSU2_TR(0x405f11);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B405f15:{NFSU2_TR(0x405f15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B405f16:{NFSU2_TR(0x405f16);
w4(R+4,u32(0x81e5b0ull));
}
B405f1b:{NFSU2_TR(0x405f1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405f20ull));
TAIL_STATIC(0x576790u,576);
}
B405f20:L405f20:{c.instructions+=9;NFSU2_TR(0x405f20);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405f26:{NFSU2_TR(0x405f26);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B405f2a:{NFSU2_TR(0x405f2a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405f30:{NFSU2_TR(0x405f30);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B405f32:{NFSU2_TR(0x405f32);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B405f34:{NFSU2_TR(0x405f34);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B405f36:{NFSU2_TR(0x405f36);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B405f3a:{NFSU2_TR(0x405f3a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B405f3e:{NFSU2_TR(0x405f3e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B405f40:L405f40:{c.instructions+=3;NFSU2_TR(0x405f40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B405f42:{NFSU2_TR(0x405f42);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B405f45:{NFSU2_TR(0x405f45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x405f4aull));
TAIL_STATIC(0x59fa10u,59f);
}
B405f4a:L405f4a:{c.instructions+=29;NFSU2_TR(0x405f4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B405f4c:{NFSU2_TR(0x405f4c);
{u32 ea_=u32(u32(7881292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B405f52:{NFSU2_TR(0x405f52);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B405f55:{NFSU2_TR(0x405f55);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B405f57:{NFSU2_TR(0x405f57);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B405f59:{NFSU2_TR(0x405f59);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B405f5d:{NFSU2_TR(0x405f5d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405f60:{NFSU2_TR(0x405f60);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405f63:{NFSU2_TR(0x405f63);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405f65:{NFSU2_TR(0x405f65);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B405f67:{NFSU2_TR(0x405f67);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B405f69:{NFSU2_TR(0x405f69);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B405f6b:{NFSU2_TR(0x405f6b);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B405f6d:{NFSU2_TR(0x405f6d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B405f6f:{NFSU2_TR(0x405f6f);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B405f71:{NFSU2_TR(0x405f71);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B405f73:{NFSU2_TR(0x405f73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B405f75:{NFSU2_TR(0x405f75);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B405f77:{NFSU2_TR(0x405f77);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B405f79:{NFSU2_TR(0x405f79);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B405f7b:{NFSU2_TR(0x405f7b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B405f7d:{NFSU2_TR(0x405f7d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B405f81:{NFSU2_TR(0x405f81);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405f85:{NFSU2_TR(0x405f85);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B405f87:{NFSU2_TR(0x405f87);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B405f8d:{NFSU2_TR(0x405f8d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405f8f:{NFSU2_TR(0x405f8f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B405f91:{NFSU2_TR(0x405f91);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B405f94:{NFSU2_TR(0x405f94);
if(r1(R+514)){{goto L405f9a;}}
}
B405f96:L405f96:{c.instructions+=2;NFSU2_TR(0x405f96);
w1(R+4,u8(0x1ull));
}
B405f98:{NFSU2_TR(0x405f98);
{goto L405f9c;}
}
B405f9a:L405f9a:{c.instructions+=1;NFSU2_TR(0x405f9a);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B405f9c:L405f9c:{c.instructions+=4;NFSU2_TR(0x405f9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B405f9f:{NFSU2_TR(0x405f9f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405fa3:{NFSU2_TR(0x405fa3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B405fa5:{NFSU2_TR(0x405fa5);
if(r1(R+518)){{goto L405fcb;}}
}
B405fa7:L405fa7:{c.instructions+=4;NFSU2_TR(0x405fa7);
{u32 ea_=u32(u32(8294708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B405fad:{NFSU2_TR(0x405fad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405faf:{NFSU2_TR(0x405faf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B405fb2:{NFSU2_TR(0x405fb2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L405fc5;}}
}
B405fb4:L405fb4:{c.instructions+=5;NFSU2_TR(0x405fb4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405fb8:{NFSU2_TR(0x405fb8);
{u32 ea_=u32(u32(8506256u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B405fbe:{NFSU2_TR(0x405fbe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405fc0:{NFSU2_TR(0x405fc0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B405fc3:{NFSU2_TR(0x405fc3);
if(r1(R+514)){{goto L405fed;}}
}
B405fc5:L405fc5:{c.instructions+=2;NFSU2_TR(0x405fc5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B405fc9:{NFSU2_TR(0x405fc9);
{goto L405fed;}
}
B405fcb:L405fcb:{c.instructions+=4;NFSU2_TR(0x405fcb);
{u32 ea_=u32(u32(8294704u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B405fd1:{NFSU2_TR(0x405fd1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405fd3:{NFSU2_TR(0x405fd3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B405fd6:{NFSU2_TR(0x405fd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L405fed;}}
}
B405fd8:L405fd8:{c.instructions+=5;NFSU2_TR(0x405fd8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B405fdc:{NFSU2_TR(0x405fdc);
{u32 ea_=u32(u32(8294712u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B405fe2:{NFSU2_TR(0x405fe2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B405fe4:{NFSU2_TR(0x405fe4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B405fe7:{NFSU2_TR(0x405fe7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L405fed;}}
}
B405fe9:L405fe9:{c.instructions+=1;NFSU2_TR(0x405fe9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B405fed:L405fed:{c.instructions+=2;NFSU2_TR(0x405fed);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B405fef:{NFSU2_TR(0x405fef);
if(r1(R+518)){TAIL_STATIC(0x406077u,406);}
}
B405ff5:L405ff5:{c.instructions+=3;NFSU2_TR(0x405ff5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B405ff8:{NFSU2_TR(0x405ff8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B405ffa:{NFSU2_TR(0x405ffa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x40600bu,406);}
}
B405ffc:L405ffc:{c.instructions+=1;NFSU2_TR(0x405ffc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x406000u,406);
}
XIT:NFSU2_TR_EXIT(0x405,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
