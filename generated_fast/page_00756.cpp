#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_755(u8* __restrict R,Cpu& c);
u32 body_757(u8* __restrict R,Cpu& c);
u32 body_759(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x756,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x756,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_756(u8* __restrict R,Cpu& c);
u32 page_756(Cpu& c){return body_756(c.regs.data(),c);}
__attribute__((noinline)) u32 body_756(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x756000:goto L756000;
case 0x756006:c.instructions+=2;goto B756006;
case 0x756010:c.instructions+=1;goto B756010;
case 0x756015:goto L756015;
case 0x756019:c.instructions+=6;goto B756019;
case 0x75601c:c.instructions+=5;goto B75601c;
case 0x756022:c.instructions+=4;goto B756022;
case 0x756028:c.instructions+=3;goto B756028;
case 0x75602a:c.instructions+=2;goto B75602a;
case 0x75602c:c.instructions+=1;goto B75602c;
case 0x75602e:goto L75602e;
case 0x756030:goto L756030;
case 0x756032:c.instructions+=1;goto B756032;
case 0x756034:goto L756034;
case 0x75603b:c.instructions+=1;goto B75603b;
case 0x75603d:goto L75603d;
case 0x75603e:c.instructions+=5;goto B75603e;
case 0x75603f:c.instructions+=4;goto B75603f;
case 0x756040:c.instructions+=3;goto B756040;
case 0x756043:c.instructions+=2;goto B756043;
case 0x756044:c.instructions+=1;goto B756044;
case 0x756045:goto L756045;
case 0x756047:c.instructions+=1;goto B756047;
case 0x756049:goto L756049;
case 0x75604f:c.instructions+=2;goto B75604f;
case 0x756055:c.instructions+=1;goto B756055;
case 0x756057:goto L756057;
case 0x756058:c.instructions+=5;goto B756058;
case 0x756059:c.instructions+=4;goto B756059;
case 0x75605a:c.instructions+=3;goto B75605a;
case 0x75605c:c.instructions+=2;goto B75605c;
case 0x75605d:c.instructions+=1;goto B75605d;
case 0x75605e:goto L75605e;
case 0x756062:c.instructions+=2;goto B756062;
case 0x756064:c.instructions+=1;goto B756064;
case 0x756066:goto L756066;
case 0x75606c:c.instructions+=4;goto B75606c;
case 0x75606e:c.instructions+=3;goto B75606e;
case 0x756070:c.instructions+=2;goto B756070;
case 0x756072:c.instructions+=1;goto B756072;
case 0x756075:goto L756075;
case 0x756077:goto L756077;
case 0x756079:c.instructions+=1;goto B756079;
case 0x75607c:goto L75607c;
case 0x75607e:goto L75607e;
case 0x756084:c.instructions+=7;goto B756084;
case 0x756085:c.instructions+=6;goto B756085;
case 0x756086:c.instructions+=5;goto B756086;
case 0x756088:c.instructions+=4;goto B756088;
case 0x756089:c.instructions+=3;goto B756089;
case 0x75608f:c.instructions+=2;goto B75608f;
case 0x756090:c.instructions+=1;goto B756090;
case 0x7560a0:goto L7560a0;
case 0x7560a6:c.instructions+=9;goto B7560a6;
case 0x7560ab:c.instructions+=8;goto B7560ab;
case 0x7560b2:c.instructions+=7;goto B7560b2;
case 0x7560b3:c.instructions+=6;goto B7560b3;
case 0x7560ba:c.instructions+=5;goto B7560ba;
case 0x7560bb:c.instructions+=4;goto B7560bb;
case 0x7560bd:c.instructions+=3;goto B7560bd;
case 0x7560c2:c.instructions+=2;goto B7560c2;
case 0x7560c7:c.instructions+=1;goto B7560c7;
case 0x7560cb:goto L7560cb;
case 0x7560cd:goto L7560cd;
case 0x7560cf:c.instructions+=4;goto B7560cf;
case 0x7560d0:c.instructions+=3;goto B7560d0;
case 0x7560d2:c.instructions+=2;goto B7560d2;
case 0x7560d4:c.instructions+=1;goto B7560d4;
case 0x7560d6:goto L7560d6;
case 0x7560d8:c.instructions+=1;goto B7560d8;
case 0x7560da:goto L7560da;
case 0x7560dd:c.instructions+=3;goto B7560dd;
case 0x7560de:c.instructions+=2;goto B7560de;
case 0x7560e0:c.instructions+=1;goto B7560e0;
case 0x7560e2:goto L7560e2;
case 0x7560e4:c.instructions+=3;goto B7560e4;
case 0x7560e7:c.instructions+=2;goto B7560e7;
case 0x7560e9:c.instructions+=1;goto B7560e9;
case 0x7560eb:goto L7560eb;
case 0x7560ed:c.instructions+=1;goto B7560ed;
case 0x7560f0:goto L7560f0;
case 0x7560f3:c.instructions+=1;goto B7560f3;
case 0x7560f5:goto L7560f5;
case 0x7560f8:c.instructions+=3;goto B7560f8;
case 0x7560f9:c.instructions+=2;goto B7560f9;
case 0x7560fc:c.instructions+=1;goto B7560fc;
case 0x7560fe:goto L7560fe;
case 0x756101:c.instructions+=1;goto B756101;
case 0x756103:goto L756103;
case 0x756105:c.instructions+=2;goto B756105;
case 0x756108:c.instructions+=1;goto B756108;
case 0x75610a:goto L75610a;
case 0x75610c:c.instructions+=2;goto B75610c;
case 0x75610f:c.instructions+=1;goto B75610f;
case 0x756111:goto L756111;
case 0x756115:c.instructions+=3;goto B756115;
case 0x756117:c.instructions+=2;goto B756117;
case 0x756119:c.instructions+=1;goto B756119;
case 0x756120:goto L756120;
case 0x756123:c.instructions+=5;goto B756123;
case 0x756126:c.instructions+=4;goto B756126;
case 0x756127:c.instructions+=3;goto B756127;
case 0x756128:c.instructions+=2;goto B756128;
case 0x75612b:c.instructions+=1;goto B75612b;
case 0x75612d:goto L75612d;
case 0x756132:c.instructions+=1;goto B756132;
case 0x756136:goto L756136;
case 0x756138:c.instructions+=2;goto B756138;
case 0x75613a:c.instructions+=1;goto B75613a;
case 0x75613c:goto L75613c;
case 0x756140:goto L756140;
case 0x756142:c.instructions+=1;goto B756142;
case 0x756144:goto L756144;
case 0x756147:c.instructions+=3;goto B756147;
case 0x756148:c.instructions+=2;goto B756148;
case 0x75614a:c.instructions+=1;goto B75614a;
case 0x75614c:goto L75614c;
case 0x75614f:c.instructions+=1;goto B75614f;
case 0x756151:goto L756151;
case 0x756155:c.instructions+=1;goto B756155;
case 0x756157:goto L756157;
case 0x75615a:goto L75615a;
case 0x75615c:c.instructions+=1;goto B75615c;
case 0x756160:goto L756160;
case 0x756162:c.instructions+=2;goto B756162;
case 0x756165:c.instructions+=1;goto B756165;
case 0x75616b:goto L75616b;
case 0x75616e:c.instructions+=1;goto B75616e;
case 0x756170:goto L756170;
case 0x756173:c.instructions+=1;goto B756173;
case 0x756175:goto L756175;
case 0x756176:c.instructions+=4;goto B756176;
case 0x75617a:c.instructions+=3;goto B75617a;
case 0x75617c:c.instructions+=2;goto B75617c;
case 0x75617f:c.instructions+=1;goto B75617f;
case 0x756181:goto L756181;
case 0x756184:c.instructions+=1;goto B756184;
case 0x756186:goto L756186;
case 0x756189:c.instructions+=1;goto B756189;
case 0x75618b:goto L75618b;
case 0x75618c:c.instructions+=4;goto B75618c;
case 0x756190:c.instructions+=3;goto B756190;
case 0x756192:c.instructions+=2;goto B756192;
case 0x756195:c.instructions+=1;goto B756195;
case 0x756197:goto L756197;
case 0x75619a:c.instructions+=1;goto B75619a;
case 0x75619c:goto L75619c;
case 0x75619f:c.instructions+=1;goto B75619f;
case 0x7561a1:goto L7561a1;
case 0x7561a2:c.instructions+=4;goto B7561a2;
case 0x7561a6:c.instructions+=3;goto B7561a6;
case 0x7561a8:c.instructions+=2;goto B7561a8;
case 0x7561ab:c.instructions+=1;goto B7561ab;
case 0x7561ad:goto L7561ad;
case 0x7561b0:c.instructions+=1;goto B7561b0;
case 0x7561b2:goto L7561b2;
case 0x7561b5:c.instructions+=1;goto B7561b5;
case 0x7561b7:goto L7561b7;
case 0x7561b8:c.instructions+=4;goto B7561b8;
case 0x7561bc:c.instructions+=3;goto B7561bc;
case 0x7561be:c.instructions+=2;goto B7561be;
case 0x7561c1:c.instructions+=1;goto B7561c1;
case 0x7561c3:goto L7561c3;
case 0x7561c6:c.instructions+=1;goto B7561c6;
case 0x7561c8:goto L7561c8;
case 0x7561cb:c.instructions+=1;goto B7561cb;
case 0x7561cd:goto L7561cd;
case 0x7561d1:c.instructions+=4;goto B7561d1;
case 0x7561d4:c.instructions+=3;goto B7561d4;
case 0x7561d5:c.instructions+=2;goto B7561d5;
case 0x7561da:c.instructions+=1;goto B7561da;
case 0x7561dc:goto L7561dc;
case 0x7561de:goto L7561de;
case 0x7561df:c.instructions+=1;goto B7561df;
case 0x7561e1:goto L7561e1;
case 0x7561e4:c.instructions+=1;goto B7561e4;
case 0x7561e6:goto L7561e6;
case 0x7561e9:c.instructions+=1;goto B7561e9;
case 0x7561eb:goto L7561eb;
case 0x7561ee:goto L7561ee;
case 0x7561f3:c.instructions+=3;goto B7561f3;
case 0x7561f5:c.instructions+=2;goto B7561f5;
case 0x7561f7:c.instructions+=1;goto B7561f7;
case 0x7561f9:goto L7561f9;
case 0x756200:goto L756200;
case 0x756202:c.instructions+=1;goto B756202;
case 0x756204:goto L756204;
case 0x756207:c.instructions+=3;goto B756207;
case 0x756208:c.instructions+=2;goto B756208;
case 0x75620a:c.instructions+=1;goto B75620a;
case 0x75620c:goto L75620c;
case 0x756210:c.instructions+=2;goto B756210;
case 0x756212:c.instructions+=1;goto B756212;
case 0x756214:goto L756214;
case 0x75621b:c.instructions+=6;goto B75621b;
case 0x75621c:c.instructions+=5;goto B75621c;
case 0x756226:c.instructions+=4;goto B756226;
case 0x756229:c.instructions+=3;goto B756229;
case 0x75622a:c.instructions+=2;goto B75622a;
case 0x756231:c.instructions+=1;goto B756231;
case 0x756236:goto L756236;
case 0x75623c:c.instructions+=1;goto B75623c;
case 0x75623d:goto L75623d;
case 0x75623e:c.instructions+=6;goto B75623e;
case 0x756245:c.instructions+=5;goto B756245;
case 0x756248:c.instructions+=4;goto B756248;
case 0x75624a:c.instructions+=3;goto B75624a;
case 0x75624e:c.instructions+=2;goto B75624e;
case 0x75624f:c.instructions+=1;goto B75624f;
case 0x756250:goto L756250;
case 0x756252:c.instructions+=3;goto B756252;
case 0x756253:c.instructions+=2;goto B756253;
case 0x756256:c.instructions+=1;goto B756256;
case 0x756258:goto L756258;
case 0x75625b:c.instructions+=1;goto B75625b;
case 0x75625d:goto L75625d;
case 0x756260:goto L756260;
case 0x756262:c.instructions+=3;goto B756262;
case 0x756263:c.instructions+=2;goto B756263;
case 0x756265:c.instructions+=1;goto B756265;
case 0x756267:goto L756267;
case 0x756269:c.instructions+=1;goto B756269;
case 0x75626b:goto L75626b;
case 0x75626d:goto L75626d;
case 0x756270:c.instructions+=4;goto B756270;
case 0x756273:c.instructions+=3;goto B756273;
case 0x756275:c.instructions+=2;goto B756275;
case 0x756277:c.instructions+=1;goto B756277;
case 0x756279:goto L756279;
case 0x75627b:c.instructions+=1;goto B75627b;
case 0x75627d:goto L75627d;
case 0x75627f:goto L75627f;
case 0x756281:c.instructions+=1;goto B756281;
case 0x756283:goto L756283;
case 0x756285:c.instructions+=2;goto B756285;
case 0x756286:c.instructions+=1;goto B756286;
case 0x75628b:goto L75628b;
case 0x75628e:c.instructions+=1;goto B75628e;
case 0x756298:goto L756298;
case 0x75629f:c.instructions+=1;goto B75629f;
case 0x7562a1:goto L7562a1;
case 0x7562a7:c.instructions+=2;goto B7562a7;
case 0x7562a9:c.instructions+=1;goto B7562a9;
case 0x7562ab:goto L7562ab;
case 0x7562ae:c.instructions+=1;goto B7562ae;
case 0x7562b0:goto L7562b0;
case 0x7562b2:c.instructions+=2;goto B7562b2;
case 0x7562b3:c.instructions+=1;goto B7562b3;
case 0x7562b8:goto L7562b8;
case 0x7562bb:c.instructions+=1;goto B7562bb;
case 0x7562c5:goto L7562c5;
case 0x7562cc:c.instructions+=2;goto B7562cc;
case 0x7562cf:c.instructions+=1;goto B7562cf;
case 0x7562d0:goto L7562d0;
case 0x7562d2:c.instructions+=3;goto B7562d2;
case 0x7562d3:c.instructions+=2;goto B7562d3;
case 0x7562d5:c.instructions+=1;goto B7562d5;
case 0x7562d7:goto L7562d7;
case 0x7562d9:c.instructions+=4;goto B7562d9;
case 0x7562db:c.instructions+=3;goto B7562db;
case 0x7562e2:c.instructions+=2;goto B7562e2;
case 0x7562e7:c.instructions+=1;goto B7562e7;
case 0x7562e9:goto L7562e9;
case 0x7562ee:goto L7562ee;
case 0x7562ef:c.instructions+=5;goto B7562ef;
case 0x7562f0:c.instructions+=4;goto B7562f0;
case 0x7562f7:c.instructions+=3;goto B7562f7;
case 0x7562fc:c.instructions+=2;goto B7562fc;
case 0x7562fd:c.instructions+=1;goto B7562fd;
case 0x756302:goto L756302;
case 0x756304:c.instructions+=3;goto B756304;
case 0x756307:c.instructions+=2;goto B756307;
case 0x75630a:c.instructions+=1;goto B75630a;
case 0x756310:goto L756310;
case 0x756312:c.instructions+=3;goto B756312;
case 0x756313:c.instructions+=2;goto B756313;
case 0x756315:c.instructions+=1;goto B756315;
case 0x756317:goto L756317;
case 0x756319:c.instructions+=3;goto B756319;
case 0x75631b:c.instructions+=2;goto B75631b;
case 0x756322:c.instructions+=1;goto B756322;
case 0x756325:goto L756325;
case 0x756327:c.instructions+=3;goto B756327;
case 0x756328:c.instructions+=2;goto B756328;
case 0x75632a:c.instructions+=1;goto B75632a;
case 0x75632c:goto L75632c;
case 0x75632e:c.instructions+=4;goto B75632e;
case 0x756330:c.instructions+=3;goto B756330;
case 0x756334:c.instructions+=2;goto B756334;
case 0x75633a:c.instructions+=1;goto B75633a;
case 0x75633c:goto L75633c;
case 0x75633d:c.instructions+=6;goto B75633d;
case 0x75633e:c.instructions+=5;goto B75633e;
case 0x75633f:c.instructions+=4;goto B75633f;
case 0x756344:c.instructions+=3;goto B756344;
case 0x756345:c.instructions+=2;goto B756345;
case 0x75634c:c.instructions+=1;goto B75634c;
case 0x756351:goto L756351;
case 0x756357:c.instructions+=1;goto B756357;
case 0x756358:goto L756358;
case 0x75635d:c.instructions+=6;goto B75635d;
case 0x756363:c.instructions+=5;goto B756363;
case 0x756365:c.instructions+=4;goto B756365;
case 0x75636c:c.instructions+=3;goto B75636c;
case 0x75636e:c.instructions+=2;goto B75636e;
case 0x756372:c.instructions+=1;goto B756372;
case 0x756374:goto L756374;
case 0x756376:c.instructions+=3;goto B756376;
case 0x756377:c.instructions+=2;goto B756377;
case 0x756379:c.instructions+=1;goto B756379;
case 0x75637b:goto L75637b;
case 0x756381:c.instructions+=3;goto B756381;
case 0x756383:c.instructions+=2;goto B756383;
case 0x756385:c.instructions+=1;goto B756385;
case 0x756386:goto L756386;
case 0x756389:c.instructions+=3;goto B756389;
case 0x75638a:c.instructions+=2;goto B75638a;
case 0x75638c:c.instructions+=1;goto B75638c;
case 0x75638e:goto L75638e;
case 0x756390:c.instructions+=1;goto B756390;
case 0x756393:goto L756393;
case 0x756395:goto L756395;
case 0x756397:c.instructions+=2;goto B756397;
case 0x75639a:c.instructions+=1;goto B75639a;
case 0x7563a1:goto L7563a1;
case 0x7563a3:goto L7563a3;
case 0x7563a5:goto L7563a5;
case 0x7563a7:c.instructions+=3;goto B7563a7;
case 0x7563a8:c.instructions+=2;goto B7563a8;
case 0x7563aa:c.instructions+=1;goto B7563aa;
case 0x7563ac:goto L7563ac;
case 0x7563b2:c.instructions+=3;goto B7563b2;
case 0x7563b4:c.instructions+=2;goto B7563b4;
case 0x7563b6:c.instructions+=1;goto B7563b6;
case 0x7563b7:goto L7563b7;
case 0x7563ba:c.instructions+=3;goto B7563ba;
case 0x7563bb:c.instructions+=2;goto B7563bb;
case 0x7563bd:c.instructions+=1;goto B7563bd;
case 0x7563bf:goto L7563bf;
case 0x7563c1:c.instructions+=1;goto B7563c1;
case 0x7563c4:goto L7563c4;
case 0x7563c6:goto L7563c6;
case 0x7563c8:c.instructions+=2;goto B7563c8;
case 0x7563cf:c.instructions+=1;goto B7563cf;
case 0x7563d2:goto L7563d2;
case 0x7563d4:goto L7563d4;
case 0x7563d6:goto L7563d6;
case 0x7563d8:c.instructions+=3;goto B7563d8;
case 0x7563d9:c.instructions+=2;goto B7563d9;
case 0x7563db:c.instructions+=1;goto B7563db;
case 0x7563dd:goto L7563dd;
case 0x7563e3:c.instructions+=3;goto B7563e3;
case 0x7563e5:c.instructions+=2;goto B7563e5;
case 0x7563e7:c.instructions+=1;goto B7563e7;
case 0x7563e8:goto L7563e8;
case 0x7563eb:c.instructions+=3;goto B7563eb;
case 0x7563ec:c.instructions+=2;goto B7563ec;
case 0x7563ee:c.instructions+=1;goto B7563ee;
case 0x7563f0:goto L7563f0;
case 0x7563f2:c.instructions+=1;goto B7563f2;
case 0x7563f5:goto L7563f5;
case 0x7563f7:goto L7563f7;
case 0x7563f9:c.instructions+=1;goto B7563f9;
case 0x7563fc:goto L7563fc;
case 0x7563fe:goto L7563fe;
case 0x756404:c.instructions+=5;goto B756404;
case 0x756406:c.instructions+=4;goto B756406;
case 0x75640b:c.instructions+=3;goto B75640b;
case 0x75640f:c.instructions+=2;goto B75640f;
case 0x756414:c.instructions+=1;goto B756414;
case 0x75641e:goto L75641e;
case 0x756420:goto L756420;
case 0x756422:c.instructions+=4;goto B756422;
case 0x756425:c.instructions+=3;goto B756425;
case 0x756427:c.instructions+=2;goto B756427;
case 0x75642e:c.instructions+=1;goto B75642e;
case 0x756430:goto L756430;
case 0x756433:c.instructions+=3;goto B756433;
case 0x756435:c.instructions+=2;goto B756435;
case 0x756439:c.instructions+=1;goto B756439;
case 0x756440:goto L756440;
case 0x756442:c.instructions+=3;goto B756442;
case 0x756443:c.instructions+=2;goto B756443;
case 0x756446:c.instructions+=1;goto B756446;
case 0x756448:goto L756448;
case 0x75644b:c.instructions+=1;goto B75644b;
case 0x75644d:goto L75644d;
case 0x756450:goto L756450;
case 0x756452:c.instructions+=3;goto B756452;
case 0x756453:c.instructions+=2;goto B756453;
case 0x756455:c.instructions+=1;goto B756455;
case 0x756457:goto L756457;
case 0x756459:c.instructions+=1;goto B756459;
case 0x75645b:goto L75645b;
case 0x75645d:goto L75645d;
case 0x756460:c.instructions+=4;goto B756460;
case 0x756463:c.instructions+=3;goto B756463;
case 0x756465:c.instructions+=2;goto B756465;
case 0x756467:c.instructions+=1;goto B756467;
case 0x756469:goto L756469;
case 0x75646b:c.instructions+=1;goto B75646b;
case 0x75646d:goto L75646d;
case 0x756471:c.instructions+=3;goto B756471;
case 0x756474:c.instructions+=2;goto B756474;
case 0x756476:c.instructions+=1;goto B756476;
case 0x756478:goto L756478;
case 0x75647a:c.instructions+=4;goto B75647a;
case 0x75647d:c.instructions+=3;goto B75647d;
case 0x75647e:c.instructions+=2;goto B75647e;
case 0x756480:c.instructions+=1;goto B756480;
case 0x756482:goto L756482;
case 0x756484:c.instructions+=7;goto B756484;
case 0x756486:c.instructions+=6;goto B756486;
case 0x756488:c.instructions+=5;goto B756488;
case 0x75648c:c.instructions+=4;goto B75648c;
case 0x75648d:c.instructions+=3;goto B75648d;
case 0x75648e:c.instructions+=2;goto B75648e;
case 0x75648f:c.instructions+=1;goto B75648f;
case 0x756494:goto L756494;
case 0x756497:c.instructions+=1;goto B756497;
case 0x7564a1:goto L7564a1;
case 0x7564a2:c.instructions+=1;goto B7564a2;
case 0x7564a7:goto L7564a7;
case 0x7564ae:c.instructions+=7;goto B7564ae;
case 0x7564b1:c.instructions+=6;goto B7564b1;
case 0x7564b2:c.instructions+=5;goto B7564b2;
case 0x7564b3:c.instructions+=4;goto B7564b3;
case 0x7564b4:c.instructions+=3;goto B7564b4;
case 0x7564b6:c.instructions+=2;goto B7564b6;
case 0x7564b7:c.instructions+=1;goto B7564b7;
case 0x7564bc:goto L7564bc;
case 0x7564c2:c.instructions+=1;goto B7564c2;
case 0x7564c3:goto L7564c3;
case 0x7564c5:c.instructions+=1;goto B7564c5;
case 0x7564c7:goto L7564c7;
case 0x7564cd:c.instructions+=1;goto B7564cd;
case 0x7564cf:goto L7564cf;
case 0x7564d9:c.instructions+=1;goto B7564d9;
case 0x7564e0:goto L7564e0;
case 0x7564e1:c.instructions+=7;goto B7564e1;
case 0x7564e2:c.instructions+=6;goto B7564e2;
case 0x7564e4:c.instructions+=5;goto B7564e4;
case 0x7564e7:c.instructions+=4;goto B7564e7;
case 0x7564e8:c.instructions+=3;goto B7564e8;
case 0x7564ea:c.instructions+=2;goto B7564ea;
case 0x7564ec:c.instructions+=1;goto B7564ec;
case 0x7564f2:goto L7564f2;
case 0x7564f8:c.instructions+=1;goto B7564f8;
case 0x7564fe:goto L7564fe;
case 0x756505:c.instructions+=1;goto B756505;
case 0x75650b:goto L75650b;
case 0x75650e:c.instructions+=2;goto B75650e;
case 0x75650f:c.instructions+=1;goto B75650f;
case 0x756514:goto L756514;
case 0x756517:c.instructions+=2;goto B756517;
case 0x756519:c.instructions+=1;goto B756519;
case 0x75651f:goto L75651f;
case 0x756521:c.instructions+=35;goto B756521;
case 0x756527:c.instructions+=34;goto B756527;
case 0x75652a:c.instructions+=33;goto B75652a;
case 0x75652e:c.instructions+=32;goto B75652e;
case 0x756531:c.instructions+=31;goto B756531;
case 0x756534:c.instructions+=30;goto B756534;
case 0x756537:c.instructions+=29;goto B756537;
case 0x756539:c.instructions+=28;goto B756539;
case 0x75653d:c.instructions+=27;goto B75653d;
case 0x756540:c.instructions+=26;goto B756540;
case 0x756542:c.instructions+=25;goto B756542;
case 0x756545:c.instructions+=24;goto B756545;
case 0x756549:c.instructions+=23;goto B756549;
case 0x75654b:c.instructions+=22;goto B75654b;
case 0x75654e:c.instructions+=21;goto B75654e;
case 0x756551:c.instructions+=20;goto B756551;
case 0x756554:c.instructions+=19;goto B756554;
case 0x756556:c.instructions+=18;goto B756556;
case 0x75655a:c.instructions+=17;goto B75655a;
case 0x75655d:c.instructions+=16;goto B75655d;
case 0x75655f:c.instructions+=15;goto B75655f;
case 0x756562:c.instructions+=14;goto B756562;
case 0x756564:c.instructions+=13;goto B756564;
case 0x756567:c.instructions+=12;goto B756567;
case 0x756569:c.instructions+=11;goto B756569;
case 0x75656c:c.instructions+=10;goto B75656c;
case 0x75656f:c.instructions+=9;goto B75656f;
case 0x756572:c.instructions+=8;goto B756572;
case 0x756575:c.instructions+=7;goto B756575;
case 0x756578:c.instructions+=6;goto B756578;
case 0x75657b:c.instructions+=5;goto B75657b;
case 0x75657e:c.instructions+=4;goto B75657e;
case 0x756580:c.instructions+=3;goto B756580;
case 0x756582:c.instructions+=2;goto B756582;
case 0x756585:c.instructions+=1;goto B756585;
case 0x756589:goto L756589;
case 0x75658b:goto L75658b;
case 0x75658d:c.instructions+=1;goto B75658d;
case 0x756590:goto L756590;
case 0x756592:goto L756592;
case 0x756595:c.instructions+=2;goto B756595;
case 0x756597:c.instructions+=1;goto B756597;
case 0x756599:goto L756599;
case 0x75659a:c.instructions+=4;goto B75659a;
case 0x75659b:c.instructions+=3;goto B75659b;
case 0x7565a2:c.instructions+=2;goto B7565a2;
case 0x7565a3:c.instructions+=1;goto B7565a3;
case 0x7565a4:goto L7565a4;
case 0x7565a6:goto L7565a6;
case 0x7565a7:c.instructions+=3;goto B7565a7;
case 0x7565a8:c.instructions+=2;goto B7565a8;
case 0x7565a9:c.instructions+=1;goto B7565a9;
case 0x7565b0:goto L7565b0;
case 0x7565b6:c.instructions+=18;goto B7565b6;
case 0x7565bb:c.instructions+=17;goto B7565bb;
case 0x7565bc:c.instructions+=16;goto B7565bc;
case 0x7565bd:c.instructions+=15;goto B7565bd;
case 0x7565c4:c.instructions+=14;goto B7565c4;
case 0x7565cb:c.instructions+=13;goto B7565cb;
case 0x7565cf:c.instructions+=12;goto B7565cf;
case 0x7565d0:c.instructions+=11;goto B7565d0;
case 0x7565d2:c.instructions+=10;goto B7565d2;
case 0x7565d6:c.instructions+=9;goto B7565d6;
case 0x7565d7:c.instructions+=8;goto B7565d7;
case 0x7565d9:c.instructions+=7;goto B7565d9;
case 0x7565da:c.instructions+=6;goto B7565da;
case 0x7565df:c.instructions+=5;goto B7565df;
case 0x7565e3:c.instructions+=4;goto B7565e3;
case 0x7565e4:c.instructions+=3;goto B7565e4;
case 0x7565e5:c.instructions+=2;goto B7565e5;
case 0x7565ed:c.instructions+=1;goto B7565ed;
case 0x7565f2:goto L7565f2;
case 0x7565f5:c.instructions+=3;goto B7565f5;
case 0x7565f7:c.instructions+=2;goto B7565f7;
case 0x7565fb:c.instructions+=1;goto B7565fb;
case 0x756601:goto L756601;
case 0x756602:c.instructions+=1;goto B756602;
case 0x756603:goto L756603;
case 0x756607:c.instructions+=1;goto B756607;
case 0x75660d:goto L75660d;
case 0x756611:c.instructions+=2;goto B756611;
case 0x756613:c.instructions+=1;goto B756613;
case 0x756615:goto L756615;
case 0x756618:c.instructions+=1;goto B756618;
case 0x75661e:goto L75661e;
case 0x756621:c.instructions+=2;goto B756621;
case 0x756622:c.instructions+=1;goto B756622;
case 0x756627:goto L756627;
case 0x75662a:c.instructions+=2;goto B75662a;
case 0x75662c:c.instructions+=1;goto B75662c;
case 0x75662e:goto L75662e;
case 0x756630:c.instructions+=22;goto B756630;
case 0x756635:c.instructions+=21;goto B756635;
case 0x75663a:c.instructions+=20;goto B75663a;
case 0x75663d:c.instructions+=19;goto B75663d;
case 0x75663f:c.instructions+=18;goto B75663f;
case 0x756644:c.instructions+=17;goto B756644;
case 0x756647:c.instructions+=16;goto B756647;
case 0x756649:c.instructions+=15;goto B756649;
case 0x75664e:c.instructions+=14;goto B75664e;
case 0x756651:c.instructions+=13;goto B756651;
case 0x756653:c.instructions+=12;goto B756653;
case 0x756656:c.instructions+=11;goto B756656;
case 0x756659:c.instructions+=10;goto B756659;
case 0x75665e:c.instructions+=9;goto B75665e;
case 0x756663:c.instructions+=8;goto B756663;
case 0x756666:c.instructions+=7;goto B756666;
case 0x756668:c.instructions+=6;goto B756668;
case 0x75666b:c.instructions+=5;goto B75666b;
case 0x75666e:c.instructions+=4;goto B75666e;
case 0x756672:c.instructions+=3;goto B756672;
case 0x756675:c.instructions+=2;goto B756675;
case 0x756679:c.instructions+=1;goto B756679;
case 0x75667b:goto L75667b;
case 0x75667f:c.instructions+=2;goto B75667f;
case 0x756683:c.instructions+=1;goto B756683;
case 0x756688:goto L756688;
case 0x75668a:c.instructions+=2;goto B75668a;
case 0x75668c:c.instructions+=1;goto B75668c;
case 0x75668e:goto L75668e;
case 0x756691:c.instructions+=2;goto B756691;
case 0x756692:c.instructions+=1;goto B756692;
case 0x756697:goto L756697;
case 0x75669a:c.instructions+=4;goto B75669a;
case 0x75669d:c.instructions+=3;goto B75669d;
case 0x7566a0:c.instructions+=2;goto B7566a0;
case 0x7566a2:c.instructions+=1;goto B7566a2;
case 0x7566a4:goto L7566a4;
case 0x7566a6:c.instructions+=3;goto B7566a6;
case 0x7566a8:c.instructions+=2;goto B7566a8;
case 0x7566aa:c.instructions+=1;goto B7566aa;
case 0x7566ac:goto L7566ac;
case 0x7566ae:c.instructions+=5;goto B7566ae;
case 0x7566b1:c.instructions+=4;goto B7566b1;
case 0x7566b2:c.instructions+=3;goto B7566b2;
case 0x7566b3:c.instructions+=2;goto B7566b3;
case 0x7566b6:c.instructions+=1;goto B7566b6;
case 0x7566bb:goto L7566bb;
case 0x7566be:goto L7566be;
case 0x7566c2:c.instructions+=11;goto B7566c2;
case 0x7566c3:c.instructions+=10;goto B7566c3;
case 0x7566c5:c.instructions+=9;goto B7566c5;
case 0x7566c9:c.instructions+=8;goto B7566c9;
case 0x7566ca:c.instructions+=7;goto B7566ca;
case 0x7566cb:c.instructions+=6;goto B7566cb;
case 0x7566d0:c.instructions+=5;goto B7566d0;
case 0x7566d4:c.instructions+=4;goto B7566d4;
case 0x7566d5:c.instructions+=3;goto B7566d5;
case 0x7566d6:c.instructions+=2;goto B7566d6;
case 0x7566de:c.instructions+=1;goto B7566de;
case 0x7566e3:goto L7566e3;
case 0x7566e6:c.instructions+=3;goto B7566e6;
case 0x7566e8:c.instructions+=2;goto B7566e8;
case 0x7566ec:c.instructions+=1;goto B7566ec;
case 0x7566f2:goto L7566f2;
case 0x7566f3:c.instructions+=1;goto B7566f3;
case 0x7566f4:goto L7566f4;
case 0x7566fb:c.instructions+=4;goto B7566fb;
case 0x7566fc:c.instructions+=3;goto B7566fc;
case 0x7566fe:c.instructions+=2;goto B7566fe;
case 0x7566ff:c.instructions+=1;goto B7566ff;
case 0x756704:goto L756704;
case 0x75670a:c.instructions+=1;goto B75670a;
case 0x756710:goto L756710;
case 0x756711:c.instructions+=10;goto B756711;
case 0x756713:c.instructions+=9;goto B756713;
case 0x756716:c.instructions+=8;goto B756716;
case 0x75671c:c.instructions+=7;goto B75671c;
case 0x756721:c.instructions+=6;goto B756721;
case 0x756723:c.instructions+=5;goto B756723;
case 0x756725:c.instructions+=4;goto B756725;
case 0x756726:c.instructions+=3;goto B756726;
case 0x75672d:c.instructions+=2;goto B75672d;
case 0x75672e:c.instructions+=1;goto B75672e;
case 0x756734:goto L756734;
case 0x756737:c.instructions+=1;goto B756737;
case 0x756739:goto L756739;
case 0x75673c:c.instructions+=2;goto B75673c;
case 0x75673f:c.instructions+=1;goto B75673f;
case 0x756740:goto L756740;
case 0x756742:c.instructions+=3;goto B756742;
case 0x756743:c.instructions+=2;goto B756743;
case 0x756745:c.instructions+=1;goto B756745;
case 0x756747:goto L756747;
case 0x756749:c.instructions+=2;goto B756749;
case 0x75674a:c.instructions+=1;goto B75674a;
case 0x75674d:goto L75674d;
case 0x756750:c.instructions+=15;goto B756750;
case 0x756754:c.instructions+=14;goto B756754;
case 0x756756:c.instructions+=13;goto B756756;
case 0x756759:c.instructions+=12;goto B756759;
case 0x75675d:c.instructions+=11;goto B75675d;
case 0x756761:c.instructions+=10;goto B756761;
case 0x756764:c.instructions+=9;goto B756764;
case 0x756768:c.instructions+=8;goto B756768;
case 0x75676b:c.instructions+=7;goto B75676b;
case 0x756770:c.instructions+=6;goto B756770;
case 0x756774:c.instructions+=5;goto B756774;
case 0x756778:c.instructions+=4;goto B756778;
case 0x75677c:c.instructions+=3;goto B75677c;
case 0x75677e:c.instructions+=2;goto B75677e;
case 0x756783:c.instructions+=1;goto B756783;
case 0x756787:goto L756787;
case 0x756789:goto L756789;
case 0x75678b:c.instructions+=29;goto B75678b;
case 0x75678e:c.instructions+=28;goto B75678e;
case 0x756792:c.instructions+=27;goto B756792;
case 0x756796:c.instructions+=26;goto B756796;
case 0x756798:c.instructions+=25;goto B756798;
case 0x75679b:c.instructions+=24;goto B75679b;
case 0x75679c:c.instructions+=23;goto B75679c;
case 0x7567a0:c.instructions+=22;goto B7567a0;
case 0x7567a3:c.instructions+=21;goto B7567a3;
case 0x7567a7:c.instructions+=20;goto B7567a7;
case 0x7567ab:c.instructions+=19;goto B7567ab;
case 0x7567ad:c.instructions+=18;goto B7567ad;
case 0x7567b0:c.instructions+=17;goto B7567b0;
case 0x7567b3:c.instructions+=16;goto B7567b3;
case 0x7567b6:c.instructions+=15;goto B7567b6;
case 0x7567ba:c.instructions+=14;goto B7567ba;
case 0x7567be:c.instructions+=13;goto B7567be;
case 0x7567c1:c.instructions+=12;goto B7567c1;
case 0x7567c5:c.instructions+=11;goto B7567c5;
case 0x7567c9:c.instructions+=10;goto B7567c9;
case 0x7567cc:c.instructions+=9;goto B7567cc;
case 0x7567d1:c.instructions+=8;goto B7567d1;
case 0x7567d3:c.instructions+=7;goto B7567d3;
case 0x7567da:c.instructions+=6;goto B7567da;
case 0x7567df:c.instructions+=5;goto B7567df;
case 0x7567e4:c.instructions+=4;goto B7567e4;
case 0x7567e9:c.instructions+=3;goto B7567e9;
case 0x7567ed:c.instructions+=2;goto B7567ed;
case 0x7567f2:c.instructions+=1;goto B7567f2;
case 0x7567f4:goto L7567f4;
case 0x7567f7:goto L7567f7;
case 0x7567fa:c.instructions+=4;goto B7567fa;
case 0x7567fd:c.instructions+=3;goto B7567fd;
case 0x7567ff:c.instructions+=2;goto B7567ff;
case 0x756802:c.instructions+=1;goto B756802;
case 0x756806:goto L756806;
case 0x756808:goto L756808;
case 0x75680a:c.instructions+=1;goto B75680a;
case 0x75680d:goto L75680d;
case 0x75680f:goto L75680f;
case 0x756811:c.instructions+=5;goto B756811;
case 0x756814:c.instructions+=4;goto B756814;
case 0x75681a:c.instructions+=3;goto B75681a;
case 0x75681d:c.instructions+=2;goto B75681d;
case 0x756825:c.instructions+=1;goto B756825;
case 0x75682a:goto L75682a;
case 0x75682d:c.instructions+=5;goto B75682d;
case 0x75682f:c.instructions+=4;goto B75682f;
case 0x756832:c.instructions+=3;goto B756832;
case 0x756836:c.instructions+=2;goto B756836;
case 0x75683a:c.instructions+=1;goto B75683a;
case 0x75683c:goto L75683c;
case 0x75683f:c.instructions+=6;goto B75683f;
case 0x756841:c.instructions+=5;goto B756841;
case 0x756842:c.instructions+=4;goto B756842;
case 0x756846:c.instructions+=3;goto B756846;
case 0x756848:c.instructions+=2;goto B756848;
case 0x75684b:c.instructions+=1;goto B75684b;
case 0x756850:goto L756850;
case 0x756853:c.instructions+=10;goto B756853;
case 0x756856:c.instructions+=9;goto B756856;
case 0x756858:c.instructions+=8;goto B756858;
case 0x75685c:c.instructions+=7;goto B75685c;
case 0x75685d:c.instructions+=6;goto B75685d;
case 0x75685f:c.instructions+=5;goto B75685f;
case 0x756863:c.instructions+=4;goto B756863;
case 0x756864:c.instructions+=3;goto B756864;
case 0x756865:c.instructions+=2;goto B756865;
case 0x756869:c.instructions+=1;goto B756869;
case 0x75686b:goto L75686b;
case 0x75686d:c.instructions+=1;goto B75686d;
case 0x75686f:goto L75686f;
case 0x756872:c.instructions+=2;goto B756872;
case 0x756875:c.instructions+=1;goto B756875;
case 0x756877:goto L756877;
case 0x756879:c.instructions+=22;goto B756879;
case 0x75687f:c.instructions+=21;goto B75687f;
case 0x756882:c.instructions+=20;goto B756882;
case 0x756884:c.instructions+=19;goto B756884;
case 0x756886:c.instructions+=18;goto B756886;
case 0x756889:c.instructions+=17;goto B756889;
case 0x75688e:c.instructions+=16;goto B75688e;
case 0x756890:c.instructions+=15;goto B756890;
case 0x756892:c.instructions+=14;goto B756892;
case 0x756894:c.instructions+=13;goto B756894;
case 0x756898:c.instructions+=12;goto B756898;
case 0x756899:c.instructions+=11;goto B756899;
case 0x75689b:c.instructions+=10;goto B75689b;
case 0x75689d:c.instructions+=9;goto B75689d;
case 0x7568a0:c.instructions+=8;goto B7568a0;
case 0x7568a4:c.instructions+=7;goto B7568a4;
case 0x7568a5:c.instructions+=6;goto B7568a5;
case 0x7568a9:c.instructions+=5;goto B7568a9;
case 0x7568ad:c.instructions+=4;goto B7568ad;
case 0x7568af:c.instructions+=3;goto B7568af;
case 0x7568b0:c.instructions+=2;goto B7568b0;
case 0x7568b1:c.instructions+=1;goto B7568b1;
case 0x7568b6:goto L7568b6;
case 0x7568b9:c.instructions+=2;goto B7568b9;
case 0x7568bb:c.instructions+=1;goto B7568bb;
case 0x7568bd:goto L7568bd;
case 0x7568c0:c.instructions+=2;goto B7568c0;
case 0x7568c7:c.instructions+=1;goto B7568c7;
case 0x7568cc:goto L7568cc;
case 0x7568cd:c.instructions+=4;goto B7568cd;
case 0x7568ce:c.instructions+=3;goto B7568ce;
case 0x7568d0:c.instructions+=2;goto B7568d0;
case 0x7568d1:c.instructions+=1;goto B7568d1;
case 0x7568d2:goto L7568d2;
case 0x7568d9:c.instructions+=2;goto B7568d9;
case 0x7568dc:c.instructions+=1;goto B7568dc;
case 0x7568e1:goto L7568e1;
case 0x7568e2:c.instructions+=4;goto B7568e2;
case 0x7568e3:c.instructions+=3;goto B7568e3;
case 0x7568e5:c.instructions+=2;goto B7568e5;
case 0x7568e6:c.instructions+=1;goto B7568e6;
case 0x7568f0:goto L7568f0;
case 0x7568f3:c.instructions+=9;goto B7568f3;
case 0x7568f8:c.instructions+=8;goto B7568f8;
case 0x7568f9:c.instructions+=7;goto B7568f9;
case 0x7568fa:c.instructions+=6;goto B7568fa;
case 0x7568fc:c.instructions+=5;goto B7568fc;
case 0x7568fe:c.instructions+=4;goto B7568fe;
case 0x756900:c.instructions+=3;goto B756900;
case 0x756904:c.instructions+=2;goto B756904;
case 0x756906:c.instructions+=1;goto B756906;
case 0x75690b:goto L75690b;
case 0x75690d:c.instructions+=3;goto B75690d;
case 0x756910:c.instructions+=2;goto B756910;
case 0x756912:c.instructions+=1;goto B756912;
case 0x756918:goto L756918;
case 0x756919:c.instructions+=12;goto B756919;
case 0x75691b:c.instructions+=11;goto B75691b;
case 0x75691f:c.instructions+=10;goto B75691f;
case 0x756920:c.instructions+=9;goto B756920;
case 0x756925:c.instructions+=8;goto B756925;
case 0x756926:c.instructions+=7;goto B756926;
case 0x75692d:c.instructions+=6;goto B75692d;
case 0x756931:c.instructions+=5;goto B756931;
case 0x756935:c.instructions+=4;goto B756935;
case 0x756939:c.instructions+=3;goto B756939;
case 0x75693d:c.instructions+=2;goto B75693d;
case 0x756942:c.instructions+=1;goto B756942;
case 0x756947:goto L756947;
case 0x756949:c.instructions+=1;goto B756949;
case 0x75694e:goto L75694e;
case 0x756950:c.instructions+=3;goto B756950;
case 0x756953:c.instructions+=2;goto B756953;
case 0x756955:c.instructions+=1;goto B756955;
case 0x756957:goto L756957;
case 0x756958:c.instructions+=3;goto B756958;
case 0x75695a:c.instructions+=2;goto B75695a;
case 0x75695f:c.instructions+=1;goto B75695f;
case 0x756961:goto L756961;
case 0x756963:goto L756963;
case 0x756966:c.instructions+=6;goto B756966;
case 0x756967:c.instructions+=5;goto B756967;
case 0x756969:c.instructions+=4;goto B756969;
case 0x756970:c.instructions+=3;goto B756970;
case 0x756977:c.instructions+=2;goto B756977;
case 0x75697e:c.instructions+=1;goto B75697e;
case 0x756983:goto L756983;
case 0x756985:c.instructions+=6;goto B756985;
case 0x75698a:c.instructions+=5;goto B75698a;
case 0x75698b:c.instructions+=4;goto B75698b;
case 0x756990:c.instructions+=3;goto B756990;
case 0x756992:c.instructions+=2;goto B756992;
case 0x756993:c.instructions+=1;goto B756993;
case 0x756998:goto L756998;
case 0x75699b:c.instructions+=7;goto B75699b;
case 0x75699c:c.instructions+=6;goto B75699c;
case 0x75699e:c.instructions+=5;goto B75699e;
case 0x75699f:c.instructions+=4;goto B75699f;
case 0x7569a0:c.instructions+=3;goto B7569a0;
case 0x7569a1:c.instructions+=2;goto B7569a1;
case 0x7569a5:c.instructions+=1;goto B7569a5;
case 0x7569aa:goto L7569aa;
case 0x7569ad:c.instructions+=1;goto B7569ad;
case 0x7569ae:goto L7569ae;
case 0x7569b0:c.instructions+=5;goto B7569b0;
case 0x7569b1:c.instructions+=4;goto B7569b1;
case 0x7569b2:c.instructions+=3;goto B7569b2;
case 0x7569b3:c.instructions+=2;goto B7569b3;
case 0x7569b7:c.instructions+=1;goto B7569b7;
case 0x7569bc:goto L7569bc;
case 0x7569bf:c.instructions+=1;goto B7569bf;
case 0x7569c0:goto L7569c0;
case 0x7569c4:c.instructions+=4;goto B7569c4;
case 0x7569c5:c.instructions+=3;goto B7569c5;
case 0x7569c7:c.instructions+=2;goto B7569c7;
case 0x7569c8:c.instructions+=1;goto B7569c8;
case 0x7569cd:goto L7569cd;
case 0x7569d0:c.instructions+=1;goto B7569d0;
case 0x7569e0:goto L7569e0;
case 0x7569e1:c.instructions+=3;goto B7569e1;
case 0x7569e5:c.instructions+=2;goto B7569e5;
case 0x7569e7:c.instructions+=1;goto B7569e7;
case 0x7569e9:goto L7569e9;
case 0x7569eb:c.instructions+=2;goto B7569eb;
case 0x7569ec:c.instructions+=1;goto B7569ec;
case 0x7569f1:goto L7569f1;
case 0x7569f4:c.instructions+=3;goto B7569f4;
case 0x7569f7:c.instructions+=2;goto B7569f7;
case 0x7569f9:c.instructions+=1;goto B7569f9;
case 0x7569fb:goto L7569fb;
case 0x756a00:goto L756a00;
case 0x756a03:c.instructions+=4;goto B756a03;
case 0x756a05:c.instructions+=3;goto B756a05;
case 0x756a06:c.instructions+=2;goto B756a06;
case 0x756a09:c.instructions+=1;goto B756a09;
case 0x756a0e:goto L756a0e;
case 0x756a11:c.instructions+=3;goto B756a11;
case 0x756a14:c.instructions+=2;goto B756a14;
case 0x756a16:c.instructions+=1;goto B756a16;
case 0x756a18:goto L756a18;
case 0x756a1b:c.instructions+=2;goto B756a1b;
case 0x756a1c:c.instructions+=1;goto B756a1c;
case 0x756a21:goto L756a21;
case 0x756a22:c.instructions+=1;goto B756a22;
case 0x756a27:goto L756a27;
case 0x756a2a:goto L756a2a;
case 0x756a2b:c.instructions+=1;goto B756a2b;
case 0x756a30:goto L756a30;
case 0x756a31:c.instructions+=7;goto B756a31;
case 0x756a35:c.instructions+=6;goto B756a35;
case 0x756a36:c.instructions+=5;goto B756a36;
case 0x756a37:c.instructions+=4;goto B756a37;
case 0x756a3b:c.instructions+=3;goto B756a3b;
case 0x756a3d:c.instructions+=2;goto B756a3d;
case 0x756a3e:c.instructions+=1;goto B756a3e;
case 0x756a43:goto L756a43;
case 0x756a47:c.instructions+=7;goto B756a47;
case 0x756a4b:c.instructions+=6;goto B756a4b;
case 0x756a4f:c.instructions+=5;goto B756a4f;
case 0x756a51:c.instructions+=4;goto B756a51;
case 0x756a52:c.instructions+=3;goto B756a52;
case 0x756a56:c.instructions+=2;goto B756a56;
case 0x756a57:c.instructions+=1;goto B756a57;
case 0x756a5c:goto L756a5c;
case 0x756a5f:c.instructions+=3;goto B756a5f;
case 0x756a60:c.instructions+=2;goto B756a60;
case 0x756a61:c.instructions+=1;goto B756a61;
case 0x756a70:goto L756a70;
case 0x756a74:c.instructions+=8;goto B756a74;
case 0x756a78:c.instructions+=7;goto B756a78;
case 0x756a7c:c.instructions+=6;goto B756a7c;
case 0x756a7d:c.instructions+=5;goto B756a7d;
case 0x756a81:c.instructions+=4;goto B756a81;
case 0x756a83:c.instructions+=3;goto B756a83;
case 0x756a84:c.instructions+=2;goto B756a84;
case 0x756a85:c.instructions+=1;goto B756a85;
case 0x756a8a:goto L756a8a;
case 0x756a8d:c.instructions+=2;goto B756a8d;
case 0x756a8e:c.instructions+=1;goto B756a8e;
case 0x756a90:goto L756a90;
case 0x756a91:c.instructions+=10;goto B756a91;
case 0x756a92:c.instructions+=9;goto B756a92;
case 0x756a93:c.instructions+=8;goto B756a93;
case 0x756a97:c.instructions+=7;goto B756a97;
case 0x756a9a:c.instructions+=6;goto B756a9a;
case 0x756a9b:c.instructions+=5;goto B756a9b;
case 0x756a9c:c.instructions+=4;goto B756a9c;
case 0x756a9e:c.instructions+=3;goto B756a9e;
case 0x756a9f:c.instructions+=2;goto B756a9f;
case 0x756aa0:c.instructions+=1;goto B756aa0;
case 0x756aa5:goto L756aa5;
case 0x756aa8:c.instructions+=3;goto B756aa8;
case 0x756aab:c.instructions+=2;goto B756aab;
case 0x756aad:c.instructions+=1;goto B756aad;
case 0x756ab3:goto L756ab3;
case 0x756ab6:c.instructions+=4;goto B756ab6;
case 0x756ab7:c.instructions+=3;goto B756ab7;
case 0x756ab8:c.instructions+=2;goto B756ab8;
case 0x756abc:c.instructions+=1;goto B756abc;
case 0x756ac1:goto L756ac1;
case 0x756ac5:c.instructions+=5;goto B756ac5;
case 0x756ac8:c.instructions+=4;goto B756ac8;
case 0x756acb:c.instructions+=3;goto B756acb;
case 0x756acd:c.instructions+=2;goto B756acd;
case 0x756ad1:c.instructions+=1;goto B756ad1;
case 0x756ad3:goto L756ad3;
case 0x756ad5:c.instructions+=15;goto B756ad5;
case 0x756ad7:c.instructions+=14;goto B756ad7;
case 0x756ad9:c.instructions+=13;goto B756ad9;
case 0x756adc:c.instructions+=12;goto B756adc;
case 0x756adf:c.instructions+=11;goto B756adf;
case 0x756ae2:c.instructions+=10;goto B756ae2;
case 0x756ae5:c.instructions+=9;goto B756ae5;
case 0x756ae8:c.instructions+=8;goto B756ae8;
case 0x756aeb:c.instructions+=7;goto B756aeb;
case 0x756aee:c.instructions+=6;goto B756aee;
case 0x756af1:c.instructions+=5;goto B756af1;
case 0x756af4:c.instructions+=4;goto B756af4;
case 0x756af5:c.instructions+=3;goto B756af5;
case 0x756af6:c.instructions+=2;goto B756af6;
case 0x756af9:c.instructions+=1;goto B756af9;
case 0x756afe:goto L756afe;
case 0x756b00:c.instructions+=9;goto B756b00;
case 0x756b03:c.instructions+=8;goto B756b03;
case 0x756b06:c.instructions+=7;goto B756b06;
case 0x756b09:c.instructions+=6;goto B756b09;
case 0x756b0d:c.instructions+=5;goto B756b0d;
case 0x756b10:c.instructions+=4;goto B756b10;
case 0x756b13:c.instructions+=3;goto B756b13;
case 0x756b16:c.instructions+=2;goto B756b16;
case 0x756b18:c.instructions+=1;goto B756b18;
case 0x756b1a:goto L756b1a;
case 0x756b1f:goto L756b1f;
case 0x756b22:c.instructions+=2;goto B756b22;
case 0x756b26:c.instructions+=1;goto B756b26;
case 0x756b29:goto L756b29;
case 0x756b2d:c.instructions+=2;goto B756b2d;
case 0x756b2f:c.instructions+=1;goto B756b2f;
case 0x756b31:goto L756b31;
case 0x756b34:c.instructions+=2;goto B756b34;
case 0x756b36:c.instructions+=1;goto B756b36;
case 0x756b38:goto L756b38;
case 0x756b3a:goto L756b3a;
case 0x756b3e:c.instructions+=2;goto B756b3e;
case 0x756b40:c.instructions+=1;goto B756b40;
case 0x756b42:goto L756b42;
case 0x756b44:c.instructions+=3;goto B756b44;
case 0x756b46:c.instructions+=2;goto B756b46;
case 0x756b49:c.instructions+=1;goto B756b49;
case 0x756b4c:goto L756b4c;
case 0x756b4e:goto L756b4e;
case 0x756b50:c.instructions+=1;goto B756b50;
case 0x756b53:goto L756b53;
case 0x756b55:goto L756b55;
case 0x756b57:c.instructions+=3;goto B756b57;
case 0x756b58:c.instructions+=2;goto B756b58;
case 0x756b5b:c.instructions+=1;goto B756b5b;
case 0x756b60:goto L756b60;
case 0x756b63:c.instructions+=5;goto B756b63;
case 0x756b67:c.instructions+=4;goto B756b67;
case 0x756b68:c.instructions+=3;goto B756b68;
case 0x756b69:c.instructions+=2;goto B756b69;
case 0x756b6c:c.instructions+=1;goto B756b6c;
case 0x756b71:goto L756b71;
case 0x756b75:c.instructions+=7;goto B756b75;
case 0x756b78:c.instructions+=6;goto B756b78;
case 0x756b79:c.instructions+=5;goto B756b79;
case 0x756b7a:c.instructions+=4;goto B756b7a;
case 0x756b7b:c.instructions+=3;goto B756b7b;
case 0x756b7c:c.instructions+=2;goto B756b7c;
case 0x756b7d:c.instructions+=1;goto B756b7d;
case 0x756b7e:goto L756b7e;
case 0x756b80:c.instructions+=5;goto B756b80;
case 0x756b81:c.instructions+=4;goto B756b81;
case 0x756b82:c.instructions+=3;goto B756b82;
case 0x756b83:c.instructions+=2;goto B756b83;
case 0x756b84:c.instructions+=1;goto B756b84;
case 0x756b90:goto L756b90;
case 0x756ba0:goto L756ba0;
case 0x756ba2:c.instructions+=9;goto B756ba2;
case 0x756ba7:c.instructions+=8;goto B756ba7;
case 0x756bad:c.instructions+=7;goto B756bad;
case 0x756bb3:c.instructions+=6;goto B756bb3;
case 0x756bb9:c.instructions+=5;goto B756bb9;
case 0x756bbf:c.instructions+=4;goto B756bbf;
case 0x756bc5:c.instructions+=3;goto B756bc5;
case 0x756bcb:c.instructions+=2;goto B756bcb;
case 0x756bd1:c.instructions+=1;goto B756bd1;
case 0x756bd7:goto L756bd7;
case 0x756bdc:c.instructions+=2;goto B756bdc;
case 0x756be2:c.instructions+=1;goto B756be2;
case 0x756bf0:goto L756bf0;
case 0x756bf3:c.instructions+=7;goto B756bf3;
case 0x756bf4:c.instructions+=6;goto B756bf4;
case 0x756bf5:c.instructions+=5;goto B756bf5;
case 0x756bfb:c.instructions+=4;goto B756bfb;
case 0x756bfc:c.instructions+=3;goto B756bfc;
case 0x756c02:c.instructions+=2;goto B756c02;
case 0x756c06:c.instructions+=1;goto B756c06;
case 0x756c0a:goto L756c0a;
case 0x756c0e:goto L756c0e;
case 0x756c10:goto L756c10;
case 0x756c12:c.instructions+=2;goto B756c12;
case 0x756c14:c.instructions+=1;goto B756c14;
case 0x756c1a:goto L756c1a;
case 0x756c1d:c.instructions+=1;goto B756c1d;
case 0x756c23:goto L756c23;
case 0x756c26:c.instructions+=1;goto B756c26;
case 0x756c28:goto L756c28;
case 0x756c2c:c.instructions+=1;goto B756c2c;
case 0x756c2e:goto L756c2e;
case 0x756c31:c.instructions+=4;goto B756c31;
case 0x756c34:c.instructions+=3;goto B756c34;
case 0x756c36:c.instructions+=2;goto B756c36;
case 0x756c38:c.instructions+=1;goto B756c38;
case 0x756c3a:goto L756c3a;
case 0x756c3d:c.instructions+=4;goto B756c3d;
case 0x756c40:c.instructions+=3;goto B756c40;
case 0x756c43:c.instructions+=2;goto B756c43;
case 0x756c45:c.instructions+=1;goto B756c45;
case 0x756c47:goto L756c47;
case 0x756c4c:c.instructions+=1;goto B756c4c;
case 0x756c4e:goto L756c4e;
case 0x756c53:c.instructions+=1;goto B756c53;
case 0x756c55:goto L756c55;
case 0x756c5a:c.instructions+=1;goto B756c5a;
case 0x756c5c:goto L756c5c;
case 0x756c5e:c.instructions+=3;goto B756c5e;
case 0x756c60:c.instructions+=2;goto B756c60;
case 0x756c63:c.instructions+=1;goto B756c63;
case 0x756c65:goto L756c65;
case 0x756c69:c.instructions+=1;goto B756c69;
case 0x756c70:goto L756c70;
case 0x756c74:c.instructions+=7;goto B756c74;
case 0x756c77:c.instructions+=6;goto B756c77;
case 0x756c79:c.instructions+=5;goto B756c79;
case 0x756c7d:c.instructions+=4;goto B756c7d;
case 0x756c7e:c.instructions+=3;goto B756c7e;
case 0x756c7f:c.instructions+=2;goto B756c7f;
case 0x756c83:c.instructions+=1;goto B756c83;
case 0x756c85:goto L756c85;
case 0x756c87:c.instructions+=5;goto B756c87;
case 0x756c8b:c.instructions+=4;goto B756c8b;
case 0x756c8e:c.instructions+=3;goto B756c8e;
case 0x756c92:c.instructions+=2;goto B756c92;
case 0x756c94:c.instructions+=1;goto B756c94;
case 0x756c9a:goto L756c9a;
case 0x756c9c:goto L756c9c;
case 0x756c9f:c.instructions+=1;goto B756c9f;
case 0x756ca4:goto L756ca4;
case 0x756ca5:c.instructions+=4;goto B756ca5;
case 0x756ca6:c.instructions+=3;goto B756ca6;
case 0x756ca8:c.instructions+=2;goto B756ca8;
case 0x756cac:c.instructions+=1;goto B756cac;
case 0x756cae:goto L756cae;
case 0x756cb0:goto L756cb0;
case 0x756cb3:c.instructions+=1;goto B756cb3;
case 0x756cb5:goto L756cb5;
case 0x756cb8:c.instructions+=1;goto B756cb8;
case 0x756cba:goto L756cba;
case 0x756cbe:c.instructions+=1;goto B756cbe;
case 0x756cc0:goto L756cc0;
case 0x756cc3:c.instructions+=1;goto B756cc3;
case 0x756cc5:goto L756cc5;
case 0x756cc8:c.instructions+=4;goto B756cc8;
case 0x756ccb:c.instructions+=3;goto B756ccb;
case 0x756ccd:c.instructions+=2;goto B756ccd;
case 0x756ccf:c.instructions+=1;goto B756ccf;
case 0x756cd1:goto L756cd1;
case 0x756cd2:c.instructions+=3;goto B756cd2;
case 0x756cd3:c.instructions+=2;goto B756cd3;
case 0x756cd5:c.instructions+=1;goto B756cd5;
case 0x756cd7:goto L756cd7;
case 0x756cdb:c.instructions+=4;goto B756cdb;
case 0x756cdf:c.instructions+=3;goto B756cdf;
case 0x756ce3:c.instructions+=2;goto B756ce3;
case 0x756ce5:c.instructions+=1;goto B756ce5;
case 0x756cea:goto L756cea;
case 0x756cec:c.instructions+=2;goto B756cec;
case 0x756cf0:c.instructions+=1;goto B756cf0;
case 0x756cf2:goto L756cf2;
case 0x756cf4:c.instructions+=3;goto B756cf4;
case 0x756cf8:c.instructions+=2;goto B756cf8;
case 0x756cfa:c.instructions+=1;goto B756cfa;
case 0x756cfd:goto L756cfd;
case 0x756cff:goto L756cff;
case 0x756d01:c.instructions+=1;goto B756d01;
case 0x756d04:goto L756d04;
case 0x756d06:goto L756d06;
case 0x756d08:goto L756d08;
case 0x756d0c:c.instructions+=3;goto B756d0c;
case 0x756d10:c.instructions+=2;goto B756d10;
case 0x756d12:c.instructions+=1;goto B756d12;
case 0x756d17:goto L756d17;
case 0x756d1a:c.instructions+=15;goto B756d1a;
case 0x756d1b:c.instructions+=14;goto B756d1b;
case 0x756d21:c.instructions+=13;goto B756d21;
case 0x756d22:c.instructions+=12;goto B756d22;
case 0x756d25:c.instructions+=11;goto B756d25;
case 0x756d2a:c.instructions+=10;goto B756d2a;
case 0x756d2c:c.instructions+=9;goto B756d2c;
case 0x756d2f:c.instructions+=8;goto B756d2f;
case 0x756d35:c.instructions+=7;goto B756d35;
case 0x756d3b:c.instructions+=6;goto B756d3b;
case 0x756d41:c.instructions+=5;goto B756d41;
case 0x756d42:c.instructions+=4;goto B756d42;
case 0x756d45:c.instructions+=3;goto B756d45;
case 0x756d46:c.instructions+=2;goto B756d46;
case 0x756d47:c.instructions+=1;goto B756d47;
case 0x756d4d:goto L756d4d;
case 0x756d4f:c.instructions+=1;goto B756d4f;
case 0x756d51:goto L756d51;
case 0x756d57:goto L756d57;
case 0x756d5c:c.instructions+=1;goto B756d5c;
case 0x756d5e:goto L756d5e;
case 0x756d61:c.instructions+=6;goto B756d61;
case 0x756d63:c.instructions+=5;goto B756d63;
case 0x756d69:c.instructions+=4;goto B756d69;
case 0x756d6a:c.instructions+=3;goto B756d6a;
case 0x756d6b:c.instructions+=2;goto B756d6b;
case 0x756d6c:c.instructions+=1;goto B756d6c;
case 0x756d72:goto L756d72;
case 0x756d78:c.instructions+=2;goto B756d78;
case 0x756d7a:c.instructions+=1;goto B756d7a;
case 0x756d7c:goto L756d7c;
case 0x756d7e:c.instructions+=1;goto B756d7e;
case 0x756d83:goto L756d83;
case 0x756d89:c.instructions+=3;goto B756d89;
case 0x756d8b:c.instructions+=2;goto B756d8b;
case 0x756d8c:c.instructions+=1;goto B756d8c;
case 0x756d92:goto L756d92;
case 0x756d97:c.instructions+=1;goto B756d97;
case 0x756d9d:goto L756d9d;
case 0x756da0:c.instructions+=11;goto B756da0;
case 0x756da2:c.instructions+=10;goto B756da2;
case 0x756da5:c.instructions+=9;goto B756da5;
case 0x756dab:c.instructions+=8;goto B756dab;
case 0x756db1:c.instructions+=7;goto B756db1;
case 0x756db7:c.instructions+=6;goto B756db7;
case 0x756dbd:c.instructions+=5;goto B756dbd;
case 0x756dbe:c.instructions+=4;goto B756dbe;
case 0x756dc4:c.instructions+=3;goto B756dc4;
case 0x756dc5:c.instructions+=2;goto B756dc5;
case 0x756dc6:c.instructions+=1;goto B756dc6;
case 0x756dcc:goto L756dcc;
case 0x756dce:c.instructions+=1;goto B756dce;
case 0x756dd0:goto L756dd0;
case 0x756dd6:goto L756dd6;
case 0x756ddb:c.instructions+=1;goto B756ddb;
case 0x756ddd:goto L756ddd;
case 0x756de2:c.instructions+=1;goto B756de2;
case 0x756de7:goto L756de7;
case 0x756deb:c.instructions+=5;goto B756deb;
case 0x756ded:c.instructions+=4;goto B756ded;
case 0x756def:c.instructions+=3;goto B756def;
case 0x756df2:c.instructions+=2;goto B756df2;
case 0x756df5:c.instructions+=1;goto B756df5;
case 0x756df8:goto L756df8;
case 0x756dfa:goto L756dfa;
case 0x756dfc:c.instructions+=1;goto B756dfc;
case 0x756dff:goto L756dff;
case 0x756e01:goto L756e01;
case 0x756e04:c.instructions+=2;goto B756e04;
case 0x756e06:c.instructions+=1;goto B756e06;
case 0x756e0c:goto L756e0c;
case 0x756e10:c.instructions+=7;goto B756e10;
case 0x756e13:c.instructions+=6;goto B756e13;
case 0x756e17:c.instructions+=5;goto B756e17;
case 0x756e19:c.instructions+=4;goto B756e19;
case 0x756e1c:c.instructions+=3;goto B756e1c;
case 0x756e1e:c.instructions+=2;goto B756e1e;
case 0x756e24:c.instructions+=1;goto B756e24;
case 0x756e26:goto L756e26;
case 0x756e2a:c.instructions+=4;goto B756e2a;
case 0x756e2e:c.instructions+=3;goto B756e2e;
case 0x756e30:c.instructions+=2;goto B756e30;
case 0x756e33:c.instructions+=1;goto B756e33;
case 0x756e37:goto L756e37;
case 0x756e39:goto L756e39;
case 0x756e3b:c.instructions+=1;goto B756e3b;
case 0x756e3e:goto L756e3e;
case 0x756e40:goto L756e40;
case 0x756e41:c.instructions+=5;goto B756e41;
case 0x756e42:c.instructions+=4;goto B756e42;
case 0x756e47:c.instructions+=3;goto B756e47;
case 0x756e48:c.instructions+=2;goto B756e48;
case 0x756e4b:c.instructions+=1;goto B756e4b;
case 0x756e4c:goto L756e4c;
case 0x756e52:c.instructions+=6;goto B756e52;
case 0x756e53:c.instructions+=5;goto B756e53;
case 0x756e54:c.instructions+=4;goto B756e54;
case 0x756e56:c.instructions+=3;goto B756e56;
case 0x756e57:c.instructions+=2;goto B756e57;
case 0x756e5a:c.instructions+=1;goto B756e5a;
case 0x756e60:goto L756e60;
case 0x756e61:c.instructions+=4;goto B756e61;
case 0x756e62:c.instructions+=3;goto B756e62;
case 0x756e64:c.instructions+=2;goto B756e64;
case 0x756e66:c.instructions+=1;goto B756e66;
case 0x756e6c:goto L756e6c;
case 0x756e6e:c.instructions+=7;goto B756e6e;
case 0x756e74:c.instructions+=6;goto B756e74;
case 0x756e7a:c.instructions+=5;goto B756e7a;
case 0x756e7d:c.instructions+=4;goto B756e7d;
case 0x756e7f:c.instructions+=3;goto B756e7f;
case 0x756e82:c.instructions+=2;goto B756e82;
case 0x756e84:c.instructions+=1;goto B756e84;
case 0x756e86:goto L756e86;
case 0x756e87:c.instructions+=3;goto B756e87;
case 0x756e8a:c.instructions+=2;goto B756e8a;
case 0x756e8b:c.instructions+=1;goto B756e8b;
case 0x756e8c:goto L756e8c;
case 0x756e92:c.instructions+=16;goto B756e92;
case 0x756e95:c.instructions+=15;goto B756e95;
case 0x756e97:c.instructions+=14;goto B756e97;
case 0x756e9e:c.instructions+=13;goto B756e9e;
case 0x756ea1:c.instructions+=12;goto B756ea1;
case 0x756ea5:c.instructions+=11;goto B756ea5;
case 0x756ea7:c.instructions+=10;goto B756ea7;
case 0x756eaa:c.instructions+=9;goto B756eaa;
case 0x756eac:c.instructions+=8;goto B756eac;
case 0x756eae:c.instructions+=7;goto B756eae;
case 0x756eb1:c.instructions+=6;goto B756eb1;
case 0x756eb3:c.instructions+=5;goto B756eb3;
case 0x756eb5:c.instructions+=4;goto B756eb5;
case 0x756eb8:c.instructions+=3;goto B756eb8;
case 0x756eb9:c.instructions+=2;goto B756eb9;
case 0x756ebc:c.instructions+=1;goto B756ebc;
case 0x756ebf:goto L756ebf;
case 0x756ec1:goto L756ec1;
case 0x756ec3:c.instructions+=1;goto B756ec3;
case 0x756ec6:goto L756ec6;
case 0x756ec8:goto L756ec8;
case 0x756eca:c.instructions+=3;goto B756eca;
case 0x756ecc:c.instructions+=2;goto B756ecc;
case 0x756ecf:c.instructions+=1;goto B756ecf;
case 0x756ed1:goto L756ed1;
case 0x756ed3:goto L756ed3;
case 0x756ed7:c.instructions+=5;goto B756ed7;
case 0x756eda:c.instructions+=4;goto B756eda;
case 0x756edc:c.instructions+=3;goto B756edc;
case 0x756edd:c.instructions+=2;goto B756edd;
case 0x756ede:c.instructions+=1;goto B756ede;
case 0x756ee0:goto L756ee0;
case 0x756ee4:c.instructions+=7;goto B756ee4;
case 0x756ee8:c.instructions+=6;goto B756ee8;
case 0x756eed:c.instructions+=5;goto B756eed;
case 0x756ef2:c.instructions+=4;goto B756ef2;
case 0x756ef8:c.instructions+=3;goto B756ef8;
case 0x756efa:c.instructions+=2;goto B756efa;
case 0x756efb:c.instructions+=1;goto B756efb;
case 0x756efd:goto L756efd;
case 0x756f00:c.instructions+=3;goto B756f00;
case 0x756f02:c.instructions+=2;goto B756f02;
case 0x756f03:c.instructions+=1;goto B756f03;
case 0x756f09:goto L756f09;
case 0x756f0f:c.instructions+=4;goto B756f0f;
case 0x756f12:c.instructions+=3;goto B756f12;
case 0x756f14:c.instructions+=2;goto B756f14;
case 0x756f1a:c.instructions+=1;goto B756f1a;
case 0x756f20:goto L756f20;
case 0x756f26:goto L756f26;
case 0x756f2c:c.instructions+=2;goto B756f2c;
case 0x756f2e:c.instructions+=1;goto B756f2e;
case 0x756f30:goto L756f30;
case 0x756f36:c.instructions+=3;goto B756f36;
case 0x756f38:c.instructions+=2;goto B756f38;
case 0x756f39:c.instructions+=1;goto B756f39;
case 0x756f3f:goto L756f3f;
case 0x756f44:c.instructions+=1;goto B756f44;
case 0x756f46:goto L756f46;
case 0x756f4c:c.instructions+=12;goto B756f4c;
case 0x756f52:c.instructions+=11;goto B756f52;
case 0x756f53:c.instructions+=10;goto B756f53;
case 0x756f59:c.instructions+=9;goto B756f59;
case 0x756f5f:c.instructions+=8;goto B756f5f;
case 0x756f60:c.instructions+=7;goto B756f60;
case 0x756f61:c.instructions+=6;goto B756f61;
case 0x756f64:c.instructions+=5;goto B756f64;
case 0x756f67:c.instructions+=4;goto B756f67;
case 0x756f6e:c.instructions+=3;goto B756f6e;
case 0x756f6f:c.instructions+=2;goto B756f6f;
case 0x756f70:c.instructions+=1;goto B756f70;
case 0x756f76:goto L756f76;
case 0x756f7d:c.instructions+=1;goto B756f7d;
case 0x756f87:goto L756f87;
case 0x756f88:c.instructions+=3;goto B756f88;
case 0x756f8a:c.instructions+=2;goto B756f8a;
case 0x756f8b:c.instructions+=1;goto B756f8b;
case 0x756f90:goto L756f90;
case 0x756f96:c.instructions+=7;goto B756f96;
case 0x756f9b:c.instructions+=6;goto B756f9b;
case 0x756f9c:c.instructions+=5;goto B756f9c;
case 0x756f9e:c.instructions+=4;goto B756f9e;
case 0x756fa5:c.instructions+=3;goto B756fa5;
case 0x756fab:c.instructions+=2;goto B756fab;
case 0x756fae:c.instructions+=1;goto B756fae;
case 0x756fb0:goto L756fb0;
case 0x756fb3:c.instructions+=1;goto B756fb3;
case 0x756fb5:goto L756fb5;
case 0x756fbb:c.instructions+=5;goto B756fbb;
case 0x756fbf:c.instructions+=4;goto B756fbf;
case 0x756fc3:c.instructions+=3;goto B756fc3;
case 0x756fcb:c.instructions+=2;goto B756fcb;
case 0x756fd3:c.instructions+=1;goto B756fd3;
case 0x756fd8:goto L756fd8;
case 0x756fe2:c.instructions+=1;goto B756fe2;
case 0x756fec:goto L756fec;
case 0x756ff3:c.instructions+=3;goto B756ff3;
case 0x756ff5:c.instructions+=2;goto B756ff5;
case 0x756ff6:c.instructions+=1;goto B756ff6;
case 0x756ffb:goto L756ffb;
default:missing_instruction(c.pc);}
B756000:L756000:{c.instructions+=3;NFSU2_TR(0x756000);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756006:{NFSU2_TR(0x756006);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B756010:{NFSU2_TR(0x756010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756015ull));
TAIL_STATIC(0x7555c0u,755);
}
B756015:L756015:{c.instructions+=7;NFSU2_TR(0x756015);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B756019:{NFSU2_TR(0x756019);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75601c:{NFSU2_TR(0x75601c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B756022:{NFSU2_TR(0x756022);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756028:{NFSU2_TR(0x756028);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B75602a:{NFSU2_TR(0x75602a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75602c:{NFSU2_TR(0x75602c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L756030;}}
}
B75602e:L75602e:{c.instructions+=1;NFSU2_TR(0x75602e);
__builtin_memmove((R+0),(R+4),4);
}
B756030:L756030:{c.instructions+=2;NFSU2_TR(0x756030);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B756032:{NFSU2_TR(0x756032);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756045;}}
}
B756034:L756034:{c.instructions+=2;NFSU2_TR(0x756034);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75603b:{NFSU2_TR(0x75603b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756045;}}
}
B75603d:L75603d:{c.instructions+=6;NFSU2_TR(0x75603d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75603e:{NFSU2_TR(0x75603e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75603f:{NFSU2_TR(0x75603f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B756040:{NFSU2_TR(0x756040);
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
B756043:{NFSU2_TR(0x756043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B756044:{NFSU2_TR(0x756044);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B756045:L756045:{c.instructions+=2;NFSU2_TR(0x756045);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B756047:{NFSU2_TR(0x756047);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75605e;}}
}
B756049:L756049:{c.instructions+=3;NFSU2_TR(0x756049);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75604f:{NFSU2_TR(0x75604f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B756055:{NFSU2_TR(0x756055);
if(r1(R+518)){{goto L75605e;}}
}
B756057:L756057:{c.instructions+=6;NFSU2_TR(0x756057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B756058:{NFSU2_TR(0x756058);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B756059:{NFSU2_TR(0x756059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75605a:{NFSU2_TR(0x75605a);
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
B75605c:{NFSU2_TR(0x75605c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75605d:{NFSU2_TR(0x75605d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75605e:L75605e:{c.instructions+=3;NFSU2_TR(0x75605e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B756062:{NFSU2_TR(0x756062);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B756064:{NFSU2_TR(0x756064);
if(r1(R+518)){{goto L75607e;}}
}
B756066:L756066:{c.instructions+=5;NFSU2_TR(0x756066);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75606c:{NFSU2_TR(0x75606c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75606e:{NFSU2_TR(0x75606e);
__builtin_memmove((R+4),(R+0),4);
}
B756070:{NFSU2_TR(0x756070);
__builtin_memmove((R+8),(R+4),4);
}
B756072:{NFSU2_TR(0x756072);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B756075:L756075:{c.instructions+=1;NFSU2_TR(0x756075);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L756077;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756075u);}goto L756075;}
}
B756077:L756077:{c.instructions+=2;NFSU2_TR(0x756077);
__builtin_memmove((R+4),(R+8),4);
}
B756079:{NFSU2_TR(0x756079);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75607c:L75607c:{c.instructions+=1;NFSU2_TR(0x75607c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L75607e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75607cu);}goto L75607c;}
}
B75607e:L75607e:{c.instructions+=8;NFSU2_TR(0x75607e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B756084:{NFSU2_TR(0x756084);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B756085:{NFSU2_TR(0x756085);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B756086:{NFSU2_TR(0x756086);
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
B756088:{NFSU2_TR(0x756088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B756089:{NFSU2_TR(0x756089);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75608f:{NFSU2_TR(0x75608f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B756090:{NFSU2_TR(0x756090);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7560a0:L7560a0:{c.instructions+=10;NFSU2_TR(0x7560a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x244ull))));
}
B7560a6:{NFSU2_TR(0x7560a6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7560ab:{NFSU2_TR(0x7560ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7560b2:{NFSU2_TR(0x7560b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7560b3:{NFSU2_TR(0x7560b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x250ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7560ba:{NFSU2_TR(0x7560ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7560bb:{NFSU2_TR(0x7560bb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7560bd:{NFSU2_TR(0x7560bd);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7560c2:{NFSU2_TR(0x7560c2);
w4(R+4,u32(0xfull));
}
B7560c7:{NFSU2_TR(0x7560c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B7560cb:L7560cb:{c.instructions+=1;NFSU2_TR(0x7560cb);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7560cd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7560cbu);}goto L7560cb;}
}
B7560cd:L7560cd:{c.instructions+=5;NFSU2_TR(0x7560cd);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B7560cf:{NFSU2_TR(0x7560cf);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B7560d0:{NFSU2_TR(0x7560d0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7560d2:{NFSU2_TR(0x7560d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7560d4:{NFSU2_TR(0x7560d4);
if(r1(R+518)){{goto L7560e2;}}
}
B7560d6:L7560d6:{c.instructions+=2;NFSU2_TR(0x7560d6);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x20ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7560d8:{NFSU2_TR(0x7560d8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7560e2;}}
}
B7560da:L7560da:{c.instructions+=4;NFSU2_TR(0x7560da);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7560dd:{NFSU2_TR(0x7560dd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7560de:{NFSU2_TR(0x7560de);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7560e0:{NFSU2_TR(0x7560e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7560d6u);}goto L7560d6;}}
}
B7560e2:L7560e2:{c.instructions+=4;NFSU2_TR(0x7560e2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7560e4:{NFSU2_TR(0x7560e4);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7560e7:{NFSU2_TR(0x7560e7);
__builtin_memmove((R+0),(R+24),4);
}
B7560e9:{NFSU2_TR(0x7560e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7560fe;}}
}
B7560eb:L7560eb:{c.instructions+=2;NFSU2_TR(0x7560eb);
__builtin_memmove((R+8),(R+4),1);
}
B7560ed:{NFSU2_TR(0x7560ed);
__builtin_memmove((R+4),(R+4),4);
}
B7560f0:L7560f0:{c.instructions+=2;NFSU2_TR(0x7560f0);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7560f3:{NFSU2_TR(0x7560f3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7560fe;}}
}
B7560f5:L7560f5:{c.instructions+=4;NFSU2_TR(0x7560f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7560f8:{NFSU2_TR(0x7560f8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7560f9:{NFSU2_TR(0x7560f9);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7560fc:{NFSU2_TR(0x7560fc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7560f0u);}goto L7560f0;}}
}
B7560fe:L7560fe:{c.instructions+=2;NFSU2_TR(0x7560fe);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B756101:{NFSU2_TR(0x756101);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756136;}}
}
B756103:L756103:{c.instructions+=3;NFSU2_TR(0x756103);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B756105:{NFSU2_TR(0x756105);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B756108:{NFSU2_TR(0x756108);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L756136;}}
}
B75610a:L75610a:{c.instructions+=3;NFSU2_TR(0x75610a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B75610c:{NFSU2_TR(0x75610c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75610f:{NFSU2_TR(0x75610f);
if(r1(R+518)){{goto L75612d;}}
}
B756111:L756111:{c.instructions+=4;NFSU2_TR(0x756111);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B756115:{NFSU2_TR(0x756115);
__builtin_memmove((R+0),(R+24),4);
}
B756117:{NFSU2_TR(0x756117);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B756119:{NFSU2_TR(0x756119);
__builtin_memmove((R+16),(R+16),4);
}
B756120:L756120:{c.instructions+=6;NFSU2_TR(0x756120);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B756123:{NFSU2_TR(0x756123);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B756126:{NFSU2_TR(0x756126);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B756127:{NFSU2_TR(0x756127);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B756128:{NFSU2_TR(0x756128);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75612b:{NFSU2_TR(0x75612b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756120u);}goto L756120;}}
}
B75612d:L75612d:{c.instructions+=2;NFSU2_TR(0x75612d);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B756132:{NFSU2_TR(0x756132);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B756136:L756136:{c.instructions+=3;NFSU2_TR(0x756136);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B756138:{NFSU2_TR(0x756138);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75613a:{NFSU2_TR(0x75613a);
if(r1(R+518)){{goto L75614c;}}
}
B75613c:L75613c:{c.instructions+=1;NFSU2_TR(0x75613c);
__builtin_memmove((R+16),(R+16),4);
}
B756140:L756140:{c.instructions+=2;NFSU2_TR(0x756140);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x20ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B756142:{NFSU2_TR(0x756142);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L75614c;}}
}
B756144:L756144:{c.instructions+=4;NFSU2_TR(0x756144);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B756147:{NFSU2_TR(0x756147);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B756148:{NFSU2_TR(0x756148);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75614a:{NFSU2_TR(0x75614a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756140u);}goto L756140;}}
}
B75614c:L75614c:{c.instructions+=2;NFSU2_TR(0x75614c);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B75614f:{NFSU2_TR(0x75614f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75615a;}}
}
B756151:L756151:{c.instructions+=2;NFSU2_TR(0x756151);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B756155:{NFSU2_TR(0x756155);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75615a;}}
}
B756157:L756157:{c.instructions+=1;NFSU2_TR(0x756157);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B75615a:L75615a:{c.instructions+=2;NFSU2_TR(0x75615a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75615c:{NFSU2_TR(0x75615c);
__builtin_memmove((R+16),(R+16),4);
}
B756160:L756160:{c.instructions+=3;NFSU2_TR(0x756160);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B756162:{NFSU2_TR(0x756162);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B756165:{NFSU2_TR(0x756165);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7561ee;}}
}
B75616b:L75616b:{c.instructions+=2;NFSU2_TR(0x75616b);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75616e:{NFSU2_TR(0x75616e);
if(r1(R+518)){{goto L7561ee;}}
}
B756170:L756170:{c.instructions+=2;NFSU2_TR(0x756170);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B756173:{NFSU2_TR(0x756173);
if(r1(R+518)){{goto L7561ee;}}
}
B756175:L756175:{c.instructions+=5;NFSU2_TR(0x756175);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B756176:{NFSU2_TR(0x756176);
u8 U[13];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B75617a:{NFSU2_TR(0x75617a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B75617c:{NFSU2_TR(0x75617c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75617f:{NFSU2_TR(0x75617f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7561de;}}
}
B756181:L756181:{c.instructions+=2;NFSU2_TR(0x756181);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B756184:{NFSU2_TR(0x756184);
if(r1(R+518)){{goto L7561de;}}
}
B756186:L756186:{c.instructions+=2;NFSU2_TR(0x756186);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B756189:{NFSU2_TR(0x756189);
if(r1(R+518)){{goto L7561de;}}
}
B75618b:L75618b:{c.instructions+=5;NFSU2_TR(0x75618b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75618c:{NFSU2_TR(0x75618c);
u8 U[13];
w4(U+0,u32(u32(u32(0x49ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B756190:{NFSU2_TR(0x756190);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B756192:{NFSU2_TR(0x756192);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B756195:{NFSU2_TR(0x756195);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7561e1;}}
}
B756197:L756197:{c.instructions+=2;NFSU2_TR(0x756197);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75619a:{NFSU2_TR(0x75619a);
if(r1(R+518)){{goto L7561e1;}}
}
B75619c:L75619c:{c.instructions+=2;NFSU2_TR(0x75619c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75619f:{NFSU2_TR(0x75619f);
if(r1(R+518)){{goto L7561e1;}}
}
B7561a1:L7561a1:{c.instructions+=5;NFSU2_TR(0x7561a1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7561a2:{NFSU2_TR(0x7561a2);
u8 U[13];
w4(U+0,u32(u32(u32(0x4aull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B7561a6:{NFSU2_TR(0x7561a6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7561a8:{NFSU2_TR(0x7561a8);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7561ab:{NFSU2_TR(0x7561ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7561e6;}}
}
B7561ad:L7561ad:{c.instructions+=2;NFSU2_TR(0x7561ad);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7561b0:{NFSU2_TR(0x7561b0);
if(r1(R+518)){{goto L7561e6;}}
}
B7561b2:L7561b2:{c.instructions+=2;NFSU2_TR(0x7561b2);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7561b5:{NFSU2_TR(0x7561b5);
if(r1(R+518)){{goto L7561e6;}}
}
B7561b7:L7561b7:{c.instructions+=5;NFSU2_TR(0x7561b7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7561b8:{NFSU2_TR(0x7561b8);
u8 U[13];
w4(U+0,u32(u32(u32(0x4bull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B7561bc:{NFSU2_TR(0x7561bc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7561be:{NFSU2_TR(0x7561be);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7561c1:{NFSU2_TR(0x7561c1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7561eb;}}
}
B7561c3:L7561c3:{c.instructions+=2;NFSU2_TR(0x7561c3);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7561c6:{NFSU2_TR(0x7561c6);
if(r1(R+518)){{goto L7561eb;}}
}
B7561c8:L7561c8:{c.instructions+=2;NFSU2_TR(0x7561c8);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7561cb:{NFSU2_TR(0x7561cb);
if(r1(R+518)){{goto L7561eb;}}
}
B7561cd:L7561cd:{c.instructions+=5;NFSU2_TR(0x7561cd);
u8 U[13];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B7561d1:{NFSU2_TR(0x7561d1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
}
B7561d4:{NFSU2_TR(0x7561d4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7561d5:{NFSU2_TR(0x7561d5);
w1(R+512,u8((r4(R+0))<(u32(0xffull))));
}
B7561da:{NFSU2_TR(0x7561da);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756160u);}goto L756160;}}
}
B7561dc:L7561dc:{c.instructions+=1;NFSU2_TR(0x7561dc);
{goto L7561ee;}
}
B7561de:L7561de:{c.instructions+=2;NFSU2_TR(0x7561de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7561df:{NFSU2_TR(0x7561df);
{goto L7561ee;}
}
B7561e1:L7561e1:{c.instructions+=2;NFSU2_TR(0x7561e1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B7561e4:{NFSU2_TR(0x7561e4);
{goto L7561ee;}
}
B7561e6:L7561e6:{c.instructions+=2;NFSU2_TR(0x7561e6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B7561e9:{NFSU2_TR(0x7561e9);
{goto L7561ee;}
}
B7561eb:L7561eb:{c.instructions+=1;NFSU2_TR(0x7561eb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B7561ee:L7561ee:{c.instructions+=4;NFSU2_TR(0x7561ee);
u8 U[13];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B7561f3:{NFSU2_TR(0x7561f3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7561f5:{NFSU2_TR(0x7561f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7561f7:{NFSU2_TR(0x7561f7);
if(r1(R+518)){{goto L75620c;}}
}
B7561f9:L7561f9:{c.instructions+=1;NFSU2_TR(0x7561f9);
__builtin_memmove((R+16),(R+16),4);
}
B756200:L756200:{c.instructions+=2;NFSU2_TR(0x756200);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x20ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B756202:{NFSU2_TR(0x756202);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L75620c;}}
}
B756204:L756204:{c.instructions+=4;NFSU2_TR(0x756204);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B756207:{NFSU2_TR(0x756207);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B756208:{NFSU2_TR(0x756208);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75620a:{NFSU2_TR(0x75620a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756200u);}goto L756200;}}
}
B75620c:L75620c:{c.instructions+=3;NFSU2_TR(0x75620c);
u8 U[5];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B756210:{NFSU2_TR(0x756210);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B756212:{NFSU2_TR(0x756212);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75623d;}}
}
B756214:L756214:{c.instructions+=7;NFSU2_TR(0x756214);
u8 U[8];
w4(U+0,u32(u32(u32(0x250ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75621b:{NFSU2_TR(0x75621b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75621c:{NFSU2_TR(0x75621c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B756226:{NFSU2_TR(0x756226);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B756229:{NFSU2_TR(0x756229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75622a:{NFSU2_TR(0x75622a);
u8 U[8];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B756231:{NFSU2_TR(0x756231);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756236ull));
TAIL_STATIC(0x76115eu,761);
}
B756236:L756236:{c.instructions+=2;NFSU2_TR(0x756236);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x244ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x244ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x244ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75623c:{NFSU2_TR(0x75623c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75623d:L75623d:{c.instructions+=7;NFSU2_TR(0x75623d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75623e:{NFSU2_TR(0x75623e);
u8 U[8];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B756245:{NFSU2_TR(0x756245);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B756248:{NFSU2_TR(0x756248);
__builtin_memmove((R+8),(R+0),4);
}
B75624a:{NFSU2_TR(0x75624a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B75624e:{NFSU2_TR(0x75624e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75624f:{NFSU2_TR(0x75624f);
}
B756250:L756250:{c.instructions+=4;NFSU2_TR(0x756250);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B756252:{NFSU2_TR(0x756252);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B756253:{NFSU2_TR(0x756253);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x41ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B756256:{NFSU2_TR(0x756256);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L756260;}}
}
B756258:L756258:{c.instructions+=2;NFSU2_TR(0x756258);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x5aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75625b:{NFSU2_TR(0x75625b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L756260;}}
}
B75625d:L75625d:{c.instructions+=1;NFSU2_TR(0x75625d);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x20ull))));
}
B756260:L756260:{c.instructions+=4;NFSU2_TR(0x756260);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B756262:{NFSU2_TR(0x756262);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B756263:{NFSU2_TR(0x756263);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B756265:{NFSU2_TR(0x756265);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75626d;}}
}
B756267:L756267:{c.instructions+=2;NFSU2_TR(0x756267);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B756269:{NFSU2_TR(0x756269);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L75626d;}}
}
B75626b:L75626b:{c.instructions+=1;NFSU2_TR(0x75626b);
w1(R+0,u8(u32(r1(R+0))^u32(u8(0x20ull))));
}
B75626d:L75626d:{c.instructions+=5;NFSU2_TR(0x75626d);
w4(R+20,u32(s32(s8(r1(R+0)))));
}
B756270:{NFSU2_TR(0x756270);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B756273:{NFSU2_TR(0x756273);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B756275:{NFSU2_TR(0x756275);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B756277:{NFSU2_TR(0x756277);
if(r1(R+518)){{goto L75627f;}}
}
B756279:L756279:{c.instructions+=2;NFSU2_TR(0x756279);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75627b:{NFSU2_TR(0x75627b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756250u);}goto L756250;}}
}
B75627d:L75627d:{c.instructions+=1;NFSU2_TR(0x75627d);
{goto L756283;}
}
B75627f:L75627f:{c.instructions+=2;NFSU2_TR(0x75627f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B756281:{NFSU2_TR(0x756281);
if(r1(R+518)){{goto L756298;}}
}
B756283:L756283:{c.instructions+=3;NFSU2_TR(0x756283);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B756285:{NFSU2_TR(0x756285);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756286:{NFSU2_TR(0x756286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75628bull));
TAIL_STATIC(0x7598f0u,759);
}
B75628b:L75628b:{c.instructions+=2;NFSU2_TR(0x75628b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75628e:{NFSU2_TR(0x75628e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B756298:L756298:{c.instructions+=2;NFSU2_TR(0x756298);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75629f:{NFSU2_TR(0x75629f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7562b0;}}
}
B7562a1:L7562a1:{c.instructions+=3;NFSU2_TR(0x7562a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7562a7:{NFSU2_TR(0x7562a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7562a9:{NFSU2_TR(0x7562a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7562b0;}}
}
B7562ab:L7562ab:{c.instructions+=2;NFSU2_TR(0x7562ab);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7562ae:{NFSU2_TR(0x7562ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7562c5;}}
}
B7562b0:L7562b0:{c.instructions+=3;NFSU2_TR(0x7562b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7562b2:{NFSU2_TR(0x7562b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7562b3:{NFSU2_TR(0x7562b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7562b8ull));
TAIL_STATIC(0x7598f0u,759);
}
B7562b8:L7562b8:{c.instructions+=2;NFSU2_TR(0x7562b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7562bb:{NFSU2_TR(0x7562bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7562c5:L7562c5:{c.instructions+=3;NFSU2_TR(0x7562c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x260ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7562cc:{NFSU2_TR(0x7562cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7562cf:{NFSU2_TR(0x7562cf);
}
B7562d0:L7562d0:{c.instructions+=4;NFSU2_TR(0x7562d0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7562d2:{NFSU2_TR(0x7562d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7562d3:{NFSU2_TR(0x7562d3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7562d5:{NFSU2_TR(0x7562d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7562d0u);}goto L7562d0;}}
}
B7562d7:L7562d7:{c.instructions+=5;NFSU2_TR(0x7562d7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B7562d9:{NFSU2_TR(0x7562d9);
__builtin_memmove((R+20),(R+0),4);
}
B7562db:{NFSU2_TR(0x7562db);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7562e2:{NFSU2_TR(0x7562e2);
w4(R+0,u32(0x7d2b60ull));
}
B7562e7:{NFSU2_TR(0x7562e7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7562ee;}}
}
B7562e9:L7562e9:{c.instructions+=1;NFSU2_TR(0x7562e9);
w4(R+0,u32(0x783fe5ull));
}
B7562ee:L7562ee:{c.instructions+=6;NFSU2_TR(0x7562ee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7562ef:{NFSU2_TR(0x7562ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7562f0:{NFSU2_TR(0x7562f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7562f7:{NFSU2_TR(0x7562f7);
u8 U[4];
w4(U+0,u32(0x7d3510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7562fc:{NFSU2_TR(0x7562fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7562fd:{NFSU2_TR(0x7562fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756302ull));
TAIL_STATIC(0x75c784u,75c);
}
B756302:L756302:{c.instructions+=4;NFSU2_TR(0x756302);
__builtin_memmove((R+0),(R+24),4);
}
B756304:{NFSU2_TR(0x756304);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B756307:{NFSU2_TR(0x756307);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B75630a:{NFSU2_TR(0x75630a);
__builtin_memmove((R+12),(R+12),4);
}
B756310:L756310:{c.instructions+=4;NFSU2_TR(0x756310);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B756312:{NFSU2_TR(0x756312);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B756313:{NFSU2_TR(0x756313);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B756315:{NFSU2_TR(0x756315);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756310u);}goto L756310;}}
}
B756317:L756317:{c.instructions+=4;NFSU2_TR(0x756317);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B756319:{NFSU2_TR(0x756319);
__builtin_memmove((R+8),(R+0),4);
}
B75631b:{NFSU2_TR(0x75631b);
u8 U[4];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B756322:{NFSU2_TR(0x756322);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B756325:L756325:{c.instructions+=4;NFSU2_TR(0x756325);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B756327:{NFSU2_TR(0x756327);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B756328:{NFSU2_TR(0x756328);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75632a:{NFSU2_TR(0x75632a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756325u);}goto L756325;}}
}
B75632c:L75632c:{c.instructions+=5;NFSU2_TR(0x75632c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B75632e:{NFSU2_TR(0x75632e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B756330:{NFSU2_TR(0x756330);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B756334:{NFSU2_TR(0x756334);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75633a:{NFSU2_TR(0x75633a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L756358;}}
}
B75633c:L75633c:{c.instructions+=7;NFSU2_TR(0x75633c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75633d:{NFSU2_TR(0x75633d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75633e:{NFSU2_TR(0x75633e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75633f:{NFSU2_TR(0x75633f);
w4(R+0,u32(0xfffffffeull));
}
B756344:{NFSU2_TR(0x756344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B756345:{NFSU2_TR(0x756345);
u8 U[8];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75634c:{NFSU2_TR(0x75634c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756351ull));
TAIL_STATIC(0x76115eu,761);
}
B756351:L756351:{c.instructions+=2;NFSU2_TR(0x756351);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x244ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x244ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x244ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B756357:{NFSU2_TR(0x756357);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B756358:L756358:{c.instructions+=7;NFSU2_TR(0x756358);
__builtin_memmove((R+0),gp(0x7d3504),4);
}
B75635d:{NFSU2_TR(0x75635d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B756363:{NFSU2_TR(0x756363);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B756365:{NFSU2_TR(0x756365);
__builtin_memmove((R+4),gp(0x7d3508),2);
}
B75636c:{NFSU2_TR(0x75636c);
__builtin_memmove((R+0),(R+24),4);
}
B75636e:{NFSU2_TR(0x75636e);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B756372:{NFSU2_TR(0x756372);
__builtin_memmove((R+4),(R+0),4);
}
B756374:L756374:{c.instructions+=4;NFSU2_TR(0x756374);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B756376:{NFSU2_TR(0x756376);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B756377:{NFSU2_TR(0x756377);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B756379:{NFSU2_TR(0x756379);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756374u);}goto L756374;}}
}
B75637b:L75637b:{c.instructions+=4;NFSU2_TR(0x75637b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B756381:{NFSU2_TR(0x756381);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B756383:{NFSU2_TR(0x756383);
__builtin_memmove((R+24),(R+4),4);
}
B756385:{NFSU2_TR(0x756385);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B756386:L756386:{c.instructions+=4;NFSU2_TR(0x756386);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B756389:{NFSU2_TR(0x756389);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75638a:{NFSU2_TR(0x75638a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75638c:{NFSU2_TR(0x75638c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756386u);}goto L756386;}}
}
B75638e:L75638e:{c.instructions+=2;NFSU2_TR(0x75638e);
__builtin_memmove((R+4),(R+0),4);
}
B756390:{NFSU2_TR(0x756390);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B756393:L756393:{c.instructions+=1;NFSU2_TR(0x756393);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L756395;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756393u);}goto L756393;}
}
B756395:L756395:{c.instructions+=3;NFSU2_TR(0x756395);
__builtin_memmove((R+4),(R+0),4);
}
B756397:{NFSU2_TR(0x756397);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75639a:{NFSU2_TR(0x75639a);
u8 U[4];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7563a1:L7563a1:{c.instructions+=1;NFSU2_TR(0x7563a1);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7563a3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7563a1u);}goto L7563a1;}
}
B7563a3:L7563a3:{c.instructions+=1;NFSU2_TR(0x7563a3);
__builtin_memmove((R+4),(R+0),4);
}
B7563a5:L7563a5:{c.instructions+=4;NFSU2_TR(0x7563a5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B7563a7:{NFSU2_TR(0x7563a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7563a8:{NFSU2_TR(0x7563a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7563aa:{NFSU2_TR(0x7563aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7563a5u);}goto L7563a5;}}
}
B7563ac:L7563ac:{c.instructions+=4;NFSU2_TR(0x7563ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7563b2:{NFSU2_TR(0x7563b2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B7563b4:{NFSU2_TR(0x7563b4);
__builtin_memmove((R+24),(R+4),4);
}
B7563b6:{NFSU2_TR(0x7563b6);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B7563b7:L7563b7:{c.instructions+=4;NFSU2_TR(0x7563b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7563ba:{NFSU2_TR(0x7563ba);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7563bb:{NFSU2_TR(0x7563bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7563bd:{NFSU2_TR(0x7563bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7563b7u);}goto L7563b7;}}
}
B7563bf:L7563bf:{c.instructions+=2;NFSU2_TR(0x7563bf);
__builtin_memmove((R+4),(R+0),4);
}
B7563c1:{NFSU2_TR(0x7563c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7563c4:L7563c4:{c.instructions+=1;NFSU2_TR(0x7563c4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7563c6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7563c4u);}goto L7563c4;}
}
B7563c6:L7563c6:{c.instructions+=3;NFSU2_TR(0x7563c6);
__builtin_memmove((R+4),(R+0),4);
}
B7563c8:{NFSU2_TR(0x7563c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x260ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7563cf:{NFSU2_TR(0x7563cf);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7563d2:L7563d2:{c.instructions+=1;NFSU2_TR(0x7563d2);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7563d4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7563d2u);}goto L7563d2;}
}
B7563d4:L7563d4:{c.instructions+=1;NFSU2_TR(0x7563d4);
__builtin_memmove((R+4),(R+0),4);
}
B7563d6:L7563d6:{c.instructions+=4;NFSU2_TR(0x7563d6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B7563d8:{NFSU2_TR(0x7563d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7563d9:{NFSU2_TR(0x7563d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7563db:{NFSU2_TR(0x7563db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7563d6u);}goto L7563d6;}}
}
B7563dd:L7563dd:{c.instructions+=4;NFSU2_TR(0x7563dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7563e3:{NFSU2_TR(0x7563e3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B7563e5:{NFSU2_TR(0x7563e5);
__builtin_memmove((R+24),(R+4),4);
}
B7563e7:{NFSU2_TR(0x7563e7);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B7563e8:L7563e8:{c.instructions+=4;NFSU2_TR(0x7563e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7563eb:{NFSU2_TR(0x7563eb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7563ec:{NFSU2_TR(0x7563ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7563ee:{NFSU2_TR(0x7563ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7563e8u);}goto L7563e8;}}
}
B7563f0:L7563f0:{c.instructions+=2;NFSU2_TR(0x7563f0);
__builtin_memmove((R+4),(R+0),4);
}
B7563f2:{NFSU2_TR(0x7563f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7563f5:L7563f5:{c.instructions+=1;NFSU2_TR(0x7563f5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7563f7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7563f5u);}goto L7563f5;}
}
B7563f7:L7563f7:{c.instructions+=2;NFSU2_TR(0x7563f7);
__builtin_memmove((R+4),(R+0),4);
}
B7563f9:{NFSU2_TR(0x7563f9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7563fc:L7563fc:{c.instructions+=1;NFSU2_TR(0x7563fc);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7563fe;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7563fcu);}goto L7563fc;}
}
B7563fe:L7563fe:{c.instructions+=6;NFSU2_TR(0x7563fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B756404:{NFSU2_TR(0x756404);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B756406:{NFSU2_TR(0x756406);
w4(R+28,u32(0x7d34fcull));
}
B75640b:{NFSU2_TR(0x75640b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B75640f:{NFSU2_TR(0x75640f);
w4(R+4,u32(0x6ull));
}
B756414:{NFSU2_TR(0x756414);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75641e:L75641e:{c.instructions+=1;NFSU2_TR(0x75641e);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L756420;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75641eu);}goto L75641e;}}
}
B756420:L756420:{c.instructions+=5;NFSU2_TR(0x756420);
__builtin_memmove((R+0),(R+8),4);
}
B756422:{NFSU2_TR(0x756422);
__builtin_memmove((R+0),(R+518),1);
}
B756425:{NFSU2_TR(0x756425);
__builtin_memmove((R+28),(R+0),4);
}
B756427:{NFSU2_TR(0x756427);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75642e:{NFSU2_TR(0x75642e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75646d;}}
}
B756430:L756430:{c.instructions+=4;NFSU2_TR(0x756430);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B756433:{NFSU2_TR(0x756433);
__builtin_memmove((R+8),(R+0),4);
}
B756435:{NFSU2_TR(0x756435);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B756439:{NFSU2_TR(0x756439);
__builtin_memmove((R+16),(R+16),4);
}
B756440:L756440:{c.instructions+=4;NFSU2_TR(0x756440);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B756442:{NFSU2_TR(0x756442);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B756443:{NFSU2_TR(0x756443);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x41ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B756446:{NFSU2_TR(0x756446);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L756450;}}
}
B756448:L756448:{c.instructions+=2;NFSU2_TR(0x756448);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x5aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75644b:{NFSU2_TR(0x75644b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L756450;}}
}
B75644d:L75644d:{c.instructions+=1;NFSU2_TR(0x75644d);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x20ull))));
}
B756450:L756450:{c.instructions+=4;NFSU2_TR(0x756450);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B756452:{NFSU2_TR(0x756452);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B756453:{NFSU2_TR(0x756453);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B756455:{NFSU2_TR(0x756455);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75645d;}}
}
B756457:L756457:{c.instructions+=2;NFSU2_TR(0x756457);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B756459:{NFSU2_TR(0x756459);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L75645d;}}
}
B75645b:L75645b:{c.instructions+=1;NFSU2_TR(0x75645b);
w1(R+0,u8(u32(r1(R+0))^u32(u8(0x20ull))));
}
B75645d:L75645d:{c.instructions+=5;NFSU2_TR(0x75645d);
w4(R+20,u32(s32(s8(r1(R+0)))));
}
B756460:{NFSU2_TR(0x756460);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B756463:{NFSU2_TR(0x756463);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B756465:{NFSU2_TR(0x756465);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B756467:{NFSU2_TR(0x756467);
if(r1(R+518)){{goto L7564c3;}}
}
B756469:L756469:{c.instructions+=2;NFSU2_TR(0x756469);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75646b:{NFSU2_TR(0x75646b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756440u);}goto L756440;}}
}
B75646d:L75646d:{c.instructions+=4;NFSU2_TR(0x75646d);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B756471:{NFSU2_TR(0x756471);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B756474:{NFSU2_TR(0x756474);
__builtin_memmove((R+4),(R+0),4);
}
B756476:{NFSU2_TR(0x756476);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B756478:L756478:{c.instructions+=5;NFSU2_TR(0x756478);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B75647a:{NFSU2_TR(0x75647a);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B75647d:{NFSU2_TR(0x75647d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75647e:{NFSU2_TR(0x75647e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B756480:{NFSU2_TR(0x756480);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756478u);}goto L756478;}}
}
B756482:L756482:{c.instructions+=8;NFSU2_TR(0x756482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B756484:{NFSU2_TR(0x756484);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756486:{NFSU2_TR(0x756486);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756488:{NFSU2_TR(0x756488);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75648c:{NFSU2_TR(0x75648c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75648d:{NFSU2_TR(0x75648d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75648e:{NFSU2_TR(0x75648e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75648f:{NFSU2_TR(0x75648f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756494ull));
TAIL_STATIC(0x759750u,759);
}
B756494:L756494:{c.instructions+=2;NFSU2_TR(0x756494);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B756497:{NFSU2_TR(0x756497);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7564a1:L7564a1:{c.instructions+=2;NFSU2_TR(0x7564a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7564a2:{NFSU2_TR(0x7564a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7564a7ull));
TAIL_STATIC(0x7555c0u,755);
}
B7564a7:L7564a7:{c.instructions+=8;NFSU2_TR(0x7564a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7564ae:{NFSU2_TR(0x7564ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7564b1:{NFSU2_TR(0x7564b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7564b2:{NFSU2_TR(0x7564b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7564b3:{NFSU2_TR(0x7564b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7564b4:{NFSU2_TR(0x7564b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7564b6:{NFSU2_TR(0x7564b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7564b7:{NFSU2_TR(0x7564b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7564bcull));
TAIL_STATIC(0x76115eu,761);
}
B7564bc:L7564bc:{c.instructions+=2;NFSU2_TR(0x7564bc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x244ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x244ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x244ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7564c2:{NFSU2_TR(0x7564c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7564c3:L7564c3:{c.instructions+=2;NFSU2_TR(0x7564c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7564c5:{NFSU2_TR(0x7564c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75646du);}goto L75646d;}}
}
B7564c7:L7564c7:{c.instructions+=2;NFSU2_TR(0x7564c7);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7564cd:{NFSU2_TR(0x7564cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75646du);}goto L75646d;}}
}
B7564cf:L7564cf:{c.instructions+=2;NFSU2_TR(0x7564cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7564d9:{NFSU2_TR(0x7564d9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7564a1u);}goto L7564a1;}
}
B7564e0:L7564e0:{c.instructions+=8;NFSU2_TR(0x7564e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7564e1:{NFSU2_TR(0x7564e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7564e2:{NFSU2_TR(0x7564e2);
__builtin_memmove((R+12),(R+0),4);
}
B7564e4:{NFSU2_TR(0x7564e4);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B7564e7:{NFSU2_TR(0x7564e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7564e8:{NFSU2_TR(0x7564e8);
__builtin_memmove((R+28),(R+4),4);
}
B7564ea:{NFSU2_TR(0x7564ea);
__builtin_memmove((R+24),(R+8),4);
}
B7564ec:{NFSU2_TR(0x7564ec);
if(r1(R+519)){{goto L7565a4;}}
}
B7564f2:L7564f2:{c.instructions+=2;NFSU2_TR(0x7564f2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x400ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7564f8:{NFSU2_TR(0x7564f8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7565a4;}}
}
B7564fe:L7564fe:{c.instructions+=2;NFSU2_TR(0x7564fe);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x67535073ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x67535073ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x67535073ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B756505:{NFSU2_TR(0x756505);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7565a4;}}
}
B75650b:L75650b:{c.instructions+=3;NFSU2_TR(0x75650b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75650e:{NFSU2_TR(0x75650e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75650f:{NFSU2_TR(0x75650f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756514ull));
TAIL_STATIC(0x5832f0u,583);
}
B756514:L756514:{c.instructions+=3;NFSU2_TR(0x756514);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B756517:{NFSU2_TR(0x756517);
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
B756519:{NFSU2_TR(0x756519);
if(r1(R+518)){{goto L7565a6;}}
}
B75651f:L75651f:{c.instructions+=36;NFSU2_TR(0x75651f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B756521:{NFSU2_TR(0x756521);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B756527:{NFSU2_TR(0x756527);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B75652a:{NFSU2_TR(0x75652a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B75652e:{NFSU2_TR(0x75652e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
}
B756531:{NFSU2_TR(0x756531);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B756534:{NFSU2_TR(0x756534);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B756537:{NFSU2_TR(0x756537);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B756539:{NFSU2_TR(0x756539);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffebull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B75653d:{NFSU2_TR(0x75653d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B756540:{NFSU2_TR(0x756540);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B756542:{NFSU2_TR(0x756542);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756545:{NFSU2_TR(0x756545);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B756549:{NFSU2_TR(0x756549);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B75654b:{NFSU2_TR(0x75654b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B75654e:{NFSU2_TR(0x75654e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B756551:{NFSU2_TR(0x756551);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B756554:{NFSU2_TR(0x756554);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B756556:{NFSU2_TR(0x756556);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B75655a:{NFSU2_TR(0x75655a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75655d:{NFSU2_TR(0x75655d);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B75655f:{NFSU2_TR(0x75655f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B756562:{NFSU2_TR(0x756562);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B756564:{NFSU2_TR(0x756564);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756567:{NFSU2_TR(0x756567);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B756569:{NFSU2_TR(0x756569);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B75656c:{NFSU2_TR(0x75656c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75656f:{NFSU2_TR(0x75656f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B756572:{NFSU2_TR(0x756572);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756575:{NFSU2_TR(0x756575);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756578:{NFSU2_TR(0x756578);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B75657b:{NFSU2_TR(0x75657b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75657e:{NFSU2_TR(0x75657e);
__builtin_memmove((R+4),(R+12),4);
}
B756580:{NFSU2_TR(0x756580);
__builtin_memmove((R+8),(R+4),4);
}
B756582:{NFSU2_TR(0x756582);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B756585:{NFSU2_TR(0x756585);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B756589:L756589:{c.instructions+=1;NFSU2_TR(0x756589);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75658b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756589u);}goto L756589;}
}
B75658b:L75658b:{c.instructions+=2;NFSU2_TR(0x75658b);
__builtin_memmove((R+4),(R+8),4);
}
B75658d:{NFSU2_TR(0x75658d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B756590:L756590:{c.instructions+=1;NFSU2_TR(0x756590);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L756592;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756590u);}goto L756590;}
}
B756592:L756592:{c.instructions+=3;NFSU2_TR(0x756592);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B756595:{NFSU2_TR(0x756595);
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
B756597:{NFSU2_TR(0x756597);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7565a6;}}
}
B756599:L756599:{c.instructions+=5;NFSU2_TR(0x756599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75659a:{NFSU2_TR(0x75659a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75659b:{NFSU2_TR(0x75659b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7565a2:{NFSU2_TR(0x7565a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7565a3:{NFSU2_TR(0x7565a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7565a4:L7565a4:{c.instructions+=1;NFSU2_TR(0x7565a4);
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
B7565a6:L7565a6:{c.instructions+=4;NFSU2_TR(0x7565a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7565a7:{NFSU2_TR(0x7565a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7565a8:{NFSU2_TR(0x7565a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7565a9:{NFSU2_TR(0x7565a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7565b0:L7565b0:{c.instructions+=19;NFSU2_TR(0x7565b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x43cull))));
}
B7565b6:{NFSU2_TR(0x7565b6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7565bb:{NFSU2_TR(0x7565bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7565bc:{NFSU2_TR(0x7565bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7565bd:{NFSU2_TR(0x7565bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x450ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7565c4:{NFSU2_TR(0x7565c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x440ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7565cb:{NFSU2_TR(0x7565cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7565cf:{NFSU2_TR(0x7565cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7565d0:{NFSU2_TR(0x7565d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7565d2:{NFSU2_TR(0x7565d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7565d6:{NFSU2_TR(0x7565d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7565d7:{NFSU2_TR(0x7565d7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7565d9:{NFSU2_TR(0x7565d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7565da:{NFSU2_TR(0x7565da);
u8 U[4];
w4(U+0,u32(0x424ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7565df:{NFSU2_TR(0x7565df);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7565e3:{NFSU2_TR(0x7565e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7565e4:{NFSU2_TR(0x7565e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7565e5:{NFSU2_TR(0x7565e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7565ed:{NFSU2_TR(0x7565ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7565f2ull));
TAIL_STATIC(0x74a6d0u,74a);
}
B7565f2:L7565f2:{c.instructions+=4;NFSU2_TR(0x7565f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B7565f5:{NFSU2_TR(0x7565f5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7565f7:{NFSU2_TR(0x7565f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7565fb:{NFSU2_TR(0x7565fb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7566f4;}}
}
B756601:L756601:{c.instructions+=2;NFSU2_TR(0x756601);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756602:{NFSU2_TR(0x756602);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756603:L756603:{c.instructions+=2;NFSU2_TR(0x756603);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B756607:{NFSU2_TR(0x756607);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7566be;}}
}
B75660d:L75660d:{c.instructions+=3;NFSU2_TR(0x75660d);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B756611:{NFSU2_TR(0x756611);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B756613:{NFSU2_TR(0x756613);
if(r1(R+518)){{goto L75667b;}}
}
B756615:L756615:{c.instructions+=2;NFSU2_TR(0x756615);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xbull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B756618:{NFSU2_TR(0x756618);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7566be;}}
}
B75661e:L75661e:{c.instructions+=3;NFSU2_TR(0x75661e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x18ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B756621:{NFSU2_TR(0x756621);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756622:{NFSU2_TR(0x756622);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756627ull));
TAIL_STATIC(0x5832f0u,583);
}
B756627:L756627:{c.instructions+=3;NFSU2_TR(0x756627);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75662a:{NFSU2_TR(0x75662a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75662c:{NFSU2_TR(0x75662c);
if(r1(R+518)){{goto L756688;}}
}
B75662e:L75662e:{c.instructions+=23;NFSU2_TR(0x75662e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B756630:{NFSU2_TR(0x756630);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B756635:{NFSU2_TR(0x756635);
u8 U[5];
w4(U+0,u32(u32(u32(0x31ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B75663a:{NFSU2_TR(0x75663a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75663d:{NFSU2_TR(0x75663d);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B75663f:{NFSU2_TR(0x75663f);
u8 U[5];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B756644:{NFSU2_TR(0x756644);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B756647:{NFSU2_TR(0x756647);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B756649:{NFSU2_TR(0x756649);
u8 U[5];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B75664e:{NFSU2_TR(0x75664e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B756651:{NFSU2_TR(0x756651);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B756653:{NFSU2_TR(0x756653);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756656:{NFSU2_TR(0x756656);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756659:{NFSU2_TR(0x756659);
u8 U[5];
w4(U+0,u32(u32(u32(0x3eull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B75665e:{NFSU2_TR(0x75665e);
u8 U[5];
w4(U+0,u32(u32(u32(0x3full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B756663:{NFSU2_TR(0x756663);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B756666:{NFSU2_TR(0x756666);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B756668:{NFSU2_TR(0x756668);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75666b:{NFSU2_TR(0x75666b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75666e:{NFSU2_TR(0x75666e);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B756672:{NFSU2_TR(0x756672);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B756675:{NFSU2_TR(0x756675);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0xbull));
s1(u32(r4(U+0)),r1(U+4));
}
B756679:{NFSU2_TR(0x756679);
{goto L756688;}
}
B75667b:L75667b:{c.instructions+=3;NFSU2_TR(0x75667b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75667f:{NFSU2_TR(0x75667f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B756683:{NFSU2_TR(0x756683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756688ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7564e0u);}goto L7564e0;}
}
B756688:L756688:{c.instructions+=3;NFSU2_TR(0x756688);
__builtin_memmove((R+20),(R+0),4);
}
B75668a:{NFSU2_TR(0x75668a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75668c:{NFSU2_TR(0x75668c);
if(r1(R+518)){{goto L7566be;}}
}
B75668e:L75668e:{c.instructions+=3;NFSU2_TR(0x75668e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B756691:{NFSU2_TR(0x756691);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756692:{NFSU2_TR(0x756692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756697ull));
TAIL_STATIC(0x74b7e0u,74b);
}
B756697:L756697:{c.instructions+=5;NFSU2_TR(0x756697);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75669a:{NFSU2_TR(0x75669a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75669d:{NFSU2_TR(0x75669d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7566a0:{NFSU2_TR(0x7566a0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7566a2:{NFSU2_TR(0x7566a2);
if(r1(R+518)){{goto L7566ac;}}
}
B7566a4:L7566a4:{c.instructions+=4;NFSU2_TR(0x7566a4);
__builtin_memmove((R+4),(R+0),4);
}
B7566a6:{NFSU2_TR(0x7566a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7566a8:{NFSU2_TR(0x7566a8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7566aa:{NFSU2_TR(0x7566aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7566a4u);}goto L7566a4;}}
}
B7566ac:L7566ac:{c.instructions+=6;NFSU2_TR(0x7566ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+4)),r4(U+0));
}
B7566ae:{NFSU2_TR(0x7566ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7566b1:{NFSU2_TR(0x7566b1);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B7566b2:{NFSU2_TR(0x7566b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7566b3:{NFSU2_TR(0x7566b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7566b6:{NFSU2_TR(0x7566b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7566bbull));
TAIL_STATIC(0x74b870u,74b);
}
B7566bb:L7566bb:{c.instructions+=1;NFSU2_TR(0x7566bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7566be:L7566be:{c.instructions+=12;NFSU2_TR(0x7566be);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7566c2:{NFSU2_TR(0x7566c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7566c3:{NFSU2_TR(0x7566c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7566c5:{NFSU2_TR(0x7566c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7566c9:{NFSU2_TR(0x7566c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7566ca:{NFSU2_TR(0x7566ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7566cb:{NFSU2_TR(0x7566cb);
u8 U[4];
w4(U+0,u32(0x424ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7566d0:{NFSU2_TR(0x7566d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7566d4:{NFSU2_TR(0x7566d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7566d5:{NFSU2_TR(0x7566d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7566d6:{NFSU2_TR(0x7566d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7566de:{NFSU2_TR(0x7566de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7566e3ull));
TAIL_STATIC(0x74a6d0u,74a);
}
B7566e3:L7566e3:{c.instructions+=4;NFSU2_TR(0x7566e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B7566e6:{NFSU2_TR(0x7566e6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7566e8:{NFSU2_TR(0x7566e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7566ec:{NFSU2_TR(0x7566ec);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756603u);}goto L756603;}}
}
B7566f2:L7566f2:{c.instructions+=2;NFSU2_TR(0x7566f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7566f3:{NFSU2_TR(0x7566f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7566f4:L7566f4:{c.instructions+=5;NFSU2_TR(0x7566f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x440ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7566fb:{NFSU2_TR(0x7566fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7566fc:{NFSU2_TR(0x7566fc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7566fe:{NFSU2_TR(0x7566fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7566ff:{NFSU2_TR(0x7566ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756704ull));
TAIL_STATIC(0x76115eu,761);
}
B756704:L756704:{c.instructions+=2;NFSU2_TR(0x756704);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x43cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x43cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x43cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75670a:{NFSU2_TR(0x75670a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B756710:L756710:{c.instructions+=11;NFSU2_TR(0x756710);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756711:{NFSU2_TR(0x756711);
__builtin_memmove((R+20),(R+16),4);
}
B756713:{NFSU2_TR(0x756713);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B756716:{NFSU2_TR(0x756716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x448ull))));
}
B75671c:{NFSU2_TR(0x75671c);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B756721:{NFSU2_TR(0x756721);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B756723:{NFSU2_TR(0x756723);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B756725:{NFSU2_TR(0x756725);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756726:{NFSU2_TR(0x756726);
u8 U[8];
w4(U+0,u32(u32(u32(0x448ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75672d:{NFSU2_TR(0x75672d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75672e:{NFSU2_TR(0x75672e);
if(r1(R+518)){{goto L7568bd;}}
}
B756734:L756734:{c.instructions+=2;NFSU2_TR(0x756734);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B756737:{NFSU2_TR(0x756737);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75674d;}}
}
B756739:L756739:{c.instructions+=3;NFSU2_TR(0x756739);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75673c:{NFSU2_TR(0x75673c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75673f:{NFSU2_TR(0x75673f);
}
B756740:L756740:{c.instructions+=4;NFSU2_TR(0x756740);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B756742:{NFSU2_TR(0x756742);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B756743:{NFSU2_TR(0x756743);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B756745:{NFSU2_TR(0x756745);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756740u);}goto L756740;}}
}
B756747:L756747:{c.instructions+=3;NFSU2_TR(0x756747);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B756749:{NFSU2_TR(0x756749);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75674a:{NFSU2_TR(0x75674a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75674d:L75674d:{c.instructions+=16;NFSU2_TR(0x75674d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B756750:{NFSU2_TR(0x756750);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756754:{NFSU2_TR(0x756754);
__builtin_memmove((R+0),(R+8),4);
}
B756756:{NFSU2_TR(0x756756);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B756759:{NFSU2_TR(0x756759);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75675d:{NFSU2_TR(0x75675d);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B756761:{NFSU2_TR(0x756761);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B756764:{NFSU2_TR(0x756764);
u8 U[5];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B756768:{NFSU2_TR(0x756768);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75676b:{NFSU2_TR(0x75676b);
u8 U[6];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B756770:{NFSU2_TR(0x756770);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756774:{NFSU2_TR(0x756774);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756778:{NFSU2_TR(0x756778);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75677c:{NFSU2_TR(0x75677c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75677e:{NFSU2_TR(0x75677e);
w4(R+4,u32(0x109ull));
}
B756783:{NFSU2_TR(0x756783);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B756787:L756787:{c.instructions+=1;NFSU2_TR(0x756787);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L756789;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756787u);}goto L756787;}
}
B756789:L756789:{c.instructions+=30;NFSU2_TR(0x756789);
__builtin_memmove((R+0),(R+8),4);
}
B75678b:{NFSU2_TR(0x75678b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75678e:{NFSU2_TR(0x75678e);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B756792:{NFSU2_TR(0x756792);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B756796:{NFSU2_TR(0x756796);
__builtin_memmove((R+4),(R+8),4);
}
B756798:{NFSU2_TR(0x756798);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75679b:{NFSU2_TR(0x75679b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75679c:{NFSU2_TR(0x75679c);
u8 U[5];
w4(U+0,u32(u32(u32(0x31ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7567a0:{NFSU2_TR(0x7567a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7567a3:{NFSU2_TR(0x7567a3);
u8 U[5];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7567a7:{NFSU2_TR(0x7567a7);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7567ab:{NFSU2_TR(0x7567ab);
__builtin_memmove((R+0),(R+24),4);
}
B7567ad:{NFSU2_TR(0x7567ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B7567b0:{NFSU2_TR(0x7567b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7567b3:{NFSU2_TR(0x7567b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7567b6:{NFSU2_TR(0x7567b6);
u8 U[5];
w4(U+0,u32(u32(u32(0x3aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7567ba:{NFSU2_TR(0x7567ba);
u8 U[5];
w4(U+0,u32(u32(u32(0x3bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7567be:{NFSU2_TR(0x7567be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7567c1:{NFSU2_TR(0x7567c1);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7567c5:{NFSU2_TR(0x7567c5);
u8 U[5];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7567c9:{NFSU2_TR(0x7567c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7567cc:{NFSU2_TR(0x7567cc);
w4(R+0,u32(0x400ull));
}
B7567d1:{NFSU2_TR(0x7567d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7567d3:{NFSU2_TR(0x7567d3);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B7567da:{NFSU2_TR(0x7567da);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x45ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7567df:{NFSU2_TR(0x7567df);
u8 U[5];
w4(U+0,u32(u32(u32(0x29ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7567e4:{NFSU2_TR(0x7567e4);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w1(U+4,u8(0x8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7567e9:{NFSU2_TR(0x7567e9);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7567ed:{NFSU2_TR(0x7567ed);
u8 U[5];
w4(U+0,u32(u32(u32(0x39ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7567f2:{NFSU2_TR(0x7567f2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7567f7;}}
}
B7567f4:L7567f4:{c.instructions+=1;NFSU2_TR(0x7567f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7567f7:L7567f7:{c.instructions+=5;NFSU2_TR(0x7567f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7567fa:{NFSU2_TR(0x7567fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7567fd:{NFSU2_TR(0x7567fd);
__builtin_memmove((R+8),(R+4),4);
}
B7567ff:{NFSU2_TR(0x7567ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B756802:{NFSU2_TR(0x756802);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B756806:L756806:{c.instructions+=1;NFSU2_TR(0x756806);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L756808;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756806u);}goto L756806;}
}
B756808:L756808:{c.instructions+=2;NFSU2_TR(0x756808);
__builtin_memmove((R+4),(R+8),4);
}
B75680a:{NFSU2_TR(0x75680a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75680d:L75680d:{c.instructions+=1;NFSU2_TR(0x75680d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L75680f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75680du);}goto L75680d;}
}
B75680f:L75680f:{c.instructions+=6;NFSU2_TR(0x75680f);
__builtin_memmove((R+24),(R+8),4);
}
B756811:{NFSU2_TR(0x756811);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B756814:{NFSU2_TR(0x756814);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7ffcull))));
}
B75681a:{NFSU2_TR(0x75681a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x24ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75681d:{NFSU2_TR(0x75681d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x67535073ull));
s4(u32(r4(U+0)),r4(U+4));
}
B756825:{NFSU2_TR(0x756825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75682aull));
TAIL_STATIC(0x74b730u,74b);
}
B75682a:L75682a:{c.instructions+=6;NFSU2_TR(0x75682a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B75682d:{NFSU2_TR(0x75682d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B75682f:{NFSU2_TR(0x75682f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B756832:{NFSU2_TR(0x756832);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756836:{NFSU2_TR(0x756836);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75683a:{NFSU2_TR(0x75683a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75686b;}}
}
B75683c:L75683c:{c.instructions+=7;NFSU2_TR(0x75683c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+28),(U+0),4);
}
B75683f:{NFSU2_TR(0x75683f);
w4(R+28,shr<u32>(r4(R+28),u64(u32(0x1ull))));
}
B756841:{NFSU2_TR(0x756841);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B756842:{NFSU2_TR(0x756842);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756846:{NFSU2_TR(0x756846);
w4(R+28,u32(0-u32(r4(R+28))));
}
B756848:{NFSU2_TR(0x756848);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B75684b:{NFSU2_TR(0x75684b);
{goto L756850;}
}
B756850:L756850:{c.instructions+=11;NFSU2_TR(0x756850);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+28,u32(r1(U+0)));
}
B756853:{NFSU2_TR(0x756853);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B756856:{NFSU2_TR(0x756856);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B756858:{NFSU2_TR(0x756858);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B75685c:{NFSU2_TR(0x75685c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75685d:{NFSU2_TR(0x75685d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B75685f:{NFSU2_TR(0x75685f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B756863:{NFSU2_TR(0x756863);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B756864:{NFSU2_TR(0x756864);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B756865:{NFSU2_TR(0x756865);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756869:{NFSU2_TR(0x756869);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756850u);}goto L756850;}}
}
B75686b:L75686b:{c.instructions+=2;NFSU2_TR(0x75686b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75686d:{NFSU2_TR(0x75686d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L756877;}}
}
B75686f:L75686f:{c.instructions+=3;NFSU2_TR(0x75686f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B756872:{NFSU2_TR(0x756872);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B756875:{NFSU2_TR(0x756875);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B756877:L756877:{c.instructions+=23;NFSU2_TR(0x756877);
__builtin_memmove((R+0),(R+4),4);
}
B756879:{NFSU2_TR(0x756879);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
}
B75687f:{NFSU2_TR(0x75687f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B756882:{NFSU2_TR(0x756882);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B756884:{NFSU2_TR(0x756884);
__builtin_memmove((R+4),(R+0),4);
}
B756886:{NFSU2_TR(0x756886);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B756889:{NFSU2_TR(0x756889);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B75688e:{NFSU2_TR(0x75688e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B756890:{NFSU2_TR(0x756890);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756892:{NFSU2_TR(0x756892);
w4(R+4,u32(~u32(r4(R+4))));
}
B756894:{NFSU2_TR(0x756894);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B756898:{NFSU2_TR(0x756898);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756899:{NFSU2_TR(0x756899);
__builtin_memmove((R+8),(R+4),4);
}
B75689b:{NFSU2_TR(0x75689b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75689d:{NFSU2_TR(0x75689d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B7568a0:{NFSU2_TR(0x7568a0);
u8 U[5];
w4(U+0,u32(u32(u32(0x43ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7568a4:{NFSU2_TR(0x7568a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7568a5:{NFSU2_TR(0x7568a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7568a9:{NFSU2_TR(0x7568a9);
u8 U[5];
w4(U+0,u32(u32(u32(0x46ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7568ad:{NFSU2_TR(0x7568ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7568af:{NFSU2_TR(0x7568af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7568b0:{NFSU2_TR(0x7568b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7568b1:{NFSU2_TR(0x7568b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7568b6ull));
TAIL_STATIC(0x74a5c0u,74a);
}
B7568b6:L7568b6:{c.instructions+=3;NFSU2_TR(0x7568b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B7568b9:{NFSU2_TR(0x7568b9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7568bb:{NFSU2_TR(0x7568bb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7568d2;}}
}
B7568bd:L7568bd:{c.instructions+=3;NFSU2_TR(0x7568bd);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B7568c0:{NFSU2_TR(0x7568c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x44cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7568c7:{NFSU2_TR(0x7568c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7568ccull));
TAIL_STATIC(0x76115eu,761);
}
B7568cc:L7568cc:{c.instructions+=5;NFSU2_TR(0x7568cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7568cd:{NFSU2_TR(0x7568cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7568ce:{NFSU2_TR(0x7568ce);
__builtin_memmove((R+16),(R+20),4);
}
B7568d0:{NFSU2_TR(0x7568d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7568d1:{NFSU2_TR(0x7568d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7568d2:L7568d2:{c.instructions+=3;NFSU2_TR(0x7568d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x44cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7568d9:{NFSU2_TR(0x7568d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7568dc:{NFSU2_TR(0x7568dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7568e1ull));
TAIL_STATIC(0x76115eu,761);
}
B7568e1:L7568e1:{c.instructions+=5;NFSU2_TR(0x7568e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7568e2:{NFSU2_TR(0x7568e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7568e3:{NFSU2_TR(0x7568e3);
__builtin_memmove((R+16),(R+20),4);
}
B7568e5:{NFSU2_TR(0x7568e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7568e6:{NFSU2_TR(0x7568e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7568f0:L7568f0:{c.instructions+=10;NFSU2_TR(0x7568f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B7568f3:{NFSU2_TR(0x7568f3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7568f8:{NFSU2_TR(0x7568f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7568f9:{NFSU2_TR(0x7568f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7568fa:{NFSU2_TR(0x7568fa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7568fc:{NFSU2_TR(0x7568fc);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7568fe:{NFSU2_TR(0x7568fe);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756900:{NFSU2_TR(0x756900);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756904:{NFSU2_TR(0x756904);
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
B756906:{NFSU2_TR(0x756906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75690bull));
TAIL_STATIC(0x74a220u,74a);
}
B75690b:L75690b:{c.instructions+=4;NFSU2_TR(0x75690b);
__builtin_memmove((R+20),(R+0),4);
}
B75690d:{NFSU2_TR(0x75690d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B756910:{NFSU2_TR(0x756910);
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
B756912:{NFSU2_TR(0x756912);
if(r1(R+518)){{goto L7569c0;}}
}
B756918:L756918:{c.instructions+=13;NFSU2_TR(0x756918);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756919:{NFSU2_TR(0x756919);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75691b:{NFSU2_TR(0x75691b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75691f:{NFSU2_TR(0x75691f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756920:{NFSU2_TR(0x756920);
u8 U[6];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B756925:{NFSU2_TR(0x756925);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756926:{NFSU2_TR(0x756926);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B75692d:{NFSU2_TR(0x75692d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756931:{NFSU2_TR(0x756931);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756935:{NFSU2_TR(0x756935);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756939:{NFSU2_TR(0x756939);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75693d:{NFSU2_TR(0x75693d);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B756942:{NFSU2_TR(0x756942);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756947ull));
TAIL_STATIC(0x74a380u,74a);
}
B756947:L756947:{c.instructions+=2;NFSU2_TR(0x756947);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756949:{NFSU2_TR(0x756949);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75694eull));
TAIL_STATIC(0x5832f0u,583);
}
B75694e:L75694e:{c.instructions+=4;NFSU2_TR(0x75694e);
__builtin_memmove((R+24),(R+0),4);
}
B756950:{NFSU2_TR(0x756950);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B756953:{NFSU2_TR(0x756953);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B756955:{NFSU2_TR(0x756955);
if(r1(R+518)){{goto L7569ae;}}
}
B756957:L756957:{c.instructions+=4;NFSU2_TR(0x756957);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756958:{NFSU2_TR(0x756958);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75695a:{NFSU2_TR(0x75695a);
w4(R+4,u32(0xfull));
}
B75695f:{NFSU2_TR(0x75695f);
__builtin_memmove((R+28),(R+24),4);
}
B756961:L756961:{c.instructions+=1;NFSU2_TR(0x756961);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L756963;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756961u);}goto L756961;}
}
B756963:L756963:{c.instructions+=7;NFSU2_TR(0x756963);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B756966:{NFSU2_TR(0x756966);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756967:{NFSU2_TR(0x756967);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B756969:{NFSU2_TR(0x756969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B756970:{NFSU2_TR(0x756970);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B756977:{NFSU2_TR(0x756977);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75697e:{NFSU2_TR(0x75697e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756983ull));
TAIL_STATIC(0x74b740u,74b);
}
B756983:L756983:{c.instructions+=7;NFSU2_TR(0x756983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B756985:{NFSU2_TR(0x756985);
u8 U[4];
w4(U+0,u32(0x7565b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75698a:{NFSU2_TR(0x75698a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75698b:{NFSU2_TR(0x75698b);
u8 U[4];
w4(U+0,u32(0x1388ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756990:{NFSU2_TR(0x756990);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756992:{NFSU2_TR(0x756992);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756993:{NFSU2_TR(0x756993);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756998ull));
TAIL_STATIC(0x74a960u,74a);
}
B756998:L756998:{c.instructions+=8;NFSU2_TR(0x756998);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B75699b:{NFSU2_TR(0x75699b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75699c:{NFSU2_TR(0x75699c);
__builtin_memmove((R+0),(R+24),4);
}
B75699e:{NFSU2_TR(0x75699e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75699f:{NFSU2_TR(0x75699f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7569a0:{NFSU2_TR(0x7569a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7569a1:{NFSU2_TR(0x7569a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7569a5:{NFSU2_TR(0x7569a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7569aaull));
TAIL_STATIC(0x76115eu,761);
}
B7569aa:L7569aa:{c.instructions+=2;NFSU2_TR(0x7569aa);
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
B7569ad:{NFSU2_TR(0x7569ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7569ae:L7569ae:{c.instructions+=6;NFSU2_TR(0x7569ae);
__builtin_memmove((R+0),(R+24),4);
}
B7569b0:{NFSU2_TR(0x7569b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7569b1:{NFSU2_TR(0x7569b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7569b2:{NFSU2_TR(0x7569b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7569b3:{NFSU2_TR(0x7569b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7569b7:{NFSU2_TR(0x7569b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7569bcull));
TAIL_STATIC(0x76115eu,761);
}
B7569bc:L7569bc:{c.instructions+=2;NFSU2_TR(0x7569bc);
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
B7569bf:{NFSU2_TR(0x7569bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7569c0:L7569c0:{c.instructions+=5;NFSU2_TR(0x7569c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7569c4:{NFSU2_TR(0x7569c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7569c5:{NFSU2_TR(0x7569c5);
__builtin_memmove((R+0),(R+12),4);
}
B7569c7:{NFSU2_TR(0x7569c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7569c8:{NFSU2_TR(0x7569c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7569cdull));
TAIL_STATIC(0x76115eu,761);
}
B7569cd:L7569cd:{c.instructions+=2;NFSU2_TR(0x7569cd);
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
B7569d0:{NFSU2_TR(0x7569d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7569e0:L7569e0:{c.instructions+=4;NFSU2_TR(0x7569e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7569e1:{NFSU2_TR(0x7569e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7569e5:{NFSU2_TR(0x7569e5);
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
B7569e7:{NFSU2_TR(0x7569e7);
if(r1(R+518)){{goto L756a2a;}}
}
B7569e9:L7569e9:{c.instructions+=3;NFSU2_TR(0x7569e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7569eb:{NFSU2_TR(0x7569eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7569ec:{NFSU2_TR(0x7569ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7569f1ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B7569f1:L7569f1:{c.instructions+=4;NFSU2_TR(0x7569f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7569f4:{NFSU2_TR(0x7569f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7569f7:{NFSU2_TR(0x7569f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7569f9:{NFSU2_TR(0x7569f9);
if(r1(R+518)){{goto L756a18;}}
}
B7569fb:L7569fb:{c.instructions+=1;NFSU2_TR(0x7569fb);
{goto L756a00;}
}
B756a00:L756a00:{c.instructions+=5;NFSU2_TR(0x756a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756a03:{NFSU2_TR(0x756a03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B756a05:{NFSU2_TR(0x756a05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a06:{NFSU2_TR(0x756a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756a09:{NFSU2_TR(0x756a09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756a0eull));
TAIL_STATIC(0x598ec0u,598);
}
B756a0e:L756a0e:{c.instructions+=4;NFSU2_TR(0x756a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756a11:{NFSU2_TR(0x756a11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B756a14:{NFSU2_TR(0x756a14);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B756a16:{NFSU2_TR(0x756a16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756a00u);}goto L756a00;}}
}
B756a18:L756a18:{c.instructions+=3;NFSU2_TR(0x756a18);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B756a1b:{NFSU2_TR(0x756a1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a1c:{NFSU2_TR(0x756a1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756a21ull));
TAIL_STATIC(0x74b770u,74b);
}
B756a21:L756a21:{c.instructions+=2;NFSU2_TR(0x756a21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a22:{NFSU2_TR(0x756a22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756a27ull));
TAIL_STATIC(0x598ec0u,598);
}
B756a27:L756a27:{c.instructions+=1;NFSU2_TR(0x756a27);
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
B756a2a:L756a2a:{c.instructions+=2;NFSU2_TR(0x756a2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B756a2b:{NFSU2_TR(0x756a2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B756a30:L756a30:{c.instructions+=8;NFSU2_TR(0x756a30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a31:{NFSU2_TR(0x756a31);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756a35:{NFSU2_TR(0x756a35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a36:{NFSU2_TR(0x756a36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a37:{NFSU2_TR(0x756a37);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B756a3b:{NFSU2_TR(0x756a3b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a3d:{NFSU2_TR(0x756a3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a3e:{NFSU2_TR(0x756a3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756a43ull));
TAIL_STATIC(0x742e30u,742);
}
B756a43:L756a43:{c.instructions+=8;NFSU2_TR(0x756a43);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B756a47:{NFSU2_TR(0x756a47);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756a4b:{NFSU2_TR(0x756a4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B756a4f:{NFSU2_TR(0x756a4f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a51:{NFSU2_TR(0x756a51);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a52:{NFSU2_TR(0x756a52);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B756a56:{NFSU2_TR(0x756a56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a57:{NFSU2_TR(0x756a57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756a5cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756710u);}goto L756710;}
}
B756a5c:L756a5c:{c.instructions+=4;NFSU2_TR(0x756a5c);
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
B756a5f:{NFSU2_TR(0x756a5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B756a60:{NFSU2_TR(0x756a60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B756a61:{NFSU2_TR(0x756a61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B756a70:L756a70:{c.instructions+=9;NFSU2_TR(0x756a70);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756a74:{NFSU2_TR(0x756a74);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B756a78:{NFSU2_TR(0x756a78);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B756a7c:{NFSU2_TR(0x756a7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a7d:{NFSU2_TR(0x756a7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B756a81:{NFSU2_TR(0x756a81);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a83:{NFSU2_TR(0x756a83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a84:{NFSU2_TR(0x756a84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a85:{NFSU2_TR(0x756a85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756a8aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756710u);}goto L756710;}
}
B756a8a:L756a8a:{c.instructions+=3;NFSU2_TR(0x756a8a);
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
B756a8d:{NFSU2_TR(0x756a8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B756a8e:{NFSU2_TR(0x756a8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B756a90:L756a90:{c.instructions+=11;NFSU2_TR(0x756a90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a91:{NFSU2_TR(0x756a91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a92:{NFSU2_TR(0x756a92);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a93:{NFSU2_TR(0x756a93);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B756a97:{NFSU2_TR(0x756a97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B756a9a:{NFSU2_TR(0x756a9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a9b:{NFSU2_TR(0x756a9b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a9c:{NFSU2_TR(0x756a9c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B756a9e:{NFSU2_TR(0x756a9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756a9f:{NFSU2_TR(0x756a9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756aa0:{NFSU2_TR(0x756aa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756aa5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7565b0u);}goto L7565b0;}
}
B756aa5:L756aa5:{c.instructions+=4;NFSU2_TR(0x756aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B756aa8:{NFSU2_TR(0x756aa8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B756aab:{NFSU2_TR(0x756aab);
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
B756aad:{NFSU2_TR(0x756aad);
if(r1(R+518)){{goto L756b7e;}}
}
B756ab3:L756ab3:{c.instructions+=5;NFSU2_TR(0x756ab3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B756ab6:{NFSU2_TR(0x756ab6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756ab7:{NFSU2_TR(0x756ab7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756ab8:{NFSU2_TR(0x756ab8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756abc:{NFSU2_TR(0x756abc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756ac1ull));
TAIL_STATIC(0x74b7e0u,74b);
}
B756ac1:L756ac1:{c.instructions+=6;NFSU2_TR(0x756ac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B756ac5:{NFSU2_TR(0x756ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B756ac8:{NFSU2_TR(0x756ac8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B756acb:{NFSU2_TR(0x756acb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B756acd:{NFSU2_TR(0x756acd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756ad1:{NFSU2_TR(0x756ad1);
if(r1(R+518)){{goto L756b29;}}
}
B756ad3:L756ad3:{c.instructions+=16;NFSU2_TR(0x756ad3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B756ad5:{NFSU2_TR(0x756ad5);
__builtin_memmove((R+0),(R+24),4);
}
B756ad7:{NFSU2_TR(0x756ad7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B756ad9:{NFSU2_TR(0x756ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756adc:{NFSU2_TR(0x756adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756adf:{NFSU2_TR(0x756adf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756ae2:{NFSU2_TR(0x756ae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756ae5:{NFSU2_TR(0x756ae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756ae8:{NFSU2_TR(0x756ae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756aeb:{NFSU2_TR(0x756aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756aee:{NFSU2_TR(0x756aee);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B756af1:{NFSU2_TR(0x756af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756af4:{NFSU2_TR(0x756af4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756af5:{NFSU2_TR(0x756af5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756af6:{NFSU2_TR(0x756af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756af9:{NFSU2_TR(0x756af9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756afeull));
TAIL_STATIC(0x742e60u,742);
}
B756afe:L756afe:{c.instructions+=10;NFSU2_TR(0x756afe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B756b00:{NFSU2_TR(0x756b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756b03:{NFSU2_TR(0x756b03);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B756b06:{NFSU2_TR(0x756b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756b09:{NFSU2_TR(0x756b09);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B756b0d:{NFSU2_TR(0x756b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756b10:{NFSU2_TR(0x756b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756b13:{NFSU2_TR(0x756b13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B756b16:{NFSU2_TR(0x756b16);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B756b18:{NFSU2_TR(0x756b18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756b1f;}}
}
B756b1a:L756b1a:{c.instructions+=1;NFSU2_TR(0x756b1a);
w4(R+0,u32(0x1ull));
}
B756b1f:L756b1f:{c.instructions+=3;NFSU2_TR(0x756b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756b22:{NFSU2_TR(0x756b22);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B756b26:{NFSU2_TR(0x756b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756b29:L756b29:{c.instructions+=3;NFSU2_TR(0x756b29);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756b2d:{NFSU2_TR(0x756b2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B756b2f:{NFSU2_TR(0x756b2f);
if(r1(R+518)){{goto L756b55;}}
}
B756b31:L756b31:{c.instructions+=3;NFSU2_TR(0x756b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B756b34:{NFSU2_TR(0x756b34);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+4)));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B756b36:{NFSU2_TR(0x756b36);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L756b3a;}}
}
B756b38:L756b38:{c.instructions+=1;NFSU2_TR(0x756b38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B756b3a:L756b3a:{c.instructions+=3;NFSU2_TR(0x756b3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B756b3e:{NFSU2_TR(0x756b3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B756b40:{NFSU2_TR(0x756b40);
if(r1(R+518)){{goto L756b55;}}
}
B756b42:L756b42:{c.instructions+=4;NFSU2_TR(0x756b42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B756b44:{NFSU2_TR(0x756b44);
__builtin_memmove((R+8),(R+4),4);
}
B756b46:{NFSU2_TR(0x756b46);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B756b49:{NFSU2_TR(0x756b49);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x16ull))));
__builtin_memmove((R+24),(U+0),4);
}
B756b4c:L756b4c:{c.instructions+=1;NFSU2_TR(0x756b4c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L756b4e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756b4cu);}goto L756b4c;}
}
B756b4e:L756b4e:{c.instructions+=2;NFSU2_TR(0x756b4e);
__builtin_memmove((R+4),(R+8),4);
}
B756b50:{NFSU2_TR(0x756b50);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B756b53:L756b53:{c.instructions+=1;NFSU2_TR(0x756b53);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L756b55;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756b53u);}goto L756b53;}
}
B756b55:L756b55:{c.instructions+=4;NFSU2_TR(0x756b55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B756b57:{NFSU2_TR(0x756b57);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756b58:{NFSU2_TR(0x756b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756b5b:{NFSU2_TR(0x756b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756b60ull));
TAIL_STATIC(0x598ec0u,598);
}
B756b60:L756b60:{c.instructions+=6;NFSU2_TR(0x756b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B756b63:{NFSU2_TR(0x756b63);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B756b67:{NFSU2_TR(0x756b67);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B756b68:{NFSU2_TR(0x756b68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756b69:{NFSU2_TR(0x756b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756b6c:{NFSU2_TR(0x756b6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756b71ull));
TAIL_STATIC(0x74b870u,74b);
}
B756b71:L756b71:{c.instructions+=8;NFSU2_TR(0x756b71);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756b75:{NFSU2_TR(0x756b75);
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
B756b78:{NFSU2_TR(0x756b78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B756b79:{NFSU2_TR(0x756b79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B756b7a:{NFSU2_TR(0x756b7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B756b7b:{NFSU2_TR(0x756b7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B756b7c:{NFSU2_TR(0x756b7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B756b7d:{NFSU2_TR(0x756b7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B756b7e:L756b7e:{c.instructions+=6;NFSU2_TR(0x756b7e);
__builtin_memmove((R+0),(R+24),4);
}
B756b80:{NFSU2_TR(0x756b80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B756b81:{NFSU2_TR(0x756b81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B756b82:{NFSU2_TR(0x756b82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B756b83:{NFSU2_TR(0x756b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B756b84:{NFSU2_TR(0x756b84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B756b90:L756b90:{c.instructions+=1;NFSU2_TR(0x756b90);
TAIL_STATIC(0x74aa10u,74a);
}
B756ba0:L756ba0:{c.instructions+=10;NFSU2_TR(0x756ba0);
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
B756ba2:{NFSU2_TR(0x756ba2);
w4(R+4,u32(0x65ull));
}
B756ba7:{NFSU2_TR(0x756ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756bad:{NFSU2_TR(0x756bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756bb3:{NFSU2_TR(0x756bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756bb9:{NFSU2_TR(0x756bb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756bbf:{NFSU2_TR(0x756bbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756bc5:{NFSU2_TR(0x756bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756bcb:{NFSU2_TR(0x756bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756bd1:{NFSU2_TR(0x756bd1);
u8 U[4];
__builtin_memmove((U+0),gp(0x78320c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756bd7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B756bd7:L756bd7:{c.instructions+=3;NFSU2_TR(0x756bd7);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x1388ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1388ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1388ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B756bdc:{NFSU2_TR(0x756bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1914ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756be2:{NFSU2_TR(0x756be2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B756bf0:L756bf0:{c.instructions+=8;NFSU2_TR(0x756bf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B756bf3:{NFSU2_TR(0x756bf3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756bf4:{NFSU2_TR(0x756bf4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756bf5:{NFSU2_TR(0x756bf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x104ull))));
__builtin_memmove((R+24),(U+0),4);
}
B756bfb:{NFSU2_TR(0x756bfb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756bfc:{NFSU2_TR(0x756bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x904ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B756c02:{NFSU2_TR(0x756c02);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756c06:{NFSU2_TR(0x756c06);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756c0a:L756c0a:{c.instructions+=1;NFSU2_TR(0x756c0a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756c0e:L756c0e:{c.instructions+=1;NFSU2_TR(0x756c0e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B756c10:L756c10:{c.instructions+=3;NFSU2_TR(0x756c10);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B756c12:{NFSU2_TR(0x756c12);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B756c14:{NFSU2_TR(0x756c14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756d17;}}
}
B756c1a:L756c1a:{c.instructions+=2;NFSU2_TR(0x756c1a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B756c1d:{NFSU2_TR(0x756c1d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L756d17;}}
}
B756c23:L756c23:{c.instructions+=2;NFSU2_TR(0x756c23);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x47ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B756c26:{NFSU2_TR(0x756c26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756ca4;}}
}
B756c28:L756c28:{c.instructions+=2;NFSU2_TR(0x756c28);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x53ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B756c2c:{NFSU2_TR(0x756c2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756ca4;}}
}
B756c2e:L756c2e:{c.instructions+=5;NFSU2_TR(0x756c2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B756c31:{NFSU2_TR(0x756c31);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B756c34:{NFSU2_TR(0x756c34);
w1(R+4,u8(~u32(r1(R+4))));
}
B756c36:{NFSU2_TR(0x756c36);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B756c38:{NFSU2_TR(0x756c38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756ca4;}}
}
B756c3a:L756c3a:{c.instructions+=5;NFSU2_TR(0x756c3a);
w4(R+20,u32(r1(R+0)));
}
B756c3d:{NFSU2_TR(0x756c3d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B756c40:{NFSU2_TR(0x756c40);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B756c43:{NFSU2_TR(0x756c43);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B756c45:{NFSU2_TR(0x756c45);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L756c4e;}}
}
B756c47:L756c47:{c.instructions+=2;NFSU2_TR(0x756c47);
w4(R+20,u32(0x1ull));
}
B756c4c:{NFSU2_TR(0x756c4c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756c10u);}goto L756c10;}
}
B756c4e:L756c4e:{c.instructions+=2;NFSU2_TR(0x756c4e);
u8 U[15];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B756c53:{NFSU2_TR(0x756c53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756c9c;}}
}
B756c55:L756c55:{c.instructions+=2;NFSU2_TR(0x756c55);
u8 U[15];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B756c5a:{NFSU2_TR(0x756c5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756c9c;}}
}
B756c5c:L756c5c:{c.instructions+=4;NFSU2_TR(0x756c5c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B756c5e:{NFSU2_TR(0x756c5e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B756c60:{NFSU2_TR(0x756c60);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B756c63:{NFSU2_TR(0x756c63);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L756c85;}}
}
B756c65:L756c65:{c.instructions+=2;NFSU2_TR(0x756c65);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756c69:{NFSU2_TR(0x756c69);
__builtin_memmove((R+16),(R+16),4);
}
B756c70:L756c70:{c.instructions+=8;NFSU2_TR(0x756c70);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w2(R+8,u16(r1(U+0)));
}
B756c74:{NFSU2_TR(0x756c74);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B756c77:{NFSU2_TR(0x756c77);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B756c79:{NFSU2_TR(0x756c79);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B756c7d:{NFSU2_TR(0x756c7d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B756c7e:{NFSU2_TR(0x756c7e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B756c7f:{NFSU2_TR(0x756c7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756c83:{NFSU2_TR(0x756c83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756c70u);}goto L756c70;}}
}
B756c85:L756c85:{c.instructions+=6;NFSU2_TR(0x756c85);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B756c87:{NFSU2_TR(0x756c87);
u8 U[13];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+5),(U+12),1);
}
B756c8b:{NFSU2_TR(0x756c8b);
w4(R+8,u32(r2(R+0)));
}
B756c8e:{NFSU2_TR(0x756c8e);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B756c92:{NFSU2_TR(0x756c92);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B756c94:{NFSU2_TR(0x756c94);
if(r1(R+518)){{goto L756de7;}}
}
B756c9a:L756c9a:{c.instructions+=1;NFSU2_TR(0x756c9a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B756c9c:L756c9c:{c.instructions+=2;NFSU2_TR(0x756c9c);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B756c9f:{NFSU2_TR(0x756c9f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756c0eu);}goto L756c0e;}
}
B756ca4:L756ca4:{c.instructions+=5;NFSU2_TR(0x756ca4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B756ca5:{NFSU2_TR(0x756ca5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B756ca6:{NFSU2_TR(0x756ca6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B756ca8:{NFSU2_TR(0x756ca8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756cac:{NFSU2_TR(0x756cac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L756d08;}}
}
B756cae:L756cae:{c.instructions+=1;NFSU2_TR(0x756cae);
__builtin_memmove((R+28),(R+28),4);
}
B756cb0:L756cb0:{c.instructions+=2;NFSU2_TR(0x756cb0);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x47ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B756cb3:{NFSU2_TR(0x756cb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756cd1;}}
}
B756cb5:L756cb5:{c.instructions+=2;NFSU2_TR(0x756cb5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B756cb8:{NFSU2_TR(0x756cb8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L756cc0;}}
}
B756cba:L756cba:{c.instructions+=2;NFSU2_TR(0x756cba);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x53ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B756cbe:{NFSU2_TR(0x756cbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756cd1;}}
}
B756cc0:L756cc0:{c.instructions+=2;NFSU2_TR(0x756cc0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B756cc3:{NFSU2_TR(0x756cc3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L756cea;}}
}
B756cc5:L756cc5:{c.instructions+=5;NFSU2_TR(0x756cc5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B756cc8:{NFSU2_TR(0x756cc8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B756ccb:{NFSU2_TR(0x756ccb);
w1(R+0,u8(~u32(r1(R+0))));
}
B756ccd:{NFSU2_TR(0x756ccd);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B756ccf:{NFSU2_TR(0x756ccf);
if(r1(R+518)){{goto L756cea;}}
}
B756cd1:L756cd1:{c.instructions+=4;NFSU2_TR(0x756cd1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B756cd2:{NFSU2_TR(0x756cd2);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B756cd3:{NFSU2_TR(0x756cd3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B756cd5:{NFSU2_TR(0x756cd5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756cb0u);}goto L756cb0;}}
}
B756cd7:L756cd7:{c.instructions+=5;NFSU2_TR(0x756cd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756cdb:{NFSU2_TR(0x756cdb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756cdf:{NFSU2_TR(0x756cdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756ce3:{NFSU2_TR(0x756ce3);
__builtin_memmove((R+24),(R+0),4);
}
B756ce5:{NFSU2_TR(0x756ce5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756c10u);}goto L756c10;}
}
B756cea:L756cea:{c.instructions+=3;NFSU2_TR(0x756cea);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B756cec:{NFSU2_TR(0x756cec);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756cf0:{NFSU2_TR(0x756cf0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L756d08;}}
}
B756cf2:L756cf2:{c.instructions+=4;NFSU2_TR(0x756cf2);
__builtin_memmove((R+4),(R+28),4);
}
B756cf4:{NFSU2_TR(0x756cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B756cf8:{NFSU2_TR(0x756cf8);
__builtin_memmove((R+8),(R+4),4);
}
B756cfa:{NFSU2_TR(0x756cfa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B756cfd:L756cfd:{c.instructions+=1;NFSU2_TR(0x756cfd);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L756cff;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756cfdu);}goto L756cfd;}
}
B756cff:L756cff:{c.instructions+=2;NFSU2_TR(0x756cff);
__builtin_memmove((R+4),(R+8),4);
}
B756d01:{NFSU2_TR(0x756d01);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B756d04:L756d04:{c.instructions+=1;NFSU2_TR(0x756d04);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L756d06;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756d04u);}goto L756d04;}
}
B756d06:L756d06:{c.instructions+=1;NFSU2_TR(0x756d06);
__builtin_memmove((R+28),(R+8),4);
}
B756d08:L756d08:{c.instructions+=4;NFSU2_TR(0x756d08);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756d0c:{NFSU2_TR(0x756d0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756d10:{NFSU2_TR(0x756d10);
__builtin_memmove((R+24),(R+0),4);
}
B756d12:{NFSU2_TR(0x756d12);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756c10u);}goto L756c10;}
}
B756d17:L756d17:{c.instructions+=16;NFSU2_TR(0x756d17);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((R+20),(U+0),4);
}
B756d1a:{NFSU2_TR(0x756d1a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756d1b:{NFSU2_TR(0x756d1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B756d21:{NFSU2_TR(0x756d21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756d22:{NFSU2_TR(0x756d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756d25:{NFSU2_TR(0x756d25);
w4(R+4,u32(0x800ull));
}
B756d2a:{NFSU2_TR(0x756d2a);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B756d2c:{NFSU2_TR(0x756d2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+20)),r4(U+0));
}
B756d2f:{NFSU2_TR(0x756d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756d35:{NFSU2_TR(0x756d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756d3b:{NFSU2_TR(0x756d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756d41:{NFSU2_TR(0x756d41);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756d42:{NFSU2_TR(0x756d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B756d45:{NFSU2_TR(0x756d45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756d46:{NFSU2_TR(0x756d46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756d47:{NFSU2_TR(0x756d47);
u8 U[4];
__builtin_memmove((U+0),gp(0x783234),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756d4dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B756d4d:L756d4d:{c.instructions+=2;NFSU2_TR(0x756d4d);
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
B756d4f:{NFSU2_TR(0x756d4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756d72;}}
}
B756d51:L756d51:{c.instructions+=1;NFSU2_TR(0x756d51);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756d57ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B756d57:L756d57:{c.instructions+=2;NFSU2_TR(0x756d57);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x3e5ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3e5ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x3e5ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B756d5c:{NFSU2_TR(0x756d5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756d72;}}
}
B756d5e:L756d5e:{c.instructions+=7;NFSU2_TR(0x756d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B756d61:{NFSU2_TR(0x756d61);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756d63:{NFSU2_TR(0x756d63);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B756d69:{NFSU2_TR(0x756d69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756d6a:{NFSU2_TR(0x756d6a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756d6b:{NFSU2_TR(0x756d6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756d6c:{NFSU2_TR(0x756d6c);
u8 U[4];
__builtin_memmove((U+0),gp(0x783264),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756d72ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B756d72:L756d72:{c.instructions+=3;NFSU2_TR(0x756d72);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756d78:{NFSU2_TR(0x756d78);
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
B756d7a:{NFSU2_TR(0x756d7a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L756d83;}}
}
B756d7c:L756d7c:{c.instructions+=2;NFSU2_TR(0x756d7c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B756d7e:{NFSU2_TR(0x756d7e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756c0au);}goto L756c0a;}
}
B756d83:L756d83:{c.instructions+=4;NFSU2_TR(0x756d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B756d89:{NFSU2_TR(0x756d89);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756d8b:{NFSU2_TR(0x756d8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756d8c:{NFSU2_TR(0x756d8c);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756d92ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B756d92:L756d92:{c.instructions+=2;NFSU2_TR(0x756d92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x102ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B756d97:{NFSU2_TR(0x756d97);
if(r1(R+518)){{goto L756e4c;}}
}
B756d9d:L756d9d:{c.instructions+=12;NFSU2_TR(0x756d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B756da0:{NFSU2_TR(0x756da0);
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
B756da2:{NFSU2_TR(0x756da2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B756da5:{NFSU2_TR(0x756da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756dab:{NFSU2_TR(0x756dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756db1:{NFSU2_TR(0x756db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756db7:{NFSU2_TR(0x756db7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B756dbd:{NFSU2_TR(0x756dbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756dbe:{NFSU2_TR(0x756dbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B756dc4:{NFSU2_TR(0x756dc4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756dc5:{NFSU2_TR(0x756dc5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756dc6:{NFSU2_TR(0x756dc6);
u8 U[4];
__builtin_memmove((U+0),gp(0x783260),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756dccull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B756dcc:L756dcc:{c.instructions+=2;NFSU2_TR(0x756dcc);
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
B756dce:{NFSU2_TR(0x756dce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756ddd;}}
}
B756dd0:L756dd0:{c.instructions+=1;NFSU2_TR(0x756dd0);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756dd6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B756dd6:L756dd6:{c.instructions+=2;NFSU2_TR(0x756dd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3e5ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B756ddb:{NFSU2_TR(0x756ddb);
if(r1(R+518)){{goto L756e4c;}}
}
B756ddd:L756ddd:{c.instructions+=2;NFSU2_TR(0x756ddd);
w4(R+20,u32(0x1ull));
}
B756de2:{NFSU2_TR(0x756de2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756c10u);}goto L756c10;}
}
B756de7:L756de7:{c.instructions+=6;NFSU2_TR(0x756de7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756deb:{NFSU2_TR(0x756deb);
__builtin_memmove((R+4),(R+20),4);
}
B756ded:{NFSU2_TR(0x756ded);
__builtin_memmove((R+8),(R+4),4);
}
B756def:{NFSU2_TR(0x756def);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B756df2:{NFSU2_TR(0x756df2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B756df5:{NFSU2_TR(0x756df5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B756df8:L756df8:{c.instructions+=1;NFSU2_TR(0x756df8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L756dfa;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756df8u);}goto L756df8;}
}
B756dfa:L756dfa:{c.instructions+=2;NFSU2_TR(0x756dfa);
__builtin_memmove((R+4),(R+8),4);
}
B756dfc:{NFSU2_TR(0x756dfc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B756dff:L756dff:{c.instructions+=1;NFSU2_TR(0x756dff);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L756e01;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756dffu);}goto L756dff;}
}
B756e01:L756e01:{c.instructions+=3;NFSU2_TR(0x756e01);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B756e04:{NFSU2_TR(0x756e04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B756e06:{NFSU2_TR(0x756e06);
u8 U[4];
__builtin_memmove((U+0),gp(0x78320c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756e0cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B756e0c:L756e0c:{c.instructions+=8;NFSU2_TR(0x756e0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B756e10:{NFSU2_TR(0x756e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756e13:{NFSU2_TR(0x756e13);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756e17:{NFSU2_TR(0x756e17);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B756e19:{NFSU2_TR(0x756e19);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B756e1c:{NFSU2_TR(0x756e1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B756e1e:{NFSU2_TR(0x756e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756e24:{NFSU2_TR(0x756e24);
if(r1(R+518)){{goto L756e40;}}
}
B756e26:L756e26:{c.instructions+=5;NFSU2_TR(0x756e26);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756e2a:{NFSU2_TR(0x756e2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B756e2e:{NFSU2_TR(0x756e2e);
__builtin_memmove((R+8),(R+4),4);
}
B756e30:{NFSU2_TR(0x756e30);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B756e33:{NFSU2_TR(0x756e33);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B756e37:L756e37:{c.instructions+=1;NFSU2_TR(0x756e37);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L756e39;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756e37u);}goto L756e37;}
}
B756e39:L756e39:{c.instructions+=2;NFSU2_TR(0x756e39);
__builtin_memmove((R+4),(R+8),4);
}
B756e3b:{NFSU2_TR(0x756e3b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B756e3e:L756e3e:{c.instructions+=1;NFSU2_TR(0x756e3e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L756e40;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756e3eu);}goto L756e3e;}
}
B756e40:L756e40:{c.instructions+=6;NFSU2_TR(0x756e40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B756e41:{NFSU2_TR(0x756e41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B756e42:{NFSU2_TR(0x756e42);
w4(R+0,u32(0x1ull));
}
B756e47:{NFSU2_TR(0x756e47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B756e48:{NFSU2_TR(0x756e48);
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
B756e4b:{NFSU2_TR(0x756e4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B756e4c:L756e4c:{c.instructions+=7;NFSU2_TR(0x756e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756e52:{NFSU2_TR(0x756e52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B756e53:{NFSU2_TR(0x756e53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B756e54:{NFSU2_TR(0x756e54);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B756e56:{NFSU2_TR(0x756e56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B756e57:{NFSU2_TR(0x756e57);
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
B756e5a:{NFSU2_TR(0x756e5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B756e60:L756e60:{c.instructions+=5;NFSU2_TR(0x756e60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756e61:{NFSU2_TR(0x756e61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756e62:{NFSU2_TR(0x756e62);
__builtin_memmove((R+24),(R+0),4);
}
B756e64:{NFSU2_TR(0x756e64);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B756e66:{NFSU2_TR(0x756e66);
if(r1(R+518)){{goto L756f26;}}
}
B756e6c:L756e6c:{c.instructions+=8;NFSU2_TR(0x756e6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+20),(U+0),4);
}
B756e6e:{NFSU2_TR(0x756e6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756e74:{NFSU2_TR(0x756e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1908ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B756e7a:{NFSU2_TR(0x756e7a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B756e7d:{NFSU2_TR(0x756e7d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B756e7f:{NFSU2_TR(0x756e7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B756e82:{NFSU2_TR(0x756e82);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B756e84:{NFSU2_TR(0x756e84);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L756e8c;}}
}
B756e86:L756e86:{c.instructions+=4;NFSU2_TR(0x756e86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B756e87:{NFSU2_TR(0x756e87);
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
B756e8a:{NFSU2_TR(0x756e8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B756e8b:{NFSU2_TR(0x756e8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B756e8c:L756e8c:{c.instructions+=17;NFSU2_TR(0x756e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B756e92:{NFSU2_TR(0x756e92);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B756e95:{NFSU2_TR(0x756e95);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B756e97:{NFSU2_TR(0x756e97);
u8 U[12];
w4(U+0,u32(u32(u32(0x908ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B756e9e:{NFSU2_TR(0x756e9e);
u8 U[1];
w1(U+0,u8(0x47ull));
s1(u32(r4(R+0)),r1(U+0));
}
B756ea1:{NFSU2_TR(0x756ea1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(U+4,u8(0x53ull));
s1(u32(r4(U+0)),r1(U+4));
}
B756ea5:{NFSU2_TR(0x756ea5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B756ea7:{NFSU2_TR(0x756ea7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B756eaa:{NFSU2_TR(0x756eaa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B756eac:{NFSU2_TR(0x756eac);
w1(R+4,u8(~u32(r1(R+4))));
}
B756eae:{NFSU2_TR(0x756eae);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B756eb1:{NFSU2_TR(0x756eb1);
__builtin_memmove((R+4),(R+20),4);
}
B756eb3:{NFSU2_TR(0x756eb3);
__builtin_memmove((R+8),(R+4),4);
}
B756eb5:{NFSU2_TR(0x756eb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B756eb8:{NFSU2_TR(0x756eb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756eb9:{NFSU2_TR(0x756eb9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B756ebc:{NFSU2_TR(0x756ebc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B756ebf:L756ebf:{c.instructions+=1;NFSU2_TR(0x756ebf);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L756ec1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756ebfu);}goto L756ebf;}
}
B756ec1:L756ec1:{c.instructions+=2;NFSU2_TR(0x756ec1);
__builtin_memmove((R+4),(R+8),4);
}
B756ec3:{NFSU2_TR(0x756ec3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B756ec6:L756ec6:{c.instructions+=1;NFSU2_TR(0x756ec6);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L756ec8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756ec6u);}goto L756ec6;}
}
B756ec8:L756ec8:{c.instructions+=4;NFSU2_TR(0x756ec8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B756eca:{NFSU2_TR(0x756eca);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B756ecc:{NFSU2_TR(0x756ecc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B756ecf:{NFSU2_TR(0x756ecf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L756ee0;}}
}
B756ed1:L756ed1:{c.instructions+=1;NFSU2_TR(0x756ed1);
__builtin_memmove((R+24),(R+20),4);
}
B756ed3:L756ed3:{c.instructions+=6;NFSU2_TR(0x756ed3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w2(R+28,u16(r1(U+0)));
}
B756ed7:{NFSU2_TR(0x756ed7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B756eda:{NFSU2_TR(0x756eda);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B756edc:{NFSU2_TR(0x756edc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B756edd:{NFSU2_TR(0x756edd);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B756ede:{NFSU2_TR(0x756ede);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756ed3u);}goto L756ed3;}}
}
B756ee0:L756ee0:{c.instructions+=8;NFSU2_TR(0x756ee0);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B756ee4:{NFSU2_TR(0x756ee4);
u8 U[13];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+5),1);
s1(u32(r4(U+8)),r1(U+12));
}
B756ee8:{NFSU2_TR(0x756ee8);
u8 U[13];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0xdull));
s1(u32(r4(U+8)),r1(U+12));
}
B756eed:{NFSU2_TR(0x756eed);
u8 U[13];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0xaull));
s1(u32(r4(U+8)),r1(U+12));
}
B756ef2:{NFSU2_TR(0x756ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756ef8:{NFSU2_TR(0x756ef8);
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
B756efa:{NFSU2_TR(0x756efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B756efb:{NFSU2_TR(0x756efb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L756f09;}}
}
B756efd:L756efd:{c.instructions+=4;NFSU2_TR(0x756efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756f00:{NFSU2_TR(0x756f00);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756f02:{NFSU2_TR(0x756f02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756f03:{NFSU2_TR(0x756f03);
u8 U[4];
__builtin_memmove((U+0),gp(0x783268),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756f09ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B756f09:L756f09:{c.instructions+=5;NFSU2_TR(0x756f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756f0f:{NFSU2_TR(0x756f0f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B756f12:{NFSU2_TR(0x756f12);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+20)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+20)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B756f14:{NFSU2_TR(0x756f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756f1a:{NFSU2_TR(0x756f1a);
u8 U[4];
__builtin_memmove((U+0),gp(0x78320c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756f20ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B756f20:L756f20:{c.instructions+=1;NFSU2_TR(0x756f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1914ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756f26:L756f26:{c.instructions+=3;NFSU2_TR(0x756f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756f2c:{NFSU2_TR(0x756f2c);
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
B756f2e:{NFSU2_TR(0x756f2e);
if(r1(R+518)){{goto L756f87;}}
}
B756f30:L756f30:{c.instructions+=4;NFSU2_TR(0x756f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B756f36:{NFSU2_TR(0x756f36);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756f38:{NFSU2_TR(0x756f38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756f39:{NFSU2_TR(0x756f39);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756f3full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B756f3f:L756f3f:{c.instructions+=2;NFSU2_TR(0x756f3f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x102ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x102ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x102ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B756f44:{NFSU2_TR(0x756f44);
if(r1(R+518)){{goto L756f87;}}
}
B756f46:L756f46:{c.instructions+=13;NFSU2_TR(0x756f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B756f4c:{NFSU2_TR(0x756f4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B756f52:{NFSU2_TR(0x756f52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756f53:{NFSU2_TR(0x756f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B756f59:{NFSU2_TR(0x756f59);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B756f5f:{NFSU2_TR(0x756f5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756f60:{NFSU2_TR(0x756f60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756f61:{NFSU2_TR(0x756f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B756f64:{NFSU2_TR(0x756f64);
u8 U[45];
w4(U+37,u32(u32(u32(0xbull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B756f67:{NFSU2_TR(0x756f67);
u8 U[12];
w4(U+0,u32(u32(u32(0x908ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B756f6e:{NFSU2_TR(0x756f6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756f6f:{NFSU2_TR(0x756f6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756f70:{NFSU2_TR(0x756f70);
u8 U[4];
__builtin_memmove((U+0),gp(0x783224),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756f76ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B756f76:L756f76:{c.instructions+=2;NFSU2_TR(0x756f76);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B756f7d:{NFSU2_TR(0x756f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B756f87:L756f87:{c.instructions+=4;NFSU2_TR(0x756f87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B756f88:{NFSU2_TR(0x756f88);
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
B756f8a:{NFSU2_TR(0x756f8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B756f8b:{NFSU2_TR(0x756f8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B756f90:L756f90:{c.instructions+=8;NFSU2_TR(0x756f90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x814ull))));
}
B756f96:{NFSU2_TR(0x756f96);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B756f9b:{NFSU2_TR(0x756f9b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B756f9c:{NFSU2_TR(0x756f9c);
__builtin_memmove((R+12),(R+4),4);
}
B756f9e:{NFSU2_TR(0x756f9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x814ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756fa5:{NFSU2_TR(0x756fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756fab:{NFSU2_TR(0x756fab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B756fae:{NFSU2_TR(0x756fae);
if(r1(R+518)){{goto L756fec;}}
}
B756fb0:L756fb0:{c.instructions+=2;NFSU2_TR(0x756fb0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B756fb3:{NFSU2_TR(0x756fb3);
if(r1(R+518)){{goto L756fec;}}
}
B756fb5:L756fb5:{c.instructions+=6;NFSU2_TR(0x756fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B756fbb:{NFSU2_TR(0x756fbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B756fbf:{NFSU2_TR(0x756fbf);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B756fc3:{NFSU2_TR(0x756fc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B756fcb:{NFSU2_TR(0x756fcb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B756fd3:{NFSU2_TR(0x756fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756fd8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x756e60u);}goto L756e60;}
}
B756fd8:L756fd8:{c.instructions+=2;NFSU2_TR(0x756fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B756fe2:{NFSU2_TR(0x756fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B756fec:L756fec:{c.instructions+=4;NFSU2_TR(0x756fec);
u8 U[8];
w4(U+0,u32(u32(u32(0x814ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B756ff3:{NFSU2_TR(0x756ff3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B756ff5:{NFSU2_TR(0x756ff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B756ff6:{NFSU2_TR(0x756ff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x756ffbull));
TAIL_STATIC(0x76115eu,761);
}
B756ffb:L756ffb:{c.instructions+=1;NFSU2_TR(0x756ffb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x814ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x814ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x814ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
TAIL_STATIC(0x757001u,757);
}
XIT:NFSU2_TR_EXIT(0x756,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
