#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_686(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x685,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x685,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_685(u8* __restrict R,Cpu& c);
u32 page_685(Cpu& c){return body_685(c.regs.data(),c);}
__attribute__((noinline)) u32 body_685(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x685000:goto L685000;
case 0x685002:c.instructions+=2;goto B685002;
case 0x685007:c.instructions+=1;goto B685007;
case 0x68500c:goto L68500c;
case 0x68500d:c.instructions+=9;goto B68500d;
case 0x685010:c.instructions+=8;goto B685010;
case 0x685011:c.instructions+=7;goto B685011;
case 0x685014:c.instructions+=6;goto B685014;
case 0x685015:c.instructions+=5;goto B685015;
case 0x685017:c.instructions+=4;goto B685017;
case 0x68501c:c.instructions+=3;goto B68501c;
case 0x68501d:c.instructions+=2;goto B68501d;
case 0x68501f:c.instructions+=1;goto B68501f;
case 0x685026:goto L685026;
case 0x685028:goto L685028;
case 0x68502a:goto L68502a;
case 0x68502c:c.instructions+=4;goto B68502c;
case 0x68502f:c.instructions+=3;goto B68502f;
case 0x685030:c.instructions+=2;goto B685030;
case 0x685035:c.instructions+=1;goto B685035;
case 0x68503a:goto L68503a;
case 0x68503d:c.instructions+=1;goto B68503d;
case 0x68503f:goto L68503f;
case 0x685044:c.instructions+=2;goto B685044;
case 0x685047:c.instructions+=1;goto B685047;
case 0x685049:goto L685049;
case 0x68504c:c.instructions+=5;goto B68504c;
case 0x685051:c.instructions+=4;goto B685051;
case 0x685052:c.instructions+=3;goto B685052;
case 0x685053:c.instructions+=2;goto B685053;
case 0x685055:c.instructions+=1;goto B685055;
case 0x68505a:goto L68505a;
case 0x68505d:goto L68505d;
case 0x685062:c.instructions+=2;goto B685062;
case 0x685065:c.instructions+=1;goto B685065;
case 0x685067:goto L685067;
case 0x68506a:c.instructions+=5;goto B68506a;
case 0x68506f:c.instructions+=4;goto B68506f;
case 0x685070:c.instructions+=3;goto B685070;
case 0x685071:c.instructions+=2;goto B685071;
case 0x685073:c.instructions+=1;goto B685073;
case 0x685078:goto L685078;
case 0x68507b:c.instructions+=1;goto B68507b;
case 0x68507d:goto L68507d;
case 0x685080:c.instructions+=6;goto B685080;
case 0x685081:c.instructions+=5;goto B685081;
case 0x685084:c.instructions+=4;goto B685084;
case 0x68508a:c.instructions+=3;goto B68508a;
case 0x68508f:c.instructions+=2;goto B68508f;
case 0x685090:c.instructions+=1;goto B685090;
case 0x685095:goto L685095;
case 0x68509b:c.instructions+=8;goto B68509b;
case 0x68509c:c.instructions+=7;goto B68509c;
case 0x6850a1:c.instructions+=6;goto B6850a1;
case 0x6850a3:c.instructions+=5;goto B6850a3;
case 0x6850a6:c.instructions+=4;goto B6850a6;
case 0x6850a7:c.instructions+=3;goto B6850a7;
case 0x6850a9:c.instructions+=2;goto B6850a9;
case 0x6850b0:c.instructions+=1;goto B6850b0;
case 0x6850b5:goto L6850b5;
case 0x6850b8:goto L6850b8;
case 0x6850b9:c.instructions+=4;goto B6850b9;
case 0x6850ba:c.instructions+=3;goto B6850ba;
case 0x6850bb:c.instructions+=2;goto B6850bb;
case 0x6850bc:c.instructions+=1;goto B6850bc;
case 0x6850bd:goto L6850bd;
case 0x6850bf:c.instructions+=6;goto B6850bf;
case 0x6850c0:c.instructions+=5;goto B6850c0;
case 0x6850c2:c.instructions+=4;goto B6850c2;
case 0x6850c5:c.instructions+=3;goto B6850c5;
case 0x6850ca:c.instructions+=2;goto B6850ca;
case 0x6850cb:c.instructions+=1;goto B6850cb;
case 0x6850cd:goto L6850cd;
case 0x6850ce:c.instructions+=1;goto B6850ce;
case 0x6850d0:goto L6850d0;
case 0x6850d3:c.instructions+=1;goto B6850d3;
case 0x6850d5:goto L6850d5;
case 0x6850d6:c.instructions+=1;goto B6850d6;
case 0x6850d8:goto L6850d8;
case 0x6850db:c.instructions+=9;goto B6850db;
case 0x6850dc:c.instructions+=8;goto B6850dc;
case 0x6850df:c.instructions+=7;goto B6850df;
case 0x6850e2:c.instructions+=6;goto B6850e2;
case 0x6850e7:c.instructions+=5;goto B6850e7;
case 0x6850ec:c.instructions+=4;goto B6850ec;
case 0x6850ed:c.instructions+=3;goto B6850ed;
case 0x6850f0:c.instructions+=2;goto B6850f0;
case 0x6850f2:c.instructions+=1;goto B6850f2;
case 0x6850f7:goto L6850f7;
case 0x6850fa:c.instructions+=3;goto B6850fa;
case 0x685101:c.instructions+=2;goto B685101;
case 0x685102:c.instructions+=1;goto B685102;
case 0x685104:goto L685104;
case 0x685107:c.instructions+=8;goto B685107;
case 0x68510a:c.instructions+=7;goto B68510a;
case 0x68510f:c.instructions+=6;goto B68510f;
case 0x685114:c.instructions+=5;goto B685114;
case 0x685115:c.instructions+=4;goto B685115;
case 0x685118:c.instructions+=3;goto B685118;
case 0x68511b:c.instructions+=2;goto B68511b;
case 0x68511d:c.instructions+=1;goto B68511d;
case 0x685122:goto L685122;
case 0x685125:goto L685125;
case 0x685127:c.instructions+=2;goto B685127;
case 0x685128:c.instructions+=1;goto B685128;
case 0x68512b:goto L68512b;
case 0x68512d:c.instructions+=7;goto B68512d;
case 0x68512e:c.instructions+=6;goto B68512e;
case 0x685130:c.instructions+=5;goto B685130;
case 0x685133:c.instructions+=4;goto B685133;
case 0x685135:c.instructions+=3;goto B685135;
case 0x685136:c.instructions+=2;goto B685136;
case 0x685138:c.instructions+=1;goto B685138;
case 0x68513a:goto L68513a;
case 0x68513b:c.instructions+=4;goto B68513b;
case 0x68513d:c.instructions+=3;goto B68513d;
case 0x68513e:c.instructions+=2;goto B68513e;
case 0x685141:c.instructions+=1;goto B685141;
case 0x685143:goto L685143;
case 0x685148:c.instructions+=5;goto B685148;
case 0x685149:c.instructions+=4;goto B685149;
case 0x68514c:c.instructions+=3;goto B68514c;
case 0x68514d:c.instructions+=2;goto B68514d;
case 0x68514f:c.instructions+=1;goto B68514f;
case 0x685154:goto L685154;
case 0x685157:c.instructions+=1;goto B685157;
case 0x68515a:goto L68515a;
case 0x68515d:c.instructions+=2;goto B68515d;
case 0x68515f:c.instructions+=1;goto B68515f;
case 0x685160:goto L685160;
case 0x685161:c.instructions+=2;goto B685161;
case 0x685162:c.instructions+=1;goto B685162;
case 0x685165:goto L685165;
case 0x685167:c.instructions+=30;goto B685167;
case 0x685168:c.instructions+=29;goto B685168;
case 0x68516a:c.instructions+=28;goto B68516a;
case 0x68516d:c.instructions+=27;goto B68516d;
case 0x685170:c.instructions+=26;goto B685170;
case 0x685173:c.instructions+=25;goto B685173;
case 0x685174:c.instructions+=24;goto B685174;
case 0x685176:c.instructions+=23;goto B685176;
case 0x685177:c.instructions+=22;goto B685177;
case 0x685179:c.instructions+=21;goto B685179;
case 0x68517b:c.instructions+=20;goto B68517b;
case 0x68517e:c.instructions+=19;goto B68517e;
case 0x685180:c.instructions+=18;goto B685180;
case 0x685181:c.instructions+=17;goto B685181;
case 0x685184:c.instructions+=16;goto B685184;
case 0x68518b:c.instructions+=15;goto B68518b;
case 0x68518e:c.instructions+=14;goto B68518e;
case 0x685191:c.instructions+=13;goto B685191;
case 0x685194:c.instructions+=12;goto B685194;
case 0x68519b:c.instructions+=11;goto B68519b;
case 0x68519e:c.instructions+=10;goto B68519e;
case 0x6851a1:c.instructions+=9;goto B6851a1;
case 0x6851a4:c.instructions+=8;goto B6851a4;
case 0x6851a7:c.instructions+=7;goto B6851a7;
case 0x6851aa:c.instructions+=6;goto B6851aa;
case 0x6851ad:c.instructions+=5;goto B6851ad;
case 0x6851b0:c.instructions+=4;goto B6851b0;
case 0x6851b3:c.instructions+=3;goto B6851b3;
case 0x6851b6:c.instructions+=2;goto B6851b6;
case 0x6851b9:c.instructions+=1;goto B6851b9;
case 0x6851bf:goto L6851bf;
case 0x6851c2:c.instructions+=3;goto B6851c2;
case 0x6851c4:c.instructions+=2;goto B6851c4;
case 0x6851c5:c.instructions+=1;goto B6851c5;
case 0x6851c7:goto L6851c7;
case 0x6851c9:c.instructions+=1;goto B6851c9;
case 0x6851cb:goto L6851cb;
case 0x6851cc:c.instructions+=1;goto B6851cc;
case 0x6851cf:goto L6851cf;
case 0x6851d1:c.instructions+=2;goto B6851d1;
case 0x6851d3:c.instructions+=1;goto B6851d3;
case 0x6851d5:goto L6851d5;
case 0x6851d8:c.instructions+=4;goto B6851d8;
case 0x6851da:c.instructions+=3;goto B6851da;
case 0x6851dc:c.instructions+=2;goto B6851dc;
case 0x6851df:c.instructions+=1;goto B6851df;
case 0x6851e5:goto L6851e5;
case 0x6851e7:c.instructions+=3;goto B6851e7;
case 0x6851e9:c.instructions+=2;goto B6851e9;
case 0x6851ec:c.instructions+=1;goto B6851ec;
case 0x6851ef:goto L6851ef;
case 0x6851f1:goto L6851f1;
case 0x6851f3:c.instructions+=1;goto B6851f3;
case 0x6851f5:goto L6851f5;
case 0x6851f7:goto L6851f7;
case 0x6851fc:c.instructions+=3;goto B6851fc;
case 0x6851ff:c.instructions+=2;goto B6851ff;
case 0x685202:c.instructions+=1;goto B685202;
case 0x685204:goto L685204;
case 0x685207:goto L685207;
case 0x68520a:c.instructions+=4;goto B68520a;
case 0x68520c:c.instructions+=3;goto B68520c;
case 0x68520f:c.instructions+=2;goto B68520f;
case 0x685212:c.instructions+=1;goto B685212;
case 0x685218:goto L685218;
case 0x68521a:c.instructions+=1;goto B68521a;
case 0x68521c:goto L68521c;
case 0x685222:c.instructions+=1;goto B685222;
case 0x685225:goto L685225;
case 0x685227:c.instructions+=3;goto B685227;
case 0x685229:c.instructions+=2;goto B685229;
case 0x68522b:c.instructions+=1;goto B68522b;
case 0x68522d:goto L68522d;
case 0x68522f:c.instructions+=1;goto B68522f;
case 0x685231:goto L685231;
case 0x685234:c.instructions+=3;goto B685234;
case 0x685236:c.instructions+=2;goto B685236;
case 0x685239:c.instructions+=1;goto B685239;
case 0x68523b:goto L68523b;
case 0x68523c:c.instructions+=5;goto B68523c;
case 0x68523d:c.instructions+=4;goto B68523d;
case 0x68523e:c.instructions+=3;goto B68523e;
case 0x68523f:c.instructions+=2;goto B68523f;
case 0x685241:c.instructions+=1;goto B685241;
case 0x685243:goto L685243;
case 0x685245:c.instructions+=2;goto B685245;
case 0x685247:c.instructions+=1;goto B685247;
case 0x685249:goto L685249;
case 0x68524b:c.instructions+=2;goto B68524b;
case 0x68524e:c.instructions+=1;goto B68524e;
case 0x685250:goto L685250;
case 0x685252:c.instructions+=1;goto B685252;
case 0x685254:goto L685254;
case 0x685257:c.instructions+=3;goto B685257;
case 0x685258:c.instructions+=2;goto B685258;
case 0x68525e:c.instructions+=1;goto B68525e;
case 0x685260:goto L685260;
case 0x685263:c.instructions+=1;goto B685263;
case 0x685269:goto L685269;
case 0x68526c:c.instructions+=8;goto B68526c;
case 0x68526f:c.instructions+=7;goto B68526f;
case 0x685271:c.instructions+=6;goto B685271;
case 0x685274:c.instructions+=5;goto B685274;
case 0x685276:c.instructions+=4;goto B685276;
case 0x685278:c.instructions+=3;goto B685278;
case 0x68527f:c.instructions+=2;goto B68527f;
case 0x685282:c.instructions+=1;goto B685282;
case 0x685284:goto L685284;
case 0x685286:goto L685286;
case 0x685288:c.instructions+=1;goto B685288;
case 0x68528a:goto L68528a;
case 0x68528b:c.instructions+=1;goto B68528b;
case 0x68528d:goto L68528d;
case 0x68528e:c.instructions+=1;goto B68528e;
case 0x685290:goto L685290;
case 0x685291:c.instructions+=1;goto B685291;
case 0x685293:goto L685293;
case 0x685294:c.instructions+=1;goto B685294;
case 0x685296:goto L685296;
case 0x685297:c.instructions+=1;goto B685297;
case 0x68529d:goto L68529d;
case 0x6852a4:c.instructions+=1;goto B6852a4;
case 0x6852a6:goto L6852a6;
case 0x6852ad:c.instructions+=1;goto B6852ad;
case 0x6852af:goto L6852af;
case 0x6852b6:c.instructions+=1;goto B6852b6;
case 0x6852b8:goto L6852b8;
case 0x6852bf:c.instructions+=1;goto B6852bf;
case 0x6852c1:goto L6852c1;
case 0x6852c8:c.instructions+=1;goto B6852c8;
case 0x6852ca:goto L6852ca;
case 0x6852d1:c.instructions+=1;goto B6852d1;
case 0x6852d3:goto L6852d3;
case 0x6852da:c.instructions+=1;goto B6852da;
case 0x6852dc:goto L6852dc;
case 0x6852df:c.instructions+=1;goto B6852df;
case 0x6852e1:goto L6852e1;
case 0x6852e4:c.instructions+=1;goto B6852e4;
case 0x6852e6:goto L6852e6;
case 0x6852e9:c.instructions+=1;goto B6852e9;
case 0x6852eb:goto L6852eb;
case 0x6852ee:c.instructions+=1;goto B6852ee;
case 0x6852f0:goto L6852f0;
case 0x6852f3:c.instructions+=1;goto B6852f3;
case 0x6852f5:goto L6852f5;
case 0x6852fc:c.instructions+=1;goto B6852fc;
case 0x685301:goto L685301;
case 0x685308:c.instructions+=1;goto B685308;
case 0x68530a:goto L68530a;
case 0x685311:c.instructions+=1;goto B685311;
case 0x685313:goto L685313;
case 0x68531a:c.instructions+=1;goto B68531a;
case 0x68531c:goto L68531c;
case 0x685323:goto L685323;
case 0x685325:c.instructions+=7;goto B685325;
case 0x685328:c.instructions+=6;goto B685328;
case 0x68532a:c.instructions+=5;goto B68532a;
case 0x68532d:c.instructions+=4;goto B68532d;
case 0x685334:c.instructions+=3;goto B685334;
case 0x685337:c.instructions+=2;goto B685337;
case 0x68533a:c.instructions+=1;goto B68533a;
case 0x68533c:goto L68533c;
case 0x68533f:c.instructions+=1;goto B68533f;
case 0x685341:goto L685341;
case 0x685348:c.instructions+=1;goto B685348;
case 0x68534a:goto L68534a;
case 0x685351:c.instructions+=1;goto B685351;
case 0x685353:goto L685353;
case 0x685355:c.instructions+=3;goto B685355;
case 0x685356:c.instructions+=2;goto B685356;
case 0x685359:c.instructions+=1;goto B685359;
case 0x68535b:goto L68535b;
case 0x68535d:c.instructions+=1;goto B68535d;
case 0x68535e:goto L68535e;
case 0x685361:c.instructions+=1;goto B685361;
case 0x685363:goto L685363;
case 0x685366:c.instructions+=1;goto B685366;
case 0x685368:goto L685368;
case 0x68536b:c.instructions+=1;goto B68536b;
case 0x68536d:goto L68536d;
case 0x685370:c.instructions+=1;goto B685370;
case 0x685372:goto L685372;
case 0x685379:c.instructions+=1;goto B685379;
case 0x68537b:goto L68537b;
case 0x685382:c.instructions+=1;goto B685382;
case 0x685384:goto L685384;
case 0x685387:c.instructions+=1;goto B685387;
case 0x685389:goto L685389;
case 0x68538c:goto L68538c;
case 0x68538f:c.instructions+=1;goto B68538f;
case 0x685391:goto L685391;
case 0x685394:c.instructions+=1;goto B685394;
case 0x685396:goto L685396;
case 0x685399:c.instructions+=1;goto B685399;
case 0x68539b:goto L68539b;
case 0x68539e:goto L68539e;
case 0x6853a1:c.instructions+=1;goto B6853a1;
case 0x6853a3:goto L6853a3;
case 0x6853a6:c.instructions+=1;goto B6853a6;
case 0x6853a8:goto L6853a8;
case 0x6853af:c.instructions+=1;goto B6853af;
case 0x6853b1:goto L6853b1;
case 0x6853b8:c.instructions+=1;goto B6853b8;
case 0x6853ba:goto L6853ba;
case 0x6853bd:goto L6853bd;
case 0x6853c0:c.instructions+=1;goto B6853c0;
case 0x6853c2:goto L6853c2;
case 0x6853c5:c.instructions+=1;goto B6853c5;
case 0x6853c7:goto L6853c7;
case 0x6853ca:c.instructions+=1;goto B6853ca;
case 0x6853cc:goto L6853cc;
case 0x6853cf:c.instructions+=1;goto B6853cf;
case 0x6853d1:goto L6853d1;
case 0x6853d4:c.instructions+=1;goto B6853d4;
case 0x6853d6:goto L6853d6;
case 0x6853d9:goto L6853d9;
case 0x6853dc:c.instructions+=1;goto B6853dc;
case 0x6853de:goto L6853de;
case 0x6853e1:c.instructions+=1;goto B6853e1;
case 0x6853e3:goto L6853e3;
case 0x6853e6:c.instructions+=1;goto B6853e6;
case 0x6853e8:goto L6853e8;
case 0x6853eb:goto L6853eb;
case 0x6853ed:c.instructions+=1;goto B6853ed;
case 0x6853ef:goto L6853ef;
case 0x6853f2:c.instructions+=1;goto B6853f2;
case 0x6853f4:goto L6853f4;
case 0x6853f7:c.instructions+=1;goto B6853f7;
case 0x6853f9:goto L6853f9;
case 0x6853fc:goto L6853fc;
case 0x6853ff:c.instructions+=1;goto B6853ff;
case 0x685401:goto L685401;
case 0x685404:c.instructions+=1;goto B685404;
case 0x685406:goto L685406;
case 0x685409:c.instructions+=1;goto B685409;
case 0x68540b:goto L68540b;
case 0x68540e:goto L68540e;
case 0x685415:c.instructions+=1;goto B685415;
case 0x68541a:goto L68541a;
case 0x68541d:c.instructions+=1;goto B68541d;
case 0x68541f:goto L68541f;
case 0x685421:c.instructions+=4;goto B685421;
case 0x685426:c.instructions+=3;goto B685426;
case 0x685429:c.instructions+=2;goto B685429;
case 0x68542a:c.instructions+=1;goto B68542a;
case 0x68542c:goto L68542c;
case 0x68542e:goto L68542e;
case 0x685430:goto L685430;
case 0x685434:c.instructions+=3;goto B685434;
case 0x685437:c.instructions+=2;goto B685437;
case 0x68543a:c.instructions+=1;goto B68543a;
case 0x68543f:goto L68543f;
case 0x685442:c.instructions+=1;goto B685442;
case 0x685444:goto L685444;
case 0x685446:c.instructions+=4;goto B685446;
case 0x68544b:c.instructions+=3;goto B68544b;
case 0x68544e:c.instructions+=2;goto B68544e;
case 0x68544f:c.instructions+=1;goto B68544f;
case 0x685451:goto L685451;
case 0x685453:goto L685453;
case 0x685455:goto L685455;
case 0x685459:c.instructions+=2;goto B685459;
case 0x68545c:c.instructions+=1;goto B68545c;
case 0x685461:goto L685461;
case 0x685464:c.instructions+=1;goto B685464;
case 0x68546a:goto L68546a;
case 0x68546f:c.instructions+=3;goto B68546f;
case 0x685472:c.instructions+=2;goto B685472;
case 0x685474:c.instructions+=1;goto B685474;
case 0x685476:goto L685476;
case 0x685478:goto L685478;
case 0x68547a:goto L68547a;
case 0x685481:c.instructions+=1;goto B685481;
case 0x685483:goto L685483;
case 0x685488:c.instructions+=3;goto B685488;
case 0x68548b:c.instructions+=2;goto B68548b;
case 0x68548d:c.instructions+=1;goto B68548d;
case 0x68548f:goto L68548f;
case 0x685491:goto L685491;
case 0x685493:goto L685493;
case 0x68549a:c.instructions+=1;goto B68549a;
case 0x68549c:goto L68549c;
case 0x6854a1:c.instructions+=3;goto B6854a1;
case 0x6854a4:c.instructions+=2;goto B6854a4;
case 0x6854a6:c.instructions+=1;goto B6854a6;
case 0x6854a8:goto L6854a8;
case 0x6854aa:goto L6854aa;
case 0x6854ac:goto L6854ac;
case 0x6854b3:c.instructions+=1;goto B6854b3;
case 0x6854b5:goto L6854b5;
case 0x6854ba:c.instructions+=3;goto B6854ba;
case 0x6854bd:c.instructions+=2;goto B6854bd;
case 0x6854bf:c.instructions+=1;goto B6854bf;
case 0x6854c1:goto L6854c1;
case 0x6854c3:goto L6854c3;
case 0x6854c5:goto L6854c5;
case 0x6854cc:c.instructions+=1;goto B6854cc;
case 0x6854ce:goto L6854ce;
case 0x6854d3:c.instructions+=3;goto B6854d3;
case 0x6854d6:c.instructions+=2;goto B6854d6;
case 0x6854d8:c.instructions+=1;goto B6854d8;
case 0x6854da:goto L6854da;
case 0x6854dc:goto L6854dc;
case 0x6854de:goto L6854de;
case 0x6854e5:c.instructions+=1;goto B6854e5;
case 0x6854e7:goto L6854e7;
case 0x6854ec:c.instructions+=3;goto B6854ec;
case 0x6854ef:c.instructions+=2;goto B6854ef;
case 0x6854f1:c.instructions+=1;goto B6854f1;
case 0x6854f3:goto L6854f3;
case 0x6854f5:goto L6854f5;
case 0x6854fb:goto L6854fb;
case 0x685502:goto L685502;
case 0x685505:c.instructions+=1;goto B685505;
case 0x68550a:goto L68550a;
case 0x68550d:c.instructions+=1;goto B68550d;
case 0x68550f:goto L68550f;
case 0x685511:c.instructions+=4;goto B685511;
case 0x685516:c.instructions+=3;goto B685516;
case 0x685519:c.instructions+=2;goto B685519;
case 0x68551b:c.instructions+=1;goto B68551b;
case 0x68551d:goto L68551d;
case 0x68551f:goto L68551f;
case 0x685521:goto L685521;
case 0x685526:c.instructions+=1;goto B685526;
case 0x685528:goto L685528;
case 0x68552a:c.instructions+=4;goto B68552a;
case 0x68552f:c.instructions+=3;goto B68552f;
case 0x685532:c.instructions+=2;goto B685532;
case 0x685533:c.instructions+=1;goto B685533;
case 0x685535:goto L685535;
case 0x685537:goto L685537;
case 0x685539:goto L685539;
case 0x68553e:c.instructions+=1;goto B68553e;
case 0x685540:goto L685540;
case 0x685542:c.instructions+=4;goto B685542;
case 0x685547:c.instructions+=3;goto B685547;
case 0x68554a:c.instructions+=2;goto B68554a;
case 0x68554b:c.instructions+=1;goto B68554b;
case 0x68554d:goto L68554d;
case 0x68554f:goto L68554f;
case 0x685551:goto L685551;
case 0x685556:goto L685556;
case 0x685559:c.instructions+=4;goto B685559;
case 0x68555b:c.instructions+=3;goto B68555b;
case 0x68555d:c.instructions+=2;goto B68555d;
case 0x685560:c.instructions+=1;goto B685560;
case 0x685562:goto L685562;
case 0x685565:c.instructions+=2;goto B685565;
case 0x685568:c.instructions+=1;goto B685568;
case 0x68556d:goto L68556d;
case 0x685570:c.instructions+=1;goto B685570;
case 0x685572:goto L685572;
case 0x685577:c.instructions+=3;goto B685577;
case 0x68557a:c.instructions+=2;goto B68557a;
case 0x68557c:c.instructions+=1;goto B68557c;
case 0x68557e:goto L68557e;
case 0x685580:goto L685580;
case 0x685582:goto L685582;
case 0x685586:c.instructions+=2;goto B685586;
case 0x685589:c.instructions+=1;goto B685589;
case 0x68558e:goto L68558e;
case 0x685591:c.instructions+=1;goto B685591;
case 0x685597:goto L685597;
case 0x68559b:c.instructions+=2;goto B68559b;
case 0x68559e:c.instructions+=1;goto B68559e;
case 0x6855a0:goto L6855a0;
case 0x6855a3:c.instructions+=2;goto B6855a3;
case 0x6855a4:c.instructions+=1;goto B6855a4;
case 0x6855a9:goto L6855a9;
case 0x6855ab:c.instructions+=2;goto B6855ab;
case 0x6855ac:c.instructions+=1;goto B6855ac;
case 0x6855ae:goto L6855ae;
case 0x6855af:c.instructions+=2;goto B6855af;
case 0x6855b2:c.instructions+=1;goto B6855b2;
case 0x6855b4:goto L6855b4;
case 0x6855b7:c.instructions+=1;goto B6855b7;
case 0x6855b9:goto L6855b9;
case 0x6855ba:c.instructions+=1;goto B6855ba;
case 0x6855bf:goto L6855bf;
case 0x6855c0:c.instructions+=2;goto B6855c0;
case 0x6855c2:c.instructions+=1;goto B6855c2;
case 0x6855c4:goto L6855c4;
case 0x6855c6:goto L6855c6;
case 0x6855c9:c.instructions+=1;goto B6855c9;
case 0x6855cf:goto L6855cf;
case 0x6855d1:c.instructions+=4;goto B6855d1;
case 0x6855d3:c.instructions+=3;goto B6855d3;
case 0x6855d6:c.instructions+=2;goto B6855d6;
case 0x6855d9:c.instructions+=1;goto B6855d9;
case 0x6855db:goto L6855db;
case 0x6855de:c.instructions+=1;goto B6855de;
case 0x6855df:goto L6855df;
case 0x6855e1:c.instructions+=2;goto B6855e1;
case 0x6855e3:c.instructions+=1;goto B6855e3;
case 0x6855e5:goto L6855e5;
case 0x6855e8:c.instructions+=2;goto B6855e8;
case 0x6855e9:c.instructions+=1;goto B6855e9;
case 0x6855ee:goto L6855ee;
case 0x6855f0:c.instructions+=2;goto B6855f0;
case 0x6855f1:c.instructions+=1;goto B6855f1;
case 0x6855f3:goto L6855f3;
case 0x6855f4:c.instructions+=3;goto B6855f4;
case 0x6855f6:c.instructions+=2;goto B6855f6;
case 0x6855f8:c.instructions+=1;goto B6855f8;
case 0x6855fa:goto L6855fa;
case 0x6855fd:c.instructions+=1;goto B6855fd;
case 0x685603:goto L685603;
case 0x685605:c.instructions+=4;goto B685605;
case 0x68560a:c.instructions+=3;goto B68560a;
case 0x68560d:c.instructions+=2;goto B68560d;
case 0x68560e:c.instructions+=1;goto B68560e;
case 0x685610:goto L685610;
case 0x685612:goto L685612;
case 0x685614:goto L685614;
case 0x685616:c.instructions+=1;goto B685616;
case 0x68561c:goto L68561c;
case 0x68561f:c.instructions+=6;goto B68561f;
case 0x685622:c.instructions+=5;goto B685622;
case 0x685625:c.instructions+=4;goto B685625;
case 0x685627:c.instructions+=3;goto B685627;
case 0x68562a:c.instructions+=2;goto B68562a;
case 0x68562e:c.instructions+=1;goto B68562e;
case 0x685633:goto L685633;
case 0x685635:c.instructions+=4;goto B685635;
case 0x68563a:c.instructions+=3;goto B68563a;
case 0x68563d:c.instructions+=2;goto B68563d;
case 0x68563e:c.instructions+=1;goto B68563e;
case 0x685640:goto L685640;
case 0x685642:goto L685642;
case 0x685644:goto L685644;
case 0x685645:c.instructions+=1;goto B685645;
case 0x685647:goto L685647;
case 0x685649:c.instructions+=4;goto B685649;
case 0x68564e:c.instructions+=3;goto B68564e;
case 0x685651:c.instructions+=2;goto B685651;
case 0x685652:c.instructions+=1;goto B685652;
case 0x685654:goto L685654;
case 0x685656:goto L685656;
case 0x685658:goto L685658;
case 0x68565a:c.instructions+=1;goto B68565a;
case 0x68565f:goto L68565f;
case 0x685661:c.instructions+=4;goto B685661;
case 0x685666:c.instructions+=3;goto B685666;
case 0x685669:c.instructions+=2;goto B685669;
case 0x68566a:c.instructions+=1;goto B68566a;
case 0x68566c:goto L68566c;
case 0x68566e:goto L68566e;
case 0x685670:goto L685670;
case 0x685672:c.instructions+=1;goto B685672;
case 0x685677:goto L685677;
case 0x685679:c.instructions+=5;goto B685679;
case 0x68567a:c.instructions+=4;goto B68567a;
case 0x68567f:c.instructions+=3;goto B68567f;
case 0x685682:c.instructions+=2;goto B685682;
case 0x685684:c.instructions+=1;goto B685684;
case 0x685686:goto L685686;
case 0x685688:goto L685688;
case 0x68568a:goto L68568a;
case 0x68568c:c.instructions+=1;goto B68568c;
case 0x685691:goto L685691;
case 0x685693:c.instructions+=4;goto B685693;
case 0x685698:c.instructions+=3;goto B685698;
case 0x68569b:c.instructions+=2;goto B68569b;
case 0x68569c:c.instructions+=1;goto B68569c;
case 0x68569e:goto L68569e;
case 0x6856a0:goto L6856a0;
case 0x6856a2:goto L6856a2;
case 0x6856a4:c.instructions+=1;goto B6856a4;
case 0x6856a9:goto L6856a9;
case 0x6856ab:c.instructions+=4;goto B6856ab;
case 0x6856b0:c.instructions+=3;goto B6856b0;
case 0x6856b3:c.instructions+=2;goto B6856b3;
case 0x6856b4:c.instructions+=1;goto B6856b4;
case 0x6856b6:goto L6856b6;
case 0x6856b8:goto L6856b8;
case 0x6856be:goto L6856be;
case 0x6856c0:c.instructions+=4;goto B6856c0;
case 0x6856c5:c.instructions+=3;goto B6856c5;
case 0x6856c8:c.instructions+=2;goto B6856c8;
case 0x6856c9:c.instructions+=1;goto B6856c9;
case 0x6856cb:goto L6856cb;
case 0x6856cd:goto L6856cd;
case 0x6856cf:goto L6856cf;
case 0x6856d1:c.instructions+=1;goto B6856d1;
case 0x6856d3:goto L6856d3;
case 0x6856d5:c.instructions+=4;goto B6856d5;
case 0x6856da:c.instructions+=3;goto B6856da;
case 0x6856dd:c.instructions+=2;goto B6856dd;
case 0x6856de:c.instructions+=1;goto B6856de;
case 0x6856e0:goto L6856e0;
case 0x6856e2:goto L6856e2;
case 0x6856e4:goto L6856e4;
case 0x6856e6:c.instructions+=1;goto B6856e6;
case 0x6856e8:goto L6856e8;
case 0x6856ea:c.instructions+=5;goto B6856ea;
case 0x6856eb:c.instructions+=4;goto B6856eb;
case 0x6856f0:c.instructions+=3;goto B6856f0;
case 0x6856f3:c.instructions+=2;goto B6856f3;
case 0x6856f5:c.instructions+=1;goto B6856f5;
case 0x6856f7:goto L6856f7;
case 0x6856f9:goto L6856f9;
case 0x6856fb:goto L6856fb;
case 0x6856fd:c.instructions+=1;goto B6856fd;
case 0x6856ff:goto L6856ff;
case 0x685701:c.instructions+=4;goto B685701;
case 0x685706:c.instructions+=3;goto B685706;
case 0x685709:c.instructions+=2;goto B685709;
case 0x68570a:c.instructions+=1;goto B68570a;
case 0x68570c:goto L68570c;
case 0x68570e:goto L68570e;
case 0x685714:goto L685714;
case 0x685716:c.instructions+=4;goto B685716;
case 0x68571b:c.instructions+=3;goto B68571b;
case 0x68571e:c.instructions+=2;goto B68571e;
case 0x68571f:c.instructions+=1;goto B68571f;
case 0x685721:goto L685721;
case 0x685723:goto L685723;
case 0x685725:goto L685725;
case 0x685727:c.instructions+=1;goto B685727;
case 0x685729:goto L685729;
case 0x68572b:c.instructions+=4;goto B68572b;
case 0x685730:c.instructions+=3;goto B685730;
case 0x685733:c.instructions+=2;goto B685733;
case 0x685734:c.instructions+=1;goto B685734;
case 0x685736:goto L685736;
case 0x685738:goto L685738;
case 0x68573a:goto L68573a;
case 0x68573c:c.instructions+=1;goto B68573c;
case 0x68573e:goto L68573e;
case 0x685740:c.instructions+=4;goto B685740;
case 0x685745:c.instructions+=3;goto B685745;
case 0x685748:c.instructions+=2;goto B685748;
case 0x685749:c.instructions+=1;goto B685749;
case 0x68574b:goto L68574b;
case 0x68574d:goto L68574d;
case 0x68574f:goto L68574f;
case 0x685751:goto L685751;
case 0x685752:c.instructions+=1;goto B685752;
case 0x685757:goto L685757;
case 0x68575a:c.instructions+=2;goto B68575a;
case 0x68575d:c.instructions+=1;goto B68575d;
case 0x68575f:goto L68575f;
case 0x685761:c.instructions+=2;goto B685761;
case 0x685764:c.instructions+=1;goto B685764;
case 0x68576a:goto L68576a;
case 0x68576d:c.instructions+=2;goto B68576d;
case 0x685770:c.instructions+=1;goto B685770;
case 0x685772:goto L685772;
case 0x685775:c.instructions+=2;goto B685775;
case 0x685776:c.instructions+=1;goto B685776;
case 0x68577b:goto L68577b;
case 0x68577d:c.instructions+=2;goto B68577d;
case 0x68577e:c.instructions+=1;goto B68577e;
case 0x685780:goto L685780;
case 0x685781:c.instructions+=2;goto B685781;
case 0x685784:c.instructions+=1;goto B685784;
case 0x685786:goto L685786;
case 0x685789:c.instructions+=1;goto B685789;
case 0x68578b:goto L68578b;
case 0x68578c:c.instructions+=1;goto B68578c;
case 0x685791:goto L685791;
case 0x685792:c.instructions+=2;goto B685792;
case 0x685794:c.instructions+=1;goto B685794;
case 0x685796:goto L685796;
case 0x685798:goto L685798;
case 0x68579b:c.instructions+=1;goto B68579b;
case 0x6857a1:goto L6857a1;
case 0x6857a4:c.instructions+=1;goto B6857a4;
case 0x6857a6:goto L6857a6;
case 0x6857a9:c.instructions+=1;goto B6857a9;
case 0x6857aa:goto L6857aa;
case 0x6857ac:c.instructions+=2;goto B6857ac;
case 0x6857ae:c.instructions+=1;goto B6857ae;
case 0x6857b0:goto L6857b0;
case 0x6857b3:c.instructions+=2;goto B6857b3;
case 0x6857b4:c.instructions+=1;goto B6857b4;
case 0x6857b9:goto L6857b9;
case 0x6857bb:c.instructions+=2;goto B6857bb;
case 0x6857bc:c.instructions+=1;goto B6857bc;
case 0x6857be:goto L6857be;
case 0x6857bf:c.instructions+=3;goto B6857bf;
case 0x6857c1:c.instructions+=2;goto B6857c1;
case 0x6857c3:c.instructions+=1;goto B6857c3;
case 0x6857c5:goto L6857c5;
case 0x6857c8:c.instructions+=1;goto B6857c8;
case 0x6857ce:goto L6857ce;
case 0x6857d0:c.instructions+=4;goto B6857d0;
case 0x6857d5:c.instructions+=3;goto B6857d5;
case 0x6857d8:c.instructions+=2;goto B6857d8;
case 0x6857d9:c.instructions+=1;goto B6857d9;
case 0x6857db:goto L6857db;
case 0x6857dd:goto L6857dd;
case 0x6857e3:goto L6857e3;
case 0x6857e5:c.instructions+=4;goto B6857e5;
case 0x6857ea:c.instructions+=3;goto B6857ea;
case 0x6857ed:c.instructions+=2;goto B6857ed;
case 0x6857ee:c.instructions+=1;goto B6857ee;
case 0x6857f0:goto L6857f0;
case 0x6857f2:goto L6857f2;
case 0x6857f4:goto L6857f4;
case 0x6857f5:c.instructions+=1;goto B6857f5;
case 0x6857fa:goto L6857fa;
case 0x6857fc:c.instructions+=4;goto B6857fc;
case 0x685801:c.instructions+=3;goto B685801;
case 0x685804:c.instructions+=2;goto B685804;
case 0x685805:c.instructions+=1;goto B685805;
case 0x685807:goto L685807;
case 0x685809:goto L685809;
case 0x68580b:goto L68580b;
case 0x68580d:c.instructions+=1;goto B68580d;
case 0x685812:goto L685812;
case 0x685814:c.instructions+=4;goto B685814;
case 0x685819:c.instructions+=3;goto B685819;
case 0x68581c:c.instructions+=2;goto B68581c;
case 0x68581d:c.instructions+=1;goto B68581d;
case 0x68581f:goto L68581f;
case 0x685821:goto L685821;
case 0x685823:goto L685823;
case 0x685825:c.instructions+=1;goto B685825;
case 0x68582a:goto L68582a;
case 0x68582c:c.instructions+=4;goto B68582c;
case 0x685831:c.instructions+=3;goto B685831;
case 0x685834:c.instructions+=2;goto B685834;
case 0x685835:c.instructions+=1;goto B685835;
case 0x685837:goto L685837;
case 0x685839:goto L685839;
case 0x68583b:goto L68583b;
case 0x68583d:c.instructions+=1;goto B68583d;
case 0x685842:goto L685842;
case 0x685844:c.instructions+=4;goto B685844;
case 0x685849:c.instructions+=3;goto B685849;
case 0x68584c:c.instructions+=2;goto B68584c;
case 0x68584d:c.instructions+=1;goto B68584d;
case 0x68584f:goto L68584f;
case 0x685851:goto L685851;
case 0x685853:goto L685853;
case 0x685855:c.instructions+=1;goto B685855;
case 0x68585a:goto L68585a;
case 0x68585c:c.instructions+=5;goto B68585c;
case 0x68585d:c.instructions+=4;goto B68585d;
case 0x685862:c.instructions+=3;goto B685862;
case 0x685865:c.instructions+=2;goto B685865;
case 0x685867:c.instructions+=1;goto B685867;
case 0x685869:goto L685869;
case 0x68586b:goto L68586b;
case 0x68586d:goto L68586d;
case 0x68586f:c.instructions+=1;goto B68586f;
case 0x685874:goto L685874;
case 0x685876:c.instructions+=4;goto B685876;
case 0x68587b:c.instructions+=3;goto B68587b;
case 0x68587e:c.instructions+=2;goto B68587e;
case 0x68587f:c.instructions+=1;goto B68587f;
case 0x685881:goto L685881;
case 0x685883:goto L685883;
case 0x685885:goto L685885;
case 0x685887:c.instructions+=1;goto B685887;
case 0x685889:goto L685889;
case 0x68588b:c.instructions+=4;goto B68588b;
case 0x685890:c.instructions+=3;goto B685890;
case 0x685893:c.instructions+=2;goto B685893;
case 0x685894:c.instructions+=1;goto B685894;
case 0x685896:goto L685896;
case 0x685898:goto L685898;
case 0x68589a:goto L68589a;
case 0x68589c:c.instructions+=5;goto B68589c;
case 0x68589d:c.instructions+=4;goto B68589d;
case 0x6858a2:c.instructions+=3;goto B6858a2;
case 0x6858a5:c.instructions+=2;goto B6858a5;
case 0x6858a7:c.instructions+=1;goto B6858a7;
case 0x6858a9:goto L6858a9;
case 0x6858ab:goto L6858ab;
case 0x6858ad:goto L6858ad;
case 0x6858af:c.instructions+=1;goto B6858af;
case 0x6858b1:goto L6858b1;
case 0x6858b3:c.instructions+=4;goto B6858b3;
case 0x6858b8:c.instructions+=3;goto B6858b8;
case 0x6858bb:c.instructions+=2;goto B6858bb;
case 0x6858bc:c.instructions+=1;goto B6858bc;
case 0x6858be:goto L6858be;
case 0x6858c0:goto L6858c0;
case 0x6858c2:goto L6858c2;
case 0x6858c4:c.instructions+=4;goto B6858c4;
case 0x6858c9:c.instructions+=3;goto B6858c9;
case 0x6858cc:c.instructions+=2;goto B6858cc;
case 0x6858cd:c.instructions+=1;goto B6858cd;
case 0x6858cf:goto L6858cf;
case 0x6858d1:goto L6858d1;
case 0x6858d3:goto L6858d3;
case 0x6858d5:c.instructions+=1;goto B6858d5;
case 0x6858d7:goto L6858d7;
case 0x6858d9:c.instructions+=4;goto B6858d9;
case 0x6858de:c.instructions+=3;goto B6858de;
case 0x6858e1:c.instructions+=2;goto B6858e1;
case 0x6858e2:c.instructions+=1;goto B6858e2;
case 0x6858e4:goto L6858e4;
case 0x6858e6:goto L6858e6;
case 0x6858e8:goto L6858e8;
case 0x6858ea:c.instructions+=1;goto B6858ea;
case 0x6858ec:goto L6858ec;
case 0x6858ee:c.instructions+=4;goto B6858ee;
case 0x6858f3:c.instructions+=3;goto B6858f3;
case 0x6858f6:c.instructions+=2;goto B6858f6;
case 0x6858f7:c.instructions+=1;goto B6858f7;
case 0x6858f9:goto L6858f9;
case 0x6858fb:goto L6858fb;
case 0x685901:goto L685901;
case 0x685903:goto L685903;
case 0x685904:goto L685904;
case 0x685907:c.instructions+=5;goto B685907;
case 0x68590a:c.instructions+=4;goto B68590a;
case 0x68590d:c.instructions+=3;goto B68590d;
case 0x68590f:c.instructions+=2;goto B68590f;
case 0x685913:c.instructions+=1;goto B685913;
case 0x685916:goto L685916;
case 0x68591a:c.instructions+=1;goto B68591a;
case 0x68591f:goto L68591f;
case 0x685922:c.instructions+=1;goto B685922;
case 0x685928:goto L685928;
case 0x68592a:c.instructions+=5;goto B68592a;
case 0x68592b:c.instructions+=4;goto B68592b;
case 0x685930:c.instructions+=3;goto B685930;
case 0x685933:c.instructions+=2;goto B685933;
case 0x685935:c.instructions+=1;goto B685935;
case 0x685937:goto L685937;
case 0x685939:goto L685939;
case 0x68593b:goto L68593b;
case 0x685942:c.instructions+=1;goto B685942;
case 0x685944:goto L685944;
case 0x685949:c.instructions+=3;goto B685949;
case 0x68594c:c.instructions+=2;goto B68594c;
case 0x68594e:c.instructions+=1;goto B68594e;
case 0x685950:goto L685950;
case 0x685952:goto L685952;
case 0x685954:goto L685954;
case 0x68595b:c.instructions+=1;goto B68595b;
case 0x68595d:goto L68595d;
case 0x685962:c.instructions+=3;goto B685962;
case 0x685965:c.instructions+=2;goto B685965;
case 0x685967:c.instructions+=1;goto B685967;
case 0x685969:goto L685969;
case 0x68596b:goto L68596b;
case 0x68596d:goto L68596d;
case 0x685970:c.instructions+=1;goto B685970;
case 0x685972:goto L685972;
case 0x685977:c.instructions+=3;goto B685977;
case 0x68597a:c.instructions+=2;goto B68597a;
case 0x68597c:c.instructions+=1;goto B68597c;
case 0x68597e:goto L68597e;
case 0x685980:goto L685980;
case 0x685982:goto L685982;
case 0x685989:c.instructions+=1;goto B685989;
case 0x68598b:goto L68598b;
case 0x685990:c.instructions+=3;goto B685990;
case 0x685993:c.instructions+=2;goto B685993;
case 0x685995:c.instructions+=1;goto B685995;
case 0x685997:goto L685997;
case 0x685999:goto L685999;
case 0x68599b:goto L68599b;
case 0x6859a2:c.instructions+=1;goto B6859a2;
case 0x6859a4:goto L6859a4;
case 0x6859a6:c.instructions+=3;goto B6859a6;
case 0x6859ab:c.instructions+=2;goto B6859ab;
case 0x6859ae:c.instructions+=1;goto B6859ae;
case 0x6859b0:goto L6859b0;
case 0x6859b2:goto L6859b2;
case 0x6859b4:goto L6859b4;
case 0x6859bb:goto L6859bb;
case 0x6859be:goto L6859be;
case 0x6859c0:goto L6859c0;
case 0x6859c3:goto L6859c3;
case 0x6859c6:c.instructions+=2;goto B6859c6;
case 0x6859c9:c.instructions+=1;goto B6859c9;
case 0x6859cf:goto L6859cf;
case 0x6859d2:c.instructions+=2;goto B6859d2;
case 0x6859d5:c.instructions+=1;goto B6859d5;
case 0x6859d7:goto L6859d7;
case 0x6859da:c.instructions+=1;goto B6859da;
case 0x6859dc:goto L6859dc;
case 0x6859df:c.instructions+=2;goto B6859df;
case 0x6859e7:c.instructions+=1;goto B6859e7;
case 0x6859e9:goto L6859e9;
case 0x6859eb:c.instructions+=2;goto B6859eb;
case 0x6859ec:c.instructions+=1;goto B6859ec;
case 0x6859f3:goto L6859f3;
case 0x6859f6:c.instructions+=1;goto B6859f6;
case 0x6859f8:goto L6859f8;
case 0x6859fb:c.instructions+=1;goto B6859fb;
case 0x6859fd:goto L6859fd;
case 0x685a00:c.instructions+=2;goto B685a00;
case 0x685a08:c.instructions+=1;goto B685a08;
case 0x685a0a:goto L685a0a;
case 0x685a0c:c.instructions+=2;goto B685a0c;
case 0x685a0d:c.instructions+=1;goto B685a0d;
case 0x685a14:goto L685a14;
case 0x685a17:c.instructions+=1;goto B685a17;
case 0x685a19:goto L685a19;
case 0x685a1c:c.instructions+=1;goto B685a1c;
case 0x685a1e:goto L685a1e;
case 0x685a21:c.instructions+=1;goto B685a21;
case 0x685a23:goto L685a23;
case 0x685a28:c.instructions+=1;goto B685a28;
case 0x685a2a:goto L685a2a;
case 0x685a2d:c.instructions+=6;goto B685a2d;
case 0x685a30:c.instructions+=5;goto B685a30;
case 0x685a33:c.instructions+=4;goto B685a33;
case 0x685a36:c.instructions+=3;goto B685a36;
case 0x685a39:c.instructions+=2;goto B685a39;
case 0x685a3c:c.instructions+=1;goto B685a3c;
case 0x685a3f:goto L685a3f;
case 0x685a40:c.instructions+=4;goto B685a40;
case 0x685a41:c.instructions+=3;goto B685a41;
case 0x685a42:c.instructions+=2;goto B685a42;
case 0x685a43:c.instructions+=1;goto B685a43;
case 0x685a46:goto L685a46;
case 0x685a48:c.instructions+=11;goto B685a48;
case 0x685a49:c.instructions+=10;goto B685a49;
case 0x685a4b:c.instructions+=9;goto B685a4b;
case 0x685a4c:c.instructions+=8;goto B685a4c;
case 0x685a4d:c.instructions+=7;goto B685a4d;
case 0x685a4e:c.instructions+=6;goto B685a4e;
case 0x685a50:c.instructions+=5;goto B685a50;
case 0x685a53:c.instructions+=4;goto B685a53;
case 0x685a56:c.instructions+=3;goto B685a56;
case 0x685a58:c.instructions+=2;goto B685a58;
case 0x685a5a:c.instructions+=1;goto B685a5a;
case 0x685a60:goto L685a60;
case 0x685a62:c.instructions+=2;goto B685a62;
case 0x685a64:c.instructions+=1;goto B685a64;
case 0x685a6a:goto L685a6a;
case 0x685a6c:goto L685a6c;
case 0x685a6f:c.instructions+=2;goto B685a6f;
case 0x685a72:c.instructions+=1;goto B685a72;
case 0x685a74:goto L685a74;
case 0x685a76:goto L685a76;
case 0x685a79:c.instructions+=1;goto B685a79;
case 0x685a7b:goto L685a7b;
case 0x685a7c:c.instructions+=1;goto B685a7c;
case 0x685a7e:goto L685a7e;
case 0x685a81:c.instructions+=1;goto B685a81;
case 0x685a83:goto L685a83;
case 0x685a86:c.instructions+=1;goto B685a86;
case 0x685a88:goto L685a88;
case 0x685a8a:c.instructions+=1;goto B685a8a;
case 0x685a8f:goto L685a8f;
case 0x685a91:c.instructions+=1;goto B685a91;
case 0x685a93:goto L685a93;
case 0x685a96:c.instructions+=1;goto B685a96;
case 0x685a98:goto L685a98;
case 0x685a99:c.instructions+=4;goto B685a99;
case 0x685a9c:c.instructions+=3;goto B685a9c;
case 0x685a9e:c.instructions+=2;goto B685a9e;
case 0x685aa0:c.instructions+=1;goto B685aa0;
case 0x685aa2:goto L685aa2;
case 0x685aa4:goto L685aa4;
case 0x685aa6:c.instructions+=3;goto B685aa6;
case 0x685aa7:c.instructions+=2;goto B685aa7;
case 0x685aac:c.instructions+=1;goto B685aac;
case 0x685aae:goto L685aae;
case 0x685ab1:c.instructions+=1;goto B685ab1;
case 0x685ab3:goto L685ab3;
case 0x685ab4:c.instructions+=1;goto B685ab4;
case 0x685ab6:goto L685ab6;
case 0x685ab7:c.instructions+=1;goto B685ab7;
case 0x685ab9:goto L685ab9;
case 0x685abb:c.instructions+=3;goto B685abb;
case 0x685abc:c.instructions+=2;goto B685abc;
case 0x685ac1:c.instructions+=1;goto B685ac1;
case 0x685ac3:goto L685ac3;
case 0x685ac5:c.instructions+=3;goto B685ac5;
case 0x685ac6:c.instructions+=2;goto B685ac6;
case 0x685acb:c.instructions+=1;goto B685acb;
case 0x685acd:goto L685acd;
case 0x685ace:c.instructions+=5;goto B685ace;
case 0x685ad3:c.instructions+=4;goto B685ad3;
case 0x685ad8:c.instructions+=3;goto B685ad8;
case 0x685adb:c.instructions+=2;goto B685adb;
case 0x685add:c.instructions+=1;goto B685add;
case 0x685ae2:goto L685ae2;
case 0x685ae5:c.instructions+=3;goto B685ae5;
case 0x685aec:c.instructions+=2;goto B685aec;
case 0x685aee:c.instructions+=1;goto B685aee;
case 0x685af0:goto L685af0;
case 0x685af5:goto L685af5;
case 0x685af6:c.instructions+=3;goto B685af6;
case 0x685af7:c.instructions+=2;goto B685af7;
case 0x685af8:c.instructions+=1;goto B685af8;
case 0x685afb:goto L685afb;
case 0x685afd:c.instructions+=15;goto B685afd;
case 0x685afe:c.instructions+=14;goto B685afe;
case 0x685b00:c.instructions+=13;goto B685b00;
case 0x685b01:c.instructions+=12;goto B685b01;
case 0x685b02:c.instructions+=11;goto B685b02;
case 0x685b05:c.instructions+=10;goto B685b05;
case 0x685b06:c.instructions+=9;goto B685b06;
case 0x685b07:c.instructions+=8;goto B685b07;
case 0x685b0a:c.instructions+=7;goto B685b0a;
case 0x685b0b:c.instructions+=6;goto B685b0b;
case 0x685b0d:c.instructions+=5;goto B685b0d;
case 0x685b0f:c.instructions+=4;goto B685b0f;
case 0x685b11:c.instructions+=3;goto B685b11;
case 0x685b14:c.instructions+=2;goto B685b14;
case 0x685b16:c.instructions+=1;goto B685b16;
case 0x685b1c:goto L685b1c;
case 0x685b1f:c.instructions+=1;goto B685b1f;
case 0x685b25:goto L685b25;
case 0x685b2c:goto L685b2c;
case 0x685b2e:c.instructions+=2;goto B685b2e;
case 0x685b30:c.instructions+=1;goto B685b30;
case 0x685b32:goto L685b32;
case 0x685b35:c.instructions+=2;goto B685b35;
case 0x685b38:c.instructions+=1;goto B685b38;
case 0x685b3a:goto L685b3a;
case 0x685b3c:goto L685b3c;
case 0x685b3f:c.instructions+=1;goto B685b3f;
case 0x685b41:goto L685b41;
case 0x685b42:c.instructions+=1;goto B685b42;
case 0x685b44:goto L685b44;
case 0x685b47:c.instructions+=1;goto B685b47;
case 0x685b49:goto L685b49;
case 0x685b4c:c.instructions+=1;goto B685b4c;
case 0x685b4e:goto L685b4e;
case 0x685b50:goto L685b50;
case 0x685b51:goto L685b51;
case 0x685b54:c.instructions+=6;goto B685b54;
case 0x685b58:c.instructions+=5;goto B685b58;
case 0x685b5a:c.instructions+=4;goto B685b5a;
case 0x685b5c:c.instructions+=3;goto B685b5c;
case 0x685b5f:c.instructions+=2;goto B685b5f;
case 0x685b63:c.instructions+=1;goto B685b63;
case 0x685b65:goto L685b65;
case 0x685b68:c.instructions+=1;goto B685b68;
case 0x685b6a:goto L685b6a;
case 0x685b6b:c.instructions+=5;goto B685b6b;
case 0x685b70:c.instructions+=4;goto B685b70;
case 0x685b75:c.instructions+=3;goto B685b75;
case 0x685b78:c.instructions+=2;goto B685b78;
case 0x685b7a:c.instructions+=1;goto B685b7a;
case 0x685b7f:goto L685b7f;
case 0x685b82:c.instructions+=3;goto B685b82;
case 0x685b89:c.instructions+=2;goto B685b89;
case 0x685b8b:c.instructions+=1;goto B685b8b;
case 0x685b8d:goto L685b8d;
case 0x685b8f:goto L685b8f;
case 0x685b90:c.instructions+=1;goto B685b90;
case 0x685b92:goto L685b92;
case 0x685b95:c.instructions+=1;goto B685b95;
case 0x685b97:goto L685b97;
case 0x685b98:c.instructions+=1;goto B685b98;
case 0x685b9a:goto L685b9a;
case 0x685b9b:c.instructions+=1;goto B685b9b;
case 0x685b9d:goto L685b9d;
case 0x685b9f:c.instructions+=1;goto B685b9f;
case 0x685ba1:goto L685ba1;
case 0x685ba3:c.instructions+=2;goto B685ba3;
case 0x685ba4:c.instructions+=1;goto B685ba4;
case 0x685ba6:goto L685ba6;
case 0x685ba9:c.instructions+=1;goto B685ba9;
case 0x685bab:goto L685bab;
case 0x685bb0:goto L685bb0;
case 0x685bb1:c.instructions+=4;goto B685bb1;
case 0x685bb2:c.instructions+=3;goto B685bb2;
case 0x685bb3:c.instructions+=2;goto B685bb3;
case 0x685bb4:c.instructions+=1;goto B685bb4;
case 0x685bb7:goto L685bb7;
case 0x685bb9:c.instructions+=8;goto B685bb9;
case 0x685bba:c.instructions+=7;goto B685bba;
case 0x685bbc:c.instructions+=6;goto B685bbc;
case 0x685bbd:c.instructions+=5;goto B685bbd;
case 0x685bbf:c.instructions+=4;goto B685bbf;
case 0x685bc0:c.instructions+=3;goto B685bc0;
case 0x685bc3:c.instructions+=2;goto B685bc3;
case 0x685bc5:c.instructions+=1;goto B685bc5;
case 0x685bc7:goto L685bc7;
case 0x685bca:c.instructions+=3;goto B685bca;
case 0x685bcd:c.instructions+=2;goto B685bcd;
case 0x685bcf:c.instructions+=1;goto B685bcf;
case 0x685bd1:goto L685bd1;
case 0x685bd4:c.instructions+=12;goto B685bd4;
case 0x685bd5:c.instructions+=11;goto B685bd5;
case 0x685bd7:c.instructions+=10;goto B685bd7;
case 0x685bd8:c.instructions+=9;goto B685bd8;
case 0x685bdb:c.instructions+=8;goto B685bdb;
case 0x685bde:c.instructions+=7;goto B685bde;
case 0x685bdf:c.instructions+=6;goto B685bdf;
case 0x685be2:c.instructions+=5;goto B685be2;
case 0x685be5:c.instructions+=4;goto B685be5;
case 0x685be7:c.instructions+=3;goto B685be7;
case 0x685bea:c.instructions+=2;goto B685bea;
case 0x685beb:c.instructions+=1;goto B685beb;
case 0x685bee:goto L685bee;
case 0x685bf0:c.instructions+=2;goto B685bf0;
case 0x685bf1:c.instructions+=1;goto B685bf1;
case 0x685bf3:goto L685bf3;
case 0x685bf5:c.instructions+=3;goto B685bf5;
case 0x685bf6:c.instructions+=2;goto B685bf6;
case 0x685bf9:c.instructions+=1;goto B685bf9;
case 0x685bfc:goto L685bfc;
case 0x685bff:c.instructions+=2;goto B685bff;
case 0x685c02:c.instructions+=1;goto B685c02;
case 0x685c04:goto L685c04;
case 0x685c06:goto L685c06;
case 0x685c07:c.instructions+=3;goto B685c07;
case 0x685c08:c.instructions+=2;goto B685c08;
case 0x685c09:c.instructions+=1;goto B685c09;
case 0x685c0c:goto L685c0c;
case 0x685c0e:c.instructions+=12;goto B685c0e;
case 0x685c0f:c.instructions+=11;goto B685c0f;
case 0x685c11:c.instructions+=10;goto B685c11;
case 0x685c12:c.instructions+=9;goto B685c12;
case 0x685c13:c.instructions+=8;goto B685c13;
case 0x685c15:c.instructions+=7;goto B685c15;
case 0x685c18:c.instructions+=6;goto B685c18;
case 0x685c1b:c.instructions+=5;goto B685c1b;
case 0x685c1e:c.instructions+=4;goto B685c1e;
case 0x685c21:c.instructions+=3;goto B685c21;
case 0x685c23:c.instructions+=2;goto B685c23;
case 0x685c24:c.instructions+=1;goto B685c24;
case 0x685c26:goto L685c26;
case 0x685c28:c.instructions+=2;goto B685c28;
case 0x685c2b:c.instructions+=1;goto B685c2b;
case 0x685c2d:goto L685c2d;
case 0x685c34:goto L685c34;
case 0x685c37:c.instructions+=1;goto B685c37;
case 0x685c39:goto L685c39;
case 0x685c3c:c.instructions+=1;goto B685c3c;
case 0x685c3e:goto L685c3e;
case 0x685c41:c.instructions+=4;goto B685c41;
case 0x685c43:c.instructions+=3;goto B685c43;
case 0x685c45:c.instructions+=2;goto B685c45;
case 0x685c48:c.instructions+=1;goto B685c48;
case 0x685c4a:goto L685c4a;
case 0x685c4d:c.instructions+=3;goto B685c4d;
case 0x685c50:c.instructions+=2;goto B685c50;
case 0x685c51:c.instructions+=1;goto B685c51;
case 0x685c56:goto L685c56;
case 0x685c58:c.instructions+=4;goto B685c58;
case 0x685c5a:c.instructions+=3;goto B685c5a;
case 0x685c5b:c.instructions+=2;goto B685c5b;
case 0x685c5e:c.instructions+=1;goto B685c5e;
case 0x685c60:goto L685c60;
case 0x685c65:c.instructions+=1;goto B685c65;
case 0x685c67:goto L685c67;
case 0x685c6a:c.instructions+=5;goto B685c6a;
case 0x685c6d:c.instructions+=4;goto B685c6d;
case 0x685c6f:c.instructions+=3;goto B685c6f;
case 0x685c70:c.instructions+=2;goto B685c70;
case 0x685c73:c.instructions+=1;goto B685c73;
case 0x685c76:goto L685c76;
case 0x685c78:goto L685c78;
case 0x685c7a:c.instructions+=1;goto B685c7a;
case 0x685c7d:goto L685c7d;
case 0x685c7f:goto L685c7f;
case 0x685c82:c.instructions+=1;goto B685c82;
case 0x685c87:goto L685c87;
case 0x685c8a:c.instructions+=5;goto B685c8a;
case 0x685c8d:c.instructions+=4;goto B685c8d;
case 0x685c90:c.instructions+=3;goto B685c90;
case 0x685c91:c.instructions+=2;goto B685c91;
case 0x685c94:c.instructions+=1;goto B685c94;
case 0x685c95:goto L685c95;
case 0x685c97:goto L685c97;
case 0x685c98:c.instructions+=3;goto B685c98;
case 0x685c99:c.instructions+=2;goto B685c99;
case 0x685c9a:c.instructions+=1;goto B685c9a;
case 0x685c9d:goto L685c9d;
case 0x685c9f:c.instructions+=6;goto B685c9f;
case 0x685ca0:c.instructions+=5;goto B685ca0;
case 0x685ca2:c.instructions+=4;goto B685ca2;
case 0x685ca3:c.instructions+=3;goto B685ca3;
case 0x685ca5:c.instructions+=2;goto B685ca5;
case 0x685ca7:c.instructions+=1;goto B685ca7;
case 0x685cac:goto L685cac;
case 0x685cae:c.instructions+=1;goto B685cae;
case 0x685cb0:goto L685cb0;
case 0x685cb3:c.instructions+=5;goto B685cb3;
case 0x685cb6:c.instructions+=4;goto B685cb6;
case 0x685cb9:c.instructions+=3;goto B685cb9;
case 0x685cbc:c.instructions+=2;goto B685cbc;
case 0x685cbf:c.instructions+=1;goto B685cbf;
case 0x685cc1:goto L685cc1;
case 0x685cc2:c.instructions+=2;goto B685cc2;
case 0x685cc3:c.instructions+=1;goto B685cc3;
case 0x685cc6:goto L685cc6;
case 0x685cc8:c.instructions+=18;goto B685cc8;
case 0x685cc9:c.instructions+=17;goto B685cc9;
case 0x685ccb:c.instructions+=16;goto B685ccb;
case 0x685cce:c.instructions+=15;goto B685cce;
case 0x685ccf:c.instructions+=14;goto B685ccf;
case 0x685cd1:c.instructions+=13;goto B685cd1;
case 0x685cd4:c.instructions+=12;goto B685cd4;
case 0x685cd7:c.instructions+=11;goto B685cd7;
case 0x685cd8:c.instructions+=10;goto B685cd8;
case 0x685cdb:c.instructions+=9;goto B685cdb;
case 0x685cdd:c.instructions+=8;goto B685cdd;
case 0x685ce0:c.instructions+=7;goto B685ce0;
case 0x685ce3:c.instructions+=6;goto B685ce3;
case 0x685ce4:c.instructions+=5;goto B685ce4;
case 0x685ce6:c.instructions+=4;goto B685ce6;
case 0x685ce9:c.instructions+=3;goto B685ce9;
case 0x685cec:c.instructions+=2;goto B685cec;
case 0x685cef:c.instructions+=1;goto B685cef;
case 0x685cf1:goto L685cf1;
case 0x685cf8:goto L685cf8;
case 0x685cfb:c.instructions+=1;goto B685cfb;
case 0x685cfd:goto L685cfd;
case 0x685d00:c.instructions+=1;goto B685d00;
case 0x685d02:goto L685d02;
case 0x685d05:c.instructions+=1;goto B685d05;
case 0x685d07:goto L685d07;
case 0x685d0a:c.instructions+=1;goto B685d0a;
case 0x685d0c:goto L685d0c;
case 0x685d0f:c.instructions+=1;goto B685d0f;
case 0x685d11:goto L685d11;
case 0x685d14:c.instructions+=1;goto B685d14;
case 0x685d16:goto L685d16;
case 0x685d19:c.instructions+=1;goto B685d19;
case 0x685d1b:goto L685d1b;
case 0x685d1e:c.instructions+=1;goto B685d1e;
case 0x685d20:goto L685d20;
case 0x685d23:c.instructions+=1;goto B685d23;
case 0x685d25:goto L685d25;
case 0x685d28:c.instructions+=1;goto B685d28;
case 0x685d2a:goto L685d2a;
case 0x685d2d:c.instructions+=2;goto B685d2d;
case 0x685d2f:c.instructions+=1;goto B685d2f;
case 0x685d31:goto L685d31;
case 0x685d34:c.instructions+=1;goto B685d34;
case 0x685d36:goto L685d36;
case 0x685d3b:c.instructions+=1;goto B685d3b;
case 0x685d40:goto L685d40;
case 0x685d43:c.instructions+=3;goto B685d43;
case 0x685d44:c.instructions+=2;goto B685d44;
case 0x685d46:c.instructions+=1;goto B685d46;
case 0x685d4b:goto L685d4b;
case 0x685d4e:c.instructions+=2;goto B685d4e;
case 0x685d53:c.instructions+=1;goto B685d53;
case 0x685d58:goto L685d58;
case 0x685d5d:c.instructions+=2;goto B685d5d;
case 0x685d62:c.instructions+=1;goto B685d62;
case 0x685d64:goto L685d64;
case 0x685d65:c.instructions+=3;goto B685d65;
case 0x685d68:c.instructions+=2;goto B685d68;
case 0x685d6a:c.instructions+=1;goto B685d6a;
case 0x685d70:goto L685d70;
case 0x685d74:c.instructions+=1;goto B685d74;
case 0x685d7a:goto L685d7a;
case 0x685d7d:c.instructions+=2;goto B685d7d;
case 0x685d81:c.instructions+=1;goto B685d81;
case 0x685d83:goto L685d83;
case 0x685d86:goto L685d86;
case 0x685d89:c.instructions+=1;goto B685d89;
case 0x685d8b:goto L685d8b;
case 0x685d90:c.instructions+=5;goto B685d90;
case 0x685d95:c.instructions+=4;goto B685d95;
case 0x685d98:c.instructions+=3;goto B685d98;
case 0x685d99:c.instructions+=2;goto B685d99;
case 0x685d9b:c.instructions+=1;goto B685d9b;
case 0x685da0:goto L685da0;
case 0x685da3:c.instructions+=1;goto B685da3;
case 0x685daa:goto L685daa;
case 0x685dad:c.instructions+=2;goto B685dad;
case 0x685daf:c.instructions+=1;goto B685daf;
case 0x685db1:goto L685db1;
case 0x685db4:c.instructions+=2;goto B685db4;
case 0x685db7:c.instructions+=1;goto B685db7;
case 0x685db9:goto L685db9;
case 0x685dbc:c.instructions+=1;goto B685dbc;
case 0x685dbe:goto L685dbe;
case 0x685dc2:c.instructions+=1;goto B685dc2;
case 0x685dc4:goto L685dc4;
case 0x685dcb:goto L685dcb;
case 0x685dcf:c.instructions+=1;goto B685dcf;
case 0x685dd1:goto L685dd1;
case 0x685dd6:c.instructions+=5;goto B685dd6;
case 0x685ddb:c.instructions+=4;goto B685ddb;
case 0x685dde:c.instructions+=3;goto B685dde;
case 0x685ddf:c.instructions+=2;goto B685ddf;
case 0x685de1:c.instructions+=1;goto B685de1;
case 0x685de6:goto L685de6;
case 0x685de9:c.instructions+=1;goto B685de9;
case 0x685df0:goto L685df0;
case 0x685df3:c.instructions+=1;goto B685df3;
case 0x685df5:goto L685df5;
case 0x685dfa:c.instructions+=5;goto B685dfa;
case 0x685dff:c.instructions+=4;goto B685dff;
case 0x685e02:c.instructions+=3;goto B685e02;
case 0x685e03:c.instructions+=2;goto B685e03;
case 0x685e05:c.instructions+=1;goto B685e05;
case 0x685e0a:goto L685e0a;
case 0x685e0d:c.instructions+=1;goto B685e0d;
case 0x685e14:goto L685e14;
case 0x685e17:c.instructions+=2;goto B685e17;
case 0x685e19:c.instructions+=1;goto B685e19;
case 0x685e1f:goto L685e1f;
case 0x685e23:c.instructions+=1;goto B685e23;
case 0x685e29:goto L685e29;
case 0x685e2c:c.instructions+=2;goto B685e2c;
case 0x685e2e:c.instructions+=1;goto B685e2e;
case 0x685e30:goto L685e30;
case 0x685e33:c.instructions+=1;goto B685e33;
case 0x685e35:goto L685e35;
case 0x685e38:c.instructions+=1;goto B685e38;
case 0x685e3a:goto L685e3a;
case 0x685e3d:c.instructions+=1;goto B685e3d;
case 0x685e3f:goto L685e3f;
case 0x685e44:c.instructions+=5;goto B685e44;
case 0x685e49:c.instructions+=4;goto B685e49;
case 0x685e4c:c.instructions+=3;goto B685e4c;
case 0x685e4d:c.instructions+=2;goto B685e4d;
case 0x685e4f:c.instructions+=1;goto B685e4f;
case 0x685e54:goto L685e54;
case 0x685e57:c.instructions+=1;goto B685e57;
case 0x685e5e:goto L685e5e;
case 0x685e61:c.instructions+=3;goto B685e61;
case 0x685e64:c.instructions+=2;goto B685e64;
case 0x685e68:c.instructions+=1;goto B685e68;
case 0x685e6a:goto L685e6a;
case 0x685e71:goto L685e71;
case 0x685e74:c.instructions+=2;goto B685e74;
case 0x685e76:c.instructions+=1;goto B685e76;
case 0x685e78:goto L685e78;
case 0x685e7d:c.instructions+=1;goto B685e7d;
case 0x685e7f:goto L685e7f;
case 0x685e84:c.instructions+=5;goto B685e84;
case 0x685e89:c.instructions+=4;goto B685e89;
case 0x685e8c:c.instructions+=3;goto B685e8c;
case 0x685e8d:c.instructions+=2;goto B685e8d;
case 0x685e8f:c.instructions+=1;goto B685e8f;
case 0x685e94:goto L685e94;
case 0x685e97:c.instructions+=1;goto B685e97;
case 0x685e9e:goto L685e9e;
case 0x685ea2:c.instructions+=1;goto B685ea2;
case 0x685ea4:goto L685ea4;
case 0x685ea9:c.instructions+=5;goto B685ea9;
case 0x685eae:c.instructions+=4;goto B685eae;
case 0x685eb1:c.instructions+=3;goto B685eb1;
case 0x685eb2:c.instructions+=2;goto B685eb2;
case 0x685eb4:c.instructions+=1;goto B685eb4;
case 0x685eb9:goto L685eb9;
case 0x685ebc:c.instructions+=1;goto B685ebc;
case 0x685ec3:goto L685ec3;
case 0x685ec7:c.instructions+=2;goto B685ec7;
case 0x685eca:c.instructions+=1;goto B685eca;
case 0x685ecc:goto L685ecc;
case 0x685ece:c.instructions+=2;goto B685ece;
case 0x685ed0:c.instructions+=1;goto B685ed0;
case 0x685ed2:goto L685ed2;
case 0x685ed5:c.instructions+=3;goto B685ed5;
case 0x685ed8:c.instructions+=2;goto B685ed8;
case 0x685edb:c.instructions+=1;goto B685edb;
case 0x685edd:goto L685edd;
case 0x685ee0:c.instructions+=1;goto B685ee0;
case 0x685ee2:goto L685ee2;
case 0x685ee5:c.instructions+=1;goto B685ee5;
case 0x685ee7:goto L685ee7;
case 0x685eeb:c.instructions+=1;goto B685eeb;
case 0x685eed:goto L685eed;
case 0x685ef4:goto L685ef4;
case 0x685ef7:c.instructions+=2;goto B685ef7;
case 0x685ef9:c.instructions+=1;goto B685ef9;
case 0x685efb:goto L685efb;
case 0x685eff:c.instructions+=1;goto B685eff;
case 0x685f01:goto L685f01;
case 0x685f08:goto L685f08;
case 0x685f0c:c.instructions+=1;goto B685f0c;
case 0x685f0e:goto L685f0e;
case 0x685f13:c.instructions+=5;goto B685f13;
case 0x685f18:c.instructions+=4;goto B685f18;
case 0x685f1b:c.instructions+=3;goto B685f1b;
case 0x685f1c:c.instructions+=2;goto B685f1c;
case 0x685f1e:c.instructions+=1;goto B685f1e;
case 0x685f23:goto L685f23;
case 0x685f26:c.instructions+=1;goto B685f26;
case 0x685f2d:goto L685f2d;
case 0x685f31:c.instructions+=1;goto B685f31;
case 0x685f33:goto L685f33;
case 0x685f36:goto L685f36;
case 0x685f39:c.instructions+=3;goto B685f39;
case 0x685f3c:c.instructions+=2;goto B685f3c;
case 0x685f40:c.instructions+=1;goto B685f40;
case 0x685f42:goto L685f42;
case 0x685f45:c.instructions+=2;goto B685f45;
case 0x685f47:c.instructions+=1;goto B685f47;
case 0x685f4c:goto L685f4c;
case 0x685f4e:c.instructions+=1;goto B685f4e;
case 0x685f54:goto L685f54;
case 0x685f57:c.instructions+=5;goto B685f57;
case 0x685f5a:c.instructions+=4;goto B685f5a;
case 0x685f5d:c.instructions+=3;goto B685f5d;
case 0x685f60:c.instructions+=2;goto B685f60;
case 0x685f63:c.instructions+=1;goto B685f63;
case 0x685f69:goto L685f69;
case 0x685f6c:c.instructions+=2;goto B685f6c;
case 0x685f6e:c.instructions+=1;goto B685f6e;
case 0x685f70:goto L685f70;
case 0x685f73:c.instructions+=1;goto B685f73;
case 0x685f75:goto L685f75;
case 0x685f78:c.instructions+=1;goto B685f78;
case 0x685f7e:goto L685f7e;
case 0x685f81:c.instructions+=1;goto B685f81;
case 0x685f87:goto L685f87;
case 0x685f8a:c.instructions+=6;goto B685f8a;
case 0x685f8d:c.instructions+=5;goto B685f8d;
case 0x685f92:c.instructions+=4;goto B685f92;
case 0x685f94:c.instructions+=3;goto B685f94;
case 0x685f96:c.instructions+=2;goto B685f96;
case 0x685f97:c.instructions+=1;goto B685f97;
case 0x685f9d:goto L685f9d;
case 0x685fa3:goto L685fa3;
case 0x685fa5:c.instructions+=1;goto B685fa5;
case 0x685fa7:goto L685fa7;
case 0x685fad:c.instructions+=1;goto B685fad;
case 0x685faf:goto L685faf;
case 0x685fb4:c.instructions+=2;goto B685fb4;
case 0x685fb6:c.instructions+=1;goto B685fb6;
case 0x685fb8:goto L685fb8;
case 0x685fbe:c.instructions+=1;goto B685fbe;
case 0x685fc4:goto L685fc4;
case 0x685fc9:c.instructions+=2;goto B685fc9;
case 0x685fcb:c.instructions+=1;goto B685fcb;
case 0x685fcd:goto L685fcd;
case 0x685fd3:c.instructions+=1;goto B685fd3;
case 0x685fd9:goto L685fd9;
case 0x685fdf:c.instructions+=1;goto B685fdf;
case 0x685fe5:goto L685fe5;
case 0x685fea:c.instructions+=5;goto B685fea;
case 0x685fef:c.instructions+=4;goto B685fef;
case 0x685ff2:c.instructions+=3;goto B685ff2;
case 0x685ff3:c.instructions+=2;goto B685ff3;
case 0x685ff5:c.instructions+=1;goto B685ff5;
case 0x685ffa:goto L685ffa;
case 0x685ffd:c.instructions+=1;goto B685ffd;
default:missing_instruction(c.pc);}
B685000:L685000:{c.instructions+=3;NFSU2_TR(0x685000);
__builtin_memmove((R+20),(R+16),4);
}
B685002:{NFSU2_TR(0x685002);
w4(R+0,u32(0x1000ull));
}
B685007:{NFSU2_TR(0x685007);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68500cull));
TAIL_STATIC(0x75c4d0u,75c);
}
B68500c:L68500c:{c.instructions+=10;NFSU2_TR(0x68500c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68500d:{NFSU2_TR(0x68500d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B685010:{NFSU2_TR(0x685010);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685011:{NFSU2_TR(0x685011);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B685014:{NFSU2_TR(0x685014);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685015:{NFSU2_TR(0x685015);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685017:{NFSU2_TR(0x685017);
w4(R+28,u32(0x7ab74cull));
}
B68501c:{NFSU2_TR(0x68501c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68501d:{NFSU2_TR(0x68501d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68501f:{NFSU2_TR(0x68501f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685026:L685026:{c.instructions+=1;NFSU2_TR(0x685026);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685028;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685026u);}goto L685026;}}
}
B685028:L685028:{c.instructions+=1;NFSU2_TR(0x685028);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68507d;}}
}
B68502a:L68502a:{c.instructions+=5;NFSU2_TR(0x68502a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B68502c:{NFSU2_TR(0x68502c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68502f:{NFSU2_TR(0x68502f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685030:{NFSU2_TR(0x685030);
u8 U[4];
w4(U+0,u32(0x7d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685035:{NFSU2_TR(0x685035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68503aull));
TAIL_STATIC(0x6432a0u,643);
}
B68503a:L68503a:{c.instructions+=2;NFSU2_TR(0x68503a);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x9ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B68503d:{NFSU2_TR(0x68503d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6850b8;}}
}
B68503f:L68503f:{c.instructions+=3;NFSU2_TR(0x68503f);
w4(R+0,u32(0x7e7ull));
}
B685044:{NFSU2_TR(0x685044);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685047:{NFSU2_TR(0x685047);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68505d;}}
}
B685049:L685049:{c.instructions+=6;NFSU2_TR(0x685049);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68504c:{NFSU2_TR(0x68504c);
u8 U[4];
w4(U+0,u32(0x7b9de8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685051:{NFSU2_TR(0x685051);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685052:{NFSU2_TR(0x685052);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685053:{NFSU2_TR(0x685053);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B685055:{NFSU2_TR(0x685055);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68505aull));
TAIL_STATIC(0x64307cu,643);
}
B68505a:L68505a:{c.instructions+=1;NFSU2_TR(0x68505a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B68505d:L68505d:{c.instructions+=3;NFSU2_TR(0x68505d);
w4(R+0,u32(0x7e8ull));
}
B685062:{NFSU2_TR(0x685062);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
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
B685065:{NFSU2_TR(0x685065);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6850b8;}}
}
B685067:L685067:{c.instructions+=6;NFSU2_TR(0x685067);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68506a:{NFSU2_TR(0x68506a);
u8 U[4];
w4(U+0,u32(0x7b9dc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68506f:{NFSU2_TR(0x68506f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685070:{NFSU2_TR(0x685070);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685071:{NFSU2_TR(0x685071);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B685073:{NFSU2_TR(0x685073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685078ull));
TAIL_STATIC(0x64307cu,643);
}
B685078:L685078:{c.instructions+=2;NFSU2_TR(0x685078);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68507b:{NFSU2_TR(0x68507b);
{goto L6850b8;}
}
B68507d:L68507d:{c.instructions+=7;NFSU2_TR(0x68507d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B685080:{NFSU2_TR(0x685080);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685081:{NFSU2_TR(0x685081);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B685084:{NFSU2_TR(0x685084);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff000ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68508a:{NFSU2_TR(0x68508a);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68508f:{NFSU2_TR(0x68508f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685090:{NFSU2_TR(0x685090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685095ull));
TAIL_STATIC(0x75e02bu,75e);
}
B685095:L685095:{c.instructions+=9;NFSU2_TR(0x685095);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff000ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68509b:{NFSU2_TR(0x68509b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68509c:{NFSU2_TR(0x68509c);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6850a1:{NFSU2_TR(0x6850a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6850a3:{NFSU2_TR(0x6850a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6850a6:{NFSU2_TR(0x6850a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6850a7:{NFSU2_TR(0x6850a7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6850a9:{NFSU2_TR(0x6850a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff0ffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6850b0:{NFSU2_TR(0x6850b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6850b5ull));
TAIL_STATIC(0x64307cu,643);
}
B6850b5:L6850b5:{c.instructions+=1;NFSU2_TR(0x6850b5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6850b8:L6850b8:{c.instructions+=5;NFSU2_TR(0x6850b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6850b9:{NFSU2_TR(0x6850b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6850ba:{NFSU2_TR(0x6850ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6850bb:{NFSU2_TR(0x6850bb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6850bc:{NFSU2_TR(0x6850bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6850bd:L6850bd:{c.instructions+=7;NFSU2_TR(0x6850bd);
__builtin_memmove((R+28),(R+28),4);
}
B6850bf:{NFSU2_TR(0x6850bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6850c0:{NFSU2_TR(0x6850c0);
__builtin_memmove((R+20),(R+16),4);
}
B6850c2:{NFSU2_TR(0x6850c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6850c5:{NFSU2_TR(0x6850c5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6850ca:{NFSU2_TR(0x6850ca);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6850cb:{NFSU2_TR(0x6850cb);
if(r1(R+518)){{goto L685104;}}
}
B6850cd:L6850cd:{c.instructions+=2;NFSU2_TR(0x6850cd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6850ce:{NFSU2_TR(0x6850ce);
if(r1(R+518)){{goto L6850d8;}}
}
B6850d0:L6850d0:{c.instructions+=2;NFSU2_TR(0x6850d0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6850d3:{NFSU2_TR(0x6850d3);
if(r1(R+518)){{goto L685104;}}
}
B6850d5:L6850d5:{c.instructions+=2;NFSU2_TR(0x6850d5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6850d6:{NFSU2_TR(0x6850d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685125;}}
}
B6850d8:L6850d8:{c.instructions+=10;NFSU2_TR(0x6850d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6850db:{NFSU2_TR(0x6850db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6850dc:{NFSU2_TR(0x6850dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6850df:{NFSU2_TR(0x6850df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6850e2:{NFSU2_TR(0x6850e2);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6850e7:{NFSU2_TR(0x6850e7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1388ull))));
}
B6850ec:{NFSU2_TR(0x6850ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6850ed:{NFSU2_TR(0x6850ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6850f0:{NFSU2_TR(0x6850f0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6850f2:{NFSU2_TR(0x6850f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6850f7ull));
TAIL_STATIC(0x64307cu,643);
}
B6850f7:L6850f7:{c.instructions+=4;NFSU2_TR(0x6850f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6850fa:{NFSU2_TR(0x6850fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685101:{NFSU2_TR(0x685101);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B685102:{NFSU2_TR(0x685102);
{goto L685125;}
}
B685104:L685104:{c.instructions+=9;NFSU2_TR(0x685104);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B685107:{NFSU2_TR(0x685107);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68510a:{NFSU2_TR(0x68510a);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68510f:{NFSU2_TR(0x68510f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1388ull))));
}
B685114:{NFSU2_TR(0x685114);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685115:{NFSU2_TR(0x685115);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685118:{NFSU2_TR(0x685118);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68511b:{NFSU2_TR(0x68511b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B68511d:{NFSU2_TR(0x68511d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685122ull));
TAIL_STATIC(0x643143u,643);
}
B685122:L685122:{c.instructions+=1;NFSU2_TR(0x685122);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B685125:L685125:{c.instructions+=3;NFSU2_TR(0x685125);
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
B685127:{NFSU2_TR(0x685127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B685128:{NFSU2_TR(0x685128);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68512b:L68512b:{c.instructions+=8;NFSU2_TR(0x68512b);
__builtin_memmove((R+28),(R+28),4);
}
B68512d:{NFSU2_TR(0x68512d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68512e:{NFSU2_TR(0x68512e);
__builtin_memmove((R+20),(R+16),4);
}
B685130:{NFSU2_TR(0x685130);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685133:{NFSU2_TR(0x685133);
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
B685135:{NFSU2_TR(0x685135);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685136:{NFSU2_TR(0x685136);
__builtin_memmove((R+24),(R+4),4);
}
B685138:{NFSU2_TR(0x685138);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685160;}}
}
B68513a:L68513a:{c.instructions+=5;NFSU2_TR(0x68513a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68513b:{NFSU2_TR(0x68513b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68513d:{NFSU2_TR(0x68513d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B68513e:{NFSU2_TR(0x68513e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685141:{NFSU2_TR(0x685141);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68515a;}}
}
B685143:L685143:{c.instructions+=6;NFSU2_TR(0x685143);
u8 U[4];
w4(U+0,u32(0x7ab89cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685148:{NFSU2_TR(0x685148);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685149:{NFSU2_TR(0x685149);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68514c:{NFSU2_TR(0x68514c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68514d:{NFSU2_TR(0x68514d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B68514f:{NFSU2_TR(0x68514f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685154ull));
TAIL_STATIC(0x64307cu,643);
}
B685154:L685154:{c.instructions+=2;NFSU2_TR(0x685154);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B685157:{NFSU2_TR(0x685157);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68515a:L68515a:{c.instructions+=3;NFSU2_TR(0x68515a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68515d:{NFSU2_TR(0x68515d);
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
B68515f:{NFSU2_TR(0x68515f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B685160:L685160:{c.instructions+=3;NFSU2_TR(0x685160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B685161:{NFSU2_TR(0x685161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B685162:{NFSU2_TR(0x685162);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B685165:L685165:{c.instructions+=31;NFSU2_TR(0x685165);
__builtin_memmove((R+28),(R+28),4);
}
B685167:{NFSU2_TR(0x685167);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685168:{NFSU2_TR(0x685168);
__builtin_memmove((R+20),(R+16),4);
}
B68516a:{NFSU2_TR(0x68516a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B68516d:{NFSU2_TR(0x68516d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685170:{NFSU2_TR(0x685170);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685173:{NFSU2_TR(0x685173);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685174:{NFSU2_TR(0x685174);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B685176:{NFSU2_TR(0x685176);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685177:{NFSU2_TR(0x685177);
__builtin_memmove((R+24),(R+4),4);
}
B685179:{NFSU2_TR(0x685179);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B68517b:{NFSU2_TR(0x68517b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68517e:{NFSU2_TR(0x68517e);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(r1(R+4))));
w1(R+523,sborrow<u8>(r1(U+4),r1(R+4)));
w1(U+5,u8(u32(r1(U+4))-u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B685180:{NFSU2_TR(0x685180);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685181:{NFSU2_TR(0x685181);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685184:{NFSU2_TR(0x685184);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x10dull));
s4(u32(r4(U+0)),r4(U+4));
}
B68518b:{NFSU2_TR(0x68518b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68518e:{NFSU2_TR(0x68518e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685191:{NFSU2_TR(0x685191);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685194:{NFSU2_TR(0x685194);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68519b:{NFSU2_TR(0x68519b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68519e:{NFSU2_TR(0x68519e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6851a1:{NFSU2_TR(0x6851a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6851a4:{NFSU2_TR(0x6851a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6851a7:{NFSU2_TR(0x6851a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6851aa:{NFSU2_TR(0x6851aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6851ad:{NFSU2_TR(0x6851ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6851b0:{NFSU2_TR(0x6851b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6851b3:{NFSU2_TR(0x6851b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6851b6:{NFSU2_TR(0x6851b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6851b9:{NFSU2_TR(0x6851b9);
if(r1(R+518)){{goto L685a2a;}}
}
B6851bf:L6851bf:{c.instructions+=4;NFSU2_TR(0x6851bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6851c2:{NFSU2_TR(0x6851c2);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6851c4:{NFSU2_TR(0x6851c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6851c5:{NFSU2_TR(0x6851c5);
{goto L6851cf;}
}
B6851c7:L6851c7:{c.instructions+=2;NFSU2_TR(0x6851c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6851c9:{NFSU2_TR(0x6851c9);
if(r1(R+518)){{goto L6851d5;}}
}
B6851cb:L6851cb:{c.instructions+=2;NFSU2_TR(0x6851cb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6851cc:{NFSU2_TR(0x6851cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6851cf:L6851cf:{c.instructions+=3;NFSU2_TR(0x6851cf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6851d1:{NFSU2_TR(0x6851d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6851d3:{NFSU2_TR(0x6851d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6851c7u);}goto L6851c7;}}
}
B6851d5:L6851d5:{c.instructions+=5;NFSU2_TR(0x6851d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6851d8:{NFSU2_TR(0x6851d8);
__builtin_memmove((R+0),(R+4),4);
}
B6851da:{NFSU2_TR(0x6851da);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6851dc:{NFSU2_TR(0x6851dc);
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
B6851df:{NFSU2_TR(0x6851df);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L685a23;}}
}
B6851e5:L6851e5:{c.instructions+=4;NFSU2_TR(0x6851e5);
__builtin_memmove((R+4),(R+0),4);
}
B6851e7:{NFSU2_TR(0x6851e7);
__builtin_memmove((R+12),(R+4),4);
}
B6851e9:{NFSU2_TR(0x6851e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6851ec:{NFSU2_TR(0x6851ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+28),(U+0),4);
}
B6851ef:L6851ef:{c.instructions+=1;NFSU2_TR(0x6851ef);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6851f1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6851efu);}goto L6851ef;}
}
B6851f1:L6851f1:{c.instructions+=2;NFSU2_TR(0x6851f1);
__builtin_memmove((R+4),(R+12),4);
}
B6851f3:{NFSU2_TR(0x6851f3);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6851f5:L6851f5:{c.instructions+=1;NFSU2_TR(0x6851f5);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6851f7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6851f5u);}goto L6851f5;}
}
B6851f7:L6851f7:{c.instructions+=4;NFSU2_TR(0x6851f7);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B6851fc:{NFSU2_TR(0x6851fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6851ff:{NFSU2_TR(0x6851ff);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B685202:{NFSU2_TR(0x685202);
if(r1(R+518)){{goto L685207;}}
}
B685204:L685204:{c.instructions+=1;NFSU2_TR(0x685204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B685207:L685207:{c.instructions+=5;NFSU2_TR(0x685207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68520a:{NFSU2_TR(0x68520a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B68520c:{NFSU2_TR(0x68520c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68520f:{NFSU2_TR(0x68520f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685212:{NFSU2_TR(0x685212);
if(r1(R+518)){{goto L68541a;}}
}
B685218:L685218:{c.instructions+=2;NFSU2_TR(0x685218);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B68521a:{NFSU2_TR(0x68521a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68521c:L68521c:{c.instructions+=2;NFSU2_TR(0x68521c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7b7e20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B685222:{NFSU2_TR(0x685222);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B685225:L685225:{c.instructions+=4;NFSU2_TR(0x685225);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B685227:{NFSU2_TR(0x685227);
__builtin_memmove((R+4),(R+12),1);
}
B685229:{NFSU2_TR(0x685229);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B68522b:{NFSU2_TR(0x68522b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685249;}}
}
B68522d:L68522d:{c.instructions+=2;NFSU2_TR(0x68522d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B68522f:{NFSU2_TR(0x68522f);
if(r1(R+518)){{goto L685243;}}
}
B685231:L685231:{c.instructions+=4;NFSU2_TR(0x685231);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B685234:{NFSU2_TR(0x685234);
__builtin_memmove((R+4),(R+12),1);
}
B685236:{NFSU2_TR(0x685236);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B685239:{NFSU2_TR(0x685239);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685249;}}
}
B68523b:L68523b:{c.instructions+=6;NFSU2_TR(0x68523b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B68523c:{NFSU2_TR(0x68523c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B68523d:{NFSU2_TR(0x68523d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B68523e:{NFSU2_TR(0x68523e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B68523f:{NFSU2_TR(0x68523f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B685241:{NFSU2_TR(0x685241);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685225u);}goto L685225;}}
}
B685243:L685243:{c.instructions+=3;NFSU2_TR(0x685243);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B685245:{NFSU2_TR(0x685245);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B685247:{NFSU2_TR(0x685247);
{goto L685250;}
}
B685249:L685249:{c.instructions+=3;NFSU2_TR(0x685249);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68524b:{NFSU2_TR(0x68524b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68524e:{NFSU2_TR(0x68524e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B685250:L685250:{c.instructions+=2;NFSU2_TR(0x685250);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685252:{NFSU2_TR(0x685252);
if(r1(R+518)){{goto L685260;}}
}
B685254:L685254:{c.instructions+=4;NFSU2_TR(0x685254);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x44ull))));
}
B685257:{NFSU2_TR(0x685257);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B685258:{NFSU2_TR(0x685258);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x1650ull))));
}
B68525e:{NFSU2_TR(0x68525e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68521cu);}goto L68521c;}}
}
B685260:L685260:{c.instructions+=2;NFSU2_TR(0x685260);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x54ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x54ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B685263:{NFSU2_TR(0x685263);
if(r1(R+518)){{goto L685a23;}}
}
B685269:L685269:{c.instructions+=9;NFSU2_TR(0x685269);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68526c:{NFSU2_TR(0x68526c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68526f:{NFSU2_TR(0x68526f);
__builtin_memmove((R+0),(R+8),4);
}
B685271:{NFSU2_TR(0x685271);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B685274:{NFSU2_TR(0x685274);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B685276:{NFSU2_TR(0x685276);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B685278:{NFSU2_TR(0x685278);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7b7e28ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B68527f:{NFSU2_TR(0x68527f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0xfffffffaull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685282:{NFSU2_TR(0x685282);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6852dc;}}
}
B685284:L685284:{c.instructions+=1;NFSU2_TR(0x685284);
if(r1(R+518)){{goto L6852d3;}}
}
B685286:L685286:{c.instructions+=2;NFSU2_TR(0x685286);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B685288:{NFSU2_TR(0x685288);
if(r1(R+518)){{goto L6852ca;}}
}
B68528a:L68528a:{c.instructions+=2;NFSU2_TR(0x68528a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68528b:{NFSU2_TR(0x68528b);
if(r1(R+518)){{goto L6852c1;}}
}
B68528d:L68528d:{c.instructions+=2;NFSU2_TR(0x68528d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68528e:{NFSU2_TR(0x68528e);
if(r1(R+518)){{goto L6852b8;}}
}
B685290:L685290:{c.instructions+=2;NFSU2_TR(0x685290);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B685291:{NFSU2_TR(0x685291);
if(r1(R+518)){{goto L6852af;}}
}
B685293:L685293:{c.instructions+=2;NFSU2_TR(0x685293);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B685294:{NFSU2_TR(0x685294);
if(r1(R+518)){{goto L6852a6;}}
}
B685296:L685296:{c.instructions+=2;NFSU2_TR(0x685296);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B685297:{NFSU2_TR(0x685297);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685323;}}
}
B68529d:L68529d:{c.instructions+=2;NFSU2_TR(0x68529d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x107ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6852a4:{NFSU2_TR(0x6852a4);
{goto L685323;}
}
B6852a6:L6852a6:{c.instructions+=2;NFSU2_TR(0x6852a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x106ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6852ad:{NFSU2_TR(0x6852ad);
{goto L685323;}
}
B6852af:L6852af:{c.instructions+=2;NFSU2_TR(0x6852af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x105ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6852b6:{NFSU2_TR(0x6852b6);
{goto L685323;}
}
B6852b8:L6852b8:{c.instructions+=2;NFSU2_TR(0x6852b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x104ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6852bf:{NFSU2_TR(0x6852bf);
{goto L685323;}
}
B6852c1:L6852c1:{c.instructions+=2;NFSU2_TR(0x6852c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x103ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6852c8:{NFSU2_TR(0x6852c8);
{goto L685323;}
}
B6852ca:L6852ca:{c.instructions+=2;NFSU2_TR(0x6852ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x102ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6852d1:{NFSU2_TR(0x6852d1);
{goto L685323;}
}
B6852d3:L6852d3:{c.instructions+=2;NFSU2_TR(0x6852d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x10cull));
s4(u32(r4(U+0)),r4(U+4));
}
B6852da:{NFSU2_TR(0x6852da);
{goto L685323;}
}
B6852dc:L6852dc:{c.instructions+=2;NFSU2_TR(0x6852dc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6852df:{NFSU2_TR(0x6852df);
if(r1(R+518)){{goto L68531c;}}
}
B6852e1:L6852e1:{c.instructions+=2;NFSU2_TR(0x6852e1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6852e4:{NFSU2_TR(0x6852e4);
if(r1(R+518)){{goto L685313;}}
}
B6852e6:L6852e6:{c.instructions+=2;NFSU2_TR(0x6852e6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6852e9:{NFSU2_TR(0x6852e9);
if(r1(R+518)){{goto L68530a;}}
}
B6852eb:L6852eb:{c.instructions+=2;NFSU2_TR(0x6852eb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6852ee:{NFSU2_TR(0x6852ee);
if(r1(R+518)){{goto L685301;}}
}
B6852f0:L6852f0:{c.instructions+=2;NFSU2_TR(0x6852f0);
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
B6852f3:{NFSU2_TR(0x6852f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685323;}}
}
B6852f5:L6852f5:{c.instructions+=2;NFSU2_TR(0x6852f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x7e7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6852fc:{NFSU2_TR(0x6852fc);
{goto L685a23;}
}
B685301:L685301:{c.instructions+=2;NFSU2_TR(0x685301);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x109ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685308:{NFSU2_TR(0x685308);
{goto L685323;}
}
B68530a:L68530a:{c.instructions+=2;NFSU2_TR(0x68530a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x108ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685311:{NFSU2_TR(0x685311);
{goto L685323;}
}
B685313:L685313:{c.instructions+=2;NFSU2_TR(0x685313);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x10aull));
s4(u32(r4(U+0)),r4(U+4));
}
B68531a:{NFSU2_TR(0x68531a);
{goto L685323;}
}
B68531c:L68531c:{c.instructions+=1;NFSU2_TR(0x68531c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x10bull));
s4(u32(r4(U+0)),r4(U+4));
}
B685323:L685323:{c.instructions+=8;NFSU2_TR(0x685323);
__builtin_memmove((R+0),(R+8),4);
}
B685325:{NFSU2_TR(0x685325);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B685328:{NFSU2_TR(0x685328);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B68532a:{NFSU2_TR(0x68532a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68532d:{NFSU2_TR(0x68532d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7b7e24ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B685334:{NFSU2_TR(0x685334);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685337:{NFSU2_TR(0x685337);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68533a:{NFSU2_TR(0x68533a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68535b;}}
}
B68533c:L68533c:{c.instructions+=2;NFSU2_TR(0x68533c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68533f:{NFSU2_TR(0x68533f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L68535b;}}
}
B685341:L685341:{c.instructions+=2;NFSU2_TR(0x685341);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x103ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x103ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B685348:{NFSU2_TR(0x685348);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68535b;}}
}
B68534a:L68534a:{c.instructions+=2;NFSU2_TR(0x68534a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x107ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x107ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685351:{NFSU2_TR(0x685351);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L68535b;}}
}
B685353:L685353:{c.instructions+=4;NFSU2_TR(0x685353);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B685355:{NFSU2_TR(0x685355);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B685356:{NFSU2_TR(0x685356);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685359:{NFSU2_TR(0x685359);
{goto L68535e;}
}
B68535b:L68535b:{c.instructions+=2;NFSU2_TR(0x68535b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B68535d:{NFSU2_TR(0x68535d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B68535e:L68535e:{c.instructions+=2;NFSU2_TR(0x68535e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B685361:{NFSU2_TR(0x685361);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L685368;}}
}
B685363:L685363:{c.instructions+=2;NFSU2_TR(0x685363);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685366:{NFSU2_TR(0x685366);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L685372;}}
}
B685368:L685368:{c.instructions+=2;NFSU2_TR(0x685368);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68536b:{NFSU2_TR(0x68536b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68538c;}}
}
B68536d:L68536d:{c.instructions+=2;NFSU2_TR(0x68536d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685370:{NFSU2_TR(0x685370);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L68538c;}}
}
B685372:L685372:{c.instructions+=2;NFSU2_TR(0x685372);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x103ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x103ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B685379:{NFSU2_TR(0x685379);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68538c;}}
}
B68537b:L68537b:{c.instructions+=2;NFSU2_TR(0x68537b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x107ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x107ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685382:{NFSU2_TR(0x685382);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L68538c;}}
}
B685384:L685384:{c.instructions+=2;NFSU2_TR(0x685384);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685387:{NFSU2_TR(0x685387);
if(r1(R+518)){{goto L68538c;}}
}
B685389:L685389:{c.instructions+=1;NFSU2_TR(0x685389);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68538c:L68538c:{c.instructions+=2;NFSU2_TR(0x68538c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68538f:{NFSU2_TR(0x68538f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6853bd;}}
}
B685391:L685391:{c.instructions+=2;NFSU2_TR(0x685391);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685394:{NFSU2_TR(0x685394);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L68539e;}}
}
B685396:L685396:{c.instructions+=2;NFSU2_TR(0x685396);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685399:{NFSU2_TR(0x685399);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68539e;}}
}
B68539b:L68539b:{c.instructions+=1;NFSU2_TR(0x68539b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68539e:L68539e:{c.instructions+=2;NFSU2_TR(0x68539e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6853a1:{NFSU2_TR(0x6853a1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6853bd;}}
}
B6853a3:L6853a3:{c.instructions+=2;NFSU2_TR(0x6853a3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6853a6:{NFSU2_TR(0x6853a6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6853bd;}}
}
B6853a8:L6853a8:{c.instructions+=2;NFSU2_TR(0x6853a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x103ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x103ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6853af:{NFSU2_TR(0x6853af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6853bd;}}
}
B6853b1:L6853b1:{c.instructions+=2;NFSU2_TR(0x6853b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x107ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x107ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6853b8:{NFSU2_TR(0x6853b8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6853bd;}}
}
B6853ba:L6853ba:{c.instructions+=1;NFSU2_TR(0x6853ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6853bd:L6853bd:{c.instructions+=2;NFSU2_TR(0x6853bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6853c0:{NFSU2_TR(0x6853c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6853c7;}}
}
B6853c2:L6853c2:{c.instructions+=2;NFSU2_TR(0x6853c2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6853c5:{NFSU2_TR(0x6853c5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6853d1;}}
}
B6853c7:L6853c7:{c.instructions+=2;NFSU2_TR(0x6853c7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6853ca:{NFSU2_TR(0x6853ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6853d9;}}
}
B6853cc:L6853cc:{c.instructions+=2;NFSU2_TR(0x6853cc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6853cf:{NFSU2_TR(0x6853cf);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6853d9;}}
}
B6853d1:L6853d1:{c.instructions+=2;NFSU2_TR(0x6853d1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6853d4:{NFSU2_TR(0x6853d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6853d9;}}
}
B6853d6:L6853d6:{c.instructions+=1;NFSU2_TR(0x6853d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6853d9:L6853d9:{c.instructions+=2;NFSU2_TR(0x6853d9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xdull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6853dc:{NFSU2_TR(0x6853dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6853eb;}}
}
B6853de:L6853de:{c.instructions+=2;NFSU2_TR(0x6853de);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6853e1:{NFSU2_TR(0x6853e1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6853eb;}}
}
B6853e3:L6853e3:{c.instructions+=2;NFSU2_TR(0x6853e3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6853e6:{NFSU2_TR(0x6853e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6853eb;}}
}
B6853e8:L6853e8:{c.instructions+=1;NFSU2_TR(0x6853e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6853eb:L6853eb:{c.instructions+=2;NFSU2_TR(0x6853eb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6853ed:{NFSU2_TR(0x6853ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6853fc;}}
}
B6853ef:L6853ef:{c.instructions+=2;NFSU2_TR(0x6853ef);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6853f2:{NFSU2_TR(0x6853f2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6853fc;}}
}
B6853f4:L6853f4:{c.instructions+=2;NFSU2_TR(0x6853f4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6853f7:{NFSU2_TR(0x6853f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6853fc;}}
}
B6853f9:L6853f9:{c.instructions+=1;NFSU2_TR(0x6853f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6853fc:L6853fc:{c.instructions+=2;NFSU2_TR(0x6853fc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6853ff:{NFSU2_TR(0x6853ff);
if(r1(R+518)){{goto L68540b;}}
}
B685401:L685401:{c.instructions+=2;NFSU2_TR(0x685401);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685404:{NFSU2_TR(0x685404);
if(r1(R+518)){{goto L68540b;}}
}
B685406:L685406:{c.instructions+=2;NFSU2_TR(0x685406);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685409:{NFSU2_TR(0x685409);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68540e;}}
}
B68540b:L68540b:{c.instructions+=1;NFSU2_TR(0x68540b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68540e:L68540e:{c.instructions+=2;NFSU2_TR(0x68540e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x7e8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685415:{NFSU2_TR(0x685415);
{goto L6859c3;}
}
B68541a:L68541a:{c.instructions+=2;NFSU2_TR(0x68541a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68541d:{NFSU2_TR(0x68541d);
if(r1(R+518)){{goto L68543f;}}
}
B68541f:L68541f:{c.instructions+=5;NFSU2_TR(0x68541f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685421:{NFSU2_TR(0x685421);
w4(R+28,u32(0x7b9ef4ull));
}
B685426:{NFSU2_TR(0x685426);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685429:{NFSU2_TR(0x685429);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68542a:{NFSU2_TR(0x68542a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68542c:L68542c:{c.instructions+=1;NFSU2_TR(0x68542c);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L68542e;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68542cu);}goto L68542c;}}
}
B68542e:L68542e:{c.instructions+=1;NFSU2_TR(0x68542e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68543f;}}
}
B685430:L685430:{c.instructions+=4;NFSU2_TR(0x685430);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x10ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B685434:{NFSU2_TR(0x685434);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685437:{NFSU2_TR(0x685437);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68543a:{NFSU2_TR(0x68543a);
{goto L6859c0;}
}
B68543f:L68543f:{c.instructions+=2;NFSU2_TR(0x68543f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685442:{NFSU2_TR(0x685442);
if(r1(R+518)){{goto L685461;}}
}
B685444:L685444:{c.instructions+=5;NFSU2_TR(0x685444);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685446:{NFSU2_TR(0x685446);
w4(R+28,u32(0x7b9ee8ull));
}
B68544b:{NFSU2_TR(0x68544b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B68544e:{NFSU2_TR(0x68544e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68544f:{NFSU2_TR(0x68544f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B685451:L685451:{c.instructions+=1;NFSU2_TR(0x685451);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685453;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685451u);}goto L685451;}}
}
B685453:L685453:{c.instructions+=1;NFSU2_TR(0x685453);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685461;}}
}
B685455:L685455:{c.instructions+=3;NFSU2_TR(0x685455);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x40ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B685459:{NFSU2_TR(0x685459);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68545c:{NFSU2_TR(0x68545c);
{goto L6859c0;}
}
B685461:L685461:{c.instructions+=2;NFSU2_TR(0x685461);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685464:{NFSU2_TR(0x685464);
if(r1(R+518)){{goto L68550a;}}
}
B68546a:L68546a:{c.instructions+=4;NFSU2_TR(0x68546a);
w4(R+28,u32(0x7b9ee4ull));
}
B68546f:{NFSU2_TR(0x68546f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685472:{NFSU2_TR(0x685472);
__builtin_memmove((R+4),(R+8),4);
}
B685474:{NFSU2_TR(0x685474);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B685476:L685476:{c.instructions+=1;NFSU2_TR(0x685476);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685478;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685476u);}goto L685476;}}
}
B685478:L685478:{c.instructions+=1;NFSU2_TR(0x685478);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685483;}}
}
B68547a:L68547a:{c.instructions+=2;NFSU2_TR(0x68547a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x3000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685481:{NFSU2_TR(0x685481);
{goto L685502;}
}
B685483:L685483:{c.instructions+=4;NFSU2_TR(0x685483);
w4(R+28,u32(0x7b9ee0ull));
}
B685488:{NFSU2_TR(0x685488);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B68548b:{NFSU2_TR(0x68548b);
__builtin_memmove((R+4),(R+8),4);
}
B68548d:{NFSU2_TR(0x68548d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68548f:L68548f:{c.instructions+=1;NFSU2_TR(0x68548f);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685491;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68548fu);}goto L68548f;}}
}
B685491:L685491:{c.instructions+=1;NFSU2_TR(0x685491);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68549c;}}
}
B685493:L685493:{c.instructions+=2;NFSU2_TR(0x685493);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x2000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68549a:{NFSU2_TR(0x68549a);
{goto L685502;}
}
B68549c:L68549c:{c.instructions+=4;NFSU2_TR(0x68549c);
w4(R+28,u32(0x7b9edcull));
}
B6854a1:{NFSU2_TR(0x6854a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6854a4:{NFSU2_TR(0x6854a4);
__builtin_memmove((R+4),(R+8),4);
}
B6854a6:{NFSU2_TR(0x6854a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6854a8:L6854a8:{c.instructions+=1;NFSU2_TR(0x6854a8);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6854aa;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6854a8u);}goto L6854a8;}}
}
B6854aa:L6854aa:{c.instructions+=1;NFSU2_TR(0x6854aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6854b5;}}
}
B6854ac:L6854ac:{c.instructions+=2;NFSU2_TR(0x6854ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6854b3:{NFSU2_TR(0x6854b3);
{goto L685502;}
}
B6854b5:L6854b5:{c.instructions+=4;NFSU2_TR(0x6854b5);
w4(R+28,u32(0x7b9ed8ull));
}
B6854ba:{NFSU2_TR(0x6854ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6854bd:{NFSU2_TR(0x6854bd);
__builtin_memmove((R+4),(R+8),4);
}
B6854bf:{NFSU2_TR(0x6854bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6854c1:L6854c1:{c.instructions+=1;NFSU2_TR(0x6854c1);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6854c3;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6854c1u);}goto L6854c1;}}
}
B6854c3:L6854c3:{c.instructions+=1;NFSU2_TR(0x6854c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6854ce;}}
}
B6854c5:L6854c5:{c.instructions+=2;NFSU2_TR(0x6854c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0xf000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6854cc:{NFSU2_TR(0x6854cc);
{goto L685502;}
}
B6854ce:L6854ce:{c.instructions+=4;NFSU2_TR(0x6854ce);
w4(R+28,u32(0x7b9ed4ull));
}
B6854d3:{NFSU2_TR(0x6854d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6854d6:{NFSU2_TR(0x6854d6);
__builtin_memmove((R+4),(R+8),4);
}
B6854d8:{NFSU2_TR(0x6854d8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6854da:L6854da:{c.instructions+=1;NFSU2_TR(0x6854da);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6854dc;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6854dau);}goto L6854da;}}
}
B6854dc:L6854dc:{c.instructions+=1;NFSU2_TR(0x6854dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6854e7;}}
}
B6854de:L6854de:{c.instructions+=2;NFSU2_TR(0x6854de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0xe000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6854e5:{NFSU2_TR(0x6854e5);
{goto L685502;}
}
B6854e7:L6854e7:{c.instructions+=4;NFSU2_TR(0x6854e7);
w4(R+28,u32(0x7b9ed0ull));
}
B6854ec:{NFSU2_TR(0x6854ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6854ef:{NFSU2_TR(0x6854ef);
__builtin_memmove((R+4),(R+8),4);
}
B6854f1:{NFSU2_TR(0x6854f1);
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
B6854f3:L6854f3:{c.instructions+=1;NFSU2_TR(0x6854f3);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6854f5;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6854f3u);}goto L6854f3;}}
}
B6854f5:L6854f5:{c.instructions+=1;NFSU2_TR(0x6854f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685a23;}}
}
B6854fb:L6854fb:{c.instructions+=1;NFSU2_TR(0x6854fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0xd000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685502:L685502:{c.instructions+=2;NFSU2_TR(0x685502);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685505:{NFSU2_TR(0x685505);
{goto L6859c0;}
}
B68550a:L68550a:{c.instructions+=2;NFSU2_TR(0x68550a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68550d:{NFSU2_TR(0x68550d);
if(r1(R+518)){{goto L68556d;}}
}
B68550f:L68550f:{c.instructions+=5;NFSU2_TR(0x68550f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B685511:{NFSU2_TR(0x685511);
w4(R+28,u32(0x7b9eccull));
}
B685516:{NFSU2_TR(0x685516);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685519:{NFSU2_TR(0x685519);
__builtin_memmove((R+4),(R+8),4);
}
B68551b:{NFSU2_TR(0x68551b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B68551d:L68551d:{c.instructions+=1;NFSU2_TR(0x68551d);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L68551f;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68551du);}goto L68551d;}}
}
B68551f:L68551f:{c.instructions+=1;NFSU2_TR(0x68551f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685528;}}
}
B685521:L685521:{c.instructions+=2;NFSU2_TR(0x685521);
w4(R+0,u32(0x10000000ull));
}
B685526:{NFSU2_TR(0x685526);
{goto L685556;}
}
B685528:L685528:{c.instructions+=5;NFSU2_TR(0x685528);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68552a:{NFSU2_TR(0x68552a);
w4(R+28,u32(0x7b9ec4ull));
}
B68552f:{NFSU2_TR(0x68552f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685532:{NFSU2_TR(0x685532);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B685533:{NFSU2_TR(0x685533);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B685535:L685535:{c.instructions+=1;NFSU2_TR(0x685535);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685537;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685535u);}goto L685535;}}
}
B685537:L685537:{c.instructions+=1;NFSU2_TR(0x685537);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685540;}}
}
B685539:L685539:{c.instructions+=2;NFSU2_TR(0x685539);
w4(R+0,u32(0x18000000ull));
}
B68553e:{NFSU2_TR(0x68553e);
{goto L685556;}
}
B685540:L685540:{c.instructions+=5;NFSU2_TR(0x685540);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685542:{NFSU2_TR(0x685542);
w4(R+28,u32(0x7b9ebcull));
}
B685547:{NFSU2_TR(0x685547);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B68554a:{NFSU2_TR(0x68554a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68554b:{NFSU2_TR(0x68554b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B68554d:L68554d:{c.instructions+=1;NFSU2_TR(0x68554d);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L68554f;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68554du);}goto L68554d;}}
}
B68554f:L68554f:{c.instructions+=1;NFSU2_TR(0x68554f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685556;}}
}
B685551:L685551:{c.instructions+=1;NFSU2_TR(0x685551);
w4(R+0,u32(0x20000000ull));
}
B685556:L685556:{c.instructions+=5;NFSU2_TR(0x685556);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B685559:{NFSU2_TR(0x685559);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B68555b:{NFSU2_TR(0x68555b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68555d:{NFSU2_TR(0x68555d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685560:{NFSU2_TR(0x685560);
if(r1(R+518)){{goto L68556d;}}
}
B685562:L685562:{c.instructions+=3;NFSU2_TR(0x685562);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685565:{NFSU2_TR(0x685565);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685568:{NFSU2_TR(0x685568);
{goto L6859c0;}
}
B68556d:L68556d:{c.instructions+=2;NFSU2_TR(0x68556d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685570:{NFSU2_TR(0x685570);
if(r1(R+518)){{goto L68558e;}}
}
B685572:L685572:{c.instructions+=4;NFSU2_TR(0x685572);
w4(R+28,u32(0x7b9eb8ull));
}
B685577:{NFSU2_TR(0x685577);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B68557a:{NFSU2_TR(0x68557a);
__builtin_memmove((R+4),(R+8),4);
}
B68557c:{NFSU2_TR(0x68557c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68557e:L68557e:{c.instructions+=1;NFSU2_TR(0x68557e);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685580;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68557eu);}goto L68557e;}}
}
B685580:L685580:{c.instructions+=1;NFSU2_TR(0x685580);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68558e;}}
}
B685582:L685582:{c.instructions+=3;NFSU2_TR(0x685582);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x20ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B685586:{NFSU2_TR(0x685586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685589:{NFSU2_TR(0x685589);
{goto L6859c0;}
}
B68558e:L68558e:{c.instructions+=2;NFSU2_TR(0x68558e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685591:{NFSU2_TR(0x685591);
if(r1(R+518)){{goto L68575f;}}
}
B685597:L685597:{c.instructions+=3;NFSU2_TR(0x685597);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
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
B68559b:{NFSU2_TR(0x68559b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B68559e:{NFSU2_TR(0x68559e);
if(r1(R+518)){{goto L6855c4;}}
}
B6855a0:L6855a0:{c.instructions+=3;NFSU2_TR(0x6855a0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6855a3:{NFSU2_TR(0x6855a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6855a4:{NFSU2_TR(0x6855a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6855a9ull));
TAIL_STATIC(0x75defau,75d);
}
B6855a9:L6855a9:{c.instructions+=3;NFSU2_TR(0x6855a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6855ab:{NFSU2_TR(0x6855ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6855ac:{NFSU2_TR(0x6855ac);
if(r1(R+518)){{goto L6855b4;}}
}
B6855ae:L6855ae:{c.instructions+=3;NFSU2_TR(0x6855ae);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6855af:{NFSU2_TR(0x6855af);
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
B6855b2:{NFSU2_TR(0x6855b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6855a0u);}goto L6855a0;}}
}
B6855b4:L6855b4:{c.instructions+=2;NFSU2_TR(0x6855b4);
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
B6855b7:{NFSU2_TR(0x6855b7);
if(r1(R+518)){{goto L6855c4;}}
}
B6855b9:L6855b9:{c.instructions+=2;NFSU2_TR(0x6855b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6855ba:{NFSU2_TR(0x6855ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6855bfull));
TAIL_STATIC(0x75d65bu,75d);
}
B6855bf:L6855bf:{c.instructions+=3;NFSU2_TR(0x6855bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6855c0:{NFSU2_TR(0x6855c0);
__builtin_memmove((R+12),(R+0),4);
}
B6855c2:{NFSU2_TR(0x6855c2);
{goto L6855c6;}
}
B6855c4:L6855c4:{c.instructions+=1;NFSU2_TR(0x6855c4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6855c6:L6855c6:{c.instructions+=2;NFSU2_TR(0x6855c6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0xfull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6855c9:{NFSU2_TR(0x6855c9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L68575f;}}
}
B6855cf:L6855cf:{c.instructions+=5;NFSU2_TR(0x6855cf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6855d1:{NFSU2_TR(0x6855d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6855d3:{NFSU2_TR(0x6855d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6855d6:{NFSU2_TR(0x6855d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6855d9:{NFSU2_TR(0x6855d9);
if(r1(R+518)){{goto L6855df;}}
}
B6855db:L6855db:{c.instructions+=2;NFSU2_TR(0x6855db);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B6855de:{NFSU2_TR(0x6855de);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6855df:L6855df:{c.instructions+=3;NFSU2_TR(0x6855df);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6855e1:{NFSU2_TR(0x6855e1);
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
B6855e3:{NFSU2_TR(0x6855e3);
if(r1(R+518)){{goto L685603;}}
}
B6855e5:L6855e5:{c.instructions+=3;NFSU2_TR(0x6855e5);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B6855e8:{NFSU2_TR(0x6855e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6855e9:{NFSU2_TR(0x6855e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6855eeull));
TAIL_STATIC(0x75df39u,75d);
}
B6855ee:L6855ee:{c.instructions+=3;NFSU2_TR(0x6855ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6855f0:{NFSU2_TR(0x6855f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6855f1:{NFSU2_TR(0x6855f1);
if(r1(R+518)){{goto L6855fa;}}
}
B6855f3:L6855f3:{c.instructions+=4;NFSU2_TR(0x6855f3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6855f4:{NFSU2_TR(0x6855f4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6855f6:{NFSU2_TR(0x6855f6);
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
B6855f8:{NFSU2_TR(0x6855f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6855e5u);}goto L6855e5;}}
}
B6855fa:L6855fa:{c.instructions+=2;NFSU2_TR(0x6855fa);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6855fd:{NFSU2_TR(0x6855fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685757;}}
}
B685603:L685603:{c.instructions+=5;NFSU2_TR(0x685603);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685605:{NFSU2_TR(0x685605);
w4(R+28,u32(0x7b9eacull));
}
B68560a:{NFSU2_TR(0x68560a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B68560d:{NFSU2_TR(0x68560d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68560e:{NFSU2_TR(0x68560e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B685610:L685610:{c.instructions+=1;NFSU2_TR(0x685610);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685612;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685610u);}goto L685610;}}
}
B685612:L685612:{c.instructions+=1;NFSU2_TR(0x685612);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685633;}}
}
B685614:L685614:{c.instructions+=2;NFSU2_TR(0x685614);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B685616:{NFSU2_TR(0x685616);
if(r1(R+518)){{goto L685757;}}
}
B68561c:L68561c:{c.instructions+=7;NFSU2_TR(0x68561c);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
}
B68561f:{NFSU2_TR(0x68561f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B685622:{NFSU2_TR(0x685622);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B685625:{NFSU2_TR(0x685625);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B685627:{NFSU2_TR(0x685627);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B68562a:{NFSU2_TR(0x68562a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68562e:{NFSU2_TR(0x68562e);
{goto L685916;}
}
B685633:L685633:{c.instructions+=5;NFSU2_TR(0x685633);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685635:{NFSU2_TR(0x685635);
w4(R+28,u32(0x7b9ea0ull));
}
B68563a:{NFSU2_TR(0x68563a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B68563d:{NFSU2_TR(0x68563d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68563e:{NFSU2_TR(0x68563e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B685640:L685640:{c.instructions+=1;NFSU2_TR(0x685640);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685642;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685640u);}goto L685640;}}
}
B685642:L685642:{c.instructions+=1;NFSU2_TR(0x685642);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685647;}}
}
B685644:L685644:{c.instructions+=2;NFSU2_TR(0x685644);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B685645:{NFSU2_TR(0x685645);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68561cu);}goto L68561c;}
}
B685647:L685647:{c.instructions+=5;NFSU2_TR(0x685647);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685649:{NFSU2_TR(0x685649);
w4(R+28,u32(0x7b9e90ull));
}
B68564e:{NFSU2_TR(0x68564e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685651:{NFSU2_TR(0x685651);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B685652:{NFSU2_TR(0x685652);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B685654:L685654:{c.instructions+=1;NFSU2_TR(0x685654);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685656;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685654u);}goto L685654;}}
}
B685656:L685656:{c.instructions+=1;NFSU2_TR(0x685656);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68565f;}}
}
B685658:L685658:{c.instructions+=2;NFSU2_TR(0x685658);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68565a:{NFSU2_TR(0x68565a);
{goto L685751;}
}
B68565f:L68565f:{c.instructions+=5;NFSU2_TR(0x68565f);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685661:{NFSU2_TR(0x685661);
w4(R+28,u32(0x7b9e88ull));
}
B685666:{NFSU2_TR(0x685666);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685669:{NFSU2_TR(0x685669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68566a:{NFSU2_TR(0x68566a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68566c:L68566c:{c.instructions+=1;NFSU2_TR(0x68566c);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L68566e;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68566cu);}goto L68566c;}}
}
B68566e:L68566e:{c.instructions+=1;NFSU2_TR(0x68566e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685677;}}
}
B685670:L685670:{c.instructions+=2;NFSU2_TR(0x685670);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685672:{NFSU2_TR(0x685672);
{goto L685751;}
}
B685677:L685677:{c.instructions+=6;NFSU2_TR(0x685677);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685679:{NFSU2_TR(0x685679);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68567a:{NFSU2_TR(0x68567a);
w4(R+28,u32(0x7b9e80ull));
}
B68567f:{NFSU2_TR(0x68567f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685682:{NFSU2_TR(0x685682);
__builtin_memmove((R+4),(R+0),4);
}
B685684:{NFSU2_TR(0x685684);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B685686:L685686:{c.instructions+=1;NFSU2_TR(0x685686);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685688;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685686u);}goto L685686;}}
}
B685688:L685688:{c.instructions+=1;NFSU2_TR(0x685688);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685691;}}
}
B68568a:L68568a:{c.instructions+=2;NFSU2_TR(0x68568a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68568c:{NFSU2_TR(0x68568c);
{goto L685751;}
}
B685691:L685691:{c.instructions+=5;NFSU2_TR(0x685691);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685693:{NFSU2_TR(0x685693);
w4(R+28,u32(0x7b9c88ull));
}
B685698:{NFSU2_TR(0x685698);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B68569b:{NFSU2_TR(0x68569b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68569c:{NFSU2_TR(0x68569c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B68569e:L68569e:{c.instructions+=1;NFSU2_TR(0x68569e);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6856a0;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68569eu);}goto L68569e;}}
}
B6856a0:L6856a0:{c.instructions+=1;NFSU2_TR(0x6856a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6856a9;}}
}
B6856a2:L6856a2:{c.instructions+=2;NFSU2_TR(0x6856a2);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6856a4:{NFSU2_TR(0x6856a4);
{goto L685751;}
}
B6856a9:L6856a9:{c.instructions+=5;NFSU2_TR(0x6856a9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6856ab:{NFSU2_TR(0x6856ab);
w4(R+28,u32(0x7b9e78ull));
}
B6856b0:{NFSU2_TR(0x6856b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6856b3:{NFSU2_TR(0x6856b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6856b4:{NFSU2_TR(0x6856b4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6856b6:L6856b6:{c.instructions+=1;NFSU2_TR(0x6856b6);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6856b8;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6856b6u);}goto L6856b6;}}
}
B6856b8:L6856b8:{c.instructions+=1;NFSU2_TR(0x6856b8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68561cu);}goto L68561c;}}
}
B6856be:L6856be:{c.instructions+=5;NFSU2_TR(0x6856be);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6856c0:{NFSU2_TR(0x6856c0);
w4(R+28,u32(0x7b9e6cull));
}
B6856c5:{NFSU2_TR(0x6856c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6856c8:{NFSU2_TR(0x6856c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6856c9:{NFSU2_TR(0x6856c9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6856cb:L6856cb:{c.instructions+=1;NFSU2_TR(0x6856cb);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6856cd;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6856cbu);}goto L6856cb;}}
}
B6856cd:L6856cd:{c.instructions+=1;NFSU2_TR(0x6856cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6856d3;}}
}
B6856cf:L6856cf:{c.instructions+=2;NFSU2_TR(0x6856cf);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6856d1:{NFSU2_TR(0x6856d1);
{goto L685751;}
}
B6856d3:L6856d3:{c.instructions+=5;NFSU2_TR(0x6856d3);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6856d5:{NFSU2_TR(0x6856d5);
w4(R+28,u32(0x7b9e60ull));
}
B6856da:{NFSU2_TR(0x6856da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6856dd:{NFSU2_TR(0x6856dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6856de:{NFSU2_TR(0x6856de);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6856e0:L6856e0:{c.instructions+=1;NFSU2_TR(0x6856e0);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6856e2;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6856e0u);}goto L6856e0;}}
}
B6856e2:L6856e2:{c.instructions+=1;NFSU2_TR(0x6856e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6856e8;}}
}
B6856e4:L6856e4:{c.instructions+=2;NFSU2_TR(0x6856e4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6856e6:{NFSU2_TR(0x6856e6);
{goto L685751;}
}
B6856e8:L6856e8:{c.instructions+=6;NFSU2_TR(0x6856e8);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6856ea:{NFSU2_TR(0x6856ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6856eb:{NFSU2_TR(0x6856eb);
w4(R+28,u32(0x7b9e54ull));
}
B6856f0:{NFSU2_TR(0x6856f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6856f3:{NFSU2_TR(0x6856f3);
__builtin_memmove((R+4),(R+0),4);
}
B6856f5:{NFSU2_TR(0x6856f5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6856f7:L6856f7:{c.instructions+=1;NFSU2_TR(0x6856f7);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6856f9;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6856f7u);}goto L6856f7;}}
}
B6856f9:L6856f9:{c.instructions+=1;NFSU2_TR(0x6856f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6856ff;}}
}
B6856fb:L6856fb:{c.instructions+=2;NFSU2_TR(0x6856fb);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6856fd:{NFSU2_TR(0x6856fd);
{goto L685751;}
}
B6856ff:L6856ff:{c.instructions+=5;NFSU2_TR(0x6856ff);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685701:{NFSU2_TR(0x685701);
w4(R+28,u32(0x7b9e4cull));
}
B685706:{NFSU2_TR(0x685706);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685709:{NFSU2_TR(0x685709);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68570a:{NFSU2_TR(0x68570a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B68570c:L68570c:{c.instructions+=1;NFSU2_TR(0x68570c);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L68570e;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68570cu);}goto L68570c;}}
}
B68570e:L68570e:{c.instructions+=1;NFSU2_TR(0x68570e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68561cu);}goto L68561c;}}
}
B685714:L685714:{c.instructions+=5;NFSU2_TR(0x685714);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685716:{NFSU2_TR(0x685716);
w4(R+28,u32(0x7b9e48ull));
}
B68571b:{NFSU2_TR(0x68571b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B68571e:{NFSU2_TR(0x68571e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68571f:{NFSU2_TR(0x68571f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B685721:L685721:{c.instructions+=1;NFSU2_TR(0x685721);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685723;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685721u);}goto L685721;}}
}
B685723:L685723:{c.instructions+=1;NFSU2_TR(0x685723);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685729;}}
}
B685725:L685725:{c.instructions+=2;NFSU2_TR(0x685725);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685727:{NFSU2_TR(0x685727);
{goto L685751;}
}
B685729:L685729:{c.instructions+=5;NFSU2_TR(0x685729);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68572b:{NFSU2_TR(0x68572b);
w4(R+28,u32(0x7b9e40ull));
}
B685730:{NFSU2_TR(0x685730);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685733:{NFSU2_TR(0x685733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B685734:{NFSU2_TR(0x685734);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B685736:L685736:{c.instructions+=1;NFSU2_TR(0x685736);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685738;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685736u);}goto L685736;}}
}
B685738:L685738:{c.instructions+=1;NFSU2_TR(0x685738);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68573e;}}
}
B68573a:L68573a:{c.instructions+=2;NFSU2_TR(0x68573a);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68573c:{NFSU2_TR(0x68573c);
{goto L685751;}
}
B68573e:L68573e:{c.instructions+=5;NFSU2_TR(0x68573e);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685740:{NFSU2_TR(0x685740);
w4(R+28,u32(0x7b9e38ull));
}
B685745:{NFSU2_TR(0x685745);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685748:{NFSU2_TR(0x685748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B685749:{NFSU2_TR(0x685749);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68574b:L68574b:{c.instructions+=1;NFSU2_TR(0x68574b);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L68574d;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68574bu);}goto L68574b;}}
}
B68574d:L68574d:{c.instructions+=1;NFSU2_TR(0x68574d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685757;}}
}
B68574f:L68574f:{c.instructions+=1;NFSU2_TR(0x68574f);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685751:L685751:{c.instructions+=2;NFSU2_TR(0x685751);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B685752:{NFSU2_TR(0x685752);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68561cu);}goto L68561c;}
}
B685757:L685757:{c.instructions+=3;NFSU2_TR(0x685757);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68575a:{NFSU2_TR(0x68575a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B68575d:{NFSU2_TR(0x68575d);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B68575f:L68575f:{c.instructions+=3;NFSU2_TR(0x68575f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B685761:{NFSU2_TR(0x685761);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685764:{NFSU2_TR(0x685764);
if(r1(R+518)){{goto L68591f;}}
}
B68576a:L68576a:{c.instructions+=3;NFSU2_TR(0x68576a);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+8))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+8)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B68576d:{NFSU2_TR(0x68576d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685770:{NFSU2_TR(0x685770);
if(r1(R+518)){{goto L685796;}}
}
B685772:L685772:{c.instructions+=3;NFSU2_TR(0x685772);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B685775:{NFSU2_TR(0x685775);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685776:{NFSU2_TR(0x685776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68577bull));
TAIL_STATIC(0x75defau,75d);
}
B68577b:L68577b:{c.instructions+=3;NFSU2_TR(0x68577b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68577d:{NFSU2_TR(0x68577d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68577e:{NFSU2_TR(0x68577e);
if(r1(R+518)){{goto L685786;}}
}
B685780:L685780:{c.instructions+=3;NFSU2_TR(0x685780);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B685781:{NFSU2_TR(0x685781);
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
B685784:{NFSU2_TR(0x685784);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685772u);}goto L685772;}}
}
B685786:L685786:{c.instructions+=2;NFSU2_TR(0x685786);
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
B685789:{NFSU2_TR(0x685789);
if(r1(R+518)){{goto L685796;}}
}
B68578b:L68578b:{c.instructions+=2;NFSU2_TR(0x68578b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68578c:{NFSU2_TR(0x68578c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685791ull));
TAIL_STATIC(0x75d65bu,75d);
}
B685791:L685791:{c.instructions+=3;NFSU2_TR(0x685791);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B685792:{NFSU2_TR(0x685792);
__builtin_memmove((R+12),(R+0),4);
}
B685794:{NFSU2_TR(0x685794);
{goto L685798;}
}
B685796:L685796:{c.instructions+=1;NFSU2_TR(0x685796);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B685798:L685798:{c.instructions+=2;NFSU2_TR(0x685798);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B68579b:{NFSU2_TR(0x68579b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L685a23;}}
}
B6857a1:L6857a1:{c.instructions+=2;NFSU2_TR(0x6857a1);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6857a4:{NFSU2_TR(0x6857a4);
if(r1(R+518)){{goto L6857aa;}}
}
B6857a6:L6857a6:{c.instructions+=2;NFSU2_TR(0x6857a6);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B6857a9:{NFSU2_TR(0x6857a9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6857aa:L6857aa:{c.instructions+=3;NFSU2_TR(0x6857aa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6857ac:{NFSU2_TR(0x6857ac);
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
B6857ae:{NFSU2_TR(0x6857ae);
if(r1(R+518)){{goto L6857ce;}}
}
B6857b0:L6857b0:{c.instructions+=3;NFSU2_TR(0x6857b0);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B6857b3:{NFSU2_TR(0x6857b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6857b4:{NFSU2_TR(0x6857b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6857b9ull));
TAIL_STATIC(0x75df39u,75d);
}
B6857b9:L6857b9:{c.instructions+=3;NFSU2_TR(0x6857b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6857bb:{NFSU2_TR(0x6857bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6857bc:{NFSU2_TR(0x6857bc);
if(r1(R+518)){{goto L6857c5;}}
}
B6857be:L6857be:{c.instructions+=4;NFSU2_TR(0x6857be);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6857bf:{NFSU2_TR(0x6857bf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6857c1:{NFSU2_TR(0x6857c1);
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
B6857c3:{NFSU2_TR(0x6857c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6857b0u);}goto L6857b0;}}
}
B6857c5:L6857c5:{c.instructions+=2;NFSU2_TR(0x6857c5);
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
B6857c8:{NFSU2_TR(0x6857c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685a23;}}
}
B6857ce:L6857ce:{c.instructions+=5;NFSU2_TR(0x6857ce);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6857d0:{NFSU2_TR(0x6857d0);
w4(R+28,u32(0x7b9eacull));
}
B6857d5:{NFSU2_TR(0x6857d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6857d8:{NFSU2_TR(0x6857d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6857d9:{NFSU2_TR(0x6857d9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6857db:L6857db:{c.instructions+=1;NFSU2_TR(0x6857db);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6857dd;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6857dbu);}goto L6857db;}}
}
B6857dd:L6857dd:{c.instructions+=1;NFSU2_TR(0x6857dd);
if(r1(R+518)){{goto L685904;}}
}
B6857e3:L6857e3:{c.instructions+=5;NFSU2_TR(0x6857e3);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6857e5:{NFSU2_TR(0x6857e5);
w4(R+28,u32(0x7b9ea0ull));
}
B6857ea:{NFSU2_TR(0x6857ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6857ed:{NFSU2_TR(0x6857ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6857ee:{NFSU2_TR(0x6857ee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6857f0:L6857f0:{c.instructions+=1;NFSU2_TR(0x6857f0);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6857f2;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6857f0u);}goto L6857f0;}}
}
B6857f2:L6857f2:{c.instructions+=1;NFSU2_TR(0x6857f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6857fa;}}
}
B6857f4:L6857f4:{c.instructions+=2;NFSU2_TR(0x6857f4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6857f5:{NFSU2_TR(0x6857f5);
{goto L685904;}
}
B6857fa:L6857fa:{c.instructions+=5;NFSU2_TR(0x6857fa);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6857fc:{NFSU2_TR(0x6857fc);
w4(R+28,u32(0x7b9e90ull));
}
B685801:{NFSU2_TR(0x685801);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685804:{NFSU2_TR(0x685804);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B685805:{NFSU2_TR(0x685805);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B685807:L685807:{c.instructions+=1;NFSU2_TR(0x685807);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685809;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685807u);}goto L685807;}}
}
B685809:L685809:{c.instructions+=1;NFSU2_TR(0x685809);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685812;}}
}
B68580b:L68580b:{c.instructions+=2;NFSU2_TR(0x68580b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68580d:{NFSU2_TR(0x68580d);
{goto L685903;}
}
B685812:L685812:{c.instructions+=5;NFSU2_TR(0x685812);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685814:{NFSU2_TR(0x685814);
w4(R+28,u32(0x7b9e88ull));
}
B685819:{NFSU2_TR(0x685819);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B68581c:{NFSU2_TR(0x68581c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68581d:{NFSU2_TR(0x68581d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68581f:L68581f:{c.instructions+=1;NFSU2_TR(0x68581f);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685821;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68581fu);}goto L68581f;}}
}
B685821:L685821:{c.instructions+=1;NFSU2_TR(0x685821);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68582a;}}
}
B685823:L685823:{c.instructions+=2;NFSU2_TR(0x685823);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685825:{NFSU2_TR(0x685825);
{goto L685903;}
}
B68582a:L68582a:{c.instructions+=5;NFSU2_TR(0x68582a);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68582c:{NFSU2_TR(0x68582c);
w4(R+28,u32(0x7b9e80ull));
}
B685831:{NFSU2_TR(0x685831);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685834:{NFSU2_TR(0x685834);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B685835:{NFSU2_TR(0x685835);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B685837:L685837:{c.instructions+=1;NFSU2_TR(0x685837);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685839;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685837u);}goto L685837;}}
}
B685839:L685839:{c.instructions+=1;NFSU2_TR(0x685839);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685842;}}
}
B68583b:L68583b:{c.instructions+=2;NFSU2_TR(0x68583b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68583d:{NFSU2_TR(0x68583d);
{goto L685903;}
}
B685842:L685842:{c.instructions+=5;NFSU2_TR(0x685842);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685844:{NFSU2_TR(0x685844);
w4(R+28,u32(0x7b9c88ull));
}
B685849:{NFSU2_TR(0x685849);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B68584c:{NFSU2_TR(0x68584c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68584d:{NFSU2_TR(0x68584d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68584f:L68584f:{c.instructions+=1;NFSU2_TR(0x68584f);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685851;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68584fu);}goto L68584f;}}
}
B685851:L685851:{c.instructions+=1;NFSU2_TR(0x685851);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68585a;}}
}
B685853:L685853:{c.instructions+=2;NFSU2_TR(0x685853);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685855:{NFSU2_TR(0x685855);
{goto L685903;}
}
B68585a:L68585a:{c.instructions+=6;NFSU2_TR(0x68585a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68585c:{NFSU2_TR(0x68585c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68585d:{NFSU2_TR(0x68585d);
w4(R+28,u32(0x7b9e78ull));
}
B685862:{NFSU2_TR(0x685862);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685865:{NFSU2_TR(0x685865);
__builtin_memmove((R+4),(R+0),4);
}
B685867:{NFSU2_TR(0x685867);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B685869:L685869:{c.instructions+=1;NFSU2_TR(0x685869);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L68586b;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685869u);}goto L685869;}}
}
B68586b:L68586b:{c.instructions+=1;NFSU2_TR(0x68586b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685874;}}
}
B68586d:L68586d:{c.instructions+=2;NFSU2_TR(0x68586d);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68586f:{NFSU2_TR(0x68586f);
{goto L685903;}
}
B685874:L685874:{c.instructions+=5;NFSU2_TR(0x685874);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685876:{NFSU2_TR(0x685876);
w4(R+28,u32(0x7b9e6cull));
}
B68587b:{NFSU2_TR(0x68587b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B68587e:{NFSU2_TR(0x68587e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68587f:{NFSU2_TR(0x68587f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B685881:L685881:{c.instructions+=1;NFSU2_TR(0x685881);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685883;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685881u);}goto L685881;}}
}
B685883:L685883:{c.instructions+=1;NFSU2_TR(0x685883);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685889;}}
}
B685885:L685885:{c.instructions+=2;NFSU2_TR(0x685885);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685887:{NFSU2_TR(0x685887);
{goto L685903;}
}
B685889:L685889:{c.instructions+=5;NFSU2_TR(0x685889);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68588b:{NFSU2_TR(0x68588b);
w4(R+28,u32(0x7b9e60ull));
}
B685890:{NFSU2_TR(0x685890);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685893:{NFSU2_TR(0x685893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B685894:{NFSU2_TR(0x685894);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B685896:L685896:{c.instructions+=1;NFSU2_TR(0x685896);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685898;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685896u);}goto L685896;}}
}
B685898:L685898:{c.instructions+=1;NFSU2_TR(0x685898);
if(r1(R+518)){{goto L685904;}}
}
B68589a:L68589a:{c.instructions+=6;NFSU2_TR(0x68589a);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68589c:{NFSU2_TR(0x68589c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68589d:{NFSU2_TR(0x68589d);
w4(R+28,u32(0x7b9e54ull));
}
B6858a2:{NFSU2_TR(0x6858a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6858a5:{NFSU2_TR(0x6858a5);
__builtin_memmove((R+4),(R+0),4);
}
B6858a7:{NFSU2_TR(0x6858a7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6858a9:L6858a9:{c.instructions+=1;NFSU2_TR(0x6858a9);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6858ab;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6858a9u);}goto L6858a9;}}
}
B6858ab:L6858ab:{c.instructions+=1;NFSU2_TR(0x6858ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6858b1;}}
}
B6858ad:L6858ad:{c.instructions+=2;NFSU2_TR(0x6858ad);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6858af:{NFSU2_TR(0x6858af);
{goto L685903;}
}
B6858b1:L6858b1:{c.instructions+=5;NFSU2_TR(0x6858b1);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6858b3:{NFSU2_TR(0x6858b3);
w4(R+28,u32(0x7b9e4cull));
}
B6858b8:{NFSU2_TR(0x6858b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6858bb:{NFSU2_TR(0x6858bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6858bc:{NFSU2_TR(0x6858bc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6858be:L6858be:{c.instructions+=1;NFSU2_TR(0x6858be);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6858c0;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6858beu);}goto L6858be;}}
}
B6858c0:L6858c0:{c.instructions+=1;NFSU2_TR(0x6858c0);
if(r1(R+518)){{goto L685904;}}
}
B6858c2:L6858c2:{c.instructions+=5;NFSU2_TR(0x6858c2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6858c4:{NFSU2_TR(0x6858c4);
w4(R+28,u32(0x7b9e48ull));
}
B6858c9:{NFSU2_TR(0x6858c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6858cc:{NFSU2_TR(0x6858cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6858cd:{NFSU2_TR(0x6858cd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6858cf:L6858cf:{c.instructions+=1;NFSU2_TR(0x6858cf);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6858d1;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6858cfu);}goto L6858cf;}}
}
B6858d1:L6858d1:{c.instructions+=1;NFSU2_TR(0x6858d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6858d7;}}
}
B6858d3:L6858d3:{c.instructions+=2;NFSU2_TR(0x6858d3);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6858d5:{NFSU2_TR(0x6858d5);
{goto L685903;}
}
B6858d7:L6858d7:{c.instructions+=5;NFSU2_TR(0x6858d7);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6858d9:{NFSU2_TR(0x6858d9);
w4(R+28,u32(0x7b9e40ull));
}
B6858de:{NFSU2_TR(0x6858de);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6858e1:{NFSU2_TR(0x6858e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6858e2:{NFSU2_TR(0x6858e2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6858e4:L6858e4:{c.instructions+=1;NFSU2_TR(0x6858e4);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6858e6;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6858e4u);}goto L6858e4;}}
}
B6858e6:L6858e6:{c.instructions+=1;NFSU2_TR(0x6858e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6858ec;}}
}
B6858e8:L6858e8:{c.instructions+=2;NFSU2_TR(0x6858e8);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6858ea:{NFSU2_TR(0x6858ea);
{goto L685903;}
}
B6858ec:L6858ec:{c.instructions+=5;NFSU2_TR(0x6858ec);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6858ee:{NFSU2_TR(0x6858ee);
w4(R+28,u32(0x7b9e38ull));
}
B6858f3:{NFSU2_TR(0x6858f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6858f6:{NFSU2_TR(0x6858f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6858f7:{NFSU2_TR(0x6858f7);
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
B6858f9:L6858f9:{c.instructions+=1;NFSU2_TR(0x6858f9);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6858fb;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6858f9u);}goto L6858f9;}}
}
B6858fb:L6858fb:{c.instructions+=1;NFSU2_TR(0x6858fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685a23;}}
}
B685901:L685901:{c.instructions+=1;NFSU2_TR(0x685901);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685903:L685903:{c.instructions+=1;NFSU2_TR(0x685903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B685904:L685904:{c.instructions+=6;NFSU2_TR(0x685904);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
}
B685907:{NFSU2_TR(0x685907);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B68590a:{NFSU2_TR(0x68590a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B68590d:{NFSU2_TR(0x68590d);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B68590f:{NFSU2_TR(0x68590f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B685913:{NFSU2_TR(0x685913);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685916:L685916:{c.instructions+=2;NFSU2_TR(0x685916);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68591a:{NFSU2_TR(0x68591a);
{goto L6859be;}
}
B68591f:L68591f:{c.instructions+=2;NFSU2_TR(0x68591f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
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
B685922:{NFSU2_TR(0x685922);
if(r1(R+518)){{goto L685a23;}}
}
B685928:L685928:{c.instructions+=6;NFSU2_TR(0x685928);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68592a:{NFSU2_TR(0x68592a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68592b:{NFSU2_TR(0x68592b);
w4(R+28,u32(0x7b9e34ull));
}
B685930:{NFSU2_TR(0x685930);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685933:{NFSU2_TR(0x685933);
__builtin_memmove((R+4),(R+0),4);
}
B685935:{NFSU2_TR(0x685935);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B685937:L685937:{c.instructions+=1;NFSU2_TR(0x685937);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685939;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685937u);}goto L685937;}}
}
B685939:L685939:{c.instructions+=1;NFSU2_TR(0x685939);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685944;}}
}
B68593b:L68593b:{c.instructions+=2;NFSU2_TR(0x68593b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685942:{NFSU2_TR(0x685942);
{goto L6859bb;}
}
B685944:L685944:{c.instructions+=4;NFSU2_TR(0x685944);
w4(R+28,u32(0x7b9e30ull));
}
B685949:{NFSU2_TR(0x685949);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B68594c:{NFSU2_TR(0x68594c);
__builtin_memmove((R+4),(R+0),4);
}
B68594e:{NFSU2_TR(0x68594e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B685950:L685950:{c.instructions+=1;NFSU2_TR(0x685950);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685952;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685950u);}goto L685950;}}
}
B685952:L685952:{c.instructions+=1;NFSU2_TR(0x685952);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68595d;}}
}
B685954:L685954:{c.instructions+=2;NFSU2_TR(0x685954);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68595b:{NFSU2_TR(0x68595b);
{goto L6859bb;}
}
B68595d:L68595d:{c.instructions+=4;NFSU2_TR(0x68595d);
w4(R+28,u32(0x7b9e2cull));
}
B685962:{NFSU2_TR(0x685962);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685965:{NFSU2_TR(0x685965);
__builtin_memmove((R+4),(R+0),4);
}
B685967:{NFSU2_TR(0x685967);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B685969:L685969:{c.instructions+=1;NFSU2_TR(0x685969);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L68596b;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685969u);}goto L685969;}}
}
B68596b:L68596b:{c.instructions+=1;NFSU2_TR(0x68596b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685972;}}
}
B68596d:L68596d:{c.instructions+=2;NFSU2_TR(0x68596d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685970:{NFSU2_TR(0x685970);
{goto L6859bb;}
}
B685972:L685972:{c.instructions+=4;NFSU2_TR(0x685972);
w4(R+28,u32(0x7b9e28ull));
}
B685977:{NFSU2_TR(0x685977);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B68597a:{NFSU2_TR(0x68597a);
__builtin_memmove((R+4),(R+0),4);
}
B68597c:{NFSU2_TR(0x68597c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B68597e:L68597e:{c.instructions+=1;NFSU2_TR(0x68597e);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685980;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68597eu);}goto L68597e;}}
}
B685980:L685980:{c.instructions+=1;NFSU2_TR(0x685980);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68598b;}}
}
B685982:L685982:{c.instructions+=2;NFSU2_TR(0x685982);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685989:{NFSU2_TR(0x685989);
{goto L6859bb;}
}
B68598b:L68598b:{c.instructions+=4;NFSU2_TR(0x68598b);
w4(R+28,u32(0x7b9e24ull));
}
B685990:{NFSU2_TR(0x685990);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B685993:{NFSU2_TR(0x685993);
__builtin_memmove((R+4),(R+0),4);
}
B685995:{NFSU2_TR(0x685995);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B685997:L685997:{c.instructions+=1;NFSU2_TR(0x685997);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685999;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685997u);}goto L685997;}}
}
B685999:L685999:{c.instructions+=1;NFSU2_TR(0x685999);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6859a4;}}
}
B68599b:L68599b:{c.instructions+=2;NFSU2_TR(0x68599b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6859a2:{NFSU2_TR(0x6859a2);
{goto L6859bb;}
}
B6859a4:L6859a4:{c.instructions+=4;NFSU2_TR(0x6859a4);
__builtin_memmove((R+4),(R+0),4);
}
B6859a6:{NFSU2_TR(0x6859a6);
w4(R+28,u32(0x7b9e20ull));
}
B6859ab:{NFSU2_TR(0x6859ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B6859ae:{NFSU2_TR(0x6859ae);
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
B6859b0:L6859b0:{c.instructions+=1;NFSU2_TR(0x6859b0);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6859b2;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6859b0u);}goto L6859b0;}}
}
B6859b2:L6859b2:{c.instructions+=1;NFSU2_TR(0x6859b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685a23;}}
}
B6859b4:L6859b4:{c.instructions+=1;NFSU2_TR(0x6859b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6859bb:L6859bb:{c.instructions+=1;NFSU2_TR(0x6859bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6859be:L6859be:{c.instructions+=1;NFSU2_TR(0x6859be);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6859c0:L6859c0:{c.instructions+=1;NFSU2_TR(0x6859c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6859c3:L6859c3:{c.instructions+=3;NFSU2_TR(0x6859c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6859c6:{NFSU2_TR(0x6859c6);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6859c9:{NFSU2_TR(0x6859c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6851bfu);}goto L6851bf;}}
}
B6859cf:L6859cf:{c.instructions+=3;NFSU2_TR(0x6859cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6859d2:{NFSU2_TR(0x6859d2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6859d5:{NFSU2_TR(0x6859d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6859f3;}}
}
B6859d7:L6859d7:{c.instructions+=2;NFSU2_TR(0x6859d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6859da:{NFSU2_TR(0x6859da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685a1e;}}
}
B6859dc:L6859dc:{c.instructions+=3;NFSU2_TR(0x6859dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6859df:{NFSU2_TR(0x6859df);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7b9478ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0xffffffffull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6859e7:{NFSU2_TR(0x6859e7);
if(r1(R+518)){{goto L685a23;}}
}
B6859e9:L6859e9:{c.instructions+=3;NFSU2_TR(0x6859e9);
u8 U[4];
w4(U+0,u32(0x29ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6859eb:{NFSU2_TR(0x6859eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6859ec:{NFSU2_TR(0x6859ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x10cull));
s4(u32(r4(U+0)),r4(U+4));
}
B6859f3:L6859f3:{c.instructions+=2;NFSU2_TR(0x6859f3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6859f6:{NFSU2_TR(0x6859f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685a14;}}
}
B6859f8:L6859f8:{c.instructions+=2;NFSU2_TR(0x6859f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6859fb:{NFSU2_TR(0x6859fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685a1e;}}
}
B6859fd:L6859fd:{c.instructions+=3;NFSU2_TR(0x6859fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685a00:{NFSU2_TR(0x685a00);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7b94c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0xffffffffull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B685a08:{NFSU2_TR(0x685a08);
if(r1(R+518)){{goto L685a23;}}
}
B685a0a:L685a0a:{c.instructions+=3;NFSU2_TR(0x685a0a);
u8 U[4];
w4(U+0,u32(0x2dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685a0c:{NFSU2_TR(0x685a0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B685a0d:{NFSU2_TR(0x685a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x10cull));
s4(u32(r4(U+0)),r4(U+4));
}
B685a14:L685a14:{c.instructions+=2;NFSU2_TR(0x685a14);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685a17:{NFSU2_TR(0x685a17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685a1e;}}
}
B685a19:L685a19:{c.instructions+=2;NFSU2_TR(0x685a19);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
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
B685a1c:{NFSU2_TR(0x685a1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685a23;}}
}
B685a1e:L685a1e:{c.instructions+=2;NFSU2_TR(0x685a1e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
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
B685a21:{NFSU2_TR(0x685a21);
if(r1(R+518)){{goto L685a2a;}}
}
B685a23:L685a23:{c.instructions+=2;NFSU2_TR(0x685a23);
w4(R+0,u32(0x10dull));
}
B685a28:{NFSU2_TR(0x685a28);
{goto L685a3f;}
}
B685a2a:L685a2a:{c.instructions+=7;NFSU2_TR(0x685a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685a2d:{NFSU2_TR(0x685a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685a30:{NFSU2_TR(0x685a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685a33:{NFSU2_TR(0x685a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685a36:{NFSU2_TR(0x685a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685a39:{NFSU2_TR(0x685a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685a3c:{NFSU2_TR(0x685a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685a3f:L685a3f:{c.instructions+=5;NFSU2_TR(0x685a3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B685a40:{NFSU2_TR(0x685a40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B685a41:{NFSU2_TR(0x685a41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B685a42:{NFSU2_TR(0x685a42);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B685a43:{NFSU2_TR(0x685a43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B685a46:L685a46:{c.instructions+=12;NFSU2_TR(0x685a46);
__builtin_memmove((R+28),(R+28),4);
}
B685a48:{NFSU2_TR(0x685a48);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685a49:{NFSU2_TR(0x685a49);
__builtin_memmove((R+20),(R+16),4);
}
B685a4b:{NFSU2_TR(0x685a4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685a4c:{NFSU2_TR(0x685a4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685a4d:{NFSU2_TR(0x685a4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685a4e:{NFSU2_TR(0x685a4e);
__builtin_memmove((R+28),(R+4),4);
}
B685a50:{NFSU2_TR(0x685a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B685a53:{NFSU2_TR(0x685a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B685a56:{NFSU2_TR(0x685a56);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B685a58:{NFSU2_TR(0x685a58);
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
B685a5a:{NFSU2_TR(0x685a5a);
if(r1(R+518)){{goto L685af0;}}
}
B685a60:L685a60:{c.instructions+=3;NFSU2_TR(0x685a60);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B685a62:{NFSU2_TR(0x685a62);
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
B685a64:{NFSU2_TR(0x685a64);
if(r1(R+518)){{goto L685af0;}}
}
B685a6a:L685a6a:{c.instructions+=1;NFSU2_TR(0x685a6a);
__builtin_memmove((R+24),(R+8),4);
}
B685a6c:L685a6c:{c.instructions+=3;NFSU2_TR(0x685a6c);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B685a6f:{NFSU2_TR(0x685a6f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x77ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x77ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685a72:{NFSU2_TR(0x685a72);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L685aae;}}
}
B685a74:L685a74:{c.instructions+=1;NFSU2_TR(0x685a74);
if(r1(R+518)){{goto L685aa4;}}
}
B685a76:L685a76:{c.instructions+=2;NFSU2_TR(0x685a76);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x61ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B685a79:{NFSU2_TR(0x685a79);
if(r1(R+518)){{goto L685aa4;}}
}
B685a7b:L685a7b:{c.instructions+=2;NFSU2_TR(0x685a7b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B685a7c:{NFSU2_TR(0x685a7c);
if(r1(R+518)){{goto L685ab9;}}
}
B685a7e:L685a7e:{c.instructions+=2;NFSU2_TR(0x685a7e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B685a81:{NFSU2_TR(0x685a81);
if(r1(R+518)){{goto L685ac3;}}
}
B685a83:L685a83:{c.instructions+=2;NFSU2_TR(0x685a83);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0xbull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B685a86:{NFSU2_TR(0x685a86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685acd;}}
}
B685a88:L685a88:{c.instructions+=2;NFSU2_TR(0x685a88);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B685a8a:{NFSU2_TR(0x685a8a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000ull))));
}
B685a8f:L685a8f:{c.instructions+=2;NFSU2_TR(0x685a8f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685a91:{NFSU2_TR(0x685a91);
if(r1(R+518)){{goto L685a98;}}
}
B685a93:L685a93:{c.instructions+=2;NFSU2_TR(0x685a93);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685a96:{NFSU2_TR(0x685a96);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L685acd;}}
}
B685a98:L685a98:{c.instructions+=5;NFSU2_TR(0x685a98);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B685a99:{NFSU2_TR(0x685a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685a9c:{NFSU2_TR(0x685a9c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B685a9e:{NFSU2_TR(0x685a9e);
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
B685aa0:{NFSU2_TR(0x685aa0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685a6cu);}goto L685a6c;}}
}
B685aa2:L685aa2:{c.instructions+=1;NFSU2_TR(0x685aa2);
{goto L685af5;}
}
B685aa4:L685aa4:{c.instructions+=4;NFSU2_TR(0x685aa4);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685aa6:{NFSU2_TR(0x685aa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B685aa7:{NFSU2_TR(0x685aa7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x80000ull))));
}
B685aac:{NFSU2_TR(0x685aac);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685a8fu);}goto L685a8f;}
}
B685aae:L685aae:{c.instructions+=2;NFSU2_TR(0x685aae);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x78ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B685ab1:{NFSU2_TR(0x685ab1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685a88u);}goto L685a88;}}
}
B685ab3:L685ab3:{c.instructions+=2;NFSU2_TR(0x685ab3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B685ab4:{NFSU2_TR(0x685ab4);
if(r1(R+518)){{goto L685ac3;}}
}
B685ab6:L685ab6:{c.instructions+=2;NFSU2_TR(0x685ab6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B685ab7:{NFSU2_TR(0x685ab7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685acd;}}
}
B685ab9:L685ab9:{c.instructions+=4;NFSU2_TR(0x685ab9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685abb:{NFSU2_TR(0x685abb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B685abc:{NFSU2_TR(0x685abc);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x40000ull))));
}
B685ac1:{NFSU2_TR(0x685ac1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685a8fu);}goto L685a8f;}
}
B685ac3:L685ac3:{c.instructions+=4;NFSU2_TR(0x685ac3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B685ac5:{NFSU2_TR(0x685ac5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B685ac6:{NFSU2_TR(0x685ac6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20000ull))));
}
B685acb:{NFSU2_TR(0x685acb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685a8fu);}goto L685a8f;}
}
B685acd:L685acd:{c.instructions+=6;NFSU2_TR(0x685acd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685ace:{NFSU2_TR(0x685ace);
u8 U[4];
w4(U+0,u32(0x7b9ef8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685ad3:{NFSU2_TR(0x685ad3);
u8 U[4];
w4(U+0,u32(0x7d3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685ad8:{NFSU2_TR(0x685ad8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B685adb:{NFSU2_TR(0x685adb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B685add:{NFSU2_TR(0x685add);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685ae2ull));
TAIL_STATIC(0x64307cu,643);
}
B685ae2:L685ae2:{c.instructions+=4;NFSU2_TR(0x685ae2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B685ae5:{NFSU2_TR(0x685ae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685aec:{NFSU2_TR(0x685aec);
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
B685aee:{NFSU2_TR(0x685aee);
{goto L685af5;}
}
B685af0:L685af0:{c.instructions+=1;NFSU2_TR(0x685af0);
w4(R+0,u32(0xf0000ull));
}
B685af5:L685af5:{c.instructions+=4;NFSU2_TR(0x685af5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B685af6:{NFSU2_TR(0x685af6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B685af7:{NFSU2_TR(0x685af7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B685af8:{NFSU2_TR(0x685af8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B685afb:L685afb:{c.instructions+=16;NFSU2_TR(0x685afb);
__builtin_memmove((R+28),(R+28),4);
}
B685afd:{NFSU2_TR(0x685afd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685afe:{NFSU2_TR(0x685afe);
__builtin_memmove((R+20),(R+16),4);
}
B685b00:{NFSU2_TR(0x685b00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685b01:{NFSU2_TR(0x685b01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685b02:{NFSU2_TR(0x685b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685b05:{NFSU2_TR(0x685b05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685b06:{NFSU2_TR(0x685b06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685b07:{NFSU2_TR(0x685b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B685b0a:{NFSU2_TR(0x685b0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685b0b:{NFSU2_TR(0x685b0b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B685b0d:{NFSU2_TR(0x685b0d);
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
B685b0f:{NFSU2_TR(0x685b0f);
__builtin_memmove((R+12),(R+4),4);
}
B685b11:{NFSU2_TR(0x685b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685b14:{NFSU2_TR(0x685b14);
__builtin_memmove((R+0),(R+24),4);
}
B685b16:{NFSU2_TR(0x685b16);
if(r1(R+518)){{goto L685bab;}}
}
B685b1c:L685b1c:{c.instructions+=2;NFSU2_TR(0x685b1c);
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
B685b1f:{NFSU2_TR(0x685b1f);
if(r1(R+518)){{goto L685bab;}}
}
B685b25:L685b25:{c.instructions+=1;NFSU2_TR(0x685b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685b2c:L685b2c:{c.instructions+=3;NFSU2_TR(0x685b2c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B685b2e:{NFSU2_TR(0x685b2e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B685b30:{NFSU2_TR(0x685b30);
if(r1(R+518)){{goto L685b51;}}
}
B685b32:L685b32:{c.instructions+=3;NFSU2_TR(0x685b32);
w4(R+8,u32(s32(s8(r1(R+8)))));
}
B685b35:{NFSU2_TR(0x685b35);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x77ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x77ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685b38:{NFSU2_TR(0x685b38);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L685b92;}}
}
B685b3a:L685b3a:{c.instructions+=1;NFSU2_TR(0x685b3a);
if(r1(R+518)){{goto L685b8d;}}
}
B685b3c:L685b3c:{c.instructions+=2;NFSU2_TR(0x685b3c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x61ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B685b3f:{NFSU2_TR(0x685b3f);
if(r1(R+518)){{goto L685b8d;}}
}
B685b41:L685b41:{c.instructions+=2;NFSU2_TR(0x685b41);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B685b42:{NFSU2_TR(0x685b42);
if(r1(R+518)){{goto L685b9d;}}
}
B685b44:L685b44:{c.instructions+=2;NFSU2_TR(0x685b44);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B685b47:{NFSU2_TR(0x685b47);
if(r1(R+518)){{goto L685ba1;}}
}
B685b49:L685b49:{c.instructions+=2;NFSU2_TR(0x685b49);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0xbull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B685b4c:{NFSU2_TR(0x685b4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685b6a;}}
}
B685b4e:L685b4e:{c.instructions+=1;NFSU2_TR(0x685b4e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B685b50:L685b50:{c.instructions+=1;NFSU2_TR(0x685b50);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B685b51:L685b51:{c.instructions+=7;NFSU2_TR(0x685b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B685b54:{NFSU2_TR(0x685b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B685b58:{NFSU2_TR(0x685b58);
__builtin_memmove((R+8),(R+28),4);
}
B685b5a:{NFSU2_TR(0x685b5a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B685b5c:{NFSU2_TR(0x685b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B685b5f:{NFSU2_TR(0x685b5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x18ull))));
}
B685b63:{NFSU2_TR(0x685b63);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685b2cu);}goto L685b2c;}}
}
B685b65:L685b65:{c.instructions+=2;NFSU2_TR(0x685b65);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
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
B685b68:{NFSU2_TR(0x685b68);
if(r1(R+518)){{goto L685ba6;}}
}
B685b6a:L685b6a:{c.instructions+=6;NFSU2_TR(0x685b6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685b6b:{NFSU2_TR(0x685b6b);
u8 U[4];
w4(U+0,u32(0x7b9f0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685b70:{NFSU2_TR(0x685b70);
u8 U[4];
w4(U+0,u32(0x7d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685b75:{NFSU2_TR(0x685b75);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B685b78:{NFSU2_TR(0x685b78);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B685b7a:{NFSU2_TR(0x685b7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685b7full));
TAIL_STATIC(0x64307cu,643);
}
B685b7f:L685b7f:{c.instructions+=4;NFSU2_TR(0x685b7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B685b82:{NFSU2_TR(0x685b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685b89:{NFSU2_TR(0x685b89);
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
B685b8b:{NFSU2_TR(0x685b8b);
{goto L685bb0;}
}
B685b8d:L685b8d:{c.instructions+=1;NFSU2_TR(0x685b8d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685b8f:L685b8f:{c.instructions+=2;NFSU2_TR(0x685b8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B685b90:{NFSU2_TR(0x685b90);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685b50u);}goto L685b50;}
}
B685b92:L685b92:{c.instructions+=2;NFSU2_TR(0x685b92);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x78ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B685b95:{NFSU2_TR(0x685b95);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685b4eu);}goto L685b4e;}}
}
B685b97:L685b97:{c.instructions+=2;NFSU2_TR(0x685b97);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B685b98:{NFSU2_TR(0x685b98);
if(r1(R+518)){{goto L685ba1;}}
}
B685b9a:L685b9a:{c.instructions+=2;NFSU2_TR(0x685b9a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B685b9b:{NFSU2_TR(0x685b9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685b6au);}goto L685b6a;}}
}
B685b9d:L685b9d:{c.instructions+=2;NFSU2_TR(0x685b9d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685b9f:{NFSU2_TR(0x685b9f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685b8fu);}goto L685b8f;}
}
B685ba1:L685ba1:{c.instructions+=3;NFSU2_TR(0x685ba1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B685ba3:{NFSU2_TR(0x685ba3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B685ba4:{NFSU2_TR(0x685ba4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685b50u);}goto L685b50;}
}
B685ba6:L685ba6:{c.instructions+=2;NFSU2_TR(0x685ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685ba9:{NFSU2_TR(0x685ba9);
{goto L685bb0;}
}
B685bab:L685bab:{c.instructions+=1;NFSU2_TR(0x685bab);
w4(R+0,u32(0xe40000ull));
}
B685bb0:L685bb0:{c.instructions+=5;NFSU2_TR(0x685bb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B685bb1:{NFSU2_TR(0x685bb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B685bb2:{NFSU2_TR(0x685bb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B685bb3:{NFSU2_TR(0x685bb3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B685bb4:{NFSU2_TR(0x685bb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B685bb7:L685bb7:{c.instructions+=9;NFSU2_TR(0x685bb7);
__builtin_memmove((R+28),(R+28),4);
}
B685bb9:{NFSU2_TR(0x685bb9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685bba:{NFSU2_TR(0x685bba);
__builtin_memmove((R+20),(R+16),4);
}
B685bbc:{NFSU2_TR(0x685bbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685bbd:{NFSU2_TR(0x685bbd);
__builtin_memmove((R+24),(R+4),4);
}
B685bbf:{NFSU2_TR(0x685bbf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685bc0:{NFSU2_TR(0x685bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B685bc3:{NFSU2_TR(0x685bc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B685bc5:{NFSU2_TR(0x685bc5);
if(r1(R+518)){{goto L685c04;}}
}
B685bc7:L685bc7:{c.instructions+=4;NFSU2_TR(0x685bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B685bca:{NFSU2_TR(0x685bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B685bcd:{NFSU2_TR(0x685bcd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B685bcf:{NFSU2_TR(0x685bcf);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L685c04;}}
}
B685bd1:L685bd1:{c.instructions+=13;NFSU2_TR(0x685bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685bd4:{NFSU2_TR(0x685bd4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685bd5:{NFSU2_TR(0x685bd5);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B685bd7:{NFSU2_TR(0x685bd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685bd8:{NFSU2_TR(0x685bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B685bdb:{NFSU2_TR(0x685bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B685bde:{NFSU2_TR(0x685bde);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685bdf:{NFSU2_TR(0x685bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685be2:{NFSU2_TR(0x685be2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B685be5:{NFSU2_TR(0x685be5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B685be7:{NFSU2_TR(0x685be7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B685bea:{NFSU2_TR(0x685bea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685beb:{NFSU2_TR(0x685beb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685beeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B685bee:L685bee:{c.instructions+=3;NFSU2_TR(0x685bee);
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
B685bf0:{NFSU2_TR(0x685bf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B685bf1:{NFSU2_TR(0x685bf1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L685bfc;}}
}
B685bf3:L685bf3:{c.instructions+=4;NFSU2_TR(0x685bf3);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B685bf5:{NFSU2_TR(0x685bf5);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B685bf6:{NFSU2_TR(0x685bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685bf9:{NFSU2_TR(0x685bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685bfc:L685bfc:{c.instructions+=3;NFSU2_TR(0x685bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B685bff:{NFSU2_TR(0x685bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685c02:{NFSU2_TR(0x685c02);
{goto L685c06;}
}
B685c04:L685c04:{c.instructions+=1;NFSU2_TR(0x685c04);
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
B685c06:L685c06:{c.instructions+=4;NFSU2_TR(0x685c06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B685c07:{NFSU2_TR(0x685c07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B685c08:{NFSU2_TR(0x685c08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B685c09:{NFSU2_TR(0x685c09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B685c0c:L685c0c:{c.instructions+=13;NFSU2_TR(0x685c0c);
__builtin_memmove((R+28),(R+28),4);
}
B685c0e:{NFSU2_TR(0x685c0e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685c0f:{NFSU2_TR(0x685c0f);
__builtin_memmove((R+20),(R+16),4);
}
B685c11:{NFSU2_TR(0x685c11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685c12:{NFSU2_TR(0x685c12);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685c13:{NFSU2_TR(0x685c13);
__builtin_memmove((R+12),(R+4),4);
}
B685c15:{NFSU2_TR(0x685c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685c18:{NFSU2_TR(0x685c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B685c1b:{NFSU2_TR(0x685c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B685c1e:{NFSU2_TR(0x685c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685c21:{NFSU2_TR(0x685c21);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685c23:{NFSU2_TR(0x685c23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685c24:{NFSU2_TR(0x685c24);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L685c95;}}
}
B685c26:L685c26:{c.instructions+=3;NFSU2_TR(0x685c26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B685c28:{NFSU2_TR(0x685c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685c2b:{NFSU2_TR(0x685c2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685c34;}}
}
B685c2d:L685c2d:{c.instructions+=1;NFSU2_TR(0x685c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685c34:L685c34:{c.instructions+=2;NFSU2_TR(0x685c34);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685c37:{NFSU2_TR(0x685c37);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L685c4a;}}
}
B685c39:L685c39:{c.instructions+=2;NFSU2_TR(0x685c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685c3c:{NFSU2_TR(0x685c3c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B685c3e:L685c3e:{c.instructions+=5;NFSU2_TR(0x685c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B685c41:{NFSU2_TR(0x685c41);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+4))));
}
B685c43:{NFSU2_TR(0x685c43);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685c45:{NFSU2_TR(0x685c45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685c48:{NFSU2_TR(0x685c48);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685c3eu);}goto L685c3e;}}
}
B685c4a:L685c4a:{c.instructions+=4;NFSU2_TR(0x685c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685c4d:{NFSU2_TR(0x685c4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B685c50:{NFSU2_TR(0x685c50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685c51:{NFSU2_TR(0x685c51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685c56ull));
TAIL_STATIC(0x575620u,575);
}
B685c56:L685c56:{c.instructions+=5;NFSU2_TR(0x685c56);
__builtin_memmove((R+28),(R+0),4);
}
B685c58:{NFSU2_TR(0x685c58);
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
B685c5a:{NFSU2_TR(0x685c5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B685c5b:{NFSU2_TR(0x685c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685c5e:{NFSU2_TR(0x685c5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685c67;}}
}
B685c60:L685c60:{c.instructions+=2;NFSU2_TR(0x685c60);
w4(R+0,u32(0x8007000eull));
}
B685c65:{NFSU2_TR(0x685c65);
{goto L685c97;}
}
B685c67:L685c67:{c.instructions+=6;NFSU2_TR(0x685c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B685c6a:{NFSU2_TR(0x685c6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B685c6d:{NFSU2_TR(0x685c6d);
__builtin_memmove((R+0),(R+4),4);
}
B685c6f:{NFSU2_TR(0x685c6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685c70:{NFSU2_TR(0x685c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B685c73:{NFSU2_TR(0x685c73);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B685c76:L685c76:{c.instructions+=1;NFSU2_TR(0x685c76);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L685c78;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685c76u);}goto L685c76;}
}
B685c78:L685c78:{c.instructions+=2;NFSU2_TR(0x685c78);
__builtin_memmove((R+4),(R+0),4);
}
B685c7a:{NFSU2_TR(0x685c7a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B685c7d:L685c7d:{c.instructions+=1;NFSU2_TR(0x685c7d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L685c7f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685c7du);}goto L685c7d;}
}
B685c7f:L685c7f:{c.instructions+=2;NFSU2_TR(0x685c7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B685c82:{NFSU2_TR(0x685c82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685c87ull));
TAIL_STATIC(0x575630u,575);
}
B685c87:L685c87:{c.instructions+=6;NFSU2_TR(0x685c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685c8a:{NFSU2_TR(0x685c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685c8d:{NFSU2_TR(0x685c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685c90:{NFSU2_TR(0x685c90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B685c91:{NFSU2_TR(0x685c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685c94:{NFSU2_TR(0x685c94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B685c95:L685c95:{c.instructions+=1;NFSU2_TR(0x685c95);
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
B685c97:L685c97:{c.instructions+=4;NFSU2_TR(0x685c97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B685c98:{NFSU2_TR(0x685c98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B685c99:{NFSU2_TR(0x685c99);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B685c9a:{NFSU2_TR(0x685c9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B685c9d:L685c9d:{c.instructions+=7;NFSU2_TR(0x685c9d);
__builtin_memmove((R+28),(R+28),4);
}
B685c9f:{NFSU2_TR(0x685c9f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685ca0:{NFSU2_TR(0x685ca0);
__builtin_memmove((R+20),(R+16),4);
}
B685ca2:{NFSU2_TR(0x685ca2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685ca3:{NFSU2_TR(0x685ca3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685ca5:{NFSU2_TR(0x685ca5);
__builtin_memmove((R+24),(R+4),4);
}
B685ca7:{NFSU2_TR(0x685ca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685cacull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685c0cu);}goto L685c0c;}
}
B685cac:L685cac:{c.instructions+=2;NFSU2_TR(0x685cac);
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
B685cae:{NFSU2_TR(0x685cae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L685cc1;}}
}
B685cb0:L685cb0:{c.instructions+=6;NFSU2_TR(0x685cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685cb3:{NFSU2_TR(0x685cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B685cb6:{NFSU2_TR(0x685cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B685cb9:{NFSU2_TR(0x685cb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B685cbc:{NFSU2_TR(0x685cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B685cbf:{NFSU2_TR(0x685cbf);
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
B685cc1:L685cc1:{c.instructions+=3;NFSU2_TR(0x685cc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B685cc2:{NFSU2_TR(0x685cc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B685cc3:{NFSU2_TR(0x685cc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B685cc6:L685cc6:{c.instructions+=19;NFSU2_TR(0x685cc6);
__builtin_memmove((R+28),(R+28),4);
}
B685cc8:{NFSU2_TR(0x685cc8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685cc9:{NFSU2_TR(0x685cc9);
__builtin_memmove((R+20),(R+16),4);
}
B685ccb:{NFSU2_TR(0x685ccb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B685cce:{NFSU2_TR(0x685cce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685ccf:{NFSU2_TR(0x685ccf);
__builtin_memmove((R+24),(R+4),4);
}
B685cd1:{NFSU2_TR(0x685cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685cd4:{NFSU2_TR(0x685cd4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B685cd7:{NFSU2_TR(0x685cd7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685cd8:{NFSU2_TR(0x685cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B685cdb:{NFSU2_TR(0x685cdb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B685cdd:{NFSU2_TR(0x685cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685ce0:{NFSU2_TR(0x685ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685ce3:{NFSU2_TR(0x685ce3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B685ce4:{NFSU2_TR(0x685ce4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B685ce6:{NFSU2_TR(0x685ce6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685ce9:{NFSU2_TR(0x685ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685cec:{NFSU2_TR(0x685cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685cef:{NFSU2_TR(0x685cef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685cf8;}}
}
B685cf1:L685cf1:{c.instructions+=1;NFSU2_TR(0x685cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685cf8:L685cf8:{c.instructions+=2;NFSU2_TR(0x685cf8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685cfb:{NFSU2_TR(0x685cfb);
if(r1(R+518)){{goto L685d64;}}
}
B685cfd:L685cfd:{c.instructions+=2;NFSU2_TR(0x685cfd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685d00:{NFSU2_TR(0x685d00);
if(r1(R+518)){{goto L685d58;}}
}
B685d02:L685d02:{c.instructions+=2;NFSU2_TR(0x685d02);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685d05:{NFSU2_TR(0x685d05);
if(r1(R+518)){{goto L685d58;}}
}
B685d07:L685d07:{c.instructions+=2;NFSU2_TR(0x685d07);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685d0a:{NFSU2_TR(0x685d0a);
if(r1(R+518)){{goto L685d58;}}
}
B685d0c:L685d0c:{c.instructions+=2;NFSU2_TR(0x685d0c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685d0f:{NFSU2_TR(0x685d0f);
if(r1(R+518)){{goto L685d58;}}
}
B685d11:L685d11:{c.instructions+=2;NFSU2_TR(0x685d11);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685d14:{NFSU2_TR(0x685d14);
if(r1(R+518)){{goto L685d2a;}}
}
B685d16:L685d16:{c.instructions+=2;NFSU2_TR(0x685d16);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685d19:{NFSU2_TR(0x685d19);
if(r1(R+518)){{goto L685d2a;}}
}
B685d1b:L685d1b:{c.instructions+=2;NFSU2_TR(0x685d1b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685d1e:{NFSU2_TR(0x685d1e);
if(r1(R+518)){{goto L685d2a;}}
}
B685d20:L685d20:{c.instructions+=2;NFSU2_TR(0x685d20);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685d23:{NFSU2_TR(0x685d23);
if(r1(R+518)){{goto L685d2a;}}
}
B685d25:L685d25:{c.instructions+=2;NFSU2_TR(0x685d25);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685d28:{NFSU2_TR(0x685d28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685d64;}}
}
B685d2a:L685d2a:{c.instructions+=3;NFSU2_TR(0x685d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685d2d:{NFSU2_TR(0x685d2d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685d2f:{NFSU2_TR(0x685d2f);
if(r1(R+518)){{goto L685d64;}}
}
B685d31:L685d31:{c.instructions+=2;NFSU2_TR(0x685d31);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685d34:{NFSU2_TR(0x685d34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685d64;}}
}
B685d36:L685d36:{c.instructions+=2;NFSU2_TR(0x685d36);
u8 U[4];
w4(U+0,u32(0x7ba1b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685d3b:{NFSU2_TR(0x685d3b);
u8 U[4];
w4(U+0,u32(0x7eaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685d40:L685d40:{c.instructions+=4;NFSU2_TR(0x685d40);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B685d43:{NFSU2_TR(0x685d43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685d44:{NFSU2_TR(0x685d44);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B685d46:{NFSU2_TR(0x685d46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685d4bull));
TAIL_STATIC(0x64307cu,643);
}
B685d4b:L685d4b:{c.instructions+=3;NFSU2_TR(0x685d4b);
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
B685d4e:{NFSU2_TR(0x685d4e);
w4(R+0,u32(0x80004005ull));
}
B685d53:{NFSU2_TR(0x685d53);
TAIL_STATIC(0x68643cu,686);
}
B685d58:L685d58:{c.instructions+=3;NFSU2_TR(0x685d58);
u8 U[4];
w4(U+0,u32(0x7ba160ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685d5d:{NFSU2_TR(0x685d5d);
u8 U[4];
w4(U+0,u32(0x7e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685d62:{NFSU2_TR(0x685d62);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685d40u);}goto L685d40;}
}
B685d64:L685d64:{c.instructions+=4;NFSU2_TR(0x685d64);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685d65:{NFSU2_TR(0x685d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B685d68:{NFSU2_TR(0x685d68);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685d6a:{NFSU2_TR(0x685d6a);
if(r1(R+518)){{goto L685e14;}}
}
B685d70:L685d70:{c.instructions+=2;NFSU2_TR(0x685d70);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685d74:{NFSU2_TR(0x685d74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685e14;}}
}
B685d7a:L685d7a:{c.instructions+=3;NFSU2_TR(0x685d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B685d7d:{NFSU2_TR(0x685d7d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685d81:{NFSU2_TR(0x685d81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685d86;}}
}
B685d83:L685d83:{c.instructions+=1;NFSU2_TR(0x685d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685d86:L685d86:{c.instructions+=2;NFSU2_TR(0x685d86);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685d89:{NFSU2_TR(0x685d89);
if(r1(R+518)){{goto L685daa;}}
}
B685d8b:L685d8b:{c.instructions+=6;NFSU2_TR(0x685d8b);
u8 U[4];
w4(U+0,u32(0x7ba120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685d90:{NFSU2_TR(0x685d90);
u8 U[4];
w4(U+0,u32(0x7deull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685d95:{NFSU2_TR(0x685d95);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B685d98:{NFSU2_TR(0x685d98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685d99:{NFSU2_TR(0x685d99);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B685d9b:{NFSU2_TR(0x685d9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685da0ull));
TAIL_STATIC(0x64307cu,643);
}
B685da0:L685da0:{c.instructions+=2;NFSU2_TR(0x685da0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B685da3:{NFSU2_TR(0x685da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685daa:L685daa:{c.instructions+=3;NFSU2_TR(0x685daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B685dad:{NFSU2_TR(0x685dad);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B685daf:{NFSU2_TR(0x685daf);
if(r1(R+518)){{goto L685e14;}}
}
B685db1:L685db1:{c.instructions+=3;NFSU2_TR(0x685db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685db4:{NFSU2_TR(0x685db4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B685db7:{NFSU2_TR(0x685db7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L685df5;}}
}
B685db9:L685db9:{c.instructions+=2;NFSU2_TR(0x685db9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685dbc:{NFSU2_TR(0x685dbc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L685df5;}}
}
B685dbe:L685dbe:{c.instructions+=2;NFSU2_TR(0x685dbe);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685dc2:{NFSU2_TR(0x685dc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685dcb;}}
}
B685dc4:L685dc4:{c.instructions+=1;NFSU2_TR(0x685dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685dcb:L685dcb:{c.instructions+=2;NFSU2_TR(0x685dcb);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685dcf:{NFSU2_TR(0x685dcf);
if(r1(R+518)){{goto L685df0;}}
}
B685dd1:L685dd1:{c.instructions+=6;NFSU2_TR(0x685dd1);
u8 U[4];
w4(U+0,u32(0x7ba0d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685dd6:{NFSU2_TR(0x685dd6);
u8 U[4];
w4(U+0,u32(0x7d9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685ddb:{NFSU2_TR(0x685ddb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B685dde:{NFSU2_TR(0x685dde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685ddf:{NFSU2_TR(0x685ddf);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B685de1:{NFSU2_TR(0x685de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685de6ull));
TAIL_STATIC(0x64307cu,643);
}
B685de6:L685de6:{c.instructions+=2;NFSU2_TR(0x685de6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B685de9:{NFSU2_TR(0x685de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685df0:L685df0:{c.instructions+=2;NFSU2_TR(0x685df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B685df3:{NFSU2_TR(0x685df3);
{goto L685e14;}
}
B685df5:L685df5:{c.instructions+=6;NFSU2_TR(0x685df5);
u8 U[4];
w4(U+0,u32(0x7ba078ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685dfa:{NFSU2_TR(0x685dfa);
u8 U[4];
w4(U+0,u32(0x7d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685dff:{NFSU2_TR(0x685dff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B685e02:{NFSU2_TR(0x685e02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685e03:{NFSU2_TR(0x685e03);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B685e05:{NFSU2_TR(0x685e05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685e0aull));
TAIL_STATIC(0x64307cu,643);
}
B685e0a:L685e0a:{c.instructions+=2;NFSU2_TR(0x685e0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B685e0d:{NFSU2_TR(0x685e0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685e14:L685e14:{c.instructions+=3;NFSU2_TR(0x685e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685e17:{NFSU2_TR(0x685e17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B685e19:{NFSU2_TR(0x685e19);
if(r1(R+518)){{goto L685ec3;}}
}
B685e1f:L685e1f:{c.instructions+=2;NFSU2_TR(0x685e1f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685e23:{NFSU2_TR(0x685e23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685ec3;}}
}
B685e29:L685e29:{c.instructions+=3;NFSU2_TR(0x685e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685e2c:{NFSU2_TR(0x685e2c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B685e2e:{NFSU2_TR(0x685e2e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L685e35;}}
}
B685e30:L685e30:{c.instructions+=2;NFSU2_TR(0x685e30);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685e33:{NFSU2_TR(0x685e33);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L685e3f;}}
}
B685e35:L685e35:{c.instructions+=2;NFSU2_TR(0x685e35);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B685e38:{NFSU2_TR(0x685e38);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L685e5e;}}
}
B685e3a:L685e3a:{c.instructions+=2;NFSU2_TR(0x685e3a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685e3d:{NFSU2_TR(0x685e3d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L685e5e;}}
}
B685e3f:L685e3f:{c.instructions+=6;NFSU2_TR(0x685e3f);
u8 U[4];
w4(U+0,u32(0x7ba044ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685e44:{NFSU2_TR(0x685e44);
u8 U[4];
w4(U+0,u32(0x7e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685e49:{NFSU2_TR(0x685e49);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B685e4c:{NFSU2_TR(0x685e4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685e4d:{NFSU2_TR(0x685e4d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B685e4f:{NFSU2_TR(0x685e4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685e54ull));
TAIL_STATIC(0x64307cu,643);
}
B685e54:L685e54:{c.instructions+=2;NFSU2_TR(0x685e54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B685e57:{NFSU2_TR(0x685e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685e5e:L685e5e:{c.instructions+=4;NFSU2_TR(0x685e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B685e61:{NFSU2_TR(0x685e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B685e64:{NFSU2_TR(0x685e64);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685e68:{NFSU2_TR(0x685e68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685e71;}}
}
B685e6a:L685e6a:{c.instructions+=1;NFSU2_TR(0x685e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685e71:L685e71:{c.instructions+=3;NFSU2_TR(0x685e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685e74:{NFSU2_TR(0x685e74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B685e76:{NFSU2_TR(0x685e76);
if(r1(R+518)){{goto L685e9e;}}
}
B685e78:L685e78:{c.instructions+=2;NFSU2_TR(0x685e78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B685e7d:{NFSU2_TR(0x685e7d);
if(r1(R+518)){{goto L685e9e;}}
}
B685e7f:L685e7f:{c.instructions+=6;NFSU2_TR(0x685e7f);
u8 U[4];
w4(U+0,u32(0x7ba014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685e84:{NFSU2_TR(0x685e84);
u8 U[4];
w4(U+0,u32(0x7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685e89:{NFSU2_TR(0x685e89);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B685e8c:{NFSU2_TR(0x685e8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685e8d:{NFSU2_TR(0x685e8d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B685e8f:{NFSU2_TR(0x685e8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685e94ull));
TAIL_STATIC(0x64307cu,643);
}
B685e94:L685e94:{c.instructions+=2;NFSU2_TR(0x685e94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B685e97:{NFSU2_TR(0x685e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685e9e:L685e9e:{c.instructions+=2;NFSU2_TR(0x685e9e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685ea2:{NFSU2_TR(0x685ea2);
if(r1(R+518)){{goto L685ec3;}}
}
B685ea4:L685ea4:{c.instructions+=6;NFSU2_TR(0x685ea4);
u8 U[4];
w4(U+0,u32(0x7b9fc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685ea9:{NFSU2_TR(0x685ea9);
u8 U[4];
w4(U+0,u32(0x7e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685eae:{NFSU2_TR(0x685eae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B685eb1:{NFSU2_TR(0x685eb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685eb2:{NFSU2_TR(0x685eb2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B685eb4:{NFSU2_TR(0x685eb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685eb9ull));
TAIL_STATIC(0x64307cu,643);
}
B685eb9:L685eb9:{c.instructions+=2;NFSU2_TR(0x685eb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B685ebc:{NFSU2_TR(0x685ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685ec3:L685ec3:{c.instructions+=3;NFSU2_TR(0x685ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B685ec7:{NFSU2_TR(0x685ec7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B685eca:{NFSU2_TR(0x685eca);
__builtin_memmove((R+12),(R+0),4);
}
B685ecc:L685ecc:{c.instructions+=3;NFSU2_TR(0x685ecc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B685ece:{NFSU2_TR(0x685ece);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B685ed0:{NFSU2_TR(0x685ed0);
if(r1(R+518)){{goto L685f42;}}
}
B685ed2:L685ed2:{c.instructions+=4;NFSU2_TR(0x685ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685ed5:{NFSU2_TR(0x685ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B685ed8:{NFSU2_TR(0x685ed8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x51ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685edb:{NFSU2_TR(0x685edb);
if(r1(R+518)){{goto L685f36;}}
}
B685edd:L685edd:{c.instructions+=2;NFSU2_TR(0x685edd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685ee0:{NFSU2_TR(0x685ee0);
if(r1(R+518)){{goto L685f36;}}
}
B685ee2:L685ee2:{c.instructions+=2;NFSU2_TR(0x685ee2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685ee5:{NFSU2_TR(0x685ee5);
if(r1(R+518)){{goto L685f36;}}
}
B685ee7:L685ee7:{c.instructions+=2;NFSU2_TR(0x685ee7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685eeb:{NFSU2_TR(0x685eeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685ef4;}}
}
B685eed:L685eed:{c.instructions+=1;NFSU2_TR(0x685eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685ef4:L685ef4:{c.instructions+=3;NFSU2_TR(0x685ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685ef7:{NFSU2_TR(0x685ef7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B685ef9:{NFSU2_TR(0x685ef9);
if(r1(R+518)){{goto L685f36;}}
}
B685efb:L685efb:{c.instructions+=2;NFSU2_TR(0x685efb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685eff:{NFSU2_TR(0x685eff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L685f08;}}
}
B685f01:L685f01:{c.instructions+=1;NFSU2_TR(0x685f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685f08:L685f08:{c.instructions+=2;NFSU2_TR(0x685f08);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685f0c:{NFSU2_TR(0x685f0c);
if(r1(R+518)){{goto L685f2d;}}
}
B685f0e:L685f0e:{c.instructions+=6;NFSU2_TR(0x685f0e);
u8 U[4];
w4(U+0,u32(0x7ba0d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685f13:{NFSU2_TR(0x685f13);
u8 U[4];
w4(U+0,u32(0x7d9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685f18:{NFSU2_TR(0x685f18);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B685f1b:{NFSU2_TR(0x685f1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685f1c:{NFSU2_TR(0x685f1c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B685f1e:{NFSU2_TR(0x685f1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685f23ull));
TAIL_STATIC(0x64307cu,643);
}
B685f23:L685f23:{c.instructions+=2;NFSU2_TR(0x685f23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B685f26:{NFSU2_TR(0x685f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B685f2d:L685f2d:{c.instructions+=2;NFSU2_TR(0x685f2d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B685f31:{NFSU2_TR(0x685f31);
if(r1(R+518)){{goto L685f36;}}
}
B685f33:L685f33:{c.instructions+=1;NFSU2_TR(0x685f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B685f36:L685f36:{c.instructions+=4;NFSU2_TR(0x685f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B685f39:{NFSU2_TR(0x685f39);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B685f3c:{NFSU2_TR(0x685f3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B685f40:{NFSU2_TR(0x685f40);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685eccu);}goto L685ecc;}}
}
B685f42:L685f42:{c.instructions+=3;NFSU2_TR(0x685f42);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B685f45:{NFSU2_TR(0x685f45);
__builtin_memmove((R+4),(R+24),4);
}
B685f47:{NFSU2_TR(0x685f47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685f4cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x685c0cu);}goto L685c0c;}
}
B685f4c:L685f4c:{c.instructions+=2;NFSU2_TR(0x685f4c);
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
B685f4e:{NFSU2_TR(0x685f4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x68643bu,686);}
}
B685f54:L685f54:{c.instructions+=6;NFSU2_TR(0x685f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685f57:{NFSU2_TR(0x685f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B685f5a:{NFSU2_TR(0x685f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B685f5d:{NFSU2_TR(0x685f5d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685f60:{NFSU2_TR(0x685f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B685f63:{NFSU2_TR(0x685f63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x686070u,686);}
}
B685f69:L685f69:{c.instructions+=3;NFSU2_TR(0x685f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685f6c:{NFSU2_TR(0x685f6c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B685f6e:{NFSU2_TR(0x685f6e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L685f75;}}
}
B685f70:L685f70:{c.instructions+=2;NFSU2_TR(0x685f70);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685f73:{NFSU2_TR(0x685f73);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L685f87;}}
}
B685f75:L685f75:{c.instructions+=2;NFSU2_TR(0x685f75);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B685f78:{NFSU2_TR(0x685f78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x686070u,686);}
}
B685f7e:L685f7e:{c.instructions+=2;NFSU2_TR(0x685f7e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685f81:{NFSU2_TR(0x685f81);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x686070u,686);}
}
B685f87:L685f87:{c.instructions+=7;NFSU2_TR(0x685f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B685f8a:{NFSU2_TR(0x685f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B685f8d:{NFSU2_TR(0x685f8d);
w4(R+8,u32(0x7000000ull));
}
B685f92:{NFSU2_TR(0x685f92);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685f94:{NFSU2_TR(0x685f94);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685f96:{NFSU2_TR(0x685f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B685f97:{NFSU2_TR(0x685f97);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x686030u,686);}
}
B685f9d:L685f9d:{c.instructions+=1;NFSU2_TR(0x685f9d);
if(r1(R+518)){TAIL_STATIC(0x686027u,686);}
}
B685fa3:L685fa3:{c.instructions+=2;NFSU2_TR(0x685fa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B685fa5:{NFSU2_TR(0x685fa5);
if(r1(R+518)){TAIL_STATIC(0x68601eu,686);}
}
B685fa7:L685fa7:{c.instructions+=2;NFSU2_TR(0x685fa7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685fad:{NFSU2_TR(0x685fad);
if(r1(R+518)){TAIL_STATIC(0x686018u,686);}
}
B685faf:L685faf:{c.instructions+=3;NFSU2_TR(0x685faf);
w4(R+8,u32(0x2000000ull));
}
B685fb4:{NFSU2_TR(0x685fb4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685fb6:{NFSU2_TR(0x685fb6);
if(r1(R+518)){TAIL_STATIC(0x68600fu,686);}
}
B685fb8:L685fb8:{c.instructions+=2;NFSU2_TR(0x685fb8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685fbe:{NFSU2_TR(0x685fbe);
if(r1(R+518)){TAIL_STATIC(0x68606du,686);}
}
B685fc4:L685fc4:{c.instructions+=3;NFSU2_TR(0x685fc4);
w4(R+8,u32(0x4000000ull));
}
B685fc9:{NFSU2_TR(0x685fc9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685fcb:{NFSU2_TR(0x685fcb);
if(r1(R+518)){TAIL_STATIC(0x686006u,686);}
}
B685fcd:L685fcd:{c.instructions+=2;NFSU2_TR(0x685fcd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685fd3:{NFSU2_TR(0x685fd3);
if(r1(R+518)){TAIL_STATIC(0x68606du,686);}
}
B685fd9:L685fd9:{c.instructions+=2;NFSU2_TR(0x685fd9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B685fdf:{NFSU2_TR(0x685fdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x686070u,686);}
}
B685fe5:L685fe5:{c.instructions+=6;NFSU2_TR(0x685fe5);
u8 U[4];
w4(U+0,u32(0x7b9f90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685fea:{NFSU2_TR(0x685fea);
u8 U[4];
w4(U+0,u32(0x7ddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685fef:{NFSU2_TR(0x685fef);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B685ff2:{NFSU2_TR(0x685ff2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B685ff3:{NFSU2_TR(0x685ff3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B685ff5:{NFSU2_TR(0x685ff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x685ffaull));
TAIL_STATIC(0x64307cu,643);
}
B685ffa:L685ffa:{c.instructions+=2;NFSU2_TR(0x685ffa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B685ffd:{NFSU2_TR(0x685ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x686004u,686);
}
XIT:NFSU2_TR_EXIT(0x685,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
