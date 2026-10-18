#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51a(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_535(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x536,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x536,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_536(u8* __restrict R,Cpu& c);
u32 page_536(Cpu& c){return body_536(c.regs.data(),c);}
__attribute__((noinline)) u32 body_536(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x536001:goto L536001;
case 0x536004:c.instructions+=5;goto B536004;
case 0x536006:c.instructions+=4;goto B536006;
case 0x53600a:c.instructions+=3;goto B53600a;
case 0x53600b:c.instructions+=2;goto B53600b;
case 0x53600d:c.instructions+=1;goto B53600d;
case 0x536012:goto L536012;
case 0x536017:c.instructions+=2;goto B536017;
case 0x536019:c.instructions+=1;goto B536019;
case 0x53601b:goto L53601b;
case 0x53601d:c.instructions+=2;goto B53601d;
case 0x53601f:c.instructions+=1;goto B53601f;
case 0x536021:goto L536021;
case 0x536024:c.instructions+=5;goto B536024;
case 0x536026:c.instructions+=4;goto B536026;
case 0x536028:c.instructions+=3;goto B536028;
case 0x536029:c.instructions+=2;goto B536029;
case 0x53602a:c.instructions+=1;goto B53602a;
case 0x53602f:goto L53602f;
case 0x536032:goto L536032;
case 0x536034:c.instructions+=1;goto B536034;
case 0x536036:goto L536036;
case 0x53603a:c.instructions+=1;goto B53603a;
case 0x53603c:goto L53603c;
case 0x536043:goto L536043;
case 0x536044:c.instructions+=3;goto B536044;
case 0x536045:c.instructions+=2;goto B536045;
case 0x536046:c.instructions+=1;goto B536046;
case 0x536050:goto L536050;
case 0x536052:c.instructions+=19;goto B536052;
case 0x536057:c.instructions+=18;goto B536057;
case 0x53605d:c.instructions+=17;goto B53605d;
case 0x53605e:c.instructions+=16;goto B53605e;
case 0x536065:c.instructions+=15;goto B536065;
case 0x536066:c.instructions+=14;goto B536066;
case 0x536067:c.instructions+=13;goto B536067;
case 0x536069:c.instructions+=12;goto B536069;
case 0x53606c:c.instructions+=11;goto B53606c;
case 0x536072:c.instructions+=10;goto B536072;
case 0x536073:c.instructions+=9;goto B536073;
case 0x536077:c.instructions+=8;goto B536077;
case 0x536079:c.instructions+=7;goto B536079;
case 0x53607c:c.instructions+=6;goto B53607c;
case 0x53607e:c.instructions+=5;goto B53607e;
case 0x536083:c.instructions+=4;goto B536083;
case 0x536088:c.instructions+=3;goto B536088;
case 0x53608a:c.instructions+=2;goto B53608a;
case 0x536092:c.instructions+=1;goto B536092;
case 0x536097:goto L536097;
case 0x536099:c.instructions+=5;goto B536099;
case 0x53609e:c.instructions+=4;goto B53609e;
case 0x5360a3:c.instructions+=3;goto B5360a3;
case 0x5360a8:c.instructions+=2;goto B5360a8;
case 0x5360ad:c.instructions+=1;goto B5360ad;
case 0x5360b2:goto L5360b2;
case 0x5360b5:c.instructions+=4;goto B5360b5;
case 0x5360ba:c.instructions+=3;goto B5360ba;
case 0x5360bc:c.instructions+=2;goto B5360bc;
case 0x5360bf:c.instructions+=1;goto B5360bf;
case 0x5360c4:goto L5360c4;
case 0x5360c6:goto L5360c6;
case 0x5360ca:c.instructions+=6;goto B5360ca;
case 0x5360cb:c.instructions+=5;goto B5360cb;
case 0x5360cd:c.instructions+=4;goto B5360cd;
case 0x5360ce:c.instructions+=3;goto B5360ce;
case 0x5360d5:c.instructions+=2;goto B5360d5;
case 0x5360d8:c.instructions+=1;goto B5360d8;
case 0x5360e0:goto L5360e0;
case 0x5360e1:c.instructions+=2;goto B5360e1;
case 0x5360e3:c.instructions+=1;goto B5360e3;
case 0x5360e8:goto L5360e8;
case 0x5360ed:c.instructions+=1;goto B5360ed;
case 0x5360ef:goto L5360ef;
case 0x5360f0:c.instructions+=1;goto B5360f0;
case 0x5360f5:goto L5360f5;
case 0x5360f8:goto L5360f8;
case 0x5360fa:c.instructions+=2;goto B5360fa;
case 0x5360fb:c.instructions+=1;goto B5360fb;
case 0x536100:goto L536100;
case 0x536102:c.instructions+=13;goto B536102;
case 0x536107:c.instructions+=12;goto B536107;
case 0x53610d:c.instructions+=11;goto B53610d;
case 0x53610e:c.instructions+=10;goto B53610e;
case 0x536115:c.instructions+=9;goto B536115;
case 0x536116:c.instructions+=8;goto B536116;
case 0x536117:c.instructions+=7;goto B536117;
case 0x536119:c.instructions+=6;goto B536119;
case 0x53611d:c.instructions+=5;goto B53611d;
case 0x536123:c.instructions+=4;goto B536123;
case 0x536128:c.instructions+=3;goto B536128;
case 0x536129:c.instructions+=2;goto B536129;
case 0x536131:c.instructions+=1;goto B536131;
case 0x536136:goto L536136;
case 0x53613c:c.instructions+=3;goto B53613c;
case 0x53613d:c.instructions+=2;goto B53613d;
case 0x536147:c.instructions+=1;goto B536147;
case 0x53614c:goto L53614c;
case 0x53614f:c.instructions+=3;goto B53614f;
case 0x536152:c.instructions+=2;goto B536152;
case 0x53615a:c.instructions+=1;goto B53615a;
case 0x53615f:goto L53615f;
case 0x536163:c.instructions+=4;goto B536163;
case 0x536164:c.instructions+=3;goto B536164;
case 0x53616b:c.instructions+=2;goto B53616b;
case 0x53616e:c.instructions+=1;goto B53616e;
case 0x536170:goto L536170;
case 0x536172:c.instructions+=66;goto B536172;
case 0x536177:c.instructions+=65;goto B536177;
case 0x53617d:c.instructions+=64;goto B53617d;
case 0x53617e:c.instructions+=63;goto B53617e;
case 0x536185:c.instructions+=62;goto B536185;
case 0x536186:c.instructions+=61;goto B536186;
case 0x536188:c.instructions+=60;goto B536188;
case 0x536189:c.instructions+=59;goto B536189;
case 0x53618a:c.instructions+=58;goto B53618a;
case 0x53618c:c.instructions+=57;goto B53618c;
case 0x53618f:c.instructions+=56;goto B53618f;
case 0x536192:c.instructions+=55;goto B536192;
case 0x536195:c.instructions+=54;goto B536195;
case 0x536199:c.instructions+=53;goto B536199;
case 0x53619d:c.instructions+=52;goto B53619d;
case 0x5361a0:c.instructions+=51;goto B5361a0;
case 0x5361a3:c.instructions+=50;goto B5361a3;
case 0x5361a6:c.instructions+=49;goto B5361a6;
case 0x5361a9:c.instructions+=48;goto B5361a9;
case 0x5361ac:c.instructions+=47;goto B5361ac;
case 0x5361b1:c.instructions+=46;goto B5361b1;
case 0x5361b2:c.instructions+=45;goto B5361b2;
case 0x5361b6:c.instructions+=44;goto B5361b6;
case 0x5361bc:c.instructions+=43;goto B5361bc;
case 0x5361c2:c.instructions+=42;goto B5361c2;
case 0x5361c8:c.instructions+=41;goto B5361c8;
case 0x5361ce:c.instructions+=40;goto B5361ce;
case 0x5361d2:c.instructions+=39;goto B5361d2;
case 0x5361d8:c.instructions+=38;goto B5361d8;
case 0x5361de:c.instructions+=37;goto B5361de;
case 0x5361e4:c.instructions+=36;goto B5361e4;
case 0x5361ea:c.instructions+=35;goto B5361ea;
case 0x5361f0:c.instructions+=34;goto B5361f0;
case 0x5361f6:c.instructions+=33;goto B5361f6;
case 0x5361fc:c.instructions+=32;goto B5361fc;
case 0x536202:c.instructions+=31;goto B536202;
case 0x536208:c.instructions+=30;goto B536208;
case 0x536212:c.instructions+=29;goto B536212;
case 0x536218:c.instructions+=28;goto B536218;
case 0x53621e:c.instructions+=27;goto B53621e;
case 0x536224:c.instructions+=26;goto B536224;
case 0x53622a:c.instructions+=25;goto B53622a;
case 0x536230:c.instructions+=24;goto B536230;
case 0x536236:c.instructions+=23;goto B536236;
case 0x53623c:c.instructions+=22;goto B53623c;
case 0x536242:c.instructions+=21;goto B536242;
case 0x536245:c.instructions+=20;goto B536245;
case 0x536248:c.instructions+=19;goto B536248;
case 0x53624b:c.instructions+=18;goto B53624b;
case 0x53624d:c.instructions+=17;goto B53624d;
case 0x536250:c.instructions+=16;goto B536250;
case 0x536252:c.instructions+=15;goto B536252;
case 0x536254:c.instructions+=14;goto B536254;
case 0x536257:c.instructions+=13;goto B536257;
case 0x53625a:c.instructions+=12;goto B53625a;
case 0x53625d:c.instructions+=11;goto B53625d;
case 0x53625f:c.instructions+=10;goto B53625f;
case 0x536265:c.instructions+=9;goto B536265;
case 0x53626b:c.instructions+=8;goto B53626b;
case 0x53626e:c.instructions+=7;goto B53626e;
case 0x536271:c.instructions+=6;goto B536271;
case 0x536274:c.instructions+=5;goto B536274;
case 0x53627a:c.instructions+=4;goto B53627a;
case 0x53627d:c.instructions+=3;goto B53627d;
case 0x536283:c.instructions+=2;goto B536283;
case 0x536288:c.instructions+=1;goto B536288;
case 0x53628e:goto L53628e;
case 0x536290:goto L536290;
case 0x536296:c.instructions+=2;goto B536296;
case 0x53629b:c.instructions+=1;goto B53629b;
case 0x5362a1:goto L5362a1;
case 0x5362a3:goto L5362a3;
case 0x5362a9:c.instructions+=2;goto B5362a9;
case 0x5362ae:c.instructions+=1;goto B5362ae;
case 0x5362b4:goto L5362b4;
case 0x5362b6:goto L5362b6;
case 0x5362b8:c.instructions+=2;goto B5362b8;
case 0x5362bd:c.instructions+=1;goto B5362bd;
case 0x5362c2:goto L5362c2;
case 0x5362c4:c.instructions+=7;goto B5362c4;
case 0x5362c5:c.instructions+=6;goto B5362c5;
case 0x5362c9:c.instructions+=5;goto B5362c9;
case 0x5362ca:c.instructions+=4;goto B5362ca;
case 0x5362cb:c.instructions+=3;goto B5362cb;
case 0x5362d2:c.instructions+=2;goto B5362d2;
case 0x5362d5:c.instructions+=1;goto B5362d5;
case 0x5362e0:goto L5362e0;
case 0x5362e1:c.instructions+=8;goto B5362e1;
case 0x5362e2:c.instructions+=7;goto B5362e2;
case 0x5362e3:c.instructions+=6;goto B5362e3;
case 0x5362e4:c.instructions+=5;goto B5362e4;
case 0x5362e6:c.instructions+=4;goto B5362e6;
case 0x5362ec:c.instructions+=3;goto B5362ec;
case 0x5362ee:c.instructions+=2;goto B5362ee;
case 0x5362f2:c.instructions+=1;goto B5362f2;
case 0x5362f4:goto L5362f4;
case 0x5362f8:c.instructions+=1;goto B5362f8;
case 0x5362fa:goto L5362fa;
case 0x5362fe:c.instructions+=1;goto B5362fe;
case 0x536300:goto L536300;
case 0x536302:c.instructions+=1;goto B536302;
case 0x536304:goto L536304;
case 0x536307:c.instructions+=3;goto B536307;
case 0x536309:c.instructions+=2;goto B536309;
case 0x53630d:c.instructions+=1;goto B53630d;
case 0x53630f:goto L53630f;
case 0x536310:c.instructions+=5;goto B536310;
case 0x536311:c.instructions+=4;goto B536311;
case 0x536313:c.instructions+=3;goto B536313;
case 0x536314:c.instructions+=2;goto B536314;
case 0x536315:c.instructions+=1;goto B536315;
case 0x536318:goto L536318;
case 0x53631e:c.instructions+=2;goto B53631e;
case 0x536320:c.instructions+=1;goto B536320;
case 0x536322:goto L536322;
case 0x536324:c.instructions+=2;goto B536324;
case 0x536325:c.instructions+=1;goto B536325;
case 0x536328:goto L536328;
case 0x53632c:c.instructions+=1;goto B53632c;
case 0x53632e:goto L53632e;
case 0x536333:goto L536333;
case 0x536339:c.instructions+=3;goto B536339;
case 0x53633b:c.instructions+=2;goto B53633b;
case 0x536341:c.instructions+=1;goto B536341;
case 0x536343:goto L536343;
case 0x536345:c.instructions+=1;goto B536345;
case 0x536347:goto L536347;
case 0x53634a:c.instructions+=2;goto B53634a;
case 0x53634c:c.instructions+=1;goto B53634c;
case 0x53634e:goto L53634e;
case 0x536350:goto L536350;
case 0x536351:c.instructions+=1;goto B536351;
case 0x536356:goto L536356;
case 0x53635c:c.instructions+=3;goto B53635c;
case 0x53635e:c.instructions+=2;goto B53635e;
case 0x53635f:c.instructions+=1;goto B53635f;
case 0x536361:goto L536361;
case 0x536364:c.instructions+=3;goto B536364;
case 0x536367:c.instructions+=2;goto B536367;
case 0x536369:c.instructions+=1;goto B536369;
case 0x53636b:goto L53636b;
case 0x536371:c.instructions+=1;goto B536371;
case 0x536373:goto L536373;
case 0x536379:goto L536379;
case 0x53637f:c.instructions+=1;goto B53637f;
case 0x536381:goto L536381;
case 0x536384:c.instructions+=1;goto B536384;
case 0x53638a:goto L53638a;
case 0x53638d:c.instructions+=2;goto B53638d;
case 0x53638f:c.instructions+=1;goto B53638f;
case 0x536391:goto L536391;
case 0x536394:c.instructions+=1;goto B536394;
case 0x536397:goto L536397;
case 0x53639a:c.instructions+=2;goto B53639a;
case 0x53639c:c.instructions+=1;goto B53639c;
case 0x53639e:goto L53639e;
case 0x5363a1:c.instructions+=1;goto B5363a1;
case 0x5363a4:goto L5363a4;
case 0x5363a9:c.instructions+=6;goto B5363a9;
case 0x5363ac:c.instructions+=5;goto B5363ac;
case 0x5363af:c.instructions+=4;goto B5363af;
case 0x5363b5:c.instructions+=3;goto B5363b5;
case 0x5363b7:c.instructions+=2;goto B5363b7;
case 0x5363b9:c.instructions+=1;goto B5363b9;
case 0x5363bb:goto L5363bb;
case 0x5363bd:c.instructions+=2;goto B5363bd;
case 0x5363bf:c.instructions+=1;goto B5363bf;
case 0x5363c1:goto L5363c1;
case 0x5363c7:c.instructions+=2;goto B5363c7;
case 0x5363c9:c.instructions+=1;goto B5363c9;
case 0x5363cf:goto L5363cf;
case 0x5363d0:goto L5363d0;
case 0x5363d3:c.instructions+=2;goto B5363d3;
case 0x5363d6:c.instructions+=1;goto B5363d6;
case 0x5363d8:goto L5363d8;
case 0x5363dd:c.instructions+=1;goto B5363dd;
case 0x5363df:goto L5363df;
case 0x5363e2:c.instructions+=2;goto B5363e2;
case 0x5363e4:c.instructions+=1;goto B5363e4;
case 0x5363ea:goto L5363ea;
case 0x5363ed:c.instructions+=1;goto B5363ed;
case 0x5363f3:goto L5363f3;
case 0x5363f6:c.instructions+=1;goto B5363f6;
case 0x5363fc:goto L5363fc;
case 0x5363ff:c.instructions+=1;goto B5363ff;
case 0x536405:goto L536405;
case 0x536408:c.instructions+=1;goto B536408;
case 0x53640e:goto L53640e;
case 0x536411:c.instructions+=1;goto B536411;
case 0x536417:goto L536417;
case 0x53641a:c.instructions+=1;goto B53641a;
case 0x53641c:goto L53641c;
case 0x53641f:c.instructions+=3;goto B53641f;
case 0x536420:c.instructions+=2;goto B536420;
case 0x536422:c.instructions+=1;goto B536422;
case 0x536427:goto L536427;
case 0x536429:c.instructions+=3;goto B536429;
case 0x53642c:c.instructions+=2;goto B53642c;
case 0x53642e:c.instructions+=1;goto B53642e;
case 0x536430:goto L536430;
case 0x536435:goto L536435;
case 0x53643a:goto L53643a;
case 0x536440:c.instructions+=3;goto B536440;
case 0x536443:c.instructions+=2;goto B536443;
case 0x536445:c.instructions+=1;goto B536445;
case 0x536447:goto L536447;
case 0x53644a:c.instructions+=1;goto B53644a;
case 0x536450:goto L536450;
case 0x536456:c.instructions+=1;goto B536456;
case 0x536458:goto L536458;
case 0x53645b:c.instructions+=1;goto B53645b;
case 0x536461:goto L536461;
case 0x536464:c.instructions+=2;goto B536464;
case 0x536466:c.instructions+=1;goto B536466;
case 0x536468:goto L536468;
case 0x53646b:c.instructions+=1;goto B53646b;
case 0x53646e:goto L53646e;
case 0x536471:c.instructions+=2;goto B536471;
case 0x536473:c.instructions+=1;goto B536473;
case 0x536475:goto L536475;
case 0x536478:c.instructions+=1;goto B536478;
case 0x53647b:goto L53647b;
case 0x536480:c.instructions+=7;goto B536480;
case 0x536483:c.instructions+=6;goto B536483;
case 0x536486:c.instructions+=5;goto B536486;
case 0x53648c:c.instructions+=4;goto B53648c;
case 0x53648e:c.instructions+=3;goto B53648e;
case 0x536490:c.instructions+=2;goto B536490;
case 0x536492:c.instructions+=1;goto B536492;
case 0x536494:goto L536494;
case 0x536496:c.instructions+=2;goto B536496;
case 0x536498:c.instructions+=1;goto B536498;
case 0x53649e:goto L53649e;
case 0x5364a2:goto L5364a2;
case 0x5364a5:c.instructions+=2;goto B5364a5;
case 0x5364a7:c.instructions+=1;goto B5364a7;
case 0x5364a9:goto L5364a9;
case 0x5364aa:c.instructions+=2;goto B5364aa;
case 0x5364ac:c.instructions+=1;goto B5364ac;
case 0x5364b1:goto L5364b1;
case 0x5364b2:c.instructions+=6;goto B5364b2;
case 0x5364b3:c.instructions+=5;goto B5364b3;
case 0x5364b4:c.instructions+=4;goto B5364b4;
case 0x5364b6:c.instructions+=3;goto B5364b6;
case 0x5364b7:c.instructions+=2;goto B5364b7;
case 0x5364b8:c.instructions+=1;goto B5364b8;
case 0x5364bb:goto L5364bb;
case 0x5364be:c.instructions+=2;goto B5364be;
case 0x5364c0:c.instructions+=1;goto B5364c0;
case 0x5364c2:goto L5364c2;
case 0x5364c5:c.instructions+=3;goto B5364c5;
case 0x5364c6:c.instructions+=2;goto B5364c6;
case 0x5364c8:c.instructions+=1;goto B5364c8;
case 0x5364cd:goto L5364cd;
case 0x5364cf:c.instructions+=1;goto B5364cf;
case 0x5364d1:goto L5364d1;
case 0x5364d4:c.instructions+=3;goto B5364d4;
case 0x5364d5:c.instructions+=2;goto B5364d5;
case 0x5364d7:c.instructions+=1;goto B5364d7;
case 0x5364d9:goto L5364d9;
case 0x5364da:c.instructions+=2;goto B5364da;
case 0x5364dc:c.instructions+=1;goto B5364dc;
case 0x5364e1:goto L5364e1;
case 0x5364e3:goto L5364e3;
case 0x5364e6:goto L5364e6;
case 0x5364e9:c.instructions+=2;goto B5364e9;
case 0x5364eb:c.instructions+=1;goto B5364eb;
case 0x5364ed:goto L5364ed;
case 0x5364f3:c.instructions+=2;goto B5364f3;
case 0x5364f5:c.instructions+=1;goto B5364f5;
case 0x5364f7:goto L5364f7;
case 0x5364fa:c.instructions+=6;goto B5364fa;
case 0x5364fc:c.instructions+=5;goto B5364fc;
case 0x5364fd:c.instructions+=4;goto B5364fd;
case 0x536500:c.instructions+=3;goto B536500;
case 0x536501:c.instructions+=2;goto B536501;
case 0x536502:c.instructions+=1;goto B536502;
case 0x536505:goto L536505;
case 0x536509:c.instructions+=2;goto B536509;
case 0x53650b:c.instructions+=1;goto B53650b;
case 0x53650d:goto L53650d;
case 0x536510:c.instructions+=3;goto B536510;
case 0x536512:c.instructions+=2;goto B536512;
case 0x536514:c.instructions+=1;goto B536514;
case 0x536516:goto L536516;
case 0x536517:c.instructions+=6;goto B536517;
case 0x536518:c.instructions+=5;goto B536518;
case 0x536519:c.instructions+=4;goto B536519;
case 0x53651b:c.instructions+=3;goto B53651b;
case 0x53651c:c.instructions+=2;goto B53651c;
case 0x53651d:c.instructions+=1;goto B53651d;
case 0x536520:goto L536520;
case 0x536525:c.instructions+=1;goto B536525;
case 0x53652a:goto L53652a;
case 0x53652b:c.instructions+=25;goto B53652b;
case 0x53652c:c.instructions+=24;goto B53652c;
case 0x53652d:c.instructions+=23;goto B53652d;
case 0x53652f:c.instructions+=22;goto B53652f;
case 0x536535:c.instructions+=21;goto B536535;
case 0x536537:c.instructions+=20;goto B536537;
case 0x536538:c.instructions+=19;goto B536538;
case 0x53653c:c.instructions+=18;goto B53653c;
case 0x53653d:c.instructions+=17;goto B53653d;
case 0x536545:c.instructions+=16;goto B536545;
case 0x53654d:c.instructions+=15;goto B53654d;
case 0x536555:c.instructions+=14;goto B536555;
case 0x53655d:c.instructions+=13;goto B53655d;
case 0x536565:c.instructions+=12;goto B536565;
case 0x53656d:c.instructions+=11;goto B53656d;
case 0x536575:c.instructions+=10;goto B536575;
case 0x53657d:c.instructions+=9;goto B53657d;
case 0x536585:c.instructions+=8;goto B536585;
case 0x53658d:c.instructions+=7;goto B53658d;
case 0x536595:c.instructions+=6;goto B536595;
case 0x53659d:c.instructions+=5;goto B53659d;
case 0x5365a5:c.instructions+=4;goto B5365a5;
case 0x5365ad:c.instructions+=3;goto B5365ad;
case 0x5365b5:c.instructions+=2;goto B5365b5;
case 0x5365bd:c.instructions+=1;goto B5365bd;
case 0x5365c0:goto L5365c0;
case 0x5365c6:c.instructions+=5;goto B5365c6;
case 0x5365c8:c.instructions+=4;goto B5365c8;
case 0x5365ca:c.instructions+=3;goto B5365ca;
case 0x5365cc:c.instructions+=2;goto B5365cc;
case 0x5365d0:c.instructions+=1;goto B5365d0;
case 0x5365d2:goto L5365d2;
case 0x5365d9:c.instructions+=4;goto B5365d9;
case 0x5365dc:c.instructions+=3;goto B5365dc;
case 0x5365dd:c.instructions+=2;goto B5365dd;
case 0x5365df:c.instructions+=1;goto B5365df;
case 0x5365e1:goto L5365e1;
case 0x5365e5:goto L5365e5;
case 0x5365e7:c.instructions+=2;goto B5365e7;
case 0x5365e9:c.instructions+=1;goto B5365e9;
case 0x5365eb:goto L5365eb;
case 0x5365f0:goto L5365f0;
case 0x5365f6:c.instructions+=4;goto B5365f6;
case 0x5365fd:c.instructions+=3;goto B5365fd;
case 0x5365ff:c.instructions+=2;goto B5365ff;
case 0x536601:c.instructions+=1;goto B536601;
case 0x536603:goto L536603;
case 0x536605:c.instructions+=1;goto B536605;
case 0x536607:goto L536607;
case 0x53660a:c.instructions+=2;goto B53660a;
case 0x53660c:c.instructions+=1;goto B53660c;
case 0x53660e:goto L53660e;
case 0x536610:goto L536610;
case 0x536612:c.instructions+=1;goto B536612;
case 0x536614:goto L536614;
case 0x536616:c.instructions+=1;goto B536616;
case 0x536618:goto L536618;
case 0x53661b:c.instructions+=1;goto B53661b;
case 0x536621:goto L536621;
case 0x536627:c.instructions+=1;goto B536627;
case 0x536629:goto L536629;
case 0x53662c:c.instructions+=1;goto B53662c;
case 0x536632:goto L536632;
case 0x536635:c.instructions+=2;goto B536635;
case 0x536637:c.instructions+=1;goto B536637;
case 0x536639:goto L536639;
case 0x53663c:c.instructions+=1;goto B53663c;
case 0x53663f:goto L53663f;
case 0x536642:c.instructions+=2;goto B536642;
case 0x536644:c.instructions+=1;goto B536644;
case 0x536646:goto L536646;
case 0x536649:c.instructions+=1;goto B536649;
case 0x53664c:goto L53664c;
case 0x53664f:c.instructions+=2;goto B53664f;
case 0x536652:c.instructions+=1;goto B536652;
case 0x536658:goto L536658;
case 0x53665c:c.instructions+=3;goto B53665c;
case 0x53665d:c.instructions+=2;goto B53665d;
case 0x53665f:c.instructions+=1;goto B53665f;
case 0x536661:goto L536661;
case 0x536663:goto L536663;
case 0x536665:c.instructions+=2;goto B536665;
case 0x536667:c.instructions+=1;goto B536667;
case 0x53666d:goto L53666d;
case 0x536670:goto L536670;
case 0x536676:c.instructions+=3;goto B536676;
case 0x536678:c.instructions+=2;goto B536678;
case 0x53667f:c.instructions+=1;goto B53667f;
case 0x536681:goto L536681;
case 0x536684:goto L536684;
case 0x536687:c.instructions+=1;goto B536687;
case 0x536689:goto L536689;
case 0x53668c:c.instructions+=2;goto B53668c;
case 0x53668e:c.instructions+=1;goto B53668e;
case 0x536690:goto L536690;
case 0x536694:goto L536694;
case 0x536696:c.instructions+=1;goto B536696;
case 0x536698:goto L536698;
case 0x53669a:c.instructions+=1;goto B53669a;
case 0x53669c:goto L53669c;
case 0x53669f:c.instructions+=3;goto B53669f;
case 0x5366a1:c.instructions+=2;goto B5366a1;
case 0x5366a4:c.instructions+=1;goto B5366a4;
case 0x5366a6:goto L5366a6;
case 0x5366a9:goto L5366a9;
case 0x5366ac:c.instructions+=2;goto B5366ac;
case 0x5366af:c.instructions+=1;goto B5366af;
case 0x5366b1:goto L5366b1;
case 0x5366b7:c.instructions+=3;goto B5366b7;
case 0x5366b9:c.instructions+=2;goto B5366b9;
case 0x5366bc:c.instructions+=1;goto B5366bc;
case 0x5366be:goto L5366be;
case 0x5366c1:goto L5366c1;
case 0x5366c4:c.instructions+=1;goto B5366c4;
case 0x5366ca:goto L5366ca;
case 0x5366d0:c.instructions+=1;goto B5366d0;
case 0x5366d2:goto L5366d2;
case 0x5366d8:goto L5366d8;
case 0x5366de:c.instructions+=3;goto B5366de;
case 0x5366e2:c.instructions+=2;goto B5366e2;
case 0x5366e3:c.instructions+=1;goto B5366e3;
case 0x5366e9:goto L5366e9;
case 0x5366ea:c.instructions+=2;goto B5366ea;
case 0x5366ec:c.instructions+=1;goto B5366ec;
case 0x5366ee:goto L5366ee;
case 0x5366f4:c.instructions+=2;goto B5366f4;
case 0x5366f6:c.instructions+=1;goto B5366f6;
case 0x5366fc:goto L5366fc;
case 0x536702:c.instructions+=1;goto B536702;
case 0x536704:goto L536704;
case 0x536706:c.instructions+=1;goto B536706;
case 0x536710:goto L536710;
case 0x536715:c.instructions+=5;goto B536715;
case 0x53671c:c.instructions+=4;goto B53671c;
case 0x53671d:c.instructions+=3;goto B53671d;
case 0x53671e:c.instructions+=2;goto B53671e;
case 0x536725:c.instructions+=1;goto B536725;
case 0x53672a:goto L53672a;
case 0x536730:c.instructions+=5;goto B536730;
case 0x536732:c.instructions+=4;goto B536732;
case 0x536735:c.instructions+=3;goto B536735;
case 0x536737:c.instructions+=2;goto B536737;
case 0x536738:c.instructions+=1;goto B536738;
case 0x53673b:goto L53673b;
case 0x53673e:c.instructions+=3;goto B53673e;
case 0x536741:c.instructions+=2;goto B536741;
case 0x536743:c.instructions+=1;goto B536743;
case 0x536745:goto L536745;
case 0x536749:c.instructions+=2;goto B536749;
case 0x53674b:c.instructions+=1;goto B53674b;
case 0x53674d:goto L53674d;
case 0x536751:c.instructions+=6;goto B536751;
case 0x536752:c.instructions+=5;goto B536752;
case 0x536756:c.instructions+=4;goto B536756;
case 0x536757:c.instructions+=3;goto B536757;
case 0x536758:c.instructions+=2;goto B536758;
case 0x53675a:c.instructions+=1;goto B53675a;
case 0x53675f:goto L53675f;
case 0x536761:goto L536761;
case 0x536765:c.instructions+=4;goto B536765;
case 0x536766:c.instructions+=3;goto B536766;
case 0x536767:c.instructions+=2;goto B536767;
case 0x536769:c.instructions+=1;goto B536769;
case 0x53676e:goto L53676e;
case 0x536771:c.instructions+=2;goto B536771;
case 0x536773:c.instructions+=1;goto B536773;
case 0x536775:goto L536775;
case 0x536777:c.instructions+=1;goto B536777;
case 0x53677c:goto L53677c;
case 0x53677f:c.instructions+=6;goto B53677f;
case 0x536785:c.instructions+=5;goto B536785;
case 0x536787:c.instructions+=4;goto B536787;
case 0x536788:c.instructions+=3;goto B536788;
case 0x53678e:c.instructions+=2;goto B53678e;
case 0x53678f:c.instructions+=1;goto B53678f;
case 0x536792:goto L536792;
case 0x536798:c.instructions+=3;goto B536798;
case 0x53679a:c.instructions+=2;goto B53679a;
case 0x53679b:c.instructions+=1;goto B53679b;
case 0x53679e:goto L53679e;
case 0x53679f:c.instructions+=1;goto B53679f;
case 0x5367a4:goto L5367a4;
case 0x5367a7:c.instructions+=3;goto B5367a7;
case 0x5367aa:c.instructions+=2;goto B5367aa;
case 0x5367ac:c.instructions+=1;goto B5367ac;
case 0x5367b2:goto L5367b2;
case 0x5367b4:c.instructions+=7;goto B5367b4;
case 0x5367b5:c.instructions+=6;goto B5367b5;
case 0x5367bb:c.instructions+=5;goto B5367bb;
case 0x5367bc:c.instructions+=4;goto B5367bc;
case 0x5367bd:c.instructions+=3;goto B5367bd;
case 0x5367be:c.instructions+=2;goto B5367be;
case 0x5367c4:c.instructions+=1;goto B5367c4;
case 0x5367c5:goto L5367c5;
case 0x5367c7:c.instructions+=7;goto B5367c7;
case 0x5367c8:c.instructions+=6;goto B5367c8;
case 0x5367ce:c.instructions+=5;goto B5367ce;
case 0x5367cf:c.instructions+=4;goto B5367cf;
case 0x5367d0:c.instructions+=3;goto B5367d0;
case 0x5367d1:c.instructions+=2;goto B5367d1;
case 0x5367d7:c.instructions+=1;goto B5367d7;
case 0x5367e0:goto L5367e0;
case 0x5367e1:c.instructions+=9;goto B5367e1;
case 0x5367e5:c.instructions+=8;goto B5367e5;
case 0x5367e6:c.instructions+=7;goto B5367e6;
case 0x5367ea:c.instructions+=6;goto B5367ea;
case 0x5367eb:c.instructions+=5;goto B5367eb;
case 0x5367ef:c.instructions+=4;goto B5367ef;
case 0x5367f3:c.instructions+=3;goto B5367f3;
case 0x5367f4:c.instructions+=2;goto B5367f4;
case 0x5367f6:c.instructions+=1;goto B5367f6;
case 0x5367f8:goto L5367f8;
case 0x5367f9:c.instructions+=3;goto B5367f9;
case 0x5367fa:c.instructions+=2;goto B5367fa;
case 0x5367fb:c.instructions+=1;goto B5367fb;
case 0x536800:goto L536800;
case 0x536802:c.instructions+=1;goto B536802;
case 0x536804:goto L536804;
case 0x536808:c.instructions+=1;goto B536808;
case 0x53680a:goto L53680a;
case 0x53680b:c.instructions+=4;goto B53680b;
case 0x53680c:c.instructions+=3;goto B53680c;
case 0x53680d:c.instructions+=2;goto B53680d;
case 0x53680f:c.instructions+=1;goto B53680f;
case 0x536814:goto L536814;
case 0x536816:c.instructions+=1;goto B536816;
case 0x536818:goto L536818;
case 0x53681b:c.instructions+=2;goto B53681b;
case 0x53681d:c.instructions+=1;goto B53681d;
case 0x53681f:goto L53681f;
case 0x536820:goto L536820;
case 0x536823:c.instructions+=1;goto B536823;
case 0x536825:goto L536825;
case 0x536828:c.instructions+=2;goto B536828;
case 0x53682a:c.instructions+=1;goto B53682a;
case 0x53682c:goto L53682c;
case 0x53682d:c.instructions+=4;goto B53682d;
case 0x53682e:c.instructions+=3;goto B53682e;
case 0x53682f:c.instructions+=2;goto B53682f;
case 0x536830:c.instructions+=1;goto B536830;
case 0x536833:goto L536833;
case 0x536835:c.instructions+=1;goto B536835;
case 0x536837:goto L536837;
case 0x53683b:c.instructions+=6;goto B53683b;
case 0x53683c:c.instructions+=5;goto B53683c;
case 0x53683d:c.instructions+=4;goto B53683d;
case 0x53683e:c.instructions+=3;goto B53683e;
case 0x53683f:c.instructions+=2;goto B53683f;
case 0x536841:c.instructions+=1;goto B536841;
case 0x536846:goto L536846;
case 0x536847:c.instructions+=4;goto B536847;
case 0x536848:c.instructions+=3;goto B536848;
case 0x536849:c.instructions+=2;goto B536849;
case 0x53684a:c.instructions+=1;goto B53684a;
case 0x536850:goto L536850;
case 0x536851:c.instructions+=10;goto B536851;
case 0x536853:c.instructions+=9;goto B536853;
case 0x536856:c.instructions+=8;goto B536856;
case 0x53685c:c.instructions+=7;goto B53685c;
case 0x536861:c.instructions+=6;goto B536861;
case 0x536863:c.instructions+=5;goto B536863;
case 0x536864:c.instructions+=4;goto B536864;
case 0x536865:c.instructions+=3;goto B536865;
case 0x536866:c.instructions+=2;goto B536866;
case 0x53686a:c.instructions+=1;goto B53686a;
case 0x536870:goto L536870;
case 0x536875:c.instructions+=2;goto B536875;
case 0x536877:c.instructions+=1;goto B536877;
case 0x536879:goto L536879;
case 0x53687e:c.instructions+=2;goto B53687e;
case 0x536882:c.instructions+=1;goto B536882;
case 0x536884:goto L536884;
case 0x536886:c.instructions+=3;goto B536886;
case 0x536888:c.instructions+=2;goto B536888;
case 0x53688a:c.instructions+=1;goto B53688a;
case 0x53688f:goto L53688f;
case 0x536892:c.instructions+=2;goto B536892;
case 0x536896:c.instructions+=1;goto B536896;
case 0x536898:goto L536898;
case 0x53689b:c.instructions+=4;goto B53689b;
case 0x53689e:c.instructions+=3;goto B53689e;
case 0x5368a2:c.instructions+=2;goto B5368a2;
case 0x5368a3:c.instructions+=1;goto B5368a3;
case 0x5368a8:goto L5368a8;
case 0x5368ac:c.instructions+=13;goto B5368ac;
case 0x5368af:c.instructions+=12;goto B5368af;
case 0x5368b4:c.instructions+=11;goto B5368b4;
case 0x5368b5:c.instructions+=10;goto B5368b5;
case 0x5368b9:c.instructions+=9;goto B5368b9;
case 0x5368bd:c.instructions+=8;goto B5368bd;
case 0x5368be:c.instructions+=7;goto B5368be;
case 0x5368c2:c.instructions+=6;goto B5368c2;
case 0x5368c3:c.instructions+=5;goto B5368c3;
case 0x5368c4:c.instructions+=4;goto B5368c4;
case 0x5368cc:c.instructions+=3;goto B5368cc;
case 0x5368d4:c.instructions+=2;goto B5368d4;
case 0x5368dc:c.instructions+=1;goto B5368dc;
case 0x5368e1:goto L5368e1;
case 0x5368e5:c.instructions+=7;goto B5368e5;
case 0x5368e6:c.instructions+=6;goto B5368e6;
case 0x5368ea:c.instructions+=5;goto B5368ea;
case 0x5368ee:c.instructions+=4;goto B5368ee;
case 0x5368ef:c.instructions+=3;goto B5368ef;
case 0x5368f3:c.instructions+=2;goto B5368f3;
case 0x5368f4:c.instructions+=1;goto B5368f4;
case 0x5368f9:goto L5368f9;
case 0x5368fc:c.instructions+=3;goto B5368fc;
case 0x5368ff:c.instructions+=2;goto B5368ff;
case 0x536901:c.instructions+=1;goto B536901;
case 0x536903:goto L536903;
case 0x536907:c.instructions+=3;goto B536907;
case 0x536908:c.instructions+=2;goto B536908;
case 0x536909:c.instructions+=1;goto B536909;
case 0x53690e:goto L53690e;
case 0x536910:c.instructions+=1;goto B536910;
case 0x536912:goto L536912;
case 0x536915:c.instructions+=3;goto B536915;
case 0x536916:c.instructions+=2;goto B536916;
case 0x536918:c.instructions+=1;goto B536918;
case 0x53691d:goto L53691d;
case 0x536921:c.instructions+=28;goto B536921;
case 0x536922:c.instructions+=27;goto B536922;
case 0x536924:c.instructions+=26;goto B536924;
case 0x536928:c.instructions+=25;goto B536928;
case 0x53692a:c.instructions+=24;goto B53692a;
case 0x53692e:c.instructions+=23;goto B53692e;
case 0x536930:c.instructions+=22;goto B536930;
case 0x536933:c.instructions+=21;goto B536933;
case 0x536935:c.instructions+=20;goto B536935;
case 0x536936:c.instructions+=19;goto B536936;
case 0x536938:c.instructions+=18;goto B536938;
case 0x53693a:c.instructions+=17;goto B53693a;
case 0x53693d:c.instructions+=16;goto B53693d;
case 0x53693f:c.instructions+=15;goto B53693f;
case 0x536943:c.instructions+=14;goto B536943;
case 0x536944:c.instructions+=13;goto B536944;
case 0x536946:c.instructions+=12;goto B536946;
case 0x536949:c.instructions+=11;goto B536949;
case 0x53694b:c.instructions+=10;goto B53694b;
case 0x53694d:c.instructions+=9;goto B53694d;
case 0x536951:c.instructions+=8;goto B536951;
case 0x536955:c.instructions+=7;goto B536955;
case 0x536959:c.instructions+=6;goto B536959;
case 0x53695d:c.instructions+=5;goto B53695d;
case 0x536961:c.instructions+=4;goto B536961;
case 0x536963:c.instructions+=3;goto B536963;
case 0x536967:c.instructions+=2;goto B536967;
case 0x53696b:c.instructions+=1;goto B53696b;
case 0x53696d:goto L53696d;
case 0x536973:goto L536973;
case 0x536977:c.instructions+=2;goto B536977;
case 0x536979:c.instructions+=1;goto B536979;
case 0x53697b:goto L53697b;
case 0x53697c:c.instructions+=3;goto B53697c;
case 0x53697e:c.instructions+=2;goto B53697e;
case 0x536980:c.instructions+=1;goto B536980;
case 0x536982:goto L536982;
case 0x536984:c.instructions+=2;goto B536984;
case 0x536986:c.instructions+=1;goto B536986;
case 0x536988:goto L536988;
case 0x53698a:c.instructions+=1;goto B53698a;
case 0x53698c:goto L53698c;
case 0x53698f:c.instructions+=4;goto B53698f;
case 0x536991:c.instructions+=3;goto B536991;
case 0x536993:c.instructions+=2;goto B536993;
case 0x536998:c.instructions+=1;goto B536998;
case 0x53699a:goto L53699a;
case 0x5369a0:goto L5369a0;
case 0x5369a2:c.instructions+=3;goto B5369a2;
case 0x5369a4:c.instructions+=2;goto B5369a4;
case 0x5369a6:c.instructions+=1;goto B5369a6;
case 0x5369a8:goto L5369a8;
case 0x5369aa:goto L5369aa;
case 0x5369ac:goto L5369ac;
case 0x5369ae:c.instructions+=3;goto B5369ae;
case 0x5369b2:c.instructions+=2;goto B5369b2;
case 0x5369b6:c.instructions+=1;goto B5369b6;
case 0x5369b8:goto L5369b8;
case 0x5369be:goto L5369be;
case 0x5369c3:c.instructions+=4;goto B5369c3;
case 0x5369c6:c.instructions+=3;goto B5369c6;
case 0x5369c8:c.instructions+=2;goto B5369c8;
case 0x5369ca:c.instructions+=1;goto B5369ca;
case 0x5369cc:goto L5369cc;
case 0x5369d2:c.instructions+=3;goto B5369d2;
case 0x5369da:c.instructions+=2;goto B5369da;
case 0x5369de:c.instructions+=1;goto B5369de;
case 0x5369e0:goto L5369e0;
case 0x5369e4:c.instructions+=1;goto B5369e4;
case 0x5369ec:goto L5369ec;
case 0x5369f0:c.instructions+=3;goto B5369f0;
case 0x5369f3:c.instructions+=2;goto B5369f3;
case 0x5369f8:c.instructions+=1;goto B5369f8;
case 0x5369fc:goto L5369fc;
case 0x5369fe:goto L5369fe;
case 0x536a01:c.instructions+=17;goto B536a01;
case 0x536a02:c.instructions+=16;goto B536a02;
case 0x536a06:c.instructions+=15;goto B536a06;
case 0x536a07:c.instructions+=14;goto B536a07;
case 0x536a0b:c.instructions+=13;goto B536a0b;
case 0x536a0f:c.instructions+=12;goto B536a0f;
case 0x536a10:c.instructions+=11;goto B536a10;
case 0x536a11:c.instructions+=10;goto B536a11;
case 0x536a16:c.instructions+=9;goto B536a16;
case 0x536a17:c.instructions+=8;goto B536a17;
case 0x536a19:c.instructions+=7;goto B536a19;
case 0x536a1e:c.instructions+=6;goto B536a1e;
case 0x536a23:c.instructions+=5;goto B536a23;
case 0x536a28:c.instructions+=4;goto B536a28;
case 0x536a2d:c.instructions+=3;goto B536a2d;
case 0x536a32:c.instructions+=2;goto B536a32;
case 0x536a34:c.instructions+=1;goto B536a34;
case 0x536a39:goto L536a39;
case 0x536a3d:c.instructions+=3;goto B536a3d;
case 0x536a3f:c.instructions+=2;goto B536a3f;
case 0x536a42:c.instructions+=1;goto B536a42;
case 0x536a47:goto L536a47;
case 0x536a48:c.instructions+=5;goto B536a48;
case 0x536a49:c.instructions+=4;goto B536a49;
case 0x536a4a:c.instructions+=3;goto B536a4a;
case 0x536a4c:c.instructions+=2;goto B536a4c;
case 0x536a4d:c.instructions+=1;goto B536a4d;
case 0x536a50:goto L536a50;
case 0x536a51:c.instructions+=13;goto B536a51;
case 0x536a53:c.instructions+=12;goto B536a53;
case 0x536a56:c.instructions+=11;goto B536a56;
case 0x536a5c:c.instructions+=10;goto B536a5c;
case 0x536a5d:c.instructions+=9;goto B536a5d;
case 0x536a5e:c.instructions+=8;goto B536a5e;
case 0x536a5f:c.instructions+=7;goto B536a5f;
case 0x536a62:c.instructions+=6;goto B536a62;
case 0x536a65:c.instructions+=5;goto B536a65;
case 0x536a69:c.instructions+=4;goto B536a69;
case 0x536a6b:c.instructions+=3;goto B536a6b;
case 0x536a6c:c.instructions+=2;goto B536a6c;
case 0x536a70:c.instructions+=1;goto B536a70;
case 0x536a75:goto L536a75;
case 0x536a79:c.instructions+=13;goto B536a79;
case 0x536a7c:c.instructions+=12;goto B536a7c;
case 0x536a81:c.instructions+=11;goto B536a81;
case 0x536a82:c.instructions+=10;goto B536a82;
case 0x536a86:c.instructions+=9;goto B536a86;
case 0x536a87:c.instructions+=8;goto B536a87;
case 0x536a8e:c.instructions+=7;goto B536a8e;
case 0x536a8f:c.instructions+=6;goto B536a8f;
case 0x536a90:c.instructions+=5;goto B536a90;
case 0x536a92:c.instructions+=4;goto B536a92;
case 0x536a9d:c.instructions+=3;goto B536a9d;
case 0x536aa8:c.instructions+=2;goto B536aa8;
case 0x536ab3:c.instructions+=1;goto B536ab3;
case 0x536ab8:goto L536ab8;
case 0x536abf:c.instructions+=7;goto B536abf;
case 0x536ac0:c.instructions+=6;goto B536ac0;
case 0x536ac4:c.instructions+=5;goto B536ac4;
case 0x536ac8:c.instructions+=4;goto B536ac8;
case 0x536ac9:c.instructions+=3;goto B536ac9;
case 0x536ad0:c.instructions+=2;goto B536ad0;
case 0x536ad1:c.instructions+=1;goto B536ad1;
case 0x536ad6:goto L536ad6;
case 0x536ad9:c.instructions+=4;goto B536ad9;
case 0x536adb:c.instructions+=3;goto B536adb;
case 0x536add:c.instructions+=2;goto B536add;
case 0x536ade:c.instructions+=1;goto B536ade;
case 0x536ae3:goto L536ae3;
case 0x536ae6:c.instructions+=4;goto B536ae6;
case 0x536ae9:c.instructions+=3;goto B536ae9;
case 0x536aeb:c.instructions+=2;goto B536aeb;
case 0x536aef:c.instructions+=1;goto B536aef;
case 0x536af1:goto L536af1;
case 0x536af5:c.instructions+=3;goto B536af5;
case 0x536af6:c.instructions+=2;goto B536af6;
case 0x536af7:c.instructions+=1;goto B536af7;
case 0x536afc:goto L536afc;
case 0x536afe:c.instructions+=1;goto B536afe;
case 0x536b00:goto L536b00;
case 0x536b03:c.instructions+=3;goto B536b03;
case 0x536b04:c.instructions+=2;goto B536b04;
case 0x536b06:c.instructions+=1;goto B536b06;
case 0x536b0b:goto L536b0b;
case 0x536b0f:c.instructions+=6;goto B536b0f;
case 0x536b13:c.instructions+=5;goto B536b13;
case 0x536b15:c.instructions+=4;goto B536b15;
case 0x536b19:c.instructions+=3;goto B536b19;
case 0x536b1d:c.instructions+=2;goto B536b1d;
case 0x536b21:c.instructions+=1;goto B536b21;
case 0x536b23:goto L536b23;
case 0x536b29:goto L536b29;
case 0x536b2b:c.instructions+=3;goto B536b2b;
case 0x536b2f:c.instructions+=2;goto B536b2f;
case 0x536b33:c.instructions+=1;goto B536b33;
case 0x536b35:goto L536b35;
case 0x536b3b:goto L536b3b;
case 0x536b3d:c.instructions+=2;goto B536b3d;
case 0x536b41:c.instructions+=1;goto B536b41;
case 0x536b43:goto L536b43;
case 0x536b44:c.instructions+=4;goto B536b44;
case 0x536b46:c.instructions+=3;goto B536b46;
case 0x536b48:c.instructions+=2;goto B536b48;
case 0x536b4d:c.instructions+=1;goto B536b4d;
case 0x536b4f:goto L536b4f;
case 0x536b50:goto L536b50;
case 0x536b52:c.instructions+=3;goto B536b52;
case 0x536b54:c.instructions+=2;goto B536b54;
case 0x536b56:c.instructions+=1;goto B536b56;
case 0x536b58:goto L536b58;
case 0x536b5a:c.instructions+=1;goto B536b5a;
case 0x536b5c:goto L536b5c;
case 0x536b5e:goto L536b5e;
case 0x536b60:c.instructions+=1;goto B536b60;
case 0x536b62:goto L536b62;
case 0x536b65:c.instructions+=4;goto B536b65;
case 0x536b67:c.instructions+=3;goto B536b67;
case 0x536b69:c.instructions+=2;goto B536b69;
case 0x536b6e:c.instructions+=1;goto B536b6e;
case 0x536b70:goto L536b70;
case 0x536b72:c.instructions+=3;goto B536b72;
case 0x536b74:c.instructions+=2;goto B536b74;
case 0x536b76:c.instructions+=1;goto B536b76;
case 0x536b78:goto L536b78;
case 0x536b7a:c.instructions+=1;goto B536b7a;
case 0x536b7c:goto L536b7c;
case 0x536b7e:goto L536b7e;
case 0x536b80:c.instructions+=3;goto B536b80;
case 0x536b84:c.instructions+=2;goto B536b84;
case 0x536b88:c.instructions+=1;goto B536b88;
case 0x536b8a:goto L536b8a;
case 0x536b90:goto L536b90;
case 0x536b92:c.instructions+=4;goto B536b92;
case 0x536b94:c.instructions+=3;goto B536b94;
case 0x536b98:c.instructions+=2;goto B536b98;
case 0x536b9c:c.instructions+=1;goto B536b9c;
case 0x536b9e:goto L536b9e;
case 0x536ba4:goto L536ba4;
case 0x536ba8:c.instructions+=39;goto B536ba8;
case 0x536bac:c.instructions+=38;goto B536bac;
case 0x536bad:c.instructions+=37;goto B536bad;
case 0x536baf:c.instructions+=36;goto B536baf;
case 0x536bb1:c.instructions+=35;goto B536bb1;
case 0x536bb5:c.instructions+=34;goto B536bb5;
case 0x536bb7:c.instructions+=33;goto B536bb7;
case 0x536bba:c.instructions+=32;goto B536bba;
case 0x536bbc:c.instructions+=31;goto B536bbc;
case 0x536bc0:c.instructions+=30;goto B536bc0;
case 0x536bc1:c.instructions+=29;goto B536bc1;
case 0x536bc3:c.instructions+=28;goto B536bc3;
case 0x536bc6:c.instructions+=27;goto B536bc6;
case 0x536bc8:c.instructions+=26;goto B536bc8;
case 0x536bca:c.instructions+=25;goto B536bca;
case 0x536bce:c.instructions+=24;goto B536bce;
case 0x536bcf:c.instructions+=23;goto B536bcf;
case 0x536bd2:c.instructions+=22;goto B536bd2;
case 0x536bd4:c.instructions+=21;goto B536bd4;
case 0x536bd8:c.instructions+=20;goto B536bd8;
case 0x536bda:c.instructions+=19;goto B536bda;
case 0x536bdc:c.instructions+=18;goto B536bdc;
case 0x536be0:c.instructions+=17;goto B536be0;
case 0x536be4:c.instructions+=16;goto B536be4;
case 0x536be8:c.instructions+=15;goto B536be8;
case 0x536bec:c.instructions+=14;goto B536bec;
case 0x536bef:c.instructions+=13;goto B536bef;
case 0x536bf4:c.instructions+=12;goto B536bf4;
case 0x536bf8:c.instructions+=11;goto B536bf8;
case 0x536bfa:c.instructions+=10;goto B536bfa;
case 0x536bfd:c.instructions+=9;goto B536bfd;
case 0x536c01:c.instructions+=8;goto B536c01;
case 0x536c03:c.instructions+=7;goto B536c03;
case 0x536c06:c.instructions+=6;goto B536c06;
case 0x536c0a:c.instructions+=5;goto B536c0a;
case 0x536c0c:c.instructions+=4;goto B536c0c;
case 0x536c0f:c.instructions+=3;goto B536c0f;
case 0x536c13:c.instructions+=2;goto B536c13;
case 0x536c16:c.instructions+=1;goto B536c16;
case 0x536c1d:goto L536c1d;
case 0x536c1f:goto L536c1f;
case 0x536c23:c.instructions+=19;goto B536c23;
case 0x536c26:c.instructions+=18;goto B536c26;
case 0x536c27:c.instructions+=17;goto B536c27;
case 0x536c2b:c.instructions+=16;goto B536c2b;
case 0x536c2c:c.instructions+=15;goto B536c2c;
case 0x536c30:c.instructions+=14;goto B536c30;
case 0x536c31:c.instructions+=13;goto B536c31;
case 0x536c35:c.instructions+=12;goto B536c35;
case 0x536c36:c.instructions+=11;goto B536c36;
case 0x536c3a:c.instructions+=10;goto B536c3a;
case 0x536c3b:c.instructions+=9;goto B536c3b;
case 0x536c3c:c.instructions+=8;goto B536c3c;
case 0x536c3d:c.instructions+=7;goto B536c3d;
case 0x536c42:c.instructions+=6;goto B536c42;
case 0x536c47:c.instructions+=5;goto B536c47;
case 0x536c4c:c.instructions+=4;goto B536c4c;
case 0x536c51:c.instructions+=3;goto B536c51;
case 0x536c56:c.instructions+=2;goto B536c56;
case 0x536c58:c.instructions+=1;goto B536c58;
case 0x536c5d:goto L536c5d;
case 0x536c61:c.instructions+=3;goto B536c61;
case 0x536c63:c.instructions+=2;goto B536c63;
case 0x536c66:c.instructions+=1;goto B536c66;
case 0x536c6b:goto L536c6b;
case 0x536c6c:c.instructions+=5;goto B536c6c;
case 0x536c6d:c.instructions+=4;goto B536c6d;
case 0x536c6e:c.instructions+=3;goto B536c6e;
case 0x536c70:c.instructions+=2;goto B536c70;
case 0x536c71:c.instructions+=1;goto B536c71;
case 0x536c80:goto L536c80;
case 0x536c81:c.instructions+=13;goto B536c81;
case 0x536c83:c.instructions+=12;goto B536c83;
case 0x536c86:c.instructions+=11;goto B536c86;
case 0x536c8c:c.instructions+=10;goto B536c8c;
case 0x536c8d:c.instructions+=9;goto B536c8d;
case 0x536c8e:c.instructions+=8;goto B536c8e;
case 0x536c8f:c.instructions+=7;goto B536c8f;
case 0x536c92:c.instructions+=6;goto B536c92;
case 0x536c95:c.instructions+=5;goto B536c95;
case 0x536c99:c.instructions+=4;goto B536c99;
case 0x536c9b:c.instructions+=3;goto B536c9b;
case 0x536c9c:c.instructions+=2;goto B536c9c;
case 0x536ca0:c.instructions+=1;goto B536ca0;
case 0x536ca5:goto L536ca5;
case 0x536ca9:c.instructions+=13;goto B536ca9;
case 0x536cac:c.instructions+=12;goto B536cac;
case 0x536cb1:c.instructions+=11;goto B536cb1;
case 0x536cb2:c.instructions+=10;goto B536cb2;
case 0x536cb6:c.instructions+=9;goto B536cb6;
case 0x536cb7:c.instructions+=8;goto B536cb7;
case 0x536cbe:c.instructions+=7;goto B536cbe;
case 0x536cbf:c.instructions+=6;goto B536cbf;
case 0x536cc0:c.instructions+=5;goto B536cc0;
case 0x536cc2:c.instructions+=4;goto B536cc2;
case 0x536ccd:c.instructions+=3;goto B536ccd;
case 0x536cd8:c.instructions+=2;goto B536cd8;
case 0x536ce3:c.instructions+=1;goto B536ce3;
case 0x536ce8:goto L536ce8;
case 0x536cef:c.instructions+=7;goto B536cef;
case 0x536cf0:c.instructions+=6;goto B536cf0;
case 0x536cf4:c.instructions+=5;goto B536cf4;
case 0x536cf8:c.instructions+=4;goto B536cf8;
case 0x536cf9:c.instructions+=3;goto B536cf9;
case 0x536d00:c.instructions+=2;goto B536d00;
case 0x536d01:c.instructions+=1;goto B536d01;
case 0x536d06:goto L536d06;
case 0x536d09:c.instructions+=4;goto B536d09;
case 0x536d0b:c.instructions+=3;goto B536d0b;
case 0x536d0d:c.instructions+=2;goto B536d0d;
case 0x536d0e:c.instructions+=1;goto B536d0e;
case 0x536d13:goto L536d13;
case 0x536d16:c.instructions+=4;goto B536d16;
case 0x536d19:c.instructions+=3;goto B536d19;
case 0x536d1b:c.instructions+=2;goto B536d1b;
case 0x536d1f:c.instructions+=1;goto B536d1f;
case 0x536d21:goto L536d21;
case 0x536d25:c.instructions+=3;goto B536d25;
case 0x536d26:c.instructions+=2;goto B536d26;
case 0x536d27:c.instructions+=1;goto B536d27;
case 0x536d2c:goto L536d2c;
case 0x536d2e:c.instructions+=1;goto B536d2e;
case 0x536d30:goto L536d30;
case 0x536d33:c.instructions+=3;goto B536d33;
case 0x536d34:c.instructions+=2;goto B536d34;
case 0x536d36:c.instructions+=1;goto B536d36;
case 0x536d3b:goto L536d3b;
case 0x536d3f:c.instructions+=6;goto B536d3f;
case 0x536d43:c.instructions+=5;goto B536d43;
case 0x536d45:c.instructions+=4;goto B536d45;
case 0x536d49:c.instructions+=3;goto B536d49;
case 0x536d4d:c.instructions+=2;goto B536d4d;
case 0x536d51:c.instructions+=1;goto B536d51;
case 0x536d53:goto L536d53;
case 0x536d59:goto L536d59;
case 0x536d5b:c.instructions+=3;goto B536d5b;
case 0x536d5f:c.instructions+=2;goto B536d5f;
case 0x536d63:c.instructions+=1;goto B536d63;
case 0x536d65:goto L536d65;
case 0x536d6b:goto L536d6b;
case 0x536d6d:c.instructions+=2;goto B536d6d;
case 0x536d71:c.instructions+=1;goto B536d71;
case 0x536d73:goto L536d73;
case 0x536d74:c.instructions+=4;goto B536d74;
case 0x536d76:c.instructions+=3;goto B536d76;
case 0x536d78:c.instructions+=2;goto B536d78;
case 0x536d7d:c.instructions+=1;goto B536d7d;
case 0x536d7f:goto L536d7f;
case 0x536d80:goto L536d80;
case 0x536d82:c.instructions+=3;goto B536d82;
case 0x536d84:c.instructions+=2;goto B536d84;
case 0x536d86:c.instructions+=1;goto B536d86;
case 0x536d88:goto L536d88;
case 0x536d8a:goto L536d8a;
case 0x536d8c:goto L536d8c;
case 0x536d8e:c.instructions+=1;goto B536d8e;
case 0x536d90:goto L536d90;
case 0x536d93:c.instructions+=4;goto B536d93;
case 0x536d95:c.instructions+=3;goto B536d95;
case 0x536d97:c.instructions+=2;goto B536d97;
case 0x536d9c:c.instructions+=1;goto B536d9c;
case 0x536d9e:goto L536d9e;
case 0x536da0:goto L536da0;
case 0x536da2:c.instructions+=3;goto B536da2;
case 0x536da4:c.instructions+=2;goto B536da4;
case 0x536da6:c.instructions+=1;goto B536da6;
case 0x536da8:goto L536da8;
case 0x536daa:c.instructions+=1;goto B536daa;
case 0x536dac:goto L536dac;
case 0x536dae:goto L536dae;
case 0x536db0:c.instructions+=3;goto B536db0;
case 0x536db4:c.instructions+=2;goto B536db4;
case 0x536db8:c.instructions+=1;goto B536db8;
case 0x536dba:goto L536dba;
case 0x536dc0:goto L536dc0;
case 0x536dc2:c.instructions+=4;goto B536dc2;
case 0x536dc4:c.instructions+=3;goto B536dc4;
case 0x536dc8:c.instructions+=2;goto B536dc8;
case 0x536dcc:c.instructions+=1;goto B536dcc;
case 0x536dce:goto L536dce;
case 0x536dd4:goto L536dd4;
case 0x536dd7:c.instructions+=121;goto B536dd7;
case 0x536dd9:c.instructions+=120;goto B536dd9;
case 0x536ddb:c.instructions+=119;goto B536ddb;
case 0x536dde:c.instructions+=118;goto B536dde;
case 0x536de1:c.instructions+=117;goto B536de1;
case 0x536de4:c.instructions+=116;goto B536de4;
case 0x536de7:c.instructions+=115;goto B536de7;
case 0x536deb:c.instructions+=114;goto B536deb;
case 0x536dec:c.instructions+=113;goto B536dec;
case 0x536dee:c.instructions+=112;goto B536dee;
case 0x536df0:c.instructions+=111;goto B536df0;
case 0x536df2:c.instructions+=110;goto B536df2;
case 0x536df5:c.instructions+=109;goto B536df5;
case 0x536df9:c.instructions+=108;goto B536df9;
case 0x536dfb:c.instructions+=107;goto B536dfb;
case 0x536dfd:c.instructions+=106;goto B536dfd;
case 0x536dfe:c.instructions+=105;goto B536dfe;
case 0x536e00:c.instructions+=104;goto B536e00;
case 0x536e02:c.instructions+=103;goto B536e02;
case 0x536e04:c.instructions+=102;goto B536e04;
case 0x536e08:c.instructions+=101;goto B536e08;
case 0x536e09:c.instructions+=100;goto B536e09;
case 0x536e0b:c.instructions+=99;goto B536e0b;
case 0x536e0d:c.instructions+=98;goto B536e0d;
case 0x536e10:c.instructions+=97;goto B536e10;
case 0x536e12:c.instructions+=96;goto B536e12;
case 0x536e16:c.instructions+=95;goto B536e16;
case 0x536e19:c.instructions+=94;goto B536e19;
case 0x536e1b:c.instructions+=93;goto B536e1b;
case 0x536e1d:c.instructions+=92;goto B536e1d;
case 0x536e20:c.instructions+=91;goto B536e20;
case 0x536e23:c.instructions+=90;goto B536e23;
case 0x536e26:c.instructions+=89;goto B536e26;
case 0x536e2a:c.instructions+=88;goto B536e2a;
case 0x536e2b:c.instructions+=87;goto B536e2b;
case 0x536e2d:c.instructions+=86;goto B536e2d;
case 0x536e2f:c.instructions+=85;goto B536e2f;
case 0x536e32:c.instructions+=84;goto B536e32;
case 0x536e34:c.instructions+=83;goto B536e34;
case 0x536e37:c.instructions+=82;goto B536e37;
case 0x536e39:c.instructions+=81;goto B536e39;
case 0x536e3b:c.instructions+=80;goto B536e3b;
case 0x536e3c:c.instructions+=79;goto B536e3c;
case 0x536e3e:c.instructions+=78;goto B536e3e;
case 0x536e40:c.instructions+=77;goto B536e40;
case 0x536e42:c.instructions+=76;goto B536e42;
case 0x536e46:c.instructions+=75;goto B536e46;
case 0x536e47:c.instructions+=74;goto B536e47;
case 0x536e49:c.instructions+=73;goto B536e49;
case 0x536e4b:c.instructions+=72;goto B536e4b;
case 0x536e4e:c.instructions+=71;goto B536e4e;
case 0x536e50:c.instructions+=70;goto B536e50;
case 0x536e54:c.instructions+=69;goto B536e54;
case 0x536e57:c.instructions+=68;goto B536e57;
case 0x536e59:c.instructions+=67;goto B536e59;
case 0x536e5b:c.instructions+=66;goto B536e5b;
case 0x536e5e:c.instructions+=65;goto B536e5e;
case 0x536e61:c.instructions+=64;goto B536e61;
case 0x536e64:c.instructions+=63;goto B536e64;
case 0x536e68:c.instructions+=62;goto B536e68;
case 0x536e69:c.instructions+=61;goto B536e69;
case 0x536e6b:c.instructions+=60;goto B536e6b;
case 0x536e6d:c.instructions+=59;goto B536e6d;
case 0x536e70:c.instructions+=58;goto B536e70;
case 0x536e72:c.instructions+=57;goto B536e72;
case 0x536e75:c.instructions+=56;goto B536e75;
case 0x536e77:c.instructions+=55;goto B536e77;
case 0x536e79:c.instructions+=54;goto B536e79;
case 0x536e7a:c.instructions+=53;goto B536e7a;
case 0x536e7c:c.instructions+=52;goto B536e7c;
case 0x536e7e:c.instructions+=51;goto B536e7e;
case 0x536e80:c.instructions+=50;goto B536e80;
case 0x536e84:c.instructions+=49;goto B536e84;
case 0x536e85:c.instructions+=48;goto B536e85;
case 0x536e88:c.instructions+=47;goto B536e88;
case 0x536e8a:c.instructions+=46;goto B536e8a;
case 0x536e8c:c.instructions+=45;goto B536e8c;
case 0x536e8e:c.instructions+=44;goto B536e8e;
case 0x536e90:c.instructions+=43;goto B536e90;
case 0x536e93:c.instructions+=42;goto B536e93;
case 0x536e97:c.instructions+=41;goto B536e97;
case 0x536e9d:c.instructions+=40;goto B536e9d;
case 0x536e9f:c.instructions+=39;goto B536e9f;
case 0x536ea3:c.instructions+=38;goto B536ea3;
case 0x536ea5:c.instructions+=37;goto B536ea5;
case 0x536ea7:c.instructions+=36;goto B536ea7;
case 0x536eaa:c.instructions+=35;goto B536eaa;
case 0x536ead:c.instructions+=34;goto B536ead;
case 0x536eb0:c.instructions+=33;goto B536eb0;
case 0x536eb3:c.instructions+=32;goto B536eb3;
case 0x536eb7:c.instructions+=31;goto B536eb7;
case 0x536ebb:c.instructions+=30;goto B536ebb;
case 0x536ebc:c.instructions+=29;goto B536ebc;
case 0x536ebe:c.instructions+=28;goto B536ebe;
case 0x536ec0:c.instructions+=27;goto B536ec0;
case 0x536ec3:c.instructions+=26;goto B536ec3;
case 0x536ec5:c.instructions+=25;goto B536ec5;
case 0x536ec8:c.instructions+=24;goto B536ec8;
case 0x536eca:c.instructions+=23;goto B536eca;
case 0x536ecd:c.instructions+=22;goto B536ecd;
case 0x536ed1:c.instructions+=21;goto B536ed1;
case 0x536ed3:c.instructions+=20;goto B536ed3;
case 0x536ed6:c.instructions+=19;goto B536ed6;
case 0x536ed8:c.instructions+=18;goto B536ed8;
case 0x536ed9:c.instructions+=17;goto B536ed9;
case 0x536edb:c.instructions+=16;goto B536edb;
case 0x536edf:c.instructions+=15;goto B536edf;
case 0x536ee1:c.instructions+=14;goto B536ee1;
case 0x536ee3:c.instructions+=13;goto B536ee3;
case 0x536ee7:c.instructions+=12;goto B536ee7;
case 0x536ee8:c.instructions+=11;goto B536ee8;
case 0x536eea:c.instructions+=10;goto B536eea;
case 0x536eed:c.instructions+=9;goto B536eed;
case 0x536eef:c.instructions+=8;goto B536eef;
case 0x536ef1:c.instructions+=7;goto B536ef1;
case 0x536ef4:c.instructions+=6;goto B536ef4;
case 0x536ef5:c.instructions+=5;goto B536ef5;
case 0x536ef9:c.instructions+=4;goto B536ef9;
case 0x536efd:c.instructions+=3;goto B536efd;
case 0x536f00:c.instructions+=2;goto B536f00;
case 0x536f05:c.instructions+=1;goto B536f05;
case 0x536f0c:goto L536f0c;
case 0x536f0e:goto L536f0e;
case 0x536f12:c.instructions+=17;goto B536f12;
case 0x536f13:c.instructions+=16;goto B536f13;
case 0x536f17:c.instructions+=15;goto B536f17;
case 0x536f1b:c.instructions+=14;goto B536f1b;
case 0x536f1c:c.instructions+=13;goto B536f1c;
case 0x536f20:c.instructions+=12;goto B536f20;
case 0x536f21:c.instructions+=11;goto B536f21;
case 0x536f25:c.instructions+=10;goto B536f25;
case 0x536f26:c.instructions+=9;goto B536f26;
case 0x536f27:c.instructions+=8;goto B536f27;
case 0x536f28:c.instructions+=7;goto B536f28;
case 0x536f2d:c.instructions+=6;goto B536f2d;
case 0x536f32:c.instructions+=5;goto B536f32;
case 0x536f37:c.instructions+=4;goto B536f37;
case 0x536f3c:c.instructions+=3;goto B536f3c;
case 0x536f41:c.instructions+=2;goto B536f41;
case 0x536f43:c.instructions+=1;goto B536f43;
case 0x536f48:goto L536f48;
case 0x536f4c:c.instructions+=3;goto B536f4c;
case 0x536f4f:c.instructions+=2;goto B536f4f;
case 0x536f51:c.instructions+=1;goto B536f51;
case 0x536f56:goto L536f56;
case 0x536f57:c.instructions+=5;goto B536f57;
case 0x536f58:c.instructions+=4;goto B536f58;
case 0x536f59:c.instructions+=3;goto B536f59;
case 0x536f5b:c.instructions+=2;goto B536f5b;
case 0x536f5c:c.instructions+=1;goto B536f5c;
case 0x536f60:goto L536f60;
case 0x536f61:c.instructions+=12;goto B536f61;
case 0x536f63:c.instructions+=11;goto B536f63;
case 0x536f66:c.instructions+=10;goto B536f66;
case 0x536f6c:c.instructions+=9;goto B536f6c;
case 0x536f6d:c.instructions+=8;goto B536f6d;
case 0x536f6e:c.instructions+=7;goto B536f6e;
case 0x536f71:c.instructions+=6;goto B536f71;
case 0x536f74:c.instructions+=5;goto B536f74;
case 0x536f75:c.instructions+=4;goto B536f75;
case 0x536f77:c.instructions+=3;goto B536f77;
case 0x536f78:c.instructions+=2;goto B536f78;
case 0x536f7c:c.instructions+=1;goto B536f7c;
case 0x536f81:goto L536f81;
case 0x536f84:c.instructions+=3;goto B536f84;
case 0x536f86:c.instructions+=2;goto B536f86;
case 0x536f8a:c.instructions+=1;goto B536f8a;
case 0x536f90:goto L536f90;
case 0x536f93:c.instructions+=2;goto B536f93;
case 0x536f95:c.instructions+=1;goto B536f95;
case 0x536f9b:goto L536f9b;
case 0x536f9e:c.instructions+=2;goto B536f9e;
case 0x536fa0:c.instructions+=1;goto B536fa0;
case 0x536fa2:goto L536fa2;
case 0x536fa3:c.instructions+=3;goto B536fa3;
case 0x536fa4:c.instructions+=2;goto B536fa4;
case 0x536fa6:c.instructions+=1;goto B536fa6;
case 0x536fab:goto L536fab;
case 0x536fad:c.instructions+=1;goto B536fad;
case 0x536faf:goto L536faf;
case 0x536fb2:c.instructions+=3;goto B536fb2;
case 0x536fb3:c.instructions+=2;goto B536fb3;
case 0x536fb5:c.instructions+=1;goto B536fb5;
case 0x536fba:goto L536fba;
case 0x536fbf:c.instructions+=3;goto B536fbf;
case 0x536fc2:c.instructions+=2;goto B536fc2;
case 0x536fca:c.instructions+=1;goto B536fca;
case 0x536fcc:goto L536fcc;
case 0x536fcf:c.instructions+=1;goto B536fcf;
case 0x536fd1:goto L536fd1;
case 0x536fd8:c.instructions+=1;goto B536fd8;
case 0x536fda:goto L536fda;
case 0x536fe0:c.instructions+=1;goto B536fe0;
case 0x536fe4:goto L536fe4;
case 0x536fe7:c.instructions+=3;goto B536fe7;
case 0x536feb:c.instructions+=2;goto B536feb;
case 0x536fec:c.instructions+=1;goto B536fec;
case 0x536ff1:goto L536ff1;
case 0x536ff5:c.instructions+=5;goto B536ff5;
case 0x536ff9:c.instructions+=4;goto B536ff9;
case 0x536ffc:c.instructions+=3;goto B536ffc;
case 0x536ffd:c.instructions+=2;goto B536ffd;
case 0x536ffe:c.instructions+=1;goto B536ffe;
default:missing_instruction(c.pc);}
B536001:L536001:{c.instructions+=6;NFSU2_TR(0x536001);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B536004:{NFSU2_TR(0x536004);
__builtin_memmove((R+12),(R+0),4);
}
B536006:{NFSU2_TR(0x536006);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53600a:{NFSU2_TR(0x53600a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53600b:{NFSU2_TR(0x53600b);
__builtin_memmove((R+4),(R+24),4);
}
B53600d:{NFSU2_TR(0x53600d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536012ull));
TAIL_STATIC(0x532670u,532);
}
B536012:L536012:{c.instructions+=3;NFSU2_TR(0x536012);
__builtin_memmove((R+0),gp(0x8384d4),4);
}
B536017:{NFSU2_TR(0x536017);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536019:{NFSU2_TR(0x536019);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53603c;}}
}
B53601b:L53601b:{c.instructions+=3;NFSU2_TR(0x53601b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53601d:{NFSU2_TR(0x53601d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53601f:{NFSU2_TR(0x53601f);
if(r1(R+518)){{goto L536032;}}
}
B536021:L536021:{c.instructions+=6;NFSU2_TR(0x536021);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536024:{NFSU2_TR(0x536024);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536026:{NFSU2_TR(0x536026);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B536028:{NFSU2_TR(0x536028);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536029:{NFSU2_TR(0x536029);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53602a:{NFSU2_TR(0x53602a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53602full));
TAIL_STATIC(0x43bcd0u,43b);
}
B53602f:L53602f:{c.instructions+=1;NFSU2_TR(0x53602f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B536032:L536032:{c.instructions+=2;NFSU2_TR(0x536032);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536034:{NFSU2_TR(0x536034);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53603c;}}
}
B536036:L536036:{c.instructions+=2;NFSU2_TR(0x536036);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
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
B53603a:{NFSU2_TR(0x53603a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536043;}}
}
B53603c:L53603c:{c.instructions+=1;NFSU2_TR(0x53603c);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
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
B536043:L536043:{c.instructions+=4;NFSU2_TR(0x536043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B536044:{NFSU2_TR(0x536044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B536045:{NFSU2_TR(0x536045);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B536046:{NFSU2_TR(0x536046);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B536050:L536050:{c.instructions+=20;NFSU2_TR(0x536050);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536052:{NFSU2_TR(0x536052);
u8 U[4];
w4(U+0,u32(0x7775ebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536057:{NFSU2_TR(0x536057);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53605d:{NFSU2_TR(0x53605d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53605e:{NFSU2_TR(0x53605e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536065:{NFSU2_TR(0x536065);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536066:{NFSU2_TR(0x536066);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536067:{NFSU2_TR(0x536067);
__builtin_memmove((R+24),(R+4),4);
}
B536069:{NFSU2_TR(0x536069);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B53606c:{NFSU2_TR(0x53606c);
u8 U[4];
w4(U+0,u32(0x79bba0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B536072:{NFSU2_TR(0x536072);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536073:{NFSU2_TR(0x536073);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536077:{NFSU2_TR(0x536077);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B536079:{NFSU2_TR(0x536079);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53607c:{NFSU2_TR(0x53607c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53607e:{NFSU2_TR(0x53607e);
u8 U[4];
w4(U+0,u32(0x79ab28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536083:{NFSU2_TR(0x536083);
u8 U[4];
w4(U+0,u32(0x1c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536088:{NFSU2_TR(0x536088);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53608a:{NFSU2_TR(0x53608a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B536092:{NFSU2_TR(0x536092);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536097ull));
TAIL_STATIC(0x440df0u,440);
}
B536097:L536097:{c.instructions+=6;NFSU2_TR(0x536097);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536099:{NFSU2_TR(0x536099);
u8 U[4];
w4(U+0,u32(0x79ab10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53609e:{NFSU2_TR(0x53609e);
u8 U[4];
w4(U+0,u32(0x384ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5360a3:{NFSU2_TR(0x5360a3);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5360a8:{NFSU2_TR(0x5360a8);
__builtin_memmove(gp(0x83847c),(R+0),4);
}
B5360ad:{NFSU2_TR(0x5360ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5360b2ull));
TAIL_STATIC(0x440df0u,440);
}
B5360b2:L5360b2:{c.instructions+=5;NFSU2_TR(0x5360b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5360b5:{NFSU2_TR(0x5360b5);
__builtin_memmove(gp(0x838480),(R+0),4);
}
B5360ba:{NFSU2_TR(0x5360ba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5360bc:{NFSU2_TR(0x5360bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5360bf:{NFSU2_TR(0x5360bf);
w4(R+4,u32(0xd00ull));
}
B5360c4:L5360c4:{c.instructions+=1;NFSU2_TR(0x5360c4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5360c6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5360c4u);}goto L5360c4;}
}
B5360c6:L5360c6:{c.instructions+=7;NFSU2_TR(0x5360c6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5360ca:{NFSU2_TR(0x5360ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5360cb:{NFSU2_TR(0x5360cb);
__builtin_memmove((R+0),(R+24),4);
}
B5360cd:{NFSU2_TR(0x5360cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5360ce:{NFSU2_TR(0x5360ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5360d5:{NFSU2_TR(0x5360d5);
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
B5360d8:{NFSU2_TR(0x5360d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5360e0:L5360e0:{c.instructions+=3;NFSU2_TR(0x5360e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5360e1:{NFSU2_TR(0x5360e1);
__builtin_memmove((R+24),(R+4),4);
}
B5360e3:{NFSU2_TR(0x5360e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5360e8ull));
{goto L536100;}
}
B5360e8:L5360e8:{c.instructions+=2;NFSU2_TR(0x5360e8);
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
B5360ed:{NFSU2_TR(0x5360ed);
if(r1(R+518)){{goto L5360f8;}}
}
B5360ef:L5360ef:{c.instructions+=2;NFSU2_TR(0x5360ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5360f0:{NFSU2_TR(0x5360f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5360f5ull));
TAIL_STATIC(0x575630u,575);
}
B5360f5:L5360f5:{c.instructions+=1;NFSU2_TR(0x5360f5);
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
B5360f8:L5360f8:{c.instructions+=3;NFSU2_TR(0x5360f8);
__builtin_memmove((R+0),(R+24),4);
}
B5360fa:{NFSU2_TR(0x5360fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5360fb:{NFSU2_TR(0x5360fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B536100:L536100:{c.instructions+=14;NFSU2_TR(0x536100);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536102:{NFSU2_TR(0x536102);
u8 U[4];
w4(U+0,u32(0x7775ebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536107:{NFSU2_TR(0x536107);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53610d:{NFSU2_TR(0x53610d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53610e:{NFSU2_TR(0x53610e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536115:{NFSU2_TR(0x536115);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536116:{NFSU2_TR(0x536116);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536117:{NFSU2_TR(0x536117);
__builtin_memmove((R+24),(R+4),4);
}
B536119:{NFSU2_TR(0x536119);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53611d:{NFSU2_TR(0x53611d);
u8 U[4];
w4(U+0,u32(0x79bba0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B536123:{NFSU2_TR(0x536123);
__builtin_memmove((R+0),gp(0x83847c),4);
}
B536128:{NFSU2_TR(0x536128);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536129:{NFSU2_TR(0x536129);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B536131:{NFSU2_TR(0x536131);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536136ull));
TAIL_STATIC(0x440e40u,440);
}
B536136:L536136:{c.instructions+=4;NFSU2_TR(0x536136);
__builtin_memmove((R+4),gp(0x838480),4);
}
B53613c:{NFSU2_TR(0x53613c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53613d:{NFSU2_TR(0x53613d);
s4(0x83847c,u32(0x0ull));
}
B536147:{NFSU2_TR(0x536147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53614cull));
TAIL_STATIC(0x440e40u,440);
}
B53614c:L53614c:{c.instructions+=4;NFSU2_TR(0x53614c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53614f:{NFSU2_TR(0x53614f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B536152:{NFSU2_TR(0x536152);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53615a:{NFSU2_TR(0x53615a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53615full));
TAIL_STATIC(0x531900u,531);
}
B53615f:L53615f:{c.instructions+=5;NFSU2_TR(0x53615f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536163:{NFSU2_TR(0x536163);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B536164:{NFSU2_TR(0x536164);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53616b:{NFSU2_TR(0x53616b);
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
B53616e:{NFSU2_TR(0x53616e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B536170:L536170:{c.instructions+=67;NFSU2_TR(0x536170);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536172:{NFSU2_TR(0x536172);
u8 U[4];
w4(U+0,u32(0x777654ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536177:{NFSU2_TR(0x536177);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53617d:{NFSU2_TR(0x53617d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53617e:{NFSU2_TR(0x53617e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536185:{NFSU2_TR(0x536185);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536186:{NFSU2_TR(0x536186);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B536188:{NFSU2_TR(0x536188);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536189:{NFSU2_TR(0x536189);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53618a:{NFSU2_TR(0x53618a);
__builtin_memmove((R+24),(R+4),4);
}
B53618c:{NFSU2_TR(0x53618c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53618f:{NFSU2_TR(0x53618f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536192:{NFSU2_TR(0x536192);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536195:{NFSU2_TR(0x536195);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B536199:{NFSU2_TR(0x536199);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B53619d:{NFSU2_TR(0x53619d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361a0:{NFSU2_TR(0x5361a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361a3:{NFSU2_TR(0x5361a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361a6:{NFSU2_TR(0x5361a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5361a9:{NFSU2_TR(0x5361a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5361ac:{NFSU2_TR(0x5361ac);
w4(R+0,u32(0x79b878ull));
}
B5361b1:{NFSU2_TR(0x5361b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5361b2:{NFSU2_TR(0x5361b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361b6:{NFSU2_TR(0x5361b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361bc:{NFSU2_TR(0x5361bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361c2:{NFSU2_TR(0x5361c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361c8:{NFSU2_TR(0x5361c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361ce:{NFSU2_TR(0x5361ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361d2:{NFSU2_TR(0x5361d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361d8:{NFSU2_TR(0x5361d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361de:{NFSU2_TR(0x5361de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361e4:{NFSU2_TR(0x5361e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361ea:{NFSU2_TR(0x5361ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361f0:{NFSU2_TR(0x5361f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361f6:{NFSU2_TR(0x5361f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5361fc:{NFSU2_TR(0x5361fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536202:{NFSU2_TR(0x536202);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536208:{NFSU2_TR(0x536208);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4114ull))));
w4(U+4,u32(0x79a9ecull));
s4(u32(r4(U+0)),r4(U+4));
}
B536212:{NFSU2_TR(0x536212);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x411cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536218:{NFSU2_TR(0x536218);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4120ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53621e:{NFSU2_TR(0x53621e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4118ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536224:{NFSU2_TR(0x536224);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x412cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53622a:{NFSU2_TR(0x53622a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536230:{NFSU2_TR(0x536230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4128ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536236:{NFSU2_TR(0x536236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53623c:{NFSU2_TR(0x53623c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4134ull))));
__builtin_memmove((R+12),(U+0),4);
}
B536242:{NFSU2_TR(0x536242);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536245:{NFSU2_TR(0x536245);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536248:{NFSU2_TR(0x536248);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53624b:{NFSU2_TR(0x53624b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B53624d:{NFSU2_TR(0x53624d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B536250:{NFSU2_TR(0x536250);
w1(R+0,u8(0x1ull));
}
B536252:{NFSU2_TR(0x536252);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B536254:{NFSU2_TR(0x536254);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B536257:{NFSU2_TR(0x536257);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53625a:{NFSU2_TR(0x53625a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53625d:{NFSU2_TR(0x53625d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53625f:{NFSU2_TR(0x53625f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5250ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B536265:{NFSU2_TR(0x536265);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53626b:{NFSU2_TR(0x53626b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53626e:{NFSU2_TR(0x53626e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536271:{NFSU2_TR(0x536271);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536274:{NFSU2_TR(0x536274);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53627a:{NFSU2_TR(0x53627a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53627d:{NFSU2_TR(0x53627d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5251ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B536283:{NFSU2_TR(0x536283);
w4(R+4,u32(0x13ull));
}
B536288:{NFSU2_TR(0x536288);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53628e:L53628e:{c.instructions+=1;NFSU2_TR(0x53628e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L536290;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53628eu);}goto L53628e;}
}
B536290:L536290:{c.instructions+=3;NFSU2_TR(0x536290);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4148ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536296:{NFSU2_TR(0x536296);
w4(R+4,u32(0x400ull));
}
B53629b:{NFSU2_TR(0x53629b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x414cull))));
__builtin_memmove((R+28),(U+0),4);
}
B5362a1:L5362a1:{c.instructions+=1;NFSU2_TR(0x5362a1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5362a3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5362a1u);}goto L5362a1;}
}
B5362a3:L5362a3:{c.instructions+=3;NFSU2_TR(0x5362a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x514cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5362a9:{NFSU2_TR(0x5362a9);
w4(R+4,u32(0x40ull));
}
B5362ae:{NFSU2_TR(0x5362ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5362b4:L5362b4:{c.instructions+=1;NFSU2_TR(0x5362b4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5362b6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5362b4u);}goto L5362b4;}
}
B5362b6:L5362b6:{c.instructions+=3;NFSU2_TR(0x5362b6);
__builtin_memmove((R+4),(R+12),4);
}
B5362b8:{NFSU2_TR(0x5362b8);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5362bd:{NFSU2_TR(0x5362bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5362c2ull));
TAIL_STATIC(0x5359d0u,535);
}
B5362c2:L5362c2:{c.instructions+=8;NFSU2_TR(0x5362c2);
__builtin_memmove((R+0),(R+24),4);
}
B5362c4:{NFSU2_TR(0x5362c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5362c5:{NFSU2_TR(0x5362c5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5362c9:{NFSU2_TR(0x5362c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5362ca:{NFSU2_TR(0x5362ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5362cb:{NFSU2_TR(0x5362cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5362d2:{NFSU2_TR(0x5362d2);
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
B5362d5:{NFSU2_TR(0x5362d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5362e0:L5362e0:{c.instructions+=9;NFSU2_TR(0x5362e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5362e1:{NFSU2_TR(0x5362e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5362e2:{NFSU2_TR(0x5362e2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5362e3:{NFSU2_TR(0x5362e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5362e4:{NFSU2_TR(0x5362e4);
__builtin_memmove((R+28),(R+4),4);
}
B5362e6:{NFSU2_TR(0x5362e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5362ec:{NFSU2_TR(0x5362ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5362ee:{NFSU2_TR(0x5362ee);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5362f2:{NFSU2_TR(0x5362f2);
if(r1(R+518)){{goto L53630f;}}
}
B5362f4:L5362f4:{c.instructions+=2;NFSU2_TR(0x5362f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5362f8:{NFSU2_TR(0x5362f8);
{goto L536300;}
}
B5362fa:L5362fa:{c.instructions+=2;NFSU2_TR(0x5362fa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5362fe:{NFSU2_TR(0x5362fe);
__builtin_memmove((R+28),(R+28),4);
}
B536300:L536300:{c.instructions+=2;NFSU2_TR(0x536300);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536302:{NFSU2_TR(0x536302);
if(r1(R+518)){{goto L536318;}}
}
B536304:L536304:{c.instructions+=4;NFSU2_TR(0x536304);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536307:{NFSU2_TR(0x536307);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536309:{NFSU2_TR(0x536309);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53630d:{NFSU2_TR(0x53630d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5362fau);}goto L5362fa;}}
}
B53630f:L53630f:{c.instructions+=6;NFSU2_TR(0x53630f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B536310:{NFSU2_TR(0x536310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B536311:{NFSU2_TR(0x536311);
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
B536313:{NFSU2_TR(0x536313);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B536314:{NFSU2_TR(0x536314);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B536315:{NFSU2_TR(0x536315);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B536318:L536318:{c.instructions+=3;NFSU2_TR(0x536318);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53631e:{NFSU2_TR(0x53631e);
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
B536320:{NFSU2_TR(0x536320);
if(r1(R+518)){{goto L53632e;}}
}
B536322:L536322:{c.instructions+=3;NFSU2_TR(0x536322);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B536324:{NFSU2_TR(0x536324);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536325:{NFSU2_TR(0x536325);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536328ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B536328:L536328:{c.instructions+=2;NFSU2_TR(0x536328);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53632c:{NFSU2_TR(0x53632c);
{goto L536333;}
}
B53632e:L53632e:{c.instructions+=1;NFSU2_TR(0x53632e);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B536333:L536333:{c.instructions+=4;NFSU2_TR(0x536333);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536339:{NFSU2_TR(0x536339);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53633b:{NFSU2_TR(0x53633b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B536341:{NFSU2_TR(0x536341);
if(r1(R+518)){{goto L536356;}}
}
B536343:L536343:{c.instructions+=2;NFSU2_TR(0x536343);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536345:{NFSU2_TR(0x536345);
if(r1(R+518)){{goto L536350;}}
}
B536347:L536347:{c.instructions+=3;NFSU2_TR(0x536347);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53634a:{NFSU2_TR(0x53634a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53634c:{NFSU2_TR(0x53634c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x536343u);}goto L536343;}}
}
B53634e:L53634e:{c.instructions+=1;NFSU2_TR(0x53634e);
{goto L536356;}
}
B536350:L536350:{c.instructions+=2;NFSU2_TR(0x536350);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536351:{NFSU2_TR(0x536351);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536356ull));
TAIL_STATIC(0x505400u,505);
}
B536356:L536356:{c.instructions+=4;NFSU2_TR(0x536356);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x412cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53635c:{NFSU2_TR(0x53635c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53635e:{NFSU2_TR(0x53635e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53635f:{NFSU2_TR(0x53635f);
if(r1(R+518)){{goto L5363c1;}}
}
B536361:L536361:{c.instructions+=4;NFSU2_TR(0x536361);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B536364:{NFSU2_TR(0x536364);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536367:{NFSU2_TR(0x536367);
__builtin_memmove((R+24),(R+0),4);
}
B536369:{NFSU2_TR(0x536369);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5363bb;}}
}
B53636b:L53636b:{c.instructions+=2;NFSU2_TR(0x53636b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x412cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B536371:{NFSU2_TR(0x536371);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536379;}}
}
B536373:L536373:{c.instructions+=1;NFSU2_TR(0x536373);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x412cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536379:L536379:{c.instructions+=2;NFSU2_TR(0x536379);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53637f:{NFSU2_TR(0x53637f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53638a;}}
}
B536381:L536381:{c.instructions+=2;NFSU2_TR(0x536381);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536384:{NFSU2_TR(0x536384);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53638a:L53638a:{c.instructions+=3;NFSU2_TR(0x53638a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53638d:{NFSU2_TR(0x53638d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53638f:{NFSU2_TR(0x53638f);
if(r1(R+518)){{goto L536397;}}
}
B536391:L536391:{c.instructions+=2;NFSU2_TR(0x536391);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536394:{NFSU2_TR(0x536394);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536397:L536397:{c.instructions+=3;NFSU2_TR(0x536397);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53639a:{NFSU2_TR(0x53639a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53639c:{NFSU2_TR(0x53639c);
if(r1(R+518)){{goto L5363a4;}}
}
B53639e:L53639e:{c.instructions+=2;NFSU2_TR(0x53639e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5363a1:{NFSU2_TR(0x5363a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5363a4:L5363a4:{c.instructions+=7;NFSU2_TR(0x5363a4);
w4(R+0,u32(0xabadcafeull));
}
B5363a9:{NFSU2_TR(0x5363a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5363ac:{NFSU2_TR(0x5363ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5363af:{NFSU2_TR(0x5363af);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4128ull))));
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
B5363b5:{NFSU2_TR(0x5363b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5363b7:{NFSU2_TR(0x5363b7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5363b9:{NFSU2_TR(0x5363b9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5363bbull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5363bb:L5363bb:{c.instructions+=3;NFSU2_TR(0x5363bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5363bd:{NFSU2_TR(0x5363bd);
__builtin_memmove((R+4),(R+24),4);
}
B5363bf:{NFSU2_TR(0x5363bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x536361u);}goto L536361;}}
}
B5363c1:L5363c1:{c.instructions+=3;NFSU2_TR(0x5363c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x411cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5363c7:{NFSU2_TR(0x5363c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5363c9:{NFSU2_TR(0x5363c9);
if(r1(R+518)){{goto L5364a2;}}
}
B5363cf:L5363cf:{c.instructions+=1;NFSU2_TR(0x5363cf);
}
B5363d0:L5363d0:{c.instructions+=3;NFSU2_TR(0x5363d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5363d3:{NFSU2_TR(0x5363d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5363d6:{NFSU2_TR(0x5363d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5363df;}}
}
B5363d8:L5363d8:{c.instructions+=2;NFSU2_TR(0x5363d8);
u8 U[4];
w4(U+0,u32(0x79bc30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5363dd:{NFSU2_TR(0x5363dd);
{goto L536435;}
}
B5363df:L5363df:{c.instructions+=3;NFSU2_TR(0x5363df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5363e2:{NFSU2_TR(0x5363e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5363e4:{NFSU2_TR(0x5363e4);
if(r1(R+518)){{goto L536494;}}
}
B5363ea:L5363ea:{c.instructions+=2;NFSU2_TR(0x5363ea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5363ed:{NFSU2_TR(0x5363ed);
if(r1(R+518)){{goto L536494;}}
}
B5363f3:L5363f3:{c.instructions+=2;NFSU2_TR(0x5363f3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5363f6:{NFSU2_TR(0x5363f6);
if(r1(R+518)){{goto L536494;}}
}
B5363fc:L5363fc:{c.instructions+=2;NFSU2_TR(0x5363fc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5363ff:{NFSU2_TR(0x5363ff);
if(r1(R+518)){{goto L536494;}}
}
B536405:L536405:{c.instructions+=2;NFSU2_TR(0x536405);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536408:{NFSU2_TR(0x536408);
if(r1(R+518)){{goto L536494;}}
}
B53640e:L53640e:{c.instructions+=2;NFSU2_TR(0x53640e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536411:{NFSU2_TR(0x536411);
if(r1(R+518)){{goto L536494;}}
}
B536417:L536417:{c.instructions+=2;NFSU2_TR(0x536417);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53641a:{NFSU2_TR(0x53641a);
if(r1(R+518)){{goto L536494;}}
}
B53641c:L53641c:{c.instructions+=4;NFSU2_TR(0x53641c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53641f:{NFSU2_TR(0x53641f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536420:{NFSU2_TR(0x536420);
__builtin_memmove((R+4),(R+12),4);
}
B536422:{NFSU2_TR(0x536422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536427ull));
TAIL_STATIC(0x517fe0u,517);
}
B536427:L536427:{c.instructions+=4;NFSU2_TR(0x536427);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536429:{NFSU2_TR(0x536429);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B53642c:{NFSU2_TR(0x53642c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53642e:{NFSU2_TR(0x53642e);
if(r1(R+518)){{goto L536494;}}
}
B536430:L536430:{c.instructions+=1;NFSU2_TR(0x536430);
u8 U[4];
w4(U+0,u32(0x79bba8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536435:L536435:{c.instructions+=1;NFSU2_TR(0x536435);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53643aull));
TAIL_STATIC(0x50d510u,50d);
}
B53643a:L53643a:{c.instructions+=4;NFSU2_TR(0x53643a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x411cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536440:{NFSU2_TR(0x536440);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B536443:{NFSU2_TR(0x536443);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536445:{NFSU2_TR(0x536445);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536450;}}
}
B536447:L536447:{c.instructions+=2;NFSU2_TR(0x536447);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53644a:{NFSU2_TR(0x53644a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x411cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536450:L536450:{c.instructions+=2;NFSU2_TR(0x536450);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B536456:{NFSU2_TR(0x536456);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536461;}}
}
B536458:L536458:{c.instructions+=2;NFSU2_TR(0x536458);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53645b:{NFSU2_TR(0x53645b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536461:L536461:{c.instructions+=3;NFSU2_TR(0x536461);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536464:{NFSU2_TR(0x536464);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536466:{NFSU2_TR(0x536466);
if(r1(R+518)){{goto L53646e;}}
}
B536468:L536468:{c.instructions+=2;NFSU2_TR(0x536468);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53646b:{NFSU2_TR(0x53646b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53646e:L53646e:{c.instructions+=3;NFSU2_TR(0x53646e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536471:{NFSU2_TR(0x536471);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536473:{NFSU2_TR(0x536473);
if(r1(R+518)){{goto L53647b;}}
}
B536475:L536475:{c.instructions+=2;NFSU2_TR(0x536475);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536478:{NFSU2_TR(0x536478);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53647b:L53647b:{c.instructions+=8;NFSU2_TR(0x53647b);
w4(R+0,u32(0xabadcafeull));
}
B536480:{NFSU2_TR(0x536480);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536483:{NFSU2_TR(0x536483);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536486:{NFSU2_TR(0x536486);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4118ull))));
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
B53648c:{NFSU2_TR(0x53648c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53648e:{NFSU2_TR(0x53648e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536490:{NFSU2_TR(0x536490);
__builtin_memmove((R+4),(R+24),4);
}
B536492:{NFSU2_TR(0x536492);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536494ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B536494:L536494:{c.instructions+=3;NFSU2_TR(0x536494);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536496:{NFSU2_TR(0x536496);
__builtin_memmove((R+24),(R+20),4);
}
B536498:{NFSU2_TR(0x536498);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5363d0u);}goto L5363d0;}}
}
B53649e:L53649e:{c.instructions+=1;NFSU2_TR(0x53649e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5364a2:L5364a2:{c.instructions+=3;NFSU2_TR(0x5364a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5364a5:{NFSU2_TR(0x5364a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5364a7:{NFSU2_TR(0x5364a7);
if(r1(R+518)){{goto L5364bb;}}
}
B5364a9:L5364a9:{c.instructions+=3;NFSU2_TR(0x5364a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5364aa:{NFSU2_TR(0x5364aa);
__builtin_memmove((R+4),(R+28),4);
}
B5364ac:{NFSU2_TR(0x5364ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5364b1ull));
TAIL_STATIC(0x51a8b0u,51a);
}
B5364b1:L5364b1:{c.instructions+=7;NFSU2_TR(0x5364b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5364b2:{NFSU2_TR(0x5364b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5364b3:{NFSU2_TR(0x5364b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5364b4:{NFSU2_TR(0x5364b4);
w1(R+0,u8(0x1ull));
}
B5364b6:{NFSU2_TR(0x5364b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5364b7:{NFSU2_TR(0x5364b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5364b8:{NFSU2_TR(0x5364b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5364bb:L5364bb:{c.instructions+=3;NFSU2_TR(0x5364bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5364be:{NFSU2_TR(0x5364be);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5364c0:{NFSU2_TR(0x5364c0);
if(r1(R+518)){{goto L5364ed;}}
}
B5364c2:L5364c2:{c.instructions+=4;NFSU2_TR(0x5364c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5364c5:{NFSU2_TR(0x5364c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5364c6:{NFSU2_TR(0x5364c6);
__builtin_memmove((R+4),(R+28),4);
}
B5364c8:{NFSU2_TR(0x5364c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5364cdull));
TAIL_STATIC(0x50b240u,50b);
}
B5364cd:L5364cd:{c.instructions+=2;NFSU2_TR(0x5364cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5364cf:{NFSU2_TR(0x5364cf);
if(r1(R+518)){{goto L5364e6;}}
}
B5364d1:L5364d1:{c.instructions+=4;NFSU2_TR(0x5364d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5364d4:{NFSU2_TR(0x5364d4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5364d5:{NFSU2_TR(0x5364d5);
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
B5364d7:{NFSU2_TR(0x5364d7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5364e3;}}
}
B5364d9:L5364d9:{c.instructions+=3;NFSU2_TR(0x5364d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5364da:{NFSU2_TR(0x5364da);
__builtin_memmove((R+4),(R+28),4);
}
B5364dc:{NFSU2_TR(0x5364dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5364e1ull));
TAIL_STATIC(0x52c500u,52c);
}
B5364e1:L5364e1:{c.instructions+=1;NFSU2_TR(0x5364e1);
{goto L5364e6;}
}
B5364e3:L5364e3:{c.instructions+=1;NFSU2_TR(0x5364e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5364e6:L5364e6:{c.instructions+=3;NFSU2_TR(0x5364e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5364e9:{NFSU2_TR(0x5364e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5364eb:{NFSU2_TR(0x5364eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5364c2u);}goto L5364c2;}}
}
B5364ed:L5364ed:{c.instructions+=3;NFSU2_TR(0x5364ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5364f3:{NFSU2_TR(0x5364f3);
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
B5364f5:{NFSU2_TR(0x5364f5);
if(r1(R+518)){{goto L536505;}}
}
B5364f7:L5364f7:{c.instructions+=7;NFSU2_TR(0x5364f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5364fa:{NFSU2_TR(0x5364fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5364fc:{NFSU2_TR(0x5364fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5364fd:{NFSU2_TR(0x5364fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536500:{NFSU2_TR(0x536500);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536501:{NFSU2_TR(0x536501);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536502:{NFSU2_TR(0x536502);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536505ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B536505:L536505:{c.instructions+=3;NFSU2_TR(0x536505);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B536509:{NFSU2_TR(0x536509);
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
B53650b:{NFSU2_TR(0x53650b);
if(r1(R+518)){{goto L536516;}}
}
B53650d:L53650d:{c.instructions+=4;NFSU2_TR(0x53650d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B536510:{NFSU2_TR(0x536510);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536512:{NFSU2_TR(0x536512);
__builtin_memmove((R+4),(R+20),4);
}
B536514:{NFSU2_TR(0x536514);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536516ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B536516:L536516:{c.instructions+=7;NFSU2_TR(0x536516);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B536517:{NFSU2_TR(0x536517);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B536518:{NFSU2_TR(0x536518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B536519:{NFSU2_TR(0x536519);
w1(R+0,u8(0x1ull));
}
B53651b:{NFSU2_TR(0x53651b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53651c:{NFSU2_TR(0x53651c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53651d:{NFSU2_TR(0x53651d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B536520:L536520:{c.instructions+=2;NFSU2_TR(0x536520);
w4(R+0,u32(0x1104ull));
}
B536525:{NFSU2_TR(0x536525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53652aull));
TAIL_STATIC(0x75c4d0u,75c);
}
B53652a:L53652a:{c.instructions+=26;NFSU2_TR(0x53652a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53652b:{NFSU2_TR(0x53652b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53652c:{NFSU2_TR(0x53652c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53652d:{NFSU2_TR(0x53652d);
__builtin_memmove((R+24),(R+4),4);
}
B53652f:{NFSU2_TR(0x53652f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536535:{NFSU2_TR(0x536535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B536537:{NFSU2_TR(0x536537);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536538:{NFSU2_TR(0x536538);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53653c:{NFSU2_TR(0x53653c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53653d:{NFSU2_TR(0x53653d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B536545:{NFSU2_TR(0x536545);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53654d:{NFSU2_TR(0x53654d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B536555:{NFSU2_TR(0x536555);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53655d:{NFSU2_TR(0x53655d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B536565:{NFSU2_TR(0x536565);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53656d:{NFSU2_TR(0x53656d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B536575:{NFSU2_TR(0x536575);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53657d:{NFSU2_TR(0x53657d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B536585:{NFSU2_TR(0x536585);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53658d:{NFSU2_TR(0x53658d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B536595:{NFSU2_TR(0x536595);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53659d:{NFSU2_TR(0x53659d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5365a5:{NFSU2_TR(0x5365a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5365ad:{NFSU2_TR(0x5365ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5365b5:{NFSU2_TR(0x5365b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5365bd:{NFSU2_TR(0x5365bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5365c0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5365c0:L5365c0:{c.instructions+=6;NFSU2_TR(0x5365c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5365c6:{NFSU2_TR(0x5365c6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5365c8:{NFSU2_TR(0x5365c8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5365ca:{NFSU2_TR(0x5365ca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5365cc:{NFSU2_TR(0x5365cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5365d0:{NFSU2_TR(0x5365d0);
if(r1(R+518)){{goto L5365e5;}}
}
B5365d2:L5365d2:{c.instructions+=5;NFSU2_TR(0x5365d2);
u8 U[16];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5365d9:{NFSU2_TR(0x5365d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5365dc:{NFSU2_TR(0x5365dc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5365dd:{NFSU2_TR(0x5365dd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5365df:{NFSU2_TR(0x5365df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5365d2u);}goto L5365d2;}}
}
B5365e1:L5365e1:{c.instructions+=1;NFSU2_TR(0x5365e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5365e5:L5365e5:{c.instructions+=3;NFSU2_TR(0x5365e5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5365e7:{NFSU2_TR(0x5365e7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5365e9:{NFSU2_TR(0x5365e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L536663;}}
}
B5365eb:L5365eb:{c.instructions+=1;NFSU2_TR(0x5365eb);
w4(R+20,u32(0xabadcafeull));
}
B5365f0:L5365f0:{c.instructions+=5;NFSU2_TR(0x5365f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5365f6:{NFSU2_TR(0x5365f6);
u8 U[16];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5365fd:{NFSU2_TR(0x5365fd);
__builtin_memmove((R+4),(R+8),4);
}
B5365ff:{NFSU2_TR(0x5365ff);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536601:{NFSU2_TR(0x536601);
if(r1(R+518)){{goto L536658;}}
}
B536603:L536603:{c.instructions+=2;NFSU2_TR(0x536603);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536605:{NFSU2_TR(0x536605);
if(r1(R+518)){{goto L536610;}}
}
B536607:L536607:{c.instructions+=3;NFSU2_TR(0x536607);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53660a:{NFSU2_TR(0x53660a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53660c:{NFSU2_TR(0x53660c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x536603u);}goto L536603;}}
}
B53660e:L53660e:{c.instructions+=1;NFSU2_TR(0x53660e);
{goto L536658;}
}
B536610:L536610:{c.instructions+=2;NFSU2_TR(0x536610);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536612:{NFSU2_TR(0x536612);
if(r1(R+518)){{goto L536658;}}
}
B536614:L536614:{c.instructions+=2;NFSU2_TR(0x536614);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536616:{NFSU2_TR(0x536616);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536621;}}
}
B536618:L536618:{c.instructions+=2;NFSU2_TR(0x536618);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53661b:{NFSU2_TR(0x53661b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536621:L536621:{c.instructions+=2;NFSU2_TR(0x536621);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B536627:{NFSU2_TR(0x536627);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536632;}}
}
B536629:L536629:{c.instructions+=2;NFSU2_TR(0x536629);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53662c:{NFSU2_TR(0x53662c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536632:L536632:{c.instructions+=3;NFSU2_TR(0x536632);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536635:{NFSU2_TR(0x536635);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536637:{NFSU2_TR(0x536637);
if(r1(R+518)){{goto L53663f;}}
}
B536639:L536639:{c.instructions+=2;NFSU2_TR(0x536639);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53663c:{NFSU2_TR(0x53663c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53663f:L53663f:{c.instructions+=3;NFSU2_TR(0x53663f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536642:{NFSU2_TR(0x536642);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536644:{NFSU2_TR(0x536644);
if(r1(R+518)){{goto L53664c;}}
}
B536646:L536646:{c.instructions+=2;NFSU2_TR(0x536646);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536649:{NFSU2_TR(0x536649);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53664c:L53664c:{c.instructions+=3;NFSU2_TR(0x53664c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53664f:{NFSU2_TR(0x53664f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536652:{NFSU2_TR(0x536652);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B536658:L536658:{c.instructions+=4;NFSU2_TR(0x536658);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53665c:{NFSU2_TR(0x53665c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B53665d:{NFSU2_TR(0x53665d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53665f:{NFSU2_TR(0x53665f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5365f0u);}goto L5365f0;}}
}
B536661:L536661:{c.instructions+=1;NFSU2_TR(0x536661);
__builtin_memmove((R+8),(R+0),4);
}
B536663:L536663:{c.instructions+=3;NFSU2_TR(0x536663);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B536665:{NFSU2_TR(0x536665);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536667:{NFSU2_TR(0x536667);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5366ee;}}
}
B53666d:L53666d:{c.instructions+=1;NFSU2_TR(0x53666d);
__builtin_memmove((R+4),(R+4),4);
}
B536670:L536670:{c.instructions+=4;NFSU2_TR(0x536670);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536676:{NFSU2_TR(0x536676);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536678:{NFSU2_TR(0x536678);
u8 U[16];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B53667f:{NFSU2_TR(0x53667f);
if(r1(R+518)){{goto L536694;}}
}
B536681:L536681:{c.instructions+=1;NFSU2_TR(0x536681);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536684:L536684:{c.instructions+=2;NFSU2_TR(0x536684);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B536687:{NFSU2_TR(0x536687);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L536690;}}
}
B536689:L536689:{c.instructions+=3;NFSU2_TR(0x536689);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53668c:{NFSU2_TR(0x53668c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53668e:{NFSU2_TR(0x53668e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x536684u);}goto L536684;}}
}
B536690:L536690:{c.instructions+=1;NFSU2_TR(0x536690);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536694:L536694:{c.instructions+=2;NFSU2_TR(0x536694);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536696:{NFSU2_TR(0x536696);
if(r1(R+518)){{goto L5366e9;}}
}
B536698:L536698:{c.instructions+=2;NFSU2_TR(0x536698);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53669a:{NFSU2_TR(0x53669a);
if(r1(R+518)){{goto L5366b1;}}
}
B53669c:L53669c:{c.instructions+=4;NFSU2_TR(0x53669c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53669f:{NFSU2_TR(0x53669f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5366a1:{NFSU2_TR(0x5366a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5366a4:{NFSU2_TR(0x5366a4);
if(r1(R+518)){{goto L5366a9;}}
}
B5366a6:L5366a6:{c.instructions+=1;NFSU2_TR(0x5366a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5366a9:L5366a9:{c.instructions+=3;NFSU2_TR(0x5366a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5366ac:{NFSU2_TR(0x5366ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5366af:{NFSU2_TR(0x5366af);
{goto L5366ca;}
}
B5366b1:L5366b1:{c.instructions+=4;NFSU2_TR(0x5366b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5366b7:{NFSU2_TR(0x5366b7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5366b9:{NFSU2_TR(0x5366b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5366bc:{NFSU2_TR(0x5366bc);
if(r1(R+518)){{goto L5366c1;}}
}
B5366be:L5366be:{c.instructions+=1;NFSU2_TR(0x5366be);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5366c1:L5366c1:{c.instructions+=2;NFSU2_TR(0x5366c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5366c4:{NFSU2_TR(0x5366c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5366ca:L5366ca:{c.instructions+=2;NFSU2_TR(0x5366ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5366d0:{NFSU2_TR(0x5366d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5366d8;}}
}
B5366d2:L5366d2:{c.instructions+=1;NFSU2_TR(0x5366d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5366d8:L5366d8:{c.instructions+=4;NFSU2_TR(0x5366d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5366de:{NFSU2_TR(0x5366de);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5366e2:{NFSU2_TR(0x5366e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5366e3:{NFSU2_TR(0x5366e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5366e9:L5366e9:{c.instructions+=3;NFSU2_TR(0x5366e9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5366ea:{NFSU2_TR(0x5366ea);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5366ec:{NFSU2_TR(0x5366ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x536670u);}goto L536670;}}
}
B5366ee:L5366ee:{c.instructions+=3;NFSU2_TR(0x5366ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5366f4:{NFSU2_TR(0x5366f4);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5366f6:{NFSU2_TR(0x5366f6);
if(r1(R+518)){{goto L5367c5;}}
}
B5366fc:L5366fc:{c.instructions+=2;NFSU2_TR(0x5366fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+20),(U+0),4);
}
B536702:{NFSU2_TR(0x536702);
{goto L536710;}
}
B536704:L536704:{c.instructions+=2;NFSU2_TR(0x536704);
u8 U[6];
w1(R+512,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B536706:{NFSU2_TR(0x536706);
{goto L536710;}
}
B536710:L536710:{c.instructions+=6;NFSU2_TR(0x536710);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536715:{NFSU2_TR(0x536715);
u8 U[4];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53671c:{NFSU2_TR(0x53671c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53671d:{NFSU2_TR(0x53671d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53671e:{NFSU2_TR(0x53671e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B536725:{NFSU2_TR(0x536725);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53672aull));
TAIL_STATIC(0x50b410u,50b);
}
B53672a:L53672a:{c.instructions+=6;NFSU2_TR(0x53672a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536730:{NFSU2_TR(0x536730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B536732:{NFSU2_TR(0x536732);
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
B536735:{NFSU2_TR(0x536735);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536737:{NFSU2_TR(0x536737);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536738:{NFSU2_TR(0x536738);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53673bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53673b:L53673b:{c.instructions+=4;NFSU2_TR(0x53673b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+20)),r4(U+0));
}
B53673e:{NFSU2_TR(0x53673e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B536741:{NFSU2_TR(0x536741);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536743:{NFSU2_TR(0x536743);
if(r1(R+518)){{goto L536775;}}
}
B536745:L536745:{c.instructions+=3;NFSU2_TR(0x536745);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B536749:{NFSU2_TR(0x536749);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53674b:{NFSU2_TR(0x53674b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536761;}}
}
B53674d:L53674d:{c.instructions+=7;NFSU2_TR(0x53674d);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B536751:{NFSU2_TR(0x536751);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536752:{NFSU2_TR(0x536752);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B536756:{NFSU2_TR(0x536756);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536757:{NFSU2_TR(0x536757);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536758:{NFSU2_TR(0x536758);
__builtin_memmove((R+4),(R+24),4);
}
B53675a:{NFSU2_TR(0x53675a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53675full));
TAIL_STATIC(0x52c5d0u,52c);
}
B53675f:L53675f:{c.instructions+=1;NFSU2_TR(0x53675f);
{goto L53676e;}
}
B536761:L536761:{c.instructions+=5;NFSU2_TR(0x536761);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B536765:{NFSU2_TR(0x536765);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536766:{NFSU2_TR(0x536766);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536767:{NFSU2_TR(0x536767);
__builtin_memmove((R+4),(R+24),4);
}
B536769:{NFSU2_TR(0x536769);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53676eull));
TAIL_STATIC(0x51a970u,51a);
}
B53676e:L53676e:{c.instructions+=3;NFSU2_TR(0x53676e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B536771:{NFSU2_TR(0x536771);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536773:{NFSU2_TR(0x536773);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x536745u);}goto L536745;}}
}
B536775:L536775:{c.instructions+=2;NFSU2_TR(0x536775);
__builtin_memmove((R+4),(R+20),4);
}
B536777:{NFSU2_TR(0x536777);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53677cull));
TAIL_STATIC(0x5114f0u,511);
}
B53677c:L53677c:{c.instructions+=7;NFSU2_TR(0x53677c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53677f:{NFSU2_TR(0x53677f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536785:{NFSU2_TR(0x536785);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B536787:{NFSU2_TR(0x536787);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536788:{NFSU2_TR(0x536788);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B53678e:{NFSU2_TR(0x53678e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53678f:{NFSU2_TR(0x53678f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536792ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B536792:L536792:{c.instructions+=4;NFSU2_TR(0x536792);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536798:{NFSU2_TR(0x536798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53679a:{NFSU2_TR(0x53679a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53679b:{NFSU2_TR(0x53679b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53679eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53679e:L53679e:{c.instructions+=2;NFSU2_TR(0x53679e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53679f:{NFSU2_TR(0x53679f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5367a4ull));
TAIL_STATIC(0x50b430u,50b);
}
B5367a4:L5367a4:{c.instructions+=4;NFSU2_TR(0x5367a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5367a7:{NFSU2_TR(0x5367a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5367aa:{NFSU2_TR(0x5367aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5367ac:{NFSU2_TR(0x5367ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x536704u);}goto L536704;}}
}
B5367b2:L5367b2:{c.instructions+=8;NFSU2_TR(0x5367b2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B5367b4:{NFSU2_TR(0x5367b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5367b5:{NFSU2_TR(0x5367b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5250ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5367bb:{NFSU2_TR(0x5367bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5367bc:{NFSU2_TR(0x5367bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5367bd:{NFSU2_TR(0x5367bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5367be:{NFSU2_TR(0x5367be);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5367c4:{NFSU2_TR(0x5367c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5367c5:L5367c5:{c.instructions+=8;NFSU2_TR(0x5367c5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5367c7:{NFSU2_TR(0x5367c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5367c8:{NFSU2_TR(0x5367c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5250ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5367ce:{NFSU2_TR(0x5367ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5367cf:{NFSU2_TR(0x5367cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5367d0:{NFSU2_TR(0x5367d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5367d1:{NFSU2_TR(0x5367d1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5367d7:{NFSU2_TR(0x5367d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5367e0:L5367e0:{c.instructions+=10;NFSU2_TR(0x5367e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5367e1:{NFSU2_TR(0x5367e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5367e5:{NFSU2_TR(0x5367e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5367e6:{NFSU2_TR(0x5367e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5367ea:{NFSU2_TR(0x5367ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5367eb:{NFSU2_TR(0x5367eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5367ef:{NFSU2_TR(0x5367ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5367f3:{NFSU2_TR(0x5367f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5367f4:{NFSU2_TR(0x5367f4);
__builtin_memmove((R+28),(R+4),4);
}
B5367f6:{NFSU2_TR(0x5367f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536804;}}
}
B5367f8:L5367f8:{c.instructions+=4;NFSU2_TR(0x5367f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5367f9:{NFSU2_TR(0x5367f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5367fa:{NFSU2_TR(0x5367fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5367fb:{NFSU2_TR(0x5367fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536800ull));
TAIL_STATIC(0x51b000u,51b);
}
B536800:L536800:{c.instructions+=2;NFSU2_TR(0x536800);
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
B536802:{NFSU2_TR(0x536802);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536846;}}
}
B536804:L536804:{c.instructions+=2;NFSU2_TR(0x536804);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B536808:{NFSU2_TR(0x536808);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536818;}}
}
B53680a:L53680a:{c.instructions+=5;NFSU2_TR(0x53680a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53680b:{NFSU2_TR(0x53680b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53680c:{NFSU2_TR(0x53680c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53680d:{NFSU2_TR(0x53680d);
__builtin_memmove((R+4),(R+28),4);
}
B53680f:{NFSU2_TR(0x53680f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536814ull));
TAIL_STATIC(0x52c750u,52c);
}
B536814:L536814:{c.instructions+=2;NFSU2_TR(0x536814);
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
B536816:{NFSU2_TR(0x536816);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536846;}}
}
B536818:L536818:{c.instructions+=3;NFSU2_TR(0x536818);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53681b:{NFSU2_TR(0x53681b);
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
B53681d:{NFSU2_TR(0x53681d);
if(r1(R+518)){{goto L536846;}}
}
B53681f:L53681f:{c.instructions+=1;NFSU2_TR(0x53681f);
}
B536820:L536820:{c.instructions+=2;NFSU2_TR(0x536820);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B536823:{NFSU2_TR(0x536823);
if(r1(R+518)){{goto L536833;}}
}
B536825:L536825:{c.instructions+=3;NFSU2_TR(0x536825);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536828:{NFSU2_TR(0x536828);
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
B53682a:{NFSU2_TR(0x53682a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x536820u);}goto L536820;}}
}
B53682c:L53682c:{c.instructions+=5;NFSU2_TR(0x53682c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53682d:{NFSU2_TR(0x53682d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53682e:{NFSU2_TR(0x53682e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53682f:{NFSU2_TR(0x53682f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B536830:{NFSU2_TR(0x536830);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B536833:L536833:{c.instructions+=2;NFSU2_TR(0x536833);
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
B536835:{NFSU2_TR(0x536835);
if(r1(R+518)){{goto L536846;}}
}
B536837:L536837:{c.instructions+=7;NFSU2_TR(0x536837);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53683b:{NFSU2_TR(0x53683b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53683c:{NFSU2_TR(0x53683c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53683d:{NFSU2_TR(0x53683d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53683e:{NFSU2_TR(0x53683e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53683f:{NFSU2_TR(0x53683f);
__builtin_memmove((R+4),(R+28),4);
}
B536841:{NFSU2_TR(0x536841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536846ull));
TAIL_STATIC(0x52c7c0u,52c);
}
B536846:L536846:{c.instructions+=5;NFSU2_TR(0x536846);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B536847:{NFSU2_TR(0x536847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B536848:{NFSU2_TR(0x536848);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B536849:{NFSU2_TR(0x536849);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53684a:{NFSU2_TR(0x53684a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B536850:L536850:{c.instructions+=11;NFSU2_TR(0x536850);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536851:{NFSU2_TR(0x536851);
__builtin_memmove((R+20),(R+16),4);
}
B536853:{NFSU2_TR(0x536853);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B536856:{NFSU2_TR(0x536856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa4ull))));
}
B53685c:{NFSU2_TR(0x53685c);
__builtin_memmove((R+0),gp(0x8383ac),4);
}
B536861:{NFSU2_TR(0x536861);
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
B536863:{NFSU2_TR(0x536863);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536864:{NFSU2_TR(0x536864);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536865:{NFSU2_TR(0x536865);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536866:{NFSU2_TR(0x536866);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53686a:{NFSU2_TR(0x53686a);
if(r1(R+518)){{goto L536a47;}}
}
B536870:L536870:{c.instructions+=3;NFSU2_TR(0x536870);
__builtin_memmove((R+0),gp(0x8383a4),4);
}
B536875:{NFSU2_TR(0x536875);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536877:{NFSU2_TR(0x536877);
if(r1(R+518)){{goto L536884;}}
}
B536879:L536879:{c.instructions+=3;NFSU2_TR(0x536879);
w4(R+28,u32(0x8385c0ull));
}
B53687e:{NFSU2_TR(0x53687e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536882:{NFSU2_TR(0x536882);
{goto L536898;}
}
B536884:L536884:{c.instructions+=4;NFSU2_TR(0x536884);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536886:{NFSU2_TR(0x536886);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536888:{NFSU2_TR(0x536888);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53688a:{NFSU2_TR(0x53688a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53688full));
TAIL_STATIC(0x4901d0u,490);
}
B53688f:L53688f:{c.instructions+=3;NFSU2_TR(0x53688f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B536892:{NFSU2_TR(0x536892);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536896:{NFSU2_TR(0x536896);
__builtin_memmove((R+28),(R+0),4);
}
B536898:L536898:{c.instructions+=5;NFSU2_TR(0x536898);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53689b:{NFSU2_TR(0x53689b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B53689e:{NFSU2_TR(0x53689e);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5368a2:{NFSU2_TR(0x5368a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5368a3:{NFSU2_TR(0x5368a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5368a8ull));
TAIL_STATIC(0x43c780u,43c);
}
B5368a8:L5368a8:{c.instructions+=14;NFSU2_TR(0x5368a8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5368ac:{NFSU2_TR(0x5368ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5368af:{NFSU2_TR(0x5368af);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5368b4:{NFSU2_TR(0x5368b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5368b5:{NFSU2_TR(0x5368b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5368b9:{NFSU2_TR(0x5368b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5368bd:{NFSU2_TR(0x5368bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5368be:{NFSU2_TR(0x5368be);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5368c2:{NFSU2_TR(0x5368c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5368c3:{NFSU2_TR(0x5368c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5368c4:{NFSU2_TR(0x5368c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+172),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5368cc:{NFSU2_TR(0x5368cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x43700000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5368d4:{NFSU2_TR(0x5368d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5368dc:{NFSU2_TR(0x5368dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5368e1ull));
TAIL_STATIC(0x51b0b0u,51b);
}
B5368e1:L5368e1:{c.instructions+=8;NFSU2_TR(0x5368e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5368e5:{NFSU2_TR(0x5368e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5368e6:{NFSU2_TR(0x5368e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5368ea:{NFSU2_TR(0x5368ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5368ee:{NFSU2_TR(0x5368ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5368ef:{NFSU2_TR(0x5368ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5368f3:{NFSU2_TR(0x5368f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5368f4:{NFSU2_TR(0x5368f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5368f9ull));
TAIL_STATIC(0x43c990u,43c);
}
B5368f9:L5368f9:{c.instructions+=4;NFSU2_TR(0x5368f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5368fc:{NFSU2_TR(0x5368fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5368ff:{NFSU2_TR(0x5368ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536901:{NFSU2_TR(0x536901);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536912;}}
}
B536903:L536903:{c.instructions+=4;NFSU2_TR(0x536903);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536907:{NFSU2_TR(0x536907);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536908:{NFSU2_TR(0x536908);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536909:{NFSU2_TR(0x536909);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53690eull));
TAIL_STATIC(0x52cba0u,52c);
}
B53690e:L53690e:{c.instructions+=2;NFSU2_TR(0x53690e);
__builtin_memmove((R+12),(R+0),4);
}
B536910:{NFSU2_TR(0x536910);
{goto L53691d;}
}
B536912:L536912:{c.instructions+=4;NFSU2_TR(0x536912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536915:{NFSU2_TR(0x536915);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536916:{NFSU2_TR(0x536916);
__builtin_memmove((R+4),(R+12),4);
}
B536918:{NFSU2_TR(0x536918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53691dull));
TAIL_STATIC(0x52c3a0u,52c);
}
B53691d:L53691d:{c.instructions+=29;NFSU2_TR(0x53691d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536921:{NFSU2_TR(0x536921);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536922:{NFSU2_TR(0x536922);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536924:{NFSU2_TR(0x536924);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536928:{NFSU2_TR(0x536928);
__builtin_memmove((R+4),(R+0),4);
}
B53692a:{NFSU2_TR(0x53692a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53692e:{NFSU2_TR(0x53692e);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B536930:{NFSU2_TR(0x536930);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B536933:{NFSU2_TR(0x536933);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B536935:{NFSU2_TR(0x536935);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536936:{NFSU2_TR(0x536936);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536938:{NFSU2_TR(0x536938);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B53693a:{NFSU2_TR(0x53693a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B53693d:{NFSU2_TR(0x53693d);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B53693f:{NFSU2_TR(0x53693f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536943:{NFSU2_TR(0x536943);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536944:{NFSU2_TR(0x536944);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536946:{NFSU2_TR(0x536946);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B536949:{NFSU2_TR(0x536949);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B53694b:{NFSU2_TR(0x53694b);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B53694d:{NFSU2_TR(0x53694d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536951:{NFSU2_TR(0x536951);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536955:{NFSU2_TR(0x536955);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536959:{NFSU2_TR(0x536959);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53695d:{NFSU2_TR(0x53695d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B536961:{NFSU2_TR(0x536961);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B536963:{NFSU2_TR(0x536963);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536967:{NFSU2_TR(0x536967);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B53696b:{NFSU2_TR(0x53696b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L536973;}}
}
B53696d:L53696d:{c.instructions+=1;NFSU2_TR(0x53696d);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B536973:L536973:{c.instructions+=3;NFSU2_TR(0x536973);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B536977:{NFSU2_TR(0x536977);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536979:{NFSU2_TR(0x536979);
if(r1(R+518)){{goto L536988;}}
}
B53697b:L53697b:{c.instructions+=4;NFSU2_TR(0x53697b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B53697c:{NFSU2_TR(0x53697c);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B53697e:{NFSU2_TR(0x53697e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536980:{NFSU2_TR(0x536980);
if(r1(R+518)){{goto L536988;}}
}
B536982:L536982:{c.instructions+=3;NFSU2_TR(0x536982);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536984:{NFSU2_TR(0x536984);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536986:{NFSU2_TR(0x536986);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x536982u);}goto L536982;}}
}
B536988:L536988:{c.instructions+=2;NFSU2_TR(0x536988);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53698a:{NFSU2_TR(0x53698a);
if(r1(R+518)){{goto L5369aa;}}
}
B53698c:L53698c:{c.instructions+=5;NFSU2_TR(0x53698c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B53698f:{NFSU2_TR(0x53698f);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536991:{NFSU2_TR(0x536991);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536993:{NFSU2_TR(0x536993);
w4(R+8,u32(0x2ull));
}
B536998:{NFSU2_TR(0x536998);
if(r1(R+518)){{goto L5369ac;}}
}
B53699a:L53699a:{c.instructions+=1;NFSU2_TR(0x53699a);
__builtin_memmove((R+12),(R+12),4);
}
B5369a0:L5369a0:{c.instructions+=4;NFSU2_TR(0x5369a0);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5369a2:{NFSU2_TR(0x5369a2);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B5369a4:{NFSU2_TR(0x5369a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5369a6:{NFSU2_TR(0x5369a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5369a0u);}goto L5369a0;}}
}
B5369a8:L5369a8:{c.instructions+=1;NFSU2_TR(0x5369a8);
{goto L5369ac;}
}
B5369aa:L5369aa:{c.instructions+=1;NFSU2_TR(0x5369aa);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5369ac:L5369ac:{c.instructions+=4;NFSU2_TR(0x5369ac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5369ae:{NFSU2_TR(0x5369ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5369b2:{NFSU2_TR(0x5369b2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5369b6:{NFSU2_TR(0x5369b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5369be;}}
}
B5369b8:L5369b8:{c.instructions+=1;NFSU2_TR(0x5369b8);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5369be:L5369be:{c.instructions+=5;NFSU2_TR(0x5369be);
__builtin_memmove((R+0),gp(0x8383a4),4);
}
B5369c3:{NFSU2_TR(0x5369c3);
if(mod_hook_table[28]){SPILL();c.pc=0x5369c3u;mod_hook_table[28](c);SPILL();if(c.pc!=0x5369c3u){TAIL_DYNAMIC(c.pc);}}
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5369c6:{NFSU2_TR(0x5369c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5369c8:{NFSU2_TR(0x5369c8);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5369ca:{NFSU2_TR(0x5369ca);
if(r1(R+518)){{goto L5369e0;}}
}
B5369cc:L5369cc:{c.instructions+=4;NFSU2_TR(0x5369cc);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5369d2:{NFSU2_TR(0x5369d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3a83126full));
s4(u32(r4(U+0)),r4(U+4));
}
B5369da:{NFSU2_TR(0x5369da);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5369de:{NFSU2_TR(0x5369de);
{goto L5369ec;}
}
B5369e0:L5369e0:{c.instructions+=2;NFSU2_TR(0x5369e0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5369e4:{NFSU2_TR(0x5369e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5369ec:L5369ec:{c.instructions+=4;NFSU2_TR(0x5369ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5369f0:{NFSU2_TR(0x5369f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5369f3:{NFSU2_TR(0x5369f3);
w4(R+4,u32(0x10ull));
}
B5369f8:{NFSU2_TR(0x5369f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5369fc:L5369fc:{c.instructions+=1;NFSU2_TR(0x5369fc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5369fe;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5369fcu);}goto L5369fc;}
}
B5369fe:L5369fe:{c.instructions+=18;NFSU2_TR(0x5369fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536a01:{NFSU2_TR(0x536a01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a02:{NFSU2_TR(0x536a02);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536a06:{NFSU2_TR(0x536a06);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a07:{NFSU2_TR(0x536a07);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536a0b:{NFSU2_TR(0x536a0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B536a0f:{NFSU2_TR(0x536a0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a10:{NFSU2_TR(0x536a10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a11:{NFSU2_TR(0x536a11);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a16:{NFSU2_TR(0x536a16);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a17:{NFSU2_TR(0x536a17);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a19:{NFSU2_TR(0x536a19);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a1e:{NFSU2_TR(0x536a1e);
u8 U[4];
__builtin_memmove((U+0),(MODV+244),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a23:{NFSU2_TR(0x536a23);
u8 U[4];
__builtin_memmove((U+0),(MODV+248),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a28:{NFSU2_TR(0x536a28);
u8 U[4];
__builtin_memmove((U+0),(MODV+252),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a2d:{NFSU2_TR(0x536a2d);
u8 U[4];
__builtin_memmove((U+0),(MODV+256),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a32:{NFSU2_TR(0x536a32);
__builtin_memmove((R+4),(R+12),4);
}
B536a34:{NFSU2_TR(0x536a34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536a39ull));
TAIL_STATIC(0x51a1c0u,51a);
}
B536a39:L536a39:{c.instructions+=4;NFSU2_TR(0x536a39);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536a3d:{NFSU2_TR(0x536a3d);
__builtin_memmove((R+4),(R+12),4);
}
B536a3f:{NFSU2_TR(0x536a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536a42:{NFSU2_TR(0x536a42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536a47ull));
TAIL_STATIC(0x51a5d0u,51a);
}
B536a47:L536a47:{c.instructions+=6;NFSU2_TR(0x536a47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B536a48:{NFSU2_TR(0x536a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B536a49:{NFSU2_TR(0x536a49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B536a4a:{NFSU2_TR(0x536a4a);
__builtin_memmove((R+16),(R+20),4);
}
B536a4c:{NFSU2_TR(0x536a4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B536a4d:{NFSU2_TR(0x536a4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B536a50:L536a50:{c.instructions+=14;NFSU2_TR(0x536a50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a51:{NFSU2_TR(0x536a51);
__builtin_memmove((R+20),(R+16),4);
}
B536a53:{NFSU2_TR(0x536a53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B536a56:{NFSU2_TR(0x536a56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb4ull))));
}
B536a5c:{NFSU2_TR(0x536a5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a5d:{NFSU2_TR(0x536a5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a5e:{NFSU2_TR(0x536a5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a5f:{NFSU2_TR(0x536a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B536a62:{NFSU2_TR(0x536a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B536a65:{NFSU2_TR(0x536a65);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B536a69:{NFSU2_TR(0x536a69);
__builtin_memmove((R+12),(R+4),4);
}
B536a6b:{NFSU2_TR(0x536a6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a6c:{NFSU2_TR(0x536a6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536a70:{NFSU2_TR(0x536a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536a75ull));
TAIL_STATIC(0x43c780u,43c);
}
B536a75:L536a75:{c.instructions+=14;NFSU2_TR(0x536a75);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B536a79:{NFSU2_TR(0x536a79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B536a7c:{NFSU2_TR(0x536a7c);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a81:{NFSU2_TR(0x536a81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a82:{NFSU2_TR(0x536a82);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B536a86:{NFSU2_TR(0x536a86);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a87:{NFSU2_TR(0x536a87);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B536a8e:{NFSU2_TR(0x536a8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a8f:{NFSU2_TR(0x536a8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536a90:{NFSU2_TR(0x536a90);
__builtin_memmove((R+4),(R+12),4);
}
B536a92:{NFSU2_TR(0x536a92);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+172),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536a9d:{NFSU2_TR(0x536a9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0x43700000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B536aa8:{NFSU2_TR(0x536aa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B536ab3:{NFSU2_TR(0x536ab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536ab8ull));
TAIL_STATIC(0x51b0b0u,51b);
}
B536ab8:L536ab8:{c.instructions+=8;NFSU2_TR(0x536ab8);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B536abf:{NFSU2_TR(0x536abf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536ac0:{NFSU2_TR(0x536ac0);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B536ac4:{NFSU2_TR(0x536ac4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536ac8:{NFSU2_TR(0x536ac8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536ac9:{NFSU2_TR(0x536ac9);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B536ad0:{NFSU2_TR(0x536ad0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536ad1:{NFSU2_TR(0x536ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536ad6ull));
TAIL_STATIC(0x43c990u,43c);
}
B536ad6:L536ad6:{c.instructions+=5;NFSU2_TR(0x536ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536ad9:{NFSU2_TR(0x536ad9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536adb:{NFSU2_TR(0x536adb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536add:{NFSU2_TR(0x536add);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536ade:{NFSU2_TR(0x536ade);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536ae3ull));
TAIL_STATIC(0x4901d0u,490);
}
B536ae3:L536ae3:{c.instructions+=5;NFSU2_TR(0x536ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B536ae6:{NFSU2_TR(0x536ae6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B536ae9:{NFSU2_TR(0x536ae9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536aeb:{NFSU2_TR(0x536aeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536aef:{NFSU2_TR(0x536aef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536b00;}}
}
B536af1:L536af1:{c.instructions+=4;NFSU2_TR(0x536af1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536af5:{NFSU2_TR(0x536af5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536af6:{NFSU2_TR(0x536af6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536af7:{NFSU2_TR(0x536af7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536afcull));
TAIL_STATIC(0x52cba0u,52c);
}
B536afc:L536afc:{c.instructions+=2;NFSU2_TR(0x536afc);
__builtin_memmove((R+12),(R+0),4);
}
B536afe:{NFSU2_TR(0x536afe);
{goto L536b0b;}
}
B536b00:L536b00:{c.instructions+=4;NFSU2_TR(0x536b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536b03:{NFSU2_TR(0x536b03);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536b04:{NFSU2_TR(0x536b04);
__builtin_memmove((R+4),(R+12),4);
}
B536b06:{NFSU2_TR(0x536b06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536b0bull));
TAIL_STATIC(0x52c3a0u,52c);
}
B536b0b:L536b0b:{c.instructions+=7;NFSU2_TR(0x536b0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536b0f:{NFSU2_TR(0x536b0f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B536b13:{NFSU2_TR(0x536b13);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B536b15:{NFSU2_TR(0x536b15);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B536b19:{NFSU2_TR(0x536b19);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536b1d:{NFSU2_TR(0x536b1d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B536b21:{NFSU2_TR(0x536b21);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L536b29;}}
}
B536b23:L536b23:{c.instructions+=1;NFSU2_TR(0x536b23);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B536b29:L536b29:{c.instructions+=4;NFSU2_TR(0x536b29);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B536b2b:{NFSU2_TR(0x536b2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536b2f:{NFSU2_TR(0x536b2f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B536b33:{NFSU2_TR(0x536b33);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L536b3b;}}
}
B536b35:L536b35:{c.instructions+=1;NFSU2_TR(0x536b35);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B536b3b:L536b3b:{c.instructions+=3;NFSU2_TR(0x536b3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536b3d:{NFSU2_TR(0x536b3d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B536b41:{NFSU2_TR(0x536b41);
if(r1(R+518)){{goto L536b5c;}}
}
B536b43:L536b43:{c.instructions+=5;NFSU2_TR(0x536b43);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B536b44:{NFSU2_TR(0x536b44);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536b46:{NFSU2_TR(0x536b46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536b48:{NFSU2_TR(0x536b48);
w4(R+4,u32(0x2ull));
}
B536b4d:{NFSU2_TR(0x536b4d);
if(r1(R+518)){{goto L536b58;}}
}
B536b4f:L536b4f:{c.instructions+=1;NFSU2_TR(0x536b4f);
}
B536b50:L536b50:{c.instructions+=4;NFSU2_TR(0x536b50);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536b52:{NFSU2_TR(0x536b52);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B536b54:{NFSU2_TR(0x536b54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536b56:{NFSU2_TR(0x536b56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x536b50u);}goto L536b50;}}
}
B536b58:L536b58:{c.instructions+=2;NFSU2_TR(0x536b58);
__builtin_memmove((R+28),(R+4),4);
}
B536b5a:{NFSU2_TR(0x536b5a);
{goto L536b5e;}
}
B536b5c:L536b5c:{c.instructions+=1;NFSU2_TR(0x536b5c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B536b5e:L536b5e:{c.instructions+=2;NFSU2_TR(0x536b5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536b60:{NFSU2_TR(0x536b60);
if(r1(R+518)){{goto L536b7c;}}
}
B536b62:L536b62:{c.instructions+=5;NFSU2_TR(0x536b62);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B536b65:{NFSU2_TR(0x536b65);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536b67:{NFSU2_TR(0x536b67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536b69:{NFSU2_TR(0x536b69);
w4(R+4,u32(0x2ull));
}
B536b6e:{NFSU2_TR(0x536b6e);
if(r1(R+518)){{goto L536b78;}}
}
B536b70:L536b70:{c.instructions+=4;NFSU2_TR(0x536b70);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536b72:{NFSU2_TR(0x536b72);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B536b74:{NFSU2_TR(0x536b74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536b76:{NFSU2_TR(0x536b76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x536b70u);}goto L536b70;}}
}
B536b78:L536b78:{c.instructions+=2;NFSU2_TR(0x536b78);
__builtin_memmove((R+0),(R+4),4);
}
B536b7a:{NFSU2_TR(0x536b7a);
{goto L536b7e;}
}
B536b7c:L536b7c:{c.instructions+=1;NFSU2_TR(0x536b7c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B536b7e:L536b7e:{c.instructions+=4;NFSU2_TR(0x536b7e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B536b80:{NFSU2_TR(0x536b80);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536b84:{NFSU2_TR(0x536b84);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B536b88:{NFSU2_TR(0x536b88);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L536b90;}}
}
B536b8a:L536b8a:{c.instructions+=1;NFSU2_TR(0x536b8a);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B536b90:L536b90:{c.instructions+=5;NFSU2_TR(0x536b90);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B536b92:{NFSU2_TR(0x536b92);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B536b94:{NFSU2_TR(0x536b94);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536b98:{NFSU2_TR(0x536b98);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B536b9c:{NFSU2_TR(0x536b9c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L536ba4;}}
}
B536b9e:L536b9e:{c.instructions+=1;NFSU2_TR(0x536b9e);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B536ba4:L536ba4:{c.instructions+=40;NFSU2_TR(0x536ba4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536ba8:{NFSU2_TR(0x536ba8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B536bac:{NFSU2_TR(0x536bac);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536bad:{NFSU2_TR(0x536bad);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536baf:{NFSU2_TR(0x536baf);
__builtin_memmove((R+4),(R+0),4);
}
B536bb1:{NFSU2_TR(0x536bb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536bb5:{NFSU2_TR(0x536bb5);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B536bb7:{NFSU2_TR(0x536bb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B536bba:{NFSU2_TR(0x536bba);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B536bbc:{NFSU2_TR(0x536bbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536bc0:{NFSU2_TR(0x536bc0);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536bc1:{NFSU2_TR(0x536bc1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536bc3:{NFSU2_TR(0x536bc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B536bc6:{NFSU2_TR(0x536bc6);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536bc8:{NFSU2_TR(0x536bc8);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B536bca:{NFSU2_TR(0x536bca);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536bce:{NFSU2_TR(0x536bce);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536bcf:{NFSU2_TR(0x536bcf);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B536bd2:{NFSU2_TR(0x536bd2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536bd4:{NFSU2_TR(0x536bd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536bd8:{NFSU2_TR(0x536bd8);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536bda:{NFSU2_TR(0x536bda);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B536bdc:{NFSU2_TR(0x536bdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536be0:{NFSU2_TR(0x536be0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536be4:{NFSU2_TR(0x536be4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536be8:{NFSU2_TR(0x536be8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536bec:{NFSU2_TR(0x536bec);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B536bef:{NFSU2_TR(0x536bef);
w4(R+4,u32(0x10ull));
}
B536bf4:{NFSU2_TR(0x536bf4);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B536bf8:{NFSU2_TR(0x536bf8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B536bfa:{NFSU2_TR(0x536bfa);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B536bfd:{NFSU2_TR(0x536bfd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B536c01:{NFSU2_TR(0x536c01);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B536c03:{NFSU2_TR(0x536c03);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B536c06:{NFSU2_TR(0x536c06);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B536c0a:{NFSU2_TR(0x536c0a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B536c0c:{NFSU2_TR(0x536c0c);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B536c0f:{NFSU2_TR(0x536c0f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B536c13:{NFSU2_TR(0x536c13);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B536c16:{NFSU2_TR(0x536c16);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B536c1d:L536c1d:{c.instructions+=1;NFSU2_TR(0x536c1d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L536c1f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x536c1du);}goto L536c1d;}
}
B536c1f:L536c1f:{c.instructions+=20;NFSU2_TR(0x536c1f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B536c23:{NFSU2_TR(0x536c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536c26:{NFSU2_TR(0x536c26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c27:{NFSU2_TR(0x536c27);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536c2b:{NFSU2_TR(0x536c2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c2c:{NFSU2_TR(0x536c2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536c30:{NFSU2_TR(0x536c30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c31:{NFSU2_TR(0x536c31);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536c35:{NFSU2_TR(0x536c35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c36:{NFSU2_TR(0x536c36);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536c3a:{NFSU2_TR(0x536c3a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c3b:{NFSU2_TR(0x536c3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c3c:{NFSU2_TR(0x536c3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c3d:{NFSU2_TR(0x536c3d);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c42:{NFSU2_TR(0x536c42);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c47:{NFSU2_TR(0x536c47);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c4c:{NFSU2_TR(0x536c4c);
u8 U[4];
w4(U+0,u32(0xbf000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c51:{NFSU2_TR(0x536c51);
u8 U[4];
w4(U+0,u32(0xbf000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c56:{NFSU2_TR(0x536c56);
__builtin_memmove((R+4),(R+12),4);
}
B536c58:{NFSU2_TR(0x536c58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536c5dull));
TAIL_STATIC(0x51a1c0u,51a);
}
B536c5d:L536c5d:{c.instructions+=4;NFSU2_TR(0x536c5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536c61:{NFSU2_TR(0x536c61);
__builtin_memmove((R+4),(R+12),4);
}
B536c63:{NFSU2_TR(0x536c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536c66:{NFSU2_TR(0x536c66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536c6bull));
TAIL_STATIC(0x51a5d0u,51a);
}
B536c6b:L536c6b:{c.instructions+=6;NFSU2_TR(0x536c6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B536c6c:{NFSU2_TR(0x536c6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B536c6d:{NFSU2_TR(0x536c6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B536c6e:{NFSU2_TR(0x536c6e);
__builtin_memmove((R+16),(R+20),4);
}
B536c70:{NFSU2_TR(0x536c70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B536c71:{NFSU2_TR(0x536c71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B536c80:L536c80:{c.instructions+=14;NFSU2_TR(0x536c80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c81:{NFSU2_TR(0x536c81);
__builtin_memmove((R+20),(R+16),4);
}
B536c83:{NFSU2_TR(0x536c83);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B536c86:{NFSU2_TR(0x536c86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc4ull))));
}
B536c8c:{NFSU2_TR(0x536c8c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c8d:{NFSU2_TR(0x536c8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c8e:{NFSU2_TR(0x536c8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c8f:{NFSU2_TR(0x536c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B536c92:{NFSU2_TR(0x536c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B536c95:{NFSU2_TR(0x536c95);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B536c99:{NFSU2_TR(0x536c99);
__builtin_memmove((R+12),(R+4),4);
}
B536c9b:{NFSU2_TR(0x536c9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536c9c:{NFSU2_TR(0x536c9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536ca0:{NFSU2_TR(0x536ca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536ca5ull));
TAIL_STATIC(0x43c780u,43c);
}
B536ca5:L536ca5:{c.instructions+=14;NFSU2_TR(0x536ca5);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B536ca9:{NFSU2_TR(0x536ca9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B536cac:{NFSU2_TR(0x536cac);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536cb1:{NFSU2_TR(0x536cb1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536cb2:{NFSU2_TR(0x536cb2);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B536cb6:{NFSU2_TR(0x536cb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536cb7:{NFSU2_TR(0x536cb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B536cbe:{NFSU2_TR(0x536cbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536cbf:{NFSU2_TR(0x536cbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536cc0:{NFSU2_TR(0x536cc0);
__builtin_memmove((R+4),(R+12),4);
}
B536cc2:{NFSU2_TR(0x536cc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+172),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536ccd:{NFSU2_TR(0x536ccd);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(0x43700000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B536cd8:{NFSU2_TR(0x536cd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B536ce3:{NFSU2_TR(0x536ce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536ce8ull));
TAIL_STATIC(0x51b0b0u,51b);
}
B536ce8:L536ce8:{c.instructions+=8;NFSU2_TR(0x536ce8);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B536cef:{NFSU2_TR(0x536cef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536cf0:{NFSU2_TR(0x536cf0);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B536cf4:{NFSU2_TR(0x536cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536cf8:{NFSU2_TR(0x536cf8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536cf9:{NFSU2_TR(0x536cf9);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B536d00:{NFSU2_TR(0x536d00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536d01:{NFSU2_TR(0x536d01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536d06ull));
TAIL_STATIC(0x43c990u,43c);
}
B536d06:L536d06:{c.instructions+=5;NFSU2_TR(0x536d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536d09:{NFSU2_TR(0x536d09);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536d0b:{NFSU2_TR(0x536d0b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536d0d:{NFSU2_TR(0x536d0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536d0e:{NFSU2_TR(0x536d0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536d13ull));
TAIL_STATIC(0x4901d0u,490);
}
B536d13:L536d13:{c.instructions+=5;NFSU2_TR(0x536d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B536d16:{NFSU2_TR(0x536d16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B536d19:{NFSU2_TR(0x536d19);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536d1b:{NFSU2_TR(0x536d1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536d1f:{NFSU2_TR(0x536d1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536d30;}}
}
B536d21:L536d21:{c.instructions+=4;NFSU2_TR(0x536d21);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536d25:{NFSU2_TR(0x536d25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536d26:{NFSU2_TR(0x536d26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536d27:{NFSU2_TR(0x536d27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536d2cull));
TAIL_STATIC(0x52cba0u,52c);
}
B536d2c:L536d2c:{c.instructions+=2;NFSU2_TR(0x536d2c);
__builtin_memmove((R+12),(R+0),4);
}
B536d2e:{NFSU2_TR(0x536d2e);
{goto L536d3b;}
}
B536d30:L536d30:{c.instructions+=4;NFSU2_TR(0x536d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536d33:{NFSU2_TR(0x536d33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536d34:{NFSU2_TR(0x536d34);
__builtin_memmove((R+4),(R+12),4);
}
B536d36:{NFSU2_TR(0x536d36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536d3bull));
TAIL_STATIC(0x52c3a0u,52c);
}
B536d3b:L536d3b:{c.instructions+=7;NFSU2_TR(0x536d3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536d3f:{NFSU2_TR(0x536d3f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B536d43:{NFSU2_TR(0x536d43);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B536d45:{NFSU2_TR(0x536d45);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B536d49:{NFSU2_TR(0x536d49);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536d4d:{NFSU2_TR(0x536d4d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B536d51:{NFSU2_TR(0x536d51);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L536d59;}}
}
B536d53:L536d53:{c.instructions+=1;NFSU2_TR(0x536d53);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B536d59:L536d59:{c.instructions+=4;NFSU2_TR(0x536d59);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B536d5b:{NFSU2_TR(0x536d5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536d5f:{NFSU2_TR(0x536d5f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B536d63:{NFSU2_TR(0x536d63);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L536d6b;}}
}
B536d65:L536d65:{c.instructions+=1;NFSU2_TR(0x536d65);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B536d6b:L536d6b:{c.instructions+=3;NFSU2_TR(0x536d6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536d6d:{NFSU2_TR(0x536d6d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B536d71:{NFSU2_TR(0x536d71);
if(r1(R+518)){{goto L536d8a;}}
}
B536d73:L536d73:{c.instructions+=5;NFSU2_TR(0x536d73);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B536d74:{NFSU2_TR(0x536d74);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536d76:{NFSU2_TR(0x536d76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536d78:{NFSU2_TR(0x536d78);
w4(R+4,u32(0x2ull));
}
B536d7d:{NFSU2_TR(0x536d7d);
if(r1(R+518)){{goto L536d8c;}}
}
B536d7f:L536d7f:{c.instructions+=1;NFSU2_TR(0x536d7f);
}
B536d80:L536d80:{c.instructions+=4;NFSU2_TR(0x536d80);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536d82:{NFSU2_TR(0x536d82);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B536d84:{NFSU2_TR(0x536d84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536d86:{NFSU2_TR(0x536d86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x536d80u);}goto L536d80;}}
}
B536d88:L536d88:{c.instructions+=1;NFSU2_TR(0x536d88);
{goto L536d8c;}
}
B536d8a:L536d8a:{c.instructions+=1;NFSU2_TR(0x536d8a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B536d8c:L536d8c:{c.instructions+=2;NFSU2_TR(0x536d8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536d8e:{NFSU2_TR(0x536d8e);
if(r1(R+518)){{goto L536dac;}}
}
B536d90:L536d90:{c.instructions+=5;NFSU2_TR(0x536d90);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B536d93:{NFSU2_TR(0x536d93);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536d95:{NFSU2_TR(0x536d95);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536d97:{NFSU2_TR(0x536d97);
w4(R+8,u32(0x2ull));
}
B536d9c:{NFSU2_TR(0x536d9c);
if(r1(R+518)){{goto L536da8;}}
}
B536d9e:L536d9e:{c.instructions+=1;NFSU2_TR(0x536d9e);
__builtin_memmove((R+28),(R+28),4);
}
B536da0:L536da0:{c.instructions+=4;NFSU2_TR(0x536da0);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536da2:{NFSU2_TR(0x536da2);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B536da4:{NFSU2_TR(0x536da4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536da6:{NFSU2_TR(0x536da6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x536da0u);}goto L536da0;}}
}
B536da8:L536da8:{c.instructions+=2;NFSU2_TR(0x536da8);
__builtin_memmove((R+0),(R+8),4);
}
B536daa:{NFSU2_TR(0x536daa);
{goto L536dae;}
}
B536dac:L536dac:{c.instructions+=1;NFSU2_TR(0x536dac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B536dae:L536dae:{c.instructions+=4;NFSU2_TR(0x536dae);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B536db0:{NFSU2_TR(0x536db0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536db4:{NFSU2_TR(0x536db4);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B536db8:{NFSU2_TR(0x536db8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L536dc0;}}
}
B536dba:L536dba:{c.instructions+=1;NFSU2_TR(0x536dba);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B536dc0:L536dc0:{c.instructions+=5;NFSU2_TR(0x536dc0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B536dc2:{NFSU2_TR(0x536dc2);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B536dc4:{NFSU2_TR(0x536dc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536dc8:{NFSU2_TR(0x536dc8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B536dcc:{NFSU2_TR(0x536dcc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L536dd4;}}
}
B536dce:L536dce:{c.instructions+=1;NFSU2_TR(0x536dce);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B536dd4:L536dd4:{c.instructions+=122;NFSU2_TR(0x536dd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B536dd7:{NFSU2_TR(0x536dd7);
__builtin_memmove((R+4),(R+0),4);
}
B536dd9:{NFSU2_TR(0x536dd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B536ddb:{NFSU2_TR(0x536ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B536dde:{NFSU2_TR(0x536dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536de1:{NFSU2_TR(0x536de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536de4:{NFSU2_TR(0x536de4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B536de7:{NFSU2_TR(0x536de7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536deb:{NFSU2_TR(0x536deb);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536dec:{NFSU2_TR(0x536dec);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536dee:{NFSU2_TR(0x536dee);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536df0:{NFSU2_TR(0x536df0);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B536df2:{NFSU2_TR(0x536df2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B536df5:{NFSU2_TR(0x536df5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B536df9:{NFSU2_TR(0x536df9);
__builtin_memmove((R+4),(R+0),4);
}
B536dfb:{NFSU2_TR(0x536dfb);
__builtin_memmove((R+0),(R+28),4);
}
B536dfd:{NFSU2_TR(0x536dfd);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536dfe:{NFSU2_TR(0x536dfe);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536e00:{NFSU2_TR(0x536e00);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536e02:{NFSU2_TR(0x536e02);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B536e04:{NFSU2_TR(0x536e04);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536e08:{NFSU2_TR(0x536e08);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536e09:{NFSU2_TR(0x536e09);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536e0b:{NFSU2_TR(0x536e0b);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536e0d:{NFSU2_TR(0x536e0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B536e10:{NFSU2_TR(0x536e10);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B536e12:{NFSU2_TR(0x536e12);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536e16:{NFSU2_TR(0x536e16);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B536e19:{NFSU2_TR(0x536e19);
__builtin_memmove((R+4),(R+0),4);
}
B536e1b:{NFSU2_TR(0x536e1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B536e1d:{NFSU2_TR(0x536e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B536e20:{NFSU2_TR(0x536e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536e23:{NFSU2_TR(0x536e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536e26:{NFSU2_TR(0x536e26);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536e2a:{NFSU2_TR(0x536e2a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536e2b:{NFSU2_TR(0x536e2b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536e2d:{NFSU2_TR(0x536e2d);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536e2f:{NFSU2_TR(0x536e2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B536e32:{NFSU2_TR(0x536e32);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B536e34:{NFSU2_TR(0x536e34);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B536e37:{NFSU2_TR(0x536e37);
__builtin_memmove((R+4),(R+0),4);
}
B536e39:{NFSU2_TR(0x536e39);
__builtin_memmove((R+0),(R+28),4);
}
B536e3b:{NFSU2_TR(0x536e3b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536e3c:{NFSU2_TR(0x536e3c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536e3e:{NFSU2_TR(0x536e3e);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536e40:{NFSU2_TR(0x536e40);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B536e42:{NFSU2_TR(0x536e42);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536e46:{NFSU2_TR(0x536e46);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536e47:{NFSU2_TR(0x536e47);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536e49:{NFSU2_TR(0x536e49);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536e4b:{NFSU2_TR(0x536e4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B536e4e:{NFSU2_TR(0x536e4e);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B536e50:{NFSU2_TR(0x536e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536e54:{NFSU2_TR(0x536e54);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((R+0),(U+0),4);
}
B536e57:{NFSU2_TR(0x536e57);
__builtin_memmove((R+4),(R+0),4);
}
B536e59:{NFSU2_TR(0x536e59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B536e5b:{NFSU2_TR(0x536e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B536e5e:{NFSU2_TR(0x536e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536e61:{NFSU2_TR(0x536e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536e64:{NFSU2_TR(0x536e64);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536e68:{NFSU2_TR(0x536e68);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536e69:{NFSU2_TR(0x536e69);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536e6b:{NFSU2_TR(0x536e6b);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536e6d:{NFSU2_TR(0x536e6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B536e70:{NFSU2_TR(0x536e70);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B536e72:{NFSU2_TR(0x536e72);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B536e75:{NFSU2_TR(0x536e75);
__builtin_memmove((R+4),(R+0),4);
}
B536e77:{NFSU2_TR(0x536e77);
__builtin_memmove((R+0),(R+28),4);
}
B536e79:{NFSU2_TR(0x536e79);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536e7a:{NFSU2_TR(0x536e7a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536e7c:{NFSU2_TR(0x536e7c);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536e7e:{NFSU2_TR(0x536e7e);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B536e80:{NFSU2_TR(0x536e80);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536e84:{NFSU2_TR(0x536e84);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536e85:{NFSU2_TR(0x536e85);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B536e88:{NFSU2_TR(0x536e88);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536e8a:{NFSU2_TR(0x536e8a);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536e8c:{NFSU2_TR(0x536e8c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B536e8e:{NFSU2_TR(0x536e8e);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B536e90:{NFSU2_TR(0x536e90);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B536e93:{NFSU2_TR(0x536e93);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536e97:{NFSU2_TR(0x536e97);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B536e9d:{NFSU2_TR(0x536e9d);
__builtin_memmove((R+4),(R+0),4);
}
B536e9f:{NFSU2_TR(0x536e9f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B536ea3:{NFSU2_TR(0x536ea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B536ea5:{NFSU2_TR(0x536ea5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B536ea7:{NFSU2_TR(0x536ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B536eaa:{NFSU2_TR(0x536eaa);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B536ead:{NFSU2_TR(0x536ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536eb0:{NFSU2_TR(0x536eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536eb3:{NFSU2_TR(0x536eb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536eb7:{NFSU2_TR(0x536eb7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B536ebb:{NFSU2_TR(0x536ebb);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536ebc:{NFSU2_TR(0x536ebc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536ebe:{NFSU2_TR(0x536ebe);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B536ec0:{NFSU2_TR(0x536ec0);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B536ec3:{NFSU2_TR(0x536ec3);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536ec5:{NFSU2_TR(0x536ec5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B536ec8:{NFSU2_TR(0x536ec8);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B536eca:{NFSU2_TR(0x536eca);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B536ecd:{NFSU2_TR(0x536ecd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B536ed1:{NFSU2_TR(0x536ed1);
__builtin_memmove((R+4),(R+0),4);
}
B536ed3:{NFSU2_TR(0x536ed3);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B536ed6:{NFSU2_TR(0x536ed6);
__builtin_memmove((R+0),(R+28),4);
}
B536ed8:{NFSU2_TR(0x536ed8);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536ed9:{NFSU2_TR(0x536ed9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536edb:{NFSU2_TR(0x536edb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B536edf:{NFSU2_TR(0x536edf);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536ee1:{NFSU2_TR(0x536ee1);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B536ee3:{NFSU2_TR(0x536ee3);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536ee7:{NFSU2_TR(0x536ee7);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B536ee8:{NFSU2_TR(0x536ee8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B536eea:{NFSU2_TR(0x536eea);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B536eed:{NFSU2_TR(0x536eed);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B536eef:{NFSU2_TR(0x536eef);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B536ef1:{NFSU2_TR(0x536ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536ef4:{NFSU2_TR(0x536ef4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536ef5:{NFSU2_TR(0x536ef5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536ef9:{NFSU2_TR(0x536ef9);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536efd:{NFSU2_TR(0x536efd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B536f00:{NFSU2_TR(0x536f00);
w4(R+4,u32(0x10ull));
}
B536f05:{NFSU2_TR(0x536f05);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B536f0c:L536f0c:{c.instructions+=1;NFSU2_TR(0x536f0c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L536f0e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x536f0cu);}goto L536f0c;}
}
B536f0e:L536f0e:{c.instructions+=18;NFSU2_TR(0x536f0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536f12:{NFSU2_TR(0x536f12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f13:{NFSU2_TR(0x536f13);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536f17:{NFSU2_TR(0x536f17);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B536f1b:{NFSU2_TR(0x536f1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f1c:{NFSU2_TR(0x536f1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B536f20:{NFSU2_TR(0x536f20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f21:{NFSU2_TR(0x536f21);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536f25:{NFSU2_TR(0x536f25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f26:{NFSU2_TR(0x536f26);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f27:{NFSU2_TR(0x536f27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f28:{NFSU2_TR(0x536f28);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f2d:{NFSU2_TR(0x536f2d);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f32:{NFSU2_TR(0x536f32);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f37:{NFSU2_TR(0x536f37);
u8 U[4];
w4(U+0,u32(0xbf000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f3c:{NFSU2_TR(0x536f3c);
u8 U[4];
w4(U+0,u32(0xbf000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f41:{NFSU2_TR(0x536f41);
__builtin_memmove((R+4),(R+12),4);
}
B536f43:{NFSU2_TR(0x536f43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536f48ull));
TAIL_STATIC(0x51a1c0u,51a);
}
B536f48:L536f48:{c.instructions+=4;NFSU2_TR(0x536f48);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536f4c:{NFSU2_TR(0x536f4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536f4f:{NFSU2_TR(0x536f4f);
__builtin_memmove((R+4),(R+12),4);
}
B536f51:{NFSU2_TR(0x536f51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536f56ull));
TAIL_STATIC(0x51a5d0u,51a);
}
B536f56:L536f56:{c.instructions+=6;NFSU2_TR(0x536f56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B536f57:{NFSU2_TR(0x536f57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B536f58:{NFSU2_TR(0x536f58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B536f59:{NFSU2_TR(0x536f59);
__builtin_memmove((R+16),(R+20),4);
}
B536f5b:{NFSU2_TR(0x536f5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B536f5c:{NFSU2_TR(0x536f5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B536f60:L536f60:{c.instructions+=13;NFSU2_TR(0x536f60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f61:{NFSU2_TR(0x536f61);
__builtin_memmove((R+20),(R+16),4);
}
B536f63:{NFSU2_TR(0x536f63);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B536f66:{NFSU2_TR(0x536f66);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8a4ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8a4ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8a4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B536f6c:{NFSU2_TR(0x536f6c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f6d:{NFSU2_TR(0x536f6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f6e:{NFSU2_TR(0x536f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B536f71:{NFSU2_TR(0x536f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536f74:{NFSU2_TR(0x536f74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f75:{NFSU2_TR(0x536f75);
__builtin_memmove((R+12),(R+4),4);
}
B536f77:{NFSU2_TR(0x536f77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536f78:{NFSU2_TR(0x536f78);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536f7c:{NFSU2_TR(0x536f7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536f81ull));
TAIL_STATIC(0x51bd70u,51b);
}
B536f81:L536f81:{c.instructions+=4;NFSU2_TR(0x536f81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B536f84:{NFSU2_TR(0x536f84);
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
B536f86:{NFSU2_TR(0x536f86);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536f8a:{NFSU2_TR(0x536f8a);
if(r1(R+518)){TAIL_STATIC(0x53708au,537);}
}
B536f90:L536f90:{c.instructions+=3;NFSU2_TR(0x536f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B536f93:{NFSU2_TR(0x536f93);
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
B536f95:{NFSU2_TR(0x536f95);
if(r1(R+518)){TAIL_STATIC(0x53708au,537);}
}
B536f9b:L536f9b:{c.instructions+=3;NFSU2_TR(0x536f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B536f9e:{NFSU2_TR(0x536f9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B536fa0:{NFSU2_TR(0x536fa0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536faf;}}
}
B536fa2:L536fa2:{c.instructions+=4;NFSU2_TR(0x536fa2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536fa3:{NFSU2_TR(0x536fa3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536fa4:{NFSU2_TR(0x536fa4);
__builtin_memmove((R+4),(R+12),4);
}
B536fa6:{NFSU2_TR(0x536fa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536fabull));
TAIL_STATIC(0x52cba0u,52c);
}
B536fab:L536fab:{c.instructions+=2;NFSU2_TR(0x536fab);
__builtin_memmove((R+28),(R+0),4);
}
B536fad:{NFSU2_TR(0x536fad);
{goto L536fba;}
}
B536faf:L536faf:{c.instructions+=4;NFSU2_TR(0x536faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536fb2:{NFSU2_TR(0x536fb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536fb3:{NFSU2_TR(0x536fb3);
__builtin_memmove((R+4),(R+28),4);
}
B536fb5:{NFSU2_TR(0x536fb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536fbaull));
TAIL_STATIC(0x52c3a0u,52c);
}
B536fba:L536fba:{c.instructions+=4;NFSU2_TR(0x536fba);
__builtin_memmove((R+0),gp(0x7f70d0),4);
}
B536fbf:{NFSU2_TR(0x536fbf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536fc2:{NFSU2_TR(0x536fc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B536fca:{NFSU2_TR(0x536fca);
if(r1(R+518)){{goto L536fd1;}}
}
B536fcc:L536fcc:{c.instructions+=2;NFSU2_TR(0x536fcc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B536fcf:{NFSU2_TR(0x536fcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536fe4;}}
}
B536fd1:L536fd1:{c.instructions+=2;NFSU2_TR(0x536fd1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9583aa1aull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B536fd8:{NFSU2_TR(0x536fd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L536fe4;}}
}
B536fda:L536fda:{c.instructions+=2;NFSU2_TR(0x536fda);
__builtin_memmove((R+8),gp(0x799360),4);
}
B536fe0:{NFSU2_TR(0x536fe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B536fe4:L536fe4:{c.instructions+=4;NFSU2_TR(0x536fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B536fe7:{NFSU2_TR(0x536fe7);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B536feb:{NFSU2_TR(0x536feb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536fec:{NFSU2_TR(0x536fec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536ff1ull));
TAIL_STATIC(0x43c780u,43c);
}
B536ff1:L536ff1:{c.instructions+=6;NFSU2_TR(0x536ff1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B536ff5:{NFSU2_TR(0x536ff5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B536ff9:{NFSU2_TR(0x536ff9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B536ffc:{NFSU2_TR(0x536ffc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536ffd:{NFSU2_TR(0x536ffd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B536ffe:{NFSU2_TR(0x536ffe);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
TAIL_STATIC(0x537002u,537);
}
XIT:NFSU2_TR_EXIT(0x536,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
